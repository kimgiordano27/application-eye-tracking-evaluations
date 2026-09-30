/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopyFrom
ENTRY_POINT: 036d668c
PROGRAM: vrfs-libil2cpp.so
SCORE: 105
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyFrom
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long unaff_x23;
  
  if (param_1 != param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_0160f170();
  }
  FUN_036cf930();
  *(long *)(unaff_x19 + 0x60) = unaff_x23;
  thunk_FUN_01656ef8();
  if (unaff_x23 == 0) {
LAB_036d683c:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  if ((*(byte *)(unaff_x23 + 0x70) >> 2 & 1) != 0) {
    FUN_01fbafc0();
  }
  FUN_036d6848();
  uVar2 = Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetHashCode();
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar2;
  thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0xb8),uVar2);
  iVar1 = FUN_036d7f44();
  *(int *)(unaff_x19 + 0x90) = iVar1;
  if (iVar1 == 3) {
    iVar1 = FUN_036f2cf8();
    puVar6 = (undefined8 *)PTR_DAT_06e36d08;
    if (iVar1 == 3) goto LAB_036d6820;
  }
  else {
    if ((iVar1 != 1) || (lVar3 = FUN_03fc53ec(), lVar3 == 0)) goto LAB_036d6820;
    lVar3 = FUN_03fc53ec();
    if ((lVar3 == 0) || (plVar4 = *(long **)(lVar3 + 0x80), plVar4 == (long *)0x0))
    goto LAB_036d683c;
    uVar5 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
    puVar6 = (undefined8 *)PTR_DAT_06da1768;
    if ((uVar5 & 1) != 0) goto LAB_036d6820;
  }
  FUN_0474aec4(*puVar6,0);
  FUN_01fbaf30();
LAB_036d6820:
  *(undefined4 *)(unaff_x19 + 0x5c) = 4;
  return;
}


