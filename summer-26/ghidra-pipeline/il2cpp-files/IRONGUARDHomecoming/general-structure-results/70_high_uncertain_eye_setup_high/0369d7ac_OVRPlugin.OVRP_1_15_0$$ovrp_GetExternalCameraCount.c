/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetExternalCameraCount
ENTRY_POINT: 0369d7ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_15_0__ovrp_GetExternalCameraCount(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  long lVar4;
  long *unaff_x22;
  
  uVar1 = FUN_040397e0(0);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar1;
  thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x48),uVar1);
  *(undefined1 *)(unaff_x19 + 0x50) = 1;
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar2 = *unaff_x22;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar2 = *unaff_x22;
    }
                    /* try { // try from 0369d808 to 0379d80f has its CatchHandler @ 0369d998 */
                    /* try { // try from 0369d810 to 0379d833 has its CatchHandler @ 0369d9a0 */
    uVar1 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_01f117cc(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_53__);
    FUN_02ab0644(lVar4,uVar1,
                 *(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_23__,0);
    plVar3 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar3 = lVar4;
    thunk_FUN_01f51358(plVar3,lVar4);
  }
  *(long *)(unaff_x19 + 0x68) = lVar4;
  thunk_FUN_01f51358((long *)(unaff_x19 + 0x68),lVar4);
  thunk_FUN_0406f928();
  return;
}


