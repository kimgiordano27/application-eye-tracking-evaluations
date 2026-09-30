/*
FUNCTION_NAME: Unity.Mathematics.uint3$$op_LeftShift
ENTRY_POINT: 058d9494
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_6
*/


void Unity_Mathematics_uint3__op_LeftShift(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  int iVar8;
  long unaff_x22;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x350));
  FUN_02d6084c(PTR_DAT_06786148);
  FUN_02d6084c(PTR_DAT_06786150);
  FUN_02d6084c(OVRPlugin_OVRP_1_3_0_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0xb24) = 1;
  puVar3 = OVRPlugin_OVRP_1_3_0_TypeInfo;
  if (unaff_x21 == 0) {
    thunk_FUN_02dc61f4(PTR_DAT_06764070);
    uVar5 = thunk_FUN_02d9d534();
    uVar6 = thunk_FUN_02dc61f4(OVRPlugin_OVRP_1_40_0_TypeInfo);
    FUN_04f77010(uVar5,uVar6,0);
    uVar6 = thunk_FUN_02dc61f4(OVRPlugin_OVRP_1_41_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar5,uVar6);
  }
  if (*(int *)(unaff_x21 + 0x194) == 3) {
    lVar4 = *(long *)OVRPlugin_OVRP_1_3_0_TypeInfo;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar4 = *(long *)puVar3;
    }
    puVar2 = OVRPlugin_OVRP_1_39_0_TypeInfo;
    if (**(int **)(lVar4 + 0xb8) < 1) goto LAB_058d95b4;
    iVar8 = 0;
    while( true ) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar4 = *(long *)puVar3;
      }
      if (**(int **)(lVar4 + 0xb8) <= iVar8) {
        unaff_x20[7] = 0;
        unaff_x20[6] = 0;
        unaff_x20[9] = 0;
        unaff_x20[8] = 0;
        unaff_x20[3] = 0;
        unaff_x20[2] = 0;
        unaff_x20[5] = 0;
        unaff_x20[4] = 0;
        unaff_x20[1] = 0;
        *unaff_x20 = 0;
        return;
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar4 = *(long *)puVar3;
      }
      lVar4 = FUN_03797d3c(*(undefined8 *)(lVar4 + 0xb8),iVar8,*(undefined8 *)puVar2);
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if (lVar7 == 0) goto LAB_058d9660;
      iVar1 = *(int *)(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_05029664(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
      }
      if (lVar4 == 0) goto LAB_058d9660;
      FUN_058d96ac(lVar4);
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if (lVar4 == 0) goto LAB_058d9660;
      if (0 < *(int *)(lVar4 + 0x18)) break;
      lVar4 = *(long *)puVar3;
      iVar8 = iVar8 + 1;
    }
    FUN_03adaf8c(lVar4,0,*(undefined8 *)PTR_DAT_06786150);
  }
  else {
LAB_058d95b4:
    if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_058d9660;
    FUN_0636c074();
    FUN_0636fb0c(*(undefined8 *)(unaff_x19 + 0x20),0);
  }
  memcpy(unaff_x20,&stack0x00000000,0x50);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if (lVar4 != 0) {
    iVar8 = *(int *)(lVar4 + 0x18);
    *(undefined4 *)(lVar4 + 0x18) = 0;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (0 < iVar8) {
      FUN_05029664(*(undefined8 *)(lVar4 + 0x10),0,iVar8,0);
    }
    return;
  }
LAB_058d9660:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


