/*
FUNCTION_NAME: Liv.NativeGalleryBridge.NativeGallery$$RequestPermissionAsync
ENTRY_POINT: 026fc120
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_16;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void Liv_NativeGalleryBridge_NativeGallery__RequestPermissionAsync(undefined8 param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *unaff_x19;
  long lVar7;
  uint unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  int *unaff_x25;
  uint unaff_w26;
  long unaff_x27;
  uint unaff_w28;
  uint unaff_w29;
  ulong in_stack_00000008;
  
  while( true ) {
    if (param_2 != (unaff_w29 & 0xffff)) goto LAB_026fc1bc;
    if (unaff_x23 == (long *)0x0) break;
    lVar7 = *unaff_x24;
    uVar4 = (**(code **)(*unaff_x23 + 0x168))();
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w28) {
LAB_026fc2d8:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    *(undefined8 *)(lVar7 + (ulong)unaff_w28 * 8 + 0x20) = uVar4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    FUN_025d5d20();
    bVar3 = false;
LAB_026fc1c4:
    unaff_w26 = unaff_w26 + 1;
    if ((int)unaff_w21 <= (int)unaff_w26) {
      uVar4 = FUN_026fc3ec();
      uVar5 = FUN_026fc418();
      uVar4 = FUN_025b1328(uVar4,uVar5,0);
      *unaff_x19 = uVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((in_stack_00000008 & 0x100000000) == 0) {
        if (1 < *unaff_x25 - 1U) {
          *unaff_x25 = 2;
        }
        if (1 < *(int *)((long)unaff_x19 + 0xc) - 1U) {
          *(undefined4 *)((long)unaff_x19 + 0xc) = 2;
        }
        if (1 < *(int *)(unaff_x19 + 2) - 1U) {
          *(undefined4 *)(unaff_x19 + 2) = 2;
        }
        if (1 < *(int *)((long)unaff_x19 + 0x14) - 1U) {
          *(undefined4 *)((long)unaff_x19 + 0x14) = 2;
        }
        if (*(int *)(unaff_x19 + 3) - 1U < 7) goto LAB_026fc2b0;
      }
      else {
        unaff_x25[2] = 2;
        unaff_x25[3] = 2;
        unaff_x25[0] = 2;
        unaff_x25[1] = 2;
      }
      *(undefined4 *)(unaff_x19 + 3) = 7;
LAB_026fc2b0:
      FUN_025da2e4();
      return;
    }
    if (unaff_w21 <= unaff_w26) goto LAB_026fc2d8;
    uVar1 = *(ushort *)(unaff_x22 + (long)(int)unaff_w26 * 2);
    param_2 = (uint)uVar1;
    uVar6 = (uint)uVar1;
    if (0x46 < uVar1) {
      if (uVar1 < 0x69) {
        uVar2 = uVar6 - 0x5c >> 1 & 0x7fff;
        uVar6 = (uVar6 - 0x5c) * 0x8000;
        if ((uVar2 | uVar6 & 0xffff) < 7) {
                    /* WARNING: Could not recover jumptable at 0x026fc09c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(byte *)(unaff_x27 + ((ulong)(uVar2 | uVar6) & 0xffff)) * 4 + 0x26fc0a0
                    ))();
          return;
        }
switchD_026fc09c_caseD_f:
        if (unaff_x23 == (long *)0x0) break;
        FUN_025ce640();
      }
      else if (uVar1 == 0x6d) {
        if (bVar3) goto LAB_026fc1bc;
        bVar3 = false;
        unaff_w28 = 3;
        *(int *)(unaff_x19 + 2) = *(int *)(unaff_x19 + 2) + 1;
      }
      else {
        if (uVar1 != 0x73) goto switchD_026fc09c_caseD_f;
        if (bVar3) {
LAB_026fc1bc:
          bVar3 = true;
        }
        else {
          bVar3 = false;
          unaff_w28 = 4;
          *(int *)((long)unaff_x19 + 0x14) = *(int *)((long)unaff_x19 + 0x14) + 1;
        }
      }
      goto LAB_026fc1c4;
    }
    if (uVar6 < 0x26) {
      if (uVar6 != 0x22) goto switchD_026fc09c_caseD_f;
    }
    else if (uVar6 != 0x27) {
      if (uVar6 != 0x46) goto switchD_026fc09c_caseD_f;
      if (bVar3) goto LAB_026fc1bc;
      bVar3 = false;
      unaff_w28 = 5;
      *(int *)(unaff_x19 + 3) = *(int *)(unaff_x19 + 3) + 1;
      goto LAB_026fc1c4;
    }
    if (!bVar3) {
      bVar3 = true;
      unaff_w29 = param_2;
      goto LAB_026fc1c4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


