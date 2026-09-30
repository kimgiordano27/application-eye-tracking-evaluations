/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerEnd
ENTRY_POINT: 07a62078
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerEnd(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long in_x10;
  undefined4 in_w11;
  long unaff_x19;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  *(undefined4 *)(unaff_x19 + 0x18) = in_w11;
  *(undefined4 *)(param_1 + in_x10 * 4 + 0x20) = 0xc;
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
                    /* try { // try from 07a620e0 to 07b620e3 has its CatchHandler @ 07a62114 */
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
                    /* try { // try from 07a620e4 to 07b620e7 has its CatchHandler @ 07a62110 */
                    /* try { // try from 07a620e8 to 07b620eb has its CatchHandler @ 07a61e90 */
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                    /* try { // try from 07a620ec to 07b620ef has its CatchHandler @ 07a62108 */
                    /* try { // try from 07a620f0 to 07b620f3 has its CatchHandler @ 07a6210c */
                    /* try { // try from 07a620f4 to 07b620f7 has its CatchHandler @ 07a620fc */
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                    /* try { // try from 07a620f8 to 07b620fb has its CatchHandler @ 07a6210c */
  }
  else {
                    /* catch() { ... } // from try @ 07a620f4 with catch @ 07a620fc
                       try { // try from 07a620fc to 07b6212f has its CatchHandler @ 07a61e90 */
                    /* catch() { ... } // from try @ 07a62048 with catch @ 07a62100 */
                    /* catch() { ... } // from try @ 07a62008 with catch @ 07a62104 */
                    /* catch() { ... } // from try @ 07a620ec with catch @ 07a62108 */
                    /* catch() { ... } // from try @ 07a620f0 with catch @ 07a6210c
                       catch() { ... } // from try @ 07a620f8 with catch @ 07a6210c */
                    /* catch() { ... } // from try @ 07a620e4 with catch @ 07a62110 */
    FUN_05bccd7c();
                    /* catch() { ... } // from try @ 07a620e0 with catch @ 07a62114 */
                    /* catch() { ... } // from try @ 07a61ffc with catch @ 07a62118 */
    param_1 = *(long *)(unaff_x19 + 0x10);
                    /* catch() { ... } // from try @ 07a61fe0 with catch @ 07a6211c */
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_07a6261c;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
                    /* try { // try from 07a62130 to 07b62133 has its CatchHandler @ 07a6214c */
                    /* try { // try from 07a62134 to 07b6214f has its CatchHandler @ 07a61e90 */
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
                    /* catch() { ... } // from try @ 07a62130 with catch @ 07a6214c */
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                    /* try { // try from 07a62150 to 07b62157 has its CatchHandler @ 07a62160 */
                    /* try { // try from 07a62158 to 07b62163 has its CatchHandler @ 07a61e90 */
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  else {
                    /* catch() { ... } // from try @ 07a62150 with catch @ 07a62160 */
    FUN_05bccd7c();
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_07a6261c;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  else {
    FUN_05bccd7c();
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_07a6261c;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  else {
    FUN_05bccd7c();
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_07a6261c;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  else {
    FUN_05bccd7c();
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_07a6261c;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 0x13;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  else {
    FUN_05bccd7c();
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_07a6261c;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 0x15;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  else {
    FUN_05bccd7c();
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_07a6261c;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 0x16;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  else {
    FUN_05bccd7c();
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_07a6261c;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 0x17;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  else {
    FUN_05bccd7c();
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_07a6261c;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 0x18;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  else {
    FUN_05bccd7c();
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_07a6261c;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 2;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  else {
    FUN_05bccd7c();
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_07a6261c;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 3;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  else {
    FUN_05bccd7c();
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) {
LAB_07a6261c:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  puVar2 = PTR_DAT_092f0ca8;
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 4;
  }
  else {
    FUN_05bccd7c();
  }
  *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) = unaff_x19;
  thunk_FUN_040ec700();
  uVar3 = FUN_04077674(*unaff_x22,5);
  FUN_07593f88(uVar3,*(undefined8 *)puVar2,0);
  puVar4 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
  *puVar4 = uVar3;
  thunk_FUN_040ec700(puVar4,uVar3);
  return;
}


