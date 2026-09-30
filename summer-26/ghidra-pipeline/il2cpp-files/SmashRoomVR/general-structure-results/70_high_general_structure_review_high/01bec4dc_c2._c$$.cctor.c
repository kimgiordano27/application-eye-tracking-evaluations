/*
FUNCTION_NAME: c2.<>c$$.cctor
ENTRY_POINT: 01bec4dc
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


undefined8 c2_<>c___cctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  char cVar5;
  long lVar6;
  uint in_w9;
  long lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  float *pfVar11;
  long in_x10;
  undefined *unaff_x19;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  long unaff_x21;
  uint unaff_w22;
  uint uVar16;
  long unaff_x23;
  uint uVar17;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  uint uVar18;
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
  
  while (uVar12 = (uint)unaff_x26, uVar12 < in_w9) {
    param_1 = param_1 + unaff_x26 * in_x10;
    fVar26 = (float)unaff_d8;
    fVar29 = (float)((ulong)unaff_d8 >> 0x20);
                    /* catch() { ... } // from try @ 01bec414 with catch @ 01bec4f8 */
    *(ulong *)(param_1 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) - fVar29,
                  (float)*(undefined8 *)(param_1 + 0x20) - fVar26);
                    /* catch() { ... } // from try @ 01bec428 with catch @ 01bec4fc
                       catch() { ... } // from try @ 01bec4c8 with catch @ 01bec4fc */
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) - unaff_s9;
                    /* catch() { ... } // from try @ 01bec4ac with catch @ 01bec500 */
                    /* catch() { ... } // from try @ 01bec448 with catch @ 01bec504 */
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(unaff_x19);
                    /* catch() { ... } // from try @ 01becbec with catch @ 01bec518 */
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
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    uVar15 = (uint)unaff_x21;
    if (*(uint *)(lVar6 + 0x18) <= uVar15) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    uVar17 = (uint)unaff_x24;
    if (*(uint *)(lVar6 + 0x18) <= uVar17) break;
    lVar13 = lVar6 + unaff_x24 * 0xc;
    uVar20 = *(undefined4 *)(lVar13 + 0x24);
    uVar23 = *(undefined4 *)(lVar13 + 0x28);
    uVar19 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar6 + 0x18) <= uVar17) break;
    *(undefined4 *)(lVar13 + 0x20) = uVar19;
    *(undefined4 *)(lVar13 + 0x24) = uVar20;
    *(undefined4 *)(lVar13 + 0x28) = uVar23;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar15) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    uVar18 = (uint)unaff_x27;
    if (*(uint *)(lVar6 + 0x18) <= uVar18) break;
    lVar13 = lVar6 + unaff_x27 * 0xc;
    uVar20 = *(undefined4 *)(lVar13 + 0x24);
    uVar23 = *(undefined4 *)(lVar13 + 0x28);
    uVar19 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar6 + 0x18) <= uVar18) break;
    *(undefined4 *)(lVar13 + 0x20) = uVar19;
    *(undefined4 *)(lVar13 + 0x24) = uVar20;
    *(undefined4 *)(lVar13 + 0x28) = uVar23;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar15) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    uVar16 = (uint)unaff_x23;
    if (*(uint *)(lVar6 + 0x18) <= uVar16) break;
    lVar13 = lVar6 + unaff_x23 * 0xc;
    uVar20 = *(undefined4 *)(lVar13 + 0x24);
    uVar23 = *(undefined4 *)(lVar13 + 0x28);
    uVar19 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar6 + 0x18) <= uVar16) break;
    *(undefined4 *)(lVar13 + 0x20) = uVar19;
    *(undefined4 *)(lVar13 + 0x24) = uVar20;
    *(undefined4 *)(lVar13 + 0x28) = uVar23;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar15) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) break;
    lVar13 = lVar6 + unaff_x26 * 0xc;
    uVar20 = *(undefined4 *)(lVar13 + 0x24);
    uVar23 = *(undefined4 *)(lVar13 + 0x28);
    uVar19 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar6 + 0x18) <= uVar12) break;
    *(undefined4 *)(lVar13 + 0x20) = uVar19;
    *(undefined4 *)(lVar13 + 0x24) = uVar20;
    *(undefined4 *)(lVar13 + 0x28) = uVar23;
    puVar2 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar15) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar17) break;
    lVar6 = lVar6 + unaff_x24 * 0xc;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20),
                  fVar26 + (float)*(undefined8 *)(lVar6 + 0x20));
    *(float *)(lVar6 + 0x28) = unaff_s9 + *(float *)(lVar6 + 0x28);
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar15) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar18) break;
    lVar6 = lVar6 + unaff_x27 * 0xc;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20),
                  fVar26 + (float)*(undefined8 *)(lVar6 + 0x20));
    *(float *)(lVar6 + 0x28) = unaff_s9 + *(float *)(lVar6 + 0x28);
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar15) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar16) break;
    lVar6 = lVar6 + unaff_x23 * 0xc;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20),
                  fVar26 + (float)*(undefined8 *)(lVar6 + 0x20));
    *(float *)(lVar6 + 0x28) = unaff_s9 + *(float *)(lVar6 + 0x28);
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar15) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) break;
    lVar6 = lVar6 + unaff_x26 * 0xc;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20),
                  fVar26 + (float)*(undefined8 *)(lVar6 + 0x20));
    *(float *)(lVar6 + 0x28) = unaff_s9 + *(float *)(lVar6 + 0x28);
    lVar6 = in_stack_00000048;
    do {
      unaff_w22 = unaff_w22 + 1;
      if ((int)lVar6 < (int)unaff_w22) {
        do {
          lVar6 = *(long *)(in_stack_00000038 + 0x28);
          uStack0000000000000034 = uStack0000000000000034 + 1;
          if (uStack0000000000000034 == uStack0000000000000030) {
            if (lVar6 == 0) goto LAB_01bec90c;
            uVar14 = 0;
            lVar13 = 0x20;
            goto LAB_01bec878;
          }
          if ((lVar6 == 0) || (lVar13 = *(long *)(lVar6 + 0x50), lVar13 == 0)) goto LAB_01bec90c;
          if (*(uint *)(lVar13 + 0x18) <= uStack0000000000000034) goto c6__Equals;
          lVar10 = *(long *)(lVar6 + 0x38);
          if (lVar10 == 0) goto LAB_01bec90c;
          lVar13 = lVar13 + (long)(int)uStack0000000000000034 * 0x5c;
          unaff_w22 = *(uint *)(lVar13 + 0x34);
          if (*(uint *)(lVar10 + 0x18) <= unaff_w22) goto c6__Equals;
          uVar12 = *(uint *)(lVar13 + 0x3c);
          lVar6 = (long)(int)uVar12;
          if (*(uint *)(lVar10 + 0x18) <= uVar12) goto c6__Equals;
          lVar7 = lVar10 + 0x20 + (long)(int)unaff_w22 * 0x178;
          uVar4 = *(undefined8 *)(lVar7 + 0xfc);
          lVar13 = lVar10 + 0x20 + lVar6 * 0x178;
          uVar28 = *(undefined8 *)(lVar13 + 0x108);
          fVar29 = *(float *)(lVar13 + 0x110);
          fVar26 = *(float *)(lVar7 + 0x104);
          FUN_0391a0e8(0xbe800000,0x3e800000,0);
          FUN_03914564(0,0);
        } while ((int)uVar12 < (int)unaff_w22);
        in_stack_00000058 =
             CONCAT44(((float)((ulong)uVar4 >> 0x20) + (float)((ulong)uVar28 >> 0x20)) * 0.5,
                      ((float)uVar4 + (float)uVar28) * 0.5);
        in_stack_00000050._4_4_ = (fVar26 + fVar29) * 0.5;
        in_stack_00000048 = lVar6;
      }
      lVar13 = *(long *)(in_stack_00000038 + 0x28);
      if ((lVar13 == 0) || (lVar10 = *(long *)(lVar13 + 0x38), lVar10 == 0)) goto LAB_01bec90c;
      if (*(uint *)(lVar10 + 0x18) <= unaff_w22) goto c6__Equals;
    } while (*(char *)(lVar10 + (long)(int)unaff_w22 * 0x178 + 0x194) == '\0');
    lVar6 = *(long *)(lVar13 + 0x60);
    if (lVar6 == 0) goto LAB_01bec90c;
    lVar10 = lVar10 + (long)(int)unaff_w22 * 0x178;
    uVar12 = *(uint *)(lVar10 + 0x58);
    unaff_x21 = (long)(int)uVar12;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 0x50 + 0x30);
    if (lVar6 == 0) goto LAB_01bec90c;
    uVar15 = *(uint *)(lVar10 + 0x6c);
    unaff_x24 = (long)(int)uVar15;
    if ((*(uint *)(lVar6 + 0x18) <= uVar15) ||
       (uVar17 = uVar15 + 2, *(uint *)(lVar6 + 0x18) <= uVar17)) break;
    unaff_x23 = (long)(int)uVar17;
    lVar10 = lVar6 + unaff_x24 * 0xc;
    lVar13 = lVar6 + unaff_x23 * 0xc;
    uVar4 = *(undefined8 *)(lVar10 + 0x20);
    fVar26 = *(float *)(lVar10 + 0x28);
    puVar8 = (undefined8 *)(lVar13 + 0x20);
    uVar28 = *puVar8;
    pfVar11 = (float *)(lVar13 + 0x28);
    lVar13 = *unaff_x25;
    if (lVar13 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar13 + 0x18) <= uVar12) break;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar13 + 0x18) <= uVar15) break;
    fVar29 = (float)uVar4;
    fVar21 = (float)((ulong)uVar4 >> 0x20);
    fVar24 = (fVar29 + (float)uVar28) * 0.5;
    fVar25 = (fVar21 + (float)((ulong)uVar28 >> 0x20)) * 0.5;
    fVar22 = (fVar26 + *pfVar11) * 0.5;
    lVar13 = lVar13 + unaff_x24 * 0xc;
    *(ulong *)(lVar13 + 0x20) = CONCAT44(fVar21 - fVar25,fVar29 - fVar24);
    *(float *)(lVar13 + 0x28) = fVar26 - fVar22;
    lVar13 = *unaff_x25;
    if (lVar13 == 0) goto LAB_01bec90c;
    if ((*(uint *)(lVar13 + 0x18) <= uVar12) ||
       (uVar18 = uVar15 + 1, *(uint *)(lVar6 + 0x18) <= uVar18)) break;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) goto LAB_01bec90c;
    unaff_x27 = (long)(int)uVar18;
    if (*(uint *)(lVar13 + 0x18) <= uVar18) break;
    lVar10 = lVar6 + unaff_x27 * 0xc;
    uVar4 = *(undefined8 *)(lVar10 + 0x20);
    fVar26 = *(float *)(lVar10 + 0x28);
    lVar13 = lVar13 + unaff_x27 * 0xc;
    *(ulong *)(lVar13 + 0x20) =
         CONCAT44((float)((ulong)uVar4 >> 0x20) - fVar25,(float)uVar4 - fVar24);
    *(float *)(lVar13 + 0x28) = fVar26 - fVar22;
    lVar13 = *unaff_x25;
    if (lVar13 == 0) goto LAB_01bec90c;
    if ((*(uint *)(lVar13 + 0x18) <= uVar12) || (*(uint *)(lVar6 + 0x18) <= uVar17)) break;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar13 + 0x18) <= uVar17) break;
    uVar4 = *puVar8;
    fVar26 = *pfVar11;
    lVar13 = lVar13 + unaff_x23 * 0xc;
    *(ulong *)(lVar13 + 0x20) =
         CONCAT44((float)((ulong)uVar4 >> 0x20) - fVar25,(float)uVar4 - fVar24);
    *(float *)(lVar13 + 0x28) = fVar26 - fVar22;
    lVar13 = *unaff_x25;
    if (lVar13 == 0) goto LAB_01bec90c;
    if ((*(uint *)(lVar13 + 0x18) <= uVar12) ||
       (uVar16 = uVar15 + 3, *(uint *)(lVar6 + 0x18) <= uVar16)) break;
    lVar13 = *(long *)(lVar13 + unaff_x21 * 8 + 0x20);
    if (lVar13 == 0) goto LAB_01bec90c;
    unaff_x26 = (long)(int)uVar16;
    if (*(uint *)(lVar13 + 0x18) <= uVar16) break;
    lVar6 = lVar6 + unaff_x26 * 0xc;
    uVar4 = *(undefined8 *)(lVar6 + 0x20);
    fVar26 = *(float *)(lVar6 + 0x28);
    lVar13 = lVar13 + unaff_x26 * 0xc;
    *(ulong *)(lVar13 + 0x20) =
         CONCAT44((float)((ulong)uVar4 >> 0x20) - fVar25,(float)uVar4 - fVar24);
    *(float *)(lVar13 + 0x28) = fVar26 - fVar22;
    FUN_0391a0e8(uStack0000000000000044,uStack0000000000000040,0);
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(puVar2);
      DAT_03fed258 = '\x01';
    }
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
    lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
    uVar20 = *(undefined4 *)(lVar6 + 0xc);
    uVar19 = *(undefined4 *)(lVar6 + 0x10);
    uVar23 = *(undefined4 *)(lVar6 + 0x14);
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
      cVar5 = DAT_03fed258;
    }
    else {
      cVar5 = '\x01';
    }
    puVar9 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
    uVar27 = *puVar9;
    uVar30 = puVar9[1];
    uVar31 = puVar9[2];
    uVar32 = puVar9[3];
    if (cVar5 == '\0') {
      thunk_FUN_01ad9084(puVar2);
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
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar15) break;
    lVar13 = lVar6 + unaff_x24 * 0xc;
    uVar20 = *(undefined4 *)(lVar13 + 0x24);
    uVar23 = *(undefined4 *)(lVar13 + 0x28);
    uVar19 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar6 + 0x18) <= uVar15) break;
    *(undefined4 *)(lVar13 + 0x20) = uVar19;
    *(undefined4 *)(lVar13 + 0x24) = uVar20;
    *(undefined4 *)(lVar13 + 0x28) = uVar23;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar18) break;
    lVar13 = lVar6 + unaff_x27 * 0xc;
    uVar20 = *(undefined4 *)(lVar13 + 0x24);
    uVar23 = *(undefined4 *)(lVar13 + 0x28);
    uVar19 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar6 + 0x18) <= uVar18) break;
    *(undefined4 *)(lVar13 + 0x20) = uVar19;
    *(undefined4 *)(lVar13 + 0x24) = uVar20;
    *(undefined4 *)(lVar13 + 0x28) = uVar23;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar17) break;
    lVar13 = lVar6 + unaff_x23 * 0xc;
    uVar20 = *(undefined4 *)(lVar13 + 0x24);
    uVar23 = *(undefined4 *)(lVar13 + 0x28);
    uVar19 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar6 + 0x18) <= uVar17) break;
    *(undefined4 *)(lVar13 + 0x20) = uVar19;
    *(undefined4 *)(lVar13 + 0x24) = uVar20;
    *(undefined4 *)(lVar13 + 0x28) = uVar23;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar16) break;
    lVar13 = lVar6 + unaff_x26 * 0xc;
    uVar20 = *(undefined4 *)(lVar13 + 0x24);
    uVar23 = *(undefined4 *)(lVar13 + 0x28);
    uVar19 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar6 + 0x18) <= uVar16) break;
    *(undefined4 *)(lVar13 + 0x20) = uVar19;
    *(undefined4 *)(lVar13 + 0x24) = uVar20;
    *(undefined4 *)(lVar13 + 0x28) = uVar23;
    unaff_x19 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    in_x10 = 0xc;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar15) break;
    lVar6 = lVar6 + unaff_x24 * 0xc;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20),
                  fVar24 + (float)*(undefined8 *)(lVar6 + 0x20));
    *(float *)(lVar6 + 0x28) = fVar22 + *(float *)(lVar6 + 0x28);
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar18) break;
    lVar6 = lVar6 + unaff_x27 * 0xc;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20),
                  fVar24 + (float)*(undefined8 *)(lVar6 + 0x20));
    *(float *)(lVar6 + 0x28) = fVar22 + *(float *)(lVar6 + 0x28);
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar17) break;
    lVar6 = lVar6 + unaff_x23 * 0xc;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20),
                  fVar24 + (float)*(undefined8 *)(lVar6 + 0x20));
    *(float *)(lVar6 + 0x28) = fVar22 + *(float *)(lVar6 + 0x28);
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar16) break;
    lVar6 = lVar6 + unaff_x26 * 0xc;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20),
                  fVar24 + (float)*(undefined8 *)(lVar6 + 0x20));
    *(float *)(lVar6 + 0x28) = fVar22 + *(float *)(lVar6 + 0x28);
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar15) break;
    lVar6 = lVar6 + unaff_x24 * 0xc;
    fVar26 = (float)in_stack_00000058;
    fVar29 = (float)((ulong)in_stack_00000058 >> 0x20);
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20) - fVar29,
                  (float)*(undefined8 *)(lVar6 + 0x20) - fVar26);
    *(float *)(lVar6 + 0x28) = *(float *)(lVar6 + 0x28) - in_stack_00000050._4_4_;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar18) break;
    lVar6 = lVar6 + unaff_x27 * 0xc;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20) - fVar29,
                  (float)*(undefined8 *)(lVar6 + 0x20) - fVar26);
    *(float *)(lVar6 + 0x28) = *(float *)(lVar6 + 0x28) - in_stack_00000050._4_4_;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar17) break;
    lVar6 = lVar6 + unaff_x23 * 0xc;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20) - fVar29,
                  (float)*(undefined8 *)(lVar6 + 0x20) - fVar26);
    *(float *)(lVar6 + 0x28) = *(float *)(lVar6 + 0x28) - in_stack_00000050._4_4_;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) break;
    param_1 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (param_1 == 0) goto LAB_01bec90c;
    unaff_d8 = in_stack_00000058;
    unaff_s9 = in_stack_00000050._4_4_;
    in_w9 = *(uint *)(param_1 + 0x18);
  }
c6__Equals:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
LAB_01bec878:
  lVar6 = *(long *)(lVar6 + 0x60);
  if (lVar6 == 0) {
LAB_01bec90c:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar12 = (uint)uVar14;
  if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar12) {
    uVar4 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                              );
    FUN_03924d70(DAT_00b55290,uVar4,0);
    *(undefined8 *)(in_stack_00000038 + 0x18) = uVar4;
    thunk_FUN_01b4f09c((undefined8 *)(in_stack_00000038 + 0x18),uVar4);
    *(undefined4 *)(in_stack_00000038 + 0x10) = 2;
    return 1;
  }
  if (*(uint *)(lVar6 + 0x18) <= uVar12) goto c6__Equals;
  lVar10 = *(long *)(in_stack_00000038 + 0x30);
  if (lVar10 == 0) goto LAB_01bec90c;
  if (*(uint *)(lVar10 + 0x18) <= uVar12) goto c6__Equals;
  if (*(long *)(lVar6 + lVar13) == 0) goto LAB_01bec90c;
  FUN_0390262c(*(long *)(lVar6 + lVar13),*(undefined8 *)(lVar10 + uVar14 * 8 + 0x20),0);
  if ((*(long *)(in_stack_00000038 + 0x28) == 0) ||
     (lVar6 = *(long *)(*(long *)(in_stack_00000038 + 0x28) + 0x60), lVar6 == 0)) goto LAB_01bec90c;
  if (*(uint *)(lVar6 + 0x18) <= uVar12) goto c6__Equals;
  plVar3 = *(long **)(in_stack_00000020 + 0x30);
  if (plVar3 == (long *)0x0) goto LAB_01bec90c;
  (**(code **)(*plVar3 + 0x7e8))
            (plVar3,*(undefined8 *)(lVar6 + lVar13),uVar14 & 0xffffffff,
             *(undefined8 *)(*plVar3 + 0x7f0));
  lVar6 = *(long *)(in_stack_00000038 + 0x28);
  uVar14 = uVar14 + 1;
  lVar13 = lVar13 + 0x50;
  if (lVar6 == 0) goto LAB_01bec90c;
  goto LAB_01bec878;
}


