/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$RefreshLayoutPostChildren
ENTRY_POINT: 05ab6a20
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__RefreshLayoutPostChildren(void)

{
  uint uVar1;
  long lVar2;
  void *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  
  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
                    /* try { // try from 05ab6a30 to 05bb6a37 has its CatchHandler @ 05ab6b64 */
    FUN_0322bef4();
  }
  if (*unaff_x21 == 0) {
    Oculus_Interaction_TransformExtensions_<>c__DisplayClass3_0___ctor(0x32,0);
  }
                    /* try { // try from 05ab6a54 to 05bb6a63 has its CatchHandler @ 05ab6b68 */
  if ((unaff_w20 < 0) || (*(int *)((long)unaff_x21 + 0xc) <= unaff_w20)) {
                    /* try { // try from 05ab6a64 to 05bb6a87 has its CatchHandler @ 05ab6848 */
    FUN_05e22bd8(0);
  }
  lVar2 = *unaff_x21;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar1 = (int)unaff_x21[1] + unaff_w20;
  if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05ab6aac to 05bb6b7f has its CatchHandler @ 05ab6848 */
    FUN_031f2398();
  }
                    /* try { // try from 05ab6a88 to 05bb6aab has its CatchHandler @ 05ab6b68 */
  memcpy(unaff_x19,(void *)(lVar2 + (long)(int)uVar1 * 0xa0 + 0x20),0xa0);
  return;
}


