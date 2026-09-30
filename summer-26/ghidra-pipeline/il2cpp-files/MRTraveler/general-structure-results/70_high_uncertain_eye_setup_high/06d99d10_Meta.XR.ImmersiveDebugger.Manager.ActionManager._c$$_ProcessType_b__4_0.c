/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManager.<>c$$<ProcessType>b__4_0
ENTRY_POINT: 06d99d10
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06d9a2f4) */
/* WARNING: Removing unreachable block (ram,0x06d9a2e4) */

int Meta_XR_ImmersiveDebugger_Manager_ActionManager_<>c__<ProcessType>b__4_0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  undefined8 unaff_x19;
  int unaff_w21;
  int unaff_w22;
  int iVar11;
  long unaff_x24;
  long unaff_x25;
  double dVar12;
  float fVar13;
  double dVar14;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined1 uStack0000000000000038;
  undefined7 uStack0000000000000039;
  
  FUN_0716f8f0();
  uVar6 = in_stack_00000028;
  fVar5 = DAT_018b074c;
  if (unaff_w22 < 1) {
    iVar11 = 0;
  }
  else {
    iVar11 = 0;
    do {
      iVar7 = *(int *)(unaff_x25 + 0x48);
      iVar10 = iVar7 - *(int *)(unaff_x25 + 0x4c);
      if (iVar10 == 0 || iVar7 < *(int *)(unaff_x25 + 0x4c)) {
LAB_06d9a05c:
        if (iVar7 == 0) goto LAB_06d9a060;
      }
      else {
        iVar2 = unaff_w22;
        if (iVar10 <= unaff_w22) {
          iVar2 = iVar10;
        }
        if (unaff_w21 == 0x20) {
          FUN_0712ec00(*(undefined8 *)(unaff_x25 + 0x40));
        }
        else {
          iVar7 = iVar2 + 3;
          if (-1 < iVar2) {
            iVar7 = iVar2;
          }
          if (3 < iVar2) {
            iVar10 = 0;
            do {
              if (unaff_w21 == 0x10) {
                lVar9 = *(long *)(unaff_x25 + 0x40);
                if (lVar9 == 0) {
                  in_stack_00000028 = uVar6;
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                iVar4 = *(int *)(unaff_x25 + 0x4c);
                iVar3 = iVar4 + 3;
                if (-1 < iVar4) {
                  iVar3 = iVar4;
                }
                uVar1 = iVar10 + (iVar3 >> 2);
                if (*(uint *)(lVar9 + 0x18) <= uVar1) {
                  in_stack_00000028 = uVar6;
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb38();
                }
                fVar13 = *(float *)(lVar9 + (long)(int)uVar1 * 4 + 0x20);
                if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                fVar13 = fVar13 * fVar5 + -0.5;
                dVar14 = (double)fVar13;
                dVar12 = modf(dVar14,(double *)&stack0x00000038);
                if (0.0 <= fVar13) {
                  if (dVar12 == 0.5) {
                    dVar12 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) + 1.0;
                    goto LAB_06d99f0c;
                  }
                  dVar14 = (double)(long)(dVar14 + 0.5);
                }
                else if (dVar12 == -0.5) {
                  dVar12 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) + -1.0;
LAB_06d99f0c:
                  dVar14 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038);
                  if (((long)(double)CONCAT71(uStack0000000000000039,uStack0000000000000038) & 1U)
                      != 0) {
                    dVar14 = dVar12;
                  }
                }
                else {
                  dVar14 = (double)(long)(dVar14 + -0.5);
                }
                iVar3 = -0x80000000;
                if (dVar14 != INFINITY) {
                  iVar3 = (int)dVar14;
                }
                if (iVar3 < 0) {
                  iVar3 = iVar3 + 0x10000;
                }
                uStack0000000000000038 = (undefined1)iVar3;
                uVar8 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e69618,&stack0x00000038);
                if (unaff_x24 == 0) {
                  in_stack_00000028 = uVar6;
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30(uVar8,uVar8);
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
                lVar9 = *(long *)(unaff_x25 + 0x40);
                if (lVar9 == 0) {
                  in_stack_00000028 = uVar6;
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                iVar4 = *(int *)(unaff_x25 + 0x4c);
                iVar3 = iVar4 + 3;
                if (-1 < iVar4) {
                  iVar3 = iVar4;
                }
                uVar1 = iVar10 + (iVar3 >> 2);
                if (*(uint *)(lVar9 + 0x18) <= uVar1) {
                  in_stack_00000028 = uVar6;
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb38();
                }
                fVar13 = *(float *)(lVar9 + (long)(int)uVar1 * 4 + 0x20);
                if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                fVar13 = fVar13 * 127.5 + 127.5;
                dVar14 = (double)fVar13;
                dVar12 = modf(dVar14,(double *)&stack0x00000038);
                if (0.0 <= fVar13) {
                  if (dVar12 == 0.5) {
                    dVar12 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) + 1.0;
                    goto LAB_06d99eec;
                  }
                  dVar14 = (double)(long)(dVar14 + 0.5);
                }
                else if (dVar12 == -0.5) {
                  dVar12 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) + -1.0;
LAB_06d99eec:
                  dVar14 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038);
                  if (((long)(double)CONCAT71(uStack0000000000000039,uStack0000000000000038) & 1U)
                      != 0) {
                    dVar14 = dVar12;
                  }
                }
                else {
                  dVar14 = (double)(long)(dVar14 + -0.5);
                }
                uStack0000000000000038 = (undefined1)(int)dVar14;
                uVar8 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e69618,&stack0x00000038);
                if (unaff_x24 == 0) {
                  in_stack_00000028 = uVar6;
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30(uVar8,uVar8);
                }
                FUN_0712430c();
              }
              iVar10 = iVar10 + 1;
            } while (iVar7 >> 2 != iVar10);
          }
        }
        iVar7 = *(int *)(unaff_x25 + 0x48);
        iVar10 = *(int *)(unaff_x25 + 0x4c) + iVar2;
        iVar11 = iVar2 + iVar11;
        unaff_w22 = unaff_w22 - iVar2;
        *(long *)(unaff_x25 + 0x38) = *(long *)(unaff_x25 + 0x38) + (long)iVar2;
        *(int *)(unaff_x25 + 0x4c) = iVar10;
        if (iVar10 != iVar7) goto LAB_06d9a05c;
        *(undefined4 *)(unaff_x25 + 0x48) = 0;
LAB_06d9a060:
        if (*(char *)(unaff_x25 + 0x19) != '\0') break;
        if (*(long *)(unaff_x25 + 0x20) == 0) {
          in_stack_00000028 = uVar6;
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar9 = FUN_06d9958c();
        if (lVar9 == 0) {
          *(undefined1 *)(unaff_x25 + 0x19) = 1;
          break;
        }
        if (*(long *)(unaff_x25 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        iVar7 = FUN_06d996fc(*(long *)(unaff_x25 + 0x28),lVar9,*(undefined8 *)(unaff_x25 + 0x40),0);
        *(int *)(unaff_x25 + 0x48) = iVar7 << 2;
        *(undefined4 *)(unaff_x25 + 0x4c) = 0;
        FUN_06d9c7a4(lVar9);
      }
    } while (0 < unaff_w22);
  }
  if (in_stack_00000030._4_1_ != '\0') {
    in_stack_00000028 = uVar6;
    thunk_FUN_03cdf404(unaff_x19,0);
  }
  return iVar11;
}


