/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<UpdateModMediaResponse>
ENTRY_POINT: 016a4950
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


int Newtonsoft_Json_JsonSerializer__Deserialize<UpdateModMediaResponse>
              (byte *param_1,ulong param_2,ulong param_3,byte *param_4,ulong param_5,ulong param_6)

{
  byte *pbVar1;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  byte *pbVar4;
  int iVar5;
  ulong uVar6;
  
  uVar2 = (ulong)(*param_4 >> 1);
  pbVar4 = param_4 + 4;
  if ((*param_4 & 1) != 0) {
    uVar2 = *(ulong *)(param_4 + 8);
    pbVar4 = *(byte **)(param_4 + 0x10);
  }
  if ((*param_1 & 1) == 0) {
    pbVar1 = param_1 + 4;
                    /* catch() { ... } // from try @ 016a49c0 with catch @ 016a4980 */
    uVar6 = (ulong)(*param_1 >> 1);
    uVar3 = uVar6 - param_2;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 8);
    pbVar1 = *(byte **)(param_1 + 0x10);
    uVar3 = uVar6 - param_2;
  }
  if (param_2 <= uVar6) {
    if (param_3 <= uVar3) {
      uVar3 = param_3;
    }
    if (param_5 <= uVar2) {
      uVar6 = uVar2 - param_5;
      if (param_6 <= uVar2 - param_5) {
        uVar6 = param_6;
      }
                    /* try { // try from 016a49b4 to 017a49bf has its CatchHandler @ 016a4a50 */
      __n = uVar6;
      if (uVar3 <= uVar6) {
        __n = uVar3;
      }
                    /* try { // try from 016a49c0 to 017a4a6f has its CatchHandler @ 016a4980 */
      if ((__n == 0) ||
         (iVar5 = wmemcmp((wchar_t *)(pbVar1 + param_2 * 4),(wchar_t *)(pbVar4 + param_5 * 4),__n),
         iVar5 == 0)) {
        if (uVar3 == uVar6) {
          iVar5 = 0;
        }
        else {
          iVar5 = 1;
          if (uVar3 < uVar6) {
            iVar5 = -1;
          }
        }
      }
      return iVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01597c88("string_view::substr");
}


