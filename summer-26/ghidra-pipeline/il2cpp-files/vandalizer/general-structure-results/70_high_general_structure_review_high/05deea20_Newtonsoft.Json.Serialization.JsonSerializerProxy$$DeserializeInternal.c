/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$DeserializeInternal
ENTRY_POINT: 05deea20
PROGRAM: vandalizer-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


bool Newtonsoft_Json_Serialization_JsonSerializerProxy__DeserializeInternal(void)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  double *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  double dVar4;
  double unaff_d8;
  double unaff_d9;
  
  do {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    do {
                    /* try { // try from 05deea24 to 05eeea2f has its CatchHandler @ 05deea44 */
      uVar3 = FUN_05df79d8();
                    /* try { // try from 05deea30 to 05eeea3b has its CatchHandler @ 05dee1e4 */
      if ((uVar3 & 1) == 0) {
LAB_05deea74:
        return 0 < unaff_w21;
      }
      uVar1 = *(ushort *)(unaff_x20 + 0x14);
                    /* try { // try from 05deea3c to 05eeea43 has its CatchHandler @ 05deea44 */
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 05deea24 with catch @ 05deea44
                       catch() { ... } // from try @ 05deea3c with catch @ 05deea44 */
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
                    /* try { // try from 05deea48 to 05eef37f has its CatchHandler @ 05deea48
                       catch() { ... } // from try @ 05deea48 with catch @ 05deea48
                       catch() { ... } // from try @ 05def3c4 with catch @ 05deea48
                       catch() { ... } // from try @ 05def458 with catch @ 05deea48
                       catch() { ... } // from try @ 05def4c4 with catch @ 05deea48
                       catch() { ... } // from try @ 05def558 with catch @ 05deea48
                       catch() { ... } // from try @ 05def570 with catch @ 05deea48
                       catch() { ... } // from try @ 05def644 with catch @ 05deea48
                       catch() { ... } // from try @ 05def674 with catch @ 05deea48
                       catch() { ... } // from try @ 05def6cc with catch @ 05deea48 */
      uVar2 = uVar1 - 0x30;
      if (9 < uVar2) goto LAB_05deea74;
      dVar4 = unaff_d9 * (double)(int)uVar2;
      unaff_d9 = unaff_d9 * unaff_d8;
      unaff_w21 = unaff_w21 + 1;
      *unaff_x19 = dVar4 + *unaff_x19;
    } while (*(int *)(*unaff_x22 + 0xe4) != 0);
  } while( true );
}


