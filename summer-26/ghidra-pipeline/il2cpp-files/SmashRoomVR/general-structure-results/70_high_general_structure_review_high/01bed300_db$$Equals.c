/*
FUNCTION_NAME: db$$Equals
ENTRY_POINT: 01bed300
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


undefined8 db__Equals(long param_1)

{
  float *pfVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  float *unaff_x19;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long unaff_x20;
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
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
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
  
  while (lVar7 = *(long *)(in_stack_00000108 + 0x40), lVar7 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    lVar9 = *(long *)(lVar7 + 0x10);
    lVar12 = *(long *)
              Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar9 == 0) break;
    uVar19 = *(uint *)(lVar7 + 0x18);
    iVar2 = iVar2 + -1;
    if (uVar19 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar19 + 1;
      *(int *)(lVar9 + (long)(int)uVar19 * 4 + 0x20) = iVar2;
    }
    else {
      FUN_02b2c8dc(lVar7,iVar2,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    puVar10 = *(undefined4 **)
               (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
               0xb8);
    uVar31 = *puVar10;
    uVar30 = puVar10[1];
    uVar29 = puVar10[2];
    uVar28 = puVar10[3];
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed258 = '\x01';
    }
    FUN_03910ecc(&stack0x00000080,0,0,0,uVar31,uVar30,uVar29,uVar28,0);
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f8 = in_stack_000000b8;
    in_stack_000000f0 = in_stack_000000b0;
    uVar19 = (uint)unaff_x22;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar19) goto LAB_01beda6c;
    uVar29 = *(undefined4 *)((long)unaff_x27 + 4);
    fVar22 = *unaff_x26;
    uVar28 = FUN_03911ddc(*(undefined4 *)unaff_x27,&stack0x000000c0,0);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar19) goto LAB_01beda6c;
    *(undefined4 *)unaff_x27 = uVar28;
    *(undefined4 *)((long)unaff_x27 + 4) = uVar29;
    *unaff_x26 = fVar22;
    uVar14 = (uint)in_stack_00000078;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar14) goto LAB_01beda6c;
    uVar29 = *(undefined4 *)((long)unaff_x24 + 4);
    fVar22 = *unaff_x23;
    uVar28 = FUN_03911ddc(*(undefined4 *)unaff_x24,&stack0x000000c0,0);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar14) goto LAB_01beda6c;
    *(undefined4 *)unaff_x24 = uVar28;
    *(undefined4 *)((long)unaff_x24 + 4) = uVar29;
    *unaff_x23 = fVar22;
    uVar15 = (uint)in_stack_00000070;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar15) goto LAB_01beda6c;
    uVar29 = *(undefined4 *)((long)unaff_x29 + 4);
    fVar22 = *unaff_x19;
    uVar28 = FUN_03911ddc(*(undefined4 *)unaff_x29,&stack0x000000c0,0);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar15) goto LAB_01beda6c;
    *(undefined4 *)unaff_x29 = uVar28;
    *(undefined4 *)((long)unaff_x29 + 4) = uVar29;
    *unaff_x19 = fVar22;
    uVar16 = (uint)in_stack_00000058;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar16) goto LAB_01beda6c;
    pfVar1 = unaff_x21 + 1;
    fVar21 = *pfVar1;
    fVar23 = *unaff_x28;
    fVar22 = (float)FUN_03911ddc(*unaff_x21,&stack0x000000c0,0);
    lVar7 = in_stack_00000108;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar16) goto LAB_01beda6c;
    *unaff_x21 = fVar22;
    *pfVar1 = fVar21;
    *unaff_x28 = fVar23;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar19) goto LAB_01beda6c;
    fVar26 = *unaff_x26;
    fVar25 = (float)in_stack_00000040;
    fVar27 = (float)((ulong)in_stack_00000040 >> 0x20);
    *unaff_x27 = CONCAT44(fVar27 + (float)((ulong)*unaff_x27 >> 0x20),fVar25 + (float)*unaff_x27);
    *unaff_x26 = fVar26 + unaff_s14;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar14) goto LAB_01beda6c;
    fVar26 = *unaff_x23;
    *unaff_x24 = CONCAT44(fVar27 + (float)((ulong)*unaff_x24 >> 0x20),fVar25 + (float)*unaff_x24);
    *unaff_x23 = fVar26 + unaff_s14;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar15) goto LAB_01beda6c;
    fVar26 = *unaff_x19;
    *unaff_x29 = CONCAT44(fVar27 + (float)((ulong)*unaff_x29 >> 0x20),fVar25 + (float)*unaff_x29);
    *unaff_x19 = fVar26 + unaff_s14;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar16) goto LAB_01beda6c;
    *unaff_x21 = fVar25 + fVar22;
    *pfVar1 = fVar27 + fVar21;
    *unaff_x28 = fVar23 + unaff_s14;
    lVar9 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar9 == 0) break;
    uVar13 = (uint)unaff_x20;
    if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_01beda6c;
    if ((*(long *)(in_stack_00000108 + 0x30) == 0) ||
       (lVar12 = *(long *)(*(long *)(in_stack_00000108 + 0x30) + 0x60), lVar12 == 0)) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_01beda6c;
    lVar9 = *(long *)(lVar9 + unaff_x20 * 0x50 + 0x48);
    if (lVar9 == 0) break;
    if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_01beda6c;
    lVar12 = *(long *)(lVar12 + unaff_x20 * 0x50 + 0x48);
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_01beda6c;
    *(undefined8 *)(lVar12 + unaff_x22 * 8 + 0x20) = *(undefined8 *)(lVar9 + unaff_x22 * 8 + 0x20);
    if ((*(uint *)(lVar9 + 0x18) <= uVar14) || (*(uint *)(lVar12 + 0x18) <= uVar14))
    goto LAB_01beda6c;
    *(undefined8 *)(lVar12 + in_stack_00000078 * 8 + 0x20) =
         *(undefined8 *)(lVar9 + in_stack_00000078 * 8 + 0x20);
    if ((*(uint *)(lVar9 + 0x18) <= uVar15) || (*(uint *)(lVar12 + 0x18) <= uVar15))
    goto LAB_01beda6c;
    *(undefined8 *)(lVar12 + in_stack_00000070 * 8 + 0x20) =
         *(undefined8 *)(lVar9 + in_stack_00000070 * 8 + 0x20);
    if ((*(uint *)(lVar9 + 0x18) <= uVar16) || (*(uint *)(lVar12 + 0x18) <= uVar16))
    goto LAB_01beda6c;
    *(undefined8 *)(lVar12 + in_stack_00000058 * 8 + 0x20) =
         *(undefined8 *)(lVar9 + in_stack_00000058 * 8 + 0x20);
    lVar9 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar9 == 0) break;
    if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_01beda6c;
    if ((*(long *)(in_stack_00000108 + 0x30) == 0) ||
       (lVar12 = *(long *)(*(long *)(in_stack_00000108 + 0x30) + 0x60), lVar12 == 0)) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_01beda6c;
    lVar9 = *(long *)(lVar9 + unaff_x20 * 0x50 + 0x58);
    if (lVar9 == 0) break;
    if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_01beda6c;
    lVar12 = *(long *)(lVar12 + unaff_x20 * 0x50 + 0x58);
    if (lVar12 == 0) break;
    if (((((*(uint *)(lVar12 + 0x18) <= uVar19) ||
          (*(undefined4 *)(lVar12 + unaff_x22 * 4 + 0x20) =
                *(undefined4 *)(lVar9 + unaff_x22 * 4 + 0x20), *(uint *)(lVar9 + 0x18) <= uVar14))
         || (*(uint *)(lVar12 + 0x18) <= uVar14)) ||
        ((*(undefined4 *)(lVar12 + in_stack_00000078 * 4 + 0x20) =
               *(undefined4 *)(lVar9 + in_stack_00000078 * 4 + 0x20),
         *(uint *)(lVar9 + 0x18) <= uVar15 || (*(uint *)(lVar12 + 0x18) <= uVar15)))) ||
       ((*(undefined4 *)(lVar12 + in_stack_00000070 * 4 + 0x20) =
              *(undefined4 *)(lVar9 + in_stack_00000070 * 4 + 0x20),
        *(uint *)(lVar9 + 0x18) <= uVar16 || (*(uint *)(lVar12 + 0x18) <= uVar16))))
    goto LAB_01beda6c;
    *(undefined4 *)(lVar12 + in_stack_00000058 * 4 + 0x20) =
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
        lVar12 = 0;
        uVar19 = 0;
        goto LAB_01bed818;
      }
      if ((lVar9 == 0) || (lVar12 = *(long *)(lVar9 + 0x38), lVar12 == 0)) goto LAB_01bed9b8;
      if (*(uint *)(lVar12 + 0x18) <= in_stack_00000028) goto LAB_01beda6c;
    } while (*(char *)(lVar12 + in_stack_00000030) == '\0');
    lVar7 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar7 == 0) break;
    uVar19 = *(uint *)(lVar12 + in_stack_00000030 + -0x13c);
    unaff_x20 = (long)(int)uVar19;
    if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_01beda6c;
    lVar7 = *(long *)(lVar7 + unaff_x20 * 0x50 + 0x30);
    if (lVar7 == 0) break;
    uVar14 = *(uint *)(lVar12 + in_stack_00000030 + -0x128);
    unaff_x22 = (long)(int)uVar14;
    if ((*(uint *)(lVar7 + 0x18) <= uVar14) ||
       (uVar15 = uVar14 + 2, *(uint *)(lVar7 + 0x18) <= uVar15)) goto LAB_01beda6c;
    in_stack_00000070 = (long)(int)uVar15;
    lVar20 = lVar7 + unaff_x22 * 0xc;
    lVar12 = lVar7 + in_stack_00000070 * 0xc;
    uVar18 = *(undefined8 *)(lVar20 + 0x20);
    fVar22 = *(float *)(lVar20 + 0x28);
    puVar11 = (undefined8 *)(lVar12 + 0x20);
    uVar24 = *puVar11;
    lVar9 = *(long *)(lVar9 + 0x60);
    if (lVar9 == 0) break;
    if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_01beda6c;
    unaff_x25 = *(long *)(lVar9 + unaff_x20 * 0x50 + 0x30);
    if (unaff_x25 == 0) break;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar14) goto LAB_01beda6c;
    fVar21 = (float)uVar18;
    fVar23 = (float)((ulong)uVar18 >> 0x20);
    fVar26 = (fVar21 + (float)uVar24) * (float)unaff_d13;
    fVar25 = (fVar23 + (float)((ulong)uVar24 >> 0x20)) * (float)((ulong)unaff_d13 >> 0x20);
    in_stack_00000040 = CONCAT44(fVar25,fVar26);
    lVar9 = unaff_x25 + unaff_x22 * 0xc;
    unaff_x27 = (undefined8 *)(lVar9 + 0x20);
    *unaff_x27 = CONCAT44(fVar23 - fVar25,fVar21 - fVar26);
    unaff_x26 = (float *)(lVar9 + 0x28);
    *unaff_x26 = fVar22;
    uVar19 = uVar14 + 1;
    if ((*(uint *)(lVar7 + 0x18) <= uVar19) ||
       (in_stack_00000078 = (long)(int)uVar19, *(uint *)(unaff_x25 + 0x18) <= uVar19))
    goto LAB_01beda6c;
    lVar9 = lVar7 + in_stack_00000078 * 0xc;
    uVar18 = *(undefined8 *)(lVar9 + 0x20);
    fVar22 = *(float *)(lVar9 + 0x28);
    lVar9 = unaff_x25 + in_stack_00000078 * 0xc;
    unaff_x24 = (undefined8 *)(lVar9 + 0x20);
    *unaff_x24 = CONCAT44((float)((ulong)uVar18 >> 0x20) - fVar25,(float)uVar18 - fVar26);
    unaff_x23 = (float *)(lVar9 + 0x28);
    *unaff_x23 = fVar22;
    if ((*(uint *)(lVar7 + 0x18) <= uVar15) || (*(uint *)(unaff_x25 + 0x18) <= uVar15))
    goto LAB_01beda6c;
    uVar18 = *puVar11;
    fVar22 = *(float *)(lVar12 + 0x28);
    lVar9 = unaff_x25 + in_stack_00000070 * 0xc;
    unaff_x29 = (undefined8 *)(lVar9 + 0x20);
    *unaff_x29 = CONCAT44((float)((ulong)uVar18 >> 0x20) - fVar25,(float)uVar18 - fVar26);
    unaff_x19 = (float *)(lVar9 + 0x28);
    *unaff_x19 = fVar22;
    uVar14 = uVar14 + 3;
    if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_01beda6c;
    in_stack_00000058 = (long)(int)uVar14;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar14) goto LAB_01beda6c;
    lVar7 = lVar7 + in_stack_00000058 * 0xc;
    uVar18 = *(undefined8 *)(lVar7 + 0x20);
    fVar22 = *(float *)(lVar7 + 0x28);
    lVar7 = unaff_x25 + in_stack_00000058 * 0xc;
    unaff_x21 = (float *)(lVar7 + 0x20);
    *(ulong *)unaff_x21 = CONCAT44((float)((ulong)uVar18 >> 0x20) - fVar25,(float)uVar18 - fVar26);
    unaff_x28 = (float *)(lVar7 + 0x28);
    *unaff_x28 = fVar22;
    uVar18 = FUN_0391a0e8(0x3f800000,0x3fc00000,0);
    lVar7 = *(long *)(in_stack_00000108 + 0x28);
    if ((lVar7 == 0) || (lVar9 = *(long *)(lVar7 + 0x10), lVar9 == 0)) break;
    lVar12 = *(long *)(lVar9 + 0x10);
    lVar20 = *(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_62__;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar12 == 0) break;
    uVar19 = *(uint *)(lVar9 + 0x18);
    if (uVar19 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar19 + 1;
      *(int *)(lVar12 + (long)(int)uVar19 * 4 + 0x20) = (int)uVar18;
    }
    else {
      FUN_02b9f3a0(uVar18,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
      lVar7 = *(long *)(in_stack_00000108 + 0x28);
      if (lVar7 == 0) break;
    }
    param_1 = *(long *)(lVar7 + 0x10);
    if (param_1 == 0) break;
  }
LAB_01bed9b8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
LAB_01bed818:
  if (*(long *)(lVar9 + 0x60) == 0) goto LAB_01bed9b8;
  if (*(int *)(*(long *)(lVar9 + 0x60) + 0x18) <= (int)uVar19) {
    uVar18 = thunk_FUN_01afaadc(*(undefined8 *)
                                 Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                               );
    FUN_03924d70(DAT_00b55290,uVar18,0);
    *(undefined8 *)(lVar7 + 0x18) = uVar18;
    thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x18),uVar18);
    *(undefined4 *)(lVar7 + 0x10) = 2;
    return 1;
  }
  lVar9 = *(long *)(lVar7 + 0x28);
  if (lVar9 == 0) goto LAB_01bed9b8;
  lVar17 = *(long *)(lVar7 + 0x40);
  lVar20 = *(long *)(lVar9 + 0x18);
  if (lVar20 == 0) {
    lVar20 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
    FUN_024c3984(lVar20,lVar9,*(undefined8 *)puVar6,0);
    *(long *)(lVar9 + 0x18) = lVar20;
    thunk_FUN_01b4f09c((long *)(lVar9 + 0x18),lVar20);
  }
  if (lVar17 == 0) goto LAB_01bed9b8;
  FUN_02b2e224(lVar17,lVar20,*(undefined8 *)puVar4);
  if ((*(long *)(lVar7 + 0x30) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar7 + 0x30) + 0x60), lVar9 == 0)) goto LAB_01bed9b8;
  uVar18 = *(undefined8 *)(lVar7 + 0x40);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar19) {
LAB_01beda6c:
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
  FUN_036facb8(lVar9 + lVar12 + 0x20,uVar18,0);
  if ((*(long *)(lVar7 + 0x30) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar7 + 0x30) + 0x60), lVar9 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_01beda6c;
  lVar20 = *(long *)(lVar9 + lVar12 + 0x20);
  if (lVar20 == 0) goto LAB_01bed9b8;
  FUN_0390262c(lVar20,*(undefined8 *)(lVar9 + lVar12 + 0x30),0);
  if ((*(long *)(lVar7 + 0x30) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar7 + 0x30) + 0x60), lVar9 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_01beda6c;
  lVar20 = *(long *)(lVar9 + lVar12 + 0x20);
  if (lVar20 == 0) goto LAB_01bed9b8;
  FUN_03902830(lVar20,*(undefined8 *)(lVar9 + lVar12 + 0x48),0);
  if ((*(long *)(lVar7 + 0x30) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar7 + 0x30) + 0x60), lVar9 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_01beda6c;
  lVar20 = *(long *)(lVar9 + lVar12 + 0x20);
  if (lVar20 == 0) goto LAB_01bed9b8;
  FUN_03902a3c(lVar20,*(undefined8 *)(lVar9 + lVar12 + 0x58),0);
  if (*(long *)(lVar7 + 0x30) == 0) goto LAB_01bed9b8;
  lVar9 = *(long *)(*(long *)(lVar7 + 0x30) + 0x60);
  if (lVar9 == 0) goto LAB_01bed9b8;
  if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_01beda6c;
  plVar8 = *(long **)(in_stack_00000060 + 0x30);
  if (plVar8 == (long *)0x0) goto LAB_01bed9b8;
  (**(code **)(*plVar8 + 0x7e8))
            (plVar8,*(undefined8 *)(lVar9 + lVar12 + 0x20),uVar19,*(undefined8 *)(*plVar8 + 0x7f0));
  lVar9 = *(long *)(lVar7 + 0x30);
  uVar19 = uVar19 + 1;
  lVar12 = lVar12 + 0x50;
  if (lVar9 == 0) goto LAB_01bed9b8;
  goto LAB_01bed818;
}


