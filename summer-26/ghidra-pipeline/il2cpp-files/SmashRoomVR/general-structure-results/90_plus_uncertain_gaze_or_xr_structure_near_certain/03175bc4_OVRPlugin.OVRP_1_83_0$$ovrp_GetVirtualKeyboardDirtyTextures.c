/*
FUNCTION_NAME: OVRPlugin.OVRP_1_83_0$$ovrp_GetVirtualKeyboardDirtyTextures
ENTRY_POINT: 03175bc4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_11;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_83_0__ovrp_GetVirtualKeyboardDirtyTextures(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  if ((DAT_03ff2133 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13729);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff2133 = 1;
  }
  puVar2 = StringLiteral_13729;
  plVar11 = *(long **)(param_1 + 0x28);
  if (plVar11 != (long *)0x0) {
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_13729) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_03175c64;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)StringLiteral_13729,1);
LAB_03175c64:
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    bVar3 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    uVar9 = 0;
    *(byte *)(param_1 + 0x70) = bVar3 & 1;
    while (lVar7 = *(long *)(param_1 + 0x68), lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar7 = *(long *)(lVar7 + uVar9 * 8 + 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_03922f24(lVar7,0,0);
      if ((uVar5 & 1) == 0) {
        if (lVar7 == 0) break;
        lVar6 = FUN_0391c2b8(lVar7,0);
        if (*(char *)(param_1 + 0x70) == '\0') {
          if (lVar6 == 0) break;
          uVar5 = FUN_0391fbb4(lVar6,0);
          if ((uVar5 & 1) != 0) {
            FUN_0391fb70(lVar6,0,0);
          }
        }
        else {
          plVar11 = *(long **)(param_1 + 0x28);
          if (plVar11 == (long *)0x0) break;
          lVar8 = *plVar11;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
                goto LAB_03175d60;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar2,4);
LAB_03175d60:
          (*(code *)*puVar4)(plVar11,uVar9 & 0xffffffff,0,puVar4[1]);
          if (lVar6 == 0) break;
          uVar5 = FUN_0391fbb4(lVar6,0);
          if ((uVar5 & 1) == 0) {
            FUN_0391fb70(lVar6,1,0);
            if (*(char *)(param_1 + 0x38) != '\0') goto LAB_03175df4;
            FUN_0395a910(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar7,
                         0);
            FUN_0395aa44(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                         in_stack_00000018,lVar7,0);
          }
          else if (*(char *)(param_1 + 0x38) == '\0') {
            FUN_0395ac74(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar7,
                         0);
            FUN_0395ad0c(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                         in_stack_00000018,lVar7,0);
          }
          else {
LAB_03175df4:
            lVar7 = FUN_0391c27c(lVar7,0);
            if (lVar7 == 0) break;
            FUN_039297a8(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                         uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                         in_stack_00000018,lVar7,0);
          }
        }
      }
      uVar9 = uVar9 + 1;
      if (uVar9 == 0x13) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


