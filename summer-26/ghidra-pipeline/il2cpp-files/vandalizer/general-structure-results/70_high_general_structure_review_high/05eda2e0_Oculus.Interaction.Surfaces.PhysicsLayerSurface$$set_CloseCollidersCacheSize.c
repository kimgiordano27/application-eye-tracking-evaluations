/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.PhysicsLayerSurface$$set_CloseCollidersCacheSize
ENTRY_POINT: 05eda2e0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_4;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05eda630) */

undefined1
Oculus_Interaction_Surfaces_PhysicsLayerSurface__set_CloseCollidersCacheSize(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  ulong local_68;
  undefined8 local_58;
  
  if ((DAT_07a45e04 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f1618);
    FUN_031f20f4(PTR_DAT_0759b580);
    FUN_031f20f4(PTR_DAT_075f1620);
    FUN_031f20f4(PTR_DAT_0759e2a8);
    FUN_031f20f4(PTR_DAT_075f0110);
    FUN_031f20f4(PTR_DAT_0759d8a0);
    FUN_031f20f4(PTR_DAT_075f1628);
    FUN_031f20f4(PTR_DAT_0759d8a8);
    FUN_031f20f4(PTR_DAT_075f1118);
    FUN_031f20f4(PTR_DAT_075f0050);
    FUN_031f20f4(PTR_DAT_0759d8b0);
    DAT_07a45e04 = 1;
  }
  puVar1 = PTR_DAT_0759d8a8;
  local_58 = 0;
  if (*(char *)(param_1 + 0xf9) == '\0') {
    local_68 = local_68 & 0xffffffffffff0000;
    FUN_04b98914(&local_68,0,*(undefined8 *)PTR_DAT_0759d8a8);
    local_58 = *(undefined8 *)(param_1 + 200);
    *(undefined2 *)(param_1 + 0xf9) = (undefined2)local_68;
    iVar6 = FUN_04b9f54c(&local_58,0,*(undefined8 *)PTR_DAT_075f1628);
    if (iVar6 == 0) {
      if (*(long *)(param_1 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      plVar7 = (long *)FUN_054e51f8(*(long *)(param_1 + 0xd8),*(undefined8 *)PTR_DAT_075f1618);
      puVar5 = PTR_DAT_075f1630;
      puVar4 = PTR_DAT_075f1620;
      puVar3 = PTR_DAT_075f1118;
      puVar2 = PTR_DAT_0759e2a8;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      do {
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_05eda4a0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)puVar2,0);
LAB_05eda4a0:
        uVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar10 & 1) == 0) goto LAB_05eda598;
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_05eda4fc;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)puVar4,0);
LAB_05eda4fc:
        lVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if ((DAT_07a45e0b & 1) == 0) {
          FUN_031f20f4(puVar5);
          DAT_07a45e0b = 1;
        }
        if (*(int *)(lVar9 + 0x14) != 0) break;
        if ((*(ulong *)(lVar9 + 0x90) & 0xff) == 0) {
          uVar10 = 0;
        }
        else {
          local_68 = 0;
          FUN_04b9f508(&local_68,(uint)(*(ulong *)(lVar9 + 0x90) >> 0x20) & 2,*(undefined8 *)puVar3)
          ;
          uVar10 = local_68;
        }
      } while ((uVar10 >> 0x20 != 2) || ((uVar10 & 0xff) == 0));
      local_68 = local_68 & 0xffffffffffff0000;
      FUN_04b98914(&local_68,1,*(undefined8 *)puVar1);
      *(undefined2 *)(param_1 + 0xf9) = (undefined2)local_68;
LAB_05eda598:
      if (plVar7 != (long *)0x0) {
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0759b580) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_05eda5f0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)PTR_DAT_0759b580,0);
LAB_05eda5f0:
        (*(code *)*puVar8)(plVar7,puVar8[1]);
      }
    }
    else {
      local_68 = local_68 & 0xffffffffffff0000;
      FUN_04b98914(&local_68,1,*(undefined8 *)puVar1);
      *(undefined2 *)(param_1 + 0xf9) = (undefined2)local_68;
    }
  }
  return *(undefined1 *)(param_1 + 0xfa);
}


