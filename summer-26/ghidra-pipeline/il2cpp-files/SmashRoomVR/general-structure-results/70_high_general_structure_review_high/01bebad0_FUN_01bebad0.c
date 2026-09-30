/*
FUNCTION_NAME: FUN_01bebad0
ENTRY_POINT: 01bebad0
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


undefined8 FUN_01bebad0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  char cVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  long lVar16;
  float *pfVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  long *plVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined8 uVar40;
  float fVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
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
  
  if ((DAT_03fed2ed & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_54__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_2__);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    DAT_03fed2ed = 1;
  }
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lVar27 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) - 1U < 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar27 == 0) goto LAB_01bec90c;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar27 == 0) || (plVar21 = *(long **)(lVar27 + 0x30), plVar21 == (long *)0x0))
    goto LAB_01bec90c;
                    /* try { // try from 01bebb90 to 01cebc87 has its CatchHandler @ 01bebb90
                       catch() { ... } // from try @ 01bebb90 with catch @ 01bebb90
                       catch() { ... } // from try @ 01bebc94 with catch @ 01bebb90 */
    (**(code **)(*plVar21 + 0x7d8))(plVar21,0,0,*(undefined8 *)(*plVar21 + 0x7e0));
    if (*(long *)(lVar27 + 0x30) == 0) goto LAB_01bec90c;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(*(long *)(lVar27 + 0x30) + 0x368);
    thunk_FUN_01b4f09c();
    uVar9 = FUN_01b47fd0(*(undefined8 *)
                          Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_54__,0);
    *(undefined8 *)(param_1 + 0x30) = uVar9;
    thunk_FUN_01b4f09c();
    *(undefined1 *)(lVar27 + 0x38) = 1;
  }
  if (*(char *)(lVar27 + 0x38) == '\0') {
                    /* catch() { ... } // from try @ 01bebc88 with catch @ 01bebcbc */
    lVar12 = *(long *)(param_1 + 0x28);
    if (lVar12 != 0) {
LAB_01bebcc4:
      uVar7 = DAT_00b55374;
      uVar11 = DAT_00b552fc;
      if (*(int *)(lVar12 + 0x18) == 0) {
        uVar9 = thunk_FUN_01afaadc(*(undefined8 *)
                                    Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                  );
        FUN_03924d70(0x3e800000,uVar9,0);
        *(undefined8 *)(param_1 + 0x18) = uVar9;
        thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar9);
        uVar11 = 1;
FUN_01bec980:
        *(undefined4 *)(param_1 + 0x10) = uVar11;
        return 1;
      }
      uVar20 = *(uint *)(lVar12 + 0x2c);
      if (0 < (int)uVar20) {
        uVar18 = 0;
        plVar21 = (long *)(param_1 + 0x30);
        plVar28 = (long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__;
        do {
          if ((lVar12 == 0) || (lVar24 = *(long *)(lVar12 + 0x50), lVar24 == 0)) goto LAB_01bec90c;
          if (*(uint *)(lVar24 + 0x18) <= uVar18) goto c6__Equals;
          lVar12 = *(long *)(lVar12 + 0x38);
          if (lVar12 == 0) goto LAB_01bec90c;
          lVar24 = lVar24 + (long)(int)uVar18 * 0x5c;
          uVar23 = *(uint *)(lVar24 + 0x34);
          if (*(uint *)(lVar12 + 0x18) <= uVar23) goto c6__Equals;
          uVar4 = *(uint *)(lVar24 + 0x3c);
          if (*(uint *)(lVar12 + 0x18) <= uVar4) goto c6__Equals;
          lVar24 = lVar12 + 0x20 + (long)(int)uVar23 * 0x178;
          uVar9 = *(undefined8 *)(lVar24 + 0xfc);
                    /* try { // try from 01bebd80 to 01cebdeb has its CatchHandler @ 01bebd80
                       catch() { ... } // from try @ 01bebd80 with catch @ 01bebd80
                       catch() { ... } // from try @ 01bebdf8 with catch @ 01bebd80 */
          lVar12 = lVar12 + 0x20 + (long)(int)uVar4 * 0x178;
          uVar40 = *(undefined8 *)(lVar12 + 0x108);
          fVar41 = *(float *)(lVar12 + 0x110);
          fVar37 = *(float *)(lVar24 + 0x104);
          FUN_0391a0e8(0xbe800000,0x3e800000,0);
          FUN_03914564(0,0);
          if ((int)uVar23 <= (int)uVar4) {
            fVar34 = ((float)uVar9 + (float)uVar40) * 0.5;
            fVar36 = ((float)((ulong)uVar9 >> 0x20) + (float)((ulong)uVar40 >> 0x20)) * 0.5;
            fVar37 = (fVar37 + fVar41) * 0.5;
            do {
                    /* try { // try from 01bebdec to 01cebdf7 has its CatchHandler @ 01bebe20 */
              lVar12 = *(long *)(param_1 + 0x28);
                    /* try { // try from 01bebdf8 to 01cebe33 has its CatchHandler @ 01bebd80 */
              if ((lVar12 == 0) || (lVar24 = *(long *)(lVar12 + 0x38), lVar24 == 0))
              goto LAB_01bec90c;
              if (*(uint *)(lVar24 + 0x18) <= uVar23) goto c6__Equals;
              if (*(char *)(lVar24 + (long)(int)uVar23 * 0x178 + 0x194) != '\0') {
                lVar12 = *(long *)(lVar12 + 0x60);
                if (lVar12 == 0) goto LAB_01bec90c;
                    /* catch() { ... } // from try @ 01bebdec with catch @ 01bebe20 */
                lVar24 = lVar24 + (long)(int)uVar23 * 0x178;
                uVar5 = *(uint *)(lVar24 + 0x58);
                lVar25 = (long)(int)uVar5;
                if (*(uint *)(lVar12 + 0x18) <= uVar5) goto c6__Equals;
                lVar12 = *(long *)(lVar12 + lVar25 * 0x50 + 0x30);
                if (lVar12 == 0) goto LAB_01bec90c;
                uVar6 = *(uint *)(lVar24 + 0x6c);
                lVar24 = (long)(int)uVar6;
                if ((*(uint *)(lVar12 + 0x18) <= uVar6) ||
                   (uVar1 = uVar6 + 2, *(uint *)(lVar12 + 0x18) <= uVar1)) goto c6__Equals;
                lVar26 = (long)(int)uVar1;
                lVar16 = lVar12 + lVar24 * 0xc;
                lVar13 = lVar12 + lVar26 * 0xc;
                uVar9 = *(undefined8 *)(lVar16 + 0x20);
                fVar41 = *(float *)(lVar16 + 0x28);
                puVar14 = (undefined8 *)(lVar13 + 0x20);
                uVar40 = *puVar14;
                pfVar17 = (float *)(lVar13 + 0x28);
                lVar13 = *plVar21;
                if (lVar13 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar13 + 0x18) <= uVar5) goto c6__Equals;
                lVar13 = *(long *)(lVar13 + lVar25 * 8 + 0x20);
                if (lVar13 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar13 + 0x18) <= uVar6) goto c6__Equals;
                fVar29 = (float)uVar9;
                fVar30 = (float)((ulong)uVar9 >> 0x20);
                fVar32 = (fVar29 + (float)uVar40) * 0.5;
                fVar33 = (fVar30 + (float)((ulong)uVar40 >> 0x20)) * 0.5;
                fVar31 = (fVar41 + *pfVar17) * 0.5;
                lVar13 = lVar13 + lVar24 * 0xc;
                *(ulong *)(lVar13 + 0x20) = CONCAT44(fVar30 - fVar33,fVar29 - fVar32);
                *(float *)(lVar13 + 0x28) = fVar41 - fVar31;
                lVar13 = *plVar21;
                if (lVar13 == 0) goto LAB_01bec90c;
                if ((*(uint *)(lVar13 + 0x18) <= uVar5) ||
                   (uVar2 = uVar6 + 1, *(uint *)(lVar12 + 0x18) <= uVar2)) goto c6__Equals;
                lVar13 = *(long *)(lVar13 + lVar25 * 8 + 0x20);
                if (lVar13 == 0) goto LAB_01bec90c;
                lVar16 = (long)(int)uVar2;
                if (*(uint *)(lVar13 + 0x18) <= uVar2) goto c6__Equals;
                lVar19 = lVar12 + lVar16 * 0xc;
                uVar9 = *(undefined8 *)(lVar19 + 0x20);
                fVar41 = *(float *)(lVar19 + 0x28);
                lVar13 = lVar13 + lVar16 * 0xc;
                *(ulong *)(lVar13 + 0x20) =
                     CONCAT44((float)((ulong)uVar9 >> 0x20) - fVar33,(float)uVar9 - fVar32);
                *(float *)(lVar13 + 0x28) = fVar41 - fVar31;
                lVar13 = *plVar21;
                if (lVar13 == 0) goto LAB_01bec90c;
                if ((*(uint *)(lVar13 + 0x18) <= uVar5) || (*(uint *)(lVar12 + 0x18) <= uVar1))
                goto c6__Equals;
                lVar13 = *(long *)(lVar13 + lVar25 * 8 + 0x20);
                if (lVar13 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar13 + 0x18) <= uVar1) goto c6__Equals;
                uVar9 = *puVar14;
                fVar41 = *pfVar17;
                lVar13 = lVar13 + lVar26 * 0xc;
                *(ulong *)(lVar13 + 0x20) =
                     CONCAT44((float)((ulong)uVar9 >> 0x20) - fVar33,(float)uVar9 - fVar32);
                *(float *)(lVar13 + 0x28) = fVar41 - fVar31;
                lVar13 = *plVar21;
                if (lVar13 == 0) goto LAB_01bec90c;
                if ((*(uint *)(lVar13 + 0x18) <= uVar5) ||
                   (uVar3 = uVar6 + 3, *(uint *)(lVar12 + 0x18) <= uVar3)) goto c6__Equals;
                lVar13 = *(long *)(lVar13 + lVar25 * 8 + 0x20);
                if (lVar13 == 0) goto LAB_01bec90c;
                lVar19 = (long)(int)uVar3;
                if (*(uint *)(lVar13 + 0x18) <= uVar3) goto c6__Equals;
                lVar12 = lVar12 + lVar19 * 0xc;
                uVar9 = *(undefined8 *)(lVar12 + 0x20);
                fVar41 = *(float *)(lVar12 + 0x28);
                lVar13 = lVar13 + lVar19 * 0xc;
                *(ulong *)(lVar13 + 0x20) =
                     CONCAT44((float)((ulong)uVar9 >> 0x20) - fVar33,(float)uVar9 - fVar32);
                *(float *)(lVar13 + 0x28) = fVar41 - fVar31;
                FUN_0391a0e8(uVar11,uVar7,0);
                if (DAT_03fed258 == '\0') {
                  thunk_FUN_01ad9084(plVar28);
                  DAT_03fed258 = '\x01';
                }
                puVar8 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
                lVar12 = *(long *)(*plVar28 + 0xb8);
                uVar38 = *(undefined4 *)(lVar12 + 0xc);
                uVar35 = *(undefined4 *)(lVar12 + 0x10);
                uVar45 = *(undefined4 *)(lVar12 + 0x14);
                if (DAT_03fed256 == '\0') {
                  thunk_FUN_01ad9084(
                                    Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                    );
                  DAT_03fed256 = '\x01';
                  cVar10 = DAT_03fed258;
                }
                else {
                  cVar10 = '\x01';
                }
                puVar15 = *(undefined4 **)(*(long *)puVar8 + 0xb8);
                uVar39 = *puVar15;
                uVar42 = puVar15[1];
                uVar43 = puVar15[2];
                uVar44 = puVar15[3];
                if (cVar10 == '\0') {
                  thunk_FUN_01ad9084(plVar28);
                  DAT_03fed258 = '\x01';
                }
                FUN_03910ecc(&local_120,uVar38,uVar35,uVar45,uVar39,uVar42,uVar43,uVar44,0);
                uStack_d8 = uStack_118;
                local_e0 = local_120;
                uStack_c8 = uStack_108;
                uStack_d0 = uStack_110;
                uStack_b8 = uStack_f8;
                local_c0 = local_100;
                uStack_a8 = uStack_e8;
                uStack_b0 = uStack_f0;
                lVar12 = *plVar21;
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar5) goto c6__Equals;
                lVar12 = *(long *)(lVar12 + lVar25 * 8 + 0x20);
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar6) goto c6__Equals;
                lVar13 = lVar12 + lVar24 * 0xc;
                uVar38 = *(undefined4 *)(lVar13 + 0x24);
                uVar45 = *(undefined4 *)(lVar13 + 0x28);
                uVar35 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&local_e0,0);
                if (*(uint *)(lVar12 + 0x18) <= uVar6) goto c6__Equals;
                *(undefined4 *)(lVar13 + 0x20) = uVar35;
                *(undefined4 *)(lVar13 + 0x24) = uVar38;
                *(undefined4 *)(lVar13 + 0x28) = uVar45;
                lVar12 = *plVar21;
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar5) goto c6__Equals;
                lVar12 = *(long *)(lVar12 + lVar25 * 8 + 0x20);
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar2) goto c6__Equals;
                lVar13 = lVar12 + lVar16 * 0xc;
                uVar38 = *(undefined4 *)(lVar13 + 0x24);
                uVar45 = *(undefined4 *)(lVar13 + 0x28);
                uVar35 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&local_e0,0);
                if (*(uint *)(lVar12 + 0x18) <= uVar2) goto c6__Equals;
                *(undefined4 *)(lVar13 + 0x20) = uVar35;
                *(undefined4 *)(lVar13 + 0x24) = uVar38;
                *(undefined4 *)(lVar13 + 0x28) = uVar45;
                lVar12 = *plVar21;
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar5) goto c6__Equals;
                lVar12 = *(long *)(lVar12 + lVar25 * 8 + 0x20);
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar1) goto c6__Equals;
                lVar13 = lVar12 + lVar26 * 0xc;
                uVar38 = *(undefined4 *)(lVar13 + 0x24);
                uVar45 = *(undefined4 *)(lVar13 + 0x28);
                uVar35 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&local_e0,0);
                if (*(uint *)(lVar12 + 0x18) <= uVar1) goto c6__Equals;
                *(undefined4 *)(lVar13 + 0x20) = uVar35;
                *(undefined4 *)(lVar13 + 0x24) = uVar38;
                *(undefined4 *)(lVar13 + 0x28) = uVar45;
                lVar12 = *plVar21;
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar5) goto c6__Equals;
                lVar12 = *(long *)(lVar12 + lVar25 * 8 + 0x20);
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar3) goto c6__Equals;
                lVar13 = lVar12 + lVar19 * 0xc;
                uVar38 = *(undefined4 *)(lVar13 + 0x24);
                uVar45 = *(undefined4 *)(lVar13 + 0x28);
                uVar35 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&local_e0,0);
                if (*(uint *)(lVar12 + 0x18) <= uVar3) goto c6__Equals;
                *(undefined4 *)(lVar13 + 0x20) = uVar35;
                *(undefined4 *)(lVar13 + 0x24) = uVar38;
                *(undefined4 *)(lVar13 + 0x28) = uVar45;
                puVar8 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
                lVar12 = *plVar21;
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar5) goto c6__Equals;
                lVar12 = *(long *)(lVar12 + lVar25 * 8 + 0x20);
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar6) goto c6__Equals;
                lVar12 = lVar12 + lVar24 * 0xc;
                *(ulong *)(lVar12 + 0x20) =
                     CONCAT44(fVar33 + (float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20),
                              fVar32 + (float)*(undefined8 *)(lVar12 + 0x20));
                *(float *)(lVar12 + 0x28) = fVar31 + *(float *)(lVar12 + 0x28);
                lVar12 = *plVar21;
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar5) goto c6__Equals;
                lVar12 = *(long *)(lVar12 + lVar25 * 8 + 0x20);
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar2) goto c6__Equals;
                lVar12 = lVar12 + lVar16 * 0xc;
                *(ulong *)(lVar12 + 0x20) =
                     CONCAT44(fVar33 + (float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20),
                              fVar32 + (float)*(undefined8 *)(lVar12 + 0x20));
                *(float *)(lVar12 + 0x28) = fVar31 + *(float *)(lVar12 + 0x28);
                lVar12 = *plVar21;
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar5) goto c6__Equals;
                lVar12 = *(long *)(lVar12 + lVar25 * 8 + 0x20);
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar1) goto c6__Equals;
                lVar12 = lVar12 + lVar26 * 0xc;
                *(ulong *)(lVar12 + 0x20) =
                     CONCAT44(fVar33 + (float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20),
                              fVar32 + (float)*(undefined8 *)(lVar12 + 0x20));
                *(float *)(lVar12 + 0x28) = fVar31 + *(float *)(lVar12 + 0x28);
                lVar12 = *plVar21;
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar5) goto c6__Equals;
                lVar12 = *(long *)(lVar12 + lVar25 * 8 + 0x20);
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar3) goto c6__Equals;
                lVar12 = lVar12 + lVar19 * 0xc;
                *(ulong *)(lVar12 + 0x20) =
                     CONCAT44(fVar33 + (float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20),
                              fVar32 + (float)*(undefined8 *)(lVar12 + 0x20));
                *(float *)(lVar12 + 0x28) = fVar31 + *(float *)(lVar12 + 0x28);
                lVar12 = *plVar21;
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar5) goto c6__Equals;
                lVar12 = *(long *)(lVar12 + lVar25 * 8 + 0x20);
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar6) goto c6__Equals;
                lVar12 = lVar12 + lVar24 * 0xc;
                *(ulong *)(lVar12 + 0x20) =
                     CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20) - fVar36,
                              (float)*(undefined8 *)(lVar12 + 0x20) - fVar34);
                *(float *)(lVar12 + 0x28) = *(float *)(lVar12 + 0x28) - fVar37;
                lVar12 = *plVar21;
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar5) goto c6__Equals;
                lVar12 = *(long *)(lVar12 + lVar25 * 8 + 0x20);
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar2) goto c6__Equals;
                lVar12 = lVar12 + lVar16 * 0xc;
                *(ulong *)(lVar12 + 0x20) =
                     CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20) - fVar36,
                              (float)*(undefined8 *)(lVar12 + 0x20) - fVar34);
                *(float *)(lVar12 + 0x28) = *(float *)(lVar12 + 0x28) - fVar37;
                lVar12 = *plVar21;
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar5) goto c6__Equals;
                lVar12 = *(long *)(lVar12 + lVar25 * 8 + 0x20);
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar1) goto c6__Equals;
                lVar12 = lVar12 + lVar26 * 0xc;
                *(ulong *)(lVar12 + 0x20) =
                     CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20) - fVar36,
                              (float)*(undefined8 *)(lVar12 + 0x20) - fVar34);
                *(float *)(lVar12 + 0x28) = *(float *)(lVar12 + 0x28) - fVar37;
                lVar12 = *plVar21;
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar5) goto c6__Equals;
                lVar12 = *(long *)(lVar12 + lVar25 * 8 + 0x20);
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar3) goto c6__Equals;
                lVar12 = lVar12 + lVar19 * 0xc;
                *(ulong *)(lVar12 + 0x20) =
                     CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20) - fVar36,
                              (float)*(undefined8 *)(lVar12 + 0x20) - fVar34);
                *(float *)(lVar12 + 0x28) = *(float *)(lVar12 + 0x28) - fVar37;
                if (DAT_03fed258 == '\0') {
                  thunk_FUN_01ad9084(puVar8);
                  DAT_03fed258 = '\x01';
                }
                FUN_03910ecc(&local_120,0);
                uStack_d8 = uStack_118;
                local_e0 = local_120;
                uStack_c8 = uStack_108;
                uStack_d0 = uStack_110;
                uStack_b8 = uStack_f8;
                local_c0 = local_100;
                uStack_a8 = uStack_e8;
                uStack_b0 = uStack_f0;
                lVar12 = *plVar21;
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar5) goto c6__Equals;
                lVar12 = *(long *)(lVar12 + lVar25 * 8 + 0x20);
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar6) goto c6__Equals;
                lVar13 = lVar12 + lVar24 * 0xc;
                uVar38 = *(undefined4 *)(lVar13 + 0x24);
                uVar45 = *(undefined4 *)(lVar13 + 0x28);
                uVar35 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&local_e0,0);
                if (*(uint *)(lVar12 + 0x18) <= uVar6) goto c6__Equals;
                *(undefined4 *)(lVar13 + 0x20) = uVar35;
                *(undefined4 *)(lVar13 + 0x24) = uVar38;
                *(undefined4 *)(lVar13 + 0x28) = uVar45;
                lVar12 = *plVar21;
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar5) goto c6__Equals;
                lVar12 = *(long *)(lVar12 + lVar25 * 8 + 0x20);
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar2) goto c6__Equals;
                lVar13 = lVar12 + lVar16 * 0xc;
                uVar38 = *(undefined4 *)(lVar13 + 0x24);
                uVar45 = *(undefined4 *)(lVar13 + 0x28);
                uVar35 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&local_e0,0);
                if (*(uint *)(lVar12 + 0x18) <= uVar2) goto c6__Equals;
                *(undefined4 *)(lVar13 + 0x20) = uVar35;
                *(undefined4 *)(lVar13 + 0x24) = uVar38;
                *(undefined4 *)(lVar13 + 0x28) = uVar45;
                lVar12 = *plVar21;
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar5) goto c6__Equals;
                lVar12 = *(long *)(lVar12 + lVar25 * 8 + 0x20);
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar1) goto c6__Equals;
                lVar13 = lVar12 + lVar26 * 0xc;
                uVar38 = *(undefined4 *)(lVar13 + 0x24);
                uVar45 = *(undefined4 *)(lVar13 + 0x28);
                uVar35 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&local_e0,0);
                if (*(uint *)(lVar12 + 0x18) <= uVar1) goto c6__Equals;
                *(undefined4 *)(lVar13 + 0x20) = uVar35;
                *(undefined4 *)(lVar13 + 0x24) = uVar38;
                *(undefined4 *)(lVar13 + 0x28) = uVar45;
                lVar12 = *plVar21;
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar5) goto c6__Equals;
                lVar12 = *(long *)(lVar12 + lVar25 * 8 + 0x20);
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar3) goto c6__Equals;
                lVar13 = lVar12 + lVar19 * 0xc;
                uVar38 = *(undefined4 *)(lVar13 + 0x24);
                uVar45 = *(undefined4 *)(lVar13 + 0x28);
                uVar35 = FUN_03911ddc(*(undefined4 *)(lVar13 + 0x20),&local_e0,0);
                if (*(uint *)(lVar12 + 0x18) <= uVar3) goto c6__Equals;
                *(undefined4 *)(lVar13 + 0x20) = uVar35;
                *(undefined4 *)(lVar13 + 0x24) = uVar38;
                *(undefined4 *)(lVar13 + 0x28) = uVar45;
                plVar28 = (long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__;
                lVar12 = *plVar21;
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar5) goto c6__Equals;
                lVar12 = *(long *)(lVar12 + lVar25 * 8 + 0x20);
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar6) goto c6__Equals;
                lVar12 = lVar12 + lVar24 * 0xc;
                *(ulong *)(lVar12 + 0x20) =
                     CONCAT44(fVar36 + (float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20),
                              fVar34 + (float)*(undefined8 *)(lVar12 + 0x20));
                *(float *)(lVar12 + 0x28) = fVar37 + *(float *)(lVar12 + 0x28);
                lVar12 = *plVar21;
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar5) goto c6__Equals;
                lVar12 = *(long *)(lVar12 + lVar25 * 8 + 0x20);
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar2) goto c6__Equals;
                lVar12 = lVar12 + lVar16 * 0xc;
                *(ulong *)(lVar12 + 0x20) =
                     CONCAT44(fVar36 + (float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20),
                              fVar34 + (float)*(undefined8 *)(lVar12 + 0x20));
                *(float *)(lVar12 + 0x28) = fVar37 + *(float *)(lVar12 + 0x28);
                lVar12 = *plVar21;
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar5) goto c6__Equals;
                lVar12 = *(long *)(lVar12 + lVar25 * 8 + 0x20);
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar1) goto c6__Equals;
                lVar12 = lVar12 + lVar26 * 0xc;
                *(ulong *)(lVar12 + 0x20) =
                     CONCAT44(fVar36 + (float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20),
                              fVar34 + (float)*(undefined8 *)(lVar12 + 0x20));
                *(float *)(lVar12 + 0x28) = fVar37 + *(float *)(lVar12 + 0x28);
                lVar12 = *plVar21;
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar5) goto c6__Equals;
                lVar12 = *(long *)(lVar12 + lVar25 * 8 + 0x20);
                if (lVar12 == 0) goto LAB_01bec90c;
                if (*(uint *)(lVar12 + 0x18) <= uVar3) goto c6__Equals;
                lVar12 = lVar12 + lVar19 * 0xc;
                *(ulong *)(lVar12 + 0x20) =
                     CONCAT44(fVar36 + (float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20),
                              fVar34 + (float)*(undefined8 *)(lVar12 + 0x20));
                *(float *)(lVar12 + 0x28) = fVar37 + *(float *)(lVar12 + 0x28);
              }
              uVar23 = uVar23 + 1;
            } while ((int)uVar23 <= (int)uVar4);
          }
          lVar12 = *(long *)(param_1 + 0x28);
          uVar18 = uVar18 + 1;
        } while (uVar18 != uVar20);
        if (lVar12 == 0) goto LAB_01bec90c;
      }
      uVar22 = 0;
      lVar24 = 0x20;
      while (lVar12 = *(long *)(lVar12 + 0x60), lVar12 != 0) {
        uVar20 = (uint)uVar22;
        if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar20) {
          uVar9 = thunk_FUN_01afaadc(*(undefined8 *)
                                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                    );
          FUN_03924d70(DAT_00b55290,uVar9,0);
          *(undefined8 *)(param_1 + 0x18) = uVar9;
          thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar9);
          uVar11 = 2;
          goto FUN_01bec980;
        }
        if (*(uint *)(lVar12 + 0x18) <= uVar20) {
c6__Equals:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        lVar25 = *(long *)(param_1 + 0x30);
        if (lVar25 == 0) break;
        if (*(uint *)(lVar25 + 0x18) <= uVar20) goto c6__Equals;
        if (*(long *)(lVar12 + lVar24) == 0) break;
        FUN_0390262c(*(long *)(lVar12 + lVar24),*(undefined8 *)(lVar25 + uVar22 * 8 + 0x20),0);
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar12 = *(long *)(*(long *)(param_1 + 0x28) + 0x60), lVar12 == 0)) break;
        if (*(uint *)(lVar12 + 0x18) <= uVar20) goto c6__Equals;
        plVar21 = *(long **)(lVar27 + 0x30);
        if (plVar21 == (long *)0x0) break;
        (**(code **)(*plVar21 + 0x7e8))
                  (plVar21,*(undefined8 *)(lVar12 + lVar24),uVar22 & 0xffffffff,
                   *(undefined8 *)(*plVar21 + 0x7f0));
        lVar12 = *(long *)(param_1 + 0x28);
        uVar22 = uVar22 + 1;
        lVar24 = lVar24 + 0x50;
        if (lVar12 == 0) break;
      }
    }
  }
  else {
    plVar21 = (long *)(param_1 + 0x30);
    if (((*plVar21 != 0) && (lVar12 = *(long *)(param_1 + 0x28), lVar12 != 0)) &&
       (*(long *)(lVar12 + 0x60) != 0)) {
      if (*(int *)(*plVar21 + 0x18) < *(int *)(*(long *)(lVar12 + 0x60) + 0x18)) {
        uVar9 = FUN_01b47fd0(*(undefined8 *)
                              Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_54__);
        *(undefined8 *)(param_1 + 0x30) = uVar9;
        thunk_FUN_01b4f09c(plVar21,uVar9);
        lVar12 = *(long *)(param_1 + 0x28);
        if (lVar12 == 0) goto LAB_01bec90c;
      }
      puVar8 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_2__;
      uVar20 = 0;
      lVar24 = 0x30;
      lVar25 = 0x20;
      do {
        lVar13 = *(long *)(lVar12 + 0x60);
        if (lVar13 == 0) break;
        if ((int)*(uint *)(lVar13 + 0x18) <= (int)uVar20) {
          *(undefined1 *)(lVar27 + 0x38) = 0;
          goto LAB_01bebcc4;
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar20) goto c6__Equals;
        if (*(long *)(lVar13 + lVar24) == 0) break;
        lVar12 = *plVar21;
        uVar9 = FUN_01b47fd0(*(undefined8 *)puVar8,
                             *(undefined4 *)(*(long *)(lVar13 + lVar24) + 0x18));
        if (lVar12 == 0) break;
                    /* try { // try from 01bebc88 to 01cebc93 has its CatchHandler @ 01bebcbc */
        if (*(uint *)(lVar12 + 0x18) <= uVar20) goto c6__Equals;
                    /* try { // try from 01bebc94 to 01cebccf has its CatchHandler @ 01bebb90 */
        *(undefined8 *)(lVar12 + lVar25) = uVar9;
        thunk_FUN_01b4f09c();
        lVar12 = *(long *)(param_1 + 0x28);
        uVar20 = uVar20 + 1;
        lVar24 = lVar24 + 0x50;
        lVar25 = lVar25 + 8;
      } while (lVar12 != 0);
    }
  }
LAB_01bec90c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


