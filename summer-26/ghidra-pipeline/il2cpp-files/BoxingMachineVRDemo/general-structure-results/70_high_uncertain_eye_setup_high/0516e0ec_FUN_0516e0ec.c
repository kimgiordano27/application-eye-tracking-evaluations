/*
FUNCTION_NAME: FUN_0516e0ec
ENTRY_POINT: 0516e0ec
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_0516e0ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_0675e1c0;
  if ((DAT_06b79e92 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067828c8);
    FUN_02d6084c(PTR_DAT_0675e1c0);
    DAT_06b79e92 = 1;
  }
  lVar3 = FUN_02d60934(*(undefined8 *)puVar1,2);
  puVar2 = PTR_DAT_067828c8;
  if (lVar3 != 0) {
    if (1 < *(uint *)(lVar3 + 0x18)) {
      *(undefined1 *)(lVar3 + 0x21) = 0x7f;
      **(long **)(*(long *)puVar2 + 0xb8) = lVar3;
      thunk_FUN_02dd37b4(*(undefined8 *)(*(long *)puVar2 + 0xb8));
      lVar3 = FUN_02d60934(*(undefined8 *)puVar1,2);
      if (lVar3 == 0) goto OVRPlugin_OVRP_1_74_0__ovrp_GetSpaceUuid;
      if ((*(int *)(lVar3 + 0x18) != 0) &&
         (*(undefined1 *)(lVar3 + 0x20) = 0xc2, *(int *)(lVar3 + 0x18) != 1)) {
        *(undefined1 *)(lVar3 + 0x21) = 0xdf;
        *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar3;
        thunk_FUN_02dd37b4();
        lVar3 = FUN_02d60934(*(undefined8 *)puVar1,2);
        if (lVar3 == 0) goto OVRPlugin_OVRP_1_74_0__ovrp_GetSpaceUuid;
        if ((*(int *)(lVar3 + 0x18) != 0) &&
           (*(undefined1 *)(lVar3 + 0x20) = 0xe0, *(int *)(lVar3 + 0x18) != 1)) {
          *(undefined1 *)(lVar3 + 0x21) = 0xef;
          *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar3;
          thunk_FUN_02dd37b4();
          lVar3 = FUN_02d60934(*(undefined8 *)puVar1,2);
          if (lVar3 == 0) goto OVRPlugin_OVRP_1_74_0__ovrp_GetSpaceUuid;
          if ((*(int *)(lVar3 + 0x18) != 0) &&
             (*(undefined1 *)(lVar3 + 0x20) = 0xf0, *(int *)(lVar3 + 0x18) != 1)) {
            *(undefined1 *)(lVar3 + 0x21) = 0xf4;
            *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = lVar3;
            thunk_FUN_02dd37b4();
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
OVRPlugin_OVRP_1_74_0__ovrp_GetSpaceUuid:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


