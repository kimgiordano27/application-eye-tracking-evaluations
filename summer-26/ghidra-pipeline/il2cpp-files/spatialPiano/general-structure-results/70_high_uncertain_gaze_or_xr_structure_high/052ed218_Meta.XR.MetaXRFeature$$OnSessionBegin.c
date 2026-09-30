/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionBegin
ENTRY_POINT: 052ed218
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionBegin(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  undefined4 uVar6;
  
  FUN_02f08768(
              UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_CompilerContextData_TypeInfo
              );
  *(undefined1 *)(unaff_x19 + 0x73) = 1;
  puVar2 = 
  UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_CompilerContextData_TypeInfo;
  if (DAT_06bb42c5 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f78);
    DAT_06bb42c5 = '\x01';
  }
  cVar3 = DAT_06bb8af9;
  puVar1 = PTR_DAT_067c8f78;
  puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
  uVar6 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 0x50);
  *puVar4 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 0x48);
  *(undefined4 *)(puVar4 + 1) = uVar6;
  if (cVar3 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f78);
    DAT_06bb8af9 = '\x01';
  }
  lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
  uVar6 = *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x5c);
  *(undefined8 *)(lVar5 + 0xc) = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x54);
  *(undefined4 *)(lVar5 + 0x14) = uVar6;
  return;
}


