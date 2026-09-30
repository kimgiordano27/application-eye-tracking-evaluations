/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03186134
PROGRAM: hellodot-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__get_Item<OVRPlugin_EyeGazeState>
               (undefined8 *param_1,undefined1 param_2 [16])

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x21;
  uint unaff_w22;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000008 = param_2._8_8_;
  uStack0000000000000000 = param_2._0_8_;
  uStack0000000000000010 = uStack0000000000000000;
  uStack0000000000000018 = uStack0000000000000008;
  uVar1 = Newtonsoft_Json_Schema_JsonSchemaModel__get_MaximumItems();
  if (unaff_w22 < uVar1) {
    memcpy(&stack0x00000000,
           (void *)((long)unaff_x21 +
                   (ulong)*(uint *)(*unaff_x21 + 0x104) * (long)(int)unaff_w22 + 0x20),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    param_1[1] = uStack0000000000000008;
    *param_1 = uStack0000000000000000;
    param_1[3] = uStack0000000000000018;
    param_1[2] = uStack0000000000000010;
    return;
  }
  thunk_FUN_02c7737c(PTR_DAT_065cb038);
  uVar2 = thunk_FUN_02cea894();
  uVar3 = thunk_FUN_02c7737c(PTR_DAT_065dacd0);
  FUN_04e9ff98(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar2);
}


