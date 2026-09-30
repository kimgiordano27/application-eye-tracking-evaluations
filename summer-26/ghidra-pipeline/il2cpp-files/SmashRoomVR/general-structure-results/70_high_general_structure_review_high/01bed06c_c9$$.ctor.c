/*
FUNCTION_NAME: c9$$.ctor
ENTRY_POINT: 01bed06c
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


undefined8 c9___ctor(long param_1)

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
  long lVar16;
  undefined4 *puVar17;
  int in_w9;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  float *pfVar29;
  uint uVar30;
  long lVar31;
  float *pfVar32;
  float *pfVar33;
  undefined8 *puVar34;
  float *pfVar35;
  long lVar36;
  undefined8 *puVar37;
  float *pfVar38;
  long unaff_x29;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  float fVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
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
  
  if (in_w9 == 0) {
    uVar41 = thunk_FUN_01afaadc(*(undefined8 *)
                                 Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                               );
    FUN_03924d70(0x3e800000,uVar41,0);
    *(undefined8 *)(unaff_x29 + 0x18) = uVar41;
    thunk_FUN_01b4f09c((undefined8 *)(unaff_x29 + 0x18),uVar41);
    uVar46 = 1;
LAB_01beda2c:
    *(undefined4 *)(unaff_x29 + 0x10) = uVar46;
    return 1;
  }
  if ((*(long *)(unaff_x29 + 0x28) != 0) &&
     (lVar18 = *(long *)(*(long *)(unaff_x29 + 0x28) + 0x10), lVar18 != 0)) {
    *(undefined4 *)(lVar18 + 0x18) = 0;
    *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
    lVar18 = *(long *)(unaff_x29 + 0x40);
    if (lVar18 != 0) {
                    /* try { // try from 01bed098 to 01ced09b has its CatchHandler @ 01bed970 */
      *(undefined4 *)(lVar18 + 0x18) = 0;
      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
      if (0 < (int)in_stack_00000020) {
        uVar24 = 0;
        lVar18 = 0x194;
        do {
          if ((param_1 == 0) || (lVar19 = *(long *)(param_1 + 0x38), lVar19 == 0))
          goto LAB_01bed9b8;
          if (*(uint *)(lVar19 + 0x18) <= uVar24) goto LAB_01beda6c;
          if (*(char *)(lVar19 + lVar18) != '\0') {
                    /* try { // try from 01bed0e8 to 01ced0ff has its CatchHandler @ 01bed9d0 */
            lVar25 = *(long *)(unaff_x29 + 0x38);
            if (lVar25 == 0) goto LAB_01bed9b8;
            uVar30 = *(uint *)(lVar19 + lVar18 + -0x13c);
            lVar31 = (long)(int)uVar30;
            if (*(uint *)(lVar25 + 0x18) <= uVar30) goto LAB_01beda6c;
            lVar25 = *(long *)(lVar25 + lVar31 * 0x50 + 0x30);
            if (lVar25 == 0) goto LAB_01bed9b8;
            uVar7 = *(uint *)(lVar19 + lVar18 + -0x128);
            lVar19 = (long)(int)uVar7;
            if ((*(uint *)(lVar25 + 0x18) <= uVar7) ||
               (uVar1 = uVar7 + 2, *(uint *)(lVar25 + 0x18) <= uVar1)) goto LAB_01beda6c;
            lVar27 = (long)(int)uVar1;
            lVar26 = lVar25 + lVar19 * 0xc;
            lVar21 = lVar25 + lVar27 * 0xc;
            uVar41 = *(undefined8 *)(lVar26 + 0x20);
            fVar39 = *(float *)(lVar26 + 0x28);
            puVar22 = (undefined8 *)(lVar21 + 0x20);
            uVar44 = *puVar22;
            lVar26 = *(long *)(param_1 + 0x60);
            if (lVar26 == 0) goto LAB_01bed9b8;
            if (*(uint *)(lVar26 + 0x18) <= uVar30) goto LAB_01beda6c;
            lVar26 = *(long *)(lVar26 + lVar31 * 0x50 + 0x30);
            if (lVar26 == 0) goto LAB_01bed9b8;
            if (*(uint *)(lVar26 + 0x18) <= uVar7) goto LAB_01beda6c;
            fVar40 = (float)uVar41;
            fVar43 = (float)((ulong)uVar41 >> 0x20);
            fVar42 = (fVar40 + (float)uVar44) * 0.5;
            fVar45 = (fVar43 + (float)((ulong)uVar44 >> 0x20)) * 0.5;
            lVar36 = lVar26 + lVar19 * 0xc;
            puVar37 = (undefined8 *)(lVar36 + 0x20);
            *puVar37 = CONCAT44(fVar43 - fVar45,fVar40 - fVar42);
            pfVar35 = (float *)(lVar36 + 0x28);
            *pfVar35 = fVar39;
            uVar2 = uVar7 + 1;
            if ((*(uint *)(lVar25 + 0x18) <= uVar2) ||
               (lVar28 = (long)(int)uVar2, *(uint *)(lVar26 + 0x18) <= uVar2)) goto LAB_01beda6c;
            lVar5 = lVar25 + lVar28 * 0xc;
            uVar41 = *(undefined8 *)(lVar5 + 0x20);
            fVar39 = *(float *)(lVar5 + 0x28);
            lVar5 = lVar26 + lVar28 * 0xc;
            puVar34 = (undefined8 *)(lVar5 + 0x20);
            *puVar34 = CONCAT44((float)((ulong)uVar41 >> 0x20) - fVar45,(float)uVar41 - fVar42);
            pfVar33 = (float *)(lVar5 + 0x28);
            *pfVar33 = fVar39;
            if ((*(uint *)(lVar25 + 0x18) <= uVar1) || (*(uint *)(lVar26 + 0x18) <= uVar1))
            goto LAB_01beda6c;
            uVar41 = *puVar22;
            fVar39 = *(float *)(lVar21 + 0x28);
            lVar21 = lVar26 + lVar27 * 0xc;
            puVar22 = (undefined8 *)(lVar21 + 0x20);
            *puVar22 = CONCAT44((float)((ulong)uVar41 >> 0x20) - fVar45,(float)uVar41 - fVar42);
            pfVar29 = (float *)(lVar21 + 0x28);
            *pfVar29 = fVar39;
            uVar3 = uVar7 + 3;
            if (*(uint *)(lVar25 + 0x18) <= uVar3) goto LAB_01beda6c;
            lVar15 = (long)(int)uVar3;
            if (*(uint *)(lVar26 + 0x18) <= uVar3) goto LAB_01beda6c;
            lVar25 = lVar25 + lVar15 * 0xc;
            uVar41 = *(undefined8 *)(lVar25 + 0x20);
            fVar39 = *(float *)(lVar25 + 0x28);
            lVar25 = lVar26 + lVar15 * 0xc;
            pfVar32 = (float *)(lVar25 + 0x20);
            *(ulong *)pfVar32 =
                 CONCAT44((float)((ulong)uVar41 >> 0x20) - fVar45,(float)uVar41 - fVar42);
            pfVar38 = (float *)(lVar25 + 0x28);
            *pfVar38 = fVar39;
            uVar41 = FUN_0391a0e8(0x3f800000,0x3fc00000,0);
            lVar16 = *(long *)(unaff_x29 + 0x28);
            if ((lVar16 == 0) || (lVar13 = *(long *)(lVar16 + 0x10), lVar13 == 0))
            goto LAB_01bed9b8;
            lVar20 = *(long *)(lVar13 + 0x10);
            lVar23 = *(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_62__;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar20 == 0) goto LAB_01bed9b8;
            uVar8 = *(uint *)(lVar13 + 0x18);
            if (uVar8 < *(uint *)(lVar20 + 0x18)) {
              *(uint *)(lVar13 + 0x18) = uVar8 + 1;
              *(int *)(lVar20 + (long)(int)uVar8 * 4 + 0x20) = (int)uVar41;
            }
            else {
              FUN_02b9f3a0(uVar41,lVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
              lVar16 = *(long *)(unaff_x29 + 0x28);
              if (lVar16 == 0) goto LAB_01bed9b8;
            }
            if ((*(long *)(lVar16 + 0x10) == 0) ||
               (lVar13 = *(long *)(unaff_x29 + 0x40), lVar13 == 0)) goto LAB_01bed9b8;
            iVar6 = *(int *)(*(long *)(lVar16 + 0x10) + 0x18);
            lVar16 = *(long *)(lVar13 + 0x10);
            lVar20 = *(long *)
                      Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
            ;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar16 == 0) goto LAB_01bed9b8;
            uVar8 = *(uint *)(lVar13 + 0x18);
            iVar6 = iVar6 + -1;
            if (uVar8 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar13 + 0x18) = uVar8 + 1;
              *(int *)(lVar16 + (long)(int)uVar8 * 4 + 0x20) = iVar6;
            }
            else {
              FUN_02b2c8dc(lVar13,iVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            }
            if (DAT_03fed256 == '\0') {
              thunk_FUN_01ad9084(
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                );
              DAT_03fed256 = '\x01';
            }
            puVar17 = *(undefined4 **)
                       (*(long *)
                         Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                       0xb8);
            uVar49 = *puVar17;
            uVar48 = puVar17[1];
            uVar47 = puVar17[2];
            uVar46 = puVar17[3];
            if (DAT_03fed258 == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              DAT_03fed258 = '\x01';
            }
            FUN_03910ecc(&stack0x00000080,0,0,0,uVar49,uVar48,uVar47,uVar46,0);
            in_stack_000000c8 = in_stack_00000088;
            in_stack_000000c0 = in_stack_00000080;
            in_stack_000000d8 = in_stack_00000098;
            in_stack_000000d0 = in_stack_00000090;
            in_stack_000000e8 = in_stack_000000a8;
            in_stack_000000e0 = in_stack_000000a0;
            in_stack_000000f8 = in_stack_000000b8;
            in_stack_000000f0 = in_stack_000000b0;
            if (*(uint *)(lVar26 + 0x18) <= uVar7) goto LAB_01beda6c;
            uVar47 = *(undefined4 *)(lVar36 + 0x24);
            fVar39 = *pfVar35;
            uVar46 = FUN_03911ddc(*(undefined4 *)puVar37,&stack0x000000c0,0);
            if (*(uint *)(lVar26 + 0x18) <= uVar7) goto LAB_01beda6c;
            *(undefined4 *)puVar37 = uVar46;
            *(undefined4 *)(lVar36 + 0x24) = uVar47;
            *pfVar35 = fVar39;
            if (*(uint *)(lVar26 + 0x18) <= uVar2) goto LAB_01beda6c;
            uVar47 = *(undefined4 *)(lVar5 + 0x24);
            fVar39 = *pfVar33;
            uVar46 = FUN_03911ddc(*(undefined4 *)puVar34,&stack0x000000c0,0);
            if (*(uint *)(lVar26 + 0x18) <= uVar2) goto LAB_01beda6c;
            *(undefined4 *)puVar34 = uVar46;
            *(undefined4 *)(lVar5 + 0x24) = uVar47;
            *pfVar33 = fVar39;
            if (*(uint *)(lVar26 + 0x18) <= uVar1) goto LAB_01beda6c;
            uVar47 = *(undefined4 *)(lVar21 + 0x24);
            fVar39 = *pfVar29;
            uVar46 = FUN_03911ddc(*(undefined4 *)puVar22,&stack0x000000c0,0);
            if (*(uint *)(lVar26 + 0x18) <= uVar1) goto LAB_01beda6c;
            *(undefined4 *)puVar22 = uVar46;
            *(undefined4 *)(lVar21 + 0x24) = uVar47;
            *pfVar29 = fVar39;
            if (*(uint *)(lVar26 + 0x18) <= uVar3) goto LAB_01beda6c;
            pfVar4 = (float *)(lVar25 + 0x24);
            fVar40 = *pfVar4;
            fVar43 = *pfVar38;
            fVar39 = (float)FUN_03911ddc(*pfVar32,&stack0x000000c0,0);
            if (*(uint *)(lVar26 + 0x18) <= uVar3) goto LAB_01beda6c;
            *pfVar32 = fVar39;
            *pfVar4 = fVar40;
            *pfVar38 = fVar43;
            if (*(uint *)(lVar26 + 0x18) <= uVar7) goto LAB_01beda6c;
            *puVar37 = CONCAT44(fVar45 + (float)((ulong)*puVar37 >> 0x20),fVar42 + (float)*puVar37);
            *pfVar35 = *pfVar35 + 0.0;
            if (*(uint *)(lVar26 + 0x18) <= uVar2) goto LAB_01beda6c;
            *puVar34 = CONCAT44(fVar45 + (float)((ulong)*puVar34 >> 0x20),fVar42 + (float)*puVar34);
            *pfVar33 = *pfVar33 + 0.0;
            if (*(uint *)(lVar26 + 0x18) <= uVar1) goto LAB_01beda6c;
            *puVar22 = CONCAT44(fVar45 + (float)((ulong)*puVar22 >> 0x20),fVar42 + (float)*puVar22);
            *pfVar29 = *pfVar29 + 0.0;
            if (*(uint *)(lVar26 + 0x18) <= uVar3) goto LAB_01beda6c;
            *pfVar32 = fVar42 + fVar39;
            *pfVar4 = fVar45 + fVar40;
            *pfVar38 = fVar43 + 0.0;
            lVar25 = *(long *)(unaff_x29 + 0x38);
            if (lVar25 == 0) goto LAB_01bed9b8;
            if (*(uint *)(lVar25 + 0x18) <= uVar30) goto LAB_01beda6c;
            if ((*(long *)(unaff_x29 + 0x30) == 0) ||
               (lVar26 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar26 == 0))
            goto LAB_01bed9b8;
            if (*(uint *)(lVar26 + 0x18) <= uVar30) goto LAB_01beda6c;
            lVar25 = *(long *)(lVar25 + lVar31 * 0x50 + 0x48);
            if (lVar25 == 0) goto LAB_01bed9b8;
            if (*(uint *)(lVar25 + 0x18) <= uVar7) goto LAB_01beda6c;
            lVar26 = *(long *)(lVar26 + lVar31 * 0x50 + 0x48);
            if (lVar26 == 0) goto LAB_01bed9b8;
            if (*(uint *)(lVar26 + 0x18) <= uVar7) goto LAB_01beda6c;
            *(undefined8 *)(lVar26 + lVar19 * 8 + 0x20) =
                 *(undefined8 *)(lVar25 + lVar19 * 8 + 0x20);
            if ((*(uint *)(lVar25 + 0x18) <= uVar2) || (*(uint *)(lVar26 + 0x18) <= uVar2))
            goto LAB_01beda6c;
            *(undefined8 *)(lVar26 + lVar28 * 8 + 0x20) =
                 *(undefined8 *)(lVar25 + lVar28 * 8 + 0x20);
            if ((*(uint *)(lVar25 + 0x18) <= uVar1) || (*(uint *)(lVar26 + 0x18) <= uVar1))
            goto LAB_01beda6c;
            *(undefined8 *)(lVar26 + lVar27 * 8 + 0x20) =
                 *(undefined8 *)(lVar25 + lVar27 * 8 + 0x20);
            if ((*(uint *)(lVar25 + 0x18) <= uVar3) || (*(uint *)(lVar26 + 0x18) <= uVar3))
            goto LAB_01beda6c;
            *(undefined8 *)(lVar26 + lVar15 * 8 + 0x20) =
                 *(undefined8 *)(lVar25 + lVar15 * 8 + 0x20);
            lVar25 = *(long *)(unaff_x29 + 0x38);
            if (lVar25 == 0) goto LAB_01bed9b8;
            if (*(uint *)(lVar25 + 0x18) <= uVar30) goto LAB_01beda6c;
            if ((*(long *)(unaff_x29 + 0x30) == 0) ||
               (lVar26 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar26 == 0))
            goto LAB_01bed9b8;
            if (*(uint *)(lVar26 + 0x18) <= uVar30) goto LAB_01beda6c;
            lVar25 = *(long *)(lVar25 + lVar31 * 0x50 + 0x58);
            if (lVar25 == 0) goto LAB_01bed9b8;
            if (*(uint *)(lVar25 + 0x18) <= uVar7) goto LAB_01beda6c;
            lVar31 = *(long *)(lVar26 + lVar31 * 0x50 + 0x58);
            if (lVar31 == 0) goto LAB_01bed9b8;
            if (((((*(uint *)(lVar31 + 0x18) <= uVar7) ||
                  (*(undefined4 *)(lVar31 + lVar19 * 4 + 0x20) =
                        *(undefined4 *)(lVar25 + lVar19 * 4 + 0x20),
                  *(uint *)(lVar25 + 0x18) <= uVar2)) || (*(uint *)(lVar31 + 0x18) <= uVar2)) ||
                ((*(undefined4 *)(lVar31 + lVar28 * 4 + 0x20) =
                       *(undefined4 *)(lVar25 + lVar28 * 4 + 0x20),
                 *(uint *)(lVar25 + 0x18) <= uVar1 || (*(uint *)(lVar31 + 0x18) <= uVar1)))) ||
               ((*(undefined4 *)(lVar31 + lVar27 * 4 + 0x20) =
                      *(undefined4 *)(lVar25 + lVar27 * 4 + 0x20), *(uint *)(lVar25 + 0x18) <= uVar3
                || (*(uint *)(lVar31 + 0x18) <= uVar3)))) goto LAB_01beda6c;
            *(undefined4 *)(lVar31 + lVar15 * 4 + 0x20) =
                 *(undefined4 *)(lVar25 + lVar15 * 4 + 0x20);
          }
          param_1 = *(long *)(unaff_x29 + 0x30);
          uVar24 = uVar24 + 1;
          lVar18 = lVar18 + 0x178;
        } while (in_stack_00000020 != uVar24);
        if (param_1 == 0) goto LAB_01bed9b8;
      }
      puVar12 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_7__;
      puVar11 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
      puVar10 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_65__;
      puVar9 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_61__;
      lVar18 = 0;
      uVar30 = 0;
      while (*(long *)(param_1 + 0x60) != 0) {
        if (*(int *)(*(long *)(param_1 + 0x60) + 0x18) <= (int)uVar30) {
          uVar41 = thunk_FUN_01afaadc(*(undefined8 *)
                                       Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                     );
          FUN_03924d70(DAT_00b55290,uVar41,0);
          *(undefined8 *)(unaff_x29 + 0x18) = uVar41;
          thunk_FUN_01b4f09c((undefined8 *)(unaff_x29 + 0x18),uVar41);
          uVar46 = 2;
          goto LAB_01beda2c;
        }
        lVar19 = *(long *)(unaff_x29 + 0x28);
        if (lVar19 == 0) break;
        lVar31 = *(long *)(unaff_x29 + 0x40);
        lVar25 = *(long *)(lVar19 + 0x18);
        if (lVar25 == 0) {
          lVar25 = thunk_FUN_01afaadc(*(undefined8 *)puVar9);
          FUN_024c3984(lVar25,lVar19,*(undefined8 *)puVar12,0);
          *(long *)(lVar19 + 0x18) = lVar25;
          thunk_FUN_01b4f09c((long *)(lVar19 + 0x18),lVar25);
        }
        if (lVar31 == 0) break;
        FUN_02b2e224(lVar31,lVar25,*(undefined8 *)puVar10);
        if ((*(long *)(unaff_x29 + 0x30) == 0) ||
           (lVar19 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar19 == 0)) break;
        uVar41 = *(undefined8 *)(unaff_x29 + 0x40);
        if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (*(uint *)(lVar19 + 0x18) <= uVar30) {
LAB_01beda6c:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        FUN_036facb8(lVar19 + lVar18 + 0x20,uVar41,0);
        if ((*(long *)(unaff_x29 + 0x30) == 0) ||
           (lVar19 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar19 == 0)) break;
        if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_01beda6c;
        lVar25 = *(long *)(lVar19 + lVar18 + 0x20);
        if (lVar25 == 0) break;
        FUN_0390262c(lVar25,*(undefined8 *)(lVar19 + lVar18 + 0x30),0);
        if ((*(long *)(unaff_x29 + 0x30) == 0) ||
           (lVar19 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar19 == 0)) break;
        if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_01beda6c;
        lVar25 = *(long *)(lVar19 + lVar18 + 0x20);
        if (lVar25 == 0) break;
        FUN_03902830(lVar25,*(undefined8 *)(lVar19 + lVar18 + 0x48),0);
        if ((*(long *)(unaff_x29 + 0x30) == 0) ||
           (lVar19 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60), lVar19 == 0)) break;
        if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_01beda6c;
        lVar25 = *(long *)(lVar19 + lVar18 + 0x20);
        if (lVar25 == 0) break;
        FUN_03902a3c(lVar25,*(undefined8 *)(lVar19 + lVar18 + 0x58),0);
        if (*(long *)(unaff_x29 + 0x30) == 0) break;
        lVar19 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x60);
        if (lVar19 == 0) break;
        if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_01beda6c;
        plVar14 = *(long **)(in_stack_00000060 + 0x30);
        if (plVar14 == (long *)0x0) break;
        (**(code **)(*plVar14 + 0x7e8))
                  (plVar14,*(undefined8 *)(lVar19 + lVar18 + 0x20),uVar30,
                   *(undefined8 *)(*plVar14 + 0x7f0));
        param_1 = *(long *)(unaff_x29 + 0x30);
        uVar30 = uVar30 + 1;
        lVar18 = lVar18 + 0x50;
        if (param_1 == 0) break;
      }
    }
  }
LAB_01bed9b8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


