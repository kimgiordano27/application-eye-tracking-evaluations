/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$get_foveatedRenderingLevel
ENTRY_POINT: 052ed54c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 94
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__get_foveatedRenderingLevel(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar4;
  
  *(undefined1 *)(unaff_x21 + 0x75) = in_w8;
  lVar2 = FUN_05119fa4(*(undefined8 *)(unaff_x19 + 0xa8));
  puVar1 = Unity_Properties_TypeConverter<ulong,_string>_TypeInfo;
  if (lVar2 == 0) {
    *(undefined8 *)(unaff_x19 + 0xa8) = 0;
    return;
  }
  uVar4 = *(undefined8 *)Unity_Properties_TypeConverter<ulong,_string>_TypeInfo;
  lVar3 = thunk_FUN_02f45174(lVar2,uVar4);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)puVar1;
    *(long *)(unaff_x19 + 0xa8) = lVar3;
    lVar3 = thunk_FUN_02f45174(lVar2,uVar4);
    if (lVar3 != 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f08d48(lVar2,uVar4);
}


