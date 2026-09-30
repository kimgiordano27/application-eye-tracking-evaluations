/*
FUNCTION_NAME: FUN_03fbea40
ENTRY_POINT: 03fbea40
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_16;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined1 FUN_03fbea40(long param_1,long param_2,long *param_3,long *param_4,int *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  int local_44;
  
  if ((DAT_0483b8ae & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    DAT_0483b8ae = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (param_3 == (long *)0x0) goto LAB_03fbecd4;
  lVar5 = *param_3;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_03fbeaf8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(param_3,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_03fbeaf8:
  uVar6 = (*(code *)*puVar3)(param_3,puVar3[1]);
  puVar2 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__;
  if ((uVar6 & 1) == 0) {
    uVar9 = 0;
  }
  else {
    if (*(char *)(param_1 + 200) == '\0') {
      lVar5 = *param_3;
      uVar8 = *(undefined8 *)(param_1 + 0xc0);
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_03fbec5c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(param_3,*(long *)puVar1,1);
LAB_03fbec5c:
      uVar4 = (*(code *)*puVar3)(param_3,puVar3[1]);
      if (param_2 == 0) goto LAB_03fbecd4;
    }
    else {
      if (param_4 == (long *)0x0) goto LAB_03fbecd4;
      lVar5 = *param_4;
      uVar8 = *(undefined8 *)(param_1 + 0xb8);
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03fbebc0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(param_4,*(long *)Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__,0);
LAB_03fbebc0:
      uVar4 = (*(code *)*puVar3)(param_4,puVar3[1]);
      if (param_2 == 0) goto LAB_03fbecd4;
      FUN_03faf2e4(param_2,uVar8,uVar4);
      lVar5 = *param_4;
      uVar8 = *(undefined8 *)(param_1 + 0xc0);
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_03fbec34;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(param_4,*(long *)puVar2,1);
LAB_03fbec34:
      uVar4 = (*(code *)*puVar3)(param_4,puVar3[1]);
    }
    uVar9 = 1;
    FUN_03faf2e4(param_2,uVar8,uVar4);
    puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    local_44 = *param_5 + 1;
    *param_5 = local_44;
    uVar4 = *(undefined8 *)(param_1 + 0xb0);
    uVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_44);
    if (param_2 == 0) {
LAB_03fbecd4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03faf2e4(param_2,uVar4,uVar8);
  }
  return uVar9;
}


