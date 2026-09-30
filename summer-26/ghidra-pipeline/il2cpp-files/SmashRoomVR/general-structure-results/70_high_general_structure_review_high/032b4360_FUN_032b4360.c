/*
FUNCTION_NAME: FUN_032b4360
ENTRY_POINT: 032b4360
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8 FUN_032b4360(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long local_70 [2];
  undefined8 local_60;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  
  puVar2 = 
  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__;
  if ((DAT_03ff5885 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d83898);
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d86c90);
    thunk_FUN_01ad9084(PTR_DAT_03d86c98);
    DAT_03ff5885 = 1;
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar1 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
  uVar3 = FUN_03262f28(param_2,&local_48,0);
  lVar4 = local_40;
  if ((uVar3 & 1) != 0) {
    if (local_40 != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar4 = FUN_032630dc(lVar4,0);
      if (lVar4 != 0) {
        lVar5 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d83898);
        FUN_0321d700(lVar5,lVar4,0);
        if (lVar5 == 0) {
System_Diagnostics_Process__RaiseOnExited:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        *(undefined8 *)(lVar5 + 0x58) = *(undefined8 *)(param_1 + 0x28);
        thunk_FUN_01b4f09c();
        FUN_0321d78c(local_70,lVar5,*(undefined1 *)(param_1 + 0x30),1,0);
        plVar7 = (long *)(param_1 + 0x38);
        *plVar7 = local_70[0];
        thunk_FUN_01b4f09c(plVar7);
        *(undefined8 *)(param_1 + 0x50) = local_60;
        thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x50),local_60);
        lVar4 = *plVar7;
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_0391f968(lVar4,0,0);
        if ((uVar3 & 1) != 0) {
          if (*plVar7 != 0) {
            lVar4 = FUN_0391fab4(*plVar7,0);
            uVar6 = FUN_0391c27c(param_1,0);
            if (lVar4 != 0) {
              FUN_03929660(lVar4,uVar6,0,0);
              if (((*plVar7 != 0) && (lVar4 = FUN_0391fab4(*plVar7,0), lVar4 != 0)) &&
                 (lVar4 = FUN_03928c2c(lVar4,0), lVar4 != 0)) {
                FUN_039282dc(0,DAT_00b55138,DAT_00b55464,lVar4,0);
                if ((*plVar7 != 0) && (lVar4 = FUN_0391fab4(*plVar7,0), lVar4 != 0)) {
                  lVar4 = FUN_03928c2c(lVar4,0);
                  FUN_03914748(0xc2700000,0x3f800000,0,0,0);
                  if (lVar4 != 0) {
                    FUN_03929060(lVar4,0);
                    return 1;
                  }
                }
              }
            }
          }
          goto System_Diagnostics_Process__RaiseOnExited;
        }
      }
    }
    uVar6 = FUN_02edd6e8(*(undefined8 *)PTR_DAT_03d86c98,param_2,0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar4);
    }
    FUN_038f2e04(uVar6,0);
  }
  uVar6 = FUN_02edd6e8(*(undefined8 *)PTR_DAT_03d86c90,param_2,0);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar4);
  }
  FUN_038f2e04(uVar6,0);
  return 0;
}


