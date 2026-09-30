/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$CreateAnchor
ENTRY_POINT: 0147c940
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0147cb0c) */
/* WARNING: Removing unreachable block (ram,0x0147caf8) */

int Meta_XR_MRUtilityKit_MRUK__CreateAnchor(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  undefined4 unaff_w19;
  uint unaff_w20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x24;
  long unaff_x25;
  long unaff_x29;
  double dVar10;
  float fVar11;
  double dVar12;
  float unaff_s9;
  double unaff_d10;
  double unaff_d11;
  double unaff_d12;
  double unaff_d13;
  float unaff_s14;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  int iStack0000000000000018;
  undefined1 uStack000000000000001c;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined1 uStack0000000000000038;
  undefined7 uStack0000000000000039;
  
  __cxa_end_catch();
  if (unaff_w20 == 0x11) {
    if (*(long *)(unaff_x25 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0147bd44();
    *(undefined8 *)(unaff_x25 + 0x48) = 0;
    unaff_w20 = 2;
    uVar5 = in_stack_00000010._4_4_;
  }
  else {
    uVar5 = unaff_w19;
    if (unaff_w20 == 0x12) {
      unaff_w20 = 0xf;
      *(undefined1 *)(unaff_x25 + 0x19) = 1;
      uVar5 = in_stack_00000010._4_4_;
    }
  }
  do {
    in_stack_00000010._4_4_ = uVar5;
    FUN_0147f0e8(unaff_x29);
    if ((unaff_w20 | 2) != 2) {
LAB_0147ca34:
      if (in_stack_00000030._4_1_ != '\0') {
        thunk_FUN_00d56f10(in_stack_00000008,0);
      }
      return iStack0000000000000018;
    }
    do {
      if (unaff_w22 < 1) goto LAB_0147ca34;
      iVar6 = *(int *)(unaff_x25 + 0x48);
      iVar9 = iVar6 - *(int *)(unaff_x25 + 0x4c);
      if (iVar9 != 0 && *(int *)(unaff_x25 + 0x4c) <= iVar6) {
        iVar2 = unaff_w22;
        if (iVar9 <= unaff_w22) {
          iVar2 = iVar9;
        }
        if (unaff_w21 == 0x20) {
          FUN_0179eccc(*(undefined8 *)(unaff_x25 + 0x40));
        }
        else {
          iVar6 = iVar2 + 3;
          if (-1 < iVar2) {
            iVar6 = iVar2;
          }
          if (3 < iVar2) {
            iVar9 = 0;
            do {
              if (unaff_w21 == 0x10) {
                lVar8 = *(long *)(unaff_x25 + 0x40);
                if (lVar8 == 0) {
                  in_stack_00000028 = in_stack_00000010._4_4_;
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                iVar4 = *(int *)(unaff_x25 + 0x4c);
                iVar3 = iVar4 + 3;
                if (-1 < iVar4) {
                  iVar3 = iVar4;
                }
                uVar1 = iVar9 + (iVar3 >> 2);
                if (*(uint *)(lVar8 + 0x18) <= uVar1) {
                  in_stack_00000028 = in_stack_00000010._4_4_;
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                fVar11 = *(float *)(lVar8 + (long)(int)uVar1 * 4 + 0x20);
                if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                fVar11 = fVar11 * unaff_s14 + unaff_s9;
                dVar12 = (double)fVar11;
                dVar10 = modf(dVar12,(double *)&stack0x00000038);
                if (0.0 <= fVar11) {
                  if (dVar10 == unaff_d12) {
                    dVar10 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) +
                             unaff_d13;
                    goto LAB_0147c6fc;
                  }
                  dVar12 = (double)(long)(dVar12 + unaff_d12);
                }
                else if (dVar10 == unaff_d10) {
                  dVar10 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) +
                           unaff_d11;
LAB_0147c6fc:
                  dVar12 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038);
                  if (((long)(double)CONCAT71(uStack0000000000000039,uStack0000000000000038) & 1U)
                      != 0) {
                    dVar12 = dVar10;
                  }
                }
                else {
                  dVar12 = (double)(long)(dVar12 + unaff_d10);
                }
                iVar3 = -0x80000000;
                if (dVar12 != INFINITY) {
                  iVar3 = (int)dVar12;
                }
                if (iVar3 < 0) {
                  iVar3 = iVar3 + 0x10000;
                }
                uStack0000000000000038 = (undefined1)iVar3;
                uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)UnityEngine_Texture2D___TypeInfo,
                                           &stack0x00000038);
                if (unaff_x24 == 0) {
                  in_stack_00000028 = in_stack_00000010._4_4_;
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c(uVar7,uVar7);
                }
                FUN_01794eec();
                iVar4 = iVar3 + 0xff;
                if (-1 < iVar3) {
                  iVar4 = iVar3;
                }
                uStack000000000000001c = (undefined1)((uint)iVar4 >> 8);
                thunk_FUN_00d61fa0(*(undefined8 *)UnityEngine_Texture2D___TypeInfo,
                                   (long)&stack0x00000018 + 4);
                FUN_01794eec();
              }
              else if (unaff_w21 == 8) {
                lVar8 = *(long *)(unaff_x25 + 0x40);
                if (lVar8 == 0) {
                  in_stack_00000028 = in_stack_00000010._4_4_;
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                iVar4 = *(int *)(unaff_x25 + 0x4c);
                iVar3 = iVar4 + 3;
                if (-1 < iVar4) {
                  iVar3 = iVar4;
                }
                uVar1 = iVar9 + (iVar3 >> 2);
                if (*(uint *)(lVar8 + 0x18) <= uVar1) {
                  in_stack_00000028 = in_stack_00000010._4_4_;
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                fVar11 = *(float *)(lVar8 + (long)(int)uVar1 * 4 + 0x20);
                if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                fVar11 = fVar11 * 127.5 + 127.5;
                dVar12 = (double)fVar11;
                dVar10 = modf(dVar12,(double *)&stack0x00000038);
                if (0.0 <= fVar11) {
                  if (dVar10 == unaff_d12) {
                    dVar10 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) +
                             unaff_d13;
                    goto LAB_0147c6dc;
                  }
                  dVar12 = (double)(long)(dVar12 + unaff_d12);
                }
                else if (dVar10 == unaff_d10) {
                  dVar10 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) +
                           unaff_d11;
LAB_0147c6dc:
                  dVar12 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038);
                  if (((long)(double)CONCAT71(uStack0000000000000039,uStack0000000000000038) & 1U)
                      != 0) {
                    dVar12 = dVar10;
                  }
                }
                else {
                  dVar12 = (double)(long)(dVar12 + unaff_d10);
                }
                uStack0000000000000038 = (undefined1)(int)dVar12;
                uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)UnityEngine_Texture2D___TypeInfo,
                                           &stack0x00000038);
                if (unaff_x24 == 0) {
                  in_stack_00000028 = in_stack_00000010._4_4_;
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c(uVar7,uVar7);
                }
                FUN_01794eec();
              }
              iVar9 = iVar9 + 1;
            } while (iVar6 >> 2 != iVar9);
          }
        }
        iVar6 = *(int *)(unaff_x25 + 0x48);
        iVar9 = *(int *)(unaff_x25 + 0x4c) + iVar2;
        iStack0000000000000018 = iVar2 + iStack0000000000000018;
        unaff_w22 = unaff_w22 - iVar2;
        *(long *)(unaff_x25 + 0x38) = *(long *)(unaff_x25 + 0x38) + (long)iVar2;
        *(int *)(unaff_x25 + 0x4c) = iVar9;
        if (iVar9 == iVar6) {
          *(undefined4 *)(unaff_x25 + 0x48) = 0;
          break;
        }
      }
    } while (iVar6 != 0);
    if (*(char *)(unaff_x25 + 0x19) != '\0') goto LAB_0147ca34;
    if (*(long *)(unaff_x25 + 0x20) == 0) {
      in_stack_00000028 = in_stack_00000010._4_4_;
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    unaff_x29 = FUN_0147bd94();
    if (unaff_x29 == 0) {
      *(undefined1 *)(unaff_x25 + 0x19) = 1;
      goto LAB_0147ca34;
    }
    if (*(long *)(unaff_x25 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar6 = FUN_0147bee0(*(long *)(unaff_x25 + 0x28),unaff_x29,*(undefined8 *)(unaff_x25 + 0x40),0);
    *(int *)(unaff_x25 + 0x48) = iVar6 << 2;
    *(undefined4 *)(unaff_x25 + 0x4c) = 0;
    unaff_w20 = 2;
    uVar5 = in_stack_00000010._4_4_;
  } while( true );
}


