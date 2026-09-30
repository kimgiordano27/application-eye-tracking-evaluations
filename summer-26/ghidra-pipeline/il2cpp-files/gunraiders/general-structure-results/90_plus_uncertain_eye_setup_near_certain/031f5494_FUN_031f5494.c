/*
FUNCTION_NAME: FUN_031f5494
ENTRY_POINT: 031f5494
PROGRAM: gunraiders-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_031f5494(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 local_54 [4];
  long local_48;
  
  if ((DAT_045326d7 & 1) == 0) {
    FUN_01c5d288(OVRInput_OVRControllerLHand_TypeInfo);
    FUN_01c5d288(
                VoxelBusters_EssentialKit_BillingServicesCore_Android_NativeFetchBillingProductsListener_OnSuccessDelegate_TypeInfo
                );
    FUN_01c5d288(
                System_Linq_Expressions_Interpreter_LessThanOrEqualInstruction_LessThanOrEqualByte_TypeInfo
                );
    FUN_01c5d288(VoxelBusters_EssentialKit_NotificationServices_<>c__DisplayClass33_0_TypeInfo);
    FUN_01c5d288(ONSPPropagationMaterial_Point_TypeInfo);
    DAT_045326d7 = 1;
  }
  puVar4 = OVRInput_OVRControllerLHand_TypeInfo;
  puVar3 = VoxelBusters_EssentialKit_NotificationServices_<>c__DisplayClass33_0_TypeInfo;
  puVar2 = 
  VoxelBusters_EssentialKit_BillingServicesCore_Android_NativeFetchBillingProductsListener_OnSuccessDelegate_TypeInfo
  ;
  puVar1 = 
  System_Linq_Expressions_Interpreter_LessThanOrEqualInstruction_LessThanOrEqualByte_TypeInfo;
  local_48 = 0;
  local_54[0] = 0;
  if (param_2 == 0) {
    uVar5 = thunk_FUN_01c273e8(OVRPlugin_OVRP_0_1_0_TypeInfo);
    uVar5 = FUN_03313b64(uVar5,0);
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar6 = thunk_FUN_01c496e0();
    uVar8 = thunk_FUN_01c273e8(OVRPlugin_OVRP_0_1_1_TypeInfo);
    FUN_03247d68(uVar6,uVar8,uVar5,0);
    uVar5 = thunk_FUN_01c273e8(OVRPlugin_OVRP_0_1_2_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar6,uVar5);
  }
  if (param_4 == 0) {
    uVar5 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
    uVar5 = FUN_01c5d2fc(uVar5,1);
    FUN_019b2708();
    puVar1 = OVRPlugin_OVRP_0_1_3_TypeInfo;
    uVar6 = thunk_FUN_01c273e8(OVRPlugin_OVRP_0_1_3_TypeInfo);
    FUN_019b8dd4(uVar5,uVar6);
    uVar6 = thunk_FUN_01c273e8(puVar1);
    FUN_019b8e08(uVar5,0,uVar6);
    uVar6 = thunk_FUN_01c273e8(
                              VoxelBusters_EssentialKit_NotificationServicesCore_Android_NotificationCenterInterface_<>c__DisplayClass3_0_TypeInfo
                              );
    uVar5 = FUN_03315920(uVar6,uVar5,0);
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar6 = thunk_FUN_01c496e0();
    uVar8 = thunk_FUN_01c273e8(puVar1);
    FUN_03247d68(uVar6,uVar8,uVar5,0);
    uVar5 = thunk_FUN_01c273e8(OVRPlugin_OVRP_0_1_2_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar6,uVar5);
  }
  *(long *)(param_1 + 0x40) = param_4;
  *(undefined8 *)(param_1 + 0x60) = param_3;
  FUN_031eec68(param_4,0);
  uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
  FUN_031e0c14(uVar5,0);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_032a1ad0(uVar5,0);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
  FUN_031dd614(uVar5,0);
  *(undefined8 *)(param_1 + 0x80) = uVar5;
  uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
  FUN_031f275c(uVar5,0);
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  uVar5 = FUN_031f5890(param_1,param_2,0,0,local_54);
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  if (*(long *)(param_1 + 0x60) == 0) {
    uVar6 = 0xffffffffffffffff;
  }
  else {
    uVar6 = FUN_031f5890(param_1,*(long *)(param_1 + 0x60),0,0,local_54);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
  }
  FUN_031f586c(param_1,uVar5,uVar6);
  lVar9 = *(long *)(param_1 + 0x60);
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x18) != 0)) {
    plVar7 = *(long **)(param_1 + 0x10);
    if (plVar7 == (long *)0x0) goto LAB_031f5750;
    (**(code **)(*plVar7 + 0x228))(plVar7,lVar9,*(undefined8 *)(*plVar7 + 0x230));
  }
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x228))(plVar7,param_2,*(undefined8 *)(*plVar7 + 0x230));
    plVar7 = (long *)FUN_031f5f14(param_1,&local_48);
    puVar1 = ONSPPropagationMaterial_Point_TypeInfo;
    while (plVar7 != (long *)0x0) {
      if (*plVar7 != *(long *)puVar1) {
        plVar7 = (long *)FUN_031f050c(plVar7,*(undefined8 *)(param_1 + 0x28),
                                      *(undefined8 *)(param_1 + 0x30),
                                      *(undefined8 *)(param_1 + 0x38),
                                      *(undefined8 *)(param_1 + 0x78),
                                      *(undefined8 *)(param_1 + 0x80),param_1,
                                      *(undefined8 *)(param_1 + 0x70),0);
        lVar9 = FUN_031f5954(param_1,plVar7);
        if (plVar7 == (long *)0x0) goto LAB_031f5750;
        plVar7[0xe] = lVar9;
      }
      plVar7[0xd] = local_48;
      uVar5 = FUN_031f5b64(param_1,plVar7);
      FUN_031f5ba8(param_1,plVar7,uVar5,uVar5);
      if (*(long *)(param_1 + 0xb8) == 0) goto LAB_031f5750;
      FUN_031f79ec(*(long *)(param_1 + 0xb8),uVar5);
      FUN_031f04c0(plVar7,0);
      plVar7 = (long *)FUN_031f5f14(param_1,&local_48);
    }
    FUN_031ef030(param_4,0);
    FUN_031eec6c(param_4,0);
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_031de308(*(long *)(param_1 + 0x48),0);
      return;
    }
  }
LAB_031f5750:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


