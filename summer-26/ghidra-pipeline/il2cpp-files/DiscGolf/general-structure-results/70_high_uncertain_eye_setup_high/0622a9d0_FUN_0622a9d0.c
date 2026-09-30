/*
FUNCTION_NAME: FUN_0622a9d0
ENTRY_POINT: 0622a9d0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0622a9d0(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_50;
  undefined8 local_48;
  
                    /* try { // try from 0622a9f0 to 0632a9f3 has its CatchHandler @ 0622aa1c */
                    /* try { // try from 0622a9f4 to 0632a9f7 has its CatchHandler @ 0622aa10 */
                    /* try { // try from 0622a9f8 to 0632a9fb has its CatchHandler @ 0622aa28 */
  if ((DAT_06dc71d3 & 1) == 0) {
                    /* try { // try from 0622a9fc to 0632a9ff has its CatchHandler @ 0622aa24 */
                    /* catch() { ... } // from try @ 0622a9cc with catch @ 0622aa00
                       try { // try from 0622aa00 to 0632aa3f has its CatchHandler @ 0622a7f8 */
    FUN_02d965b8(Method_OVRObjectPool_Return<List<OVRPlugin_Qpl_Annotation_Builder_Entry>>__);
    FUN_02d965b8(Method_OVRObjectPool_Return<Guid>__);
    FUN_02d965b8(Method_OVRObjectPool_Return<LogEntry>__);
    FUN_02d965b8(Method_OVROverlay_HandleBeginCameraRendering__);
    FUN_02d965b8(Method_OVROverlay_HandlePreRender__);
    DAT_06dc71d3 = 1;
  }
  local_48 = 0;
  local_50 = param_2;
  LeanTween__value(&local_50,param_2);
  uVar2 = local_50;
  puVar1 = Method_OVRObjectPool_Return<List<OVRPlugin_Qpl_Annotation_Builder_Entry>>__;
  lVar4 = *(long *)(param_1 + 0x68);
  local_48 = CONCAT44(local_48._4_4_,param_3);
  uVar3 = local_48;
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + 0x10);
    if ((lVar5 == 0) || (param_3 < *(int *)(lVar5 + 0x30))) {
      FUN_03e9c26c(lVar4,local_50,local_48,
                   *(undefined8 *)Method_OVROverlay_HandleBeginCameraRendering__);
      return;
    }
    do {
      lVar4 = FUN_03e93ce0(lVar5,*(undefined8 *)puVar1);
      if (lVar4 == 0) {
LAB_0622aadc:
        if (*(long *)(param_1 + 0x68) != 0) {
          FUN_03e9c1c4(*(long *)(param_1 + 0x68),lVar5,uVar2,uVar3,
                       *(undefined8 *)Method_OVRObjectPool_Return<LogEntry>__);
          return;
        }
        break;
      }
      lVar4 = FUN_03e93ce0(lVar5,*(undefined8 *)puVar1);
      if (lVar4 == 0) break;
      if (param_3 < *(int *)(lVar4 + 0x30)) goto LAB_0622aadc;
      lVar5 = FUN_03e93ce0(lVar5,*(undefined8 *)puVar1);
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


