/*
FUNCTION_NAME: FUN_0236c08c
ENTRY_POINT: 0236c08c
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


undefined8 FUN_0236c08c(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uVar12;
  int local_34;
  
  puVar9 = *(undefined8 **)(param_3 + 0x38);
  if (puVar9 == (undefined8 *)0x0) {
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
    puVar9 = *(undefined8 **)(param_3 + 0x38);
    if (puVar9 == (undefined8 *)0x0) {
      FUN_01ecafa0(param_3);
      puVar9 = *(undefined8 **)(param_3 + 0x38);
    }
  }
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  local_34 = 0;
  uVar10 = *puVar9;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar10 = FUN_03579868(uVar10,0);
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                      );
  }
  uVar3 = FUN_03916c60(uVar10,0);
  if ((uVar3 & 1) == 0) {
    uVar10 = **(undefined8 **)(param_3 + 0x38);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    FUN_01bc4c70();
    plVar6 = (long *)FUN_03579868(uVar10,0);
    FUN_01bc50c0();
    uVar10 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<KeyDownEvent>__
                              );
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<KeyUpEvent>__
                              );
    uVar10 = FUN_0340ebc0(uVar7,uVar10,uVar8,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar7,uVar10,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar7,param_3);
  }
  if (param_1 == (long *)0x0) goto LAB_0236c49c;
  (**(code **)(*param_1 + 0x628))(param_1,*(undefined8 *)(*param_1 + 0x630));
  if (((*(ushort *)(param_1 + 7) & 0xff00) != 0xe00) || ((*(ushort *)(param_1 + 7) & 0xff) == 0)) {
    (**(code **)(*param_1 + 0x5e8))(param_1,*(undefined8 *)(*param_1 + 0x5f0));
    goto LAB_0236c348;
  }
  FUN_038d84c4(param_1,0);
  uVar3 = FUN_0340e600(param_1[8],
                       *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRSceneAnchor>__,0)
  ;
  if ((uVar3 & 1) == 0) {
    lVar4 = param_1[9];
    if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar10 = FUN_03532f80(0);
    uVar3 = FUN_03568dbc(lVar4,0x1ff,uVar10,&local_34,0);
    if ((uVar3 & 1) != 0) {
      (**(code **)(*param_1 + 0x638))(param_1,*(undefined8 *)(*param_1 + 0x640));
      uVar3 = FUN_0340e600(param_1[8],
                           *(undefined8 *)
                            Method_UnityEngine_Component_GetComponent<OVRSceneManager>__,0);
      if ((uVar3 & 1) == 0) {
        *(undefined2 *)(param_1 + 7) = 0;
        lVar4 = param_1[0xb];
        uVar10 = **(undefined8 **)(param_3 + 0x38);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar10 = FUN_03579868(uVar10,0);
        if (lVar4 != 0) {
          lVar4 = FUN_02b6b264(lVar4,uVar10,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusEvent>__
                              );
          lVar11 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01ecaf44(lVar11);
          }
          if (lVar4 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = thunk_FUN_01f116d0(lVar4,lVar11);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(lVar4,lVar11);
            }
          }
          iVar2 = local_34;
          lVar4 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01ecaf44();
          }
          lVar4 = FUN_01f08890(lVar4,iVar2);
          *param_2 = lVar4;
          thunk_FUN_01f51358(param_2,lVar4);
          if (0 < local_34) {
            if (lVar5 == 0) goto LAB_0236c49c;
            uVar3 = 0;
            do {
              lVar4 = *param_2;
              uVar12 = (**(code **)(lVar5 + 0x18))
                                 (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
              if (lVar4 == 0) goto LAB_0236c49c;
              if (*(uint *)(lVar4 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              *(undefined4 *)(lVar4 + uVar3 * 4 + 0x20) = uVar12;
              uVar3 = uVar3 + 1;
            } while ((long)uVar3 < (long)local_34);
          }
          (**(code **)(*param_1 + 0x478))(param_1,*(undefined8 *)(*param_1 + 0x480));
          return 1;
        }
        goto LAB_0236c49c;
      }
      lVar4 = FUN_038d7894(param_1,0);
      if ((lVar4 == 0) || (lVar4 = FUN_0390b368(lVar4,0), lVar4 == 0)) goto LAB_0236c49c;
      lVar4 = FUN_0390b70c(lVar4,0);
      puVar9 = (undefined8 *)Method_UnityEngine_Component_GetComponent<OVRPassthroughLayer>__;
      goto joined_r0x0236c2dc;
    }
    lVar4 = FUN_038d7894(param_1,0);
    if ((lVar4 == 0) || (lVar4 = FUN_0390b368(lVar4,0), lVar4 == 0)) goto LAB_0236c49c;
    lVar4 = FUN_0390b70c(lVar4,0);
    uVar10 = FUN_03405678(*(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRRaycaster>__,
                          param_1[9],0);
    if (lVar4 == 0) goto LAB_0236c49c;
  }
  else {
    lVar4 = FUN_038d7894(param_1,0);
    if ((lVar4 == 0) || (lVar4 = FUN_0390b368(lVar4,0), lVar4 == 0)) goto LAB_0236c49c;
    lVar4 = FUN_0390b70c(lVar4,0);
    puVar9 = (undefined8 *)Method_UnityEngine_Component_GetComponent<OVRProgressIndicator>__;
joined_r0x0236c2dc:
    if (lVar4 == 0) {
LAB_0236c49c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar10 = *puVar9;
  }
  FUN_0390b840(lVar4,uVar10,0);
LAB_0236c348:
  *param_2 = 0;
  thunk_FUN_01f51358(param_2,0);
  return 0;
}


