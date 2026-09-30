/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_ObjectCreationHandling
ENTRY_POINT: 0178aa54
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_ObjectCreationHandling
          (long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  uint uVar6;
  
  while (uVar2 = (**(code **)(param_1 + 0x438))(param_2,*(undefined8 *)(param_1 + 0x440)),
        plVar3 = unaff_x19, (uVar2 & 1) != 0) {
    param_2 = (long *)(**(code **)(*unaff_x19 + 0x448))
                                (unaff_x19,*(undefined8 *)(*unaff_x19 + 0x450));
    if (param_2 == (long *)0x0) goto LAB_0178aad0;
    uVar2 = (**(code **)(*param_2 + 0x3c8))(param_2,*(undefined8 *)(*param_2 + 0x3d0));
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    param_1 = *param_2;
    unaff_x19 = param_2;
  }
  do {
    uVar2 = FUN_0178abb0(plVar3);
    uVar1 = (**(code **)(*plVar3 + 0x4d8))(plVar3,*(undefined8 *)(*plVar3 + 0x4e0));
    if ((uVar2 & 1) == 0) {
      if ((uVar1 & 7) != 1) {
        return 0;
      }
      uVar2 = (**(code **)(*unaff_x19 + 1000))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x3f0));
      if ((uVar2 & 1) == 0) {
        return 1;
      }
      uVar2 = (**(code **)(*unaff_x19 + 0x3f8))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x400));
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      lVar4 = (**(code **)(*unaff_x19 + 0x488))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x490));
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if ((int)uVar1 < 1) {
          return 1;
        }
        uVar6 = 0;
        lVar5 = lVar4;
        while( true ) {
          if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194(lVar5);
          }
          if (*(long *)(lVar4 + (long)(int)uVar6 * 8 + 0x20) == 0) break;
          uVar2 = FUN_0178aa28();
          if ((uVar2 & 1) == 0) {
            return 0;
          }
          uVar1 = *(uint *)(lVar4 + 0x18);
          uVar6 = uVar6 + 1;
          lVar5 = 1;
          if ((int)uVar1 <= (int)uVar6) {
            return 1;
          }
        }
      }
      break;
    }
    if ((uVar1 & 7) != 2) {
      return 0;
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
  } while (plVar3 != (long *)0x0);
LAB_0178aad0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


