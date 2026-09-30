/*
FUNCTION_NAME: FUN_0236bbd0
ENTRY_POINT: 0236bbd0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_8;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


undefined8 FUN_0236bbd0(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined1 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  int local_34;
  
  puVar10 = *(undefined8 **)(param_3 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusEvent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusOutEvent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<GeometryChangedEvent>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRPassthroughLayer>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRProgressIndicator>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRRaycaster>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRSceneAnchor>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRSceneManager>__);
    puVar10 = *(undefined8 **)(param_3 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_01ecafa0(param_3);
      puVar10 = *(undefined8 **)(param_3 + 0x38);
    }
  }
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  local_34 = 0;
  uVar11 = *puVar10;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar11 = FUN_03579868(uVar11,0);
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                      );
  }
  uVar4 = FUN_03916c60(uVar11,0);
  if ((uVar4 & 1) == 0) {
    uVar11 = **(undefined8 **)(param_3 + 0x38);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    FUN_01bc4c70();
    plVar7 = (long *)FUN_03579868(uVar11,0);
    FUN_01bc50c0();
    uVar11 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<KeyDownEvent>__
                              );
    uVar9 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<KeyUpEvent>__
                              );
    uVar11 = FUN_0340ebc0(uVar8,uVar11,uVar9,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar8 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar8,uVar11,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar8,param_3);
  }
  if (param_1 == (long *)0x0) goto LAB_0236bfe4;
  (**(code **)(*param_1 + 0x628))(param_1,*(undefined8 *)(*param_1 + 0x630));
  if (((*(ushort *)(param_1 + 7) & 0xff00) != 0xe00) || ((*(ushort *)(param_1 + 7) & 0xff) == 0)) {
    (**(code **)(*param_1 + 0x5e8))(param_1,*(undefined8 *)(*param_1 + 0x5f0));
    goto LAB_0236be8c;
  }
  FUN_038d84c4(param_1,0);
  uVar4 = FUN_0340e600(param_1[8],
                       *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRSceneAnchor>__,0)
  ;
  if ((uVar4 & 1) == 0) {
    lVar5 = param_1[9];
    if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar11 = FUN_03532f80(0);
    uVar4 = FUN_03568dbc(lVar5,0x1ff,uVar11,&local_34,0);
    if ((uVar4 & 1) != 0) {
      (**(code **)(*param_1 + 0x638))(param_1,*(undefined8 *)(*param_1 + 0x640));
      uVar4 = FUN_0340e600(param_1[8],
                           *(undefined8 *)
                            Method_UnityEngine_Component_GetComponent<OVRSceneManager>__,0);
      if ((uVar4 & 1) == 0) {
        *(undefined2 *)(param_1 + 7) = 0;
        lVar5 = param_1[0xb];
        uVar11 = **(undefined8 **)(param_3 + 0x38);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = FUN_03579868(uVar11,0);
        if (lVar5 != 0) {
          lVar5 = FUN_02b6b264(lVar5,uVar11,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusEvent>__
                              );
          lVar12 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_01ecaf44(lVar12);
          }
          if (lVar5 == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = thunk_FUN_01f116d0(lVar5,lVar12);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(lVar5,lVar12);
            }
          }
          iVar2 = local_34;
          lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44();
          }
          lVar5 = FUN_01f08890(lVar5,iVar2);
          *param_2 = lVar5;
          thunk_FUN_01f51358(param_2,lVar5);
          if (0 < local_34) {
            if (lVar6 == 0) goto LAB_0236bfe4;
            lVar5 = 0x20;
            do {
              lVar12 = *param_2;
              uVar3 = (**(code **)(lVar6 + 0x18))
                                (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
              if (lVar12 == 0) goto LAB_0236bfe4;
              if ((ulong)*(uint *)(lVar12 + 0x18) <= lVar5 - 0x20U) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              *(undefined1 *)(lVar12 + lVar5) = uVar3;
              lVar12 = lVar5 + -0x1f;
              lVar5 = lVar5 + 1;
            } while (lVar12 < local_34);
          }
          (**(code **)(*param_1 + 0x478))(param_1,*(undefined8 *)(*param_1 + 0x480));
          return 1;
        }
        goto LAB_0236bfe4;
      }
      lVar5 = FUN_038d7894(param_1,0);
      if ((lVar5 == 0) || (lVar5 = FUN_0390b368(lVar5,0), lVar5 == 0)) goto LAB_0236bfe4;
      lVar5 = FUN_0390b70c(lVar5,0);
      puVar10 = (undefined8 *)Method_UnityEngine_Component_GetComponent<OVRPassthroughLayer>__;
      goto joined_r0x0236be20;
    }
    lVar5 = FUN_038d7894(param_1,0);
    if ((lVar5 == 0) || (lVar5 = FUN_0390b368(lVar5,0), lVar5 == 0)) goto LAB_0236bfe4;
    lVar5 = FUN_0390b70c(lVar5,0);
    uVar11 = FUN_03405678(*(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRRaycaster>__,
                          param_1[9],0);
    if (lVar5 == 0) goto LAB_0236bfe4;
  }
  else {
    lVar5 = FUN_038d7894(param_1,0);
    if ((lVar5 == 0) || (lVar5 = FUN_0390b368(lVar5,0), lVar5 == 0)) goto LAB_0236bfe4;
    lVar5 = FUN_0390b70c(lVar5,0);
    puVar10 = (undefined8 *)Method_UnityEngine_Component_GetComponent<OVRProgressIndicator>__;
joined_r0x0236be20:
    if (lVar5 == 0) {
LAB_0236bfe4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar11 = *puVar10;
  }
  FUN_0390b840(lVar5,uVar11,0);
LAB_0236be8c:
  *param_2 = 0;
  thunk_FUN_01f51358(param_2,0);
  return 0;
}


