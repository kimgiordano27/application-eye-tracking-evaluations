/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetTrackingPositionEnabled
ENTRY_POINT: 01f95bb4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_11;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_9
*/


undefined4 OVRPlugin_OVRP_1_1_0__ovrp_SetTrackingPositionEnabled(void)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  
  uVar5 = FUN_01f7f404();
  if ((uVar5 & 1) != 0) {
    return 1;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar5 = FUN_01f7f404();
  if ((uVar5 & 1) != 0) {
    return 2;
  }
  if (unaff_x20 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0__ovrp_GetSystemCpuLevel;
  uVar5 = FUN_01f80ed8();
  if ((uVar5 & 1) == 0) {
    if (unaff_x19 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0__ovrp_GetSystemCpuLevel;
    uVar5 = FUN_01f80ed8();
    if ((uVar5 & 1) != 0) goto LAB_01f95c20;
  }
  else {
LAB_01f95c20:
    uVar5 = FUN_01f80ed8();
    if ((uVar5 & 1) == 0) {
LAB_01f95c78:
      uVar5 = FUN_01f80ed8();
      if ((uVar5 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0__ovrp_GetSystemCpuLevel;
        uVar6 = (**(code **)(*unaff_x19 + 0x408))();
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01220628(*unaff_x22);
        }
        uVar5 = FUN_01f7f404(uVar6);
        if ((uVar5 & 1) != 0) {
          return 1;
        }
        unaff_x19 = (long *)(**(code **)(*unaff_x19 + 0x408))();
        goto LAB_01f95d44;
      }
      uVar6 = (**(code **)(*unaff_x20 + 0x408))();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01220628(*unaff_x22);
      }
      uVar5 = FUN_01f7f404(uVar6);
      if ((uVar5 & 1) != 0) {
        return 2;
      }
      unaff_x20 = (long *)(**(code **)(*unaff_x20 + 0x408))();
    }
    else {
      if (unaff_x19 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0__ovrp_GetSystemCpuLevel;
      uVar5 = FUN_01f80ed8();
      if ((uVar5 & 1) == 0) goto LAB_01f95c78;
      unaff_x20 = (long *)(**(code **)(*unaff_x20 + 0x408))();
      unaff_x19 = (long *)(**(code **)(*unaff_x19 + 0x408))();
    }
    if (unaff_x20 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0__ovrp_GetSystemCpuLevel;
  }
LAB_01f95d44:
  uVar5 = FUN_01f81644(unaff_x20,0);
  if ((uVar5 & 1) != 0) {
    if (unaff_x19 == (long *)0x0) goto OVRPlugin_OVRP_1_1_0__ovrp_GetSystemCpuLevel;
    uVar5 = FUN_01f81644(unaff_x19,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      puVar2 = PTR_DAT_027b3ec0;
      lVar7 = *(long *)PTR_DAT_027b3ec0;
      bVar1 = *(byte *)(lVar7 + 0x130);
      if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x19 + 200) + ((ulong)bVar1 - 1) * 8) != lVar7)) {
LAB_01f95eb0:
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(unaff_x19);
      }
      if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x20 + 200) + ((ulong)bVar1 - 1) * 8) != lVar7)) {
LAB_01f95ea8:
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(unaff_x20);
      }
      uVar3 = FUN_01f958f8(unaff_x19,unaff_x20);
      lVar7 = *(long *)puVar2;
      bVar1 = *(byte *)(lVar7 + 0x130);
      if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x20 + 200) + ((ulong)bVar1 - 1) * 8) != lVar7))
      goto LAB_01f95ea8;
      if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x19 + 200) + ((ulong)bVar1 - 1) * 8) != lVar7))
      goto LAB_01f95eb0;
      uVar4 = FUN_01f958f8(unaff_x20,unaff_x19);
      goto LAB_01f95e78;
    }
  }
  uVar3 = (**(code **)(*unaff_x20 + 0x288))(unaff_x20,unaff_x19,*(undefined8 *)(*unaff_x20 + 0x290))
  ;
  if (unaff_x19 != (long *)0x0) {
    uVar4 = (**(code **)(*unaff_x19 + 0x288))
                      (unaff_x19,unaff_x20,*(undefined8 *)(*unaff_x19 + 0x290));
LAB_01f95e78:
    if ((uVar4 & 1) == (uVar3 & 1)) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
      if ((uVar3 & 1) != 0) {
        uVar8 = 2;
      }
    }
    return uVar8;
  }
OVRPlugin_OVRP_1_1_0__ovrp_GetSystemCpuLevel:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


