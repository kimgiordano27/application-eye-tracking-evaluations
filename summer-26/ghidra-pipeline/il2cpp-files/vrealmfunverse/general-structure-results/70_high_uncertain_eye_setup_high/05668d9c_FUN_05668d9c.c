/*
FUNCTION_NAME: FUN_05668d9c
ENTRY_POINT: 05668d9c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_05668d9c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((DAT_066d1d69 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06331e28);
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualInt32_TypeInfo
                );
    FUN_02b3c81c(PTR_DAT_06331e48);
    FUN_02b3c81c(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_MoveNext__
                );
    DAT_066d1d69 = 1;
  }
  puVar4 = 
  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_MoveNext__
  ;
  puVar3 = 
  System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualInt32_TypeInfo
  ;
  puVar2 = PTR_DAT_06331e48;
  puVar1 = PTR_DAT_06313048;
  if (param_2 == 0) {
    thunk_FUN_02ba3594(PTR_DAT_06315b90);
    uVar7 = thunk_FUN_02b79644();
    uVar8 = thunk_FUN_02ba3594(PTR_DAT_06320980);
    FUN_04cee07c(uVar7,uVar8,0);
    uVar8 = thunk_FUN_02ba3594(
                              Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Current__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar7,uVar8);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar8 = *(undefined8 *)PTR_DAT_06331e28;
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar8 = FUN_04d8a7b0(uVar8,0);
  FUN_04c8b20c(param_2,*(undefined8 *)puVar2,uVar7,uVar8,0);
  FUN_04c8c78c(param_2,*(undefined8 *)puVar3,*(undefined1 *)(param_1 + 0x30),0);
  FUN_04c8c8f4(param_2,*(undefined8 *)puVar4,*(undefined4 *)(param_1 + 0x20),0);
  uVar5 = FUN_05659484(param_1);
  uVar7 = FUN_02b3c908(*(undefined8 *)puVar1,uVar5);
  puVar1 = 
  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
  ;
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x358))(plVar6,uVar7,*(undefined8 *)(*plVar6 + 0x360));
    FUN_04c8c710(param_2,*(undefined8 *)puVar1,uVar7,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


