/*
FUNCTION_NAME: FUN_064ec0c8
ENTRY_POINT: 064ec0c8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


long FUN_064ec0c8(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_34;
  
  if ((DAT_07556f23 & 1) == 0) {
    FUN_03188a78(System_Func<TransformOrigin,_TransformOrigin,_bool>_TypeInfo);
    FUN_03188a78(PTR_DAT_070cb828);
    DAT_07556f23 = 1;
  }
  local_34 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_50 = 0;
  if (param_1 == 0) {
    thunk_FUN_031edd38(PTR_DAT_070c2888);
    uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    uVar6 = thunk_FUN_031edd38(System_Func<Translate,_Translate,_bool>_TypeInfo);
    FUN_05897880(uVar4,uVar6,0);
    uVar6 = thunk_FUN_031edd38(System_Func<Type,_JsonSerializerOptions,_JsonTypeInfo>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_03188b9c(uVar4,uVar6);
  }
  uVar4 = FUN_057c42bc(param_1,0);
  uVar5 = FUN_057bebf8(uVar4,0);
  lVar7 = 0;
  if ((uVar5 & 1) == 0) {
    if (*(long *)PTR_DAT_070cb828 == 0) {
LAB_064ec1f8:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar2 = FUN_057b9840(*(long *)PTR_DAT_070cb828,0,0);
    uVar3 = FUN_064efbd8(uVar4,uVar2,0);
    lVar7 = FUN_03188b1c(*(undefined8 *)System_Func<TransformOrigin,_TransformOrigin,_bool>_TypeInfo
                         ,(ulong)(uVar3 + 1));
    local_34 = 0;
    if (uVar3 < 0x7fffffff) {
      uVar5 = 0;
      lVar8 = 0x20;
      do {
        FUN_064ec818(&local_50,uVar4,&local_34);
        if (lVar7 == 0) goto LAB_064ec1f8;
        if (*(uint *)(lVar7 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        uVar5 = uVar5 + 1;
        puVar1 = (undefined8 *)(lVar7 + lVar8);
        lVar8 = lVar8 + 0x18;
        puVar1[1] = uStack_48;
        *puVar1 = local_50;
        puVar1[2] = local_40;
      } while (uVar3 + 1 != uVar5);
    }
  }
  return lVar7;
}


