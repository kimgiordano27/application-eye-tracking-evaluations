/*
FUNCTION_NAME: FUN_0237309c
ENTRY_POINT: 0237309c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 219
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_16;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x023735a4) */
/* WARNING: Removing unreachable block (ram,0x023736f4) */

void FUN_0237309c(long param_1,long *param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  void *__src;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  ulong __n;
  undefined8 *__dest;
  void *__s;
  long local_c0 [2];
  uint local_b0;
  uint local_ac;
  long *local_a8;
  int local_9c;
  long local_98;
  long local_90;
  int local_84;
  undefined8 *local_80;
  int *local_78;
  undefined1 auStack_70 [4];
  int local_6c;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  lVar11 = *(long *)(param_3 + 0x38);
  local_98 = param_1;
  if (lVar11 == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRSkeleton>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<ParticleSystemRenderer>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Point>__);
    lVar11 = *(long *)(param_3 + 0x38);
    if (lVar11 == 0) {
      FUN_01ecafa0(param_3);
      lVar11 = *(long *)(param_3 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*(long *)(lVar11 + 0x18) + 0xfc);
  uVar12 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)(((long)local_c0 - uVar12) - uVar12);
  __s = (void *)((long)__dest - uVar12);
  memset(__s,0,__n);
  local_c0[1] = FUN_039baefc(local_98,0,0);
  if (param_2 != (long *)0x0) {
    uVar5 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    uVar16 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<Point>__;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    }
    uVar16 = FUN_03579868(uVar16,0);
    local_b0 = FUN_03583338(uVar5,uVar16,0);
    FUN_039b554c(local_98,param_2[2],0);
    if ((*(byte *)(**(long **)(param_3 + 0x38) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    lVar6 = thunk_FUN_01f117cc();
    (*(code *)**(undefined8 **)(*(long *)(param_3 + 0x38) + 8))();
    lVar11 = local_98;
    if (*(long *)(local_98 + 0x10) != 0) {
      local_9c = System_ComponentModel_ArrayConverter___ctor(*(long *)(local_98 + 0x10),0);
      if (*(long *)(lVar11 + 0x10) != 0) {
        (*(code *)**(undefined8 **)(*(long *)(param_3 + 0x38) + 0x10))
                  (*(long *)(lVar11 + 0x10),lVar6);
        if (param_2[4] != 0) {
          FUN_039b6544(local_98,param_2[4],~local_b0 & 1,0);
        }
        lVar11 = local_98;
        if (local_c0[1] != 0) {
          lVar15 = *(long *)(local_98 + 0x10);
          local_c0[0] = lVar7;
          uVar5 = FUN_039b1960(local_c0[1],local_98,0);
          if (lVar15 != 0) {
            FUN_039afc24(lVar15,uVar5,0,local_b0 & 1,0);
            puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
            lVar7 = param_2[3];
            if (lVar7 != 0) {
              iVar4 = 0;
              local_ac = (local_b0 ^ 1) & 1;
              local_a8 = param_2;
LAB_02373318:
              iVar3 = FUN_0265d6c4(lVar7,*(undefined8 *)
                                          Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                                  );
              if (iVar4 < iVar3) {
                if (param_2[3] != 0) {
                  lVar7 = FUN_0265d74c(param_2[3],iVar4,
                                       *(undefined8 *)
                                        Method_UnityEngine_Component_GetComponent<ParticleSystemRenderer>__
                                      );
                  if (((*(long *)(lVar11 + 0x10) != 0) &&
                      (iVar3 = System_ComponentModel_ArrayConverter___ctor
                                         (*(long *)(lVar11 + 0x10),0), lVar7 != 0)) &&
                     (local_90 = lVar7, *(long *)(lVar7 + 0x10) != 0)) {
                    local_84 = iVar4;
                    plVar8 = (long *)FUN_0265d924(*(long *)(lVar7 + 0x10),
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__
                                                 );
                    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    iVar3 = iVar3 - local_9c;
                    do {
                      lVar7 = *plVar8;
                      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
                      if (uVar13 != 0) {
                        piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                            puVar9 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
                            goto LAB_023733e8;
                          }
                          uVar13 = uVar13 - 1;
                          piVar14 = piVar14 + 4;
                        } while (uVar13 != 0);
                      }
                      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_023733e8:
                      uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
                      if ((uVar13 & 1) == 0) goto LAB_02373528;
                      lVar7 = *plVar8;
                      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
                      if (uVar13 != 0) {
                        piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar14 + -2) ==
                              *(long *)
                               Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__) {
                            puVar9 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
                            goto LAB_0237344c;
                          }
                          uVar13 = uVar13 - 1;
                          piVar14 = piVar14 + 4;
                        } while (uVar13 != 0);
                      }
                      puVar9 = (undefined8 *)
                               FUN_01ecb238(plVar8,*(long *)
                                                  Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__
                                            ,0);
LAB_0237344c:
                      plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
                      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      bVar1 = *(byte *)(*(long *)
                                         Method_UnityEngine_Component_GetComponent<OVRSkeleton>__ +
                                       0x130);
                      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                          *(long *)Method_UnityEngine_Component_GetComponent<OVRSkeleton>__)) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08cfc();
                      }
                      lVar11 = plVar10[2];
                      lVar7 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
                      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                        lVar7 = FUN_01ecaf44(lVar7);
                      }
                      __src = (void *)FUN_01f08934(lVar11,lVar7,(long)local_c0 - uVar12);
                      memcpy(__s,__src,__n);
                      memcpy(__dest,__s,__n);
                      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      local_80 = __dest;
                      if (-1 < *(int *)(*(long *)(*(long *)(param_3 + 0x38) + 0x18) + 0x28)) {
                        local_80 = (undefined8 *)*__dest;
                      }
                      puVar9 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 0x20);
                      local_78 = &local_6c;
                      local_6c = iVar3;
                      (*(code *)puVar9[2])(*puVar9,puVar9,lVar6,&local_80,auStack_70);
                    } while( true );
                  }
                }
              }
              else {
                lVar7 = *(long *)(lVar11 + 0x10);
                uVar5 = FUN_039b1960(local_c0[1],lVar11,0);
                if (lVar7 != 0) {
                  FUN_039afab4(lVar7,uVar5,0);
                  if (*(long *)(local_c0[0] + 0x28) == local_68) {
                    return;
                  }
                    /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
                }
              }
            }
          }
        }
      }
    }
  }
LAB_023736f0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_02373528:
  if (plVar8 != (long *)0x0) {
    lVar7 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar9 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_02373588;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02373588:
    (*(code *)*puVar9)(plVar8,puVar9[1]);
  }
  lVar11 = local_98;
  FUN_039b6544(local_98,*(undefined8 *)(local_90 + 0x18),local_ac,0);
  param_2 = local_a8;
  if (local_a8[3] == 0) goto LAB_023736f0;
  iVar4 = FUN_0265d6c4(local_a8[3],
                       *(undefined8 *)
                        Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                      );
  if (local_84 < iVar4 + -1) {
    lVar7 = *(long *)(lVar11 + 0x10);
    uVar5 = FUN_039b1960(local_c0[1],lVar11,0);
    if (lVar7 == 0) goto LAB_023736f0;
    FUN_039afc24(lVar7,uVar5,0,local_b0 & 1,0);
  }
  lVar7 = param_2[3];
  iVar4 = local_84 + 1;
  if (lVar7 == 0) goto LAB_023736f0;
  goto LAB_02373318;
}


