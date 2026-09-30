/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeValue
ENTRY_POINT: 05e9b074
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeValue(long *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int unaff_w19;
  long unaff_x20;
  char *unaff_x21;
  long unaff_x22;
  char *pcVar5;
  char *pcVar6;
  long *plVar7;
  
  if (((param_1 == (long *)0x0) || (lVar4 = *(long *)PTR_DAT_07a0bc18, *param_1 != lVar4)) ||
     (iVar2 = (**(code **)(lVar4 + 0x188))(param_1,*(undefined8 *)(lVar4 + 400)), iVar2 != 1)) {
    lVar3 = FUN_03642a4c(*(undefined8 *)PTR_DAT_079f48c8,1);
    plVar7 = (long *)0x0;
    lVar4 = (long)unaff_w19;
    pcVar5 = unaff_x21;
    while (pcVar5 < unaff_x21 + lVar4) {
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
      if (cVar1 < '\0') {
        if (plVar7 == (long *)0x0) {
          if (unaff_x20 == 0) {
            plVar7 = *(long **)(unaff_x22 + 0x30);
            if (plVar7 == (long *)0x0) goto LAB_05e9b158;
            plVar7 = (long *)(**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180))
            ;
          }
          else {
            plVar7 = (long *)FUN_05e9b160();
          }
          if (plVar7 == (long *)0x0) goto LAB_05e9b158;
          plVar7[2] = (long)unaff_x21;
          plVar7[3] = 0;
        }
        if (lVar3 == 0) {
LAB_05e9b158:
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        *(char *)(lVar3 + 0x20) = cVar1;
        iVar2 = (**(code **)(*plVar7 + 0x1c8))(plVar7,lVar3,pcVar6,*(undefined8 *)(*plVar7 + 0x1d0))
        ;
        unaff_w19 = unaff_w19 + iVar2 + -1;
      }
    }
  }
  return unaff_w19;
}


