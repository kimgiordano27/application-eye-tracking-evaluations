/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataProperties
ENTRY_POINT: 05abbeb4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataProperties
               (long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_07397067 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fac5b8);
    DAT_07397067 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03037804(PTR_DAT_06f7c188);
    uVar3 = thunk_FUN_0301080c();
    uVar4 = thunk_FUN_03037804(PTR_DAT_06f9aec8);
    uVar5 = thunk_FUN_03037804(PTR_DAT_06fac5a8);
    FUN_05a6624c(uVar3,uVar4,uVar5,0);
    uVar4 = thunk_FUN_03037804(PTR_DAT_06fac5c0);
                    /* WARNING: Subroutine does not return */
    FUN_02fe93c0(uVar3,uVar4);
  }
  lVar6 = *(long *)(param_1 + 0x10);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    do {
      lVar7 = lVar6;
      plVar1 = *(long **)(lVar7 + 0x10);
      if (plVar1 == (long *)0x0) goto LAB_05abbfcc;
      uVar2 = (**(code **)(*plVar1 + 0x138))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x140));
      if ((uVar2 & 1) != 0) {
        *(undefined8 *)(lVar7 + 0x18) = param_3;
        thunk_FUN_03048534((undefined8 *)(lVar7 + 0x18),param_3);
        return;
      }
      lVar6 = *(long *)(lVar7 + 0x20);
    } while (*(long *)(lVar7 + 0x20) != 0);
  }
  lVar6 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fac5b8);
  FUN_05b32c00(lVar6,0);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x10) = param_2;
    thunk_FUN_03048534((long *)(lVar6 + 0x10),param_2);
    *(undefined8 *)(lVar6 + 0x18) = param_3;
    thunk_FUN_03048534((undefined8 *)(lVar6 + 0x18),param_3);
    plVar1 = (long *)(param_1 + 0x10);
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 0x20);
    }
    *plVar1 = lVar6;
    thunk_FUN_03048534(plVar1,lVar6);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    return;
  }
LAB_05abbfcc:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


