/*
FUNCTION_NAME: System.Array.SorterGenericArray$$SwapIfGreaterWithItems
ENTRY_POINT: 031f8b14
PROGRAM: gunraiders-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_Array_SorterGenericArray__SwapIfGreaterWithItems(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  
  FUN_031ea790();
  FUN_031ea7b8();
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  plVar2 = (long *)FUN_031f2bbc(*(long *)(unaff_x19 + 0x10),*(undefined4 *)(unaff_x20 + 0x10),0);
  if (plVar2 != (long *)0x0) {
    if (*plVar2 ==
        *(long *)System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_HasValue_TypeInfo
       ) {
      FUN_031eaaf4(plVar2,0);
      FUN_031fab84();
      return;
    }
    if (*plVar2 ==
        *(long *)
         System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetValueOrDefault1_TypeInfo
       ) {
      FUN_031faf98();
      return;
    }
  }
  uVar3 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
  uVar3 = FUN_01c5d2fc(uVar3,2);
  FUN_019b2708();
  puVar1 = OVRPlugin_OVRP_1_38_0_TypeInfo;
  uVar4 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_38_0_TypeInfo);
  FUN_019b8dd4(uVar3,uVar4);
  uVar4 = thunk_FUN_01c273e8(puVar1);
  FUN_019b8e08(uVar3,0,uVar4);
  FUN_019b2708(uVar3);
  FUN_019b8dd4(uVar3,plVar2);
  FUN_019b8e08(uVar3,1,plVar2);
  uVar4 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_31_0_TypeInfo);
  uVar3 = FUN_03315920(uVar4,uVar3,0);
  thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
  uVar4 = thunk_FUN_01c496e0();
  FUN_031dce5c(uVar4,uVar3,0);
  uVar3 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_39_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar4,uVar3);
}


