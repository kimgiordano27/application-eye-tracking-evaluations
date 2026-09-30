/*
FUNCTION_NAME: FUN_01c03180
ENTRY_POINT: 01c03180
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_17;telemetry_or_network_hits_6
*/


void FUN_01c03180(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  
                    /* catch() { ... } // from try @ 01c0314c with catch @ 01c03180 */
  if ((DAT_03fed394 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Unity_VisualScripting_TypeUtility_<>c__DisplayClass8_0_<Instantiator>b__1__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
    DAT_03fed394 = 1;
  }
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_74 = 0;
  uStack_80 = 0;
  if (*(char *)(param_4 + 0x38) != '\0') {
    fVar10 = *(float *)(param_4 + 0x48);
    fVar5 = (float)FUN_03925cf4(0);
    fVar10 = fVar10 - fVar5;
    *(float *)(param_4 + 0x48) = fVar10;
    if (fVar10 <= 0.0) {
      *(undefined4 *)(param_4 + 0x48) = *(undefined4 *)(param_4 + 0x30);
      if ((*(long *)(param_4 + 0x40) != 0) &&
         (lVar1 = FUN_0391fab4(*(long *)(param_4 + 0x40),0), lVar1 != 0)) {
        uVar6 = FUN_03928d34(lVar1,0);
        if ((*(long *)(param_4 + 0x40) != 0) &&
           (uVar8 = param_2, uVar9 = param_3, lVar1 = FUN_0391fab4(*(long *)(param_4 + 0x40),0),
           lVar1 != 0)) {
          uVar7 = FUN_039291ac(lVar1,0);
          uVar12 = *(undefined4 *)(param_4 + 0x3c);
          if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar2 = FUN_03955c70(uVar6,param_2,param_3,uVar7,uVar8,uVar9,uVar12,&local_90,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          uVar6 = *(undefined8 *)(param_4 + 0x28);
          uVar8 = FUN_03959c54(&local_90,0);
          if (DAT_03fed256 == '\0') {
            thunk_FUN_01ad9084(
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                              );
            DAT_03fed256 = '\x01';
          }
          puVar4 = *(undefined4 **)
                    (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                    + 0xb8);
          uVar14 = *puVar4;
          uVar13 = puVar4[1];
          uVar11 = puVar4[2];
          uVar12 = puVar4[3];
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          lVar1 = FUN_01f259b0(uVar8,param_2,param_3,uVar14,uVar13,uVar11,uVar12,uVar6,
                               *(undefined8 *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__
                              );
          if (lVar1 != 0) {
            lVar3 = FUN_01ed712c(lVar1,*(undefined8 *)
                                        Method_Unity_VisualScripting_TypeUtility_<>c__DisplayClass8_0_<Instantiator>b__1__
                                );
            if ((*(long *)(param_4 + 0x50) != 0) && (lVar3 != 0)) {
              FUN_038ea5f0(*(float *)(*(long *)(param_4 + 0x50) + 0x20) * DAT_00b55298,lVar3,0);
              uVar6 = FUN_01c033cc(param_4,lVar1);
              FUN_03920cb0(param_4,uVar6,0);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return;
}


