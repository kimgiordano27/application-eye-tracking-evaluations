/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$.cctor
ENTRY_POINT: 02b187c4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>___cctor
          (undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  int unaff_w29;
  undefined4 in_stack_00000000;
  undefined8 in_stack_00000008;
  
LAB_02b187d4:
  do {
    uVar4 = (*(code *)*param_1)();
    if ((uVar4 & 1) != 0) {
      if (in_stack_00000008._4_1_ == '\x02') {
        FUN_033b36f4();
      }
      else if (in_stack_00000008._4_1_ == '\x01') {
        if ((uint)unaff_x19 < *(uint *)(unaff_x26 + 0x18)) {
          *(undefined4 *)(unaff_x26 + unaff_x19 * 0x18 + 0x30) = in_stack_00000000;
          return 1;
        }
LAB_02b18a50:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      return 0;
    }
    uVar4 = (ulong)*(uint *)(unaff_x26 + 0x18);
    do {
      if ((uint)uVar4 <= (uint)unaff_x19) goto LAB_02b18a50;
      uVar8 = *(uint *)(unaff_x26 + unaff_x19 * unaff_x23 + 0x24);
      if ((int)(uint)uVar4 <= unaff_w29) {
        FUN_033b37f8(0);
      }
      uVar4 = *(ulong *)(unaff_x26 + 0x18);
      unaff_w29 = unaff_w29 + 1;
      if ((uint)uVar4 <= uVar8) {
        if (*(int *)(unaff_x21 + 0x28) < 1) {
          uVar8 = *(uint *)(unaff_x21 + 0x20);
          if (uVar8 == (uint)uVar4) {
            FUN_02b18e14();
            lVar6 = *(long *)(unaff_x21 + 0x10);
            *(uint *)(unaff_x21 + 0x20) = uVar8 + 1;
            if (lVar6 == 0) goto LAB_02b18a54;
            uVar1 = *(uint *)(lVar6 + 0x18);
            iVar2 = 0;
            if (uVar1 != 0) {
              iVar2 = unaff_w27 / (int)uVar1;
            }
            uVar3 = unaff_w27 - iVar2 * uVar1;
            if (uVar1 <= uVar3) goto LAB_02b18a50;
            unaff_x26 = *(long *)(unaff_x21 + 0x18);
            unaff_x28 = (int *)(lVar6 + (ulong)uVar3 * 4 + 0x20);
          }
          else {
            unaff_x26 = *(long *)(unaff_x21 + 0x18);
            *(uint *)(unaff_x21 + 0x20) = uVar8 + 1;
          }
          if (unaff_x26 == 0) {
LAB_02b18a54:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_02b18a50;
          lVar6 = (long)(int)uVar8;
        }
        else {
          *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
          uVar8 = *(uint *)(unaff_x21 + 0x24);
          if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_02b18a50;
          lVar6 = (long)(int)uVar8;
          *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar6 * 0x18 + 0x24);
        }
        lVar6 = unaff_x26 + lVar6 * 0x18;
        *(int *)(lVar6 + 0x20) = unaff_w27;
        iVar2 = *unaff_x28;
        *(undefined8 *)(lVar6 + 0x28) = unaff_x20;
        *(int *)(lVar6 + 0x24) = iVar2 + -1;
        thunk_FUN_01e10808((undefined8 *)(lVar6 + 0x28));
        *(undefined4 *)(lVar6 + 0x30) = in_stack_00000000;
        *unaff_x28 = uVar8 + 1;
        return 1;
      }
      unaff_x19 = (long)(int)uVar8;
    } while (*(int *)(unaff_x26 + (long)(int)uVar8 * (long)(int)unaff_x23 + 0x20) != unaff_w27);
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8(lVar6);
    }
    lVar5 = *unaff_x24;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar6) {
          param_1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02b187d4;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    param_1 = (undefined8 *)FUN_01dde8fc();
  } while( true );
}


