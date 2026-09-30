/*
FUNCTION_NAME: Oculus.Interaction.PoseDetection.JointDeltaProvider$$GetPrevJointPose
ENTRY_POINT: 018d1cdc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


long * Oculus_Interaction_PoseDetection_JointDeltaProvider__GetPrevJointPose(void)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(
                    Method_UnityEngine_ProBuilder_MeshOperations_ElementSelection_<>c_<GetEdgeLoopInternal>b__14_0__
                    );
  *(undefined1 *)(unaff_x21 + 0xa2c) = 1;
  plVar3 = (long *)thunk_FUN_00d62348(*unaff_x22);
  if ((plVar3 == (long *)0x0) || (FUN_01cfe144(plVar3,0), unaff_x19 == (long *)0x0)) {
LAB_018d1e74:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar4 = (**(code **)(*unaff_x19 + 0x288))();
  puVar1 = 
  Method_UnityEngine_ProBuilder_MeshOperations_ElementSelection_<>c_<GetEdgeLoopInternal>b__14_0__;
  while ((uVar4 & 1) != 0) {
                    /* try { // try from 018d1d30 to 019d1d77 has its CatchHandler @ 018d1d30
                       catch() { ... } // from try @ 018d1d30 with catch @ 018d1d30
                       catch() { ... } // from try @ 018d1d88 with catch @ 018d1d30
                       catch() { ... } // from try @ 018d1dcc with catch @ 018d1d30
                       catch() { ... } // from try @ 018d1e50 with catch @ 018d1d30 */
    iVar2 = (**(code **)(*unaff_x19 + 0x238))();
    if (iVar2 == 4) {
      plVar5 = (long *)(**(code **)(*unaff_x19 + 0x248))();
      if (plVar5 == (long *)0x0) goto LAB_018d1e74;
                    /* try { // try from 018d1d78 to 019d1d7b has its CatchHandler @ 018d1d98 */
      uVar7 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
                    /* try { // try from 018d1d7c to 019d1d87 has its CatchHandler @ 018d1d9c */
                    /* try { // try from 018d1d88 to 019d1db3 has its CatchHandler @ 018d1d30 */
      uVar4 = (**(code **)(*unaff_x19 + 0x288))();
      if ((uVar4 & 1) == 0) break;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 018d1d78 with catch @ 018d1d98
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 018d1d7c with catch @ 018d1d9c
                        */
      uVar8 = FUN_018d1b3c();
      lVar9 = *plVar3;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_018d1df8;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(plVar3,*(long *)puVar1,1);
LAB_018d1df8:
      (*(code *)*puVar6)(plVar3,uVar7,uVar8,puVar6[1]);
    }
    else if (iVar2 == 0xd) {
      return plVar3;
    }
    uVar4 = (**(code **)(*unaff_x19 + 0x288))();
  }
  thunk_FUN_00d48444(Method_Newtonsoft_Json_Linq_JToken_op_Explicit__);
  uVar7 = FUN_01801b58();
  uVar8 = thunk_FUN_00d48444(PTR_DAT_033eaa38);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar7,uVar8);
}


