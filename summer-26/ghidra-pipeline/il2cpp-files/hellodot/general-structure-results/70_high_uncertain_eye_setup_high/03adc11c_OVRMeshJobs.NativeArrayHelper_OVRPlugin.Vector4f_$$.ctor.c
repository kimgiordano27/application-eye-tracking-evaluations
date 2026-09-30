/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 03adc11c
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>___ctor(void)

{
  int in_w8;
  long lVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  uint unaff_w22;
  
  if (in_w8 - unaff_w22 != 0 && (int)unaff_w22 <= in_w8) {
    FUN_04f53d58(*(undefined8 *)(unaff_x19 + 0x10),unaff_w22,*(undefined8 *)(unaff_x19 + 0x10),
                 unaff_w22 + 1,in_w8 - unaff_w22,0);
  }
  lVar1 = *(long *)(unaff_x19 + 0x10);
  if (lVar1 != 0) {
    if (unaff_w22 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + (long)(int)unaff_w22 * 0x10;
      *(undefined8 *)(lVar1 + 0x20) = unaff_x21;
      *(undefined8 *)(lVar1 + 0x28) = unaff_x20;
                    /* try { // try from 03adc16c to 03bdc16f has its CatchHandler @ 03adc178 */
      *(ulong *)(unaff_x19 + 0x18) =
           CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                    (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
                    /* try { // try from 03adc170 to 03bdc19b has its CatchHandler @ 03adbce8 */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 03adc16c with catch @ 03adc178
                        */
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 03adbfe8 with catch @ 03adc180
                        */
    FUN_02ce7c84();
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 03adc0a0 with catch @ 03adc17c
                        */
  FUN_02ce7c7c();
}


