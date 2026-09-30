/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__807_35
ENTRY_POINT: 056aa358
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRPlugin_<>c__<_cctor>b__807_35(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  float fVar3;
  float fVar4;
  undefined8 in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc268);
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(
                Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<string,_string>,_Type>_TypeInfo
                );
    FUN_02d965b8(
                Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_TypeInfo
                );
    *(undefined1 *)(unaff_x20 + 0xa74) = 1;
  }
  fVar3 = *(float *)(unaff_x19 + 0x28);
  in_stack_00000008 = 0;
  if (fVar3 <= 0.0) goto OVRPlugin_<>c__<_cctor>b__807_37;
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_056aa528;
  uVar1 = FUN_062fa284(*(long *)(unaff_x19 + 0x10),0);
  if (((uVar1 & 1) == 0) && (DAT_010fcf54 < *(float *)(unaff_x19 + 0x28))) {
    fVar4 = *(float *)(unaff_x19 + 0x24);
    fVar3 = (float)FUN_06359e88(0);
    fVar4 = fVar4 - fVar3;
    *(float *)(unaff_x19 + 0x24) = fVar4;
    if (fVar4 <= 0.0) {
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_056aa528;
      FUN_062fa190(*(long *)(unaff_x19 + 0x10),0);
    }
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_056aa528;
  uVar1 = FUN_062fa284(*(long *)(unaff_x19 + 0x10),0);
  fVar3 = *(float *)(unaff_x19 + 0x28);
  if ((uVar1 & 1) == 0) {
OVRPlugin_<>c__<_cctor>b__807_37:
    if (0.0 < fVar3) {
      return;
    }
  }
  else {
    fVar4 = (float)FUN_06359e88(0);
    fVar3 = fVar3 - fVar4;
    *(float *)(unaff_x19 + 0x28) = fVar3;
    if (0.0 <= fVar3) goto OVRPlugin_<>c__<_cctor>b__807_37;
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar1 = FUN_062fa284(*(long *)(unaff_x19 + 0x10),0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(unaff_x19 + 0x20) != 0) {
        if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_0630bbe4(*(undefined8 *)
                      Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_TypeInfo
                     ,0);
        return;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_069fc268 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      in_stack_00000008 = FUN_054c8b04(0);
      uVar2 = FUN_054c97ac(&stack0x00000008,0);
      uVar2 = FUN_05362cb4(*(undefined8 *)
                            Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<string,_string>,_Type>_TypeInfo
                           ,uVar2,0);
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
      }
      FUN_0630b598(uVar2,0);
      FUN_056aa2f8();
    }
    return;
  }
LAB_056aa528:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


