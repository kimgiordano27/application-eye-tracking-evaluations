/*
FUNCTION_NAME: c2$$a
ENTRY_POINT: 01bec008
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 c2__a(ulong param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  float *pfVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x21;
  uint unaff_w22;
  uint uVar14;
  long unaff_x23;
  uint uVar15;
  long unaff_x24;
  long *unaff_x25;
  uint uVar16;
  long unaff_x26;
  uint uVar17;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  long in_stack_00000020;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  long in_stack_00000038;
  ulong in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
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
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  while( true ) {
    FUN_0391a0e8(param_1,param_2,param_3);
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(unaff_x28);
      DAT_03fed258 = '\x01';
    }
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
    lVar5 = *(long *)(*unaff_x28 + 0xb8);
    uVar23 = *(undefined4 *)(lVar5 + 0xc);
    uVar21 = *(undefined4 *)(lVar5 + 0x10);
    uVar30 = *(undefined4 *)(lVar5 + 0x14);
    if (*(char *)(unaff_x29 + 0x256) == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      cVar4 = DAT_03fed258;
      *(undefined1 *)(unaff_x29 + 0x256) = 1;
    }
    else {
      cVar4 = '\x01';
    }
    puVar8 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
    uVar24 = *puVar8;
    uVar27 = puVar8[1];
    uVar28 = puVar8[2];
    uVar29 = puVar8[3];
    if (cVar4 == '\0') {
      thunk_FUN_01ad9084(unaff_x28);
      DAT_03fed258 = '\x01';
    }
    FUN_03910ecc(&stack0x00000080,uVar23,uVar21,uVar30,uVar24,uVar27,uVar28,uVar29,0);
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f8 = in_stack_000000b8;
    in_stack_000000f0 = in_stack_000000b0;
    lVar5 = *unaff_x25;
    if (lVar5 == 0) goto LAB_01bec90c;
    uVar11 = (uint)unaff_x21;
    if (*(uint *)(lVar5 + 0x18) <= uVar11) break;
    lVar5 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_01bec90c;
    uVar15 = (uint)unaff_x24;
    if (*(uint *)(lVar5 + 0x18) <= uVar15) break;
    lVar12 = lVar5 + unaff_x24 * 0xc;
    uVar23 = *(undefined4 *)(lVar12 + 0x24);
    uVar30 = *(undefined4 *)(lVar12 + 0x28);
    uVar21 = FUN_03911ddc(*(undefined4 *)(lVar12 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar5 + 0x18) <= uVar15) break;
    *(undefined4 *)(lVar12 + 0x20) = uVar21;
    *(undefined4 *)(lVar12 + 0x24) = uVar23;
    *(undefined4 *)(lVar12 + 0x28) = uVar30;
    lVar5 = *unaff_x25;
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar11) break;
    lVar5 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_01bec90c;
                    /* try { // try from 01bec188 to 01cec20f has its CatchHandler @ 01bec188
                       catch() { ... } // from try @ 01bec188 with catch @ 01bec188
                       catch() { ... } // from try @ 01bec2a0 with catch @ 01bec188
                       catch() { ... } // from try @ 01bec320 with catch @ 01bec188 */
    uVar17 = (uint)unaff_x27;
    if (*(uint *)(lVar5 + 0x18) <= uVar17) break;
    lVar12 = lVar5 + unaff_x27 * 0xc;
    uVar23 = *(undefined4 *)(lVar12 + 0x24);
    uVar30 = *(undefined4 *)(lVar12 + 0x28);
    uVar21 = FUN_03911ddc(*(undefined4 *)(lVar12 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar5 + 0x18) <= uVar17) break;
    *(undefined4 *)(lVar12 + 0x20) = uVar21;
    *(undefined4 *)(lVar12 + 0x24) = uVar23;
    *(undefined4 *)(lVar12 + 0x28) = uVar30;
    lVar5 = *unaff_x25;
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar11) break;
    lVar5 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_01bec90c;
    uVar14 = (uint)unaff_x23;
    if (*(uint *)(lVar5 + 0x18) <= uVar14) break;
    lVar12 = lVar5 + unaff_x23 * 0xc;
                    /* try { // try from 01bec210 to 01cec223 has its CatchHandler @ 01bec32c */
    uVar23 = *(undefined4 *)(lVar12 + 0x24);
    uVar30 = *(undefined4 *)(lVar12 + 0x28);
    uVar21 = FUN_03911ddc(*(undefined4 *)(lVar12 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar5 + 0x18) <= uVar14) break;
    *(undefined4 *)(lVar12 + 0x20) = uVar21;
    *(undefined4 *)(lVar12 + 0x24) = uVar23;
    *(undefined4 *)(lVar12 + 0x28) = uVar30;
                    /* try { // try from 01bec240 to 01cec293 has its CatchHandler @ 01bec330 */
    lVar5 = *unaff_x25;
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar11) break;
    lVar5 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_01bec90c;
    uVar16 = (uint)unaff_x26;
    if (*(uint *)(lVar5 + 0x18) <= uVar16) break;
    lVar12 = lVar5 + unaff_x26 * 0xc;
    uVar23 = *(undefined4 *)(lVar12 + 0x24);
    uVar30 = *(undefined4 *)(lVar12 + 0x28);
    uVar21 = FUN_03911ddc(*(undefined4 *)(lVar12 + 0x20),&stack0x000000c0,0);
                    /* try { // try from 01bec29c to 01cec29f has its CatchHandler @ 01bec328 */
    if (*(uint *)(lVar5 + 0x18) <= uVar16) break;
                    /* try { // try from 01bec2a0 to 01cec317 has its CatchHandler @ 01bec188 */
    *(undefined4 *)(lVar12 + 0x20) = uVar21;
    *(undefined4 *)(lVar12 + 0x24) = uVar23;
    *(undefined4 *)(lVar12 + 0x28) = uVar30;
    puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    lVar5 = *unaff_x25;
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar11) break;
    lVar5 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar15) break;
    lVar5 = lVar5 + unaff_x24 * 0xc;
    fVar22 = (float)in_stack_00000078;
    fVar26 = (float)((ulong)in_stack_00000078 >> 0x20);
    *(ulong *)(lVar5 + 0x20) =
         CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20),
                  fVar22 + (float)*(undefined8 *)(lVar5 + 0x20));
    *(float *)(lVar5 + 0x28) = in_stack_00000070._4_4_ + *(float *)(lVar5 + 0x28);
    lVar5 = *unaff_x25;
    if (lVar5 == 0) goto LAB_01bec90c;
                    /* try { // try from 01bec318 to 01cec31f has its CatchHandler @ 01bec324 */
    if (*(uint *)(lVar5 + 0x18) <= uVar11) break;
                    /* try { // try from 01bec320 to 01cec36b has its CatchHandler @ 01bec188 */
    lVar5 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
                    /* catch() { ... } // from try @ 01bec318 with catch @ 01bec324 */
    if (lVar5 == 0) goto LAB_01bec90c;
                    /* catch() { ... } // from try @ 01bec29c with catch @ 01bec328 */
                    /* catch() { ... } // from try @ 01bec210 with catch @ 01bec32c */
                    /* catch() { ... } // from try @ 01bec240 with catch @ 01bec330 */
    if (*(uint *)(lVar5 + 0x18) <= uVar17) break;
    lVar5 = lVar5 + unaff_x27 * 0xc;
    *(ulong *)(lVar5 + 0x20) =
         CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20),
                  fVar22 + (float)*(undefined8 *)(lVar5 + 0x20));
    *(float *)(lVar5 + 0x28) = in_stack_00000070._4_4_ + *(float *)(lVar5 + 0x28);
    lVar5 = *unaff_x25;
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar11) break;
    lVar5 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar14) break;
    lVar5 = lVar5 + unaff_x23 * 0xc;
    *(ulong *)(lVar5 + 0x20) =
         CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20),
                  fVar22 + (float)*(undefined8 *)(lVar5 + 0x20));
    *(float *)(lVar5 + 0x28) = in_stack_00000070._4_4_ + *(float *)(lVar5 + 0x28);
    lVar5 = *unaff_x25;
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar11) break;
    lVar5 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar16) break;
    lVar5 = lVar5 + unaff_x26 * 0xc;
    *(ulong *)(lVar5 + 0x20) =
         CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20),
                  fVar22 + (float)*(undefined8 *)(lVar5 + 0x20));
    *(float *)(lVar5 + 0x28) = in_stack_00000070._4_4_ + *(float *)(lVar5 + 0x28);
    lVar5 = *unaff_x25;
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar11) break;
    lVar5 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar15) break;
    lVar5 = lVar5 + unaff_x24 * 0xc;
    fVar22 = (float)in_stack_00000058;
    fVar26 = (float)((ulong)in_stack_00000058 >> 0x20);
    *(ulong *)(lVar5 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20) - fVar26,
                  (float)*(undefined8 *)(lVar5 + 0x20) - fVar22);
    *(float *)(lVar5 + 0x28) = *(float *)(lVar5 + 0x28) - in_stack_00000050._4_4_;
    lVar5 = *unaff_x25;
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar11) break;
    lVar5 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar17) break;
    lVar5 = lVar5 + unaff_x27 * 0xc;
    *(ulong *)(lVar5 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20) - fVar26,
                  (float)*(undefined8 *)(lVar5 + 0x20) - fVar22);
    *(float *)(lVar5 + 0x28) = *(float *)(lVar5 + 0x28) - in_stack_00000050._4_4_;
    lVar5 = *unaff_x25;
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar11) break;
    lVar5 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar14) break;
    lVar5 = lVar5 + unaff_x23 * 0xc;
    *(ulong *)(lVar5 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20) - fVar26,
                  (float)*(undefined8 *)(lVar5 + 0x20) - fVar22);
    *(float *)(lVar5 + 0x28) = *(float *)(lVar5 + 0x28) - in_stack_00000050._4_4_;
    lVar5 = *unaff_x25;
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar11) break;
    lVar5 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar16) break;
    lVar5 = lVar5 + unaff_x26 * 0xc;
    *(ulong *)(lVar5 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20) - fVar26,
                  (float)*(undefined8 *)(lVar5 + 0x20) - fVar22);
    *(float *)(lVar5 + 0x28) = *(float *)(lVar5 + 0x28) - in_stack_00000050._4_4_;
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(puVar1);
      DAT_03fed258 = '\x01';
    }
    FUN_03910ecc(&stack0x00000080,0);
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f8 = in_stack_000000b8;
    in_stack_000000f0 = in_stack_000000b0;
    lVar5 = *unaff_x25;
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar11) break;
    lVar5 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar15) break;
    lVar12 = lVar5 + unaff_x24 * 0xc;
    uVar23 = *(undefined4 *)(lVar12 + 0x24);
    uVar30 = *(undefined4 *)(lVar12 + 0x28);
    uVar21 = FUN_03911ddc(*(undefined4 *)(lVar12 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar5 + 0x18) <= uVar15) break;
    *(undefined4 *)(lVar12 + 0x20) = uVar21;
    *(undefined4 *)(lVar12 + 0x24) = uVar23;
    *(undefined4 *)(lVar12 + 0x28) = uVar30;
    lVar5 = *unaff_x25;
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar11) break;
    lVar5 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar17) break;
    lVar12 = lVar5 + unaff_x27 * 0xc;
    uVar23 = *(undefined4 *)(lVar12 + 0x24);
    uVar30 = *(undefined4 *)(lVar12 + 0x28);
    uVar21 = FUN_03911ddc(*(undefined4 *)(lVar12 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar5 + 0x18) <= uVar17) break;
    *(undefined4 *)(lVar12 + 0x20) = uVar21;
    *(undefined4 *)(lVar12 + 0x24) = uVar23;
    *(undefined4 *)(lVar12 + 0x28) = uVar30;
    lVar5 = *unaff_x25;
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar11) break;
    lVar5 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar14) break;
    lVar12 = lVar5 + unaff_x23 * 0xc;
    uVar23 = *(undefined4 *)(lVar12 + 0x24);
    uVar30 = *(undefined4 *)(lVar12 + 0x28);
    uVar21 = FUN_03911ddc(*(undefined4 *)(lVar12 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar5 + 0x18) <= uVar14) break;
    *(undefined4 *)(lVar12 + 0x20) = uVar21;
    *(undefined4 *)(lVar12 + 0x24) = uVar23;
    *(undefined4 *)(lVar12 + 0x28) = uVar30;
    lVar5 = *unaff_x25;
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar11) break;
    lVar5 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar16) break;
    lVar12 = lVar5 + unaff_x26 * 0xc;
    uVar23 = *(undefined4 *)(lVar12 + 0x24);
    uVar30 = *(undefined4 *)(lVar12 + 0x28);
    uVar21 = FUN_03911ddc(*(undefined4 *)(lVar12 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar5 + 0x18) <= uVar16) break;
    *(undefined4 *)(lVar12 + 0x20) = uVar21;
    *(undefined4 *)(lVar12 + 0x24) = uVar23;
    *(undefined4 *)(lVar12 + 0x28) = uVar30;
    unaff_x28 = (long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    lVar5 = *unaff_x25;
    if (lVar5 == 0) goto LAB_01bec90c;
    unaff_x29 = 0x3fed000;
    if (*(uint *)(lVar5 + 0x18) <= uVar11) break;
    lVar5 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar15) break;
    lVar5 = lVar5 + unaff_x24 * 0xc;
    *(ulong *)(lVar5 + 0x20) =
         CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20),
                  fVar22 + (float)*(undefined8 *)(lVar5 + 0x20));
    *(float *)(lVar5 + 0x28) = in_stack_00000050._4_4_ + *(float *)(lVar5 + 0x28);
    lVar5 = *unaff_x25;
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar11) break;
    lVar5 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar17) break;
    lVar5 = lVar5 + unaff_x27 * 0xc;
    *(ulong *)(lVar5 + 0x20) =
         CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20),
                  fVar22 + (float)*(undefined8 *)(lVar5 + 0x20));
    *(float *)(lVar5 + 0x28) = in_stack_00000050._4_4_ + *(float *)(lVar5 + 0x28);
    lVar5 = *unaff_x25;
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar11) break;
    lVar5 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar14) break;
    lVar5 = lVar5 + unaff_x23 * 0xc;
    *(ulong *)(lVar5 + 0x20) =
         CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20),
                  fVar22 + (float)*(undefined8 *)(lVar5 + 0x20));
    *(float *)(lVar5 + 0x28) = in_stack_00000050._4_4_ + *(float *)(lVar5 + 0x28);
    lVar5 = *unaff_x25;
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar11) break;
    lVar5 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar5 + 0x18) <= uVar16) break;
    lVar5 = lVar5 + unaff_x26 * 0xc;
    *(ulong *)(lVar5 + 0x20) =
         CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20),
                  fVar22 + (float)*(undefined8 *)(lVar5 + 0x20));
    *(float *)(lVar5 + 0x28) = in_stack_00000050._4_4_ + *(float *)(lVar5 + 0x28);
    lVar5 = in_stack_00000048;
    do {
      unaff_w22 = unaff_w22 + 1;
      if ((int)lVar5 < (int)unaff_w22) {
        do {
          lVar5 = *(long *)(in_stack_00000038 + 0x28);
          uStack0000000000000034 = uStack0000000000000034 + 1;
          if (uStack0000000000000034 == uStack0000000000000030) {
            if (lVar5 == 0) goto LAB_01bec90c;
            uVar13 = 0;
            lVar12 = 0x20;
            goto LAB_01bec878;
          }
          if ((lVar5 == 0) || (lVar12 = *(long *)(lVar5 + 0x50), lVar12 == 0)) goto LAB_01bec90c;
          if (*(uint *)(lVar12 + 0x18) <= uStack0000000000000034) goto c6__Equals;
          lVar9 = *(long *)(lVar5 + 0x38);
          if (lVar9 == 0) goto LAB_01bec90c;
          lVar12 = lVar12 + (long)(int)uStack0000000000000034 * 0x5c;
          unaff_w22 = *(uint *)(lVar12 + 0x34);
          if (*(uint *)(lVar9 + 0x18) <= unaff_w22) goto c6__Equals;
          uVar11 = *(uint *)(lVar12 + 0x3c);
          lVar5 = (long)(int)uVar11;
          if (*(uint *)(lVar9 + 0x18) <= uVar11) goto c6__Equals;
          lVar6 = lVar9 + 0x20 + (long)(int)unaff_w22 * 0x178;
          uVar3 = *(undefined8 *)(lVar6 + 0xfc);
          lVar12 = lVar9 + 0x20 + lVar5 * 0x178;
          uVar25 = *(undefined8 *)(lVar12 + 0x108);
          fVar26 = *(float *)(lVar12 + 0x110);
          fVar22 = *(float *)(lVar6 + 0x104);
          FUN_0391a0e8(0xbe800000,0x3e800000,0);
          FUN_03914564(0,0);
        } while ((int)uVar11 < (int)unaff_w22);
        in_stack_00000058 =
             CONCAT44(((float)((ulong)uVar3 >> 0x20) + (float)((ulong)uVar25 >> 0x20)) * 0.5,
                      ((float)uVar3 + (float)uVar25) * 0.5);
        in_stack_00000050._4_4_ = (fVar22 + fVar26) * 0.5;
        in_stack_00000048 = lVar5;
      }
      lVar12 = *(long *)(in_stack_00000038 + 0x28);
      if ((lVar12 == 0) || (lVar9 = *(long *)(lVar12 + 0x38), lVar9 == 0)) goto LAB_01bec90c;
      if (*(uint *)(lVar9 + 0x18) <= unaff_w22) goto c6__Equals;
    } while (*(char *)(lVar9 + (long)(int)unaff_w22 * 0x178 + 0x194) == '\0');
    lVar5 = *(long *)(lVar12 + 0x60);
    if (lVar5 == 0) goto LAB_01bec90c;
    lVar9 = lVar9 + (long)(int)unaff_w22 * 0x178;
    uVar11 = *(uint *)(lVar9 + 0x58);
    unaff_x21 = (long)(int)uVar11;
    if (*(uint *)(lVar5 + 0x18) <= uVar11) break;
    lVar5 = *(long *)(lVar5 + unaff_x21 * 0x50 + 0x30);
    if (lVar5 == 0) goto LAB_01bec90c;
    uVar15 = *(uint *)(lVar9 + 0x6c);
    unaff_x24 = (long)(int)uVar15;
    if ((*(uint *)(lVar5 + 0x18) <= uVar15) ||
       (uVar17 = uVar15 + 2, *(uint *)(lVar5 + 0x18) <= uVar17)) break;
    unaff_x23 = (long)(int)uVar17;
    lVar9 = lVar5 + unaff_x24 * 0xc;
    lVar12 = lVar5 + unaff_x23 * 0xc;
    uVar3 = *(undefined8 *)(lVar9 + 0x20);
    fVar22 = *(float *)(lVar9 + 0x28);
    puVar7 = (undefined8 *)(lVar12 + 0x20);
    uVar25 = *puVar7;
    pfVar10 = (float *)(lVar12 + 0x28);
    lVar12 = *unaff_x25;
    if (lVar12 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar12 + 0x18) <= uVar11) break;
    lVar12 = *(long *)(lVar12 + unaff_x21 * 8 + 0x20);
    if (lVar12 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar12 + 0x18) <= uVar15) break;
    fVar26 = (float)uVar3;
    fVar18 = (float)((ulong)uVar3 >> 0x20);
    fVar19 = (fVar26 + (float)uVar25) * 0.5;
    fVar20 = (fVar18 + (float)((ulong)uVar25 >> 0x20)) * 0.5;
    in_stack_00000078 = CONCAT44(fVar20,fVar19);
    in_stack_00000070._4_4_ = (fVar22 + *pfVar10) * 0.5;
    lVar12 = lVar12 + unaff_x24 * 0xc;
    *(ulong *)(lVar12 + 0x20) = CONCAT44(fVar18 - fVar20,fVar26 - fVar19);
    *(float *)(lVar12 + 0x28) = fVar22 - in_stack_00000070._4_4_;
    lVar12 = *unaff_x25;
    if (lVar12 == 0) goto LAB_01bec90c;
    if ((*(uint *)(lVar12 + 0x18) <= uVar11) ||
       (uVar14 = uVar15 + 1, *(uint *)(lVar5 + 0x18) <= uVar14)) break;
    lVar12 = *(long *)(lVar12 + unaff_x21 * 8 + 0x20);
    if (lVar12 == 0) goto LAB_01bec90c;
    unaff_x27 = (long)(int)uVar14;
    if (*(uint *)(lVar12 + 0x18) <= uVar14) break;
    lVar9 = lVar5 + unaff_x27 * 0xc;
    uVar3 = *(undefined8 *)(lVar9 + 0x20);
    fVar22 = *(float *)(lVar9 + 0x28);
    lVar12 = lVar12 + unaff_x27 * 0xc;
    *(ulong *)(lVar12 + 0x20) =
         CONCAT44((float)((ulong)uVar3 >> 0x20) - fVar20,(float)uVar3 - fVar19);
    *(float *)(lVar12 + 0x28) = fVar22 - in_stack_00000070._4_4_;
    lVar12 = *unaff_x25;
    if (lVar12 == 0) goto LAB_01bec90c;
    if ((*(uint *)(lVar12 + 0x18) <= uVar11) || (*(uint *)(lVar5 + 0x18) <= uVar17)) break;
    lVar12 = *(long *)(lVar12 + unaff_x21 * 8 + 0x20);
    if (lVar12 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar12 + 0x18) <= uVar17) break;
    uVar3 = *puVar7;
    fVar22 = *pfVar10;
    lVar12 = lVar12 + unaff_x23 * 0xc;
    *(ulong *)(lVar12 + 0x20) =
         CONCAT44((float)((ulong)uVar3 >> 0x20) - fVar20,(float)uVar3 - fVar19);
    *(float *)(lVar12 + 0x28) = fVar22 - in_stack_00000070._4_4_;
    lVar12 = *unaff_x25;
    if (lVar12 == 0) goto LAB_01bec90c;
    if ((*(uint *)(lVar12 + 0x18) <= uVar11) ||
       (uVar15 = uVar15 + 3, *(uint *)(lVar5 + 0x18) <= uVar15)) break;
    lVar12 = *(long *)(lVar12 + unaff_x21 * 8 + 0x20);
    if (lVar12 == 0) goto LAB_01bec90c;
    unaff_x26 = (long)(int)uVar15;
    if (*(uint *)(lVar12 + 0x18) <= uVar15) break;
    lVar5 = lVar5 + unaff_x26 * 0xc;
    uVar3 = *(undefined8 *)(lVar5 + 0x20);
    fVar22 = *(float *)(lVar5 + 0x28);
    lVar12 = lVar12 + unaff_x26 * 0xc;
    param_3 = 0;
    *(ulong *)(lVar12 + 0x20) =
         CONCAT44((float)((ulong)uVar3 >> 0x20) - fVar20,(float)uVar3 - fVar19);
    *(float *)(lVar12 + 0x28) = fVar22 - in_stack_00000070._4_4_;
    param_2 = in_stack_00000040 & 0xffffffff;
    param_1 = in_stack_00000040 >> 0x20;
  }
c6__Equals:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
LAB_01bec878:
  lVar5 = *(long *)(lVar5 + 0x60);
  if (lVar5 == 0) {
LAB_01bec90c:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar11 = (uint)uVar13;
  if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar11) {
    uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                              );
    FUN_03924d70(DAT_00b55290,uVar3,0);
    *(undefined8 *)(in_stack_00000038 + 0x18) = uVar3;
    thunk_FUN_01b4f09c((undefined8 *)(in_stack_00000038 + 0x18),uVar3);
    *(undefined4 *)(in_stack_00000038 + 0x10) = 2;
    return 1;
  }
  if (*(uint *)(lVar5 + 0x18) <= uVar11) goto c6__Equals;
  lVar9 = *(long *)(in_stack_00000038 + 0x30);
  if (lVar9 == 0) goto LAB_01bec90c;
  if (*(uint *)(lVar9 + 0x18) <= uVar11) goto c6__Equals;
  if (*(long *)(lVar5 + lVar12) == 0) goto LAB_01bec90c;
  FUN_0390262c(*(long *)(lVar5 + lVar12),*(undefined8 *)(lVar9 + uVar13 * 8 + 0x20),0);
  if ((*(long *)(in_stack_00000038 + 0x28) == 0) ||
     (lVar5 = *(long *)(*(long *)(in_stack_00000038 + 0x28) + 0x60), lVar5 == 0)) goto LAB_01bec90c;
  if (*(uint *)(lVar5 + 0x18) <= uVar11) goto c6__Equals;
  plVar2 = *(long **)(in_stack_00000020 + 0x30);
  if (plVar2 == (long *)0x0) goto LAB_01bec90c;
  (**(code **)(*plVar2 + 0x7e8))
            (plVar2,*(undefined8 *)(lVar5 + lVar12),uVar13 & 0xffffffff,
             *(undefined8 *)(*plVar2 + 0x7f0));
  lVar5 = *(long *)(in_stack_00000038 + 0x28);
  uVar13 = uVar13 + 1;
  lVar12 = lVar12 + 0x50;
  if (lVar5 == 0) goto LAB_01bec90c;
  goto LAB_01bec878;
}


