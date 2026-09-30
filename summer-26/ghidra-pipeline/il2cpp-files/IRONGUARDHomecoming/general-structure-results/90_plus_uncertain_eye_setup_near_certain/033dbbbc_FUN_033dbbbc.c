/*
FUNCTION_NAME: FUN_033dbbbc
ENTRY_POINT: 033dbbbc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_9;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x033dbda8) */

long FUN_033dbbbc(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  
  if ((DAT_04832529 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Mesh_SetUvsImpl<Vector4>__);
    DAT_04832529 = 1;
  }
  plVar9 = (long *)(param_1 + 0x80);
  lVar3 = *plVar9;
  if (lVar3 == 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x20);
      if (plVar5 == (long *)0x0) {
        return 0;
      }
      iVar2 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
      puVar1 = Method_UnityEngine_Mesh_SetUvsImpl<Vector4>__;
      if (0 < iVar2) {
        uVar10 = *(undefined8 *)(param_1 + 0x70);
        if (*(int *)(*(long *)Method_UnityEngine_Mesh_SetUvsImpl<Vector4>__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar3 = FUN_033e674c(uVar10,0,0);
        if (lVar3 == 0) {
          return 0;
        }
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (plVar5 = (long *)FUN_033cea34(*(long *)(param_1 + 0x10),0), plVar5 == (long *)0x0))
        goto LAB_033dbda0;
        lVar4 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar1);
        }
        plVar5 = (long *)FUN_033e6bb0(lVar3,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar3 = FUN_03436ee8(plVar5,lVar4,0,*(undefined4 *)(lVar4 + 0x18),0);
        *plVar9 = lVar3;
        thunk_FUN_01f51358(plVar9);
        lVar3 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar6 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_033dbd88;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01ecb238(plVar5,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_033dbd88:
        (*(code *)*puVar6)(plVar5,puVar6[1]);
        lVar3 = *plVar9;
        goto joined_r0x033dbd9c;
      }
    }
    lVar3 = 0;
  }
  else {
joined_r0x033dbd9c:
    if (lVar3 == 0) {
LAB_033dbda0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = FUN_0358d9a0(lVar3,0);
    lVar3 = 0;
    if (lVar4 != 0) {
      uVar10 = *(undefined8 *)Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__;
      lVar3 = thunk_FUN_01f116d0(lVar4,uVar10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar4,uVar10);
      }
    }
  }
  return lVar3;
}


