/*
FUNCTION_NAME: FUN_022c95f8
ENTRY_POINT: 022c95f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 204
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022c9970) */
/* WARNING: Type propagation algorithm not settling */

uint FUN_022c95f8(long *param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  ulong __n;
  void *__src;
  undefined8 *puVar11;
  void *__s;
  long *plVar12;
  undefined8 *apuStack_80 [2];
  char local_6c [4];
  long local_68;
  undefined *puVar6;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar12 = *(long **)(param_3 + 0x38);
  if (plVar12 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    plVar12 = *(long **)(param_3 + 0x38);
    if (plVar12 == (long *)0x0) {
      FUN_01ecafa0(param_3);
      plVar12 = *(long **)(param_3 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(plVar12[5] + 0xfc);
  uVar9 = __n + 0xf & 0x1fffffff0;
  __src = (void *)((long)apuStack_80 - uVar9);
  puVar11 = (undefined8 *)((long)__src - uVar9);
  __s = (void *)((long)puVar11 - uVar9);
  memset(__s,0,__n);
  if (param_1 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    puVar6 = Method_Oculus_Interaction_UnityCanvas_CanvasRenderTexture_set_RenderScale__;
  }
  else {
    if (param_2 != 0) {
      lVar7 = *plVar12;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar8 = *param_1;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_022c9710;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(param_1,lVar7,0);
LAB_022c9710:
      plVar12 = (long *)(*(code *)*puVar3)(param_1,puVar3[1]);
      puVar6 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar7 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar6) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_022c9778;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar6,0);
LAB_022c9778:
        uVar2 = (*(code *)*puVar3)(plVar12,puVar3[1]);
        if ((uVar2 & 1) == 0) break;
        lVar7 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        lVar8 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              lVar7 = lVar8 + (long)*piVar10 * 0x10 + 0x138;
              goto LAB_022c97f0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        lVar7 = FUN_01ecb238(plVar12,lVar7,0);
LAB_022c97f0:
        lVar7 = *(long *)(lVar7 + 8);
        apuStack_80[1] = __src;
        (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar12,apuStack_80 + 1,__src);
        memcpy(__s,__src,__n);
        memcpy(puVar11,__s,__n);
        apuStack_80[1] = puVar11;
        if (-1 < *(int *)(*(long *)(*(long *)(param_3 + 0x38) + 0x28) + 0x28)) {
          apuStack_80[1] = (undefined8 *)*puVar11;
        }
        puVar3 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 0x30);
        (*(code *)puVar3[2])(*puVar3,puVar3,param_2,apuStack_80 + 1,local_6c);
      } while (local_6c[0] != '\0');
      if (plVar12 != (long *)0x0) {
        lVar7 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar11 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_022c98cc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_01ecb238(plVar12,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                               ,0);
LAB_022c98cc:
        (*(code *)*puVar11)(plVar12,puVar11[1]);
      }
      if (*(long *)(lVar1 + 0x28) == local_68) {
        return (uVar2 ^ 1) & 1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    puVar6 = Method_UnityEngine_CanvasRenderer_SetColor__;
  }
  uVar5 = thunk_FUN_01efb3a4(puVar6);
  FUN_034efd20(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,param_3);
}


