/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.CategoryButton$$set_Counter
ENTRY_POINT: 06d81e68
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__set_Counter(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long unaff_x19;
  undefined8 uVar4;
  long *unaff_x23;
  long *unaff_x24;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    param_1 = *unaff_x23;
  }
  uVar4 = **(undefined8 **)(param_1 + 0xb8);
  uVar1 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8f628);
  System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
            (uVar1,uVar4,*(undefined8 *)PTR_DAT_08e8f648,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
  *puVar2 = uVar1;
  thunk_FUN_03d233cc(puVar2,uVar1);
  FUN_0493defc();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar3 = FUN_085decd4(uVar1,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      FUN_085db068(*(long *)(unaff_x19 + 0x18),1,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  return;
}


