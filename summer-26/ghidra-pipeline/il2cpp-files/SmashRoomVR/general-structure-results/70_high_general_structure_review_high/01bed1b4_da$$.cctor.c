/*
FUNCTION_NAME: da$$.cctor
ENTRY_POINT: 01bed1b4
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


undefined8 da___cctor(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  long in_x9;
  long lVar13;
  long lVar14;
  undefined8 *in_x10;
  long lVar15;
  uint in_w11;
  uint uVar16;
  long lVar17;
  uint uVar18;
  long in_x12;
  uint uVar19;
  long in_x13;
  long in_x14;
  float *pfVar20;
  long unaff_x20;
  float *pfVar21;
  uint uVar22;
  long unaff_x22;
  float *pfVar23;
  undefined8 *puVar24;
  long unaff_x25;
  float *unaff_x26;
  undefined8 *unaff_x27;
  float *pfVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined8 unaff_d13;
  float unaff_s14;
  ulong in_stack_00000020;
  ulong in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000060;
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
  long in_stack_00000108;
  
  while (uVar19 = (uint)in_x13, uVar19 < in_w11) {
    lVar17 = in_x9 + in_x13 * 0xc;
    uVar28 = *(undefined8 *)(lVar17 + 0x20);
    fVar30 = *(float *)(lVar17 + 0x28);
    lVar17 = unaff_x25 + in_x13 * 0xc;
    fVar29 = (float)param_3;
    fVar32 = (float)((ulong)param_3 >> 0x20);
    puVar24 = (undefined8 *)(lVar17 + 0x20);
    *puVar24 = CONCAT44((float)((ulong)uVar28 >> 0x20) - fVar32,(float)uVar28 - fVar29);
    pfVar23 = (float *)(lVar17 + 0x28);
    *pfVar23 = fVar30;
    uVar18 = (uint)in_x12;
    if ((*(uint *)(in_x9 + 0x18) <= uVar18) || (*(uint *)(unaff_x25 + 0x18) <= uVar18)) break;
    fVar30 = *(float *)(in_x10 + 1);
                    /* try { // try from 01bed208 to 01ced20b has its CatchHandler @ 01bed9d4 */
    lVar26 = unaff_x25 + in_x12 * in_x14;
                    /* try { // try from 01bed20c to 01ced24f has its CatchHandler @ 01becd24 */
    puVar27 = (undefined8 *)(lVar26 + 0x20);
    *puVar27 = CONCAT44((float)((ulong)*in_x10 >> 0x20) - fVar32,(float)*in_x10 - fVar29);
    pfVar20 = (float *)(lVar26 + 0x28);
    *pfVar20 = fVar30;
    uVar22 = (uint)unaff_x22;
    uVar1 = uVar22 + 3;
    if (*(uint *)(in_x9 + 0x18) <= uVar1) break;
    lVar10 = (long)(int)uVar1;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar1) break;
    lVar14 = in_x9 + lVar10 * 0xc;
    uVar28 = *(undefined8 *)(lVar14 + 0x20);
    fVar30 = *(float *)(lVar14 + 0x28);
    lVar14 = unaff_x25 + lVar10 * 0xc;
    pfVar21 = (float *)(lVar14 + 0x20);
    *(ulong *)pfVar21 = CONCAT44((float)((ulong)uVar28 >> 0x20) - fVar32,(float)uVar28 - fVar29);
    pfVar25 = (float *)(lVar14 + 0x28);
    *pfVar25 = fVar30;
    uVar28 = FUN_0391a0e8(0x3f800000,0x3fc00000,0);
    lVar11 = *(long *)(in_stack_00000108 + 0x28);
    if ((lVar11 == 0) || (lVar8 = *(long *)(lVar11 + 0x10), lVar8 == 0)) goto LAB_01bed9b8;
    lVar13 = *(long *)(lVar8 + 0x10);
    lVar15 = *(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_62__;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar13 == 0) goto LAB_01bed9b8;
    uVar16 = *(uint *)(lVar8 + 0x18);
    if (uVar16 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar16 + 1;
      *(int *)(lVar13 + (long)(int)uVar16 * 4 + 0x20) = (int)uVar28;
    }
    else {
      FUN_02b9f3a0(uVar28,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      lVar11 = *(long *)(in_stack_00000108 + 0x28);
      if (lVar11 == 0) goto LAB_01bed9b8;
    }
    if ((*(long *)(lVar11 + 0x10) == 0) || (lVar8 = *(long *)(in_stack_00000108 + 0x40), lVar8 == 0)
       ) goto LAB_01bed9b8;
    iVar3 = *(int *)(*(long *)(lVar11 + 0x10) + 0x18);
    lVar11 = *(long *)(lVar8 + 0x10);
    lVar13 = *(long *)
              Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_01bed9b8;
    uVar16 = *(uint *)(lVar8 + 0x18);
    iVar3 = iVar3 + -1;
    if (uVar16 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar16 + 1;
      *(int *)(lVar11 + (long)(int)uVar16 * 4 + 0x20) = iVar3;
    }
    else {
      FUN_02b2c8dc(lVar8,iVar3,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    puVar12 = *(undefined4 **)
               (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
               0xb8);
    uVar38 = *puVar12;
    uVar37 = puVar12[1];
    uVar36 = puVar12[2];
    uVar35 = puVar12[3];
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed258 = '\x01';
    }
    FUN_03910ecc(&stack0x00000080,0,0,0,uVar38,uVar37,uVar36,uVar35,0);
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f8 = in_stack_000000b8;
    in_stack_000000f0 = in_stack_000000b0;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar22) break;
    uVar36 = *(undefined4 *)((long)unaff_x27 + 4);
    fVar30 = *unaff_x26;
    uVar35 = FUN_03911ddc(*(undefined4 *)unaff_x27,&stack0x000000c0,0);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar22) break;
    *(undefined4 *)unaff_x27 = uVar35;
    *(undefined4 *)((long)unaff_x27 + 4) = uVar36;
    *unaff_x26 = fVar30;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar19) break;
    uVar36 = *(undefined4 *)(lVar17 + 0x24);
    fVar30 = *pfVar23;
    uVar35 = FUN_03911ddc(*(undefined4 *)puVar24,&stack0x000000c0,0);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar19) break;
    *(undefined4 *)puVar24 = uVar35;
    *(undefined4 *)(lVar17 + 0x24) = uVar36;
    *pfVar23 = fVar30;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar18) break;
    uVar36 = *(undefined4 *)(lVar26 + 0x24);
    fVar30 = *pfVar20;
    uVar35 = FUN_03911ddc(*(undefined4 *)puVar27,&stack0x000000c0,0);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar18) break;
    *(undefined4 *)puVar27 = uVar35;
    *(undefined4 *)(lVar26 + 0x24) = uVar36;
    *pfVar20 = fVar30;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar1) break;
    pfVar2 = (float *)(lVar14 + 0x24);
    fVar31 = *pfVar2;
    fVar33 = *pfVar25;
    fVar30 = (float)FUN_03911ddc(*pfVar21,&stack0x000000c0,0);
    lVar17 = in_stack_00000108;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar1) break;
    *pfVar21 = fVar30;
    *pfVar2 = fVar31;
    *pfVar25 = fVar33;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar22) break;
    fVar34 = *unaff_x26;
    *unaff_x27 = CONCAT44(fVar32 + (float)((ulong)*unaff_x27 >> 0x20),fVar29 + (float)*unaff_x27);
    *unaff_x26 = fVar34 + unaff_s14;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar19) break;
    *puVar24 = CONCAT44(fVar32 + (float)((ulong)*puVar24 >> 0x20),fVar29 + (float)*puVar24);
    *pfVar23 = *pfVar23 + unaff_s14;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar18) break;
    *puVar27 = CONCAT44(fVar32 + (float)((ulong)*puVar27 >> 0x20),fVar29 + (float)*puVar27);
    *pfVar20 = *pfVar20 + unaff_s14;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar1) break;
    *pfVar21 = fVar29 + fVar30;
    *pfVar2 = fVar32 + fVar31;
    *pfVar25 = fVar33 + unaff_s14;
    lVar26 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar26 == 0) goto LAB_01bed9b8;
    in_x14 = 0xc;
    uVar16 = (uint)unaff_x20;
    if (*(uint *)(lVar26 + 0x18) <= uVar16) break;
    if ((*(long *)(in_stack_00000108 + 0x30) == 0) ||
       (lVar14 = *(long *)(*(long *)(in_stack_00000108 + 0x30) + 0x60), lVar14 == 0))
    goto LAB_01bed9b8;
    if (*(uint *)(lVar14 + 0x18) <= uVar16) break;
    lVar26 = *(long *)(lVar26 + unaff_x20 * 0x50 + 0x48);
    if (lVar26 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar22) break;
    lVar14 = *(long *)(lVar14 + unaff_x20 * 0x50 + 0x48);
    if (lVar14 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar14 + 0x18) <= uVar22) break;
    *(undefined8 *)(lVar14 + unaff_x22 * 8 + 0x20) = *(undefined8 *)(lVar26 + unaff_x22 * 8 + 0x20);
    if ((*(uint *)(lVar26 + 0x18) <= uVar19) || (*(uint *)(lVar14 + 0x18) <= uVar19)) break;
    *(undefined8 *)(lVar14 + in_x13 * 8 + 0x20) = *(undefined8 *)(lVar26 + in_x13 * 8 + 0x20);
    if ((*(uint *)(lVar26 + 0x18) <= uVar18) || (*(uint *)(lVar14 + 0x18) <= uVar18)) break;
    *(undefined8 *)(lVar14 + in_x12 * 8 + 0x20) = *(undefined8 *)(lVar26 + in_x12 * 8 + 0x20);
    if ((*(uint *)(lVar26 + 0x18) <= uVar1) || (*(uint *)(lVar14 + 0x18) <= uVar1)) break;
    *(undefined8 *)(lVar14 + lVar10 * 8 + 0x20) = *(undefined8 *)(lVar26 + lVar10 * 8 + 0x20);
    lVar26 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar26 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar16) break;
    if ((*(long *)(in_stack_00000108 + 0x30) == 0) ||
       (lVar14 = *(long *)(*(long *)(in_stack_00000108 + 0x30) + 0x60), lVar14 == 0))
    goto LAB_01bed9b8;
    if (*(uint *)(lVar14 + 0x18) <= uVar16) break;
    lVar26 = *(long *)(lVar26 + unaff_x20 * 0x50 + 0x58);
    if (lVar26 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar22) break;
    lVar14 = *(long *)(lVar14 + unaff_x20 * 0x50 + 0x58);
    if (lVar14 == 0) goto LAB_01bed9b8;
    if (((((*(uint *)(lVar14 + 0x18) <= uVar22) ||
          (*(undefined4 *)(lVar14 + unaff_x22 * 4 + 0x20) =
                *(undefined4 *)(lVar26 + unaff_x22 * 4 + 0x20), *(uint *)(lVar26 + 0x18) <= uVar19))
         || (*(uint *)(lVar14 + 0x18) <= uVar19)) ||
        ((*(undefined4 *)(lVar14 + in_x13 * 4 + 0x20) = *(undefined4 *)(lVar26 + in_x13 * 4 + 0x20),
         *(uint *)(lVar26 + 0x18) <= uVar18 || (*(uint *)(lVar14 + 0x18) <= uVar18)))) ||
       ((*(undefined4 *)(lVar14 + in_x12 * 4 + 0x20) = *(undefined4 *)(lVar26 + in_x12 * 4 + 0x20),
        *(uint *)(lVar26 + 0x18) <= uVar1 || (*(uint *)(lVar14 + 0x18) <= uVar1)))) break;
    *(undefined4 *)(lVar14 + lVar10 * 4 + 0x20) = *(undefined4 *)(lVar26 + lVar10 * 4 + 0x20);
    puVar7 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_7__;
    puVar6 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
    puVar5 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_65__;
    puVar4 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_61__;
    do {
      lVar26 = *(long *)(in_stack_00000108 + 0x30);
      in_stack_00000028 = in_stack_00000028 + 1;
      in_stack_00000030 = in_stack_00000030 + 0x178;
      if (in_stack_00000020 == in_stack_00000028) {
        if (lVar26 == 0) goto LAB_01bed9b8;
        lVar10 = 0;
        uVar19 = 0;
        goto LAB_01bed818;
      }
      if ((lVar26 == 0) || (lVar10 = *(long *)(lVar26 + 0x38), lVar10 == 0)) goto LAB_01bed9b8;
      if (*(uint *)(lVar10 + 0x18) <= in_stack_00000028) goto LAB_01beda6c;
    } while (*(char *)(lVar10 + in_stack_00000030) == '\0');
    lVar17 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar17 == 0) goto LAB_01bed9b8;
    uVar19 = *(uint *)(lVar10 + in_stack_00000030 + -0x13c);
    unaff_x20 = (long)(int)uVar19;
    if (*(uint *)(lVar17 + 0x18) <= uVar19) break;
    in_x9 = *(long *)(lVar17 + unaff_x20 * 0x50 + 0x30);
    if (in_x9 == 0) goto LAB_01bed9b8;
    uVar18 = *(uint *)(lVar10 + in_stack_00000030 + -0x128);
    unaff_x22 = (long)(int)uVar18;
    if ((*(uint *)(in_x9 + 0x18) <= uVar18) || (*(uint *)(in_x9 + 0x18) <= uVar18 + 2)) break;
    in_x12 = (long)(int)(uVar18 + 2);
    lVar17 = in_x9 + unaff_x22 * 0xc;
    uVar28 = *(undefined8 *)(lVar17 + 0x20);
    fVar30 = *(float *)(lVar17 + 0x28);
    in_x10 = (undefined8 *)(in_x9 + in_x12 * 0xc + 0x20);
    lVar17 = *(long *)(lVar26 + 0x60);
    if (lVar17 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar17 + 0x18) <= uVar19) break;
    unaff_x25 = *(long *)(lVar17 + unaff_x20 * 0x50 + 0x30);
    if (unaff_x25 == 0) goto LAB_01bed9b8;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar18) break;
    fVar29 = (float)uVar28;
    fVar32 = (float)((ulong)uVar28 >> 0x20);
    fVar31 = (fVar29 + (float)*in_x10) * (float)unaff_d13;
    fVar33 = (fVar32 + (float)((ulong)*in_x10 >> 0x20)) * (float)((ulong)unaff_d13 >> 0x20);
    param_3 = CONCAT44(fVar33,fVar31);
    lVar17 = unaff_x25 + unaff_x22 * 0xc;
    unaff_x27 = (undefined8 *)(lVar17 + 0x20);
    *unaff_x27 = CONCAT44(fVar32 - fVar33,fVar29 - fVar31);
    unaff_x26 = (float *)(lVar17 + 0x28);
    *unaff_x26 = fVar30;
    if (*(uint *)(in_x9 + 0x18) <= uVar18 + 1) break;
    in_w11 = *(uint *)(unaff_x25 + 0x18);
    in_x13 = (long)(int)(uVar18 + 1);
  }
LAB_01beda6c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
LAB_01bed818:
  if (*(long *)(lVar26 + 0x60) == 0) {
LAB_01bed9b8:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (*(int *)(*(long *)(lVar26 + 0x60) + 0x18) <= (int)uVar19) {
    uVar28 = thunk_FUN_01afaadc(*(undefined8 *)
                                 Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                               );
    FUN_03924d70(DAT_00b55290,uVar28,0);
    *(undefined8 *)(lVar17 + 0x18) = uVar28;
    thunk_FUN_01b4f09c((undefined8 *)(lVar17 + 0x18),uVar28);
    *(undefined4 *)(lVar17 + 0x10) = 2;
    return 1;
  }
  lVar26 = *(long *)(lVar17 + 0x28);
  if (lVar26 == 0) goto LAB_01bed9b8;
  lVar11 = *(long *)(lVar17 + 0x40);
  lVar14 = *(long *)(lVar26 + 0x18);
  if (lVar14 == 0) {
    lVar14 = thunk_FUN_01afaadc(*(undefined8 *)puVar4);
    FUN_024c3984(lVar14,lVar26,*(undefined8 *)puVar7,0);
    *(long *)(lVar26 + 0x18) = lVar14;
    thunk_FUN_01b4f09c((long *)(lVar26 + 0x18),lVar14);
  }
  if (lVar11 == 0) goto LAB_01bed9b8;
  FUN_02b2e224(lVar11,lVar14,*(undefined8 *)puVar5);
  if ((*(long *)(lVar17 + 0x30) == 0) ||
     (lVar26 = *(long *)(*(long *)(lVar17 + 0x30) + 0x60), lVar26 == 0)) goto LAB_01bed9b8;
  uVar28 = *(undefined8 *)(lVar17 + 0x40);
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_01beda6c;
  FUN_036facb8(lVar26 + lVar10 + 0x20,uVar28,0);
  if ((*(long *)(lVar17 + 0x30) == 0) ||
     (lVar26 = *(long *)(*(long *)(lVar17 + 0x30) + 0x60), lVar26 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_01beda6c;
  lVar14 = *(long *)(lVar26 + lVar10 + 0x20);
  if (lVar14 == 0) goto LAB_01bed9b8;
  FUN_0390262c(lVar14,*(undefined8 *)(lVar26 + lVar10 + 0x30),0);
  if ((*(long *)(lVar17 + 0x30) == 0) ||
     (lVar26 = *(long *)(*(long *)(lVar17 + 0x30) + 0x60), lVar26 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_01beda6c;
  lVar14 = *(long *)(lVar26 + lVar10 + 0x20);
  if (lVar14 == 0) goto LAB_01bed9b8;
  FUN_03902830(lVar14,*(undefined8 *)(lVar26 + lVar10 + 0x48),0);
  if ((*(long *)(lVar17 + 0x30) == 0) ||
     (lVar26 = *(long *)(*(long *)(lVar17 + 0x30) + 0x60), lVar26 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_01beda6c;
  lVar14 = *(long *)(lVar26 + lVar10 + 0x20);
  if (lVar14 == 0) goto LAB_01bed9b8;
  FUN_03902a3c(lVar14,*(undefined8 *)(lVar26 + lVar10 + 0x58),0);
  if (*(long *)(lVar17 + 0x30) == 0) goto LAB_01bed9b8;
  lVar26 = *(long *)(*(long *)(lVar17 + 0x30) + 0x60);
  if (lVar26 == 0) goto LAB_01bed9b8;
  if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_01beda6c;
  plVar9 = *(long **)(in_stack_00000060 + 0x30);
  if (plVar9 == (long *)0x0) goto LAB_01bed9b8;
  (**(code **)(*plVar9 + 0x7e8))
            (plVar9,*(undefined8 *)(lVar26 + lVar10 + 0x20),uVar19,*(undefined8 *)(*plVar9 + 0x7f0))
  ;
  lVar26 = *(long *)(lVar17 + 0x30);
  uVar19 = uVar19 + 1;
  lVar10 = lVar10 + 0x50;
  if (lVar26 == 0) goto LAB_01bed9b8;
  goto LAB_01bed818;
}


