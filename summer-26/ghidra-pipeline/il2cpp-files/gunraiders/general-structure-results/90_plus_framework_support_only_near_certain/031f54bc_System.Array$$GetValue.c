/*
FUNCTION_NAME: System.Array$$GetValue
ENTRY_POINT: 031f54bc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 146
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void System_Array__GetValue(ulong param_1,long param_2,long param_3)

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
  long unaff_x19;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined1 uStack000000000000000c;
  long in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    FUN_01c5d288(OVRInput_OVRControllerLHand_TypeInfo);
    FUN_01c5d288(
                VoxelBusters_EssentialKit_BillingServicesCore_Android_NativeFetchBillingProductsListener_OnSuccessDelegate_TypeInfo
                );
    FUN_01c5d288(
                System_Linq_Expressions_Interpreter_LessThanOrEqualInstruction_LessThanOrEqualByte_TypeInfo
                );
    FUN_01c5d288(VoxelBusters_EssentialKit_NotificationServices_<>c__DisplayClass33_0_TypeInfo);
    FUN_01c5d288(ONSPPropagationMaterial_Point_TypeInfo);
    *(undefined1 *)(unaff_x23 + 0x6d7) = 1;
  }
  puVar4 = OVRInput_OVRControllerLHand_TypeInfo;
  puVar3 = VoxelBusters_EssentialKit_NotificationServices_<>c__DisplayClass33_0_TypeInfo;
  puVar2 = 
  VoxelBusters_EssentialKit_BillingServicesCore_Android_NativeFetchBillingProductsListener_OnSuccessDelegate_TypeInfo
  ;
  puVar1 = 
  System_Linq_Expressions_Interpreter_LessThanOrEqualInstruction_LessThanOrEqualByte_TypeInfo;
  in_stack_00000018 = 0;
  uStack000000000000000c = 0;
  if (param_3 == 0) {
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
  if (unaff_x19 == 0) {
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
  *(long *)(param_2 + 0x40) = unaff_x19;
  *(undefined8 *)(param_2 + 0x60) = unaff_x22;
  FUN_031eec68();
  uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
  FUN_031e0c14(uVar5,0);
  *(undefined8 *)(param_2 + 0x18) = uVar5;
  uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_032a1ad0(uVar5,0);
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
  FUN_031dd614(uVar5,0);
  *(undefined8 *)(param_2 + 0x80) = uVar5;
  uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
  FUN_031f275c(uVar5,0);
  *(undefined8 *)(param_2 + 0x78) = uVar5;
  uVar5 = FUN_031f5890(param_2,param_3,0,0,&stack0x0000000c);
  *(undefined8 *)(param_2 + 0x50) = uVar5;
  if (*(long *)(param_2 + 0x60) == 0) {
    uVar6 = 0xffffffffffffffff;
  }
  else {
    uVar6 = FUN_031f5890(param_2,*(long *)(param_2 + 0x60),0,0,&stack0x0000000c);
    uVar5 = *(undefined8 *)(param_2 + 0x50);
  }
  FUN_031f586c(param_2,uVar5,uVar6);
  lVar9 = *(long *)(param_2 + 0x60);
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x18) != 0)) {
    plVar7 = *(long **)(param_2 + 0x10);
    if (plVar7 == (long *)0x0) goto LAB_031f5750;
    (**(code **)(*plVar7 + 0x228))(plVar7,lVar9,*(undefined8 *)(*plVar7 + 0x230));
  }
  plVar7 = *(long **)(param_2 + 0x10);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x228))(plVar7,param_3,*(undefined8 *)(*plVar7 + 0x230));
    plVar7 = (long *)FUN_031f5f14(param_2,&stack0x00000018);
    puVar1 = ONSPPropagationMaterial_Point_TypeInfo;
    while (plVar7 != (long *)0x0) {
      if (*plVar7 != *(long *)puVar1) {
        plVar7 = (long *)FUN_031f050c(plVar7,*(undefined8 *)(param_2 + 0x28),
                                      *(undefined8 *)(param_2 + 0x30),
                                      *(undefined8 *)(param_2 + 0x38),
                                      *(undefined8 *)(param_2 + 0x78),
                                      *(undefined8 *)(param_2 + 0x80),param_2,
                                      *(undefined8 *)(param_2 + 0x70));
        lVar9 = FUN_031f5954(param_2,plVar7);
        if (plVar7 == (long *)0x0) goto LAB_031f5750;
        plVar7[0xe] = lVar9;
      }
      plVar7[0xd] = in_stack_00000018;
      uVar5 = FUN_031f5b64(param_2,plVar7);
      FUN_031f5ba8(param_2,plVar7,uVar5,uVar5);
      if (*(long *)(param_2 + 0xb8) == 0) goto LAB_031f5750;
      FUN_031f79ec(*(long *)(param_2 + 0xb8),uVar5);
      FUN_031f04c0(plVar7,0);
      plVar7 = (long *)FUN_031f5f14(param_2,&stack0x00000018);
    }
    FUN_031ef030();
    FUN_031eec6c();
    if (*(long *)(param_2 + 0x48) != 0) {
      FUN_031de308(*(long *)(param_2 + 0x48),0);
      return;
    }
  }
LAB_031f5750:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


