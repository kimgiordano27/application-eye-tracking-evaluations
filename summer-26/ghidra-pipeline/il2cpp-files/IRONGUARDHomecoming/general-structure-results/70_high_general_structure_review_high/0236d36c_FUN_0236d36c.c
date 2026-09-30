/*
FUNCTION_NAME: FUN_0236d36c
ENTRY_POINT: 0236d36c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_8;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void FUN_0236d36c(long *param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 *__src;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined1 auStack_80 [12];
  int local_74;
  undefined1 *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
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
  puVar3 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  uVar1 = *(uint *)(puVar10[5] + 0xfc);
  __src = auStack_80 + -((ulong)uVar1 + 0xf & 0x1fffffff0);
  local_74 = 0;
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
  uVar5 = FUN_03916c60(uVar11,0);
  if ((uVar5 & 1) == 0) {
    uVar11 = **(undefined8 **)(param_3 + 0x38);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    FUN_01bc4c70();
    plVar13 = (long *)FUN_03579868(uVar11,0);
    FUN_01bc50c0();
    uVar11 = (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
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
  if (param_1 == (long *)0x0) goto LAB_0236d838;
  (**(code **)(*param_1 + 0x628))(param_1,*(undefined8 *)(*param_1 + 0x630));
  if (((*(ushort *)(param_1 + 7) & 0xff00) == 0xe00) && ((*(ushort *)(param_1 + 7) & 0xff) != 0)) {
    FUN_038d84c4(param_1,0);
    uVar5 = FUN_0340e600(param_1[8],
                         *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRSceneAnchor>__,
                         0);
    if ((uVar5 & 1) == 0) {
      lVar6 = param_1[9];
      if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_03532f80(0);
      uVar5 = FUN_03568dbc(lVar6,0x1ff,uVar11,&local_74,0);
      if ((uVar5 & 1) != 0) {
        (**(code **)(*param_1 + 0x638))(param_1,*(undefined8 *)(*param_1 + 0x640));
        uVar5 = FUN_0340e600(param_1[8],
                             *(undefined8 *)
                              Method_UnityEngine_Component_GetComponent<OVRSceneManager>__,0);
        if ((uVar5 & 1) == 0) {
          *(undefined2 *)(param_1 + 7) = 0;
          lVar6 = param_1[0xb];
          uVar11 = **(undefined8 **)(param_3 + 0x38);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar11 = FUN_03579868(uVar11,0);
          if (lVar6 == 0) goto LAB_0236d838;
          lVar6 = FUN_02b6b264(lVar6,uVar11,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusEvent>__
                              );
          lVar12 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_01ecaf44(lVar12);
          }
          if (lVar6 == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = thunk_FUN_01f116d0(lVar6,lVar12);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(lVar6,lVar12);
            }
          }
          iVar4 = local_74;
          lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01ecaf44();
          }
          uVar11 = FUN_01f08890(lVar6,iVar4);
          *param_2 = uVar11;
          thunk_FUN_01f51358(param_2,uVar11);
          if (0 < local_74) {
            if (lVar7 == 0) goto LAB_0236d838;
            uVar5 = 0;
            do {
              plVar13 = (long *)*param_2;
              puVar10 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 0x20);
              local_70 = __src;
              (*(code *)puVar10[2])(*puVar10,puVar10,lVar7,&local_70,__src);
              if (plVar13 == (long *)0x0) goto LAB_0236d838;
              uVar14 = (ulong)*(uint *)(plVar13 + 3);
              if (uVar14 <= uVar5) {
LAB_0236d83c:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              memcpy((void *)((long)plVar13 + uVar5 * *(uint *)(*plVar13 + 0x104) + 0x20),__src,
                     (ulong)uVar1);
              lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 0x28);
              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_01ecaf44();
                uVar14 = (ulong)*(uint *)(plVar13 + 3);
              }
              if (uVar14 <= uVar5) goto LAB_0236d83c;
              FUN_01f087b0(lVar6,(long)plVar13 + uVar5 * *(uint *)(*plVar13 + 0x104) + 0x20,__src);
              uVar5 = uVar5 + 1;
            } while ((long)uVar5 < (long)local_74);
          }
          (**(code **)(*param_1 + 0x478))(param_1,*(undefined8 *)(*param_1 + 0x480));
          uVar11 = 1;
          goto LAB_0236d674;
        }
        lVar6 = FUN_038d7894(param_1,0);
        if ((lVar6 == 0) || (lVar6 = FUN_0390b368(lVar6,0), lVar6 == 0)) goto LAB_0236d838;
        lVar6 = FUN_0390b70c(lVar6,0);
        puVar10 = (undefined8 *)Method_UnityEngine_Component_GetComponent<OVRPassthroughLayer>__;
        goto joined_r0x0236d5f8;
      }
      lVar6 = FUN_038d7894(param_1,0);
      if ((lVar6 == 0) || (lVar6 = FUN_0390b368(lVar6,0), lVar6 == 0)) goto LAB_0236d838;
      lVar6 = FUN_0390b70c(lVar6,0);
      uVar11 = FUN_03405678(*(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRRaycaster>__
                            ,param_1[9],0);
      if (lVar6 == 0) goto LAB_0236d838;
    }
    else {
      lVar6 = FUN_038d7894(param_1,0);
      if ((lVar6 == 0) || (lVar6 = FUN_0390b368(lVar6,0), lVar6 == 0)) goto LAB_0236d838;
      lVar6 = FUN_0390b70c(lVar6,0);
      puVar10 = (undefined8 *)Method_UnityEngine_Component_GetComponent<OVRProgressIndicator>__;
joined_r0x0236d5f8:
      if (lVar6 == 0) {
LAB_0236d838:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar11 = *puVar10;
    }
    FUN_0390b840(lVar6,uVar11,0);
  }
  else {
    (**(code **)(*param_1 + 0x5e8))(param_1,*(undefined8 *)(*param_1 + 0x5f0));
  }
  *param_2 = 0;
  thunk_FUN_01f51358(param_2,0);
  uVar11 = 0;
LAB_0236d674:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


