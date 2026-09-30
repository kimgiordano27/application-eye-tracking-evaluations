/*
FUNCTION_NAME: FUN_02372404
ENTRY_POINT: 02372404
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 207
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_16;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0237285c) */
/* WARNING: Removing unreachable block (ram,0x023729a0) */
/* WARNING: Removing unreachable block (ram,0x023729c4) */

void FUN_02372404(long param_1,long *param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined4 *puVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  undefined8 uVar19;
  int iVar20;
  
  if (*(long *)(param_3 + 0x38) == 0) {
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
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_01ecafa0(param_3);
    }
  }
  lVar8 = FUN_039baefc(param_1,0,0);
  if (param_2 != (long *)0x0) {
    uVar9 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    uVar19 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<Point>__;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    }
    uVar19 = FUN_03579868(uVar19,0);
    uVar5 = FUN_03583338(uVar9,uVar19,0);
    FUN_039b554c(param_1,param_2[2],0);
    if ((*(byte *)(**(long **)(param_3 + 0x38) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    lVar10 = thunk_FUN_01f117cc();
    FUN_02b00cbc(lVar10,*(undefined8 *)(*(long *)(param_3 + 0x38) + 8));
    if (*(long *)(param_1 + 0x10) != 0) {
      iVar6 = System_ComponentModel_ArrayConverter___ctor(*(long *)(param_1 + 0x10),0);
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_02363294(*(long *)(param_1 + 0x10),lVar10,
                     *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10));
        if (param_2[4] != 0) {
          FUN_039b6544(param_1,param_2[4],~uVar5 & 1,0);
        }
        if (lVar8 != 0) {
          lVar18 = *(long *)(param_1 + 0x10);
          uVar9 = FUN_039b1960(lVar8,param_1,0);
          if (lVar18 != 0) {
            FUN_039afc24(lVar18,uVar9,0,uVar5 & 1,0);
            puVar4 = Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__;
            puVar3 = Method_UnityEngine_Component_GetComponent<OVRSkeleton>__;
            puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
            lVar18 = param_2[3];
            if (lVar18 != 0) {
              iVar20 = 0;
              puVar12 = (undefined8 *)
                        Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
              ;
LAB_02372628:
              iVar7 = FUN_0265d6c4(lVar18,*puVar12);
              if (iVar20 < iVar7) {
                if (param_2[3] != 0) {
                  lVar18 = FUN_0265d74c(param_2[3],iVar20,
                                        *(undefined8 *)
                                         Method_UnityEngine_Component_GetComponent<ParticleSystemRenderer>__
                                       );
                  if (((*(long *)(param_1 + 0x10) != 0) &&
                      (iVar7 = System_ComponentModel_ArrayConverter___ctor
                                         (*(long *)(param_1 + 0x10),0), lVar18 != 0)) &&
                     (*(long *)(lVar18 + 0x10) != 0)) {
                    plVar11 = (long *)FUN_0265d924(*(long *)(lVar18 + 0x10),
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__
                                                  );
                    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    do {
                      lVar15 = *plVar11;
                      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
                      if (uVar16 != 0) {
                        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
                            puVar12 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                            goto LAB_023726ec;
                          }
                          uVar16 = uVar16 - 1;
                          piVar17 = piVar17 + 4;
                        } while (uVar16 != 0);
                      }
                      puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,0);
LAB_023726ec:
                      uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                      if ((uVar16 & 1) == 0) goto LAB_023727e4;
                      lVar15 = *plVar11;
                      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
                      if (uVar16 != 0) {
                        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                            puVar12 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                            goto LAB_02372748;
                          }
                          uVar16 = uVar16 - 1;
                          piVar17 = piVar17 + 4;
                        } while (uVar16 != 0);
                      }
                      puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar4,0);
LAB_02372748:
                      plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
                      if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
                         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                          *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08cfc();
                      }
                      plVar13 = (long *)plVar13[2];
                      lVar15 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
                      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                        lVar15 = FUN_01ecaf44(lVar15);
                      }
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      if (*(long *)(*plVar13 + 0x40) != *(long *)(lVar15 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08cfc(plVar13);
                      }
                      puVar14 = (undefined4 *)thunk_FUN_01f11920(plVar13);
                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      FUN_02b02c4c(lVar10,*puVar14,iVar7 - iVar6,
                                   *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20));
                    } while( true );
                  }
                }
              }
              else {
                lVar10 = *(long *)(param_1 + 0x10);
                uVar9 = FUN_039b1960(lVar8,param_1,0);
                if (lVar10 != 0) {
                  FUN_039afab4(lVar10,uVar9,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_023729c0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_023727e4:
  if (plVar11 != (long *)0x0) {
    lVar15 = *plVar11;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_02372844;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_01ecb238(plVar11,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_02372844:
    (*(code *)*puVar12)(plVar11,puVar12[1]);
  }
  FUN_039b6544(param_1,*(undefined8 *)(lVar18 + 0x18),(uVar5 ^ 1) & 1,0);
  puVar12 = (undefined8 *)
            Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__;
  if (param_2[3] == 0) goto LAB_023729c0;
  iVar7 = FUN_0265d6c4(param_2[3],
                       *(undefined8 *)
                        Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                      );
  if (iVar20 < iVar7 + -1) {
    lVar18 = *(long *)(param_1 + 0x10);
    uVar9 = FUN_039b1960(lVar8,param_1,0);
    if (lVar18 == 0) goto LAB_023729c0;
    FUN_039afc24(lVar18,uVar9,0,uVar5 & 1,0);
  }
  lVar18 = param_2[3];
  iVar20 = iVar20 + 1;
  if (lVar18 == 0) goto LAB_023729c0;
  goto LAB_02372628;
}


