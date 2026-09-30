/*
FUNCTION_NAME: FUN_03383d04
ENTRY_POINT: 03383d04
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_03383d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  puVar2 = Method_UnityEngine_Rendering_Universal_LibTessDotNet_Geom_IsWindingInside__;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03383c60 with catch @ 03383d1c
                       try { // try from 03383d1c to 03483d33 has its CatchHandler @ 03383c1c */
  if ((DAT_048321ba & 1) == 0) {
                    /* try { // try from 03383d34 to 03483d4b has its CatchHandler @ 03383db8 */
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_LibTessDotNet_Geom_VertLeq__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GeometryUtility_CalculateFrustumPlanes__);
                    /* try { // try from 03383d4c to 03483da7 has its CatchHandler @ 03383c1c */
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GetDictionaryItem_Get__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GetListItem_Get__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Contains<float>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UI_CanvasUpdateRegistry_SortLayoutList__);
    thunk_FUN_01efb3a4(Method_System_Collections_CaseInsensitiveComparer__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_TryGetComponent<OVRScenePlane>__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GetMember_Value__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GetVariable_Get__);
                    /* try { // try from 03383da8 to 03483db7 has its CatchHandler @ 03383db8 */
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GetVariable_IsDefined__);
                    /* catch() { ... } // from try @ 03383d34 with catch @ 03383db8
                       catch() { ... } // from try @ 03383da8 with catch @ 03383db8 */
                    /* try { // try from 03383dbc to 03483dbf has its CatchHandler @ 03383dc8 */
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<DebugUIHandlerValue>__);
                    /* try { // try from 03383dc0 to 03483dcb has its CatchHandler @ 03383c1c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03383dbc with catch @ 03383dc8
                        */
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_Drawing_GizmoContext_InActiveSelection__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_LibTessDotNet_Geom_IsWindingInside__);
    DAT_048321ba = 1;
  }
  lVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_035ac8e8(lVar4,0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x10) = param_1;
    thunk_FUN_01f51358((long *)(lVar4 + 0x10),param_1);
    *(undefined8 *)(lVar4 + 0x18) = param_3;
    thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x18),param_3);
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar5 = FUN_02b6b4d8(*(long *)(param_1 + 0x30),param_2,
                           *(undefined8 *)
                            Method_UnityEngine_GeometryUtility_CalculateFrustumPlanes__);
      puVar2 = Method_UnityEngine_GameObject_GetComponent<DebugUIHandlerValue>__;
      if ((uVar5 & 1) == 0) {
        lVar8 = *(long *)Method_UnityEngine_GameObject_GetComponent<DebugUIHandlerValue>__;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar8 = *(long *)puVar2;
        }
        if (**(long **)(lVar8 + 0xb8) == 0) goto LAB_03384078;
        uVar5 = FUN_02b6b4d8(**(long **)(lVar8 + 0xb8),param_2,
                             *(undefined8 *)
                              Method_UnityEngine_Rendering_Universal_LibTessDotNet_Geom_VertLeq__);
        if ((uVar5 & 1) != 0) {
          lVar8 = *(long *)puVar2;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar8 = *(long *)puVar2;
          }
          puVar3 = Method_Unity_VisualScripting_GetDictionaryItem_Get__;
          if ((**(long **)(lVar8 + 0xb8) == 0) ||
             (lVar8 = FUN_02b6b264(**(long **)(lVar8 + 0xb8),param_2,
                                   *(undefined8 *)
                                    Method_Unity_VisualScripting_GetDictionaryItem_Get__),
             lVar8 == 0)) goto LAB_03384078;
          if (*(int *)(lVar8 + 0x18) != 0) {
            lVar8 = *(long *)puVar2;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar8 = *(long *)puVar2;
            }
            if (**(long **)(lVar8 + 0xb8) != 0) {
              uVar6 = FUN_02b6b264(**(long **)(lVar8 + 0xb8),param_2,*(undefined8 *)puVar3);
              uVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_System_Collections_CaseInsensitiveComparer__ctor__)
              ;
              FUN_02e6c0a0(uVar7,lVar4,
                           *(undefined8 *)Method_Drawing_GizmoContext_InActiveSelection__,0);
              uVar6 = FUN_0230b6f4(uVar6,uVar7,
                                   *(undefined8 *)
                                    Method_UnityEngine_UI_CanvasUpdateRegistry_SortLayoutList__);
              lVar4 = FUN_0230ab8c(uVar6,*(undefined8 *)
                                          Method_System_Linq_Enumerable_Contains<float>__);
              return lVar4;
            }
            goto LAB_03384078;
          }
        }
        lVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Unity_VisualScripting_GetVariable_IsDefined__);
        FUN_030f2380(lVar4,*(undefined8 *)Method_Unity_VisualScripting_GetMember_Value__);
        uVar6 = *(undefined8 *)
                 Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
        ;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        uVar6 = FUN_03579868(uVar6,0);
      }
      else {
        lVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Unity_VisualScripting_GetVariable_IsDefined__);
        FUN_030f2380(lVar4,*(undefined8 *)Method_Unity_VisualScripting_GetMember_Value__);
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_03384078;
        uVar6 = FUN_02b6b264(*(long *)(param_1 + 0x30),param_2,
                             *(undefined8 *)Method_Unity_VisualScripting_GetListItem_Get__);
      }
      if (lVar4 != 0) {
        lVar8 = *(long *)(lVar4 + 0x10);
        lVar9 = *(long *)Method_UnityEngine_Component_TryGetComponent<OVRScenePlane>__;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
            thunk_FUN_01f51358();
          }
          else {
            FUN_030f2bb4(lVar4,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          return lVar4;
        }
      }
    }
  }
LAB_03384078:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


