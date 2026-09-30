/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$get_UiPanel
ENTRY_POINT: 07295fa8
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


int Meta_XR_ImmersiveDebugger_Manager_DebugManager__get_UiPanel(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  int unaff_w20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  int iVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  float unaff_s9;
  float unaff_s10;
  double unaff_d11;
  double unaff_d12;
  double unaff_d13;
  double unaff_d14;
  double in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  char *in_stack_00000038;
  undefined8 *in_stack_00000040;
  long in_stack_00000058;
  
  do {
    if (*in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_07298478();
    if (in_stack_00000018 != 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077828();
    }
    do {
      if (unaff_w21 < 1) goto LAB_07295fc8;
      iVar7 = *(int *)(unaff_x24 + 0x48);
      iVar5 = iVar7 - *(int *)(unaff_x24 + 0x4c);
      if (iVar5 != 0 && *(int *)(unaff_x24 + 0x4c) <= iVar7) {
        if (unaff_w21 <= iVar5) {
          iVar5 = unaff_w21;
        }
        if (unaff_w20 == 0x20) {
          FUN_076a724c(*(undefined8 *)(unaff_x24 + 0x40));
        }
        else {
          iVar7 = iVar5 + 3;
          if (-1 < iVar5) {
            iVar7 = iVar5;
          }
          if (3 < iVar5) {
            iVar9 = 0;
            do {
              if (unaff_w20 == 0x10) {
                lVar8 = *(long *)(unaff_x24 + 0x40);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                iVar3 = *(int *)(unaff_x24 + 0x4c);
                iVar2 = iVar3 + 3;
                if (-1 < iVar3) {
                  iVar2 = iVar3;
                }
                uVar1 = iVar9 + (iVar2 >> 2);
                if (*(uint *)(lVar8 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                fVar11 = *(float *)(lVar8 + (long)(int)uVar1 * 4 + 0x20);
                if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                fVar11 = fVar11 * unaff_s10 + unaff_s9;
                dVar12 = (double)fVar11;
                dVar10 = modf(dVar12,&stack0x00000018);
                if (0.0 <= fVar11) {
                  dVar4 = unaff_d14;
                  if (dVar10 == unaff_d13) goto LAB_07295cac;
                  dVar10 = (double)(long)(dVar12 + unaff_d13);
                }
                else {
                  dVar4 = unaff_d12;
                  if (dVar10 == unaff_d11) {
LAB_07295cac:
                    dVar10 = in_stack_00000018;
                    if (((long)in_stack_00000018 & 1U) != 0) {
                      dVar10 = in_stack_00000018 + dVar4;
                    }
                  }
                  else {
                    dVar10 = (double)(long)(dVar12 + unaff_d11);
                  }
                }
                iVar2 = -0x80000000;
                if (dVar10 != INFINITY) {
                  iVar2 = (int)dVar10;
                }
                iVar3 = iVar2 + 0x10000;
                if (-1 < iVar2) {
                  iVar3 = (int)dVar10;
                }
                in_stack_00000018 = (double)CONCAT71(in_stack_00000018._1_7_,(char)iVar3);
                uVar6 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x18),&stack0x00000018
                                          );
                if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830(uVar6,uVar6);
                }
                FUN_0769c5dc();
                iVar2 = iVar3 + 0xff;
                if (-1 < iVar3) {
                  iVar2 = iVar3;
                }
                in_stack_00000028._4_1_ = (undefined1)((uint)iVar2 >> 8);
                thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x18),
                                   (long)&stack0x00000028 + 4);
                FUN_0769c5dc();
              }
              else if (unaff_w20 == 8) {
                lVar8 = *(long *)(unaff_x24 + 0x40);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                iVar3 = *(int *)(unaff_x24 + 0x4c);
                iVar2 = iVar3 + 3;
                if (-1 < iVar3) {
                  iVar2 = iVar3;
                }
                uVar1 = iVar9 + (iVar2 >> 2);
                if (*(uint *)(lVar8 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                fVar11 = *(float *)(lVar8 + (long)(int)uVar1 * 4 + 0x20);
                if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                fVar11 = fVar11 * 127.5 + 127.5;
                dVar12 = (double)fVar11;
                dVar10 = modf(dVar12,&stack0x00000018);
                if (0.0 <= fVar11) {
                  dVar4 = unaff_d14;
                  if (dVar10 == unaff_d13) goto LAB_07295c8c;
                  dVar10 = (double)(long)(dVar12 + unaff_d13);
                }
                else {
                  dVar4 = unaff_d12;
                  if (dVar10 == unaff_d11) {
LAB_07295c8c:
                    dVar10 = in_stack_00000018;
                    if (((long)in_stack_00000018 & 1U) != 0) {
                      dVar10 = in_stack_00000018 + dVar4;
                    }
                  }
                  else {
                    dVar10 = (double)(long)(dVar12 + unaff_d11);
                  }
                }
                in_stack_00000018 = (double)CONCAT71(in_stack_00000018._1_7_,(char)(int)dVar10);
                uVar6 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x18),&stack0x00000018
                                          );
                if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830(uVar6,uVar6);
                }
                FUN_0769c5dc();
              }
              iVar9 = iVar9 + 1;
            } while (iVar7 >> 2 != iVar9);
          }
        }
        iVar7 = *(int *)(unaff_x24 + 0x48);
        unaff_w21 = unaff_w21 - iVar5;
        iVar9 = *(int *)(unaff_x24 + 0x4c) + iVar5;
        unaff_w22 = iVar5 + unaff_w22;
        *(int *)(unaff_x24 + 0x4c) = iVar9;
        *(long *)(unaff_x24 + 0x38) = *(long *)(unaff_x24 + 0x38) + (long)iVar5;
        if (iVar9 == iVar7) {
          *(undefined4 *)(unaff_x24 + 0x48) = 0;
          break;
        }
      }
    } while (iVar7 != 0);
    if (*(char *)(unaff_x24 + 0x19) != '\0') {
LAB_07295fc8:
      if (*in_stack_00000038 != '\0') {
        thunk_FUN_0408541c(*in_stack_00000040,0);
      }
      if (in_stack_00000030 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077828();
      }
      return unaff_w22;
    }
    if (*(long *)(unaff_x24 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000058 = FUN_07295340();
    if (in_stack_00000058 == 0) {
      *(undefined1 *)(unaff_x24 + 0x19) = 1;
      goto LAB_07295fc8;
    }
    in_stack_00000020 = &stack0x00000058;
    in_stack_00000018 = 0.0;
    if (*(long *)(unaff_x24 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar5 = FUN_072954ac(*(long *)(unaff_x24 + 0x28),in_stack_00000058,
                         *(undefined8 *)(unaff_x24 + 0x40),0);
    *(int *)(unaff_x24 + 0x48) = iVar5 << 2;
    *(undefined4 *)(unaff_x24 + 0x4c) = 0;
  } while( true );
}


