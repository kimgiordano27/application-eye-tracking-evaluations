/*
FUNCTION_NAME: System.Array.SorterObjectArray$$PickPivotAndPartition
ENTRY_POINT: 031f8510
PROGRAM: gunraiders-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


void System_Array_SorterObjectArray__PickPivotAndPartition(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined4 uStack000000000000000c;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0x4d0));
  FUN_01c5d288(OVRPlugin_OVRP_1_2_0_TypeInfo);
  FUN_01c5d288(PTR_DAT_0422fc38);
  *(undefined1 *)(unaff_x21 + 0x6ed) = 1;
  lVar3 = thunk_FUN_01c496e0(*unaff_x22);
  FUN_031ea128(lVar3,0);
  if (unaff_w20 == 0x14) {
    lVar4 = thunk_FUN_01c496e0(*(undefined8 *)OVRPlugin_OVRP_1_2_0_TypeInfo);
    FUN_031ea1f4(lVar4,0);
    if (lVar4 == 0) goto LAB_031f8650;
    FUN_031ea1fc(lVar4);
    System_Type__get_IsVisible(lVar4,0);
    if (lVar3 == 0) goto LAB_031f8650;
    *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(lVar4 + 0x10);
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_031f8650;
    plVar5 = (long *)FUN_031f2bbc(*(long *)(unaff_x19 + 0x10),*(undefined4 *)(lVar4 + 0x14),0);
    if (plVar5 == (long *)0x0) {
      *(undefined8 *)(lVar3 + 0x18) = 0;
LAB_031f8658:
      uVar6 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
      uVar6 = FUN_01c5d2fc(uVar6,2);
      FUN_019b2708();
      puVar2 = OVRPlugin_OVRP_1_30_0_TypeInfo;
      uVar7 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_30_0_TypeInfo);
      FUN_019b8dd4(uVar6,uVar7);
      uVar7 = thunk_FUN_01c273e8(puVar2);
      FUN_019b8e08(uVar6,0,uVar7);
      FUN_019b2708(lVar4);
      uStack000000000000000c = *(undefined4 *)(lVar4 + 0x14);
      uVar7 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
      uVar7 = thunk_FUN_01c49334(uVar7,&stack0x0000000c);
      FUN_019b2708(uVar6);
      FUN_019b8dd4(uVar6,uVar7);
      FUN_019b8e08(uVar6,1,uVar7);
      uVar7 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_31_0_TypeInfo);
      uVar6 = FUN_03315920(uVar7,uVar6,0);
      thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
      uVar7 = thunk_FUN_01c496e0();
      FUN_031dce5c(uVar7,uVar6,0);
      uVar6 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_32_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar7,uVar6);
    }
    if (*plVar5 != *(long *)PTR_DAT_0422fc38) {
      plVar5 = (long *)0x0;
    }
    *(long **)(lVar3 + 0x18) = plVar5;
    if (plVar5 == (long *)0x0) goto LAB_031f8658;
  }
  else {
    if (lVar3 == 0) goto LAB_031f8650;
    FUN_031ea1ac(lVar3);
    System_Type__GetRootElementType(lVar3,0);
  }
  puVar2 = System_Linq_Expressions_Interpreter_NegateInstruction_NegateInt16_TypeInfo;
  lVar4 = FUN_031f7d08();
  uVar1 = *(undefined4 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x18);
  uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
  FUN_031e9cdc(uVar6,uVar7,0);
  if (lVar4 != 0) {
    FUN_031fa928(lVar4,uVar1,uVar6);
    return;
  }
LAB_031f8650:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


