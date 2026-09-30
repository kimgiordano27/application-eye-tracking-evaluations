/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreStartQueryByLocalGroupDelegate$$BeginInvoke
ENTRY_POINT: 08a3973c
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate__BeginInvoke
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0xcc8));
  *(undefined1 *)(unaff_x21 + 0x3b4) = 1;
  if ((*(long *)(unaff_x20 + 0x28) != 0) &&
     (lVar2 = FUN_097a9b8c(*(long *)(unaff_x20 + 0x28),0), puVar1 = PTR_DAT_0ac52cc8, lVar2 != 0)) {
    FUN_097b9bd0(lVar2,*(undefined8 *)PTR_DAT_0ac52cc8,0);
                    /* try { // try from 08a39774 to 08b39777 has its CatchHandler @ 08a397c8 */
                    /* try { // try from 08a39778 to 08b3977b has its CatchHandler @ 08a397bc */
                    /* try { // try from 08a3977c to 08b3977f has its CatchHandler @ 08a397b4 */
                    /* try { // try from 08a39780 to 08b39783 has its CatchHandler @ 08a397ac */
                    /* try { // try from 08a39784 to 08b39787 has its CatchHandler @ 08a397a4 */
    if ((*(long *)(unaff_x20 + 0x28) != 0) &&
       (lVar2 = FUN_097a9b8c(*(long *)(unaff_x20 + 0x28),0), lVar2 != 0)) {
                    /* try { // try from 08a39788 to 08b3978b has its CatchHandler @ 08a397a0 */
                    /* try { // try from 08a3978c to 08b397ef has its CatchHandler @ 08a391a0 */
      System_Text_Json_Serialization_JsonConverterFactory__ReadAsPropertyNameCoreAsObject
                (lVar2,*(undefined8 *)puVar1);
      *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
                    /* catch() { ... } // from try @ 08a39788 with catch @ 08a397a0 */
                    /* catch() { ... } // from try @ 08a39784 with catch @ 08a397a4 */
                    /* catch() { ... } // from try @ 08a396c4 with catch @ 08a397a8 */
                    /* catch() { ... } // from try @ 08a39780 with catch @ 08a397ac */
      thunk_FUN_049ee3d8((undefined8 *)(unaff_x20 + 0x30));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 08a396d0 with catch @ 08a397b0 */
  FUN_0494818c();
}


