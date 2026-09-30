/*
FUNCTION_NAME: OVRPlugin.OVRP_1_83_0$$ovrp_GetVirtualKeyboardTextureData
ENTRY_POINT: 03175c40
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_83_0__ovrp_GetVirtualKeyboardTextureData
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 in_ZR;
  byte bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_x9;
  int *in_x10;
  int *piVar8;
  long unaff_x19;
  ulong uVar9;
  long *plVar10;
  long *unaff_x24;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
      goto LAB_03175c64;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar3 = (undefined8 *)FUN_01ae9f78();
LAB_03175c64:
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  bVar2 = (*(code *)*puVar3)();
  uVar9 = 0;
  *(byte *)(unaff_x19 + 0x70) = bVar2 & 1;
  do {
    lVar6 = *(long *)(unaff_x19 + 0x68);
    if (lVar6 == 0) goto LAB_03175e94;
    if (*(uint *)(lVar6 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar6 = *(long *)(lVar6 + uVar9 * 8 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03922f24(lVar6,0,0);
    if ((uVar4 & 1) == 0) {
      if (lVar6 == 0) goto LAB_03175e94;
      lVar5 = FUN_0391c2b8(lVar6,0);
      if (*(char *)(unaff_x19 + 0x70) == '\0') {
        if (lVar5 == 0) goto LAB_03175e94;
        uVar4 = FUN_0391fbb4(lVar5,0);
        if ((uVar4 & 1) != 0) {
          FUN_0391fb70(lVar5,0,0);
        }
      }
      else {
        plVar10 = *(long **)(unaff_x19 + 0x28);
        if (plVar10 == (long *)0x0) goto LAB_03175e94;
        lVar7 = *plVar10;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x24) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 4) * 0x10 + 0x138);
              goto LAB_03175d60;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ae9f78(plVar10,*unaff_x24,4);
LAB_03175d60:
        (*(code *)*puVar3)(plVar10,uVar9 & 0xffffffff,0,puVar3[1]);
        if (lVar5 == 0) goto LAB_03175e94;
        uVar4 = FUN_0391fbb4(lVar5,0);
        if ((uVar4 & 1) == 0) {
          FUN_0391fb70(lVar5,1,0);
          if (*(char *)(unaff_x19 + 0x38) != '\0') goto LAB_03175df4;
          FUN_0395a910(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar6,0)
          ;
          FUN_0395aa44(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                       in_stack_00000018,lVar6,0);
        }
        else if (*(char *)(unaff_x19 + 0x38) == '\0') {
          FUN_0395ac74(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar6,0)
          ;
          FUN_0395ad0c(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                       in_stack_00000018,lVar6,0);
        }
        else {
LAB_03175df4:
          lVar6 = FUN_0391c27c(lVar6,0);
          if (lVar6 == 0) {
LAB_03175e94:
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_039297a8(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                       uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                       in_stack_00000018,lVar6,0);
        }
      }
    }
    uVar9 = uVar9 + 1;
    if (uVar9 == 0x13) {
      return;
    }
  } while( true );
}


