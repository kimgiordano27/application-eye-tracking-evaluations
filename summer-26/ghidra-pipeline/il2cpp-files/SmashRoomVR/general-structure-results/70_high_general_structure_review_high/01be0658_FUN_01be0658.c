/*
FUNCTION_NAME: FUN_01be0658
ENTRY_POINT: 01be0658
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_01be0658(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  if ((DAT_03fed2ab & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_14__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_15__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed2ab = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar5 = *(long *)(param_1 + 0x60);
  if (lVar5 == 0) goto LAB_01be0970;
  if (*(int *)(lVar5 + 0x18) == 0) goto LAB_01be096c;
  uVar6 = *(undefined8 *)(lVar5 + 0x20);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03922f24(uVar6,0,0);
  if ((uVar3 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x60);
    if (lVar5 == 0) goto LAB_01be0970;
    if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_01be096c;
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03922f24(uVar6,0,0);
    if ((uVar3 & 1) == 0) {
      lVar5 = *(long *)(param_1 + 0x68);
      if (lVar5 == 0) goto LAB_01be0970;
      if (*(int *)(param_1 + 0x70) == 0) {
        if (1 < *(uint *)(lVar5 + 0x18)) {
          if (*(long *)(lVar5 + 0x28) != 0) {
            uVar3 = FUN_032a7cd8(*(long *)(lVar5 + 0x28),1,0);
            if ((uVar3 & 1) == 0) {
              return;
            }
            *(undefined4 *)(param_1 + 0x70) = 1;
            return;
          }
          goto LAB_01be0970;
        }
      }
      else if (*(uint *)(lVar5 + 0x18) != 0) {
        if (*(long *)(lVar5 + 0x20) != 0) {
          uVar3 = FUN_032a7cd8(*(long *)(lVar5 + 0x20),1,0);
          if ((uVar3 & 1) == 0) {
            return;
          }
          *(undefined4 *)(param_1 + 0x70) = 0;
          return;
        }
        goto LAB_01be0970;
      }
      goto LAB_01be096c;
    }
  }
  puVar2 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_15__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar5 = FUN_01f255f8(*(undefined8 *)puVar2);
  if (lVar5 == 0) goto LAB_01be0970;
  if (*(int *)(lVar5 + 0x18) != 0) {
    uVar3 = FUN_03923030(*(undefined8 *)(lVar5 + 0x20),0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_01be096c;
      plVar7 = *(long **)(param_1 + 0x60);
      if (plVar7 == (long *)0x0) goto LAB_01be0970;
      lVar8 = *(long *)(lVar5 + 0x20);
      if ((lVar8 != 0) &&
         (lVar4 = thunk_FUN_01afa9e0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
      goto LAB_01be0974;
      if ((int)plVar7[3] == 0) goto LAB_01be096c;
      plVar7[4] = lVar8;
      thunk_FUN_01b4f09c(plVar7 + 4,lVar8);
      lVar8 = *(long *)(param_1 + 0x60);
      if (lVar8 == 0) goto LAB_01be0970;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_01be096c;
      if (*(long *)(lVar8 + 0x20) == 0) goto LAB_01be0970;
      plVar7 = *(long **)(param_1 + 0x68);
      lVar8 = FUN_01e8a9f8(*(long *)(lVar8 + 0x20),
                           *(undefined8 *)
                            Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_14__);
      if (plVar7 == (long *)0x0) goto LAB_01be0970;
      if ((lVar8 != 0) &&
         (lVar4 = thunk_FUN_01afa9e0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
      goto LAB_01be0974;
      if ((int)plVar7[3] == 0) goto LAB_01be096c;
      plVar7[4] = lVar8;
      thunk_FUN_01b4f09c(plVar7 + 4,lVar8);
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    if (1 < *(uint *)(lVar5 + 0x18)) {
      uVar6 = *(undefined8 *)(lVar5 + 0x28);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_03923030(uVar6,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (1 < *(uint *)(lVar5 + 0x18)) {
        plVar7 = *(long **)(param_1 + 0x60);
        if (plVar7 == (long *)0x0) goto LAB_01be0970;
        lVar5 = *(long *)(lVar5 + 0x28);
        if ((lVar5 != 0) &&
           (lVar8 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
LAB_01be0974:
          uVar6 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
          FUN_01b48050(uVar6,0);
        }
        if (1 < *(uint *)(plVar7 + 3)) {
          plVar7[5] = lVar5;
          thunk_FUN_01b4f09c(plVar7 + 5,lVar5);
          lVar5 = *(long *)(param_1 + 0x60);
          if (lVar5 != 0) {
            if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_01be096c;
            if (*(long *)(lVar5 + 0x28) != 0) {
              plVar7 = *(long **)(param_1 + 0x68);
              lVar5 = FUN_01e8a9f8(*(long *)(lVar5 + 0x28),
                                   *(undefined8 *)
                                    Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_14__
                                  );
              if (plVar7 != (long *)0x0) {
                if ((lVar5 != 0) &&
                   (lVar8 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
                goto LAB_01be0974;
                if (1 < *(uint *)(plVar7 + 3)) {
                  plVar7[5] = lVar5;
                  thunk_FUN_01b4f09c(plVar7 + 5,lVar5);
                  *(undefined4 *)(param_1 + 0x70) = 1;
                  return;
                }
                goto LAB_01be096c;
              }
            }
          }
LAB_01be0970:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
      }
    }
  }
LAB_01be096c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


