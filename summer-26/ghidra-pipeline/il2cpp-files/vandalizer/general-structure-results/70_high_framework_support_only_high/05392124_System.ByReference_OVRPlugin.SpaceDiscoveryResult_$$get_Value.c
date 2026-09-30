/*
FUNCTION_NAME: System.ByReference<OVRPlugin.SpaceDiscoveryResult>$$get_Value
ENTRY_POINT: 05392124
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ByReference<OVRPlugin_SpaceDiscoveryResult>__get_Value
               (ulong param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x22;
  undefined8 in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075d8850);
    FUN_031f20f4(PTR_DAT_075dacb8);
    *(undefined1 *)(unaff_x22 + 0xac2) = 1;
  }
  puVar2 = PTR_DAT_075dacb8;
  in_stack_00000008 = 0;
  uVar1 = *(uint *)(param_2 + 0x48);
  plVar7 = (long *)(param_2 + 0x28);
  if ((int)uVar1 < 1) {
LAB_0539235c:
    FUN_057e3ee0(plVar7,param_3,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xb0))
    ;
    uVar1 = *(uint *)(param_2 + 0x78);
    if (0 < (int)uVar1) {
      uVar9 = 0;
      do {
        lVar8 = *(long *)(param_2 + 0x58);
        if (lVar8 == 0) goto LAB_053924c4;
        if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_053924c8;
        if (*(long *)(lVar8 + uVar9 * 8 + 0x20) == param_3) {
          if ((param_3 == 0) || (plVar7 = (long *)FUN_06fbf75c(param_3,0), plVar7 == (long *)0x0))
          goto LAB_053924c4;
          lVar8 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0x16) * 0x10 + 0x138);
                goto LAB_05392414;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)puVar2,0x16);
LAB_05392414:
          iVar3 = (*(code *)*puVar5)(plVar7,puVar5[1]);
          lVar8 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0x17) * 0x10 + 0x138);
                goto LAB_05392474;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)puVar2,0x17);
LAB_05392474:
          (*(code *)*puVar5)(plVar7,iVar3 + -1,puVar5[1]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar1);
    }
    FUN_057d9000((long *)(param_2 + 0x58),param_3,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xb8));
    return;
  }
  lVar8 = *plVar7;
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) == 0) {
LAB_053924c8:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    if ((*(long *)(lVar8 + 0x20) != 0) &&
       (plVar4 = (long *)UnityEngine_UIElements_TabDragger__set_tabLayout(*(long *)(lVar8 + 0x20),0)
       , plVar4 != (long *)0x0)) {
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_075d8850) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_053921f0;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_0322c1e8(plVar4,*(long *)PTR_DAT_075d8850,1);
LAB_053921f0:
      uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      FUN_070e1ea4(&stack0x00000008,uVar6,0);
      uVar9 = 0;
      do {
        lVar8 = *plVar7;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        if (*(long *)(lVar8 + uVar9 * 8 + 0x20) == param_3) {
          FUN_05391a38(param_2,param_3,uVar9 & 0xffffffff,*(undefined8 *)(param_2 + 0x10));
          FUN_053935a4(param_2,uVar9 & 0xffffffff);
          lVar8 = *plVar7;
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          if (*(uint *)(lVar8 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2398();
          }
          lVar8 = *(long *)(lVar8 + uVar9 * 8 + 0x20);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          plVar4 = (long *)FUN_06fbf75c(lVar8,0);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          lVar8 = *plVar4;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0x14) * 0x10 + 0x138);
                goto LAB_053922d4;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_0322c1e8(plVar4,*(long *)puVar2,0x14);
LAB_053922d4:
          iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          lVar8 = *plVar4;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0x15) * 0x10 + 0x138);
                goto LAB_05392334;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_0322c1e8(plVar4,*(long *)puVar2,0x15);
LAB_05392334:
          (*(code *)*puVar5)(plVar4,iVar3 + -1,puVar5[1]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar1);
      FUN_070e1f38(&stack0x00000008,0);
      goto LAB_0539235c;
    }
  }
LAB_053924c4:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


