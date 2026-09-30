/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_GetTrackingCalibratedOrigin
ENTRY_POINT: 05164c34
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingCalibratedOrigin(code *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  uVar1 = (*param_1)();
  switch(uVar1) {
  case 1:
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
          goto LAB_05164d74;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_05164d74:
    uVar3 = (*(code *)*puVar2)();
    uVar6 = thunk_FUN_04e8bd3c(uVar3,*(undefined8 *)PTR_DAT_06782550,0);
    if ((uVar6 & 1) == 0) {
      uVar3 = FUN_05164800();
      return uVar3;
    }
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x21) goto LAB_05164e70;
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    goto LAB_05164e48;
  case 2:
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
          goto LAB_05164df4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_05164df4:
    uVar3 = (*(code *)*puVar2)();
    uVar6 = thunk_FUN_04e8bd3c(uVar3,*(undefined8 *)PTR_DAT_06782550,0);
    if ((uVar6 & 1) == 0) {
      uVar3 = FUN_05164800();
      puVar2 = (undefined8 *)PTR_DAT_067825e0;
      goto LAB_05164e94;
    }
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x21) goto LAB_05164e70;
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
LAB_05164e48:
    puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_05164e80:
    uVar3 = (*(code *)*puVar2)();
    puVar2 = (undefined8 *)PTR_DAT_067825d0;
LAB_05164e94:
    uVar3 = FUN_04e83184(*puVar2,uVar3,0);
    return uVar3;
  case 3:
    puVar2 = (undefined8 *)PTR_DAT_067825b8;
    break;
  case 4:
    puVar2 = (undefined8 *)PTR_DAT_067825d8;
    break;
  default:
    FUN_028f4e40();
    uVar3 = thunk_FUN_02dc61f4(PTR_DAT_067823f0);
    uVar1 = FUN_028f925c(0,uVar3);
    in_stack_00000008 = thunk_FUN_02dc61f4(PTR_DAT_067825a8);
    in_stack_00000010 = 0xffffffffffffffff;
                    /* try { // try from 05164ef4 to 05264f03 has its CatchHandler @ 05164f04 */
    in_stack_00000018 = uVar1;
    uVar3 = FUN_0503c914(&stack0x00000008,0);
    uVar4 = thunk_FUN_02dc61f4(PTR_DAT_067825f8);
    uVar3 = FUN_04e83184(uVar4,uVar3,0);
    thunk_FUN_02dc61f4(PTR_DAT_067699f0);
    uVar4 = thunk_FUN_02d9d534();
    thunk_FUN_050931fc(uVar4,uVar3,0);
    uVar3 = thunk_FUN_02dc61f4(PTR_DAT_06782600);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar4,uVar3);
  case 7:
    uVar3 = FUN_05164800();
    puVar2 = (undefined8 *)PTR_DAT_06770938;
    goto LAB_05164e94;
  case 8:
    puVar2 = (undefined8 *)PTR_DAT_067825e8;
    break;
  case 10:
    uVar3 = FUN_05164800();
    puVar2 = (undefined8 *)PTR_DAT_0677f708;
    goto LAB_05164e94;
  case 0xd:
    puVar2 = (undefined8 *)PTR_DAT_067825f0;
    break;
  case 0xe:
    puVar2 = (undefined8 *)PTR_DAT_067825c8;
    break;
  case 0x11:
    puVar2 = (undefined8 *)PTR_DAT_067825c0;
  }
  return *puVar2;
LAB_05164e70:
  puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
  goto LAB_05164e80;
}


