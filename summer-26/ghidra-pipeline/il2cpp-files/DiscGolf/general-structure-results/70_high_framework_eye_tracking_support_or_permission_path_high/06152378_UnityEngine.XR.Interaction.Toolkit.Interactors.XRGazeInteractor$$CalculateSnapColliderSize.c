/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.XRGazeInteractor$$CalculateSnapColliderSize
ENTRY_POINT: 06152378
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 78
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;keyword_support;attempted_use
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__CalculateSnapColliderSize
               (void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  
  puVar1 = PTR_DAT_069fc558;
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)PTR_DAT_069fc558;
  LeanTween__value((undefined8 *)(unaff_x20 + 0x30));
  uVar2 = FUN_054fad00(unaff_x19 + 4,*unaff_x22,0);
  if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffffc) != 0) {
    *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
    LeanTween__value((undefined8 *)(unaff_x20 + 0x38),uVar2);
    if (4 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined8 *)(unaff_x20 + 0x40) =
           *(undefined8 *)
            Method_System_Net_HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData__
      ;
      LeanTween__value((undefined8 *)(unaff_x20 + 0x40));
                    /* try { // try from 061523f0 to 06252563 has its CatchHandler @ 061523f0
                       catch() { ... } // from try @ 061523f0 with catch @ 061523f0
                       catch() { ... } // from try @ 06152850 with catch @ 061523f0
                       catch() { ... } // from try @ 0615290c with catch @ 061523f0
                       catch() { ... } // from try @ 0615299c with catch @ 061523f0
                       catch() { ... } // from try @ 06152a38 with catch @ 061523f0 */
      uVar2 = FUN_054fad00(unaff_x19 + 8,*unaff_x22,0);
      if (5 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
        LeanTween__value((undefined8 *)(unaff_x20 + 0x48),uVar2);
        if (6 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined8 *)(unaff_x20 + 0x50) = *(undefined8 *)puVar1;
          LeanTween__value((undefined8 *)(unaff_x20 + 0x50));
          uVar2 = FUN_054fad00(unaff_x19 + 0xc,*unaff_x22,0);
          if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffff8) != 0) {
            *(undefined8 *)(unaff_x20 + 0x58) = uVar2;
            LeanTween__value((undefined8 *)(unaff_x20 + 0x58),uVar2);
            if (8 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined8 *)(unaff_x20 + 0x60) = *(undefined8 *)PTR_DAT_06a0dc58;
              LeanTween__value();
              FUN_0536dde4();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


