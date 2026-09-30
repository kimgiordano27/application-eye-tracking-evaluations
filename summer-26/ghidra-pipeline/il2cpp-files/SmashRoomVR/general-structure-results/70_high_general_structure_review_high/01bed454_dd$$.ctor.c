/*
FUNCTION_NAME: dd$$.ctor
ENTRY_POINT: 01bed454
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


undefined8 dd___ctor(ulong param_1,undefined4 param_2,float param_3,undefined8 *param_4)

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
  long unaff_x20;
  float *unaff_x21;
  long lVar17;
  undefined8 uVar18;
  undefined4 *unaff_x22;
  float *unaff_x23;
  long lVar19;
  undefined8 *unaff_x24;
  long unaff_x25;
  float *unaff_x26;
  uint *unaff_x27;
  float *unaff_x28;
  undefined8 *unaff_x29;
  uint uVar20;
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
    uVar20 = FUN_03911ddc(param_1,param_4,0);
    uVar14 = (uint)unaff_x20;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar14) break;
    *unaff_x27 = uVar20;
    *unaff_x22 = param_2;
    *unaff_x26 = param_3;
    uVar20 = (uint)in_stack_00000078;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar20) break;
    uVar22 = *(undefined4 *)((long)unaff_x24 + 4);
    fVar24 = *unaff_x23;
    uVar21 = FUN_03911ddc(*(undefined4 *)unaff_x24,&stack0x000000c0,0);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar20) break;
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
    if (*(uint *)(unaff_x25 + 0x18) <= uVar14) break;
    fVar28 = *unaff_x26;
    fVar27 = (float)in_stack_00000040;
    fVar29 = (float)((ulong)in_stack_00000040 >> 0x20);
    *(ulong *)unaff_x27 =
         CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)unaff_x27 >> 0x20),
                  fVar27 + (float)*(undefined8 *)unaff_x27);
    *unaff_x26 = fVar28 + unaff_s14;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar20) break;
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
    if (*(uint *)(lVar9 + 0x18) <= uVar14) break;
    lVar10 = *(long *)(lVar10 + in_stack_00000038 * 0x50 + 0x48);
    if (lVar10 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar10 + 0x18) <= uVar14) break;
    *(undefined8 *)(lVar10 + unaff_x20 * 8 + 0x20) = *(undefined8 *)(lVar9 + unaff_x20 * 8 + 0x20);
    if ((*(uint *)(lVar9 + 0x18) <= uVar20) || (*(uint *)(lVar10 + 0x18) <= uVar20)) break;
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
    if (*(uint *)(lVar9 + 0x18) <= uVar14) break;
    lVar10 = *(long *)(lVar10 + in_stack_00000038 * 0x50 + 0x58);
    if (lVar10 == 0) goto LAB_01bed9b8;
    if (((((*(uint *)(lVar10 + 0x18) <= uVar14) ||
          (*(undefined4 *)(lVar10 + unaff_x20 * 4 + 0x20) =
                *(undefined4 *)(lVar9 + unaff_x20 * 4 + 0x20), *(uint *)(lVar9 + 0x18) <= uVar20))
         || (*(uint *)(lVar10 + 0x18) <= uVar20)) ||
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
        uVar14 = 0;
        goto LAB_01bed818;
      }
      if ((lVar9 == 0) || (lVar10 = *(long *)(lVar9 + 0x38), lVar10 == 0)) goto LAB_01bed9b8;
      if (*(uint *)(lVar10 + 0x18) <= in_stack_00000028) goto LAB_01beda6c;
    } while (*(char *)(lVar10 + in_stack_00000030) == '\0');
    lVar13 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar13 == 0) goto LAB_01bed9b8;
    uVar14 = *(uint *)(lVar10 + in_stack_00000030 + -0x13c);
    in_stack_00000038 = (long)(int)uVar14;
    if (*(uint *)(lVar13 + 0x18) <= uVar14) break;
    lVar13 = *(long *)(lVar13 + in_stack_00000038 * 0x50 + 0x30);
    if (lVar13 == 0) goto LAB_01bed9b8;
    uVar20 = *(uint *)(lVar10 + in_stack_00000030 + -0x128);
    unaff_x20 = (long)(int)uVar20;
    if ((*(uint *)(lVar13 + 0x18) <= uVar20) ||
       (uVar15 = uVar20 + 2, *(uint *)(lVar13 + 0x18) <= uVar15)) break;
    in_stack_00000070 = (long)(int)uVar15;
    lVar19 = lVar13 + unaff_x20 * 0xc;
    lVar10 = lVar13 + in_stack_00000070 * 0xc;
    uVar18 = *(undefined8 *)(lVar19 + 0x20);
    fVar24 = *(float *)(lVar19 + 0x28);
    puVar11 = (undefined8 *)(lVar10 + 0x20);
    uVar26 = *puVar11;
    lVar9 = *(long *)(lVar9 + 0x60);
    if (lVar9 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar9 + 0x18) <= uVar14) break;
    unaff_x25 = *(long *)(lVar9 + in_stack_00000038 * 0x50 + 0x30);
    if (unaff_x25 == 0) goto LAB_01bed9b8;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar20) break;
    fVar23 = (float)uVar18;
    fVar25 = (float)((ulong)uVar18 >> 0x20);
    fVar28 = (fVar23 + (float)uVar26) * (float)unaff_d13;
    fVar27 = (fVar25 + (float)((ulong)uVar26 >> 0x20)) * (float)((ulong)unaff_d13 >> 0x20);
    in_stack_00000040 = CONCAT44(fVar27,fVar28);
    lVar9 = unaff_x25 + unaff_x20 * 0xc;
    unaff_x27 = (uint *)(lVar9 + 0x20);
    *(ulong *)unaff_x27 = CONCAT44(fVar25 - fVar27,fVar23 - fVar28);
    unaff_x26 = (float *)(lVar9 + 0x28);
    *unaff_x26 = fVar24;
    uVar14 = uVar20 + 1;
    if ((*(uint *)(lVar13 + 0x18) <= uVar14) ||
       (in_stack_00000078 = (long)(int)uVar14, *(uint *)(unaff_x25 + 0x18) <= uVar14)) break;
    lVar19 = lVar13 + in_stack_00000078 * 0xc;
    uVar18 = *(undefined8 *)(lVar19 + 0x20);
    fVar24 = *(float *)(lVar19 + 0x28);
    lVar19 = unaff_x25 + in_stack_00000078 * 0xc;
    unaff_x24 = (undefined8 *)(lVar19 + 0x20);
    *unaff_x24 = CONCAT44((float)((ulong)uVar18 >> 0x20) - fVar27,(float)uVar18 - fVar28);
    unaff_x23 = (float *)(lVar19 + 0x28);
    *unaff_x23 = fVar24;
    if ((*(uint *)(lVar13 + 0x18) <= uVar15) || (*(uint *)(unaff_x25 + 0x18) <= uVar15)) break;
    uVar18 = *puVar11;
    fVar24 = *(float *)(lVar10 + 0x28);
    lVar10 = unaff_x25 + in_stack_00000070 * 0xc;
    unaff_x29 = (undefined8 *)(lVar10 + 0x20);
    *unaff_x29 = CONCAT44((float)((ulong)uVar18 >> 0x20) - fVar27,(float)uVar18 - fVar28);
    unaff_x19 = (float *)(lVar10 + 0x28);
    *unaff_x19 = fVar24;
    uVar14 = uVar20 + 3;
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
    if ((lVar13 == 0) || (lVar10 = *(long *)(lVar13 + 0x10), lVar10 == 0)) goto LAB_01bed9b8;
    lVar19 = *(long *)(lVar10 + 0x10);
    lVar17 = *(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_62__;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar19 == 0) goto LAB_01bed9b8;
    uVar14 = *(uint *)(lVar10 + 0x18);
    if (uVar14 < *(uint *)(lVar19 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar14 + 1;
      *(int *)(lVar19 + (long)(int)uVar14 * 4 + 0x20) = (int)uVar18;
    }
    else {
      FUN_02b9f3a0(uVar18,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
      ;
      lVar13 = *(long *)(in_stack_00000108 + 0x28);
      if (lVar13 == 0) goto LAB_01bed9b8;
    }
    if ((*(long *)(lVar13 + 0x10) == 0) ||
       (lVar10 = *(long *)(in_stack_00000108 + 0x40), lVar10 == 0)) goto LAB_01bed9b8;
    iVar2 = *(int *)(*(long *)(lVar13 + 0x10) + 0x18);
    lVar13 = *(long *)(lVar10 + 0x10);
    lVar19 = *(long *)
              Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar13 == 0) goto LAB_01bed9b8;
    uVar14 = *(uint *)(lVar10 + 0x18);
    iVar2 = iVar2 + -1;
    if (uVar14 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar14 + 1;
      *(int *)(lVar13 + (long)(int)uVar14 * 4 + 0x20) = iVar2;
    }
    else {
      FUN_02b2c8dc(lVar10,iVar2,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
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
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f8 = in_stack_000000b8;
    in_stack_000000f0 = in_stack_000000b0;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar20) break;
    unaff_x22 = (undefined4 *)(lVar9 + 0x24);
    param_1 = (ulong)*unaff_x27;
    param_2 = *unaff_x22;
    param_3 = *unaff_x26;
    param_4 = &stack0x000000c0;
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
  if (*(int *)(*(long *)(lVar9 + 0x60) + 0x18) <= (int)uVar14) {
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
  lVar19 = *(long *)(lVar9 + 0x18);
  if (lVar19 == 0) {
    lVar19 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
    FUN_024c3984(lVar19,lVar9,*(undefined8 *)puVar6,0);
    *(long *)(lVar9 + 0x18) = lVar19;
    thunk_FUN_01b4f09c((long *)(lVar9 + 0x18),lVar19);
  }
  if (lVar17 == 0) goto LAB_01bed9b8;
  FUN_02b2e224(lVar17,lVar19,*(undefined8 *)puVar4);
  if ((*(long *)(lVar13 + 0x30) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar13 + 0x30) + 0x60), lVar9 == 0)) goto LAB_01bed9b8;
  uVar18 = *(undefined8 *)(lVar13 + 0x40);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_01beda6c;
  FUN_036facb8(lVar9 + lVar10 + 0x20,uVar18,0);
  if ((*(long *)(lVar13 + 0x30) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar13 + 0x30) + 0x60), lVar9 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_01beda6c;
  lVar19 = *(long *)(lVar9 + lVar10 + 0x20);
  if (lVar19 == 0) goto LAB_01bed9b8;
  FUN_0390262c(lVar19,*(undefined8 *)(lVar9 + lVar10 + 0x30),0);
  if ((*(long *)(lVar13 + 0x30) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar13 + 0x30) + 0x60), lVar9 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_01beda6c;
  lVar19 = *(long *)(lVar9 + lVar10 + 0x20);
  if (lVar19 == 0) goto LAB_01bed9b8;
  FUN_03902830(lVar19,*(undefined8 *)(lVar9 + lVar10 + 0x48),0);
  if ((*(long *)(lVar13 + 0x30) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar13 + 0x30) + 0x60), lVar9 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_01beda6c;
  lVar19 = *(long *)(lVar9 + lVar10 + 0x20);
  if (lVar19 == 0) goto LAB_01bed9b8;
  FUN_03902a3c(lVar19,*(undefined8 *)(lVar9 + lVar10 + 0x58),0);
  if (*(long *)(lVar13 + 0x30) == 0) goto LAB_01bed9b8;
  lVar9 = *(long *)(*(long *)(lVar13 + 0x30) + 0x60);
  if (lVar9 == 0) goto LAB_01bed9b8;
  if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_01beda6c;
  plVar7 = *(long **)(in_stack_00000060 + 0x30);
  if (plVar7 == (long *)0x0) goto LAB_01bed9b8;
  (**(code **)(*plVar7 + 0x7e8))
            (plVar7,*(undefined8 *)(lVar9 + lVar10 + 0x20),uVar14,*(undefined8 *)(*plVar7 + 0x7f0));
  lVar9 = *(long *)(lVar13 + 0x30);
  uVar14 = uVar14 + 1;
  lVar10 = lVar10 + 0x50;
  if (lVar9 == 0) goto LAB_01bed9b8;
  goto LAB_01bed818;
}


