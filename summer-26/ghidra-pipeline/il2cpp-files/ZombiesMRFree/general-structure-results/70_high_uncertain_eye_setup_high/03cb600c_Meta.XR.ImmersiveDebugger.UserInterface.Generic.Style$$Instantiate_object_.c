/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Style$$Instantiate<object>
ENTRY_POINT: 03cb600c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style__Instantiate<object>(long param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x22;
  long *plVar3;
  long unaff_x23;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  uVar1 = *(uint *)(unaff_x23 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
    param_1 = param_1 + (long)(int)uVar1 * 0x30;
    *(undefined8 *)(param_1 + 0x38) = in_stack_00000078;
    *(undefined8 *)(param_1 + 0x30) = in_stack_00000070;
    *(undefined8 *)(param_1 + 0x48) = in_stack_00000088;
    *(undefined8 *)(param_1 + 0x40) = in_stack_00000080;
    *(undefined8 *)(param_1 + 0x28) = in_stack_00000068;
    *(undefined8 *)(param_1 + 0x20) = in_stack_00000060;
    thunk_FUN_03048534(param_1 + 0x40,0);
  }
  else {
    FUN_04582c3c();
  }
  plVar3 = (long *)(unaff_x22 + 0x18);
  if (*plVar3 == 0) {
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f911d0);
    FUN_0371924c(lVar2,0);
    *plVar3 = lVar2;
    thunk_FUN_03048534(plVar3,lVar2);
    if (*plVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
  }
  Unity_Entities_ManagedObjectClone__Unity_Properties_IPropertyBagVisitor_Visit<Vector4>();
  return;
}


