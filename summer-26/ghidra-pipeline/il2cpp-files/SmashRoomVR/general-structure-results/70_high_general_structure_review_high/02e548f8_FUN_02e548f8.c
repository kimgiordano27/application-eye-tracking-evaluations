/*
FUNCTION_NAME: FUN_02e548f8
ENTRY_POINT: 02e548f8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_02e548f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = StringLiteral_5174;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff035a & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_5175);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(StringLiteral_5174);
    thunk_FUN_01ad9084(StringLiteral_5176);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_5177);
    DAT_03ff035a = 1;
  }
  uVar6 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03922f24(uVar6,0,0);
  puVar3 = StringLiteral_5176;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_01f25510(*(undefined8 *)puVar3);
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar6;
    thunk_FUN_01b4f09c(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar6);
  }
  uVar6 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03922f24(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)
                  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
    if ((uVar4 & 1) != 0) {
      lVar5 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
      FUN_0391fe00(lVar5,*(undefined8 *)StringLiteral_5177,0);
      if (lVar5 != 0) {
        uVar6 = FUN_01ed7044(lVar5,*(undefined8 *)StringLiteral_5175);
        **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar6;
        thunk_FUN_01b4f09c(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar6);
        if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
          uVar6 = FUN_0391c2b8(**(long **)(*(long *)puVar2 + 0xb8),0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar1);
          }
          FUN_03923cd4(uVar6,0);
          goto LAB_02e54ad0;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
LAB_02e54ad0:
  return **(undefined8 **)(*(long *)puVar2 + 0xb8);
}


