/*
FUNCTION_NAME: Unity.Collections.NativeArray<RequestSceneHeader>$$CopySafe
ENTRY_POINT: 046118e4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_Collections_NativeArray<RequestSceneHeader>__CopySafe
               (long param_1,int param_2,int param_3,long param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char in_NG;
  char in_OV;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  
  if (in_NG != in_OV) {
    if (param_1 == 0) {
LAB_04611a28:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
                    /* try { // try from 04611900 to 04711963 has its CatchHandler @ 04611abc */
    uVar12 = (long)param_2;
    do {
      uVar1 = uVar12 + 1;
      uVar8 = (uint)*(undefined8 *)(param_1 + 0x18);
      if (uVar8 <= (uint)uVar1) {
LAB_04611a24:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar2 = param_1 + uVar1 * 0x10;
      uVar4 = *(undefined8 *)(lVar2 + 0x20);
      uVar5 = *(undefined8 *)(lVar2 + 0x28);
      if ((long)param_2 <= (long)uVar12) {
        uVar11 = (uint)uVar12;
        if (uVar8 <= uVar11) goto LAB_04611a24;
        while( true ) {
          uVar12 = (ulong)(int)uVar11;
          lVar2 = param_1 + uVar12 * 0x10;
          uVar9 = *(undefined8 *)(lVar2 + 0x20);
          if (param_4 == 0) goto LAB_04611a28;
          uVar10 = *(undefined8 *)(lVar2 + 0x28);
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_02feb2c4();
          }
          iVar6 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),uVar4,uVar5,uVar9,uVar10,
                             *(undefined8 *)(param_4 + 0x28));
          if (-1 < iVar6) break;
          if ((*(uint *)(param_1 + 0x18) <= uVar11) || (*(uint *)(param_1 + 0x18) <= uVar11 + 1))
          goto LAB_04611a24;
          uVar9 = *(undefined8 *)(lVar2 + 0x20);
          lVar3 = param_1 + (long)(int)(uVar11 + 1) * 0x10;
          puVar7 = (undefined8 *)(lVar3 + 0x20);
          *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
          *puVar7 = uVar9;
          thunk_FUN_03048534(puVar7,0);
          uVar11 = uVar11 - 1;
          uVar12 = (ulong)uVar11;
          if ((int)uVar11 < param_2) break;
          if (*(uint *)(param_1 + 0x18) <= uVar11) goto LAB_04611a24;
        }
        uVar8 = *(uint *)(param_1 + 0x18);
      }
      uVar11 = (int)uVar12 + 1;
      if (uVar8 <= uVar11) goto LAB_04611a24;
      lVar2 = param_1 + (long)(int)uVar11 * 0x10;
      puVar7 = (undefined8 *)(lVar2 + 0x20);
      *puVar7 = uVar4;
      *(undefined8 *)(lVar2 + 0x28) = uVar5;
      thunk_FUN_03048534(puVar7,0);
      uVar12 = uVar1;
    } while (uVar1 != (long)param_3);
  }
  return;
}


