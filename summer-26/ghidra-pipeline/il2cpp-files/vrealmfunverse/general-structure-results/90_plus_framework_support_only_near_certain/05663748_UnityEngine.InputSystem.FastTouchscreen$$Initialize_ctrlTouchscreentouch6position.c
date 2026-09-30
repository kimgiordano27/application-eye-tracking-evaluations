/*
FUNCTION_NAME: UnityEngine.InputSystem.FastTouchscreen$$Initialize_ctrlTouchscreentouch6position
ENTRY_POINT: 05663748
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 144
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_InputSystem_FastTouchscreen__Initialize_ctrlTouchscreentouch6position(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  code *in_x9;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  undefined *puVar8;
  
  plVar1 = (long *)(*in_x9)();
  if (plVar1 == (long *)0x0) {
    uVar3 = thunk_FUN_02ba3594(PTR_DAT_06313048);
    uVar4 = FUN_02b3c908(uVar3,2);
                    /* try { // try from 056637f0 to 057637f3 has its CatchHandler @ 05663830 */
    lVar5 = *unaff_x19;
                    /* try { // try from 056637f4 to 057637f7 has its CatchHandler @ 0566382c */
                    /* try { // try from 056637f8 to 057637fb has its CatchHandler @ 05663650 */
                    /* try { // try from 056637fc to 057637ff has its CatchHandler @ 05663810 */
    FUN_0275e13c(lVar5);
                    /* try { // try from 05663800 to 05763807 has its CatchHandler @ 05663650 */
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
                    /* try { // try from 05663808 to 0576380b has its CatchHandler @ 0566380c */
    FUN_0275e13c(uVar3);
                    /* catch() { ... } // from try @ 05663808 with catch @ 0566380c
                       try { // try from 0566380c to 0576384b has its CatchHandler @ 05663650 */
                    /* catch() { ... } // from try @ 056637fc with catch @ 05663810 */
                    /* catch() { ... } // from try @ 05663794 with catch @ 05663814 */
    plVar1 = (long *)thunk_FUN_02b4c898(uVar3,0);
                    /* catch() { ... } // from try @ 05663740 with catch @ 05663818 */
                    /* catch() { ... } // from try @ 05663770 with catch @ 0566381c */
    FUN_0275e13c();
                    /* catch() { ... } // from try @ 05663720 with catch @ 05663820 */
                    /* catch() { ... } // from try @ 05663764 with catch @ 05663824 */
                    /* catch() { ... } // from try @ 05663714 with catch @ 05663828 */
                    /* catch() { ... } // from try @ 056637f4 with catch @ 0566382c */
                    /* catch() { ... } // from try @ 056637f0 with catch @ 05663830 */
    uVar3 = (**(code **)(*plVar1 + 0x2d8))(plVar1,*(undefined8 *)(*plVar1 + 0x2e0));
    FUN_0275e13c(uVar4);
    FUN_0275a400(uVar4,uVar3);
                    /* try { // try from 0566384c to 0576384f has its CatchHandler @ 0566385c */
    FUN_0275a434(uVar4,0,uVar3);
    puVar8 = 
    Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_Dispose__
    ;
                    /* catch() { ... } // from try @ 0566384c with catch @ 0566385c */
                    /* try { // try from 05663860 to 05763867 has its CatchHandler @ 05663870 */
  }
  else {
    lVar5 = *plVar1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 05663764 to 05763767 has its CatchHandler @ 05663824 */
    if (uVar6 != 0) {
                    /* try { // try from 05663770 to 0576377b has its CatchHandler @ 0566381c */
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)System_Collections_Generic_IDictionary<string,_float>_var) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_056637b8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
                    /* try { // try from 05663794 to 0576379b has its CatchHandler @ 05663814 */
    puVar2 = (undefined8 *)
             FUN_02b7654c(plVar1,*(long *)System_Collections_Generic_IDictionary<string,_float>_var,
                          3);
LAB_056637b8:
    lVar5 = (*(code *)*puVar2)(plVar1);
    if (lVar5 != 0) {
      return;
    }
                    /* try { // try from 05663868 to 05763873 has its CatchHandler @ 05663650 */
                    /* catch() { ... } // from try @ 05663860 with catch @ 05663870 */
    uVar3 = thunk_FUN_02ba3594(PTR_DAT_06313048);
    uVar4 = FUN_02b3c908(uVar3,2);
    lVar5 = *unaff_x19;
    FUN_0275e13c(lVar5);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    FUN_0275e13c(uVar3);
    plVar1 = (long *)thunk_FUN_02b4c898(uVar3,0);
    FUN_0275e13c();
    uVar3 = (**(code **)(*plVar1 + 0x2d8))(plVar1,*(undefined8 *)(*plVar1 + 0x2e0));
    FUN_0275e13c(uVar4);
    FUN_0275a400(uVar4,uVar3);
    FUN_0275a434(uVar4,0,uVar3);
    puVar8 = 
    Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__;
  }
  uVar3 = thunk_FUN_02ba3594(puVar8);
  FUN_0275a400(uVar4,uVar3);
  uVar3 = thunk_FUN_02ba3594(puVar8);
  FUN_0275a434(uVar4,1,uVar3);
  uVar3 = thunk_FUN_02ba3594(
                            Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
                            );
  uVar3 = FUN_04bec334(uVar3,uVar4,0);
  thunk_FUN_02ba3594(PTR_DAT_0631cb60);
  uVar4 = thunk_FUN_02b79644();
  FUN_04d7b3f4(uVar4,uVar3,0);
  uVar3 = thunk_FUN_02ba3594(
                            Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar4,uVar3);
}


