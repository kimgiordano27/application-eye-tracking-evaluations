/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverVR.Arm$$ApplyOffsets
ENTRY_POINT: 029b3c30
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029b3d80) */

void RootMotion_FinalIK_IKSolverVR_Arm__ApplyOffsets(void)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint in_w8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x24;
  int iVar9;
  long unaff_x25;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long *in_stack_00000000;
  char cStack0000000000000044;
  undefined4 uStack0000000000000048;
  uint uStack000000000000004c;
  
  if (3 < in_w8) {
    *(long *)(unaff_x25 + 0x38) = unaff_x19[6];
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists((long *)(unaff_x25 + 0x38));
    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03d085f0);
    if (*(uint *)(unaff_x25 + 0x18) < 5) goto code_r0x029b3db0;
    *(undefined8 *)(unaff_x25 + 0x40) = uVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (in_stack_00000000 == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      if (in_stack_00000000 == (long *)0x0) goto LAB_029b3d7c;
      uVar7 = (**(code **)(*in_stack_00000000 + 0x168))
                        (in_stack_00000000,*(undefined8 *)(*in_stack_00000000 + 0x170));
    }
    if (5 < *(uint *)(unaff_x25 + 0x18)) {
      *(undefined8 *)(unaff_x25 + 0x48) = uVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      FUN_025be564();
      FUN_02996df4();
      FUN_02996e0c();
      while( true ) {
        if (*(int *)((long)unaff_x19 + 0x1c) != 2) {
          lVar6 = unaff_x19[0xc];
          cStack0000000000000044 = '\0';
          FUN_027e0bd8(lVar6,&stack0x00000044,0);
          if ((*(int *)((long)unaff_x19 + 0x1c) != 0) && (*(int *)((long)unaff_x19 + 0x1c) != 3)) {
            (**(code **)(*unaff_x19 + 0x188))();
          }
          if (cStack0000000000000044 != '\0') {
            OVRManager_<>c__<InitOVRManager>b__424_0(lVar6,0);
          }
          return;
        }
        if (unaff_x20 == 0) break;
        *(undefined4 *)(unaff_x20 + 0x14) = 0;
        FUN_029bb694();
        if (*(int *)(unaff_x20 + 0x14) < *(int *)(unaff_x20 + 0x10)) {
          *(int *)(unaff_x20 + 0x10) = *(int *)(unaff_x20 + 0x14);
        }
        iVar9 = 0;
        while (iVar9 < 9) {
          if (unaff_x19[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          iVar2 = FUN_02ebc138();
          iVar9 = iVar2 + iVar9;
          if (iVar2 == 0) {
            thunk_FUN_01a6ca08();
            uVar7 = thunk_FUN_01a89e68();
            FUN_02ec8664(uVar7,0x2746,0);
            uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03d08588);
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar7,uVar4);
          }
        }
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar8 = (uint)*(undefined8 *)(unaff_x21 + 0x18);
        if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (*(char *)(unaff_x21 + 0x20) == -0x10) {
          FUN_0299686c();
        }
        else {
          if (uVar8 < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          if (uVar8 == 2) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          if (uVar8 < 4) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          if (uVar8 == 4) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          uStack000000000000004c =
               (uint)*(byte *)(unaff_x21 + 0x21) << 0x18 | (uint)*(byte *)(unaff_x21 + 0x22) << 0x10
               | (uint)*(byte *)(unaff_x21 + 0x23) << 8 | (uint)*(byte *)(unaff_x21 + 0x24);
          if (unaff_x19[2] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar5 = FUN_0298d310(unaff_x19[2],0);
          if ((uVar5 & 1) != 0) {
            if (*(uint *)(unaff_x21 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            if (*(char *)(unaff_x21 + 0x20) == -5) {
              if (*(uint *)(unaff_x21 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              lVar6 = unaff_x19[2];
              if (*(char *)(unaff_x21 + 0x26) == '\0') {
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                lVar6 = FUN_02994928(lVar6,0);
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                *(uint *)(lVar6 + 0x2c) = *(int *)(lVar6 + 0x2c) + uStack000000000000004c;
                *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
              }
              else {
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                lVar6 = FUN_02994928(lVar6,0);
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                *(uint *)(lVar6 + 0x30) = *(int *)(lVar6 + 0x30) + uStack000000000000004c;
                *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
              }
            }
          }
          uVar5 = FUN_02996dc8();
          if ((uVar5 & 1) != 0) {
            uVar7 = FUN_0276793c((long)&stack0x00000048 + 4,0);
            FUN_025b1328(*unaff_x28,uVar7,0);
            FUN_02996df4();
          }
          FUN_029bb694();
          FUN_029b3ef8();
          uStack000000000000004c = uStack000000000000004c - 9;
          if (0 < (int)uStack000000000000004c) {
            iVar9 = 0;
            do {
              if (unaff_x19[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              iVar3 = FUN_02ebc138(unaff_x19[0xb],*(undefined8 *)(unaff_x20 + 0x18),
                                   *(undefined4 *)(unaff_x20 + 0x10),uStack000000000000004c - iVar9,
                                   0,0);
              iVar2 = *(int *)(unaff_x20 + 0x10) + iVar3;
              *(int *)(unaff_x20 + 0x10) = iVar2;
              if (*(int *)(unaff_x20 + 0x14) < iVar2) {
                *(int *)(unaff_x20 + 0x14) = iVar2;
                FUN_029bb694();
              }
              if (iVar3 == 0) {
                thunk_FUN_01a6ca08();
                uVar7 = thunk_FUN_01a89e68();
                FUN_02ec8664(uVar7,0x2746,0);
                uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03d08588);
                    /* WARNING: Subroutine does not return */
                FUN_01ab6b14(uVar7,uVar4);
              }
              iVar9 = iVar3 + iVar9;
            } while (iVar9 < (int)uStack000000000000004c);
          }
          FUN_029b3f90();
          FUN_0299686c();
          uVar5 = FUN_02996dc8();
          if ((uVar5 & 1) != 0) {
            uStack0000000000000048 = *(undefined4 *)(unaff_x20 + 0x14);
            uVar7 = FUN_0276793c(&stack0x00000048,0);
            puVar1 = unaff_x29;
            if (*(int *)(unaff_x20 + 0x14) != uStack000000000000004c + 2) {
              puVar1 = unaff_x24;
            }
            FUN_025bdc88(*unaff_x28,uVar7,*puVar1,0);
            FUN_02996df4();
          }
        }
      }
LAB_029b3d7c:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
code_r0x029b3db0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


