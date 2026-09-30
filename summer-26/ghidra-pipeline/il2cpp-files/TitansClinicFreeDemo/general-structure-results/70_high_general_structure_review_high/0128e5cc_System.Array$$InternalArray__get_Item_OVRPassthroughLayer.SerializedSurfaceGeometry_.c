/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 0128e5cc
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


ulong System_Array__InternalArray__get_Item<OVRPassthroughLayer_SerializedSurfaceGeometry>
                (ulong param_1,undefined8 param_2,byte *param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  bool bVar19;
  ulong in_x9;
  long in_x10;
  long in_x11;
  ulong in_x12;
  long in_x13;
  int iVar20;
  long in_x14;
  byte *pbVar21;
  long lVar22;
  
  while( true ) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = param_1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = in_x12;
    lVar22 = SUB168(auVar16 * auVar18,8);
    param_3 = param_3 + in_x11;
    in_x9 = in_x9 - (in_x14 + (in_x9 - in_x14 >> 1) >> 0xf) * in_x13;
    param_1 = param_1 - (lVar22 + (param_1 - lVar22 >> 1) >> 0xf) * in_x13;
    if (param_4 >> 4 < 0x15b) break;
    param_4 = param_4 + in_x10;
    iVar20 = -0x15b;
    pbVar21 = param_3;
    do {
      bVar19 = iVar20 != -1;
      iVar20 = iVar20 + 1;
      lVar22 = in_x9 + *pbVar21;
      lVar1 = lVar22 + (ulong)pbVar21[1];
      lVar2 = lVar1 + (ulong)pbVar21[2];
      lVar3 = lVar2 + (ulong)pbVar21[3];
      lVar4 = lVar3 + (ulong)pbVar21[4];
      lVar5 = lVar4 + (ulong)pbVar21[5];
      lVar6 = lVar5 + (ulong)pbVar21[6];
      lVar7 = lVar6 + (ulong)pbVar21[7];
      lVar8 = lVar7 + (ulong)pbVar21[8];
      lVar9 = lVar8 + (ulong)pbVar21[9];
      lVar10 = lVar9 + (ulong)pbVar21[10];
      lVar11 = lVar10 + (ulong)pbVar21[0xb];
      lVar12 = lVar11 + (ulong)pbVar21[0xc];
      lVar13 = lVar12 + (ulong)pbVar21[0xd];
      lVar14 = lVar13 + (ulong)pbVar21[0xe];
      in_x9 = lVar14 + (ulong)pbVar21[0xf];
      param_1 = lVar22 + param_1 + lVar1 + lVar2 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 +
                lVar9 + lVar10 + lVar11 + lVar12 + lVar13 + lVar14 + in_x9;
      pbVar21 = pbVar21 + 0x10;
    } while (bVar19);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = in_x9;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = in_x12;
    in_x14 = SUB168(auVar15 * auVar17,8);
  }
  if (param_4 != 0) {
    if (param_4 < 0x10) goto LAB_0128e6e0;
    do {
      param_4 = param_4 - 0x10;
      lVar22 = in_x9 + *param_3;
      lVar1 = lVar22 + (ulong)param_3[1];
      lVar2 = lVar1 + (ulong)param_3[2];
      lVar3 = lVar2 + (ulong)param_3[3];
      lVar4 = lVar3 + (ulong)param_3[4];
      lVar5 = lVar4 + (ulong)param_3[5];
      lVar6 = lVar5 + (ulong)param_3[6];
      lVar7 = lVar6 + (ulong)param_3[7];
      lVar8 = lVar7 + (ulong)param_3[8];
      lVar9 = lVar8 + (ulong)param_3[9];
      lVar10 = lVar9 + (ulong)param_3[10];
      lVar11 = lVar10 + (ulong)param_3[0xb];
      lVar12 = lVar11 + (ulong)param_3[0xc];
      lVar13 = lVar12 + (ulong)param_3[0xd];
      lVar14 = lVar13 + (ulong)param_3[0xe];
      pbVar21 = param_3 + 0xf;
      param_3 = param_3 + 0x10;
      in_x9 = lVar14 + (ulong)*pbVar21;
      param_1 = lVar22 + param_1 + lVar1 + lVar2 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 +
                lVar9 + lVar10 + lVar11 + lVar12 + lVar13 + lVar14 + in_x9;
    } while (0xf < param_4);
    for (; param_4 != 0; param_4 = param_4 - 1) {
LAB_0128e6e0:
      in_x9 = in_x9 + *param_3;
      param_1 = in_x9 + param_1;
      param_3 = param_3 + 1;
    }
    in_x9 = in_x9 % 0xfff1;
    param_1 = param_1 % 0xfff1;
  }
  return in_x9 | param_1 << 0x10;
}


