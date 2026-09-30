/*
FUNCTION_NAME: FUN_01c0f300
ENTRY_POINT: 01c0f300
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_01c0f300(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  if ((DAT_03fed3f7 & 1) == 0) {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_VisualElement_Hierarchy_MoveChildElement__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_VisualElement_Hierarchy_Remove__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_VisualElement_Hierarchy_RemoveAt__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_31__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_VisualElementFocusChangeTarget_<>c_<_cctor>b__9_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_VisualElementListPool_<>c_<_cctor>b__4_0__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_<>c_<_cctor>b__16_0__
                      );
    DAT_03fed3f7 = 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  if (*(char *)(param_1 + 0x38) != '\0') {
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar5 = FUN_03452478(*(long *)(param_1 + 0x20),0), lVar5 == 0)) goto LAB_01c0f694;
    uVar6 = FUN_0344193c(lVar5,0);
    if ((uVar6 & 1) != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_0391f968(uVar7,0,0);
      if ((uVar6 & 1) != 0) {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_01c0f694;
        *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38) = *(undefined8 *)(param_1 + 0x40);
        thunk_FUN_01b4f09c();
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_01c0f694;
        lVar5 = *(long *)(param_1 + 0x30);
        uVar4 = FUN_0391faf0(*(long *)(param_1 + 0x40),0);
        if (lVar5 == 0) goto LAB_01c0f694;
        *(undefined4 *)(lVar5 + 0x40) = uVar4;
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_01c0f694;
        FUN_0391fb2c(*(long *)(param_1 + 0x40),0x15,0);
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_01c0f694;
        lVar5 = FUN_01ed712c(*(long *)(param_1 + 0x40),
                             *(undefined8 *)
                              Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_31__);
        lVar8 = *(long *)(param_1 + 0x30);
        if (lVar8 == 0) goto LAB_01c0f694;
        if (*(int *)(lVar8 + 0x40) == 0xe) {
          if (lVar5 == 0) goto LAB_01c0f694;
          fVar9 = *(float *)(lVar5 + 0x40) / 5.0;
        }
        else {
          if (lVar5 == 0) goto LAB_01c0f694;
          fVar9 = *(float *)(lVar5 + 0x40);
        }
        *(float *)(lVar8 + 0x110) = fVar9;
        *(undefined8 *)(lVar8 + 0x120) = *(undefined8 *)(lVar5 + 0x60);
        *(undefined4 *)(lVar8 + 0x128) = *(undefined4 *)(lVar5 + 0x68);
        *(undefined4 *)(lVar8 + 0x134) = *(undefined4 *)(lVar5 + 0x78);
        if ((*(long *)(param_1 + 0x40) == 0) ||
           (lVar5 = FUN_0391fab4(*(long *)(param_1 + 0x40),0), lVar5 == 0)) goto LAB_01c0f694;
        fVar9 = (float)FUN_03928d34(lVar5,0);
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar5 = FUN_0391fab4(*(long *)(param_1 + 0x28),0), lVar5 == 0)) goto LAB_01c0f694;
        fVar10 = (float)FUN_03928d34(lVar5,0);
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar5 = FUN_0391fab4(*(long *)(param_1 + 0x28),0), lVar5 == 0)) goto LAB_01c0f694;
        fVar11 = (float)FUN_039291ac(lVar5,0);
        if ((*(long *)(param_1 + 0x40) == 0) ||
           (lVar5 = FUN_0391fab4(*(long *)(param_1 + 0x40),0), lVar5 == 0)) goto LAB_01c0f694;
        FUN_03928d34(lVar5,0);
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar5 = FUN_0391fab4(*(long *)(param_1 + 0x28),0), lVar5 == 0)) goto LAB_01c0f694;
        FUN_03928d34(lVar5,0);
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar5 = FUN_0391fab4(*(long *)(param_1 + 0x28),0), lVar5 == 0)) goto LAB_01c0f694;
        FUN_039291ac(lVar5,0);
        if ((*(long *)(param_1 + 0x40) == 0) ||
           (lVar5 = FUN_0391fab4(*(long *)(param_1 + 0x40),0), lVar5 == 0)) goto LAB_01c0f694;
        FUN_03928d34(lVar5,0);
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar5 = FUN_0391fab4(*(long *)(param_1 + 0x28),0), lVar5 == 0)) goto LAB_01c0f694;
        FUN_03928d34(lVar5,0);
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar5 = FUN_0391fab4(*(long *)(param_1 + 0x28),0), lVar5 == 0)) goto LAB_01c0f694;
        FUN_039291ac(lVar5,0);
        fVar11 = (fVar9 - fVar10) / fVar11;
        *(float *)(lVar8 + 0x100) = fVar11 + fVar11;
        lVar5 = *(long *)(param_1 + 0x30);
        if (lVar5 == 0) goto LAB_01c0f694;
        uVar4 = 0x40800000;
        if ((4.0 < *(float *)(lVar5 + 0x100)) ||
           (uVar4 = 0x40000000, *(float *)(lVar5 + 0x100) < 2.0)) {
          *(undefined4 *)(lVar5 + 0x100) = uVar4;
        }
        *(undefined1 *)(lVar5 + 0x50) = 1;
      }
    }
    if (*(char *)(param_1 + 0x38) != '\0') {
      if (*(long *)(param_1 + 0x48) == 0) {
LAB_01c0f694:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_02b5a400(&local_68,*(long *)(param_1 + 0x48),
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_VisualElementFocusChangeTarget_<>c_<_cctor>b__9_0__
                  );
      puVar3 = Method_UnityEngine_UIElements_VisualElementListPool_<>c_<_cctor>b__4_0__;
      puVar2 = Method_UnityEngine_UIElements_VisualElement_Hierarchy_Remove__;
      puVar1 = 
      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_<>c_<_cctor>b__16_0__
      ;
      while (uVar6 = FUN_02739b98(&local_68,*(undefined8 *)puVar2), lVar5 = local_58,
            (uVar6 & 1) != 0) {
        if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_038ffafc(local_58,*(undefined8 *)puVar3,0);
        FUN_038ff458(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                     *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),lVar5,
                     *(undefined8 *)puVar1,0);
      }
      FUN_02739b94(&local_68,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_VisualElement_Hierarchy_MoveChildElement__);
    }
  }
  return;
}


