/*
FUNCTION_NAME: OVRPassthroughColorLut_Create_mC5260BBD9DF0BE1EA796EA75AFFCE60E403D9546
ENTRY_POINT: 02e6bf68
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPassthroughColorLut_Create_mC5260BBD9DF0BE1EA796EA75AFFCE60E403D9546
               (Il2CppObject *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C *pAVar5;
  Il2CppObject *pIVar6;
  void *pvVar7;
  undefined8 uVar8;
  
  puVar2 = Method_System_Collections_Generic_List<Leaderboard>__ctor__;
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRPassthroughColorLut_Create_mC5260BBD9DF0BE1EA796EA75AFFCE60E403D9546::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Leaderboard>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_1008);
    OVRPassthroughColorLut_Create_mC5260BBD9DF0BE1EA796EA75AFFCE60E403D9546::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar3 = OVRManager_IsInsightPassthroughInitialized_m7752AC4A37C80B772E4E66527F3401A6D31D1A1B(0);
  if ((bVar3 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  else {
    OVRPassthroughColorLut_InternalCreate_mF5559F2FDB69604C6368E65A949A54384DB96331(param_1,0);
  }
  bVar3 = OVRPassthroughColorLut_get_IsValid_m1BF49DB1250CAEA7FC29135A8D77007FBE3EACAA(param_1,0);
  if ((bVar3 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar4 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uVar8 = *(undefined8 *)(lVar4 + 0x1c8);
    pAVar5 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C *)
             il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
    Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501
              (pAVar5,param_1,*(long *)StringLiteral_1008,(MethodInfo *)0x0);
    pIVar6 = (Il2CppObject *)
             Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(uVar8,pAVar5,0);
    uVar8 = Castclass(pIVar6,*(Il2CppClass **)puVar2);
    lVar4 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    *(undefined8 *)(lVar4 + 0x1c8) = uVar8;
    lVar4 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    pvVar7 = (void *)Castclass(pIVar6,*(Il2CppClass **)puVar2);
    Il2CppCodeGenWriteBarrier((void **)(lVar4 + 0x1c8),pvVar7);
  }
  return;
}


