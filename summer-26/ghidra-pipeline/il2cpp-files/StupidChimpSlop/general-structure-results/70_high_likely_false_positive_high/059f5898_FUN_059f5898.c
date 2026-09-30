/*
FUNCTION_NAME: FUN_059f5898
ENTRY_POINT: 059f5898
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_059f5898(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  
  if ((DAT_06a56960 & 1) == 0) {
    FUN_02d4dc40(Method_UnityEngine_UIElements_UQueryBuilder<Button>_ToList__);
    FUN_02d4dc40(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361_PostfixBurstDelegate>__
                );
    DAT_06a56960 = 1;
  }
  puVar3 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361_PostfixBurstDelegate>__
  ;
  puVar2 = Method_UnityEngine_UIElements_UQueryBuilder<Button>_ToList__;
  iVar9 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar9) {
    do {
      plVar4 = (long *)FUN_04d055c8((int *)(param_1 + 0x10),iVar9,*(undefined8 *)puVar3);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_059f595c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d87540(plVar4,*(long *)puVar2,0);
LAB_059f595c:
      (*(code *)*puVar5)(plVar4,param_2,puVar5[1]);
      bVar1 = 0 < iVar9;
      iVar9 = iVar9 + -1;
    } while (bVar1);
  }
  return;
}


