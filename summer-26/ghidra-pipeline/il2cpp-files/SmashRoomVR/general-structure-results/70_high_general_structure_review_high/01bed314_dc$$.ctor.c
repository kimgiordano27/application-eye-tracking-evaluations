/*
FUNCTION_NAME: dc$$.ctor
ENTRY_POINT: 01bed314
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


undefined8 dc___ctor(long param_1)

{
  float *pfVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined4 *puVar8;
  int in_w9;
  long lVar9;
  undefined8 *puVar10;
  undefined **in_x10;
  long lVar11;
  uint uVar12;
  float *unaff_x19;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long unaff_x20;
  float *unaff_x21;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  long unaff_x22;
  float *unaff_x23;
  long lVar19;
  undefined8 *unaff_x24;
  long unaff_x25;
  float *unaff_x26;
  undefined8 *unaff_x27;
  float *unaff_x28;
  undefined8 *unaff_x29;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined8 unaff_d13;
  float unaff_s14;
  ulong in_stack_00000020;
  ulong in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000040;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000070;
  long in_stack_00000078;
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
  
  while( true ) {
    lVar7 = *(long *)(param_1 + 0x10);
    lVar11 = *(long *)in_x10[0x149];
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar18 = *(uint *)(param_1 + 0x18);
    if (uVar18 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar18 + 1;
      *(int *)(lVar7 + (long)(int)uVar18 * 4 + 0x20) = in_w9 + -1;
    }
    else {
                    /* try { // try from 01bed360 to 01ced363 has its CatchHandler @ 01beda54 */
                    /* try { // try from 01bed364 to 01ced3a7 has its CatchHandler @ 01becd24 */
      FUN_02b2c8dc(param_1,in_w9 + -1,
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    puVar8 = *(undefined4 **)
              (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
              0xb8);
    uVar30 = *puVar8;
    uVar29 = puVar8[1];
    uVar28 = puVar8[2];
    uVar27 = puVar8[3];
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed258 = '\x01';
    }
    FUN_03910ecc(&stack0x00000080,0,0,0,uVar30,uVar29,uVar28,uVar27,0);
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f8 = in_stack_000000b8;
    in_stack_000000f0 = in_stack_000000b0;
    uVar18 = (uint)unaff_x22;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar18) goto LAB_01beda6c;
    uVar28 = *(undefined4 *)((long)unaff_x27 + 4);
    fVar21 = *unaff_x26;
    uVar27 = FUN_03911ddc(*(undefined4 *)unaff_x27,&stack0x000000c0,0);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar18) goto LAB_01beda6c;
    *(undefined4 *)unaff_x27 = uVar27;
    *(undefined4 *)((long)unaff_x27 + 4) = uVar28;
    *unaff_x26 = fVar21;
    uVar13 = (uint)in_stack_00000078;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar13) goto LAB_01beda6c;
    uVar28 = *(undefined4 *)((long)unaff_x24 + 4);
    fVar21 = *unaff_x23;
    uVar27 = FUN_03911ddc(*(undefined4 *)unaff_x24,&stack0x000000c0,0);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar13) goto LAB_01beda6c;
    *(undefined4 *)unaff_x24 = uVar27;
    *(undefined4 *)((long)unaff_x24 + 4) = uVar28;
    *unaff_x23 = fVar21;
    uVar14 = (uint)in_stack_00000070;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar14) goto LAB_01beda6c;
    uVar28 = *(undefined4 *)((long)unaff_x29 + 4);
    fVar21 = *unaff_x19;
    uVar27 = FUN_03911ddc(*(undefined4 *)unaff_x29,&stack0x000000c0,0);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar14) goto LAB_01beda6c;
    *(undefined4 *)unaff_x29 = uVar27;
    *(undefined4 *)((long)unaff_x29 + 4) = uVar28;
    *unaff_x19 = fVar21;
    uVar15 = (uint)in_stack_00000058;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar15) goto LAB_01beda6c;
    pfVar1 = unaff_x21 + 1;
    fVar20 = *pfVar1;
    fVar22 = *unaff_x28;
    fVar21 = (float)FUN_03911ddc(*unaff_x21,&stack0x000000c0,0);
    lVar7 = in_stack_00000108;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar15) goto LAB_01beda6c;
    *unaff_x21 = fVar21;
    *pfVar1 = fVar20;
    *unaff_x28 = fVar22;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar18) goto LAB_01beda6c;
    fVar25 = *unaff_x26;
    fVar24 = (float)in_stack_00000040;
    fVar26 = (float)((ulong)in_stack_00000040 >> 0x20);
    *unaff_x27 = CONCAT44(fVar26 + (float)((ulong)*unaff_x27 >> 0x20),fVar24 + (float)*unaff_x27);
    *unaff_x26 = fVar25 + unaff_s14;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar13) goto LAB_01beda6c;
    fVar25 = *unaff_x23;
    *unaff_x24 = CONCAT44(fVar26 + (float)((ulong)*unaff_x24 >> 0x20),fVar24 + (float)*unaff_x24);
    *unaff_x23 = fVar25 + unaff_s14;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar14) goto LAB_01beda6c;
    fVar25 = *unaff_x19;
    *unaff_x29 = CONCAT44(fVar26 + (float)((ulong)*unaff_x29 >> 0x20),fVar24 + (float)*unaff_x29);
    *unaff_x19 = fVar25 + unaff_s14;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar15) goto LAB_01beda6c;
    *unaff_x21 = fVar24 + fVar21;
    *pfVar1 = fVar26 + fVar20;
    *unaff_x28 = fVar22 + unaff_s14;
    lVar11 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar11 == 0) break;
    uVar12 = (uint)unaff_x20;
    if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_01beda6c;
    if ((*(long *)(in_stack_00000108 + 0x30) == 0) ||
       (lVar9 = *(long *)(*(long *)(in_stack_00000108 + 0x30) + 0x60), lVar9 == 0)) break;
    if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_01beda6c;
    lVar11 = *(long *)(lVar11 + unaff_x20 * 0x50 + 0x48);
    if (lVar11 == 0) break;
    if (*(uint *)(lVar11 + 0x18) <= uVar18) goto LAB_01beda6c;
    lVar9 = *(long *)(lVar9 + unaff_x20 * 0x50 + 0x48);
    if (lVar9 == 0) break;
    if (*(uint *)(lVar9 + 0x18) <= uVar18) goto LAB_01beda6c;
    *(undefined8 *)(lVar9 + unaff_x22 * 8 + 0x20) = *(undefined8 *)(lVar11 + unaff_x22 * 8 + 0x20);
    if ((*(uint *)(lVar11 + 0x18) <= uVar13) || (*(uint *)(lVar9 + 0x18) <= uVar13))
    goto LAB_01beda6c;
    *(undefined8 *)(lVar9 + in_stack_00000078 * 8 + 0x20) =
         *(undefined8 *)(lVar11 + in_stack_00000078 * 8 + 0x20);
    if ((*(uint *)(lVar11 + 0x18) <= uVar14) || (*(uint *)(lVar9 + 0x18) <= uVar14))
    goto LAB_01beda6c;
    *(undefined8 *)(lVar9 + in_stack_00000070 * 8 + 0x20) =
         *(undefined8 *)(lVar11 + in_stack_00000070 * 8 + 0x20);
    if ((*(uint *)(lVar11 + 0x18) <= uVar15) || (*(uint *)(lVar9 + 0x18) <= uVar15))
    goto LAB_01beda6c;
    *(undefined8 *)(lVar9 + in_stack_00000058 * 8 + 0x20) =
         *(undefined8 *)(lVar11 + in_stack_00000058 * 8 + 0x20);
    lVar11 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar11 == 0) break;
    if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_01beda6c;
    if ((*(long *)(in_stack_00000108 + 0x30) == 0) ||
       (lVar9 = *(long *)(*(long *)(in_stack_00000108 + 0x30) + 0x60), lVar9 == 0)) break;
    if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_01beda6c;
    lVar11 = *(long *)(lVar11 + unaff_x20 * 0x50 + 0x58);
    if (lVar11 == 0) break;
    if (*(uint *)(lVar11 + 0x18) <= uVar18) goto LAB_01beda6c;
    lVar9 = *(long *)(lVar9 + unaff_x20 * 0x50 + 0x58);
    if (lVar9 == 0) break;
    if (((((*(uint *)(lVar9 + 0x18) <= uVar18) ||
          (*(undefined4 *)(lVar9 + unaff_x22 * 4 + 0x20) =
                *(undefined4 *)(lVar11 + unaff_x22 * 4 + 0x20), *(uint *)(lVar11 + 0x18) <= uVar13))
         || (*(uint *)(lVar9 + 0x18) <= uVar13)) ||
        ((*(undefined4 *)(lVar9 + in_stack_00000078 * 4 + 0x20) =
               *(undefined4 *)(lVar11 + in_stack_00000078 * 4 + 0x20),
         *(uint *)(lVar11 + 0x18) <= uVar14 || (*(uint *)(lVar9 + 0x18) <= uVar14)))) ||
       ((*(undefined4 *)(lVar9 + in_stack_00000070 * 4 + 0x20) =
              *(undefined4 *)(lVar11 + in_stack_00000070 * 4 + 0x20),
        *(uint *)(lVar11 + 0x18) <= uVar15 || (*(uint *)(lVar9 + 0x18) <= uVar15))))
    goto LAB_01beda6c;
    *(undefined4 *)(lVar9 + in_stack_00000058 * 4 + 0x20) =
         *(undefined4 *)(lVar11 + in_stack_00000058 * 4 + 0x20);
    puVar5 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_7__;
    puVar4 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
    puVar3 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_65__;
    puVar2 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_61__;
    do {
      lVar11 = *(long *)(in_stack_00000108 + 0x30);
      in_stack_00000028 = in_stack_00000028 + 1;
      in_stack_00000030 = in_stack_00000030 + 0x178;
      if (in_stack_00000020 == in_stack_00000028) {
        if (lVar11 == 0) goto LAB_01bed9b8;
        lVar9 = 0;
        uVar18 = 0;
        goto LAB_01bed818;
      }
      if ((lVar11 == 0) || (lVar9 = *(long *)(lVar11 + 0x38), lVar9 == 0)) goto LAB_01bed9b8;
      if (*(uint *)(lVar9 + 0x18) <= in_stack_00000028) goto LAB_01beda6c;
    } while (*(char *)(lVar9 + in_stack_00000030) == '\0');
    lVar7 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar7 == 0) break;
    uVar18 = *(uint *)(lVar9 + in_stack_00000030 + -0x13c);
    unaff_x20 = (long)(int)uVar18;
    if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_01beda6c;
    lVar7 = *(long *)(lVar7 + unaff_x20 * 0x50 + 0x30);
    if (lVar7 == 0) break;
    uVar13 = *(uint *)(lVar9 + in_stack_00000030 + -0x128);
    unaff_x22 = (long)(int)uVar13;
    if ((*(uint *)(lVar7 + 0x18) <= uVar13) ||
       (uVar14 = uVar13 + 2, *(uint *)(lVar7 + 0x18) <= uVar14)) goto LAB_01beda6c;
    in_stack_00000070 = (long)(int)uVar14;
    lVar19 = lVar7 + unaff_x22 * 0xc;
    lVar9 = lVar7 + in_stack_00000070 * 0xc;
    uVar17 = *(undefined8 *)(lVar19 + 0x20);
    fVar21 = *(float *)(lVar19 + 0x28);
    puVar10 = (undefined8 *)(lVar9 + 0x20);
    uVar23 = *puVar10;
    lVar11 = *(long *)(lVar11 + 0x60);
    if (lVar11 == 0) break;
    if (*(uint *)(lVar11 + 0x18) <= uVar18) goto LAB_01beda6c;
    unaff_x25 = *(long *)(lVar11 + unaff_x20 * 0x50 + 0x30);
    if (unaff_x25 == 0) break;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar13) goto LAB_01beda6c;
    fVar20 = (float)uVar17;
    fVar22 = (float)((ulong)uVar17 >> 0x20);
    fVar25 = (fVar20 + (float)uVar23) * (float)unaff_d13;
    fVar24 = (fVar22 + (float)((ulong)uVar23 >> 0x20)) * (float)((ulong)unaff_d13 >> 0x20);
    in_stack_00000040 = CONCAT44(fVar24,fVar25);
    lVar11 = unaff_x25 + unaff_x22 * 0xc;
    unaff_x27 = (undefined8 *)(lVar11 + 0x20);
    *unaff_x27 = CONCAT44(fVar22 - fVar24,fVar20 - fVar25);
    unaff_x26 = (float *)(lVar11 + 0x28);
    *unaff_x26 = fVar21;
    uVar18 = uVar13 + 1;
    if ((*(uint *)(lVar7 + 0x18) <= uVar18) ||
       (in_stack_00000078 = (long)(int)uVar18, *(uint *)(unaff_x25 + 0x18) <= uVar18))
    goto LAB_01beda6c;
    lVar11 = lVar7 + in_stack_00000078 * 0xc;
    uVar17 = *(undefined8 *)(lVar11 + 0x20);
    fVar21 = *(float *)(lVar11 + 0x28);
    lVar11 = unaff_x25 + in_stack_00000078 * 0xc;
    unaff_x24 = (undefined8 *)(lVar11 + 0x20);
    *unaff_x24 = CONCAT44((float)((ulong)uVar17 >> 0x20) - fVar24,(float)uVar17 - fVar25);
    unaff_x23 = (float *)(lVar11 + 0x28);
    *unaff_x23 = fVar21;
    if ((*(uint *)(lVar7 + 0x18) <= uVar14) || (*(uint *)(unaff_x25 + 0x18) <= uVar14))
    goto LAB_01beda6c;
    uVar17 = *puVar10;
    fVar21 = *(float *)(lVar9 + 0x28);
    lVar11 = unaff_x25 + in_stack_00000070 * 0xc;
    unaff_x29 = (undefined8 *)(lVar11 + 0x20);
    *unaff_x29 = CONCAT44((float)((ulong)uVar17 >> 0x20) - fVar24,(float)uVar17 - fVar25);
    unaff_x19 = (float *)(lVar11 + 0x28);
    *unaff_x19 = fVar21;
    uVar13 = uVar13 + 3;
    if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_01beda6c;
    in_stack_00000058 = (long)(int)uVar13;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar13) goto LAB_01beda6c;
    lVar7 = lVar7 + in_stack_00000058 * 0xc;
    uVar17 = *(undefined8 *)(lVar7 + 0x20);
    fVar21 = *(float *)(lVar7 + 0x28);
    lVar7 = unaff_x25 + in_stack_00000058 * 0xc;
    unaff_x21 = (float *)(lVar7 + 0x20);
    *(ulong *)unaff_x21 = CONCAT44((float)((ulong)uVar17 >> 0x20) - fVar24,(float)uVar17 - fVar25);
    unaff_x28 = (float *)(lVar7 + 0x28);
    *unaff_x28 = fVar21;
    uVar17 = FUN_0391a0e8(0x3f800000,0x3fc00000,0);
    lVar7 = *(long *)(in_stack_00000108 + 0x28);
    if ((lVar7 == 0) || (lVar11 = *(long *)(lVar7 + 0x10), lVar11 == 0)) break;
    lVar9 = *(long *)(lVar11 + 0x10);
    lVar19 = *(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_62__;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar9 == 0) break;
    uVar18 = *(uint *)(lVar11 + 0x18);
    if (uVar18 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar18 + 1;
      *(int *)(lVar9 + (long)(int)uVar18 * 4 + 0x20) = (int)uVar17;
    }
    else {
      FUN_02b9f3a0(uVar17,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
      ;
      lVar7 = *(long *)(in_stack_00000108 + 0x28);
      if (lVar7 == 0) break;
    }
    if ((*(long *)(lVar7 + 0x10) == 0) ||
       (param_1 = *(long *)(in_stack_00000108 + 0x40), param_1 == 0)) break;
    in_x10 = &Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_31__;
    in_w9 = *(int *)(*(long *)(lVar7 + 0x10) + 0x18);
  }
LAB_01bed9b8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
LAB_01bed818:
  if (*(long *)(lVar11 + 0x60) == 0) goto LAB_01bed9b8;
  if (*(int *)(*(long *)(lVar11 + 0x60) + 0x18) <= (int)uVar18) {
    uVar17 = thunk_FUN_01afaadc(*(undefined8 *)
                                 Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                               );
    FUN_03924d70(DAT_00b55290,uVar17,0);
    *(undefined8 *)(lVar7 + 0x18) = uVar17;
    thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x18),uVar17);
    *(undefined4 *)(lVar7 + 0x10) = 2;
    return 1;
  }
  lVar11 = *(long *)(lVar7 + 0x28);
  if (lVar11 == 0) goto LAB_01bed9b8;
  lVar16 = *(long *)(lVar7 + 0x40);
  lVar19 = *(long *)(lVar11 + 0x18);
  if (lVar19 == 0) {
    lVar19 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
    FUN_024c3984(lVar19,lVar11,*(undefined8 *)puVar5,0);
    *(long *)(lVar11 + 0x18) = lVar19;
    thunk_FUN_01b4f09c((long *)(lVar11 + 0x18),lVar19);
  }
  if (lVar16 == 0) goto LAB_01bed9b8;
  FUN_02b2e224(lVar16,lVar19,*(undefined8 *)puVar3);
  if ((*(long *)(lVar7 + 0x30) == 0) ||
     (lVar11 = *(long *)(*(long *)(lVar7 + 0x30) + 0x60), lVar11 == 0)) goto LAB_01bed9b8;
  uVar17 = *(undefined8 *)(lVar7 + 0x40);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (*(uint *)(lVar11 + 0x18) <= uVar18) {
LAB_01beda6c:
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
  FUN_036facb8(lVar11 + lVar9 + 0x20,uVar17,0);
  if ((*(long *)(lVar7 + 0x30) == 0) ||
     (lVar11 = *(long *)(*(long *)(lVar7 + 0x30) + 0x60), lVar11 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar11 + 0x18) <= uVar18) goto LAB_01beda6c;
  lVar19 = *(long *)(lVar11 + lVar9 + 0x20);
  if (lVar19 == 0) goto LAB_01bed9b8;
  FUN_0390262c(lVar19,*(undefined8 *)(lVar11 + lVar9 + 0x30),0);
  if ((*(long *)(lVar7 + 0x30) == 0) ||
     (lVar11 = *(long *)(*(long *)(lVar7 + 0x30) + 0x60), lVar11 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar11 + 0x18) <= uVar18) goto LAB_01beda6c;
  lVar19 = *(long *)(lVar11 + lVar9 + 0x20);
  if (lVar19 == 0) goto LAB_01bed9b8;
  FUN_03902830(lVar19,*(undefined8 *)(lVar11 + lVar9 + 0x48),0);
  if ((*(long *)(lVar7 + 0x30) == 0) ||
     (lVar11 = *(long *)(*(long *)(lVar7 + 0x30) + 0x60), lVar11 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar11 + 0x18) <= uVar18) goto LAB_01beda6c;
  lVar19 = *(long *)(lVar11 + lVar9 + 0x20);
  if (lVar19 == 0) goto LAB_01bed9b8;
  FUN_03902a3c(lVar19,*(undefined8 *)(lVar11 + lVar9 + 0x58),0);
  if (*(long *)(lVar7 + 0x30) == 0) goto LAB_01bed9b8;
  lVar11 = *(long *)(*(long *)(lVar7 + 0x30) + 0x60);
  if (lVar11 == 0) goto LAB_01bed9b8;
  if (*(uint *)(lVar11 + 0x18) <= uVar18) goto LAB_01beda6c;
  plVar6 = *(long **)(in_stack_00000060 + 0x30);
  if (plVar6 == (long *)0x0) goto LAB_01bed9b8;
  (**(code **)(*plVar6 + 0x7e8))
            (plVar6,*(undefined8 *)(lVar11 + lVar9 + 0x20),uVar18,*(undefined8 *)(*plVar6 + 0x7f0));
  lVar11 = *(long *)(lVar7 + 0x30);
  uVar18 = uVar18 + 1;
  lVar9 = lVar9 + 0x50;
  if (lVar11 == 0) goto LAB_01bed9b8;
  goto LAB_01bed818;
}


