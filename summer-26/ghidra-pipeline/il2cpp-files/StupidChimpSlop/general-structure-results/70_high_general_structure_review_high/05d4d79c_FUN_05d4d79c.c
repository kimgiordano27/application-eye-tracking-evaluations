/*
FUNCTION_NAME: FUN_05d4d79c
ENTRY_POINT: 05d4d79c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_5;strong_file_logging_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_05d4d79c(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long *param_5,long param_6)

{
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int extraout_var;
  int extraout_var_00;
  long *plVar12;
  long *plVar13;
  undefined4 uVar14;
  long local_90;
  long lStack_88;
  long local_80;
  long local_70;
  long lStack_68;
  long local_60;
  
  if ((DAT_06a58037 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06646730);
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebConnection_<Connect>d__16>__
                );
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_StreamWriter_<WriteAsyncInternal>d__59>__
                );
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_StreamWriter_<WriteAsyncInternal>d__62>__
                );
    FUN_02d4dc40(Method_Cysharp_Threading_Tasks_TaskPool<UniTask_DelayPromise>_TryPush__);
    FUN_02d4dc40(Method_UnityEngine_UIElements_StyleEnum<FlexDirection>__ctor__);
    FUN_02d4dc40(Method_System_RuntimeType_CreateInstanceDefaultCtor__);
    FUN_02d4dc40(Method_System_RuntimeType_CreateInstanceImpl__);
    DAT_06a58037 = 1;
  }
  if (param_6 == 0) {
    return;
  }
  lVar6 = FUN_05927660(param_5 + 0x16,0);
  lVar7 = FUN_05927660(param_5 + 0x19,0);
  lVar8 = FUN_05927660(param_5 + 0x1c,0);
  lVar9 = FUN_05927660(param_5 + 0x1f,0);
  if (((char)param_5[0x49] == '\0') && (lVar6 != 0 || lVar7 != 0)) {
    lStack_68 = param_5[0x17];
    local_70 = param_5[0x16];
    local_60 = param_5[0x18];
    uVar10 = UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__get_devicePosition
                       (&local_70);
    if ((uVar10 & 1) == 0) {
      lStack_88 = param_5[0x1a];
      local_90 = param_5[0x19];
      local_80 = param_5[0x1b];
      uVar10 = UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__get_devicePosition
                         (&local_90);
      if ((uVar10 & 1) != 0) goto LAB_05d4d8bc;
    }
    else {
LAB_05d4d8bc:
      if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_05ea2efc(*(undefined8 *)Method_System_RuntimeType_CreateInstanceImpl__,param_5,0);
    }
    *(undefined1 *)(param_5 + 0x49) = 1;
  }
  *(undefined1 *)(param_6 + 0x1c) = 0;
  *(undefined4 *)(param_6 + 0x18) = 0;
  if ((lVar8 == 0) || (FUN_059105f4(lVar8,0), extraout_var < 1)) {
    if ((lVar9 == 0) ||
       ((lVar11 = FUN_05910b74(lVar9,0), lVar11 == 0 ||
        (plVar12 = *(long **)(lVar11 + 0x78), plVar12 == (long *)0x0)))) {
LAB_05d4d988:
      if ((lVar6 == 0) || (lVar11 = FUN_05910b74(lVar6,0), lVar11 == 0)) {
        plVar12 = (long *)0x0;
      }
      else {
        plVar12 = *(long **)(lVar11 + 0x78);
      }
      puVar1 = Method_System_RuntimeType_CreateInstanceDefaultCtor__;
      lVar11 = *(long *)Method_System_RuntimeType_CreateInstanceDefaultCtor__;
      if (lVar7 == 0) {
        if (plVar12 == (long *)0x0) {
LAB_05d4da04:
          bVar2 = 0;
          goto LAB_05d4dab4;
        }
        if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) !=
            lVar11)) goto LAB_05d4da04;
        plVar13 = (long *)0x0;
LAB_05d4da58:
        if (plVar12[0x32] == 0) goto LAB_05d4dd00;
        bVar2 = FUN_0593a5c0(plVar12[0x32],0);
      }
      else {
        if (plVar12 != (long *)0x0) {
          if (*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar11 + 0x130)) {
            plVar12 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8)
                   != lVar11) {
            plVar12 = (long *)0x0;
          }
        }
        lVar11 = FUN_05910b74(lVar7,0);
        if ((lVar11 == 0) || (plVar13 = *(long **)(lVar11 + 0x78), plVar13 == (long *)0x0)) {
LAB_05d4da50:
          plVar13 = (long *)0x0;
        }
        else {
          bVar2 = *(byte *)(*(long *)puVar1 + 0x130);
          if (*(byte *)(*plVar13 + 0x130) < bVar2) goto LAB_05d4da50;
          if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar1) {
            plVar13 = (long *)0x0;
          }
        }
        if (plVar12 != (long *)0x0) goto LAB_05d4da58;
        bVar2 = 0;
      }
      if (plVar12 != plVar13) {
        if (plVar13 == (long *)0x0) {
          bVar3 = 0;
        }
        else {
          if (plVar13[0x32] == 0) goto LAB_05d4dd00;
          bVar3 = FUN_0593a5c0(plVar13[0x32],0);
        }
        bVar2 = bVar2 & bVar3;
      }
      goto LAB_05d4dab4;
    }
    bVar2 = *(byte *)(*(long *)Method_System_RuntimeType_CreateInstanceDefaultCtor__ + 0x130);
    if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_System_RuntimeType_CreateInstanceDefaultCtor__)) goto LAB_05d4d988;
    if (plVar12[0x32] == 0) goto LAB_05d4dd00;
    bVar2 = FUN_0593a5c0(plVar12[0x32],0);
    *(byte *)(param_6 + 0x1c) = bVar2 & 1;
LAB_05d4dac0:
    FUN_059105f4(lVar9,0);
    if (0 < extraout_var_00) {
      uVar4 = FUN_03269d5c(lVar9,*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebConnection_<Connect>d__16>__
                          );
      goto LAB_05d4dc54;
    }
  }
  else {
    bVar2 = (**(code **)(*param_5 + 0x268))(param_5,lVar8,*(undefined8 *)(*param_5 + 0x270));
LAB_05d4dab4:
    *(byte *)(param_6 + 0x1c) = bVar2 & 1;
    if (lVar9 != 0) goto LAB_05d4dac0;
  }
  if (((lVar8 != 0) && (lVar8 = FUN_05910b74(lVar8,0), lVar8 != 0)) &&
     (plVar12 = *(long **)(lVar8 + 0x78), plVar12 != (long *)0x0)) {
    bVar2 = *(byte *)(*(long *)Method_System_RuntimeType_CreateInstanceDefaultCtor__ + 0x130);
    if ((bVar2 <= *(byte *)(*plVar12 + 0x130)) &&
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)Method_System_RuntimeType_CreateInstanceDefaultCtor__)) {
      if (plVar12[0x31] == 0) goto LAB_05d4dd00;
      uVar4 = FUN_04d3eba4(plVar12[0x31],
                           *(undefined8 *)
                            Method_Cysharp_Threading_Tasks_TaskPool<UniTask_DelayPromise>_TryPush__)
      ;
      goto LAB_05d4dc54;
    }
  }
  if (((lVar6 == 0) || (lVar8 = FUN_05910b74(lVar6,0), lVar8 == 0)) ||
     (plVar12 = *(long **)(lVar8 + 0x78), plVar12 == (long *)0x0)) {
LAB_05d4db80:
    plVar12 = (long *)0x0;
    if (lVar7 == 0) goto LAB_05d4dbf8;
LAB_05d4db88:
    lVar8 = FUN_05910b74(lVar7,0);
    if ((lVar8 == 0) || (plVar13 = *(long **)(lVar8 + 0x78), plVar13 == (long *)0x0))
    goto LAB_05d4dbf8;
    bVar2 = *(byte *)(*(long *)Method_System_RuntimeType_CreateInstanceDefaultCtor__ + 0x130);
    if (*(byte *)(*plVar13 + 0x130) < bVar2) goto LAB_05d4dbf8;
    if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_System_RuntimeType_CreateInstanceDefaultCtor__) {
      plVar13 = (long *)0x0;
    }
    if (plVar12 == (long *)0x0)
    goto 
    UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__set_pokePose
    ;
UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__get_pinchValue:
    if (plVar12[0x31] == 0) goto LAB_05d4dd00;
    uVar4 = FUN_04d3eba4(plVar12[0x31],
                         *(undefined8 *)
                          Method_Cysharp_Threading_Tasks_TaskPool<UniTask_DelayPromise>_TryPush__);
  }
  else {
    bVar2 = *(byte *)(*(long *)Method_System_RuntimeType_CreateInstanceDefaultCtor__ + 0x130);
    if (*(byte *)(*plVar12 + 0x130) < bVar2) goto LAB_05d4db80;
    if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_System_RuntimeType_CreateInstanceDefaultCtor__) {
      plVar12 = (long *)0x0;
    }
    if (lVar7 != 0) goto LAB_05d4db88;
LAB_05d4dbf8:
    plVar13 = (long *)0x0;
    if (plVar12 != (long *)0x0)
    goto 
    UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__get_pinchValue
    ;
UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__set_pokePose:
    uVar4 = 0;
  }
  if (plVar12 != plVar13) {
    if (plVar13 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      if (plVar13[0x31] == 0) {
LAB_05d4dd00:
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar5 = FUN_04d3eba4(plVar13[0x31],
                           *(undefined8 *)
                            Method_Cysharp_Threading_Tasks_TaskPool<UniTask_DelayPromise>_TryPush__)
      ;
      uVar5 = uVar5 & 2;
    }
    uVar4 = uVar5 | uVar4 & 1;
  }
LAB_05d4dc54:
  *(uint *)(param_6 + 0x18) = uVar4;
  if ((lVar6 != 0) && ((uVar4 & 1) != 0)) {
    uVar14 = FUN_0326a0cc(lVar6,*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_StreamWriter_<WriteAsyncInternal>d__62>__
                         );
    *(undefined4 *)(param_6 + 0x20) = uVar14;
    *(undefined4 *)(param_6 + 0x24) = param_2;
    *(undefined4 *)(param_6 + 0x28) = param_3;
  }
  if ((lVar7 != 0) && ((*(byte *)(param_6 + 0x18) >> 1 & 1) != 0)) {
    uVar14 = FUN_03269e38(lVar7,*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_StreamWriter_<WriteAsyncInternal>d__59>__
                         );
    *(undefined4 *)(param_6 + 0x2c) = uVar14;
    *(undefined4 *)(param_6 + 0x30) = param_2;
    *(undefined4 *)(param_6 + 0x34) = param_3;
    *(undefined4 *)(param_6 + 0x38) = param_4;
  }
  return;
}


