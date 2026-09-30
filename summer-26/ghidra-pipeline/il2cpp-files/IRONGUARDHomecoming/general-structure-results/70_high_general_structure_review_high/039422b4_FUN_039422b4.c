/*
FUNCTION_NAME: FUN_039422b4
ENTRY_POINT: 039422b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_039422b4(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  
  if ((DAT_04838348 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Samples_SimplePlatformSample_DataEntry_achievementProgressCallback__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentInChildren__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseUpEvent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_3855);
    thunk_FUN_01efb3a4(StringLiteral_2862);
    thunk_FUN_01efb3a4(StringLiteral_3199);
    thunk_FUN_01efb3a4(StringLiteral_3201);
    thunk_FUN_01efb3a4(Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__);
    DAT_04838348 = 1;
  }
  puVar3 = StringLiteral_2862;
  if (5 < param_2) {
    return 0;
  }
  if (*(int *)(*(long *)StringLiteral_2862 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_039393b0(param_1);
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((uVar5 & 1) == 0) {
    if (param_1 == (long *)0x0) goto LAB_039428a0;
    uVar5 = FUN_0358471c(param_1,0);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    goto LAB_03942418;
  }
  uVar11 = *(undefined8 *)
            Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar11 = FUN_03579868(uVar11,0);
  uVar5 = FUN_03582560(param_1,uVar11,0);
  if ((uVar5 & 1) != 0) {
    return *(undefined8 *)Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
  }
  if (param_1 == (long *)0x0) goto LAB_039428a0;
  uVar5 = (**(code **)(*param_1 + 0x5c8))(param_1,*(undefined8 *)(*param_1 + 0x5d0));
  puVar2 = Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar6 = FUN_0359e654(param_1,0);
    if (lVar6 != 0) {
      iVar4 = FUN_03582fa8(lVar6,0);
      if (iVar4 < 1) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = FUN_0359e8ac(param_1,0,0);
        return uVar11;
      }
      uVar11 = FUN_03583008(lVar6,0,0);
      return uVar11;
    }
    goto LAB_039428a0;
  }
  uVar5 = FUN_035849ac(param_1,0);
  if ((uVar5 & 1) != 0) goto LAB_03942418;
  uVar5 = FUN_035841e4(param_1,0);
  if ((uVar5 & 1) != 0) {
    uVar11 = (**(code **)(*param_1 + 0x438))(param_1,*(undefined8 *)(*param_1 + 0x440));
    uVar11 = Oculus_Interaction_Surfaces_PlaneSurface__set_DoubleSided(uVar11,0,0);
    return uVar11;
  }
  uVar11 = *(undefined8 *)
            Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentInChildren__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar11 = FUN_03579868(uVar11,0);
  if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
  }
  uVar5 = FUN_0393bfe4(param_1,uVar11);
  if ((uVar5 & 1) != 0) {
LAB_039425d8:
    uVar11 = FUN_03594a14(param_1,0);
    return uVar11;
  }
  uVar11 = *(undefined8 *)StringLiteral_3855;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar7 = (long *)FUN_03579868(uVar11,0);
  if (plVar7 == (long *)0x0) goto LAB_039428a0;
  uVar5 = (**(code **)(*plVar7 + 0x2a8))(plVar7,param_1,*(undefined8 *)(*plVar7 + 0x2b0));
  if ((uVar5 & 1) != 0) goto LAB_039425d8;
  uVar11 = *(undefined8 *)
            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseUpEvent>__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar7 = (long *)FUN_03579868(uVar11,0);
  if (plVar7 == (long *)0x0) goto LAB_039428a0;
  uVar5 = (**(code **)(*plVar7 + 0x2a8))(plVar7,param_1,*(undefined8 *)(*plVar7 + 0x2b0));
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  plVar7 = (long *)(**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
  if (((plVar7 == (long *)0x0) ||
      (lVar6 = (**(code **)(*plVar7 + 0x268))(plVar7,*(undefined8 *)(*plVar7 + 0x270)), lVar6 == 0))
     || (*(long *)(lVar6 + 0x10) == 0)) goto LAB_039428a0;
  uVar5 = FUN_0340e66c(*(long *)(lVar6 + 0x10),*(undefined8 *)StringLiteral_3201,0);
  if ((uVar5 & 1) == 0) {
    plVar7 = (long *)(**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
    if (((plVar7 == (long *)0x0) ||
        (lVar6 = (**(code **)(*plVar7 + 0x268))(plVar7,*(undefined8 *)(*plVar7 + 0x270)), lVar6 == 0
        )) || (*(long *)(lVar6 + 0x10) == 0)) goto LAB_039428a0;
    uVar5 = FUN_0340e66c(*(long *)(lVar6 + 0x10),*(undefined8 *)StringLiteral_3199,0);
    if ((uVar5 & 1) != 0)
    goto System_Security_Cryptography_X509Certificates_X509KeyUsageExtension__GetValidFlags;
  }
  else {
System_Security_Cryptography_X509Certificates_X509KeyUsageExtension__GetValidFlags:
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar6 = *(long *)puVar1;
    }
    uVar11 = FUN_03584a50(param_1,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),0);
    if (*(int *)(*(long *)Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__
                        );
    }
    uVar5 = FUN_034b0dd0(uVar11,0,0);
    if ((uVar5 & 1) != 0) {
      uVar11 = FUN_03594a14(param_1,0);
      return uVar11;
    }
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar1;
  }
  uVar11 = FUN_03584a50(param_1,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),0);
  if (*(int *)(*(long *)Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__ + 0xe0)
      == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__);
  }
  uVar5 = FUN_034b0dd0(uVar11,0,0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)
                  Method_Oculus_Platform_Samples_SimplePlatformSample_DataEntry_achievementProgressCallback__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar11 = FUN_03482ca4(param_1,0);
    lVar6 = (**(code **)(*param_1 + 0x6d8))(param_1,0x34,*(undefined8 *)(*param_1 + 0x6e0));
    if (lVar6 != 0) {
      if ((int)*(ulong *)(lVar6 + 0x18) < 1) {
        return uVar11;
      }
      uVar5 = 0;
      uVar9 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      do {
        if (uVar9 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar7 = *(long **)(lVar6 + 0x20 + uVar5 * 8);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar9 = FUN_03938e60(plVar7);
        if ((uVar9 & 1) != 0) {
          if (plVar7 == (long *)0x0) break;
          uVar8 = (**(code **)(*plVar7 + 600))(plVar7,*(undefined8 *)(*plVar7 + 0x260));
          lVar10 = *(long *)puVar3;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar10);
          }
          uVar8 = FUN_039422b4(uVar8,param_2 + 1);
          FUN_034b14f4(plVar7,uVar11,uVar8,0);
        }
        uVar9 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar5 = uVar5 + 1;
        if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar5) {
          return uVar11;
        }
      } while( true );
    }
LAB_039428a0:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
LAB_03942418:
  uVar11 = FUN_03594a14(param_1,0);
  return uVar11;
}


