/*
FUNCTION_NAME: FUN_042edfcc
ENTRY_POINT: 042edfcc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_042edfcc(long param_1,uint param_2,int param_3,long param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (*(uint *)(param_1 + 0x18) < param_2) {
    FUN_05944f0c(0);
  }
  if ((param_3 < 0) || (*(int *)(param_1 + 0x18) - param_3 < (int)param_2)) {
    FUN_05944f38(0);
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05935240(8,0);
  }
  if ((int)param_2 < (int)(param_3 + param_2)) {
    lVar4 = (long)(int)param_2 * 0x28 + 0x20;
    lVar5 = (long)(int)(param_3 + param_2) - (long)(int)param_2;
    do {
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 == 0) {
System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__InsertRange:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(uint *)(lVar3 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      puVar1 = (undefined8 *)(lVar3 + lVar4);
      if (param_4 == 0)
      goto System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__InsertRange;
      local_60 = *puVar1;
      uStack_58 = puVar1[1];
      uStack_50 = puVar1[2];
      uStack_48 = puVar1[3];
      local_40 = puVar1[4];
      uVar2 = (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),&local_60,*(undefined8 *)(param_4 + 0x28));
      if ((uVar2 & 1) != 0) {
        return param_2;
      }
      param_2 = param_2 + 1;
      lVar5 = lVar5 + -1;
      lVar4 = lVar4 + 0x28;
    } while (lVar5 != 0);
  }
  return 0xffffffff;
}


