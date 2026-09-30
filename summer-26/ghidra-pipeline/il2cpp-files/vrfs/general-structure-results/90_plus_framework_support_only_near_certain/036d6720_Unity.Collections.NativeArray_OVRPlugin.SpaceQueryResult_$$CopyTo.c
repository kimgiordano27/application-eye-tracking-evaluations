/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopyTo
ENTRY_POINT: 036d6720
PROGRAM: vrfs-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyTo(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  
  *(undefined8 *)(unaff_x19 + 0xb8) = param_1;
  thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0xb8),param_1);
  iVar1 = FUN_036d7f44();
  *(int *)(unaff_x19 + 0x90) = iVar1;
  if (iVar1 == 3) {
    iVar1 = FUN_036f2cf8();
    puVar5 = (undefined8 *)PTR_DAT_06e36d08;
    if (iVar1 == 3) goto LAB_036d6820;
  }
  else {
    if ((iVar1 != 1) || (lVar2 = FUN_03fc53ec(), lVar2 == 0)) goto LAB_036d6820;
    lVar2 = FUN_03fc53ec();
    if ((lVar2 == 0) || (plVar3 = *(long **)(lVar2 + 0x80), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar4 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
    puVar5 = (undefined8 *)PTR_DAT_06da1768;
    if ((uVar4 & 1) != 0) goto LAB_036d6820;
  }
  FUN_0474aec4(*puVar5,0);
  FUN_01fbaf30();
LAB_036d6820:
  *(undefined4 *)(unaff_x19 + 0x5c) = 4;
  return;
}


