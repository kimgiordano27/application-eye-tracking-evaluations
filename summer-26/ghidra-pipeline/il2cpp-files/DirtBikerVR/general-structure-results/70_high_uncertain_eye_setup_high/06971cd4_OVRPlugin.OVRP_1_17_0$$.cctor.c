/*
FUNCTION_NAME: OVRPlugin.OVRP_1_17_0$$.cctor
ENTRY_POINT: 06971cd4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_17_0___cctor(void)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  code *in_x9;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long lVar9;
  
  plVar3 = (long *)(*in_x9)();
  if (plVar3 == (long *)0x0) goto LAB_06971e68;
  uVar4 = (**(code **)(*plVar3 + 0x5b8))(plVar3,*(undefined8 *)(*plVar3 + 0x5c0));
  if ((uVar4 & 1) != 0) {
    plVar3 = (long *)(**(code **)(*unaff_x22 + 0x268))();
    lVar9 = *unaff_x20;
    if ((lVar9 == 0) || (*(undefined4 *)(lVar9 + 0x48) = 0, plVar3 == (long *)0x0))
    goto LAB_06971e68;
    lVar5 = (**(code **)(*plVar3 + 0x6f8))(plVar3,0x18,*(undefined8 *)(*plVar3 + 0x700));
    if (lVar5 == 0) goto LAB_06971e68;
    lVar7 = *unaff_x20;
    *(float *)(lVar9 + 0x4c) = (float)(*(int *)(lVar5 + 0x18) + -1);
    if (lVar7 == 0) goto LAB_06971e68;
    *(undefined4 *)(lVar7 + 0x50) = 0x3f800000;
    puVar2 = PTR_DAT_084883a0;
    if (*(long *)(lVar7 + 0x30) == 0) goto LAB_06971e68;
    lVar9 = *(long *)(*(long *)(lVar7 + 0x30) + 0x100);
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
    FUN_07cb26a0();
    if (lVar9 == 0) goto LAB_06971e68;
    FUN_07cb2770(lVar9,uVar6,0);
    if ((*unaff_x20 == 0) || (lVar9 = *(long *)(*unaff_x20 + 0x38), lVar9 == 0)) goto LAB_06971e68;
    lVar9 = *(long *)(lVar9 + 0x100);
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
    FUN_07cb26a0();
    if (lVar9 == 0) goto LAB_06971e68;
    FUN_07cb2770(lVar9,uVar6,0);
  }
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if (lVar9 != 0) {
    lVar7 = *(long *)(lVar9 + 0x10);
    lVar5 = *unaff_x20;
    lVar8 = *(long *)PTR_DAT_084b72c0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        plVar3 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *plVar3 = lVar5;
        thunk_FUN_03afed3c(plVar3);
      }
      else {
        FUN_04de85b0(lVar9,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      return;
    }
  }
LAB_06971e68:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


