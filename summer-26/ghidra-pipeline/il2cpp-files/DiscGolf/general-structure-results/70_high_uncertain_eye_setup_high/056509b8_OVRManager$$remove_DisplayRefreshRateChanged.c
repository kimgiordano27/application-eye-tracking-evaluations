/*
FUNCTION_NAME: OVRManager$$remove_DisplayRefreshRateChanged
ENTRY_POINT: 056509b8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_DisplayRefreshRateChanged(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x25;
  long unaff_x26;
  long lVar4;
  long lVar5;
  long *unaff_x28;
  
  lVar5 = *(long *)(param_1 + 8);
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02dcfd74(lVar5);
  }
                    /* try { // try from 056509f0 to 05750a17 has its CatchHandler @ 05650d28 */
  if (((0 < (int)unaff_x25[1]) && (*unaff_x25 != 0)) &&
     (lVar5 = FUN_036eca00(*unaff_x25,unaff_x25[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x28)),
     lVar5 != 0)) {
    uVar3 = FUN_036ec914(*unaff_x25,unaff_x25[1],*(undefined8 *)(*(long *)(unaff_x26 + 0x38) + 0x18)
                        );
    FUN_055339f0(uVar3,0);
  }
  lVar4 = *unaff_x28;
  lVar5 = *(long *)(lVar4 + 0x38);
  if (lVar5 == 0) {
    FUN_02dcfd74(lVar4);
    lVar5 = *(long *)(lVar4 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 8);
                    /* try { // try from 05650a38 to 05750a3f has its CatchHandler @ 05650cd8 */
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02dcfd74(lVar5);
  }
  puVar1 = System_Collections_Generic_Dictionary<Type,_IntegratedSubsystem>_TypeInfo;
                    /* try { // try from 05650a64 to 05750a6b has its CatchHandler @ 05650c74 */
  if (((0 < (int)unaff_x23[1]) && (*unaff_x23 != 0)) &&
     (lVar5 = FUN_036eca00(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x28)),
     lVar5 != 0)) {
                    /* try { // try from 05650a74 to 05750a7b has its CatchHandler @ 05650c70 */
    uVar3 = FUN_036ec914(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar4 + 0x38) + 0x18));
    FUN_055339f0(uVar3,0);
  }
                    /* try { // try from 05650a98 to 05750aa3 has its CatchHandler @ 05650c6c */
  lVar4 = *(long *)puVar1;
  lVar5 = *(long *)(lVar4 + 0x38);
  if (lVar5 == 0) {
    FUN_02dcfd74(lVar4);
    lVar5 = *(long *)(lVar4 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 8);
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02dcfd74(lVar5);
  }
  puVar1 = PTR_DAT_06a0f1a0;
  if (((0 < (int)unaff_x21[1]) && (*unaff_x21 != 0)) &&
     (lVar5 = FUN_036ec9e8(*unaff_x21,unaff_x21[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x28)),
     lVar5 != 0)) {
    FUN_036ec8f8(*unaff_x21,unaff_x21[1],*(undefined8 *)(*(long *)(lVar4 + 0x38) + 0x18));
  }
  puVar2 = UnityEngine_UIElements_INotifyValueChanged<string>_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_05650b70();
  FUN_055efebc(uVar3,*(undefined8 *)puVar2,0,0);
  return;
}


