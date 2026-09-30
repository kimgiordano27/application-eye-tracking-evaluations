/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 046ca878
PROGRAM: m3ar-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


bool System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_EyeGazeState>(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x22;
  ulong uVar8;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  FUN_0406ab48();
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  iVar2 = thunk_FUN_040405ec();
  if (1 < iVar2) {
                    /* catch(type#1 @ 08931438) { ... } // from try @ 046ca950 with catch @ 046ca970
                        */
    thunk_FUN_04097b88(&DAT_09156768);
    uVar5 = thunk_FUN_0406deb8();
    uVar6 = thunk_FUN_04097b88(&DAT_091daed0);
                    /* try { // try from 046ca98c to 047ca98f has its CatchHandler @ 046ca9ac */
                    /* try { // try from 046ca990 to 047ca9af has its CatchHandler @ 046ca934 */
    FUN_074f6584(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_04031750(uVar5);
  }
  uVar3 = FUN_074fdcc4();
  if ((int)uVar3 < 1) {
    bVar1 = false;
  }
  else {
    uVar8 = 0;
    bVar1 = true;
    do {
      memcpy(&stack0x00000030,
             (void *)((long)unaff_x22 + uVar8 * *(uint *)(*unaff_x22 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x22 + 0x104));
      in_stack_00000028 = in_stack_00000038;
      in_stack_00000020 = in_stack_00000030;
      thunk_FUN_0406db0c(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000020);
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        FUN_0406aaec(lVar7);
      }
      uVar4 = thunk_FUN_0753e1c0();
      if ((uVar4 & 1) != 0) {
        return bVar1;
      }
      uVar8 = uVar8 + 1;
      bVar1 = uVar8 < uVar3;
    } while (uVar3 != uVar8);
  }
  return bVar1;
}


