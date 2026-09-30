/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest$$IsJarPath
ENTRY_POINT: 013e71bc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


long Meta_WitAi_Requests_VRequest__IsJarPath(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  int iVar5;
  undefined8 *unaff_x21;
  long in_stack_00000008;
  
  thunk_FUN_00d48444(
                    Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_72>_SliceWithStride<Vector4>__
                    );
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Stack<DtdParser_ParseElementOnlyContent_LocalFrame>_get_Count__
                    );
  *(undefined1 *)(unaff_x20 + 0x84c) = 1;
  lVar3 = thunk_FUN_00d62348(*unaff_x21);
  if (lVar3 != 0) {
    FUN_012dd38c(lVar3,*(undefined8 *)
                        Method_UnityEngine_UIElements_VisualTreeUpdater_SetUpdater<VisualTreeBindingsUpdater>__
                );
    puVar2 = StringLiteral_3242;
    puVar1 = 
    Method_System_Collections_Generic_Stack<DtdParser_ParseElementOnlyContent_LocalFrame>_get_Count__
    ;
    lVar4 = *(long *)(unaff_x19 + 0x18);
    if (lVar4 == 0) {
      return lVar3;
    }
    iVar5 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar5) {
        return lVar3;
      }
      FUN_0132138c(lVar4,iVar5,&stack0x00000008,*(undefined8 *)puVar1);
      if (in_stack_00000008 == 0) break;
      FUN_012df150(lVar3,*(undefined8 *)(in_stack_00000008 + 0x10),*(undefined8 *)puVar2);
      lVar4 = *(long *)(unaff_x19 + 0x18);
      iVar5 = iVar5 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


