/*
FUNCTION_NAME: df$$c
ENTRY_POINT: 01bed5f4
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


undefined8 df__c(long param_1)

{
  float *pfVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long in_x15;
  uint uVar20;
  long in_x16;
  uint uVar21;
  long in_x17;
  float *pfVar22;
  float *pfVar23;
  long lVar24;
  undefined8 uVar25;
  float *pfVar26;
  long lVar27;
  undefined8 *puVar28;
  float *pfVar29;
  undefined8 *puVar30;
  float *pfVar31;
  long unaff_x29;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
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
  long in_stack_00000038;
  long in_stack_00000060;
  long in_stack_00000068;
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
    uVar17 = (uint)in_stack_00000038;
    if (*(uint *)(param_1 + 0x18) <= uVar17) goto LAB_01beda6c;
                    /* try { // try from 01bed618 to 01ced623 has its CatchHandler @ 01bed9a8 */
    if ((*(long *)(unaff_x29 + 0x30) == 0) ||
       (lVar14 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar14 == 0)) break;
    if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_01beda6c;
    lVar12 = *(long *)(param_1 + in_stack_00000038 * 0x50 + 0x48);
    if (lVar12 == 0) break;
    uVar18 = (uint)in_stack_00000068;
    if (*(uint *)(lVar12 + 0x18) <= uVar18) goto LAB_01beda6c;
    lVar14 = *(long *)(lVar14 + in_stack_00000038 * 0x50 + 0x48);
    if (lVar14 == 0) break;
    if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_01beda6c;
    *(undefined8 *)(lVar14 + in_stack_00000068 * 8 + 0x20) =
         *(undefined8 *)(lVar12 + in_stack_00000068 * 8 + 0x20);
    uVar20 = (uint)in_x16;
    if ((*(uint *)(lVar12 + 0x18) <= uVar20) || (*(uint *)(lVar14 + 0x18) <= uVar20))
    goto LAB_01beda6c;
    *(undefined8 *)(lVar14 + in_x16 * 8 + 0x20) = *(undefined8 *)(lVar12 + in_x16 * 8 + 0x20);
    uVar19 = (uint)in_x15;
    if ((*(uint *)(lVar12 + 0x18) <= uVar19) || (*(uint *)(lVar14 + 0x18) <= uVar19))
    goto LAB_01beda6c;
    *(undefined8 *)(lVar14 + in_x15 * 8 + 0x20) = *(undefined8 *)(lVar12 + in_x15 * 8 + 0x20);
    uVar21 = (uint)in_x17;
    if ((*(uint *)(lVar12 + 0x18) <= uVar21) || (*(uint *)(lVar14 + 0x18) <= uVar21))
    goto LAB_01beda6c;
    *(undefined8 *)(lVar14 + in_x17 * 8 + 0x20) = *(undefined8 *)(lVar12 + in_x17 * 8 + 0x20);
    lVar14 = *(long *)(unaff_x29 + 0x38);
    if (lVar14 == 0) break;
    if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_01beda6c;
    if ((*(long *)(unaff_x29 + 0x30) == 0) ||
       (lVar12 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar12 == 0)) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar17) goto LAB_01beda6c;
    lVar14 = *(long *)(lVar14 + in_stack_00000038 * 0x50 + 0x58);
    if (lVar14 == 0) break;
    if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_01beda6c;
    lVar12 = *(long *)(lVar12 + in_stack_00000038 * 0x50 + 0x58);
    if (lVar12 == 0) break;
    if (((((*(uint *)(lVar12 + 0x18) <= uVar18) ||
          (*(undefined4 *)(lVar12 + in_stack_00000068 * 4 + 0x20) =
                *(undefined4 *)(lVar14 + in_stack_00000068 * 4 + 0x20),
          *(uint *)(lVar14 + 0x18) <= uVar20)) || (*(uint *)(lVar12 + 0x18) <= uVar20)) ||
        ((*(undefined4 *)(lVar12 + in_x16 * 4 + 0x20) = *(undefined4 *)(lVar14 + in_x16 * 4 + 0x20),
         *(uint *)(lVar14 + 0x18) <= uVar19 || (*(uint *)(lVar12 + 0x18) <= uVar19)))) ||
       ((*(undefined4 *)(lVar12 + in_x15 * 4 + 0x20) = *(undefined4 *)(lVar14 + in_x15 * 4 + 0x20),
        *(uint *)(lVar14 + 0x18) <= uVar21 || (*(uint *)(lVar12 + 0x18) <= uVar21))))
    goto LAB_01beda6c;
    *(undefined4 *)(lVar12 + in_x17 * 4 + 0x20) = *(undefined4 *)(lVar14 + in_x17 * 4 + 0x20);
    puVar7 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_7__;
    puVar6 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
    puVar5 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_65__;
    puVar4 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_61__;
    do {
      lVar14 = *(long *)(unaff_x29 + 0x30);
      in_stack_00000028 = in_stack_00000028 + 1;
      in_stack_00000030 = in_stack_00000030 + 0x178;
      if (in_stack_00000020 == in_stack_00000028) {
        if (lVar14 == 0) goto LAB_01bed9b8;
        lVar12 = 0;
        uVar17 = 0;
        goto LAB_01bed818;
      }
      if ((lVar14 == 0) || (lVar12 = *(long *)(lVar14 + 0x38), lVar12 == 0)) goto LAB_01bed9b8;
      if (*(uint *)(lVar12 + 0x18) <= in_stack_00000028) goto LAB_01beda6c;
    } while (*(char *)(lVar12 + in_stack_00000030) == '\0');
    lVar27 = *(long *)(unaff_x29 + 0x38);
    if (lVar27 == 0) break;
    uVar17 = *(uint *)(lVar12 + in_stack_00000030 + -0x13c);
    in_stack_00000038 = (long)(int)uVar17;
    if (*(uint *)(lVar27 + 0x18) <= uVar17) goto LAB_01beda6c;
    lVar27 = *(long *)(lVar27 + in_stack_00000038 * 0x50 + 0x30);
    if (lVar27 == 0) break;
    uVar18 = *(uint *)(lVar12 + in_stack_00000030 + -0x128);
    in_stack_00000068 = (long)(int)uVar18;
    if ((*(uint *)(lVar27 + 0x18) <= uVar18) ||
       (uVar20 = uVar18 + 2, *(uint *)(lVar27 + 0x18) <= uVar20)) goto LAB_01beda6c;
    in_x15 = (long)(int)uVar20;
    lVar24 = lVar27 + in_stack_00000068 * 0xc;
    lVar12 = lVar27 + in_x15 * 0xc;
    uVar25 = *(undefined8 *)(lVar24 + 0x20);
    fVar32 = *(float *)(lVar24 + 0x28);
    puVar15 = (undefined8 *)(lVar12 + 0x20);
    uVar36 = *puVar15;
    lVar14 = *(long *)(lVar14 + 0x60);
    if (lVar14 == 0) break;
    if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_01beda6c;
    lVar14 = *(long *)(lVar14 + in_stack_00000038 * 0x50 + 0x30);
    if (lVar14 == 0) break;
    if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_01beda6c;
    fVar33 = (float)uVar25;
    fVar35 = (float)((ulong)uVar25 >> 0x20);
    fVar34 = (fVar33 + (float)uVar36) * (float)unaff_d13;
    fVar37 = (fVar35 + (float)((ulong)uVar36 >> 0x20)) * (float)((ulong)unaff_d13 >> 0x20);
    lVar24 = lVar14 + in_stack_00000068 * 0xc;
    puVar30 = (undefined8 *)(lVar24 + 0x20);
    *puVar30 = CONCAT44(fVar35 - fVar37,fVar33 - fVar34);
    pfVar29 = (float *)(lVar24 + 0x28);
    *pfVar29 = fVar32;
    uVar17 = uVar18 + 1;
    if ((*(uint *)(lVar27 + 0x18) <= uVar17) ||
       (in_x16 = (long)(int)uVar17, *(uint *)(lVar14 + 0x18) <= uVar17)) goto LAB_01beda6c;
    lVar2 = lVar27 + in_x16 * 0xc;
    uVar25 = *(undefined8 *)(lVar2 + 0x20);
    fVar32 = *(float *)(lVar2 + 0x28);
    lVar2 = lVar14 + in_x16 * 0xc;
    puVar28 = (undefined8 *)(lVar2 + 0x20);
    *puVar28 = CONCAT44((float)((ulong)uVar25 >> 0x20) - fVar37,(float)uVar25 - fVar34);
    pfVar26 = (float *)(lVar2 + 0x28);
    *pfVar26 = fVar32;
    if ((*(uint *)(lVar27 + 0x18) <= uVar20) || (*(uint *)(lVar14 + 0x18) <= uVar20))
    goto LAB_01beda6c;
    uVar25 = *puVar15;
    fVar32 = *(float *)(lVar12 + 0x28);
    lVar12 = lVar14 + in_x15 * 0xc;
    puVar15 = (undefined8 *)(lVar12 + 0x20);
    *puVar15 = CONCAT44((float)((ulong)uVar25 >> 0x20) - fVar37,(float)uVar25 - fVar34);
    pfVar22 = (float *)(lVar12 + 0x28);
    *pfVar22 = fVar32;
    uVar19 = uVar18 + 3;
    if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_01beda6c;
    in_x17 = (long)(int)uVar19;
    if (*(uint *)(lVar14 + 0x18) <= uVar19) goto LAB_01beda6c;
    lVar27 = lVar27 + in_x17 * 0xc;
    uVar25 = *(undefined8 *)(lVar27 + 0x20);
    fVar32 = *(float *)(lVar27 + 0x28);
    lVar27 = lVar14 + in_x17 * 0xc;
    pfVar23 = (float *)(lVar27 + 0x20);
    *(ulong *)pfVar23 = CONCAT44((float)((ulong)uVar25 >> 0x20) - fVar37,(float)uVar25 - fVar34);
    pfVar31 = (float *)(lVar27 + 0x28);
    *pfVar31 = fVar32;
    uVar25 = FUN_0391a0e8(0x3f800000,0x3fc00000,0);
    lVar10 = *(long *)(in_stack_00000108 + 0x28);
    if ((lVar10 == 0) || (lVar8 = *(long *)(lVar10 + 0x10), lVar8 == 0)) break;
    lVar13 = *(long *)(lVar8 + 0x10);
    lVar16 = *(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_62__;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar13 == 0) break;
    uVar21 = *(uint *)(lVar8 + 0x18);
    if (uVar21 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar21 + 1;
      *(int *)(lVar13 + (long)(int)uVar21 * 4 + 0x20) = (int)uVar25;
    }
    else {
      FUN_02b9f3a0(uVar25,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      lVar10 = *(long *)(in_stack_00000108 + 0x28);
      if (lVar10 == 0) break;
    }
    if ((*(long *)(lVar10 + 0x10) == 0) || (lVar8 = *(long *)(in_stack_00000108 + 0x40), lVar8 == 0)
       ) break;
    iVar3 = *(int *)(*(long *)(lVar10 + 0x10) + 0x18);
    lVar10 = *(long *)(lVar8 + 0x10);
    lVar13 = *(long *)
              Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar10 == 0) break;
    uVar21 = *(uint *)(lVar8 + 0x18);
    iVar3 = iVar3 + -1;
    if (uVar21 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar21 + 1;
      *(int *)(lVar10 + (long)(int)uVar21 * 4 + 0x20) = iVar3;
    }
    else {
      FUN_02b2c8dc(lVar8,iVar3,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    puVar11 = *(undefined4 **)
               (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
               0xb8);
    uVar41 = *puVar11;
    uVar40 = puVar11[1];
    uVar39 = puVar11[2];
    uVar38 = puVar11[3];
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
    if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_01beda6c;
    uVar39 = *(undefined4 *)(lVar24 + 0x24);
    fVar32 = *pfVar29;
    uVar38 = FUN_03911ddc(*(undefined4 *)puVar30,&stack0x000000c0,0);
    if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_01beda6c;
    *(undefined4 *)puVar30 = uVar38;
    *(undefined4 *)(lVar24 + 0x24) = uVar39;
    *pfVar29 = fVar32;
    if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_01beda6c;
    uVar39 = *(undefined4 *)(lVar2 + 0x24);
    fVar32 = *pfVar26;
    uVar38 = FUN_03911ddc(*(undefined4 *)puVar28,&stack0x000000c0,0);
    if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_01beda6c;
    *(undefined4 *)puVar28 = uVar38;
    *(undefined4 *)(lVar2 + 0x24) = uVar39;
    *pfVar26 = fVar32;
    if (*(uint *)(lVar14 + 0x18) <= uVar20) goto LAB_01beda6c;
    uVar39 = *(undefined4 *)(lVar12 + 0x24);
    fVar32 = *pfVar22;
    uVar38 = FUN_03911ddc(*(undefined4 *)puVar15,&stack0x000000c0,0);
    if (*(uint *)(lVar14 + 0x18) <= uVar20) goto LAB_01beda6c;
    *(undefined4 *)puVar15 = uVar38;
    *(undefined4 *)(lVar12 + 0x24) = uVar39;
    *pfVar22 = fVar32;
    if (*(uint *)(lVar14 + 0x18) <= uVar19) goto LAB_01beda6c;
    pfVar1 = (float *)(lVar27 + 0x24);
    fVar33 = *pfVar1;
    fVar35 = *pfVar31;
    fVar32 = (float)FUN_03911ddc(*pfVar23,&stack0x000000c0,0);
    if (*(uint *)(lVar14 + 0x18) <= uVar19) goto LAB_01beda6c;
    *pfVar23 = fVar32;
    *pfVar1 = fVar33;
    *pfVar31 = fVar35;
    if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_01beda6c;
    *puVar30 = CONCAT44(fVar37 + (float)((ulong)*puVar30 >> 0x20),fVar34 + (float)*puVar30);
    *pfVar29 = *pfVar29 + unaff_s14;
    if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_01beda6c;
    *puVar28 = CONCAT44(fVar37 + (float)((ulong)*puVar28 >> 0x20),fVar34 + (float)*puVar28);
    *pfVar26 = *pfVar26 + unaff_s14;
    if (*(uint *)(lVar14 + 0x18) <= uVar20) goto LAB_01beda6c;
    *puVar15 = CONCAT44(fVar37 + (float)((ulong)*puVar15 >> 0x20),fVar34 + (float)*puVar15);
    *pfVar22 = *pfVar22 + unaff_s14;
    if (*(uint *)(lVar14 + 0x18) <= uVar19) goto LAB_01beda6c;
    *pfVar23 = fVar34 + fVar32;
    *pfVar1 = fVar37 + fVar33;
    *pfVar31 = fVar35 + unaff_s14;
    param_1 = *(long *)(in_stack_00000108 + 0x38);
    unaff_x29 = in_stack_00000108;
    if (param_1 == 0) break;
  }
LAB_01bed9b8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
LAB_01bed818:
  if (*(long *)(lVar14 + 0x60) == 0) goto LAB_01bed9b8;
  if (*(int *)(*(long *)(lVar14 + 0x60) + 0x18) <= (int)uVar17) {
    uVar25 = thunk_FUN_01afaadc(*(undefined8 *)
                                 Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                               );
    FUN_03924d70(DAT_00b55290,uVar25,0);
    *(undefined8 *)(unaff_x29 + 0x18) = uVar25;
    thunk_FUN_01b4f09c((undefined8 *)(unaff_x29 + 0x18),uVar25);
    *(undefined4 *)(unaff_x29 + 0x10) = 2;
    return 1;
  }
  lVar14 = *(long *)(unaff_x29 + 0x28);
  if (lVar14 == 0) goto LAB_01bed9b8;
  lVar24 = *(long *)(unaff_x29 + 0x40);
  lVar27 = *(long *)(lVar14 + 0x18);
  if (lVar27 == 0) {
    lVar27 = thunk_FUN_01afaadc(*(undefined8 *)puVar4);
    FUN_024c3984(lVar27,lVar14,*(undefined8 *)puVar7,0);
    *(long *)(lVar14 + 0x18) = lVar27;
    thunk_FUN_01b4f09c((long *)(lVar14 + 0x18),lVar27);
  }
  if (lVar24 == 0) goto LAB_01bed9b8;
  FUN_02b2e224(lVar24,lVar27,*(undefined8 *)puVar5);
  if ((*(long *)(unaff_x29 + 0x30) == 0) ||
     (lVar14 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar14 == 0)) goto LAB_01bed9b8;
  uVar25 = *(undefined8 *)(unaff_x29 + 0x40);
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (*(uint *)(lVar14 + 0x18) <= uVar17) {
LAB_01beda6c:
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
  FUN_036facb8(lVar14 + lVar12 + 0x20,uVar25,0);
  if ((*(long *)(unaff_x29 + 0x30) == 0) ||
     (lVar14 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar14 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_01beda6c;
  lVar27 = *(long *)(lVar14 + lVar12 + 0x20);
  if (lVar27 == 0) goto LAB_01bed9b8;
  FUN_0390262c(lVar27,*(undefined8 *)(lVar14 + lVar12 + 0x30),0);
  if ((*(long *)(unaff_x29 + 0x30) == 0) ||
     (lVar14 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar14 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_01beda6c;
  lVar27 = *(long *)(lVar14 + lVar12 + 0x20);
  if (lVar27 == 0) goto LAB_01bed9b8;
  FUN_03902830(lVar27,*(undefined8 *)(lVar14 + lVar12 + 0x48),0);
  if ((*(long *)(unaff_x29 + 0x30) == 0) ||
     (lVar14 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar14 == 0)) goto LAB_01bed9b8;
  if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_01beda6c;
  lVar27 = *(long *)(lVar14 + lVar12 + 0x20);
  if (lVar27 == 0) goto LAB_01bed9b8;
  FUN_03902a3c(lVar27,*(undefined8 *)(lVar14 + lVar12 + 0x58),0);
  if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_01bed9b8;
  lVar14 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60);
  if (lVar14 == 0) goto LAB_01bed9b8;
  if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_01beda6c;
  plVar9 = *(long **)(in_stack_00000060 + 0x30);
  if (plVar9 == (long *)0x0) goto LAB_01bed9b8;
  (**(code **)(*plVar9 + 0x7e8))
            (plVar9,*(undefined8 *)(lVar14 + lVar12 + 0x20),uVar17,*(undefined8 *)(*plVar9 + 0x7f0))
  ;
  lVar14 = *(long *)(unaff_x29 + 0x30);
  uVar17 = uVar17 + 1;
  lVar12 = lVar12 + 0x50;
  if (lVar14 == 0) goto LAB_01bed9b8;
  goto LAB_01bed818;
}


