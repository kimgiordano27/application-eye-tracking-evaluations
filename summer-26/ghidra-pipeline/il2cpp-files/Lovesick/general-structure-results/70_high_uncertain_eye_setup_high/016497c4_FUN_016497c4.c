/*
FUNCTION_NAME: FUN_016497c4
ENTRY_POINT: 016497c4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_016497c4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = Method_System_Runtime_Remoting_Messaging_ServerObjectReplySink_AsyncProcessMessage__;
  if ((DAT_037782a8 & 1) == 0) {
                    /* try { // try from 01649800 to 01749807 has its CatchHandler @ 01649a78 */
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_106_0_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Rendering_DebugActionState_TypeInfo);
                    /* try { // try from 01649818 to 0174981f has its CatchHandler @ 01649a68 */
    thunk_FUN_00d48444(Method_System_Threading_Tasks_Task_Run<Stream>__);
                    /* try { // try from 01649828 to 01749833 has its CatchHandler @ 01649a6c */
    thunk_FUN_00d48444(
                      Method_System_Runtime_Remoting_Messaging_ServerObjectReplySink_AsyncProcessMessage__
                      );
    thunk_FUN_00d48444(StringLiteral_6618);
                    /* try { // try from 0164983c to 01749843 has its CatchHandler @ 01649a70 */
    thunk_FUN_00d48444(Sirenix_Serialization_MinimalBaseFormatter<Version>_TypeInfo);
    thunk_FUN_00d48444(System_UriComponents_TypeInfo);
    DAT_037782a8 = 1;
  }
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = UnityEngine_Rendering_DebugActionState_TypeInfo;
  if (lVar4 != 0) {
                    /* try { // try from 01649864 to 0174986b has its CatchHandler @ 01649998 */
                    /* try { // try from 01649874 to 0174987f has its CatchHandler @ 01649990 */
    FUN_01320e50(lVar4,*(undefined8 *)Method_System_Threading_Tasks_Task_Run<Stream>__);
    *(long *)(param_1 + 0x18) = lVar4;
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar3 = StringLiteral_6618;
    puVar2 = System_UriComponents_TypeInfo;
    puVar1 = Sirenix_Serialization_MinimalBaseFormatter<Version>_TypeInfo;
    if (lVar4 != 0) {
                    /* try { // try from 01649894 to 0174989b has its CatchHandler @ 01649994 */
                    /* try { // try from 016498a4 to 017498bb has its CatchHandler @ 0164999c */
      FUN_01260fc8(lVar4,*(undefined8 *)OVRPlugin_OVRP_1_106_0_TypeInfo);
      uVar6 = *(undefined8 *)puVar2;
      *(long *)(param_1 + 0x20) = lVar4;
      *(undefined8 *)(param_1 + 0x28) = uVar6;
                    /* try { // try from 016498cc to 017498cf has its CatchHandler @ 01649980 */
                    /* try { // try from 016498d0 to 017498db has its CatchHandler @ 0164998c */
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)puVar1;
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)puVar3;
      FUN_017b46ec(param_1,0);
      if (param_2 != 0) {
                    /* try { // try from 016498e8 to 017498f3 has its CatchHandler @ 01649984 */
        FUN_01649960(param_1,param_2,param_3,param_4,1);
        return;
      }
                    /* try { // try from 01649914 to 0174991b has its CatchHandler @ 01649988 */
      thunk_FUN_00d48444(PTR_DAT_033f37c8);
      uVar6 = thunk_FUN_00d62348();
      FUN_00ac2be8();
                    /* try { // try from 0164992c to 01749933 has its CatchHandler @ 01649a74 */
      uVar5 = thunk_FUN_00d48444(
                                DigitalOpus_MB_Core_MB3_TextureCombinerPackerMeshBakerHorizontalVertical_TypeInfo
                                );
      FUN_016ec5b8(uVar6,uVar5,0);
                    /* try { // try from 01649948 to 0174994b has its CatchHandler @ 01649978 */
                    /* try { // try from 01649950 to 01749953 has its CatchHandler @ 01649974 */
      uVar5 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<Material>_GetEnumerator__);
                    /* try { // try from 01649958 to 0174995b has its CatchHandler @ 01649970 */
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar6,uVar5);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


