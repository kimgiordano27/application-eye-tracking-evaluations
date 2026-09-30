/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetContractSafe
ENTRY_POINT: 06853e98
PROGRAM: Waifu-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe(int param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  int unaff_w22;
  int unaff_w23;
  long unaff_x25;
  
  do {
    if ((unaff_w23 != 0) || (unaff_w22 = unaff_w22 + 1, param_1 <= unaff_w22)) {
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06853dec with catch @ 06853ec0
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06853e14 with catch @ 06853ec4
                        */
      return unaff_w23;
    }
    FUN_06848650();
    FUN_06848650();
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)(unaff_x25 + 0x5d0)) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_06853e78;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c();
LAB_06853e78:
    unaff_w23 = (*(code *)*puVar1)();
    param_1 = FUN_068485f0();
  } while( true );
}


