/*
FUNCTION_NAME: c4$$Equals
ENTRY_POINT: 01bec64c
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


undefined8 c4__Equals(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  char cVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  long unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  uint uVar18;
  long unaff_x26;
  long unaff_x27;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
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
  
  for (; lVar13 = *(long *)(param_1 + 0x20), lVar13 != 0; param_1 = param_1 + unaff_x21 * 8) {
    uVar14 = (uint)unaff_x23;
                    /* try { // try from 01bec658 to 01cec677 has its CatchHandler @ 01beccec */
    if (*(uint *)(lVar13 + 0x18) <= uVar14) goto c6__Equals;
    lVar15 = lVar13 + unaff_x23 * 0xc;
    uVar20 = *(undefined4 *)(lVar15 + 0x24);
    uVar23 = *(undefined4 *)(lVar15 + 0x28);
    uVar19 = FUN_03911ddc(*(undefined4 *)(lVar15 + 0x20),&stack0x000000c0,0);
                    /* try { // try from 01bec688 to 01cec68f has its CatchHandler @ 01becc68 */
    if (*(uint *)(lVar13 + 0x18) <= uVar14) goto c6__Equals;
    *(undefined4 *)(lVar15 + 0x20) = uVar19;
    *(undefined4 *)(lVar15 + 0x24) = uVar20;
    *(undefined4 *)(lVar15 + 0x28) = uVar23;
    lVar13 = *unaff_x25;
    if (lVar13 == 0) break;
    uVar17 = (uint)unaff_x21;
                    /* try { // try from 01bec6b0 to 01cec6b3 has its CatchHandler @ 01becc58 */
    if (*(uint *)(lVar13 + 0x18) <= uVar17) goto c6__Equals;
                    /* try { // try from 01bec6b8 to 01cec6c7 has its CatchHandler @ 01becc54 */
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) break;
    uVar18 = (uint)unaff_x26;
    if (*(uint *)(lVar13 + 0x18) <= uVar18) goto c6__Equals;
    lVar15 = lVar13 + unaff_x26 * 0xc;
    uVar20 = *(undefined4 *)(lVar15 + 0x24);
    uVar23 = *(undefined4 *)(lVar15 + 0x28);
    uVar19 = FUN_03911ddc(*(undefined4 *)(lVar15 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar13 + 0x18) <= uVar18) goto c6__Equals;
    *(undefined4 *)(lVar15 + 0x20) = uVar19;
    *(undefined4 *)(lVar15 + 0x24) = uVar20;
    *(undefined4 *)(lVar15 + 0x28) = uVar23;
    puVar4 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    lVar13 = *unaff_x25;
    if (lVar13 == 0) break;
                    /* try { // try from 01bec714 to 01cec71b has its CatchHandler @ 01beccf4 */
    if (*(uint *)(lVar13 + 0x18) <= uVar17) goto c6__Equals;
                    /* try { // try from 01bec734 to 01cec747 has its CatchHandler @ 01becd04 */
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= (uint)unaff_x24) goto c6__Equals;
    lVar13 = lVar13 + unaff_x24 * 0xc;
    fVar26 = (float)unaff_d8;
    fVar29 = (float)((ulong)unaff_d8 >> 0x20);
    *(ulong *)(lVar13 + 0x20) =
         CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar13 + 0x20) >> 0x20),
                  fVar26 + (float)*(undefined8 *)(lVar13 + 0x20));
    *(float *)(lVar13 + 0x28) = unaff_s9 + *(float *)(lVar13 + 0x28);
    lVar13 = *unaff_x25;
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar17) goto c6__Equals;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= (uint)unaff_x27) goto c6__Equals;
    lVar13 = lVar13 + unaff_x27 * 0xc;
    *(ulong *)(lVar13 + 0x20) =
         CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar13 + 0x20) >> 0x20),
                  fVar26 + (float)*(undefined8 *)(lVar13 + 0x20));
    *(float *)(lVar13 + 0x28) = unaff_s9 + *(float *)(lVar13 + 0x28);
    lVar13 = *unaff_x25;
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar17) goto c6__Equals;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar14) goto c6__Equals;
    lVar13 = lVar13 + unaff_x23 * 0xc;
    *(ulong *)(lVar13 + 0x20) =
         CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar13 + 0x20) >> 0x20),
                  fVar26 + (float)*(undefined8 *)(lVar13 + 0x20));
    *(float *)(lVar13 + 0x28) = unaff_s9 + *(float *)(lVar13 + 0x28);
    lVar13 = *unaff_x25;
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar17) goto c6__Equals;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar18) goto c6__Equals;
    lVar13 = lVar13 + unaff_x26 * 0xc;
    *(ulong *)(lVar13 + 0x20) =
         CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar13 + 0x20) >> 0x20),
                  fVar26 + (float)*(undefined8 *)(lVar13 + 0x20));
    *(float *)(lVar13 + 0x28) = unaff_s9 + *(float *)(lVar13 + 0x28);
    lVar13 = in_stack_00000048;
    do {
      unaff_w22 = unaff_w22 + 1;
      if ((int)lVar13 < (int)unaff_w22) {
        do {
          lVar13 = *(long *)(in_stack_00000038 + 0x28);
          uStack0000000000000034 = uStack0000000000000034 + 1;
          if (uStack0000000000000034 == uStack0000000000000030) {
            if (lVar13 == 0) goto LAB_01bec90c;
            uVar16 = 0;
            lVar15 = 0x20;
            goto LAB_01bec878;
          }
          if ((lVar13 == 0) || (lVar15 = *(long *)(lVar13 + 0x50), lVar15 == 0)) goto LAB_01bec90c;
          if (*(uint *)(lVar15 + 0x18) <= uStack0000000000000034) goto c6__Equals;
          lVar11 = *(long *)(lVar13 + 0x38);
          if (lVar11 == 0) goto LAB_01bec90c;
          lVar15 = lVar15 + (long)(int)uStack0000000000000034 * 0x5c;
          unaff_w22 = *(uint *)(lVar15 + 0x34);
          if (*(uint *)(lVar11 + 0x18) <= unaff_w22) goto c6__Equals;
          uVar14 = *(uint *)(lVar15 + 0x3c);
          lVar13 = (long)(int)uVar14;
          if (*(uint *)(lVar11 + 0x18) <= uVar14) goto c6__Equals;
          lVar8 = lVar11 + 0x20 + (long)(int)unaff_w22 * 0x178;
          uVar6 = *(undefined8 *)(lVar8 + 0xfc);
          lVar15 = lVar11 + 0x20 + lVar13 * 0x178;
          uVar28 = *(undefined8 *)(lVar15 + 0x108);
          fVar29 = *(float *)(lVar15 + 0x110);
          fVar26 = *(float *)(lVar8 + 0x104);
          FUN_0391a0e8(0xbe800000,0x3e800000,0);
          FUN_03914564(0,0);
        } while ((int)uVar14 < (int)unaff_w22);
        in_stack_00000058 =
             CONCAT44(((float)((ulong)uVar6 >> 0x20) + (float)((ulong)uVar28 >> 0x20)) * 0.5,
                      ((float)uVar6 + (float)uVar28) * 0.5);
        in_stack_00000050._4_4_ = (fVar26 + fVar29) * 0.5;
        in_stack_00000048 = lVar13;
      }
      lVar15 = *(long *)(in_stack_00000038 + 0x28);
      if ((lVar15 == 0) || (lVar11 = *(long *)(lVar15 + 0x38), lVar11 == 0)) goto LAB_01bec90c;
      if (*(uint *)(lVar11 + 0x18) <= unaff_w22) goto c6__Equals;
    } while (*(char *)(lVar11 + (long)(int)unaff_w22 * 0x178 + 0x194) == '\0');
    lVar13 = *(long *)(lVar15 + 0x60);
    if (lVar13 == 0) break;
    lVar11 = lVar11 + (long)(int)unaff_w22 * 0x178;
    uVar14 = *(uint *)(lVar11 + 0x58);
    unaff_x21 = (long)(int)uVar14;
    if (*(uint *)(lVar13 + 0x18) <= uVar14) goto c6__Equals;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 0x50 + 0x30);
    if (lVar13 == 0) break;
    uVar17 = *(uint *)(lVar11 + 0x6c);
    unaff_x24 = (long)(int)uVar17;
    if ((*(uint *)(lVar13 + 0x18) <= uVar17) ||
       (uVar18 = uVar17 + 2, *(uint *)(lVar13 + 0x18) <= uVar18)) goto c6__Equals;
    unaff_x23 = (long)(int)uVar18;
    lVar11 = lVar13 + unaff_x24 * 0xc;
    lVar15 = lVar13 + unaff_x23 * 0xc;
    uVar6 = *(undefined8 *)(lVar11 + 0x20);
    fVar26 = *(float *)(lVar11 + 0x28);
    puVar9 = (undefined8 *)(lVar15 + 0x20);
    uVar28 = *puVar9;
    pfVar12 = (float *)(lVar15 + 0x28);
    lVar15 = *unaff_x25;
    if (lVar15 == 0) break;
    if (*(uint *)(lVar15 + 0x18) <= uVar14) goto c6__Equals;
    lVar15 = *(long *)(lVar15 + unaff_x21 * 8 + 0x20);
    if (lVar15 == 0) break;
    if (*(uint *)(lVar15 + 0x18) <= uVar17) goto c6__Equals;
    fVar29 = (float)uVar6;
    fVar21 = (float)((ulong)uVar6 >> 0x20);
    fVar24 = (fVar29 + (float)uVar28) * 0.5;
    fVar25 = (fVar21 + (float)((ulong)uVar28 >> 0x20)) * 0.5;
    fVar22 = (fVar26 + *pfVar12) * 0.5;
    lVar15 = lVar15 + unaff_x24 * 0xc;
    *(ulong *)(lVar15 + 0x20) = CONCAT44(fVar21 - fVar25,fVar29 - fVar24);
    *(float *)(lVar15 + 0x28) = fVar26 - fVar22;
    lVar15 = *unaff_x25;
    if (lVar15 == 0) break;
    if ((*(uint *)(lVar15 + 0x18) <= uVar14) ||
       (uVar1 = uVar17 + 1, *(uint *)(lVar13 + 0x18) <= uVar1)) goto c6__Equals;
    lVar15 = *(long *)(lVar15 + unaff_x21 * 8 + 0x20);
    if (lVar15 == 0) break;
    unaff_x27 = (long)(int)uVar1;
    if (*(uint *)(lVar15 + 0x18) <= uVar1) goto c6__Equals;
    lVar11 = lVar13 + unaff_x27 * 0xc;
    uVar6 = *(undefined8 *)(lVar11 + 0x20);
    fVar26 = *(float *)(lVar11 + 0x28);
    lVar15 = lVar15 + unaff_x27 * 0xc;
    *(ulong *)(lVar15 + 0x20) =
         CONCAT44((float)((ulong)uVar6 >> 0x20) - fVar25,(float)uVar6 - fVar24);
    *(float *)(lVar15 + 0x28) = fVar26 - fVar22;
    lVar15 = *unaff_x25;
    if (lVar15 == 0) break;
    if ((*(uint *)(lVar15 + 0x18) <= uVar14) || (*(uint *)(lVar13 + 0x18) <= uVar18))
    goto c6__Equals;
    lVar15 = *(long *)(lVar15 + unaff_x21 * 8 + 0x20);
    if (lVar15 == 0) break;
    if (*(uint *)(lVar15 + 0x18) <= uVar18) goto c6__Equals;
    uVar6 = *puVar9;
    fVar26 = *pfVar12;
    lVar15 = lVar15 + unaff_x23 * 0xc;
    *(ulong *)(lVar15 + 0x20) =
         CONCAT44((float)((ulong)uVar6 >> 0x20) - fVar25,(float)uVar6 - fVar24);
    *(float *)(lVar15 + 0x28) = fVar26 - fVar22;
    lVar15 = *unaff_x25;
    if (lVar15 == 0) break;
    if ((*(uint *)(lVar15 + 0x18) <= uVar14) ||
       (uVar2 = uVar17 + 3, *(uint *)(lVar13 + 0x18) <= uVar2)) goto c6__Equals;
    lVar15 = *(long *)(lVar15 + unaff_x21 * 8 + 0x20);
    if (lVar15 == 0) break;
    unaff_x26 = (long)(int)uVar2;
    if (*(uint *)(lVar15 + 0x18) <= uVar2) goto c6__Equals;
    lVar13 = lVar13 + unaff_x26 * 0xc;
    uVar6 = *(undefined8 *)(lVar13 + 0x20);
    fVar26 = *(float *)(lVar13 + 0x28);
    lVar15 = lVar15 + unaff_x26 * 0xc;
    *(ulong *)(lVar15 + 0x20) =
         CONCAT44((float)((ulong)uVar6 >> 0x20) - fVar25,(float)uVar6 - fVar24);
    *(float *)(lVar15 + 0x28) = fVar26 - fVar22;
    FUN_0391a0e8(uStack0000000000000044,uStack0000000000000040,0);
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(puVar4);
      DAT_03fed258 = '\x01';
    }
    puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
    lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
    uVar20 = *(undefined4 *)(lVar13 + 0xc);
    uVar19 = *(undefined4 *)(lVar13 + 0x10);
    uVar23 = *(undefined4 *)(lVar13 + 0x14);
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
      cVar7 = DAT_03fed258;
    }
    else {
      cVar7 = '\x01';
    }
    puVar10 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
    uVar27 = *puVar10;
    uVar30 = puVar10[1];
    uVar31 = puVar10[2];
    uVar32 = puVar10[3];
    if (cVar7 == '\0') {
      thunk_FUN_01ad9084(puVar4);
      DAT_03fed258 = '\x01';
    }
    FUN_03910ecc(&stack0x00000080,uVar20,uVar19,uVar23,uVar27,uVar30,uVar31,uVar32,0);
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f8 = in_stack_000000b8;
    in_stack_000000f0 = in_stack_000000b0;
    lVar13 = *unaff_x25;
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar14) goto c6__Equals;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar17) goto c6__Equals;
    lVar15 = lVar13 + unaff_x24 * 0xc;
    uVar20 = *(undefined4 *)(lVar15 + 0x24);
    uVar23 = *(undefined4 *)(lVar15 + 0x28);
    uVar19 = FUN_03911ddc(*(undefined4 *)(lVar15 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar13 + 0x18) <= uVar17) goto c6__Equals;
    *(undefined4 *)(lVar15 + 0x20) = uVar19;
    *(undefined4 *)(lVar15 + 0x24) = uVar20;
    *(undefined4 *)(lVar15 + 0x28) = uVar23;
    lVar13 = *unaff_x25;
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar14) goto c6__Equals;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar1) goto c6__Equals;
    lVar15 = lVar13 + unaff_x27 * 0xc;
    uVar20 = *(undefined4 *)(lVar15 + 0x24);
    uVar23 = *(undefined4 *)(lVar15 + 0x28);
    uVar19 = FUN_03911ddc(*(undefined4 *)(lVar15 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar13 + 0x18) <= uVar1) goto c6__Equals;
    *(undefined4 *)(lVar15 + 0x20) = uVar19;
    *(undefined4 *)(lVar15 + 0x24) = uVar20;
    *(undefined4 *)(lVar15 + 0x28) = uVar23;
    lVar13 = *unaff_x25;
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar14) goto c6__Equals;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar18) goto c6__Equals;
    lVar15 = lVar13 + unaff_x23 * 0xc;
    uVar20 = *(undefined4 *)(lVar15 + 0x24);
    uVar23 = *(undefined4 *)(lVar15 + 0x28);
    uVar19 = FUN_03911ddc(*(undefined4 *)(lVar15 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar13 + 0x18) <= uVar18) goto c6__Equals;
    *(undefined4 *)(lVar15 + 0x20) = uVar19;
    *(undefined4 *)(lVar15 + 0x24) = uVar20;
    *(undefined4 *)(lVar15 + 0x28) = uVar23;
    lVar13 = *unaff_x25;
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar14) goto c6__Equals;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar2) goto c6__Equals;
    lVar15 = lVar13 + unaff_x26 * 0xc;
    uVar20 = *(undefined4 *)(lVar15 + 0x24);
    uVar23 = *(undefined4 *)(lVar15 + 0x28);
    uVar19 = FUN_03911ddc(*(undefined4 *)(lVar15 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar13 + 0x18) <= uVar2) goto c6__Equals;
    *(undefined4 *)(lVar15 + 0x20) = uVar19;
    *(undefined4 *)(lVar15 + 0x24) = uVar20;
    *(undefined4 *)(lVar15 + 0x28) = uVar23;
    puVar4 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    lVar13 = *unaff_x25;
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar14) goto c6__Equals;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar17) goto c6__Equals;
    lVar13 = lVar13 + unaff_x24 * 0xc;
    *(ulong *)(lVar13 + 0x20) =
         CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar13 + 0x20) >> 0x20),
                  fVar24 + (float)*(undefined8 *)(lVar13 + 0x20));
    *(float *)(lVar13 + 0x28) = fVar22 + *(float *)(lVar13 + 0x28);
    lVar13 = *unaff_x25;
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar14) goto c6__Equals;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar1) goto c6__Equals;
    lVar13 = lVar13 + unaff_x27 * 0xc;
    *(ulong *)(lVar13 + 0x20) =
         CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar13 + 0x20) >> 0x20),
                  fVar24 + (float)*(undefined8 *)(lVar13 + 0x20));
    *(float *)(lVar13 + 0x28) = fVar22 + *(float *)(lVar13 + 0x28);
    lVar13 = *unaff_x25;
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar14) goto c6__Equals;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar18) goto c6__Equals;
    lVar13 = lVar13 + unaff_x23 * 0xc;
    *(ulong *)(lVar13 + 0x20) =
         CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar13 + 0x20) >> 0x20),
                  fVar24 + (float)*(undefined8 *)(lVar13 + 0x20));
    *(float *)(lVar13 + 0x28) = fVar22 + *(float *)(lVar13 + 0x28);
    lVar13 = *unaff_x25;
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar14) goto c6__Equals;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar2) goto c6__Equals;
    lVar13 = lVar13 + unaff_x26 * 0xc;
    *(ulong *)(lVar13 + 0x20) =
         CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar13 + 0x20) >> 0x20),
                  fVar24 + (float)*(undefined8 *)(lVar13 + 0x20));
    *(float *)(lVar13 + 0x28) = fVar22 + *(float *)(lVar13 + 0x28);
    lVar13 = *unaff_x25;
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar14) goto c6__Equals;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar17) goto c6__Equals;
    lVar13 = lVar13 + unaff_x24 * 0xc;
    fVar26 = (float)in_stack_00000058;
    fVar29 = (float)((ulong)in_stack_00000058 >> 0x20);
    *(ulong *)(lVar13 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + 0x20) >> 0x20) - fVar29,
                  (float)*(undefined8 *)(lVar13 + 0x20) - fVar26);
    *(float *)(lVar13 + 0x28) = *(float *)(lVar13 + 0x28) - in_stack_00000050._4_4_;
    lVar13 = *unaff_x25;
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar14) goto c6__Equals;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar1) goto c6__Equals;
    lVar13 = lVar13 + unaff_x27 * 0xc;
    *(ulong *)(lVar13 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + 0x20) >> 0x20) - fVar29,
                  (float)*(undefined8 *)(lVar13 + 0x20) - fVar26);
    *(float *)(lVar13 + 0x28) = *(float *)(lVar13 + 0x28) - in_stack_00000050._4_4_;
    lVar13 = *unaff_x25;
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar14) goto c6__Equals;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar18) goto c6__Equals;
    lVar13 = lVar13 + unaff_x23 * 0xc;
    *(ulong *)(lVar13 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + 0x20) >> 0x20) - fVar29,
                  (float)*(undefined8 *)(lVar13 + 0x20) - fVar26);
    *(float *)(lVar13 + 0x28) = *(float *)(lVar13 + 0x28) - in_stack_00000050._4_4_;
    lVar13 = *unaff_x25;
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar14) goto c6__Equals;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar2) goto c6__Equals;
    lVar13 = lVar13 + unaff_x26 * 0xc;
    *(ulong *)(lVar13 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + 0x20) >> 0x20) - fVar29,
                  (float)*(undefined8 *)(lVar13 + 0x20) - fVar26);
    *(float *)(lVar13 + 0x28) = *(float *)(lVar13 + 0x28) - in_stack_00000050._4_4_;
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(puVar4);
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
    lVar13 = *unaff_x25;
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar14) goto c6__Equals;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar17) goto c6__Equals;
    lVar15 = lVar13 + unaff_x24 * 0xc;
    uVar20 = *(undefined4 *)(lVar15 + 0x24);
    uVar23 = *(undefined4 *)(lVar15 + 0x28);
    uVar19 = FUN_03911ddc(*(undefined4 *)(lVar15 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar13 + 0x18) <= uVar17) goto c6__Equals;
    *(undefined4 *)(lVar15 + 0x20) = uVar19;
    *(undefined4 *)(lVar15 + 0x24) = uVar20;
    *(undefined4 *)(lVar15 + 0x28) = uVar23;
    lVar13 = *unaff_x25;
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar14) goto c6__Equals;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar1) goto c6__Equals;
    lVar15 = lVar13 + unaff_x27 * 0xc;
    uVar20 = *(undefined4 *)(lVar15 + 0x24);
    uVar23 = *(undefined4 *)(lVar15 + 0x28);
    uVar19 = FUN_03911ddc(*(undefined4 *)(lVar15 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar13 + 0x18) <= uVar1) goto c6__Equals;
    *(undefined4 *)(lVar15 + 0x20) = uVar19;
    *(undefined4 *)(lVar15 + 0x24) = uVar20;
    *(undefined4 *)(lVar15 + 0x28) = uVar23;
    param_1 = *unaff_x25;
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= uVar14) goto c6__Equals;
    unaff_d8 = in_stack_00000058;
    unaff_s9 = in_stack_00000050._4_4_;
  }
LAB_01bec90c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
LAB_01bec878:
  lVar13 = *(long *)(lVar13 + 0x60);
  if (lVar13 == 0) goto LAB_01bec90c;
  uVar14 = (uint)uVar16;
  if ((int)*(uint *)(lVar13 + 0x18) <= (int)uVar14) {
    uVar6 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                              );
    FUN_03924d70(DAT_00b55290,uVar6,0);
    *(undefined8 *)(in_stack_00000038 + 0x18) = uVar6;
    thunk_FUN_01b4f09c((undefined8 *)(in_stack_00000038 + 0x18),uVar6);
    *(undefined4 *)(in_stack_00000038 + 0x10) = 2;
    return 1;
  }
  if (*(uint *)(lVar13 + 0x18) <= uVar14) {
c6__Equals:
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
  lVar11 = *(long *)(in_stack_00000038 + 0x30);
  if (lVar11 == 0) goto LAB_01bec90c;
  if (*(uint *)(lVar11 + 0x18) <= uVar14) goto c6__Equals;
  if (*(long *)(lVar13 + lVar15) == 0) goto LAB_01bec90c;
  FUN_0390262c(*(long *)(lVar13 + lVar15),*(undefined8 *)(lVar11 + uVar16 * 8 + 0x20),0);
  if ((*(long *)(in_stack_00000038 + 0x28) == 0) ||
     (lVar13 = *(long *)(*(long *)(in_stack_00000038 + 0x28) + 0x60), lVar13 == 0))
  goto LAB_01bec90c;
  if (*(uint *)(lVar13 + 0x18) <= uVar14) goto c6__Equals;
  plVar5 = *(long **)(in_stack_00000020 + 0x30);
  if (plVar5 == (long *)0x0) goto LAB_01bec90c;
  (**(code **)(*plVar5 + 0x7e8))
            (plVar5,*(undefined8 *)(lVar13 + lVar15),uVar16 & 0xffffffff,
             *(undefined8 *)(*plVar5 + 0x7f0));
  lVar13 = *(long *)(in_stack_00000038 + 0x28);
  uVar16 = uVar16 + 1;
  lVar15 = lVar15 + 0x50;
  if (lVar13 == 0) goto LAB_01bec90c;
  goto LAB_01bec878;
}


