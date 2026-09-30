/*
FUNCTION_NAME: FUN_03916778
ENTRY_POINT: 03916778
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure
*/


long * FUN_03916778(long *param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((DAT_04838239 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Samples_SimplePlatformSample_DataEntry_achievementProgressCallback__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseUpEvent>__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_3493);
    DAT_04838239 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_03582560(param_1,0,0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_03582560(param_2,0,0);
    puVar4 = Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__;
    puVar3 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseUpEvent>__;
    if ((uVar5 & 1) == 0) {
      uVar10 = *(undefined8 *)
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseUpEvent>__;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar10 = FUN_03579868(uVar10,0);
      lVar9 = *(long *)puVar4;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar9);
      }
      uVar5 = FUN_03946654(param_1,uVar10,0);
      if ((uVar5 & 1) == 0) {
        FUN_01bc50c0(param_1);
        lVar9 = *param_1;
      }
      else {
        uVar10 = *(undefined8 *)puVar3;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar10 = FUN_03579868(uVar10,0);
        lVar9 = *(long *)puVar4;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar9);
        }
        uVar5 = FUN_03946654(param_2,uVar10,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*(long *)
                        Method_Oculus_Platform_Samples_SimplePlatformSample_DataEntry_achievementProgressCallback__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar6 = (long *)FUN_03482ca4(param_1,0);
          puVar2 = 
          Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__;
          if (plVar6 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)
                               Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ +
                             0x130);
            if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__)) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(plVar6);
            }
          }
          lVar9 = *(long *)
                   Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
          ;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar9 = *(long *)puVar2;
          }
          uVar5 = FUN_034b14b8(*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x20),0,0);
          if ((uVar5 & 1) == 0) {
            return plVar6;
          }
          lVar9 = *(long *)puVar2;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar9 = *(long *)puVar2;
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x20);
          if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
          }
          uVar10 = FUN_03532f80(0);
          if (param_2 != (long *)0x0) {
            uVar7 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
            uVar10 = FUN_0340f420(uVar10,*(undefined8 *)StringLiteral_3493,uVar7,0);
            if (lVar9 != 0) {
              FUN_034b14f4(lVar9,plVar6,uVar10,0);
              return plVar6;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_01bc50c0(param_2);
        lVar9 = *param_2;
        param_1 = param_2;
      }
      uVar10 = (**(code **)(lVar9 + 0x1a8))(param_1,*(undefined8 *)(lVar9 + 0x1b0));
      uVar7 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<KeyDownEvent>__
                                );
      uVar8 = thunk_FUN_01efb3a4(StringLiteral_3495);
      uVar10 = FUN_0340ebc0(uVar7,uVar10,uVar8,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar7 = thunk_FUN_01f117cc();
      FUN_034f6754(uVar7,uVar10,0);
      uVar10 = thunk_FUN_01efb3a4(StringLiteral_3494);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar7,uVar10);
    }
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
  uVar10 = thunk_FUN_01f117cc();
  FUN_034f7cb4(uVar10,0);
  uVar7 = thunk_FUN_01efb3a4(StringLiteral_3494);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar10,uVar7);
}


