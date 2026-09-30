/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.SpaceDiscoveryResult>$$.cctor
ENTRY_POINT: 04556bcc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_EmptyArray<OVRPlugin_SpaceDiscoveryResult>___cctor
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long lVar2;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while( true ) {
    FUN_04d21a40(param_1,param_2,param_3,param_4);
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w20) break;
    lVar1 = unaff_x23 + (long)(int)unaff_w20 * 0x10;
    lVar2 = (long)(int)unaff_w20;
    unaff_w20 = unaff_w20 + 1;
    *(undefined8 *)(lVar1 + 0x28) = in_stack_00000018;
    *(undefined8 *)(lVar1 + 0x20) = in_stack_00000010;
    thunk_FUN_02bb0e9c(unaff_x26 + lVar2 * 0x10,0);
    do {
      lVar2 = unaff_x27;
      unaff_x25 = unaff_x25 + 1;
      unaff_x27 = lVar2 + 0x18;
      if ((long)*(int *)(unaff_x21 + 0x20) <= (long)unaff_x25) {
        return;
      }
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) goto LAB_04556d10;
    } while (*(int *)(lVar2 + 8) < 0);
    param_2 = *(undefined8 *)(lVar2 + 0x10);
    param_3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78));
    param_1 = &stack0x00000010;
    param_4 = 0;
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
  }
LAB_04556d10:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


