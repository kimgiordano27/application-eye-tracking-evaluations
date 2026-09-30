/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 03f3ab0c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerable_GetEnumerator
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x19;
  long unaff_x20;
  long in_stack_00000008;
  
  puVar4 = PTR_DAT_067cc498;
  puVar3 = PTR_DAT_067cc490;
  puVar2 = PTR_DAT_067cc488;
  do {
    iVar5 = FUN_0470d294(param_1,*(undefined8 *)puVar4);
    if (iVar5 < 1) {
      if (0 < *(int *)(unaff_x19 + 0x58)) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar7 = FUN_05edcce4(0);
        if (lVar7 != 0) {
          uVar8 = FUN_0347b6f4(*(undefined8 *)(unaff_x19 + 0x38),*(undefined8 *)(unaff_x19 + 0x40),
                               *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40)
                              );
          uVar9 = FUN_0347b628(*(undefined8 *)(unaff_x19 + 0x48),*(undefined8 *)(unaff_x19 + 0x50),
                               *(undefined8 *)PTR_DAT_067cc4a0);
          uVar1 = *(undefined4 *)(unaff_x19 + 0x58);
          if (*(int *)(*(long *)PTR_DAT_067cc4a8 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)PTR_DAT_067cc4a8);
          }
          FUN_0604d5f0(uVar8,uVar9,uVar1,0x70,0);
        }
      }
      *(undefined4 *)(unaff_x19 + 0x58) = 0;
      return;
    }
    if (*(long *)(unaff_x19 + 0x18) == 0) break;
    uVar6 = FUN_0470e0a8(*(long *)(unaff_x19 + 0x18),&stack0x00000008,*(undefined8 *)puVar3);
    if ((uVar6 & 1) != 0) {
      if (in_stack_00000008 == 0) break;
      (**(code **)(in_stack_00000008 + 0x18))
                (*(undefined8 *)(in_stack_00000008 + 0x40),*(undefined8 *)(in_stack_00000008 + 0x28)
                );
    }
    param_1 = *(long *)(unaff_x19 + 0x18);
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


