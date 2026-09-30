/*
FUNCTION_NAME: FUN_033da5b8
ENTRY_POINT: 033da5b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 108
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_9;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x033da728) */

long FUN_033da5b8(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  
  if ((DAT_0483251e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Matrix4x4_set_Item__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Mesh_SetUvsImpl<Vector4>__);
    DAT_0483251e = 1;
  }
  plVar7 = (long *)(param_1 + 0x58);
  lVar1 = *plVar7;
  if (lVar1 == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x50);
    lVar1 = thunk_FUN_01f117cc(*(undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__);
    FUN_033cdd18(lVar1,uVar8);
    if ((lVar1 == 0) || (plVar2 = (long *)FUN_033cea34(lVar1,0), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar8 = (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)Method_UnityEngine_Mesh_SetUvsImpl<Vector4>__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_Mesh_SetUvsImpl<Vector4>__);
    }
    plVar2 = (long *)FUN_033e6b54(uVar6,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar1 = FUN_03436d88(plVar2,uVar8,0);
    *plVar7 = lVar1;
    thunk_FUN_01f51358(plVar7);
    lVar1 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
          goto FUN_033da6fc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar2,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
FUN_033da6fc:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
    lVar1 = *plVar7;
  }
  return lVar1;
}


