/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.PhysicsLayerSurface$$ClosestSurfacePoint
ENTRY_POINT: 05eda410
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05eda630) */

undefined1 Oculus_Interaction_Surfaces_PhysicsLayerSurface__ClosestSurfacePoint(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  undefined8 *unaff_x23;
  undefined2 uStack0000000000000008;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  plVar5 = (long *)FUN_054e51f8(param_1,*(undefined8 *)PTR_DAT_075f1618);
  puVar4 = PTR_DAT_075f1630;
  puVar3 = PTR_DAT_075f1620;
  puVar2 = PTR_DAT_075f1118;
  puVar1 = PTR_DAT_0759e2a8;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  do {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05eda4a0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0322c1e8(plVar5,*(long *)puVar1,0);
LAB_05eda4a0:
    uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar8 & 1) == 0) goto LAB_05eda598;
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05eda4fc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0322c1e8(plVar5,*(long *)puVar3,0);
LAB_05eda4fc:
    lVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if ((DAT_07a45e0b & 1) == 0) {
      FUN_031f20f4(puVar4);
      DAT_07a45e0b = 1;
    }
    if (*(int *)(lVar7 + 0x14) != 0) break;
    if ((*(ulong *)(lVar7 + 0x90) & 0xff) == 0) {
      uVar8 = 0;
    }
    else {
      _uStack0000000000000008 = 0;
      FUN_04b9f508(&stack0x00000008,(uint)(*(ulong *)(lVar7 + 0x90) >> 0x20) & 2,
                   *(undefined8 *)puVar2);
      uVar8 = _uStack0000000000000008;
    }
  } while ((uVar8 >> 0x20 != 2) || ((uVar8 & 0xff) == 0));
  _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffff0000;
  FUN_04b98914(&stack0x00000008,1,*unaff_x23);
  *(undefined2 *)(unaff_x19 + 0xf9) = uStack0000000000000008;
LAB_05eda598:
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0759b580) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05eda5f0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0322c1e8(plVar5,*(long *)PTR_DAT_0759b580,0);
LAB_05eda5f0:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return *(undefined1 *)(unaff_x19 + 0xfa);
}


