/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$.cctor
ENTRY_POINT: 0516e138
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRPlugin_OVRP_1_72_0___cctor(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *unaff_x19;
  
  puVar1 = PTR_DAT_067828c8;
  if (1 < *(uint *)(param_1 + 0x18)) {
    *(undefined1 *)(param_1 + 0x21) = 0x7f;
    **(long **)(*(long *)puVar1 + 0xb8) = param_1;
    thunk_FUN_02dd37b4(*(undefined8 *)(*(long *)puVar1 + 0xb8));
    lVar2 = FUN_02d60934(*unaff_x19,2);
    if (lVar2 == 0) {
OVRPlugin_OVRP_1_74_0__ovrp_GetSpaceUuid:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
                    /* try { // try from 0516e194 to 0526e19f has its CatchHandler @ 0516e378 */
    if ((*(int *)(lVar2 + 0x18) != 0) &&
       (*(undefined1 *)(lVar2 + 0x20) = 0xc2, *(int *)(lVar2 + 0x18) != 1)) {
      *(undefined1 *)(lVar2 + 0x21) = 0xdf;
                    /* try { // try from 0516e1a4 to 0526e1a7 has its CatchHandler @ 0516e374 */
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar2;
      thunk_FUN_02dd37b4();
                    /* try { // try from 0516e1b4 to 0526e1bb has its CatchHandler @ 0516e37c */
      lVar2 = FUN_02d60934(*unaff_x19,2);
      if (lVar2 == 0) goto OVRPlugin_OVRP_1_74_0__ovrp_GetSpaceUuid;
      if ((*(int *)(lVar2 + 0x18) != 0) &&
         (*(undefined1 *)(lVar2 + 0x20) = 0xe0, *(int *)(lVar2 + 0x18) != 1)) {
        *(undefined1 *)(lVar2 + 0x21) = 0xef;
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar2;
        thunk_FUN_02dd37b4();
        lVar2 = FUN_02d60934(*unaff_x19,2);
        if (lVar2 == 0) goto OVRPlugin_OVRP_1_74_0__ovrp_GetSpaceUuid;
        if ((*(int *)(lVar2 + 0x18) != 0) &&
           (*(undefined1 *)(lVar2 + 0x20) = 0xf0, *(int *)(lVar2 + 0x18) != 1)) {
          *(undefined1 *)(lVar2 + 0x21) = 0xf4;
          *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = lVar2;
          thunk_FUN_02dd37b4();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


