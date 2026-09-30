/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_GetTrackingOriginType
ENTRY_POINT: 05164b50
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingOriginType(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  FUN_02d6084c();
  FUN_02d6084c(PTR_DAT_0677f708);
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05164af8 with catch @ 05164b68
                        */
  FUN_02d6084c(PTR_DAT_067825b8);
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05164afc with catch @ 05164b6c
                        */
  FUN_02d6084c(PTR_DAT_067825c0);
  FUN_02d6084c(PTR_DAT_06770938);
                    /* try { // try from 05164b84 to 05264b9b has its CatchHandler @ 05164c14 */
  FUN_02d6084c(PTR_DAT_067825c8);
  FUN_02d6084c(PTR_DAT_067825d0);
                    /* try { // try from 05164b9c to 05264c03 has its CatchHandler @ 05164ab0 */
  FUN_02d6084c(PTR_DAT_067825d8);
  FUN_02d6084c(PTR_DAT_067825e0);
  FUN_02d6084c(PTR_DAT_067825e8);
  FUN_02d6084c(PTR_DAT_067825f0);
  *(undefined1 *)(unaff_x21 + 0xe67) = 1;
  puVar1 = PTR_DAT_067823f0;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_067823f0) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_05164c2c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05164c2c:
  uVar2 = (*(code *)*puVar3)();
  switch(uVar2) {
  case 1:
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 8) * 0x10 + 0x138);
          goto LAB_05164d74;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05164d74:
    uVar4 = (*(code *)*puVar3)();
    uVar7 = thunk_FUN_04e8bd3c(uVar4,*(undefined8 *)PTR_DAT_06782550,0);
    if ((uVar7 & 1) == 0) {
      uVar4 = FUN_05164800();
      return uVar4;
    }
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) goto LAB_05164e70;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    goto LAB_05164e48;
  case 2:
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 8) * 0x10 + 0x138);
          goto LAB_05164df4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05164df4:
    uVar4 = (*(code *)*puVar3)();
    uVar7 = thunk_FUN_04e8bd3c(uVar4,*(undefined8 *)PTR_DAT_06782550,0);
    if ((uVar7 & 1) == 0) {
      uVar4 = FUN_05164800();
      puVar3 = (undefined8 *)PTR_DAT_067825e0;
      goto LAB_05164e94;
    }
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) goto LAB_05164e70;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
LAB_05164e48:
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05164e80:
    uVar4 = (*(code *)*puVar3)();
    puVar3 = (undefined8 *)PTR_DAT_067825d0;
LAB_05164e94:
    uVar4 = FUN_04e83184(*puVar3,uVar4,0);
    return uVar4;
  case 3:
    puVar3 = (undefined8 *)PTR_DAT_067825b8;
    break;
  case 4:
    puVar3 = (undefined8 *)PTR_DAT_067825d8;
    break;
  default:
    FUN_028f4e40();
    uVar4 = thunk_FUN_02dc61f4(PTR_DAT_067823f0);
    uVar2 = FUN_028f925c(0,uVar4);
    in_stack_00000008 = thunk_FUN_02dc61f4(PTR_DAT_067825a8);
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000018 = uVar2;
    uVar4 = FUN_0503c914(&stack0x00000008,0);
    uVar5 = thunk_FUN_02dc61f4(PTR_DAT_067825f8);
    uVar4 = FUN_04e83184(uVar5,uVar4,0);
    thunk_FUN_02dc61f4(PTR_DAT_067699f0);
    uVar5 = thunk_FUN_02d9d534();
    thunk_FUN_050931fc(uVar5,uVar4,0);
    uVar4 = thunk_FUN_02dc61f4(PTR_DAT_06782600);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar5,uVar4);
  case 7:
    uVar4 = FUN_05164800();
    puVar3 = (undefined8 *)PTR_DAT_06770938;
    goto LAB_05164e94;
  case 8:
    puVar3 = (undefined8 *)PTR_DAT_067825e8;
    break;
  case 10:
    uVar4 = FUN_05164800();
    puVar3 = (undefined8 *)PTR_DAT_0677f708;
    goto LAB_05164e94;
  case 0xd:
    puVar3 = (undefined8 *)PTR_DAT_067825f0;
    break;
  case 0xe:
    puVar3 = (undefined8 *)PTR_DAT_067825c8;
    break;
  case 0x11:
    puVar3 = (undefined8 *)PTR_DAT_067825c0;
  }
  return *puVar3;
LAB_05164e70:
  puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
  goto LAB_05164e80;
}


