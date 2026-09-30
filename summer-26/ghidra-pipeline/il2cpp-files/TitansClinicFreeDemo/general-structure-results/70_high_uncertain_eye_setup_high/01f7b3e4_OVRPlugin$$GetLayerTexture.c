/*
FUNCTION_NAME: OVRPlugin$$GetLayerTexture
ENTRY_POINT: 01f7b3e4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin__GetLayerTexture(long param_1,int param_2,long param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  int iVar8;
  long lVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long lStack0000000000000028;
  
  lVar9 = tpidr_el0;
  lStack0000000000000028 = *(long *)(lVar9 + 0x28);
  if ((DAT_0293ddec & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3998);
    thunk_FUN_01279b34(PTR_DAT_027c10d0);
    thunk_FUN_01279b34(PTR_DAT_027c10d8);
    thunk_FUN_01279b34(PTR_DAT_027c10e0);
    DAT_0293ddec = 1;
  }
  iVar8 = param_2 - param_4;
  iVar11 = iVar8;
  if (param_1 != param_3) {
    if (param_4 <= param_2) {
      param_2 = param_4;
    }
    uVar12 = FUN_01fb0280(param_2,0);
    lVar13 = FUN_01fb0280(0,0);
    uVar14 = FUN_01fb0298(uVar12,0);
    if (3 < uVar14) {
      uVar14 = FUN_01ef817c(0);
      if ((uVar14 & 1) != 0) {
        uVar14 = FUN_01fb0298(uVar12,0);
        puVar10 = PTR_DAT_027c10e0;
        if (*(int *)(*(long *)PTR_DAT_027c10e0 + 0xe0) == 0) {
          thunk_FUN_01220628(*(long *)PTR_DAT_027c10e0);
        }
        lVar18 = *(long *)PTR_DAT_027c10d0;
        lVar15 = *(long *)(lVar18 + 0x20);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_0122e748();
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_0122e748();
        }
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        lVar15 = *(long *)(lVar18 + 0x20);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_0122e748();
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_0122e748();
        }
        if ((ulong)(long)**(int **)(lVar15 + 0xb8) <= uVar14) {
          if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          lVar18 = *(long *)PTR_DAT_027c10d0;
          lVar15 = *(long *)(lVar18 + 0x20);
          if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_0122e748();
          }
          lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
          if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_0122e748();
          }
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          lVar15 = *(long *)(lVar18 + 0x20);
          if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_0122e748();
          }
          lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
          if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_0122e748();
          }
          uVar16 = FUN_01fb02ac(uVar12,**(undefined4 **)(lVar15 + 0xb8),0);
          do {
            puVar1 = (undefined8 *)(param_1 + lVar13 * 2);
            puVar2 = (undefined8 *)(param_3 + lVar13 * 2);
            uVar3 = *puVar1;
            uVar5 = puVar1[1];
            uVar4 = *puVar2;
            uVar6 = puVar2[1];
            if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            lVar18 = *(long *)PTR_DAT_027c10d8;
            lVar15 = *(long *)(lVar18 + 0x20);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = FUN_0122e748();
            }
            lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = FUN_0122e748();
            }
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            lVar15 = *(long *)(lVar18 + 0x20);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = FUN_0122e748();
            }
            lVar18 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x58);
            lVar15 = *(long *)(lVar18 + 0x20);
            in_stack_00000018 = uVar3;
            in_stack_00000020 = uVar5;
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = FUN_0122e748();
            }
            lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = FUN_0122e748();
            }
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            lVar15 = *(long *)(lVar18 + 0x20);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = FUN_0122e748();
            }
            uVar14 = FUN_01d22ef0(&stack0x00000018,uVar4,uVar6,
                                  *(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x38));
            if ((uVar14 & 1) == 0) break;
            if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            lVar18 = *(long *)PTR_DAT_027c10d0;
            lVar15 = *(long *)(lVar18 + 0x20);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = FUN_0122e748();
            }
            lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = FUN_0122e748();
            }
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            lVar15 = *(long *)(lVar18 + 0x20);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = FUN_0122e748();
            }
            lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = FUN_0122e748();
            }
            lVar13 = FUN_01fb02a4(lVar13,**(undefined4 **)(lVar15 + 0xb8),0);
            uVar14 = FUN_01fb0298(uVar16,0);
            uVar17 = FUN_01fb0298(lVar13,0);
          } while (uVar17 <= uVar14);
        }
      }
      uVar14 = FUN_01fb0298(uVar12,0);
      uVar16 = FUN_01fb02a4(lVar13,4,0);
      uVar17 = FUN_01fb0298(uVar16,0);
      if (uVar17 <= uVar14) {
        do {
          uVar14 = FUN_01fbe600(*(undefined8 *)(param_1 + lVar13 * 2),
                                *(undefined8 *)(param_3 + lVar13 * 2),0);
          if ((uVar14 & 1) != 0) break;
          lVar13 = FUN_01fb02a4(lVar13,4,0);
          uVar14 = FUN_01fb0298(uVar12,0);
          uVar16 = FUN_01fb02a4(lVar13,4,0);
          uVar17 = FUN_01fb0298(uVar16,0);
        } while (uVar17 <= uVar14);
      }
    }
    uVar14 = FUN_01fb0298(uVar12,0);
    uVar16 = FUN_01fb02a4(lVar13,2,0);
    uVar17 = FUN_01fb0298(uVar16,0);
    if ((uVar17 <= uVar14) && (*(int *)(param_1 + lVar13 * 2) == *(int *)(param_3 + lVar13 * 2))) {
      lVar13 = FUN_01fb02a4(lVar13,2,0);
    }
    uVar14 = FUN_01fb0298(lVar13,0);
    uVar17 = FUN_01fb0298(uVar12,0);
    puVar10 = PTR_DAT_027b3998;
    if (uVar14 < uVar17) {
      do {
        uVar7 = *(undefined2 *)(param_3 + lVar13 * 2);
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        iVar11 = FUN_01e82750(param_1 + lVar13 * 2,uVar7,0);
        if (iVar11 != 0) break;
        lVar13 = FUN_01fb02a4(lVar13,1,0);
        uVar14 = FUN_01fb0298(lVar13,0);
        uVar17 = FUN_01fb0298(uVar12,0);
        iVar11 = iVar8;
      } while (uVar14 < uVar17);
    }
  }
  if (*(long *)(lVar9 + 0x28) != lStack0000000000000028) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar11;
}


