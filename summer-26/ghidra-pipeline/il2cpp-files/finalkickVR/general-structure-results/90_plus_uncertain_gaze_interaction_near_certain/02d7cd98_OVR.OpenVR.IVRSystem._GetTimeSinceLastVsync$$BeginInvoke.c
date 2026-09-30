/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetTimeSinceLastVsync$$BeginInvoke
ENTRY_POINT: 02d7cd98
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;functionality_gaze_interaction_hits_4
*/


void OVR_OpenVR_IVRSystem__GetTimeSinceLastVsync__BeginInvoke(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *pAVar4;
  ulong *puStack0000000000000000;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *pAStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  
  puStack0000000000000000 =
       (ulong *)Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  uStack0000000000000070 = param_2;
  uStack0000000000000078 = param_1;
  if ((OVRManager_add_InputFocusAcquired_m303EF833FD42193E22AFA2851C1E80861B53F41B::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
              );
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000000);
    OVRManager_add_InputFocusAcquired_m303EF833FD42193E22AFA2851C1E80861B53F41B::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000000);
  lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000000);
  pAStack0000000000000068 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(lVar2 + 0x60);
  do {
    pIVar3 = (Il2CppObject *)
             Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00
                       (pAStack0000000000000068,uStack0000000000000078,0);
    pAVar4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)
             CastclassSealed(pIVar3,*(Il2CppClass **)
                                     Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
                            );
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000000);
    lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000000);
    pAVar4 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>
                       ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(lVar2 + 0x60),pAVar4,
                        pAStack0000000000000068);
    bVar1 = pAVar4 != pAStack0000000000000068;
    pAStack0000000000000068 = pAVar4;
  } while (bVar1);
  return;
}


