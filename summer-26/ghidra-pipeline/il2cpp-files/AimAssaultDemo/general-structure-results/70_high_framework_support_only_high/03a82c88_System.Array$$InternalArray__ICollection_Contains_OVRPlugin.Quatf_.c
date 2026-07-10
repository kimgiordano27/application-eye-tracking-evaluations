/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Quatf>
ENTRY_POINT: 03a82c88
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__ICollection_Contains<OVRPlugin_Quatf>(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 unaff_w19;
  undefined8 *puVar3;
  undefined8 unaff_x21;
  undefined4 uVar4;
  float unaff_s9;
  
  FUN_062855bc(param_1,0);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  puVar3 = (undefined8 *)(param_1 + 0x20);
  *puVar3 = unaff_x21;
  thunk_FUN_037aeb94(puVar3);
  if (0.0 < unaff_s9) {
    if (DAT_082528b7 == '\0') {
      FUN_0373b518(PTR_DAT_07d863f0);
      DAT_082528b7 = '\x01';
    }
    uVar4 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_07d863f0 + 0xb8) + 1);
    *(undefined8 *)(param_1 + 0x10) = **(undefined8 **)(*(long *)PTR_DAT_07d863f0 + 0xb8);
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d87a08);
    FUN_058e414c(uVar1,param_1,*(undefined8 *)PTR_DAT_07d93ed0,0);
    uVar2 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d87a10);
    FUN_058e5348(uVar2,param_1,*(undefined8 *)PTR_DAT_07d93ed8,0);
    if (*(int *)(*(long *)PTR_DAT_07d879b0 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar1 = FUN_03a712cc(uVar1,uVar2,unaff_w19);
    uVar1 = FUN_03fa4fbc(uVar1,*(undefined8 *)PTR_DAT_07d93ec8);
    uVar1 = FUN_0420f09c(uVar1,*puVar3,*(undefined8 *)PTR_DAT_07d87f68);
    return uVar1;
  }
  if (DAT_08252c4e == '\0') {
    FUN_0373b518(PTR_DAT_07d880f0);
    DAT_08252c4e = '\x01';
  }
  if (0 < **(int **)(*(long *)PTR_DAT_07d880f0 + 0xb8)) {
    if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_0755a078(*(undefined8 *)PTR_DAT_07d93ee0,0);
  }
  return 0;
}


