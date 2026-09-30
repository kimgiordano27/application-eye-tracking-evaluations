/*
FUNCTION_NAME: FUN_0602bca8
ENTRY_POINT: 0602bca8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_0602bca8(long param_1,undefined4 param_2,long param_3,long param_4,undefined4 param_5,
                 long param_6,undefined4 param_7,uint param_8,undefined4 param_9,long param_10,
                 undefined4 param_11,long param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  ulong local_68;
  
  if ((DAT_06b866c5 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06769120);
    FUN_02d6084c(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleBackgroundPosition,_BackgroundPosition>__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleBackgroundRepeat,_BackgroundRepeat>__
                );
    FUN_02d6084c(
                Method_UnityEngine_Rendering_RenderGraphModule_IUnsafeRenderGraphBuilder_SetRenderFunc<PostProcessPass_DoFBokehPassData>__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleList<TimeValue>,_List<TimeValue>>__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleBackgroundSize,_BackgroundSize>__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleColor,_Color>__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleCursor,_Cursor>__
                );
    FUN_02d6084c(PTR_DAT_06786388);
    FUN_02d6084c(PTR_DAT_067866a0);
    DAT_06b866c5 = 1;
  }
  puVar1 = 
  Method_UnityEngine_Rendering_RenderGraphModule_IUnsafeRenderGraphBuilder_SetRenderFunc<PostProcessPass_DoFBokehPassData>__
  ;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0607bab4(0,*(undefined8 *)PTR_DAT_067866a0,0);
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0607bab4(0,*(undefined8 *)PTR_DAT_06786388,0);
  }
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0607bab4(param_1,*(undefined8 *)PTR_DAT_067866a0,0);
    }
    if (param_3 != 0) {
      lVar4 = *(long *)(param_3 + 0x10);
      if (lVar4 != 0) {
        if (param_4 == 0) {
          local_70 = 0;
          local_68 = 0;
        }
        else {
          local_70 = param_4 + 0x20;
          local_68 = *(ulong *)(param_4 + 0x18) & 0xffffffff;
        }
        uVar2 = FUN_041ba7c0(&local_70,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleBackgroundSize,_BackgroundSize>__
                            );
        FUN_0607f508(&local_80,uVar2,local_68 & 0xffffffff,0);
        if (param_6 == 0) {
          local_88 = 0;
        }
        else {
          local_88 = *(undefined8 *)(param_6 + 0x10);
        }
        if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
          FUN_02d9a33c();
        }
        uVar2 = 0;
        if (param_10 != 0) {
          uVar2 = *(undefined8 *)(param_10 + 0x10);
        }
        if (*(long *)(*(long *)
                       Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleList<TimeValue>,_List<TimeValue>>__
                     + 0x38) == 0) {
          FUN_02d9a33c();
        }
        uVar5 = 0;
        if (param_12 != 0) {
          uVar5 = *(undefined8 *)(param_12 + 0x10);
        }
        if (*(int *)(*(long *)PTR_DAT_06769120 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if (DAT_06b86738 == (code *)0x0) {
          DAT_06b86738 = (code *)FUN_02d60810(
                                             "UnityEngine.Graphics::Internal_DrawMeshInstanced_Injected(System.IntPtr,System.Int32,System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32,System.IntPtr,UnityEngine.Rendering.ShadowCastingMode,System.Boolean,System.Int32,System.IntPtr,UnityEngine.Rendering.LightProbeUsage,System.IntPtr)"
                                             );
        }
        (*DAT_06b86738)(lVar3,param_2,lVar4,&local_80,param_5,local_88,param_7,param_8 & 1,param_9,
                        uVar2,param_11,uVar5);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0607bab4(param_3,*(undefined8 *)PTR_DAT_06786388,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


