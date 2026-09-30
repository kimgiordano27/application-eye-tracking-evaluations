/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$remove_OnReady
ENTRY_POINT: 07295b30
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


int Meta_XR_ImmersiveDebugger_Manager_DebugManager__remove_OnReady(void)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  char in_NG;
  char in_OV;
  int iVar4;
  undefined8 uVar5;
  int in_w8;
  int iVar6;
  long lVar7;
  int unaff_w20;
  int unaff_w21;
  long unaff_x23;
  long unaff_x24;
  int unaff_w28;
  double dVar8;
  float fVar9;
  double dVar10;
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
  
code_r0x07295b30:
  if (in_NG == in_OV) {
    in_w8 = unaff_w28;
  }
  if (3 < unaff_w28) {
    iVar4 = 0;
    do {
      if (unaff_w20 == 0x10) {
        lVar7 = *(long *)(unaff_x24 + 0x40);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        iVar2 = *(int *)(unaff_x24 + 0x4c);
        iVar6 = iVar2 + 3;
        if (-1 < iVar2) {
          iVar6 = iVar2;
        }
        uVar1 = iVar4 + (iVar6 >> 2);
        if (*(uint *)(lVar7 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        fVar9 = *(float *)(lVar7 + (long)(int)uVar1 * 4 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        fVar9 = fVar9 * unaff_s10 + unaff_s9;
        dVar10 = (double)fVar9;
        dVar8 = modf(dVar10,&stack0x00000018);
        if (0.0 <= fVar9) {
          dVar3 = unaff_d14;
          if (dVar8 == unaff_d13) goto LAB_07295cac;
          dVar8 = (double)(long)(dVar10 + unaff_d13);
        }
        else {
          dVar3 = unaff_d12;
          if (dVar8 == unaff_d11) {
LAB_07295cac:
            dVar8 = in_stack_00000018;
            if (((long)in_stack_00000018 & 1U) != 0) {
              dVar8 = in_stack_00000018 + dVar3;
            }
          }
          else {
            dVar8 = (double)(long)(dVar10 + unaff_d11);
          }
        }
        iVar6 = -0x80000000;
        if (dVar8 != INFINITY) {
          iVar6 = (int)dVar8;
        }
        iVar2 = iVar6 + 0x10000;
        if (-1 < iVar6) {
          iVar2 = (int)dVar8;
        }
        in_stack_00000018 = (double)CONCAT71(in_stack_00000018._1_7_,(char)iVar2);
        uVar5 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x18),&stack0x00000018);
        if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830(uVar5,uVar5);
        }
        FUN_0769c5dc();
        iVar6 = iVar2 + 0xff;
        if (-1 < iVar2) {
          iVar6 = iVar2;
        }
        in_stack_00000028._4_1_ = (undefined1)((uint)iVar6 >> 8);
        thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x18),(long)&stack0x00000028 + 4);
        FUN_0769c5dc();
      }
      else if (unaff_w20 == 8) {
        lVar7 = *(long *)(unaff_x24 + 0x40);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        iVar2 = *(int *)(unaff_x24 + 0x4c);
        iVar6 = iVar2 + 3;
        if (-1 < iVar2) {
          iVar6 = iVar2;
        }
        uVar1 = iVar4 + (iVar6 >> 2);
        if (*(uint *)(lVar7 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        fVar9 = *(float *)(lVar7 + (long)(int)uVar1 * 4 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        fVar9 = fVar9 * 127.5 + 127.5;
        dVar10 = (double)fVar9;
        dVar8 = modf(dVar10,&stack0x00000018);
        if (0.0 <= fVar9) {
          dVar3 = unaff_d14;
          if (dVar8 == unaff_d13) goto LAB_07295c8c;
          dVar8 = (double)(long)(dVar10 + unaff_d13);
        }
        else {
          dVar3 = unaff_d12;
          if (dVar8 == unaff_d11) {
LAB_07295c8c:
            dVar8 = in_stack_00000018;
            if (((long)in_stack_00000018 & 1U) != 0) {
              dVar8 = in_stack_00000018 + dVar3;
            }
          }
          else {
            dVar8 = (double)(long)(dVar10 + unaff_d11);
          }
        }
        in_stack_00000018 = (double)CONCAT71(in_stack_00000018._1_7_,(char)(int)dVar8);
        uVar5 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x18),&stack0x00000018);
        if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830(uVar5,uVar5);
        }
        FUN_0769c5dc();
      }
      iVar4 = iVar4 + 1;
    } while (in_w8 >> 2 != iVar4);
  }
LAB_07295dc0:
  iVar6 = *(int *)(unaff_x24 + 0x48);
  unaff_w21 = unaff_w21 - unaff_w28;
  iVar4 = *(int *)(unaff_x24 + 0x4c) + unaff_w28;
  in_stack_00000010._4_4_ = unaff_w28 + in_stack_00000010._4_4_;
  *(int *)(unaff_x24 + 0x4c) = iVar4;
  *(long *)(unaff_x24 + 0x38) = *(long *)(unaff_x24 + 0x38) + (long)unaff_w28;
  if (iVar4 != iVar6) goto LAB_07295dfc;
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
    iVar4 = FUN_072954ac(*(long *)(unaff_x24 + 0x28),in_stack_00000058,
                         *(undefined8 *)(unaff_x24 + 0x40),0);
    *(int *)(unaff_x24 + 0x48) = iVar4 << 2;
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
      iVar6 = *(int *)(unaff_x24 + 0x48);
      unaff_w28 = iVar6 - *(int *)(unaff_x24 + 0x4c);
      if (unaff_w28 != 0 && *(int *)(unaff_x24 + 0x4c) <= iVar6) {
        if (unaff_w21 <= unaff_w28) {
          unaff_w28 = unaff_w21;
        }
        if (unaff_w20 != 0x20) {
          in_w8 = unaff_w28 + 3;
          in_NG = unaff_w28 < 0;
          in_OV = '\0';
          goto code_r0x07295b30;
        }
        FUN_076a724c(*(undefined8 *)(unaff_x24 + 0x40));
        goto LAB_07295dc0;
      }
LAB_07295dfc:
    } while (iVar6 != 0);
  } while( true );
}


