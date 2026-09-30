/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Category$$get_Uid
ENTRY_POINT: 06d9a098
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
/* WARNING: Removing unreachable block (ram,0x06d9a2e4) */

int Meta_XR_ImmersiveDebugger_Manager_Category__get_Uid(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int in_w8;
  long lVar7;
  int iVar8;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x29;
  double dVar9;
  float fVar10;
  double dVar11;
  float unaff_s9;
  double unaff_d10;
  double unaff_d11;
  double unaff_d12;
  double unaff_d13;
  float unaff_s14;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined1 uStack0000000000000038;
  undefined7 uStack0000000000000039;
  
  do {
    *(int *)(unaff_x25 + 0x48) = in_w8;
    *(undefined4 *)(unaff_x25 + 0x4c) = 0;
    FUN_06d9c7a4(unaff_x29);
    do {
      if (unaff_w22 < 1) goto LAB_06d9a240;
      iVar5 = *(int *)(unaff_x25 + 0x48);
      iVar8 = iVar5 - *(int *)(unaff_x25 + 0x4c);
      if (iVar8 != 0 && *(int *)(unaff_x25 + 0x4c) <= iVar5) {
        iVar2 = unaff_w22;
        if (iVar8 <= unaff_w22) {
          iVar2 = iVar8;
        }
        if (unaff_w21 == 0x20) {
          FUN_0712ec00(*(undefined8 *)(unaff_x25 + 0x40));
        }
        else {
          iVar5 = iVar2 + 3;
          if (-1 < iVar2) {
            iVar5 = iVar2;
          }
          if (3 < iVar2) {
            iVar8 = 0;
            do {
              if (unaff_w21 == 0x10) {
                lVar7 = *(long *)(unaff_x25 + 0x40);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                iVar4 = *(int *)(unaff_x25 + 0x4c);
                iVar3 = iVar4 + 3;
                if (-1 < iVar4) {
                  iVar3 = iVar4;
                }
                uVar1 = iVar8 + (iVar3 >> 2);
                if (*(uint *)(lVar7 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb38();
                }
                fVar10 = *(float *)(lVar7 + (long)(int)uVar1 * 4 + 0x20);
                if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                fVar10 = fVar10 * unaff_s14 + unaff_s9;
                dVar11 = (double)fVar10;
                dVar9 = modf(dVar11,(double *)&stack0x00000038);
                if (0.0 <= fVar10) {
                  if (dVar9 == unaff_d12) {
                    dVar9 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) +
                            unaff_d13;
                    goto LAB_06d99f0c;
                  }
                  dVar11 = (double)(long)(dVar11 + unaff_d12);
                }
                else if (dVar9 == unaff_d10) {
                  dVar9 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) +
                          unaff_d11;
LAB_06d99f0c:
                  dVar11 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038);
                  if (((long)(double)CONCAT71(uStack0000000000000039,uStack0000000000000038) & 1U)
                      != 0) {
                    dVar11 = dVar9;
                  }
                }
                else {
                  dVar11 = (double)(long)(dVar11 + unaff_d10);
                }
                iVar3 = -0x80000000;
                if (dVar11 != INFINITY) {
                  iVar3 = (int)dVar11;
                }
                if (iVar3 < 0) {
                  iVar3 = iVar3 + 0x10000;
                }
                uStack0000000000000038 = (undefined1)iVar3;
                uVar6 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e69618,&stack0x00000038);
                if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30(uVar6,uVar6);
                }
                FUN_0712430c();
                iVar4 = iVar3 + 0xff;
                if (-1 < iVar3) {
                  iVar4 = iVar3;
                }
                in_stack_00000018._4_1_ = (undefined1)((uint)iVar4 >> 8);
                thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e69618,(long)&stack0x00000018 + 4);
                FUN_0712430c();
              }
              else if (unaff_w21 == 8) {
                lVar7 = *(long *)(unaff_x25 + 0x40);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                iVar4 = *(int *)(unaff_x25 + 0x4c);
                iVar3 = iVar4 + 3;
                if (-1 < iVar4) {
                  iVar3 = iVar4;
                }
                uVar1 = iVar8 + (iVar3 >> 2);
                if (*(uint *)(lVar7 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb38();
                }
                fVar10 = *(float *)(lVar7 + (long)(int)uVar1 * 4 + 0x20);
                if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                fVar10 = fVar10 * 127.5 + 127.5;
                dVar11 = (double)fVar10;
                dVar9 = modf(dVar11,(double *)&stack0x00000038);
                if (0.0 <= fVar10) {
                  if (dVar9 == unaff_d12) {
                    dVar9 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) +
                            unaff_d13;
                    goto LAB_06d99eec;
                  }
                  dVar11 = (double)(long)(dVar11 + unaff_d12);
                }
                else if (dVar9 == unaff_d10) {
                  dVar9 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) +
                          unaff_d11;
LAB_06d99eec:
                  dVar11 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038);
                  if (((long)(double)CONCAT71(uStack0000000000000039,uStack0000000000000038) & 1U)
                      != 0) {
                    dVar11 = dVar9;
                  }
                }
                else {
                  dVar11 = (double)(long)(dVar11 + unaff_d10);
                }
                uStack0000000000000038 = (undefined1)(int)dVar11;
                uVar6 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e69618,&stack0x00000038);
                if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30(uVar6,uVar6);
                }
                FUN_0712430c();
              }
              iVar8 = iVar8 + 1;
            } while (iVar5 >> 2 != iVar8);
          }
        }
        iVar5 = *(int *)(unaff_x25 + 0x48);
        iVar8 = *(int *)(unaff_x25 + 0x4c) + iVar2;
        unaff_w23 = iVar2 + unaff_w23;
        unaff_w22 = unaff_w22 - iVar2;
        *(long *)(unaff_x25 + 0x38) = *(long *)(unaff_x25 + 0x38) + (long)iVar2;
        *(int *)(unaff_x25 + 0x4c) = iVar8;
        if (iVar8 == iVar5) {
          *(undefined4 *)(unaff_x25 + 0x48) = 0;
          break;
        }
      }
    } while (iVar5 != 0);
    if (*(char *)(unaff_x25 + 0x19) != '\0') {
LAB_06d9a240:
      if (in_stack_00000030._4_1_ != '\0') {
        thunk_FUN_03cdf404(in_stack_00000008,0);
      }
      return unaff_w23;
    }
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
    iVar5 = FUN_06d996fc(*(long *)(unaff_x25 + 0x28),unaff_x29,*(undefined8 *)(unaff_x25 + 0x40),0);
    in_w8 = iVar5 << 2;
  } while( true );
}


