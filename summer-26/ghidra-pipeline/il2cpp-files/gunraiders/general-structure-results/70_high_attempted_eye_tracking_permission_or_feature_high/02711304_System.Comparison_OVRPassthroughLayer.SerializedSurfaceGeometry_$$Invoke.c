/*
FUNCTION_NAME: System.Comparison<OVRPassthroughLayer.SerializedSurfaceGeometry>$$Invoke
ENTRY_POINT: 02711304
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_11;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_13;attempted_eye_tracking_permission_or_feature_enable;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined4 System_Comparison<OVRPassthroughLayer_SerializedSurfaceGeometry>__Invoke(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *unaff_x19;
  undefined8 uVar9;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  
  lVar4 = FUN_01c72394();
  uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*unaff_x26);
  }
  uVar9 = FUN_032e04b8(uVar9,0);
  uVar5 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf0,0);
  uVar6 = FUN_032e935c(uVar9,uVar5,0);
  if ((uVar6 & 1) == 0) {
    lVar4 = *unaff_x25;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01c72394();
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x26);
    }
    uVar9 = FUN_032e04b8(uVar9,0);
    uVar5 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb88,0);
    uVar6 = FUN_032e935c(uVar9,uVar5,0);
    if ((uVar6 & 1) == 0) {
      lVar4 = *unaff_x25;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01c72394();
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x26);
      }
      uVar9 = FUN_032e04b8(uVar9,0);
      uVar5 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf8,0);
      uVar6 = FUN_032e935c(uVar9,uVar5,0);
      if ((uVar6 & 1) == 0) {
        lVar4 = *unaff_x25;
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01c72394();
        }
        uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*unaff_x26);
        }
        uVar9 = FUN_032e04b8(uVar9,0);
        uVar5 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb90,0);
        uVar6 = FUN_032e935c(uVar9,uVar5,0);
        if ((uVar6 & 1) == 0) {
          lVar4 = *unaff_x25;
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01c72394();
          }
          uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*unaff_x26);
          }
          uVar9 = FUN_032e04b8(uVar9,0);
          uVar5 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbd0,0);
          uVar6 = FUN_032e935c(uVar9,uVar5,0);
          if ((uVar6 & 1) == 0) {
            lVar4 = *unaff_x25;
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_01c72394();
            }
            uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*unaff_x26);
            }
            uVar9 = FUN_032e04b8(uVar9,0);
            uVar5 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb78,0);
            uVar6 = FUN_032e935c(uVar9,uVar5,0);
            if ((uVar6 & 1) == 0) {
              thunk_FUN_01c273e8(PTR_DAT_04230a40);
              uVar9 = thunk_FUN_01c496e0();
              uVar5 = thunk_FUN_01c273e8(Oculus_Platform_MessageWithUserReportID_TypeInfo);
              FUN_032cd310(uVar9,uVar5,0);
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar9);
            }
            uVar7 = *unaff_x19;
            uVar6 = uVar7 & 0x7ff0000000000000;
            if ((-uVar7 & 0x7ff0000000000000) != 0) {
              uVar6 = uVar7;
            }
            if (*(int *)(*(long *)
                          VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                        + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar7 = FUN_0322441c(0,(uint)(uVar6 >> 0x20) ^ (uint)uVar6,0);
            uVar8 = unaff_x19[1];
            uVar6 = uVar8 & 0x7ff0000000000000;
            if ((-uVar8 & 0x7ff0000000000000) != 0) {
              uVar6 = uVar8;
            }
            uVar3 = (uint)(uVar6 >> 0x20) ^ (uint)uVar6;
          }
          else {
            uVar1 = FUN_032e3e6c();
            if (*(int *)(*(long *)
                          VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                        + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)
                                  VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                );
            }
            uVar1 = FUN_0322441c(0,uVar1,0);
            uVar2 = FUN_032e3e6c((long)unaff_x19 + 4,0);
            uVar1 = FUN_0322441c(uVar1,uVar2,0);
            uVar2 = FUN_032e3e6c(unaff_x19 + 1,0);
            uVar7 = FUN_0322441c(uVar1,uVar2,0);
            uVar7 = uVar7 & 0xffffffff;
            uVar3 = FUN_032e3e6c((long)unaff_x19 + 0xc,0);
          }
        }
        else {
          uVar1 = FUN_032d0404();
          if (*(int *)(*(long *)
                        VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)
                                VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                              );
          }
          uVar7 = FUN_0322441c(0,uVar1,0);
          uVar7 = uVar7 & 0xffffffff;
          uVar3 = FUN_032d0404(unaff_x19 + 1,0);
        }
      }
      else {
        uVar1 = FUN_032eee44();
        if (*(int *)(*(long *)
                      VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                            );
        }
        uVar7 = FUN_0322441c(0,uVar1,0);
        uVar7 = uVar7 & 0xffffffff;
        uVar3 = FUN_032eee44(unaff_x19 + 1,0);
      }
    }
    else {
      uVar1 = FUN_032cf300();
      if (*(int *)(*(long *)
                    VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)
                            VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                          );
      }
      uVar1 = FUN_0322441c(0,uVar1,0);
      uVar2 = FUN_032cf300((long)unaff_x19 + 4,0);
      uVar1 = FUN_0322441c(uVar1,uVar2,0);
      uVar2 = FUN_032cf300(unaff_x19 + 1,0);
      uVar7 = FUN_0322441c(uVar1,uVar2,0);
      uVar7 = uVar7 & 0xffffffff;
      uVar3 = FUN_032cf300((long)unaff_x19 + 0xc,0);
    }
  }
  else {
    uVar1 = FUN_032edfe0();
    if (*(int *)(*(long *)
                  VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)
                          VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                        );
    }
    uVar1 = FUN_0322441c(0,uVar1,0);
    uVar2 = FUN_032edfe0((long)unaff_x19 + 4,0);
    uVar1 = FUN_0322441c(uVar1,uVar2,0);
    uVar2 = FUN_032edfe0(unaff_x19 + 1,0);
    uVar7 = FUN_0322441c(uVar1,uVar2,0);
    uVar7 = uVar7 & 0xffffffff;
    uVar3 = FUN_032edfe0((long)unaff_x19 + 0xc,0);
  }
  uVar1 = FUN_0322441c(uVar7,uVar3,0);
  if (*(long *)(unaff_x24 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}


