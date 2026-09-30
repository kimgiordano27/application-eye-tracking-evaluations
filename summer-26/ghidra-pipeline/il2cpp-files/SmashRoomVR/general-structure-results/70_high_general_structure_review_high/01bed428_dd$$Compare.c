/*
FUNCTION_NAME: dd$$Compare
ENTRY_POINT: 01bed428
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


undefined8
dd__Compare(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
           undefined1 param_4 [16])

{
  float *pfVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  float *unaff_x19;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float *unaff_x21;
  long lVar17;
  undefined8 uVar18;
  uint uVar19;
  long unaff_x22;
  float *unaff_x23;
  long lVar20;
  undefined8 *unaff_x24;
  long unaff_x25;
  float *unaff_x26;
  undefined8 *unaff_x27;
  float *unaff_x28;
  undefined8 *unaff_x29;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined8 unaff_d13;
  float unaff_s14;
  ulong in_stack_00000020;
  ulong in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
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
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  long in_stack_00000108;
  
  uStack00000000000000f8 = param_4._8_8_;
  uStack00000000000000f0 = param_4._0_8_;
  uStack00000000000000e8 = param_3._8_8_;
  uStack00000000000000e0 = param_3._0_8_;
  uStack00000000000000d8 = param_2._8_8_;
  uStack00000000000000d0 = param_2._0_8_;
  uStack00000000000000c8 = param_1._8_8_;
  uStack00000000000000c0 = param_1._0_8_;
  while( true ) {
                    /* try { // try from 01bed42c to 01ced443 has its CatchHandler @ 01bed9dc */
    uVar19 = (uint)unaff_x22;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar19) break;
    uVar22 = *(undefined4 *)((long)unaff_x27 + 4);
    fVar24 = *unaff_x26;
    uVar21 = FUN_03911ddc(*(undefined4 *)unaff_x27,&stack0x000000c0,0);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar19) break;
    *(undefined4 *)unaff_x27 = uVar21;
    *(undefined4 *)((long)unaff_x27 + 4) = uVar22;
    *unaff_x26 = fVar24;
    uVar14 = (uint)in_stack_00000078;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar14) break;
    uVar22 = *(undefined4 *)((long)unaff_x24 + 4);
    fVar24 = *unaff_x23;
    uVar21 = FUN_03911ddc(*(undefined4 *)unaff_x24,&stack0x000000c0,0);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar14) break;
    *(undefined4 *)unaff_x24 = uVar21;
    *(undefined4 *)((long)unaff_x24 + 4) = uVar22;
    *unaff_x23 = fVar24;
    uVar15 = (uint)in_stack_00000070;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar15) break;
    uVar22 = *(undefined4 *)((long)unaff_x29 + 4);
    fVar24 = *unaff_x19;
    uVar21 = FUN_03911ddc(*(undefined4 *)unaff_x29,&stack0x000000c0,0);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar15) break;
    *(undefined4 *)unaff_x29 = uVar21;
    *(undefined4 *)((long)unaff_x29 + 4) = uVar22;
    *unaff_x19 = fVar24;
    uVar16 = (uint)in_stack_00000058;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar16) break;
    pfVar1 = unaff_x21 + 1;
    fVar23 = *pfVar1;
    fVar25 = *unaff_x28;
    fVar24 = (float)FUN_03911ddc(*unaff_x21,&stack0x000000c0,0);
    lVar13 = in_stack_00000108;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar16) break;
    *unaff_x21 = fVar24;
    *pfVar1 = fVar23;
    *unaff_x28 = fVar25;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar19) break;
    fVar28 = *unaff_x26;
    fVar27 = (float)in_stack_00000040;
    fVar29 = (float)((ulong)in_stack_00000040 >> 0x20);
    *unaff_x27 = CONCAT44(fVar29 + (float)((ulong)*unaff_x27 >> 0x20),fVar27 + (float)*unaff_x27);
    *unaff_x26 = fVar28 + unaff_s14;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar14) break;
    fVar28 = *unaff_x23;
    *unaff_x24 = CONCAT44(fVar29 + (float)((ulong)*unaff_x24 >> 0x20),fVar27 + (float)*unaff_x24);
    *unaff_x23 = fVar28 + unaff_s14;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar15) break;
    fVar28 = *unaff_x19;
    *unaff_x29 = CONCAT44(fVar29 + (float)((ulong)*unaff_x29 >> 0x20),fVar27 + (float)*unaff_x29);
    *unaff_x19 = fVar28 + unaff_s14;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar16) break;
    *unaff_x21 = fVar27 + fVar24;
    *pfVar1 = fVar29 + fVar23;
    *unaff_x28 = fVar25 + unaff_s14;
    lVar9 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar9 == 0) goto LAB_01bed9b8;
    uVar12 = (uint)in_stack_00000038;
    if (*(uint *)(lVar9 + 0x18) <= uVar12) break;
    if ((*(long *)(in_stack_00000108 + 0x30) == 0) ||
       (lVar10 = *(long *)(*(long *)(in_stack_00000108 + 0x30) + 0x60), lVar10 == 0))
    goto LAB_01bed9b8;
    if (*(uint *)(lVar10 + 0x18) <= uVar12) break;
    lVar9 = *(long *)(lVar9 + in_stack_00000038 * 0x50 + 0x48);
    if (lVar9 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar9 + 0x18) <= uVar19) break;
    lVar10 = *(long *)(lVar10 + in_stack_00000038 * 0x50 + 0x48);
    if (lVar10 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar10 + 0x18) <= uVar19) break;
    *(undefined8 *)(lVar10 + unaff_x22 * 8 + 0x20) = *(undefined8 *)(lVar9 + unaff_x22 * 8 + 0x20);
    if ((*(uint *)(lVar9 + 0x18) <= uVar14) || (*(uint *)(lVar10 + 0x18) <= uVar14)) break;
    *(undefined8 *)(lVar10 + in_stack_00000078 * 8 + 0x20) =
         *(undefined8 *)(lVar9 + in_stack_00000078 * 8 + 0x20);
    if ((*(uint *)(lVar9 + 0x18) <= uVar15) || (*(uint *)(lVar10 + 0x18) <= uVar15)) break;
    *(undefined8 *)(lVar10 + in_stack_00000070 * 8 + 0x20) =
         *(undefined8 *)(lVar9 + in_stack_00000070 * 8 + 0x20);
    if ((*(uint *)(lVar9 + 0x18) <= uVar16) || (*(uint *)(lVar10 + 0x18) <= uVar16)) break;
    *(undefined8 *)(lVar10 + in_stack_00000058 * 8 + 0x20) =
         *(undefined8 *)(lVar9 + in_stack_00000058 * 8 + 0x20);
    lVar9 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar9 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar9 + 0x18) <= uVar12) break;
    if ((*(long *)(in_stack_00000108 + 0x30) == 0) ||
       (lVar10 = *(long *)(*(long *)(in_stack_00000108 + 0x30) + 0x60), lVar10 == 0))
    goto LAB_01bed9b8;
    if (*(uint *)(lVar10 + 0x18) <= uVar12) break;
    lVar9 = *(long *)(lVar9 + in_stack_00000038 * 0x50 + 0x58);
    if (lVar9 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar9 + 0x18) <= uVar19) break;
    lVar10 = *(long *)(lVar10 + in_stack_00000038 * 0x50 + 0x58);
    if (lVar10 == 0) goto LAB_01bed9b8;
    if (((((*(uint *)(lVar10 + 0x18) <= uVar19) ||
          (*(undefined4 *)(lVar10 + unaff_x22 * 4 + 0x20) =
                *(undefined4 *)(lVar9 + unaff_x22 * 4 + 0x20), *(uint *)(lVar9 + 0x18) <= uVar14))
         || (*(uint *)(lVar10 + 0x18) <= uVar14)) ||
        ((*(undefined4 *)(lVar10 + in_stack_00000078 * 4 + 0x20) =
               *(undefined4 *)(lVar9 + in_stack_00000078 * 4 + 0x20),
         *(uint *)(lVar9 + 0x18) <= uVar15 || (*(uint *)(lVar10 + 0x18) <= uVar15)))) ||
       ((*(undefined4 *)(lVar10 + in_stack_00000070 * 4 + 0x20) =
              *(undefined4 *)(lVar9 + in_stack_00000070 * 4 + 0x20),
        *(uint *)(lVar9 + 0x18) <= uVar16 || (*(uint *)(lVar10 + 0x18) <= uVar16)))) break;
    *(undefined4 *)(lVar10 + in_stack_00000058 * 4 + 0x20) =
         *(undefined4 *)(lVar9 + in_stack_00000058 * 4 + 0x20);
    puVar6 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_7__;
    puVar5 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
    puVar4 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_65__;
    puVar3 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_61__;
    do {
      lVar9 = *(long *)(in_stack_00000108 + 0x30);
      in_stack_00000028 = in_stack_00000028 + 1;
      in_stack_00000030 = in_stack_00000030 + 0x178;
      if (in_stack_00000020 == in_stack_00000028) {
        if (lVar9 == 0) goto LAB_01bed9b8;
        lVar10 = 0;
        uVar19 = 0;
        goto LAB_01bed818;
      }
      if ((lVar9 == 0) || (lVar10 = *(long *)(lVar9 + 0x38), lVar10 == 0)) goto LAB_01bed9b8;
      if (*(uint *)(lVar10 + 0x18) <= in_stack_00000028) goto LAB_01beda6c;
    } while (*(char *)(lVar10 + in_stack_00000030) == '\0');
    lVar13 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar13 == 0) goto LAB_01bed9b8;
    uVar19 = *(uint *)(lVar10 + in_stack_00000030 + -0x13c);
    in_stack_00000038 = (long)(int)uVar19;
    if (*(uint *)(lVar13 + 0x18) <= uVar19) break;
    lVar13 = *(long *)(lVar13 + in_stack_00000038 * 0x50 + 0x30);
    if (lVar13 == 0) goto LAB_01bed9b8;
    uVar14 = *(uint *)(lVar10 + in_stack_00000030 + -0x128);
    unaff_x22 = (long)(int)uVar14;
    if ((*(uint *)(lVar13 + 0x18) <= uVar14) ||
       (uVar15 = uVar14 + 2, *(uint *)(lVar13 + 0x18) <= uVar15)) break;
    in_stack_00000070 = (long)(int)uVar15;
    lVar20 = lVar13 + unaff_x22 * 0xc;
    lVar10 = lVar13 + in_stack_00000070 * 0xc;
    uVar18 = *(undefined8 *)(lVar20 + 0x20);
    fVar24 = *(float *)(lVar20 + 0x28);
    puVar11 = (undefined8 *)(lVar10 + 0x20);
    uVar26 = *puVar11;
    lVar9 = *(long *)(lVar9 + 0x60);
    if (lVar9 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar9 + 0x18) <= uVar19) break;
    unaff_x25 = *(long *)(lVar9 + in_stack_00000038 * 0x50 + 0x30);
    if (unaff_x25 == 0) goto LAB_01bed9b8;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar14) break;
    fVar23 = (float)uVar18;
    fVar25 = (float)((ulong)uVar18 >> 0x20);
    fVar28 = (fVar23 + (float)uVar26) * (float)unaff_d13;
    fVar27 = (fVar25 + (float)((ulong)uVar26 >> 0x20)) * (float)((ulong)unaff_d13 >> 0x20);
    in_stack_00000040 = CONCAT44(fVar27,fVar28);
    lVar9 = unaff_x25 + unaff_x22 * 0xc;
    unaff_x27 = (undefined8 *)(lVar9 + 0x20);
    *unaff_x27 = CONCAT44(fVar25 - fVar27,fVar23 - fVar28);
    unaff_x26 = (float *)(lVar9 + 0x28);
    *unaff_x26 = fVar24;
    uVar19 = uVar14 + 1;
    if ((*(uint *)(lVar13 + 0x18) <= uVar19) ||
       (in_stack_00000078 = (long)(int)uVar19, *(uint *)(unaff_x25 + 0x18) <= uVar19)) break;
    lVar9 = lVar13 + in_stack_00000078 * 0xc;
    uVar18 = *(undefined8 *)(lVar9 + 0x20);
    fVar24 = *(float *)(lVar9 + 0x28);
    lVar9 = unaff_x25 + in_stack_00000078 * 0xc;
    unaff_x24 = (undefined8 *)(lVar9 + 0x20);
    *unaff_x24 = CONCAT44((float)((ulong)uVar18 >> 0x20) - fVar27,(float)uVar18 - fVar28);
    unaff_x23 = (float *)(lVar9 + 0x28);
    *unaff_x23 = fVar24;
    if ((*(uint *)(lVar13 + 0x18) <= uVar15) || (*(uint *)(unaff_x25 + 0x18) <= uVar15)) break;
    uVar18 = *puVar11;
    fVar24 = *(float *)(lVar10 + 0x28);
    lVar9 = unaff_x25 + in_stack_00000070 * 0xc;
    unaff_x29 = (undefined8 *)(lVar9 + 0x20);
    *unaff_x29 = CONCAT44((float)((ulong)uVar18 >> 0x20) - fVar27,(float)uVar18 - fVar28);
    unaff_x19 = (float *)(lVar9 + 0x28);
    *unaff_x19 = fVar24;
    uVar14 = uVar14 + 3;
    if (*(uint *)(lVar13 + 0x18) <= uVar14) break;
    in_stack_00000058 = (long)(int)uVar14;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar14) break;
    lVar13 = lVar13 + in_stack_00000058 * 0xc;
    uVar18 = *(undefined8 *)(lVar13 + 0x20);
    fVar24 = *(float *)(lVar13 + 0x28);
    lVar13 = unaff_x25 + in_stack_00000058 * 0xc;
    unaff_x21 = (float *)(lVar13 + 0x20);
    *(ulong *)unaff_x21 = CONCAT44((float)((ulong)uVar18 >> 0x20) - fVar27,(float)uVar18 - fVar28);
    unaff_x28 = (float *)(lVar13 + 0x28);
    *unaff_x28 = fVar24;
    uVar18 = FUN_0391a0e8(0x3f800000,0x3fc00000,0);
    lVar13 = *(long *)(in_stack_00000108 + 0x28);
    if ((lVar13 == 0) || (lVar9 = *(long *)(lVar13 + 0x10), lVar9 == 0)) goto LAB_01bed9b8;
    lVar10 = *(long *)(lVar9 + 0x10);
    lVar20 = *(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_62__;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_01bed9b8;
    uVar19 = *(uint *)(lVar9 + 0x18);
    if (uVar19 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar19 + 1;
      *(int *)(lVar10 + (long)(int)uVar19 * 4 + 0x20) = (int)uVar18;
    }
    else {
      FUN_02b9f3a0(uVar18,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
      lVar13 = *(long *)(in_stack_00000108 + 0x28);
      if (lVar13 == 0) goto LAB_01bed9b8;
    }
    if ((*(long *)(lVar13 + 0x10) == 0) || (lVar9 = *(long *)(in_stack_00000108 + 0x40), lVar9 == 0)
       ) goto LAB_01bed9b8;
    iVar2 = *(int *)(*(long *)(lVar13 + 0x10) + 0x18);
    lVar13 = *(long *)(lVar9 + 0x10);
    lVar10 = *(long *)
              Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar13 == 0) goto LAB_01bed9b8;
    uVar19 = *(uint *)(lVar9 + 0x18);
    iVar2 = iVar2 + -1;
    if (uVar19 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar19 + 1;
      *(int *)(lVar13 + (long)(int)uVar19 * 4 + 0x20) = iVar2;
    }
    else {
      FUN_02b2c8dc(lVar9,iVar2,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    puVar8 = *(undefined4 **)
              (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
              0xb8);
    uVar31 = *puVar8;
    uVar30 = puVar8[1];
    uVar22 = puVar8[2];
    uVar21 = puVar8[3];
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed258 = '\x01';
    }
    FUN_03910ecc(&stack0x00000080,0,0,0,uVar31,uVar30,uVar22,uVar21,0);
    uStack00000000000000c0 = in_stack_00000080;
    uStack00000000000000c8 = in_stack_00000088;
    uStack00000000000000d0 = in_stack_00000090;
    uStack00000000000000d8 = in_stack_00000098;
    uStack00000000000000e0 = in_stack_000000a0;
    uStack00000000000000e8 = in_stack_000000a8;
    uStack00000000000000f0 = in_stack_000000b0;
    uStack00000000000000f8 = in_stack_000000b8;
  }
LAB_01beda6c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
LAB_01bed818:
  if (*(long *)(lVar9 + 0x60) == 0) {
LAB_01bed9b8:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (*(int *)(*(long *)(lVar9 + 0x60) + 0x18) <= (int)uVar19) {
    uVar18 = thunk_FUN_01afaadc(*(undefined8 *)
                                 Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                               );
    FUN_03924d70(DAT_00b55290,uVar18,0);
    *(undefined8 *)(lVar13 + 0x18) = uVar18;
    thunk_FUN_01b4f09c((undefined8 *)(lVar13 + 0x18),uVar18);
    *(undefined4 *)(lVar13 + 0x10) = 2;
    return 1;
  }
  lVar9 = *(long *)(lVar13 + 0x28);
  if (lVar9 == 0) goto LAB_01bed9b8;
  lVar17 = *(long *)(lVar13 + 0x40);
  lVar20 = *(long *)(lVar9 + 0x18);
  if (lVar20 == 0) {
    lVar20 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
    FUN_024c3984(lVar20,lVar9,*(undefined8 *)puVar6,0);
    *(long *)(lVar9 + 0x18) = lVar20;
    thunk_FUN_01b4f09c((long *)(lVar9 + 0x18),lVar20);
  }
  if (lVar17 == 0) goto LAB_01bed9b8;
  FUN_02b2e224(lVar17,lVar20,*(undefined8 *)puVar4);
  if ((*(long *)(lVar13 + 0x30) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar13 + 0x30) + 0x60), lVar9 == 0)) goto LAB_01bed9b8;
  uVar18 = *(undefined8 *)(lVar13 + 0x40);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_01beda6c;
  FUN_036facb8(lVar9 + lVar10 + 0x20,uVar18,0);
  if ((*(long *)(lVar13 + 0x30) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar13 + 0x30) + 0x60), lVar9 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_01beda6c;
  lVar20 = *(long *)(lVar9 + lVar10 + 0x20);
  if (lVar20 == 0) goto LAB_01bed9b8;
  FUN_0390262c(lVar20,*(undefined8 *)(lVar9 + lVar10 + 0x30),0);
  if ((*(long *)(lVar13 + 0x30) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar13 + 0x30) + 0x60), lVar9 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_01beda6c;
  lVar20 = *(long *)(lVar9 + lVar10 + 0x20);
  if (lVar20 == 0) goto LAB_01bed9b8;
  FUN_03902830(lVar20,*(undefined8 *)(lVar9 + lVar10 + 0x48),0);
  if ((*(long *)(lVar13 + 0x30) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar13 + 0x30) + 0x60), lVar9 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_01beda6c;
  lVar20 = *(long *)(lVar9 + lVar10 + 0x20);
  if (lVar20 == 0) goto LAB_01bed9b8;
  FUN_03902a3c(lVar20,*(undefined8 *)(lVar9 + lVar10 + 0x58),0);
  if (*(long *)(lVar13 + 0x30) == 0) goto LAB_01bed9b8;
  lVar9 = *(long *)(*(long *)(lVar13 + 0x30) + 0x60);
  if (lVar9 == 0) goto LAB_01bed9b8;
  if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_01beda6c;
  plVar7 = *(long **)(in_stack_00000060 + 0x30);
  if (plVar7 == (long *)0x0) goto LAB_01bed9b8;
  (**(code **)(*plVar7 + 0x7e8))
            (plVar7,*(undefined8 *)(lVar9 + lVar10 + 0x20),uVar19,*(undefined8 *)(*plVar7 + 0x7f0));
  lVar9 = *(long *)(lVar13 + 0x30);
  uVar19 = uVar19 + 1;
  lVar10 = lVar10 + 0x50;
  if (lVar9 == 0) goto LAB_01bed9b8;
  goto LAB_01bed818;
}


