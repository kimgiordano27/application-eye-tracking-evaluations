/*
FUNCTION_NAME: FUN_01a77d90
ENTRY_POINT: 01a77d90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2
*/


long FUN_01a77d90(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  if ((DAT_0377cc2c & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Nullable<MRUKAnchor_SceneLabels>_get_Value__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>_Resize__
                      );
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_9218);
    thunk_FUN_00d48444(System_Collections_Generic_List<PersistentCall>_TypeInfo);
    thunk_FUN_00d48444(Method_Mono_Unity_UnityTlsContext_CertificateCallback__);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer<ushort>__ctor__);
    thunk_FUN_00d48444(StringLiteral_3859);
    DAT_0377cc2c = 1;
  }
  puVar3 = StringLiteral_302;
  if (param_1 == 0) {
LAB_01a77f68:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar4 = FUN_0128cc24(param_1,*(undefined8 *)StringLiteral_9218);
  puVar2 = StringLiteral_3859;
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>_Resize__;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02661754(*(undefined8 *)puVar2,0);
  }
  else {
    if (*(int *)(*(long *)
                  Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>_Resize__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_0377cc82 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>_Resize__
                        );
      DAT_0377cc82 = '\x01';
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *(long *)puVar1;
    }
    puVar2 = Method_Sirenix_Serialization_Serializer<ushort>__ctor__;
    pcVar6 = *(char **)(lVar5 + 0xb8);
    if (*pcVar6 != '\0') {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      if (*(int *)(*(long *)Method_System_Nullable<MRUKAnchor_SceneLabels>_get_Value__ + 0xe0) == 0)
      {
        thunk_FUN_00d32864();
      }
      uVar7 = FUN_01a45afc(uVar7,0x1bd94aaf);
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar5 != 0) {
        FUN_01390b98(lVar5,uVar7,
                     *(undefined8 *)Method_Mono_Unity_UnityTlsContext_CertificateCallback__);
        return lVar5;
      }
      goto LAB_01a77f68;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      pcVar6 = *(char **)(*(long *)puVar1 + 0xb8);
    }
    uVar7 = *(undefined8 *)(pcVar6 + 8);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026610e4(uVar7,0);
  }
  return 0;
}


