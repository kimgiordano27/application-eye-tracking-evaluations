/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 01d83788
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


uint OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  plVar3 = (long *)FUN_00fd8604();
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01022c14(*unaff_x22);
  }
  puVar1 = PTR_DAT_02358388;
  if (plVar3 == unaff_x21) {
                    /* catch() { ... } // from try @ 01d83724 with catch @ 01d837c4
                       try { // try from 01d837c4 to 01e837ef has its CatchHandler @ 01d8305c */
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 01d831ec with catch @ 01d837d0 */
      thunk_FUN_01022c14();
    }
                    /* catch() { ... } // from try @ 01d83248 with catch @ 01d837d4 */
    uVar4 = FUN_01d7ad74();
    uVar5 = FUN_01d79950();
                    /* try { // try from 01d837f0 to 01e837f3 has its CatchHandler @ 01d838c0 */
    uVar2 = FUN_01110908(uVar4,uVar5,*(undefined8 *)puVar1);
    return ~uVar2 >> 0x1f;
  }
  uVar4 = thunk_FUN_010303a8(PTR_DAT_0234bd08);
                    /* try { // try from 01d838e4 to 01e838ef has its CatchHandler @ 01d8305c */
  uVar4 = FUN_00fdc388(uVar4,2);
                    /* try { // try from 01d838f0 to 01e838f7 has its CatchHandler @ 01d838f8 */
  FUN_00e5db80();
                    /* catch() { ... } // from try @ 01d83748 with catch @ 01d838f8
                       catch() { ... } // from try @ 01d83818 with catch @ 01d838f8
                       catch() { ... } // from try @ 01d838b8 with catch @ 01d838f8
                       catch() { ... } // from try @ 01d838f0 with catch @ 01d838f8 */
  uVar5 = (**(code **)(*unaff_x21 + 0x168))();
  FUN_00e5db80(uVar4);
  FUN_00e5e2a8(uVar4,uVar5);
  FUN_00e5e2dc(uVar4,0,uVar5);
  FUN_00e5db80(plVar3);
  uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
  FUN_00e5db80(uVar4);
  FUN_00e5e2a8(uVar4,uVar5);
  FUN_00e5e2dc(uVar4,1,uVar5);
  uVar5 = thunk_FUN_010303a8(PTR_DAT_02358378);
  uVar4 = FUN_01d7c4d8(uVar5,uVar4);
  thunk_FUN_010303a8(PTR_DAT_0234bcd0);
  uVar5 = thunk_FUN_010400dc();
  FUN_01c65ad0(uVar5,uVar4,0);
  uVar4 = thunk_FUN_010303a8(PTR_DAT_023591d8);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar5,uVar4);
}


