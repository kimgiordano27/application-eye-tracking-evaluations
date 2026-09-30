/*
FUNCTION_NAME: DinoFracture.Size$$GetWorldSpaceSize
ENTRY_POINT: 01c077bc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_18;telemetry_or_network_hits_4
*/


void DinoFracture_Size__GetWorldSpaceSize
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
               undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__;
  if ((DAT_03fed3c4 & 1) == 0) {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_ValidateCommandEvent_<>c_<_cctor>b__0_0__);
    thunk_FUN_01ad9084(
                      Method_Unity_VisualScripting_TypeUtility_<>c__DisplayClass8_0_<Instantiator>b__1__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed3c4 = 1;
  }
  lVar2 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
  FUN_0391fedc(lVar2,0);
  puVar1 = Method_Unity_VisualScripting_TypeUtility_<>c__DisplayClass8_0_<Instantiator>b__1__;
  if (lVar2 != 0) {
    FUN_01ed7044(lVar2,*(undefined8 *)
                        Method_UnityEngine_UIElements_ValidateCommandEvent_<>c_<_cctor>b__0_0__);
    lVar3 = FUN_01ed712c(lVar2,*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      FUN_038eae88(lVar3,0,0);
      lVar3 = FUN_01ed712c(lVar2,*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        FUN_038eae00(DAT_00b55294,lVar3,0);
        lVar3 = FUN_0391fab4(lVar2,0);
        lVar4 = FUN_0391c27c(param_5,0);
        if ((lVar4 != 0) && (FUN_03928d34(lVar4,0), lVar3 != 0)) {
          FUN_03928dd4(lVar3,0);
          lVar4 = *(long *)(param_5 + 0x40);
          lVar3 = FUN_01ed712c(lVar2,*(undefined8 *)puVar1);
          if ((lVar4 != 0) && (lVar3 != 0)) {
            uVar8 = (ulong)(uint)DAT_00b5521c;
            FUN_038ea93c(*(float *)(lVar4 + 0x20) * DAT_00b5521c,lVar3,
                         *(undefined8 *)(param_5 + 0x38),0);
            lVar3 = FUN_0391c2b8(param_5,0);
            if (((lVar3 != 0) && (lVar3 = FUN_0391fab4(lVar3,0), lVar3 != 0)) &&
               (lVar3 = FUN_03928c2c(lVar3,0),
               puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__,
               lVar3 != 0)) {
              uVar5 = FUN_0391c2b8(lVar3,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)puVar1);
              }
              FUN_03923a44(DAT_00b55088,uVar5,0);
              uVar5 = *(undefined8 *)(param_5 + 0x30);
              lVar3 = FUN_0391c27c(param_5,0);
              if (lVar3 != 0) {
                uVar6 = FUN_03928d34(lVar3,0);
                uVar9 = uVar8;
                uVar10 = param_3;
                lVar3 = FUN_0391c27c(param_5,0);
                puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__;
                if (lVar3 != 0) {
                  uVar7 = FUN_039274a0(lVar3,0);
                  uVar5 = FUN_01f259b0(uVar6,uVar8,param_3,uVar7,uVar9,uVar10,param_4,uVar5,
                                       *(undefined8 *)puVar1);
                  FUN_03923a44(0x3fc00000,uVar5,0);
                  FUN_03923a44(DAT_00b552cc,lVar2,0);
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


