/*
FUNCTION_NAME: Oculus.Platform.MessageWithNetSyncSessionList$$GetNetSyncSessionList
ENTRY_POINT: 0510ded0
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Oculus_Platform_MessageWithNetSyncSessionList__GetNetSyncSessionList(long param_1)

{
  char cVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x23;
  undefined4 uVar3;
  float unaff_s8;
  float unaff_s9;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fStack000000000000005c;
  
  if (param_1 == 0) goto LAB_0510e950;
  if (*(int *)(param_1 + 0x18) == 0) goto LAB_0510e954;
  cVar1 = *(char *)(unaff_x19 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  if (DAT_06a67312 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    DAT_06a67312 = '\x01';
  }
  lVar2 = *(long *)(*unaff_x20 + 0xb8);
  uVar6 = *(undefined4 *)(lVar2 + 0x18);
  uVar7 = *(undefined4 *)(lVar2 + 0x1c);
  uVar8 = *(undefined4 *)(lVar2 + 0x20);
  fStack000000000000005c = unaff_s8;
  if (cVar1 == '\0') {
    if (*(char *)(unaff_x23 + 0x148) == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum();
      *(undefined1 *)(unaff_x23 + 0x148) = 1;
    }
    if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_0510e950;
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0x78),0);
    if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_0510e950;
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0x80),0);
    FUN_0510eccc(fStack000000000000005c,unaff_s9,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
    if (*(uint *)(param_1 + 0x18) < 2) goto LAB_0510e954;
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    uVar4 = *(undefined4 *)(param_1 + 0x30);
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    if (DAT_06a6730e == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a6730e = '\x01';
    }
    lVar2 = *(long *)(*unaff_x20 + 0xb8);
    uVar6 = *(undefined4 *)(lVar2 + 0x24);
    uVar7 = *(undefined4 *)(lVar2 + 0x28);
    uVar8 = *(undefined4 *)(lVar2 + 0x2c);
    if (*(char *)(unaff_x23 + 0x148) == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum();
      *(undefined1 *)(unaff_x23 + 0x148) = 1;
    }
    if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_0510e950;
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0x88),0);
    if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_0510e950;
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0x90),0);
  }
  else {
    if (DAT_06a67855 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum();
      DAT_06a67855 = '\x01';
    }
    if (*(long *)(unaff_x19 + 0x98) == 0) goto LAB_0510e950;
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0x98),0);
    if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_0510e950;
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0x78),0);
    FUN_0510eccc(fStack000000000000005c,unaff_s9,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
    if (*(int *)(param_1 + 0x18) == 0) goto LAB_0510e954;
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    uVar4 = *(undefined4 *)(param_1 + 0x24);
    uVar5 = *(undefined4 *)(param_1 + 0x28);
    if (DAT_06a67312 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67312 = '\x01';
    }
    lVar2 = *(long *)(*unaff_x20 + 0xb8);
    uVar6 = *(undefined4 *)(lVar2 + 0x18);
    uVar7 = *(undefined4 *)(lVar2 + 0x1c);
    uVar8 = *(undefined4 *)(lVar2 + 0x20);
    if (DAT_06a6722f == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum();
      DAT_06a6722f = '\x01';
    }
    if (*(long *)(unaff_x19 + 0x98) == 0) goto LAB_0510e950;
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0x98),0);
    if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_0510e950;
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0x80),0);
    FUN_0510eccc(fStack000000000000005c,unaff_s9,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
    if (*(uint *)(param_1 + 0x18) < 2) goto LAB_0510e954;
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    uVar4 = *(undefined4 *)(param_1 + 0x30);
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    if (DAT_06a6730e == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a6730e = '\x01';
    }
    lVar2 = *(long *)(*unaff_x20 + 0xb8);
    uVar6 = *(undefined4 *)(lVar2 + 0x24);
    uVar7 = *(undefined4 *)(lVar2 + 0x28);
    uVar8 = *(undefined4 *)(lVar2 + 0x2c);
    if (DAT_06a67855 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum();
      DAT_06a67855 = '\x01';
    }
    if (*(long *)(unaff_x19 + 0xa0) == 0) goto LAB_0510e950;
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0xa0),0);
    if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_0510e950;
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0x88),0);
    FUN_0510eccc(fStack000000000000005c,unaff_s9,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
    if (*(uint *)(param_1 + 0x18) < 2) goto LAB_0510e954;
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    uVar4 = *(undefined4 *)(param_1 + 0x30);
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    if (DAT_06a6730e == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a6730e = '\x01';
    }
    lVar2 = *(long *)(*unaff_x20 + 0xb8);
    uVar6 = *(undefined4 *)(lVar2 + 0x24);
    uVar7 = *(undefined4 *)(lVar2 + 0x28);
    uVar8 = *(undefined4 *)(lVar2 + 0x2c);
    if (DAT_06a6722f == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum();
      DAT_06a6722f = '\x01';
    }
    if (*(long *)(unaff_x19 + 0xa0) == 0) goto LAB_0510e950;
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0xa0),0);
    if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_0510e950;
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0x90),0);
  }
  FUN_0510eccc(fStack000000000000005c,unaff_s9,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  if (*(uint *)(param_1 + 0x18) < 3) goto LAB_0510e954;
  cVar1 = *(char *)(unaff_x19 + 0x29);
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  if (DAT_06a67855 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    DAT_06a67855 = '\x01';
  }
  lVar2 = *(long *)(*unaff_x20 + 0xb8);
  uVar6 = *(undefined4 *)(lVar2 + 0x30);
  uVar7 = *(undefined4 *)(lVar2 + 0x34);
  uVar8 = *(undefined4 *)(lVar2 + 0x38);
  if (cVar1 == '\0') {
    if (*(char *)(unaff_x23 + 0x148) == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum();
      *(undefined1 *)(unaff_x23 + 0x148) = 1;
    }
    if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_0510e950;
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0x88),0);
    if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_0510e950;
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0x78),0);
    FUN_0510eccc(fStack000000000000005c,unaff_s9,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
    if (*(uint *)(param_1 + 0x18) < 4) goto LAB_0510e954;
    uVar3 = *(undefined4 *)(param_1 + 0x44);
    uVar4 = *(undefined4 *)(param_1 + 0x48);
    uVar5 = *(undefined4 *)(param_1 + 0x4c);
    if (DAT_06a6722f == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a6722f = '\x01';
    }
    lVar2 = *(long *)(*unaff_x20 + 0xb8);
    uVar6 = *(undefined4 *)(lVar2 + 0x3c);
    uVar7 = *(undefined4 *)(lVar2 + 0x40);
    uVar8 = *(undefined4 *)(lVar2 + 0x44);
    if (*(char *)(unaff_x23 + 0x148) == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum();
      *(undefined1 *)(unaff_x23 + 0x148) = 1;
    }
    if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_0510e950;
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0x90),0);
    if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_0510e950;
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0x80),0);
  }
  else {
    if (DAT_06a67312 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum();
      DAT_06a67312 = '\x01';
    }
    if (*(long *)(unaff_x19 + 0xa8) == 0) goto LAB_0510e950;
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0xa8),0);
    if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_0510e950;
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0x78),0);
    FUN_0510eccc(fStack000000000000005c,unaff_s9,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
    if (*(uint *)(param_1 + 0x18) < 3) {
LAB_0510e954:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    uVar3 = *(undefined4 *)(param_1 + 0x38);
    uVar4 = *(undefined4 *)(param_1 + 0x3c);
    uVar5 = *(undefined4 *)(param_1 + 0x40);
    if (DAT_06a67855 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67855 = '\x01';
    }
    lVar2 = *(long *)(*unaff_x20 + 0xb8);
    uVar6 = *(undefined4 *)(lVar2 + 0x30);
    uVar7 = *(undefined4 *)(lVar2 + 0x34);
    uVar8 = *(undefined4 *)(lVar2 + 0x38);
    if (DAT_06a6730e == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum();
      DAT_06a6730e = '\x01';
    }
    if (*(long *)(unaff_x19 + 0xa8) == 0) goto LAB_0510e950;
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0xa8),0);
    if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_0510e950;
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0x88),0);
    FUN_0510eccc(fStack000000000000005c,unaff_s9,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
    if (*(uint *)(param_1 + 0x18) < 4) goto LAB_0510e954;
    uVar3 = *(undefined4 *)(param_1 + 0x44);
    uVar4 = *(undefined4 *)(param_1 + 0x48);
    uVar5 = *(undefined4 *)(param_1 + 0x4c);
    if (DAT_06a6722f == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a6722f = '\x01';
    }
    lVar2 = *(long *)(*unaff_x20 + 0xb8);
    uVar6 = *(undefined4 *)(lVar2 + 0x3c);
    uVar7 = *(undefined4 *)(lVar2 + 0x40);
    uVar8 = *(undefined4 *)(lVar2 + 0x44);
    if (DAT_06a67312 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum();
      DAT_06a67312 = '\x01';
    }
    if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_0510e950;
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0xb0),0);
    if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_0510e950;
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0x80),0);
    FUN_0510eccc(fStack000000000000005c,unaff_s9,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
    if (*(uint *)(param_1 + 0x18) < 4) goto LAB_0510e954;
    uVar3 = *(undefined4 *)(param_1 + 0x44);
    uVar4 = *(undefined4 *)(param_1 + 0x48);
    uVar5 = *(undefined4 *)(param_1 + 0x4c);
    if (DAT_06a6722f == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a6722f = '\x01';
    }
    lVar2 = *(long *)(*unaff_x20 + 0xb8);
    uVar6 = *(undefined4 *)(lVar2 + 0x3c);
    uVar7 = *(undefined4 *)(lVar2 + 0x40);
    uVar8 = *(undefined4 *)(lVar2 + 0x44);
    if (DAT_06a6730e == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum();
      DAT_06a6730e = '\x01';
    }
    if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_0510e950;
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0xb0),0);
    if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_0510e950;
    UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(*(long *)(unaff_x19 + 0x90),0);
  }
  FUN_0510eccc(fStack000000000000005c,unaff_s9,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  lVar2 = *(long *)(unaff_x19 + 0x40);
  if (lVar2 != 0) {
    uVar3 = *(undefined4 *)(unaff_x19 + 0x24);
    *(float *)(lVar2 + 0x2c) = fStack000000000000005c;
    *(float *)(lVar2 + 0x30) = unaff_s9;
    *(undefined4 *)(lVar2 + 0x34) = uVar3;
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      FUN_05f00f94(fStack000000000000005c * -0.5,unaff_s9 * 0.5,0,*(long *)(unaff_x19 + 0x48),0);
      return;
    }
  }
LAB_0510e950:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


