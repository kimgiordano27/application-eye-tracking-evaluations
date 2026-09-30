/*
FUNCTION_NAME: OVRPlugin$$SetControllerDrivenHandPosesAreNatural
ENTRY_POINT: 036837a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetControllerDrivenHandPosesAreNatural(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x22;
  
  puVar3 = (undefined8 *)FUN_01ecb238(param_1,param_2,0);
  plVar4 = (long *)(*(code *)*puVar3)();
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ +
                     0x130);
    if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__)) {
      FUN_040766fc(plVar4,0);
      FUN_035b04c8(0);
      unaff_x20 = FUN_0340ebc0();
    }
  }
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0368387c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0368387c:
  lVar6 = (*(code *)*puVar3)();
  if ((lVar6 != 0) &&
     (plVar4 = (long *)thunk_FUN_01ecaf38(lVar6,0),
     puVar2 = Method_Unity_VisualScripting_NumericNegationHandler_<>c_<_ctor>b__0_7__,
     plVar4 != (long *)0x0)) {
    uVar5 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
    uVar5 = FUN_03406290(*(undefined8 *)puVar2,uVar5,0);
    FUN_03405678(unaff_x20,uVar5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


