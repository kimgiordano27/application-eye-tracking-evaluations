/*
FUNCTION_NAME: FUN_044052a8
ENTRY_POINT: 044052a8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong FUN_044052a8(long param_1,uint param_2,int param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar3 = (ulong)param_2;
  if (*(uint *)(param_1 + 0x18) < param_2) {
    FUN_05951134(0);
  }
  if ((param_3 < 0) || (*(int *)(param_1 + 0x18) - param_3 < (int)param_2)) {
    FUN_05951160(0);
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05941350(8,0);
  }
  if ((int)param_2 < (int)(param_3 + param_2)) {
    uVar4 = -(ulong)(param_2 >> 0x1f) & 0xfffffff000000000 | uVar3 << 4;
    lVar5 = (long)(int)(param_3 + param_2) - (long)(int)param_2;
    do {
      lVar2 = *(long *)(param_1 + 0x10);
      if (lVar2 == 0) {

        System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__System_Collections_IList_set_Item
        :
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(uint *)(lVar2 + 0x18) <= (uint)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      if (param_4 == 0)
      goto 
      System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__System_Collections_IList_set_Item
      ;
      uVar1 = (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),*(undefined8 *)(lVar2 + uVar4 + 0x20),
                         *(undefined8 *)(lVar2 + uVar4 + 0x28),*(undefined8 *)(param_4 + 0x28));
      if ((uVar1 & 1) != 0) {
        return uVar3;
      }
      lVar5 = lVar5 + -1;
      uVar4 = uVar4 + 0x10;
      uVar3 = (ulong)((uint)uVar3 + 1);
    } while (lVar5 != 0);
  }
  return 0xffffffff;
}


