/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert.<DeserializeTokenAsync>d__6$$SetStateMachine
ENTRY_POINT: 06d125ec
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06d12698) */

void Meta_WitAi_Json_JsonConvert_<DeserializeTokenAsync>d__6__SetStateMachine
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long lVar6;
  long *unaff_x23;
  
  if (param_2 != 1) {
    if (unaff_x19 != (long *)0x0) {
      lVar6 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x23) {
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto Meta_WitAi_Json_JsonConverter__WriteJson;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_03cf1348();
Meta_WitAi_Json_JsonConverter__WriteJson:
      (*(code *)*puVar1)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d91ca0(param_1);
  }
  plVar2 = (long *)__cxa_begin_catch();
  lVar6 = *plVar2;
  __cxa_end_catch();
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_06d125a0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348();
LAB_06d125a0:
    (*(code *)*puVar1)();
  }
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb28(lVar6);
  }
  return;
}


