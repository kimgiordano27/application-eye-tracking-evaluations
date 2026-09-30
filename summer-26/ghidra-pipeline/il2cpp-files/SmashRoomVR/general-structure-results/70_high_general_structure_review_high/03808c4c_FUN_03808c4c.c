/*
FUNCTION_NAME: FUN_03808c4c
ENTRY_POINT: 03808c4c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03808fb4) */

undefined8 FUN_03808c4c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_03ff834d & 1) == 0) {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_VisualElement_Hierarchy_MoveChildElement__);
    thunk_FUN_01ad9084(PTR_DAT_03d7f350);
    thunk_FUN_01ad9084(PTR_DAT_03d7f370);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_VisualElement_Hierarchy_Remove__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_VisualElement_Hierarchy_RemoveAt__);
    thunk_FUN_01ad9084(PTR_DAT_03d7f3a8);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_VisualElement_UxmlTraits_Init__);
    thunk_FUN_01ad9084(PTR_DAT_03d7f3c0);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_VisualElementFocusChangeTarget_<>c_<_cctor>b__9_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da56f8);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_VisualElementListPool_<>c_<_cctor>b__4_0__);
    DAT_03ff834d = 1;
  }
  puVar9 = PTR_DAT_03da56f8;
  puVar8 = PTR_DAT_03d7f370;
  puVar7 = PTR_DAT_03d7f350;
  puVar6 = Method_UnityEngine_UIElements_VisualElementListPool_<>c_<_cctor>b__4_0__;
  puVar5 = Method_UnityEngine_UIElements_VisualElementFocusChangeTarget_<>c_<_cctor>b__9_0__;
  puVar4 = Method_UnityEngine_UIElements_VisualElement_Hierarchy_Remove__;
  puVar3 = Method_UnityEngine_UIElements_VisualElement_Hierarchy_MoveChildElement__;
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_02b5a400(&local_b8,*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_03d7f3c0);
    uStack_78 = uStack_b0;
    local_80 = local_b8;
    local_70 = local_a8;
    while (uVar10 = FUN_02739b98(&local_80,*(undefined8 *)puVar8), lVar11 = local_70,
          (uVar10 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar10 = FUN_03922f24(lVar11,0,0);
      if ((uVar10 & 1) == 0) {
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_038feb68(lVar11,**(undefined8 **)(*(long *)puVar9 + 0xb8),0);
        if (**(long **)(*(long *)puVar9 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_02b5a400(&local_b8,**(long **)(*(long *)puVar9 + 0xb8),*(undefined8 *)puVar5);
        uStack_98 = uStack_b0;
        local_a0 = local_b8;
        local_90 = local_a8;
        do {
          uVar10 = FUN_02739b98(&local_a0,*(undefined8 *)puVar4);
          if ((uVar10 & 1) == 0) {
            uVar12 = 2;
            goto LAB_03808e9c;
          }
          if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar10 = FUN_038ffb84(local_90,*(undefined8 *)puVar6,0);
        } while ((uVar10 & 1) != 0);
        lVar11 = *(long *)puVar9;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar11 = *(long *)puVar9;
        }
        lVar11 = **(long **)(lVar11 + 0xb8);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        iVar1 = *(int *)(lVar11 + 0x18);
        *(undefined4 *)(lVar11 + 0x18) = 0;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_03062488(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
        }
        uVar12 = 6;
LAB_03808e9c:
        FUN_02739b94(&local_a0,*(undefined8 *)puVar3);
        if ((uVar12 | 2) != 2) {
          FUN_02739b94(&local_80,*(undefined8 *)puVar7);
          return 0;
        }
      }
    }
    FUN_02739b94(&local_80,*(undefined8 *)puVar7);
    lVar11 = *(long *)puVar9;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar11 = *(long *)puVar9;
    }
    lVar11 = **(long **)(lVar11 + 0xb8);
    if (lVar11 != 0) {
      iVar1 = *(int *)(lVar11 + 0x18);
      *(undefined4 *)(lVar11 + 0x18) = 0;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_03062488(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
      }
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


