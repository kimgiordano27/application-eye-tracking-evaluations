/*
FUNCTION_NAME: OVRPlugin$$SetVirtualKeyboardModelVisibility
ENTRY_POINT: 0694ee24
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetVirtualKeyboardModelVisibility(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar3;
  long *unaff_x23;
  
  thunk_FUN_03ae8be4();
  FUN_07ca310c();
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar1 != 0)) {
    FUN_069608d0(lVar1,0,0);
    *(undefined1 *)(unaff_x19 + 0x21) = 1;
    FUN_0694f398();
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      FUN_07cb2910(*(long *)(unaff_x19 + 0x48),0);
      lVar1 = *unaff_x21;
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar2 = FUN_07c9e200(lVar1,0,0);
      if ((uVar2 & 1) != 0) {
        if ((*(long *)(unaff_x19 + 0x10) == 0) ||
           (lVar1 = FUN_07c99058(*(long *)(unaff_x19 + 0x10),0), lVar1 == 0)) goto LAB_0694f028;
        lVar1 = FUN_045614d0(lVar1,*(undefined8 *)PTR_DAT_08488148);
        *unaff_x21 = lVar1;
        thunk_FUN_03afed3c();
      }
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        lVar3 = *(long *)(unaff_x19 + 0x60);
        lVar1 = FUN_07c98f88(*(long *)(unaff_x19 + 0x10),0);
        if (((*(long *)(unaff_x20 + 0x28) != 0) &&
            (FUN_07cac280(*(long *)(unaff_x20 + 0x28),0), lVar1 != 0)) &&
           (FUN_07cadf5c(lVar1,0), lVar3 != 0)) {
          FUN_07d2d468(lVar3,0);
          if (*unaff_x21 != 0) {
            FUN_07d255e0(*unaff_x21,0,0);
            if (*unaff_x21 != 0) {
              FUN_07d256a4(*unaff_x21,0,0);
              if (*unaff_x21 != 0) {
                FUN_07d25768(*unaff_x21,0,0);
                if (*unaff_x21 != 0) {
                  FUN_07d25bd0(*unaff_x21,(ulong)(*(char *)(unaff_x19 + 0x59) == '\0') << 1,0);
                  if (*(long *)(unaff_x19 + 0x60) != 0) {
                    FUN_07d2d958(*(long *)(unaff_x19 + 0x60),1,0);
                    if (*unaff_x21 != 0) {
                      FUN_07d2d7b0(*(undefined4 *)(unaff_x19 + 0x3c),*unaff_x21,0);
                      if ((*(long *)(unaff_x20 + 0x10) != 0) && (*(long *)(unaff_x19 + 0x60) != 0))
                      {
                        FUN_07d2d0e4(*(long *)(unaff_x19 + 0x60),
                                     *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x20),0);
                        *(long *)(unaff_x19 + 0x68) = unaff_x20;
                        thunk_FUN_03afed3c((long *)(unaff_x19 + 0x68));
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0694f028:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


