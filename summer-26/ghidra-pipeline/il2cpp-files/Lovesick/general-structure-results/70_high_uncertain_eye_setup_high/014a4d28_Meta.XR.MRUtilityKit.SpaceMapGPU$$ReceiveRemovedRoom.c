/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$ReceiveRemovedRoom
ENTRY_POINT: 014a4d28
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMapGPU__ReceiveRemovedRoom(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  int in_w8;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar4;
  
  if (in_w8 == 0) {
    thunk_FUN_00d32864();
    param_1 = *unaff_x22;
  }
  if (unaff_x20 != 0) {
    lVar4 = **(long **)(param_1 + 0xb8);
    lVar2 = FUN_00bc379c();
    if ((lVar2 != 0) &&
       (uVar3 = FUN_028a05b8(*(undefined8 *)(lVar2 + 0x10),0), puVar1 = PTR_DAT_033f1df0, lVar4 != 0
       )) {
      FUN_028a0d88(lVar4,uVar3,4,0);
      FUN_015f5b28(*(undefined8 *)puVar1);
      (**(code **)(*unaff_x21 + 0x288))();
      lVar2 = (**(code **)(*unaff_x21 + 0x198))();
      if ((lVar2 != 0) && (*(long *)(lVar2 + 0xd0) != 0)) {
        FUN_013dfa68();
      }
      lVar2 = (**(code **)(*unaff_x21 + 0x198))();
      if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0xe0), lVar2 == 0)) {
        return;
      }
      lVar4 = FUN_00bc379c();
      if (lVar4 != 0) {
        FUN_013e0100(lVar2,*(undefined8 *)(lVar4 + 0x18));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


