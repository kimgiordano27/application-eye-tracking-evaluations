/*
FUNCTION_NAME: FUN_03884838
ENTRY_POINT: 03884838
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


long FUN_03884838(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_0453946e & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_JsonUtility_FromJson<JsonResponseGeneralArray<ExitData>>__);
    FUN_01c5d288(PTR_DAT_042305b8);
    DAT_0453946e = 1;
  }
  puVar2 = Method_UnityEngine_JsonUtility_FromJson<JsonResponseGeneralArray<ExitData>>__;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar3 = FUN_032f47b8(*(long *)(param_1 + 0x10),0);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    lVar4 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
    if (lVar3 == 0) {
      lVar5 = 0;
    }
    else {
      uVar6 = *(undefined8 *)PTR_DAT_042305b8;
      lVar5 = thunk_FUN_01c495e4(lVar3,uVar6);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(lVar3,uVar6);
      }
    }
    FUN_03313b6c(lVar4,0);
    *(long *)(lVar4 + 0x10) = lVar5;
    *(undefined8 *)(lVar4 + 0x18) = uVar7;
    *(undefined4 *)(lVar4 + 0x20) = uVar1;
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


