/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$CreateDefault
ENTRY_POINT: 0559c484
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__CreateDefault(void)

{
  int iVar1;
  char in_NG;
  char in_OV;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong in_x9;
  ulong uVar5;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  
  if (in_NG == in_OV) {
    uVar4 = (ulong)*(uint *)(unaff_x20 + 0x18);
    uVar6 = 0;
    iVar7 = 0;
    uVar5 = in_x9 & 0xffffffff;
    do {
      if (0 < (int)uVar4) {
        if (uVar5 <= uVar6) {
LAB_0559c554:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        uVar8 = 0;
        while( true ) {
          if (uVar4 <= uVar8) goto LAB_0559c554;
          uVar2 = FUN_05465414(*(undefined8 *)(unaff_x21 + uVar6 * 8 + 0x20));
          if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          iVar1 = (int)uVar8;
          uVar3 = iVar7 + iVar1;
          if (*(uint *)(unaff_x22 + 0x18) <= uVar3) goto LAB_0559c554;
          *(undefined8 *)(unaff_x22 + (long)(int)uVar3 * 8 + 0x20) = uVar2;
          thunk_FUN_02f411dc();
          uVar4 = (ulong)*(uint *)(unaff_x20 + 0x18);
          uVar5 = (ulong)*(uint *)(unaff_x21 + 0x18);
          uVar8 = uVar8 + 1;
          if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)uVar8) break;
          if (uVar5 <= uVar6) goto LAB_0559c554;
        }
        iVar7 = iVar7 + iVar1 + 1;
      }
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)(int)uVar5);
  }
  return;
}


