/*
FUNCTION_NAME: OVRManager$$get_systemHeadsetTheme
ENTRY_POINT: 06369430
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRManager__get_systemHeadsetTheme
               (undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 in_stack_00000008;
  
  if ((DAT_0825c438 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db5730);
    DAT_0825c438 = 1;
  }
  puVar1 = PTR_DAT_07db5730;
  in_stack_00000008 = 0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar4 = *param_2;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07db5730) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 7) * 0x10 + 0x138);
        goto LAB_063694c0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_0377596c(param_2,*(long *)PTR_DAT_07db5730,7);
LAB_063694c0:
  (*(code *)*puVar2)(param_2,param_3,&stack0x00000008,puVar2[1]);
  uVar3 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType
                    (param_1,in_stack_00000008,param_4);
  lVar4 = *param_2;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_06369538;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_0377596c(param_2,*(long *)puVar1,1);
LAB_06369538:
  (*(code *)*puVar2)(param_2,param_3,uVar3,puVar2[1]);
  return;
}


