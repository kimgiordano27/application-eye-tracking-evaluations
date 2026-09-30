/*
FUNCTION_NAME: Oculus.Platform.Callback$$FlushJoinIntentNotificationQueue
ENTRY_POINT: 05c51a2c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Oculus_Platform_Callback__FlushJoinIntentNotificationQueue(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  
  FUN_02fe925c();
  *(undefined1 *)(unaff_x21 + 0xd8) = 1;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  if (DAT_07391d4a == '\0') {
    FUN_02fe925c(PTR_DAT_06f9ace8);
    DAT_07391d4a = '\x01';
  }
  lVar4 = *unaff_x20;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar4 = *unaff_x20;
  }
  puVar2 = PTR_DAT_06fb4e90;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
  if (lVar4 != 0) {
    FUN_05caa520(lVar4,0);
    lVar4 = FUN_05c518c8();
    uVar5 = thunk_FUN_03010710(*(undefined8 *)(unaff_x19 + 0x30),*(undefined8 *)puVar2);
    puVar3 = PTR_DAT_06fb51d8;
    puVar2 = PTR_DAT_06f9acc8;
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if (lVar9 != 0) {
      if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
        uVar11 = 0;
        uVar8 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
        do {
          if (uVar8 <= uVar11) goto LAB_05c51bd4;
          uVar6 = thunk_FUN_03010710(*(undefined8 *)(lVar9 + 0x20 + uVar11 * 8),
                                     *(undefined8 *)puVar2);
          if (lVar4 == 0) goto Oculus_Platform_Callback_RequestCallback__HandleMessage;
          FUN_04d2b970(lVar4,uVar6,uVar5,*(undefined8 *)puVar3);
          uVar8 = (ulong)*(uint *)(lVar9 + 0x18);
          uVar11 = uVar11 + 1;
        } while ((long)uVar11 < (long)(int)*(uint *)(lVar9 + 0x18));
      }
      puVar2 = PTR_DAT_06fb51e0;
      lVar9 = *(long *)(unaff_x19 + 0x28);
      if (lVar9 != 0) {
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (0 < (int)uVar1) {
          uVar10 = 0;
          do {
            if (uVar1 <= uVar10) {
LAB_05c51bd4:
                    /* WARNING: Subroutine does not return */
              FUN_02fe94f0();
            }
            lVar7 = *(long *)(lVar9 + (long)(int)uVar10 * 8 + 0x20);
            if ((lVar7 == 0) || (lVar7 = FUN_03c73fb8(lVar7,*(undefined8 *)puVar2), lVar7 == 0))
            goto Oculus_Platform_Callback_RequestCallback__HandleMessage;
            if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
              uVar11 = 0;
              uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
              do {
                if (uVar8 <= uVar11) goto LAB_05c51bd4;
                if (lVar4 == 0) goto Oculus_Platform_Callback_RequestCallback__HandleMessage;
                FUN_04d2b970(lVar4,*(undefined8 *)(lVar7 + 0x20 + uVar11 * 8),uVar5,
                             *(undefined8 *)puVar3);
                uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
                uVar11 = uVar11 + 1;
              } while ((long)uVar11 < (long)(int)*(uint *)(lVar7 + 0x18));
            }
            uVar1 = *(uint *)(lVar9 + 0x18);
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)uVar1);
        }
        return;
      }
    }
  }
Oculus_Platform_Callback_RequestCallback__HandleMessage:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


