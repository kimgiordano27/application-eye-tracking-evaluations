/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_TypeNameHandling
ENTRY_POINT: 0559c528
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_TypeNameHandling(void)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint in_w8;
  ulong in_x9;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  int unaff_w24;
  ulong uVar4;
  
  while( true ) {
    do {
      unaff_x23 = unaff_x23 + 1;
      if ((long)(int)in_x9 <= (long)unaff_x23) {
        return;
      }
    } while ((int)in_w8 < 1);
    if ((in_x9 & 0xffffffff) <= unaff_x23) break;
    uVar4 = 0;
    while( true ) {
      if (in_w8 <= uVar4) goto LAB_0559c554;
      uVar2 = FUN_05465414(*(undefined8 *)(unaff_x21 + unaff_x23 * 8 + 0x20));
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      iVar1 = (int)uVar4;
      uVar3 = unaff_w24 + iVar1;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar3) goto LAB_0559c554;
      *(undefined8 *)(unaff_x22 + (long)(int)uVar3 * 8 + 0x20) = uVar2;
      thunk_FUN_02f411dc();
      in_w8 = *(uint *)(unaff_x20 + 0x18);
      in_x9 = (ulong)*(uint *)(unaff_x21 + 0x18);
      uVar4 = uVar4 + 1;
      if ((long)(int)in_w8 <= (long)uVar4) break;
      if (in_x9 <= unaff_x23) goto LAB_0559c554;
    }
    unaff_w24 = unaff_w24 + iVar1 + 1;
  }
LAB_0559c554:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


