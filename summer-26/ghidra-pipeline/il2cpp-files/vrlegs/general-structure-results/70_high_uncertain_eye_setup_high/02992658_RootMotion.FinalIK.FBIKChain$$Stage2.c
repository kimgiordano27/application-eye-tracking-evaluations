/*
FUNCTION_NAME: RootMotion.FinalIK.FBIKChain$$Stage2
ENTRY_POINT: 02992658
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0299268c) */
/* WARNING: Removing unreachable block (ram,0x02992798) */
/* WARNING: Removing unreachable block (ram,0x029927a8) */

void RootMotion_FinalIK_FBIKChain__Stage2(long param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  int unaff_w22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  char cStack000000000000000c;
  char in_stack_00000010;
  long in_stack_00000020;
  byte bStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  while( true ) {
    unaff_w22 = unaff_w22 + 1;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(param_1 + 0x18) <= unaff_w22) break;
    FUN_02215a88(param_1,unaff_w22,&stack0x00000020,*unaff_x23);
    lVar7 = in_stack_00000020;
    if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((*(byte *)(in_stack_00000020 + 0x10) >> 1 & 1) == 0) {
      bVar2 = *(byte *)(in_stack_00000020 + 0x12);
      if ((ulong)bVar2 != 0xff) {
        if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        bStack0000000000000028 = bVar2;
        uVar3 = FUN_021e4dc4(*(long *)(unaff_x19 + 0x1b0),&stack0x00000028,*unaff_x24);
        if ((uVar3 & 1) != 0) {
          lVar4 = *unaff_x20;
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar4 + 0x18) <= (uint)bVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          piVar5 = (int *)(lVar4 + (ulong)bVar2 * 4 + 0x20);
          if (*piVar5 == 0) {
            *piVar5 = *(int *)(lVar7 + 0x14);
          }
          if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uStack000000000000002c = *(undefined1 *)(lVar7 + 0x12);
          FUN_021e514c(*(long *)(unaff_x19 + 0x1b0),(long)&stack0x00000028 + 4,*unaff_x25);
          if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x20) == 0) break;
        }
      }
    }
    param_1 = *(long *)(unaff_x19 + 0x128);
  }
  if (in_stack_00000010 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  uVar10 = *(undefined8 *)(unaff_x19 + 0x188);
  cStack000000000000000c = '\0';
  FUN_027e0bd8(uVar10,&stack0x0000000c,0);
  lVar7 = *(long *)(unaff_x19 + 0x188);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar1 = *(uint *)(lVar7 + 0x18);
  if (0 < (int)uVar1) {
    lVar6 = *unaff_x20;
    lVar4 = 0;
    do {
      if (uVar1 <= (uint)lVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar6 + 0x18) <= (uint)lVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      iVar9 = *(int *)(lVar6 + 0x20 + lVar4 * 4);
      lVar8 = *(long *)(lVar7 + 0x20 + lVar4 * 8);
      if (iVar9 < 1) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar9 = *(int *)(lVar8 + 0x68) + 1;
      }
      else if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar4 = lVar4 + 1;
      *(int *)(lVar8 + 0x70) = iVar9;
    } while ((int)lVar4 < (int)uVar1);
  }
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar10,0);
  }
  return;
}


