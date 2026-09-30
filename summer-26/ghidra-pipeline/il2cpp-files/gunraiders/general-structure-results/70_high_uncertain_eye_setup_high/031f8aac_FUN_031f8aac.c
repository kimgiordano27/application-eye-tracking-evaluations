/*
FUNCTION_NAME: FUN_031f8aac
ENTRY_POINT: 031f8aac
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_031f8aac(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = OVRPlugin_OVRP_1_37_0_TypeInfo;
  if ((DAT_045326ef & 1) == 0) {
    FUN_01c5d288(OVRPlugin_OVRP_1_37_0_TypeInfo);
    FUN_01c5d288(
                System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetValueOrDefault1_TypeInfo
                );
    FUN_01c5d288(System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_HasValue_TypeInfo
                );
    DAT_045326ef = 1;
  }
  lVar2 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_031ea788(lVar2,0);
  if (lVar2 != 0) {
    FUN_031ea790(lVar2,param_1,0);
    FUN_031ea7b8(lVar2,0);
    if (*(long *)(param_1 + 0x10) != 0) {
      plVar3 = (long *)FUN_031f2bbc(*(long *)(param_1 + 0x10),*(undefined4 *)(lVar2 + 0x10),0);
      if (plVar3 != (long *)0x0) {
        if (*plVar3 ==
            *(long *)
             System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_HasValue_TypeInfo) {
          FUN_031eaaf4(plVar3,0);
          FUN_031fab84(param_1,plVar3);
          return;
        }
        if (*plVar3 ==
            *(long *)
             System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetValueOrDefault1_TypeInfo
           ) {
          FUN_031faf98(param_1,plVar3);
          return;
        }
      }
      uVar4 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
      uVar4 = FUN_01c5d2fc(uVar4,2);
      FUN_019b2708();
      puVar1 = OVRPlugin_OVRP_1_38_0_TypeInfo;
      uVar5 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_38_0_TypeInfo);
      FUN_019b8dd4(uVar4,uVar5);
      uVar5 = thunk_FUN_01c273e8(puVar1);
      FUN_019b8e08(uVar4,0,uVar5);
      FUN_019b2708(uVar4);
      FUN_019b8dd4(uVar4,plVar3);
      FUN_019b8e08(uVar4,1,plVar3);
      uVar5 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_31_0_TypeInfo);
      uVar4 = FUN_03315920(uVar5,uVar4,0);
      thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
      uVar5 = thunk_FUN_01c496e0();
      FUN_031dce5c(uVar5,uVar4,0);
      uVar4 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_39_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar5,uVar4);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


