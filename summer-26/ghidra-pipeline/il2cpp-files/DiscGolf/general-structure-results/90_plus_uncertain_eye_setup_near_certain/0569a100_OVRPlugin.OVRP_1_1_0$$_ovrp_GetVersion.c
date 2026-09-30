/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$_ovrp_GetVersion
ENTRY_POINT: 0569a100
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0___ovrp_GetVersion
               (undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined1 *__s;
  long unaff_x24;
  long unaff_x26;
  long *plVar9;
  long unaff_x29;
  
                    /* try { // try from 0569a100 to 0579a103 has its CatchHandler @ 0569a158 */
                    /* try { // try from 0569a108 to 0579a10b has its CatchHandler @ 0569a154 */
                    /* try { // try from 0569a110 to 0579a113 has its CatchHandler @ 0569a140 */
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x24 + 0x28);
                    /* try { // try from 0569a118 to 0579a11b has its CatchHandler @ 0569a138 */
  plVar9 = *(long **)(unaff_x26 + 0x1a0);
  if ((*(byte *)(unaff_x22 + 0x86a) & 1) == 0) {
                    /* try { // try from 0569a120 to 0579a123 has its CatchHandler @ 0569a128 */
                    /* try { // try from 0569a124 to 0579a18b has its CatchHandler @ 056998c0 */
                    /* catch() { ... } // from try @ 0569a120 with catch @ 0569a128 */
    FUN_02d965b8(PTR_DAT_06a0f1a0);
                    /* catch() { ... } // from try @ 05699fcc with catch @ 0569a12c
                       catch() { ... } // from try @ 0569a034 with catch @ 0569a12c */
                    /* catch() { ... } // from try @ 05699f14 with catch @ 0569a130 */
                    /* catch() { ... } // from try @ 05699f4c with catch @ 0569a134 */
    FUN_02d965b8(PTR_DAT_06a0d5f0);
                    /* catch() { ... } // from try @ 0569a118 with catch @ 0569a138 */
                    /* catch() { ... } // from try @ 05699f3c with catch @ 0569a13c */
                    /* catch() { ... } // from try @ 0569a110 with catch @ 0569a140 */
    FUN_02d965b8(UnityEngine_InputSystem_Utilities_ReadOnlyArray<NamedValue>_TypeInfo);
                    /* catch() { ... } // from try @ 0569a000 with catch @ 0569a144 */
                    /* catch() { ... } // from try @ 05699f80 with catch @ 0569a148 */
                    /* catch() { ... } // from try @ 05699f18 with catch @ 0569a14c */
    FUN_02d965b8(UnityEngine_InputSystem_Utilities_ReadOnlyArray<HIDSupport_HIDPageUsage>_TypeInfo);
                    /* catch() { ... } // from try @ 05699f64 with catch @ 0569a150 */
                    /* catch() { ... } // from try @ 0569a108 with catch @ 0569a154 */
                    /* catch() { ... } // from try @ 0569a100 with catch @ 0569a158 */
    FUN_02d965b8(System_Collections_Generic_IReadOnlyList<IDisposable>_TypeInfo);
                    /* catch() { ... } // from try @ 0569a0f8 with catch @ 0569a15c */
                    /* catch() { ... } // from try @ 0569a044 with catch @ 0569a160 */
    *(undefined1 *)(unaff_x22 + 0x86a) = 1;
  }
  puVar4 = UnityEngine_InputSystem_Utilities_ReadOnlyArray<NamedValue>_TypeInfo;
  puVar3 = System_Collections_Generic_IReadOnlyList<IDisposable>_TypeInfo;
  puVar2 = PTR_DAT_069fb9c0;
  uVar8 = **(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
  *(undefined4 *)(unaff_x29 + -0xc) = 0;
  *param_3 = uVar8;
  LeanTween__value(param_3);
  lVar6 = *plVar9;
  *(undefined4 *)(unaff_x29 + -0xc) = 0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  iVar5 = FUN_05644a5c(param_1,param_2,0,unaff_x29 + -0xc,0);
  uVar8 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined4 *)(unaff_x29 + -0x10) = param_2;
  uVar8 = thunk_FUN_02dd2d7c(uVar8,unaff_x29 + -0x10);
  uVar7 = *(undefined8 *)puVar3;
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
    if (*(int *)(*plVar9 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    iVar5 = FUN_05644a5c(param_1,param_2,__s,unaff_x29 + -0xc,0);
    uVar8 = *(undefined8 *)(puVar2 + 0x50);
    *(undefined4 *)(unaff_x29 + -0x10) = param_2;
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
      *param_3 = uVar8;
      LeanTween__value(param_3,uVar8);
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


