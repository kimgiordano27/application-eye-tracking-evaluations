/*
FUNCTION_NAME: Gley.TrafficSystem.Internal.DensityManager$$RequestVehicleAtPosition
ENTRY_POINT: 030c0364
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Gley_TrafficSystem_Internal_DensityManager__RequestVehicleAtPosition
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  long *plVar6;
  uint uVar7;
  long *unaff_x24;
  
  FUN_03093928(param_2,param_3,*param_1,0);
  plVar3 = (long *)FUN_05648f2c();
  if (plVar3 == (long *)0x0) {
    *unaff_x20 = 0;
  }
  else {
    lVar5 = *unaff_x24;
    if ((*plVar3 != lVar5) || (*unaff_x20 = (long)plVar3, *plVar3 != lVar5)) goto LAB_030c0594;
  }
  thunk_FUN_02f411dc();
  puVar2 = PTR_DAT_06d07690;
  plVar6 = (long *)(unaff_x19 + 0x68);
  lVar5 = *plVar6;
  uVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d07690);
  FUN_030c1eb8();
  plVar3 = (long *)FUN_05648f2c(lVar5,uVar4,0);
  if (plVar3 == (long *)0x0) {
    *plVar6 = 0;
  }
  else {
    lVar5 = *(long *)puVar2;
    if ((*plVar3 != lVar5) || (*plVar6 = (long)plVar3, *plVar3 != lVar5)) goto LAB_030c0594;
  }
  thunk_FUN_02f411dc(plVar6,plVar3);
  plVar6 = (long *)(unaff_x19 + 0x70);
  lVar5 = *plVar6;
  uVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
  FUN_030c1eb8();
  plVar3 = (long *)FUN_05648f2c(lVar5,uVar4,0);
  if (plVar3 == (long *)0x0) {
    *plVar6 = 0;
  }
  else {
    lVar5 = *(long *)puVar2;
    if ((*plVar3 != lVar5) || (*plVar6 = (long)plVar3, *plVar3 != lVar5)) goto LAB_030c0594;
  }
  thunk_FUN_02f411dc(plVar6,plVar3);
  plVar6 = (long *)(unaff_x19 + 0x80);
  lVar5 = *plVar6;
  uVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
  FUN_030c1eb8();
  plVar3 = (long *)FUN_05648f2c(lVar5,uVar4,0);
  if (plVar3 == (long *)0x0) {
    *plVar6 = 0;
  }
  else {
    lVar5 = *(long *)puVar2;
    if ((*plVar3 != lVar5) || (*plVar6 = (long)plVar3, *plVar3 != lVar5)) goto LAB_030c0594;
  }
  thunk_FUN_02f411dc(plVar6,plVar3);
  plVar6 = (long *)(unaff_x19 + 0x88);
  lVar5 = *plVar6;
  uVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
  FUN_030c1eb8();
  plVar3 = (long *)FUN_05648f2c(lVar5,uVar4,0);
  if (plVar3 == (long *)0x0) {
    *plVar6 = 0;
  }
  else {
    lVar5 = *(long *)puVar2;
    if ((*plVar3 != lVar5) || (*plVar6 = (long)plVar3, *plVar3 != lVar5)) {
LAB_030c0594:
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(plVar3);
    }
  }
  thunk_FUN_02f411dc(plVar6,plVar3);
  lVar5 = *(long *)(unaff_x19 + 0xd8);
  if (lVar5 == 0) {
LAB_030c066c:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar1 = *(uint *)(lVar5 + 0x18);
  if (0 < (int)uVar1) {
    uVar7 = 0;
    do {
      if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      if (*(long *)(lVar5 + (long)(int)uVar7 * 8 + 0x20) == 0) goto LAB_030c066c;
      FUN_030b9814();
      uVar1 = *(uint *)(lVar5 + 0x18);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar1);
  }
  uVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d076d8);
  FUN_03fd0468(uVar4,*(undefined8 *)PTR_DAT_06d076d0);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar4;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x50),uVar4);
  uVar4 = FUN_037f15fc();
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar4;
  thunk_FUN_02f411dc();
  FUN_030c0674();
  *(undefined1 *)(unaff_x19 + 0xe0) = 1;
  return;
}


