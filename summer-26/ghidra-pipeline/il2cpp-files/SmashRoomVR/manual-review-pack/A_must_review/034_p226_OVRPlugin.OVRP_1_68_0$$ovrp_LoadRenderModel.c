/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_LoadRenderModel
ENTRY_POINT: 03172a4c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_11;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_68_0__ovrp_LoadRenderModel
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_60;
  undefined8 uStack_4c;
  
  if ((DAT_03ff2100 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_F0CF66F9B123DCEBB39C38C5D8E4821D4E94DB593889C506BCA0827036F1B7EB
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff2100 = 1;
  }
  lVar7 = *(long *)(param_5 + 0x48);
  if (lVar7 != 0) {
    *(undefined2 *)(lVar7 + 0x10) = 0x101;
    *(undefined1 *)(lVar7 + 0x12) = 1;
    *(undefined1 *)(lVar7 + 0x40) = 1;
    *(undefined4 *)(lVar7 + 0x30) = 3;
    uVar3 = FUN_0391c27c(param_5,0);
    FUN_03136ee0(&uStack_80,uVar3,0,0);
    uStack_4c = uStack_6c;
    uStack_60 = uStack_80;
    uVar3 = CONCAT44(uStack_70,local_74);
    *(ulong *)(lVar7 + 0x1c) = CONCAT44(local_74,uStack_78);
    *(undefined8 *)(lVar7 + 0x14) = uStack_80;
    *(undefined8 *)(lVar7 + 0x28) = uStack_6c;
    *(undefined8 *)(lVar7 + 0x20) = uVar3;
    puVar2 = 
    Field_<PrivateImplementationDetails>_F0CF66F9B123DCEBB39C38C5D8E4821D4E94DB593889C506BCA0827036F1B7EB
    ;
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(long *)(param_5 + 0x48) != 0) {
      lVar7 = 0;
      uVar8 = 0;
      *(undefined4 *)(*(long *)(param_5 + 0x48) + 0x60) = 0x3f800000;
      while (*(long *)(param_5 + 0x58) != 0) {
        lVar4 = FUN_02b59714(*(long *)(param_5 + 0x58),uVar8 & 0xffffffff,*(undefined8 *)puVar2);
        if (*(long *)(param_5 + 0x58) == 0) break;
        uVar5 = FUN_02b59714(*(long *)(param_5 + 0x58),uVar8 & 0xffffffff,*(undefined8 *)puVar2);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
        uVar6 = FUN_03922f24(uVar5,0,0);
        if ((uVar6 & 1) == 0) {
          if ((*(long *)(param_5 + 0x48) == 0) || (lVar4 == 0)) break;
          lVar9 = *(long *)(*(long *)(param_5 + 0x48) + 0x38);
          lVar4 = FUN_0391c27c(lVar4,0);
          if ((lVar4 == 0) || (uVar10 = FUN_03928fd8(lVar4,0), lVar9 == 0)) break;
          if (*(uint *)(lVar9 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          lVar9 = lVar9 + lVar7;
          *(undefined4 *)(lVar9 + 0x20) = uVar10;
          *(int *)(lVar9 + 0x24) = (int)uVar3;
          *(undefined4 *)(lVar9 + 0x28) = param_3;
          *(undefined4 *)(lVar9 + 0x2c) = param_4;
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x10;
        if (uVar8 == 0x18) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


