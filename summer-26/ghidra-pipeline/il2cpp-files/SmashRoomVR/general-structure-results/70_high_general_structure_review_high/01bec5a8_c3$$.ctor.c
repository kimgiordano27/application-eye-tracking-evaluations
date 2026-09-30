/*
FUNCTION_NAME: c3$$.ctor
ENTRY_POINT: 01bec5a8
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


undefined8 c3___ctor(ulong param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  float *pfVar12;
  long unaff_x19;
  uint *unaff_x20;
  long lVar13;
  ulong uVar14;
  long unaff_x21;
  uint unaff_w22;
  uint uVar15;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  uint uVar16;
  long unaff_x26;
  long unaff_x27;
  undefined4 *unaff_x28;
  uint *unaff_x29;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined8 unaff_d8;
  float fVar26;
  float unaff_s9;
  undefined4 uVar27;
  undefined8 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  long in_stack_00000020;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  long in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
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
    uVar22 = unaff_x29[2];
    uVar17 = FUN_03911ddc(param_1,param_3,param_4);
                    /* try { // try from 01bec5b0 to 01cec5cb has its CatchHandler @ 01becc48 */
    if (*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x24) break;
    *unaff_x20 = uVar17;
    *unaff_x28 = param_2;
    unaff_x29[2] = uVar22;
    lVar7 = *unaff_x25;
                    /* try { // try from 01bec5cc to 01cec5d3 has its CatchHandler @ 01becc28 */
    if (lVar7 == 0) goto LAB_01bec90c;
    uVar17 = (uint)unaff_x21;
    if (*(uint *)(lVar7 + 0x18) <= uVar17) break;
                    /* try { // try from 01bec5dc to 01cec5fb has its CatchHandler @ 01becc74 */
    lVar7 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_01bec90c;
    uVar22 = (uint)unaff_x27;
    if (*(uint *)(lVar7 + 0x18) <= uVar22) break;
    lVar13 = lVar7 + unaff_x27 * 0xc;
                    /* try { // try from 01bec600 to 01cec603 has its CatchHandler @ 01becc6c */
    uVar19 = *(undefined4 *)(lVar13 + 0x24);
                    /* try { // try from 01bec614 to 01cec627 has its CatchHandler @ 01becc68 */
    uVar23 = *(undefined4 *)(lVar13 + 0x28);
    uVar18 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar7 + 0x18) <= uVar22) break;
    *(undefined4 *)(lVar13 + 0x20) = uVar18;
                    /* try { // try from 01bec62c to 01cec647 has its CatchHandler @ 01becc60 */
    *(undefined4 *)(lVar13 + 0x24) = uVar19;
    *(undefined4 *)(lVar13 + 0x28) = uVar23;
    lVar7 = *unaff_x25;
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar17) break;
                    /* try { // try from 01bec648 to 01cec64f has its CatchHandler @ 01becc5c */
    lVar7 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_01bec90c;
    uVar15 = (uint)unaff_x23;
    if (*(uint *)(lVar7 + 0x18) <= uVar15) break;
    lVar13 = lVar7 + unaff_x23 * 0xc;
    uVar19 = *(undefined4 *)(lVar13 + 0x24);
    uVar23 = *(undefined4 *)(lVar13 + 0x28);
    uVar18 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar7 + 0x18) <= uVar15) break;
    *(undefined4 *)(lVar13 + 0x20) = uVar18;
    *(undefined4 *)(lVar13 + 0x24) = uVar19;
    *(undefined4 *)(lVar13 + 0x28) = uVar23;
    lVar7 = *unaff_x25;
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar17) break;
    lVar7 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_01bec90c;
    uVar16 = (uint)unaff_x26;
    if (*(uint *)(lVar7 + 0x18) <= uVar16) break;
    lVar13 = lVar7 + unaff_x26 * 0xc;
    uVar19 = *(undefined4 *)(lVar13 + 0x24);
    uVar23 = *(undefined4 *)(lVar13 + 0x28);
    uVar18 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar7 + 0x18) <= uVar16) break;
    *(undefined4 *)(lVar13 + 0x20) = uVar18;
    *(undefined4 *)(lVar13 + 0x24) = uVar19;
    *(undefined4 *)(lVar13 + 0x28) = uVar23;
    puVar3 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    lVar7 = *unaff_x25;
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar17) break;
    lVar7 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= (uint)unaff_x24) break;
    lVar7 = lVar7 + unaff_x24 * 0xc;
    fVar26 = (float)unaff_d8;
    fVar29 = (float)((ulong)unaff_d8 >> 0x20);
    *(ulong *)(lVar7 + 0x20) =
         CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar7 + 0x20) >> 0x20),
                  fVar26 + (float)*(undefined8 *)(lVar7 + 0x20));
    *(float *)(lVar7 + 0x28) = unaff_s9 + *(float *)(lVar7 + 0x28);
    lVar7 = *unaff_x25;
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar17) break;
    lVar7 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar22) break;
    lVar7 = lVar7 + unaff_x27 * 0xc;
    *(ulong *)(lVar7 + 0x20) =
         CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar7 + 0x20) >> 0x20),
                  fVar26 + (float)*(undefined8 *)(lVar7 + 0x20));
    *(float *)(lVar7 + 0x28) = unaff_s9 + *(float *)(lVar7 + 0x28);
    lVar7 = *unaff_x25;
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar17) break;
    lVar7 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar15) break;
    lVar7 = lVar7 + unaff_x23 * 0xc;
    *(ulong *)(lVar7 + 0x20) =
         CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar7 + 0x20) >> 0x20),
                  fVar26 + (float)*(undefined8 *)(lVar7 + 0x20));
    *(float *)(lVar7 + 0x28) = unaff_s9 + *(float *)(lVar7 + 0x28);
    lVar7 = *unaff_x25;
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar17) break;
    lVar7 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar16) break;
    lVar7 = lVar7 + unaff_x26 * 0xc;
    *(ulong *)(lVar7 + 0x20) =
         CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar7 + 0x20) >> 0x20),
                  fVar26 + (float)*(undefined8 *)(lVar7 + 0x20));
    *(float *)(lVar7 + 0x28) = unaff_s9 + *(float *)(lVar7 + 0x28);
    lVar7 = in_stack_00000048;
    do {
      unaff_w22 = unaff_w22 + 1;
      if ((int)lVar7 < (int)unaff_w22) {
        do {
          lVar7 = *(long *)(in_stack_00000038 + 0x28);
          uStack0000000000000034 = uStack0000000000000034 + 1;
          if (uStack0000000000000034 == uStack0000000000000030) {
            if (lVar7 == 0) goto LAB_01bec90c;
            uVar14 = 0;
            lVar13 = 0x20;
            goto LAB_01bec878;
          }
          if ((lVar7 == 0) || (lVar13 = *(long *)(lVar7 + 0x50), lVar13 == 0)) goto LAB_01bec90c;
          if (*(uint *)(lVar13 + 0x18) <= uStack0000000000000034) goto c6__Equals;
          lVar11 = *(long *)(lVar7 + 0x38);
          if (lVar11 == 0) goto LAB_01bec90c;
          lVar13 = lVar13 + (long)(int)uStack0000000000000034 * 0x5c;
          unaff_w22 = *(uint *)(lVar13 + 0x34);
          if (*(uint *)(lVar11 + 0x18) <= unaff_w22) goto c6__Equals;
          uVar17 = *(uint *)(lVar13 + 0x3c);
          lVar7 = (long)(int)uVar17;
          if (*(uint *)(lVar11 + 0x18) <= uVar17) goto c6__Equals;
          lVar8 = lVar11 + 0x20 + (long)(int)unaff_w22 * 0x178;
          uVar5 = *(undefined8 *)(lVar8 + 0xfc);
          lVar13 = lVar11 + 0x20 + lVar7 * 0x178;
          uVar28 = *(undefined8 *)(lVar13 + 0x108);
          fVar29 = *(float *)(lVar13 + 0x110);
          fVar26 = *(float *)(lVar8 + 0x104);
          FUN_0391a0e8(0xbe800000,0x3e800000,0);
          FUN_03914564(0,0);
        } while ((int)uVar17 < (int)unaff_w22);
        in_stack_00000058 =
             CONCAT44(((float)((ulong)uVar5 >> 0x20) + (float)((ulong)uVar28 >> 0x20)) * 0.5,
                      ((float)uVar5 + (float)uVar28) * 0.5);
        in_stack_00000050._4_4_ = (fVar26 + fVar29) * 0.5;
        in_stack_00000048 = lVar7;
      }
      lVar13 = *(long *)(in_stack_00000038 + 0x28);
      if ((lVar13 == 0) || (lVar11 = *(long *)(lVar13 + 0x38), lVar11 == 0)) goto LAB_01bec90c;
      if (*(uint *)(lVar11 + 0x18) <= unaff_w22) goto c6__Equals;
    } while (*(char *)(lVar11 + (long)(int)unaff_w22 * 0x178 + 0x194) == '\0');
    lVar7 = *(long *)(lVar13 + 0x60);
    if (lVar7 == 0) goto LAB_01bec90c;
    lVar11 = lVar11 + (long)(int)unaff_w22 * 0x178;
    uVar17 = *(uint *)(lVar11 + 0x58);
    unaff_x21 = (long)(int)uVar17;
    if (*(uint *)(lVar7 + 0x18) <= uVar17) break;
    lVar7 = *(long *)(lVar7 + unaff_x21 * 0x50 + 0x30);
    if (lVar7 == 0) goto LAB_01bec90c;
    uVar22 = *(uint *)(lVar11 + 0x6c);
    unaff_x24 = (long)(int)uVar22;
    if ((*(uint *)(lVar7 + 0x18) <= uVar22) ||
       (uVar15 = uVar22 + 2, *(uint *)(lVar7 + 0x18) <= uVar15)) break;
    unaff_x23 = (long)(int)uVar15;
    lVar11 = lVar7 + unaff_x24 * 0xc;
    lVar13 = lVar7 + unaff_x23 * 0xc;
    uVar5 = *(undefined8 *)(lVar11 + 0x20);
    fVar26 = *(float *)(lVar11 + 0x28);
    puVar9 = (undefined8 *)(lVar13 + 0x20);
    uVar28 = *puVar9;
    pfVar12 = (float *)(lVar13 + 0x28);
    lVar13 = *unaff_x25;
    if (lVar13 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar13 + 0x18) <= uVar17) break;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar13 + 0x18) <= uVar22) break;
    fVar29 = (float)uVar5;
    fVar20 = (float)((ulong)uVar5 >> 0x20);
    fVar24 = (fVar29 + (float)uVar28) * 0.5;
    fVar25 = (fVar20 + (float)((ulong)uVar28 >> 0x20)) * 0.5;
    fVar21 = (fVar26 + *pfVar12) * 0.5;
    lVar13 = lVar13 + unaff_x24 * 0xc;
    *(ulong *)(lVar13 + 0x20) = CONCAT44(fVar20 - fVar25,fVar29 - fVar24);
    *(float *)(lVar13 + 0x28) = fVar26 - fVar21;
    lVar13 = *unaff_x25;
    if (lVar13 == 0) goto LAB_01bec90c;
    if ((*(uint *)(lVar13 + 0x18) <= uVar17) ||
       (uVar16 = uVar22 + 1, *(uint *)(lVar7 + 0x18) <= uVar16)) break;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) goto LAB_01bec90c;
    unaff_x27 = (long)(int)uVar16;
    if (*(uint *)(lVar13 + 0x18) <= uVar16) break;
    lVar11 = lVar7 + unaff_x27 * 0xc;
    uVar5 = *(undefined8 *)(lVar11 + 0x20);
    fVar26 = *(float *)(lVar11 + 0x28);
    lVar13 = lVar13 + unaff_x27 * 0xc;
    *(ulong *)(lVar13 + 0x20) =
         CONCAT44((float)((ulong)uVar5 >> 0x20) - fVar25,(float)uVar5 - fVar24);
    *(float *)(lVar13 + 0x28) = fVar26 - fVar21;
    lVar13 = *unaff_x25;
    if (lVar13 == 0) goto LAB_01bec90c;
    if ((*(uint *)(lVar13 + 0x18) <= uVar17) || (*(uint *)(lVar7 + 0x18) <= uVar15)) break;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar13 + 0x18) <= uVar15) break;
    uVar5 = *puVar9;
    fVar26 = *pfVar12;
    lVar13 = lVar13 + unaff_x23 * 0xc;
    *(ulong *)(lVar13 + 0x20) =
         CONCAT44((float)((ulong)uVar5 >> 0x20) - fVar25,(float)uVar5 - fVar24);
    *(float *)(lVar13 + 0x28) = fVar26 - fVar21;
    lVar13 = *unaff_x25;
    if (lVar13 == 0) goto LAB_01bec90c;
    if ((*(uint *)(lVar13 + 0x18) <= uVar17) ||
       (uVar1 = uVar22 + 3, *(uint *)(lVar7 + 0x18) <= uVar1)) break;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) goto LAB_01bec90c;
    unaff_x26 = (long)(int)uVar1;
    if (*(uint *)(lVar13 + 0x18) <= uVar1) break;
    lVar7 = lVar7 + unaff_x26 * 0xc;
    uVar5 = *(undefined8 *)(lVar7 + 0x20);
    fVar26 = *(float *)(lVar7 + 0x28);
    lVar13 = lVar13 + unaff_x26 * 0xc;
    *(ulong *)(lVar13 + 0x20) =
         CONCAT44((float)((ulong)uVar5 >> 0x20) - fVar25,(float)uVar5 - fVar24);
    *(float *)(lVar13 + 0x28) = fVar26 - fVar21;
    FUN_0391a0e8(uStack0000000000000044,uStack0000000000000040,0);
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(puVar3);
      DAT_03fed258 = '\x01';
    }
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
    lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
    uVar19 = *(undefined4 *)(lVar7 + 0xc);
    uVar18 = *(undefined4 *)(lVar7 + 0x10);
    uVar23 = *(undefined4 *)(lVar7 + 0x14);
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
      cVar6 = DAT_03fed258;
    }
    else {
      cVar6 = '\x01';
    }
    puVar10 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
    uVar27 = *puVar10;
    uVar30 = puVar10[1];
    uVar31 = puVar10[2];
    uVar32 = puVar10[3];
    if (cVar6 == '\0') {
      thunk_FUN_01ad9084(puVar3);
      DAT_03fed258 = '\x01';
    }
    FUN_03910ecc(&stack0x00000080,uVar19,uVar18,uVar23,uVar27,uVar30,uVar31,uVar32,0);
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f8 = in_stack_000000b8;
    in_stack_000000f0 = in_stack_000000b0;
    lVar7 = *unaff_x25;
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar17) break;
    lVar7 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar22) break;
    lVar13 = lVar7 + unaff_x24 * 0xc;
    uVar19 = *(undefined4 *)(lVar13 + 0x24);
    uVar23 = *(undefined4 *)(lVar13 + 0x28);
    uVar18 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar7 + 0x18) <= uVar22) break;
    *(undefined4 *)(lVar13 + 0x20) = uVar18;
    *(undefined4 *)(lVar13 + 0x24) = uVar19;
    *(undefined4 *)(lVar13 + 0x28) = uVar23;
    lVar7 = *unaff_x25;
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar17) break;
    lVar7 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar16) break;
    lVar13 = lVar7 + unaff_x27 * 0xc;
    uVar19 = *(undefined4 *)(lVar13 + 0x24);
    uVar23 = *(undefined4 *)(lVar13 + 0x28);
    uVar18 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar7 + 0x18) <= uVar16) break;
    *(undefined4 *)(lVar13 + 0x20) = uVar18;
    *(undefined4 *)(lVar13 + 0x24) = uVar19;
    *(undefined4 *)(lVar13 + 0x28) = uVar23;
    lVar7 = *unaff_x25;
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar17) break;
    lVar7 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar15) break;
    lVar13 = lVar7 + unaff_x23 * 0xc;
    uVar19 = *(undefined4 *)(lVar13 + 0x24);
    uVar23 = *(undefined4 *)(lVar13 + 0x28);
    uVar18 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar7 + 0x18) <= uVar15) break;
    *(undefined4 *)(lVar13 + 0x20) = uVar18;
    *(undefined4 *)(lVar13 + 0x24) = uVar19;
    *(undefined4 *)(lVar13 + 0x28) = uVar23;
    lVar7 = *unaff_x25;
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar17) break;
    lVar7 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar1) break;
    lVar13 = lVar7 + unaff_x26 * 0xc;
    uVar19 = *(undefined4 *)(lVar13 + 0x24);
    uVar23 = *(undefined4 *)(lVar13 + 0x28);
    uVar18 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar7 + 0x18) <= uVar1) break;
    *(undefined4 *)(lVar13 + 0x20) = uVar18;
    *(undefined4 *)(lVar13 + 0x24) = uVar19;
    *(undefined4 *)(lVar13 + 0x28) = uVar23;
    puVar3 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    lVar7 = *unaff_x25;
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar17) break;
    lVar7 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar22) break;
    lVar7 = lVar7 + unaff_x24 * 0xc;
    *(ulong *)(lVar7 + 0x20) =
         CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar7 + 0x20) >> 0x20),
                  fVar24 + (float)*(undefined8 *)(lVar7 + 0x20));
    *(float *)(lVar7 + 0x28) = fVar21 + *(float *)(lVar7 + 0x28);
    lVar7 = *unaff_x25;
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar17) break;
    lVar7 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar16) break;
    lVar7 = lVar7 + unaff_x27 * 0xc;
    *(ulong *)(lVar7 + 0x20) =
         CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar7 + 0x20) >> 0x20),
                  fVar24 + (float)*(undefined8 *)(lVar7 + 0x20));
    *(float *)(lVar7 + 0x28) = fVar21 + *(float *)(lVar7 + 0x28);
    lVar7 = *unaff_x25;
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar17) break;
    lVar7 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar15) break;
    lVar7 = lVar7 + unaff_x23 * 0xc;
    *(ulong *)(lVar7 + 0x20) =
         CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar7 + 0x20) >> 0x20),
                  fVar24 + (float)*(undefined8 *)(lVar7 + 0x20));
    *(float *)(lVar7 + 0x28) = fVar21 + *(float *)(lVar7 + 0x28);
    lVar7 = *unaff_x25;
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar17) break;
    lVar7 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar1) break;
    lVar7 = lVar7 + unaff_x26 * 0xc;
    *(ulong *)(lVar7 + 0x20) =
         CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar7 + 0x20) >> 0x20),
                  fVar24 + (float)*(undefined8 *)(lVar7 + 0x20));
    *(float *)(lVar7 + 0x28) = fVar21 + *(float *)(lVar7 + 0x28);
    lVar7 = *unaff_x25;
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar17) break;
    lVar7 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar22) break;
    lVar7 = lVar7 + unaff_x24 * 0xc;
    fVar26 = (float)in_stack_00000058;
    fVar29 = (float)((ulong)in_stack_00000058 >> 0x20);
    *(ulong *)(lVar7 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x20) >> 0x20) - fVar29,
                  (float)*(undefined8 *)(lVar7 + 0x20) - fVar26);
    *(float *)(lVar7 + 0x28) = *(float *)(lVar7 + 0x28) - in_stack_00000050._4_4_;
    lVar7 = *unaff_x25;
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar17) break;
    lVar7 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar16) break;
    lVar7 = lVar7 + unaff_x27 * 0xc;
    *(ulong *)(lVar7 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x20) >> 0x20) - fVar29,
                  (float)*(undefined8 *)(lVar7 + 0x20) - fVar26);
    *(float *)(lVar7 + 0x28) = *(float *)(lVar7 + 0x28) - in_stack_00000050._4_4_;
    lVar7 = *unaff_x25;
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar17) break;
    lVar7 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar15) break;
    lVar7 = lVar7 + unaff_x23 * 0xc;
    *(ulong *)(lVar7 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x20) >> 0x20) - fVar29,
                  (float)*(undefined8 *)(lVar7 + 0x20) - fVar26);
    *(float *)(lVar7 + 0x28) = *(float *)(lVar7 + 0x28) - in_stack_00000050._4_4_;
    lVar7 = *unaff_x25;
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar17) break;
    lVar7 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar1) break;
    lVar7 = lVar7 + unaff_x26 * 0xc;
    *(ulong *)(lVar7 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x20) >> 0x20) - fVar29,
                  (float)*(undefined8 *)(lVar7 + 0x20) - fVar26);
    *(float *)(lVar7 + 0x28) = *(float *)(lVar7 + 0x28) - in_stack_00000050._4_4_;
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(puVar3);
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
    lVar7 = *unaff_x25;
    if (lVar7 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar7 + 0x18) <= uVar17) break;
    unaff_x19 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
    if (unaff_x19 == 0) goto LAB_01bec90c;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar22) break;
    lVar7 = unaff_x19 + unaff_x24 * 0xc;
    unaff_x20 = (uint *)(lVar7 + 0x20);
    param_1 = (ulong)*unaff_x20;
    param_3 = &stack0x000000c0;
    param_4 = 0;
    unaff_x28 = (undefined4 *)(lVar7 + 0x24);
    param_2 = *unaff_x28;
    unaff_x29 = unaff_x20;
    unaff_d8 = in_stack_00000058;
    unaff_s9 = in_stack_00000050._4_4_;
  }
c6__Equals:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
LAB_01bec878:
  lVar7 = *(long *)(lVar7 + 0x60);
  if (lVar7 == 0) {
LAB_01bec90c:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar17 = (uint)uVar14;
  if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar17) {
    uVar5 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                              );
    FUN_03924d70(DAT_00b55290,uVar5,0);
    *(undefined8 *)(in_stack_00000038 + 0x18) = uVar5;
    thunk_FUN_01b4f09c((undefined8 *)(in_stack_00000038 + 0x18),uVar5);
    *(undefined4 *)(in_stack_00000038 + 0x10) = 2;
    return 1;
  }
  if (*(uint *)(lVar7 + 0x18) <= uVar17) goto c6__Equals;
  lVar11 = *(long *)(in_stack_00000038 + 0x30);
  if (lVar11 == 0) goto LAB_01bec90c;
  if (*(uint *)(lVar11 + 0x18) <= uVar17) goto c6__Equals;
  if (*(long *)(lVar7 + lVar13) == 0) goto LAB_01bec90c;
  FUN_0390262c(*(long *)(lVar7 + lVar13),*(undefined8 *)(lVar11 + uVar14 * 8 + 0x20),0);
  if ((*(long *)(in_stack_00000038 + 0x28) == 0) ||
     (lVar7 = *(long *)(*(long *)(in_stack_00000038 + 0x28) + 0x60), lVar7 == 0)) goto LAB_01bec90c;
  if (*(uint *)(lVar7 + 0x18) <= uVar17) goto c6__Equals;
  plVar4 = *(long **)(in_stack_00000020 + 0x30);
  if (plVar4 == (long *)0x0) goto LAB_01bec90c;
  (**(code **)(*plVar4 + 0x7e8))
            (plVar4,*(undefined8 *)(lVar7 + lVar13),uVar14 & 0xffffffff,
             *(undefined8 *)(*plVar4 + 0x7f0));
  lVar7 = *(long *)(in_stack_00000038 + 0x28);
  uVar14 = uVar14 + 1;
  lVar13 = lVar13 + 0x50;
  if (lVar7 == 0) goto LAB_01bec90c;
  goto LAB_01bec878;
}


