/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 02f79000
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_SpaceDiscoveryResult>(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long *plVar3;
  long *unaff_x22;
  long lVar4;
  
  uVar1 = UnityEngine_Font__add_textureRebuilt();
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if (lVar2 != 0) {
    lVar4 = 5;
    do {
      if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)(lVar4 - 4U)) {
        return;
      }
      if ((ulong)*(uint *)(lVar2 + 0x18) <= lVar4 - 4U) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      plVar3 = *(long **)(lVar2 + lVar4 * 8);
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar1 = FUN_0606f530(plVar3,0);
      if ((uVar1 & 1) != 0) {
        if (plVar3 == (long *)0x0) break;
        (**(code **)(*plVar3 + 0x1c8))(plVar3);
        FUN_02f79604(plVar3,0);
        FUN_02f79754(plVar3,0);
        FUN_02f798a4(plVar3,0);
        FUN_02f799f4(plVar3,0);
      }
      lVar2 = *(long *)(unaff_x19 + 0x20);
      lVar4 = lVar4 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


