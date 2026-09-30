/*
FUNCTION_NAME: FUN_065834ec
ENTRY_POINT: 065834ec
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_065834ec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  puVar4 = MagicaCloth2_ClothManager_TypeInfo;
  puVar3 = MagicaCloth2_ClothInitSerializeData_TypeInfo;
  puVar2 = PTR_DAT_06d6f838;
  puVar1 = PTR_DAT_06d3a120;
  if ((DAT_071ce846 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d38ba0);
    FUN_02f07e70(UnityEngine_CollisionDetectionMode_TypeInfo);
    FUN_02f07e70(MagicaCloth2_ClothManager_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3a120);
    FUN_02f07e70(PTR_DAT_06d3a128);
    FUN_02f07e70(MagicaCloth2_ClothInitSerializeData_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3a130);
    FUN_02f07e70(PTR_DAT_06d6f840);
    FUN_02f07e70(PTR_DAT_06d6f838);
    DAT_071ce846 = 1;
  }
  uVar5 = FUN_03baaa70(param_1,*(undefined8 *)puVar3,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  thunk_FUN_02f411dc();
  lVar6 = FUN_03baabf0(param_1,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_06d6f840;
  if (lVar6 != 0) {
    uVar5 = FUN_0658fc70(lVar6,0);
    *(undefined8 *)(param_1 + 0x98) = uVar5;
    thunk_FUN_02f411dc();
    lVar6 = FUN_03baabf0(param_1,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
    puVar4 = UnityEngine_CollisionDetectionMode_TypeInfo;
    puVar3 = PTR_DAT_06d3a130;
    puVar2 = PTR_DAT_06d3a128;
    puVar1 = PTR_DAT_06d38ba0;
    if (lVar6 != 0) {
      uVar5 = FUN_0658fc70(lVar6,0);
      *(undefined8 *)(param_1 + 0xa0) = uVar5;
      thunk_FUN_02f411dc();
      uVar5 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
      FUN_0513ca78(uVar5,param_1,*(undefined8 *)puVar4,0);
      lVar6 = FUN_03babaf0(param_1,*(undefined8 *)puVar3,uVar5,*(undefined8 *)puVar2);
      if (lVar6 != 0) {
        uVar5 = FUN_065a6cd4(lVar6,0);
        puVar7 = (undefined8 *)(param_1 + 0xa8);
        *puVar7 = uVar5;
        thunk_FUN_02f411dc(puVar7,uVar5);
        thunk_FUN_065acb88(param_1,*(undefined8 *)(param_1 + 0x90),*puVar7,0);
        thunk_FUN_065acb88(param_1,*(undefined8 *)(param_1 + 0x98),*puVar7,0);
        thunk_FUN_065acb88(param_1,*(undefined8 *)(param_1 + 0xa0),*puVar7,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


