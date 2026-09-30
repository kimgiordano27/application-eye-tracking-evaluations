/*
FUNCTION_NAME: OVRPlugin.Qpl$$DestroyMarkerHandle
ENTRY_POINT: 05162a40
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05162f4c) */
/* WARNING: Removing unreachable block (ram,0x05162f50) */
/* WARNING: Removing unreachable block (ram,0x05162ff8) */

void OVRPlugin_Qpl__DestroyMarkerHandle(undefined8 param_1,long *param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  
  if ((DAT_06b79e65 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06782508);
    FUN_02d6084c(PTR_DAT_06782510);
    FUN_02d6084c(PTR_DAT_06782518);
    FUN_02d6084c(PTR_DAT_067823f0);
    FUN_02d6084c(PTR_DAT_067823b8);
    FUN_02d6084c(PTR_DAT_06782520);
    FUN_02d6084c(PTR_DAT_06782528);
    FUN_02d6084c(PTR_DAT_06782428);
    FUN_02d6084c(PTR_DAT_067823c8);
    FUN_02d6084c(PTR_DAT_0676bc98);
    FUN_02d6084c(PTR_DAT_0676bca0);
    DAT_06b79e65 = 1;
  }
  puVar9 = PTR_DAT_06782528;
  puVar8 = PTR_DAT_06782520;
  puVar7 = PTR_DAT_06782510;
  puVar6 = PTR_DAT_06782508;
  puVar5 = PTR_DAT_067823f0;
  puVar4 = PTR_DAT_067823b8;
  puVar3 = PTR_DAT_0676bca0;
  puVar2 = PTR_DAT_0676bc98;
  lVar19 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = (long *)0x0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = (long *)0x0;
  while (param_2 != (long *)0x0) {
    lVar15 = *param_2;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
          puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 4) * 0x10 + 0x138);
          goto LAB_05162b8c;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_02d9a5d4(param_2,*(long *)puVar5,4);
LAB_05162b8c:
    param_2 = (long *)(*(code *)*puVar11)(param_2,puVar11[1]);
    if (param_2 == (long *)0x0) {
      if (lVar19 != 0) {
        FUN_03aadce4(lVar19,*(undefined8 *)puVar9);
        FUN_03aaceb0(&stack0x00000008,lVar19,*(undefined8 *)puVar8);
        in_stack_00000048 = in_stack_00000010;
        in_stack_00000040 = in_stack_00000008;
        in_stack_00000050 = in_stack_00000018;
        while (uVar16 = FUN_04a7a4a0(&stack0x00000040,*(undefined8 *)puVar7),
              plVar12 = in_stack_00000050, (uVar16 & 1) != 0) {
          if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          (**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0));
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar19 = *plVar12;
          uVar16 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar16 != 0) {
            piVar18 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
                puVar11 = (undefined8 *)(lVar19 + (long)(*piVar18 + 3) * 0x10 + 0x138);
                goto LAB_05162d38;
              }
              uVar16 = uVar16 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar16 != 0);
          }
          puVar11 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar5,3);
LAB_05162d38:
          lVar19 = (*(code *)*puVar11)(plVar12,puVar11[1]);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          FUN_03aaceb0(&stack0x00000008,lVar19,*(undefined8 *)puVar8);
          in_stack_00000028 = in_stack_00000010;
          in_stack_00000020 = in_stack_00000008;
          in_stack_00000030 = in_stack_00000018;
          while (uVar16 = FUN_04a7a4a0(&stack0x00000020,*(undefined8 *)puVar7),
                plVar12 = in_stack_00000030, (uVar16 & 1) != 0) {
            if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            lVar19 = *in_stack_00000030;
            uVar16 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
                  puVar11 = (undefined8 *)(lVar19 + (long)(*piVar18 + 8) * 0x10 + 0x138);
                  goto LAB_05162dcc;
                }
                uVar16 = uVar16 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar16 != 0);
            }
            puVar11 = (undefined8 *)FUN_02d9a5d4(in_stack_00000030,*(long *)puVar5,8);
LAB_05162dcc:
            uVar13 = (*(code *)*puVar11)(plVar12,puVar11[1]);
            uVar16 = thunk_FUN_04e8bd3c(uVar13,*(undefined8 *)puVar2,0);
            if ((uVar16 & 1) != 0) {
              lVar19 = *plVar12;
              uVar16 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
                    puVar11 = (undefined8 *)(lVar19 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                    goto LAB_05162e38;
                  }
                  uVar16 = uVar16 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar16 != 0);
              }
              puVar11 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar5,1);
LAB_05162e38:
              uVar13 = (*(code *)*puVar11)(plVar12,puVar11[1]);
              uVar16 = FUN_04e8c024(uVar13,*(undefined8 *)puVar3,0);
              if ((uVar16 & 1) != 0) {
                lVar19 = *plVar12;
                uVar16 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar16 != 0) {
                  piVar18 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
                      puVar11 = (undefined8 *)(lVar19 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                      goto LAB_05162ea4;
                    }
                    uVar16 = uVar16 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar16 != 0);
                }
                puVar11 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar5,1);
LAB_05162ea4:
                uVar13 = (*(code *)*puVar11)(plVar12,puVar11[1]);
                lVar19 = *plVar12;
                uVar16 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar16 != 0) {
                  piVar18 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
                      puVar11 = (undefined8 *)(lVar19 + (long)(*piVar18 + 5) * 0x10 + 0x138);
                      goto LAB_05162f04;
                    }
                    uVar16 = uVar16 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar16 != 0);
                }
                puVar11 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar5,5);
LAB_05162f04:
                uVar14 = (*(code *)*puVar11)(plVar12,puVar11[1]);
                (**(code **)(*param_3 + 0x1f8))
                          (param_3,uVar13,uVar14,*(undefined8 *)(*param_3 + 0x200));
              }
            }
          }
          FUN_04a7a49c(&stack0x00000020,*(undefined8 *)puVar6);
        }
        FUN_04a7a49c(&stack0x00000040,*(undefined8 *)puVar6);
      }
      return;
    }
    lVar15 = *param_2;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
          goto FUN_05162bec;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_02d9a5d4(param_2,*(long *)puVar5,0);
FUN_05162bec:
    iVar10 = (*(code *)*puVar11)(param_2,puVar11[1]);
    if (iVar10 == 1) {
      if (lVar19 == 0) {
        lVar19 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067823c8);
        FUN_03aabc60(lVar19,*(undefined8 *)PTR_DAT_06782428);
        if (lVar19 == 0) break;
      }
      lVar15 = *(long *)(lVar19 + 0x10);
      lVar17 = *(long *)puVar4;
      *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
      if (lVar15 == 0) break;
      uVar1 = *(uint *)(lVar19 + 0x18);
      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar19 + 0x18) = uVar1 + 1;
        plVar12 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
        *plVar12 = (long)param_2;
        thunk_FUN_02dd37b4(plVar12,param_2);
      }
      else {
        FUN_03aac494(lVar19,param_2,
                     *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


