/*
FUNCTION_NAME: db$$.ctor
ENTRY_POINT: 01bed21c
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


undefined8 db___ctor(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3)

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
  long lVar10;
  undefined4 *puVar11;
  long in_x9;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long in_x12;
  long in_x13;
  float *unaff_x19;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long unaff_x20;
  float *pfVar20;
  uint uVar21;
  long unaff_x22;
  float *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  float *unaff_x26;
  undefined8 *unaff_x27;
  float *pfVar22;
  undefined8 *unaff_x29;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
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
    uVar21 = (uint)unaff_x22;
    uVar19 = uVar21 + 3;
    if (*(uint *)(in_x9 + 0x18) <= uVar19) break;
    lVar9 = (long)(int)uVar19;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar19) break;
    lVar16 = in_x9 + lVar9 * 0xc;
    uVar23 = *(undefined8 *)(lVar16 + 0x20);
                    /* try { // try from 01bed250 to 01ced25b has its CatchHandler @ 01bed9d4 */
    fVar25 = *(float *)(lVar16 + 0x28);
    lVar16 = unaff_x25 + lVar9 * 0xc;
    fVar24 = (float)param_3;
    fVar27 = (float)((ulong)param_3 >> 0x20);
    pfVar20 = (float *)(lVar16 + 0x20);
    *(ulong *)pfVar20 = CONCAT44((float)((ulong)uVar23 >> 0x20) - fVar27,(float)uVar23 - fVar24);
    pfVar22 = (float *)(lVar16 + 0x28);
    *pfVar22 = fVar25;
    uVar23 = FUN_0391a0e8(0x3f800000,0x3fc00000,0);
    lVar10 = *(long *)(in_stack_00000108 + 0x28);
                    /* try { // try from 01bed284 to 01ced28f has its CatchHandler @ 01bed9c8 */
    if ((lVar10 == 0) || (lVar7 = *(long *)(lVar10 + 0x10), lVar7 == 0)) goto LAB_01bed9b8;
    lVar12 = *(long *)(lVar7 + 0x10);
    lVar14 = *(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_62__;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_01bed9b8;
    uVar17 = *(uint *)(lVar7 + 0x18);
    if (uVar17 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar17 + 1;
      *(int *)(lVar12 + (long)(int)uVar17 * 4 + 0x20) = (int)uVar23;
    }
    else {
      FUN_02b9f3a0(uVar23,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      lVar10 = *(long *)(in_stack_00000108 + 0x28);
      if (lVar10 == 0) goto LAB_01bed9b8;
    }
    if ((*(long *)(lVar10 + 0x10) == 0) || (lVar7 = *(long *)(in_stack_00000108 + 0x40), lVar7 == 0)
       ) goto LAB_01bed9b8;
    iVar2 = *(int *)(*(long *)(lVar10 + 0x10) + 0x18);
    lVar10 = *(long *)(lVar7 + 0x10);
    lVar12 = *(long *)
              Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_01bed9b8;
    uVar17 = *(uint *)(lVar7 + 0x18);
    iVar2 = iVar2 + -1;
    if (uVar17 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar17 + 1;
      *(int *)(lVar10 + (long)(int)uVar17 * 4 + 0x20) = iVar2;
    }
    else {
      FUN_02b2c8dc(lVar7,iVar2,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    puVar11 = *(undefined4 **)
               (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
               0xb8);
    uVar34 = *puVar11;
    uVar33 = puVar11[1];
    uVar32 = puVar11[2];
    uVar31 = puVar11[3];
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed258 = '\x01';
    }
    FUN_03910ecc(&stack0x00000080,0,0,0,uVar34,uVar33,uVar32,uVar31,0);
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f8 = in_stack_000000b8;
    in_stack_000000f0 = in_stack_000000b0;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar21) break;
    uVar32 = *(undefined4 *)((long)unaff_x27 + 4);
    fVar25 = *unaff_x26;
    uVar31 = FUN_03911ddc(*(undefined4 *)unaff_x27,&stack0x000000c0,0);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar21) break;
    *(undefined4 *)unaff_x27 = uVar31;
    *(undefined4 *)((long)unaff_x27 + 4) = uVar32;
    *unaff_x26 = fVar25;
    uVar17 = (uint)in_x13;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar17) break;
    uVar32 = *(undefined4 *)((long)unaff_x24 + 4);
    fVar25 = *unaff_x23;
    uVar31 = FUN_03911ddc(*(undefined4 *)unaff_x24,&stack0x000000c0,0);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar17) break;
    *(undefined4 *)unaff_x24 = uVar31;
    *(undefined4 *)((long)unaff_x24 + 4) = uVar32;
    *unaff_x23 = fVar25;
    uVar18 = (uint)in_x12;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar18) break;
    uVar32 = *(undefined4 *)((long)unaff_x29 + 4);
    fVar25 = *unaff_x19;
    uVar31 = FUN_03911ddc(*(undefined4 *)unaff_x29,&stack0x000000c0,0);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar18) break;
    *(undefined4 *)unaff_x29 = uVar31;
    *(undefined4 *)((long)unaff_x29 + 4) = uVar32;
    *unaff_x19 = fVar25;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar19) break;
    pfVar1 = (float *)(lVar16 + 0x24);
    fVar26 = *pfVar1;
    fVar28 = *pfVar22;
    fVar25 = (float)FUN_03911ddc(*pfVar20,&stack0x000000c0,0);
    lVar16 = in_stack_00000108;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar19) break;
    *pfVar20 = fVar25;
    *pfVar1 = fVar26;
    *pfVar22 = fVar28;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar21) break;
    fVar30 = *unaff_x26;
    *unaff_x27 = CONCAT44(fVar27 + (float)((ulong)*unaff_x27 >> 0x20),fVar24 + (float)*unaff_x27);
    *unaff_x26 = fVar30 + unaff_s14;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar17) break;
    fVar30 = *unaff_x23;
    *unaff_x24 = CONCAT44(fVar27 + (float)((ulong)*unaff_x24 >> 0x20),fVar24 + (float)*unaff_x24);
    *unaff_x23 = fVar30 + unaff_s14;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar18) break;
    fVar30 = *unaff_x19;
    *unaff_x29 = CONCAT44(fVar27 + (float)((ulong)*unaff_x29 >> 0x20),fVar24 + (float)*unaff_x29);
    *unaff_x19 = fVar30 + unaff_s14;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar19) break;
    *pfVar20 = fVar24 + fVar25;
    *pfVar1 = fVar27 + fVar26;
    *pfVar22 = fVar28 + unaff_s14;
    lVar10 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar10 == 0) goto LAB_01bed9b8;
    uVar15 = (uint)unaff_x20;
    if (*(uint *)(lVar10 + 0x18) <= uVar15) break;
    if ((*(long *)(in_stack_00000108 + 0x30) == 0) ||
       (lVar7 = *(long *)(*(long *)(in_stack_00000108 + 0x30) + 0x60), lVar7 == 0))
    goto LAB_01bed9b8;
    if (*(uint *)(lVar7 + 0x18) <= uVar15) break;
    lVar10 = *(long *)(lVar10 + unaff_x20 * 0x50 + 0x48);
    if (lVar10 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar10 + 0x18) <= uVar21) break;
    lVar7 = *(long *)(lVar7 + unaff_x20 * 0x50 + 0x48);
    if (lVar7 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar7 + 0x18) <= uVar21) break;
    *(undefined8 *)(lVar7 + unaff_x22 * 8 + 0x20) = *(undefined8 *)(lVar10 + unaff_x22 * 8 + 0x20);
    if ((*(uint *)(lVar10 + 0x18) <= uVar17) || (*(uint *)(lVar7 + 0x18) <= uVar17)) break;
    *(undefined8 *)(lVar7 + in_x13 * 8 + 0x20) = *(undefined8 *)(lVar10 + in_x13 * 8 + 0x20);
    if ((*(uint *)(lVar10 + 0x18) <= uVar18) || (*(uint *)(lVar7 + 0x18) <= uVar18)) break;
    *(undefined8 *)(lVar7 + in_x12 * 8 + 0x20) = *(undefined8 *)(lVar10 + in_x12 * 8 + 0x20);
    if ((*(uint *)(lVar10 + 0x18) <= uVar19) || (*(uint *)(lVar7 + 0x18) <= uVar19)) break;
    *(undefined8 *)(lVar7 + lVar9 * 8 + 0x20) = *(undefined8 *)(lVar10 + lVar9 * 8 + 0x20);
    lVar10 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar10 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar10 + 0x18) <= uVar15) break;
    if ((*(long *)(in_stack_00000108 + 0x30) == 0) ||
       (lVar7 = *(long *)(*(long *)(in_stack_00000108 + 0x30) + 0x60), lVar7 == 0))
    goto LAB_01bed9b8;
    if (*(uint *)(lVar7 + 0x18) <= uVar15) break;
    lVar10 = *(long *)(lVar10 + unaff_x20 * 0x50 + 0x58);
    if (lVar10 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar10 + 0x18) <= uVar21) break;
    lVar7 = *(long *)(lVar7 + unaff_x20 * 0x50 + 0x58);
    if (lVar7 == 0) goto LAB_01bed9b8;
    if (((((*(uint *)(lVar7 + 0x18) <= uVar21) ||
          (*(undefined4 *)(lVar7 + unaff_x22 * 4 + 0x20) =
                *(undefined4 *)(lVar10 + unaff_x22 * 4 + 0x20), *(uint *)(lVar10 + 0x18) <= uVar17))
         || (*(uint *)(lVar7 + 0x18) <= uVar17)) ||
        ((*(undefined4 *)(lVar7 + in_x13 * 4 + 0x20) = *(undefined4 *)(lVar10 + in_x13 * 4 + 0x20),
         *(uint *)(lVar10 + 0x18) <= uVar18 || (*(uint *)(lVar7 + 0x18) <= uVar18)))) ||
       ((*(undefined4 *)(lVar7 + in_x12 * 4 + 0x20) = *(undefined4 *)(lVar10 + in_x12 * 4 + 0x20),
        *(uint *)(lVar10 + 0x18) <= uVar19 || (*(uint *)(lVar7 + 0x18) <= uVar19)))) break;
    *(undefined4 *)(lVar7 + lVar9 * 4 + 0x20) = *(undefined4 *)(lVar10 + lVar9 * 4 + 0x20);
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
    lVar16 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar16 == 0) goto LAB_01bed9b8;
    uVar19 = *(uint *)(lVar10 + in_stack_00000030 + -0x13c);
    unaff_x20 = (long)(int)uVar19;
    if (*(uint *)(lVar16 + 0x18) <= uVar19) break;
    in_x9 = *(long *)(lVar16 + unaff_x20 * 0x50 + 0x30);
    if (in_x9 == 0) goto LAB_01bed9b8;
    uVar21 = *(uint *)(lVar10 + in_stack_00000030 + -0x128);
    unaff_x22 = (long)(int)uVar21;
    if ((*(uint *)(in_x9 + 0x18) <= uVar21) ||
       (uVar17 = uVar21 + 2, *(uint *)(in_x9 + 0x18) <= uVar17)) break;
    in_x12 = (long)(int)uVar17;
    lVar10 = in_x9 + unaff_x22 * 0xc;
    lVar16 = in_x9 + in_x12 * 0xc;
    uVar23 = *(undefined8 *)(lVar10 + 0x20);
    fVar25 = *(float *)(lVar10 + 0x28);
    puVar13 = (undefined8 *)(lVar16 + 0x20);
    uVar29 = *puVar13;
    lVar9 = *(long *)(lVar9 + 0x60);
    if (lVar9 == 0) goto LAB_01bed9b8;
    if (*(uint *)(lVar9 + 0x18) <= uVar19) break;
    unaff_x25 = *(long *)(lVar9 + unaff_x20 * 0x50 + 0x30);
    if (unaff_x25 == 0) goto LAB_01bed9b8;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar21) break;
    fVar24 = (float)uVar23;
    fVar27 = (float)((ulong)uVar23 >> 0x20);
    fVar26 = (fVar24 + (float)uVar29) * (float)unaff_d13;
    fVar28 = (fVar27 + (float)((ulong)uVar29 >> 0x20)) * (float)((ulong)unaff_d13 >> 0x20);
    param_3 = CONCAT44(fVar28,fVar26);
    lVar9 = unaff_x25 + unaff_x22 * 0xc;
    unaff_x27 = (undefined8 *)(lVar9 + 0x20);
    *unaff_x27 = CONCAT44(fVar27 - fVar28,fVar24 - fVar26);
    unaff_x26 = (float *)(lVar9 + 0x28);
    *unaff_x26 = fVar25;
    uVar21 = uVar21 + 1;
    if ((*(uint *)(in_x9 + 0x18) <= uVar21) ||
       (in_x13 = (long)(int)uVar21, *(uint *)(unaff_x25 + 0x18) <= uVar21)) break;
    lVar9 = in_x9 + in_x13 * 0xc;
    uVar23 = *(undefined8 *)(lVar9 + 0x20);
    fVar25 = *(float *)(lVar9 + 0x28);
    lVar9 = unaff_x25 + in_x13 * 0xc;
    unaff_x24 = (undefined8 *)(lVar9 + 0x20);
    *unaff_x24 = CONCAT44((float)((ulong)uVar23 >> 0x20) - fVar28,(float)uVar23 - fVar26);
    unaff_x23 = (float *)(lVar9 + 0x28);
    *unaff_x23 = fVar25;
    if ((*(uint *)(in_x9 + 0x18) <= uVar17) || (*(uint *)(unaff_x25 + 0x18) <= uVar17)) break;
    uVar23 = *puVar13;
    fVar25 = *(float *)(lVar16 + 0x28);
    lVar9 = unaff_x25 + in_x12 * 0xc;
    unaff_x29 = (undefined8 *)(lVar9 + 0x20);
    *unaff_x29 = CONCAT44((float)((ulong)uVar23 >> 0x20) - fVar28,(float)uVar23 - fVar26);
    unaff_x19 = (float *)(lVar9 + 0x28);
    *unaff_x19 = fVar25;
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
    uVar23 = thunk_FUN_01afaadc(*(undefined8 *)
                                 Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                               );
    FUN_03924d70(DAT_00b55290,uVar23,0);
    *(undefined8 *)(lVar16 + 0x18) = uVar23;
    thunk_FUN_01b4f09c((undefined8 *)(lVar16 + 0x18),uVar23);
    *(undefined4 *)(lVar16 + 0x10) = 2;
    return 1;
  }
  lVar9 = *(long *)(lVar16 + 0x28);
  if (lVar9 == 0) goto LAB_01bed9b8;
  lVar12 = *(long *)(lVar16 + 0x40);
  lVar7 = *(long *)(lVar9 + 0x18);
  if (lVar7 == 0) {
    lVar7 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
    FUN_024c3984(lVar7,lVar9,*(undefined8 *)puVar6,0);
    *(long *)(lVar9 + 0x18) = lVar7;
    thunk_FUN_01b4f09c((long *)(lVar9 + 0x18),lVar7);
  }
  if (lVar12 == 0) goto LAB_01bed9b8;
  FUN_02b2e224(lVar12,lVar7,*(undefined8 *)puVar4);
  if ((*(long *)(lVar16 + 0x30) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar16 + 0x30) + 0x60), lVar9 == 0)) goto LAB_01bed9b8;
  uVar23 = *(undefined8 *)(lVar16 + 0x40);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_01beda6c;
  FUN_036facb8(lVar9 + lVar10 + 0x20,uVar23,0);
  if ((*(long *)(lVar16 + 0x30) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar16 + 0x30) + 0x60), lVar9 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_01beda6c;
  lVar7 = *(long *)(lVar9 + lVar10 + 0x20);
  if (lVar7 == 0) goto LAB_01bed9b8;
  FUN_0390262c(lVar7,*(undefined8 *)(lVar9 + lVar10 + 0x30),0);
  if ((*(long *)(lVar16 + 0x30) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar16 + 0x30) + 0x60), lVar9 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_01beda6c;
  lVar7 = *(long *)(lVar9 + lVar10 + 0x20);
  if (lVar7 == 0) goto LAB_01bed9b8;
  FUN_03902830(lVar7,*(undefined8 *)(lVar9 + lVar10 + 0x48),0);
  if ((*(long *)(lVar16 + 0x30) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar16 + 0x30) + 0x60), lVar9 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_01beda6c;
  lVar7 = *(long *)(lVar9 + lVar10 + 0x20);
  if (lVar7 == 0) goto LAB_01bed9b8;
  FUN_03902a3c(lVar7,*(undefined8 *)(lVar9 + lVar10 + 0x58),0);
  if (*(long *)(lVar16 + 0x30) == 0) goto LAB_01bed9b8;
  lVar9 = *(long *)(*(long *)(lVar16 + 0x30) + 0x60);
  if (lVar9 == 0) goto LAB_01bed9b8;
  if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_01beda6c;
  plVar8 = *(long **)(in_stack_00000060 + 0x30);
  if (plVar8 == (long *)0x0) goto LAB_01bed9b8;
  (**(code **)(*plVar8 + 0x7e8))
            (plVar8,*(undefined8 *)(lVar9 + lVar10 + 0x20),uVar19,*(undefined8 *)(*plVar8 + 0x7f0));
  lVar9 = *(long *)(lVar16 + 0x30);
  uVar19 = uVar19 + 1;
  lVar10 = lVar10 + 0x50;
  if (lVar9 == 0) goto LAB_01bed9b8;
  goto LAB_01bed818;
}


