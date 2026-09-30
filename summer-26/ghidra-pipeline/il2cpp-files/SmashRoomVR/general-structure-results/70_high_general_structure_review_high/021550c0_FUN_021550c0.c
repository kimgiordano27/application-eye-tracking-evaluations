/*
FUNCTION_NAME: FUN_021550c0
ENTRY_POINT: 021550c0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x021555fc) */

undefined8 FUN_021550c0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  char local_24 [4];
  
  if ((DAT_03fee0c9 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    DAT_03fee0c9 = 1;
  }
  plVar9 = (long *)(param_1 + 0x20);
  lVar1 = *plVar9;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ae9e74();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ae9e74();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar1 = *plVar9;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ae9e74();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ae9e74();
  }
  uVar7 = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 8);
  local_24[0] = '\0';
  FUN_030a2d7c(uVar7,local_24,0);
  lVar1 = *plVar9;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ae9e74();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ae9e74();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar1 = *plVar9;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ae9e74();
  }
  lVar1 = FUN_02155068(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x30));
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  iVar6 = (int)*(long *)(lVar1 + 0x18);
  if (iVar6 == 1) {
    lVar2 = *plVar9;
    uVar8 = *(undefined8 *)(lVar1 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ae9e74();
    }
    lVar1 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar1 = *plVar9;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x18) = uVar8;
    lVar1 = *plVar9;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    thunk_FUN_01b4f09c(*(long *)(lVar1 + 0xb8) + 0x18,uVar8);
  }
  else if (*(long *)(lVar1 + 0x18) == 0) {
    lVar1 = *plVar9;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar1 = *plVar9;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    uVar3 = FUN_02154920(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x58));
    lVar1 = *plVar9;
    if ((uVar3 & 1) == 0) {
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ae9e74();
      }
      uVar7 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x20);
      lVar1 = thunk_FUN_01ad9084(
                                Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                                );
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = FUN_0304eec0(uVar7,0);
      uVar8 = thunk_FUN_01ad9084(StringLiteral_2997);
      uVar7 = FUN_02ede300(uVar8,uVar7,0);
      thunk_FUN_01ad9084(Method_UnityEngine_InputSystem_PlayerInput_ActionEvent__ctor__);
      uVar8 = thunk_FUN_01afaadc();
      FUN_03920984(uVar8,uVar7,0);
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar8,param_1);
    }
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar1 = *plVar9;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    lVar1 = FUN_02154998(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x60));
    if (lVar1 == 0) {
      lVar1 = *plVar9;
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ae9e74();
      }
      uVar8 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x20);
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                          );
      }
      plVar4 = (long *)FUN_0304eec0(uVar8,0);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar1 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
    }
    lVar2 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    FUN_0391fe00(lVar2,lVar1,0);
    lVar1 = *plVar9;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar1 = *plVar9;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    uVar3 = FUN_02154a10(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x68));
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178(uVar3,uVar3 & 0xffffffff);
    }
    FUN_03923d4c(lVar2,uVar3 & 0xffffffff,0);
    lVar1 = *plVar9;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    lVar1 = FUN_01ed7044(lVar2,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x70));
    lVar5 = *plVar9;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ae9e74();
    }
    uVar3 = FUN_02154a10(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x68));
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178(uVar3,uVar3 & 0xffffffff);
    }
    FUN_03923d4c(lVar1,uVar3 & 0xffffffff,0);
    lVar5 = *plVar9;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ae9e74();
    }
    FUN_02155758(lVar1,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x78));
    lVar1 = *plVar9;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    uVar3 = FUN_021548a8(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x80));
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)
                    Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_03923cd4(lVar2,0);
      }
    }
  }
  else if (1 < iVar6) {
    lVar1 = *plVar9;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x20);
    lVar1 = thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                              );
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_0304eec0(uVar7,0);
    uVar8 = thunk_FUN_01ad9084(StringLiteral_2996);
    uVar7 = FUN_02ede300(uVar8,uVar7,0);
    thunk_FUN_01ad9084(Method_UnityEngine_InputSystem_PlayerInput_ActionEvent__ctor__);
    uVar8 = thunk_FUN_01afaadc();
    FUN_03920984(uVar8,uVar7,0);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar8,param_1);
  }
  lVar1 = *plVar9;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ae9e74();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ae9e74();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar1 = *plVar9;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ae9e74();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ae9e74();
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x18);
  if (local_24[0] != '\0') {
    thunk_FUN_01b18c7c(uVar7,0);
  }
  return uVar8;
}


