/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Category$$Equals
ENTRY_POINT: 06d9a114
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06d9a2f4) */
/* WARNING: Removing unreachable block (ram,0x06d9a188) */
/* WARNING: Removing unreachable block (ram,0x06d9a170) */
/* WARNING: Removing unreachable block (ram,0x06d9a178) */
/* WARNING: Removing unreachable block (ram,0x06d9a1b4) */
/* WARNING: Removing unreachable block (ram,0x06d9a2e4) */

int Meta_XR_ImmersiveDebugger_Manager_Category__Equals(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  long unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x29;
  double dVar11;
  float fVar12;
  double dVar13;
  float unaff_s9;
  double unaff_d10;
  double unaff_d11;
  double unaff_d12;
  double unaff_d13;
  float unaff_s14;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined1 uStack0000000000000038;
  undefined7 uStack0000000000000039;
  
  uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e8fb40);
  uVar6 = thunk_FUN_03ce0d60(uVar5,*(undefined8 *)*unaff_x26);
  if ((uVar6 & 1) == 0) {
    puVar7 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar7 = *unaff_x26;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&PTR_PTR_088de0a8,0);
  }
  *(undefined8 *)(&stack0x00000020 + (long)in_stack_00000010._4_4_ * 8) = *unaff_x26;
  __cxa_end_catch();
  *(undefined1 *)(unaff_x25 + 0x19) = 1;
  uVar10 = 0xf;
  do {
    FUN_06d9c7a4(unaff_x29);
    if ((uVar10 | 2) != 2) {
LAB_06d9a240:
      if (in_stack_00000030._4_1_ != '\0') {
        thunk_FUN_03cdf404(in_stack_00000008,0);
      }
      return unaff_w23;
    }
    do {
      if (unaff_w22 < 1) goto LAB_06d9a240;
      iVar4 = *(int *)(unaff_x25 + 0x48);
      iVar9 = iVar4 - *(int *)(unaff_x25 + 0x4c);
      if (iVar9 != 0 && *(int *)(unaff_x25 + 0x4c) <= iVar4) {
        iVar1 = unaff_w22;
        if (iVar9 <= unaff_w22) {
          iVar1 = iVar9;
        }
        if (unaff_w21 == 0x20) {
          FUN_0712ec00(*(undefined8 *)(unaff_x25 + 0x40));
        }
        else {
          iVar4 = iVar1 + 3;
          if (-1 < iVar1) {
            iVar4 = iVar1;
          }
          if (3 < iVar1) {
            iVar9 = 0;
            do {
              if (unaff_w21 == 0x10) {
                lVar8 = *(long *)(unaff_x25 + 0x40);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                iVar3 = *(int *)(unaff_x25 + 0x4c);
                iVar2 = iVar3 + 3;
                if (-1 < iVar3) {
                  iVar2 = iVar3;
                }
                uVar10 = iVar9 + (iVar2 >> 2);
                if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb38();
                }
                fVar12 = *(float *)(lVar8 + (long)(int)uVar10 * 4 + 0x20);
                if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                fVar12 = fVar12 * unaff_s14 + unaff_s9;
                dVar13 = (double)fVar12;
                dVar11 = modf(dVar13,(double *)&stack0x00000038);
                if (0.0 <= fVar12) {
                  if (dVar11 == unaff_d12) {
                    dVar11 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) +
                             unaff_d13;
                    goto LAB_06d99f0c;
                  }
                  dVar13 = (double)(long)(dVar13 + unaff_d12);
                }
                else if (dVar11 == unaff_d10) {
                  dVar11 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) +
                           unaff_d11;
LAB_06d99f0c:
                  dVar13 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038);
                  if (((long)(double)CONCAT71(uStack0000000000000039,uStack0000000000000038) & 1U)
                      != 0) {
                    dVar13 = dVar11;
                  }
                }
                else {
                  dVar13 = (double)(long)(dVar13 + unaff_d10);
                }
                iVar2 = -0x80000000;
                if (dVar13 != INFINITY) {
                  iVar2 = (int)dVar13;
                }
                if (iVar2 < 0) {
                  iVar2 = iVar2 + 0x10000;
                }
                uStack0000000000000038 = (undefined1)iVar2;
                uVar5 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e69618,&stack0x00000038);
                if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30(uVar5,uVar5);
                }
                FUN_0712430c();
                iVar3 = iVar2 + 0xff;
                if (-1 < iVar2) {
                  iVar3 = iVar2;
                }
                in_stack_00000018._4_1_ = (undefined1)((uint)iVar3 >> 8);
                thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e69618,(long)&stack0x00000018 + 4);
                FUN_0712430c();
              }
              else if (unaff_w21 == 8) {
                lVar8 = *(long *)(unaff_x25 + 0x40);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                iVar3 = *(int *)(unaff_x25 + 0x4c);
                iVar2 = iVar3 + 3;
                if (-1 < iVar3) {
                  iVar2 = iVar3;
                }
                uVar10 = iVar9 + (iVar2 >> 2);
                if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb38();
                }
                fVar12 = *(float *)(lVar8 + (long)(int)uVar10 * 4 + 0x20);
                if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                fVar12 = fVar12 * 127.5 + 127.5;
                dVar13 = (double)fVar12;
                dVar11 = modf(dVar13,(double *)&stack0x00000038);
                if (0.0 <= fVar12) {
                  if (dVar11 == unaff_d12) {
                    dVar11 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) +
                             unaff_d13;
                    goto LAB_06d99eec;
                  }
                  dVar13 = (double)(long)(dVar13 + unaff_d12);
                }
                else if (dVar11 == unaff_d10) {
                  dVar11 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) +
                           unaff_d11;
LAB_06d99eec:
                  dVar13 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038);
                  if (((long)(double)CONCAT71(uStack0000000000000039,uStack0000000000000038) & 1U)
                      != 0) {
                    dVar13 = dVar11;
                  }
                }
                else {
                  dVar13 = (double)(long)(dVar13 + unaff_d10);
                }
                uStack0000000000000038 = (undefined1)(int)dVar13;
                uVar5 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e69618,&stack0x00000038);
                if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30(uVar5,uVar5);
                }
                FUN_0712430c();
              }
              iVar9 = iVar9 + 1;
            } while (iVar4 >> 2 != iVar9);
          }
        }
        iVar4 = *(int *)(unaff_x25 + 0x48);
        iVar9 = *(int *)(unaff_x25 + 0x4c) + iVar1;
        unaff_w23 = iVar1 + unaff_w23;
        unaff_w22 = unaff_w22 - iVar1;
        *(long *)(unaff_x25 + 0x38) = *(long *)(unaff_x25 + 0x38) + (long)iVar1;
        *(int *)(unaff_x25 + 0x4c) = iVar9;
        if (iVar9 == iVar4) {
          *(undefined4 *)(unaff_x25 + 0x48) = 0;
          break;
        }
      }
    } while (iVar4 != 0);
    if (*(char *)(unaff_x25 + 0x19) != '\0') goto LAB_06d9a240;
    if (*(long *)(unaff_x25 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    unaff_x29 = FUN_06d9958c();
    if (unaff_x29 == 0) {
      *(undefined1 *)(unaff_x25 + 0x19) = 1;
      goto LAB_06d9a240;
    }
    if (*(long *)(unaff_x25 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    iVar4 = FUN_06d996fc(*(long *)(unaff_x25 + 0x28),unaff_x29,*(undefined8 *)(unaff_x25 + 0x40),0);
    *(int *)(unaff_x25 + 0x48) = iVar4 << 2;
    *(undefined4 *)(unaff_x25 + 0x4c) = 0;
    uVar10 = 2;
  } while( true );
}


