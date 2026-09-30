/*
FUNCTION_NAME: FUN_06277f28
ENTRY_POINT: 06277f28
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06277f28(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  puVar1 = PTR_DAT_07279510;
  if ((DAT_076de24e & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    thunk_FUN_032e1da0(OVRPlugin_Vector4f___TypeInfo);
    DAT_076de24e = 1;
  }
  FUN_059660a0(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar2 = FUN_0593b434(param_2,0,0);
  if ((uVar2 & 1) != 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727dbc0);
    uVar4 = thunk_FUN_032a56a0();
    uVar5 = thunk_FUN_032e1da0(PTR_DAT_07281148);
    FUN_05897d14(uVar4,uVar5,0);
    uVar5 = thunk_FUN_032e1da0(Oculus_Interaction_PoseDetection_Debug_ActiveStateDebugTree_TypeInfo)
    ;
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar4,uVar5);
  }
  lVar3 = thunk_FUN_032a56a0(*(undefined8 *)OVRPlugin_Vector4f___TypeInfo);
  FUN_0625c584(lVar3,param_3,param_6,0);
  if ((param_4 == 0) || ((int)*(ulong *)(param_4 + 0x18) < 1)) {
    if (lVar3 == 0) {
LAB_06278068:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
  }
  else {
    uVar2 = 0;
    uVar6 = *(ulong *)(param_4 + 0x18) & 0xffffffff;
    do {
      if (uVar6 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      if (lVar3 == 0) goto LAB_06278068;
      FUN_06263384(lVar3,*(undefined8 *)(param_4 + 0x20 + uVar2 * 8),0);
      uVar6 = (ulong)*(uint *)(param_4 + 0x18);
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)(int)*(uint *)(param_4 + 0x18));
  }
  uVar4 = FUN_0625c6cc(lVar3,param_2,param_5,param_6,0);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  thunk_FUN_0333a630((undefined8 *)(param_1 + 0x18),uVar4);
  return;
}


