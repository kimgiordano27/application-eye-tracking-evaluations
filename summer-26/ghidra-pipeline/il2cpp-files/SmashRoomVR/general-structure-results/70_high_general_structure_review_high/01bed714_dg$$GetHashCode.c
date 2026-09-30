/*
FUNCTION_NAME: dg$$GetHashCode
ENTRY_POINT: 01bed714
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


undefined8 dg__GetHashCode(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined4 *puVar16;
  long lVar17;
  long lVar18;
  long in_x9;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  long in_x11;
  long in_x12;
  long in_x13;
  long in_x14;
  long in_x15;
  long in_x16;
  long in_x17;
  float *pfVar22;
  uint uVar23;
  float *pfVar24;
  long lVar25;
  undefined8 uVar26;
  float *pfVar27;
  long lVar28;
  undefined8 *puVar29;
  float *pfVar30;
  undefined8 *puVar31;
  float *pfVar32;
  long unaff_x29;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
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
  
  while( true ) {
                    /* try { // try from 01bed714 to 01ced75b has its CatchHandler @ 01becd24 */
    lVar17 = *(long *)(param_1 + in_x11 * in_x13 + 0x58);
    if (lVar17 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar17 + 0x18) <= (uint)in_x12) break;
    lVar19 = *(long *)(in_x9 + in_x11 * in_x13 + 0x58);
    if (lVar19 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar19 + 0x18) <= (uint)in_x12) break;
    *(undefined4 *)(lVar19 + in_x12 * 4 + 0x20) = *(undefined4 *)(lVar17 + in_x12 * 4 + 0x20);
                    /* try { // try from 01bed75c to 01ced767 has its CatchHandler @ 01bed9e0 */
    if ((*(uint *)(lVar17 + 0x18) <= (uint)in_x16) || (*(uint *)(lVar19 + 0x18) <= (uint)in_x16))
    break;
    *(undefined4 *)(lVar19 + in_x16 * 4 + 0x20) = *(undefined4 *)(lVar17 + in_x16 * 4 + 0x20);
                    /* try { // try from 01bed790 to 01ced793 has its CatchHandler @ 01bed96c */
    if ((*(uint *)(lVar17 + 0x18) <= (uint)in_x15) || (*(uint *)(lVar19 + 0x18) <= (uint)in_x15))
    break;
    *(undefined4 *)(lVar19 + in_x15 * 4 + 0x20) = *(undefined4 *)(lVar17 + in_x15 * 4 + 0x20);
    if ((*(uint *)(lVar17 + 0x18) <= (uint)in_x17) || (*(uint *)(lVar19 + 0x18) <= (uint)in_x17))
    break;
    *(undefined4 *)(lVar19 + in_x17 * 4 + 0x20) = *(undefined4 *)(lVar17 + in_x17 * 4 + 0x20);
    puVar12 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_7__;
    puVar11 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
    puVar10 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_65__;
    puVar9 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_61__;
    do {
      lVar17 = *(long *)(unaff_x29 + 0x30);
      in_stack_00000028 = in_stack_00000028 + 1;
      in_stack_00000030 = in_stack_00000030 + 0x178;
      if (in_stack_00000020 == in_stack_00000028) {
        if (lVar17 == 0) goto LAB_01bed9b8;
        lVar19 = 0;
        uVar23 = 0;
        goto LAB_01bed818;
      }
      if ((lVar17 == 0) || (lVar19 = *(long *)(lVar17 + 0x38), lVar19 == 0)) goto LAB_01bed9b8;
      if (*(uint *)(lVar19 + 0x18) <= in_stack_00000028) goto LAB_01beda6c;
    } while (*(char *)(lVar19 + in_stack_00000030) == '\0');
    lVar28 = *(long *)(unaff_x29 + 0x38);
    if (lVar28 == 0) goto LAB_01bed9b8;
    uVar23 = *(uint *)(lVar19 + in_stack_00000030 + -0x13c);
    in_x11 = (long)(int)uVar23;
    if (*(uint *)(lVar28 + 0x18) <= uVar23) break;
    lVar28 = *(long *)(lVar28 + in_x11 * in_x13 + 0x30);
    if (lVar28 == 0) goto LAB_01bed9b8;
    uVar7 = *(uint *)(lVar19 + in_stack_00000030 + -0x128);
    in_x12 = (long)(int)uVar7;
    if ((*(uint *)(lVar28 + 0x18) <= uVar7) ||
       (uVar1 = uVar7 + 2, *(uint *)(lVar28 + 0x18) <= uVar1)) break;
    in_x15 = (long)(int)uVar1;
    lVar25 = lVar28 + in_x12 * in_x14;
    lVar19 = lVar28 + in_x15 * in_x14;
    uVar26 = *(undefined8 *)(lVar25 + 0x20);
    fVar33 = *(float *)(lVar25 + 0x28);
    puVar20 = (undefined8 *)(lVar19 + 0x20);
    uVar37 = *puVar20;
    lVar17 = *(long *)(lVar17 + 0x60);
    if (lVar17 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar17 + 0x18) <= uVar23) break;
    lVar17 = *(long *)(lVar17 + in_x11 * in_x13 + 0x30);
    if (lVar17 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar17 + 0x18) <= uVar7) break;
    fVar34 = (float)uVar26;
    fVar36 = (float)((ulong)uVar26 >> 0x20);
    fVar35 = (fVar34 + (float)uVar37) * (float)unaff_d13;
    fVar38 = (fVar36 + (float)((ulong)uVar37 >> 0x20)) * (float)((ulong)unaff_d13 >> 0x20);
    lVar25 = lVar17 + in_x12 * in_x14;
    puVar31 = (undefined8 *)(lVar25 + 0x20);
    *puVar31 = CONCAT44(fVar36 - fVar38,fVar34 - fVar35);
    pfVar30 = (float *)(lVar25 + 0x28);
    *pfVar30 = fVar33;
    uVar2 = uVar7 + 1;
    if ((*(uint *)(lVar28 + 0x18) <= uVar2) ||
       (in_x16 = (long)(int)uVar2, *(uint *)(lVar17 + 0x18) <= uVar2)) break;
    lVar5 = lVar28 + in_x16 * 0xc;
    uVar26 = *(undefined8 *)(lVar5 + 0x20);
    fVar33 = *(float *)(lVar5 + 0x28);
    lVar5 = lVar17 + in_x16 * 0xc;
    puVar29 = (undefined8 *)(lVar5 + 0x20);
    *puVar29 = CONCAT44((float)((ulong)uVar26 >> 0x20) - fVar38,(float)uVar26 - fVar35);
    pfVar27 = (float *)(lVar5 + 0x28);
    *pfVar27 = fVar33;
    if ((*(uint *)(lVar28 + 0x18) <= uVar1) || (*(uint *)(lVar17 + 0x18) <= uVar1)) break;
    uVar26 = *puVar20;
    fVar33 = *(float *)(lVar19 + 0x28);
    lVar19 = lVar17 + in_x15 * in_x14;
    puVar20 = (undefined8 *)(lVar19 + 0x20);
    *puVar20 = CONCAT44((float)((ulong)uVar26 >> 0x20) - fVar38,(float)uVar26 - fVar35);
    pfVar22 = (float *)(lVar19 + 0x28);
    *pfVar22 = fVar33;
    uVar3 = uVar7 + 3;
    if (*(uint *)(lVar28 + 0x18) <= uVar3) break;
    in_x17 = (long)(int)uVar3;
    if (*(uint *)(lVar17 + 0x18) <= uVar3) break;
    lVar28 = lVar28 + in_x17 * 0xc;
    uVar26 = *(undefined8 *)(lVar28 + 0x20);
    fVar33 = *(float *)(lVar28 + 0x28);
    lVar28 = lVar17 + in_x17 * 0xc;
    pfVar24 = (float *)(lVar28 + 0x20);
    *(ulong *)pfVar24 = CONCAT44((float)((ulong)uVar26 >> 0x20) - fVar38,(float)uVar26 - fVar35);
    pfVar32 = (float *)(lVar28 + 0x28);
    *pfVar32 = fVar33;
    uVar26 = FUN_0391a0e8(0x3f800000,0x3fc00000,0);
    lVar15 = *(long *)(in_stack_00000108 + 0x28);
    if ((lVar15 == 0) || (lVar13 = *(long *)(lVar15 + 0x10), lVar13 == 0)) goto LAB_01bed9b8;
    lVar18 = *(long *)(lVar13 + 0x10);
    lVar21 = *(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_62__;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar18 == 0) goto LAB_01bed9b8;
    uVar8 = *(uint *)(lVar13 + 0x18);
    if (uVar8 < *(uint *)(lVar18 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar8 + 1;
      *(int *)(lVar18 + (long)(int)uVar8 * 4 + 0x20) = (int)uVar26;
    }
    else {
      FUN_02b9f3a0(uVar26,lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70))
      ;
      lVar15 = *(long *)(in_stack_00000108 + 0x28);
      if (lVar15 == 0) goto LAB_01bed9b8;
    }
    if ((*(long *)(lVar15 + 0x10) == 0) ||
       (lVar13 = *(long *)(in_stack_00000108 + 0x40), lVar13 == 0)) goto LAB_01bed9b8;
    iVar6 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18);
    lVar15 = *(long *)(lVar13 + 0x10);
    lVar18 = *(long *)
              Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_01bed9b8;
    uVar8 = *(uint *)(lVar13 + 0x18);
    iVar6 = iVar6 + -1;
    if (uVar8 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar8 + 1;
      *(int *)(lVar15 + (long)(int)uVar8 * 4 + 0x20) = iVar6;
    }
    else {
      FUN_02b2c8dc(lVar13,iVar6,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
    }
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    puVar16 = *(undefined4 **)
               (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
               0xb8);
    uVar42 = *puVar16;
    uVar41 = puVar16[1];
    uVar40 = puVar16[2];
    uVar39 = puVar16[3];
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed258 = '\x01';
    }
    FUN_03910ecc(&stack0x00000080,0,0,0,uVar42,uVar41,uVar40,uVar39,0);
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f8 = in_stack_000000b8;
    in_stack_000000f0 = in_stack_000000b0;
    if (*(uint *)(lVar17 + 0x18) <= uVar7) break;
    uVar40 = *(undefined4 *)(lVar25 + 0x24);
    fVar33 = *pfVar30;
    uVar39 = FUN_03911ddc(*(undefined4 *)puVar31,&stack0x000000c0,0);
    if (*(uint *)(lVar17 + 0x18) <= uVar7) break;
    *(undefined4 *)puVar31 = uVar39;
    *(undefined4 *)(lVar25 + 0x24) = uVar40;
    *pfVar30 = fVar33;
    if (*(uint *)(lVar17 + 0x18) <= uVar2) break;
    uVar40 = *(undefined4 *)(lVar5 + 0x24);
    fVar33 = *pfVar27;
    uVar39 = FUN_03911ddc(*(undefined4 *)puVar29,&stack0x000000c0,0);
    if (*(uint *)(lVar17 + 0x18) <= uVar2) break;
    *(undefined4 *)puVar29 = uVar39;
    *(undefined4 *)(lVar5 + 0x24) = uVar40;
    *pfVar27 = fVar33;
    if (*(uint *)(lVar17 + 0x18) <= uVar1) break;
    uVar40 = *(undefined4 *)(lVar19 + 0x24);
    fVar33 = *pfVar22;
    uVar39 = FUN_03911ddc(*(undefined4 *)puVar20,&stack0x000000c0,0);
    if (*(uint *)(lVar17 + 0x18) <= uVar1) break;
    *(undefined4 *)puVar20 = uVar39;
    *(undefined4 *)(lVar19 + 0x24) = uVar40;
    *pfVar22 = fVar33;
    if (*(uint *)(lVar17 + 0x18) <= uVar3) break;
    pfVar4 = (float *)(lVar28 + 0x24);
    fVar34 = *pfVar4;
    fVar36 = *pfVar32;
    fVar33 = (float)FUN_03911ddc(*pfVar24,&stack0x000000c0,0);
    if (*(uint *)(lVar17 + 0x18) <= uVar3) break;
    *pfVar24 = fVar33;
    *pfVar4 = fVar34;
    *pfVar32 = fVar36;
    if (*(uint *)(lVar17 + 0x18) <= uVar7) break;
    *puVar31 = CONCAT44(fVar38 + (float)((ulong)*puVar31 >> 0x20),fVar35 + (float)*puVar31);
    *pfVar30 = *pfVar30 + unaff_s14;
    if (*(uint *)(lVar17 + 0x18) <= uVar2) break;
    *puVar29 = CONCAT44(fVar38 + (float)((ulong)*puVar29 >> 0x20),fVar35 + (float)*puVar29);
    *pfVar27 = *pfVar27 + unaff_s14;
    if (*(uint *)(lVar17 + 0x18) <= uVar1) break;
    *puVar20 = CONCAT44(fVar38 + (float)((ulong)*puVar20 >> 0x20),fVar35 + (float)*puVar20);
    *pfVar22 = *pfVar22 + unaff_s14;
    if (*(uint *)(lVar17 + 0x18) <= uVar3) break;
    *pfVar24 = fVar35 + fVar33;
    *pfVar4 = fVar38 + fVar34;
    *pfVar32 = fVar36 + unaff_s14;
    lVar17 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar17 == 0) goto LAB_01bed9b8;
    in_x13 = 0x50;
    in_x14 = 0xc;
    if (*(uint *)(lVar17 + 0x18) <= uVar23) break;
    if ((*(long *)(in_stack_00000108 + 0x30) == 0) ||
       (lVar19 = *(long *)(*(long *)(in_stack_00000108 + 0x30) + 0x60), lVar19 == 0))
    goto LAB_01bed9b8;
    if (*(uint *)(lVar19 + 0x18) <= uVar23) break;
    lVar17 = *(long *)(lVar17 + in_x11 * 0x50 + 0x48);
    if (lVar17 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar17 + 0x18) <= uVar7) break;
    lVar19 = *(long *)(lVar19 + in_x11 * 0x50 + 0x48);
    if (lVar19 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar19 + 0x18) <= uVar7) break;
    *(undefined8 *)(lVar19 + in_x12 * 8 + 0x20) = *(undefined8 *)(lVar17 + in_x12 * 8 + 0x20);
    if ((*(uint *)(lVar17 + 0x18) <= uVar2) || (*(uint *)(lVar19 + 0x18) <= uVar2)) break;
    *(undefined8 *)(lVar19 + in_x16 * 8 + 0x20) = *(undefined8 *)(lVar17 + in_x16 * 8 + 0x20);
    if ((*(uint *)(lVar17 + 0x18) <= uVar1) || (*(uint *)(lVar19 + 0x18) <= uVar1)) break;
    *(undefined8 *)(lVar19 + in_x15 * 8 + 0x20) = *(undefined8 *)(lVar17 + in_x15 * 8 + 0x20);
    if ((*(uint *)(lVar17 + 0x18) <= uVar3) || (*(uint *)(lVar19 + 0x18) <= uVar3)) break;
    *(undefined8 *)(lVar19 + in_x17 * 8 + 0x20) = *(undefined8 *)(lVar17 + in_x17 * 8 + 0x20);
    param_1 = *(long *)(in_stack_00000108 + 0x38);
    if (param_1 == 0) goto LAB_01bed9b8;
    if (*(uint *)(param_1 + 0x18) <= uVar23) break;
    if ((*(long *)(in_stack_00000108 + 0x30) == 0) ||
       (in_x9 = *(long *)(*(long *)(in_stack_00000108 + 0x30) + 0x60), in_x9 == 0))
    goto LAB_01bed9b8;
    unaff_x29 = in_stack_00000108;
    if (*(uint *)(in_x9 + 0x18) <= uVar23) break;
  }
LAB_01beda6c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
LAB_01bed818:
  if (*(long *)(lVar17 + 0x60) == 0) {
LAB_01bed9b8:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (*(int *)(*(long *)(lVar17 + 0x60) + 0x18) <= (int)uVar23) {
    uVar26 = thunk_FUN_01afaadc(*(undefined8 *)
                                 Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                               );
    FUN_03924d70(DAT_00b55290,uVar26,0);
    *(undefined8 *)(unaff_x29 + 0x18) = uVar26;
    thunk_FUN_01b4f09c((undefined8 *)(unaff_x29 + 0x18),uVar26);
    *(undefined4 *)(unaff_x29 + 0x10) = 2;
    return 1;
  }
  lVar17 = *(long *)(unaff_x29 + 0x28);
  if (lVar17 == 0) goto LAB_01bed9b8;
  lVar25 = *(long *)(unaff_x29 + 0x40);
  lVar28 = *(long *)(lVar17 + 0x18);
  if (lVar28 == 0) {
    lVar28 = thunk_FUN_01afaadc(*(undefined8 *)puVar9);
    FUN_024c3984(lVar28,lVar17,*(undefined8 *)puVar12,0);
    *(long *)(lVar17 + 0x18) = lVar28;
    thunk_FUN_01b4f09c((long *)(lVar17 + 0x18),lVar28);
  }
  if (lVar25 == 0) goto LAB_01bed9b8;
  FUN_02b2e224(lVar25,lVar28,*(undefined8 *)puVar10);
  if ((*(long *)(unaff_x29 + 0x30) == 0) ||
     (lVar17 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar17 == 0)) goto LAB_01bed9b8;
  uVar26 = *(undefined8 *)(unaff_x29 + 0x40);
  if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (*(uint *)(lVar17 + 0x18) <= uVar23) goto LAB_01beda6c;
  FUN_036facb8(lVar17 + lVar19 + 0x20,uVar26,0);
  if ((*(long *)(unaff_x29 + 0x30) == 0) ||
     (lVar17 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar17 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar17 + 0x18) <= uVar23) goto LAB_01beda6c;
  lVar28 = *(long *)(lVar17 + lVar19 + 0x20);
  if (lVar28 == 0) goto LAB_01bed9b8;
  FUN_0390262c(lVar28,*(undefined8 *)(lVar17 + lVar19 + 0x30),0);
  if ((*(long *)(unaff_x29 + 0x30) == 0) ||
     (lVar17 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar17 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar17 + 0x18) <= uVar23) goto LAB_01beda6c;
  lVar28 = *(long *)(lVar17 + lVar19 + 0x20);
  if (lVar28 == 0) goto LAB_01bed9b8;
  FUN_03902830(lVar28,*(undefined8 *)(lVar17 + lVar19 + 0x48),0);
  if ((*(long *)(unaff_x29 + 0x30) == 0) ||
     (lVar17 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar17 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar17 + 0x18) <= uVar23) goto LAB_01beda6c;
  lVar28 = *(long *)(lVar17 + lVar19 + 0x20);
  if (lVar28 == 0) goto LAB_01bed9b8;
  FUN_03902a3c(lVar28,*(undefined8 *)(lVar17 + lVar19 + 0x58),0);
  if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_01bed9b8;
  lVar17 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60);
  if (lVar17 == 0) goto LAB_01bed9b8;
  if (*(uint *)(lVar17 + 0x18) <= uVar23) goto LAB_01beda6c;
  plVar14 = *(long **)(in_stack_00000060 + 0x30);
  if (plVar14 == (long *)0x0) goto LAB_01bed9b8;
  (**(code **)(*plVar14 + 0x7e8))
            (plVar14,*(undefined8 *)(lVar17 + lVar19 + 0x20),uVar23,
             *(undefined8 *)(*plVar14 + 0x7f0));
  lVar17 = *(long *)(unaff_x29 + 0x30);
  uVar23 = uVar23 + 1;
  lVar19 = lVar19 + 0x50;
  if (lVar17 == 0) goto LAB_01bed9b8;
  goto LAB_01bed818;
}


