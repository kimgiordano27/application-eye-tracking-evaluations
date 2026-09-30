/*
FUNCTION_NAME: Unity.Entities.EntityQueryBuilder$$WithAny
ENTRY_POINT: 03090994
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03090c28) */
/* WARNING: Removing unreachable block (ram,0x03090c5c) */

undefined4 Unity_Entities_EntityQueryBuilder__WithAny(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  long in_x10;
  int *piVar10;
  long *unaff_x19;
  int iVar11;
  undefined8 in_stack_00000008;
  int iStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  lVar8 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == **(long **)(in_x10 + 0xba0)) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_03090a04;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_01a472ec();
LAB_03090a04:
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar4 = 
  Unity_Entities_ChunkIterationUtility_CalculateEntityCountAndSingleton_00000A45_PostfixBurstDelegate_var
  ;
  puVar3 = 
  Unity_Entities_ChunkIterationUtility_CalculateChunkCount_00000A40_PostfixBurstDelegate_var;
  puVar2 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000988_PostfixBurstDelegate_var
  ;
  puVar1 = PTR_DAT_03cbed20;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
LAB_03090a44:
  do {
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03090a90;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)puVar1,0);
LAB_03090a90:
    uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_03090c1c;
      goto LAB_03090bbc;
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03090aec;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)puVar2,0);
LAB_03090aec:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
    uVar9 = FUN_03098078();
    iVar11 = 1;
    if ((uVar9 & 1) == 0) {
      iVar11 = 2;
    }
    lVar8 = *(long *)(*(long *)puVar3 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01a46ff8();
    }
    pcVar7 = (char *)thunk_FUN_01a59484(&stack0x00000008,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80));
    if (*pcVar7 == '\0') {
      iStack0000000000000018 = iVar11;
      FUN_02241190();
      in_stack_00000008 = 0;
      goto LAB_03090a44;
    }
    FUN_022412e0(&stack0x00000008,&stack0x00000018,*(undefined8 *)puVar4);
  } while (iStack0000000000000018 == iVar11);
  iStack0000000000000018 = 3;
  FUN_02241190();
  in_stack_00000008 = 0;
  if (plVar6 != (long *)0x0) {
LAB_03090bbc:
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03090c10;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)PTR_DAT_03cbed08,0);
LAB_03090c10:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
  }
LAB_03090c1c:
  FUN_022414f4(&stack0x00000008);
  return uStack000000000000001c;
}


