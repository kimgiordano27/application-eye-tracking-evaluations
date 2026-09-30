/*
FUNCTION_NAME: OVRPlugin.Media$$SetAvailableQueueIndexVulkan
ENTRY_POINT: 05346cc8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetAvailableQueueIndexVulkan(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  int unaff_w20;
  long *plVar6;
  long *unaff_x24;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  long in_stack_00000048;
  
LAB_05346d78:
  do {
    unaff_w20 = unaff_w20 + 1;
    if (unaff_w20 == 0x1a) {
      return;
    }
    uVar1 = FUN_05346470();
  } while ((uVar1 & 1) == 0);
  if (in_stack_00000048 == 0) goto LAB_05346da4;
  lVar2 = FUN_060ed87c(in_stack_00000048,0);
  if (*(char *)(unaff_x19 + 0x80) == '\0') {
LAB_05346c98:
    if (lVar2 != 0) {
      uVar1 = FUN_060f0d1c(lVar2,0);
      if ((uVar1 & 1) != 0) {
        FUN_06171d4c(in_stack_00000048,0);
        FUN_060f0c58(lVar2,0,0);
      }
      goto LAB_05346d78;
    }
  }
  else {
    plVar6 = *(long **)(unaff_x19 + 0x38);
    if (plVar6 == (long *)0x0) goto LAB_05346da4;
    lVar4 = *plVar6;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 9) * 0x10 + 0x138);
          goto LAB_05346c40;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(plVar6,*unaff_x24,9);
LAB_05346c40:
    uVar1 = (*(code *)*puVar3)(plVar6,unaff_w20);
    if ((uVar1 & 1) == 0) goto LAB_05346c98;
    if (lVar2 == 0) goto LAB_05346da4;
    uVar1 = FUN_060f0d1c(lVar2,0);
    if ((uVar1 & 1) != 0) {
      FUN_06171ba4(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                   in_stack_00000048,0);
      FUN_06171c78(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                   in_stack_00000018,in_stack_00000048,0);
      goto LAB_05346d78;
    }
    lVar4 = FUN_060f0a10(lVar2,0);
    if (lVar4 == 0) goto LAB_05346da4;
    FUN_060ffcc0(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar4,0);
    FUN_06171644(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                 in_stack_00000048,0);
    lVar4 = FUN_060f0a10(lVar2,0);
    if (lVar4 != 0) {
      FUN_060ffe7c(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                   in_stack_00000018,lVar4,0);
      FUN_061717f0(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                   in_stack_00000018,in_stack_00000048,0);
      FUN_060f0c58(lVar2,1,0);
      FUN_06171eb4(in_stack_00000048,0);
      goto LAB_05346d78;
    }
  }
LAB_05346da4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


