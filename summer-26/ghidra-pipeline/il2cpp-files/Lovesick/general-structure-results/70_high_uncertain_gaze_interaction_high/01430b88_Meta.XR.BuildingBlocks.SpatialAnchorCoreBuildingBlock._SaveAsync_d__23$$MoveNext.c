/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock.<SaveAsync>d__23$$MoveNext
ENTRY_POINT: 01430b88
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;functionality_gaze_interaction_hits_1
*/


bool Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock_<SaveAsync>d__23__MoveNext(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  int iVar9;
  undefined8 *unaff_x21;
  int iVar10;
  long in_stack_00000008;
  undefined8 in_stack_00000018;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                    );
  thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__);
  thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_31__);
  *(undefined1 *)(unaff_x20 + 0x9d3) = 1;
  lVar5 = thunk_FUN_00d62348(*unaff_x21);
  if (lVar5 != 0) {
    FUN_01320e50(lVar5,*(undefined8 *)StringLiteral_1982);
    puVar1 = Method_UnityEngine_Events_UnityEvent<ARObjectPlacementEventArgs>_Invoke__;
    plVar6 = *(long **)(unaff_x19 + 0x10);
    if (plVar6 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar6 + 0x818))(plVar6,*(undefined8 *)(*plVar6 + 0x820));
      FUN_01322050(lVar5,uVar7,*(undefined8 *)puVar1);
      puVar3 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__;
      puVar2 = Method_Unity_Collections_NativeSlice<Vector4>_get_Length__;
      puVar1 = Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
      lVar8 = *(long *)(unaff_x19 + 0x30);
      if (lVar8 != 0) {
        iVar9 = 0;
        do {
          if (*(int *)(lVar8 + 0x18) <= iVar9) {
            return *(int *)(lVar5 + 0x18) == 0;
          }
          if (0 < *(int *)(lVar5 + 0x18)) {
            iVar10 = 0;
            do {
              FUN_0132138c(lVar5,iVar10,&stack0x00000008,*(undefined8 *)puVar3);
              if (in_stack_00000008 == 0) goto LAB_01430cc8;
                    /* try { // try from 01430c64 to 01530c6f has its CatchHandler @ 01431780 */
              iVar4 = FUN_02681c0c(in_stack_00000008,0);
              if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_01430cc8;
                    /* try { // try from 01430c88 to 01530cb3 has its CatchHandler @ 01431d80 */
              FUN_0132138c(*(long *)(unaff_x19 + 0x30),iVar9,(long)&stack0x00000018 + 4,
                           *(undefined8 *)puVar1);
              if (iVar4 == in_stack_00000018._4_4_) {
                    /* try { // try from 01430cb4 to 015311f7 has its CatchHandler @ 01430308 */
                FUN_01324ac8(lVar5,iVar10,*(undefined8 *)puVar2);
                break;
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(int *)(lVar5 + 0x18));
          }
          lVar8 = *(long *)(unaff_x19 + 0x30);
          iVar9 = iVar9 + 1;
        } while (lVar8 != 0);
      }
    }
  }
LAB_01430cc8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


