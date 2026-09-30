/*
FUNCTION_NAME: Oculus.Platform.MessageWithNetSyncSessionsChangedNotification$$GetDataFromMessage
ENTRY_POINT: 0510dfdc
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_20;validity_or_gating_hits_20;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Oculus_Platform_MessageWithNetSyncSessionsChangedNotification__GetDataFromMessage
               (undefined4 param_1)

{
  char cVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack000000000000000c;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  uStack000000000000000c = param_1;
  if (*(char *)(unaff_x26 + 0x312) == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    *(undefined1 *)(unaff_x26 + 0x312) = 1;
  }
  if (*(char *)(unaff_x24 + 0x22f) == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum();
    *(undefined1 *)(unaff_x24 + 0x22f) = 1;
  }
  if (*(long *)(unaff_x19 + 0x98) != 0) {
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0x98),0);
    if (*(long *)(unaff_x19 + 0x80) != 0) {
      UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0x80),0);
      FUN_0510eccc(fStack000000000000005c,fStack0000000000000058,uStack000000000000000c);
      if (*(uint *)(unaff_x21 + 0x18) < 2) {
LAB_0510e954:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      uStack000000000000000c = *(undefined4 *)(unaff_x21 + 0x2c);
      uVar3 = *(undefined4 *)(unaff_x21 + 0x30);
      uVar4 = *(undefined4 *)(unaff_x21 + 0x34);
      if (*(char *)(unaff_x25 + 0x30e) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
        *(undefined1 *)(unaff_x25 + 0x30e) = 1;
      }
      lVar2 = *(long *)(*unaff_x20 + 0xb8);
      uVar5 = *(undefined4 *)(lVar2 + 0x24);
      uVar6 = *(undefined4 *)(lVar2 + 0x28);
      uVar7 = *(undefined4 *)(lVar2 + 0x2c);
      if (*(char *)(unaff_x27 + 0x855) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x27 + 0x855) = 1;
      }
      if (*(long *)(unaff_x19 + 0xa0) != 0) {
        UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0xa0),0);
        if (*(long *)(unaff_x19 + 0x88) != 0) {
          UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0x88),0)
          ;
          FUN_0510eccc(fStack000000000000005c,fStack0000000000000058,uStack000000000000000c,uVar3,
                       uVar4,uVar5,uVar6,uVar7);
          if (*(uint *)(unaff_x21 + 0x18) < 2) goto LAB_0510e954;
          uStack000000000000000c = *(undefined4 *)(unaff_x21 + 0x2c);
          uVar3 = *(undefined4 *)(unaff_x21 + 0x30);
          uVar4 = *(undefined4 *)(unaff_x21 + 0x34);
          if (*(char *)(unaff_x25 + 0x30e) == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
            *(undefined1 *)(unaff_x25 + 0x30e) = 1;
          }
          lVar2 = *(long *)(*unaff_x20 + 0xb8);
          uVar5 = *(undefined4 *)(lVar2 + 0x24);
          uVar6 = *(undefined4 *)(lVar2 + 0x28);
          uVar7 = *(undefined4 *)(lVar2 + 0x2c);
          if (*(char *)(unaff_x24 + 0x22f) == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum();
            *(undefined1 *)(unaff_x24 + 0x22f) = 1;
          }
          if (*(long *)(unaff_x19 + 0xa0) != 0) {
            UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                      (*(long *)(unaff_x19 + 0xa0),0);
            if (*(long *)(unaff_x19 + 0x90) != 0) {
              UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                        (*(long *)(unaff_x19 + 0x90),0);
              FUN_0510eccc(fStack000000000000005c,fStack0000000000000058,uStack000000000000000c,
                           uVar3,uVar4,uVar5,uVar6,uVar7);
              if (*(uint *)(unaff_x21 + 0x18) < 3) goto LAB_0510e954;
              cVar1 = *(char *)(unaff_x19 + 0x29);
              uStack000000000000000c = *(undefined4 *)(unaff_x21 + 0x38);
              uVar3 = *(undefined4 *)(unaff_x21 + 0x3c);
              uVar4 = *(undefined4 *)(unaff_x21 + 0x40);
              if (*(char *)(unaff_x27 + 0x855) == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
                *(undefined1 *)(unaff_x27 + 0x855) = 1;
              }
              lVar2 = *(long *)(*unaff_x20 + 0xb8);
              uVar5 = *(undefined4 *)(lVar2 + 0x30);
              uVar6 = *(undefined4 *)(lVar2 + 0x34);
              uVar7 = *(undefined4 *)(lVar2 + 0x38);
              if (cVar1 == '\0') {
                if (*(char *)(unaff_x23 + 0x148) == '\0') {
                  AkMIDIEventCallbackInfo__get_byProgramNum();
                  *(undefined1 *)(unaff_x23 + 0x148) = 1;
                }
                if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_0510e950;
                UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0x88),0);
                if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_0510e950;
                UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0x78),0);
                FUN_0510eccc(fStack000000000000005c,fStack0000000000000058,uStack000000000000000c,
                             uVar3,uVar4,uVar5,uVar6,uVar7);
                if (*(uint *)(unaff_x21 + 0x18) < 4) goto LAB_0510e954;
                uStack000000000000000c = *(undefined4 *)(unaff_x21 + 0x44);
                uVar3 = *(undefined4 *)(unaff_x21 + 0x48);
                uVar4 = *(undefined4 *)(unaff_x21 + 0x4c);
                if (*(char *)(unaff_x24 + 0x22f) == '\0') {
                  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
                  *(undefined1 *)(unaff_x24 + 0x22f) = 1;
                }
                lVar2 = *(long *)(*unaff_x20 + 0xb8);
                uVar5 = *(undefined4 *)(lVar2 + 0x3c);
                uVar6 = *(undefined4 *)(lVar2 + 0x40);
                uVar7 = *(undefined4 *)(lVar2 + 0x44);
                if (*(char *)(unaff_x23 + 0x148) == '\0') {
                  AkMIDIEventCallbackInfo__get_byProgramNum();
                  *(undefined1 *)(unaff_x23 + 0x148) = 1;
                }
                if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_0510e950;
                UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0x90),0);
                if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_0510e950;
                UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0x80),0);
              }
              else {
                if (*(char *)(unaff_x26 + 0x312) == '\0') {
                  AkMIDIEventCallbackInfo__get_byProgramNum();
                  *(undefined1 *)(unaff_x26 + 0x312) = 1;
                }
                if (*(long *)(unaff_x19 + 0xa8) == 0) goto LAB_0510e950;
                UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0xa8),0);
                if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_0510e950;
                UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0x78),0);
                FUN_0510eccc(fStack000000000000005c,fStack0000000000000058,uStack000000000000000c,
                             uVar3,uVar4,uVar5,uVar6,uVar7);
                if (*(uint *)(unaff_x21 + 0x18) < 3) goto LAB_0510e954;
                uStack000000000000000c = *(undefined4 *)(unaff_x21 + 0x38);
                uVar3 = *(undefined4 *)(unaff_x21 + 0x3c);
                uVar4 = *(undefined4 *)(unaff_x21 + 0x40);
                if (*(char *)(unaff_x27 + 0x855) == '\0') {
                  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
                  *(undefined1 *)(unaff_x27 + 0x855) = 1;
                }
                lVar2 = *(long *)(*unaff_x20 + 0xb8);
                uVar5 = *(undefined4 *)(lVar2 + 0x30);
                uVar6 = *(undefined4 *)(lVar2 + 0x34);
                uVar7 = *(undefined4 *)(lVar2 + 0x38);
                if (*(char *)(unaff_x25 + 0x30e) == '\0') {
                  AkMIDIEventCallbackInfo__get_byProgramNum();
                  *(undefined1 *)(unaff_x25 + 0x30e) = 1;
                }
                if (*(long *)(unaff_x19 + 0xa8) == 0) goto LAB_0510e950;
                UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0xa8),0);
                if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_0510e950;
                UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0x88),0);
                FUN_0510eccc(fStack000000000000005c,fStack0000000000000058,uStack000000000000000c,
                             uVar3,uVar4,uVar5,uVar6,uVar7);
                if (*(uint *)(unaff_x21 + 0x18) < 4) goto LAB_0510e954;
                uStack000000000000000c = *(undefined4 *)(unaff_x21 + 0x44);
                uVar3 = *(undefined4 *)(unaff_x21 + 0x48);
                uVar4 = *(undefined4 *)(unaff_x21 + 0x4c);
                if (*(char *)(unaff_x24 + 0x22f) == '\0') {
                  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
                  *(undefined1 *)(unaff_x24 + 0x22f) = 1;
                }
                lVar2 = *(long *)(*unaff_x20 + 0xb8);
                uVar5 = *(undefined4 *)(lVar2 + 0x3c);
                uVar6 = *(undefined4 *)(lVar2 + 0x40);
                uVar7 = *(undefined4 *)(lVar2 + 0x44);
                if (*(char *)(unaff_x26 + 0x312) == '\0') {
                  AkMIDIEventCallbackInfo__get_byProgramNum();
                  *(undefined1 *)(unaff_x26 + 0x312) = 1;
                }
                if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_0510e950;
                UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0xb0),0);
                if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_0510e950;
                UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0x80),0);
                FUN_0510eccc(fStack000000000000005c,fStack0000000000000058,uStack000000000000000c,
                             uVar3,uVar4,uVar5,uVar6,uVar7);
                if (*(uint *)(unaff_x21 + 0x18) < 4) goto LAB_0510e954;
                uStack000000000000000c = *(undefined4 *)(unaff_x21 + 0x44);
                uVar3 = *(undefined4 *)(unaff_x21 + 0x48);
                uVar4 = *(undefined4 *)(unaff_x21 + 0x4c);
                if (*(char *)(unaff_x24 + 0x22f) == '\0') {
                  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
                  *(undefined1 *)(unaff_x24 + 0x22f) = 1;
                }
                lVar2 = *(long *)(*unaff_x20 + 0xb8);
                uVar5 = *(undefined4 *)(lVar2 + 0x3c);
                uVar6 = *(undefined4 *)(lVar2 + 0x40);
                uVar7 = *(undefined4 *)(lVar2 + 0x44);
                if (*(char *)(unaff_x25 + 0x30e) == '\0') {
                  AkMIDIEventCallbackInfo__get_byProgramNum();
                  *(undefined1 *)(unaff_x25 + 0x30e) = 1;
                }
                if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_0510e950;
                UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0xb0),0);
                if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_0510e950;
                UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0x90),0);
              }
              FUN_0510eccc(fStack000000000000005c,fStack0000000000000058,uStack000000000000000c,
                           uVar3,uVar4,uVar5,uVar6,uVar7);
              lVar2 = *(long *)(unaff_x19 + 0x40);
              if (lVar2 != 0) {
                uVar3 = *(undefined4 *)(unaff_x19 + 0x24);
                *(float *)(lVar2 + 0x2c) = fStack000000000000005c;
                *(float *)(lVar2 + 0x30) = fStack0000000000000058;
                *(undefined4 *)(lVar2 + 0x34) = uVar3;
                if (*(long *)(unaff_x19 + 0x48) != 0) {
                  FUN_05f00f94(fStack000000000000005c * -0.5,fStack0000000000000058 * 0.5,0,
                               *(long *)(unaff_x19 + 0x48),0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0510e950:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


