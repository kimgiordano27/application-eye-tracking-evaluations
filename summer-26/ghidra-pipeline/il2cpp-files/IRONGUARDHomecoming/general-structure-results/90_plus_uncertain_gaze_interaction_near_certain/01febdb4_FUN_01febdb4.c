/*
FUNCTION_NAME: FUN_01febdb4
ENTRY_POINT: 01febdb4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 190
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


void FUN_01febdb4(long param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  float fVar25;
  undefined4 local_7c;
  undefined8 local_78;
  
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__;
  if ((DAT_0482ee9f & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_GetSubArray__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_get_IsCreated__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<ShaderInput_LightData>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<ShaderInput_LightData>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<TubeRenderer_VertexLayout>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<WordStorage_Entry>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<WordStorage_Entry>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_NativeArray<DrawingData_ProcessedBuilderData_MeshBuffers>__ctor__
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
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeList<byte>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeList<byte>_ElementAt__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeList<byte>_Resize__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeList<byte>_get_Capacity__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeList<byte>_get_IsCreated__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeList<byte>_get_Item__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeList<byte>_get_Length__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeList<byte>_set_Capacity__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeList<byte>_set_Item__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeList<int>_ResizeUninitialized__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeList<int>_get_Capacity__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeList<int>_get_Length__);
    DAT_0482ee9f = 1;
  }
  local_78 = 0;
  local_7c = 0;
  lVar9 = FUN_022c5c50(param_1,*(undefined8 *)puVar4);
  if ((lVar9 != 0) &&
     (lVar10 = FUN_04050de0(lVar9,0),
     puVar4 = 
     Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_mousePosition__,
     lVar10 != 0)) {
    uVar11 = FUN_04051998(lVar10,0);
    uVar5 = FUN_04068278(uVar11,0);
    lVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
    FUN_04051010(lVar10,0);
    fVar3 = DAT_00c92764;
    lVar20 = *(long *)(param_1 + 0x30);
    if (lVar20 != 0) {
      uVar1 = *(uint *)(lVar20 + 0x18);
      if (0 < (int)uVar1) {
        uVar22 = 0;
        do {
          puVar4 = Method_Unity_Collections_NativeList<byte>__ctor__;
          if (uVar1 <= uVar22) {
LAB_01fec664:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          lVar24 = *(long *)(lVar20 + (long)(int)uVar22 * 8 + 0x20);
          if (lVar24 == 0) goto LAB_01fec660;
          fVar25 = (float)FUN_04030918(lVar24,0);
          iVar6 = -0x80000000;
          if (fVar25 / fVar3 != INFINITY) {
            iVar6 = (int)(fVar25 / fVar3);
          }
          iVar6 = FUN_04068278(iVar6,0);
          fVar25 = (float)FUN_04030918(lVar24,0);
          lVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_Unity_Collections_NativeArray<DrawingData_ProcessedBuilderData_MeshBuffers>__ctor__
                                     );
          FUN_0319e9dc(lVar12,*(undefined8 *)
                               Method_Unity_Collections_NativeArray<WordStorage_Entry>__ctor__);
          lVar13 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
          FUN_0405e3b0(lVar13,uVar5,iVar6,0,2,0);
          uVar14 = FUN_040766fc(param_1,0);
          uVar15 = FUN_040766fc(lVar24,0);
          uVar14 = FUN_0340f2f0(*(undefined8 *)
                                 Method_Unity_Collections_NativeList<int>_get_Capacity__,uVar14,
                                uVar15,0);
          if (lVar13 == 0) goto LAB_01fec660;
          FUN_040767ac(lVar13,uVar14,0);
          lVar16 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
          FUN_0405e3b0(lVar16,uVar5,iVar6,0,2,0);
          uVar14 = FUN_040766fc(param_1,0);
          uVar15 = FUN_040766fc(lVar24,0);
          uVar14 = FUN_0340f2f0(*(undefined8 *)
                                 Method_Unity_Collections_NativeList<byte>_get_IsCreated__,uVar14,
                                uVar15,0);
          if (lVar16 == 0) goto LAB_01fec660;
          FUN_040767ac(lVar16,uVar14,0);
          lVar17 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
          FUN_0405e3b0(lVar17,uVar5,iVar6,0,2,0);
          uVar14 = FUN_040766fc(param_1,0);
          uVar15 = FUN_040766fc(lVar24,0);
          uVar14 = FUN_0340f2f0(*(undefined8 *)
                                 Method_Unity_Collections_NativeList<byte>_get_Capacity__,uVar14,
                                uVar15,0);
          if (lVar17 == 0) goto LAB_01fec660;
          FUN_040767ac(lVar17,uVar14,0);
          plVar18 = (long *)FUN_01f08890(*(undefined8 *)
                                          Method_Unity_Collections_NativeArray<DrawingData_ProcessedBuilderData_MeshBuffers>_get_IsCreated__
                                         ,3);
          if (plVar18 == (long *)0x0) goto LAB_01fec660;
          lVar19 = thunk_FUN_01f116d0(lVar13,*(undefined8 *)(*plVar18 + 0x40));
          if (lVar19 == 0) {
LAB_01fec668:
            uVar14 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar14,0);
          }
          if ((int)plVar18[3] == 0) goto LAB_01fec664;
          plVar18[4] = lVar13;
          thunk_FUN_01f51358(plVar18 + 4,lVar13);
          lVar19 = thunk_FUN_01f116d0(lVar16,*(undefined8 *)(*plVar18 + 0x40));
          if (lVar19 == 0) goto LAB_01fec668;
          if (*(uint *)(plVar18 + 3) < 2) goto LAB_01fec664;
          plVar18[5] = lVar16;
          thunk_FUN_01f51358(plVar18 + 5,lVar16);
          lVar19 = thunk_FUN_01f116d0(lVar17,*(undefined8 *)(*plVar18 + 0x40));
          if (lVar19 == 0) goto LAB_01fec668;
          if (*(uint *)(plVar18 + 3) < 3) goto LAB_01fec664;
          plVar18[6] = lVar17;
          thunk_FUN_01f51358(plVar18 + 6,lVar17);
          lVar19 = plVar18[3];
          if (0 < (int)lVar19) {
            lVar21 = 0;
            do {
              if ((uint)lVar19 <= (uint)lVar21) goto LAB_01fec664;
              lVar19 = plVar18[lVar21 + 4];
              if (lVar19 == 0) goto LAB_01fec660;
              FUN_0405ccd4(lVar19,1,0);
              FUN_0405d074(lVar19,0);
              FUN_0405ce24(lVar19,0);
              FUN_04049814(0,0,0,0,1,1,0);
              lVar19 = plVar18[3];
              lVar21 = lVar21 + 1;
            } while ((int)lVar21 < (int)lVar19);
          }
          if (iVar6 < 1) {
            if (lVar12 == 0) goto LAB_01fec660;
          }
          else {
            iVar23 = 0;
            do {
              lVar19 = thunk_FUN_01f117cc(*(undefined8 *)
                                           Method_Unity_Collections_NativeList<byte>_ElementAt__);
              FUN_035ac8e8(lVar19,0);
              uVar14 = FUN_040703d4(param_1,0);
              FUN_040307ec((fVar25 / (float)iVar6) * (float)iVar23,lVar24,uVar14,0);
              FUN_04050eb4(lVar9,lVar10,0);
              if ((lVar10 == 0) || (uVar14 = FUN_040524d0(lVar10,0), lVar19 == 0))
              goto LAB_01fec660;
              *(undefined8 *)(lVar19 + 0x10) = uVar14;
              thunk_FUN_01f51358();
              uVar14 = FUN_0405257c(lVar10,0);
              *(undefined8 *)(lVar19 + 0x18) = uVar14;
              thunk_FUN_01f51358();
              uVar14 = FUN_04052628(lVar10,0);
              *(undefined8 *)(lVar19 + 0x20) = uVar14;
              thunk_FUN_01f51358();
              uVar14 = FUN_03971350(0,uVar11 & 0xffffffff,0);
              uVar15 = thunk_FUN_01f117cc(*(undefined8 *)
                                           Method_Unity_Collections_NativeArray<ShaderInput_LightData>__ctor__
                                         );
              FUN_02e68490(uVar15,lVar19,
                           *(undefined8 *)Method_Unity_Collections_NativeList<byte>_Dispose__,0);
              uVar14 = FUN_022fe50c(uVar14,uVar15,
                                    *(undefined8 *)
                                     Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_get_IsCreated__
                                   );
              if (lVar12 == 0) goto LAB_01fec660;
              FUN_0319f564(lVar12,uVar14,
                           *(undefined8 *)
                            Method_Unity_Collections_NativeArray<ShaderInput_LightData>_Dispose__);
              iVar23 = iVar23 + 1;
            } while (iVar6 != iVar23);
          }
          uVar8 = *(undefined4 *)(lVar12 + 0x18);
          uVar14 = *(undefined8 *)Method_Unity_Collections_NativeList<byte>_Resize__;
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c();
          }
          uVar14 = FUN_03579868(uVar14,0);
          if (*(int *)(*(long *)
                        Method_Unity_Collections_NativeArray<DrawingData_ProcessedBuilderData_MeshBuffers>_Dispose__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)
                                Method_Unity_Collections_NativeArray<DrawingData_ProcessedBuilderData_MeshBuffers>_Dispose__
                              );
          }
          uVar7 = thunk_FUN_01f40210(uVar14,0);
          lVar24 = thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_GetSubArray__
                                     );
          FUN_040786f0(lVar24,uVar8,uVar7,0);
          uVar14 = FUN_031a10e4(lVar12,*(undefined8 *)
                                        Method_Unity_Collections_NativeArray<TubeRenderer_VertexLayout>__ctor__
                               );
          if (lVar24 == 0) goto LAB_01fec660;
          FUN_04078988(lVar24,uVar14,0);
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_01fec660;
          uVar8 = FUN_04078ebc(*(long *)(param_1 + 0x20),
                               *(undefined8 *)
                                Method_Unity_Collections_NativeList<byte>_set_Capacity__,0);
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_01fec660;
          FUN_04079194(*(long *)(param_1 + 0x20),uVar8,(long)&local_78 + 4,&local_78,&local_7c,0);
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_01fec660;
          FUN_040792f4(*(long *)(param_1 + 0x20),
                       *(undefined8 *)Method_Unity_Collections_NativeList<int>_get_Length__,
                       uVar11 & 0xffffffff,0);
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_01fec660;
          FUN_04079414(*(long *)(param_1 + 0x20),uVar8,
                       *(undefined8 *)Method_Unity_Collections_NativeList<byte>_set_Item__,lVar24,0)
          ;
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_01fec660;
          FUN_040793a8(*(long *)(param_1 + 0x20),uVar8,
                       *(undefined8 *)Method_Unity_Collections_NativeList<byte>_get_Length__,lVar13,
                       0);
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_01fec660;
          FUN_040793a8(*(long *)(param_1 + 0x20),uVar8,
                       *(undefined8 *)Method_Unity_Collections_NativeList<int>_ResizeUninitialized__
                       ,lVar16,0);
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_01fec660;
          FUN_040793a8(*(long *)(param_1 + 0x20),uVar8,
                       *(undefined8 *)Method_Unity_Collections_NativeList<byte>_get_Item__,lVar17,0)
          ;
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_01fec660;
          iVar23 = 0;
          if (local_78._4_4_ != 0) {
            iVar23 = (int)uVar11 / local_78._4_4_;
          }
          iVar2 = 0;
          if ((int)local_78 != 0) {
            iVar2 = iVar6 / (int)local_78;
          }
          FUN_04079200(*(long *)(param_1 + 0x20),uVar8,iVar23 + 1,iVar2 + 1,1,0);
          thunk_FUN_040785f4(lVar24,0);
          uVar22 = uVar22 + 1;
          uVar1 = *(uint *)(lVar20 + 0x18);
        } while ((int)uVar22 < (int)uVar1);
      }
      return;
    }
  }
LAB_01fec660:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


