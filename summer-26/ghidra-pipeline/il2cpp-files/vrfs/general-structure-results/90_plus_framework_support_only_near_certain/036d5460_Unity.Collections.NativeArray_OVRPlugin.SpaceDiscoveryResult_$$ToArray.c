/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$ToArray
ENTRY_POINT: 036d5460
PROGRAM: vrfs-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ToArray(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x21;
  
  plVar1 = (long *)thunk_FUN_015d0480();
  if (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto code_r0x036d54b8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_015c2a80(plVar1,*unaff_x21,0);
code_r0x036d54b8:
    (*(code *)*puVar2)(plVar1,puVar2[1]);
  }
  if (unaff_x19 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0164c380();
  }
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}


