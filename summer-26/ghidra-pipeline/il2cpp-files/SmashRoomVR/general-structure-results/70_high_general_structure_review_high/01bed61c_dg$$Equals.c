/*
FUNCTION_NAME: dg$$Equals
ENTRY_POINT: 01bed61c
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


undefined8 dg__Equals(long param_1)

{
  float *pfVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  long in_x9;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  uint uVar18;
  long in_x11;
  uint uVar19;
  long in_x12;
  long in_x13;
  long in_x14;
  uint uVar20;
  long in_x15;
  uint uVar21;
  long in_x16;
  uint uVar22;
  long in_x17;
  float *pfVar23;
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
  
  while (in_x9 != 0) {
    uVar18 = (uint)in_x11;
    if (*(uint *)(in_x9 + 0x18) <= uVar18) goto LAB_01beda6c;
    lVar13 = *(long *)(param_1 + in_x11 * in_x13 + 0x48);
    if (lVar13 == 0) break;
    uVar19 = (uint)in_x12;
    if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_01beda6c;
    lVar15 = *(long *)(in_x9 + in_x11 * in_x13 + 0x48);
    if (lVar15 == 0) break;
    if (*(uint *)(lVar15 + 0x18) <= uVar19) goto LAB_01beda6c;
    *(undefined8 *)(lVar15 + in_x12 * 8 + 0x20) = *(undefined8 *)(lVar13 + in_x12 * 8 + 0x20);
    uVar21 = (uint)in_x16;
    if ((*(uint *)(lVar13 + 0x18) <= uVar21) || (*(uint *)(lVar15 + 0x18) <= uVar21))
    goto LAB_01beda6c;
    *(undefined8 *)(lVar15 + in_x16 * 8 + 0x20) = *(undefined8 *)(lVar13 + in_x16 * 8 + 0x20);
    uVar20 = (uint)in_x15;
                    /* try { // try from 01bed6a4 to 01ced713 has its CatchHandler @ 01bed9e0 */
    if ((*(uint *)(lVar13 + 0x18) <= uVar20) || (*(uint *)(lVar15 + 0x18) <= uVar20))
    goto LAB_01beda6c;
    *(undefined8 *)(lVar15 + in_x15 * 8 + 0x20) = *(undefined8 *)(lVar13 + in_x15 * 8 + 0x20);
    uVar22 = (uint)in_x17;
    if ((*(uint *)(lVar13 + 0x18) <= uVar22) || (*(uint *)(lVar15 + 0x18) <= uVar22))
    goto LAB_01beda6c;
    *(undefined8 *)(lVar15 + in_x17 * 8 + 0x20) = *(undefined8 *)(lVar13 + in_x17 * 8 + 0x20);
    lVar13 = *(long *)(unaff_x29 + 0x38);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar18) goto LAB_01beda6c;
    if ((*(long *)(unaff_x29 + 0x30) == 0) ||
       (lVar15 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar15 == 0)) break;
    if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_01beda6c;
    lVar13 = *(long *)(lVar13 + in_x11 * in_x13 + 0x58);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_01beda6c;
    lVar15 = *(long *)(lVar15 + in_x11 * in_x13 + 0x58);
    if (lVar15 == 0) break;
    if (((((*(uint *)(lVar15 + 0x18) <= uVar19) ||
          (*(undefined4 *)(lVar15 + in_x12 * 4 + 0x20) = *(undefined4 *)(lVar13 + in_x12 * 4 + 0x20)
          , *(uint *)(lVar13 + 0x18) <= uVar21)) || (*(uint *)(lVar15 + 0x18) <= uVar21)) ||
        ((*(undefined4 *)(lVar15 + in_x16 * 4 + 0x20) = *(undefined4 *)(lVar13 + in_x16 * 4 + 0x20),
         *(uint *)(lVar13 + 0x18) <= uVar20 || (*(uint *)(lVar15 + 0x18) <= uVar20)))) ||
       ((*(undefined4 *)(lVar15 + in_x15 * 4 + 0x20) = *(undefined4 *)(lVar13 + in_x15 * 4 + 0x20),
        *(uint *)(lVar13 + 0x18) <= uVar22 || (*(uint *)(lVar15 + 0x18) <= uVar22))))
    goto LAB_01beda6c;
    *(undefined4 *)(lVar15 + in_x17 * 4 + 0x20) = *(undefined4 *)(lVar13 + in_x17 * 4 + 0x20);
    puVar8 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_7__;
    puVar7 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
    puVar6 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_65__;
    puVar5 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_61__;
    do {
      lVar13 = *(long *)(unaff_x29 + 0x30);
      in_stack_00000028 = in_stack_00000028 + 1;
      in_stack_00000030 = in_stack_00000030 + 0x178;
      if (in_stack_00000020 == in_stack_00000028) {
        if (lVar13 == 0) goto LAB_01bed9b8;
        lVar15 = 0;
        uVar18 = 0;
        goto LAB_01bed818;
      }
      if ((lVar13 == 0) || (lVar15 = *(long *)(lVar13 + 0x38), lVar15 == 0)) goto LAB_01bed9b8;
      if (*(uint *)(lVar15 + 0x18) <= in_stack_00000028) goto LAB_01beda6c;
    } while (*(char *)(lVar15 + in_stack_00000030) == '\0');
    lVar28 = *(long *)(unaff_x29 + 0x38);
    if (lVar28 == 0) break;
    uVar18 = *(uint *)(lVar15 + in_stack_00000030 + -0x13c);
    in_x11 = (long)(int)uVar18;
    if (*(uint *)(lVar28 + 0x18) <= uVar18) goto LAB_01beda6c;
    lVar28 = *(long *)(lVar28 + in_x11 * in_x13 + 0x30);
    if (lVar28 == 0) break;
    uVar19 = *(uint *)(lVar15 + in_stack_00000030 + -0x128);
    in_x12 = (long)(int)uVar19;
    if ((*(uint *)(lVar28 + 0x18) <= uVar19) ||
       (uVar21 = uVar19 + 2, *(uint *)(lVar28 + 0x18) <= uVar21)) goto LAB_01beda6c;
    in_x15 = (long)(int)uVar21;
    lVar25 = lVar28 + in_x12 * in_x14;
    lVar15 = lVar28 + in_x15 * in_x14;
    uVar26 = *(undefined8 *)(lVar25 + 0x20);
    fVar33 = *(float *)(lVar25 + 0x28);
    puVar16 = (undefined8 *)(lVar15 + 0x20);
    uVar37 = *puVar16;
    lVar13 = *(long *)(lVar13 + 0x60);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar18) goto LAB_01beda6c;
    lVar13 = *(long *)(lVar13 + in_x11 * in_x13 + 0x30);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_01beda6c;
    fVar34 = (float)uVar26;
    fVar36 = (float)((ulong)uVar26 >> 0x20);
    fVar35 = (fVar34 + (float)uVar37) * (float)unaff_d13;
    fVar38 = (fVar36 + (float)((ulong)uVar37 >> 0x20)) * (float)((ulong)unaff_d13 >> 0x20);
    lVar25 = lVar13 + in_x12 * in_x14;
    puVar31 = (undefined8 *)(lVar25 + 0x20);
    *puVar31 = CONCAT44(fVar36 - fVar38,fVar34 - fVar35);
    pfVar30 = (float *)(lVar25 + 0x28);
    *pfVar30 = fVar33;
    uVar20 = uVar19 + 1;
    if ((*(uint *)(lVar28 + 0x18) <= uVar20) ||
       (in_x16 = (long)(int)uVar20, *(uint *)(lVar13 + 0x18) <= uVar20)) goto LAB_01beda6c;
    lVar2 = lVar28 + in_x16 * 0xc;
    uVar26 = *(undefined8 *)(lVar2 + 0x20);
    fVar33 = *(float *)(lVar2 + 0x28);
    lVar2 = lVar13 + in_x16 * 0xc;
    puVar29 = (undefined8 *)(lVar2 + 0x20);
    *puVar29 = CONCAT44((float)((ulong)uVar26 >> 0x20) - fVar38,(float)uVar26 - fVar35);
    pfVar27 = (float *)(lVar2 + 0x28);
    *pfVar27 = fVar33;
    if ((*(uint *)(lVar28 + 0x18) <= uVar21) || (*(uint *)(lVar13 + 0x18) <= uVar21))
    goto LAB_01beda6c;
    uVar26 = *puVar16;
    fVar33 = *(float *)(lVar15 + 0x28);
    lVar15 = lVar13 + in_x15 * in_x14;
    puVar16 = (undefined8 *)(lVar15 + 0x20);
    *puVar16 = CONCAT44((float)((ulong)uVar26 >> 0x20) - fVar38,(float)uVar26 - fVar35);
    pfVar23 = (float *)(lVar15 + 0x28);
    *pfVar23 = fVar33;
    uVar22 = uVar19 + 3;
    if (*(uint *)(lVar28 + 0x18) <= uVar22) goto LAB_01beda6c;
    in_x17 = (long)(int)uVar22;
    if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_01beda6c;
    lVar28 = lVar28 + in_x17 * 0xc;
    uVar26 = *(undefined8 *)(lVar28 + 0x20);
    fVar33 = *(float *)(lVar28 + 0x28);
    lVar28 = lVar13 + in_x17 * 0xc;
    pfVar24 = (float *)(lVar28 + 0x20);
    *(ulong *)pfVar24 = CONCAT44((float)((ulong)uVar26 >> 0x20) - fVar38,(float)uVar26 - fVar35);
    pfVar32 = (float *)(lVar28 + 0x28);
    *pfVar32 = fVar33;
    uVar26 = FUN_0391a0e8(0x3f800000,0x3fc00000,0);
    lVar11 = *(long *)(in_stack_00000108 + 0x28);
    if ((lVar11 == 0) || (lVar9 = *(long *)(lVar11 + 0x10), lVar9 == 0)) break;
    lVar14 = *(long *)(lVar9 + 0x10);
    lVar17 = *(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_62__;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar14 == 0) break;
    uVar4 = *(uint *)(lVar9 + 0x18);
    if (uVar4 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar4 + 1;
      *(int *)(lVar14 + (long)(int)uVar4 * 4 + 0x20) = (int)uVar26;
    }
    else {
      FUN_02b9f3a0(uVar26,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      lVar11 = *(long *)(in_stack_00000108 + 0x28);
      if (lVar11 == 0) break;
    }
    if ((*(long *)(lVar11 + 0x10) == 0) || (lVar9 = *(long *)(in_stack_00000108 + 0x40), lVar9 == 0)
       ) break;
    iVar3 = *(int *)(*(long *)(lVar11 + 0x10) + 0x18);
    lVar11 = *(long *)(lVar9 + 0x10);
    lVar14 = *(long *)
              Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar11 == 0) break;
    uVar4 = *(uint *)(lVar9 + 0x18);
    iVar3 = iVar3 + -1;
    if (uVar4 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar4 + 1;
      *(int *)(lVar11 + (long)(int)uVar4 * 4 + 0x20) = iVar3;
    }
    else {
      FUN_02b2c8dc(lVar9,iVar3,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    puVar12 = *(undefined4 **)
               (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
               0xb8);
    uVar42 = *puVar12;
    uVar41 = puVar12[1];
    uVar40 = puVar12[2];
    uVar39 = puVar12[3];
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
    if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_01beda6c;
    uVar40 = *(undefined4 *)(lVar25 + 0x24);
    fVar33 = *pfVar30;
    uVar39 = FUN_03911ddc(*(undefined4 *)puVar31,&stack0x000000c0,0);
    if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_01beda6c;
    *(undefined4 *)puVar31 = uVar39;
    *(undefined4 *)(lVar25 + 0x24) = uVar40;
    *pfVar30 = fVar33;
    if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_01beda6c;
    uVar40 = *(undefined4 *)(lVar2 + 0x24);
    fVar33 = *pfVar27;
    uVar39 = FUN_03911ddc(*(undefined4 *)puVar29,&stack0x000000c0,0);
    if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_01beda6c;
    *(undefined4 *)puVar29 = uVar39;
    *(undefined4 *)(lVar2 + 0x24) = uVar40;
    *pfVar27 = fVar33;
    if (*(uint *)(lVar13 + 0x18) <= uVar21) goto LAB_01beda6c;
    uVar40 = *(undefined4 *)(lVar15 + 0x24);
    fVar33 = *pfVar23;
    uVar39 = FUN_03911ddc(*(undefined4 *)puVar16,&stack0x000000c0,0);
    if (*(uint *)(lVar13 + 0x18) <= uVar21) goto LAB_01beda6c;
    *(undefined4 *)puVar16 = uVar39;
    *(undefined4 *)(lVar15 + 0x24) = uVar40;
    *pfVar23 = fVar33;
    if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_01beda6c;
    pfVar1 = (float *)(lVar28 + 0x24);
    fVar34 = *pfVar1;
    fVar36 = *pfVar32;
    fVar33 = (float)FUN_03911ddc(*pfVar24,&stack0x000000c0,0);
    if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_01beda6c;
    *pfVar24 = fVar33;
    *pfVar1 = fVar34;
    *pfVar32 = fVar36;
    if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_01beda6c;
    *puVar31 = CONCAT44(fVar38 + (float)((ulong)*puVar31 >> 0x20),fVar35 + (float)*puVar31);
    *pfVar30 = *pfVar30 + unaff_s14;
    if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_01beda6c;
    *puVar29 = CONCAT44(fVar38 + (float)((ulong)*puVar29 >> 0x20),fVar35 + (float)*puVar29);
    *pfVar27 = *pfVar27 + unaff_s14;
    if (*(uint *)(lVar13 + 0x18) <= uVar21) goto LAB_01beda6c;
    *puVar16 = CONCAT44(fVar38 + (float)((ulong)*puVar16 >> 0x20),fVar35 + (float)*puVar16);
    *pfVar23 = *pfVar23 + unaff_s14;
    if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_01beda6c;
    *pfVar24 = fVar35 + fVar33;
    *pfVar1 = fVar38 + fVar34;
    *pfVar32 = fVar36 + unaff_s14;
    param_1 = *(long *)(in_stack_00000108 + 0x38);
    if (param_1 == 0) break;
    in_x13 = 0x50;
    in_x14 = 0xc;
    if (*(uint *)(param_1 + 0x18) <= uVar18) goto LAB_01beda6c;
    if (*(long *)(in_stack_00000108 + 0x30) == 0) break;
    unaff_x29 = in_stack_00000108;
    in_x9 = *(long *)(*(long *)(in_stack_00000108 + 0x30) + 0x60);
  }
LAB_01bed9b8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
LAB_01bed818:
  if (*(long *)(lVar13 + 0x60) == 0) goto LAB_01bed9b8;
  if (*(int *)(*(long *)(lVar13 + 0x60) + 0x18) <= (int)uVar18) {
    uVar26 = thunk_FUN_01afaadc(*(undefined8 *)
                                 Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                               );
    FUN_03924d70(DAT_00b55290,uVar26,0);
    *(undefined8 *)(unaff_x29 + 0x18) = uVar26;
    thunk_FUN_01b4f09c((undefined8 *)(unaff_x29 + 0x18),uVar26);
    *(undefined4 *)(unaff_x29 + 0x10) = 2;
    return 1;
  }
  lVar13 = *(long *)(unaff_x29 + 0x28);
  if (lVar13 == 0) goto LAB_01bed9b8;
  lVar25 = *(long *)(unaff_x29 + 0x40);
  lVar28 = *(long *)(lVar13 + 0x18);
  if (lVar28 == 0) {
    lVar28 = thunk_FUN_01afaadc(*(undefined8 *)puVar5);
    FUN_024c3984(lVar28,lVar13,*(undefined8 *)puVar8,0);
    *(long *)(lVar13 + 0x18) = lVar28;
    thunk_FUN_01b4f09c((long *)(lVar13 + 0x18),lVar28);
  }
  if (lVar25 == 0) goto LAB_01bed9b8;
  FUN_02b2e224(lVar25,lVar28,*(undefined8 *)puVar6);
  if ((*(long *)(unaff_x29 + 0x30) == 0) ||
     (lVar13 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar13 == 0)) goto LAB_01bed9b8;
  uVar26 = *(undefined8 *)(unaff_x29 + 0x40);
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (*(uint *)(lVar13 + 0x18) <= uVar18) {
LAB_01beda6c:
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
  FUN_036facb8(lVar13 + lVar15 + 0x20,uVar26,0);
  if ((*(long *)(unaff_x29 + 0x30) == 0) ||
     (lVar13 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar13 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar13 + 0x18) <= uVar18) goto LAB_01beda6c;
  lVar28 = *(long *)(lVar13 + lVar15 + 0x20);
  if (lVar28 == 0) goto LAB_01bed9b8;
  FUN_0390262c(lVar28,*(undefined8 *)(lVar13 + lVar15 + 0x30),0);
  if ((*(long *)(unaff_x29 + 0x30) == 0) ||
     (lVar13 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar13 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar13 + 0x18) <= uVar18) goto LAB_01beda6c;
  lVar28 = *(long *)(lVar13 + lVar15 + 0x20);
  if (lVar28 == 0) goto LAB_01bed9b8;
  FUN_03902830(lVar28,*(undefined8 *)(lVar13 + lVar15 + 0x48),0);
  if ((*(long *)(unaff_x29 + 0x30) == 0) ||
     (lVar13 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar13 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar13 + 0x18) <= uVar18) goto LAB_01beda6c;
  lVar28 = *(long *)(lVar13 + lVar15 + 0x20);
  if (lVar28 == 0) goto LAB_01bed9b8;
  FUN_03902a3c(lVar28,*(undefined8 *)(lVar13 + lVar15 + 0x58),0);
  if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_01bed9b8;
  lVar13 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60);
  if (lVar13 == 0) goto LAB_01bed9b8;
  if (*(uint *)(lVar13 + 0x18) <= uVar18) goto LAB_01beda6c;
  plVar10 = *(long **)(in_stack_00000060 + 0x30);
  if (plVar10 == (long *)0x0) goto LAB_01bed9b8;
  (**(code **)(*plVar10 + 0x7e8))
            (plVar10,*(undefined8 *)(lVar13 + lVar15 + 0x20),uVar18,
             *(undefined8 *)(*plVar10 + 0x7f0));
  lVar13 = *(long *)(unaff_x29 + 0x30);
  uVar18 = uVar18 + 1;
  lVar15 = lVar15 + 0x50;
  if (lVar13 == 0) goto LAB_01bed9b8;
  goto LAB_01bed818;
}


