/*
FUNCTION_NAME: System.ByReference<OVRPlugin.SpaceQueryResult>$$get_Value
ENTRY_POINT: 0539218c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ByReference<OVRPlugin_SpaceQueryResult>__get_Value(void)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x26;
  ulong unaff_x27;
  
  plVar3 = (long *)UnityEngine_UIElements_TabDragger__set_tabLayout();
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_075d8850) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_053921f0;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0322c1e8(plVar3,*(long *)PTR_DAT_075d8850,1);
LAB_053921f0:
    uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    FUN_070e1ea4(&stack0x00000008,uVar5,0);
    uVar7 = 0;
    do {
      lVar6 = *unaff_x22;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      if (*(long *)(lVar6 + uVar7 * 8 + 0x20) == unaff_x19) {
        FUN_05391a38();
        FUN_053935a4();
        lVar6 = *unaff_x22;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        lVar6 = *(long *)(lVar6 + uVar7 * 8 + 0x20);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        plVar3 = (long *)FUN_06fbf75c(lVar6,0);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x26) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0x14) * 0x10 + 0x138);
              goto LAB_053922d4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_0322c1e8(plVar3,*unaff_x26,0x14);
LAB_053922d4:
        iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x26) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0x15) * 0x10 + 0x138);
              goto LAB_05392334;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_0322c1e8(plVar3,*unaff_x26,0x15);
LAB_05392334:
        (*(code *)*puVar4)(plVar3,iVar2 + -1,puVar4[1]);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != unaff_x27);
    FUN_070e1f38(&stack0x00000008,0);
    FUN_057e3ee0();
    uVar1 = *(uint *)(unaff_x21 + 0x78);
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        lVar6 = *(long *)(unaff_x21 + 0x58);
        if (lVar6 == 0) goto LAB_053924c4;
        if (*(uint *)(lVar6 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        if (*(long *)(lVar6 + uVar7 * 8 + 0x20) == unaff_x19) {
          if ((unaff_x19 == 0) || (plVar3 = (long *)FUN_06fbf75c(), plVar3 == (long *)0x0))
          goto LAB_053924c4;
          lVar6 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x26) {
                puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0x16) * 0x10 + 0x138);
                goto LAB_05392414;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_0322c1e8(plVar3,*unaff_x26,0x16);
LAB_05392414:
          iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          lVar6 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x26) {
                puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0x17) * 0x10 + 0x138);
                goto LAB_05392474;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_0322c1e8(plVar3,*unaff_x26,0x17);
LAB_05392474:
          (*(code *)*puVar4)(plVar3,iVar2 + -1,puVar4[1]);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar1);
    }
    FUN_057d9000((long *)(unaff_x21 + 0x58));
    return;
  }
LAB_053924c4:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


