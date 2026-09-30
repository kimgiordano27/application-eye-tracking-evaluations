/*
FUNCTION_NAME: FUN_020d69cc
ENTRY_POINT: 020d69cc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_020d69cc(int *param_1)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  
  if ((DAT_0482fa11 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_LightCookieManager_WorkSlice<LightCookieManager_LightCookieMapping>_get_length__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<AnimationCurve>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_LightCookieManager_WorkSlice<Vector4>_get_Item__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_ShouldReleaseResource__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_TryGetResource__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureOutEvent>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_UnregisterFrameAllocation__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<Dictionary<string,_string>>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<AchievementDefinitionList>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<AchievementDefinitionList>_OnComplete__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Splines_SplineDataDictionary<float>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<AchievementProgressList>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_LightCookieManager_WorkSlice<LightCookieManager_LightCookieMapping>_get_Item__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_TryGetResource__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<AchievementProgressList>_OnComplete__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<AchievementUpdate>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<AchievementUpdate>_OnComplete__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<AppDownloadProgressResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_UnregisterFrameAllocation__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResource<ComputeBufferDesc,_ComputeBuffer>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<IEnumerator<int>>_Pop__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<AppDownloadResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResource<ComputeBufferDesc,_ComputeBuffer>_ReleaseGraphicsResource__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<ApplicationInviteList>__ctor__);
    DAT_0482fa11 = 1;
  }
  puVar4 = Method_UnityEngine_Rendering_Universal_LightCookieManager_WorkSlice<Vector4>_get_Item__;
  puVar3 = 
  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_TryGetResource__
  ;
  local_38 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  auVar2 = ZEXT816(0);
  if (*param_1 == 0) {
    local_70 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
  }
  else {
    if (*(int *)(*(long *)
                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_TryGetResource__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_023a421c(param_1 + 8,&local_60,
                         *(undefined8 *)
                          Method_UnityEngine_Splines_SplineDataDictionary<float>__ctor__);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      local_90 = *(undefined8 *)(param_1 + 10);
      uStack_88 = *(undefined8 *)(param_1 + 0xc);
      uVar6 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_UnregisterFrameAllocation__
                                 ,&local_90);
      uVar6 = FUN_03406290(*(undefined8 *)
                            Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResource<ComputeBufferDesc,_ComputeBuffer>_ReleaseGraphicsResource__
                           ,uVar6,0);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureOutEvent>__ctor__
                                );
      UnityEngine_UIElements_UIR_Implementation_RenderEvents__UpdateLocalFlipsWinding(lVar7,uVar6,0)
      ;
      goto LAB_020d6f58;
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_023a40c4(param_1 + 8,param_1 + 0x10,
                         *(undefined8 *)
                          Method_Oculus_Platform_Request<AchievementDefinitionList>_OnComplete__);
    if ((uVar5 & 1) == 0) {
      lVar7 = 0;
      goto LAB_020d6f58;
    }
    if (*(int *)(*(long *)Method_Oculus_Platform_Request<AchievementUpdate>_OnComplete__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c();
    }
    local_80 = FUN_0373b78c(0,param_1 + 0x10,1,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResource<ComputeBufferDesc,_ComputeBuffer>__ctor__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResource<ComputeBufferDesc,_ComputeBuffer>__ctor__
                        );
    }
    local_70 = FUN_03339e20(local_80,*(undefined8 *)
                                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_UnregisterFrameAllocation__
                           );
    uVar5 = FUN_026fc87c(local_70,*(undefined8 *)
                                   Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_TryGetResource__
                        );
    auVar2 = local_80;
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x12) = local_70;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_02128588(param_1 + 2,local_70,param_1,
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_Universal_LightCookieManager_WorkSlice<LightCookieManager_LightCookieMapping>_get_length__
                  );
      return;
    }
  }
  local_80 = auVar2;
  FUN_026fc964(local_70,*(undefined8 *)
                         Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_ShouldReleaseResource__
              );
  uVar6 = *(undefined8 *)Method_Oculus_Platform_Request<ApplicationInviteList>__ctor__;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  piVar1 = param_1 + 8;
  uVar5 = FUN_023a4374(piVar1,&local_38,
                       *(undefined8 *)
                        Method_Oculus_Platform_Request<AchievementProgressList>__ctor__);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)Method_Oculus_Platform_Request<AppDownloadProgressResult>__ctor__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = FUN_0373ef34(&local_38,0);
  }
  lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureOutEvent>__ctor__
                            );
  UnityEngine_UIElements_UIR_Implementation_RenderEvents__UpdateLocalFlipsWinding(lVar7,uVar6,0);
  uVar6 = *(undefined8 *)(param_1 + 0xe);
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_04073094(uVar6,0,0);
  if ((uVar5 & 1) != 0) {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = FUN_04073258(lVar7,0);
    if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = FUN_04073258(*(long *)(param_1 + 0xe),0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar6,uVar6);
    }
    FUN_0407dcac(lVar8,uVar6,0);
  }
  lVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_Oculus_Platform_Request<AppDownloadResult>__ctor__);
  FUN_020816ac(lVar8,lVar7,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_020816dc(lVar8,*(undefined8 *)(param_1 + 0x10),0,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = System_Array__InternalArray__ICollection_Contains<BaseCompositeField_FieldDescription<Vector2Int,_object,_int>>
                    (piVar1,&local_48,
                     *(undefined8 *)
                      Method_Oculus_Platform_Request<Dictionary<string,_string>>__ctor__);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)Method_Oculus_Platform_Request<AchievementProgressList>_OnComplete__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_0373da38(&local_48,0);
    if ((uVar5 & 1) != 0) {
      FUN_020826c0(lVar8,local_48,0);
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_023a3f6c(piVar1,&local_50,
                       *(undefined8 *)
                        Method_Oculus_Platform_Request<AchievementDefinitionList>__ctor__);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)Method_Oculus_Platform_Request<AchievementUpdate>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_0373e354(&local_50,0);
    if ((uVar5 & 1) != 0) {
      FUN_02082984(lVar8,local_50,0);
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_023a44cc(piVar1,&local_58,
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_Universal_LightCookieManager_WorkSlice<LightCookieManager_LightCookieMapping>_get_Item__
                      );
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)Method_System_Collections_Generic_Stack<IEnumerator<int>>_Pop__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = Shapes_Draw__RegularPolygonBorder(&local_58,0);
    if ((uVar5 & 1) != 0) {
      FUN_02082cc8(lVar8,local_58,0);
    }
  }
LAB_020d6f58:
  *param_1 = -2;
  puVar3 = Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<AnimationCurve>__ctor__;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_026f6f9c(param_1 + 2,lVar7,*(undefined8 *)puVar3);
  return;
}


