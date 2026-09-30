/*
FUNCTION_NAME: System.Array.InternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 0324a8f4
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8
System_Array_InternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__System_Collections_IEnumerator_Reset
          (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  ulong in_x9;
  long in_x10;
  int *piVar10;
  long lVar11;
  undefined8 *unaff_x19;
  long unaff_x21;
  int unaff_w22;
  ulong unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x25;
  uint uVar12;
  ulong unaff_x27;
  undefined8 unaff_x28;
  ulong unaff_x29;
  long in_stack_00000000;
  int *in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  
  do {
    uVar8 = (uint)unaff_x23;
    piVar10 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar10 + -2) == param_3) {
        puVar4 = (undefined8 *)(param_1 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0324a92c;
      }
      in_x9 = in_x9 - 1;
      piVar10 = piVar10 + 4;
    } while (in_x9 != 0);
    do {
      uVar8 = (uint)unaff_x23;
      puVar4 = (undefined8 *)FUN_02091668(unaff_x24,param_3,0);
LAB_0324a92c:
      uVar12 = (uint)unaff_x27;
      uVar5 = (*(code *)*puVar4)(unaff_x24,unaff_x25,unaff_x28);
      if ((uVar5 & 1) != 0) {
        if ((int)uVar8 < 0) {
          uVar9 = *(uint *)(in_stack_00000028 + 0x18);
          if (uVar9 <= uVar12) goto LAB_0324aa80;
          lVar11 = *(long *)(unaff_x21 + 0x10);
          if (lVar11 == 0) goto LAB_0324aac0;
          if (*(uint *)(lVar11 + 0x18) <= (uint)in_stack_00000000) goto LAB_0324aa80;
          *(int *)(lVar11 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(in_stack_00000020 + (unaff_x29 & 0xffffffff) * 0x18 + 4) + 1;
        }
        else {
          uVar9 = *(uint *)(in_stack_00000028 + 0x18);
          if ((uVar9 <= uVar12) || (uVar9 <= uVar8)) goto LAB_0324aa80;
          *(undefined4 *)(in_stack_00000020 + (ulong)uVar8 * 0x18 + 4) =
               *(undefined4 *)(in_stack_00000020 + (unaff_x29 & 0xffffffff) * 0x18 + 4);
        }
        if (uVar12 < uVar9) {
          *unaff_x19 = 0;
          unaff_x19[1] = 0;
          uVar1 = *(undefined4 *)(unaff_x21 + 0x28);
          iVar2 = *(int *)(unaff_x21 + 0x20);
          *in_stack_00000008 = -1;
          iVar3 = *(int *)(unaff_x21 + 0x38);
          iVar2 = iVar2 + -1;
          *(undefined4 *)(in_stack_00000020 + (unaff_x29 & 0xffffffff) * 0x18 + 4) = uVar1;
          *(int *)(unaff_x21 + 0x20) = iVar2;
          *(int *)(unaff_x21 + 0x38) = iVar3 + 1;
          if (iVar2 == 0) {
            uVar12 = 0xffffffff;
            *(undefined4 *)(unaff_x21 + 0x24) = 0;
          }
          *(uint *)(unaff_x21 + 0x28) = uVar12;
          return 1;
        }
LAB_0324aa80:
                    /* WARNING: Subroutine does not return */
        FUN_02061554();
      }
      do {
        uVar8 = (uint)*(undefined8 *)(in_stack_00000028 + 0x18);
        if ((int)uVar8 <= unaff_w22) {
          thunk_FUN_020be230(StringLiteral_8769);
          uVar6 = thunk_FUN_02094760();
          uVar7 = thunk_FUN_020be230(StringLiteral_12127);
          FUN_0382d55c(uVar6,uVar7,0);
                    /* WARNING: Subroutine does not return */
          FUN_02061410(uVar6,in_stack_00000018);
        }
        if (uVar8 <= (uint)unaff_x27) goto LAB_0324aa80;
        unaff_w22 = unaff_w22 + 1;
        unaff_x23 = unaff_x27 & 0xffffffff;
        uVar12 = *(uint *)(in_stack_00000020 + (unaff_x29 & 0xffffffff) * 0x18 + 4);
        unaff_x27 = (ulong)uVar12;
        if ((int)uVar12 < 0) {
          return 0;
        }
        if (uVar8 <= uVar12) goto LAB_0324aa80;
        in_stack_00000008 = (int *)(in_stack_00000020 + unaff_x27 * 0x18);
        unaff_x29 = unaff_x27;
      } while (*in_stack_00000008 != in_stack_00000010._4_4_);
      unaff_x24 = *(long **)(unaff_x21 + 0x30);
      if (unaff_x24 == (long *)0x0) {
LAB_0324aac0:
                    /* WARNING: Subroutine does not return */
        FUN_0206154c();
      }
      lVar11 = in_stack_00000020 + unaff_x27 * 0x18;
      unaff_x19 = (undefined8 *)(lVar11 + 8);
      unaff_x25 = *unaff_x19;
      unaff_x28 = *(undefined8 *)(lVar11 + 0x10);
      param_3 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x20);
      if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
        param_3 = FUN_02091334(param_3);
      }
      param_1 = *unaff_x24;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
}


