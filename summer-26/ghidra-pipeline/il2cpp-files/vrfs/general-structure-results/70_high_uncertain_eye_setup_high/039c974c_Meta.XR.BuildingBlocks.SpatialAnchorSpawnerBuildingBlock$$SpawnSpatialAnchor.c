/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorSpawnerBuildingBlock$$SpawnSpatialAnchor
ENTRY_POINT: 039c974c
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_BuildingBlocks_SpatialAnchorSpawnerBuildingBlock__SpawnSpatialAnchor(long param_1)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long *unaff_x23;
  long unaff_x24;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined2 *in_stack_00000008;
  undefined8 in_stack_00000018;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0xc0) + 0x148);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_015c2790(lVar7);
  }
  lVar9 = *unaff_x23;
  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar7) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
        goto LAB_039c97cc;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_015c2a80();
LAB_039c97cc:
  uVar5 = (*(code *)*puVar6)();
  lVar7 = *(long *)(unaff_x19 + 0x10);
  if (lVar7 != 0) {
    uVar1 = *(uint *)(lVar7 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar4 = 0;
    if (uVar1 != 0) {
      iVar4 = (int)uVar5 / (int)uVar1;
    }
    uVar3 = uVar5 - iVar4 * uVar1;
    if (uVar1 <= uVar3) {
LAB_039c9a24:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    uVar1 = *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar1) {
      uVar15 = 0xffffffff;
      do {
        uVar14 = uVar1;
        lVar7 = *(long *)(unaff_x19 + 0x18);
        if (lVar7 == 0) goto LAB_039c9a20;
        if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_039c9a24;
        puVar16 = (uint *)(lVar7 + (long)(int)uVar14 * 0xc + 0x20);
        lVar9 = (long)(int)uVar14;
        if (*puVar16 == uVar5) {
          plVar10 = *(long **)(unaff_x19 + 0x30);
          if (plVar10 == (long *)0x0) {
            plVar10 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) +
                                                    0x10) + 8))();
            if (plVar10 == (long *)0x0) goto LAB_039c9a20;
            uVar12 = (**(code **)(*plVar10 + 0x1b8))
                               (plVar10,*(undefined2 *)(lVar7 + lVar9 * 0xc + 0x28),
                                in_stack_00000018._4_2_,*(undefined8 *)(*plVar10 + 0x1c0));
          }
          else {
            if (plVar10 == (long *)0x0) goto LAB_039c9a20;
            lVar8 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x148);
            uVar2 = *(undefined2 *)(lVar7 + lVar9 * 0xc + 0x28);
            if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
              lVar8 = FUN_015c2790(lVar8);
            }
            lVar11 = *plVar10;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar8) {
                  puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_039c991c;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar6 = (undefined8 *)FUN_015c2a80(plVar10,lVar8,0);
LAB_039c991c:
            uVar12 = (*(code *)*puVar6)(plVar10,uVar2,in_stack_00000018._4_2_,puVar6[1]);
          }
          if ((uVar12 & 1) != 0) {
            if ((int)uVar15 < 0) {
              lVar8 = *(long *)(unaff_x19 + 0x10);
              if (lVar8 == 0) goto LAB_039c9a20;
              if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_039c9a24;
              *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar7 + lVar9 * 0xc + 0x24) + 1;
            }
            else {
              lVar8 = *(long *)(unaff_x19 + 0x18);
              if (lVar8 == 0) goto LAB_039c9a20;
              if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_039c9a24;
              *(undefined4 *)(lVar8 + (long)(int)uVar15 * 0xc + 0x24) =
                   *(undefined4 *)(lVar7 + lVar9 * 0xc + 0x24);
            }
            lVar7 = lVar7 + lVar9 * 0xc;
            *in_stack_00000008 = *(undefined2 *)(lVar7 + 0x2a);
            *puVar16 = 0xffffffff;
            *(undefined4 *)(lVar7 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
            *(uint *)(unaff_x19 + 0x24) = uVar14;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar7 + lVar9 * 0xc + 0x24);
        uVar15 = uVar14;
      } while (-1 < (int)uVar1);
    }
    *in_stack_00000008 = 0;
    return 0;
  }
LAB_039c9a20:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


