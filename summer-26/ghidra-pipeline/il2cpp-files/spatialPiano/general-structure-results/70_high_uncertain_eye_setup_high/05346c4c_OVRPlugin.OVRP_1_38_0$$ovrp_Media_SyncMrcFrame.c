/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SyncMrcFrame
ENTRY_POINT: 05346c4c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SyncMrcFrame(code *param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  long in_stack_00000048;
  
  do {
    uVar2 = (*param_1)(param_2,unaff_w20);
    if ((uVar2 & 1) == 0) goto LAB_05346c98;
    if (unaff_x22 == 0) goto LAB_05346da4;
    uVar2 = FUN_060f0d1c(unaff_x22,0);
    if ((uVar2 & 1) == 0) {
      lVar3 = FUN_060f0a10(unaff_x22,0);
      if (lVar3 == 0) {
LAB_05346da4:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_060ffcc0(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar3,0);
      FUN_06171644(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,unaff_x21,0)
      ;
      lVar3 = FUN_060f0a10(unaff_x22,0);
      if (lVar3 == 0) goto LAB_05346da4;
      FUN_060ffe7c(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                   in_stack_00000018,lVar3,0);
      FUN_061717f0(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                   in_stack_00000018,unaff_x21,0);
      FUN_060f0c58(unaff_x22,1,0);
      FUN_06171eb4(unaff_x21,0);
    }
    else {
      FUN_06171ba4(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,unaff_x21,0)
      ;
      FUN_06171c78(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                   in_stack_00000018,unaff_x21,0);
    }
    while( true ) {
      do {
        unaff_w20 = unaff_w20 + 1;
        if (unaff_w20 == 0x1a) {
          return;
        }
        uVar2 = FUN_05346470();
      } while ((uVar2 & 1) == 0);
      if (in_stack_00000048 == 0) goto LAB_05346da4;
      unaff_x22 = FUN_060ed87c(in_stack_00000048,0);
      unaff_x21 = in_stack_00000048;
      if (*(char *)(unaff_x19 + 0x80) != '\0') break;
LAB_05346c98:
      if (unaff_x22 == 0) goto LAB_05346da4;
      uVar2 = FUN_060f0d1c(unaff_x22,0);
      if ((uVar2 & 1) != 0) {
        FUN_06171d4c(unaff_x21,0);
        FUN_060f0c58(unaff_x22,0,0);
      }
    }
    param_2 = *(long **)(unaff_x19 + 0x38);
    if (param_2 == (long *)0x0) goto LAB_05346da4;
    lVar3 = *param_2;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar4 + 9) * 0x10 + 0x138);
          goto LAB_05346c40;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02f421d0(param_2,*unaff_x24,9);
LAB_05346c40:
    param_1 = (code *)*puVar1;
  } while( true );
}


