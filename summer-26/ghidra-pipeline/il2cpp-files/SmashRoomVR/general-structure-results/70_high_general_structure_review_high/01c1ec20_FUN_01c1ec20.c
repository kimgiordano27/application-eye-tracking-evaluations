/*
FUNCTION_NAME: FUN_01c1ec20
ENTRY_POINT: 01c1ec20
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;telemetry_or_network_hits_6
*/


undefined8 FUN_01c1ec20(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar3 = 
  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_<>c_<FailExpectedType>b__6_0__;
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03fed473 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_<>c_<FailExpectedType>b__6_0__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_FullSerializer_fsConfig_<>c_<_ctor>b__10_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed473 = 1;
  }
  uVar7 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03922f24(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar5 = FUN_01f255f8(*(undefined8 *)
                          Method_Unity_VisualScripting_FullSerializer_fsConfig_<>c_<_ctor>b__10_0__)
    ;
    if (lVar5 == 0) {
LAB_01c1ed78:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(long *)(lVar5 + 0x18) != 0) {
      if ((int)*(long *)(lVar5 + 0x18) == 0) {
LAB_01c1ed74:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      **(undefined8 **)(*(long *)puVar3 + 0xb8) = *(undefined8 *)(lVar5 + 0x20);
      thunk_FUN_01b4f09c(*(undefined8 *)(*(long *)puVar3 + 0xb8));
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (1 < (int)uVar1) {
        lVar8 = 5;
        do {
          if (uVar1 <= (int)lVar8 - 4U) goto LAB_01c1ed74;
          lVar6 = *(long *)(lVar5 + lVar8 * 8);
          if (lVar6 == 0) goto LAB_01c1ed78;
          uVar7 = FUN_0391c2b8(lVar6,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar2);
          }
          FUN_03923a90(uVar7,0);
          uVar1 = *(uint *)(lVar5 + 0x18);
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 + -4 < (int)uVar1);
      }
    }
  }
  return **(undefined8 **)(*(long *)puVar3 + 0xb8);
}


