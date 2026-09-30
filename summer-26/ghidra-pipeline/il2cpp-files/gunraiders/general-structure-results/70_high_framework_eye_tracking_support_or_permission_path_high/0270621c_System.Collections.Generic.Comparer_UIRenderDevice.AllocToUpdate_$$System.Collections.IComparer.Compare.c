/*
FUNCTION_NAME: System.Collections.Generic.Comparer<UIRenderDevice.AllocToUpdate>$$System.Collections.IComparer.Compare
ENTRY_POINT: 0270621c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior;attempted_use
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_9;telemetry_or_network_hits_9;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow
*/


undefined4
System_Collections_Generic_Comparer<UIRenderDevice_AllocToUpdate>__System_Collections_IComparer_Compare
          (void)

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
  long *unaff_x23;
  long *unaff_x24;
  
  lVar4 = FUN_01c72394();
  uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*unaff_x24);
  }
  uVar9 = FUN_032e04b8(uVar9,0);
  uVar5 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb88,0);
  uVar6 = FUN_032e935c(uVar9,uVar5,0);
  if ((uVar6 & 1) == 0) {
    lVar4 = *unaff_x23;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01c72394();
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x24);
    }
    uVar9 = FUN_032e04b8(uVar9,0);
    uVar5 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf8,0);
    uVar6 = FUN_032e935c(uVar9,uVar5,0);
    if ((uVar6 & 1) == 0) {
      lVar4 = *unaff_x23;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01c72394();
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x24);
      }
      uVar9 = FUN_032e04b8(uVar9,0);
      uVar5 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb90,0);
      uVar6 = FUN_032e935c(uVar9,uVar5,0);
      if ((uVar6 & 1) == 0) {
        lVar4 = *unaff_x23;
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01c72394();
        }
        uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*unaff_x24);
        }
        uVar9 = FUN_032e04b8(uVar9,0);
        uVar5 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbd0,0);
        uVar6 = FUN_032e935c(uVar9,uVar5,0);
        if ((uVar6 & 1) == 0) {
          lVar4 = *unaff_x23;
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01c72394();
          }
          uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*unaff_x24);
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
                    VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo +
                  0xe0) == 0) {
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
  uVar1 = FUN_0322441c(uVar7,uVar3,0);
  return uVar1;
}


