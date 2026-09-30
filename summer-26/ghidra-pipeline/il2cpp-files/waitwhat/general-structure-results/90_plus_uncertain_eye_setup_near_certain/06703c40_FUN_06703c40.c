/*
FUNCTION_NAME: FUN_06703c40
ENTRY_POINT: 06703c40
PROGRAM: waitwhat-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_18;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x06704278) */

void FUN_06703c40(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,float param_4,
                 long param_5,long param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  int iVar23;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  
  puVar1 = System_Data_LookupNode_TypeInfo;
  if ((bRam00000000075582c3 & 1) == 0) {
    FUN_03188a78(Oculus_Avatar2_OvrAvatarEntitySmoothingJointJobMonitor_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_CursorManager_TypeInfo);
    FUN_03188a78(Photon_Realtime_ClientState_TypeInfo);
    FUN_03188a78(PTR_DAT_070c2e88);
    FUN_03188a78(Oculus_Avatar2_OvrAvatarEntitySmoothingJointMonitor_TypeInfo);
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(System_Data_LookupNode_TypeInfo);
    FUN_03188a78(Oculus_Avatar2_OvrAvatarEyeTrackingBehaviorOvrPlugin_TypeInfo);
    FUN_03188a78(Oculus_Avatar2_OvrAvatarEyesPose_TypeInfo);
    FUN_03188a78(Fusion_Photon_Realtime_Async_OperationHandler_TypeInfo);
    FUN_03188a78(POpusCodec_Enums_OpusStatusCode_TypeInfo);
    FUN_03188a78(Oculus_Avatar2_OvrAvatarFacePose_TypeInfo);
    bRam00000000075582c3 = 1;
  }
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  uStack_80 = 0;
  uStack_78 = 0;
  uVar6 = FUN_03b9c340(0x35,*(undefined8 *)puVar1);
  if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  plStack_68 = (long *)FUN_03c04e30(param_6,*(undefined8 *)Oculus_Avatar2_OvrAvatarFacePose_TypeInfo
                                    ,&lStack_70,uVar6,
                                    *(undefined8 *)POpusCodec_Enums_OpusStatusCode_TypeInfo,0x10d,
                                    *(undefined8 *)
                                     Oculus_Avatar2_OvrAvatarEyeTrackingBehaviorOvrPlugin_TypeInfo);
  if (*(long *)(param_5 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  plVar7 = *(long **)(*(long *)(param_5 + 0x1d0) + 0x60);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  (**(code **)(*plVar7 + 0x218))(plVar7,*(undefined8 *)(*plVar7 + 0x220));
  fVar16 = (float)FUN_069bf798(0);
  fVar17 = (float)FUN_069bf798(param_2,0);
  uStack_78._0_4_ = (float)FUN_069bf798(param_3,0);
  uStack_80._0_4_ = fVar16;
  uStack_80._4_4_ = fVar17;
  uStack_78._4_4_ = param_4;
  if (*(int *)(*(long *)UnityEngine_UIElements_CursorManager_TypeInfo + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar16 = (float)FUN_0662f710(&uStack_80,0);
  if (fVar16 <= 0.0) {
    uStack_80._0_4_ = 1.0;
    uStack_80._4_4_ = 1.0;
    uStack_78._0_4_ = 1.0;
    uStack_78._4_4_ = 1.0;
  }
  else {
    fVar16 = 1.0 / fVar16;
    uStack_80._0_4_ = (float)uStack_80 * fVar16;
    uStack_80._4_4_ = uStack_80._4_4_ * fVar16;
    uStack_78._0_4_ = (float)uStack_78 * fVar16;
    uStack_78._4_4_ = uStack_78._4_4_ * fVar16;
  }
  if (*(long *)(param_5 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  plVar7 = *(long **)(*(long *)(param_5 + 0x1d0) + 0x48);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar18 = (**(code **)(*plVar7 + 0x218))(plVar7,*(undefined8 *)(*plVar7 + 0x220));
  uVar6 = uStack_80;
  if (*(long *)(param_5 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  plVar7 = *(long **)(*(long *)(param_5 + 0x1d0) + 0x80);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar2 = (float)uStack_78;
  uVar8 = (**(code **)(*plVar7 + 0x218))(plVar7,*(undefined8 *)(*plVar7 + 0x220));
  if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar9 = FUN_069d8404(uVar8,0,0);
  if ((uVar9 & 1) == 0) {
    if (*(long *)(param_5 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    plVar7 = *(long **)(*(long *)(param_5 + 0x1d0) + 0x80);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x218))(plVar7,*(undefined8 *)(*plVar7 + 0x220));
  }
  else {
    plVar7 = (long *)FUN_069b2560(0);
  }
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  iVar4 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
  iVar5 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
  if (*(long *)(param_5 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  plVar10 = *(long **)(*(long *)(param_5 + 0x1d0) + 0x88);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  iVar22 = *(int *)(param_5 + 0xb8);
  iVar23 = *(int *)(param_5 + 0xbc);
  uVar19 = (**(code **)(*plVar10 + 0x218))(plVar10,*(undefined8 *)(*plVar10 + 0x220));
  lVar13 = lStack_70;
  fVar16 = (float)iVar4 / (float)iVar5;
  fVar17 = (float)iVar22 / (float)iVar23;
  if (fVar16 <= fVar17) {
    fVar20 = 0.0;
    fVar21 = 1.0;
    if (fVar17 <= fVar16) {
      fVar17 = 0.0;
      fVar16 = 1.0;
    }
    else {
      fVar16 = fVar16 / fVar17;
      fVar17 = (1.0 - fVar16) * 0.5;
    }
  }
  else {
    fVar21 = fVar17 / fVar16;
    fVar16 = 1.0;
    fVar20 = (1.0 - fVar21) * 0.5;
    fVar17 = 0.0;
  }
  if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  *(undefined4 *)(lStack_70 + 0x10) = uVar18;
  *(undefined8 *)(lStack_70 + 0x14) = uVar6;
  *(undefined4 *)(lStack_70 + 0x1c) = uVar2;
  *(float *)(lStack_70 + 0x20) = fVar21;
  *(float *)(lStack_70 + 0x24) = fVar16;
  *(float *)(lStack_70 + 0x28) = fVar20;
  *(float *)(lStack_70 + 0x2c) = fVar17;
  lVar12 = *(long *)(param_5 + 0x1d0);
  *(undefined4 *)(lStack_70 + 0x30) = uVar19;
  *(long **)(lStack_70 + 0x38) = plVar7;
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  plVar7 = *(long **)(lVar12 + 0x68);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  bVar3 = (**(code **)(*plVar7 + 0x218))(plVar7,*(undefined8 *)(*plVar7 + 0x220));
  plVar7 = plStack_68;
  *(byte *)(lVar13 + 0x40) = bVar3 & 1;
  if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar6 = *param_7;
  *(undefined8 *)(lStack_70 + 0x4c) = param_7[1];
  *(undefined8 *)(lStack_70 + 0x44) = uVar6;
  puVar1 = Photon_Realtime_ClientState_TypeInfo;
  if (plStack_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar13 = *plStack_68;
  uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)Photon_Realtime_ClientState_TypeInfo) {
        puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_06704054;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar11 = (undefined8 *)FUN_031c0d08(plStack_68,*(long *)Photon_Realtime_ClientState_TypeInfo,0);
LAB_06704054:
  (*(code *)*puVar11)(plVar7,param_7,1,puVar11[1]);
  plVar7 = plStack_68;
  if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  *(undefined8 *)(lStack_70 + 0x58) = param_8;
  if (plStack_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar13 = *plStack_68;
  uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
        puVar11 = (undefined8 *)(lVar13 + (long)(*piVar14 + 0xb) * 0x10 + 0x138);
        goto LAB_067040cc;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar11 = (undefined8 *)FUN_031c0d08(plStack_68,*(long *)puVar1,0xb);
LAB_067040cc:
  (*(code *)*puVar11)(plVar7,0,puVar11[1]);
  plVar7 = plStack_68;
  puVar1 = Fusion_Photon_Realtime_Async_OperationHandler_TypeInfo;
  lVar13 = *(long *)Fusion_Photon_Realtime_Async_OperationHandler_TypeInfo;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar13 = *(long *)puVar1;
  }
  puVar11 = *(undefined8 **)(lVar13 + 0xb8);
  lVar12 = puVar11[9];
  if (lVar12 == 0) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar11 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar6 = *puVar11;
    lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)
                         Oculus_Avatar2_OvrAvatarEntitySmoothingJointJobMonitor_TypeInfo);
    FUN_04a59b8c(lVar12,uVar6,*(undefined8 *)Oculus_Avatar2_OvrAvatarEyesPose_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48) = lVar12;
  }
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar13 = *plVar7;
  lVar15 = *(long *)Oculus_Avatar2_OvrAvatarEntitySmoothingJointMonitor_TypeInfo;
  uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)(lVar15 + 0x20)) {
        lVar13 = lVar13 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10 + 0x138;
        goto LAB_067041b8;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  lVar13 = FUN_031c0d08(plVar7);
LAB_067041b8:
  lVar13 = thunk_FUN_031a5ef4(*(undefined8 *)(lVar13 + 8),lVar15);
  (**(code **)(lVar13 + 8))(plVar7,lVar12,lVar13);
  plVar7 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    lVar13 = *plStack_68;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_070c2e88) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0670423c;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_031c0d08(plStack_68,*(long *)PTR_DAT_070c2e88,0);
LAB_0670423c:
    (*(code *)*puVar11)(plVar7,puVar11[1]);
  }
  return;
}


