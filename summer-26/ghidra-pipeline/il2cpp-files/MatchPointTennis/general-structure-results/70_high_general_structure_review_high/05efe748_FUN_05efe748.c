/*
FUNCTION_NAME: FUN_05efe748
ENTRY_POINT: 05efe748
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_05efe748(long param_1,long param_2,undefined8 param_3,undefined4 param_4,long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 == (long *)0x0) {
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x05efe7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2 + 0x18))
                (*(undefined8 *)(param_2 + 0x40),param_3,*(undefined8 *)(param_2 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar2 = **(long **)(*(long *)(param_5 + 0x20) + 0xc0);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_04481fb8(lVar2);
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar2) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto 
        Unity_Collections_NativeArray<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>__Copy
        ;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_044822ac(plVar6,lVar2,2);
Unity_Collections_NativeArray<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>__Copy:
                    /* WARNING: Could not recover jumptable at 0x05efe818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar6,param_2,param_3,param_4,puVar1[1]);
  return;
}


