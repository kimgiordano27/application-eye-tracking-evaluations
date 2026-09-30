/*
FUNCTION_NAME: OVRManager$$add_SpaceListSaveComplete
ENTRY_POINT: 0572ebcc
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpaceListSaveComplete(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x25;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x25) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 4) * 0x10 + 0x138);
        goto LAB_0572ec18;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02eea86c();
LAB_0572ec18:
  (*(code *)*puVar1)();
  if (unaff_x19[6] != 0) {
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3aef0);
    FUN_05fcf3e0(uVar2,2,unaff_w20,0);
    (**(code **)(*unaff_x19 + 0x618))();
  }
  if (unaff_x19[8] != 0) {
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d58898);
    FUN_06016cb8(uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x0572ecc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x628))();
    return;
  }
  return;
}


