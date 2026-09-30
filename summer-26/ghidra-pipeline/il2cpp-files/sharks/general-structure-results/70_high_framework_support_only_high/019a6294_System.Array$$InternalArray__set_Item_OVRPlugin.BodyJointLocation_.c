/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 019a6294
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__set_Item<OVRPlugin_BodyJointLocation>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5,uint param_6,undefined4 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar1 = PTR_DAT_037f7818;
                    /* try { // try from 019a62c0 to 01aa62c3 has its CatchHandler @ 019a62e4 */
                    /* try { // try from 019a62c4 to 01aa6333 has its CatchHandler @ 019a60f4 */
  if ((DAT_03a22514 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f3ee0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 019a62c0 with catch @ 019a62e4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 019a6274 with catch @ 019a62e8
                        */
    FUN_017fc350(PTR_DAT_037f3ee8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 019a622c with catch @ 019a62f0
                        */
    FUN_017fc350(PTR_DAT_037f3e88);
    FUN_017fc350(PTR_DAT_037f2d40);
    FUN_017fc350(PTR_DAT_037f4370);
    FUN_017fc350(PTR_DAT_037f4350);
    FUN_017fc350(PTR_DAT_037f7820);
    FUN_017fc350(PTR_DAT_037f7828);
                    /* try { // try from 019a6334 to 01aa6337 has its CatchHandler @ 019a6338 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 019a6334 with catch @ 019a6338
                        */
                    /* try { // try from 019a633c to 01aa633f has its CatchHandler @ 019a6348 */
    FUN_017fc350(PTR_DAT_037f7818);
                    /* try { // try from 019a6340 to 01aa634b has its CatchHandler @ 019a60f4 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 019a633c with catch @ 019a6348
                        */
    FUN_017fc350(PTR_DAT_037f7830);
                    /* try { // try from 019a634c to 01aa6403 has its CatchHandler @ 019a634c
                       catch(type#1 @ 00000000) { ... } // from try @ 019a634c with catch @ 019a634c
                       catch(type#1 @ 00000000) { ... } // from try @ 019a6470 with catch @ 019a634c
                       catch(type#1 @ 00000000) { ... } // from try @ 019a6534 with catch @ 019a634c
                        */
    DAT_03a22514 = 1;
  }
  lVar2 = thunk_FUN_01861bbc(*(undefined8 *)puVar1);
  FUN_02c108e4(lVar2,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  puVar5 = (undefined8 *)(lVar2 + 0x10);
  *puVar5 = param_4;
  thunk_FUN_0188fd20(puVar5,param_4);
  if (0.0 < (float)param_1) {
    uVar3 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f3ee0);
    FUN_020c0800(uVar3,lVar2,*(undefined8 *)PTR_DAT_037f7820,0);
    uVar4 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f3ee8);
    FUN_020c1aec(uVar4,lVar2,*(undefined8 *)PTR_DAT_037f7828,0);
    if (*(int *)(*(long *)PTR_DAT_037f3e88 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar3 = System_Array__InternalArray__set_Item<Texture_t>
                      (param_1,param_2,param_3,uVar3,uVar4,param_5,1,param_6 & 1,param_7);
    uVar3 = FUN_01bd4328(uVar3,*puVar5,*(undefined8 *)PTR_DAT_037f4350);
    uVar3 = FUN_01b26490(uVar3,4,*(undefined8 *)PTR_DAT_037f4370);
    return uVar3;
  }
  if (DAT_03a22097 == '\0') {
                    /* try { // try from 019a646c to 01aa646f has its CatchHandler @ 019a64ec */
                    /* try { // try from 019a6470 to 01aa6527 has its CatchHandler @ 019a634c */
    FUN_017fc350(PTR_DAT_037f44d8);
    DAT_03a22097 = '\x01';
  }
  if (0 < **(int **)(*(long *)PTR_DAT_037f44d8 + 0xb8)) {
    if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_033bdab0(*(undefined8 *)PTR_DAT_037f7830,0);
  }
  return 0;
}


