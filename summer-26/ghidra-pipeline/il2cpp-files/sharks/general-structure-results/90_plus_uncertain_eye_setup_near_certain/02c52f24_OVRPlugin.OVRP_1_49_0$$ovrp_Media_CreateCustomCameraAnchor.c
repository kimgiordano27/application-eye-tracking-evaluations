/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_CreateCustomCameraAnchor
ENTRY_POINT: 02c52f24
PROGRAM: sharks-libil2cpp.so
SCORE: 110
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_8;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_5
*/


byte OVRPlugin_OVRP_1_49_0__ovrp_Media_CreateCustomCameraAnchor
               (long *param_1,uint param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 extraout_w1;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint unaff_w23;
  undefined4 uStack_14;
  ulong uStack_10;
  long *plStack_8;
  
  puVar3 = PTR_DAT_037f6f10;
  uVar10 = (ulong)param_2;
  if ((DAT_03a26144 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f6f10);
    DAT_03a26144 = 1;
  }
  uVar8 = *param_3 - param_1[2];
  if ((long)uVar8 < 0) {
    uVar8 = uVar8 + 1;
  }
  iVar2 = (int)(uVar8 >> 1) + -1;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar8 = FUN_02b4ae98(uVar10,0);
  if ((uVar8 & 1) == 0) {
OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCustomCameraAnchorPose:
    if (*(char *)((long)param_1 + 0x2a) != '\0') {
      iVar1 = *(int *)((long)param_1 + 0x2c);
      *(int *)((long)param_1 + 0x2c) = iVar1 + 1;
      if (0xfa < iVar1) {
        FUN_02c530c0(uVar8,param_2 & 0xffff);
LAB_02c530a0:
        FUN_015d6960(*(undefined8 *)puVar3);
        uVar8 = FUN_02b4afd8(uVar10,unaff_w23,0);
        FUN_02c530c0(uVar8,uVar8 & 0xffffffff);
        uStack_14 = extraout_w1;
        uStack_10 = uVar10;
        plStack_8 = param_1;
        uVar5 = thunk_FUN_01851c08(PTR_DAT_037f2f90);
        uVar5 = thunk_FUN_018617ec(uVar5,&uStack_14);
        uVar6 = thunk_FUN_01851c08(PTR_DAT_03800808);
        uVar5 = FUN_02a2e6b0(uVar6,uVar5,0);
        thunk_FUN_01851c08(PTR_DAT_037f87a8);
        uVar6 = thunk_FUN_01861bbc();
        uVar7 = thunk_FUN_01851c08(PTR_DAT_03800550);
        FUN_02b3cc64(uVar6,uVar5,uVar7,0);
        uVar5 = thunk_FUN_01851c08(PTR_DAT_0380cbc8);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar6,uVar5);
      }
    }
    bVar4 = (**(code **)(*param_1 + 0x178))(param_1,uVar10,iVar2,*(undefined8 *)(*param_1 + 0x180));
  }
  else {
    if ((ushort *)param_1[3] <= (ushort *)*param_3) {
      lVar9 = param_1[4];
      if ((lVar9 != 0) && (*(char *)(lVar9 + 0x30) == '\0')) {
        if ((char)param_1[5] != '\0') {
          *(undefined1 *)((long)param_1 + 0x29) = 1;
          *(short *)(lVar9 + 0x20) = (short)param_2;
        }
        bVar4 = 0;
        *(undefined1 *)((long)param_1 + 0x2a) = 0;
        goto LAB_02c53060;
      }
      goto OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCustomCameraAnchorPose;
    }
    unaff_w23 = (uint)*(ushort *)*param_3;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar8 = FUN_02b4afa8(unaff_w23,0);
    if ((uVar8 & 1) == 0) goto OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCustomCameraAnchorPose;
    if (*(char *)((long)param_1 + 0x2a) != '\0') {
      iVar1 = *(int *)((long)param_1 + 0x2c);
      *(int *)((long)param_1 + 0x2c) = iVar1 + 1;
      if (0xfa < iVar1) goto LAB_02c530a0;
    }
    *param_3 = *param_3 + 2;
    bVar4 = (**(code **)(*param_1 + 0x188))
                      (param_1,uVar10,unaff_w23,iVar2,*(undefined8 *)(*param_1 + 400));
  }
  *(byte *)((long)param_1 + 0x2a) = bVar4 & 1;
LAB_02c53060:
  return bVar4 & 1;
}


