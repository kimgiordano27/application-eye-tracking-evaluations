/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<BaseCompositeField.FieldDescription<Vector3,-object,-float>>
ENTRY_POINT: 020d6b34
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_5;telemetry_or_network_hits_11;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array__InternalArray__get_Item<BaseCompositeField_FieldDescription<Vector3,_object,_float>>
               (void)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int *unaff_x19;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  puVar4 = Method_UnityEngine_Rendering_Universal_LightCookieManager_WorkSlice<Vector4>_get_Item__;
  puVar3 = 
  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_TryGetResource__
  ;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  auVar2 = ZEXT816(0);
  if (*unaff_x19 == 0) {
    _in_stack_00000020 = *(undefined1 (*) [16])(unaff_x19 + 0x12);
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    unaff_x19[0x14] = 0;
    unaff_x19[0x15] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (*(int *)(*(long *)
                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_TryGetResource__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_023a421c(unaff_x19 + 8,&stack0x00000030,
                         *(undefined8 *)
                          Method_UnityEngine_Splines_SplineDataDictionary<float>__ctor__);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar6 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_UnregisterFrameAllocation__
                                );
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
    uVar5 = FUN_023a40c4(unaff_x19 + 8,unaff_x19 + 0x10,
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
    _uStack0000000000000010 = FUN_0373b78c(0,unaff_x19 + 0x10,1,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResource<ComputeBufferDesc,_ComputeBuffer>__ctor__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResource<ComputeBufferDesc,_ComputeBuffer>__ctor__
                        );
    }
    _in_stack_00000020 =
         FUN_03339e20(&stack0x00000010,
                      *(undefined8 *)
                       Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_UnregisterFrameAllocation__
                     );
    uVar5 = FUN_026fc87c(&stack0x00000020,
                         *(undefined8 *)
                          Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_TryGetResource__
                        );
    auVar2 = _uStack0000000000000010;
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000020;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_02128588(unaff_x19 + 2,&stack0x00000020);
      return;
    }
  }
  _uStack0000000000000010 = auVar2;
  FUN_026fc964(&stack0x00000020,
               *(undefined8 *)
                Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_ShouldReleaseResource__
              );
  uVar6 = *(undefined8 *)Method_Oculus_Platform_Request<ApplicationInviteList>__ctor__;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  piVar1 = unaff_x19 + 8;
  uVar5 = FUN_023a4374(piVar1,&stack0x00000058,
                       *(undefined8 *)
                        Method_Oculus_Platform_Request<AchievementProgressList>__ctor__);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)Method_Oculus_Platform_Request<AppDownloadProgressResult>__ctor__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = FUN_0373ef34(&stack0x00000058,0);
  }
  lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureOutEvent>__ctor__
                            );
  UnityEngine_UIElements_UIR_Implementation_RenderEvents__UpdateLocalFlipsWinding(lVar7,uVar6,0);
  uVar6 = *(undefined8 *)(unaff_x19 + 0xe);
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
    if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = FUN_04073258(*(long *)(unaff_x19 + 0xe),0);
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
  FUN_020816dc(lVar8,*(undefined8 *)(unaff_x19 + 0x10),0,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = System_Array__InternalArray__ICollection_Contains<BaseCompositeField_FieldDescription<Vector2Int,_object,_int>>
                    (piVar1,&stack0x00000048,
                     *(undefined8 *)
                      Method_Oculus_Platform_Request<Dictionary<string,_string>>__ctor__);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)Method_Oculus_Platform_Request<AchievementProgressList>_OnComplete__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_0373da38(&stack0x00000048,0);
    if ((uVar5 & 1) != 0) {
      FUN_020826c0(lVar8,in_stack_00000048,0);
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_023a3f6c(piVar1,&stack0x00000040,
                       *(undefined8 *)
                        Method_Oculus_Platform_Request<AchievementDefinitionList>__ctor__);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)Method_Oculus_Platform_Request<AchievementUpdate>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_0373e354(&stack0x00000040,0);
    if ((uVar5 & 1) != 0) {
      FUN_02082984(lVar8,in_stack_00000040,0);
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_023a44cc(piVar1,&stack0x00000038,
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_Universal_LightCookieManager_WorkSlice<LightCookieManager_LightCookieMapping>_get_Item__
                      );
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)Method_System_Collections_Generic_Stack<IEnumerator<int>>_Pop__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = Shapes_Draw__RegularPolygonBorder(&stack0x00000038,0);
    if ((uVar5 & 1) != 0) {
      FUN_02082cc8(lVar8,in_stack_00000038,0);
    }
  }
LAB_020d6f58:
  *unaff_x19 = -2;
  puVar3 = Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<AnimationCurve>__ctor__;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_026f6f9c(unaff_x19 + 2,lVar7,*(undefined8 *)puVar3);
  return;
}


