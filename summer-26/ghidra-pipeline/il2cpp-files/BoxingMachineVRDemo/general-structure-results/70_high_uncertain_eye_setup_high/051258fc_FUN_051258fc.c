/*
FUNCTION_NAME: FUN_051258fc
ENTRY_POINT: 051258fc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_051258fc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 local_38;
  
  if ((DAT_06b79bfa & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06780f08);
    DAT_06b79bfa = 1;
  }
  puVar1 = PTR_DAT_06780f08;
  local_38 = 0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar4 = *param_2;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06780f08) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 7) * 0x10 + 0x138);
        goto OVRManager__PlatformUIConfirmQuit;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_02d9a5d4(param_2,*(long *)PTR_DAT_06780f08,7);
OVRManager__PlatformUIConfirmQuit:
  (*(code *)*puVar2)(param_2,param_3,&local_38,puVar2[1]);
  uVar3 = FUN_05124258(param_1,local_38,param_4);
  lVar4 = *param_2;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_05125a14;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_02d9a5d4(param_2,*(long *)puVar1,1);
LAB_05125a14:
  (*(code *)*puVar2)(param_2,param_3,uVar3,puVar2[1]);
  return;
}


