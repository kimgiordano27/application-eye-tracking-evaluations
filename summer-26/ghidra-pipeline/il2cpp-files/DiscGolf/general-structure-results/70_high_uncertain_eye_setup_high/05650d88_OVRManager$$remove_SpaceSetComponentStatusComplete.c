/*
FUNCTION_NAME: OVRManager$$remove_SpaceSetComponentStatusComplete
ENTRY_POINT: 05650d88
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceSetComponentStatusComplete(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int in_w8;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  long *unaff_x23;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long lVar6;
  long unaff_x28;
  long unaff_x29;
  long *plVar7;
  
  plVar7 = *(long **)(unaff_x29 + 0x7e8);
  if (((0 < in_w8) && (*unaff_x26 != 0)) &&
     (lVar3 = FUN_036eca00(*unaff_x26,unaff_x26[1],
                           *(undefined8 *)(*(long *)(unaff_x28 + 0x38) + 0x28)), lVar3 != 0)) {
    uVar4 = FUN_036ec914(*unaff_x26,unaff_x26[1],*(undefined8 *)(*(long *)(unaff_x27 + 0x38) + 0x18)
                        );
    FUN_055339f0(uVar4,0);
  }
                    /* try { // try from 05650dd4 to 05750de3 has its CatchHandler @ 05650de4 */
  lVar6 = *plVar7;
  lVar3 = *(long *)(lVar6 + 0x38);
  if (lVar3 == 0) {
                    /* catch() { ... } // from try @ 05650d44 with catch @ 05650de4
                       catch() { ... } // from try @ 05650dd4 with catch @ 05650de4 */
    FUN_02dcfd74(lVar6);
                    /* try { // try from 05650de8 to 05750deb has its CatchHandler @ 05650df4 */
    lVar3 = *(long *)(lVar6 + 0x38);
  }
                    /* try { // try from 05650dec to 05750df7 has its CatchHandler @ 0565053c */
  lVar3 = *(long *)(lVar3 + 8);
                    /* catch() { ... } // from try @ 05650cac with catch @ 05650df4
                       catch() { ... } // from try @ 05650d1c with catch @ 05650df4
                       catch() { ... } // from try @ 05650de8 with catch @ 05650df4 */
  if (*(long *)(lVar3 + 0x38) == 0) {
    FUN_02dcfd74(lVar3);
  }
  puVar1 = Unity_XR_CoreUtils_Collections_HashSetList<object>_TypeInfo;
  if (((0 < (int)unaff_x25[1]) && (*unaff_x25 != 0)) &&
     (lVar3 = FUN_036eca18(*unaff_x25,unaff_x25[1],*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x28)),
     lVar3 != 0)) {
    uVar4 = FUN_036ec930(*unaff_x25,unaff_x25[1],*(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x18));
    FUN_055339f0(uVar4,0);
  }
  lVar6 = *(long *)puVar1;
  lVar3 = *(long *)(lVar6 + 0x38);
  if (lVar3 == 0) {
    FUN_02dcfd74(lVar6);
    lVar3 = *(long *)(lVar6 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 8);
  if (*(long *)(lVar3 + 0x38) == 0) {
    FUN_02dcfd74(lVar3);
  }
  puVar1 = PTR_DAT_06a0f1a0;
  if (((0 < (int)unaff_x23[1]) && (*unaff_x23 != 0)) &&
     (lVar3 = FUN_036eca1c(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x28)),
     lVar3 != 0)) {
    FUN_036ec938(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x18));
  }
  puVar2 = System_IObservable<InputEventPtr>_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar4 = FUN_05650f64(unaff_w22,unaff_w21,unaff_w20);
  uVar5 = FUN_055efebc(uVar4,*(undefined8 *)puVar2,0,0);
  if ((uVar5 & 1) == 0) {
    *(undefined8 *)((long)unaff_x19 + 0x54) = 0;
    *(undefined8 *)((long)unaff_x19 + 0x4c) = 0;
    unaff_x19[3] = 0;
    unaff_x19[2] = 0;
    unaff_x19[5] = 0;
    unaff_x19[4] = 0;
    unaff_x19[7] = 0;
    unaff_x19[6] = 0;
    unaff_x19[9] = 0;
    unaff_x19[8] = 0;
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
  }
  else {
    memcpy(unaff_x19,&stack0x00000010,0x5c);
  }
  return;
}


