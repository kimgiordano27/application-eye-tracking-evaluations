/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionHook$$get_Delegate
ENTRY_POINT: 052e36e0
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_ActionHook__get_Delegate(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long in_stack_00000008;
  
  FUN_02f07e70(PTR_DAT_06d3c8b8);
  FUN_02f07e70(PTR_DAT_06d3da28);
  FUN_02f07e70(PTR_DAT_06d3c618);
  FUN_02f07e70(PTR_DAT_06d01e20);
  *(undefined1 *)(unaff_x21 + 0x153) = 1;
  puVar1 = PTR_DAT_06d01e20;
  in_stack_00000008 = 0;
  if (unaff_x19 != 0) {
    uVar2 = FUN_037f15fc();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)puVar1);
    }
    uVar3 = FUN_066cd30c(uVar2,0);
    if (((uVar3 & 1) == 0) ||
       ((*(long *)(unaff_x20 + 0x78) != 0 &&
        (uVar3 = FUN_05241d74(*(long *)(unaff_x20 + 0x78),uVar2,*(undefined8 *)PTR_DAT_06d3d868),
        (uVar3 & 1) != 0)))) {
      return;
    }
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      uVar3 = System_Array_EmptyInternalEnumerator<KeyValuePair<NetworkObjectGuid,_int>>__Dispose
                        (*(long *)(unaff_x20 + 0x20),uVar2,&stack0x00000008,
                         *(undefined8 *)PTR_DAT_06d3da18);
      if ((uVar3 & 1) == 0) {
        lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3c618);
        FUN_05241680(lVar4,*(undefined8 *)PTR_DAT_06d3c8b8);
        in_stack_00000008 = lVar4;
        if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_052e3838;
        FUN_04c74618(*(long *)(unaff_x20 + 0x20),uVar2,lVar4,*(undefined8 *)PTR_DAT_06d3da20);
      }
      if ((in_stack_00000008 != 0) &&
         ((*(int *)(in_stack_00000008 + 0x20) != 0 || (FUN_052e33a4(), in_stack_00000008 != 0)))) {
        FUN_05242864();
        return;
      }
    }
  }
LAB_052e3838:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


