/*
FUNCTION_NAME: OVRManager$$add_DisplayRefreshRateChanged
ENTRY_POINT: 056508c4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_possible_biometrics_hits_1
*/


void OVRManager__add_DisplayRefreshRateChanged(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(unaff_x26 + 0x38) + 8);
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02dcfd74(lVar5);
  }
  puVar1 = System_Collections_Generic_IEnumerable<ClaimsIdentity>_TypeInfo;
                    /* try { // try from 056508e0 to 057508ff has its CatchHandler @ 05650c40 */
  if (((0 < (int)unaff_x22[1]) && (*unaff_x22 != 0)) &&
     (lVar5 = FUN_036ec9f4(*unaff_x22,unaff_x22[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x28)),
     lVar5 != 0)) {
    FUN_036ec908(*unaff_x22,unaff_x22[1],*(undefined8 *)(*(long *)(unaff_x26 + 0x38) + 0x18));
  }
  lVar4 = *(long *)puVar1;
  lVar5 = *(long *)(lVar4 + 0x38);
  if (lVar5 == 0) {
                    /* try { // try from 05650938 to 0575093f has its CatchHandler @ 05650cd0 */
    FUN_02dcfd74(lVar4);
    lVar5 = *(long *)(lVar4 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 8);
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02dcfd74(lVar5);
  }
                    /* try { // try from 05650968 to 0575096f has its CatchHandler @ 05650c68 */
  if (((0 < (int)unaff_x24[1]) && (*unaff_x24 != 0)) &&
     (lVar5 = FUN_036eca00(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x28)),
     lVar5 != 0)) {
                    /* try { // try from 0565097c to 0575098f has its CatchHandler @ 05650cd4 */
    uVar3 = FUN_036ec914(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar4 + 0x38) + 0x18));
    FUN_055339f0(uVar3,0);
  }
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
  if (((0 < (int)unaff_x25[1]) && (*unaff_x25 != 0)) &&
     (lVar5 = FUN_036eca00(*unaff_x25,unaff_x25[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x28)),
     lVar5 != 0)) {
    uVar3 = FUN_036ec914(*unaff_x25,unaff_x25[1],*(undefined8 *)(*(long *)(lVar4 + 0x38) + 0x18));
    FUN_055339f0(uVar3,0);
  }
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
  puVar1 = System_Collections_Generic_Dictionary<Type,_IntegratedSubsystem>_TypeInfo;
  if (((0 < (int)unaff_x23[1]) && (*unaff_x23 != 0)) &&
     (lVar5 = FUN_036eca00(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x28)),
     lVar5 != 0)) {
    uVar3 = FUN_036ec914(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar4 + 0x38) + 0x18));
    FUN_055339f0(uVar3,0);
  }
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


