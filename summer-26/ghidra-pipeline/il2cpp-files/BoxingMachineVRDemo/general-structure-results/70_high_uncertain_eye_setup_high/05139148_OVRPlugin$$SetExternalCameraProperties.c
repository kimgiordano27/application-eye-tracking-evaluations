/*
FUNCTION_NAME: OVRPlugin$$SetExternalCameraProperties
ENTRY_POINT: 05139148
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetExternalCameraProperties(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long unaff_x21;
  long *unaff_x24;
  long *plVar7;
  
  do {
    in_x9 = in_x9 + -1;
    piVar6 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_02d9a5d4();
      goto LAB_05139170;
    }
    plVar7 = (long *)(in_x10 + 2);
    in_x10 = piVar6;
  } while (*plVar7 != param_3);
  puVar1 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
LAB_05139170:
  uVar2 = (*(code *)*puVar1)();
  lVar3 = FUN_05138cdc(uVar2,uVar2);
  lVar4 = *unaff_x24;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar4);
    lVar4 = *unaff_x24;
  }
  plVar7 = (long *)**(undefined8 **)(lVar4 + 0xb8);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06781680) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_05139204;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_06781680,0);
LAB_05139204:
  uVar5 = (*(code *)*puVar1)(plVar7,lVar3);
  if ((uVar5 & 1) == 0) {
    FUN_051389a0();
    if (lVar3 != 0) {
      FUN_05138d5c();
    }
  }
  else if (*(long *)(unaff_x21 + 0x18) != 0) {
    FUN_048956dc();
  }
  FUN_04388340();
  return;
}


