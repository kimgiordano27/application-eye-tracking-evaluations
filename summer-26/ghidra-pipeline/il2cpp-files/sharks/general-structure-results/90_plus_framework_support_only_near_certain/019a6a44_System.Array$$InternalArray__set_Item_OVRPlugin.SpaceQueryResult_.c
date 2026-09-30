/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 019a6a44
PROGRAM: sharks-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__set_Item<OVRPlugin_SpaceQueryResult>(void)

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
  float unaff_s12;
  
  FUN_017fc350();
  FUN_017fc350(PTR_DAT_037f3e88);
  FUN_017fc350(PTR_DAT_037f2d40);
  FUN_017fc350(PTR_DAT_037f4370);
  FUN_017fc350(PTR_DAT_037f4350);
  FUN_017fc350(PTR_DAT_037f7878);
  FUN_017fc350(PTR_DAT_037f7880);
  FUN_017fc350(PTR_DAT_037f7870);
  FUN_017fc350(PTR_DAT_037f7868);
  *(undefined1 *)(unaff_x23 + 0x517) = 1;
  lVar1 = thunk_FUN_01861bbc(*unaff_x24);
  FUN_02c108e4(lVar1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  puVar4 = (undefined8 *)(lVar1 + 0x10);
  *puVar4 = unaff_x22;
                    /* try { // try from 019a6ad4 to 01aa6adb has its CatchHandler @ 019a6afc */
  thunk_FUN_0188fd20(puVar4);
                    /* try { // try from 019a6adc to 01aa6b33 has its CatchHandler @ 019a6998 */
  if (0.0 < unaff_s12) {
    uVar2 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f3ee0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 019a6ad4 with catch @ 019a6afc
                        */
    FUN_020c0800(uVar2,lVar1,*(undefined8 *)PTR_DAT_037f7878,0);
    uVar3 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f3ee8);
                    /* try { // try from 019a6b34 to 01aa6b37 has its CatchHandler @ 019a6b38 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 019a6b34 with catch @ 019a6b38
                        */
    FUN_020c1aec(uVar3,lVar1,*(undefined8 *)PTR_DAT_037f7880,0);
                    /* try { // try from 019a6b3c to 01aa6b3f has its CatchHandler @ 019a6b48 */
                    /* try { // try from 019a6b40 to 01aa6b4b has its CatchHandler @ 019a6998 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 019a6b3c with catch @ 019a6b48
                        */
                    /* try { // try from 019a6b4c to 01aa6c6f has its CatchHandler @ 019a6b4c
                       catch(type#1 @ 00000000) { ... } // from try @ 019a6b4c with catch @ 019a6b4c
                       catch(type#1 @ 00000000) { ... } // from try @ 019a6c78 with catch @ 019a6b4c
                       catch(type#1 @ 00000000) { ... } // from try @ 019a6cd8 with catch @ 019a6b4c
                        */
    if (*(int *)(*(long *)PTR_DAT_037f3e88 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar2 = FUN_0199e448(uVar2,uVar3,unaff_w20,unaff_w21 & 1,unaff_w19);
    uVar2 = FUN_01bd4328(uVar2,*puVar4,*(undefined8 *)PTR_DAT_037f4350);
    uVar2 = FUN_01b26490(uVar2,2,*(undefined8 *)PTR_DAT_037f4370);
    return uVar2;
  }
  if (DAT_03a22097 == '\0') {
    FUN_017fc350(PTR_DAT_037f44d8);
    DAT_03a22097 = '\x01';
  }
  if (0 < **(int **)(*(long *)PTR_DAT_037f44d8 + 0xb8)) {
    if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_033bdab0(*(undefined8 *)PTR_DAT_037f7868,0);
  }
  return 0;
}


