/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$InvokeOnSerialized
ENTRY_POINT: 05ab24d0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long * Newtonsoft_Json_Serialization_JsonContract__InvokeOnSerialized(long *param_1)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  if ((DAT_0739701b & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6dbb8);
    FUN_02fe925c(PTR_DAT_06faa590);
    FUN_02fe925c(PTR_DAT_06faa630);
    DAT_0739701b = 1;
  }
  if ((char)param_1[0x16] == '\0') {
    FUN_030414c4(param_1,*(undefined4 *)((long)param_1 + 0x14));
    *(undefined1 *)(param_1 + 0x16) = 1;
  }
  plVar2 = (long *)thunk_FUN_030104f8(param_1,0);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06f6dbb8 + 0x130);
    if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06f6dbb8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(plVar2);
    }
    plVar2[0x17] = 0;
    *(undefined1 *)(plVar2 + 2) = 0;
    thunk_FUN_03048534(plVar2 + 0x17,0);
    uVar3 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
    if ((uVar3 & 1) != 0) {
      return plVar2;
    }
    lVar4 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
    if (lVar4 != 0) {
      plVar5 = (long *)FUN_05aa088c(lVar4,0);
      if ((plVar5 == (long *)0x0) || (*plVar5 == *(long *)PTR_DAT_06faa630)) {
        (**(code **)(*plVar2 + 0x228))(plVar2,plVar5,*(undefined8 *)(*plVar2 + 0x230));
        lVar4 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
        if (lVar4 == 0) goto LAB_05ab2668;
        plVar5 = (long *)FUN_05a89724(lVar4,0);
        if ((plVar5 == (long *)0x0) || (*plVar5 == *(long *)PTR_DAT_06faa590)) {
          (**(code **)(*plVar2 + 0x248))(plVar2,plVar5,*(undefined8 *)(*plVar2 + 0x250));
          return plVar2;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(plVar5);
    }
  }
LAB_05ab2668:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


