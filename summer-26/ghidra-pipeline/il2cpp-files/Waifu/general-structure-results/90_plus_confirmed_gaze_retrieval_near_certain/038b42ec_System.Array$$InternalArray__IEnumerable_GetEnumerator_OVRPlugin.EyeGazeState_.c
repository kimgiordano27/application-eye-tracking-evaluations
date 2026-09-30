/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.EyeGazeState>
ENTRY_POINT: 038b42ec
PROGRAM: Waifu-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


bool System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_EyeGazeState>
               (long *param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_0338f674(param_3);
  }
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
                    /* try { // try from 038b4314 to 039b4323 has its CatchHandler @ 038b4354 */
  in_stack_00000058 = 0;
  if (1 < *(byte *)(*param_1 + 0x132)) {
                    /* try { // try from 038b4410 to 039b441f has its CatchHandler @ 038b4450 */
    FUN_033d1ba8(&DAT_083d0470);
    uVar3 = thunk_FUN_03398a84();
                    /* try { // try from 038b4428 to 039b442f has its CatchHandler @ 038b444c */
    uVar5 = FUN_033d1ba8(&DAT_08442c08);
                    /* try { // try from 038b4430 to 039b4467 has its CatchHandler @ 038b43b8 */
    FUN_06841a44(uVar3,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar3,param_3);
  }
                    /* try { // try from 038b432c to 039b4333 has its CatchHandler @ 038b4350 */
  uVar2 = FUN_068485f0(param_1,0);
                    /* try { // try from 038b4334 to 039b436b has its CatchHandler @ 038b42bc */
  if ((int)uVar2 < 1) {
    bVar1 = false;
  }
  else {
    uVar7 = 0;
    bVar1 = true;
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 038b432c with catch @ 038b4350
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 038b4314 with catch @ 038b4354
                        */
    do {
      memcpy(&stack0x00000048,(void *)((long)param_1 + uVar7 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
                    /* try { // try from 038b436c to 039b436f has its CatchHandler @ 038b4390 */
                    /* try { // try from 038b4370 to 039b4393 has its CatchHandler @ 038b42bc */
      in_stack_00000038 = in_stack_00000050;
      in_stack_00000030 = in_stack_00000048;
      in_stack_00000040 = in_stack_00000058;
      uVar3 = FUN_03398650(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),&stack0x00000030);
                    /* catch() { ... } // from try @ 038b436c with catch @ 038b4390 */
                    /* try { // try from 038b4394 to 039b439f has its CatchHandler @ 038b43b4 */
      lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                    /* try { // try from 038b43a0 to 039b43ab has its CatchHandler @ 038b42bc */
        lVar6 = FUN_0338f618(lVar6);
      }
                    /* try { // try from 038b43ac to 039b43b3 has its CatchHandler @ 038b43b4 */
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000028 = param_2[2];
                    /* catch(type#2 @ 00000000) { ... } // from try @ 038b4394 with catch @ 038b43b4
                       catch(type#2 @ 00000000) { ... } // from try @ 038b43ac with catch @ 038b43b4
                        */
      in_stack_00000020 = param_2[1];
      in_stack_00000018 = *param_2;
                    /* try { // try from 038b43b8 to 039b440f has its CatchHandler @ 038b43b8
                       catch() { ... } // from try @ 038b43b8 with catch @ 038b43b8
                       catch() { ... } // from try @ 038b4430 with catch @ 038b43b8
                       catch() { ... } // from try @ 038b446c with catch @ 038b43b8
                       catch() { ... } // from try @ 038b449c with catch @ 038b43b8 */
      in_stack_00000008 = lVar6;
      uVar4 = FUN_06891484(&stack0x00000008,uVar3);
      if ((uVar4 & 1) != 0) {
        return bVar1;
      }
      uVar7 = uVar7 + 1;
      bVar1 = uVar7 < uVar2;
    } while (uVar2 != uVar7);
  }
  return bVar1;
}


