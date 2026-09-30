/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.BoneCapsule>
ENTRY_POINT: 024d27dc
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_BoneCapsule>(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  long in_x9;
  long unaff_x19;
  long *plVar4;
  long *unaff_x21;
  long *unaff_x22;
  
  if ((*(byte *)(in_x9 + 300) < *(byte *)(param_1 + 300)) ||
     (*(long *)(*(long *)(in_x9 + 200) + (ulong)*(byte *)(param_1 + 300) * 8 + -8) != param_1)) {
    bVar1 = 0;
  }
  else {
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    lVar3 = FUN_0336df30(0);
    if ((lVar3 == 0) || (*(long *)(unaff_x19 + 0x50) == 0)) goto LAB_024d28c4;
    plVar4 = *(long **)(lVar3 + 0x20);
    uVar2 = FUN_034dfa14(*(long *)(unaff_x19 + 0x50),0);
    if (plVar4 == (long *)0x0) goto LAB_024d28c4;
    lVar3 = *plVar4;
    bVar1 = *(byte *)(*unaff_x21 + 300);
    if ((*(byte *)(lVar3 + 300) < bVar1) ||
       (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x21)) goto LAB_024d28c4;
    bVar1 = (**(code **)(lVar3 + 0x278))(plVar4,uVar2,*(undefined8 *)(lVar3 + 0x280));
  }
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    *(byte *)(*(long *)(unaff_x19 + 0x68) + 0x38) = bVar1 & 1;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      lVar3 = 0x58;
      if ((bVar1 & 1) == 0) {
        lVar3 = 0x60;
      }
      FUN_039e46f4(*(long *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x19 + lVar3),0);
      return;
    }
  }
LAB_024d28c4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


