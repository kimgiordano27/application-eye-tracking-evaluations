/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetVersion
ENTRY_POINT: 0569a164
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetVersion(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined1 *__s;
  long unaff_x24;
  long *unaff_x26;
  long unaff_x29;
  
  puVar4 = UnityEngine_InputSystem_Utilities_ReadOnlyArray<NamedValue>_TypeInfo;
  puVar3 = System_Collections_Generic_IReadOnlyList<IDisposable>_TypeInfo;
                    /* catch() { ... } // from try @ 05699e38 with catch @ 0569a164 */
  puVar2 = PTR_DAT_069fb9c0;
                    /* catch() { ... } // from try @ 05699e68 with catch @ 0569a168 */
                    /* catch() { ... } // from try @ 05699eb0 with catch @ 0569a16c */
  uVar8 = **(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
                    /* try { // try from 0569a18c to 0579a18f has its CatchHandler @ 0569a1bc */
  *(undefined4 *)(unaff_x29 + -0xc) = 0;
  *unaff_x19 = uVar8;
  LeanTween__value();
  lVar6 = *unaff_x26;
                    /* try { // try from 0569a19c to 0579a19f has its CatchHandler @ 0569a1fc */
  *(undefined4 *)(unaff_x29 + -0xc) = 0;
                    /* try { // try from 0569a1a0 to 0579a1a3 has its CatchHandler @ 0569a1f0 */
                    /* try { // try from 0569a1a4 to 0579a1a7 has its CatchHandler @ 0569a1ec */
  if (*(int *)(lVar6 + 0xe4) == 0) {
                    /* try { // try from 0569a1a8 to 0579a1ab has its CatchHandler @ 0569a1dc */
    thunk_FUN_02df485c();
  }
                    /* try { // try from 0569a1ac to 0579a1b3 has its CatchHandler @ 0569a1d8 */
                    /* try { // try from 0569a1b4 to 0579a1b7 has its CatchHandler @ 0569a1d4 */
                    /* try { // try from 0569a1b8 to 0579a1c3 has its CatchHandler @ 056998c0 */
                    /* catch() { ... } // from try @ 0569a18c with catch @ 0569a1bc */
  iVar5 = FUN_05644a5c(unaff_w21,unaff_w20,0,unaff_x29 + -0xc,0);
                    /* try { // try from 0569a1c4 to 0579a1cb has its CatchHandler @ 0569a2dc */
  uVar8 = *(undefined8 *)(puVar2 + 0x50);
                    /* try { // try from 0569a1cc to 0579a223 has its CatchHandler @ 056998c0 */
                    /* catch() { ... } // from try @ 0569a0e4 with catch @ 0569a1d0 */
  *(undefined4 *)(unaff_x29 + -0x10) = unaff_w20;
                    /* catch() { ... } // from try @ 0569a1b4 with catch @ 0569a1d4 */
  uVar8 = thunk_FUN_02dd2d7c(uVar8,unaff_x29 + -0x10);
                    /* catch() { ... } // from try @ 0569a1ac with catch @ 0569a1d8 */
                    /* catch() { ... } // from try @ 0569a1a8 with catch @ 0569a1dc */
  uVar7 = *(undefined8 *)puVar3;
                    /* catch() { ... } // from try @ 0569a098 with catch @ 0569a1e0 */
                    /* catch() { ... } // from try @ 05699db4 with catch @ 0569a1e4
                       catch() { ... } // from try @ 05699dec with catch @ 0569a1e4 */
  *(int *)(unaff_x29 + -0x14) = iVar5;
  uVar7 = thunk_FUN_02dd2d7c(uVar7,unaff_x29 + -0x14);
  FUN_0536e0dc(*(undefined8 *)puVar4,uVar8,uVar7,0);
  if (iVar5 == 0) {
    uVar1 = *(uint *)(unaff_x29 + -0xc);
    if (uVar1 == 0) {
      __s = (undefined1 *)0x0;
    }
    else {
      __s = &stack0x00000000 + -((ulong)uVar1 + 0xf & 0x1fffffff0);
    }
    memset(__s,0,(ulong)uVar1);
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    iVar5 = FUN_05644a5c(unaff_w21,unaff_w20,__s,unaff_x29 + -0xc,0);
    uVar8 = *(undefined8 *)(puVar2 + 0x50);
    *(undefined4 *)(unaff_x29 + -0x10) = unaff_w20;
    uVar8 = thunk_FUN_02dd2d7c(uVar8,unaff_x29 + -0x10);
    uVar7 = *(undefined8 *)puVar3;
    *(int *)(unaff_x29 + -0x14) = iVar5;
    uVar7 = thunk_FUN_02dd2d7c(uVar7,unaff_x29 + -0x14);
    FUN_0536e0dc(*(undefined8 *)puVar4,uVar8,uVar7,0);
    if (iVar5 == 0) {
      uVar8 = FUN_055339f0(__s,0);
      if (*(int *)(*(long *)PTR_DAT_06a0d5f0 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_06a0d5f0);
      }
      uVar8 = thunk_FUN_02da261c(uVar8,0);
      *unaff_x19 = uVar8;
      LeanTween__value();
      uVar8 = 1;
      goto LAB_0569a2a8;
    }
  }
  uVar8 = 0;
LAB_0569a2a8:
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


