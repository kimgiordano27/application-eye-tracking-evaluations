/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$set_BackgroundStyle
ENTRY_POINT: 05ab4210
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16]
Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__set_BackgroundStyle
          (long *param_1,int param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  
                    /* try { // try from 05ab4210 to 05bb4217 has its CatchHandler @ 05ab4218 */
  lVar2 = *(long *)(param_3 + 0x20);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05ab41f8 with catch @ 05ab4218
                       catch(type#2 @ 00000000) { ... } // from try @ 05ab4210 with catch @ 05ab4218
                        */
                    /* catch() { ... } // from try @ 05ab42b0 with catch @ 05ab421c
                       catch() { ... } // from try @ 05ab42e8 with catch @ 05ab421c
                       catch() { ... } // from try @ 05ab4330 with catch @ 05ab421c */
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0322bef4(lVar2);
                    /* try { // try from 05ab4234 to 05bb423f has its CatchHandler @ 05ab42f0 */
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0322bef4();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if ((*(byte *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
                    /* try { // try from 05ab4268 to 05bb4277 has its CatchHandler @ 05ab42e8 */
  if (*param_1 == 0) {
    Oculus_Interaction_TransformExtensions_<>c__DisplayClass3_0___ctor(0x32,0);
  }
                    /* try { // try from 05ab428c to 05bb42af has its CatchHandler @ 05ab42ec */
  if ((param_2 < 0) || (*(int *)((long)param_1 + 0xc) <= param_2)) {
    FUN_05e22bd8(0);
  }
  lVar2 = *param_1;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar1 = (int)param_1[1] + param_2;
                    /* try { // try from 05ab42b0 to 05bb42e3 has its CatchHandler @ 05ab421c */
  if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
  return *(undefined1 (*) [16])(lVar2 + (long)(int)uVar1 * 0x10 + 0x20);
}


