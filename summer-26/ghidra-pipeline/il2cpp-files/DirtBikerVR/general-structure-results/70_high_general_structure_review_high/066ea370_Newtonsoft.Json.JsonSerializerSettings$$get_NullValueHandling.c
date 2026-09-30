/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_NullValueHandling
ENTRY_POINT: 066ea370
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_NullValueHandling(long param_1,undefined8 param_2)

{
  bool in_ZR;
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  if (!in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8ad40();
  }
  plVar1 = (long *)(**(code **)(param_1 + 0x408))(param_2,*(undefined8 *)(param_1 + 0x410));
  if (plVar1 != (long *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x338))(plVar1,*(undefined8 *)(*plVar1 + 0x340));
    FUN_065d8050();
    if (lVar2 != 0) {
      uVar6 = *(uint *)(lVar2 + 0x18);
      if (0 < (int)uVar6) {
        uVar7 = 0;
        do {
          if (uVar7 != 0) {
            FUN_065d8050();
            uVar6 = *(uint *)(lVar2 + 0x18);
          }
          if (uVar6 <= uVar7) goto LAB_066ea5f8;
          plVar3 = *(long **)(lVar2 + (long)(int)uVar7 * 8 + 0x20);
          if (plVar3 == (long *)0x0) goto LAB_066ea5f4;
          (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
          FUN_065d8050();
          uVar6 = *(uint *)(lVar2 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar6);
      }
      FUN_065d8050();
      if (plVar1 != (long *)0x0) {
        lVar2 = (**(code **)(*plVar1 + 600))(plVar1,*(undefined8 *)(*plVar1 + 0x260));
        FUN_065d8050();
        if (lVar2 != 0) {
          uVar6 = *(uint *)(lVar2 + 0x18);
          if (0 < (int)uVar6) {
            uVar7 = 0;
            do {
              if (uVar7 != 0) {
                FUN_065d8050();
                uVar6 = *(uint *)(lVar2 + 0x18);
              }
              if (uVar6 <= uVar7) {
LAB_066ea5f8:
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c8();
              }
              plVar3 = (long *)(lVar2 + (long)(int)uVar7 * 8 + 0x20);
              plVar1 = (long *)*plVar3;
              if (plVar1 == (long *)0x0) goto LAB_066ea5f4;
              plVar1 = (long *)(**(code **)(*plVar1 + 0x1e8))
                                         (plVar1,*(undefined8 *)(*plVar1 + 0x1f0));
              if (plVar1 == (long *)0x0) goto LAB_066ea5f4;
              uVar4 = (**(code **)(*plVar1 + 0x3d8))(plVar1,*(undefined8 *)(*plVar1 + 0x3e0));
              if ((uVar4 & 1) != 0) {
                uVar4 = (**(code **)(*plVar1 + 1000))(plVar1,*(undefined8 *)(*plVar1 + 0x3f0));
                if ((uVar4 & 1) == 0) {
                  plVar1 = (long *)(**(code **)(*plVar1 + 0x458))
                                             (plVar1,*(undefined8 *)(*plVar1 + 0x460));
                  if (plVar1 == (long *)0x0) goto LAB_066ea5f4;
                }
              }
              (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
              FUN_065d8050();
              if (*(uint *)(lVar2 + 0x18) <= uVar7) goto LAB_066ea5f8;
              plVar1 = (long *)*plVar3;
              if (plVar1 == (long *)0x0) goto LAB_066ea5f4;
              lVar5 = (**(code **)(*plVar1 + 0x1d8))(plVar1,*(undefined8 *)(*plVar1 + 0x1e0));
              if (lVar5 != 0) {
                FUN_065d8050();
                if (*(uint *)(lVar2 + 0x18) <= uVar7) goto LAB_066ea5f8;
                plVar3 = (long *)*plVar3;
                if (plVar3 == (long *)0x0) goto LAB_066ea5f4;
                (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
                FUN_065d8050();
              }
              uVar6 = *(uint *)(lVar2 + 0x18);
              uVar7 = uVar7 + 1;
            } while ((int)uVar7 < (int)uVar6);
          }
          FUN_065d8050();
          return;
        }
      }
    }
  }
LAB_066ea5f4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


