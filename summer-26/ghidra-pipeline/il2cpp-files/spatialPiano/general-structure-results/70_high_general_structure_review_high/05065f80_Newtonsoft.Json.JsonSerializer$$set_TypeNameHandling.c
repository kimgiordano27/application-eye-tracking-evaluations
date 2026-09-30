/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_TypeNameHandling
ENTRY_POINT: 05065f80
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonSerializer__set_TypeNameHandling(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long unaff_x21;
  
  puVar2 = PTR_DAT_067dc088;
  if ((*(byte *)(unaff_x21 + 0x7a7) & 1) == 0) {
    FUN_02f08768(PTR_DAT_067dc088);
    *(undefined1 *)(unaff_x21 + 0x7a7) = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = **(long **)(lVar4 + 0xb8);
  if (lVar4 != 0) {
    if (param_1 - 0x526U < *(uint *)(lVar4 + 0x18)) {
      iVar3 = 0;
      iVar6 = 0xc;
      uVar5 = *(uint *)(lVar4 + (long)(int)(param_1 - 0x526U) * 0x10 + 0x20);
      do {
        uVar1 = uVar5 & 1;
        uVar5 = (int)uVar5 >> 1;
        iVar6 = iVar6 + -1;
        iVar3 = uVar1 + iVar3 + 0x1d;
      } while (iVar6 != 0);
      return iVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


