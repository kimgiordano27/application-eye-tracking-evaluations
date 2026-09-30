/*
FUNCTION_NAME: FUN_0608e8a4
ENTRY_POINT: 0608e8a4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0608e8a4(long param_1,long param_2,long param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulong local_58;
  
  if ((DAT_06b8888a & 1) == 0) {
    FUN_02d6084c(Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_get_Item__);
    FUN_02d6084c(
                Method_UnityEngine_Rendering_RenderGraphModule_IUnsafeRenderGraphBuilder_SetRenderFunc<PostProcessPass_DoFBokehPassData>__
                );
    FUN_02d6084c(Method_System_Security_Cryptography_HashAlgorithm_ValidateTransformBlock__);
    FUN_02d6084c(PTR_DAT_06770f78);
    FUN_02d6084c(Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONArray>__);
    DAT_06b8888a = 1;
  }
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  local_68 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0607bab4(0,*(undefined8 *)Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONArray>__);
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0607f384(param_1);
  }
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0607bab4(param_2,*(undefined8 *)Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONArray>__);
  }
  if (param_3 == 0) {
    local_70 = 0;
    local_68 = 0;
  }
  else if (*(int *)(param_3 + 0x10) == 0) {
    uVar1 = FUN_05060724(1,0);
    local_70 = FUN_0506072c(uVar1,0);
    local_68 = 0;
  }
  else {
    if (DAT_06b78542 == '\0') {
      FUN_02d6084c(PTR_DAT_0676c428);
      DAT_06b78542 = '\x01';
    }
    local_60 = FUN_04e8a8a0(param_3,0);
    local_58 = (ulong)*(uint *)(param_3 + 0x10);
    local_70 = FUN_040f5038(&local_60,
                            *(undefined8 *)
                             Method_System_Security_Cryptography_HashAlgorithm_ValidateTransformBlock__
                           );
    local_68 = CONCAT44(local_68._4_4_,(undefined4)local_58);
  }
  if (*(long *)(*(long *)
                 Method_UnityEngine_Rendering_RenderGraphModule_IUnsafeRenderGraphBuilder_SetRenderFunc<PostProcessPass_DoFBokehPassData>__
               + 0x38) == 0) {
    FUN_02d9a33c();
  }
  uVar1 = 0;
  if (param_7 != 0) {
    uVar1 = *(undefined8 *)(param_7 + 0x10);
  }
  if (DAT_06b88a50 == (code *)0x0) {
    DAT_06b88a50 = (code *)FUN_02d60810(
                                       "UnityEngine.Rendering.CommandBuffer::Internal_DispatchRays_Injected(System.IntPtr,System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&,System.UInt32,System.UInt32,System.UInt32,System.IntPtr)"
                                       );
  }
  (*DAT_06b88a50)(lVar2,lVar3,&local_70,param_4,param_5,param_6,uVar1);
  return;
}


