/*
FUNCTION_NAME: FUN_039ae018
ENTRY_POINT: 039ae018
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2
*/


undefined8 FUN_039ae018(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = Method_System_Xml_XmlEncodedRawTextWriter_WriteCharEntity__;
  if ((DAT_04539fc4 & 1) == 0) {
                    /* catch() { ... } // from try @ 039add10 with catch @ 039ae038
                       try { // try from 039ae038 to 03aae07b has its CatchHandler @ 039ad17c */
                    /* catch() { ... } // from try @ 039ad4b8 with catch @ 039ae03c */
    FUN_01c5d288(Method_System_Xml_XmlEncodedRawTextWriter_WriteCharEntity__);
                    /* catch() { ... } // from try @ 039ad628 with catch @ 039ae040 */
                    /* catch() { ... } // from try @ 039add0c with catch @ 039ae044 */
                    /* catch() { ... } // from try @ 039add08 with catch @ 039ae048 */
    FUN_01c5d288(Method_System_Xml_XmlEntityReference__ctor__);
                    /* catch() { ... } // from try @ 039ad614 with catch @ 039ae04c */
                    /* catch() { ... } // from try @ 039add04 with catch @ 039ae050 */
                    /* catch() { ... } // from try @ 039add00 with catch @ 039ae054 */
    FUN_01c5d288(Method_System_Xml_XmlEntityReference_set_Value__);
                    /* catch() { ... } // from try @ 039ad49c with catch @ 039ae058 */
                    /* catch() { ... } // from try @ 039ad494 with catch @ 039ae05c */
                    /* catch() { ... } // from try @ 039ad604 with catch @ 039ae060 */
    FUN_01c5d288(Method_System_Xml_Schema_XmlListConverter_ToArray<byte[]>__);
    DAT_04539fc4 = 1;
  }
  lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  thunk_FUN_01c21c38();
                    /* try { // try from 039ae07c to 03aae07f has its CatchHandler @ 039ae0ac */
  if (lVar2 == 0) {
    uVar3 = thunk_FUN_01c496e0(*(undefined8 *)Method_System_Xml_XmlEntityReference__ctor__);
                    /* catch() { ... } // from try @ 039ae07c with catch @ 039ae0ac */
                    /* try { // try from 039ae0bc to 03aae0cf has its CatchHandler @ 039ae140 */
    FUN_0396f298(uVar3,*(undefined8 *)Method_System_Xml_Schema_XmlListConverter_ToArray<byte[]>__,
                 *(undefined8 *)Method_System_Xml_XmlEntityReference_set_Value__,0);
    thunk_FUN_01c21c38();
    lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
    *(undefined8 *)(lVar2 + 8) = uVar3;
  }
  else {
                    /* try { // try from 039ae080 to 03aae0bb has its CatchHandler @ 039ad17c */
    lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
  }
                    /* catch() { ... } // from try @ 039ad480 with catch @ 039ae0d0
                       try { // try from 039ae0d0 to 03aae0e7 has its CatchHandler @ 039ad17c */
  uVar3 = *(undefined8 *)(lVar2 + 8);
  thunk_FUN_01c21c38();
  return uVar3;
}


