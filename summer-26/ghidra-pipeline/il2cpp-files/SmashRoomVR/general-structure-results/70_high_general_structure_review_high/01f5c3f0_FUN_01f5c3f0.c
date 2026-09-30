/*
FUNCTION_NAME: FUN_01f5c3f0
ENTRY_POINT: 01f5c3f0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;telemetry_or_network_hits_3
*/


long FUN_01f5c3f0(long *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  plVar7 = *(long **)(param_2 + 0x38);
  if (plVar7 == (long *)0x0) {
    thunk_FUN_01ad9084(StringLiteral_2339);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    plVar7 = *(long **)(param_2 + 0x38);
    if (plVar7 == (long *)0x0) {
      FUN_01ae9ed0(param_2);
      plVar7 = *(long **)(param_2 + 0x38);
    }
  }
  lVar6 = *plVar7;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ae9e74(lVar6);
  }
  lVar6 = thunk_FUN_01afa9e0(param_1,lVar6);
  lVar8 = **(long **)(param_2 + 0x38);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ae9e74(lVar8);
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (lVar6 == 0) {
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0391f968(param_1,0,0);
    lVar3 = 0;
    if ((uVar4 & 1) != 0) {
      if (param_1 == (long *)0x0) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = param_1;
        if (*param_1 != *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__) {
          plVar7 = (long *)0x0;
        }
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_0391f968(plVar7,0,0);
      if ((uVar4 & 1) == 0) {
        if (param_1 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)StringLiteral_2339 + 0x130);
          if (*(byte *)(*param_1 + 0x130) < bVar1) {
            param_1 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
                   *(long *)StringLiteral_2339) {
            param_1 = (long *)0x0;
          }
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = FUN_0391f968(param_1,0,0);
        uVar4 = 0;
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        if (param_1 != (long *)0x0) {
          lVar6 = FUN_01e8a9f8(param_1,*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10));
          return lVar6;
        }
      }
      else if (plVar7 != (long *)0x0) {
        lVar6 = FUN_01ed712c(plVar7,*(undefined8 *)(*(long *)(param_2 + 0x38) + 8));
        return lVar6;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178(uVar4);
    }
  }
  else {
    lVar3 = thunk_FUN_01afa9e0(lVar6,lVar8);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b4841c(lVar6,lVar8);
    }
  }
  return lVar3;
}


