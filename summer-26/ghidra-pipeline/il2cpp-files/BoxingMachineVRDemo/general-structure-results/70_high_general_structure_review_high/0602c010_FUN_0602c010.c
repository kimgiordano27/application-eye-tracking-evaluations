/*
FUNCTION_NAME: FUN_0602c010
ENTRY_POINT: 0602c010
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_0602c010(long param_1,undefined4 param_2,long param_3,undefined8 param_4,long param_5,
                 undefined4 param_6,long param_7,undefined4 param_8)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_06b866c6 & 1) == 0) {
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
    FUN_02d6084c(PTR_DAT_06786388);
    FUN_02d6084c(PTR_DAT_067866a0);
    DAT_06b866c6 = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0607bab4(0,*(undefined8 *)PTR_DAT_067866a0,0);
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0607bab4(0,*(undefined8 *)PTR_DAT_06786388,0);
  }
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0607bab4(param_1,*(undefined8 *)PTR_DAT_067866a0,0);
    }
    if (param_3 != 0) {
      lVar3 = *(long *)(param_3 + 0x10);
      if (lVar3 != 0) {
        uVar4 = 0;
        if (param_5 != 0) {
          uVar4 = *(undefined8 *)(param_5 + 0x10);
        }
        uVar2 = 0;
        if (param_7 != 0) {
          uVar2 = *(undefined8 *)(param_7 + 0x10);
        }
        if (*(long *)(*(long *)
                       Method_UnityEngine_Rendering_RenderGraphModule_IUnsafeRenderGraphBuilder_SetRenderFunc<PostProcessPass_DoFBokehPassData>__
                     + 0x38) == 0) {
          FUN_02d9a33c();
        }
        if (*(long *)(*(long *)
                       Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleList<TimeValue>,_List<TimeValue>>__
                     + 0x38) == 0) {
          FUN_02d9a33c();
        }
        if (*(int *)(*(long *)PTR_DAT_06769120 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if (DAT_06b86740 == (code *)0x0) {
          DAT_06b86740 = (code *)FUN_02d60810(
                                             "UnityEngine.Graphics::Internal_DrawMeshInstancedIndirect_Injected(System.IntPtr,System.Int32,System.IntPtr,UnityEngine.Bounds&,System.IntPtr,System.Int32,System.IntPtr,UnityEngine.Rendering.ShadowCastingMode,System.Boolean,System.Int32,System.IntPtr,UnityEngine.Rendering.LightProbeUsage,System.IntPtr)"
                                             );
        }
                    /* WARNING: Could not recover jumptable at 0x0602c22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_06b86740)(lVar1,param_2,lVar3,param_4,uVar4,param_6,uVar2,param_8);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0607bab4(param_3,*(undefined8 *)PTR_DAT_06786388,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


