/*
FUNCTION_NAME: FUN_0214aa3c
ENTRY_POINT: 0214aa3c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0214af2c) */

void FUN_0214aa3c(long param_1,long param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38 [2];
  
  puVar2 = StringLiteral_2360;
  if ((DAT_03fee090 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_2360);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_2979);
    DAT_03fee090 = 1;
  }
  puVar3 = StringLiteral_2979;
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar5 = UnityEngine_XR_Interaction_Toolkit_XRGrabInteractable__get_trackRotation
                    (*(undefined8 *)puVar3,0);
  if (lVar5 != 0) {
    lVar6 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ae9e74();
    }
    FUN_01e975a4(lVar5,param_1,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0xd8));
    if ((param_1 != 0) && (lVar5 = FUN_0391c2b8(param_1,0), lVar5 != 0)) {
      local_38[0] = FUN_039200ac(lVar5,0);
      uVar7 = UnityEngine_UIElements_Experimental_Easing__InQuad(local_38,0);
      lVar5 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ae9e74(lVar5);
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ae9e74();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar5 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ae9e74();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ae9e74();
      }
      uVar4 = local_38[0];
      lVar5 = **(long **)(lVar5 + 0xb8);
      if ((uVar7 & 1) == 0) {
        if (lVar5 != 0) {
          lVar6 = *(long *)(param_2 + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01ae9e74();
          }
          FUN_02614de8(&local_88,lVar5,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0xe8));
          puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
          uStack_58 = uStack_80;
          local_60 = local_88;
          local_48 = uStack_70;
          local_50 = local_78;
          local_40 = local_68;
          do {
            lVar5 = *(long *)(param_2 + 0x20);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_01ae9e74();
            }
            uVar7 = FUN_02786f44(&local_60,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x130));
            if ((uVar7 & 1) == 0) goto LAB_0214ae6c;
            uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
            if ((uVar1 & 1) == 0) {
              FUN_01ae9e74();
              uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
            }
            uVar8 = local_48;
            uVar7 = local_50 & 0xffffffff;
            if ((uVar1 & 1) == 0) {
              FUN_01ae9e74();
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar9 = FUN_03922f24(uVar8,param_1,0);
          } while ((uVar9 & 1) == 0);
          lVar5 = *(long *)(param_2 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ae9e74();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ae9e74();
          }
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          lVar5 = *(long *)(param_2 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ae9e74();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ae9e74();
          }
          lVar5 = **(long **)(lVar5 + 0xb8);
          if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
            FUN_01ae9e74(*(long *)(param_2 + 0x20));
          }
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar6 = *(long *)(param_2 + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01ae9e74();
          }
          FUN_02615e44(lVar5,uVar7,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x128));
LAB_0214ae6c:
          lVar5 = *(long *)(param_2 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ae9e74();
          }
          FUN_02787068(&local_60,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x138));
          return;
        }
      }
      else if (lVar5 != 0) {
        lVar6 = *(long *)(param_2 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ae9e74();
        }
        uVar7 = FUN_02614ba0(lVar5,uVar4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x30));
        lVar5 = *(long *)(param_2 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ae9e74(lVar5);
        }
        lVar5 = *(long *)(lVar5 + 0xc0);
        if ((uVar7 & 1) == 0) {
LAB_0214aeac:
          uVar8 = *(undefined8 *)(lVar5 + 0x20);
          thunk_FUN_01ad9084(
                            Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                            );
          FUN_01853f74();
          uVar8 = FUN_0304eec0(uVar8,0);
          uVar10 = FUN_0392ebcc(local_38,0);
          uVar11 = thunk_FUN_01ad9084(StringLiteral_2980);
          uVar8 = FUN_02ee7120(uVar11,uVar8,uVar10,0);
          thunk_FUN_01ad9084(Method_UnityEngine_InputSystem_PlayerInput_ActionEvent__ctor__);
          uVar10 = thunk_FUN_01afaadc();
          FUN_03920984(uVar10,uVar8,0);
                    /* WARNING: Subroutine does not return */
          FUN_01b48050(uVar10,param_2);
        }
        lVar5 = *(long *)(lVar5 + 0x18);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ae9e74();
        }
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar5 = *(long *)(param_2 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ae9e74();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ae9e74();
        }
        uVar4 = local_38[0];
        lVar5 = **(long **)(lVar5 + 0xb8);
        if (lVar5 != 0) {
          lVar6 = *(long *)(param_2 + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01ae9e74();
          }
          uVar8 = FUN_026148f4(lVar5,uVar4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48));
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              );
          }
          uVar7 = FUN_03922f24(uVar8,param_1,0);
          lVar5 = *(long *)(param_2 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ae9e74(lVar5);
          }
          lVar5 = *(long *)(lVar5 + 0xc0);
          if ((uVar7 & 1) == 0) goto LAB_0214aeac;
          lVar5 = *(long *)(lVar5 + 0x18);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ae9e74();
          }
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          lVar5 = *(long *)(param_2 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ae9e74();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ae9e74();
          }
          uVar4 = local_38[0];
          lVar5 = **(long **)(lVar5 + 0xb8);
          if (lVar5 != 0) {
            lVar6 = *(long *)(param_2 + 0x20);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01ae9e74();
            }
            FUN_02615e44(lVar5,uVar4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x128));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


