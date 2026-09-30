/*
FUNCTION_NAME: HurricaneVR.Framework.Core.HandPoser.HVRPosableHand$$Mirror
ENTRY_POINT: 021cd278
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021cd300) */

void HurricaneVR_Framework_Core_HandPoser_HVRPosableHand__Mirror(void)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar4;
  undefined8 uVar5;
  long unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000008;
  
  plVar3 = (long *)__cxa_begin_catch();
  lVar4 = *plVar3;
  __cxa_end_catch();
  while( true ) {
    if (in_stack_00000008._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(unaff_x21,0);
    }
    if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(lVar4);
    }
    while( true ) {
      do {
        unaff_x26 = unaff_x26 + 1;
        if ((long)(int)*(uint *)(unaff_x25 + 0x18) <= (long)unaff_x26) {
          if (unaff_x19 != 0) {
            FUN_027c2aa4();
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(unaff_x25 + 0x18) <= unaff_x26) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar4 = *(long *)(unaff_x27 + unaff_x26 * 8);
        thunk_FUN_01a4b338();
      } while (lVar4 == 0);
      if (*(char *)(unaff_x19 + 0x18) == '\0') break;
      thunk_FUN_01a4b338();
      FUN_018820a8(lVar4,*(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20) +
                                  0x80) + 0x40,0);
    }
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01a46ff8();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01a46ff8();
    }
    unaff_x21 = **(undefined8 **)(lVar1 + 0xb8);
    in_stack_00000008._4_1_ = '\0';
    FUN_027e0bd8(unaff_x21,(long)&stack0x00000008 + 4,0);
    plVar3 = (long *)thunk_FUN_01a59484(lVar4,*(undefined8 *)
                                               (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) +
                                                                   0xc0) + 0x20) + 0x80));
    lVar1 = *plVar3;
    thunk_FUN_01a4b338();
    if (lVar1 != 0) {
      plVar3 = (long *)thunk_FUN_01a59484(lVar4,*(undefined8 *)
                                                 (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) +
                                                                     0xc0) + 0x20) + 0x80));
      lVar1 = *plVar3;
      thunk_FUN_01a4b338();
      puVar2 = (undefined8 *)
               thunk_FUN_01a59484(lVar4,*(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) +
                                                                     0xc0) + 0x20) + 0x80) + 0x20);
      uVar5 = *puVar2;
      thunk_FUN_01a4b338();
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      thunk_FUN_01a4b338();
      FUN_018820a8(lVar1,*(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20) +
                                  0x80) + 0x20,uVar5);
    }
    plVar3 = (long *)thunk_FUN_01a59484(lVar4,*(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 +
                                                                                     0x20) + 0xc0) +
                                                                 0x20) + 0x80) + 0x20);
    lVar1 = *plVar3;
    thunk_FUN_01a4b338();
    puVar2 = (undefined8 *)
             thunk_FUN_01a59484(lVar4,*(undefined8 *)
                                       (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) +
                                                 0x20) + 0x80));
    uVar5 = *puVar2;
    thunk_FUN_01a4b338();
    if (lVar1 == 0) break;
    thunk_FUN_01a4b338();
    FUN_018820a8(lVar1,*(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20) + 0x80),
                 uVar5);
    lVar4 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


