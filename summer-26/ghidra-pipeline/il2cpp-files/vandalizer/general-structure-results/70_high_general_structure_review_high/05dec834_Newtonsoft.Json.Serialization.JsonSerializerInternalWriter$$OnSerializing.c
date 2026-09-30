/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerializing
ENTRY_POINT: 05dec834
PROGRAM: vandalizer-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerializing(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *in_x9;
  long in_x10;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar4;
  long *unaff_x26;
  
  if (in_x10 == *in_x9) {
    *unaff_x21 = (long)param_1;
    if (*param_1 == *in_x9) {
      thunk_FUN_0329bf60();
      if ((*unaff_x21 != 0) && (lVar1 = *(long *)(*unaff_x21 + 0x78), lVar1 != 0)) {
        uVar2 = thunk_FUN_03202440(lVar1,0);
        uVar4 = *(undefined8 *)PTR_DAT_075ec000;
        if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                    (*(long *)(PTR_DAT_0759b388 + 0xe0));
        }
        uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar4,0);
        uVar3 = FUN_05e1a748(uVar2,uVar4,0);
        if ((uVar3 & 1) != 0) {
          lVar1 = *unaff_x21;
          if (*(int *)(*(long *)PTR_DAT_075e7f58 + 0xe4) == 0) {
                    /* try { // try from 05dec8e8 to 05eec9ef has its CatchHandler @ 05dec8e8
                       catch() { ... } // from try @ 05dec8e8 with catch @ 05dec8e8
                       catch() { ... } // from try @ 05decad8 with catch @ 05dec8e8
                       catch() { ... } // from try @ 05decb40 with catch @ 05dec8e8
                       catch() { ... } // from try @ 05decc00 with catch @ 05dec8e8
                       catch() { ... } // from try @ 05decc40 with catch @ 05dec8e8
                       catch() { ... } // from try @ 05deccac with catch @ 05dec8e8 */
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          uVar2 = FUN_05d53f6c(0);
          if (lVar1 == 0) goto LAB_05dec934;
          FUN_05d54210(lVar1,uVar2,0);
        }
        if (*(int *)(*(long *)PTR_DAT_0759c258 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar2 = FUN_05de3e24();
        *unaff_x22 = uVar2;
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        FUN_05dec324();
        return;
      }
LAB_05dec934:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2730(param_1);
}


