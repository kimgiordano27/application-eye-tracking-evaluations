/*
FUNCTION_NAME: OVRManager$$remove_TrackingAcquired
ENTRY_POINT: 05650630
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_TrackingAcquired(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *unaff_x21;
  long *unaff_x23;
  long unaff_x25;
  long lVar4;
  long lVar5;
  
  FUN_02dcfd74();
  lVar5 = *(long *)(*(long *)(unaff_x25 + 0x38) + 8);
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02dcfd74(lVar5);
  }
  puVar1 = System_Collections_Generic_Dictionary<Type,_IntegratedSubsystem>_TypeInfo;
  if (((0 < (int)unaff_x23[1]) && (*unaff_x23 != 0)) &&
     (lVar5 = FUN_036eca00(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x28)),
     lVar5 != 0)) {
    uVar3 = FUN_036ec914(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(unaff_x25 + 0x38) + 0x18)
                        );
    FUN_055339f0(uVar3,0);
  }
  lVar4 = *(long *)puVar1;
  lVar5 = *(long *)(lVar4 + 0x38);
                    /* try { // try from 056506a8 to 057506af has its CatchHandler @ 05650cc8 */
  if (lVar5 == 0) {
    FUN_02dcfd74(lVar4);
    lVar5 = *(long *)(lVar4 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 8);
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02dcfd74(lVar5);
  }
  puVar1 = PTR_DAT_06a0f1a0;
                    /* try { // try from 056506d0 to 057506d3 has its CatchHandler @ 05650c3c */
                    /* try { // try from 056506f8 to 057506fb has its CatchHandler @ 05650c2c */
  if (((0 < (int)unaff_x21[1]) && (*unaff_x21 != 0)) &&
     (lVar5 = FUN_036ec9e8(*unaff_x21,unaff_x21[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x28)),
     lVar5 != 0)) {
                    /* try { // try from 056506fc to 05750707 has its CatchHandler @ 05650c64 */
    FUN_036ec8f8(*unaff_x21,unaff_x21[1],*(undefined8 *)(*(long *)(lVar4 + 0x38) + 0x18));
  }
  puVar2 = UnityEngine_UIElements_INotifyValueChanged<string>_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_05650770();
  FUN_055efebc(uVar3,*(undefined8 *)puVar2,0,0);
  return;
}


