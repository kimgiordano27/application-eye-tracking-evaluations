/*
FUNCTION_NAME: FUN_031fdfdc
ENTRY_POINT: 031fdfdc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_031fdfdc(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint uVar7;
  
  if (*(char *)((long)param_1 + 0x1d) == '\0') {
    thunk_FUN_01c273e8(PTR_DAT_04237cd0);
    uVar4 = thunk_FUN_01c496e0();
    FUN_032d1a48(uVar4,0);
LAB_031fe124:
    uVar5 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_73_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar4,uVar5);
  }
  puVar6 = (uint *)(param_1 + 3);
  uVar7 = *puVar6;
  if (((uVar7 >> 1 & 1) == 0) || (((param_2 ^ 1) & 1) != 0)) {
    do {
      uVar3 = uVar7 & 0x7ffffffc;
      if (uVar3 == 4) {
        if (((uVar7 & 1) != 0) || (*(char *)((long)param_1 + 0x1c) == '\0'))
        goto System_Attribute__Match;
        uVar2 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
        uVar2 = ~uVar2 & 1;
      }
      else {
        if (uVar3 == 0) {
          thunk_FUN_01c273e8(System_Linq_Expressions_Interpreter_LocalDefinition_TypeInfo);
          uVar4 = thunk_FUN_01c496e0();
          uVar5 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_69_0_TypeInfo);
          FUN_032e0230(uVar4,0,uVar5,0);
          goto LAB_031fe124;
        }
System_Attribute__Match:
        uVar2 = 0;
      }
      uVar1 = uVar7 - 4 | (uint)(uVar3 == 4);
      uVar3 = uVar1 | 2;
      if ((param_2 & 1) == 0) {
        uVar3 = uVar1;
      }
      uVar3 = thunk_FUN_01c64884(puVar6,uVar3,uVar7,0);
      if (uVar3 == uVar7) {
        if (uVar2 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x031fe0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
        return;
      }
      uVar7 = *puVar6;
    } while ((uVar7 & 2) == 0 || ((param_2 ^ 1) & 1) != 0);
  }
  return;
}


