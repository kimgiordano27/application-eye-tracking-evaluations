/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.BoneCapsule>
ENTRY_POINT: 019a652c
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
System_Array__InternalArray__set_Item<OVRPlugin_BoneCapsule>
          (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6,undefined4 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 unaff_w19;
  uint unaff_w21;
  long unaff_x23;
  undefined8 *puVar4;
  undefined8 *unaff_x24;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 019a6528 with catch @ 019a652c
                        */
                    /* try { // try from 019a6530 to 01aa6533 has its CatchHandler @ 019a653c */
                    /* try { // try from 019a6534 to 01aa653f has its CatchHandler @ 019a634c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 019a6530 with catch @ 019a653c
                        */
                    /* try { // try from 019a6540 to 01aa65db has its CatchHandler @ 019a6540
                       catch(type#1 @ 00000000) { ... } // from try @ 019a6540 with catch @ 019a6540
                       catch(type#1 @ 00000000) { ... } // from try @ 019a65e0 with catch @ 019a6540
                       catch(type#1 @ 00000000) { ... } // from try @ 019a6688 with catch @ 019a6540
                        */
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f3ee0);
    FUN_017fc350(PTR_DAT_037f3ee8);
    FUN_017fc350(PTR_DAT_037f3e88);
    FUN_017fc350(PTR_DAT_037f2d40);
    FUN_017fc350(PTR_DAT_037f4370);
    FUN_017fc350(PTR_DAT_037f4350);
    FUN_017fc350(PTR_DAT_037f7840);
    FUN_017fc350(PTR_DAT_037f7848);
    FUN_017fc350(PTR_DAT_037f7838);
    FUN_017fc350(PTR_DAT_037f7830);
    *(undefined1 *)(unaff_x23 + 0x515) = 1;
  }
  lVar1 = thunk_FUN_01861bbc(*unaff_x24);
  FUN_02c108e4(lVar1,0);
                    /* try { // try from 019a65dc to 01aa65df has its CatchHandler @ 019a6640 */
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
                    /* try { // try from 019a65e0 to 01aa667b has its CatchHandler @ 019a6540 */
  puVar4 = (undefined8 *)(lVar1 + 0x10);
  *puVar4 = param_6;
  thunk_FUN_0188fd20(puVar4,param_6);
  if (0.0 < (float)param_2) {
    uVar2 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f3ee0);
    FUN_020c0800(uVar2,lVar1,*(undefined8 *)PTR_DAT_037f7840,0);
    uVar3 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f3ee8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 019a65dc with catch @ 019a6640
                        */
    FUN_020c1aec(uVar3,lVar1,*(undefined8 *)PTR_DAT_037f7848,0);
    if (*(int *)(*(long *)PTR_DAT_037f3e88 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar2 = FUN_0199e448(param_2,param_3,param_4,param_5,uVar2,uVar3,param_7,unaff_w21 & 1,unaff_w19
                        );
    uVar2 = FUN_01bd4328(uVar2,*puVar4,*(undefined8 *)PTR_DAT_037f4350);
    uVar2 = FUN_01b26490(uVar2,4,*(undefined8 *)PTR_DAT_037f4370);
    return uVar2;
  }
  if (DAT_03a22097 == '\0') {
    FUN_017fc350(PTR_DAT_037f44d8);
    DAT_03a22097 = '\x01';
  }
  if (0 < **(int **)(*(long *)PTR_DAT_037f44d8 + 0xb8)) {
                    /* try { // try from 019a6728 to 01aa6733 has its CatchHandler @ 019a6798 */
    if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
                    /* try { // try from 019a6734 to 01aa67cf has its CatchHandler @ 019a6694 */
    FUN_033bdab0(*(undefined8 *)PTR_DAT_037f7830,0);
  }
  return 0;
}


