/*
FUNCTION_NAME: OVRManager$$set_gpuLevel
ENTRY_POINT: 07a220e8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_gpuLevel(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  undefined4 *in_x9;
  undefined4 *in_x10;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  float unaff_s8;
  
  if (unaff_x21 != 0) {
    thunk_FUN_0898f5cc(*in_x9,*in_x10,*(undefined4 *)(unaff_x19 + 0x80),
                       *(undefined4 *)(unaff_x19 + 0x84));
    if (*(long *)(unaff_x19 + 0x58) != 0) {
      lVar5 = FUN_079b62b0(*(long *)(unaff_x19 + 0x58),0);
      lVar6 = *unaff_x22;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8(lVar6);
        lVar6 = *unaff_x22;
      }
      if (unaff_s8 <= 0.0) {
        puVar1 = (undefined4 *)(unaff_x19 + 0x78);
        puVar2 = (undefined4 *)(unaff_x19 + 0x7c);
        puVar3 = (undefined4 *)(unaff_x19 + 0x80);
        puVar4 = (undefined4 *)(unaff_x19 + 0x84);
      }
      else if ((unaff_x20 & 1) == 0) {
        puVar1 = (undefined4 *)(unaff_x19 + 0x88);
        puVar2 = (undefined4 *)(unaff_x19 + 0x8c);
        puVar3 = (undefined4 *)(unaff_x19 + 0x90);
        puVar4 = (undefined4 *)(unaff_x19 + 0x94);
      }
      else {
        puVar1 = (undefined4 *)(unaff_x19 + 0x98);
        puVar2 = (undefined4 *)(unaff_x19 + 0x9c);
        puVar3 = (undefined4 *)(unaff_x19 + 0xa0);
        puVar4 = (undefined4 *)(unaff_x19 + 0xa4);
      }
      if (lVar5 != 0) {
        thunk_FUN_0898f5cc(*puVar1,*puVar2,*puVar3,*puVar4,lVar5,
                           *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x10),0);
        if (*(long *)(unaff_x19 + 0x50) != 0) {
          FUN_079c677c(*(long *)(unaff_x19 + 0x50),0);
          if (*(long *)(unaff_x19 + 0x58) != 0) {
            FUN_079c677c(*(long *)(unaff_x19 + 0x58),0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


