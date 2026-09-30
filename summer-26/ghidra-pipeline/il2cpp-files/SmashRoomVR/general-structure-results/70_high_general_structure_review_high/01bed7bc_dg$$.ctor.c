/*
FUNCTION_NAME: dg$$.ctor
ENTRY_POINT: 01bed7bc
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


undefined8 dg___ctor(long param_1)

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
  uint in_w10;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  ulong in_x11;
  long lVar23;
  long in_x12;
  long lVar24;
  long in_x13;
  long in_x14;
  long in_x17;
  float *pfVar25;
  long lVar26;
  uint uVar27;
  float *pfVar28;
  long lVar29;
  undefined8 uVar30;
  float *pfVar31;
  long lVar32;
  undefined8 *puVar33;
  float *pfVar34;
  undefined8 *puVar35;
  float *pfVar36;
  long unaff_x29;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined8 unaff_d13;
  float unaff_s14;
  ulong in_stack_00000020;
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
  
  while ((uint)in_x17 < in_w10) {
    *(undefined4 *)(in_x9 + in_x17 * 4 + 0x20) = *(undefined4 *)(param_1 + in_x17 * 4 + 0x20);
    puVar12 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_7__;
    puVar11 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
    puVar10 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_65__;
    puVar9 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_61__;
    do {
      lVar17 = *(long *)(unaff_x29 + 0x30);
      in_x11 = in_x11 + 1;
      in_x12 = in_x12 + 0x178;
      if (in_stack_00000020 == in_x11) {
        if (lVar17 == 0) goto LAB_01bed9b8;
        lVar26 = 0;
        uVar27 = 0;
        goto LAB_01bed818;
      }
      if ((lVar17 == 0) || (lVar26 = *(long *)(lVar17 + 0x38), lVar26 == 0)) goto LAB_01bed9b8;
      if (*(uint *)(lVar26 + 0x18) <= in_x11) goto LAB_01beda6c;
    } while (*(char *)(lVar26 + in_x12) == '\0');
    lVar32 = *(long *)(unaff_x29 + 0x38);
    if (lVar32 == 0) goto LAB_01bed9b8;
    uVar27 = *(uint *)(lVar26 + in_x12 + -0x13c);
    lVar29 = (long)(int)uVar27;
    if (*(uint *)(lVar32 + 0x18) <= uVar27) break;
    lVar32 = *(long *)(lVar32 + lVar29 * in_x13 + 0x30);
    if (lVar32 == 0) goto LAB_01bed9b8;
    uVar7 = *(uint *)(lVar26 + in_x12 + -0x128);
    lVar26 = (long)(int)uVar7;
    if ((*(uint *)(lVar32 + 0x18) <= uVar7) ||
       (uVar1 = uVar7 + 2, *(uint *)(lVar32 + 0x18) <= uVar1)) break;
    lVar23 = (long)(int)uVar1;
    lVar22 = lVar32 + lVar26 * in_x14;
    lVar19 = lVar32 + lVar23 * in_x14;
    uVar30 = *(undefined8 *)(lVar22 + 0x20);
    fVar37 = *(float *)(lVar22 + 0x28);
    puVar20 = (undefined8 *)(lVar19 + 0x20);
    uVar41 = *puVar20;
    lVar17 = *(long *)(lVar17 + 0x60);
    if (lVar17 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar17 + 0x18) <= uVar27) break;
    lVar17 = *(long *)(lVar17 + lVar29 * in_x13 + 0x30);
    if (lVar17 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar17 + 0x18) <= uVar7) break;
    fVar38 = (float)uVar30;
    fVar40 = (float)((ulong)uVar30 >> 0x20);
    fVar39 = (fVar38 + (float)uVar41) * (float)unaff_d13;
    fVar42 = (fVar40 + (float)((ulong)uVar41 >> 0x20)) * (float)((ulong)unaff_d13 >> 0x20);
    lVar22 = lVar17 + lVar26 * in_x14;
    puVar35 = (undefined8 *)(lVar22 + 0x20);
    *puVar35 = CONCAT44(fVar40 - fVar42,fVar38 - fVar39);
    pfVar34 = (float *)(lVar22 + 0x28);
    *pfVar34 = fVar37;
    uVar2 = uVar7 + 1;
    if ((*(uint *)(lVar32 + 0x18) <= uVar2) ||
       (lVar24 = (long)(int)uVar2, *(uint *)(lVar17 + 0x18) <= uVar2)) break;
    lVar5 = lVar32 + lVar24 * 0xc;
    uVar30 = *(undefined8 *)(lVar5 + 0x20);
    fVar37 = *(float *)(lVar5 + 0x28);
    lVar5 = lVar17 + lVar24 * 0xc;
    puVar33 = (undefined8 *)(lVar5 + 0x20);
    *puVar33 = CONCAT44((float)((ulong)uVar30 >> 0x20) - fVar42,(float)uVar30 - fVar39);
    pfVar31 = (float *)(lVar5 + 0x28);
    *pfVar31 = fVar37;
    if ((*(uint *)(lVar32 + 0x18) <= uVar1) || (*(uint *)(lVar17 + 0x18) <= uVar1)) break;
    uVar30 = *puVar20;
    fVar37 = *(float *)(lVar19 + 0x28);
    lVar19 = lVar17 + lVar23 * in_x14;
    puVar20 = (undefined8 *)(lVar19 + 0x20);
    *puVar20 = CONCAT44((float)((ulong)uVar30 >> 0x20) - fVar42,(float)uVar30 - fVar39);
    pfVar25 = (float *)(lVar19 + 0x28);
    *pfVar25 = fVar37;
    uVar3 = uVar7 + 3;
    if (*(uint *)(lVar32 + 0x18) <= uVar3) break;
    in_x17 = (long)(int)uVar3;
    if (*(uint *)(lVar17 + 0x18) <= uVar3) break;
    lVar32 = lVar32 + in_x17 * 0xc;
    uVar30 = *(undefined8 *)(lVar32 + 0x20);
    fVar37 = *(float *)(lVar32 + 0x28);
    lVar32 = lVar17 + in_x17 * 0xc;
    pfVar28 = (float *)(lVar32 + 0x20);
    *(ulong *)pfVar28 = CONCAT44((float)((ulong)uVar30 >> 0x20) - fVar42,(float)uVar30 - fVar39);
    pfVar36 = (float *)(lVar32 + 0x28);
    *pfVar36 = fVar37;
    uVar30 = FUN_0391a0e8(0x3f800000,0x3fc00000,0);
    lVar15 = *(long *)(in_stack_00000108 + 0x28);
    if ((lVar15 == 0) || (lVar13 = *(long *)(lVar15 + 0x10), lVar13 == 0)) goto LAB_01bed9b8;
    lVar18 = *(long *)(lVar13 + 0x10);
    lVar21 = *(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_62__;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar18 == 0) goto LAB_01bed9b8;
    uVar8 = *(uint *)(lVar13 + 0x18);
    if (uVar8 < *(uint *)(lVar18 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar8 + 1;
      *(int *)(lVar18 + (long)(int)uVar8 * 4 + 0x20) = (int)uVar30;
    }
    else {
      FUN_02b9f3a0(uVar30,lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70))
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
    uVar46 = *puVar16;
    uVar45 = puVar16[1];
    uVar44 = puVar16[2];
    uVar43 = puVar16[3];
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed258 = '\x01';
    }
    FUN_03910ecc(&stack0x00000080,0,0,0,uVar46,uVar45,uVar44,uVar43,0);
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f8 = in_stack_000000b8;
    in_stack_000000f0 = in_stack_000000b0;
    if (*(uint *)(lVar17 + 0x18) <= uVar7) break;
    uVar44 = *(undefined4 *)(lVar22 + 0x24);
    fVar37 = *pfVar34;
    uVar43 = FUN_03911ddc(*(undefined4 *)puVar35,&stack0x000000c0,0);
    if (*(uint *)(lVar17 + 0x18) <= uVar7) break;
    *(undefined4 *)puVar35 = uVar43;
    *(undefined4 *)(lVar22 + 0x24) = uVar44;
    *pfVar34 = fVar37;
    if (*(uint *)(lVar17 + 0x18) <= uVar2) break;
    uVar44 = *(undefined4 *)(lVar5 + 0x24);
    fVar37 = *pfVar31;
    uVar43 = FUN_03911ddc(*(undefined4 *)puVar33,&stack0x000000c0,0);
    if (*(uint *)(lVar17 + 0x18) <= uVar2) break;
    *(undefined4 *)puVar33 = uVar43;
    *(undefined4 *)(lVar5 + 0x24) = uVar44;
    *pfVar31 = fVar37;
    if (*(uint *)(lVar17 + 0x18) <= uVar1) break;
    uVar44 = *(undefined4 *)(lVar19 + 0x24);
    fVar37 = *pfVar25;
    uVar43 = FUN_03911ddc(*(undefined4 *)puVar20,&stack0x000000c0,0);
    if (*(uint *)(lVar17 + 0x18) <= uVar1) break;
    *(undefined4 *)puVar20 = uVar43;
    *(undefined4 *)(lVar19 + 0x24) = uVar44;
    *pfVar25 = fVar37;
    if (*(uint *)(lVar17 + 0x18) <= uVar3) break;
    pfVar4 = (float *)(lVar32 + 0x24);
    fVar38 = *pfVar4;
    fVar40 = *pfVar36;
    fVar37 = (float)FUN_03911ddc(*pfVar28,&stack0x000000c0,0);
    if (*(uint *)(lVar17 + 0x18) <= uVar3) break;
    *pfVar28 = fVar37;
    *pfVar4 = fVar38;
    *pfVar36 = fVar40;
    if (*(uint *)(lVar17 + 0x18) <= uVar7) break;
    *puVar35 = CONCAT44(fVar42 + (float)((ulong)*puVar35 >> 0x20),fVar39 + (float)*puVar35);
    *pfVar34 = *pfVar34 + unaff_s14;
    if (*(uint *)(lVar17 + 0x18) <= uVar2) break;
    *puVar33 = CONCAT44(fVar42 + (float)((ulong)*puVar33 >> 0x20),fVar39 + (float)*puVar33);
    *pfVar31 = *pfVar31 + unaff_s14;
    if (*(uint *)(lVar17 + 0x18) <= uVar1) break;
    *puVar20 = CONCAT44(fVar42 + (float)((ulong)*puVar20 >> 0x20),fVar39 + (float)*puVar20);
    *pfVar25 = *pfVar25 + unaff_s14;
    if (*(uint *)(lVar17 + 0x18) <= uVar3) break;
    *pfVar28 = fVar39 + fVar37;
    *pfVar4 = fVar42 + fVar38;
    *pfVar36 = fVar40 + unaff_s14;
    lVar17 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar17 == 0) goto LAB_01bed9b8;
    in_x13 = 0x50;
    in_x14 = 0xc;
    if (*(uint *)(lVar17 + 0x18) <= uVar27) break;
    if ((*(long *)(in_stack_00000108 + 0x30) == 0) ||
       (lVar32 = *(long *)(*(long *)(in_stack_00000108 + 0x30) + 0x60), lVar32 == 0))
    goto LAB_01bed9b8;
    if (*(uint *)(lVar32 + 0x18) <= uVar27) break;
    lVar17 = *(long *)(lVar17 + lVar29 * 0x50 + 0x48);
    if (lVar17 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar17 + 0x18) <= uVar7) break;
    lVar32 = *(long *)(lVar32 + lVar29 * 0x50 + 0x48);
    if (lVar32 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar32 + 0x18) <= uVar7) break;
    *(undefined8 *)(lVar32 + lVar26 * 8 + 0x20) = *(undefined8 *)(lVar17 + lVar26 * 8 + 0x20);
    if ((*(uint *)(lVar17 + 0x18) <= uVar2) || (*(uint *)(lVar32 + 0x18) <= uVar2)) break;
    *(undefined8 *)(lVar32 + lVar24 * 8 + 0x20) = *(undefined8 *)(lVar17 + lVar24 * 8 + 0x20);
    if ((*(uint *)(lVar17 + 0x18) <= uVar1) || (*(uint *)(lVar32 + 0x18) <= uVar1)) break;
    *(undefined8 *)(lVar32 + lVar23 * 8 + 0x20) = *(undefined8 *)(lVar17 + lVar23 * 8 + 0x20);
    if ((*(uint *)(lVar17 + 0x18) <= uVar3) || (*(uint *)(lVar32 + 0x18) <= uVar3)) break;
    *(undefined8 *)(lVar32 + in_x17 * 8 + 0x20) = *(undefined8 *)(lVar17 + in_x17 * 8 + 0x20);
    lVar17 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar17 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar17 + 0x18) <= uVar27) break;
    if ((*(long *)(in_stack_00000108 + 0x30) == 0) ||
       (lVar32 = *(long *)(*(long *)(in_stack_00000108 + 0x30) + 0x60), lVar32 == 0))
    goto LAB_01bed9b8;
    if (*(uint *)(lVar32 + 0x18) <= uVar27) break;
    param_1 = *(long *)(lVar17 + lVar29 * 0x50 + 0x58);
    if (param_1 == 0) goto LAB_01bed9b8;
    if (*(uint *)(param_1 + 0x18) <= uVar7) break;
    in_x9 = *(long *)(lVar32 + lVar29 * 0x50 + 0x58);
    if (in_x9 == 0) goto LAB_01bed9b8;
    if (((((*(uint *)(in_x9 + 0x18) <= uVar7) ||
          (*(undefined4 *)(in_x9 + lVar26 * 4 + 0x20) = *(undefined4 *)(param_1 + lVar26 * 4 + 0x20)
          , *(uint *)(param_1 + 0x18) <= uVar2)) || (*(uint *)(in_x9 + 0x18) <= uVar2)) ||
        ((*(undefined4 *)(in_x9 + lVar24 * 4 + 0x20) = *(undefined4 *)(param_1 + lVar24 * 4 + 0x20),
         *(uint *)(param_1 + 0x18) <= uVar1 || (*(uint *)(in_x9 + 0x18) <= uVar1)))) ||
       (*(undefined4 *)(in_x9 + lVar23 * 4 + 0x20) = *(undefined4 *)(param_1 + lVar23 * 4 + 0x20),
       *(uint *)(param_1 + 0x18) <= uVar3)) break;
    unaff_x29 = in_stack_00000108;
    in_w10 = *(uint *)(in_x9 + 0x18);
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
  if (*(int *)(*(long *)(lVar17 + 0x60) + 0x18) <= (int)uVar27) {
    uVar30 = thunk_FUN_01afaadc(*(undefined8 *)
                                 Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                               );
    FUN_03924d70(DAT_00b55290,uVar30,0);
    *(undefined8 *)(unaff_x29 + 0x18) = uVar30;
    thunk_FUN_01b4f09c((undefined8 *)(unaff_x29 + 0x18),uVar30);
    *(undefined4 *)(unaff_x29 + 0x10) = 2;
    return 1;
  }
  lVar17 = *(long *)(unaff_x29 + 0x28);
  if (lVar17 == 0) goto LAB_01bed9b8;
  lVar29 = *(long *)(unaff_x29 + 0x40);
  lVar32 = *(long *)(lVar17 + 0x18);
  if (lVar32 == 0) {
    lVar32 = thunk_FUN_01afaadc(*(undefined8 *)puVar9);
    FUN_024c3984(lVar32,lVar17,*(undefined8 *)puVar12,0);
    *(long *)(lVar17 + 0x18) = lVar32;
    thunk_FUN_01b4f09c((long *)(lVar17 + 0x18),lVar32);
  }
  if (lVar29 == 0) goto LAB_01bed9b8;
  FUN_02b2e224(lVar29,lVar32,*(undefined8 *)puVar10);
  if ((*(long *)(unaff_x29 + 0x30) == 0) ||
     (lVar17 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar17 == 0)) goto LAB_01bed9b8;
  uVar30 = *(undefined8 *)(unaff_x29 + 0x40);
  if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_01beda6c;
  FUN_036facb8(lVar17 + lVar26 + 0x20,uVar30,0);
  if ((*(long *)(unaff_x29 + 0x30) == 0) ||
     (lVar17 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar17 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_01beda6c;
  lVar32 = *(long *)(lVar17 + lVar26 + 0x20);
  if (lVar32 == 0) goto LAB_01bed9b8;
  FUN_0390262c(lVar32,*(undefined8 *)(lVar17 + lVar26 + 0x30),0);
  if ((*(long *)(unaff_x29 + 0x30) == 0) ||
     (lVar17 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar17 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_01beda6c;
  lVar32 = *(long *)(lVar17 + lVar26 + 0x20);
  if (lVar32 == 0) goto LAB_01bed9b8;
  FUN_03902830(lVar32,*(undefined8 *)(lVar17 + lVar26 + 0x48),0);
  if ((*(long *)(unaff_x29 + 0x30) == 0) ||
     (lVar17 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar17 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_01beda6c;
  lVar32 = *(long *)(lVar17 + lVar26 + 0x20);
  if (lVar32 == 0) goto LAB_01bed9b8;
  FUN_03902a3c(lVar32,*(undefined8 *)(lVar17 + lVar26 + 0x58),0);
  if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_01bed9b8;
  lVar17 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60);
  if (lVar17 == 0) goto LAB_01bed9b8;
  if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_01beda6c;
  plVar14 = *(long **)(in_stack_00000060 + 0x30);
  if (plVar14 == (long *)0x0) goto LAB_01bed9b8;
  (**(code **)(*plVar14 + 0x7e8))
            (plVar14,*(undefined8 *)(lVar17 + lVar26 + 0x20),uVar27,
             *(undefined8 *)(*plVar14 + 0x7f0));
  lVar17 = *(long *)(unaff_x29 + 0x30);
  uVar27 = uVar27 + 1;
  lVar26 = lVar26 + 0x50;
  if (lVar17 == 0) goto LAB_01bed9b8;
  goto LAB_01bed818;
}


