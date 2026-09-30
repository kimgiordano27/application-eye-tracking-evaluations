/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.Quatf>
ENTRY_POINT: 019a67bc
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


undefined8 System_Array__InternalArray__set_Item<OVRPlugin_Quatf>(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  uint unaff_w21;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 *puVar4;
  undefined8 *unaff_x24;
  float unaff_s10;
  
  FUN_017fc350(PTR_DAT_037f3ee0);
                    /* try { // try from 019a67d0 to 01aa67d3 has its CatchHandler @ 019a67d4 */
  FUN_017fc350(PTR_DAT_037f3ee8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 019a67d0 with catch @ 019a67d4
                        */
                    /* try { // try from 019a67d8 to 01aa67db has its CatchHandler @ 019a67e4 */
                    /* try { // try from 019a67dc to 01aa67e7 has its CatchHandler @ 019a6694 */
  FUN_017fc350(PTR_DAT_037f3e88);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 019a67d8 with catch @ 019a67e4
                        */
                    /* try { // try from 019a67e8 to 01aa68d7 has its CatchHandler @ 019a67e8
                       catch(type#1 @ 00000000) { ... } // from try @ 019a67e8 with catch @ 019a67e8
                       catch(type#1 @ 00000000) { ... } // from try @ 019a6928 with catch @ 019a67e8
                       catch(type#1 @ 00000000) { ... } // from try @ 019a698c with catch @ 019a67e8
                        */
  FUN_017fc350(PTR_DAT_037f2d40);
  FUN_017fc350(PTR_DAT_037f4370);
  FUN_017fc350(PTR_DAT_037f4350);
  FUN_017fc350(PTR_DAT_037f7858);
  FUN_017fc350(PTR_DAT_037f7860);
  FUN_017fc350(PTR_DAT_037f7850);
  FUN_017fc350(PTR_DAT_037f7868);
  *(undefined1 *)(unaff_x23 + 0x516) = 1;
  lVar1 = thunk_FUN_01861bbc(*unaff_x24);
  FUN_02c108e4(lVar1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  puVar4 = (undefined8 *)(lVar1 + 0x10);
  *puVar4 = unaff_x22;
  thunk_FUN_0188fd20(puVar4);
  if (0.0 < unaff_s10) {
    uVar2 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f3ee0);
    FUN_020c0800(uVar2,lVar1,*(undefined8 *)PTR_DAT_037f7858,0);
    uVar3 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f3ee8);
    FUN_020c1aec(uVar3,lVar1,*(undefined8 *)PTR_DAT_037f7860,0);
                    /* try { // try from 019a68d8 to 01aa6927 has its CatchHandler @ 019a6948 */
    if (*(int *)(*(long *)PTR_DAT_037f3e88 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar2 = System_Array__InternalArray__set_Item<Texture_t>
                      (uVar2,uVar3,unaff_w20,0,unaff_w21 & 1,unaff_w19);
    uVar2 = FUN_01bd4328(uVar2,*puVar4,*(undefined8 *)PTR_DAT_037f4350);
    uVar2 = FUN_01b26490(uVar2,2,*(undefined8 *)PTR_DAT_037f4370);
    return uVar2;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 019a68d8 with catch @ 019a6948
                        */
  if (DAT_03a22097 == '\0') {
    FUN_017fc350(PTR_DAT_037f44d8);
    DAT_03a22097 = '\x01';
  }
                    /* try { // try from 019a6980 to 01aa6983 has its CatchHandler @ 019a6984 */
  if (0 < **(int **)(*(long *)PTR_DAT_037f44d8 + 0xb8)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 019a6980 with catch @ 019a6984
                        */
                    /* try { // try from 019a6988 to 01aa698b has its CatchHandler @ 019a6994 */
                    /* try { // try from 019a698c to 01aa6997 has its CatchHandler @ 019a67e8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 019a6988 with catch @ 019a6994
                        */
    if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
                    /* try { // try from 019a6998 to 01aa6ad3 has its CatchHandler @ 019a6998
                       catch(type#1 @ 00000000) { ... } // from try @ 019a6998 with catch @ 019a6998
                       catch(type#1 @ 00000000) { ... } // from try @ 019a6adc with catch @ 019a6998
                       catch(type#1 @ 00000000) { ... } // from try @ 019a6b40 with catch @ 019a6998
                        */
      thunk_FUN_01843fdc();
    }
    FUN_033bdab0(*(undefined8 *)PTR_DAT_037f7868,0);
  }
  return 0;
}


