/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$SaveUnifiedConsent
ENTRY_POINT: 05be9ec8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnifiedConsent__SaveUnifiedConsent(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  undefined8 *unaff_x22;
  undefined4 unaff_s8;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  lVar1 = FUN_05bea010();
  if (lVar1 == 0) {
    uStack0000000000000008 = *(undefined4 *)(unaff_x22 + 1);
    uStack000000000000000c = *(undefined4 *)((long)unaff_x22 + 0xc);
    in_stack_00000000 = *unaff_x22;
    uStack0000000000000010 = *(undefined4 *)(unaff_x22 + 2);
    uStack0000000000000014 = *(undefined4 *)((long)unaff_x22 + 0x14);
    in_stack_00000018 = *(undefined4 *)(unaff_x22 + 3);
  }
  else {
    plVar2 = (long *)FUN_05bea010();
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar1 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07112a48) {
          puVar3 = (undefined8 *)(lVar1 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_05be9f50;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_031c0d08(plVar2,*(long *)PTR_DAT_07112a48,2);
LAB_05be9f50:
    (*(code *)*puVar3)(plVar2);
  }
  if ((unaff_w21 & 1) != 0) {
    *(undefined4 *)(unaff_x20 + 200) = unaff_s8;
    *(undefined8 *)(unaff_x20 + 0xe8) = in_stack_00000000;
    *(undefined4 *)(unaff_x20 + 0xf0) = uStack0000000000000008;
    if (*(char *)(unaff_x20 + 0x104) == '\0') {
      *(undefined1 *)(unaff_x20 + 0x104) = 1;
      FUN_05be9e30(unaff_x20 + 0x80,unaff_x20 + 0x88,1,unaff_w19 & 1);
      *(undefined4 *)(unaff_x20 + 0x110) = *(undefined4 *)(unaff_x20 + 300);
      *(undefined8 *)(unaff_x20 + 0x108) = *(undefined8 *)(unaff_x20 + 0x124);
    }
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    FUN_05bea0cc(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                 in_stack_00000018);
  }
  return;
}


