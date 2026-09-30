/*
FUNCTION_NAME: FUN_03831234
ENTRY_POINT: 03831234
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_19;telemetry_or_network_hits_4
*/


void FUN_03831234(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  long *plVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff84d2 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_InputSystem_EnhancedTouch_Touch_<>c_<SaveAndResetState>b__80_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03da67b0);
    DAT_03ff84d2 = 1;
  }
  uVar8 = *(undefined8 *)(param_5 + 0x2a0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  bVar3 = FUN_0391f968(uVar8,0,0);
  *(byte *)(param_5 + 0x358) = bVar3 & 1;
  if ((bVar3 & 1) != 0) {
    return;
  }
  lVar4 = FUN_0391c2b8(param_5,0);
  if (lVar4 != 0) {
    uVar8 = FUN_039230bc(lVar4,0);
    uVar8 = FUN_02ee6c30(*(undefined8 *)
                          Method_UnityEngine_InputSystem_EnhancedTouch_Touch_<>c_<SaveAndResetState>b__80_0__
                         ,uVar8,*(undefined8 *)PTR_DAT_03da67b0,0);
    lVar4 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    FUN_0391fe00(lVar4,uVar8,0);
    if (lVar4 != 0) {
      plVar1 = (long *)(param_5 + 0x2a0);
      uVar8 = FUN_0391fab4(lVar4,0);
      *(undefined8 *)(param_5 + 0x2a0) = uVar8;
      thunk_FUN_01b4f09c(plVar1,uVar8);
      lVar4 = *(long *)(param_5 + 0x2a0);
      *(undefined1 *)(param_5 + 0x358) = 1;
      uVar8 = FUN_0391c27c(param_5,0);
      if (lVar4 != 0) {
        FUN_03929660(lVar4,uVar8,0,0);
        uVar8 = *(undefined8 *)(param_5 + 0x50);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = FUN_03922f24(uVar8,0,0);
        if ((uVar5 & 1) != 0) {
          FUN_038235ec(param_5);
        }
        uVar8 = *(undefined8 *)(param_5 + 0x50);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = FUN_03922f24(uVar8,0,0);
        if ((uVar5 & 1) == 0) {
          if (*(long *)(param_5 + 0x50) != 0) {
            uVar8 = FUN_03928c2c(*(long *)(param_5 + 0x50),0);
            uVar6 = FUN_0391c27c(param_5,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)puVar2);
            }
            uVar5 = FUN_03922f24(uVar8,uVar6,0);
            lVar4 = *(long *)(param_5 + 0x50);
            if (lVar4 != 0) {
              lVar9 = *(long *)(param_5 + 0x2a0);
              if ((uVar5 & 1) == 0) {
                uVar8 = FUN_03928d34(lVar4,0);
                if ((*(long *)(param_5 + 0x50) != 0) &&
                   (uVar6 = param_2, uVar11 = param_3,
                   uVar10 = FUN_039274a0(*(long *)(param_5 + 0x50),0), lVar9 != 0)) {
                  FUN_039297a8(uVar8,param_2,param_3,uVar10,uVar6,uVar11,param_4,lVar9,0);
                  return;
                }
              }
              else {
                FUN_03928280(lVar4,0);
                if (lVar9 != 0) {
                  FUN_039282dc(lVar9,0);
                  if (*(long *)(param_5 + 0x50) != 0) {
                    lVar4 = *(long *)(param_5 + 0x2a0);
                    uVar5 = FUN_03928fd8(*(long *)(param_5 + 0x50),0);
                    if (lVar4 != 0) goto LAB_03831510;
                  }
                }
              }
            }
          }
        }
        else {
          lVar4 = *plVar1;
          if (DAT_03fed257 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed257 = '\x01';
          }
          if (lVar4 != 0) {
            puVar7 = *(undefined4 **)
                      (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
            FUN_039282dc(*puVar7,puVar7[1],puVar7[2],lVar4,0);
            lVar4 = *plVar1;
            if (DAT_03fed256 == '\0') {
              thunk_FUN_01ad9084(
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                );
              DAT_03fed256 = '\x01';
            }
            if (lVar4 != 0) {
              uVar5 = (ulong)**(uint **)(*(long *)
                                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                        + 0xb8);
LAB_03831510:
              FUN_03929060(uVar5,lVar4,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


