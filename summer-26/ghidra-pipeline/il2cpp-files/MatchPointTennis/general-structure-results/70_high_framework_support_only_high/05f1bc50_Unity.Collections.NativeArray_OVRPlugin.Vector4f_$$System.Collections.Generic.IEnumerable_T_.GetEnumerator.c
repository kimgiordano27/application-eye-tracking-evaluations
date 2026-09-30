/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 05f1bc50
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 *param_5,long param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  if (param_6 == 0) {
    param_6 = FUN_070de618(*(undefined8 *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 8));
  }
  uVar2 = param_5[6];
  uVar6 = param_5[3];
  uVar5 = param_5[2];
  uVar4 = param_5[5];
  uVar3 = param_5[4];
  uVar8 = param_5[1];
  uVar7 = *param_5;
  lVar1 = *(long *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x48);
                    /* try { // try from 05f1bcb0 to 0601bcb3 has its CatchHandler @ 05f1bcbc */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 05f1bcb4 to 0601bcdf has its CatchHandler @ 05f1b810 */
    lVar1 = FUN_04481fb8();
  }
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 05f1bcb0 with catch @ 05f1bcbc
                        */
  if (*(int *)(lVar1 + 0xe4) == 0) {
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 05f1bbdc with catch @ 05f1bcc0
                        */
    thunk_FUN_044a54b4();
  }
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 05f1bb14 with catch @ 05f1bcc4
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 05f1bb54 with catch @ 05f1bcc8
                        */
  in_stack_00000040 = uVar7;
  in_stack_00000048 = uVar8;
  in_stack_00000050 = uVar5;
  in_stack_00000058 = uVar6;
  in_stack_00000060 = uVar3;
  in_stack_00000068 = uVar4;
  in_stack_00000070 = uVar2;
  FUN_05f1bfa4(param_2,param_3,param_4,&stack0x00000040,param_6,
               *(undefined8 *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x58));
  return;
}


