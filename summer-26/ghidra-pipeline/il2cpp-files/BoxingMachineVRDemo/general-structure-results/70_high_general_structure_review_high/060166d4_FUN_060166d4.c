/*
FUNCTION_NAME: FUN_060166d4
ENTRY_POINT: 060166d4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_10
*/


void FUN_060166d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined8 param_7,long param_8,
                 undefined4 param_9,undefined4 param_10,uint param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  
  puVar2 = 
  Method_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetRenderFunc<PostProcessPass_PaniniProjectionPassData>__
  ;
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 06016674 with catch @ 060166d4
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 06016650 with catch @ 060166d8
                        */
  uStack_68 = in_stack_00000008;
  local_70 = in_stack_00000000;
  local_60 = param_1;
  uStack_5c = param_2;
  local_58 = param_3;
  uStack_54 = param_4;
  local_48 = param_5;
  uStack_44 = param_6;
  if ((DAT_06b85ee8 & 1) == 0) {
    FUN_02d6084c(
                Method_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetRenderFunc<PostProcessPass_PaniniProjectionPassData>__
                );
    FUN_02d6084c(
                Method_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetRenderFunc<PostProcessPass_PostFXSetupPassData>__
                );
    DAT_06b85ee8 = 1;
  }
  puVar1 = (undefined8 *)
           Method_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetRenderFunc<PostProcessPass_PostFXSetupPassData>__
  ;
  if (*(long *)(*(long *)puVar2 + 0x38) == 0) {
    FUN_02d9a33c();
    puVar1 = (undefined8 *)
             Method_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetRenderFunc<PostProcessPass_PostFXSetupPassData>__
    ;
  }
  uVar3 = 0;
  if (param_8 != 0) {
    uVar3 = *(undefined8 *)(param_8 + 0x10);
  }
  Method_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetRenderFunc<PostProcessPass_PostFXSetupPassData>__
       = (undefined *)puVar1;
  if (DAT_06b85f20 == (code *)0x0) {
    DAT_06b85f20 = (code *)FUN_02d60810(
                                       "UnityEngine.Sprite::CreateSprite_Injected(System.IntPtr,UnityEngine.Rect&,UnityEngine.Vector2&,System.Single,System.UInt32,UnityEngine.SpriteMeshType,UnityEngine.Vector4&,System.Boolean,UnityEngine.SecondarySpriteTexture[])"
                                       );
  }
  uVar3 = (*DAT_06b85f20)(param_7,uVar3,&local_60,&local_48,param_9,param_10,&local_70,param_11 & 1,
                          param_12);
  Unity_Properties_Internal_RectPropertyBag_XProperty__get_IsReadOnly(uVar3,*puVar1);
  return;
}


