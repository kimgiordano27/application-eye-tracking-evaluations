/*
FUNCTION_NAME: FUN_05df93dc
ENTRY_POINT: 05df93dc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;ray_interaction;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_2;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2
*/


void FUN_05df93dc(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  
  puVar2 = Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__;
  if ((DAT_06bc3db6 & 1) == 0) {
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderObjectsPass_PassData>__
                );
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<RaycastHit2D>__);
    FUN_02f08768(Method_UnityEngine_UI_SetPropertyUtility_SetClass<InputField_SubmitEvent>__);
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_Close__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__);
    DAT_06bc3db6 = 1;
  }
  puVar5 = Method_UnityEngine_UI_SetPropertyUtility_SetClass<InputField_SubmitEvent>__;
  puVar4 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderObjectsPass_PassData>__
  ;
  puVar3 = Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<RaycastHit2D>__;
  puVar1 = Method_System_Net_Sockets_NetworkStream_Close__;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05d4c964(param_1,0);
  uVar7 = FUN_034dac00(7,*(undefined8 *)puVar1);
  FUN_05d4cbd0(param_1,uVar7,0);
  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
  FUN_05116b38(uVar7,0);
  uVar9 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x100) = uVar7;
  local_58 = 0;
  local_60 = 0;
  FUN_03e20d34(&local_60,param_3,uVar9);
  uVar6 = FUN_060f1c84(param_4,0);
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  FUN_06124964(&local_80,local_60,local_58,uVar6,0xffffffff,0,0);
  lVar8 = *(long *)puVar4;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0xe8) = uStack_78;
  *(undefined8 *)(param_1 + 0xe0) = local_80;
  *(undefined8 *)(param_1 + 0xf8) = uStack_68;
  *(undefined8 *)(param_1 + 0xf0) = uStack_70;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar8 = *(long *)puVar4;
  }
  *(undefined8 *)(param_1 + 0xb8) = **(undefined8 **)(lVar8 + 0xb8);
  return;
}


