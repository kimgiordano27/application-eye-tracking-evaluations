/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03115dd0
PROGRAM: spatialPiano-libil2cpp.so
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
               (undefined8 *param_1,long *param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000018;
  
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03115d98 with catch @ 03115dd4
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03115d88 with catch @ 03115dd8
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03115d58 with catch @ 03115ddc
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03115cd4 with catch @ 03115de0
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03115db0 with catch @ 03115de4
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03115cf4 with catch @ 03115de8
                        */
  uStack0000000000000008 = 0;
  uStack0000000000000010 = 0;
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03115c80 with catch @ 03115dec
                        */
  uVar1 = Newtonsoft_Json_Linq_JArray__FromObject(param_2,0);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03115c9c with catch @ 03115df0
                       catch(type#1 @ 06402238) { ... } // from try @ 03115d20 with catch @ 03115df0
                        */
  if (param_3 < uVar1) {
                    /* try { // try from 03115e08 to 03215e1f has its CatchHandler @ 03115e78 */
    memcpy(&stack0x00000008,
           (void *)((long)param_2 + (ulong)*(uint *)(*param_2 + 0x104) * (long)(int)param_3 + 0x20),
           (ulong)*(uint *)(*param_2 + 0x104));
                    /* try { // try from 03115e20 to 03215e67 has its CatchHandler @ 03115c44 */
    param_1[1] = uStack0000000000000010;
    *param_1 = uStack0000000000000008;
    param_1[2] = in_stack_00000018;
    return;
  }
  thunk_FUN_02f6ef30(&DAT_068ea508);
  uVar2 = thunk_FUN_02f45270();
  uVar3 = thunk_FUN_02f6ef30(&DAT_0695e338);
  FUN_05056bc4(uVar2,uVar3,0);
                    /* try { // try from 03115e68 to 03215e77 has its CatchHandler @ 03115e78 */
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar2,param_4);
}


