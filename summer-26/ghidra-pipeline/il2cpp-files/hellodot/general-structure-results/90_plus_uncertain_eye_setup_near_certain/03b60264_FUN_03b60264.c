/*
FUNCTION_NAME: FUN_03b60264
ENTRY_POINT: 03b60264
PROGRAM: hellodot-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_03b60264(long param_1,uint param_2,int param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_310 [352];
  undefined1 auStack_1b0 [352];
  
  if (*(uint *)(param_1 + 0x18) < param_2) {
    FUN_04f527b0(0);
  }
                    /* try { // try from 03b602b0 to 03c602ef has its CatchHandler @ 03b602b0
                       catch() { ... } // from try @ 03b602b0 with catch @ 03b602b0
                       catch() { ... } // from try @ 03b60304 with catch @ 03b602b0
                       catch() { ... } // from try @ 03b60340 with catch @ 03b602b0
                       catch() { ... } // from try @ 03b60380 with catch @ 03b602b0 */
  if ((param_3 < 0) || (*(int *)(param_1 + 0x18) - param_3 < (int)param_2)) {
    FUN_04f527dc(0);
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04f428ec(8,0);
  }
  if ((int)param_2 < (int)(param_3 + param_2)) {
    lVar4 = (long)(int)param_2 * 0x160 + 0x20;
    lVar5 = (long)(int)(param_3 + param_2) - (long)(int)param_2;
    do {
      lVar2 = *(long *)(param_1 + 0x10);
                    /* try { // try from 03b602f0 to 03c60303 has its CatchHandler @ 03b60310 */
      if (lVar2 == 0) {
Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopySafe:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (*(uint *)(lVar2 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03b60328 with catch @ 03b60378
                       catch() { ... } // from try @ 03b60368 with catch @ 03b60378 */
        FUN_02ce7c84();
      }
                    /* try { // try from 03b60304 to 03c60327 has its CatchHandler @ 03b602b0 */
      memcpy(auStack_310,(void *)(lVar2 + lVar4),0x160);
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 03b602f0 with catch @ 03b60310
                        */
      if (param_4 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopySafe;
      pcVar6 = *(code **)(param_4 + 0x18);
      uVar3 = *(undefined8 *)(param_4 + 0x40);
                    /* try { // try from 03b60328 to 03c6033f has its CatchHandler @ 03b60378 */
      memcpy(auStack_1b0,auStack_310,0x160);
      uVar1 = (*pcVar6)(uVar3,auStack_1b0,*(undefined8 *)(param_4 + 0x28));
      if ((uVar1 & 1) != 0) {
        return param_2;
      }
                    /* try { // try from 03b60340 to 03c60367 has its CatchHandler @ 03b602b0 */
      param_2 = param_2 + 1;
      lVar5 = lVar5 + -1;
      lVar4 = lVar4 + 0x160;
    } while (lVar5 != 0);
  }
                    /* try { // try from 03b60368 to 03c60377 has its CatchHandler @ 03b60378 */
  return 0xffffffff;
}


