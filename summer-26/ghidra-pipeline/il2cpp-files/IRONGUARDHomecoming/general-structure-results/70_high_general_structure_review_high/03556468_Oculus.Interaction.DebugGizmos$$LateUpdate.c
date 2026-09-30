/*
FUNCTION_NAME: Oculus.Interaction.DebugGizmos$$LateUpdate
ENTRY_POINT: 03556468
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_DebugGizmos__LateUpdate
               (ushort *param_1,undefined8 param_2,undefined8 *param_3,long *param_4,
               undefined8 *param_5)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
                    /* try { // try from 03556468 to 0365646b has its CatchHandler @ 035564b4 */
                    /* try { // try from 0355646c to 0365646f has its CatchHandler @ 035564a4 */
                    /* try { // try from 03556470 to 03656473 has its CatchHandler @ 035564a0 */
                    /* try { // try from 03556474 to 0365647f has its CatchHandler @ 03555da4 */
                    /* try { // try from 03556480 to 03656483 has its CatchHandler @ 0355649c */
                    /* try { // try from 03556484 to 03656487 has its CatchHandler @ 03556498 */
                    /* try { // try from 03556488 to 0365648b has its CatchHandler @ 03556494 */
  if ((DAT_048331ed & 1) == 0) {
                    /* try { // try from 0355648c to 03656503 has its CatchHandler @ 03555da4 */
                    /* catch() { ... } // from try @ 03556488 with catch @ 03556494 */
    thunk_FUN_01efb3a4(Method_ftLightmaps_OnSceneChangedPlay__);
                    /* catch() { ... } // from try @ 03556484 with catch @ 03556498 */
                    /* catch() { ... } // from try @ 03556480 with catch @ 0355649c */
                    /* catch() { ... } // from try @ 03556470 with catch @ 035564a0 */
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__);
                    /* catch() { ... } // from try @ 0355646c with catch @ 035564a4 */
                    /* catch() { ... } // from try @ 035561ac with catch @ 035564a8 */
                    /* catch() { ... } // from try @ 035561c4 with catch @ 035564ac */
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
                    /* catch() { ... } // from try @ 035561a0 with catch @ 035564b0 */
                    /* catch() { ... } // from try @ 03556468 with catch @ 035564b4 */
                    /* catch() { ... } // from try @ 03556464 with catch @ 035564b8 */
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxnm_f32__);
                    /* catch() { ... } // from try @ 0355630c with catch @ 035564bc */
                    /* catch() { ... } // from try @ 03556324 with catch @ 035564c0 */
                    /* catch() { ... } // from try @ 03556300 with catch @ 035564c4 */
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_GetVersionedType__
                      );
                    /* catch() { ... } // from try @ 0355645c with catch @ 035564c8 */
                    /* catch() { ... } // from try @ 03556454 with catch @ 035564cc */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_048331ed = 1;
  }
  puVar3 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
  if ((int)param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  uVar1 = *param_1;
  if (0x52 < uVar1) {
    switch(uVar1) {
    case 0x70:
    case 0x71:
    case 0x74:
      break;
    case 0x72:
    case 0x75:
switchD_03556534_caseD_72:
      lVar7 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
      uVar8 = *param_5;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar7 = *(long *)puVar3;
      }
      uVar9 = **(undefined8 **)(lVar7 + 0xb8);
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                          );
      }
      uVar5 = FUN_035820b0(uVar8,uVar9,0);
      if ((uVar5 & 1) == 0) {
        if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        iVar4 = FUN_0354dfec(param_3);
        if ((iVar4 == 2) && (*(int *)(*(long *)puVar3 + 0xe0) == 0)) {
          thunk_FUN_01ee6d7c();
        }
      }
      else {
        uVar9 = *param_3;
        uVar8 = *param_5;
        if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar8 = FUN_0354fd6c(uVar9,uVar8);
        *param_3 = uVar8;
      }
    case 0x6f:
    case 0x73:
switchD_03556534_caseD_6f:
      if (*(int *)(*(long *)Method_ftLightmaps_OnSceneChangedPlay__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar7 = FUN_0350aed8(0);
      *param_4 = lVar7;
      thunk_FUN_01f51358(param_4,lVar7);
      break;
    default:
      if (uVar1 == 0x55) {
        lVar7 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
        uVar8 = *param_5;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar7 = *(long *)puVar3;
        }
        uVar9 = **(undefined8 **)(lVar7 + 0xb8);
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                            );
        }
        uVar5 = FUN_035820b0(uVar8,uVar9,0);
        if ((uVar5 & 1) != 0) {
          thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Member_ReflectField__);
          uVar8 = thunk_FUN_01f117cc();
          uVar9 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_InputSystem_Utilities_Observable_Where<InputControl>__
                                    );
          FUN_03553fd0(uVar8,uVar9);
          uVar9 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxnmq_f32__);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar8,uVar9);
        }
        if (*param_4 != 0) {
          plVar6 = (long *)FUN_0350b30c(*param_4,0);
          puVar2 = Method_ftLightmaps_OnSceneChangedPlay__;
          if (plVar6 == (long *)0x0) {
            *param_4 = 0;
          }
          else if ((*plVar6 != *(long *)Method_ftLightmaps_OnSceneChangedPlay__) ||
                  (*param_4 = (long)plVar6, *plVar6 != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar6);
          }
          thunk_FUN_01f51358(param_4,plVar6);
          if ((*param_4 != 0) && (lVar7 = *(long *)(*param_4 + 0x78), lVar7 != 0)) {
            uVar8 = thunk_FUN_01ecaf38(lVar7,0);
            uVar9 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxnm_f32__;
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__)
              ;
            }
            uVar9 = FUN_03579868(uVar9,0);
            uVar5 = FUN_03583338(uVar8,uVar9,0);
            if ((uVar5 & 1) != 0) {
              lVar7 = *param_4;
              if (*(int *)(*(long *)
                            Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_GetVersionedType__
                          + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar8 = FUN_0351c438(0);
              if (lVar7 == 0) goto LAB_035567d0;
              FUN_0350aadc(lVar7,uVar8,0);
            }
            if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar8 = FUN_0354f608(param_3);
            *param_3 = uVar8;
            break;
          }
        }
LAB_035567d0:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
switchD_03556534_caseD_70:
    lVar7 = *param_4;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_035561b4(param_1,param_2,lVar7);
    return;
  }
  if (uVar1 != 0x4f) {
    if (uVar1 != 0x52) goto switchD_03556534_caseD_70;
    goto switchD_03556534_caseD_72;
  }
  goto switchD_03556534_caseD_6f;
}


