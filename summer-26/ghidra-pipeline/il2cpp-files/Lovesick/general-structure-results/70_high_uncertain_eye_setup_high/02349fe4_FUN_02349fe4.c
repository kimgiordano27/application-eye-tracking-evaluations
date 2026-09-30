/*
FUNCTION_NAME: FUN_02349fe4
ENTRY_POINT: 02349fe4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long FUN_02349fe4(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined4 local_68;
  int iStack_64;
  undefined *puVar9;
  
  puVar9 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03781d1a & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
    thunk_FUN_00d48444(PTR_DAT_033f1c70);
    thunk_FUN_00d48444(StringLiteral_4236);
    thunk_FUN_00d48444(Method_UnityEngine_SceneManagement_Scene_GetRootGameObjects__);
    thunk_FUN_00d48444(Method_OVRTask<__Il2CppFullySharedGenericType>_SetException__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<List<WingedEdge>>__ctor__);
    thunk_FUN_00d48444(System_Runtime_Remoting_Messaging_IInternalMessage_TypeInfo);
    thunk_FUN_00d48444(Method_OVRTask_FromGuid<OVRSpatialAnchor_OperationResult>__);
    thunk_FUN_00d48444(System_Collections_Generic_HashSet<IClippable>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ef670);
    thunk_FUN_00d48444(StringLiteral_11796);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<UsageHint>_get_Current__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__
                      );
    thunk_FUN_00d48444(Oculus_Interaction_TouchHandGrabInteractor_FingerStatus_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Linq_Enumerable_ToDictionary<STMTextureData,_string,_STMTextureData>__
                      );
    DAT_03781d1a = 1;
  }
  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar2 = FUN_0268b4e0(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    if (param_2 == 0) {
      thunk_FUN_00d48444(PTR_DAT_033f37c8);
      uVar13 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      puVar9 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Module__;
    }
    else if (param_3 == 0) {
      thunk_FUN_00d48444(PTR_DAT_033f37c8);
      uVar13 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      puVar9 = StringLiteral_12873;
    }
    else if (param_4 == 0) {
      thunk_FUN_00d48444(PTR_DAT_033f37c8);
      uVar13 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      puVar9 = StringLiteral_12477;
    }
    else {
      if (param_5 != 0) {
        if (param_1 != 0) {
          uVar13 = *(undefined8 *)(param_1 + 0x50);
          lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_System_Collections_Generic_List_Enumerator<UsageHint>_get_Current__
                                    );
          puVar9 = StringLiteral_11796;
          if (lVar3 != 0) {
            FUN_01320f6c(lVar3,uVar13,
                         *(undefined8 *)System_Collections_Generic_HashSet<IClippable>_TypeInfo);
            uVar13 = *(undefined8 *)(param_1 + 0x80);
            lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar9);
            puVar9 = 
            Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__
            ;
            if (lVar4 != 0) {
              FUN_01320f6c(lVar4,uVar13,
                           *(undefined8 *)
                            Method_OVRTask_FromGuid<OVRSpatialAnchor_OperationResult>__);
              uVar13 = *(undefined8 *)(param_1 + 0x58);
              lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar9);
              puVar9 = Oculus_Interaction_TouchHandGrabInteractor_FingerStatus_TypeInfo;
              if (lVar5 != 0) {
                FUN_01320f6c(lVar5,uVar13,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<List<WingedEdge>>__ctor__);
                uVar13 = *(undefined8 *)(param_1 + 0x20);
                lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar9);
                if (lVar6 != 0) {
                  FUN_01320f6c(lVar6,uVar13,
                               *(undefined8 *)
                                System_Runtime_Remoting_Messaging_IInternalMessage_TypeInfo);
                  lVar7 = FUN_0230fea8(param_1,0);
                  iVar1 = FUN_0230bcf4(param_1,0);
                  puVar9 = Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__;
                  if (0 < *(int *)(param_5 + 0x18)) {
                    uVar10 = 0;
                    do {
                      if (*(uint *)(param_2 + 0x18) <= uVar10) {
LAB_0234a4c4:
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      lVar15 = (long)(int)uVar10;
                      plVar14 = (long *)(param_2 + lVar15 * 8 + 0x20);
                      FUN_01322050(lVar3,*plVar14,*(undefined8 *)PTR_DAT_033f1c70);
                      if (((*(uint *)(param_3 + 0x18) <= uVar10) ||
                          (FUN_01322050(lVar4,*(undefined8 *)(param_3 + lVar15 * 8 + 0x20),
                                        *(undefined8 *)
                                         Method_UnityEngine_SceneManagement_Scene_GetRootGameObjects__
                                       ), *(uint *)(param_4 + 0x18) <= uVar10)) ||
                         (FUN_01322050(lVar5,*(undefined8 *)(param_4 + lVar15 * 8 + 0x20),
                                       *(undefined8 *)StringLiteral_4236),
                         *(uint *)(param_5 + 0x18) <= uVar10)) goto LAB_0234a4c4;
                      plVar16 = (long *)(param_5 + lVar15 * 8 + 0x20);
                      if (*plVar16 == 0) goto LAB_0234a4c8;
                      FUN_022fa150(*plVar16,0);
                      if (*(uint *)(param_5 + 0x18) <= uVar10) goto LAB_0234a4c4;
                      if (*plVar16 == 0) goto LAB_0234a4c8;
                      FUN_022fa0bc(*plVar16,iVar1,0);
                      if (*(uint *)(param_5 + 0x18) <= uVar10) goto LAB_0234a4c4;
                      FUN_00c9e4d8(lVar6,*plVar16,
                                   *(undefined8 *)
                                    Method_OVRTask<__Il2CppFullySharedGenericType>_SetException__);
                      if (param_6 == 0) goto LAB_0234a4c8;
                      if (*(uint *)(param_2 + 0x18) <= uVar10) goto LAB_0234a4c4;
                      lVar11 = *plVar14;
                      if (lVar11 == 0) goto LAB_0234a4c8;
                      if (*(uint *)(param_6 + 0x18) <= uVar10) goto LAB_0234a4c4;
                      lVar12 = *(long *)(param_6 + lVar15 * 8 + 0x20);
                      if (lVar12 == 0) goto LAB_0234a4c8;
                      if (*(int *)(lVar11 + 0x18) != *(int *)(lVar12 + 0x18)) {
                        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        FUN_026610e4(*(undefined8 *)
                                      Method_System_Linq_Enumerable_ToDictionary<STMTextureData,_string,_STMTextureData>__
                                     ,0);
                        return 0;
                      }
                      if (*(uint *)(param_6 + 0x18) <= uVar10) goto LAB_0234a4c4;
                      uVar2 = 0;
                      while( true ) {
                        lVar11 = *(long *)(param_6 + lVar15 * 8 + 0x20);
                        if (lVar11 == 0) goto LAB_0234a4c8;
                        if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar2) break;
                        if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_0234a4c4;
                        if (lVar7 == 0) goto LAB_0234a4c8;
                        local_68 = *(undefined4 *)(lVar11 + uVar2 * 4 + 0x20);
                        iStack_64 = iVar1 + (int)uVar2;
                        FUN_0129a054(lVar7,&iStack_64,&local_68,*(undefined8 *)puVar9);
                        uVar2 = uVar2 + 1;
                        if (*(uint *)(param_6 + 0x18) <= uVar10) goto LAB_0234a4c4;
                      }
                      iVar1 = *(int *)(lVar3 + 0x18);
                      uVar10 = uVar10 + 1;
                    } while ((int)uVar10 < *(int *)(param_5 + 0x18));
                  }
                  UnityEngine_Rendering_Universal_DBufferRenderPass__get_cameraDepthAttachmentIndentifier
                            (param_1,lVar3,0);
                  FUN_02310f84(param_1,lVar4,0);
                  FUN_02311478(param_1,lVar5,0);
                  FUN_0230f6a8(param_1,lVar6,0);
                  FUN_0230ff4c(param_1,lVar7,0);
                  return param_5;
                }
              }
            }
          }
        }
LAB_0234a4c8:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      thunk_FUN_00d48444(PTR_DAT_033f37c8);
      uVar13 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      puVar9 = MetaXRAcousticNativeInterface_UnityNativeInterface_TypeInfo;
    }
  }
  else {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar13 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar9 = Method_System_Collections_Generic_List<NotePrefabMapping_PrefabPoolEntry>_get_Count__;
  }
  uVar8 = thunk_FUN_00d48444(puVar9);
  FUN_016ec5b8(uVar13,uVar8,0);
  uVar8 = thunk_FUN_00d48444(OVRPlugin_OVRP_1_125_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar13,uVar8);
}


