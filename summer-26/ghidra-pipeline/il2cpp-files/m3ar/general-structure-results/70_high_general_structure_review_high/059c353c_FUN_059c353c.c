/*
FUNCTION_NAME: FUN_059c353c
ENTRY_POINT: 059c353c
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


uint FUN_059c353c(long param_1,uint param_2,int param_3,undefined8 param_4,undefined8 param_5,
                 long *param_6,long param_7)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  
  iVar10 = param_2 + param_3 + -1;
  if ((int)param_2 <= iVar10) {
    if (param_1 == 0) {
LAB_059c367c:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    do {
      uVar1 = param_2 + ((int)(iVar10 - param_2) >> 1);
      if (*(uint *)(param_1 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      if (param_6 == (long *)0x0) goto LAB_059c367c;
                    /* try { // try from 059c35bc to 05ac369f has its CatchHandler @ 059c36a0 */
      lVar5 = *(long *)(param_7 + 0x20);
      lVar7 = param_1 + (long)(int)uVar1 * 0x10;
      uVar2 = *(undefined8 *)(lVar7 + 0x20);
      uVar3 = *(undefined8 *)(lVar7 + 0x28);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0406aaec();
      }
      lVar7 = **(long **)(lVar5 + 0xc0);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0406aaec(lVar7);
      }
      lVar5 = *param_6;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto 
            Unity_Collections_NativeArray<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>__op_Implicit
            ;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_0406ae20(param_6,lVar7,0);

      Unity_Collections_NativeArray<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>__op_Implicit
      :
      iVar4 = (*(code *)*puVar6)(param_6,uVar2,uVar3,param_4,param_5,puVar6[1]);
      if (iVar4 == 0) {
        return uVar1;
      }
      if (iVar4 < 0) {
        param_2 = uVar1 + 1;
      }
      else {
        iVar10 = uVar1 - 1;
      }
    } while ((int)param_2 <= iVar10);
  }
                    /* try { // try from 059c3570 to 05ac35bb has its CatchHandler @ 059c3570
                       catch() { ... } // from try @ 059c3570 with catch @ 059c3570
                       catch() { ... } // from try @ 059c36a0 with catch @ 059c3570
                       catch() { ... } // from try @ 059c36d0 with catch @ 059c3570
                       catch() { ... } // from try @ 059c3744 with catch @ 059c3570 */
  return ~param_2;
}


