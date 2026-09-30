/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$add_OnReady
ENTRY_POINT: 07295a60
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_ImmersiveDebugger_Manager_DebugManager__add_OnReady
              (long param_1,long param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  long unaff_x19;
  int unaff_w20;
  int iVar11;
  int iVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  double in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  char *in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined4 in_stack_00000050;
  long in_stack_00000058;
  char cStack0000000000000064;
  undefined8 in_stack_00000068;
  
  if ((*(byte *)(unaff_x19 + 0x836) & 1) == 0) {
    FUN_04077588(PTR_DAT_09285ae0);
    *(undefined1 *)(unaff_x19 + 0x836) = 1;
  }
  in_stack_00000068 = *(undefined8 *)(param_1 + 0x30);
  in_stack_00000038 = &stack0x00000064;
  in_stack_00000030 = 0;
  in_stack_00000040 = &stack0x00000068;
  cStack0000000000000064 = '\0';
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  FUN_076e7928(in_stack_00000068,&stack0x00000064,0);
  fVar5 = DAT_01aeb6bc;
  if (param_4 < 1) {
    iVar10 = 0;
  }
  else {
    iVar10 = 0;
    do {
      iVar8 = *(int *)(param_1 + 0x48);
      iVar3 = *(int *)(param_1 + 0x4c);
      iVar6 = iVar8 - iVar3;
      if (iVar6 == 0 || iVar8 < iVar3) {
LAB_07295dfc:
        if (iVar8 == 0) goto LAB_07295e00;
      }
      else {
        if (param_4 <= iVar6) {
          iVar6 = param_4;
        }
        if (unaff_w20 == 0x20) {
          FUN_076a724c(*(undefined8 *)(param_1 + 0x40),iVar3,param_2,param_3,iVar6,0);
        }
        else {
          iVar8 = iVar6 + 3;
          if (-1 < iVar6) {
            iVar8 = iVar6;
          }
          if (3 < iVar6) {
            iVar3 = param_3 + 3;
            if (-1 < param_3) {
              iVar3 = param_3;
            }
            iVar11 = 0;
            iVar12 = (iVar3 >> 2) << 1;
            do {
              if (unaff_w20 == 0x10) {
                lVar9 = *(long *)(param_1 + 0x40);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                iVar4 = *(int *)(param_1 + 0x4c);
                iVar2 = iVar4 + 3;
                if (-1 < iVar4) {
                  iVar2 = iVar4;
                }
                uVar1 = iVar11 + (iVar2 >> 2);
                if (*(uint *)(lVar9 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                fVar14 = *(float *)(lVar9 + (long)(int)uVar1 * 4 + 0x20);
                if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                fVar14 = fVar14 * fVar5 + -0.5;
                dVar15 = (double)fVar14;
                dVar13 = modf(dVar15,&stack0x00000018);
                if (0.0 <= fVar14) {
                  if (dVar13 == 0.5) {
                    dVar13 = in_stack_00000018 + 1.0;
                    goto LAB_07295cac;
                  }
                  dVar15 = (double)(long)(dVar15 + 0.5);
                }
                else if (dVar13 == -0.5) {
                  dVar13 = in_stack_00000018 + -1.0;
LAB_07295cac:
                  dVar15 = in_stack_00000018;
                  if (((long)in_stack_00000018 & 1U) != 0) {
                    dVar15 = dVar13;
                  }
                }
                else {
                  dVar15 = (double)(long)(dVar15 + -0.5);
                }
                iVar2 = -0x80000000;
                if (dVar15 != INFINITY) {
                  iVar2 = (int)dVar15;
                }
                iVar4 = iVar2 + 0x10000;
                if (-1 < iVar2) {
                  iVar4 = (int)dVar15;
                }
                in_stack_00000018 = (double)CONCAT71(in_stack_00000018._1_7_,(char)iVar4);
                uVar7 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x18),&stack0x00000018
                                          );
                if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830(uVar7,uVar7);
                }
                FUN_0769c5dc(param_2,uVar7,iVar12,0);
                iVar2 = iVar4 + 0xff;
                if (-1 < iVar4) {
                  iVar2 = iVar4;
                }
                in_stack_00000028._4_1_ = (undefined1)((uint)iVar2 >> 8);
                uVar7 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x18),
                                           (long)&stack0x00000028 + 4);
                FUN_0769c5dc(param_2,uVar7,iVar12 + 1,0);
              }
              else if (unaff_w20 == 8) {
                lVar9 = *(long *)(param_1 + 0x40);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                iVar4 = *(int *)(param_1 + 0x4c);
                iVar2 = iVar4 + 3;
                if (-1 < iVar4) {
                  iVar2 = iVar4;
                }
                uVar1 = iVar11 + (iVar2 >> 2);
                if (*(uint *)(lVar9 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                fVar14 = *(float *)(lVar9 + (long)(int)uVar1 * 4 + 0x20);
                if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                fVar14 = fVar14 * 127.5 + 127.5;
                dVar15 = (double)fVar14;
                dVar13 = modf(dVar15,&stack0x00000018);
                if (0.0 <= fVar14) {
                  if (dVar13 == 0.5) {
                    dVar13 = in_stack_00000018 + 1.0;
                    goto LAB_07295c8c;
                  }
                  dVar15 = (double)(long)(dVar15 + 0.5);
                }
                else if (dVar13 == -0.5) {
                  dVar13 = in_stack_00000018 + -1.0;
LAB_07295c8c:
                  dVar15 = in_stack_00000018;
                  if (((long)in_stack_00000018 & 1U) != 0) {
                    dVar15 = dVar13;
                  }
                }
                else {
                  dVar15 = (double)(long)(dVar15 + -0.5);
                }
                in_stack_00000018 = (double)CONCAT71(in_stack_00000018._1_7_,(char)(int)dVar15);
                uVar7 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x18),&stack0x00000018
                                          );
                if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830(uVar7,uVar7);
                }
                FUN_0769c5dc(param_2,uVar7,(iVar3 >> 2) + iVar11,0);
              }
              iVar11 = iVar11 + 1;
              iVar12 = iVar12 + 2;
            } while (iVar8 >> 2 != iVar11);
          }
        }
        iVar8 = *(int *)(param_1 + 0x48);
        param_4 = param_4 - iVar6;
        param_3 = iVar6 + param_3;
        iVar3 = *(int *)(param_1 + 0x4c) + iVar6;
        iVar10 = iVar6 + iVar10;
        *(int *)(param_1 + 0x4c) = iVar3;
        *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + (long)iVar6;
        if (iVar3 != iVar8) goto LAB_07295dfc;
        *(undefined4 *)(param_1 + 0x48) = 0;
LAB_07295e00:
        if (*(char *)(param_1 + 0x19) != '\0') break;
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        in_stack_00000058 = FUN_07295340();
        if (in_stack_00000058 == 0) {
          *(undefined1 *)(param_1 + 0x19) = 1;
          break;
        }
        in_stack_00000020 = &stack0x00000058;
        in_stack_00000018 = 0.0;
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        iVar6 = FUN_072954ac(*(long *)(param_1 + 0x28),in_stack_00000058,
                             *(undefined8 *)(param_1 + 0x40),0);
        *(int *)(param_1 + 0x48) = iVar6 << 2;
        *(undefined4 *)(param_1 + 0x4c) = 0;
        if (*in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        FUN_07298478();
        if (in_stack_00000018 != 0.0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077828();
        }
      }
    } while (0 < param_4);
  }
  if (*in_stack_00000038 != '\0') {
    thunk_FUN_0408541c(*in_stack_00000040,0);
  }
  if (in_stack_00000030 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077828();
  }
  return iVar10;
}


