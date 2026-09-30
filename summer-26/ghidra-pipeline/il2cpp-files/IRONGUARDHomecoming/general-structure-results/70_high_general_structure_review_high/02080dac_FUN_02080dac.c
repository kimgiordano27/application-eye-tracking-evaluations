/*
FUNCTION_NAME: FUN_02080dac
ENTRY_POINT: 02080dac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_19;telemetry_or_network_hits_21;frame_or_lifecycle_behavior
*/


void FUN_02080dac(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],int *param_5)

{
  int *piVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 local_c0;
  undefined8 uStack_b8;
  float local_b0;
  float local_ac;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_78;
  undefined8 local_68;
  
  uVar19 = param_4._4_4_;
  uVar18 = param_4._0_4_;
  uVar17 = param_3._4_4_;
  uVar16 = param_3._0_4_;
  if ((DAT_0482f706 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Splines_SplineDataDictionary<float>_GetOrCreate__);
    thunk_FUN_01efb3a4(Method_OVRTask<bool>_ContinueWith__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_ShouldReleaseResource__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_TryGetResource__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Splines_SplineDataDictionary<float>_Remove__);
                    /* try { // try from 02080e18 to 02180e1b has its CatchHandler @ 02081c64 */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureOutEvent>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Splines_SplineDataDictionary<float>_RemoveEmpty__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<Dictionary<string,_string>>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<AchievementDefinitionList>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<AchievementDefinitionList>_OnComplete__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<AchievementProgressList>__ctor__);
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
    thunk_FUN_01efb3a4(Method_UnityEngine_Splines_SplineDataDictionary<float>_TryGetValue__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<AppDownloadResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Splines_SplineDataDictionary<float>_get_Keys__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<ApplicationInviteList>__ctor__);
    DAT_0482f706 = 1;
  }
  puVar6 = 
  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_TryGetResource__
  ;
  puVar5 = Method_OVRTask<bool>_ContinueWith__;
  local_68 = 0;
  local_78 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  auVar3 = ZEXT816(0);
  local_a8 = 0;
  lVar15 = *(long *)(param_5 + 0xe);
  if (*param_5 == 0) {
    local_90 = *(undefined1 (*) [16])(param_5 + 0x12);
    param_5[0x12] = 0;
    param_5[0x13] = 0;
    param_5[0x14] = 0;
    param_5[0x15] = 0;
    *param_5 = -1;
  }
  else {
    if (*(int *)(*(long *)
                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_TryGetResource__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_023a40c4(param_5 + 8,param_5 + 0x10,
                         *(undefined8 *)
                          Method_Oculus_Platform_Request<AchievementDefinitionList>_OnComplete__);
    if ((uVar8 & 1) == 0) goto LAB_020814a0;
    if (*(int *)(*(long *)Method_Oculus_Platform_Request<AchievementUpdate>_OnComplete__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c();
    }
    local_a0 = FUN_0373b78c(0,param_5 + 0x10,1,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResource<ComputeBufferDesc,_ComputeBuffer>__ctor__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResource<ComputeBufferDesc,_ComputeBuffer>__ctor__
                        );
    }
    local_90 = FUN_03339e20(local_a0,*(undefined8 *)
                                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_UnregisterFrameAllocation__
                           );
    uVar8 = FUN_026fc87c(local_90,*(undefined8 *)
                                   Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_TryGetResource__
                        );
    auVar3 = local_a0;
    if ((uVar8 & 1) == 0) {
      *param_5 = 0;
      *(undefined1 (*) [16])(param_5 + 0x12) = local_90;
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_022991d0(param_5 + 2,local_90,param_5,
                   *(undefined8 *)
                    Method_UnityEngine_Splines_SplineDataDictionary<float>_GetOrCreate__);
      return;
    }
  }
  local_a0 = auVar3;
  FUN_026fc964(local_90,*(undefined8 *)
                         Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_ShouldReleaseResource__
              );
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar15 + 0x10) + 0x38);
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar8 = FUN_03565824(*(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc),
                       *(undefined8 *)(lVar15 + 0x18),*(undefined8 *)(lVar15 + 0x20),0);
  if ((uVar8 & 1) == 0) {
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_03565824(*(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc),
                         *(undefined8 *)(lVar15 + 0x28),*(undefined8 *)(lVar15 + 0x30),0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar12 = (undefined8 *)(*(long *)(lVar15 + 0x10) + 0x28);
      goto LAB_020810f0;
    }
    uVar14 = *(undefined8 *)(lVar15 + 0x38);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_022edea4(uVar14,*(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc),
                         *(undefined8 *)
                          Method_UnityEngine_Splines_SplineDataDictionary<float>_Remove__);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar12 = (undefined8 *)(*(long *)(lVar15 + 0x10) + 0x20);
      goto LAB_020810f0;
    }
  }
  else {
    if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar12 = (undefined8 *)(*(long *)(lVar15 + 0x10) + 0x30);
LAB_020810f0:
    uVar13 = *puVar12;
  }
  uVar14 = *(undefined8 *)Method_Oculus_Platform_Request<ApplicationInviteList>__ctor__;
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  piVar1 = param_5 + 8;
  uVar8 = FUN_023a4374(piVar1,&local_68,
                       *(undefined8 *)
                        Method_Oculus_Platform_Request<AchievementProgressList>__ctor__);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*(long *)Method_Oculus_Platform_Request<AppDownloadProgressResult>__ctor__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar14 = FUN_0373ef34(&local_68,0);
  }
  lVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureOutEvent>__ctor__
                            );
  UnityEngine_UIElements_UIR_Implementation_RenderEvents__UpdateLocalFlipsWinding(lVar9,uVar14,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar10 = FUN_04073258(lVar9,0);
  if (*(long *)(lVar15 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar14 = FUN_04073258(*(long *)(lVar15 + 0x40),0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar14,uVar14);
  }
  FUN_0407dcac(lVar10,uVar14,0);
  lVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                               Method_Oculus_Platform_Request<AppDownloadResult>__ctor__);
  FUN_035ac8e8(lVar10,0);
  *(long *)(lVar10 + 0x10) = lVar9;
  thunk_FUN_01f51358((long *)(lVar10 + 0x10),lVar9);
  FUN_020816dc(lVar10,*(undefined8 *)(param_5 + 0x10),0);
  uVar14 = FUN_04073258(lVar9,0);
  puVar4 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c();
  }
  lVar10 = FUN_023aa90c(uVar13,uVar14,
                        *(undefined8 *)
                         Method_UnityEngine_Splines_SplineDataDictionary<float>_TryGetValue__);
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar8 = System_Array__InternalArray__ICollection_Contains<BaseCompositeField_FieldDescription<Vector2Int,_object,_int>>
                    (piVar1,&local_78,
                     *(undefined8 *)
                      Method_Oculus_Platform_Request<Dictionary<string,_string>>__ctor__);
  puVar7 = Method_Oculus_Platform_Request<AchievementProgressList>_OnComplete__;
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*(long *)Method_Oculus_Platform_Request<AchievementProgressList>_OnComplete__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_0373da38(&local_78,0);
    if ((uVar8 & 1) != 0) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = FUN_04073258(lVar10,0);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0373de88(&local_78,0);
      FUN_0373de88(&local_78,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0407da88(CONCAT44(uVar17,uVar16),CONCAT44(uVar19,uVar18),DAT_00c9294c,lVar11,0);
    }
  }
  if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar14 = *(undefined8 *)(*(long *)(lVar15 + 0x10) + 0x38);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar8 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (uVar13,uVar14,0);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_023a3f6c(piVar1,&local_a8,
                         *(undefined8 *)
                          Method_Oculus_Platform_Request<AchievementDefinitionList>__ctor__);
    puVar6 = Method_Oculus_Platform_Request<AchievementUpdate>__ctor__;
    if ((uVar8 & 1) != 0) {
      if (*(int *)(*(long *)Method_Oculus_Platform_Request<AchievementUpdate>__ctor__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar8 = FUN_0373e354(&local_a8,0);
      if ((uVar8 & 1) != 0) {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar11 = FUN_04073258(lVar10,0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0373e7a4(&local_c0,&local_a8,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0407c958(0,0,(local_ac + local_ac) * -0.5,lVar11,0);
        lVar10 = FUN_04073258(lVar10,0);
        FUN_0373e7a4(&local_c0,&local_a8,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0407da88(uStack_b8._4_4_ + uStack_b8._4_4_,local_b0 + local_b0,local_ac + local_ac,
                     lVar10,0);
      }
    }
  }
  if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + 0x48);
  local_c0 = 0;
  uStack_b8 = 0;
  FUN_028943b0(&local_c0,lVar9,*(undefined8 *)(param_5 + 0x10),
               *(undefined8 *)Method_UnityEngine_Splines_SplineDataDictionary<float>_get_Keys__);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = *(long *)(lVar15 + 0x10);
  lVar10 = *(long *)Method_UnityEngine_Splines_SplineDataDictionary<float>_RemoveEmpty__;
  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar2 = *(uint *)(lVar15 + 0x18);
  if (uVar2 < *(uint *)(lVar9 + 0x18)) {
    lVar9 = lVar9 + (long)(int)uVar2 * 0x10;
    *(uint *)(lVar15 + 0x18) = uVar2 + 1;
    puVar12 = (undefined8 *)(lVar9 + 0x20);
    *puVar12 = local_c0;
    *(undefined8 *)(lVar9 + 0x28) = uStack_b8;
    thunk_FUN_01f51358(puVar12,0);
  }
  else {
    FUN_0307d710(lVar15,local_c0,uStack_b8,
                 *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
  }
LAB_020814a0:
  *param_5 = -2;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_034a8918(param_5 + 2,0);
  return;
}


