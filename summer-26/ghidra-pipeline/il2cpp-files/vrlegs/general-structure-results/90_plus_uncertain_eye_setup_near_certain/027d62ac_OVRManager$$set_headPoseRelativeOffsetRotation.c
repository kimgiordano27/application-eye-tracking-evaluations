/*
FUNCTION_NAME: OVRManager$$set_headPoseRelativeOffsetRotation
ENTRY_POINT: 027d62ac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__set_headPoseRelativeOffsetRotation(ulong *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0xe) & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cfca30);
    *(undefined1 *)(unaff_x21 + 0xe) = 1;
  }
  puVar3 = PTR_DAT_03cfca30;
  uVar1 = (uint)param_1[1];
  if (0x19999999 < uVar1) {
    uVar6 = 0;
    goto LAB_027d6344;
  }
  uVar11 = *param_1;
  lVar7 = *(long *)PTR_DAT_03cfca30;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar3;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
  if (param_2 < 0x14) {
    if (uVar1 < 4) {
      return 9;
    }
    if (uVar1 != 4) goto LAB_027d6390;
    if (uVar11 < 0x4b82fa09b5a52cba) {
      return 9;
    }
    uVar10 = 8;
  }
  else {
    if (lVar7 == 0) goto LAB_027d6484;
    if (*(uint *)(lVar7 + 0x18) <= (uint)(0x1b - (long)param_2)) goto LAB_027d6488;
    if (uVar1 < *(uint *)(lVar7 + (0x1b - (long)param_2) * 0x10 + 0x20)) {
      uVar6 = 0x1c - param_2;
      goto LAB_027d6344;
    }
LAB_027d6390:
    if (uVar1 < 0xa7c6) {
      if (uVar1 < 0x1ae) {
        bVar4 = 0x29 < uVar1;
        bVar5 = uVar1 == 0x2a;
        uVar10 = 7;
      }
      else {
        bVar4 = 0x10c5 < uVar1;
        bVar5 = uVar1 == 0x10c6;
        uVar10 = 5;
      }
    }
    else if (uVar1 < 0x418938) {
      bVar4 = 0x68db7 < uVar1;
      bVar5 = uVar1 == 0x68db8;
      uVar10 = 3;
    }
    else {
      bVar4 = 0x28f5c27 < uVar1;
      bVar5 = uVar1 == 0x28f5c28;
      uVar10 = 1;
    }
    if (!bVar4 || bVar5) {
      uVar10 = uVar10 + 1;
    }
  }
  if (lVar7 == 0) {
LAB_027d6484:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar2 = uVar10 - 1;
  if (*(uint *)(lVar7 + 0x18) <= uVar2) {
LAB_027d6488:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  uVar6 = uVar10;
  if ((uVar1 == *(uint *)(lVar7 + (ulong)uVar2 * 0x10 + 0x20)) &&
     (uVar6 = uVar2, uVar11 <= *(ulong *)(lVar7 + (ulong)uVar2 * 0x10 + 0x28))) {
    uVar6 = uVar10;
  }
LAB_027d6344:
  if ((int)(uVar6 + param_2) < 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cd7398);
    uVar8 = thunk_FUN_01a89e68();
    uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03cfaa68);
    FUN_0277bb94(uVar8,uVar9,0);
    uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03cfcb20);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar8,uVar9);
  }
  return uVar6;
}


