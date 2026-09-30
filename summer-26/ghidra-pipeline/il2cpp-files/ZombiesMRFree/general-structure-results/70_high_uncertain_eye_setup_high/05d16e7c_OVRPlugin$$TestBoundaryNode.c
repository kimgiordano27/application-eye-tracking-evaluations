/*
FUNCTION_NAME: OVRPlugin$$TestBoundaryNode
ENTRY_POINT: 05d16e7c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin__TestBoundaryNode(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long lVar4;
  long unaff_x21;
  byte unaff_w22;
  uint unaff_w23;
  long *unaff_x24;
  undefined4 uVar5;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined4 unaff_s15;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  
  uVar5 = unaff_s15;
  do {
    uStack0000000000000000 = uVar5;
    uStack0000000000000004 = (undefined4)unaff_d8;
    uStack0000000000000008 = (undefined4)unaff_d9;
    uVar3 = FUN_06971770(unaff_d13);
    if ((uVar3 & 1) != 0) {
LAB_05d16eb8:
      return unaff_w22 & 1;
    }
    do {
      uVar1 = *(uint *)(unaff_x21 + 0x18);
      unaff_w23 = unaff_w23 + 1;
      unaff_w22 = (int)unaff_w23 < (int)uVar1;
      if ((int)uVar1 <= (int)unaff_w23) goto LAB_05d16eb8;
      if (uVar1 <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar4 = *(long *)(unaff_x21 + (long)(int)unaff_w23 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_05d16ee4;
      uVar3 = FUN_06975d28(lVar4,0);
    } while ((uVar3 & 1) == 0);
    if ((unaff_x19 == 0) || (lVar2 = FUN_068f5d7c(), lVar2 == 0)) {
LAB_05d16ee4:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    unaff_d13 = FUN_069042b4(lVar2,0);
    unaff_d8 = unaff_d14;
    unaff_d9 = unaff_d10;
    lVar2 = FUN_068f5d7c();
    if (lVar2 == 0) goto LAB_05d16ee4;
    FUN_0690449c(lVar2,0);
    lVar2 = FUN_068f5d7c(lVar4,0);
    if (lVar2 == 0) goto LAB_05d16ee4;
    uVar5 = FUN_069042b4(lVar2,0);
    lVar4 = FUN_068f5d7c(lVar4,0);
    if (lVar4 == 0) goto LAB_05d16ee4;
    FUN_0690449c(lVar4,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
  } while( true );
}


