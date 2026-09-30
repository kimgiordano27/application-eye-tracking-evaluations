/*
FUNCTION_NAME: Unity.Services.Lobbies.Http.ApiTelemetryScope$$Dispose
ENTRY_POINT: 08f596e0
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
  undefined8 *puVar2;
  int in_w8;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x24;
  long *plVar10;
  long unaff_x25;
  undefined8 in_stack_00000008;
  
  plVar10 = *(long **)(unaff_x24 + 0x18);
  if (in_w8 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 10);
    *(undefined8 *)(unaff_x19 + 10) = 0;
    *unaff_x19 = 0xffffffff;
  }
  else {
    if (in_w8 == 1) {
      *(undefined8 *)(unaff_x19 + 0xc) = 0;
      *unaff_x19 = 0xffffffff;
      goto LAB_08f59908;
    }
    if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(long *)(unaff_x25 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
                    /* try { // try from 08f59730 to 09059763 has its CatchHandler @ 08f59a18 */
    plVar7 = *(long **)(*(long *)(unaff_x25 + 0x10) + 0x10);
    if (*(long *)(unaff_x25 + 0x28) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(*(long *)(unaff_x25 + 0x28) + 0x10);
    }
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar3 = *plVar7;
    uVar9 = *(undefined8 *)(unaff_x25 + 0x18);
    uVar1 = *(undefined8 *)(unaff_x25 + 0x20);
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09fbbfd8) {
                    /* try { // try from 08f5979c to 090597cb has its CatchHandler @ 08f59a14 */
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_08f597a8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_044822ac(plVar7,*(long *)PTR_DAT_09fbbfd8,2);
LAB_08f597a8:
    lVar3 = (*(code *)*puVar2)(plVar7,uVar9,uVar1,uVar8,puVar2[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_00000008 = FUN_068a4fb0(lVar3,*(undefined8 *)PTR_DAT_09fbbec0);
    uVar5 = FUN_067804ac(&stack0x00000008,*(undefined8 *)PTR_DAT_09fbbeb8);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000008;
      thunk_FUN_044bb4b4(unaff_x19 + 10,0);
      if (*(int *)(*plVar10 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_04b5b124(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  lVar3 = FUN_067804f0(&stack0x00000008,*(undefined8 *)PTR_DAT_09fbbeb0);
  if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(long *)(unaff_x25 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  plVar7 = *(long **)(*(long *)(unaff_x25 + 0x10) + 0x10);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar4 = *plVar7;
  uVar9 = *(undefined8 *)(unaff_x25 + 0x20);
  uVar8 = *(undefined8 *)(lVar3 + 0x20);
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09fbbfd8) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
        goto LAB_08f598c4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_044822ac(plVar7,*(long *)PTR_DAT_09fbbfd8,5);
LAB_08f598c4:
  lVar3 = (*(code *)*puVar2)(plVar7,uVar9,uVar8,puVar2[1]);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar8 = FUN_068a4fb0(lVar3,*(undefined8 *)PTR_DAT_09fbb558);
  uVar5 = FUN_067804ac();
  if ((uVar5 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0xc) = uVar8;
    thunk_FUN_044bb4b4(unaff_x19 + 0xc,0);
    if (*(int *)(*plVar10 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_04b5b124(unaff_x19 + 2);
    return;
  }
LAB_08f59908:
  FUN_067804f0();
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(*plVar10 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_0795995c(unaff_x19 + 2,0);
  return;
}


