/*
FUNCTION_NAME: c4$$GetHashCode
ENTRY_POINT: 01bec78c
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


undefined8 c4__GetHashCode(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  char cVar8;
  long lVar9;
  uint in_w9;
  long lVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  float *pfVar14;
  long unaff_x19;
  uint uVar15;
  long unaff_x20;
  ulong uVar16;
  long unaff_x21;
  long lVar17;
  uint unaff_w22;
  long unaff_x23;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined8 unaff_d8;
  float fVar23;
  undefined4 uVar24;
  float unaff_s9;
  undefined4 uVar25;
  undefined8 uVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
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
  
  while ((uint)unaff_x27 < in_w9) {
    param_1 = param_1 + unaff_x27 * unaff_x20;
    fVar23 = (float)unaff_d8;
                    /* try { // try from 01bec7a0 to 01cec7a7 has its CatchHandler @ 01beccf0 */
    fVar27 = (float)((ulong)unaff_d8 >> 0x20);
    *(ulong *)(param_1 + 0x20) =
         CONCAT44(fVar27 + (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20),
                  fVar23 + (float)*(undefined8 *)(param_1 + 0x20));
    *(float *)(param_1 + 0x28) = unaff_s9 + *(float *)(param_1 + 0x28);
    lVar9 = *unaff_x25;
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= (uint)unaff_x21) break;
    lVar9 = *(long *)(lVar9 + unaff_x21 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= (uint)unaff_x23) break;
    lVar9 = lVar9 + unaff_x23 * unaff_x20;
    *(ulong *)(lVar9 + 0x20) =
         CONCAT44(fVar27 + (float)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20),
                  fVar23 + (float)*(undefined8 *)(lVar9 + 0x20));
                    /* try { // try from 01bec7f8 to 01cec7ff has its CatchHandler @ 01becc68 */
    *(float *)(lVar9 + 0x28) = unaff_s9 + *(float *)(lVar9 + 0x28);
    lVar9 = *unaff_x25;
                    /* try { // try from 01bec800 to 01cec80b has its CatchHandler @ 01becc40 */
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= (uint)unaff_x21) break;
    lVar9 = *(long *)(lVar9 + unaff_x21 * 8 + 0x20);
                    /* try { // try from 01bec818 to 01cec82b has its CatchHandler @ 01becc2c */
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= (uint)unaff_x26) break;
    lVar9 = lVar9 + unaff_x26 * unaff_x20;
                    /* try { // try from 01bec830 to 01cec84b has its CatchHandler @ 01becc3c */
    *(ulong *)(lVar9 + 0x20) =
         CONCAT44(fVar27 + (float)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20),
                  fVar23 + (float)*(undefined8 *)(lVar9 + 0x20));
    *(float *)(lVar9 + 0x28) = unaff_s9 + *(float *)(lVar9 + 0x28);
    lVar9 = in_stack_00000048;
    do {
      unaff_w22 = unaff_w22 + 1;
                    /* try { // try from 01bec84c to 01cec853 has its CatchHandler @ 01becc24 */
      if ((int)lVar9 < (int)unaff_w22) {
        do {
          lVar9 = *(long *)(in_stack_00000038 + 0x28);
                    /* try { // try from 01bec85c to 01cec87b has its CatchHandler @ 01becc70 */
          uStack0000000000000034 = uStack0000000000000034 + 1;
          if (uStack0000000000000034 == uStack0000000000000030) {
            if (lVar9 == 0) goto LAB_01bec90c;
            uVar16 = 0;
            lVar17 = 0x20;
            goto LAB_01bec878;
          }
          if ((lVar9 == 0) || (lVar17 = *(long *)(lVar9 + 0x50), lVar17 == 0)) goto LAB_01bec90c;
          if (*(uint *)(lVar17 + 0x18) <= uStack0000000000000034) goto c6__Equals;
          lVar13 = *(long *)(lVar9 + 0x38);
          if (lVar13 == 0) goto LAB_01bec90c;
          lVar17 = lVar17 + (long)(int)uStack0000000000000034 * 0x5c;
          unaff_w22 = *(uint *)(lVar17 + 0x34);
          if (*(uint *)(lVar13 + 0x18) <= unaff_w22) goto c6__Equals;
          uVar15 = *(uint *)(lVar17 + 0x3c);
          lVar9 = (long)(int)uVar15;
          if (*(uint *)(lVar13 + 0x18) <= uVar15) goto c6__Equals;
          lVar10 = lVar13 + 0x20 + (int)unaff_w22 * unaff_x19;
          uVar7 = *(undefined8 *)(lVar10 + 0xfc);
          lVar17 = lVar13 + 0x20 + lVar9 * unaff_x19;
          uVar26 = *(undefined8 *)(lVar17 + 0x108);
          fVar27 = *(float *)(lVar17 + 0x110);
          fVar23 = *(float *)(lVar10 + 0x104);
          FUN_0391a0e8(0xbe800000,0x3e800000,0);
          FUN_03914564(0,0);
        } while ((int)uVar15 < (int)unaff_w22);
        in_stack_00000058 =
             CONCAT44(((float)((ulong)uVar7 >> 0x20) + (float)((ulong)uVar26 >> 0x20)) * 0.5,
                      ((float)uVar7 + (float)uVar26) * 0.5);
        in_stack_00000050._4_4_ = (fVar23 + fVar27) * 0.5;
        in_stack_00000048 = lVar9;
      }
      lVar17 = *(long *)(in_stack_00000038 + 0x28);
      if ((lVar17 == 0) || (lVar13 = *(long *)(lVar17 + 0x38), lVar13 == 0)) goto LAB_01bec90c;
      if (*(uint *)(lVar13 + 0x18) <= unaff_w22) goto c6__Equals;
    } while (*(char *)(lVar13 + (long)(int)unaff_w22 * (long)(int)unaff_x19 + 0x194) == '\0');
    lVar9 = *(long *)(lVar17 + 0x60);
    if (lVar9 == 0) goto LAB_01bec90c;
    lVar13 = lVar13 + (int)unaff_w22 * unaff_x19;
    uVar15 = *(uint *)(lVar13 + 0x58);
    unaff_x21 = (long)(int)uVar15;
    if (*(uint *)(lVar9 + 0x18) <= uVar15) break;
    lVar9 = *(long *)(lVar9 + unaff_x21 * 0x50 + 0x30);
    if (lVar9 == 0) goto LAB_01bec90c;
    uVar4 = *(uint *)(lVar13 + 0x6c);
    lVar17 = (long)(int)uVar4;
    if ((*(uint *)(lVar9 + 0x18) <= uVar4) || (uVar1 = uVar4 + 2, *(uint *)(lVar9 + 0x18) <= uVar1))
    break;
    unaff_x23 = (long)(int)uVar1;
    lVar10 = lVar9 + lVar17 * unaff_x20;
    lVar13 = lVar9 + unaff_x23 * unaff_x20;
    uVar7 = *(undefined8 *)(lVar10 + 0x20);
    fVar23 = *(float *)(lVar10 + 0x28);
    puVar11 = (undefined8 *)(lVar13 + 0x20);
    uVar26 = *puVar11;
    pfVar14 = (float *)(lVar13 + 0x28);
    lVar13 = *unaff_x25;
    if (lVar13 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar13 + 0x18) <= uVar15) break;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar13 + 0x18) <= uVar4) break;
    fVar27 = (float)uVar7;
    fVar18 = (float)((ulong)uVar7 >> 0x20);
    fVar20 = (fVar27 + (float)uVar26) * 0.5;
    fVar21 = (fVar18 + (float)((ulong)uVar26 >> 0x20)) * 0.5;
    fVar19 = (fVar23 + *pfVar14) * 0.5;
    lVar13 = lVar13 + lVar17 * unaff_x20;
    *(ulong *)(lVar13 + 0x20) = CONCAT44(fVar18 - fVar21,fVar27 - fVar20);
    *(float *)(lVar13 + 0x28) = fVar23 - fVar19;
    lVar13 = *unaff_x25;
    if (lVar13 == 0) goto LAB_01bec90c;
    if ((*(uint *)(lVar13 + 0x18) <= uVar15) ||
       (uVar2 = uVar4 + 1, *(uint *)(lVar9 + 0x18) <= uVar2)) break;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) goto LAB_01bec90c;
    unaff_x27 = (long)(int)uVar2;
    if (*(uint *)(lVar13 + 0x18) <= uVar2) break;
    lVar10 = lVar9 + unaff_x27 * unaff_x20;
    uVar7 = *(undefined8 *)(lVar10 + 0x20);
    fVar23 = *(float *)(lVar10 + 0x28);
    lVar13 = lVar13 + unaff_x27 * unaff_x20;
    *(ulong *)(lVar13 + 0x20) =
         CONCAT44((float)((ulong)uVar7 >> 0x20) - fVar21,(float)uVar7 - fVar20);
    *(float *)(lVar13 + 0x28) = fVar23 - fVar19;
    lVar13 = *unaff_x25;
    if (lVar13 == 0) goto LAB_01bec90c;
    if ((*(uint *)(lVar13 + 0x18) <= uVar15) || (*(uint *)(lVar9 + 0x18) <= uVar1)) break;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar13 + 0x18) <= uVar1) break;
    uVar7 = *puVar11;
    fVar23 = *pfVar14;
    lVar13 = lVar13 + unaff_x23 * unaff_x20;
    *(ulong *)(lVar13 + 0x20) =
         CONCAT44((float)((ulong)uVar7 >> 0x20) - fVar21,(float)uVar7 - fVar20);
    *(float *)(lVar13 + 0x28) = fVar23 - fVar19;
    lVar13 = *unaff_x25;
    if (lVar13 == 0) goto LAB_01bec90c;
    if ((*(uint *)(lVar13 + 0x18) <= uVar15) ||
       (uVar3 = uVar4 + 3, *(uint *)(lVar9 + 0x18) <= uVar3)) break;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) goto LAB_01bec90c;
    unaff_x26 = (long)(int)uVar3;
    if (*(uint *)(lVar13 + 0x18) <= uVar3) break;
    lVar9 = lVar9 + unaff_x26 * unaff_x20;
    uVar7 = *(undefined8 *)(lVar9 + 0x20);
    fVar23 = *(float *)(lVar9 + 0x28);
    lVar13 = lVar13 + unaff_x26 * unaff_x20;
    *(ulong *)(lVar13 + 0x20) =
         CONCAT44((float)((ulong)uVar7 >> 0x20) - fVar21,(float)uVar7 - fVar20);
    *(float *)(lVar13 + 0x28) = fVar23 - fVar19;
    FUN_0391a0e8(uStack0000000000000044,uStack0000000000000040,0);
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(unaff_x28);
      DAT_03fed258 = '\x01';
    }
    puVar5 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
    lVar9 = *(long *)(*unaff_x28 + 0xb8);
    uVar24 = *(undefined4 *)(lVar9 + 0xc);
    uVar22 = *(undefined4 *)(lVar9 + 0x10);
    uVar31 = *(undefined4 *)(lVar9 + 0x14);
    if (*(char *)(unaff_x29 + 0x256) == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      cVar8 = DAT_03fed258;
      *(undefined1 *)(unaff_x29 + 0x256) = 1;
    }
    else {
      cVar8 = '\x01';
    }
    puVar12 = *(undefined4 **)(*(long *)puVar5 + 0xb8);
    uVar25 = *puVar12;
    uVar28 = puVar12[1];
    uVar29 = puVar12[2];
    uVar30 = puVar12[3];
    if (cVar8 == '\0') {
      thunk_FUN_01ad9084(unaff_x28);
      DAT_03fed258 = '\x01';
    }
    FUN_03910ecc(&stack0x00000080,uVar24,uVar22,uVar31,uVar25,uVar28,uVar29,uVar30,0);
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f8 = in_stack_000000b8;
    in_stack_000000f0 = in_stack_000000b0;
    lVar9 = *unaff_x25;
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar15) break;
    lVar9 = *(long *)(lVar9 + unaff_x21 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar4) break;
    lVar13 = lVar9 + lVar17 * 0xc;
    uVar24 = *(undefined4 *)(lVar13 + 0x24);
    uVar31 = *(undefined4 *)(lVar13 + 0x28);
    uVar22 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar9 + 0x18) <= uVar4) break;
    *(undefined4 *)(lVar13 + 0x20) = uVar22;
    *(undefined4 *)(lVar13 + 0x24) = uVar24;
    *(undefined4 *)(lVar13 + 0x28) = uVar31;
    lVar9 = *unaff_x25;
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar15) break;
    lVar9 = *(long *)(lVar9 + unaff_x21 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar2) break;
    lVar13 = lVar9 + unaff_x27 * 0xc;
    uVar24 = *(undefined4 *)(lVar13 + 0x24);
    uVar31 = *(undefined4 *)(lVar13 + 0x28);
    uVar22 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar9 + 0x18) <= uVar2) break;
    *(undefined4 *)(lVar13 + 0x20) = uVar22;
    *(undefined4 *)(lVar13 + 0x24) = uVar24;
    *(undefined4 *)(lVar13 + 0x28) = uVar31;
    lVar9 = *unaff_x25;
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar15) break;
    lVar9 = *(long *)(lVar9 + unaff_x21 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar1) break;
    lVar13 = lVar9 + unaff_x23 * 0xc;
    uVar24 = *(undefined4 *)(lVar13 + 0x24);
    uVar31 = *(undefined4 *)(lVar13 + 0x28);
    uVar22 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar9 + 0x18) <= uVar1) break;
    *(undefined4 *)(lVar13 + 0x20) = uVar22;
    *(undefined4 *)(lVar13 + 0x24) = uVar24;
    *(undefined4 *)(lVar13 + 0x28) = uVar31;
    lVar9 = *unaff_x25;
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar15) break;
    lVar9 = *(long *)(lVar9 + unaff_x21 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar3) break;
    lVar13 = lVar9 + unaff_x26 * 0xc;
    uVar24 = *(undefined4 *)(lVar13 + 0x24);
    uVar31 = *(undefined4 *)(lVar13 + 0x28);
    uVar22 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar9 + 0x18) <= uVar3) break;
    *(undefined4 *)(lVar13 + 0x20) = uVar22;
    *(undefined4 *)(lVar13 + 0x24) = uVar24;
    *(undefined4 *)(lVar13 + 0x28) = uVar31;
    puVar5 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    lVar9 = *unaff_x25;
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar15) break;
    lVar9 = *(long *)(lVar9 + unaff_x21 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar4) break;
    lVar9 = lVar9 + lVar17 * 0xc;
    *(ulong *)(lVar9 + 0x20) =
         CONCAT44(fVar21 + (float)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20),
                  fVar20 + (float)*(undefined8 *)(lVar9 + 0x20));
    *(float *)(lVar9 + 0x28) = fVar19 + *(float *)(lVar9 + 0x28);
    lVar9 = *unaff_x25;
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar15) break;
    lVar9 = *(long *)(lVar9 + unaff_x21 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar2) break;
    lVar9 = lVar9 + unaff_x27 * 0xc;
    *(ulong *)(lVar9 + 0x20) =
         CONCAT44(fVar21 + (float)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20),
                  fVar20 + (float)*(undefined8 *)(lVar9 + 0x20));
    *(float *)(lVar9 + 0x28) = fVar19 + *(float *)(lVar9 + 0x28);
    lVar9 = *unaff_x25;
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar15) break;
    lVar9 = *(long *)(lVar9 + unaff_x21 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar1) break;
    lVar9 = lVar9 + unaff_x23 * 0xc;
    *(ulong *)(lVar9 + 0x20) =
         CONCAT44(fVar21 + (float)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20),
                  fVar20 + (float)*(undefined8 *)(lVar9 + 0x20));
    *(float *)(lVar9 + 0x28) = fVar19 + *(float *)(lVar9 + 0x28);
    lVar9 = *unaff_x25;
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar15) break;
    lVar9 = *(long *)(lVar9 + unaff_x21 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar3) break;
    lVar9 = lVar9 + unaff_x26 * 0xc;
    *(ulong *)(lVar9 + 0x20) =
         CONCAT44(fVar21 + (float)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20),
                  fVar20 + (float)*(undefined8 *)(lVar9 + 0x20));
    *(float *)(lVar9 + 0x28) = fVar19 + *(float *)(lVar9 + 0x28);
    lVar9 = *unaff_x25;
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar15) break;
    lVar9 = *(long *)(lVar9 + unaff_x21 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar4) break;
    lVar9 = lVar9 + lVar17 * 0xc;
    fVar23 = (float)in_stack_00000058;
    fVar27 = (float)((ulong)in_stack_00000058 >> 0x20);
    *(ulong *)(lVar9 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20) - fVar27,
                  (float)*(undefined8 *)(lVar9 + 0x20) - fVar23);
    *(float *)(lVar9 + 0x28) = *(float *)(lVar9 + 0x28) - in_stack_00000050._4_4_;
    lVar9 = *unaff_x25;
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar15) break;
    lVar9 = *(long *)(lVar9 + unaff_x21 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar2) break;
    lVar9 = lVar9 + unaff_x27 * 0xc;
    *(ulong *)(lVar9 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20) - fVar27,
                  (float)*(undefined8 *)(lVar9 + 0x20) - fVar23);
    *(float *)(lVar9 + 0x28) = *(float *)(lVar9 + 0x28) - in_stack_00000050._4_4_;
    lVar9 = *unaff_x25;
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar15) break;
    lVar9 = *(long *)(lVar9 + unaff_x21 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar1) break;
    lVar9 = lVar9 + unaff_x23 * 0xc;
    *(ulong *)(lVar9 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20) - fVar27,
                  (float)*(undefined8 *)(lVar9 + 0x20) - fVar23);
    *(float *)(lVar9 + 0x28) = *(float *)(lVar9 + 0x28) - in_stack_00000050._4_4_;
    lVar9 = *unaff_x25;
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar15) break;
    lVar9 = *(long *)(lVar9 + unaff_x21 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar3) break;
    lVar9 = lVar9 + unaff_x26 * 0xc;
    *(ulong *)(lVar9 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20) - fVar27,
                  (float)*(undefined8 *)(lVar9 + 0x20) - fVar23);
    *(float *)(lVar9 + 0x28) = *(float *)(lVar9 + 0x28) - in_stack_00000050._4_4_;
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(puVar5);
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
    lVar9 = *unaff_x25;
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar15) break;
    lVar9 = *(long *)(lVar9 + unaff_x21 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar4) break;
    lVar13 = lVar9 + lVar17 * 0xc;
    uVar24 = *(undefined4 *)(lVar13 + 0x24);
    uVar31 = *(undefined4 *)(lVar13 + 0x28);
    uVar22 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar9 + 0x18) <= uVar4) break;
    *(undefined4 *)(lVar13 + 0x20) = uVar22;
    *(undefined4 *)(lVar13 + 0x24) = uVar24;
    *(undefined4 *)(lVar13 + 0x28) = uVar31;
    lVar9 = *unaff_x25;
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar15) break;
    lVar9 = *(long *)(lVar9 + unaff_x21 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar2) break;
    lVar13 = lVar9 + unaff_x27 * 0xc;
    uVar24 = *(undefined4 *)(lVar13 + 0x24);
    uVar31 = *(undefined4 *)(lVar13 + 0x28);
    uVar22 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar9 + 0x18) <= uVar2) break;
    *(undefined4 *)(lVar13 + 0x20) = uVar22;
    *(undefined4 *)(lVar13 + 0x24) = uVar24;
    *(undefined4 *)(lVar13 + 0x28) = uVar31;
    lVar9 = *unaff_x25;
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar15) break;
    lVar9 = *(long *)(lVar9 + unaff_x21 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar1) break;
    lVar13 = lVar9 + unaff_x23 * 0xc;
    uVar24 = *(undefined4 *)(lVar13 + 0x24);
    uVar31 = *(undefined4 *)(lVar13 + 0x28);
    uVar22 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar9 + 0x18) <= uVar1) break;
    *(undefined4 *)(lVar13 + 0x20) = uVar22;
    *(undefined4 *)(lVar13 + 0x24) = uVar24;
    *(undefined4 *)(lVar13 + 0x28) = uVar31;
    lVar9 = *unaff_x25;
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar15) break;
    lVar9 = *(long *)(lVar9 + unaff_x21 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar3) break;
    lVar13 = lVar9 + unaff_x26 * 0xc;
    uVar24 = *(undefined4 *)(lVar13 + 0x24);
    uVar31 = *(undefined4 *)(lVar13 + 0x28);
    uVar22 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar9 + 0x18) <= uVar3) break;
    *(undefined4 *)(lVar13 + 0x20) = uVar22;
    *(undefined4 *)(lVar13 + 0x24) = uVar24;
    *(undefined4 *)(lVar13 + 0x28) = uVar31;
    unaff_x28 = (long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    lVar9 = *unaff_x25;
    if (lVar9 == 0) goto LAB_01bec90c;
    unaff_x19 = 0x178;
    unaff_x20 = 0xc;
    unaff_x29 = 0x3fed000;
    if (*(uint *)(lVar9 + 0x18) <= uVar15) break;
    lVar9 = *(long *)(lVar9 + unaff_x21 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar4) break;
    lVar9 = lVar9 + lVar17 * 0xc;
    *(ulong *)(lVar9 + 0x20) =
         CONCAT44(fVar27 + (float)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20),
                  fVar23 + (float)*(undefined8 *)(lVar9 + 0x20));
    *(float *)(lVar9 + 0x28) = in_stack_00000050._4_4_ + *(float *)(lVar9 + 0x28);
    lVar9 = *unaff_x25;
    if (lVar9 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar9 + 0x18) <= uVar15) break;
    param_1 = *(long *)(lVar9 + unaff_x21 * 8 + 0x20);
    if (param_1 == 0) goto LAB_01bec90c;
    unaff_d8 = in_stack_00000058;
    unaff_s9 = in_stack_00000050._4_4_;
    in_w9 = *(uint *)(param_1 + 0x18);
  }
c6__Equals:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
LAB_01bec878:
  lVar9 = *(long *)(lVar9 + 0x60);
  if (lVar9 == 0) {
LAB_01bec90c:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar15 = (uint)uVar16;
  if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar15) {
    uVar7 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                              );
    FUN_03924d70(DAT_00b55290,uVar7,0);
    *(undefined8 *)(in_stack_00000038 + 0x18) = uVar7;
    thunk_FUN_01b4f09c((undefined8 *)(in_stack_00000038 + 0x18),uVar7);
    *(undefined4 *)(in_stack_00000038 + 0x10) = 2;
    return 1;
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar15) goto c6__Equals;
  lVar13 = *(long *)(in_stack_00000038 + 0x30);
  if (lVar13 == 0) goto LAB_01bec90c;
  if (*(uint *)(lVar13 + 0x18) <= uVar15) goto c6__Equals;
  if (*(long *)(lVar9 + lVar17) == 0) goto LAB_01bec90c;
  FUN_0390262c(*(long *)(lVar9 + lVar17),*(undefined8 *)(lVar13 + uVar16 * 8 + 0x20),0);
  if ((*(long *)(in_stack_00000038 + 0x28) == 0) ||
     (lVar9 = *(long *)(*(long *)(in_stack_00000038 + 0x28) + 0x60), lVar9 == 0)) goto LAB_01bec90c;
  if (*(uint *)(lVar9 + 0x18) <= uVar15) goto c6__Equals;
  plVar6 = *(long **)(in_stack_00000020 + 0x30);
  if (plVar6 == (long *)0x0) goto LAB_01bec90c;
  (**(code **)(*plVar6 + 0x7e8))
            (plVar6,*(undefined8 *)(lVar9 + lVar17),uVar16 & 0xffffffff,
             *(undefined8 *)(*plVar6 + 0x7f0));
  lVar9 = *(long *)(in_stack_00000038 + 0x28);
  uVar16 = uVar16 + 1;
  lVar17 = lVar17 + 0x50;
  if (lVar9 == 0) goto LAB_01bec90c;
  goto LAB_01bec878;
}


