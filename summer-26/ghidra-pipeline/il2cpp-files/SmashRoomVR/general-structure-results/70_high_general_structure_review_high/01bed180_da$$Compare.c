/*
FUNCTION_NAME: da$$Compare
ENTRY_POINT: 01bed180
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


undefined8 da__Compare(float param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  float *pfVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  long in_x9;
  long lVar15;
  undefined8 *in_x10;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long in_x12;
  long lVar19;
  long in_x14;
  float *pfVar20;
  uint uVar21;
  long unaff_x20;
  float *pfVar22;
  uint uVar23;
  long unaff_x22;
  float *pfVar24;
  undefined8 *puVar25;
  long unaff_x25;
  float *pfVar26;
  long lVar27;
  undefined8 *puVar28;
  float *pfVar29;
  long lVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
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
    fVar33 = (float)((ulong)param_2 >> 0x20);
    fVar35 = ((float)param_2 + (float)param_3) * (float)unaff_d13;
    fVar37 = (fVar33 + (float)((ulong)param_3 >> 0x20)) * (float)((ulong)unaff_d13 >> 0x20);
    lVar27 = unaff_x25 + unaff_x22 * in_x14;
    puVar28 = (undefined8 *)(lVar27 + 0x20);
    *puVar28 = CONCAT44(fVar33 - fVar37,(float)param_2 - fVar35);
    pfVar26 = (float *)(lVar27 + 0x28);
    *pfVar26 = param_1;
    uVar23 = (uint)unaff_x22;
    uVar21 = uVar23 + 1;
    if ((*(uint *)(in_x9 + 0x18) <= uVar21) ||
       (lVar19 = (long)(int)uVar21, *(uint *)(unaff_x25 + 0x18) <= uVar21)) break;
    lVar14 = in_x9 + lVar19 * 0xc;
    uVar32 = *(undefined8 *)(lVar14 + 0x20);
    fVar33 = *(float *)(lVar14 + 0x28);
    lVar14 = unaff_x25 + lVar19 * 0xc;
    puVar25 = (undefined8 *)(lVar14 + 0x20);
    *puVar25 = CONCAT44((float)((ulong)uVar32 >> 0x20) - fVar37,(float)uVar32 - fVar35);
    pfVar24 = (float *)(lVar14 + 0x28);
    *pfVar24 = fVar33;
    uVar18 = (uint)in_x12;
    if ((*(uint *)(in_x9 + 0x18) <= uVar18) || (*(uint *)(unaff_x25 + 0x18) <= uVar18)) break;
    fVar33 = *(float *)(in_x10 + 1);
    lVar30 = unaff_x25 + in_x12 * in_x14;
    puVar31 = (undefined8 *)(lVar30 + 0x20);
    *puVar31 = CONCAT44((float)((ulong)*in_x10 >> 0x20) - fVar37,(float)*in_x10 - fVar35);
    pfVar20 = (float *)(lVar30 + 0x28);
    *pfVar20 = fVar33;
    uVar1 = uVar23 + 3;
    if (*(uint *)(in_x9 + 0x18) <= uVar1) break;
    lVar11 = (long)(int)uVar1;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar1) break;
    lVar3 = in_x9 + lVar11 * 0xc;
    uVar32 = *(undefined8 *)(lVar3 + 0x20);
    fVar33 = *(float *)(lVar3 + 0x28);
    lVar3 = unaff_x25 + lVar11 * 0xc;
    pfVar22 = (float *)(lVar3 + 0x20);
    *(ulong *)pfVar22 = CONCAT44((float)((ulong)uVar32 >> 0x20) - fVar37,(float)uVar32 - fVar35);
    pfVar29 = (float *)(lVar3 + 0x28);
    *pfVar29 = fVar33;
    uVar32 = FUN_0391a0e8(0x3f800000,0x3fc00000,0);
    lVar12 = *(long *)(in_stack_00000108 + 0x28);
    if ((lVar12 == 0) || (lVar9 = *(long *)(lVar12 + 0x10), lVar9 == 0)) goto LAB_01bed9b8;
    lVar15 = *(long *)(lVar9 + 0x10);
    lVar16 = *(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_62__;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_01bed9b8;
    uVar17 = *(uint *)(lVar9 + 0x18);
    if (uVar17 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar17 + 1;
      *(int *)(lVar15 + (long)(int)uVar17 * 4 + 0x20) = (int)uVar32;
    }
    else {
      FUN_02b9f3a0(uVar32,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      lVar12 = *(long *)(in_stack_00000108 + 0x28);
      if (lVar12 == 0) goto LAB_01bed9b8;
    }
    if ((*(long *)(lVar12 + 0x10) == 0) || (lVar9 = *(long *)(in_stack_00000108 + 0x40), lVar9 == 0)
       ) goto LAB_01bed9b8;
    iVar4 = *(int *)(*(long *)(lVar12 + 0x10) + 0x18);
    lVar12 = *(long *)(lVar9 + 0x10);
    lVar15 = *(long *)
              Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_01bed9b8;
    uVar17 = *(uint *)(lVar9 + 0x18);
    iVar4 = iVar4 + -1;
    if (uVar17 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar17 + 1;
      *(int *)(lVar12 + (long)(int)uVar17 * 4 + 0x20) = iVar4;
    }
    else {
      FUN_02b2c8dc(lVar9,iVar4,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    puVar13 = *(undefined4 **)
               (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
               0xb8);
    uVar41 = *puVar13;
    uVar40 = puVar13[1];
    uVar39 = puVar13[2];
    uVar38 = puVar13[3];
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed258 = '\x01';
    }
    FUN_03910ecc(&stack0x00000080,0,0,0,uVar41,uVar40,uVar39,uVar38,0);
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f8 = in_stack_000000b8;
    in_stack_000000f0 = in_stack_000000b0;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar23) break;
    uVar39 = *(undefined4 *)(lVar27 + 0x24);
    fVar33 = *pfVar26;
    uVar38 = FUN_03911ddc(*(undefined4 *)puVar28,&stack0x000000c0,0);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar23) break;
    *(undefined4 *)puVar28 = uVar38;
    *(undefined4 *)(lVar27 + 0x24) = uVar39;
    *pfVar26 = fVar33;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar21) break;
    uVar39 = *(undefined4 *)(lVar14 + 0x24);
    fVar33 = *pfVar24;
    uVar38 = FUN_03911ddc(*(undefined4 *)puVar25,&stack0x000000c0,0);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar21) break;
    *(undefined4 *)puVar25 = uVar38;
    *(undefined4 *)(lVar14 + 0x24) = uVar39;
    *pfVar24 = fVar33;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar18) break;
    uVar39 = *(undefined4 *)(lVar30 + 0x24);
    fVar33 = *pfVar20;
    uVar38 = FUN_03911ddc(*(undefined4 *)puVar31,&stack0x000000c0,0);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar18) break;
    *(undefined4 *)puVar31 = uVar38;
    *(undefined4 *)(lVar30 + 0x24) = uVar39;
    *pfVar20 = fVar33;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar1) break;
    pfVar2 = (float *)(lVar3 + 0x24);
    fVar34 = *pfVar2;
    fVar36 = *pfVar29;
    fVar33 = (float)FUN_03911ddc(*pfVar22,&stack0x000000c0,0);
    lVar27 = in_stack_00000108;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar1) break;
    *pfVar22 = fVar33;
    *pfVar2 = fVar34;
    *pfVar29 = fVar36;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar23) break;
    *puVar28 = CONCAT44(fVar37 + (float)((ulong)*puVar28 >> 0x20),fVar35 + (float)*puVar28);
    *pfVar26 = *pfVar26 + unaff_s14;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar21) break;
    *puVar25 = CONCAT44(fVar37 + (float)((ulong)*puVar25 >> 0x20),fVar35 + (float)*puVar25);
    *pfVar24 = *pfVar24 + unaff_s14;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar18) break;
    *puVar31 = CONCAT44(fVar37 + (float)((ulong)*puVar31 >> 0x20),fVar35 + (float)*puVar31);
    *pfVar20 = *pfVar20 + unaff_s14;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar1) break;
    *pfVar22 = fVar35 + fVar33;
    *pfVar2 = fVar37 + fVar34;
    *pfVar29 = fVar36 + unaff_s14;
    lVar14 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar14 == 0) goto LAB_01bed9b8;
    in_x14 = 0xc;
    uVar17 = (uint)unaff_x20;
    if (*(uint *)(lVar14 + 0x18) <= uVar17) break;
    if ((*(long *)(in_stack_00000108 + 0x30) == 0) ||
       (lVar30 = *(long *)(*(long *)(in_stack_00000108 + 0x30) + 0x60), lVar30 == 0))
    goto LAB_01bed9b8;
    if (*(uint *)(lVar30 + 0x18) <= uVar17) break;
    lVar14 = *(long *)(lVar14 + unaff_x20 * 0x50 + 0x48);
    if (lVar14 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar14 + 0x18) <= uVar23) break;
    lVar30 = *(long *)(lVar30 + unaff_x20 * 0x50 + 0x48);
    if (lVar30 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar30 + 0x18) <= uVar23) break;
    *(undefined8 *)(lVar30 + unaff_x22 * 8 + 0x20) = *(undefined8 *)(lVar14 + unaff_x22 * 8 + 0x20);
    if ((*(uint *)(lVar14 + 0x18) <= uVar21) || (*(uint *)(lVar30 + 0x18) <= uVar21)) break;
    *(undefined8 *)(lVar30 + lVar19 * 8 + 0x20) = *(undefined8 *)(lVar14 + lVar19 * 8 + 0x20);
    if ((*(uint *)(lVar14 + 0x18) <= uVar18) || (*(uint *)(lVar30 + 0x18) <= uVar18)) break;
    *(undefined8 *)(lVar30 + in_x12 * 8 + 0x20) = *(undefined8 *)(lVar14 + in_x12 * 8 + 0x20);
    if ((*(uint *)(lVar14 + 0x18) <= uVar1) || (*(uint *)(lVar30 + 0x18) <= uVar1)) break;
    *(undefined8 *)(lVar30 + lVar11 * 8 + 0x20) = *(undefined8 *)(lVar14 + lVar11 * 8 + 0x20);
    lVar14 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar14 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar14 + 0x18) <= uVar17) break;
    if ((*(long *)(in_stack_00000108 + 0x30) == 0) ||
       (lVar30 = *(long *)(*(long *)(in_stack_00000108 + 0x30) + 0x60), lVar30 == 0))
    goto LAB_01bed9b8;
    if (*(uint *)(lVar30 + 0x18) <= uVar17) break;
    lVar14 = *(long *)(lVar14 + unaff_x20 * 0x50 + 0x58);
    if (lVar14 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar14 + 0x18) <= uVar23) break;
    lVar30 = *(long *)(lVar30 + unaff_x20 * 0x50 + 0x58);
    if (lVar30 == 0) goto LAB_01bed9b8;
    if (((((*(uint *)(lVar30 + 0x18) <= uVar23) ||
          (*(undefined4 *)(lVar30 + unaff_x22 * 4 + 0x20) =
                *(undefined4 *)(lVar14 + unaff_x22 * 4 + 0x20), *(uint *)(lVar14 + 0x18) <= uVar21))
         || (*(uint *)(lVar30 + 0x18) <= uVar21)) ||
        ((*(undefined4 *)(lVar30 + lVar19 * 4 + 0x20) = *(undefined4 *)(lVar14 + lVar19 * 4 + 0x20),
         *(uint *)(lVar14 + 0x18) <= uVar18 || (*(uint *)(lVar30 + 0x18) <= uVar18)))) ||
       ((*(undefined4 *)(lVar30 + in_x12 * 4 + 0x20) = *(undefined4 *)(lVar14 + in_x12 * 4 + 0x20),
        *(uint *)(lVar14 + 0x18) <= uVar1 || (*(uint *)(lVar30 + 0x18) <= uVar1)))) break;
    *(undefined4 *)(lVar30 + lVar11 * 4 + 0x20) = *(undefined4 *)(lVar14 + lVar11 * 4 + 0x20);
    puVar8 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_7__;
    puVar7 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
    puVar6 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_65__;
    puVar5 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_61__;
    do {
      lVar19 = *(long *)(in_stack_00000108 + 0x30);
      in_stack_00000028 = in_stack_00000028 + 1;
      in_stack_00000030 = in_stack_00000030 + 0x178;
      if (in_stack_00000020 == in_stack_00000028) {
        if (lVar19 == 0) goto LAB_01bed9b8;
        lVar14 = 0;
        uVar21 = 0;
        goto LAB_01bed818;
      }
      if ((lVar19 == 0) || (lVar14 = *(long *)(lVar19 + 0x38), lVar14 == 0)) goto LAB_01bed9b8;
      if (*(uint *)(lVar14 + 0x18) <= in_stack_00000028) goto LAB_01beda6c;
    } while (*(char *)(lVar14 + in_stack_00000030) == '\0');
    lVar27 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar27 == 0) goto LAB_01bed9b8;
    uVar21 = *(uint *)(lVar14 + in_stack_00000030 + -0x13c);
    unaff_x20 = (long)(int)uVar21;
    if (*(uint *)(lVar27 + 0x18) <= uVar21) break;
    in_x9 = *(long *)(lVar27 + unaff_x20 * 0x50 + 0x30);
    if (in_x9 == 0) goto LAB_01bed9b8;
    uVar23 = *(uint *)(lVar14 + in_stack_00000030 + -0x128);
    unaff_x22 = (long)(int)uVar23;
    if ((*(uint *)(in_x9 + 0x18) <= uVar23) || (*(uint *)(in_x9 + 0x18) <= uVar23 + 2)) break;
    in_x12 = (long)(int)(uVar23 + 2);
    lVar27 = in_x9 + unaff_x22 * 0xc;
    param_2 = *(undefined8 *)(lVar27 + 0x20);
    param_1 = *(float *)(lVar27 + 0x28);
    in_x10 = (undefined8 *)(in_x9 + in_x12 * 0xc + 0x20);
    param_3 = *in_x10;
    lVar27 = *(long *)(lVar19 + 0x60);
    if (lVar27 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar27 + 0x18) <= uVar21) break;
    unaff_x25 = *(long *)(lVar27 + unaff_x20 * 0x50 + 0x30);
    if (unaff_x25 == 0) goto LAB_01bed9b8;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar23) break;
  }
LAB_01beda6c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
LAB_01bed818:
  if (*(long *)(lVar19 + 0x60) == 0) {
LAB_01bed9b8:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (*(int *)(*(long *)(lVar19 + 0x60) + 0x18) <= (int)uVar21) {
    uVar32 = thunk_FUN_01afaadc(*(undefined8 *)
                                 Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                               );
    FUN_03924d70(DAT_00b55290,uVar32,0);
    *(undefined8 *)(lVar27 + 0x18) = uVar32;
    thunk_FUN_01b4f09c((undefined8 *)(lVar27 + 0x18),uVar32);
    *(undefined4 *)(lVar27 + 0x10) = 2;
    return 1;
  }
  lVar19 = *(long *)(lVar27 + 0x28);
  if (lVar19 == 0) goto LAB_01bed9b8;
  lVar11 = *(long *)(lVar27 + 0x40);
  lVar30 = *(long *)(lVar19 + 0x18);
  if (lVar30 == 0) {
    lVar30 = thunk_FUN_01afaadc(*(undefined8 *)puVar5);
    FUN_024c3984(lVar30,lVar19,*(undefined8 *)puVar8,0);
    *(long *)(lVar19 + 0x18) = lVar30;
    thunk_FUN_01b4f09c((long *)(lVar19 + 0x18),lVar30);
  }
  if (lVar11 == 0) goto LAB_01bed9b8;
  FUN_02b2e224(lVar11,lVar30,*(undefined8 *)puVar6);
  if ((*(long *)(lVar27 + 0x30) == 0) ||
     (lVar19 = *(long *)(*(long *)(lVar27 + 0x30) + 0x60), lVar19 == 0)) goto LAB_01bed9b8;
  uVar32 = *(undefined8 *)(lVar27 + 0x40);
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_01beda6c;
  FUN_036facb8(lVar19 + lVar14 + 0x20,uVar32,0);
  if ((*(long *)(lVar27 + 0x30) == 0) ||
     (lVar19 = *(long *)(*(long *)(lVar27 + 0x30) + 0x60), lVar19 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_01beda6c;
  lVar30 = *(long *)(lVar19 + lVar14 + 0x20);
  if (lVar30 == 0) goto LAB_01bed9b8;
  FUN_0390262c(lVar30,*(undefined8 *)(lVar19 + lVar14 + 0x30),0);
  if ((*(long *)(lVar27 + 0x30) == 0) ||
     (lVar19 = *(long *)(*(long *)(lVar27 + 0x30) + 0x60), lVar19 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_01beda6c;
  lVar30 = *(long *)(lVar19 + lVar14 + 0x20);
  if (lVar30 == 0) goto LAB_01bed9b8;
  FUN_03902830(lVar30,*(undefined8 *)(lVar19 + lVar14 + 0x48),0);
  if ((*(long *)(lVar27 + 0x30) == 0) ||
     (lVar19 = *(long *)(*(long *)(lVar27 + 0x30) + 0x60), lVar19 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_01beda6c;
  lVar30 = *(long *)(lVar19 + lVar14 + 0x20);
  if (lVar30 == 0) goto LAB_01bed9b8;
  FUN_03902a3c(lVar30,*(undefined8 *)(lVar19 + lVar14 + 0x58),0);
  if (*(long *)(lVar27 + 0x30) == 0) goto LAB_01bed9b8;
  lVar19 = *(long *)(*(long *)(lVar27 + 0x30) + 0x60);
  if (lVar19 == 0) goto LAB_01bed9b8;
  if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_01beda6c;
  plVar10 = *(long **)(in_stack_00000060 + 0x30);
  if (plVar10 == (long *)0x0) goto LAB_01bed9b8;
  (**(code **)(*plVar10 + 0x7e8))
            (plVar10,*(undefined8 *)(lVar19 + lVar14 + 0x20),uVar21,
             *(undefined8 *)(*plVar10 + 0x7f0));
  lVar19 = *(long *)(lVar27 + 0x30);
  uVar21 = uVar21 + 1;
  lVar14 = lVar14 + 0x50;
  if (lVar19 == 0) goto LAB_01bed9b8;
  goto LAB_01bed818;
}


