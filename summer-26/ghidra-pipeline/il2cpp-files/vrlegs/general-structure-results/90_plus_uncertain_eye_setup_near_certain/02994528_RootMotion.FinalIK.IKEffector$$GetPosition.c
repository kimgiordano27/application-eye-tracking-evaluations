/*
FUNCTION_NAME: RootMotion.FinalIK.IKEffector$$GetPosition
ENTRY_POINT: 02994528
PROGRAM: vrlegs-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029945ac) */
/* WARNING: Removing unreachable block (ram,0x029945b0) */
/* WARNING: Removing unreachable block (ram,0x029946b0) */

void RootMotion_FinalIK_IKEffector__GetPosition(void)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  uint unaff_w26;
  undefined8 *unaff_x27;
  ulong unaff_x28;
  char in_stack_00000008;
  undefined8 in_stack_00000018;
  
  while( true ) {
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xa8);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_029bf178(lVar3,0x14,0);
    do {
      do {
        unaff_w26 = unaff_w26 + 1;
        if (in_stack_00000018._4_1_ <= unaff_w26) {
          if ((unaff_x28 & 1) != 0) {
            thunk_FUN_01aa519c(unaff_x19 + 0x130,1,0,0);
          }
          return;
        }
        if (*(long *)(unaff_x19 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar3 = FUN_02994944();
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if ((*(char *)(lVar3 + 0x11) == '\x01') || (*(char *)(lVar3 + 0x11) == '\x10')) {
          FUN_0298f414();
          unaff_x28 = 1;
        }
        else {
          uVar4 = *(undefined8 *)(unaff_x19 + 0x1a8);
          in_stack_00000008 = '\0';
          FUN_027e0bd8(uVar4,&stack0x00000008,0);
          if (*(long *)(unaff_x19 + 0x1a8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_02265dfc(*(long *)(unaff_x19 + 0x1a8),lVar3,*unaff_x27);
          if (in_stack_00000008 != '\0') {
            OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
          }
        }
      } while ((*(byte *)(lVar3 + 0x10) & 1) == 0);
      FUN_02993d14();
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar2 = FUN_0299ec14(*(long *)(unaff_x19 + 0x10),0);
    } while ((uVar2 & 1) == 0);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(unaff_x19 + 0xc0) == 0) break;
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xa0);
    uVar1 = FUN_02f0ce18(*(long *)(unaff_x19 + 0xc0),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(undefined4 *)(lVar3 + 0x40) = uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


