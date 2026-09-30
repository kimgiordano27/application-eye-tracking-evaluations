/*
FUNCTION_NAME: FUN_01c8c0f4
ENTRY_POINT: 01c8c0f4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_11;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_01c8c0f4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  long *plVar9;
  long *plVar10;
  
  if ((DAT_03fed82a & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c8c0ec with catch @ 01c8c110
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c8c0e0 with catch @ 01c8c114
                        */
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
                    /* try { // try from 01c8c11c to 01d8c123 has its CatchHandler @ 01c8c128 */
    thunk_FUN_01ad9084(StringLiteral_428);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c8c11c with catch @ 01c8c128
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c8c0d8 with catch @ 01c8c12c
                        */
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(StringLiteral_430);
    thunk_FUN_01ad9084(StringLiteral_477);
    thunk_FUN_01ad9084(StringLiteral_479);
    thunk_FUN_01ad9084(StringLiteral_480);
    thunk_FUN_01ad9084(StringLiteral_481);
    DAT_03fed82a = 1;
  }
  uVar4 = FUN_0391b750(param_1,0);
  puVar3 = StringLiteral_480;
  puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__;
  puVar1 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  if ((uVar4 & 1) == 0) {
    return;
  }
  uVar5 = FUN_038f1768(0);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  thunk_FUN_01b4f09c();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_038eec5c(9999,0);
  lVar6 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
  FUN_0391fe00(lVar6,*(undefined8 *)puVar3,0);
  if (lVar6 != 0) {
    lVar7 = FUN_01ed7044(lVar6,*(undefined8 *)StringLiteral_428);
    plVar9 = (long *)(param_1 + 0x38);
    *plVar9 = lVar7;
    thunk_FUN_01b4f09c(plVar9,lVar7);
    lVar7 = *plVar9;
    uVar5 = FUN_01f2f4f0(*(undefined8 *)StringLiteral_481,*(undefined8 *)StringLiteral_477);
    if (lVar7 != 0) {
      FUN_036de28c(lVar7,uVar5,0);
      plVar10 = (long *)*plVar9;
      uVar5 = FUN_01f2f4f0(*(undefined8 *)StringLiteral_479,*(undefined8 *)StringLiteral_430);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x578))(plVar10,uVar5,*(undefined8 *)(*plVar10 + 0x580));
        lVar6 = FUN_0391fab4(lVar6,0);
        plVar10 = (long *)(param_1 + 0x40);
        *plVar10 = lVar6;
        thunk_FUN_01b4f09c(plVar10,lVar6);
        if (*(long *)(param_1 + 0x48) != 0) {
          lVar6 = *plVar10;
          uVar5 = FUN_0391c27c(*(long *)(param_1 + 0x48),0);
          if (lVar6 != 0) {
            FUN_03929618(lVar6,uVar5,0);
            lVar6 = *plVar10;
            if (DAT_03fed256 == '\0') {
              thunk_FUN_01ad9084(
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                );
              DAT_03fed256 = '\x01';
            }
            if (lVar6 != 0) {
              puVar8 = *(undefined4 **)
                        (*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                        0xb8);
              FUN_03929060(*puVar8,puVar8[1],puVar8[2],puVar8[3],lVar6,0);
              if (*plVar9 != 0) {
                FUN_036df448(*plVar9,0,0);
                if (*plVar9 != 0) {
                  FUN_036dedf8(0x41c00000,*plVar9,0);
                  FUN_01c8c36c(param_1,*(undefined4 *)(param_1 + 0x2c));
                  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x2c);
                  return;
                }
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


