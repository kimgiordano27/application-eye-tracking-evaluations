/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$add_OnDisableAction
ENTRY_POINT: 07295d38
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


int Meta_XR_ImmersiveDebugger_Manager_DebugManager__add_OnDisableAction(void)

{
  uint uVar1;
  double dVar2;
  int iVar3;
  undefined8 uVar4;
  int in_w8;
  int iVar5;
  long lVar6;
  int in_w9;
  int unaff_w19;
  int unaff_w20;
  int unaff_w21;
  long unaff_x23;
  long unaff_x24;
  int unaff_w25;
  int unaff_w28;
  double dVar7;
  float fVar8;
  double dVar9;
  float unaff_s9;
  float unaff_s10;
  double unaff_d11;
  double unaff_d12;
  double unaff_d13;
  double unaff_d14;
  undefined8 in_stack_00000010;
  double in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  char *in_stack_00000038;
  undefined8 *in_stack_00000040;
  long in_stack_00000058;
  
  do {
    iVar3 = in_w9 + 0x10000;
    if (-1 < in_w9) {
      iVar3 = in_w8;
    }
    in_stack_00000018 = (double)CONCAT71(in_stack_00000018._1_7_,(char)iVar3);
    uVar4 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x18),&stack0x00000018);
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830(uVar4,uVar4);
    }
    FUN_0769c5dc();
    iVar5 = iVar3 + 0xff;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    in_stack_00000028._4_1_ = (undefined1)((uint)iVar5 >> 8);
    thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x18),(long)&stack0x00000028 + 4);
    FUN_0769c5dc();
LAB_07295db0:
    unaff_w25 = unaff_w25 + 1;
    if (unaff_w19 == unaff_w25) {
LAB_07295dc0:
      iVar5 = *(int *)(unaff_x24 + 0x48);
      unaff_w21 = unaff_w21 - unaff_w28;
      iVar3 = *(int *)(unaff_x24 + 0x4c) + unaff_w28;
      in_stack_00000010._4_4_ = unaff_w28 + in_stack_00000010._4_4_;
      *(int *)(unaff_x24 + 0x4c) = iVar3;
      *(long *)(unaff_x24 + 0x38) = *(long *)(unaff_x24 + 0x38) + (long)unaff_w28;
      if (iVar3 != iVar5) goto LAB_07295dfc;
      *(undefined4 *)(unaff_x24 + 0x48) = 0;
      do {
        if (*(char *)(unaff_x24 + 0x19) != '\0') {
LAB_07295fc8:
          if (*in_stack_00000038 != '\0') {
            thunk_FUN_0408541c(*in_stack_00000040,0);
          }
          if (in_stack_00000030 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077828();
          }
          return in_stack_00000010._4_4_;
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
        iVar3 = FUN_072954ac(*(long *)(unaff_x24 + 0x28),in_stack_00000058,
                             *(undefined8 *)(unaff_x24 + 0x40),0);
        *(int *)(unaff_x24 + 0x48) = iVar3 << 2;
        *(undefined4 *)(unaff_x24 + 0x4c) = 0;
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
          iVar5 = *(int *)(unaff_x24 + 0x48);
          unaff_w28 = iVar5 - *(int *)(unaff_x24 + 0x4c);
          if (unaff_w28 != 0 && *(int *)(unaff_x24 + 0x4c) <= iVar5) {
            if (unaff_w21 <= unaff_w28) {
              unaff_w28 = unaff_w21;
            }
            if (unaff_w20 == 0x20) {
              FUN_076a724c(*(undefined8 *)(unaff_x24 + 0x40));
              goto LAB_07295dc0;
            }
            iVar3 = unaff_w28 + 3;
            if (-1 < unaff_w28) {
              iVar3 = unaff_w28;
            }
            if (unaff_w28 < 4) goto LAB_07295dc0;
            unaff_w19 = iVar3 >> 2;
            unaff_w25 = 0;
            goto LAB_07295b60;
          }
LAB_07295dfc:
        } while (iVar5 != 0);
      } while( true );
    }
LAB_07295b60:
    if (unaff_w20 != 0x10) {
      if (unaff_w20 == 8) {
        lVar6 = *(long *)(unaff_x24 + 0x40);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        iVar5 = *(int *)(unaff_x24 + 0x4c);
        iVar3 = iVar5 + 3;
        if (-1 < iVar5) {
          iVar3 = iVar5;
        }
        uVar1 = unaff_w25 + (iVar3 >> 2);
        if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        fVar8 = *(float *)(lVar6 + (long)(int)uVar1 * 4 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        fVar8 = fVar8 * 127.5 + 127.5;
        dVar9 = (double)fVar8;
        dVar7 = modf(dVar9,&stack0x00000018);
        if (0.0 <= fVar8) {
          dVar2 = unaff_d14;
          if (dVar7 == unaff_d13) goto LAB_07295c8c;
          dVar7 = (double)(long)(dVar9 + unaff_d13);
        }
        else {
          dVar2 = unaff_d12;
          if (dVar7 == unaff_d11) {
LAB_07295c8c:
            dVar7 = in_stack_00000018;
            if (((long)in_stack_00000018 & 1U) != 0) {
              dVar7 = in_stack_00000018 + dVar2;
            }
          }
          else {
            dVar7 = (double)(long)(dVar9 + unaff_d11);
          }
        }
        in_stack_00000018 = (double)CONCAT71(in_stack_00000018._1_7_,(char)(int)dVar7);
        uVar4 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x18),&stack0x00000018);
        if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830(uVar4,uVar4);
        }
        FUN_0769c5dc();
      }
      goto LAB_07295db0;
    }
    lVar6 = *(long *)(unaff_x24 + 0x40);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar5 = *(int *)(unaff_x24 + 0x4c);
    iVar3 = iVar5 + 3;
    if (-1 < iVar5) {
      iVar3 = iVar5;
    }
    uVar1 = unaff_w25 + (iVar3 >> 2);
    if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    fVar8 = *(float *)(lVar6 + (long)(int)uVar1 * 4 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar8 = fVar8 * unaff_s10 + unaff_s9;
    dVar9 = (double)fVar8;
    dVar7 = modf(dVar9,&stack0x00000018);
    if (0.0 <= fVar8) {
      dVar2 = unaff_d14;
      if (dVar7 == unaff_d13) goto LAB_07295cac;
      dVar7 = (double)(long)(dVar9 + unaff_d13);
    }
    else {
      dVar2 = unaff_d12;
      if (dVar7 == unaff_d11) {
LAB_07295cac:
        dVar7 = in_stack_00000018;
        if (((long)in_stack_00000018 & 1U) != 0) {
          dVar7 = in_stack_00000018 + dVar2;
        }
      }
      else {
        dVar7 = (double)(long)(dVar9 + unaff_d11);
      }
    }
    in_w8 = (int)dVar7;
    in_w9 = -0x80000000;
    if (dVar7 != INFINITY) {
      in_w9 = in_w8;
    }
  } while( true );
}


