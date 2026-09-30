/*
FUNCTION_NAME: FUN_01a72fe0
ENTRY_POINT: 01a72fe0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_4
*/


long FUN_01a72fe0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>_Resize__;
  if ((DAT_0377cbed & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Nullable<MRUKAnchor_SceneLabels>_get_Value__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>_Resize__
                      );
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_374);
    thunk_FUN_00d48444(Method_FullSerializer_fsBaseConverter_DeserializeMember<Color>__);
    DAT_0377cbed = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_0377cc82 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>_Resize__
                      );
    DAT_0377cc82 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar1;
  }
  puVar3 = StringLiteral_302;
  puVar2 = Method_FullSerializer_fsBaseConverter_DeserializeMember<Color>__;
  pcVar6 = *(char **)(lVar4 + 0xb8);
  if (*pcVar6 == '\0') {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      pcVar6 = *(char **)(*(long *)puVar1 + 0xb8);
    }
    uVar5 = *(undefined8 *)(pcVar6 + 8);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026610e4(uVar5,0);
    lVar4 = 0;
  }
  else {
    if (*(int *)(*(long *)Method_System_Nullable<MRUKAnchor_SceneLabels>_get_Value__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_01a48258();
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01390b98(lVar4,uVar5,*(undefined8 *)StringLiteral_374);
  }
  return lVar4;
}


