/*
FUNCTION_NAME: FUN_01be84fc
ENTRY_POINT: 01be84fc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_19;telemetry_or_network_hits_6
*/


void FUN_01be84fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
                    /* catch() { ... } // from try @ 01be84b4 with catch @ 01be8504 */
  if ((DAT_03fed2c8 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_33__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_16__);
    thunk_FUN_01ad9084(Method_System_Resources_ResourceReader_ResourceEnumerator_get_Value__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed2c8 = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  uVar8 = *(undefined8 *)(param_4 + 0x28);
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__;
  puVar5 = *(undefined4 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
  ;
  uVar13 = *puVar5;
  uVar12 = puVar5[1];
  uVar11 = puVar5[2];
  uVar10 = puVar5[3];
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar3 = FUN_01f259b0(param_1,param_2,param_3,uVar13,uVar12,uVar11,uVar10,uVar8,
                       *(undefined8 *)puVar1);
  if (lVar3 != 0) {
    lVar4 = FUN_01ed712c(lVar3,*(undefined8 *)
                                Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_33__
                        );
    plVar9 = (long *)(param_4 + 0x40);
    *plVar9 = lVar4;
    thunk_FUN_01b4f09c(plVar9,lVar4);
    if (*plVar9 != 0) {
      FUN_038fcf60(*plVar9,1,0);
      if (*plVar9 != 0) {
        FUN_038fcfa4(param_1,param_2,param_3,*plVar9,0,0);
        if (*plVar9 != 0) {
          uVar10 = FUN_038fcad8(*plVar9,0);
          lVar4 = *(long *)(param_4 + 0x48);
          *(undefined4 *)(param_4 + 0x54) = uVar10;
          *(undefined4 *)(param_4 + 0x58) = 0;
          if (lVar4 != 0) {
            lVar6 = *(long *)(lVar4 + 0x10);
            lVar7 = *(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_16__;
            *(undefined4 *)(lVar4 + 0x18) = 0;
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 2;
            if (lVar6 != 0) {
              if (*(int *)(lVar6 + 0x18) == 0) {
                FUN_02bd6ed8(param_1,param_2,param_3,lVar4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              }
              else {
                *(undefined4 *)(lVar4 + 0x18) = 1;
                *(int *)(lVar6 + 0x20) = (int)param_1;
                *(int *)(lVar6 + 0x24) = (int)param_2;
                *(int *)(lVar6 + 0x28) = (int)param_3;
              }
              lVar3 = FUN_0391fab4(lVar3,0);
              if ((*(long *)(param_4 + 0x30) != 0) &&
                 (uVar8 = FUN_0391fab4(*(long *)(param_4 + 0x30),0), lVar3 != 0)) {
                FUN_039294c8(lVar3,uVar8,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


