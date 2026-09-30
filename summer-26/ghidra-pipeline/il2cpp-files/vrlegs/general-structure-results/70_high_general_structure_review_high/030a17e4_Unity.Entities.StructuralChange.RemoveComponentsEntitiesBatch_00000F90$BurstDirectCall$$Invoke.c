/*
FUNCTION_NAME: Unity.Entities.StructuralChange.RemoveComponentsEntitiesBatch_00000F90$BurstDirectCall$$Invoke
ENTRY_POINT: 030a17e4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x030a1a5c) */
/* WARNING: Removing unreachable block (ram,0x030a1acc) */

long Unity_Entities_StructuralChange_RemoveComponentsEntitiesBatch_00000F90_BurstDirectCall__Invoke
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  int iStack000000000000000c;
  
  puVar2 = PTR_DAT_03cc1678;
  puVar1 = PTR_DAT_03cbed08;
  plVar5 = (long *)thunk_FUN_01a89e68(**(undefined8 **)(param_1 + 0x810));
  FUN_0269a50c();
  plVar6 = (long *)thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  FUN_026dc110(plVar6,plVar5,0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iStack000000000000000c = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
  if (iStack000000000000000c != 0x6054b50) {
    uVar8 = FUN_0276793c(&stack0x0000000c,0);
    uVar11 = thunk_FUN_01a6ca08(
                               Drawing_CommandBuilder_JobWireMesh_WireMesh_00000106_PostfixBurstDelegate_var
                               );
    uVar8 = FUN_025b1328(uVar11,uVar8,0);
    thunk_FUN_01a6ca08(Unity_Collections_xxHash3_Hash64Long_00000A6B_PostfixBurstDelegate_var);
    uVar11 = thunk_FUN_01a89e68();
    FUN_030a1534(uVar11,uVar8);
    uVar8 = thunk_FUN_01a6ca08(
                              Drawing_DrawingData_BuilderData_AnyBuffersWrittenTo_000002FC_PostfixBurstDelegate_var
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar11,uVar8);
  }
  lVar7 = thunk_FUN_01a89e68(*(undefined8 *)
                              Drawing_CommandBuilder_JobWireMesh_Execute_00000107_PostfixBurstDelegate_var
                            );
  FUN_027b3d9c(lVar7,0);
  uVar3 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  *(undefined2 *)(lVar7 + 0x10) = uVar3;
  uVar3 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
  *(undefined2 *)(lVar7 + 0x12) = uVar3;
  uVar3 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
  *(undefined2 *)(lVar7 + 0x14) = uVar3;
  uVar3 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
  *(undefined2 *)(lVar7 + 0x16) = uVar3;
  uVar4 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
  *(undefined4 *)(lVar7 + 0x18) = uVar4;
  uVar4 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
  *(undefined4 *)(lVar7 + 0x1c) = uVar4;
  uVar3 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
  uVar8 = (**(code **)(*plVar6 + 0x308))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0x310));
  plVar9 = (long *)FUN_025e8134(0);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar8 = (**(code **)(*plVar9 + 0x368))(plVar9,uVar8,*(undefined8 *)(*plVar9 + 0x370));
  *(undefined8 *)(lVar7 + 0x20) = uVar8;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar13 = *plVar6;
  lVar12 = *(long *)puVar1;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == lVar12) {
        puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_030a19c8;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar10 = (undefined8 *)FUN_01a472ec(plVar6,lVar12,0);
LAB_030a19c8:
  (*(code *)*puVar10)(plVar6,puVar10[1]);
  if (plVar5 != (long *)0x0) {
    lVar13 = *plVar5;
    lVar12 = *(long *)puVar1;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar12) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_030a1a2c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_01a472ec(plVar5,lVar12,0);
LAB_030a1a2c:
    (*(code *)*puVar10)(plVar5,puVar10[1]);
  }
  return lVar7;
}


