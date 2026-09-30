/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 047a58c8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1,long param_2,uint param_3,uint param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1 != 0) {
    if (param_3 < *(uint *)(param_1 + 0x18)) {
      if (param_4 < *(uint *)(param_1 + 0x18)) {
        if (param_2 == 0) goto LAB_047a59e4;
        lVar1 = param_1 + (long)(int)param_3 * 0x10;
        lVar2 = param_1 + (long)(int)param_4 * 0x10;
        puVar5 = (undefined8 *)(lVar1 + 0x20);
        uVar7 = *puVar5;
        uVar9 = *(undefined8 *)(lVar1 + 0x28);
        puVar6 = (undefined8 *)(lVar2 + 0x20);
        uVar8 = *puVar6;
        uVar3 = *(undefined8 *)(lVar2 + 0x28);
        if ((*(ushort *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
        iVar4 = (**(code **)(param_2 + 0x18))
                          (*(undefined8 *)(param_2 + 0x40),uVar7,uVar9,uVar8,uVar3,
                           *(undefined8 *)(param_2 + 0x28));
        if (iVar4 < 1) {
          return;
        }
        if ((param_3 < *(uint *)(param_1 + 0x18)) && (param_4 < *(uint *)(param_1 + 0x18))) {
          uVar7 = *puVar6;
          uVar9 = *(undefined8 *)(lVar1 + 0x28);
          uVar8 = *puVar5;
          *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
          *puVar5 = uVar7;
          thunk_FUN_036b7ad0(param_1 + 0x20 + (long)(int)param_3 * 0x10,0);
          if (param_4 < *(uint *)(param_1 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x28) = uVar9;
            *puVar6 = uVar8;
            thunk_FUN_036b7ad0(param_1 + 0x20 + (long)(int)param_4 * 0x10,0);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
LAB_047a59e4:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


