/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 04a48c2c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__Dispose
               (int *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  
  if (0 < *param_1) {
    lVar1 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03ac4090();
    }
    plVar2 = (long *)FUN_0403a050(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x80));
    if (plVar2 == (long *)0x0) {
LAB_04a48d70:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar3 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,*(undefined8 *)(param_1 + 2),param_2,*(undefined8 *)(*plVar2 + 0x1c0))
    ;
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(param_3 + 0x20);
      uVar5 = 0;
      uVar3 = 0;
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
LAB_04a48c98:
        lVar4 = FUN_03ac4090(lVar4,uVar3);
        uVar3 = (ulong)uVar5;
      }
LAB_04a48ca0:
      FUN_04a48eb8(param_1,uVar3,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xb8));
      return;
    }
    if ((*(long *)(param_1 + 4) != 0) && (0 < *param_1 + -1)) {
      lVar1 = 4;
      do {
        lVar4 = *(long *)(param_3 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03ac4090();
        }
        plVar2 = (long *)FUN_0403a050(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x80));
        lVar4 = *(long *)(param_1 + 4);
        if (lVar4 == 0) goto LAB_04a48d70;
        if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar1 - 4U) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        if (plVar2 == (long *)0x0) goto LAB_04a48d70;
        uVar3 = (**(code **)(*plVar2 + 0x1b8))
                          (plVar2,*(undefined8 *)(lVar4 + lVar1 * 8),param_2,
                           *(undefined8 *)(*plVar2 + 0x1c0));
        if ((uVar3 & 1) != 0) {
          lVar4 = *(long *)(param_3 + 0x20);
          uVar3 = lVar1 - 3;
          if ((*(ushort *)(lVar4 + 0x135) & 1) != 0) goto LAB_04a48ca0;
          uVar5 = (uint)uVar3;
          goto LAB_04a48c98;
        }
        lVar4 = lVar1 + -3;
        lVar1 = lVar1 + 1;
      } while (lVar4 < *param_1 + -1);
    }
  }
  return;
}


