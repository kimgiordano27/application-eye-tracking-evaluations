/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionEnd
ENTRY_POINT: 04f2ca38
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionEnd(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *unaff_x21;
  
  uVar1 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*param_1);
  uVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)System_Collections_Generic_Dictionary<int,_Encoding>_TypeInfo,
                     &stack0x0000000c);
  FUN_04c0af28(*(undefined8 *)System_Collections_Generic_Dictionary<int,_GraphicsFence>_TypeInfo,
               uVar1,uVar2,0);
  if (unaff_x21 != (long *)0x0) {
    (**(code **)(*unaff_x21 + 0x558))();
    if (*(char *)(unaff_x19 + 0x60) != '\0') {
      if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_04f2cd80;
      FUN_05c59bb8(*(undefined4 *)(unaff_x19 + 0x28),*(undefined4 *)(unaff_x19 + 0x2c),
                   *(undefined4 *)(unaff_x19 + 0x30),*(undefined4 *)(unaff_x19 + 0x34),
                   *(long *)(unaff_x19 + 0x58),0);
      *(char *)(unaff_x19 + 0x60) = '\0';
    }
    return;
  }
LAB_04f2cd80:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


