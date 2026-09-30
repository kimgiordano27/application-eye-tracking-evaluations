/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_92
ENTRY_POINT: 033fe938
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_<>c__<_cctor>b__786_92(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w23;
  uint unaff_w24;
  undefined8 unaff_x25;
  undefined4 uStack0000000000000008;
  
  puVar2 = StringLiteral_2260;
  uStack0000000000000008 = 0;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (lVar3 != 0) {
    do {
      if (*(uint *)(lVar3 + 0x18) <= unaff_w23) {
LAB_033fe9f4:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      lVar3 = *(long *)(lVar3 + (ulong)unaff_w23 * 8 + 0x20);
      thunk_FUN_01da0934();
      *unaff_x19 = lVar3;
      thunk_FUN_01e10808();
      if (lVar3 != 0) {
        lVar3 = *(long *)(unaff_x20 + 0x10);
                    /* try { // try from 033fe9a4 to 034fe9c3 has its CatchHandler @ 033feacc */
        if (lVar3 != 0) {
          if (unaff_w23 < *(uint *)(lVar3 + 0x18)) {
            puVar1 = (undefined8 *)(lVar3 + (ulong)unaff_w23 * 8 + 0x20);
            *puVar1 = 0;
            thunk_FUN_01e10808(puVar1,0);
            return unaff_w24 != ((uint)((ulong)unaff_x25 >> 0x10) & 0xffff);
          }
          goto LAB_033fe9f4;
        }
        break;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033f53e0(&stack0x00000008);
      lVar3 = *(long *)(unaff_x20 + 0x10);
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


