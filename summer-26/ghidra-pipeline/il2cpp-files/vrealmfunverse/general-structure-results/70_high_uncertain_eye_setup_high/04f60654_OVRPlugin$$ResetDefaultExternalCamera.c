/*
FUNCTION_NAME: OVRPlugin$$ResetDefaultExternalCamera
ENTRY_POINT: 04f60654
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ResetDefaultExternalCamera(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *unaff_x19;
  undefined8 uVar5;
  
  (**(code **)(*unaff_x19 + 0x4b8))();
  (**(code **)(*unaff_x19 + 0x4d8))();
  puVar1 = System_Dynamic_Utils_EmptyReadOnlyCollection<Expression>_TypeInfo;
  if (*(int *)((long)unaff_x19 + 0x84) == 2) {
    lVar2 = *(long *)System_Dynamic_Utils_EmptyReadOnlyCollection<Expression>_TypeInfo;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar2 = *(long *)puVar1;
    }
    puVar4 = *(undefined8 **)(lVar2 + 0xb8);
    if (puVar4[1] == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar5 = *puVar4;
      uVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06314578);
      FUN_049b749c(uVar3,uVar5,*(undefined8 *)System_EmptyArray<Type>_TypeInfo,0);
      puVar4 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *puVar4 = uVar3;
      thunk_FUN_02bb0e9c(puVar4,uVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x04f6072c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x4e8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x04f6074c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x4f8))();
  return;
}


