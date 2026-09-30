/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 02fc7280
PROGRAM: vrfs-libil2cpp.so
SCORE: 165
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_8;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined8 OVRManager__get_eyeTrackedFoveatedRenderingSupported(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 in_CY;
  undefined8 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  uint uVar11;
  long *unaff_x23;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  int unaff_w29;
  char in_stack_00000000;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  
  while (uVar6 = (uint)param_1, !(bool)in_CY) {
    if (*(int *)(unaff_x26 + (long)(int)unaff_w22 * 0x10 + 0x20) == unaff_w27) {
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x148);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_015c2790(lVar8);
      }
      lVar7 = *unaff_x23;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02fc7238;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_015c2a80();
LAB_02fc7238:
      uVar9 = (*(code *)*puVar3)();
      if ((uVar9 & 1) != 0) {
        if (in_stack_00000000 == '\x02') {
          uStack0000000000000004 = in_stack_00000008._4_4_;
          lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa8);
          if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
            lVar8 = FUN_015c2790();
          }
          uVar4 = thunk_FUN_015d01b0(lVar8,&stack0x00000004);
          FUN_031dbe34(uVar4,0);
        }
        else if (in_stack_00000000 == '\x01') {
          if (unaff_w22 < *(uint *)(unaff_x26 + 0x18)) {
            *(undefined4 *)(unaff_x26 + (long)(int)unaff_w22 * 0x10 + 0x2c) = unaff_w19;
            return 1;
          }
          goto LAB_02fc74b4;
        }
        return 0;
      }
      uVar6 = *(uint *)(unaff_x26 + 0x18);
    }
    if (uVar6 <= unaff_w22) goto LAB_02fc74b4;
    unaff_w22 = *(uint *)(unaff_x26 + (long)(int)unaff_w22 * 0x10 + 0x24);
    if ((int)uVar6 <= unaff_w29) {
      FUN_031dbf48(0);
    }
    param_1 = *(undefined8 *)(unaff_x26 + 0x18);
    unaff_w29 = unaff_w29 + 1;
    in_CY = (uint)param_1 <= unaff_w22;
  }
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar11 = *(uint *)(unaff_x20 + 0x20);
    if (uVar11 == uVar6) {
      (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x168) + 8))();
      lVar8 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar11 + 1;
      if (lVar8 == 0) goto LAB_02fc74b8;
      uVar6 = *(uint *)(lVar8 + 0x18);
      iVar2 = 0;
      if (uVar6 != 0) {
        iVar2 = unaff_w27 / (int)uVar6;
      }
      uVar1 = unaff_w27 - iVar2 * uVar6;
      if (uVar6 <= uVar1) goto LAB_02fc74b4;
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      unaff_x28 = (int *)(lVar8 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar11 + 1;
    }
    if (unaff_x26 == 0) {
LAB_02fc74b8:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    bVar5 = false;
  }
  else {
    uVar11 = *(uint *)(unaff_x20 + 0x24);
    *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
    bVar5 = true;
  }
  if (uVar11 < *(uint *)(unaff_x26 + 0x18)) {
    if (bVar5) {
      *(undefined4 *)(unaff_x20 + 0x24) =
           *(undefined4 *)(unaff_x26 + (long)(int)uVar11 * 0x10 + 0x24);
    }
    lVar8 = unaff_x26 + (long)(int)uVar11 * 0x10;
    *(int *)(lVar8 + 0x20) = unaff_w27;
    *(int *)(lVar8 + 0x24) = *unaff_x28 + -1;
    *(undefined4 *)(lVar8 + 0x28) = in_stack_00000008._4_4_;
    *(undefined4 *)(lVar8 + 0x2c) = unaff_w19;
    *unaff_x28 = uVar11 + 1;
    return 1;
  }
LAB_02fc74b4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


