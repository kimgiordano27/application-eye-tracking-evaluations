/*
FUNCTION_NAME: Unity.VisualScripting.LudiqScriptableObject$$UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize
ENTRY_POINT: 082d29f4
PROGRAM: m3ar-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined4
Unity_VisualScripting_LudiqScriptableObject__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
          (undefined1 param_1 [16],ulong param_2)

{
  undefined4 uVar1;
  byte bVar2;
  float fVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  int in_w8;
  uint uVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined4 *puVar22;
  long lVar23;
  long unaff_x19;
  long *plVar24;
  undefined8 uVar25;
  long *plVar26;
  uint *unaff_x23;
  uint unaff_w24;
  uint unaff_w25;
  long unaff_x26;
  uint unaff_w27;
  long lVar27;
  uint unaff_w29;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  uint in_stack_00000020;
  uint uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  int iStack0000000000000038;
  undefined4 uStack000000000000003c;
  long in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined4 in_stack_000000e0;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  long in_stack_00000138;
  uint uStack0000000000000148;
  undefined1 uStack000000000000014c;
  
code_r0x082d29f4:
                    /* catch() { ... } // from try @ 082d209c with catch @ 082d29f4 */
  if (in_w8 == 0) {
                    /* catch() { ... } // from try @ 082d2294 with catch @ 082d29f8 */
    thunk_FUN_0408f364();
  }
                    /* catch() { ... } // from try @ 082d23f0 with catch @ 082d29fc */
                    /* catch() { ... } // from try @ 082d2320 with catch @ 082d2a00
                       catch() { ... } // from try @ 082d2858 with catch @ 082d2a00 */
                    /* catch() { ... } // from try @ 082d1f14 with catch @ 082d2a04 */
  uVar11 = FUN_0832c224(unaff_w25,0);
                    /* catch() { ... } // from try @ 082d23a4 with catch @ 082d2a08
                       catch() { ... } // from try @ 082d284c with catch @ 082d2a08 */
  uVar10 = unaff_w27;
  if ((uVar11 & 1) == 0) goto LAB_082d2afc;
  if (unaff_w24 != 0xfe0f) goto LAB_082d2afc;
LAB_082d2a18:
                    /* try { // try from 082d2a28 to 083d2a2b has its CatchHandler @ 082d2a38 */
  if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  lVar12 = FUN_08322990(0);
                    /* catch() { ... } // from try @ 082d2a28 with catch @ 082d2a38 */
  if (lVar12 != 0) {
                    /* try { // try from 082d2a40 to 083d2a47 has its CatchHandler @ 082d2c50 */
                    /* try { // try from 082d2a48 to 083d2a6b has its CatchHandler @ 082d1ca4 */
                    /* catch() { ... } // from try @ 082d2240 with catch @ 082d2a4c */
    if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar12 = FUN_08322990(0);
    if (lVar12 == 0) goto LAB_082d43c0;
    if (0 < *(int *)(lVar12 + 0x18)) {
                    /* try { // try from 082d2a6c to 083d2a6f has its CatchHandler @ 082d2a7c */
                    /* catch() { ... } // from try @ 082d2a6c with catch @ 082d2a7c */
      uVar25 = *(undefined8 *)(unaff_x19 + 0x100);
                    /* try { // try from 082d2a84 to 083d2a8b has its CatchHandler @ 082d2c50 */
                    /* try { // try from 082d2a8c to 083d2b07 has its CatchHandler @ 082d1ca4 */
      if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 082d2214 with catch @ 082d2a90 */
        thunk_FUN_0408f364();
      }
                    /* catch() { ... } // from try @ 082d21e0 with catch @ 082d2a94 */
                    /* catch() { ... } // from try @ 082d21cc with catch @ 082d2a98 */
      uVar13 = FUN_08322990(0);
                    /* catch() { ... } // from try @ 082d2414 with catch @ 082d2a9c
                       catch() { ... } // from try @ 082d2850 with catch @ 082d2a9c */
                    /* catch() { ... } // from try @ 082d2200 with catch @ 082d2aa0
                       catch() { ... } // from try @ 082d2284 with catch @ 082d2aa0
                       catch() { ... } // from try @ 082d22bc with catch @ 082d2aa0
                       catch() { ... } // from try @ 082d2344 with catch @ 082d2aa0
                       catch() { ... } // from try @ 082d24b4 with catch @ 082d2aa0
                       catch() { ... } // from try @ 082d253c with catch @ 082d2aa0
                       catch() { ... } // from try @ 082d2574 with catch @ 082d2aa0
                       catch() { ... } // from try @ 082d265c with catch @ 082d2aa0 */
                    /* catch() { ... } // from try @ 082d219c with catch @ 082d2aa4 */
                    /* catch() { ... } // from try @ 082d20e0 with catch @ 082d2aa8 */
      uVar9 = *(undefined4 *)(unaff_x19 + 0x280);
                    /* catch() { ... } // from try @ 082d2830 with catch @ 082d2aac */
      uVar1 = *(undefined4 *)(unaff_x19 + 0x238);
                    /* catch() { ... } // from try @ 082d20b0 with catch @ 082d2ab0 */
                    /* catch() { ... } // from try @ 082d276c with catch @ 082d2ab4
                       catch() { ... } // from try @ 082d2848 with catch @ 082d2ab4 */
                    /* catch() { ... } // from try @ 082d2254 with catch @ 082d2ab8
                       catch() { ... } // from try @ 082d2840 with catch @ 082d2ab8 */
      if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 082d2188 with catch @ 082d2abc */
                    /* catch() { ... } // from try @ 082d2024 with catch @ 082d2ac0 */
        thunk_FUN_0408f364(*(long *)PTR_DAT_08ff6868);
      }
                    /* catch() { ... } // from try @ 082d1fbc with catch @ 082d2ac4 */
                    /* catch() { ... } // from try @ 082d1ef0 with catch @ 082d2ac8 */
                    /* catch() { ... } // from try @ 082d1ee4 with catch @ 082d2acc */
                    /* catch() { ... } // from try @ 082d1edc with catch @ 082d2ad0 */
                    /* catch() { ... } // from try @ 082d1ed0 with catch @ 082d2ad4 */
                    /* catch() { ... } // from try @ 082d216c with catch @ 082d2ad8
                       catch() { ... } // from try @ 082d2838 with catch @ 082d2ad8 */
                    /* catch() { ... } // from try @ 082d21b0 with catch @ 082d2ae4
                       catch() { ... } // from try @ 082d2834 with catch @ 082d2ae4 */
      lVar12 = FUN_082eb668(unaff_w25,uVar25,uVar13,1,uVar9,uVar1,(long)&stack0x00000148 + 4,0);
                    /* catch() { ... } // from try @ 082d2058 with catch @ 082d2ae8 */
      unaff_x26 = in_stack_00000040;
      uStack0000000000000024 = unaff_w25;
      if (lVar12 != 0) goto LAB_082d2b28;
    }
  }
LAB_082d2afc:
                    /* try { // try from 082d2b08 to 083d2b0b has its CatchHandler @ 082d2b18 */
                    /* catch() { ... } // from try @ 082d2b08 with catch @ 082d2b18 */
  lVar12 = FUN_0830d168();
  uStack0000000000000024 = unaff_w25;
  if (lVar12 == 0) {
                    /* catch() { ... } // from try @ 082d2bcc with catch @ 082d2bd8 */
    if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_082d4458;
                    /* try { // try from 082d2be0 to 083d2be7 has its CatchHandler @ 082d2c50 */
                    /* try { // try from 082d2be8 to 083d2bff has its CatchHandler @ 082d1ca4 */
    FUN_0830d810();
                    /* try { // try from 082d2c00 to 083d2c03 has its CatchHandler @ 082d2c0c */
                    /* catch() { ... } // from try @ 082d2c00 with catch @ 082d2c0c */
    if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
                    /* try { // try from 082d2c14 to 083d2c1b has its CatchHandler @ 082d2c50 */
      thunk_FUN_0408f364();
    }
                    /* try { // try from 082d2c1c to 083d2c33 has its CatchHandler @ 082d1ca4 */
    iVar6 = FUN_08322014(0);
    bVar5 = *(uint *)(unaff_x26 + 0x18) <= uVar10;
    if (iVar6 == 0) {
      if (bVar5) goto LAB_082d4458;
      uStack0000000000000024 = 0x25a1;
    }
    else {
      if (bVar5) goto LAB_082d4458;
      if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uStack0000000000000024 = FUN_08322014(0);
    }
    *unaff_x23 = uStack0000000000000024;
    uVar25 = *(undefined8 *)(unaff_x19 + 0x100);
    if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar12 = FUN_082eacf4(uStack0000000000000024,uVar25,1,0,400,(long)&stack0x00000148 + 4,0);
    if (lVar12 == 0) {
      if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      lVar12 = FUN_08322588(0);
      if (lVar12 != 0) {
        if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        lVar12 = FUN_08322588(0);
        if (lVar12 == 0) goto LAB_082d43c0;
        if (0 < *(int *)(lVar12 + 0x18)) {
          uVar25 = *(undefined8 *)(unaff_x19 + 0x100);
          if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          uVar13 = FUN_08322588(0);
          if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
            thunk_FUN_0408f364(*(long *)PTR_DAT_08ff6868);
          }
          lVar12 = FUN_082eb454(uStack0000000000000024,uVar25,uVar13,1,0,400,
                                (long)&stack0x00000148 + 4,0);
          unaff_x26 = in_stack_00000040;
          if (lVar12 != 0) goto LAB_082d2f0c;
        }
      }
      if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar25 = FUN_08322188(0);
      if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
        thunk_FUN_0408f364(*(long *)PTR_DAT_08f65598);
      }
      uVar11 = FUN_0858816c(uVar25,0,0);
      if ((uVar11 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar25 = FUN_08322188(0);
        if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
          thunk_FUN_0408f364(*(long *)PTR_DAT_08ff6868);
        }
        lVar12 = FUN_082eacf4(uStack0000000000000024,uVar25,1,0,400,(long)&stack0x00000148 + 4,0);
        if (lVar12 != 0) goto LAB_082d2f0c;
      }
      if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_082d4458;
      *unaff_x23 = 0x20;
      uVar25 = *(undefined8 *)(unaff_x19 + 0x100);
      if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uStack0000000000000024 = 0x20;
      lVar12 = FUN_082eacf4(0x20,uVar25,1,0,400,(long)&stack0x00000148 + 4,0);
      if (lVar12 == 0) {
        if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_082d4458;
        *unaff_x23 = 3;
        uVar25 = *(undefined8 *)(unaff_x19 + 0x100);
        if (*(int *)(*(long *)PTR_DAT_08ff6868 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uStack0000000000000024 = 3;
        lVar12 = FUN_082eacf4(3,uVar25,1,0,400,(long)&stack0x00000148 + 4,0);
      }
    }
LAB_082d2f0c:
    if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar11 = FUN_0832212c(0);
    if ((uVar11 & 1) == 0) {
      plVar19 = (long *)FUN_040316d0(*(undefined8 *)PTR_DAT_08f65d88,4);
      if (unaff_w25 >> 0x10 == 0) {
        in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,unaff_w25);
        lVar18 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x50),&stack0x00000050);
        if (plVar19 == (long *)0x0) goto LAB_082d43c0;
        if ((lVar18 != 0) &&
           (lVar27 = thunk_FUN_0406ddbc(lVar18,*(undefined8 *)(*plVar19 + 0x40)), lVar27 == 0))
        goto LAB_082d445c;
        if ((int)plVar19[3] == 0) goto LAB_082d4458;
        plVar19[4] = lVar18;
        if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_082d43c0;
        lVar18 = thunk_FUN_0858dfc0(*(long *)(unaff_x19 + 0xf8),0);
        if ((lVar18 != 0) &&
           (lVar27 = thunk_FUN_0406ddbc(lVar18,*(undefined8 *)(*plVar19 + 0x40)), lVar27 == 0))
        goto LAB_082d445c;
        if ((*(uint *)(plVar19 + 3) & 0xfffffffe) == 0) goto LAB_082d4458;
        plVar19[5] = lVar18;
        if (lVar12 == 0) goto LAB_082d43c0;
        in_stack_000000e0 = *(undefined4 *)(lVar12 + 0x14);
        lVar18 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x50),&stack0x000000e0);
        if ((lVar18 != 0) &&
           (lVar27 = thunk_FUN_0406ddbc(lVar18,*(undefined8 *)(*plVar19 + 0x40)), lVar27 == 0))
        goto LAB_082d445c;
        if (*(uint *)(plVar19 + 3) < 3) goto LAB_082d4458;
        plVar19[6] = lVar18;
        lVar18 = thunk_FUN_0858dfc0();
        if ((lVar18 != 0) &&
           (lVar27 = thunk_FUN_0406ddbc(lVar18,*(undefined8 *)(*plVar19 + 0x40)), lVar27 == 0))
        goto LAB_082d445c;
        if ((*(uint *)(plVar19 + 3) & 0xfffffffc) == 0) goto LAB_082d4458;
        plVar19[7] = lVar18;
        puVar20 = (undefined8 *)PTR_DAT_08ff6898;
      }
      else {
        in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,unaff_w25);
        lVar18 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x50),&stack0x00000050);
        if (plVar19 == (long *)0x0) goto LAB_082d43c0;
        if ((lVar18 != 0) &&
           (lVar27 = thunk_FUN_0406ddbc(lVar18,*(undefined8 *)(*plVar19 + 0x40)), lVar27 == 0))
        goto LAB_082d445c;
        if ((int)plVar19[3] == 0) goto LAB_082d4458;
        plVar19[4] = lVar18;
        if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_082d43c0;
        lVar18 = thunk_FUN_0858dfc0(*(long *)(unaff_x19 + 0xf8),0);
        if ((lVar18 != 0) &&
           (lVar27 = thunk_FUN_0406ddbc(lVar18,*(undefined8 *)(*plVar19 + 0x40)), lVar27 == 0))
        goto LAB_082d445c;
        if ((*(uint *)(plVar19 + 3) & 0xfffffffe) == 0) goto LAB_082d4458;
        plVar19[5] = lVar18;
        if (lVar12 == 0) goto LAB_082d43c0;
        in_stack_000000e0 = *(undefined4 *)(lVar12 + 0x14);
        lVar18 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x50),&stack0x000000e0);
        if ((lVar18 != 0) &&
           (lVar27 = thunk_FUN_0406ddbc(lVar18,*(undefined8 *)(*plVar19 + 0x40)), lVar27 == 0))
        goto LAB_082d445c;
        if (*(uint *)(plVar19 + 3) < 3) goto LAB_082d4458;
        plVar19[6] = lVar18;
        lVar18 = thunk_FUN_0858dfc0();
        if ((lVar18 != 0) &&
           (lVar27 = thunk_FUN_0406ddbc(lVar18,*(undefined8 *)(*plVar19 + 0x40)), lVar27 == 0))
        goto LAB_082d445c;
        if ((*(uint *)(plVar19 + 3) & 0xfffffffc) == 0) goto LAB_082d4458;
        plVar19[7] = lVar18;
        puVar20 = (undefined8 *)PTR_DAT_08ff6890;
      }
      uVar25 = FUN_0736a31c(*puVar20,plVar19,0);
      if (*(int *)(*(long *)PTR_DAT_08f655a0 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      FUN_085392e4(uVar25);
      unaff_x26 = in_stack_00000040;
    }
  }
LAB_082d2b28:
                    /* try { // try from 082d2b28 to 083d2b83 has its CatchHandler @ 082d1ca4 */
                    /* catch() { ... } // from try @ 082d1fd8 with catch @ 082d2b2c */
                    /* catch() { ... } // from try @ 082d1f84 with catch @ 082d2b30
                       catch() { ... } // from try @ 082d2820 with catch @ 082d2b30 */
                    /* catch() { ... } // from try @ 082d2070 with catch @ 082d2b34
                       catch() { ... } // from try @ 082d2828 with catch @ 082d2b34 */
                    /* catch() { ... } // from try @ 082d1ff0 with catch @ 082d2b38
                       catch() { ... } // from try @ 082d2824 with catch @ 082d2b38 */
  if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
     (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar18 == 0)) goto LAB_082d43c0;
                    /* catch() { ... } // from try @ 082d2728 with catch @ 082d2b3c */
                    /* catch() { ... } // from try @ 082d2814 with catch @ 082d2b40 */
                    /* catch() { ... } // from try @ 082d273c with catch @ 082d2b44 */
                    /* catch() { ... } // from try @ 082d2810 with catch @ 082d2b48 */
  if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_082d4458;
                    /* catch() { ... } // from try @ 082d280c with catch @ 082d2b4c */
                    /* catch() { ... } // from try @ 082d2718 with catch @ 082d2b50 */
  *(undefined8 *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) = 0;
                    /* catch() { ... } // from try @ 082d274c with catch @ 082d2b54 */
  if (lVar12 == 0) goto LAB_082d43c0;
                    /* catch() { ... } // from try @ 082d1f24 with catch @ 082d2b58
                       catch() { ... } // from try @ 082d281c with catch @ 082d2b58 */
  if (*(char *)(lVar12 + 0x10) == '\x01') {
                    /* catch() { ... } // from try @ 082d2760 with catch @ 082d2b64 */
    if (*(long *)(lVar12 + 0x18) == 0) goto LAB_082d43c0;
    iVar6 = FUN_082d75b4(*(long *)(lVar12 + 0x18),0);
    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_082d43c0;
                    /* try { // try from 082d2b84 to 083d2b87 has its CatchHandler @ 082d2b90 */
    iVar7 = FUN_082d75b4(*(long *)(unaff_x19 + 0x100),0);
    bVar5 = iVar6 != iVar7;
                    /* catch() { ... } // from try @ 082d2b84 with catch @ 082d2b90 */
                    /* try { // try from 082d2b98 to 083d2b9f has its CatchHandler @ 082d2c50 */
    if (bVar5) {
      plVar19 = *(long **)(lVar12 + 0x18);
                    /* try { // try from 082d2ba0 to 083d2bcb has its CatchHandler @ 082d1ca4 */
      if (plVar19 != (long *)0x0) {
                    /* catch() { ... } // from try @ 082d2804 with catch @ 082d2ba4 */
                    /* catch() { ... } // from try @ 082d2150 with catch @ 082d2ba8 */
                    /* catch() { ... } // from try @ 082d2118 with catch @ 082d2bac */
        bVar2 = *(byte *)(*(long *)PTR_DAT_08fc1610 + 0x130);
        if (*(byte *)(*plVar19 + 0x130) < bVar2) {
          plVar19 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                 *(long *)PTR_DAT_08fc1610) {
          plVar19 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x100) = plVar19;
    }
    if ((unaff_w24 >> 4 == 0xfe0) || (unaff_w24 - 0xe0100 < 0xf0)) {
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_082d43c0;
      iVar6 = FUN_082e450c(*(long *)(unaff_x19 + 0x100),uStack0000000000000024,unaff_w24,0);
      if (iVar6 != 0) {
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_082d43c0;
        uVar11 = FUN_082e6834(*(long *)(unaff_x19 + 0x100),iVar6,&stack0x00000130,0);
        if ((uVar11 & 1) != 0) {
          if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
             (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar18 == 0))
          goto LAB_082d43c0;
          if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_082d4458;
          *(undefined8 *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) =
               in_stack_00000130;
        }
      }
      if (*(uint *)(unaff_x26 + 0x18) <= unaff_w29) goto LAB_082d4458;
      *(undefined4 *)(in_stack_00000048 + (long)(int)unaff_w29 * 0x10 + 4) = 0x1a;
      uVar10 = unaff_w29;
    }
    if ((in_stack_00000020 & 1) != 0) {
      if (((*(long *)(unaff_x19 + 0x100) == 0) ||
          (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar18 == 0)) ||
         (lVar18 = *(long *)(lVar18 + 0x38), lVar18 == 0)) goto LAB_082d43c0;
      uVar11 = FUN_070b305c(lVar18,*(undefined4 *)(lVar12 + 0x28),&stack0x00000138,
                            *(undefined8 *)PTR_DAT_08ff6838);
      if ((uVar11 & 1) == 0) goto LAB_082d345c;
      if (in_stack_00000138 == 0) {
LAB_082d3af0:
        plVar19 = (long *)PTR_DAT_08fc16b0;
        if (*(char *)(unaff_x19 + 0x42d) != '\0') {
          *(undefined1 *)(unaff_x19 + 0x42d) = 0;
          goto LAB_082d3afc;
        }
        lVar12 = *(long *)(unaff_x19 + 0x3a0);
        if (lVar12 == 0) goto LAB_082d43c0;
        lVar18 = *(long *)PTR_DAT_08fc16b0;
        *(int *)(lVar12 + 0x1c) = iStack0000000000000038;
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar18 = *plVar19;
        }
        lVar18 = *(long *)(*(long *)(lVar18 + 0xb8) + 8);
        if (lVar18 == 0) goto LAB_082d43c0;
        uVar10 = FUN_06ee1f14(lVar18,*(undefined8 *)PTR_DAT_08f76d38);
        *(uint *)(lVar12 + 0x34) = uVar10;
        if (*(long *)(unaff_x19 + 0x3a0) == 0) goto LAB_082d43c0;
        plVar24 = (long *)(*(long *)(unaff_x19 + 0x3a0) + 0x60);
        lVar12 = *plVar24;
        if (lVar12 == 0) goto LAB_082d43c0;
        uVar11 = (ulong)uVar10;
        if (*(int *)(lVar12 + 0x18) < (int)uVar10) {
          if (*(int *)(*(long *)PTR_DAT_08ff65d8 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<quaternion>
                    (plVar24,uVar11,0,*(undefined8 *)PTR_DAT_08ff6880);
        }
        if (*(long *)(unaff_x19 + 0x720) == 0) goto LAB_082d43c0;
        plVar24 = (long *)(unaff_x19 + 0x720);
        if (*(int *)(*(long *)(unaff_x19 + 0x720) + 0x18) < (int)uVar10) {
          uVar17 = uVar10 | (int)uVar10 >> 0x10;
          uVar17 = uVar17 | (int)uVar17 >> 8;
          uVar17 = uVar17 | (int)uVar17 >> 4;
          uVar17 = uVar17 | (int)uVar17 >> 2;
          if (*(int *)(*(long *)PTR_DAT_08ff65d8 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          FUN_04d0f434(plVar24,(uVar17 | (int)uVar17 >> 1) + 1,*(undefined8 *)PTR_DAT_08ff69b8);
        }
        if (*(char *)(unaff_x19 + 0x359) != '\0') {
          if (*(long *)(unaff_x19 + 0x3a0) == 0) goto LAB_082d43c0;
          plVar26 = (long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38);
          lVar12 = *plVar26;
          if (lVar12 == 0) goto LAB_082d43c0;
          iVar6 = *(int *)(unaff_x19 + 0x4a0);
          if (0x100 < *(int *)(lVar12 + 0x18) - iVar6) {
            iVar7 = 0x100;
            if (0x100 < iVar6 + 1) {
              iVar7 = iVar6 + 1;
            }
            if (*(int *)(*(long *)PTR_DAT_08ff65d8 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            FUN_04d0f664(plVar26,iVar7,1,*(undefined8 *)PTR_DAT_08ff6878);
          }
        }
        puVar4 = PTR_DAT_08ff65a8;
        fVar3 = DAT_01a2e7f0;
        if ((int)uVar10 < 1) goto LAB_082d4308;
        lVar12 = 0;
        uVar14 = 0;
        lVar18 = 0x54;
        goto LAB_082d3cbc;
      }
      iVar6 = 0;
      while (unaff_x26 = in_stack_00000040, iVar6 < *(int *)(in_stack_00000138 + 0x18)) {
        auVar32 = FUN_057805a8(in_stack_00000138,iVar6,*(undefined8 *)PTR_DAT_08ff6860);
        lVar18 = auVar32._0_8_;
        if (lVar18 == 0) goto LAB_082d43c0;
        uVar11 = *(ulong *)(lVar18 + 0x18);
        iVar7 = (int)uVar11;
        if (1 < iVar7) {
          lVar27 = 0;
          do {
            uVar17 = uVar10 + 1 + (int)lVar27;
            if (*(uint *)(in_stack_00000040 + 0x18) <= uVar17) goto LAB_082d4458;
            if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_082d43c0;
            iVar8 = FUN_082e4430(*(long *)(unaff_x19 + 0x100),
                                 *(undefined4 *)(in_stack_00000048 + (long)(int)uVar17 * 0x10 + 4),0
                                );
            if (*(uint *)(lVar18 + 0x18) <= (int)lVar27 + 1U) goto LAB_082d4458;
            if (iVar8 != *(int *)(lVar18 + 0x24 + lVar27 * 4)) goto LAB_082d338c;
            lVar27 = lVar27 + 1;
          } while (iVar7 + -1 != (int)lVar27);
        }
        if (auVar32._8_4_ != 0) {
          if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_082d43c0;
          uVar14 = FUN_082e6834(*(long *)(unaff_x19 + 0x100),auVar32._8_8_ & 0xffffffff,
                                &stack0x00000128,0);
          if ((uVar14 & 1) != 0) {
            if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
               (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar18 == 0))
            goto LAB_082d43c0;
            if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_082d4458;
            *(undefined8 *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) =
                 in_stack_00000128;
            if (iVar7 < 1) goto LAB_082d3454;
            uVar14 = 0;
            goto LAB_082d3410;
          }
        }
LAB_082d338c:
        iVar6 = iVar6 + 1;
        if (in_stack_00000138 == 0) goto LAB_082d43c0;
      }
    }
  }
  else {
                    /* try { // try from 082d2bcc to 083d2bcf has its CatchHandler @ 082d2bd8 */
    bVar5 = false;
  }
  goto LAB_082d345c;
LAB_082d3410:
  do {
    if (uVar14 == 0) {
      if (*(uint *)(in_stack_00000040 + 0x18) <= uVar10) goto LAB_082d4458;
      *(int *)(in_stack_00000048 + (long)(int)uVar10 * 0x10 + 0xc) = iVar7;
    }
    else {
      uVar17 = uVar10 + (int)uVar14;
      if (*(uint *)(in_stack_00000040 + 0x18) <= uVar17) goto LAB_082d4458;
      *(undefined4 *)(in_stack_00000048 + (long)(int)uVar17 * 0x10 + 4) = 0x1a;
    }
    uVar14 = uVar14 + 1;
  } while ((uVar11 & 0xffffffff) != uVar14);
LAB_082d3454:
  uVar10 = (uVar10 + iVar7) - 1;
LAB_082d345c:
  if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
     (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar18 == 0)) goto LAB_082d43c0;
  uVar17 = *(uint *)(unaff_x19 + 0x4a0);
  if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_082d4458;
  puVar22 = (undefined4 *)(lVar18 + 0x20 + (long)(int)uVar17 * 0x178);
  *puVar22 = 0;
  *(long *)(puVar22 + 4) = lVar12;
  *(short *)(puVar22 + 1) = (short)uStack0000000000000024;
  *(undefined1 *)(puVar22 + 0xd) = uStack000000000000014c;
  if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_082d4458;
  lVar27 = lVar18 + 0x20 + (long)(int)uVar17 * 0x178;
  *(undefined8 *)(lVar27 + 8) = *(undefined8 *)(in_stack_00000048 + (long)(int)uVar10 * 0x10 + 8);
  lVar18 = *(long *)(unaff_x19 + 0x100);
  *(long *)(lVar27 + 0x20) = lVar18;
  puVar4 = PTR_DAT_08fc16b0;
  if (*(char *)(lVar12 + 0x10) == '\x02') {
    plVar19 = *(long **)(lVar12 + 0x18);
    if (plVar19 == (long *)0x0) goto LAB_082d43c0;
    bVar2 = *(byte *)(*(long *)PTR_DAT_08fc1658 + 0x130);
    if ((*(byte *)(*plVar19 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_08fc1658))
    goto LAB_082d43c0;
    lVar18 = plVar19[0x11];
    lVar12 = *(long *)PTR_DAT_08fc16b0;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar12 = *(long *)puVar4;
    }
    uVar17 = FUN_082c63fc(lVar18,plVar19,*(long *)(lVar12 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
    lVar12 = *(long *)puVar4;
    *(uint *)(unaff_x19 + 0x120) = uVar17;
    lVar12 = **(long **)(lVar12 + 0xb8);
    if (lVar12 == 0) goto LAB_082d43c0;
    if (*(uint *)(lVar12 + 0x18) <= uVar17) goto LAB_082d4458;
    lVar12 = lVar12 + (long)(int)uVar17 * 0x38;
    *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x54) + 1;
    if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
       (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar12 == 0)) goto LAB_082d43c0;
    uVar17 = *(uint *)(unaff_x19 + 0x4a0);
    if (uVar17 < *(uint *)(lVar12 + 0x18)) {
      lVar12 = lVar12 + (long)(int)uVar17 * 0x178;
      *(undefined4 *)(lVar12 + 0x20) = 1;
      *(undefined4 *)(lVar12 + 0x50) = *(undefined4 *)(unaff_x19 + 0x120);
      *(undefined4 *)(unaff_x19 + 0x65c) = 0;
      *(undefined4 *)(unaff_x19 + 0x120) = uStack000000000000003c;
      goto LAB_082d35bc;
    }
    goto LAB_082d4458;
  }
  if (bVar5) {
    if (lVar18 == 0) goto LAB_082d43c0;
    iVar6 = FUN_082d75b4(lVar18,0);
    if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_082d43c0;
    iVar7 = FUN_082d75b4(*(long *)(unaff_x19 + 0xf8),0);
    if (iVar6 != iVar7) {
      if (*(int *)(*(long *)PTR_DAT_08ff65b8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar11 = FUN_08322644(0);
      if ((uVar11 & 1) == 0) {
        lVar18 = *(long *)(unaff_x19 + 0x100);
        if (lVar18 == 0) goto LAB_082d43c0;
        uVar25 = *(undefined8 *)(lVar18 + 0x88);
      }
      else {
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_082d43c0;
        uVar25 = *(undefined8 *)(unaff_x19 + 0x118);
        uVar13 = *(undefined8 *)(*(long *)(unaff_x19 + 0x100) + 0x88);
        if (*(int *)(*(long *)PTR_DAT_08ff6870 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar25 = UnityEngine_XR_Interaction_Toolkit_XRInteractionManager__ClearInteractorHover
                           (uVar25,uVar13,0);
        lVar18 = *(long *)(unaff_x19 + 0x100);
      }
      puVar4 = PTR_DAT_08fc16b0;
      *(undefined8 *)(unaff_x19 + 0x118) = uVar25;
      lVar27 = *(long *)puVar4;
      if (*(int *)(lVar27 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar27 = *(long *)puVar4;
      }
      uVar9 = FUN_082c61e4(uVar25,lVar18,*(long *)(lVar27 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar27 + 0xb8) + 8));
      *(undefined4 *)(unaff_x19 + 0x120) = uVar9;
    }
  }
  if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
     (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar18 == 0)) goto LAB_082d43c0;
  if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_082d4458;
  lVar18 = *(long *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38);
  if ((lVar18 == 0) && (lVar18 = *(long *)(lVar12 + 0x20), lVar18 == 0)) goto LAB_082d43c0;
  iVar6 = FUN_086475ac(lVar18,0);
  if (0 < iVar6) {
    uVar25 = *(undefined8 *)(unaff_x19 + 0x100);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x118);
    if (*(int *)(*(long *)PTR_DAT_08ff6870 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar25 = FUN_0831d274(uVar25,uVar13,iVar6,0);
    puVar4 = PTR_DAT_08fc16b0;
    *(undefined8 *)(unaff_x19 + 0x118) = uVar25;
    uVar13 = *(undefined8 *)(unaff_x19 + 0x100);
    lVar12 = *(long *)puVar4;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar12 = *(long *)puVar4;
    }
    uVar9 = FUN_082c61e4(uVar25,uVar13,*(long *)(lVar12 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
    bVar5 = true;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar9;
  }
  if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar11 = FUN_0744db94(uStack0000000000000024,0);
  puVar4 = PTR_DAT_08fc16b0;
  if (((uVar11 & 1) != 0) || (uStack0000000000000024 == 0x200b)) goto LAB_082d39f8;
  lVar12 = *(long *)PTR_DAT_08fc16b0;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar12 = *(long *)puVar4;
  }
  lVar18 = **(long **)(lVar12 + 0xb8);
  if (lVar18 == 0) goto LAB_082d43c0;
  uVar17 = *(uint *)(unaff_x19 + 0x120);
  if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_082d4458;
  if (*(int *)(lVar18 + (long)(int)uVar17 * 0x38 + 0x54) < 0x3fff) {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      plVar19 = *(long **)(*(long *)PTR_DAT_08fc16b0 + 0xb8);
      goto Unity_VisualScripting_CoroutineRunner__Awake;
    }
LAB_082d3964:
    uVar17 = *(uint *)(unaff_x19 + 0x120);
  }
  else {
    if (bVar5) {
      if (*(long *)(unaff_x19 + 0x7b8) == 0) goto LAB_082d43c0;
      uVar11 = FUN_06ee3b1c(*(long *)(unaff_x19 + 0x7b8),(long)(int)uVar17,
                            (long)&stack0x00000120 + 4,*(undefined8 *)PTR_DAT_08fc5190);
      puVar4 = PTR_DAT_08fc16b0;
      if ((uVar11 & 1) == 0) {
LAB_082d3890:
        uVar13 = *(undefined8 *)(unaff_x19 + 0x118);
        uVar25 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f68540);
        FUN_0854ff98(uVar25,uVar13,0);
        puVar4 = PTR_DAT_08fc16b0;
        uVar13 = *(undefined8 *)(unaff_x19 + 0x100);
        lVar12 = *(long *)PTR_DAT_08fc16b0;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar12 = *(long *)puVar4;
        }
        uVar17 = FUN_082c61e4(uVar25,uVar13,*(long *)(lVar12 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
        if (*(long *)(unaff_x19 + 0x7b8) == 0) goto LAB_082d43c0;
        FUN_06ee2204(*(long *)(unaff_x19 + 0x7b8),*(undefined4 *)(unaff_x19 + 0x120),uVar17,
                     *(undefined8 *)PTR_DAT_08f7cfc8);
        lVar12 = *(long *)PTR_DAT_08fc16b0;
      }
      else {
        lVar12 = *(long *)PTR_DAT_08fc16b0;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar12 = *(long *)puVar4;
        }
        lVar18 = **(long **)(lVar12 + 0xb8);
        if (lVar18 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar18 + 0x18) <= in_stack_00000120._4_4_) goto LAB_082d4458;
        uVar17 = in_stack_00000120._4_4_;
        if (0x3ffe < *(int *)(lVar18 + (long)(int)in_stack_00000120._4_4_ * 0x38 + 0x54))
        goto LAB_082d3890;
      }
      *(uint *)(unaff_x19 + 0x120) = uVar17;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar12 = *(long *)PTR_DAT_08fc16b0;
      }
      plVar19 = *(long **)(lVar12 + 0xb8);
Unity_VisualScripting_CoroutineRunner__Awake:
      lVar18 = *plVar19;
      if (lVar18 == 0) goto LAB_082d43c0;
      goto LAB_082d3964;
    }
    uVar13 = *(undefined8 *)(unaff_x19 + 0x118);
    uVar25 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f68540);
    FUN_0854ff98(uVar25,uVar13,0);
    puVar4 = PTR_DAT_08fc16b0;
    uVar13 = *(undefined8 *)(unaff_x19 + 0x100);
    lVar12 = *(long *)PTR_DAT_08fc16b0;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar12 = *(long *)puVar4;
    }
    uVar17 = FUN_082c61e4(uVar25,uVar13,*(long *)(lVar12 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
    lVar12 = *(long *)puVar4;
    *(uint *)(unaff_x19 + 0x120) = uVar17;
    lVar18 = **(long **)(lVar12 + 0xb8);
    if (lVar18 == 0) goto LAB_082d43c0;
  }
  if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_082d4458;
  lVar18 = lVar18 + (long)(int)uVar17 * 0x38;
  *(int *)(lVar18 + 0x54) = *(int *)(lVar18 + 0x54) + 1;
LAB_082d39f8:
  if ((*(long *)(unaff_x19 + 0x3a0) != 0) &&
     (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar12 != 0)) {
    if (*(uint *)(unaff_x19 + 0x4a0) < *(uint *)(lVar12 + 0x18)) {
      lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178;
      *(undefined8 *)(lVar12 + 0x48) = *(undefined8 *)(unaff_x19 + 0x118);
      *(undefined4 *)(lVar12 + 0x50) = *(undefined4 *)(unaff_x19 + 0x120);
      puVar4 = PTR_DAT_08fc16b0;
      lVar12 = *(long *)PTR_DAT_08fc16b0;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar12 = *(long *)puVar4;
      }
      lVar18 = **(long **)(lVar12 + 0xb8);
      if (lVar18 == 0) goto LAB_082d43c0;
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) goto LAB_082d4458;
      *(bool *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38 + 0x41) = bVar5;
      if (bVar5) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar18 = **(long **)(*(long *)PTR_DAT_08fc16b0 + 0xb8);
          if (lVar18 == 0) goto LAB_082d43c0;
        }
        if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) goto LAB_082d4458;
        *(undefined8 *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38 + 0x48) =
             in_stack_00000030;
        *(undefined8 *)(unaff_x19 + 0x118) = in_stack_00000030;
        *(undefined8 *)(unaff_x19 + 0x100) = in_stack_00000028;
        *(undefined4 *)(unaff_x19 + 0x120) = uStack000000000000003c;
      }
      uVar17 = *(uint *)(unaff_x19 + 0x4a0);
      do {
        *(uint *)(unaff_x19 + 0x4a0) = uVar17 + 1;
        uVar17 = uVar10;
        do {
          uVar10 = *(uint *)(unaff_x26 + 0x18);
          unaff_w27 = uVar17 + 1;
          if ((int)uVar10 <= (int)unaff_w27) goto LAB_082d3af0;
          if (uVar10 <= unaff_w27) goto LAB_082d4458;
          unaff_x23 = (uint *)(in_stack_00000048 + (long)(int)unaff_w27 * 0x10 + 4);
          if (*unaff_x23 == 0) goto LAB_082d3af0;
          if (*(long *)(unaff_x19 + 0x3a0) == 0) goto LAB_082d43c0;
          plVar19 = (long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38);
          lVar12 = *plVar19;
          iVar6 = *(int *)(unaff_x19 + 0x4a0);
          if ((lVar12 == 0) || (*(int *)(lVar12 + 0x18) <= iVar6)) {
            if (*(int *)(*(long *)PTR_DAT_08ff65d8 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            FUN_04d0f664(plVar19,iVar6 + 1,1,*(undefined8 *)PTR_DAT_08ff6878);
            uVar10 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar10 <= unaff_w27) goto LAB_082d4458;
          unaff_w25 = *unaff_x23;
          uStack000000000000003c = *(undefined4 *)(unaff_x19 + 0x120);
          if ((*(char *)(unaff_x19 + 0x33a) == '\0') || (unaff_w25 != 0x3c)) {
LAB_082d28b0:
            in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x100);
            in_stack_00000030 = *(undefined8 *)(unaff_x19 + 0x118);
            uStack000000000000014c = 0;
            if (*(int *)(unaff_x19 + 0x65c) != 0) goto LAB_082d2978;
            uVar10 = *(uint *)(unaff_x19 + 0x284);
            if ((uVar10 >> 4 & 1) == 0) {
              if ((uVar10 >> 3 & 1) == 0) {
                if ((uVar10 >> 5 & 1) != 0) goto LAB_082d28d8;
              }
              else {
                if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_0408f364();
                }
                uVar11 = FUN_0745015c(unaff_w25,0);
                if ((uVar11 & 1) != 0) {
                  if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
                    thunk_FUN_0408f364();
                  }
                  uVar10 = FUN_074505fc(unaff_w25,0);
                  goto LAB_082d2974;
                }
              }
            }
            else {
LAB_082d28d8:
              if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              uVar11 = System_Threading_Monitor__TryEnter(unaff_w25,0);
              if ((uVar11 & 1) != 0) {
                if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_0408f364();
                }
                uVar10 = FUN_07450484(unaff_w25,0);
LAB_082d2974:
                unaff_w25 = uVar10 & 0xffff;
              }
            }
LAB_082d2978:
            unaff_w29 = uVar17 + 2;
            if ((int)unaff_w29 < (int)*(uint *)(unaff_x26 + 0x18)) {
              if (*(uint *)(unaff_x26 + 0x18) <= unaff_w29) goto LAB_082d4458;
              unaff_w24 = *(uint *)(in_stack_00000048 + (long)(int)unaff_w29 * 0x10 + 4);
            }
            else {
              unaff_w24 = 0;
            }
            uVar10 = unaff_w27;
            if (*(char *)(unaff_x19 + 0x33b) == '\0') goto LAB_082d2afc;
            if (*(int *)(*(long *)PTR_DAT_08ff65e0 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            uVar11 = FUN_0832c2a4(unaff_w25,0);
            if (((uVar11 & 1) != 0) && (unaff_w24 != 0xfe0e)) goto LAB_082d2a18;
            in_w8 = *(int *)(*(long *)PTR_DAT_08ff65e0 + 0xe4);
            goto code_r0x082d29f4;
          }
          uVar11 = FUN_083025c8();
          uVar10 = uStack0000000000000148;
          if ((uVar11 & 1) == 0) {
            uStack000000000000003c = *(undefined4 *)(unaff_x19 + 0x120);
            goto LAB_082d28b0;
          }
          if (*(uint *)(unaff_x26 + 0x18) <= unaff_w27) goto LAB_082d4458;
          iVar6 = *(int *)(in_stack_00000048 + (long)(int)unaff_w27 * 0x10 + 8);
          if ((*(byte *)(unaff_x19 + 0x284) & 1) != 0) {
            *(undefined1 *)(unaff_x19 + 0x292) = 1;
          }
          puVar4 = PTR_DAT_08fc16b0;
          uVar17 = uStack0000000000000148;
        } while (*(int *)(unaff_x19 + 0x65c) != 1);
        lVar12 = *(long *)PTR_DAT_08fc16b0;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar12 = *(long *)puVar4;
        }
        lVar12 = **(long **)(lVar12 + 0xb8);
        if (lVar12 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) break;
        lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
        *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x54) + 1;
        if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
           (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar12 == 0))
        goto LAB_082d43c0;
        uVar17 = *(uint *)(unaff_x19 + 0x4a0);
        if (*(uint *)(lVar12 + 0x18) <= uVar17) break;
        lVar18 = lVar12 + 0x20 + (long)(int)uVar17 * 0x178;
        *(short *)(lVar18 + 4) = *(short *)(unaff_x19 + 0x6bc) + -0x2000;
        *(undefined8 *)(lVar18 + 0x20) = *(undefined8 *)(unaff_x19 + 0x100);
        *(undefined4 *)(lVar18 + 0x30) = *(undefined4 *)(unaff_x19 + 0x120);
        if ((*(long *)(unaff_x19 + 0x6b0) == 0) ||
           (lVar18 = FUN_08325f94(*(long *)(unaff_x19 + 0x6b0),0), lVar18 == 0)) goto LAB_082d43c0;
        uVar25 = FUN_057d50ec(lVar18,*(undefined4 *)(unaff_x19 + 0x6bc),
                              *(undefined8 *)PTR_DAT_08ff6858);
        if (*(uint *)(lVar12 + 0x18) <= uVar17) break;
        *(undefined8 *)(lVar12 + 0x20 + (long)(int)uVar17 * 0x178 + 0x10) = uVar25;
        if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
           (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar12 == 0))
        goto LAB_082d43c0;
        uVar17 = *(uint *)(unaff_x19 + 0x4a0);
        if (*(uint *)(lVar12 + 0x18) <= uVar17) break;
        puVar22 = (undefined4 *)(lVar12 + 0x20 + (long)(int)uVar17 * 0x178);
        *puVar22 = *(undefined4 *)(unaff_x19 + 0x65c);
        puVar22[2] = iVar6;
        if (*(uint *)(unaff_x26 + 0x18) <= uVar10) break;
        *(int *)(lVar12 + 0x20 + (long)(int)uVar17 * 0x178 + 0xc) =
             (*(int *)(in_stack_00000048 + (long)(int)uVar10 * 0x10 + 8) - iVar6) + 1;
        *(undefined4 *)(unaff_x19 + 0x65c) = 0;
        *(undefined4 *)(unaff_x19 + 0x120) = uStack000000000000003c;
LAB_082d35bc:
        iStack0000000000000038 = iStack0000000000000038 + 1;
      } while( true );
    }
    goto LAB_082d4458;
  }
  goto LAB_082d43c0;
LAB_082d3cbc:
  do {
    fVar31 = (float)param_2;
    if (uVar14 == 0) {
      lVar27 = *plVar19;
    }
    else {
      lVar27 = *plVar24;
      if (lVar27 == 0) goto LAB_082d43c0;
      if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_082d4458;
      uVar25 = *(undefined8 *)(lVar27 + uVar14 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar15 = FUN_08589e5c(uVar25,0,0);
      if ((uVar15 & 1) != 0) {
        lVar27 = *plVar19;
        plVar26 = (long *)*plVar24;
        if (*(int *)(lVar27 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar27 = *plVar19;
        }
        lVar27 = **(long **)(lVar27 + 0xb8);
        if (lVar27 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_082d4458;
        lVar27 = lVar27 + lVar18;
        in_stack_000000d0 = *(undefined8 *)(lVar27 + -4);
        in_stack_000000c8 = *(undefined8 *)(lVar27 + -0xc);
        in_stack_000000c0 = *(undefined8 *)(lVar27 + -0x14);
        in_stack_000000a8 = *(undefined8 *)(lVar27 + -0x2c);
        uVar25 = *(undefined8 *)(lVar27 + -0x34);
        in_stack_000000b8 = *(undefined8 *)(lVar27 + -0x1c);
        in_stack_000000b0 = *(undefined8 *)(lVar27 + -0x24);
        in_stack_000000a0 = uVar25;
        lVar27 = FUN_08329e2c();
        fVar31 = (float)uVar25;
        if (plVar26 == (long *)0x0) goto LAB_082d43c0;
        if ((lVar27 != 0) &&
           (lVar16 = thunk_FUN_0406ddbc(lVar27,*(undefined8 *)(*plVar26 + 0x40)), lVar16 == 0)) {
LAB_082d445c:
          uVar25 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
          FUN_04031750(uVar25,0);
        }
        if (*(uint *)(plVar26 + 3) <= uVar14) goto LAB_082d4458;
        plVar26[uVar14 + 4] = lVar27;
        if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
           (lVar27 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x60), lVar27 == 0))
        goto LAB_082d43c0;
        if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_082d4458;
        *(undefined8 *)(lVar27 + lVar12 + 0x30) = 0;
      }
      if (*(long *)(unaff_x19 + 0x3b8) == 0) goto LAB_082d43c0;
      fVar28 = (float)FUN_08597b2c(*(long *)(unaff_x19 + 0x3b8),0);
      lVar27 = *plVar24;
      if (lVar27 == 0) goto LAB_082d43c0;
      if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_082d4458;
      lVar27 = *(long *)(lVar27 + uVar14 * 8 + 0x20);
      if ((lVar27 == 0) ||
         (fVar30 = fVar31,
         lVar27 = UnityEngine_UIElements_StyleSheets_StylePropertyReader__ReadFloat(lVar27,0),
         lVar27 == 0)) goto LAB_082d43c0;
      fVar29 = (float)FUN_08597b2c(lVar27,0);
      fVar31 = (fVar31 - fVar30) * (fVar31 - fVar30);
      param_2 = (ulong)(uint)fVar31;
      if (fVar3 <= (fVar28 - fVar29) * (fVar28 - fVar29) + fVar31) {
        lVar27 = *plVar24;
        if (lVar27 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_082d4458;
        lVar27 = *(long *)(lVar27 + uVar14 * 8 + 0x20);
        if (lVar27 == 0) goto LAB_082d43c0;
        lVar27 = UnityEngine_UIElements_StyleSheets_StylePropertyReader__ReadFloat(lVar27,0);
        if ((*(long *)(unaff_x19 + 0x3b8) == 0) ||
           (FUN_08597b2c(*(long *)(unaff_x19 + 0x3b8),0), lVar27 == 0)) goto LAB_082d43c0;
        FUN_08597bf4(lVar27,0);
      }
      lVar27 = *plVar24;
      if (lVar27 == 0) goto LAB_082d43c0;
      if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_082d4458;
      lVar27 = *(long *)(lVar27 + uVar14 * 8 + 0x20);
      if (lVar27 == 0) goto LAB_082d43c0;
      uVar25 = *(undefined8 *)(lVar27 + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar15 = FUN_08589e5c(uVar25,0,0);
      if ((uVar15 & 1) == 0) {
        lVar27 = *plVar24;
        if (lVar27 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_082d4458;
        lVar27 = *(long *)(lVar27 + uVar14 * 8 + 0x20);
        if ((lVar27 == 0) || (lVar27 = *(long *)(lVar27 + 0xf0), lVar27 == 0)) goto LAB_082d43c0;
        iVar6 = FUN_0858dd10(lVar27,0);
        lVar27 = *plVar19;
        if (*(int *)(lVar27 + 0xe4) == 0) {
          thunk_FUN_0408f364(lVar27);
          lVar27 = *plVar19;
        }
        lVar27 = **(long **)(lVar27 + 0xb8);
        if (lVar27 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_082d4458;
        lVar27 = *(long *)(lVar27 + lVar18 + -0x1c);
        if (lVar27 == 0) goto LAB_082d43c0;
        iVar7 = FUN_0858dd10(lVar27,0);
        if (iVar6 != iVar7) goto LAB_082d3f50;
        lVar27 = *plVar19;
      }
      else {
LAB_082d3f50:
        lVar27 = *plVar24;
        if (lVar27 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_082d4458;
        lVar16 = *plVar19;
        lVar27 = *(long *)(lVar27 + uVar14 * 8 + 0x20);
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar16 = *plVar19;
        }
        lVar16 = **(long **)(lVar16 + 0xb8);
        if (lVar16 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_082d4458;
        if (lVar27 == 0) goto LAB_082d43c0;
        FUN_08329aa4(lVar27,*(undefined8 *)(lVar16 + lVar18 + -0x1c),0);
        lVar16 = *plVar24;
        if (lVar16 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_082d4458;
        lVar27 = *plVar19;
        lVar21 = **(long **)(lVar27 + 0xb8);
        if (lVar21 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar21 + 0x18) <= uVar14) goto LAB_082d4458;
        lVar16 = lVar16 + uVar14 * 8;
        lVar23 = *(long *)(lVar16 + 0x20);
        if (lVar23 == 0) goto LAB_082d43c0;
        *(undefined8 *)(lVar23 + 0xd8) = *(undefined8 *)(lVar21 + lVar18 + -0x2c);
        lVar16 = *(long *)(lVar16 + 0x20);
        if (lVar16 == 0) goto LAB_082d43c0;
        *(undefined8 *)(lVar16 + 0xe0) = *(undefined8 *)(lVar21 + lVar18 + -0x24);
      }
      if (*(int *)(lVar27 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar27 = *plVar19;
      }
      lVar16 = **(long **)(lVar27 + 0xb8);
      if (lVar16 == 0) goto LAB_082d43c0;
      if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_082d4458;
      if (*(char *)(lVar16 + lVar18 + -0x13) != '\0') {
        lVar21 = *plVar24;
        if (lVar21 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar21 + 0x18) <= uVar14) goto LAB_082d4458;
        lVar21 = *(long *)(lVar21 + uVar14 * 8 + 0x20);
        if (*(int *)(lVar27 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar16 = **(long **)(*plVar19 + 0xb8);
          if (lVar16 == 0) goto LAB_082d43c0;
        }
        if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_082d4458;
        if (lVar21 == 0) goto LAB_082d43c0;
        FUN_08329b0c(lVar21,*(undefined8 *)(lVar16 + lVar18 + -0x1c),0);
        lVar16 = *plVar24;
        if (lVar16 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_082d4458;
        lVar27 = *plVar19;
        lVar21 = **(long **)(lVar27 + 0xb8);
        if (lVar21 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar21 + 0x18) <= uVar14) goto LAB_082d4458;
        lVar16 = *(long *)(lVar16 + uVar14 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_082d43c0;
        *(undefined8 *)(lVar16 + 0x100) = *(undefined8 *)(lVar21 + lVar18 + -0xc);
      }
    }
    if (*(int *)(lVar27 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar27 = *plVar19;
    }
    plVar19 = (long *)PTR_DAT_08fc16b0;
    lVar27 = **(long **)(lVar27 + 0xb8);
    if (lVar27 == 0) goto LAB_082d43c0;
    if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_082d4458;
    if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
       (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x60), lVar16 == 0)) goto LAB_082d43c0;
    if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_082d4458;
    uVar17 = *(uint *)(lVar27 + lVar18);
    lVar27 = *(long *)(lVar16 + lVar12 + 0x30);
    if (lVar27 == 0) {
      if (uVar14 == 0) {
        in_stack_00000068 = 0;
        in_stack_00000060 = 0;
        in_stack_00000078 = 0;
        in_stack_00000070 = 0;
        in_stack_00000088 = 0;
        in_stack_00000080 = 0;
        in_stack_00000098 = 0;
        in_stack_00000090 = 0;
        in_stack_00000058 = 0;
        in_stack_00000050 = 0;
        FUN_0831e2c8(&stack0x00000050,*(undefined8 *)(unaff_x19 + 0x3d8),uVar17 + 1,0);
        if (*(int *)(lVar16 + 0x18) == 0) goto LAB_082d4458;
      }
      else {
        lVar27 = *plVar24;
        if (lVar27 == 0) goto LAB_082d43c0;
        if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_082d4458;
        lVar27 = *(long *)(lVar27 + uVar14 * 8 + 0x20);
        if (lVar27 == 0) goto LAB_082d43c0;
        uVar25 = FUN_08329ce0(lVar27,0);
        in_stack_00000068 = 0;
        in_stack_00000060 = 0;
        in_stack_00000078 = 0;
        in_stack_00000070 = 0;
        in_stack_00000088 = 0;
        in_stack_00000080 = 0;
        in_stack_00000098 = 0;
        in_stack_00000090 = 0;
        in_stack_00000058 = 0;
        in_stack_00000050 = 0;
        FUN_0831e2c8(&stack0x00000050,uVar25,uVar17 + 1,0);
        if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_082d4458;
        lVar16 = lVar16 + lVar12;
      }
      memmove((void *)(lVar16 + 0x20),&stack0x00000050,0x50);
      plVar19 = (long *)PTR_DAT_08fc16b0;
    }
    else {
      iVar6 = *(int *)(lVar27 + 0x18);
      if (iVar6 < (int)(uVar17 * 4)) {
        if ((int)uVar17 < 0x401) {
          uVar17 = uVar17 | (int)uVar17 >> 0x10;
          uVar17 = uVar17 | (int)uVar17 >> 8;
          uVar17 = uVar17 | (int)uVar17 >> 4;
          uVar17 = uVar17 | (int)uVar17 >> 2;
          uVar17 = uVar17 | (int)uVar17 >> 1;
LAB_082d4230:
          iVar6 = uVar17 + 1;
        }
        else {
LAB_082d4158:
          iVar6 = uVar17 + 0x100;
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        FUN_0831ef9c(lVar16 + lVar12 + 0x20,iVar6,0);
      }
      else if ((*(char *)(unaff_x19 + 0x359) != '\0') && (0 < (int)uVar17)) {
        iVar7 = iVar6 + 3;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        if (0x100 < (int)((iVar7 >> 2) - uVar17)) {
          if (uVar17 < 0x401) {
            uVar17 = uVar17 >> 4 | uVar17 >> 8 | uVar17;
            uVar17 = uVar17 | uVar17 >> 2;
            uVar17 = uVar17 | uVar17 >> 1;
            goto LAB_082d4230;
          }
          goto LAB_082d4158;
        }
      }
    }
    if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
       (lVar27 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x60), lVar27 == 0)) goto LAB_082d43c0;
    lVar16 = *plVar19;
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar16 = *plVar19;
    }
    lVar16 = **(long **)(lVar16 + 0xb8);
    if (lVar16 == 0) goto LAB_082d43c0;
    if ((*(uint *)(lVar16 + 0x18) <= uVar14) || (*(uint *)(lVar27 + 0x18) <= uVar14))
    goto LAB_082d4458;
    lVar16 = lVar16 + lVar18;
    uVar14 = uVar14 + 1;
    lVar27 = lVar27 + lVar12;
    lVar12 = lVar12 + 0x50;
    lVar18 = lVar18 + 0x38;
    *(undefined8 *)(lVar27 + 0x68) = *(undefined8 *)(lVar16 + -0x1c);
  } while (uVar11 != uVar14);
LAB_082d4308:
  lVar12 = *plVar24;
  if (lVar12 != 0) {
    lVar18 = (long)(int)uVar10 + 4;
    do {
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0x18);
      if ((long)(int)uVar10 <= lVar18 + -4) {
LAB_082d3afc:
        return *(undefined4 *)(unaff_x19 + 0x4a0);
      }
      uVar17 = (uint)uVar11;
      if (uVar10 <= uVar17) {
LAB_082d4458:
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      uVar25 = *(undefined8 *)(lVar12 + lVar18 * 8);
      if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar11 = FUN_0858816c(uVar25,0,0);
      if ((uVar11 & 1) == 0) goto LAB_082d3afc;
      if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
         (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x60), lVar12 == 0)) break;
      if (lVar18 + -4 < (long)*(int *)(lVar12 + 0x18)) {
        lVar12 = *plVar24;
        if (lVar12 == 0) break;
        if (*(uint *)(lVar12 + 0x18) <= uVar17) goto LAB_082d4458;
        lVar12 = *(long *)(lVar12 + lVar18 * 8);
        if ((lVar12 == 0) || (lVar12 = FUN_0869bc74(lVar12,0), lVar12 == 0)) break;
        FUN_08868968(lVar12,0,0);
      }
      lVar12 = *plVar24;
      lVar18 = lVar18 + 1;
      uVar11 = (ulong)(uVar17 + 1);
    } while (lVar12 != 0);
  }
LAB_082d43c0:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


