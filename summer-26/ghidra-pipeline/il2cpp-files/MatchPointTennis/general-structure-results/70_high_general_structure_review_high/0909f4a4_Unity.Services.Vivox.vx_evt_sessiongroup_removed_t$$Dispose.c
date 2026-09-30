/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_sessiongroup_removed_t$$Dispose
ENTRY_POINT: 0909f4a4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_vx_evt_sessiongroup_removed_t__Dispose
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long in_x11;
  undefined4 *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  long *unaff_x24;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_044822ac();
      goto LAB_0909f524;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar3 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
LAB_0909f524:
  (*(code *)*puVar3)();
  puVar1 = PTR_DAT_09fc3ae0;
  uVar4 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09fc3ae0);
  iVar2 = FUN_04ce6be4(uVar4,*(undefined8 *)PTR_DAT_09fc3a88);
  if (unaff_w21 == iVar2) {
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0909f5fc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac();
LAB_0909f5fc:
    (*(code *)*puVar3)();
    uVar4 = thunk_FUN_04484e3c(*(undefined8 *)puVar1);
    uVar4 = FUN_0909dd20(uVar4,*(undefined8 *)(unaff_x19 + 8));
    *(undefined8 *)(unaff_x19 + 0xc) = uVar4;
    thunk_FUN_044bb4b4();
  }
  lVar5 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_0909f684;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_044822ac();
LAB_0909f684:
  (*(code *)*puVar3)();
  lVar5 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto LAB_0909f6e0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_044822ac();
LAB_0909f6e0:
  _in_stack_00000010 = (*(code *)*puVar3)();
  FUN_05f9ceb4(&stack0x00000010,*(undefined8 *)PTR_DAT_09fc3ad8);
  puVar1 = PTR_DAT_09fc3a78;
  puVar3 = (undefined8 *)(unaff_x19 + 0xc);
  uVar4 = *puVar3;
  *unaff_x19 = 0xfffffffe;
  *puVar3 = 0;
  thunk_FUN_044bb4b4(puVar3,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_066f3a60(unaff_x19 + 2,uVar4,*(undefined8 *)puVar1);
  return;
}


