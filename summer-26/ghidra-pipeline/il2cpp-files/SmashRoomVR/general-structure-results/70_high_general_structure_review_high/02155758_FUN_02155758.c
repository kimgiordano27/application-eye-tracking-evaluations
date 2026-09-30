/*
FUNCTION_NAME: FUN_02155758
ENTRY_POINT: 02155758
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02155758(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = StringLiteral_2360;
  if ((DAT_03fee0ca & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_2360);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_2979);
    DAT_03fee0ca = 1;
  }
  puVar2 = StringLiteral_2979;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar3 = UnityEngine_XR_Interaction_Toolkit_XRGrabInteractable__get_trackRotation
                    (*(undefined8 *)puVar2,0);
  if (lVar3 != 0) {
    lVar4 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ae9e74();
    }
    FUN_01e975a4(lVar3,param_1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x88));
    lVar3 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ae9e74();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ae9e74();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar3 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ae9e74();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ae9e74();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar3 != 0) {
      lVar4 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ae9e74();
      }
      uVar5 = FUN_029072e4(lVar3,param_1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x90));
      if ((uVar5 & 1) != 0) {
        return;
      }
      lVar3 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ae9e74();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ae9e74();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar3 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ae9e74();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ae9e74();
      }
      uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar5 = FUN_0391f968(uVar7,0,0);
      lVar3 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ae9e74(lVar3);
      }
      if ((uVar5 & 1) != 0) {
        uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x20);
        thunk_FUN_01ad9084(
                          Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                          );
        FUN_01853f74();
        uVar7 = FUN_0304eec0(uVar7,0);
        uVar6 = thunk_FUN_01ad9084(StringLiteral_2996);
        uVar7 = FUN_02ede300(uVar6,uVar7,0);
        thunk_FUN_01ad9084(Method_UnityEngine_InputSystem_PlayerInput_ActionEvent__ctor__);
        uVar6 = thunk_FUN_01afaadc();
        FUN_03920984(uVar6,uVar7,0);
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar6,param_2);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ae9e74();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar3 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ae9e74();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ae9e74();
      }
      *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18) = param_1;
      lVar3 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ae9e74();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ae9e74();
      }
      thunk_FUN_01b4f09c(*(long *)(lVar3 + 0xb8) + 0x18,param_1);
      lVar3 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ae9e74();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ae9e74();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      if (lVar3 != 0) {
        lVar4 = *(long *)(param_2 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ae9e74();
        }
        FUN_02907dd4(lVar3,param_1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x98));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


