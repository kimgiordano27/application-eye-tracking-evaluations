/*
FUNCTION_NAME: FUN_05a46ffc
ENTRY_POINT: 05a46ffc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


uint FUN_05a46ffc(long *param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  
  if ((DAT_06dc1a01 & 1) == 0) {
    FUN_02d965b8(OVRPlugin_Qpl_Annotation_Builder_Entry_TypeInfo);
                    /* try { // try from 05a47024 to 05b4702b has its CatchHandler @ 05a47054 */
    DAT_06dc1a01 = 1;
  }
                    /* try { // try from 05a4702c to 05b4702f has its CatchHandler @ 05a47050 */
                    /* try { // try from 05a47030 to 05b47033 has its CatchHandler @ 05a47048 */
  if (param_1 == param_2) {
                    /* try { // try from 05a47088 to 05b4708f has its CatchHandler @ 05a47098 */
    uVar2 = 1;
  }
  else {
                    /* try { // try from 05a47034 to 05b47037 has its CatchHandler @ 05a47044 */
    if (param_2 != (long *)0x0) {
                    /* try { // try from 05a47038 to 05b47077 has its CatchHandler @ 05a46d68 */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05a47034 with catch @ 05a47044
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05a47030 with catch @ 05a47048
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05a46f84 with catch @ 05a4704c
                        */
      bVar1 = *(byte *)(*(long *)OVRPlugin_Qpl_Annotation_Builder_Entry_TypeInfo + 0x130);
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05a4702c with catch @ 05a47050
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05a47024 with catch @ 05a47054
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05a46f10 with catch @ 05a47058
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05a46eac with catch @ 05a4705c
                        */
                    /* try { // try from 05a47078 to 05b4707b has its CatchHandler @ 05a47084 */
      if (((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
          (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
           *(long *)OVRPlugin_Qpl_Annotation_Builder_Entry_TypeInfo)) &&
         (uVar3 = FUN_0536ba54(param_1[2],param_2[2],0), (uVar3 & 1) == 0)) {
        uVar2 = FUN_0536ba54(param_1[3],param_2[3],0);
        uVar2 = uVar2 ^ 1;
        goto LAB_05a4708c;
      }
    }
    uVar2 = 0;
                    /* catch() { ... } // from try @ 05a47078 with catch @ 05a47084 */
  }
LAB_05a4708c:
                    /* try { // try from 05a47090 to 05b4709b has its CatchHandler @ 05a46d68 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05a47088 with catch @ 05a47098
                        */
  return uVar2 & 1;
}


