/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02b187a4
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
System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_get_Current
          (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong in_x9;
  int *in_x10;
  long in_x11;
  uint uVar7;
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
  
  do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02b1879c with catch @ 02b187a8
                        */
    if (in_x11 == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_02b187d4;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar4 = (undefined8 *)FUN_01dde8fc();
LAB_02b187d4:
        uVar5 = (*(code *)*puVar4)();
        if ((uVar5 & 1) != 0) {
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
        uVar5 = (ulong)*(uint *)(unaff_x26 + 0x18);
        do {
          if ((uint)uVar5 <= (uint)unaff_x19) goto LAB_02b18a50;
          uVar7 = *(uint *)(unaff_x26 + unaff_x19 * unaff_x23 + 0x24);
          if ((int)(uint)uVar5 <= unaff_w29) {
            FUN_033b37f8(0);
          }
          uVar5 = *(ulong *)(unaff_x26 + 0x18);
          unaff_w29 = unaff_w29 + 1;
          if ((uint)uVar5 <= uVar7) {
            if (*(int *)(unaff_x21 + 0x28) < 1) {
              uVar7 = *(uint *)(unaff_x21 + 0x20);
              if (uVar7 == (uint)uVar5) {
                FUN_02b18e14();
                lVar6 = *(long *)(unaff_x21 + 0x10);
                *(uint *)(unaff_x21 + 0x20) = uVar7 + 1;
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
                *(uint *)(unaff_x21 + 0x20) = uVar7 + 1;
              }
              if (unaff_x26 == 0) {
LAB_02b18a54:
                    /* WARNING: Subroutine does not return */
                FUN_01d7db70();
              }
              if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_02b18a50;
              lVar6 = (long)(int)uVar7;
            }
            else {
              *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
              uVar7 = *(uint *)(unaff_x21 + 0x24);
              if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_02b18a50;
              lVar6 = (long)(int)uVar7;
              *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar6 * 0x18 + 0x24);
            }
            lVar6 = unaff_x26 + lVar6 * 0x18;
            *(int *)(lVar6 + 0x20) = unaff_w27;
            iVar2 = *unaff_x28;
            *(undefined8 *)(lVar6 + 0x28) = unaff_x20;
            *(int *)(lVar6 + 0x24) = iVar2 + -1;
            thunk_FUN_01e10808((undefined8 *)(lVar6 + 0x28));
            *(undefined4 *)(lVar6 + 0x30) = in_stack_00000000;
            *unaff_x28 = uVar7 + 1;
            return 1;
          }
          unaff_x19 = (long)(int)uVar7;
        } while (*(int *)(unaff_x26 + (long)(int)uVar7 * (long)(int)unaff_x23 + 0x20) != unaff_w27);
        param_3 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
          param_3 = FUN_01dde7f8(param_3);
        }
        param_1 = *unaff_x24;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
}


