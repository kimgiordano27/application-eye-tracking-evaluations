/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 06fd1f34
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
               (undefined8 param_1,long *param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0768bcbc(5);
  }
  FUN_05215944(param_3,0xf,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x200));
  lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_040b1acc(lVar4);
  }
  if (param_2 != (long *)0x0) {
    if (*(long *)(*param_2 + 0x40) != *(long *)(lVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(param_2);
    }
    puVar2 = (undefined4 *)thunk_FUN_040b5044(param_2);
    uVar1 = *puVar2;
    lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc(lVar4);
    }
    if (param_3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = thunk_FUN_040b4e00(param_3,lVar4);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(param_3,lVar4);
      }
    }
    FUN_06fd0474(param_1,uVar1,lVar3,2,
                 *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80)
                                      + 0x20) + 0xc0) + 0x110));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


