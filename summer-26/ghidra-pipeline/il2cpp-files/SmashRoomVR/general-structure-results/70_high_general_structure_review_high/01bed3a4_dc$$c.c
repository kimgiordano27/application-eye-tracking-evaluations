/*
FUNCTION_NAME: dc$$c
ENTRY_POINT: 01bed3a4
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


undefined8 dc__c(undefined4 *param_1)

{
  float *pfVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  uint in_w9;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
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
    uVar30 = *param_1;
    uVar29 = param_1[1];
                    /* try { // try from 01bed3a8 to 01ced3b3 has its CatchHandler @ 01beda54 */
    uVar28 = param_1[2];
    uVar27 = param_1[3];
    if (in_w9 == 0) {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed258 = 1;
    }
                    /* try { // try from 01bed3dc to 01ced3df has its CatchHandler @ 01bed99c */
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
    lVar12 = in_stack_00000108;
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
    lVar8 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar8 == 0) break;
    uVar11 = (uint)unaff_x20;
    if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_01beda6c;
    if ((*(long *)(in_stack_00000108 + 0x30) == 0) ||
       (lVar9 = *(long *)(*(long *)(in_stack_00000108 + 0x30) + 0x60), lVar9 == 0)) break;
    if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_01beda6c;
    lVar8 = *(long *)(lVar8 + unaff_x20 * 0x50 + 0x48);
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_01beda6c;
    lVar9 = *(long *)(lVar9 + unaff_x20 * 0x50 + 0x48);
    if (lVar9 == 0) break;
    if (*(uint *)(lVar9 + 0x18) <= uVar18) goto LAB_01beda6c;
    *(undefined8 *)(lVar9 + unaff_x22 * 8 + 0x20) = *(undefined8 *)(lVar8 + unaff_x22 * 8 + 0x20);
    if ((*(uint *)(lVar8 + 0x18) <= uVar13) || (*(uint *)(lVar9 + 0x18) <= uVar13))
    goto LAB_01beda6c;
    *(undefined8 *)(lVar9 + in_stack_00000078 * 8 + 0x20) =
         *(undefined8 *)(lVar8 + in_stack_00000078 * 8 + 0x20);
    if ((*(uint *)(lVar8 + 0x18) <= uVar14) || (*(uint *)(lVar9 + 0x18) <= uVar14))
    goto LAB_01beda6c;
    *(undefined8 *)(lVar9 + in_stack_00000070 * 8 + 0x20) =
         *(undefined8 *)(lVar8 + in_stack_00000070 * 8 + 0x20);
    if ((*(uint *)(lVar8 + 0x18) <= uVar15) || (*(uint *)(lVar9 + 0x18) <= uVar15))
    goto LAB_01beda6c;
    *(undefined8 *)(lVar9 + in_stack_00000058 * 8 + 0x20) =
         *(undefined8 *)(lVar8 + in_stack_00000058 * 8 + 0x20);
    lVar8 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_01beda6c;
    if ((*(long *)(in_stack_00000108 + 0x30) == 0) ||
       (lVar9 = *(long *)(*(long *)(in_stack_00000108 + 0x30) + 0x60), lVar9 == 0)) break;
    if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_01beda6c;
    lVar8 = *(long *)(lVar8 + unaff_x20 * 0x50 + 0x58);
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_01beda6c;
    lVar9 = *(long *)(lVar9 + unaff_x20 * 0x50 + 0x58);
    if (lVar9 == 0) break;
    if (((((*(uint *)(lVar9 + 0x18) <= uVar18) ||
          (*(undefined4 *)(lVar9 + unaff_x22 * 4 + 0x20) =
                *(undefined4 *)(lVar8 + unaff_x22 * 4 + 0x20), *(uint *)(lVar8 + 0x18) <= uVar13))
         || (*(uint *)(lVar9 + 0x18) <= uVar13)) ||
        ((*(undefined4 *)(lVar9 + in_stack_00000078 * 4 + 0x20) =
               *(undefined4 *)(lVar8 + in_stack_00000078 * 4 + 0x20),
         *(uint *)(lVar8 + 0x18) <= uVar14 || (*(uint *)(lVar9 + 0x18) <= uVar14)))) ||
       ((*(undefined4 *)(lVar9 + in_stack_00000070 * 4 + 0x20) =
              *(undefined4 *)(lVar8 + in_stack_00000070 * 4 + 0x20),
        *(uint *)(lVar8 + 0x18) <= uVar15 || (*(uint *)(lVar9 + 0x18) <= uVar15))))
    goto LAB_01beda6c;
    *(undefined4 *)(lVar9 + in_stack_00000058 * 4 + 0x20) =
         *(undefined4 *)(lVar8 + in_stack_00000058 * 4 + 0x20);
    puVar6 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_7__;
    puVar5 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
    puVar4 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_65__;
    puVar3 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_61__;
    do {
      lVar8 = *(long *)(in_stack_00000108 + 0x30);
      in_stack_00000028 = in_stack_00000028 + 1;
      in_stack_00000030 = in_stack_00000030 + 0x178;
      if (in_stack_00000020 == in_stack_00000028) {
        if (lVar8 == 0) goto LAB_01bed9b8;
        lVar9 = 0;
        uVar18 = 0;
        goto LAB_01bed818;
      }
      if ((lVar8 == 0) || (lVar9 = *(long *)(lVar8 + 0x38), lVar9 == 0)) goto LAB_01bed9b8;
      if (*(uint *)(lVar9 + 0x18) <= in_stack_00000028) goto LAB_01beda6c;
    } while (*(char *)(lVar9 + in_stack_00000030) == '\0');
    lVar12 = *(long *)(in_stack_00000108 + 0x38);
    if (lVar12 == 0) break;
    uVar18 = *(uint *)(lVar9 + in_stack_00000030 + -0x13c);
    unaff_x20 = (long)(int)uVar18;
    if (*(uint *)(lVar12 + 0x18) <= uVar18) goto LAB_01beda6c;
    lVar12 = *(long *)(lVar12 + unaff_x20 * 0x50 + 0x30);
    if (lVar12 == 0) break;
    uVar13 = *(uint *)(lVar9 + in_stack_00000030 + -0x128);
    unaff_x22 = (long)(int)uVar13;
    if ((*(uint *)(lVar12 + 0x18) <= uVar13) ||
       (uVar14 = uVar13 + 2, *(uint *)(lVar12 + 0x18) <= uVar14)) goto LAB_01beda6c;
    in_stack_00000070 = (long)(int)uVar14;
    lVar19 = lVar12 + unaff_x22 * 0xc;
    lVar9 = lVar12 + in_stack_00000070 * 0xc;
    uVar17 = *(undefined8 *)(lVar19 + 0x20);
    fVar21 = *(float *)(lVar19 + 0x28);
    puVar10 = (undefined8 *)(lVar9 + 0x20);
    uVar23 = *puVar10;
    lVar8 = *(long *)(lVar8 + 0x60);
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_01beda6c;
    unaff_x25 = *(long *)(lVar8 + unaff_x20 * 0x50 + 0x30);
    if (unaff_x25 == 0) break;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar13) goto LAB_01beda6c;
    fVar20 = (float)uVar17;
    fVar22 = (float)((ulong)uVar17 >> 0x20);
    fVar25 = (fVar20 + (float)uVar23) * (float)unaff_d13;
    fVar24 = (fVar22 + (float)((ulong)uVar23 >> 0x20)) * (float)((ulong)unaff_d13 >> 0x20);
    in_stack_00000040 = CONCAT44(fVar24,fVar25);
    lVar8 = unaff_x25 + unaff_x22 * 0xc;
    unaff_x27 = (undefined8 *)(lVar8 + 0x20);
    *unaff_x27 = CONCAT44(fVar22 - fVar24,fVar20 - fVar25);
    unaff_x26 = (float *)(lVar8 + 0x28);
    *unaff_x26 = fVar21;
    uVar18 = uVar13 + 1;
    if ((*(uint *)(lVar12 + 0x18) <= uVar18) ||
       (in_stack_00000078 = (long)(int)uVar18, *(uint *)(unaff_x25 + 0x18) <= uVar18))
    goto LAB_01beda6c;
    lVar8 = lVar12 + in_stack_00000078 * 0xc;
    uVar17 = *(undefined8 *)(lVar8 + 0x20);
    fVar21 = *(float *)(lVar8 + 0x28);
    lVar8 = unaff_x25 + in_stack_00000078 * 0xc;
    unaff_x24 = (undefined8 *)(lVar8 + 0x20);
    *unaff_x24 = CONCAT44((float)((ulong)uVar17 >> 0x20) - fVar24,(float)uVar17 - fVar25);
    unaff_x23 = (float *)(lVar8 + 0x28);
    *unaff_x23 = fVar21;
    if ((*(uint *)(lVar12 + 0x18) <= uVar14) || (*(uint *)(unaff_x25 + 0x18) <= uVar14))
    goto LAB_01beda6c;
    uVar17 = *puVar10;
    fVar21 = *(float *)(lVar9 + 0x28);
    lVar8 = unaff_x25 + in_stack_00000070 * 0xc;
    unaff_x29 = (undefined8 *)(lVar8 + 0x20);
    *unaff_x29 = CONCAT44((float)((ulong)uVar17 >> 0x20) - fVar24,(float)uVar17 - fVar25);
    unaff_x19 = (float *)(lVar8 + 0x28);
    *unaff_x19 = fVar21;
    uVar13 = uVar13 + 3;
    if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_01beda6c;
    in_stack_00000058 = (long)(int)uVar13;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar13) goto LAB_01beda6c;
    lVar12 = lVar12 + in_stack_00000058 * 0xc;
    uVar17 = *(undefined8 *)(lVar12 + 0x20);
    fVar21 = *(float *)(lVar12 + 0x28);
    lVar12 = unaff_x25 + in_stack_00000058 * 0xc;
    unaff_x21 = (float *)(lVar12 + 0x20);
    *(ulong *)unaff_x21 = CONCAT44((float)((ulong)uVar17 >> 0x20) - fVar24,(float)uVar17 - fVar25);
    unaff_x28 = (float *)(lVar12 + 0x28);
    *unaff_x28 = fVar21;
    uVar17 = FUN_0391a0e8(0x3f800000,0x3fc00000,0);
    lVar12 = *(long *)(in_stack_00000108 + 0x28);
    if ((lVar12 == 0) || (lVar8 = *(long *)(lVar12 + 0x10), lVar8 == 0)) break;
    lVar9 = *(long *)(lVar8 + 0x10);
    lVar19 = *(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_62__;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar9 == 0) break;
    uVar18 = *(uint *)(lVar8 + 0x18);
    if (uVar18 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar18 + 1;
      *(int *)(lVar9 + (long)(int)uVar18 * 4 + 0x20) = (int)uVar17;
    }
    else {
      FUN_02b9f3a0(uVar17,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      lVar12 = *(long *)(in_stack_00000108 + 0x28);
      if (lVar12 == 0) break;
    }
    if ((*(long *)(lVar12 + 0x10) == 0) || (lVar8 = *(long *)(in_stack_00000108 + 0x40), lVar8 == 0)
       ) break;
    iVar2 = *(int *)(*(long *)(lVar12 + 0x10) + 0x18);
    lVar12 = *(long *)(lVar8 + 0x10);
    lVar9 = *(long *)
             Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar12 == 0) break;
    uVar18 = *(uint *)(lVar8 + 0x18);
    iVar2 = iVar2 + -1;
    if (uVar18 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar18 + 1;
      *(int *)(lVar12 + (long)(int)uVar18 * 4 + 0x20) = iVar2;
    }
    else {
      FUN_02b2c8dc(lVar8,iVar2,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    in_w9 = (uint)DAT_03fed258;
    param_1 = *(undefined4 **)
               (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
               0xb8);
  }
LAB_01bed9b8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
LAB_01bed818:
  if (*(long *)(lVar8 + 0x60) == 0) goto LAB_01bed9b8;
  if (*(int *)(*(long *)(lVar8 + 0x60) + 0x18) <= (int)uVar18) {
    uVar17 = thunk_FUN_01afaadc(*(undefined8 *)
                                 Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                               );
    FUN_03924d70(DAT_00b55290,uVar17,0);
    *(undefined8 *)(lVar12 + 0x18) = uVar17;
    thunk_FUN_01b4f09c((undefined8 *)(lVar12 + 0x18),uVar17);
    *(undefined4 *)(lVar12 + 0x10) = 2;
    return 1;
  }
  lVar8 = *(long *)(lVar12 + 0x28);
  if (lVar8 == 0) goto LAB_01bed9b8;
  lVar16 = *(long *)(lVar12 + 0x40);
  lVar19 = *(long *)(lVar8 + 0x18);
  if (lVar19 == 0) {
    lVar19 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
    FUN_024c3984(lVar19,lVar8,*(undefined8 *)puVar6,0);
    *(long *)(lVar8 + 0x18) = lVar19;
    thunk_FUN_01b4f09c((long *)(lVar8 + 0x18),lVar19);
  }
  if (lVar16 == 0) goto LAB_01bed9b8;
  FUN_02b2e224(lVar16,lVar19,*(undefined8 *)puVar4);
  if ((*(long *)(lVar12 + 0x30) == 0) ||
     (lVar8 = *(long *)(*(long *)(lVar12 + 0x30) + 0x60), lVar8 == 0)) goto LAB_01bed9b8;
  uVar17 = *(undefined8 *)(lVar12 + 0x40);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (*(uint *)(lVar8 + 0x18) <= uVar18) {
LAB_01beda6c:
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
  FUN_036facb8(lVar8 + lVar9 + 0x20,uVar17,0);
  if ((*(long *)(lVar12 + 0x30) == 0) ||
     (lVar8 = *(long *)(*(long *)(lVar12 + 0x30) + 0x60), lVar8 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_01beda6c;
  lVar19 = *(long *)(lVar8 + lVar9 + 0x20);
  if (lVar19 == 0) goto LAB_01bed9b8;
  FUN_0390262c(lVar19,*(undefined8 *)(lVar8 + lVar9 + 0x30),0);
  if ((*(long *)(lVar12 + 0x30) == 0) ||
     (lVar8 = *(long *)(*(long *)(lVar12 + 0x30) + 0x60), lVar8 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_01beda6c;
  lVar19 = *(long *)(lVar8 + lVar9 + 0x20);
  if (lVar19 == 0) goto LAB_01bed9b8;
  FUN_03902830(lVar19,*(undefined8 *)(lVar8 + lVar9 + 0x48),0);
  if ((*(long *)(lVar12 + 0x30) == 0) ||
     (lVar8 = *(long *)(*(long *)(lVar12 + 0x30) + 0x60), lVar8 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_01beda6c;
  lVar19 = *(long *)(lVar8 + lVar9 + 0x20);
  if (lVar19 == 0) goto LAB_01bed9b8;
  FUN_03902a3c(lVar19,*(undefined8 *)(lVar8 + lVar9 + 0x58),0);
  if (*(long *)(lVar12 + 0x30) == 0) goto LAB_01bed9b8;
  lVar8 = *(long *)(*(long *)(lVar12 + 0x30) + 0x60);
  if (lVar8 == 0) goto LAB_01bed9b8;
  if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_01beda6c;
  plVar7 = *(long **)(in_stack_00000060 + 0x30);
  if (plVar7 == (long *)0x0) goto LAB_01bed9b8;
  (**(code **)(*plVar7 + 0x7e8))
            (plVar7,*(undefined8 *)(lVar8 + lVar9 + 0x20),uVar18,*(undefined8 *)(*plVar7 + 0x7f0));
  lVar8 = *(long *)(lVar12 + 0x30);
  uVar18 = uVar18 + 1;
  lVar9 = lVar9 + 0x50;
  if (lVar8 == 0) goto LAB_01bed9b8;
  goto LAB_01bed818;
}


