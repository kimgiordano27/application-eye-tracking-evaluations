/*
FUNCTION_NAME: FUN_01becde4
ENTRY_POINT: 01becde4
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


undefined8 FUN_01becde4(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined4 *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  float *pfVar33;
  uint uVar34;
  long lVar35;
  float *pfVar36;
  float *pfVar37;
  undefined8 *puVar38;
  float *pfVar39;
  undefined8 *puVar40;
  float *pfVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  if ((DAT_03fed2f4 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_61__);
                    /* try { // try from 01bece30 to 01cece9b has its CatchHandler @ 01bed9c4 */
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_62__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_63__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_64__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_65__);
    thunk_FUN_01ad9084(Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_66__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_67__);
    thunk_FUN_01ad9084(
                      Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
                      );
                    /* try { // try from 01bece9c to 01cecedf has its CatchHandler @ 01becd24 */
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_68__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_7__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_70__);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    DAT_03fed2f4 = 1;
  }
                    /* try { // try from 01becee0 to 01ceceeb has its CatchHandler @ 01bed9c4 */
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lVar24 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) - 1U < 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar24 == 0) goto LAB_01bed9b8;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
                    /* try { // try from 01becf20 to 01cecf2b has its CatchHandler @ 01bed9ac */
    uVar14 = thunk_FUN_01afaadc(*(undefined8 *)
                                 Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_70__
                               );
    FUN_03081994(uVar14,0);
    *(undefined8 *)(param_1 + 0x28) = uVar14;
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x28),uVar14);
    if ((lVar24 == 0) || (plVar16 = *(long **)(lVar24 + 0x30), plVar16 == (long *)0x0))
    goto LAB_01bed9b8;
    (**(code **)(*plVar16 + 0x7d8))(plVar16,0,0,*(undefined8 *)(*plVar16 + 0x7e0));
    if (*(long *)(lVar24 + 0x30) == 0) goto LAB_01bed9b8;
    plVar16 = (long *)(param_1 + 0x30);
    *plVar16 = *(long *)(*(long *)(lVar24 + 0x30) + 0x368);
    thunk_FUN_01b4f09c(plVar16);
    if (*plVar16 == 0) goto LAB_01bed9b8;
    uVar14 = FUN_03704a10(*plVar16,0);
    *(undefined8 *)(param_1 + 0x38) = uVar14;
                    /* try { // try from 01becfac to 01ced01b has its CatchHandler @ 01beda14 */
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x38),uVar14);
    lVar17 = *(long *)(param_1 + 0x28);
    uVar14 = thunk_FUN_01afaadc(*(undefined8 *)
                                 Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_68__
                               );
    FUN_02b9eb44(uVar14,*(undefined8 *)
                         Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_66__);
    if (lVar17 == 0) goto LAB_01bed9b8;
    puVar26 = (undefined8 *)(lVar17 + 0x10);
    *puVar26 = uVar14;
    thunk_FUN_01b4f09c(puVar26,uVar14);
    uVar14 = thunk_FUN_01afaadc(*(undefined8 *)
                                 Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
                               );
    FUN_02b2c088(uVar14,*(undefined8 *)Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__);
    *(undefined8 *)(param_1 + 0x40) = uVar14;
                    /* try { // try from 01bed01c to 01ced063 has its CatchHandler @ 01becd24 */
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x40),uVar14);
    *(undefined1 *)(lVar24 + 0x38) = 1;
  }
  if (*(char *)(lVar24 + 0x38) != '\0') {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_01bed9b8;
    uVar14 = FUN_03704a10(*(long *)(param_1 + 0x30),0);
    *(undefined8 *)(param_1 + 0x38) = uVar14;
    thunk_FUN_01b4f09c();
    *(undefined1 *)(lVar24 + 0x38) = 0;
  }
  lVar17 = *(long *)(param_1 + 0x30);
  if (lVar17 != 0) {
                    /* try { // try from 01bed064 to 01ced06f has its CatchHandler @ 01beda14 */
    uVar34 = *(uint *)(lVar17 + 0x18);
    if (uVar34 == 0) {
      uVar14 = thunk_FUN_01afaadc(*(undefined8 *)
                                   Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                 );
      FUN_03924d70(0x3e800000,uVar14,0);
      *(undefined8 *)(param_1 + 0x18) = uVar14;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar14);
      uVar48 = 1;
LAB_01beda2c:
      *(undefined4 *)(param_1 + 0x10) = uVar48;
      return 1;
    }
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (lVar21 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar21 != 0)) {
      *(undefined4 *)(lVar21 + 0x18) = 0;
      *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
      lVar21 = *(long *)(param_1 + 0x40);
      if (lVar21 != 0) {
        *(undefined4 *)(lVar21 + 0x18) = 0;
        *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
        if (0 < (int)uVar34) {
          uVar28 = 0;
          lVar21 = 0x194;
          do {
            if ((lVar17 == 0) || (lVar22 = *(long *)(lVar17 + 0x38), lVar22 == 0))
            goto LAB_01bed9b8;
            if (*(uint *)(lVar22 + 0x18) <= uVar28) goto LAB_01beda6c;
            if (*(char *)(lVar22 + lVar21) != '\0') {
              lVar29 = *(long *)(param_1 + 0x38);
              if (lVar29 == 0) goto LAB_01bed9b8;
              uVar7 = *(uint *)(lVar22 + lVar21 + -0x13c);
              lVar35 = (long)(int)uVar7;
              if (*(uint *)(lVar29 + 0x18) <= uVar7) goto LAB_01beda6c;
              lVar29 = *(long *)(lVar29 + lVar35 * 0x50 + 0x30);
              if (lVar29 == 0) goto LAB_01bed9b8;
              uVar8 = *(uint *)(lVar22 + lVar21 + -0x128);
              lVar22 = (long)(int)uVar8;
              if ((*(uint *)(lVar29 + 0x18) <= uVar8) ||
                 (uVar1 = uVar8 + 2, *(uint *)(lVar29 + 0x18) <= uVar1)) goto LAB_01beda6c;
              lVar31 = (long)(int)uVar1;
              lVar30 = lVar29 + lVar22 * 0xc;
              lVar25 = lVar29 + lVar31 * 0xc;
              uVar14 = *(undefined8 *)(lVar30 + 0x20);
              fVar42 = *(float *)(lVar30 + 0x28);
              puVar26 = (undefined8 *)(lVar25 + 0x20);
              uVar46 = *puVar26;
              lVar17 = *(long *)(lVar17 + 0x60);
              if (lVar17 == 0) goto LAB_01bed9b8;
              if (*(uint *)(lVar17 + 0x18) <= uVar7) goto LAB_01beda6c;
              lVar17 = *(long *)(lVar17 + lVar35 * 0x50 + 0x30);
              if (lVar17 == 0) goto LAB_01bed9b8;
              if (*(uint *)(lVar17 + 0x18) <= uVar8) goto LAB_01beda6c;
              fVar43 = (float)uVar14;
              fVar45 = (float)((ulong)uVar14 >> 0x20);
              fVar44 = (fVar43 + (float)uVar46) * 0.5;
              fVar47 = (fVar45 + (float)((ulong)uVar46 >> 0x20)) * 0.5;
              lVar30 = lVar17 + lVar22 * 0xc;
              puVar40 = (undefined8 *)(lVar30 + 0x20);
              *puVar40 = CONCAT44(fVar45 - fVar47,fVar43 - fVar44);
              pfVar39 = (float *)(lVar30 + 0x28);
              *pfVar39 = fVar42;
              uVar2 = uVar8 + 1;
              if ((*(uint *)(lVar29 + 0x18) <= uVar2) ||
                 (lVar32 = (long)(int)uVar2, *(uint *)(lVar17 + 0x18) <= uVar2)) goto LAB_01beda6c;
              lVar5 = lVar29 + lVar32 * 0xc;
              uVar14 = *(undefined8 *)(lVar5 + 0x20);
              fVar42 = *(float *)(lVar5 + 0x28);
              lVar5 = lVar17 + lVar32 * 0xc;
              puVar38 = (undefined8 *)(lVar5 + 0x20);
              *puVar38 = CONCAT44((float)((ulong)uVar14 >> 0x20) - fVar47,(float)uVar14 - fVar44);
              pfVar37 = (float *)(lVar5 + 0x28);
              *pfVar37 = fVar42;
              if ((*(uint *)(lVar29 + 0x18) <= uVar1) || (*(uint *)(lVar17 + 0x18) <= uVar1))
              goto LAB_01beda6c;
              uVar14 = *puVar26;
              fVar42 = *(float *)(lVar25 + 0x28);
              lVar25 = lVar17 + lVar31 * 0xc;
              puVar26 = (undefined8 *)(lVar25 + 0x20);
              *puVar26 = CONCAT44((float)((ulong)uVar14 >> 0x20) - fVar47,(float)uVar14 - fVar44);
              pfVar33 = (float *)(lVar25 + 0x28);
              *pfVar33 = fVar42;
              uVar3 = uVar8 + 3;
              if ((*(uint *)(lVar29 + 0x18) <= uVar3) ||
                 (lVar18 = (long)(int)uVar3, *(uint *)(lVar17 + 0x18) <= uVar3)) goto LAB_01beda6c;
              lVar29 = lVar29 + lVar18 * 0xc;
              uVar14 = *(undefined8 *)(lVar29 + 0x20);
              fVar42 = *(float *)(lVar29 + 0x28);
              lVar29 = lVar17 + lVar18 * 0xc;
              pfVar36 = (float *)(lVar29 + 0x20);
              *(ulong *)pfVar36 =
                   CONCAT44((float)((ulong)uVar14 >> 0x20) - fVar47,(float)uVar14 - fVar44);
              pfVar41 = (float *)(lVar29 + 0x28);
              *pfVar41 = fVar42;
              uVar14 = FUN_0391a0e8(0x3f800000,0x3fc00000,0);
              lVar19 = *(long *)(param_1 + 0x28);
              if ((lVar19 == 0) || (lVar15 = *(long *)(lVar19 + 0x10), lVar15 == 0))
              goto LAB_01bed9b8;
              lVar23 = *(long *)(lVar15 + 0x10);
              lVar27 = *(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_62__
              ;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar23 == 0) goto LAB_01bed9b8;
              uVar9 = *(uint *)(lVar15 + 0x18);
              if (uVar9 < *(uint *)(lVar23 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar9 + 1;
                *(int *)(lVar23 + (long)(int)uVar9 * 4 + 0x20) = (int)uVar14;
              }
              else {
                FUN_02b9f3a0(uVar14,lVar15,
                             *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
                lVar19 = *(long *)(param_1 + 0x28);
                if (lVar19 == 0) goto LAB_01bed9b8;
              }
              if ((*(long *)(lVar19 + 0x10) == 0) ||
                 (lVar15 = *(long *)(param_1 + 0x40), lVar15 == 0)) goto LAB_01bed9b8;
              iVar6 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18);
              lVar19 = *(long *)(lVar15 + 0x10);
              lVar23 = *(long *)
                        Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
              ;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar19 == 0) goto LAB_01bed9b8;
              uVar9 = *(uint *)(lVar15 + 0x18);
              iVar6 = iVar6 + -1;
              if (uVar9 < *(uint *)(lVar19 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar9 + 1;
                *(int *)(lVar19 + (long)(int)uVar9 * 4 + 0x20) = iVar6;
              }
              else {
                FUN_02b2c8dc(lVar15,iVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
              }
              if (DAT_03fed256 == '\0') {
                thunk_FUN_01ad9084(
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                  );
                DAT_03fed256 = '\x01';
              }
              puVar20 = *(undefined4 **)
                         (*(long *)
                           Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                         0xb8);
              uVar51 = *puVar20;
              uVar50 = puVar20[1];
              uVar49 = puVar20[2];
              uVar48 = puVar20[3];
              if (DAT_03fed258 == '\0') {
                thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                DAT_03fed258 = '\x01';
              }
              FUN_03910ecc(&local_120,0,0,0,uVar51,uVar50,uVar49,uVar48,0);
              uStack_d8 = uStack_118;
              local_e0 = local_120;
              uStack_c8 = uStack_108;
              uStack_d0 = uStack_110;
              uStack_b8 = uStack_f8;
              local_c0 = local_100;
              uStack_a8 = uStack_e8;
              uStack_b0 = uStack_f0;
              if (*(uint *)(lVar17 + 0x18) <= uVar8) goto LAB_01beda6c;
              uVar49 = *(undefined4 *)(lVar30 + 0x24);
              fVar42 = *pfVar39;
              uVar48 = FUN_03911ddc(*(undefined4 *)puVar40,&local_e0,0);
              if (*(uint *)(lVar17 + 0x18) <= uVar8) goto LAB_01beda6c;
              *(undefined4 *)puVar40 = uVar48;
              *(undefined4 *)(lVar30 + 0x24) = uVar49;
              *pfVar39 = fVar42;
              if (*(uint *)(lVar17 + 0x18) <= uVar2) goto LAB_01beda6c;
              uVar49 = *(undefined4 *)(lVar5 + 0x24);
              fVar42 = *pfVar37;
              uVar48 = FUN_03911ddc(*(undefined4 *)puVar38,&local_e0,0);
              if (*(uint *)(lVar17 + 0x18) <= uVar2) goto LAB_01beda6c;
              *(undefined4 *)puVar38 = uVar48;
              *(undefined4 *)(lVar5 + 0x24) = uVar49;
              *pfVar37 = fVar42;
              if (*(uint *)(lVar17 + 0x18) <= uVar1) goto LAB_01beda6c;
              uVar49 = *(undefined4 *)(lVar25 + 0x24);
              fVar42 = *pfVar33;
              uVar48 = FUN_03911ddc(*(undefined4 *)puVar26,&local_e0,0);
              if (*(uint *)(lVar17 + 0x18) <= uVar1) goto LAB_01beda6c;
              *(undefined4 *)puVar26 = uVar48;
              *(undefined4 *)(lVar25 + 0x24) = uVar49;
              *pfVar33 = fVar42;
              if (*(uint *)(lVar17 + 0x18) <= uVar3) goto LAB_01beda6c;
              pfVar4 = (float *)(lVar29 + 0x24);
              fVar43 = *pfVar4;
              fVar45 = *pfVar41;
              fVar42 = (float)FUN_03911ddc(*pfVar36,&local_e0,0);
              if (*(uint *)(lVar17 + 0x18) <= uVar3) goto LAB_01beda6c;
              *pfVar36 = fVar42;
              *pfVar4 = fVar43;
              *pfVar41 = fVar45;
              if (*(uint *)(lVar17 + 0x18) <= uVar8) goto LAB_01beda6c;
              *puVar40 = CONCAT44(fVar47 + (float)((ulong)*puVar40 >> 0x20),fVar44 + (float)*puVar40
                                 );
              *pfVar39 = *pfVar39 + 0.0;
              if (*(uint *)(lVar17 + 0x18) <= uVar2) goto LAB_01beda6c;
              *puVar38 = CONCAT44(fVar47 + (float)((ulong)*puVar38 >> 0x20),fVar44 + (float)*puVar38
                                 );
              *pfVar37 = *pfVar37 + 0.0;
              if (*(uint *)(lVar17 + 0x18) <= uVar1) goto LAB_01beda6c;
              *puVar26 = CONCAT44(fVar47 + (float)((ulong)*puVar26 >> 0x20),fVar44 + (float)*puVar26
                                 );
              *pfVar33 = *pfVar33 + 0.0;
              if (*(uint *)(lVar17 + 0x18) <= uVar3) goto LAB_01beda6c;
              *pfVar36 = fVar44 + fVar42;
              *pfVar4 = fVar47 + fVar43;
              *pfVar41 = fVar45 + 0.0;
              lVar17 = *(long *)(param_1 + 0x38);
              if (lVar17 == 0) goto LAB_01bed9b8;
              if (*(uint *)(lVar17 + 0x18) <= uVar7) goto LAB_01beda6c;
              if ((*(long *)(param_1 + 0x30) == 0) ||
                 (lVar29 = *(long *)(*(long *)(param_1 + 0x30) + 0x60), lVar29 == 0))
              goto LAB_01bed9b8;
              if (*(uint *)(lVar29 + 0x18) <= uVar7) goto LAB_01beda6c;
              lVar17 = *(long *)(lVar17 + lVar35 * 0x50 + 0x48);
              if (lVar17 == 0) goto LAB_01bed9b8;
              if (*(uint *)(lVar17 + 0x18) <= uVar8) goto LAB_01beda6c;
              lVar29 = *(long *)(lVar29 + lVar35 * 0x50 + 0x48);
              if (lVar29 == 0) goto LAB_01bed9b8;
              if (((((*(uint *)(lVar29 + 0x18) <= uVar8) ||
                    (*(undefined8 *)(lVar29 + lVar22 * 8 + 0x20) =
                          *(undefined8 *)(lVar17 + lVar22 * 8 + 0x20),
                    *(uint *)(lVar17 + 0x18) <= uVar2)) || (*(uint *)(lVar29 + 0x18) <= uVar2)) ||
                  ((*(undefined8 *)(lVar29 + lVar32 * 8 + 0x20) =
                         *(undefined8 *)(lVar17 + lVar32 * 8 + 0x20),
                   *(uint *)(lVar17 + 0x18) <= uVar1 || (*(uint *)(lVar29 + 0x18) <= uVar1)))) ||
                 ((*(undefined8 *)(lVar29 + lVar31 * 8 + 0x20) =
                        *(undefined8 *)(lVar17 + lVar31 * 8 + 0x20),
                  *(uint *)(lVar17 + 0x18) <= uVar3 || (*(uint *)(lVar29 + 0x18) <= uVar3))))
              goto LAB_01beda6c;
              *(undefined8 *)(lVar29 + lVar18 * 8 + 0x20) =
                   *(undefined8 *)(lVar17 + lVar18 * 8 + 0x20);
              lVar17 = *(long *)(param_1 + 0x38);
              if (lVar17 == 0) goto LAB_01bed9b8;
              if (*(uint *)(lVar17 + 0x18) <= uVar7) goto LAB_01beda6c;
              if ((*(long *)(param_1 + 0x30) == 0) ||
                 (lVar29 = *(long *)(*(long *)(param_1 + 0x30) + 0x60), lVar29 == 0))
              goto LAB_01bed9b8;
              if (*(uint *)(lVar29 + 0x18) <= uVar7) goto LAB_01beda6c;
              lVar17 = *(long *)(lVar17 + lVar35 * 0x50 + 0x58);
              if (lVar17 == 0) goto LAB_01bed9b8;
              if (*(uint *)(lVar17 + 0x18) <= uVar8) goto LAB_01beda6c;
              lVar29 = *(long *)(lVar29 + lVar35 * 0x50 + 0x58);
              if (lVar29 == 0) goto LAB_01bed9b8;
              if ((((*(uint *)(lVar29 + 0x18) <= uVar8) ||
                   (*(undefined4 *)(lVar29 + lVar22 * 4 + 0x20) =
                         *(undefined4 *)(lVar17 + lVar22 * 4 + 0x20),
                   *(uint *)(lVar17 + 0x18) <= uVar2)) || (*(uint *)(lVar29 + 0x18) <= uVar2)) ||
                 (((*(undefined4 *)(lVar29 + lVar32 * 4 + 0x20) =
                         *(undefined4 *)(lVar17 + lVar32 * 4 + 0x20),
                   *(uint *)(lVar17 + 0x18) <= uVar1 || (*(uint *)(lVar29 + 0x18) <= uVar1)) ||
                  ((*(undefined4 *)(lVar29 + lVar31 * 4 + 0x20) =
                         *(undefined4 *)(lVar17 + lVar31 * 4 + 0x20),
                   *(uint *)(lVar17 + 0x18) <= uVar3 || (*(uint *)(lVar29 + 0x18) <= uVar3))))))
              goto LAB_01beda6c;
              *(undefined4 *)(lVar29 + lVar18 * 4 + 0x20) =
                   *(undefined4 *)(lVar17 + lVar18 * 4 + 0x20);
            }
            lVar17 = *(long *)(param_1 + 0x30);
            uVar28 = uVar28 + 1;
            lVar21 = lVar21 + 0x178;
          } while (uVar34 != uVar28);
          if (lVar17 == 0) goto LAB_01bed9b8;
        }
        puVar13 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_7__;
        puVar12 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
        puVar11 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_65__;
        puVar10 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_61__;
        lVar21 = 0;
        uVar34 = 0;
        while (*(long *)(lVar17 + 0x60) != 0) {
          if (*(int *)(*(long *)(lVar17 + 0x60) + 0x18) <= (int)uVar34) {
            uVar14 = thunk_FUN_01afaadc(*(undefined8 *)
                                         Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                       );
            FUN_03924d70(DAT_00b55290,uVar14,0);
            *(undefined8 *)(param_1 + 0x18) = uVar14;
            thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar14);
            uVar48 = 2;
            goto LAB_01beda2c;
          }
          lVar17 = *(long *)(param_1 + 0x28);
          if (lVar17 == 0) break;
          lVar29 = *(long *)(param_1 + 0x40);
          lVar22 = *(long *)(lVar17 + 0x18);
          if (lVar22 == 0) {
            lVar22 = thunk_FUN_01afaadc(*(undefined8 *)puVar10);
            FUN_024c3984(lVar22,lVar17,*(undefined8 *)puVar13,0);
            *(long *)(lVar17 + 0x18) = lVar22;
            thunk_FUN_01b4f09c((long *)(lVar17 + 0x18),lVar22);
          }
          if (lVar29 == 0) break;
          FUN_02b2e224(lVar29,lVar22,*(undefined8 *)puVar11);
          if ((*(long *)(param_1 + 0x30) == 0) ||
             (lVar17 = *(long *)(*(long *)(param_1 + 0x30) + 0x60), lVar17 == 0)) break;
          uVar14 = *(undefined8 *)(param_1 + 0x40);
          if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (*(uint *)(lVar17 + 0x18) <= uVar34) {
LAB_01beda6c:
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          FUN_036facb8(lVar17 + lVar21 + 0x20,uVar14,0);
          if ((*(long *)(param_1 + 0x30) == 0) ||
             (lVar17 = *(long *)(*(long *)(param_1 + 0x30) + 0x60), lVar17 == 0)) break;
          if (*(uint *)(lVar17 + 0x18) <= uVar34) goto LAB_01beda6c;
          lVar22 = *(long *)(lVar17 + lVar21 + 0x20);
          if (lVar22 == 0) break;
          FUN_0390262c(lVar22,*(undefined8 *)(lVar17 + lVar21 + 0x30),0);
          if ((*(long *)(param_1 + 0x30) == 0) ||
             (lVar17 = *(long *)(*(long *)(param_1 + 0x30) + 0x60), lVar17 == 0)) break;
          if (*(uint *)(lVar17 + 0x18) <= uVar34) goto LAB_01beda6c;
          lVar22 = *(long *)(lVar17 + lVar21 + 0x20);
          if (lVar22 == 0) break;
          FUN_03902830(lVar22,*(undefined8 *)(lVar17 + lVar21 + 0x48),0);
          if ((*(long *)(param_1 + 0x30) == 0) ||
             (lVar17 = *(long *)(*(long *)(param_1 + 0x30) + 0x60), lVar17 == 0)) break;
          if (*(uint *)(lVar17 + 0x18) <= uVar34) goto LAB_01beda6c;
          lVar22 = *(long *)(lVar17 + lVar21 + 0x20);
          if (lVar22 == 0) break;
          FUN_03902a3c(lVar22,*(undefined8 *)(lVar17 + lVar21 + 0x58),0);
          if ((*(long *)(param_1 + 0x30) == 0) ||
             (lVar17 = *(long *)(*(long *)(param_1 + 0x30) + 0x60), lVar17 == 0)) break;
          if (*(uint *)(lVar17 + 0x18) <= uVar34) goto LAB_01beda6c;
          plVar16 = *(long **)(lVar24 + 0x30);
          if (plVar16 == (long *)0x0) break;
          (**(code **)(*plVar16 + 0x7e8))
                    (plVar16,*(undefined8 *)(lVar17 + lVar21 + 0x20),uVar34,
                     *(undefined8 *)(*plVar16 + 0x7f0));
          lVar17 = *(long *)(param_1 + 0x30);
          uVar34 = uVar34 + 1;
          lVar21 = lVar21 + 0x50;
          if (lVar17 == 0) break;
        }
      }
    }
  }
LAB_01bed9b8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


