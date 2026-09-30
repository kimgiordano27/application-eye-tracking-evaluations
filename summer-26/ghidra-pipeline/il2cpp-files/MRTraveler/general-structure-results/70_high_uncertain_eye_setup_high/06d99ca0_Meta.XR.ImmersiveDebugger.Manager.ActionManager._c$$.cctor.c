/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManager.<>c$$.cctor
ENTRY_POINT: 06d99ca0
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

int Meta_XR_ImmersiveDebugger_Manager_ActionManager_<>c___cctor
              (long param_1,long param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000028;
  char cStack0000000000000034;
  undefined1 uStack0000000000000038;
  undefined7 uStack0000000000000039;
  
  if ((DAT_09419aa7 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e69618);
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_09419aa7 = 1;
  }
  in_stack_00000028 = 0;
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  cStack0000000000000034 = '\0';
  FUN_0716f8f0(uVar12,&stack0x00000034,0);
  uVar7 = in_stack_00000028;
  fVar6 = DAT_018b074c;
  if (param_4 < 1) {
    iVar13 = 0;
  }
  else {
    iVar13 = 0;
    do {
      iVar8 = *(int *)(param_1 + 0x48);
      iVar4 = *(int *)(param_1 + 0x4c);
      iVar11 = iVar8 - iVar4;
      if (iVar11 == 0 || iVar8 < iVar4) {
LAB_06d9a05c:
        if (iVar8 == 0) goto LAB_06d9a060;
      }
      else {
        iVar2 = param_4;
        if (iVar11 <= param_4) {
          iVar2 = iVar11;
        }
        if (param_5 == 0x20) {
          FUN_0712ec00(*(undefined8 *)(param_1 + 0x40),iVar4,param_2,param_3,iVar2,0);
        }
        else {
          iVar8 = iVar2 + 3;
          if (-1 < iVar2) {
            iVar8 = iVar2;
          }
          if (3 < iVar2) {
            iVar4 = param_3 + 3;
            if (-1 < param_3) {
              iVar4 = param_3;
            }
            iVar11 = 0;
            iVar14 = (iVar4 >> 2) << 1;
            do {
              if (param_5 == 0x10) {
                lVar10 = *(long *)(param_1 + 0x40);
                if (lVar10 == 0) {
                  in_stack_00000028 = uVar7;
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                iVar5 = *(int *)(param_1 + 0x4c);
                iVar3 = iVar5 + 3;
                if (-1 < iVar5) {
                  iVar3 = iVar5;
                }
                uVar1 = iVar11 + (iVar3 >> 2);
                if (*(uint *)(lVar10 + 0x18) <= uVar1) {
                  in_stack_00000028 = uVar7;
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb38();
                }
                fVar16 = *(float *)(lVar10 + (long)(int)uVar1 * 4 + 0x20);
                if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                fVar16 = fVar16 * fVar6 + -0.5;
                dVar17 = (double)fVar16;
                dVar15 = modf(dVar17,(double *)&stack0x00000038);
                if (0.0 <= fVar16) {
                  if (dVar15 == 0.5) {
                    dVar15 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) + 1.0;
                    goto LAB_06d99f0c;
                  }
                  dVar17 = (double)(long)(dVar17 + 0.5);
                }
                else if (dVar15 == -0.5) {
                  dVar15 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) + -1.0;
LAB_06d99f0c:
                  dVar17 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038);
                  if (((long)(double)CONCAT71(uStack0000000000000039,uStack0000000000000038) & 1U)
                      != 0) {
                    dVar17 = dVar15;
                  }
                }
                else {
                  dVar17 = (double)(long)(dVar17 + -0.5);
                }
                iVar3 = -0x80000000;
                if (dVar17 != INFINITY) {
                  iVar3 = (int)dVar17;
                }
                if (iVar3 < 0) {
                  iVar3 = iVar3 + 0x10000;
                }
                uStack0000000000000038 = (undefined1)iVar3;
                uVar9 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e69618,&stack0x00000038);
                if (param_2 == 0) {
                  in_stack_00000028 = uVar7;
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30(uVar9,uVar9);
                }
                FUN_0712430c(param_2,uVar9,iVar14,0);
                iVar5 = iVar3 + 0xff;
                if (-1 < iVar3) {
                  iVar5 = iVar3;
                }
                in_stack_00000018._4_1_ = (undefined1)((uint)iVar5 >> 8);
                uVar9 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e69618,
                                           (long)&stack0x00000018 + 4);
                FUN_0712430c(param_2,uVar9,iVar14 + 1,0);
              }
              else if (param_5 == 8) {
                lVar10 = *(long *)(param_1 + 0x40);
                if (lVar10 == 0) {
                  in_stack_00000028 = uVar7;
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                iVar5 = *(int *)(param_1 + 0x4c);
                iVar3 = iVar5 + 3;
                if (-1 < iVar5) {
                  iVar3 = iVar5;
                }
                uVar1 = iVar11 + (iVar3 >> 2);
                if (*(uint *)(lVar10 + 0x18) <= uVar1) {
                  in_stack_00000028 = uVar7;
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb38();
                }
                fVar16 = *(float *)(lVar10 + (long)(int)uVar1 * 4 + 0x20);
                if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                fVar16 = fVar16 * 127.5 + 127.5;
                dVar17 = (double)fVar16;
                dVar15 = modf(dVar17,(double *)&stack0x00000038);
                if (0.0 <= fVar16) {
                  if (dVar15 == 0.5) {
                    dVar15 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) + 1.0;
                    goto LAB_06d99eec;
                  }
                  dVar17 = (double)(long)(dVar17 + 0.5);
                }
                else if (dVar15 == -0.5) {
                  dVar15 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038) + -1.0;
LAB_06d99eec:
                  dVar17 = (double)CONCAT71(uStack0000000000000039,uStack0000000000000038);
                  if (((long)(double)CONCAT71(uStack0000000000000039,uStack0000000000000038) & 1U)
                      != 0) {
                    dVar17 = dVar15;
                  }
                }
                else {
                  dVar17 = (double)(long)(dVar17 + -0.5);
                }
                uStack0000000000000038 = (undefined1)(int)dVar17;
                uVar9 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e69618,&stack0x00000038);
                if (param_2 == 0) {
                  in_stack_00000028 = uVar7;
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30(uVar9,uVar9);
                }
                FUN_0712430c(param_2,uVar9,(iVar4 >> 2) + iVar11,0);
              }
              iVar11 = iVar11 + 1;
              iVar14 = iVar14 + 2;
            } while (iVar8 >> 2 != iVar11);
          }
        }
        iVar8 = *(int *)(param_1 + 0x48);
        iVar4 = *(int *)(param_1 + 0x4c) + iVar2;
        iVar13 = iVar2 + iVar13;
        param_4 = param_4 - iVar2;
        param_3 = iVar2 + param_3;
        *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + (long)iVar2;
        *(int *)(param_1 + 0x4c) = iVar4;
        if (iVar4 != iVar8) goto LAB_06d9a05c;
        *(undefined4 *)(param_1 + 0x48) = 0;
LAB_06d9a060:
        if (*(char *)(param_1 + 0x19) != '\0') break;
        if (*(long *)(param_1 + 0x20) == 0) {
          in_stack_00000028 = uVar7;
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar10 = FUN_06d9958c();
        if (lVar10 == 0) {
          *(undefined1 *)(param_1 + 0x19) = 1;
          break;
        }
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        iVar8 = FUN_06d996fc(*(long *)(param_1 + 0x28),lVar10,*(undefined8 *)(param_1 + 0x40),0);
        *(int *)(param_1 + 0x48) = iVar8 << 2;
        *(undefined4 *)(param_1 + 0x4c) = 0;
        FUN_06d9c7a4(lVar10);
      }
    } while (0 < param_4);
  }
  if (cStack0000000000000034 != '\0') {
    in_stack_00000028 = uVar7;
    thunk_FUN_03cdf404(uVar12,0);
  }
  return iVar13;
}


