/*
FUNCTION_NAME: de$$.ctor
ENTRY_POINT: 01bed4c4
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


undefined8 de___ctor(void)

{
  float *pfVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  uint in_w8;
  undefined4 *puVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  float *unaff_x19;
  uint uVar18;
  long unaff_x20;
  float *unaff_x21;
  long lVar19;
  undefined8 uVar20;
  float *unaff_x23;
  long lVar21;
  undefined8 *unaff_x24;
  long unaff_x25;
  float *unaff_x26;
  undefined8 *unaff_x27;
  float *unaff_x28;
  undefined8 *unaff_x29;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined8 unaff_d13;
  float unaff_s14;
  ulong in_stack_00000020;
  ulong in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
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
  
                    /* try { // try from 01bed4c4 to 01ced4cb has its CatchHandler @ 01bed9b4 */
  while ((uint)unaff_x20 < in_w8) {
    uVar23 = *(undefined4 *)((long)unaff_x29 + 4);
    fVar25 = *unaff_x19;
    uVar22 = FUN_03911ddc(*(undefined4 *)unaff_x29,&stack0x000000c0,0);
    if (*(uint *)(unaff_x25 + 0x18) <= (uint)unaff_x20) break;
    *(undefined4 *)unaff_x29 = uVar22;
    *(undefined4 *)((long)unaff_x29 + 4) = uVar23;
    *unaff_x19 = fVar25;
    uVar18 = (uint)in_stack_00000058;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar18) break;
    pfVar1 = unaff_x21 + 1;
    fVar24 = *pfVar1;
    fVar26 = *unaff_x28;
    fVar25 = (float)FUN_03911ddc(*unaff_x21,&stack0x000000c0,0);
    lVar15 = in_stack_00000108;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar18) break;
    *unaff_x21 = fVar25;
    *pfVar1 = fVar24;
    *unaff_x28 = fVar26;
    uVar10 = (uint)in_stack_00000068;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar10) break;
    fVar29 = *unaff_x26;
    fVar28 = (float)in_stack_00000040;
    fVar30 = (float)((ulong)in_stack_00000040 >> 0x20);
    *unaff_x27 = CONCAT44(fVar30 + (float)((ulong)*unaff_x27 >> 0x20),fVar28 + (float)*unaff_x27);
    *unaff_x26 = fVar29 + unaff_s14;
    uVar17 = (uint)in_stack_00000078;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar17) break;
    fVar29 = *unaff_x23;
    *unaff_x24 = CONCAT44(fVar30 + (float)((ulong)*unaff_x24 >> 0x20),fVar28 + (float)*unaff_x24);
    *unaff_x23 = fVar29 + unaff_s14;
    uVar16 = (uint)in_stack_00000070;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar16) break;
    fVar29 = *unaff_x19;
    *unaff_x29 = CONCAT44(fVar30 + (float)((ulong)*unaff_x29 >> 0x20),fVar28 + (float)*unaff_x29);
    *unaff_x19 = fVar29 + unaff_s14;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar18) break;
    *unaff_x21 = fVar28 + fVar25;
    *pfVar1 = fVar30 + fVar24;
    *unaff_x28 = fVar26 + unaff_s14;
    lVar9 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar9 == 0) goto LAB_01bed9b8;
    uVar14 = (uint)in_stack_00000038;
    if (*(uint *)(lVar9 + 0x18) <= uVar14) break;
    if ((*(long *)(in_stack_00000108 + 0x30) == 0) ||
       (lVar11 = *(long *)(*(long *)(in_stack_00000108 + 0x30) + 0x60), lVar11 == 0))
    goto LAB_01bed9b8;
    if (*(uint *)(lVar11 + 0x18) <= uVar14) break;
    lVar9 = *(long *)(lVar9 + in_stack_00000038 * 0x50 + 0x48);
    if (lVar9 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar9 + 0x18) <= uVar10) break;
    lVar11 = *(long *)(lVar11 + in_stack_00000038 * 0x50 + 0x48);
    if (lVar11 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar11 + 0x18) <= uVar10) break;
    *(undefined8 *)(lVar11 + in_stack_00000068 * 8 + 0x20) =
         *(undefined8 *)(lVar9 + in_stack_00000068 * 8 + 0x20);
    if ((*(uint *)(lVar9 + 0x18) <= uVar17) || (*(uint *)(lVar11 + 0x18) <= uVar17)) break;
    *(undefined8 *)(lVar11 + in_stack_00000078 * 8 + 0x20) =
         *(undefined8 *)(lVar9 + in_stack_00000078 * 8 + 0x20);
    if ((*(uint *)(lVar9 + 0x18) <= uVar16) || (*(uint *)(lVar11 + 0x18) <= uVar16)) break;
    *(undefined8 *)(lVar11 + in_stack_00000070 * 8 + 0x20) =
         *(undefined8 *)(lVar9 + in_stack_00000070 * 8 + 0x20);
    if ((*(uint *)(lVar9 + 0x18) <= uVar18) || (*(uint *)(lVar11 + 0x18) <= uVar18)) break;
    *(undefined8 *)(lVar11 + in_stack_00000058 * 8 + 0x20) =
         *(undefined8 *)(lVar9 + in_stack_00000058 * 8 + 0x20);
    lVar9 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar9 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar9 + 0x18) <= uVar14) break;
    if ((*(long *)(in_stack_00000108 + 0x30) == 0) ||
       (lVar11 = *(long *)(*(long *)(in_stack_00000108 + 0x30) + 0x60), lVar11 == 0))
    goto LAB_01bed9b8;
    if (*(uint *)(lVar11 + 0x18) <= uVar14) break;
    lVar9 = *(long *)(lVar9 + in_stack_00000038 * 0x50 + 0x58);
    if (lVar9 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar9 + 0x18) <= uVar10) break;
    lVar11 = *(long *)(lVar11 + in_stack_00000038 * 0x50 + 0x58);
    if (lVar11 == 0) goto LAB_01bed9b8;
    if (((((*(uint *)(lVar11 + 0x18) <= uVar10) ||
          (*(undefined4 *)(lVar11 + in_stack_00000068 * 4 + 0x20) =
                *(undefined4 *)(lVar9 + in_stack_00000068 * 4 + 0x20),
          *(uint *)(lVar9 + 0x18) <= uVar17)) || (*(uint *)(lVar11 + 0x18) <= uVar17)) ||
        ((*(undefined4 *)(lVar11 + in_stack_00000078 * 4 + 0x20) =
               *(undefined4 *)(lVar9 + in_stack_00000078 * 4 + 0x20),
         *(uint *)(lVar9 + 0x18) <= uVar16 || (*(uint *)(lVar11 + 0x18) <= uVar16)))) ||
       ((*(undefined4 *)(lVar11 + in_stack_00000070 * 4 + 0x20) =
              *(undefined4 *)(lVar9 + in_stack_00000070 * 4 + 0x20),
        *(uint *)(lVar9 + 0x18) <= uVar18 || (*(uint *)(lVar11 + 0x18) <= uVar18)))) break;
    *(undefined4 *)(lVar11 + in_stack_00000058 * 4 + 0x20) =
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
        lVar11 = 0;
        uVar18 = 0;
        goto LAB_01bed818;
      }
      if ((lVar9 == 0) || (lVar11 = *(long *)(lVar9 + 0x38), lVar11 == 0)) goto LAB_01bed9b8;
      if (*(uint *)(lVar11 + 0x18) <= in_stack_00000028) goto LAB_01beda6c;
    } while (*(char *)(lVar11 + in_stack_00000030) == '\0');
    lVar15 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar15 == 0) goto LAB_01bed9b8;
    uVar18 = *(uint *)(lVar11 + in_stack_00000030 + -0x13c);
    in_stack_00000038 = (long)(int)uVar18;
    if (*(uint *)(lVar15 + 0x18) <= uVar18) break;
    lVar15 = *(long *)(lVar15 + in_stack_00000038 * 0x50 + 0x30);
    if (lVar15 == 0) goto LAB_01bed9b8;
    uVar10 = *(uint *)(lVar11 + in_stack_00000030 + -0x128);
    in_stack_00000068 = (long)(int)uVar10;
    if ((*(uint *)(lVar15 + 0x18) <= uVar10) ||
       (uVar17 = uVar10 + 2, *(uint *)(lVar15 + 0x18) <= uVar17)) break;
    unaff_x20 = (long)(int)uVar17;
    lVar21 = lVar15 + in_stack_00000068 * 0xc;
    lVar11 = lVar15 + unaff_x20 * 0xc;
    uVar20 = *(undefined8 *)(lVar21 + 0x20);
    fVar25 = *(float *)(lVar21 + 0x28);
    puVar12 = (undefined8 *)(lVar11 + 0x20);
    uVar27 = *puVar12;
    lVar9 = *(long *)(lVar9 + 0x60);
    if (lVar9 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar9 + 0x18) <= uVar18) break;
    unaff_x25 = *(long *)(lVar9 + in_stack_00000038 * 0x50 + 0x30);
    if (unaff_x25 == 0) goto LAB_01bed9b8;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar10) break;
    fVar24 = (float)uVar20;
    fVar26 = (float)((ulong)uVar20 >> 0x20);
    fVar29 = (fVar24 + (float)uVar27) * (float)unaff_d13;
    fVar28 = (fVar26 + (float)((ulong)uVar27 >> 0x20)) * (float)((ulong)unaff_d13 >> 0x20);
    in_stack_00000040 = CONCAT44(fVar28,fVar29);
    lVar9 = unaff_x25 + in_stack_00000068 * 0xc;
    unaff_x27 = (undefined8 *)(lVar9 + 0x20);
    *unaff_x27 = CONCAT44(fVar26 - fVar28,fVar24 - fVar29);
    unaff_x26 = (float *)(lVar9 + 0x28);
    *unaff_x26 = fVar25;
    uVar18 = uVar10 + 1;
    if ((*(uint *)(lVar15 + 0x18) <= uVar18) ||
       (in_stack_00000078 = (long)(int)uVar18, *(uint *)(unaff_x25 + 0x18) <= uVar18)) break;
    lVar21 = lVar15 + in_stack_00000078 * 0xc;
    uVar20 = *(undefined8 *)(lVar21 + 0x20);
    fVar25 = *(float *)(lVar21 + 0x28);
    lVar21 = unaff_x25 + in_stack_00000078 * 0xc;
    unaff_x24 = (undefined8 *)(lVar21 + 0x20);
    *unaff_x24 = CONCAT44((float)((ulong)uVar20 >> 0x20) - fVar28,(float)uVar20 - fVar29);
    unaff_x23 = (float *)(lVar21 + 0x28);
    *unaff_x23 = fVar25;
    if ((*(uint *)(lVar15 + 0x18) <= uVar17) || (*(uint *)(unaff_x25 + 0x18) <= uVar17)) break;
    uVar20 = *puVar12;
    fVar25 = *(float *)(lVar11 + 0x28);
    lVar11 = unaff_x25 + unaff_x20 * 0xc;
    unaff_x29 = (undefined8 *)(lVar11 + 0x20);
    *unaff_x29 = CONCAT44((float)((ulong)uVar20 >> 0x20) - fVar28,(float)uVar20 - fVar29);
    unaff_x19 = (float *)(lVar11 + 0x28);
    *unaff_x19 = fVar25;
    uVar17 = uVar10 + 3;
    if (*(uint *)(lVar15 + 0x18) <= uVar17) break;
    in_stack_00000058 = (long)(int)uVar17;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar17) break;
    lVar15 = lVar15 + in_stack_00000058 * 0xc;
    uVar20 = *(undefined8 *)(lVar15 + 0x20);
    fVar25 = *(float *)(lVar15 + 0x28);
    lVar15 = unaff_x25 + in_stack_00000058 * 0xc;
    unaff_x21 = (float *)(lVar15 + 0x20);
    *(ulong *)unaff_x21 = CONCAT44((float)((ulong)uVar20 >> 0x20) - fVar28,(float)uVar20 - fVar29);
    unaff_x28 = (float *)(lVar15 + 0x28);
    *unaff_x28 = fVar25;
    uVar20 = FUN_0391a0e8(0x3f800000,0x3fc00000,0);
    lVar15 = *(long *)(in_stack_00000108 + 0x28);
    if ((lVar15 == 0) || (lVar11 = *(long *)(lVar15 + 0x10), lVar11 == 0)) goto LAB_01bed9b8;
    lVar19 = *(long *)(lVar11 + 0x10);
    lVar13 = *(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_62__;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar19 == 0) goto LAB_01bed9b8;
    uVar17 = *(uint *)(lVar11 + 0x18);
    if (uVar17 < *(uint *)(lVar19 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar17 + 1;
      *(int *)(lVar19 + (long)(int)uVar17 * 4 + 0x20) = (int)uVar20;
    }
    else {
      FUN_02b9f3a0(uVar20,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
      ;
      lVar15 = *(long *)(in_stack_00000108 + 0x28);
      if (lVar15 == 0) goto LAB_01bed9b8;
    }
    if ((*(long *)(lVar15 + 0x10) == 0) ||
       (lVar11 = *(long *)(in_stack_00000108 + 0x40), lVar11 == 0)) goto LAB_01bed9b8;
    iVar2 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18);
    lVar15 = *(long *)(lVar11 + 0x10);
    lVar19 = *(long *)
              Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_01bed9b8;
    uVar17 = *(uint *)(lVar11 + 0x18);
    iVar2 = iVar2 + -1;
    if (uVar17 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar17 + 1;
      *(int *)(lVar15 + (long)(int)uVar17 * 4 + 0x20) = iVar2;
    }
    else {
      FUN_02b2c8dc(lVar11,iVar2,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
    }
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    puVar8 = *(undefined4 **)
              (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
              0xb8);
    uVar32 = *puVar8;
    uVar31 = puVar8[1];
    uVar23 = puVar8[2];
    uVar22 = puVar8[3];
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed258 = '\x01';
    }
    FUN_03910ecc(&stack0x00000080,0,0,0,uVar32,uVar31,uVar23,uVar22,0);
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f8 = in_stack_000000b8;
    in_stack_000000f0 = in_stack_000000b0;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar10) break;
    uVar23 = *(undefined4 *)(lVar9 + 0x24);
    fVar25 = *unaff_x26;
    uVar22 = FUN_03911ddc(*(undefined4 *)unaff_x27,&stack0x000000c0,0);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar10) break;
    *(undefined4 *)unaff_x27 = uVar22;
    *(undefined4 *)(lVar9 + 0x24) = uVar23;
    *unaff_x26 = fVar25;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar18) break;
    uVar23 = *(undefined4 *)(lVar21 + 0x24);
    fVar25 = *unaff_x23;
    uVar22 = FUN_03911ddc(*(undefined4 *)unaff_x24,&stack0x000000c0,0);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar18) break;
    *(undefined4 *)unaff_x24 = uVar22;
    *(undefined4 *)(lVar21 + 0x24) = uVar23;
    *unaff_x23 = fVar25;
    in_stack_00000070 = unaff_x20;
    in_w8 = *(uint *)(unaff_x25 + 0x18);
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
  if (*(int *)(*(long *)(lVar9 + 0x60) + 0x18) <= (int)uVar18) {
    uVar20 = thunk_FUN_01afaadc(*(undefined8 *)
                                 Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                               );
    FUN_03924d70(DAT_00b55290,uVar20,0);
    *(undefined8 *)(lVar15 + 0x18) = uVar20;
    thunk_FUN_01b4f09c((undefined8 *)(lVar15 + 0x18),uVar20);
    *(undefined4 *)(lVar15 + 0x10) = 2;
    return 1;
  }
  lVar9 = *(long *)(lVar15 + 0x28);
  if (lVar9 == 0) goto LAB_01bed9b8;
  lVar19 = *(long *)(lVar15 + 0x40);
  lVar21 = *(long *)(lVar9 + 0x18);
  if (lVar21 == 0) {
    lVar21 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
    FUN_024c3984(lVar21,lVar9,*(undefined8 *)puVar6,0);
    *(long *)(lVar9 + 0x18) = lVar21;
    thunk_FUN_01b4f09c((long *)(lVar9 + 0x18),lVar21);
  }
  if (lVar19 == 0) goto LAB_01bed9b8;
  FUN_02b2e224(lVar19,lVar21,*(undefined8 *)puVar4);
  if ((*(long *)(lVar15 + 0x30) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar15 + 0x30) + 0x60), lVar9 == 0)) goto LAB_01bed9b8;
  uVar20 = *(undefined8 *)(lVar15 + 0x40);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar18) goto LAB_01beda6c;
  FUN_036facb8(lVar9 + lVar11 + 0x20,uVar20,0);
  if ((*(long *)(lVar15 + 0x30) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar15 + 0x30) + 0x60), lVar9 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar9 + 0x18) <= uVar18) goto LAB_01beda6c;
  lVar21 = *(long *)(lVar9 + lVar11 + 0x20);
  if (lVar21 == 0) goto LAB_01bed9b8;
  FUN_0390262c(lVar21,*(undefined8 *)(lVar9 + lVar11 + 0x30),0);
  if ((*(long *)(lVar15 + 0x30) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar15 + 0x30) + 0x60), lVar9 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar9 + 0x18) <= uVar18) goto LAB_01beda6c;
  lVar21 = *(long *)(lVar9 + lVar11 + 0x20);
  if (lVar21 == 0) goto LAB_01bed9b8;
  FUN_03902830(lVar21,*(undefined8 *)(lVar9 + lVar11 + 0x48),0);
  if ((*(long *)(lVar15 + 0x30) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar15 + 0x30) + 0x60), lVar9 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar9 + 0x18) <= uVar18) goto LAB_01beda6c;
  lVar21 = *(long *)(lVar9 + lVar11 + 0x20);
  if (lVar21 == 0) goto LAB_01bed9b8;
  FUN_03902a3c(lVar21,*(undefined8 *)(lVar9 + lVar11 + 0x58),0);
  if (*(long *)(lVar15 + 0x30) == 0) goto LAB_01bed9b8;
  lVar9 = *(long *)(*(long *)(lVar15 + 0x30) + 0x60);
  if (lVar9 == 0) goto LAB_01bed9b8;
  if (*(uint *)(lVar9 + 0x18) <= uVar18) goto LAB_01beda6c;
  plVar7 = *(long **)(in_stack_00000060 + 0x30);
  if (plVar7 == (long *)0x0) goto LAB_01bed9b8;
  (**(code **)(*plVar7 + 0x7e8))
            (plVar7,*(undefined8 *)(lVar9 + lVar11 + 0x20),uVar18,*(undefined8 *)(*plVar7 + 0x7f0));
  lVar9 = *(long *)(lVar15 + 0x30);
  uVar18 = uVar18 + 1;
  lVar11 = lVar11 + 0x50;
  if (lVar9 == 0) goto LAB_01bed9b8;
  goto LAB_01bed818;
}


