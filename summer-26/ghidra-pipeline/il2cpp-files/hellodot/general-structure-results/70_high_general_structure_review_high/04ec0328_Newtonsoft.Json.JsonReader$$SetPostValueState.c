/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$SetPostValueState
ENTRY_POINT: 04ec0328
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonReader__SetPostValueState(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  *(char *)(param_1 + 0x20) = (char)param_3;
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x18) < 2) {
LAB_04ec0420:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    *(char *)(lVar1 + 0x21) = (char)((ulong)param_3 >> 8);
    lVar1 = *(long *)(param_2 + 0x18);
    if (lVar1 != 0) {
      if (*(uint *)(lVar1 + 0x18) < 3) goto LAB_04ec0420;
      *(char *)(lVar1 + 0x22) = (char)((ulong)param_3 >> 0x10);
      lVar1 = *(long *)(param_2 + 0x18);
      if (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x18) < 4) goto LAB_04ec0420;
        *(char *)(lVar1 + 0x23) = (char)((ulong)param_3 >> 0x18);
        lVar1 = *(long *)(param_2 + 0x18);
        if (lVar1 != 0) {
          if (*(uint *)(lVar1 + 0x18) < 5) goto LAB_04ec0420;
          *(char *)(lVar1 + 0x24) = (char)((ulong)param_3 >> 0x20);
          lVar1 = *(long *)(param_2 + 0x18);
          if (lVar1 != 0) {
            if (*(uint *)(lVar1 + 0x18) < 6) goto LAB_04ec0420;
            *(char *)(lVar1 + 0x25) = (char)((ulong)param_3 >> 0x28);
            lVar1 = *(long *)(param_2 + 0x18);
            if (lVar1 != 0) {
              if (*(uint *)(lVar1 + 0x18) < 7) goto LAB_04ec0420;
              *(char *)(lVar1 + 0x26) = (char)((ulong)param_3 >> 0x30);
              lVar1 = *(long *)(param_2 + 0x18);
              if (lVar1 != 0) {
                if (*(uint *)(lVar1 + 0x18) < 8) goto LAB_04ec0420;
                *(char *)(lVar1 + 0x27) = (char)((ulong)param_3 >> 0x38);
                plVar2 = *(long **)(param_2 + 0x10);
                if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x04ec0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*plVar2 + 0x398))
                            (plVar2,*(undefined8 *)(param_2 + 0x18),0,8,
                             *(undefined8 *)(*plVar2 + 0x3a0));
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


