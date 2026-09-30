/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02919304
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_get_Current
               (long param_1,uint param_2,int param_3,int param_4,long param_5,long param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint in_w8;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  
  iVar2 = param_4 + -1;
  uVar3 = iVar2 + param_2;
  if (uVar3 < in_w8) {
    lVar5 = param_1 + (long)(int)uVar3 * 0x18;
    uVar8 = *(undefined8 *)(lVar5 + 0x30);
    uVar14 = *(undefined8 *)(lVar5 + 0x28);
    uVar11 = *(undefined8 *)(lVar5 + 0x20);
    iVar1 = param_3;
    if (param_3 < 0) {
      iVar1 = param_3 + 1;
    }
    if ((int)param_2 <= iVar1 >> 1) {
      do {
        uVar10 = param_2 * 2;
        if ((int)uVar10 < param_3) {
          uVar3 = uVar10 + param_4;
          if (*(uint *)(param_1 + 0x18) <= uVar3 - 1) goto LAB_0291956c;
          lVar5 = param_1 + (long)(int)(uVar3 - 1) * 0x18;
          uVar9 = *(undefined8 *)(lVar5 + 0x30);
          uVar15 = *(undefined8 *)(lVar5 + 0x28);
          uVar12 = *(undefined8 *)(lVar5 + 0x20);
          if (*(uint *)(param_1 + 0x18) <= uVar3) goto LAB_0291956c;
          lVar5 = param_1 + (long)(int)uVar3 * 0x18;
          uVar6 = *(undefined8 *)(lVar5 + 0x30);
          uVar16 = *(undefined8 *)(lVar5 + 0x28);
          uVar13 = *(undefined8 *)(lVar5 + 0x20);
          if (param_5 == 0) goto LAB_02919570;
          if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
            FUN_01ae9e74();
          }
          in_stack_00000130 = uVar13;
          in_stack_00000138 = uVar16;
          in_stack_00000140 = uVar6;
          in_stack_00000150 = uVar12;
          in_stack_00000158 = uVar15;
          in_stack_00000160 = uVar9;
          uVar3 = (**(code **)(param_5 + 0x18))
                            (*(undefined8 *)(param_5 + 0x40),&stack0x00000150,&stack0x00000130,
                             *(undefined8 *)(param_5 + 0x28));
          uVar10 = uVar10 | uVar3 >> 0x1f;
        }
        uVar3 = iVar2 + uVar10;
        if (*(uint *)(param_1 + 0x18) <= uVar3) goto LAB_0291956c;
        lVar5 = param_1 + (long)(int)uVar3 * 0x18;
        uVar9 = *(undefined8 *)(lVar5 + 0x30);
        uVar15 = *(undefined8 *)(lVar5 + 0x28);
        uVar12 = *(undefined8 *)(lVar5 + 0x20);
        if (param_5 == 0) {
LAB_02919570:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
          FUN_01ae9e74();
        }
        in_stack_00000130 = uVar12;
        in_stack_00000138 = uVar15;
        in_stack_00000140 = uVar9;
        in_stack_00000150 = uVar11;
        in_stack_00000158 = uVar14;
        in_stack_00000160 = uVar8;
        iVar4 = (**(code **)(param_5 + 0x18))
                          (*(undefined8 *)(param_5 + 0x40),&stack0x00000150,&stack0x00000130,
                           *(undefined8 *)(param_5 + 0x28));
        if (-1 < iVar4) {
          uVar3 = iVar2 + param_2;
          break;
        }
        if (*(uint *)(param_1 + 0x18) <= uVar3) goto LAB_0291956c;
        uVar12 = *(undefined8 *)(lVar5 + 0x28);
        uVar9 = *(undefined8 *)(lVar5 + 0x20);
        if (*(uint *)(param_1 + 0x18) <= iVar2 + param_2) goto LAB_0291956c;
        lVar7 = param_1 + (long)(int)(iVar2 + param_2) * 0x18;
        *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(lVar5 + 0x30);
        *(undefined8 *)(lVar7 + 0x28) = uVar12;
        *(undefined8 *)(lVar7 + 0x20) = uVar9;
        param_2 = uVar10;
      } while ((int)uVar10 <= iVar1 >> 1);
      in_w8 = *(uint *)(param_1 + 0x18);
    }
    if (uVar3 < in_w8) {
      param_1 = param_1 + (long)(int)uVar3 * 0x18;
      *(undefined8 *)(param_1 + 0x30) = uVar8;
      *(undefined8 *)(param_1 + 0x28) = uVar14;
      *(undefined8 *)(param_1 + 0x20) = uVar11;
      return;
    }
  }
LAB_0291956c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


