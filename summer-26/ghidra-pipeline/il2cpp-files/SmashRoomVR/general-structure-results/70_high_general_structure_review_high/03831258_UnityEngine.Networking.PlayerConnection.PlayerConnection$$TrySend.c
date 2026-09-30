/*
FUNCTION_NAME: UnityEngine.Networking.PlayerConnection.PlayerConnection$$TrySend
ENTRY_POINT: 03831258
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_17;telemetry_or_network_hits_3
*/


void UnityEngine_Networking_PlayerConnection_PlayerConnection__TrySend
               (ulong param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_InputSystem_EnhancedTouch_Touch_<>c_<SaveAndResetState>b__80_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03da67b0);
    *(undefined1 *)(unaff_x20 + 0x4d2) = 1;
  }
  uVar7 = *(undefined8 *)(param_6 + 0x2a0);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  bVar2 = FUN_0391f968(uVar7,0,0);
  *(byte *)(param_6 + 0x358) = bVar2 & 1;
  if ((bVar2 & 1) != 0) {
    return;
  }
  lVar3 = FUN_0391c2b8(param_6,0);
  if (lVar3 != 0) {
    uVar7 = FUN_039230bc(lVar3,0);
    uVar7 = FUN_02ee6c30(*(undefined8 *)
                          Method_UnityEngine_InputSystem_EnhancedTouch_Touch_<>c_<SaveAndResetState>b__80_0__
                         ,uVar7,*(undefined8 *)PTR_DAT_03da67b0,0);
    lVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    FUN_0391fe00(lVar3,uVar7,0);
    if (lVar3 != 0) {
      plVar1 = (long *)(param_6 + 0x2a0);
      uVar7 = FUN_0391fab4(lVar3,0);
      *(undefined8 *)(param_6 + 0x2a0) = uVar7;
      thunk_FUN_01b4f09c(plVar1,uVar7);
      lVar3 = *(long *)(param_6 + 0x2a0);
      *(undefined1 *)(param_6 + 0x358) = 1;
      uVar7 = FUN_0391c27c(param_6,0);
      if (lVar3 != 0) {
        FUN_03929660(lVar3,uVar7,0,0);
        uVar7 = *(undefined8 *)(param_6 + 0x50);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_03922f24(uVar7,0,0);
        if ((uVar4 & 1) != 0) {
          FUN_038235ec(param_6);
        }
        uVar7 = *(undefined8 *)(param_6 + 0x50);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_03922f24(uVar7,0,0);
        if ((uVar4 & 1) == 0) {
          if (*(long *)(param_6 + 0x50) != 0) {
            uVar7 = FUN_03928c2c(*(long *)(param_6 + 0x50),0);
            uVar5 = FUN_0391c27c(param_6,0);
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*unaff_x22);
            }
            uVar4 = FUN_03922f24(uVar7,uVar5,0);
            lVar3 = *(long *)(param_6 + 0x50);
            if (lVar3 != 0) {
              lVar8 = *(long *)(param_6 + 0x2a0);
              if ((uVar4 & 1) == 0) {
                uVar7 = FUN_03928d34(lVar3,0);
                if ((*(long *)(param_6 + 0x50) != 0) &&
                   (uVar5 = param_3, uVar10 = param_4,
                   uVar9 = FUN_039274a0(*(long *)(param_6 + 0x50),0), lVar8 != 0)) {
                  FUN_039297a8(uVar7,param_3,param_4,uVar9,uVar5,uVar10,param_5,lVar8,0);
                  return;
                }
              }
              else {
                FUN_03928280(lVar3,0);
                if (lVar8 != 0) {
                  FUN_039282dc(lVar8,0);
                  if (*(long *)(param_6 + 0x50) != 0) {
                    lVar3 = *(long *)(param_6 + 0x2a0);
                    uVar4 = FUN_03928fd8(*(long *)(param_6 + 0x50),0);
                    if (lVar3 != 0) goto LAB_03831510;
                  }
                }
              }
            }
          }
        }
        else {
          lVar3 = *plVar1;
          if (DAT_03fed257 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed257 = '\x01';
          }
          if (lVar3 != 0) {
            puVar6 = *(undefined4 **)
                      (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
            FUN_039282dc(*puVar6,puVar6[1],puVar6[2],lVar3,0);
            lVar3 = *plVar1;
            if (DAT_03fed256 == '\0') {
              thunk_FUN_01ad9084(
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                );
              DAT_03fed256 = '\x01';
            }
            if (lVar3 != 0) {
              uVar4 = (ulong)**(uint **)(*(long *)
                                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                        + 0xb8);
LAB_03831510:
              FUN_03929060(uVar4,lVar3,0);
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


