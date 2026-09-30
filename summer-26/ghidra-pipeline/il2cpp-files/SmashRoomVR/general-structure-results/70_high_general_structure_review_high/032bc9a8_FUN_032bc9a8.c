/*
FUNCTION_NAME: FUN_032bc9a8
ENTRY_POINT: 032bc9a8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_032bc9a8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  int *piVar19;
  undefined4 *puVar20;
  uint uVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  long *plVar25;
  int iVar26;
  undefined4 *puVar27;
  undefined8 uVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  float local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  float local_94;
  float local_88;
  float fStack_84;
  
  if ((DAT_03ff58bd & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesBackgroundSize_IsSame__
                      );
    thunk_FUN_01ad9084(Method_System_IO_Stream_<>c_<BeginEndReadAsync>b__45_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_9__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_2__);
    thunk_FUN_01ad9084(PTR_DAT_03d87270);
    thunk_FUN_01ad9084(PTR_DAT_03d87278);
    DAT_03ff58bd = 1;
  }
  puVar8 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesBackgroundSize_IsSame__;
  puVar7 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_2__;
  puVar6 = Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_9__;
  if (*(uint *)(param_1 + 0x28) < 5) {
    uVar21 = *(uint *)(&DAT_00bfc680 + (long)(int)*(uint *)(param_1 + 0x28) * 4);
  }
  else {
    uVar21 = 0x80;
  }
  lVar9 = FUN_01b47fd0(*(undefined8 *)
                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_2__,
                       uVar21);
  lVar10 = FUN_01b47fd0(*(undefined8 *)puVar6,uVar21);
  lVar11 = FUN_01b47fd0(*(undefined8 *)puVar7,uVar21);
  lVar12 = FUN_01b47fd0(*(undefined8 *)puVar6,uVar21);
  lVar13 = FUN_01b47fd0(*(undefined8 *)puVar8,uVar21 * 3);
  uVar5 = DAT_00b92e20;
  uVar28 = DAT_00b91f78;
  fVar4 = DAT_00b550a8;
  if (lVar11 != 0) {
    uVar24 = 0;
    iVar26 = 0;
    uVar17 = 0;
    puVar27 = (undefined4 *)(lVar11 + 0x34);
    puVar15 = (undefined8 *)(lVar12 + 0x28);
    puVar20 = (undefined4 *)(lVar9 + 0x34);
    puVar18 = (undefined8 *)(lVar10 + 0x28);
    uVar30 = NEON_fmov(0x3f800000,4);
    piVar19 = (int *)(lVar13 + 0x34);
    do {
      sincosf(((float)iVar26 * fVar4) / (float)(int)uVar21,&fStack_84,&local_88);
      uVar2 = *(uint *)(lVar11 + 0x18);
      if (uVar2 <= uVar17) {
LAB_032bd034:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar1 = uVar17 + 1;
      puVar27[-3] = 0;
      puVar27[-5] = local_88;
      puVar27[-4] = fStack_84;
      if (uVar2 <= uVar1) goto LAB_032bd034;
      puVar27[-2] = local_88;
      puVar27[-1] = fStack_84;
      *puVar27 = 0;
      if (lVar12 == 0) goto LAB_032bd038;
      uVar2 = *(uint *)(lVar12 + 0x18);
      if ((uVar2 <= uVar17) || (puVar15[-1] = uVar5, uVar2 <= uVar1)) goto LAB_032bd034;
      *puVar15 = uVar30;
      if (lVar9 == 0) goto LAB_032bd038;
      uVar2 = *(uint *)(lVar9 + 0x18);
      if (uVar2 <= uVar17) goto LAB_032bd034;
      puVar20[-5] = local_88;
      puVar20[-4] = fStack_84;
      puVar20[-3] = 0;
      if (uVar2 <= uVar1) goto LAB_032bd034;
      puVar20[-2] = local_88;
      puVar20[-1] = fStack_84;
      *puVar20 = 0;
      if (lVar10 == 0) goto LAB_032bd038;
      uVar2 = *(uint *)(lVar10 + 0x18);
      if (uVar2 <= uVar17) goto LAB_032bd034;
      puVar18[-1] = uVar5;
      if (uVar2 <= uVar1) goto LAB_032bd034;
      *puVar18 = uVar28;
      if (lVar13 == 0) goto LAB_032bd038;
      uVar16 = (ulong)*(uint *)(lVar13 + 0x18);
      if (uVar16 <= uVar24) goto LAB_032bd034;
      iVar14 = (int)uVar17;
      piVar19[-5] = iVar14;
      if (uVar16 <= uVar24 + 1) goto LAB_032bd034;
      piVar19[-4] = (int)uVar1;
      if (uVar16 <= uVar24 + 2) goto LAB_032bd034;
      uVar2 = 0;
      if (uVar21 != 0) {
        uVar2 = (iVar14 + 2U) / uVar21;
      }
      iVar3 = (iVar14 + 2U) - uVar2 * uVar21;
      piVar19[-3] = iVar3;
      if ((uVar16 <= uVar24 + 3) || (piVar19[-2] = (int)uVar1, uVar16 <= uVar24 + 4))
      goto LAB_032bd034;
      uVar2 = 0;
      if (uVar21 != 0) {
        uVar2 = (iVar14 + 3U) / uVar21;
      }
      piVar19[-1] = (iVar14 + 3U) - uVar2 * uVar21;
      if (uVar16 <= uVar24 + 5) goto LAB_032bd034;
      uVar17 = uVar17 + 2;
      *piVar19 = iVar3;
      puVar6 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      iVar26 = iVar26 + 4;
      puVar27 = puVar27 + 6;
      uVar24 = uVar24 + 6;
      puVar15 = puVar15 + 2;
      puVar20 = puVar20 + 6;
      puVar18 = puVar18 + 2;
      piVar19 = piVar19 + 6;
    } while (uVar17 < uVar21);
    plVar25 = (long *)(param_1 + 0x78);
    lVar22 = *plVar25;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar17 = FUN_0391f968(lVar22,0,0);
    puVar7 = Method_System_IO_Stream_<>c_<BeginEndReadAsync>b__45_0__;
    if ((uVar17 & 1) != 0) {
      lVar22 = *plVar25;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_03923b4c(lVar22,0);
    }
    plVar23 = (long *)(param_1 + 0x80);
    lVar22 = *plVar23;
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar17 = FUN_0391f968(lVar22,0,0);
    if ((uVar17 & 1) != 0) {
      lVar22 = *plVar23;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_03923b4c(lVar22,0);
    }
    lVar22 = thunk_FUN_01afaadc(*(undefined8 *)puVar7);
    FUN_03901184(lVar22,0);
    if (lVar22 != 0) {
      FUN_0392316c(lVar22,*(undefined8 *)PTR_DAT_03d87278,0);
      FUN_03923d4c(lVar22,0x3d,0);
      *plVar25 = lVar22;
      thunk_FUN_01b4f09c(plVar25,lVar22);
      lVar22 = thunk_FUN_01afaadc(*(undefined8 *)puVar7);
      FUN_03901184(lVar22,0);
      if (lVar22 != 0) {
        FUN_0392316c(lVar22,*(undefined8 *)PTR_DAT_03d87270,0);
        FUN_03923d4c(lVar22,0x3d,0);
        *plVar23 = lVar22;
        thunk_FUN_01b4f09c(plVar23,lVar22);
        if (*plVar25 != 0) {
          FUN_0390262c(*plVar25,lVar11,0);
          if (*plVar25 != 0) {
            FUN_03902830(*plVar25,lVar12,0);
            if (*plVar25 != 0) {
              FUN_0390400c(*plVar25,lVar13,0);
              if (*plVar25 != 0) {
                FUN_03905048(*plVar25,1,0);
                lVar11 = *plVar25;
                if (DAT_03fed257 == '\0') {
                  thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                  DAT_03fed257 = '\x01';
                }
                puVar6 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
                puVar15 = *(undefined8 **)
                           (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
                uVar28 = *puVar15;
                uVar29 = *(undefined4 *)(puVar15 + 1);
                if (DAT_03fed258 == '\0') {
                  thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                  DAT_03fed258 = '\x01';
                  puVar15 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
                }
                fVar4 = DAT_00b55388;
                if (lVar11 != 0) {
                  local_9c = CONCAT44((float)((ulong)*(undefined8 *)((long)puVar15 + 0xc) >> 0x20) *
                                      10000.0 * 0.5,
                                      (float)*(undefined8 *)((long)puVar15 + 0xc) * 10000.0 * 0.5);
                  local_94 = *(float *)((long)puVar15 + 0x14) * DAT_00b55388 * 0.5;
                  local_a8 = uVar28;
                  local_a0 = uVar29;
                  FUN_03901cf0(lVar11,&local_a8,0);
                  if (*(long *)(param_1 + 0x58) != 0) {
                    FUN_03900dc8(*(long *)(param_1 + 0x58),*plVar25,0);
                    if (*plVar23 != 0) {
                      FUN_0390262c(*plVar23,lVar9,0);
                      if (*plVar23 != 0) {
                        FUN_03902830(*plVar23,lVar10,0);
                        if (*plVar23 != 0) {
                          FUN_0390400c(*plVar23,lVar13,0);
                          if (*plVar23 != 0) {
                            FUN_03905048(*plVar23,1,0);
                            lVar9 = *plVar23;
                            if (DAT_03fed257 == '\0') {
                              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                              DAT_03fed257 = '\x01';
                            }
                            puVar15 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
                            uVar28 = *puVar15;
                            uVar29 = *(undefined4 *)(puVar15 + 1);
                            if (DAT_03fed258 == '\0') {
                              thunk_FUN_01ad9084(puVar6);
                              DAT_03fed258 = '\x01';
                              puVar15 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
                            }
                            if (lVar9 != 0) {
                              local_ac = *(float *)((long)puVar15 + 0x14) * fVar4 * 0.5;
                              local_b4 = CONCAT44((float)((ulong)*(undefined8 *)
                                                                  ((long)puVar15 + 0xc) >> 0x20) *
                                                  10000.0 * 0.5,
                                                  (float)*(undefined8 *)((long)puVar15 + 0xc) *
                                                  10000.0 * 0.5);
                              local_c0 = uVar28;
                              local_b8 = uVar29;
                              FUN_03901cf0(lVar9,&local_c0,0);
                              if (*(long *)(param_1 + 0x60) != 0) {
                                FUN_03900dc8(*(long *)(param_1 + 0x60),*plVar23,0);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_032bd038:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


