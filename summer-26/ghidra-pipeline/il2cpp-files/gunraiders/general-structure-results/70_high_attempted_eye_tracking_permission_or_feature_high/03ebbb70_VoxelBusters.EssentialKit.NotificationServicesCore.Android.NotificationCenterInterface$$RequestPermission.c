/*
FUNCTION_NAME: VoxelBusters.EssentialKit.NotificationServicesCore.Android.NotificationCenterInterface$$RequestPermission
ENTRY_POINT: 03ebbb70
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_16;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void VoxelBusters_EssentialKit_NotificationServicesCore_Android_NotificationCenterInterface__RequestPermission
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long unaff_x23;
  int iVar10;
  long *unaff_x26;
  int unaff_w28;
  undefined8 uVar11;
  int unaff_w29;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iStack000000000000000c;
  int in_stack_00000018;
  
  iVar2 = FUN_03e19b88(param_5,param_6,0);
  iVar3 = FUN_03e19b88();
  iStack000000000000000c = in_stack_00000018;
  iVar5 = 0;
  if (in_stack_00000018 != -1) {
    iVar5 = iVar3;
  }
  iVar3 = FUN_03e19b88();
  if (iVar2 < 1) {
    lVar9 = FUN_03e2283c();
    if (lVar9 == 0) goto LAB_03ebbf54;
    iVar2 = FUN_03e19b88(lVar9,unaff_w28,0);
    if (0 < iVar2) goto LAB_03ebbc04;
    fVar15 = 15.0;
    param_3 = 15.0;
  }
  else {
LAB_03ebbc04:
    uVar6 = FUN_03e255e8();
    lVar9 = *unaff_x26;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar9);
      lVar9 = *unaff_x26;
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x20);
    if (*(int *)(*(long *)Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar9 = FUN_03f3f880(uVar6,uVar11,0,0);
    lVar7 = FUN_03f3f880(uVar6,*(undefined8 *)(*(long *)(*unaff_x26 + 0xb8) + 0x10),0,0);
    if ((lVar7 == 0) || (FUN_03f11ff8(lVar7,0), lVar9 == 0)) goto LAB_03ebbf54;
    fVar15 = param_3;
    FUN_03f11ff8(lVar9,0);
    fVar15 = fVar15 / (float)iVar2;
  }
  iVar3 = iVar3 + unaff_w29;
  if (iVar5 < iVar3) {
    plVar8 = *(long **)(unaff_x23 + 0x440);
    if (plVar8 == (long *)0x0) goto LAB_03ebbf54;
    uVar6 = (**(code **)(*plVar8 + 0x768))(plVar8,*(undefined8 *)(*plVar8 + 0x770));
    fVar12 = (float)FUN_03e3c88c(uVar6,0);
    if (DAT_0452e178 == '\0') {
      FUN_01c5d288(PTR_DAT_0422fa60);
      DAT_0452e178 = '\x01';
    }
    fVar12 = (fVar12 - param_3) / fVar15;
    if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar6 = 0x7f800000;
    iVar2 = -0x80000000;
    if ((float)(int)fVar12 != INFINITY) {
      iVar2 = (int)fVar12;
    }
    if (iVar2 < iVar3) {
      iVar3 = FUN_03e19b88();
      fVar12 = (float)uVar6;
      if ((iVar5 < iVar3) && (iVar3 != iVar2)) {
        iVar10 = iVar3;
        do {
          unaff_w22 = (**(code **)(*unaff_x21 + 0x2a8))();
          fVar12 = (float)uVar6;
          iVar3 = iVar10 + -1;
          if (iVar3 <= iVar5) break;
          bVar1 = iVar2 + 1 != iVar10;
          iVar10 = iVar3;
        } while (bVar1);
      }
      if ((unaff_w22 != unaff_w28) && (lVar9 = FUN_03e255e8(), lVar9 != 0)) {
        lVar7 = FUN_03eb8edc();
        if ((lVar7 != 0) && (*(long *)(lVar7 + 0x440) != 0)) {
          lVar7 = *(long *)(*(long *)(lVar7 + 0x440) + 0x418);
          FUN_03f136e0(lVar9,0);
          FUN_03e3ca5c(lVar7,0);
          if (lVar7 != 0) {
            fVar14 = param_4;
            fVar13 = fVar12;
            FUN_03f1379c(lVar7,0);
            param_4 = param_4 + fVar12;
            if ((fVar13 < param_4) && (FUN_03f1379c(lVar7,0), param_4 < fVar14 + fVar13)) {
              *(float *)(unaff_x20 + 0x6c) = param_4;
            }
            goto LAB_03ebbeb0;
          }
        }
LAB_03ebbf54:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
LAB_03ebbeb0:
      uVar4 = (**(code **)(*unaff_x21 + 0x2a8))();
      *(undefined4 *)(unaff_x19 + 4) = uVar4;
      iVar5 = FUN_03e19808();
      *(int *)(unaff_x19 + 8) = iVar5 + 1;
      *(float *)(unaff_x20 + 0x68) = param_3 + fVar15 * (float)iVar3;
      return;
    }
    *(float *)(unaff_x20 + 0x68) = param_3 + fVar15 * (float)iVar3;
    if (unaff_w29 == 0) {
      uVar4 = (**(code **)(*unaff_x21 + 0x2a8))();
      *(undefined4 *)(unaff_x19 + 4) = uVar4;
      iVar5 = FUN_03e19808();
      *(int *)(unaff_x19 + 8) = iVar5 + 1;
      return;
    }
  }
  else {
    *(float *)(unaff_x20 + 0x68) = param_3 + fVar15 * (float)iVar5;
    if (unaff_w29 == 0) {
      uVar4 = (**(code **)(*unaff_x21 + 0x2a8))();
      *(undefined4 *)(unaff_x19 + 4) = uVar4;
      uVar4 = FUN_03e19808();
      *(undefined4 *)(unaff_x19 + 8) = uVar4;
      return;
    }
  }
  *(int *)(unaff_x19 + 4) = unaff_w22;
  *(undefined4 *)(unaff_x19 + 8) = 0;
  return;
}


