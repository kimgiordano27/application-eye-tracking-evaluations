/*
FUNCTION_NAME: Newtonsoft.Json.Schema.JsonSchemaWriter$$WriteType
ENTRY_POINT: 0179b94c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void Newtonsoft_Json_Schema_JsonSchemaWriter__WriteType(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  thunk_FUN_00d48444(
                    Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_36>_SliceWithStride<Vector3>__
                    );
  thunk_FUN_00d48444(UnityEngine_Rendering_Universal_DecalDrawErrorSystem_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xf2a) = 1;
  uVar2 = FUN_00da4fb8(*unaff_x22,0x40);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  lVar3 = thunk_FUN_00d62348(*unaff_x20);
  puVar1 = Method_System_Collections_Generic_List<UIZone_ArcData>__ctor__;
  if (lVar3 != 0) {
    FUN_01320e50(lVar3,*(undefined8 *)
                        Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_36>_SliceWithStride<Vector3>__
                );
    *(long *)(unaff_x19 + 0x20) = lVar3;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      FUN_01298da0(lVar3,*(undefined8 *)Method_System_Collections_Generic_List<MemberInfo>__ctor__);
      *(long *)(unaff_x19 + 0x28) = lVar3;
      FUN_017b46ec();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


