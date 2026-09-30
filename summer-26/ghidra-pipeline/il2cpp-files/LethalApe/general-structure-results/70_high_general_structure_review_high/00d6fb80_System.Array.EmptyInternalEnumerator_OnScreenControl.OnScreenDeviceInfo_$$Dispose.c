/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OnScreenControl.OnScreenDeviceInfo>$$Dispose
ENTRY_POINT: 00d6fb80
PROGRAM: LethalApe-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


undefined8
System_Array_EmptyInternalEnumerator<OnScreenControl_OnScreenDeviceInfo>__Dispose
          (undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  uint unaff_w19;
  uint uVar11;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  int unaff_w29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  
  while (uVar6 = (uint)param_1, unaff_w19 < uVar6) {
    if (*(int *)(unaff_x26 + (long)(int)unaff_w19 * (long)(int)unaff_x22 + 0x20) == unaff_w27) {
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x150);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_0099e870(lVar8);
      }
      lVar7 = *unaff_x23;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_00d6fb3c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_0099eb60();
LAB_00d6fb3c:
      uVar9 = (*(code *)*puVar3)();
      if ((uVar9 & 1) != 0) {
        if (in_stack_00000000._4_1_ == '\x02') {
          uStack0000000000000014 = in_stack_00000018._4_4_;
          lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb0);
          if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
            lVar8 = FUN_0099e870();
          }
          uVar4 = thunk_FUN_00a058b4(lVar8,&stack0x00000014);
          FUN_0173e018(uVar4,0);
        }
        else if (in_stack_00000000._4_1_ == '\x01') {
          if (unaff_w19 < *(uint *)(unaff_x26 + 0x18)) {
            *(undefined8 *)(unaff_x26 + (long)(int)unaff_w19 * 0x14 + 0x2c) = in_stack_00000008;
            return 1;
          }
          goto System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>___cctor;
        }
        return 0;
      }
      uVar6 = *(uint *)(unaff_x26 + 0x18);
    }
    if (uVar6 <= unaff_w19)
    goto System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>___cctor;
    unaff_w19 = *(uint *)(unaff_x26 + (int)unaff_w19 * unaff_x22 + 0x24);
    if ((int)uVar6 <= unaff_w29) {
      FUN_0173e12c(0);
    }
    unaff_w29 = unaff_w29 + 1;
    param_1 = *(undefined8 *)(unaff_x26 + 0x18);
  }
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar11 = *(uint *)(unaff_x20 + 0x20);
    if (uVar11 == uVar6) {
      (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x170) + 8))();
      lVar8 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar11 + 1;
      if (lVar8 == 0) goto LAB_00d6fe00;
      uVar6 = *(uint *)(lVar8 + 0x18);
      iVar2 = 0;
      if (uVar6 != 0) {
        iVar2 = unaff_w27 / (int)uVar6;
      }
      uVar1 = unaff_w27 - iVar2 * uVar6;
      if (uVar6 <= uVar1)
      goto System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>___cctor;
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      unaff_x28 = (int *)(lVar8 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar11 + 1;
    }
    if (unaff_x26 == 0) {
LAB_00d6fe00:
                    /* WARNING: Subroutine does not return */
      FUN_00a190f0();
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
           *(undefined4 *)(unaff_x26 + (long)(int)uVar11 * 0x14 + 0x24);
    }
    lVar8 = unaff_x26 + (long)(int)uVar11 * 0x14;
    *(int *)(lVar8 + 0x20) = unaff_w27;
    *(int *)(lVar8 + 0x24) = *unaff_x28 + -1;
    *(undefined8 *)(lVar8 + 0x2c) = in_stack_00000008;
    *(undefined4 *)(lVar8 + 0x28) = in_stack_00000018._4_4_;
    *unaff_x28 = uVar11 + 1;
    return 1;
  }
System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>___cctor:
                    /* WARNING: Subroutine does not return */
  FUN_00a190f8();
}


