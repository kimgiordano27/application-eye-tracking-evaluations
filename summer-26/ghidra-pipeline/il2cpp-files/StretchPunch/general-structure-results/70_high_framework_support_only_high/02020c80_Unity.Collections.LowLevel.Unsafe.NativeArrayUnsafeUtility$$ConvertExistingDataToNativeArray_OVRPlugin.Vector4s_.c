/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Vector4s>
ENTRY_POINT: 02020c80
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector4s>
               (long param_1,int param_2,uint param_3,undefined8 param_4)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
                    /* try { // try from 02020c80 to 02120c8f has its CatchHandler @ 02021874 */
  if (param_1 == 0) {
    thunk_FUN_01dd295c(StringLiteral_1111);
    uVar4 = thunk_FUN_01de27b8();
    uVar5 = thunk_FUN_01dd295c(StringLiteral_1186);
    FUN_032870b8(uVar4,uVar5,0);
  }
  else if (((int)param_3 < 0) || (param_2 < 0)) {
    puVar1 = StringLiteral_1188;
    if (-1 < param_2) {
      puVar1 = StringLiteral_1187;
    }
    uVar5 = thunk_FUN_01dd295c(puVar1);
    thunk_FUN_01dd295c(StringLiteral_1122);
    uVar4 = thunk_FUN_01de27b8();
    uVar3 = thunk_FUN_01dd295c(StringLiteral_1189);
    FUN_0328a910(uVar4,uVar5,uVar3,0);
  }
  else {
    if ((int)param_3 <= *(int *)(param_1 + 0x18) - param_2) {
      if (1 < (int)param_3) {
        param_1 = param_1 + (long)param_2 * 0x10;
        puVar7 = (undefined8 *)(param_1 + 0x30);
        puVar6 = (undefined8 *)(param_1 + (ulong)param_3 * 0x10 + 0x10);
        do {
          uVar3 = puVar7[-1];
          uVar5 = puVar7[-2];
          uVar4 = *puVar6;
          puVar7[-1] = puVar6[1];
          puVar7[-2] = uVar4;
          puVar6[1] = uVar3;
          *puVar6 = uVar5;
          bVar2 = puVar7 < puVar6 + -2;
          puVar7 = puVar7 + 2;
          puVar6 = puVar6 + -2;
        } while (bVar2);
      }
      return;
    }
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar4 = thunk_FUN_01de27b8();
    uVar5 = thunk_FUN_01dd295c(StringLiteral_1190);
    FUN_0328dba4(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar4,param_4);
}


