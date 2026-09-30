/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.ManagerFromInspector$$GetCountPerType
ENTRY_POINT: 04c064e8
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04c06594) */

void Meta_XR_ImmersiveDebugger_DebugInspectorManager_ManagerFromInspector__GetCountPerType
               (undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  iVar1 = FUN_04678fbc(param_2,*param_1);
  if (100 < iVar1) {
    if (*(long *)(unaff_x20 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar2 = FUN_037fd7b0(*(long *)(unaff_x20 + 0xa0),*(undefined8 *)PTR_DAT_065e4fe0);
    if (*(long *)(unaff_x20 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_037fdfac(*(long *)(unaff_x20 + 0xa0),*(undefined8 *)PTR_DAT_065e4fc8);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(long *)(lVar2 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(long *)(unaff_x20 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
                    /* try { // try from 04c06540 to 04d06567 has its CatchHandler @ 04c066d4 */
    System_Array_EmptyInternalEnumerator<OVRTask_CallbackWithState<OVRAnchor_Tracker_AsyncLock,_OVRTask_CombinedTaskDataWithCompletedTaskId<OVRAnchor_Tracker_AsyncLock>>>___ctor
              (*(long *)(unaff_x20 + 0xa8),*(undefined8 *)(*(long *)(lVar2 + 0x28) + 0x18),
               *(undefined8 *)PTR_DAT_065e4f88);
  }
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_02c6fbb4();
  }
  return;
}


