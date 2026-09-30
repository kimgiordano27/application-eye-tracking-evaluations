/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<ParsePostValueAsync>d__4$$SetStateMachine
ENTRY_POINT: 04ed6610
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4
Newtonsoft_Json_JsonTextReader_<ParsePostValueAsync>d__4__SetStateMachine(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  char *unaff_x19;
  int iVar5;
  long *unaff_x21;
  long unaff_x22;
  
  iVar5 = (int)*(short *)(param_1 + unaff_x22 * 4 + 0x20);
  if (iVar5 == -1) {
    return 1;
  }
                    /* try { // try from 04ed6624 to 04fd6723 has its CatchHandler @ 04ed6624
                       catch() { ... } // from try @ 04ed6624 with catch @ 04ed6624
                       catch() { ... } // from try @ 04ed6a60 with catch @ 04ed6624
                       catch() { ... } // from try @ 04ed6de8 with catch @ 04ed6624
                       catch() { ... } // from try @ 04ed6ec8 with catch @ 04ed6624 */
  iVar2 = *(int *)(unaff_x19 + 4);
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    param_1 = **(long **)(*unaff_x21 + 0xb8);
    if (param_1 == 0) goto LAB_04ed667c;
  }
  if ((uint)unaff_x22 < *(uint *)(param_1 + 0x18)) {
    *(int *)(unaff_x19 + 4) = iVar2 + *(short *)(param_1 + unaff_x22 * 4 + 0x22);
    lVar4 = *unaff_x21;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar4 = *unaff_x21;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (lVar4 == 0) {
LAB_04ed667c:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar1 = (long)*unaff_x19 * 10 + (long)iVar5;
    if ((uint)lVar1 < *(uint *)(lVar4 + 0x18)) {
      cVar3 = *(char *)(lVar4 + lVar1 + 0x20);
      *unaff_x19 = cVar3;
      if (cVar3 == -1) {
        return 0;
      }
      if (cVar3 == 'd') {
        return 2;
      }
      return 3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


