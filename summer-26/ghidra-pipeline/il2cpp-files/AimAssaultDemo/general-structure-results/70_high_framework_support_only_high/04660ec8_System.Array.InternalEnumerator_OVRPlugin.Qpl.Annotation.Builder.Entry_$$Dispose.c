/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$Dispose
ENTRY_POINT: 04660ec8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__Dispose(void)

{
  long lVar1;
  undefined4 *puVar2;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 uVar3;
  
  lVar1 = thunk_FUN_037787d0();
  if (lVar1 == 0) {
    uVar3 = **(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_062519f8(uVar3,0);
    if (*(int *)(*(long *)PTR_DAT_07d89e28 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07d89e28);
    }
    unaff_x22 = (long *)FUN_061b0ba4();
  }
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03775678(lVar1);
  }
  if (unaff_x22 != (long *)0x0) {
    if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar1 + 0x40)) {
      puVar2 = (undefined4 *)thunk_FUN_03778a20();
                    /* WARNING: Could not recover jumptable at 0x04660f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x21 + 600))(*puVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373bb54(unaff_x22);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


