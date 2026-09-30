/*
FUNCTION_NAME: FUN_0342fb6c
ENTRY_POINT: 0342fb6c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_0342fb6c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  
  if ((DAT_048327ef & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_AI_NavMeshBuilder_BuildNavMeshData__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
    DAT_048327ef = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Rendering_ProbeVolumeAsset_GetSubArray<ProbeBrickIndex_Brick>__
                              );
    FUN_034efd20(uVar4,uVar8,0);
    uVar8 = thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_ProbeVolumeDebug_<GetReset>b__19_0__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,uVar8);
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0;
  }
  uVar3 = FUN_0340e040(*(long *)(param_1 + 0x18),param_2,0);
  if ((uVar3 & 1) == 0) {
    lVar11 = *(long *)(param_1 + 0x18);
    uVar4 = FUN_03405678(*(undefined8 *)
                          Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__,
                         param_2,0);
    if (lVar11 == 0) {
LAB_0342fd5c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar3 = FUN_0340dc94(lVar11,uVar4,4,0);
    if ((uVar3 & 1) == 0) {
      plVar5 = *(long **)(param_1 + 0x28);
      lVar11 = 0;
      if (plVar5 != (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(*plVar5 + 0x390));
        puVar2 = Method_UnityEngine_AI_NavMeshBuilder_BuildNavMeshData__;
        puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar5 == (long *)0x0) goto LAB_0342fd5c;
        do {
          lVar9 = *plVar5;
          lVar11 = *(long *)puVar1;
          uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar3 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_0342fcb8;
              }
              uVar3 = uVar3 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar3 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar11,0);
LAB_0342fcb8:
          uVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar3 & 1) == 0) {
            return 0;
          }
          lVar9 = *plVar5;
          lVar11 = *(long *)puVar1;
          uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar3 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_0342fd18;
              }
              uVar3 = uVar3 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar3 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar11,1);
LAB_0342fd18:
          plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
          if (plVar7 == (long *)0x0) goto LAB_0342fd5c;
          if (*plVar7 != *(long *)puVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc();
          }
          lVar11 = FUN_0342fb6c(plVar7,param_2);
        } while (lVar11 == 0);
      }
      return lVar11;
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)Method_UnityEngine_AI_NavMeshBuilder_BuildNavMeshData__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar11 = FUN_0342ea24(uVar4);
  return lVar11;
}


