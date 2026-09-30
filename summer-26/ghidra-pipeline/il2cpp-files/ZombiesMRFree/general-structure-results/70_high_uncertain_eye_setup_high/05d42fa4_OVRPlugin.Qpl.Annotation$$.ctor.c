/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation$$.ctor
ENTRY_POINT: 05d42fa4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation___ctor(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  int unaff_w22;
  uint uVar3;
  ulong unaff_x23;
  
  do {
    lVar1 = *unaff_x20;
    do {
      lVar2 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
      if (lVar2 == 0) goto LAB_05d4304c;
      uVar3 = (uint)unaff_x23;
      if (*(uint *)(lVar2 + 0x18) <= uVar3) {
LAB_05d43048:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      if (*(int *)(lVar2 + (long)(int)uVar3 * 4 + 0x20) == -1) {
        if (unaff_x19 == 0) goto LAB_05d4304c;
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_x21) goto LAB_05d43048;
        lVar2 = unaff_x21 * 4;
        unaff_x21 = unaff_x21 + 1;
        *(int *)(unaff_x19 + lVar2 + 0x20) = unaff_w22;
        if (unaff_x21 == 0x1a) {
          return;
        }
        unaff_w22 = -1;
        unaff_x23 = unaff_x21 & 0xffffffff;
      }
      else {
        if (*(int *)(lVar1 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
          lVar1 = *unaff_x20;
        }
        lVar2 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
        if (lVar2 == 0) {
LAB_05d4304c:
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_05d43048;
        unaff_x23 = (ulong)*(uint *)(lVar2 + (long)(int)uVar3 * 4 + 0x20);
        unaff_w22 = unaff_w22 + 1;
      }
    } while (*(int *)(lVar1 + 0xe0) != 0);
    thunk_FUN_02fdcff0();
  } while( true );
}


