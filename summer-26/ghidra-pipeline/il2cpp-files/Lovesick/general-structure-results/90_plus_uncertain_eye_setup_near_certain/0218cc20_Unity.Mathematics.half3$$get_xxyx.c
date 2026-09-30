/*
FUNCTION_NAME: Unity.Mathematics.half3$$get_xxyx
ENTRY_POINT: 0218cc20
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


void Unity_Mathematics_half3__get_xxyx(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  if ((*(byte *)(unaff_x20 + 0x461) & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Array_FindIndex<OVRPlugin_BoneCapsule>__);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<float3>__);
    thunk_FUN_00d48444(PTR_DAT_033ed3a0);
    thunk_FUN_00d48444(Method_Unity_Mathematics_math_select_shuffle_component__);
    thunk_FUN_00d48444(System_Xml_Schema_SchemaCollectionCompiler_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x461) = 1;
  }
  puVar4 = Method_Unity_Mathematics_math_select_shuffle_component__;
  puVar3 = Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<float3>__;
  puVar2 = System_Xml_Schema_SchemaCollectionCompiler_TypeInfo;
  puVar1 = PTR_DAT_033ed3a0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000020 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x28), lVar5 != 0)) {
    FUN_0129b5d0(lVar5,&stack0x00000040,
                 *(undefined8 *)Method_System_Array_FindIndex<OVRPlugin_BoneCapsule>__);
    while (uVar6 = FUN_012bf140(&stack0x00000040,*(undefined8 *)puVar1), (uVar6 & 1) != 0) {
      FUN_00c61330(&stack0x00000008,&stack0x00000040,*(undefined8 *)puVar4);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      auVar8 = FUN_00c61430(&stack0x00000020,*(undefined8 *)puVar2);
      uVar7 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(auVar8._0_8_,auVar8._8_8_,0);
      Unity_Mathematics_half3__get_yxxz(param_1,uVar7);
    }
    FUN_012bf83c(&stack0x00000040,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


