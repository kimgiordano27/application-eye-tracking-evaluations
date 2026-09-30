/*
FUNCTION_NAME: FUN_01fec71c
ENTRY_POINT: 01fec71c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;functionality_eye_api_context_without_clear_sink_hits_9
*/


/* WARNING: Removing unreachable block (ram,0x01fed1b0) */

void FUN_01fec71c(long param_1)

{
  long *plVar1;
  int iVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  int *piVar27;
  int iVar28;
  long lVar29;
  undefined8 *puVar30;
  float fVar31;
  float fVar32;
  undefined4 local_84;
  undefined8 local_78;
  
  puVar6 = Method_Unity_Collections_NativeList<int>_set_Capacity__;
  puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__;
  puVar4 = Method_Unity_Collections_NativeArray<quaternion>_Dispose__;
  if ((DAT_0482eea0 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<LightUtility_LightMeshVertex>_Copy__);
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<quaternion>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_GetSubArray__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_UIR_NativePagedList<ConvertMeshJobData>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_UIR_NativePagedList<ConvertMeshJobData>_Add__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_UIR_NativePagedList<ConvertMeshJobData>_Dispose__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_UIR_NativePagedList<ConvertMeshJobData>_GetPages__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_UIR_NativePagedList<ConvertMeshJobData>_Reset__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_UIR_NativePagedList<CopyClosingMeshJobData>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_UIR_NativePagedList<CopyClosingMeshJobData>_Add__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_NativeArray<DrawingData_ProcessedBuilderData_MeshBuffers>_Dispose__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_mousePosition__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_NativeArray<DrawingData_ProcessedBuilderData_MeshBuffers>_get_IsCreated__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeList<byte>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_UIR_NativePagedList<CopyClosingMeshJobData>_Dispose__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeList<int>_set_Capacity__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_UIR_NativePagedList<CopyClosingMeshJobData>_GetPages__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeList<byte>_get_IsCreated__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeList<byte>_get_Item__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeList<byte>_get_Length__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_UIR_NativePagedList<CopyClosingMeshJobData>_Reset__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeList<byte>_set_Capacity__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeList<byte>_set_Item__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeList<int>_ResizeUninitialized__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeList<int>_get_Capacity__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeList<int>_get_Length__);
    DAT_0482eea0 = 1;
  }
  local_78 = 0;
  local_84 = 0;
  lVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar6);
  FUN_035ac8e8(lVar11,0);
  lVar12 = FUN_022c59ec(param_1,*(undefined8 *)puVar4);
  lVar13 = FUN_022c5c50(param_1,*(undefined8 *)puVar5);
  if ((lVar13 != 0) &&
     (lVar14 = FUN_04050de0(lVar13,0),
     puVar4 = 
     Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_mousePosition__,
     lVar14 != 0)) {
    uVar15 = FUN_04051998(lVar14,0);
    uVar7 = FUN_04068278(uVar15,0);
    uVar16 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
    FUN_04051010(uVar16,0);
    if (lVar11 != 0) {
      puVar30 = (undefined8 *)(lVar11 + 0x10);
      *puVar30 = uVar16;
      thunk_FUN_01f51358(puVar30,uVar16);
      if (lVar12 != 0) {
        plVar17 = (long *)FUN_04030380(lVar12,0);
        fVar3 = DAT_00c92764;
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar1 = (long *)(lVar11 + 0x18);
        do {
          puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          lVar14 = *plVar17;
          uVar26 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar26 != 0) {
            piVar27 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) ==
                  *(long *)
                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
                puVar18 = (undefined8 *)(lVar14 + (long)*piVar27 * 0x10 + 0x138);
                goto LAB_01fec9fc;
              }
              uVar26 = uVar26 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar26 != 0);
          }
          puVar18 = (undefined8 *)
                    FUN_01ecb238(plVar17,*(long *)
                                          Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                                 ,0);
LAB_01fec9fc:
          uVar26 = (*(code *)*puVar18)(plVar17,puVar18[1]);
          puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
          if ((uVar26 & 1) == 0) {
            plVar17 = (long *)thunk_FUN_01f116d0(plVar17,*(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                                );
            if (plVar17 == (long *)0x0) {
              return;
            }
            lVar11 = *plVar17;
            uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar15 == 0) goto LAB_01fed0d4;
            piVar27 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            goto LAB_01fed0bc;
          }
          lVar14 = *plVar17;
          uVar26 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar26 != 0) {
            piVar27 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *(long *)puVar4) {
                puVar18 = (undefined8 *)(lVar14 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                goto LAB_01feca60;
              }
              uVar26 = uVar26 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar26 != 0);
          }
          puVar18 = (undefined8 *)FUN_01ecb238(plVar17,*(long *)puVar4,1);
LAB_01feca60:
          plVar19 = (long *)(*(code *)*puVar18)(plVar17,puVar18[1]);
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*plVar19 !=
              *(long *)Method_Unity_Collections_NativeArray<LightUtility_LightMeshVertex>_Copy__) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar19);
          }
          uVar16 = FUN_04030624(plVar19,0);
          FUN_040302a8(lVar12,uVar16,0);
          fVar31 = (float)FUN_040305ac(plVar19,0);
          iVar8 = -0x80000000;
          if (fVar31 / fVar3 != INFINITY) {
            iVar8 = (int)(fVar31 / fVar3);
          }
          iVar8 = FUN_04068278(iVar8,0);
          fVar31 = (float)FUN_040305ac(plVar19,0);
          lVar14 = thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_UnityEngine_UIElements_UIR_NativePagedList<CopyClosingMeshJobData>_Add__
                                     );
          FUN_031a16b4(lVar14,*(undefined8 *)
                               Method_UnityEngine_UIElements_UIR_NativePagedList<ConvertMeshJobData>_Reset__
                      );
          lVar20 = thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_Unity_Collections_NativeList<byte>__ctor__);
          FUN_0405e3b0(lVar20,uVar7,iVar8,0,2,0);
          uVar16 = FUN_040766fc(param_1,0);
          uVar21 = FUN_04030624(plVar19,0);
          uVar16 = FUN_0340f2f0(*(undefined8 *)
                                 Method_Unity_Collections_NativeList<int>_get_Capacity__,uVar16,
                                uVar21,0);
          if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(0,uVar16);
          }
          FUN_040767ac(lVar20,uVar16,0);
          lVar22 = thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_Unity_Collections_NativeList<byte>__ctor__);
          FUN_0405e3b0(lVar22,uVar7,iVar8,0,2,0);
          uVar16 = FUN_040766fc(param_1,0);
          uVar21 = FUN_04030624(plVar19,0);
          uVar16 = FUN_0340f2f0(*(undefined8 *)
                                 Method_Unity_Collections_NativeList<byte>_get_IsCreated__,uVar16,
                                uVar21,0);
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(0,uVar16);
          }
          FUN_040767ac(lVar22,uVar16,0);
          lVar23 = thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_Unity_Collections_NativeList<byte>__ctor__);
          FUN_0405e3b0(lVar23,uVar7,iVar8,0,2,0);
          uVar16 = FUN_040766fc(param_1,0);
          uVar21 = FUN_04030624(plVar19,0);
          uVar16 = FUN_0340f2f0(*(undefined8 *)
                                 Method_UnityEngine_UIElements_UIR_NativePagedList<CopyClosingMeshJobData>_Reset__
                                ,uVar16,uVar21,0);
          if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(0,uVar16);
          }
          FUN_040767ac(lVar23,uVar16,0);
          plVar24 = (long *)FUN_01f08890(*(undefined8 *)
                                          Method_Unity_Collections_NativeArray<DrawingData_ProcessedBuilderData_MeshBuffers>_get_IsCreated__
                                         ,3);
          if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(lVar20);
          }
          lVar25 = thunk_FUN_01f116d0(lVar20,*(undefined8 *)(*plVar24 + 0x40));
          if (lVar25 == 0) {
            uVar16 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar16,0);
          }
          if ((int)plVar24[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar24[4] = lVar20;
          thunk_FUN_01f51358();
          lVar25 = thunk_FUN_01f116d0(lVar22,*(undefined8 *)(*plVar24 + 0x40));
          if (lVar25 == 0) {
            uVar16 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar16,0);
          }
          if (*(uint *)(plVar24 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar24[5] = lVar22;
          thunk_FUN_01f51358();
          lVar25 = thunk_FUN_01f116d0(lVar23,*(undefined8 *)(*plVar24 + 0x40));
          if (lVar25 == 0) {
            uVar16 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar16,0);
          }
          if (*(uint *)(plVar24 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar24[6] = lVar23;
          thunk_FUN_01f51358();
          lVar25 = plVar24[3];
          if (0 < (int)lVar25) {
            lVar29 = 0;
            do {
              if ((uint)lVar25 <= (uint)lVar29) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              lVar25 = plVar24[lVar29 + 4];
              if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              FUN_0405ccd4(lVar25,1,0);
              FUN_0405d074(lVar25,0);
              FUN_0405ce24(lVar25,0);
              FUN_04049814(0,0,0,0,1,1,0);
              lVar25 = plVar24[3];
              lVar29 = lVar29 + 1;
            } while ((int)lVar29 < (int)lVar25);
          }
          if (iVar8 < 1) {
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
          }
          else {
            fVar32 = 0.0;
            iVar28 = iVar8;
            do {
              FUN_04030560(fVar32,plVar19,0);
              FUN_040301a4(lVar12,0);
              FUN_04050eb4(lVar13,*puVar30,0);
              uVar16 = FUN_03971350(0,uVar15 & 0xffffffff,0);
              lVar25 = *plVar1;
              if (lVar25 == 0) {
                lVar25 = thunk_FUN_01f117cc(*(undefined8 *)
                                             Method_UnityEngine_UIElements_UIR_NativePagedList<ConvertMeshJobData>_Add__
                                           );
                FUN_02e68544(lVar25,lVar11,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_UIR_NativePagedList<CopyClosingMeshJobData>_Dispose__
                             ,0);
                *plVar1 = lVar25;
                thunk_FUN_01f51358(plVar1,lVar25);
              }
              uVar16 = FUN_022fe800(uVar16,lVar25,
                                    *(undefined8 *)
                                     Method_UnityEngine_UIElements_UIR_NativePagedList<ConvertMeshJobData>__ctor__
                                   );
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c(uVar16,uVar16);
              }
              FUN_031a223c(lVar14,uVar16,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_UIR_NativePagedList<ConvertMeshJobData>_Dispose__
                          );
              iVar28 = iVar28 + -1;
              fVar32 = fVar31 / (float)iVar8 + fVar32;
            } while (iVar28 != 0);
          }
          uVar10 = *(undefined4 *)(lVar14 + 0x18);
          uVar16 = *(undefined8 *)
                    Method_UnityEngine_UIElements_UIR_NativePagedList<CopyClosingMeshJobData>_GetPages__
          ;
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c();
          }
          uVar16 = FUN_03579868(uVar16,0);
          if (*(int *)(*(long *)
                        Method_Unity_Collections_NativeArray<DrawingData_ProcessedBuilderData_MeshBuffers>_Dispose__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar9 = thunk_FUN_01f40210(uVar16,0);
          lVar25 = thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_GetSubArray__
                                     );
          FUN_040786f0(lVar25,uVar10,uVar9,0);
          uVar16 = FUN_031a3dbc(lVar14,*(undefined8 *)
                                        Method_UnityEngine_UIElements_UIR_NativePagedList<ConvertMeshJobData>_GetPages__
                               );
          if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(uVar16,uVar16);
          }
          FUN_04078988(lVar25,uVar16,0);
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar10 = FUN_04078ebc(*(long *)(param_1 + 0x20),
                                *(undefined8 *)
                                 Method_Unity_Collections_NativeList<byte>_set_Capacity__,0);
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_04079194(*(long *)(param_1 + 0x20),uVar10,(long)&local_78 + 4,&local_78,&local_84,0);
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_040792f4(*(long *)(param_1 + 0x20),
                       *(undefined8 *)Method_Unity_Collections_NativeList<int>_get_Length__,
                       uVar15 & 0xffffffff,0);
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_04079414(*(long *)(param_1 + 0x20),uVar10,
                       *(undefined8 *)Method_Unity_Collections_NativeList<byte>_set_Item__,lVar25,0)
          ;
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_040793a8(*(long *)(param_1 + 0x20),uVar10,
                       *(undefined8 *)Method_Unity_Collections_NativeList<byte>_get_Length__,lVar20,
                       0);
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_040793a8(*(long *)(param_1 + 0x20),uVar10,
                       *(undefined8 *)Method_Unity_Collections_NativeList<int>_ResizeUninitialized__
                       ,lVar22,0);
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_040793a8(*(long *)(param_1 + 0x20),uVar10,
                       *(undefined8 *)Method_Unity_Collections_NativeList<byte>_get_Item__,lVar23,0)
          ;
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar28 = 0;
          if (local_78._4_4_ != 0) {
            iVar28 = (int)uVar15 / local_78._4_4_;
          }
          iVar2 = 0;
          if ((int)local_78 != 0) {
            iVar2 = iVar8 / (int)local_78;
          }
          FUN_04079200(*(long *)(param_1 + 0x20),uVar10,iVar28 + 1,iVar2 + 1,1,0);
          thunk_FUN_040785f4(lVar25,0);
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar27 = piVar27 + 4;
    if (uVar15 == 0) break;
LAB_01fed0bc:
    if (*(long *)(piVar27 + -2) == *(long *)puVar5) {
      puVar30 = (undefined8 *)(lVar11 + (long)*piVar27 * 0x10 + 0x138);
      goto LAB_01fed0f0;
    }
  }
LAB_01fed0d4:
  puVar30 = (undefined8 *)FUN_01ecb238(plVar17,*(long *)puVar5,0);
LAB_01fed0f0:
  (*(code *)*puVar30)(plVar17,puVar30[1]);
  return;
}


