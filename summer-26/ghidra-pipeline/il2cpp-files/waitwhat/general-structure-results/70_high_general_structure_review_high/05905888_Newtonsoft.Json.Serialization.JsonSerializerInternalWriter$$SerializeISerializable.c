/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeISerializable
ENTRY_POINT: 05905888
PROGRAM: waitwhat-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeISerializable
               (long param_1)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  long lVar4;
  uint uVar5;
  long in_x9;
  long lVar6;
  int unaff_w20;
  int iVar7;
  long unaff_x21;
  short unaff_w22;
  uint unaff_w23;
  int unaff_w24;
  long *unaff_x25;
  int unaff_w26;
  
  do {
    if (*(short *)(in_x9 + 8) == unaff_w22) goto LAB_05905894;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w23) {
LAB_059059a8:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    *(short *)(unaff_x21 + (long)(int)unaff_w23 * 2 + 0x20) = unaff_w22;
    unaff_w23 = unaff_w23 + 1;
LAB_05905978:
    unaff_w20 = unaff_w20 + 1;
    if ((unaff_w24 <= unaff_w20) || (*(int *)(unaff_x21 + 0x18) <= (int)unaff_w23)) {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05905940 with catch @ 0590599c
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05905918 with catch @ 059059a0
                        */
      FUN_057bc494(0);
      return;
    }
    unaff_w22 = FUN_057b9840();
    param_1 = *unaff_x25;
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_031e5338(param_1);
      param_1 = *unaff_x25;
    }
    in_x9 = *(long *)(param_1 + 0xb8);
    if (*(short *)(in_x9 + 10) == unaff_w22) {
LAB_05905894:
      uVar5 = *(uint *)(unaff_x21 + 0x18);
      uVar1 = unaff_w23 + 1;
      if (uVar1 != uVar5) {
        if (*(int *)(param_1 + 0xe4) == 0) {
                    /* try { // try from 059058b0 to 05a05917 has its CatchHandler @ 059058b0
                       catch() { ... } // from try @ 059058b0 with catch @ 059058b0
                       catch() { ... } // from try @ 05905958 with catch @ 059058b0
                       catch() { ... } // from try @ 059059d4 with catch @ 059058b0 */
          thunk_FUN_031e5338(param_1);
          uVar5 = *(uint *)(unaff_x21 + 0x18);
        }
        if (uVar5 <= unaff_w23) goto LAB_059059a8;
        *(undefined2 *)(unaff_x21 + (long)(int)unaff_w23 * 2 + 0x20) =
             *(undefined2 *)(*(long *)(*unaff_x25 + 0xb8) + 10);
        unaff_w23 = uVar1;
        iVar7 = unaff_w20;
        if (unaff_w20 < unaff_w26) {
          do {
            iVar2 = iVar7 + 1;
            sVar3 = FUN_057b9840();
            lVar4 = *unaff_x25;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_031e5338(lVar4);
              lVar4 = *unaff_x25;
            }
            lVar6 = *(long *)(lVar4 + 0xb8);
                    /* try { // try from 05905918 to 05a05923 has its CatchHandler @ 059059a0 */
            if (*(short *)(lVar6 + 10) != sVar3) {
              if (*(int *)(lVar4 + 0xe4) == 0) {
                thunk_FUN_031e5338(lVar4);
                lVar6 = *(long *)(*unaff_x25 + 0xb8);
              }
              unaff_w20 = iVar7;
              if (*(short *)(lVar6 + 8) != sVar3) break;
            }
                    /* try { // try from 05905940 to 05a05957 has its CatchHandler @ 0590599c */
            unaff_w20 = unaff_w26;
            iVar7 = iVar2;
          } while (unaff_w26 != iVar2);
        }
      }
      goto LAB_05905978;
    }
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_031e5338(param_1);
      param_1 = *unaff_x25;
      in_x9 = *(long *)(param_1 + 0xb8);
    }
  } while( true );
}


