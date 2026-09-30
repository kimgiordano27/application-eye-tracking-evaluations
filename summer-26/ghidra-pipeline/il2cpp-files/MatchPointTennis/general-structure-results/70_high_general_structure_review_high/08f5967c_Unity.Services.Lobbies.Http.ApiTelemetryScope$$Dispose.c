/*
FUNCTION_NAME: Unity.Services.Lobbies.Http.ApiTelemetryScope$$Dispose
ENTRY_POINT: 08f5967c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Lobbies_Http_ApiTelemetryScope__Dispose(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int *unaff_x19;
  long unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 in_stack_00000008;
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09fbbeb0);
  FUN_04447ba8(PTR_DAT_09fbb548);
  FUN_04447ba8(PTR_DAT_09fbbeb8);
  FUN_04447ba8(PTR_DAT_09fbb550);
                    /* try { // try from 08f596b0 to 090596b7 has its CatchHandler @ 08f59a08 */
  FUN_04447ba8(PTR_DAT_09fbb558);
                    /* try { // try from 08f596c0 to 090596cf has its CatchHandler @ 08f59a04 */
  FUN_04447ba8(PTR_DAT_09fbbec0);
  *(undefined1 *)(unaff_x20 + 0xfee) = 1;
  puVar2 = PTR_DAT_09f20018;
  in_stack_00000008 = 0;
  lVar11 = *(long *)(unaff_x19 + 8);
  if (*unaff_x19 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 10);
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (*unaff_x19 == 1) {
      unaff_x19[0xc] = 0;
      unaff_x19[0xd] = 0;
      *unaff_x19 = -1;
      goto LAB_08f59908;
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar8 = *(long **)(*(long *)(lVar11 + 0x10) + 0x10);
    if (*(long *)(lVar11 + 0x28) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(*(long *)(lVar11 + 0x28) + 0x10);
    }
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar4 = *plVar8;
    uVar10 = *(undefined8 *)(lVar11 + 0x18);
    uVar1 = *(undefined8 *)(lVar11 + 0x20);
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09fbbfd8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_08f597a8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar8,*(long *)PTR_DAT_09fbbfd8,2);
LAB_08f597a8:
    lVar4 = (*(code *)*puVar3)(plVar8,uVar10,uVar1,uVar9,puVar3[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_00000008 = FUN_068a4fb0(lVar4,*(undefined8 *)PTR_DAT_09fbbec0);
    uVar6 = FUN_067804ac(&stack0x00000008,*(undefined8 *)PTR_DAT_09fbbeb8);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000008;
      thunk_FUN_044bb4b4(unaff_x19 + 10,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_04b5b124(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  lVar4 = FUN_067804f0(&stack0x00000008,*(undefined8 *)PTR_DAT_09fbbeb0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  plVar8 = *(long **)(*(long *)(lVar11 + 0x10) + 0x10);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar5 = *plVar8;
  uVar10 = *(undefined8 *)(lVar11 + 0x20);
  uVar9 = *(undefined8 *)(lVar4 + 0x20);
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09fbbfd8) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
        goto LAB_08f598c4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_044822ac(plVar8,*(long *)PTR_DAT_09fbbfd8,5);
LAB_08f598c4:
  lVar11 = (*(code *)*puVar3)(plVar8,uVar10,uVar9,puVar3[1]);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar9 = FUN_068a4fb0(lVar11,*(undefined8 *)PTR_DAT_09fbb558);
  uVar6 = FUN_067804ac();
  if ((uVar6 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0xc) = uVar9;
    thunk_FUN_044bb4b4(unaff_x19 + 0xc,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_04b5b124(unaff_x19 + 2);
    return;
  }
LAB_08f59908:
  FUN_067804f0();
  *unaff_x19 = -2;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_0795995c(unaff_x19 + 2,0);
  return;
}


