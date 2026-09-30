/*
FUNCTION_NAME: Oculus.Platform.MessageWithNetSyncSessionsChangedNotification$$GetNetSyncSessionsChangedNotification
ENTRY_POINT: 0510dfa0
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_18;validity_or_gating_hits_20;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Oculus_Platform_MessageWithNetSyncSessionsChangedNotification__GetNetSyncSessionsChangedNotification
               (void)

{
  char cVar1;
  long lVar2;
  undefined4 *puVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined4 uVar4;
  undefined4 unaff_s8;
  undefined4 uVar5;
  undefined4 unaff_s9;
  undefined4 uVar6;
  undefined4 unaff_s10;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  uStack0000000000000000 = unaff_s8;
  uStack0000000000000004 = unaff_s9;
  uStack0000000000000008 = unaff_s10;
  FUN_0510eccc();
  if (*(int *)(unaff_x21 + 0x18) == 0) {
LAB_0510e954:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
  uVar4 = *(undefined4 *)(unaff_x21 + 0x20);
  uVar8 = *(undefined4 *)(unaff_x21 + 0x24);
  uVar9 = *(undefined4 *)(unaff_x21 + 0x28);
  if (*(char *)(unaff_x26 + 0x312) == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    *(undefined1 *)(unaff_x26 + 0x312) = 1;
  }
  lVar2 = *(long *)(*unaff_x20 + 0xb8);
  uVar10 = *(undefined4 *)(lVar2 + 0x18);
  uVar11 = *(undefined4 *)(lVar2 + 0x1c);
  uVar12 = *(undefined4 *)(lVar2 + 0x20);
  if (*(char *)(unaff_x24 + 0x22f) == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum();
    lVar2 = *unaff_x20;
    *(undefined1 *)(unaff_x24 + 0x22f) = 1;
    lVar2 = *(long *)(lVar2 + 0xb8);
  }
  if (*(long *)(unaff_x19 + 0x98) != 0) {
    uVar5 = *(undefined4 *)(lVar2 + 0x3c);
    uVar6 = *(undefined4 *)(lVar2 + 0x40);
    uVar7 = *(undefined4 *)(lVar2 + 0x44);
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0x98),0);
    if (*(long *)(unaff_x19 + 0x80) != 0) {
      UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0x80),0);
      uStack0000000000000000 = uVar5;
      uStack0000000000000004 = uVar6;
      uStack0000000000000008 = uVar7;
      FUN_0510eccc(fStack000000000000005c,fStack0000000000000058,uVar4,uVar8,uVar9,uVar10,uVar11,
                   uVar12);
      if (*(uint *)(unaff_x21 + 0x18) < 2) goto LAB_0510e954;
      uVar4 = *(undefined4 *)(unaff_x21 + 0x2c);
      uVar8 = *(undefined4 *)(unaff_x21 + 0x30);
      uVar9 = *(undefined4 *)(unaff_x21 + 0x34);
      if (*(char *)(unaff_x25 + 0x30e) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
        *(undefined1 *)(unaff_x25 + 0x30e) = 1;
      }
      lVar2 = *(long *)(*unaff_x20 + 0xb8);
      uVar10 = *(undefined4 *)(lVar2 + 0x24);
      uVar11 = *(undefined4 *)(lVar2 + 0x28);
      uVar12 = *(undefined4 *)(lVar2 + 0x2c);
      if (*(char *)(unaff_x27 + 0x855) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        lVar2 = *unaff_x20;
        *(undefined1 *)(unaff_x27 + 0x855) = 1;
        lVar2 = *(long *)(lVar2 + 0xb8);
      }
      if (*(long *)(unaff_x19 + 0xa0) != 0) {
        uVar5 = *(undefined4 *)(lVar2 + 0x30);
        uVar6 = *(undefined4 *)(lVar2 + 0x34);
        uVar7 = *(undefined4 *)(lVar2 + 0x38);
        UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0xa0),0);
        if (*(long *)(unaff_x19 + 0x88) != 0) {
          UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0x88),0)
          ;
          uStack0000000000000000 = uVar5;
          uStack0000000000000004 = uVar6;
          uStack0000000000000008 = uVar7;
          FUN_0510eccc(fStack000000000000005c,fStack0000000000000058,uVar4,uVar8,uVar9,uVar10,uVar11
                       ,uVar12);
          if (*(uint *)(unaff_x21 + 0x18) < 2) goto LAB_0510e954;
          uVar4 = *(undefined4 *)(unaff_x21 + 0x2c);
          uVar8 = *(undefined4 *)(unaff_x21 + 0x30);
          uVar9 = *(undefined4 *)(unaff_x21 + 0x34);
          if (*(char *)(unaff_x25 + 0x30e) == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
            *(undefined1 *)(unaff_x25 + 0x30e) = 1;
          }
          lVar2 = *(long *)(*unaff_x20 + 0xb8);
          uVar10 = *(undefined4 *)(lVar2 + 0x24);
          uVar11 = *(undefined4 *)(lVar2 + 0x28);
          uVar12 = *(undefined4 *)(lVar2 + 0x2c);
          if (*(char *)(unaff_x24 + 0x22f) == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum();
            lVar2 = *unaff_x20;
            *(undefined1 *)(unaff_x24 + 0x22f) = 1;
            lVar2 = *(long *)(lVar2 + 0xb8);
          }
          if (*(long *)(unaff_x19 + 0xa0) != 0) {
            uVar5 = *(undefined4 *)(lVar2 + 0x3c);
            uVar6 = *(undefined4 *)(lVar2 + 0x40);
            uVar7 = *(undefined4 *)(lVar2 + 0x44);
            UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                      (*(long *)(unaff_x19 + 0xa0),0);
            if (*(long *)(unaff_x19 + 0x90) != 0) {
              UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                        (*(long *)(unaff_x19 + 0x90),0);
              uStack0000000000000000 = uVar5;
              uStack0000000000000004 = uVar6;
              uStack0000000000000008 = uVar7;
              FUN_0510eccc(fStack000000000000005c,fStack0000000000000058,uVar4,uVar8,uVar9,uVar10,
                           uVar11,uVar12);
              if (*(uint *)(unaff_x21 + 0x18) < 3) goto LAB_0510e954;
              cVar1 = *(char *)(unaff_x19 + 0x29);
              uVar4 = *(undefined4 *)(unaff_x21 + 0x38);
              uVar8 = *(undefined4 *)(unaff_x21 + 0x3c);
              uVar9 = *(undefined4 *)(unaff_x21 + 0x40);
              if (*(char *)(unaff_x27 + 0x855) == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
                *(undefined1 *)(unaff_x27 + 0x855) = 1;
              }
              puVar3 = *(undefined4 **)(*unaff_x20 + 0xb8);
              uVar10 = puVar3[0xc];
              uVar11 = puVar3[0xd];
              uVar12 = puVar3[0xe];
              if (cVar1 == '\0') {
                if (*(char *)(unaff_x23 + 0x148) == '\0') {
                  AkMIDIEventCallbackInfo__get_byProgramNum();
                  lVar2 = *unaff_x20;
                  *(undefined1 *)(unaff_x23 + 0x148) = 1;
                  puVar3 = *(undefined4 **)(lVar2 + 0xb8);
                }
                if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_0510e950;
                uVar5 = *puVar3;
                uVar6 = puVar3[1];
                uVar7 = puVar3[2];
                UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0x88),0);
                if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_0510e950;
                UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0x78),0);
                uStack0000000000000000 = uVar5;
                uStack0000000000000004 = uVar6;
                uStack0000000000000008 = uVar7;
                FUN_0510eccc(fStack000000000000005c,fStack0000000000000058,uVar4,uVar8,uVar9,uVar10,
                             uVar11,uVar12);
                if (*(uint *)(unaff_x21 + 0x18) < 4) goto LAB_0510e954;
                uVar4 = *(undefined4 *)(unaff_x21 + 0x44);
                uVar8 = *(undefined4 *)(unaff_x21 + 0x48);
                uVar9 = *(undefined4 *)(unaff_x21 + 0x4c);
                if (*(char *)(unaff_x24 + 0x22f) == '\0') {
                  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
                  *(undefined1 *)(unaff_x24 + 0x22f) = 1;
                }
                puVar3 = *(undefined4 **)(*unaff_x20 + 0xb8);
                uVar10 = puVar3[0xf];
                uVar11 = puVar3[0x10];
                uVar12 = puVar3[0x11];
                if (*(char *)(unaff_x23 + 0x148) == '\0') {
                  AkMIDIEventCallbackInfo__get_byProgramNum();
                  lVar2 = *unaff_x20;
                  *(undefined1 *)(unaff_x23 + 0x148) = 1;
                  puVar3 = *(undefined4 **)(lVar2 + 0xb8);
                }
                if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_0510e950;
                uVar5 = *puVar3;
                uVar6 = puVar3[1];
                uVar7 = puVar3[2];
                UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0x90),0);
                if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_0510e950;
                UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0x80),0);
                uStack0000000000000000 = uVar5;
                uStack0000000000000004 = uVar6;
                uStack0000000000000008 = uVar7;
              }
              else {
                if (*(char *)(unaff_x26 + 0x312) == '\0') {
                  AkMIDIEventCallbackInfo__get_byProgramNum();
                  lVar2 = *unaff_x20;
                  *(undefined1 *)(unaff_x26 + 0x312) = 1;
                  puVar3 = *(undefined4 **)(lVar2 + 0xb8);
                }
                if (*(long *)(unaff_x19 + 0xa8) == 0) goto LAB_0510e950;
                uVar5 = puVar3[6];
                uVar6 = puVar3[7];
                uVar7 = puVar3[8];
                UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0xa8),0);
                if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_0510e950;
                UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0x78),0);
                uStack0000000000000000 = uVar5;
                uStack0000000000000004 = uVar6;
                uStack0000000000000008 = uVar7;
                FUN_0510eccc(fStack000000000000005c,fStack0000000000000058,uVar4,uVar8,uVar9,uVar10,
                             uVar11,uVar12);
                if (*(uint *)(unaff_x21 + 0x18) < 3) goto LAB_0510e954;
                uVar4 = *(undefined4 *)(unaff_x21 + 0x38);
                uVar8 = *(undefined4 *)(unaff_x21 + 0x3c);
                uVar9 = *(undefined4 *)(unaff_x21 + 0x40);
                if (*(char *)(unaff_x27 + 0x855) == '\0') {
                  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
                  *(undefined1 *)(unaff_x27 + 0x855) = 1;
                }
                lVar2 = *(long *)(*unaff_x20 + 0xb8);
                uVar10 = *(undefined4 *)(lVar2 + 0x30);
                uVar11 = *(undefined4 *)(lVar2 + 0x34);
                uVar12 = *(undefined4 *)(lVar2 + 0x38);
                if (*(char *)(unaff_x25 + 0x30e) == '\0') {
                  AkMIDIEventCallbackInfo__get_byProgramNum();
                  lVar2 = *unaff_x20;
                  *(undefined1 *)(unaff_x25 + 0x30e) = 1;
                  lVar2 = *(long *)(lVar2 + 0xb8);
                }
                if (*(long *)(unaff_x19 + 0xa8) == 0) goto LAB_0510e950;
                uVar5 = *(undefined4 *)(lVar2 + 0x24);
                uVar6 = *(undefined4 *)(lVar2 + 0x28);
                uVar7 = *(undefined4 *)(lVar2 + 0x2c);
                UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0xa8),0);
                if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_0510e950;
                UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0x88),0);
                uStack0000000000000000 = uVar5;
                uStack0000000000000004 = uVar6;
                uStack0000000000000008 = uVar7;
                FUN_0510eccc(fStack000000000000005c,fStack0000000000000058,uVar4,uVar8,uVar9,uVar10,
                             uVar11,uVar12);
                if (*(uint *)(unaff_x21 + 0x18) < 4) goto LAB_0510e954;
                uVar4 = *(undefined4 *)(unaff_x21 + 0x44);
                uVar8 = *(undefined4 *)(unaff_x21 + 0x48);
                uVar9 = *(undefined4 *)(unaff_x21 + 0x4c);
                if (*(char *)(unaff_x24 + 0x22f) == '\0') {
                  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
                  *(undefined1 *)(unaff_x24 + 0x22f) = 1;
                }
                lVar2 = *(long *)(*unaff_x20 + 0xb8);
                uVar10 = *(undefined4 *)(lVar2 + 0x3c);
                uVar11 = *(undefined4 *)(lVar2 + 0x40);
                uVar12 = *(undefined4 *)(lVar2 + 0x44);
                if (*(char *)(unaff_x26 + 0x312) == '\0') {
                  AkMIDIEventCallbackInfo__get_byProgramNum();
                  lVar2 = *unaff_x20;
                  *(undefined1 *)(unaff_x26 + 0x312) = 1;
                  lVar2 = *(long *)(lVar2 + 0xb8);
                }
                if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_0510e950;
                uVar5 = *(undefined4 *)(lVar2 + 0x18);
                uVar6 = *(undefined4 *)(lVar2 + 0x1c);
                uVar7 = *(undefined4 *)(lVar2 + 0x20);
                UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0xb0),0);
                if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_0510e950;
                UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0x80),0);
                uStack0000000000000000 = uVar5;
                uStack0000000000000004 = uVar6;
                uStack0000000000000008 = uVar7;
                FUN_0510eccc(fStack000000000000005c,fStack0000000000000058,uVar4,uVar8,uVar9,uVar10,
                             uVar11,uVar12);
                if (*(uint *)(unaff_x21 + 0x18) < 4) goto LAB_0510e954;
                uVar4 = *(undefined4 *)(unaff_x21 + 0x44);
                uVar8 = *(undefined4 *)(unaff_x21 + 0x48);
                uVar9 = *(undefined4 *)(unaff_x21 + 0x4c);
                if (*(char *)(unaff_x24 + 0x22f) == '\0') {
                  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
                  *(undefined1 *)(unaff_x24 + 0x22f) = 1;
                }
                lVar2 = *(long *)(*unaff_x20 + 0xb8);
                uVar10 = *(undefined4 *)(lVar2 + 0x3c);
                uVar11 = *(undefined4 *)(lVar2 + 0x40);
                uVar12 = *(undefined4 *)(lVar2 + 0x44);
                if (*(char *)(unaff_x25 + 0x30e) == '\0') {
                  AkMIDIEventCallbackInfo__get_byProgramNum();
                  lVar2 = *unaff_x20;
                  *(undefined1 *)(unaff_x25 + 0x30e) = 1;
                  lVar2 = *(long *)(lVar2 + 0xb8);
                }
                if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_0510e950;
                uVar5 = *(undefined4 *)(lVar2 + 0x24);
                uVar6 = *(undefined4 *)(lVar2 + 0x28);
                uVar7 = *(undefined4 *)(lVar2 + 0x2c);
                UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0xb0),0);
                if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_0510e950;
                UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0x90),0);
                uStack0000000000000000 = uVar5;
                uStack0000000000000004 = uVar6;
                uStack0000000000000008 = uVar7;
              }
              FUN_0510eccc(fStack000000000000005c,fStack0000000000000058,uVar4,uVar8,uVar9,uVar10,
                           uVar11,uVar12);
              lVar2 = *(long *)(unaff_x19 + 0x40);
              if (lVar2 != 0) {
                uVar4 = *(undefined4 *)(unaff_x19 + 0x24);
                *(float *)(lVar2 + 0x2c) = fStack000000000000005c;
                *(float *)(lVar2 + 0x30) = fStack0000000000000058;
                *(undefined4 *)(lVar2 + 0x34) = uVar4;
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


