/*
FUNCTION_NAME: RootMotion.FinalIK.FBIKChain$$ForwardReach
ENTRY_POINT: 0299241c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x029927a8) */
/* WARNING: Removing unreachable block (ram,0x0299247c) */
/* WARNING: Removing unreachable block (ram,0x0299268c) */
/* WARNING: Removing unreachable block (ram,0x02992798) */
/* WARNING: Removing unreachable block (ram,0x029927a0) */

void RootMotion_FinalIK_FBIKChain__ForwardReach(long param_1)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 in_ZR;
  long lVar7;
  int *piVar8;
  char in_w9;
  long lVar9;
  ulong uVar10;
  int iVar11;
  long in_x10;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar15;
  undefined8 *unaff_x22;
  char cStack000000000000000c;
  char cStack0000000000000010;
  char cStack0000000000000014;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  byte bStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  while( true ) {
    if ((!(bool)in_ZR) && (0 < *(int *)(in_x10 + 0x6c))) {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      in_stack_00000018._4_1_ = in_w9;
      FUN_021e5f08(*(long *)(unaff_x19 + 0x1b0),(long)&stack0x00000018 + 4,*unaff_x22);
      param_1 = *(long *)(unaff_x19 + 0x188);
    }
    unaff_x21 = unaff_x21 + 1;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((int)*(uint *)(param_1 + 0x18) <= (int)(uint)unaff_x21) break;
    if (*(uint *)(param_1 + 0x18) <= (uint)unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    in_x10 = *(long *)(param_1 + unaff_x21 * 8 + 0x20);
    if (in_x10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    in_w9 = *(char *)(in_x10 + 0x10);
    in_ZR = in_w9 == -1;
  }
  if (cStack0000000000000014 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  lVar7 = *(long *)(unaff_x19 + 0x1b8);
  lVar9 = *(long *)(unaff_x19 + 0x188);
  plVar1 = (long *)(unaff_x19 + 0x1b8);
  if (lVar7 == 0) {
    if (lVar9 == 0) goto LAB_02992774;
  }
  else {
    if (lVar9 == 0) {
LAB_02992774:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar12 = *(ulong *)(lVar7 + 0x18);
    iVar11 = (int)uVar12;
    if (iVar11 == *(int *)(lVar9 + 0x18)) {
      if (0 < iVar11) {
        uVar10 = 0;
        do {
          if ((uVar12 & 0xffffffff) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          *(undefined4 *)(lVar7 + 0x20 + uVar10 * 4) = 0;
          uVar10 = uVar10 + 1;
        } while ((long)uVar10 < (long)iVar11);
      }
      goto LAB_02992570;
    }
  }
  lVar7 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbe888,*(undefined4 *)(lVar9 + 0x18));
  *plVar1 = lVar7;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,lVar7);
LAB_02992570:
  uVar15 = *(undefined8 *)(unaff_x19 + 0x128);
  cStack0000000000000010 = '\0';
  FUN_027e0bd8(uVar15,&stack0x00000010,0);
  puVar6 = PTR_DAT_03d07b30;
  puVar5 = PTR_DAT_03d07b28;
  puVar4 = PTR_DAT_03d07ae0;
  lVar7 = *(long *)(unaff_x19 + 0x128);
  if (lVar7 != 0) {
    iVar11 = 0;
    do {
      if (*(int *)(lVar7 + 0x18) <= iVar11) {
LAB_02992664:
        if (cStack0000000000000010 != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar15,0);
        }
        uVar15 = *(undefined8 *)(unaff_x19 + 0x188);
        cStack000000000000000c = '\0';
        FUN_027e0bd8(uVar15,&stack0x0000000c,0);
        lVar7 = *(long *)(unaff_x19 + 0x188);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (0 < (int)uVar2) {
          lVar13 = *plVar1;
          lVar9 = 0;
          do {
            if (uVar2 <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            if (*(uint *)(lVar13 + 0x18) <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            iVar11 = *(int *)(lVar13 + 0x20 + lVar9 * 4);
            lVar14 = *(long *)(lVar7 + 0x20 + lVar9 * 8);
            if (iVar11 < 1) {
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              iVar11 = *(int *)(lVar14 + 0x68) + 1;
            }
            else if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            lVar9 = lVar9 + 1;
            *(int *)(lVar14 + 0x70) = iVar11;
          } while ((int)lVar9 < (int)uVar2);
        }
        if (cStack000000000000000c != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar15,0);
        }
        return;
      }
      FUN_02215a88(lVar7,iVar11,&stack0x00000020,*(undefined8 *)puVar4);
      lVar7 = in_stack_00000020;
      if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if ((*(byte *)(in_stack_00000020 + 0x10) >> 1 & 1) == 0) {
        bVar3 = *(byte *)(in_stack_00000020 + 0x12);
        if ((ulong)bVar3 != 0xff) {
          if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          bStack0000000000000028 = bVar3;
          uVar12 = FUN_021e4dc4(*(long *)(unaff_x19 + 0x1b0),&stack0x00000028,*(undefined8 *)puVar5)
          ;
          if ((uVar12 & 1) != 0) {
            lVar9 = *plVar1;
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            if (*(uint *)(lVar9 + 0x18) <= (uint)bVar3) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            piVar8 = (int *)(lVar9 + (ulong)bVar3 * 4 + 0x20);
            if (*piVar8 == 0) {
              *piVar8 = *(int *)(lVar7 + 0x14);
            }
            if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            uStack000000000000002c = *(undefined1 *)(lVar7 + 0x12);
            FUN_021e514c(*(long *)(unaff_x19 + 0x1b0),(long)&stack0x00000028 + 4,
                         *(undefined8 *)puVar6);
            if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x20) == 0) goto LAB_02992664;
          }
        }
      }
      lVar7 = *(long *)(unaff_x19 + 0x128);
      iVar11 = iVar11 + 1;
    } while (lVar7 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


