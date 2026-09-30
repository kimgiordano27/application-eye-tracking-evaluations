/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverVR.Arm$$PreSolve
ENTRY_POINT: 029b3988
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029b3d80) */

void RootMotion_FinalIK_IKSolverVR_Arm__PreSolve(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  long *plVar11;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x24;
  long lVar12;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  int in_stack_00000038;
  char cStack0000000000000044;
  undefined4 uStack0000000000000048;
  uint uStack000000000000004c;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0(param_1);
  }
  puVar5 = (undefined8 *)__cxa_begin_catch();
  uVar6 = thunk_FUN_01a6ca08();
  uVar7 = thunk_FUN_01a6848c(uVar6,*(undefined8 *)*puVar5);
  if ((uVar7 & 1) == 0) {
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
    uVar7 = thunk_FUN_01a6848c(uVar6,*(undefined8 *)*puVar5);
    if ((uVar7 & 1) == 0) {
      puVar9 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar9 = *puVar5;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar9,&PTR_PTR_03abd138,0);
    }
    *(undefined8 *)(&stack0x00000028 + (long)in_stack_00000038 * 8) = *puVar5;
    in_stack_00000038 = in_stack_00000038 + 1;
    __cxa_end_catch();
    iVar4 = in_stack_00000038 + -1;
    if ((*(int *)((long)unaff_x19 + 0x1c) != 0) && (*(int *)((long)unaff_x19 + 0x1c) != 3)) {
      plVar11 = *(long **)(&stack0x00000028 + (long)iVar4 * 8);
      uVar7 = FUN_02996dc8();
      if ((uVar7 & 1) != 0) {
        uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cbfcb0);
        lVar12 = FUN_01ab6a94(uVar6,6);
        if (lVar12 == 0) goto LAB_029b3d7c;
        uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d085e0);
        if (*(int *)(lVar12 + 0x18) == 0) {
code_r0x029b3db0:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        *(undefined8 *)(lVar12 + 0x20) = uVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar12 + 0x20),uVar6);
        uVar3 = *(undefined4 *)((long)unaff_x19 + 0x1c);
        in_stack_00000010 = thunk_FUN_01a6ca08(PTR_DAT_03d07cd8);
        in_stack_00000018 = 0xffffffffffffffff;
        in_stack_00000020 = uVar3;
        uVar6 = FUN_027a62b8(&stack0x00000010,0);
        if (*(uint *)(lVar12 + 0x18) < 2) goto code_r0x029b3db0;
        *(undefined8 *)(lVar12 + 0x28) = uVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar12 + 0x28),uVar6);
        uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d085e8);
        if (*(uint *)(lVar12 + 0x18) < 3) goto code_r0x029b3db0;
        *(undefined8 *)(lVar12 + 0x30) = uVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar12 + 0x30),uVar6);
        if (*(uint *)(lVar12 + 0x18) < 4) goto code_r0x029b3db0;
        *(long *)(lVar12 + 0x38) = unaff_x19[6];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists((long *)(lVar12 + 0x38));
        uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d085f0);
        if (*(uint *)(lVar12 + 0x18) < 5) goto code_r0x029b3db0;
        *(undefined8 *)(lVar12 + 0x40) = uVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if (plVar11 == (long *)0x0) {
          uVar6 = 0;
        }
        else {
          if (plVar11 == (long *)0x0) goto LAB_029b3d7c;
          uVar6 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
        }
        if (*(uint *)(lVar12 + 0x18) < 6) goto code_r0x029b3db0;
        *(undefined8 *)(lVar12 + 0x48) = uVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        FUN_025be564(lVar12,0);
        FUN_02996df4();
      }
      goto code_r0x029b3ce8;
    }
  }
  else {
    *(undefined8 *)(&stack0x00000028 + (long)in_stack_00000038 * 8) = *puVar5;
    in_stack_00000038 = in_stack_00000038 + 1;
    __cxa_end_catch();
    if ((*(int *)((long)unaff_x19 + 0x1c) != 0) && (*(int *)((long)unaff_x19 + 0x1c) != 3)) {
      lVar12 = *(long *)(&stack0x00000028 + (long)(in_stack_00000038 + -1) * 8);
      uVar7 = FUN_02996dc8();
      if ((uVar7 & 1) == 0) {
        if (lVar12 == 0) goto LAB_029b3d7c;
      }
      else {
        if (lVar12 == 0) goto LAB_029b3d7c;
        uVar3 = FUN_02eca19c(lVar12,0);
        in_stack_00000010 = thunk_FUN_01a6ca08(PTR_DAT_03cdc880);
        in_stack_00000018 = 0xffffffffffffffff;
        in_stack_00000020 = uVar3;
        uVar6 = FUN_027a62b8(&stack0x00000010,0);
        uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03d085d8);
        FUN_025b1328(uVar8,uVar6,0);
        FUN_02996df4();
      }
      iVar4 = FUN_02eca19c(lVar12,0);
      if (iVar4 != 0x2746) {
        FUN_02eca19c(lVar12,0);
      }
code_r0x029b3ce8:
      FUN_02996e0c();
    }
    iVar4 = in_stack_00000038 + -1;
  }
  while( true ) {
    in_stack_00000038 = iVar4;
    if (*(int *)((long)unaff_x19 + 0x1c) != 2) {
      lVar12 = unaff_x19[0xc];
      cStack0000000000000044 = '\0';
      FUN_027e0bd8(lVar12,&stack0x00000044,0);
      if ((*(int *)((long)unaff_x19 + 0x1c) != 0) && (*(int *)((long)unaff_x19 + 0x1c) != 3)) {
        (**(code **)(*unaff_x19 + 0x188))();
      }
      if (cStack0000000000000044 != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar12,0);
      }
      return;
    }
    if (unaff_x20 == 0) break;
    *(undefined4 *)(unaff_x20 + 0x14) = 0;
    FUN_029bb694();
    if (*(int *)(unaff_x20 + 0x14) < *(int *)(unaff_x20 + 0x10)) {
      *(int *)(unaff_x20 + 0x10) = *(int *)(unaff_x20 + 0x14);
    }
    iVar4 = 0;
    while (iVar4 < 9) {
      if (unaff_x19[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar1 = FUN_02ebc138();
      iVar4 = iVar1 + iVar4;
      if (iVar1 == 0) {
        thunk_FUN_01a6ca08();
        uVar6 = thunk_FUN_01a89e68();
        FUN_02ec8664(uVar6,0x2746,0);
        uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03d08588);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar6,uVar8);
      }
    }
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar10 = (uint)*(undefined8 *)(unaff_x21 + 0x18);
    if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    if (*(char *)(unaff_x21 + 0x20) == -0x10) {
      FUN_0299686c();
      iVar4 = in_stack_00000038;
    }
    else {
      if (uVar10 < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (uVar10 == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (uVar10 < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (uVar10 == 4) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uStack000000000000004c =
           (uint)*(byte *)(unaff_x21 + 0x21) << 0x18 | (uint)*(byte *)(unaff_x21 + 0x22) << 0x10 |
           (uint)*(byte *)(unaff_x21 + 0x23) << 8 | (uint)*(byte *)(unaff_x21 + 0x24);
      if (unaff_x19[2] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar7 = FUN_0298d310(unaff_x19[2],0);
      if ((uVar7 & 1) != 0) {
        if (*(uint *)(unaff_x21 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (*(char *)(unaff_x21 + 0x20) == -5) {
          if (*(uint *)(unaff_x21 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar12 = unaff_x19[2];
          if (*(char *)(unaff_x21 + 0x26) == '\0') {
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            lVar12 = FUN_02994928(lVar12,0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            *(uint *)(lVar12 + 0x2c) = *(int *)(lVar12 + 0x2c) + uStack000000000000004c;
            *(int *)(lVar12 + 0x14) = *(int *)(lVar12 + 0x14) + 1;
          }
          else {
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            lVar12 = FUN_02994928(lVar12,0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            *(uint *)(lVar12 + 0x30) = *(int *)(lVar12 + 0x30) + uStack000000000000004c;
            *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 1;
          }
        }
      }
      uVar7 = FUN_02996dc8();
      if ((uVar7 & 1) != 0) {
        uVar6 = FUN_0276793c((long)&stack0x00000048 + 4,0);
        FUN_025b1328(*unaff_x28,uVar6,0);
        FUN_02996df4();
      }
      FUN_029bb694();
      FUN_029b3ef8();
      uStack000000000000004c = uStack000000000000004c - 9;
      if (0 < (int)uStack000000000000004c) {
        iVar4 = 0;
        do {
          if (unaff_x19[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          iVar2 = FUN_02ebc138(unaff_x19[0xb],*(undefined8 *)(unaff_x20 + 0x18),
                               *(undefined4 *)(unaff_x20 + 0x10),uStack000000000000004c - iVar4,0,0)
          ;
          iVar1 = *(int *)(unaff_x20 + 0x10) + iVar2;
          *(int *)(unaff_x20 + 0x10) = iVar1;
          if (*(int *)(unaff_x20 + 0x14) < iVar1) {
            *(int *)(unaff_x20 + 0x14) = iVar1;
            FUN_029bb694();
          }
          if (iVar2 == 0) {
            thunk_FUN_01a6ca08();
            uVar6 = thunk_FUN_01a89e68();
            FUN_02ec8664(uVar6,0x2746,0);
            uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03d08588);
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar6,uVar8);
          }
          iVar4 = iVar2 + iVar4;
        } while (iVar4 < (int)uStack000000000000004c);
      }
      FUN_029b3f90();
      FUN_0299686c();
      uVar7 = FUN_02996dc8();
      iVar4 = in_stack_00000038;
      if ((uVar7 & 1) != 0) {
        uStack0000000000000048 = *(undefined4 *)(unaff_x20 + 0x14);
        uVar6 = FUN_0276793c(&stack0x00000048,0);
        puVar5 = unaff_x29;
        if (*(int *)(unaff_x20 + 0x14) != uStack000000000000004c + 2) {
          puVar5 = unaff_x24;
        }
        FUN_025bdc88(*unaff_x28,uVar6,*puVar5,0);
        FUN_02996df4();
        iVar4 = in_stack_00000038;
      }
    }
  }
LAB_029b3d7c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


