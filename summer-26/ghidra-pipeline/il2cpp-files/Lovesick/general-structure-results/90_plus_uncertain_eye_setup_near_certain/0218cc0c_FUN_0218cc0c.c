/*
FUNCTION_NAME: FUN_0218cc0c
ENTRY_POINT: 0218cc0c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0218cc0c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_03781461 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Array_FindIndex<OVRPlugin_BoneCapsule>__);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<float3>__);
    thunk_FUN_00d48444(PTR_DAT_033ed3a0);
    thunk_FUN_00d48444(Method_Unity_Mathematics_math_select_shuffle_component__);
    thunk_FUN_00d48444(System_Xml_Schema_SchemaCollectionCompiler_TypeInfo);
    DAT_03781461 = 1;
  }
  puVar4 = Method_Unity_Mathematics_math_select_shuffle_component__;
  puVar3 = Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<float3>__;
  puVar2 = System_Xml_Schema_SchemaCollectionCompiler_TypeInfo;
  puVar1 = PTR_DAT_033ed3a0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_80 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x28), lVar5 != 0)) {
    FUN_0129b5d0(lVar5,&local_60,
                 *(undefined8 *)Method_System_Array_FindIndex<OVRPlugin_BoneCapsule>__);
    while (uVar6 = FUN_012bf140(&local_60,*(undefined8 *)puVar1), (uVar6 & 1) != 0) {
      FUN_00c61330(&local_98,&local_60,*(undefined8 *)puVar4);
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      auVar8 = FUN_00c61430(&local_80,*(undefined8 *)puVar2);
      uVar7 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(auVar8._0_8_,auVar8._8_8_,0);
      Unity_Mathematics_half3__get_yxxz(param_1,uVar7);
    }
    FUN_012bf83c(&local_60,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


