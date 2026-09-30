/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarManager$$RequestEyeTrackingPermission
ENTRY_POINT: 059c4d14
PROGRAM: waitwhat-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void Oculus_Avatar2_OvrAvatarManager__RequestEyeTrackingPermission(undefined8 param_1,long param_2)

{
  int iVar1;
  short sVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long unaff_x19;
  ulong unaff_x20;
  uint unaff_w22;
  undefined8 in_stack_00000008;
  
  if (*(uint *)(param_2 + 0x18) <= unaff_w22) {
LAB_059c4ed0:
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
  sVar2 = *(short *)(param_2 + (long)(int)unaff_w22 * 2 + 0x20);
  if (sVar2 == 0x2a) {
    bVar4 = false;
  }
  else {
    if (sVar2 != 0x2f) {
      thunk_FUN_031edd38(PTR_DAT_070c2058);
      FUN_02d35640();
      uVar7 = FUN_058c5a58(0);
      uVar9 = *(undefined8 *)(unaff_x19 + 0x80);
      iVar1 = *(int *)(unaff_x19 + 0x8c);
      FUN_02d342ac(uVar9);
      in_stack_00000008._4_2_ = FUN_030eba6c(uVar9,(long)iVar1);
      uVar9 = thunk_FUN_031c39fc(*(undefined8 *)(PTR_DAT_070c1958 + 0x88),(long)&stack0x00000008 + 4
                                );
      uVar8 = thunk_FUN_031edd38(PTR_DAT_07109228);
      FUN_059d2420(uVar8,uVar7,uVar9,0);
LAB_059c4f58:
      uVar7 = FUN_059bcd60();
      uVar9 = thunk_FUN_031edd38(PTR_DAT_07109230);
                    /* WARNING: Subroutine does not return */
      FUN_03188b9c(uVar7,uVar9);
    }
    bVar4 = true;
  }
  iVar1 = unaff_w22 + 1;
  *(int *)(unaff_x19 + 0x8c) = iVar1;
  do {
    uVar10 = *(uint *)(unaff_x19 + 0x8c);
    if (*(uint *)(param_2 + 0x18) <= uVar10) goto LAB_059c4ed0;
    uVar3 = *(ushort *)(param_2 + (long)(int)uVar10 * 2 + 0x20);
    if (uVar3 < 0xb) {
      if (uVar3 == 0) {
        if (*(uint *)(unaff_x19 + 0x88) != uVar10) goto LAB_059c4e20;
        iVar5 = FUN_059c3e44();
        if (iVar5 == 0) {
          if (bVar4) {
            if ((unaff_x20 & 1) == 0) {
              return;
            }
            param_2 = *(long *)(unaff_x19 + 0x80);
            iVar5 = *(int *)(unaff_x19 + 0x8c) - iVar1;
            goto LAB_059c4e50;
          }
          thunk_FUN_031edd38(PTR_DAT_07109220);
          goto LAB_059c4f58;
        }
      }
      else if (uVar3 == 10) {
        if (bVar4) goto LAB_059c4e48;
        *(uint *)(unaff_x19 + 0x8c) = uVar10 + 1;
        *(uint *)(unaff_x19 + 0x90) = uVar10 + 1;
        *(int *)(unaff_x19 + 0x94) = *(int *)(unaff_x19 + 0x94) + 1;
      }
      else {
LAB_059c4e20:
        *(uint *)(unaff_x19 + 0x8c) = uVar10 + 1;
      }
    }
    else if (uVar3 == 0xd) {
      if (bVar4) {
LAB_059c4e48:
        if ((unaff_x20 & 1) == 0) {
          return;
        }
        iVar5 = uVar10 - iVar1;
LAB_059c4e50:
        uVar7 = FUN_057c5eac(0,param_2,iVar1,iVar5,0);
        *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
        *(undefined4 *)(unaff_x19 + 0x10) = 5;
        return;
      }
      FUN_059c60bc();
    }
    else {
      if (uVar3 != 0x2a) goto LAB_059c4e20;
      uVar10 = uVar10 + 1;
      *(uint *)(unaff_x19 + 0x8c) = uVar10;
      if (!bVar4) {
        if (*(int *)(unaff_x19 + 0x88) <= (int)uVar10) {
          uVar6 = FUN_059c408c();
          if ((uVar6 & 1) == 0) goto FUN_059c4e3c;
          param_2 = *(long *)(unaff_x19 + 0x80);
          if (param_2 == 0) break;
          uVar10 = *(uint *)(unaff_x19 + 0x8c);
        }
        if (*(uint *)(param_2 + 0x18) <= uVar10) goto LAB_059c4ed0;
        if (*(short *)(param_2 + (long)(int)uVar10 * 2 + 0x20) == 0x2f) {
          if ((unaff_x20 & 1) != 0) {
            uVar7 = FUN_057c5eac(0,param_2,iVar1,(uVar10 - unaff_w22) + -2,0);
            uVar10 = *(uint *)(unaff_x19 + 0x8c);
            *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
            *(undefined4 *)(unaff_x19 + 0x10) = 5;
          }
          *(uint *)(unaff_x19 + 0x8c) = uVar10 + 1;
          return;
        }
      }
    }
FUN_059c4e3c:
    param_2 = *(long *)(unaff_x19 + 0x80);
  } while (param_2 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


