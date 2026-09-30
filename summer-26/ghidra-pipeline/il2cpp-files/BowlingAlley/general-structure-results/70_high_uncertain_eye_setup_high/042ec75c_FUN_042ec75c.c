/*
FUNCTION_NAME: FUN_042ec75c
ENTRY_POINT: 042ec75c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_042ec75c(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05935240(8);
  }
  if (*(int *)(param_1 + 0x18) < 1) {
    uVar1 = 1;
  }
  else {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(param_1 + 0x10);
      if (lVar2 == 0) {

        System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__System_Collections_IList_get_IsReadOnly
        :
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      if (param_2 == 0)
      goto 
      System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__System_Collections_IList_get_IsReadOnly
      ;
      uVar1 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(lVar2 + uVar3 * 8 + 0x20),
                         *(undefined8 *)(param_2 + 0x28));
    } while (((uVar1 & 1) != 0) && (uVar3 = uVar3 + 1, (long)uVar3 < (long)*(int *)(param_1 + 0x18))
            );
  }
  return uVar1 & 1;
}


