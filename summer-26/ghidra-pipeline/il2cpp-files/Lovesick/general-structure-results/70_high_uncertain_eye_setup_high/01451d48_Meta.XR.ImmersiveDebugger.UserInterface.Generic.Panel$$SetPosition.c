/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$SetPosition
ENTRY_POINT: 01451d48
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__SetPosition(long param_1)

{
  undefined *puVar1;
  long unaff_x19;
  int unaff_w20;
  ulong unaff_x21;
  long unaff_x23;
  undefined8 *unaff_x24;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0xa18));
  *(undefined1 *)(unaff_x23 + 0xa75) = 1;
  FUN_0267c994(*unaff_x24,0);
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_0267d810();
  FUN_0267dd48();
  puVar1 = Method_System_Collections_Hashtable_SyncHashtable__ctor__;
  if ((unaff_x21 & 1) != 0) {
    if (4 < unaff_w20) {
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)puVar1,0);
    }
    FUN_0267f168(0x3f800000);
    FUN_0267e30c();
    return;
  }
  FUN_0267f168(0);
  FUN_0267e350();
  return;
}


