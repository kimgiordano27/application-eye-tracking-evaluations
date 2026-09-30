/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPlugin.Vector4s>
ENTRY_POINT: 0495d5a8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__IndexOf<OVRPlugin_Vector4s>(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x20;
  undefined8 uVar5;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  long *unaff_x26;
  
  uVar7 = **(undefined8 **)(*unaff_x26 + 0xb8);
  uVar1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092b61e0);
  FUN_05679f64(uVar1,uVar7,*(undefined8 *)PTR_DAT_092b61f0,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x26 + 0xb8) + 0x10);
  *puVar2 = uVar1;
                    /* try { // try from 0495d5f0 to 04a5d617 has its CatchHandler @ 0495d854 */
  thunk_FUN_040ec700(puVar2,uVar1);
  uVar1 = FUN_04fa75c0();
  uVar1 = FUN_04fbecb8(uVar1,*(undefined8 *)PTR_DAT_092b61d8);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar1;
  thunk_FUN_040ec700();
  lVar4 = *(long *)(unaff_x21 + 0x50);
  if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x18))) {
    *(long *)(unaff_x22 + 0x98) = lVar4;
    thunk_FUN_040ec700();
  }
                    /* try { // try from 0495d650 to 04a5d67b has its CatchHandler @ 0495d858 */
  lVar4 = (**(code **)(*unaff_x20 + 0x2f8))();
  if (lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + 0x30);
    if (lVar4 != 0) {
      uVar1 = *(undefined8 *)(lVar4 + 0x30);
      uVar7 = *(undefined8 *)(lVar4 + 0x38);
      uVar5 = *(undefined8 *)(lVar4 + 0x18);
      if ((DAT_0988a4f4 & 1) == 0) {
                    /* try { // try from 0495d68c to 04a5d68f has its CatchHandler @ 0495d834 */
        FUN_04077588(PTR_DAT_092a5160);
        DAT_0988a4f4 = 1;
      }
                    /* try { // try from 0495d698 to 04a5d6b7 has its CatchHandler @ 0495d83c */
      uVar6 = *(undefined8 *)(lVar4 + 0x28);
      uVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092a8c88);
      FUN_04794ce4(uVar3,uVar5,uVar1,uVar7,uVar6,0);
                    /* try { // try from 0495d6c8 to 04a5d6f3 has its CatchHandler @ 0495d840 */
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


