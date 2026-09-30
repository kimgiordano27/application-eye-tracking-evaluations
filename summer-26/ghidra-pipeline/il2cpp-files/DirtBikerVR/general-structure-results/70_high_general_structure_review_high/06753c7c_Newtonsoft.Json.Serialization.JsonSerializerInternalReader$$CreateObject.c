/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObject
ENTRY_POINT: 06753c7c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObject(void)

{
  uint uVar1;
  undefined2 uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x21;
  long lVar4;
  long *unaff_x25;
  long lVar5;
  
  uVar3 = FUN_0675fca8();
  if ((uVar3 & 1) == 0) {
LAB_06753ef0:
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_06759b3c();
    return;
  }
  if (unaff_x19 != 0) {
    lVar4 = *(long *)(unaff_x19 + 0x30);
    if (DAT_0897bb55 == '\0') {
      FUN_03a8a718(PTR_DAT_0849fcb0);
      DAT_0897bb55 = '\x01';
    }
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x10) == 1) {
        uVar1 = *(uint *)(unaff_x21 + 0x18);
        if ((int)uVar1 < (int)*(uint *)(unaff_x21 + 0x10)) {
          if (*(uint *)(unaff_x21 + 0x10) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          lVar5 = *(long *)(unaff_x21 + 8);
          uVar2 = FUN_065c7d98(lVar4,0,0);
          *(undefined2 *)(lVar5 + (long)(int)uVar1 * 2) = uVar2;
          *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
          goto LAB_06753ef0;
        }
      }
      FUN_065e5d60();
      goto LAB_06753ef0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


