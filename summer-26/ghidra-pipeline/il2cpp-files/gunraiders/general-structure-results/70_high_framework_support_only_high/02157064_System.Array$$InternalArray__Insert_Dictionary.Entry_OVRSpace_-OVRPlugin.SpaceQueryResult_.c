/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<Dictionary.Entry<OVRSpace,-OVRPlugin.SpaceQueryResult>>
ENTRY_POINT: 02157064
PROGRAM: gunraiders-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__Insert<Dictionary_Entry<OVRSpace,_OVRPlugin_SpaceQueryResult>>
               (ulong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x23;
  long unaff_x24;
  long *plVar3;
  
  plVar3 = *(long **)(unaff_x24 + 0x450);
  if ((param_1 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_04239450);
    *(undefined1 *)(unaff_x23 + 2999) = 1;
  }
  lVar2 = **(long **)(*plVar3 + 0xb8);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x120), lVar2 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 600), lVar2 != 0)) {
    uVar1 = FUN_020a3380(lVar2,param_3,param_4,param_5,0);
    FUN_03d4b1bc(param_2,uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


