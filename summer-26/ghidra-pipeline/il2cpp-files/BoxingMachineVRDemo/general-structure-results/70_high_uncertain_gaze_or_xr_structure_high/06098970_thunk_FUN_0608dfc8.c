/*
FUNCTION_NAME: thunk_FUN_0608dfc8
ENTRY_POINT: 06098970
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;keyword_support
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;eye_or_gaze_keyword_boost_only
*/


void thunk_FUN_0608dfc8(long param_1,long param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  
  if ((DAT_06b88884 & 1) == 0) {
    FUN_02d6084c(Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_get_Item__);
    FUN_02d6084c(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleBackgroundSize,_BackgroundSize>__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleColor,_Color>__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleCursor,_Cursor>__
                );
    FUN_02d6084c(Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONArray>__);
    DAT_06b88884 = 1;
  }
  lStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0607f384(param_1);
    }
    lVar2 = *(long *)(param_2 + 0x10);
    if (lVar2 != 0) {
      if (param_4 == 0) {
        lStack_40 = 0;
        uStack_38 = 0;
      }
      else {
        lStack_40 = param_4 + 0x20;
        uStack_38 = *(ulong *)(param_4 + 0x18) & 0xffffffff;
      }
      uStack_50 = FUN_041ba7c0(&lStack_40,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleBackgroundSize,_BackgroundSize>__
                              );
      uStack_48 = CONCAT44(uStack_48._4_4_,(undefined4)uStack_38);
      if (DAT_06b88a20 == (code *)0x0) {
        DAT_06b88a20 = (code *)FUN_02d60810(
                                           "UnityEngine.Rendering.CommandBuffer::Internal_SetRayTracingMatrixArrayParam_Injected(System.IntPtr,System.IntPtr,System.Int32,UnityEngine.Bindings.ManagedSpanWrapper&)"
                                           );
      }
      (*DAT_06b88a20)(lVar1,lVar2,param_3,&uStack_50);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0607bab4(param_2,*(undefined8 *)Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONArray>__);
}


