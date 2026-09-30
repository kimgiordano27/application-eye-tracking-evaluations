/*
FUNCTION_NAME: FUN_05d77044
ENTRY_POINT: 05d77044
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;functionality_permission_setup
*/


void FUN_05d77044(undefined1 param_1 [16],float param_2,float param_3,long *param_4,long param_5,
                 long param_6,long param_7)

{
  bool bVar1;
  uint uVar2;
  undefined8 *puVar3;
  ushort uVar4;
  uint uVar5;
  uint6 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  ushort *puVar20;
  uint uVar21;
  long lVar22;
  ushort uVar23;
  ulong uVar24;
  int iVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  long local_98;
  undefined1 *puStack_90;
  uint local_84;
  undefined1 local_78 [4];
  int local_74;
  
  puVar8 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  if ((DAT_06bc3a08 & 1) == 0) {
                    /* try { // try from 05d7708c to 05e77177 has its CatchHandler @ 05d7708c
                       catch() { ... } // from try @ 05d7708c with catch @ 05d7708c
                       catch() { ... } // from try @ 05d77434 with catch @ 05d7708c
                       catch() { ... } // from try @ 05d7748c with catch @ 05d7708c
                       catch() { ... } // from try @ 05d774a8 with catch @ 05d7708c
                       catch() { ... } // from try @ 05d7753c with catch @ 05d7708c */
    FUN_02f08768(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<HandInteractionProfile>__);
    FUN_02f08768(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<HandTracking>__);
    FUN_02f08768(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<MetaXRSpaceWarp>__);
    FUN_02f08768(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<MetaXRSubsampledLayout>__);
    FUN_02f08768(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<MockRuntime>__);
    FUN_02f08768(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeatures<OpenXRInteractionFeature>__
                );
    FUN_02f08768(Method_UnityEngine_XR_OpenXR_OpenXRSettings_PermissionGrantedCallback__);
    FUN_02f08768(
                Method_UnityEngine_XR_OpenXR_Features_Meta_OpenXRUtils_IsOpenXRFeatureEnabled<DisplayUtilitiesFeature>__
                );
    FUN_02f08768(Method_System_OperatingSystem__ctor__);
    FUN_02f08768(Method_System_OperatingSystem_GetObjectData__);
    FUN_02f08768(Method_System_Runtime_Serialization_OptionalFieldAttribute_set_VersionAdded__);
    FUN_02f08768(Method_System_Linq_Expressions_Interpreter_OrInstruction_Create__);
    FUN_02f08768(Method_System_Collections_Specialized_OrderedDictionary_Add__);
    FUN_02f08768(PTR_DAT_067cca08);
    FUN_02f08768(Method_System_Collections_Specialized_OrderedDictionary_Clear__);
    FUN_02f08768(Method_System_Collections_Specialized_OrderedDictionary_GetObjectData__);
    FUN_02f08768(Method_System_Collections_Specialized_OrderedDictionary_OnDeserialization__);
    FUN_02f08768(Method_System_Collections_Specialized_OrderedDictionary_Remove__);
    FUN_02f08768(Method_System_Collections_Specialized_OrderedDictionary_set_Item__);
    FUN_02f08768(PTR_DAT_067c8f80);
    FUN_02f08768(Method_Mono_Security_Cryptography_PKCS1_CreateFromName__);
    FUN_02f08768(Method_Mono_Security_Cryptography_PKCS1_Encode_v15__);
    FUN_02f08768(PTR_DAT_067cc4f8);
    FUN_02f08768(Method_Mono_Security_Cryptography_PKCS1_HashNameFromOid__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_Mono_Security_Cryptography_PKCS1_CreateFromName__);
    FUN_02f08768(Method_Mono_Security_Cryptography_PKCS1_Encode_v15__);
    FUN_02f08768(PTR_DAT_067cc450);
    FUN_02f08768(Method_Mono_Security_X509_PKCS12_AddPrivateKey__);
    FUN_02f08768(PTR_DAT_067caf60);
    FUN_02f08768(PTR_DAT_067cb280);
    DAT_06bc3a08 = 1;
  }
  local_74 = 0;
  local_78[0] = 0;
  local_84 = 0;
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar13 = FUN_05dab444(0);
  puVar8 = Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<HandInteractionProfile>__;
  if (param_5 == 0) goto LAB_05d77dbc;
  uVar16 = *(undefined8 *)(param_5 + 0x20);
  uVar29 = *(ulong *)(param_5 + 0x28);
  lVar17 = *(long *)Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<HandInteractionProfile>__
  ;
  plVar18 = *(long **)(lVar17 + 0xb8);
  if (*plVar18 == 0) {
    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_System_Collections_Specialized_OrderedDictionary_set_Item__)
    ;
    FUN_03ae4e40(uVar14,*(undefined8 *)
                         Method_UnityEngine_XR_OpenXR_Features_Meta_OpenXRUtils_IsOpenXRFeatureEnabled<DisplayUtilitiesFeature>__
                );
    **(undefined8 **)(*(long *)puVar8 + 0xb8) = uVar14;
    lVar17 = *(long *)puVar8;
    plVar18 = *(long **)(lVar17 + 0xb8);
  }
  if (plVar18[1] == 0) {
    lVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_System_Collections_Specialized_OrderedDictionary_Remove__);
    FUN_03b89b8c(lVar15,*(undefined8 *)
                         Method_UnityEngine_XR_OpenXR_OpenXRSettings_PermissionGrantedCallback__);
    lVar17 = *(long *)puVar8;
    plVar18 = *(long **)(lVar17 + 0xb8);
    plVar18[1] = lVar15;
  }
  iVar25 = (int)uVar29;
  if ((plVar18[2] == 0) || (*(int *)(plVar18[2] + 0x18) < iVar25)) {
    lVar15 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067cc450,uVar29 & 0xffffffff);
    lVar17 = *(long *)puVar8;
    plVar18 = *(long **)(lVar17 + 0xb8);
    plVar18[2] = lVar15;
  }
  if (plVar18[3] == 0) {
    uVar14 = FUN_05d77e6c();
    lVar17 = *(long *)puVar8;
    *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x18) = uVar14;
  }
  if ((uVar13 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_067cb280 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    iVar9 = FUN_05dd2e14(0);
    if (**(long **)(*(long *)puVar8 + 0xb8) == 0) goto LAB_05d77dbc;
    iVar10 = FUN_03ae51d8(**(long **)(*(long *)puVar8 + 0xb8),
                          *(undefined8 *)Method_System_OperatingSystem__ctor__);
    if (iVar10 < iVar9) {
      if (**(long **)(*(long *)puVar8 + 0xb8) == 0) goto LAB_05d77dbc;
      FUN_03ae51f0(**(long **)(*(long *)puVar8 + 0xb8),iVar9,
                   *(undefined8 *)Method_System_Collections_Specialized_OrderedDictionary_Clear__);
    }
    lVar17 = *(long *)puVar8;
    lVar15 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
    if (lVar15 == 0) goto LAB_05d77dbc;
    if (*(int *)(lVar15 + 0x18) < iVar25) {
      FUN_03b89f3c(lVar15,uVar29 & 0xffffffff,
                   *(undefined8 *)
                    Method_System_Collections_Specialized_OrderedDictionary_GetObjectData__);
      lVar17 = *(long *)puVar8;
      lVar15 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
      if (lVar15 == 0) goto LAB_05d77dbc;
      iVar9 = (iVar25 - *(int *)(lVar15 + 0x18)) + 1;
      if (0 < iVar9) {
        do {
          lVar17 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
          if (lVar17 == 0) goto LAB_05d77dbc;
          lVar15 = *(long *)(lVar17 + 0x10);
          lVar19 = *(long *)Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<HandTracking>__;
          *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
          if (lVar15 == 0) goto LAB_05d77dbc;
          uVar11 = *(uint *)(lVar17 + 0x18);
          if (uVar11 < *(uint *)(lVar15 + 0x18)) {
            lVar15 = lVar15 + (long)(int)uVar11 * 0xe;
            *(uint *)(lVar17 + 0x18) = uVar11 + 1;
            *(undefined8 *)(lVar15 + 0x20) = 0;
            *(undefined2 *)(lVar15 + 0x2c) = 0;
            *(undefined4 *)(lVar15 + 0x28) = 0;
          }
          else {
            FUN_03b8a414(lVar17,0,0,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        lVar17 = *(long *)puVar8;
      }
    }
  }
  plVar18 = *(long **)(lVar17 + 0xb8);
  lVar17 = *plVar18;
  if (lVar17 != 0) {
    *(undefined4 *)(lVar17 + 0x18) = 0;
    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
    puVar7 = Method_System_Collections_Specialized_OrderedDictionary_OnDeserialization__;
    if (iVar25 < 1) {
      uVar23 = 0;
    }
    else {
      uVar28 = 0;
      uVar23 = 0;
      do {
        if (uVar28 == *(uint *)(param_5 + 0x10)) {
          lVar15 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x10);
          if (lVar15 == 0) goto LAB_05d77dbc;
          if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_05d77e10;
LAB_05d7779c:
          fVar34 = 3.4028235e+38;
        }
        else {
          uVar14 = FUN_0347abf8(uVar16,uVar29,uVar28 & 0xffffffff,
                                *(undefined8 *)Method_Mono_Security_Cryptography_PKCS1_Encode_v15__)
          ;
          lVar17 = FUN_0612c1d0(uVar14,0);
          local_74 = FUN_0612c25c(uVar14,0);
          if (lVar17 == 0) goto LAB_05d77dbc;
          iVar9 = FUN_060c34ec(lVar17,0);
          uVar12 = FUN_060c35a0(lVar17,0);
          iVar25 = local_74;
          if (*(int *)(*(long *)Method_Mono_Security_Cryptography_PKCS1_Encode_v15__ + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar27 = FUN_05db7f00(uVar12,param_5,uVar28 & 0xffffffff,iVar25,iVar9,0);
          iVar25 = local_74;
          if ((uVar27 & 1) == 0) {
            lVar15 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x10);
            if (lVar15 != 0) {
              if (uVar28 < *(uint *)(lVar15 + 0x18)) goto LAB_05d7779c;
              goto LAB_05d77e10;
            }
            goto LAB_05d77dbc;
          }
          if ((param_6 == 0) || (*(long *)(param_6 + 0x50) == 0)) goto LAB_05d77dbc;
          uVar11 = FUN_03a6be94(*(long *)(param_6 + 0x50),uVar28 & 0xffffffff,
                                *(undefined8 *)PTR_DAT_067cca08);
          if (*(int *)(*(long *)Method_Mono_Security_Cryptography_PKCS1_Encode_v15__ + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)Method_Mono_Security_Cryptography_PKCS1_Encode_v15__);
          }
          iVar10 = FUN_05db59a0(&local_74,0);
          if (0 < iVar10) {
            uVar27 = 0;
            do {
              lVar15 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
              if (lVar15 == 0) goto LAB_05d77dbc;
              uVar30 = *(uint *)(lVar15 + 0x18);
              if ((int)uVar30 <= (int)(uint)uVar23) {
                lVar19 = *(long *)(lVar15 + 0x10);
                lVar22 = *(long *)
                          Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<HandTracking>__;
                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                if (lVar19 == 0) goto LAB_05d77dbc;
                if (uVar30 < *(uint *)(lVar19 + 0x18)) {
                  lVar19 = lVar19 + (long)(int)uVar30 * 0xe;
                  *(uint *)(lVar15 + 0x18) = uVar30 + 1;
                  *(undefined8 *)(lVar19 + 0x20) = 0;
                  *(undefined2 *)(lVar19 + 0x2c) = 0;
                  *(undefined4 *)(lVar19 + 0x28) = 0;
                }
                else {
                  FUN_03b8a414(lVar15,0,0,
                               *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                }
              }
              lVar15 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
              if (lVar15 == 0) goto LAB_05d77dbc;
              auVar35 = FUN_03b8a0c8(lVar15,uVar23,
                                     *(undefined8 *)
                                      Method_System_Collections_Specialized_OrderedDictionary_Add__)
              ;
              lVar15 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
              if (lVar15 == 0) goto LAB_05d77dbc;
              FUN_03b8a12c(lVar15,uVar23,
                           auVar35._0_8_ & 0xffff000000000000 | (ulong)(uVar11 & 0xffff) << 0x20 |
                           (uVar27 & 0xffff) << 0x10 | uVar28 & 0xffff,
                           auVar35._8_8_ & 0xffffffff |
                           (ulong)(auVar35._12_4_ & 0xfffc |
                                  (uint)(iVar9 == 2) | (uint)(iVar25 == 2) << 1) << 0x20,
                           *(undefined8 *)puVar7);
              uVar30 = (int)uVar27 + 1;
              uVar27 = (ulong)uVar30;
              uVar23 = uVar23 + 1;
            } while ((int)(uVar30 & 0xffff) < iVar10);
          }
          if (param_7 == 0) goto LAB_05d77dbc;
          fVar34 = *(float *)(param_7 + 0x1e4);
          fVar32 = *(float *)(param_7 + 0x1e8);
          fVar33 = *(float *)(param_7 + 0x1ec);
          lVar15 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x10);
          lVar17 = FUN_060ed7ac(lVar17,0);
          if ((lVar17 == 0) || (fVar31 = (float)FUN_060ffbe4(lVar17,0), lVar15 == 0))
          goto LAB_05d77dbc;
          if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_05d77e10;
          fVar34 = fVar34 - fVar31;
          fVar32 = fVar32 - param_2;
          fVar33 = fVar33 - param_3;
          param_2 = fVar32 * fVar32;
          param_3 = fVar33 * fVar33;
          fVar34 = param_3 + fVar34 * fVar34 + param_2;
        }
        lVar17 = uVar28 * 4;
        uVar28 = uVar28 + 1;
        *(float *)(lVar15 + lVar17 + 0x20) = fVar34;
      } while (uVar28 != (uVar29 & 0xffffffff));
      plVar18 = *(long **)(*(long *)puVar8 + 0xb8);
    }
    if ((plVar18[4] == 0) || (*(int *)(plVar18[4] + 0x18) < (int)(uint)uVar23)) {
      uVar16 = FUN_02f0880c(*(undefined8 *)Method_Mono_Security_Cryptography_PKCS1_CreateFromName__,
                            uVar23);
      *(undefined8 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x20) = uVar16;
    }
    uVar11 = (uint)uVar23;
    if (uVar11 != 0) {
      uVar28 = 0;
      lVar17 = 0x20;
      do {
        lVar15 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
        if (lVar15 == 0) goto LAB_05d77dbc;
        lVar19 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x20);
        auVar35 = FUN_03b8a0c8(lVar15,uVar28 & 0xffffffff,
                               *(undefined8 *)
                                Method_System_Collections_Specialized_OrderedDictionary_Add__);
        if (lVar19 == 0) goto LAB_05d77dbc;
        if (*(uint *)(lVar19 + 0x18) <= uVar28) goto LAB_05d77e10;
        uVar28 = uVar28 + 1;
        puVar3 = (undefined8 *)(lVar19 + lVar17);
        lVar17 = lVar17 + 0xe;
        *puVar3 = auVar35._0_8_;
        *(int *)(puVar3 + 1) = auVar35._8_4_;
        *(short *)((long)puVar3 + 0xc) = auVar35._12_2_;
      } while (uVar11 != uVar28);
    }
    puVar7 = PTR_DAT_067caf60;
    lVar17 = *(long *)PTR_DAT_067caf60;
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar17 = *(long *)puVar7;
    }
    FUN_05c5cb44(local_78,**(undefined8 **)(lVar17 + 0xb8),0);
    local_98 = 0;
    uVar16 = *(undefined8 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x18);
    uVar14 = *(undefined8 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x20);
    puStack_90 = local_78;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_0354e168(uVar14,0,uVar11 - 1,uVar16,
                 *(undefined8 *)Method_Mono_Security_X509_PKCS12_AddPrivateKey__);
    FUN_05c5cb50(local_78,0);
    local_98 = 0;
    puStack_90 = (undefined1 *)0x0;
    FUN_03da61a0(&local_98,*(undefined8 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x20),2,
                 *(undefined8 *)Method_Mono_Security_Cryptography_PKCS1_HashNameFromOid__);
    uVar28 = (ulong)uVar11;
    param_4[1] = (long)puStack_90;
    *param_4 = local_98;
    if ((uVar13 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_067cb280 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar12 = FUN_05dd2e14(0);
      if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f80);
      }
      uVar28 = FUN_050d65ac(uVar11,uVar12,0);
      uVar28 = uVar28 & 0xffffffff;
    }
    if (param_6 != 0) {
      iVar25 = *(int *)(param_6 + 0x34);
      if ((int)uVar28 < 1) {
        uVar30 = 1;
      }
      else {
        do {
          lVar15 = *param_4 + uVar28 * 0xe;
          lVar17 = 0;
          uVar23 = *(ushort *)(lVar15 + -10);
          uVar4 = *(ushort *)(lVar15 + -2);
          uVar13 = uVar28;
          puVar20 = (ushort *)(*param_4 + 4);
          do {
            uVar13 = uVar13 - 1;
            lVar17 = lVar17 + (int)((uint)*puVar20 * (uint)*puVar20);
            puVar20 = puVar20 + 7;
          } while (uVar13 != 0);
          uVar26 = 1;
          do {
            uVar30 = uVar26;
            uVar26 = uVar30 << 1;
          } while ((long)(iVar25 * iVar25) * (long)(int)uVar30 * (long)(int)uVar30 < lVar17);
          if (*(int *)(*(long *)Method_Mono_Security_Cryptography_PKCS1_Encode_v15__ + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar26 = (uint)uVar4;
          iVar9 = FUN_05db8040(uVar26 & 1,0);
          if ((int)(iVar9 * uVar30) <= (int)(uint)uVar23) break;
          local_84 = uVar26 & 2;
          if (*(int *)(*(long *)Method_Mono_Security_Cryptography_PKCS1_Encode_v15__ + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          iVar9 = FUN_05db59a0(&local_84,0);
          uVar26 = (int)uVar28 - iVar9;
          uVar28 = (ulong)uVar26;
        } while (0 < (int)uVar26);
      }
      puVar7 = PTR_DAT_067cc4f8;
      uVar26 = (uint)uVar28;
      if ((int)uVar26 < (int)param_4[1]) {
        lVar17 = (long)(int)uVar26;
        lVar15 = (-(uVar28 >> 0x1f) & 0xfffffff000000000 | uVar28 << 4) + (long)(int)uVar26 * -2;
        do {
          lVar17 = lVar17 + 1;
          puVar3 = (undefined8 *)(*param_4 + lVar15);
          lVar15 = lVar15 + 0xe;
          *puVar3 = 0;
          *(undefined2 *)((long)puVar3 + 0xc) = 0;
          *(undefined4 *)(puVar3 + 1) = 0;
        } while (lVar17 < (int)param_4[1]);
      }
      local_98 = 0;
      puStack_90 = (undefined1 *)0x0;
      FUN_03d1851c(&local_98,uVar29,2,1,*(undefined8 *)puVar7);
      param_4[3] = (long)puStack_90;
      param_4[2] = local_98;
      if (0 < (int)param_4[3]) {
        lVar15 = param_4[2];
        lVar17 = 0;
        do {
          *(undefined4 *)(lVar15 + lVar17 * 4) = 0xffffffff;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)param_4[3]);
      }
      uVar13 = (ulong)(uVar26 - 1);
      if (-1 < (int)(uVar26 - 1)) {
        lVar17 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x20);
        if (lVar17 == 0) goto LAB_05d77dbc;
        uVar21 = *(uint *)(lVar17 + 0x18);
        puVar20 = (ushort *)(lVar17 + uVar13 * 0xe + 0x20);
        uVar29 = uVar13;
        do {
          if (uVar21 <= uVar13) {
LAB_05d77e10:
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          *(int *)(param_4[2] + (ulong)*puVar20 * 4) = (int)uVar29;
          bVar1 = 0 < (long)uVar29;
          puVar20 = puVar20 + -7;
          uVar29 = uVar29 - 1;
        } while (bVar1);
      }
      lVar17 = **(long **)(*(long *)puVar8 + 0xb8);
      if (lVar17 != 0) {
LAB_05d77b78:
        lVar15 = *(long *)(lVar17 + 0x10);
        lVar19 = *(long *)Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<MetaXRSpaceWarp>__;
        *(undefined4 *)(lVar17 + 0x18) = 0;
        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 2;
        if (lVar15 != 0) {
          if (*(int *)(lVar15 + 0x18) == 0) {
            FUN_03ae567c(lVar17,0,CONCAT44(iVar25,iVar25),
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          else {
            *(undefined4 *)(lVar17 + 0x18) = 1;
            *(undefined8 *)(lVar15 + 0x20) = 0;
            *(ulong *)(lVar15 + 0x28) = CONCAT44(iVar25,iVar25);
          }
          if ((int)uVar26 < 1) {
            bVar1 = false;
          }
          else {
            uVar21 = 0;
            uVar29 = uVar13;
            do {
              lVar17 = *param_4 + (ulong)uVar21 * 0xe;
              uVar23 = *(ushort *)(lVar17 + 4);
              uVar6 = *(uint6 *)(lVar17 + 8);
              if (*(int *)(*(long *)Method_Mono_Security_Cryptography_PKCS1_Encode_v15__ + 0xe4) ==
                  0) {
                thunk_FUN_02f6670c();
              }
              uVar5 = 0;
              if (uVar30 != 0) {
                uVar5 = uVar23 / uVar30;
              }
              iVar9 = FUN_05db8040((ulong)(uVar6 >> 0x20) & 1,0);
              puVar7 = Method_System_Linq_Expressions_Interpreter_OrInstruction_Create__;
              bVar1 = (int)uVar5 < iVar9;
              if ((int)uVar5 < iVar9) break;
              lVar17 = **(long **)(*(long *)puVar8 + 0xb8);
              if (lVar17 == 0) goto LAB_05d77dbc;
              iVar9 = 0;
              while( true ) {
                if (*(int *)(lVar17 + 0x18) <= iVar9) {
                  uVar30 = uVar30 << 1;
                  lVar17 = **(long **)(*(long *)puVar8 + 0xb8);
                  if (lVar17 != 0) goto LAB_05d77b78;
                  goto LAB_05d77dbc;
                }
                auVar35 = FUN_03ae537c(lVar17,iVar9,*(undefined8 *)puVar7);
                uVar28 = auVar35._0_8_;
                if ((int)uVar5 <= auVar35._8_4_) break;
                iVar9 = iVar9 + 1;
                lVar17 = **(long **)(*(long *)puVar8 + 0xb8);
                if (lVar17 == 0) goto LAB_05d77dbc;
              }
              uVar27 = uVar28 >> 0x20;
              lVar17 = FUN_0347ad50(*param_4,param_4[1],uVar21,
                                    *(undefined8 *)
                                     Method_Mono_Security_Cryptography_PKCS1_CreateFromName__);
              *(short *)(lVar17 + 6) = auVar35._0_2_;
              lVar15 = *(long *)puVar8;
              *(short *)(lVar17 + 8) = auVar35._4_2_;
              *(short *)(lVar17 + 10) = (short)uVar5;
              if (**(long **)(lVar15 + 0xb8) == 0) goto LAB_05d77dbc;
              FUN_03ae6d08(**(long **)(lVar15 + 0xb8),iVar9,
                           *(undefined8 *)
                            Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeatures<OpenXRInteractionFeature>__
                          );
              if ((int)(uVar21 - uVar26) < -1) {
                iVar10 = 0;
                uVar24 = uVar28 & 0xffffffff;
                do {
                  uVar2 = (int)uVar24 + uVar5;
                  uVar24 = (ulong)uVar2;
                  if (auVar35._8_4_ + auVar35._0_4_ < (int)(uVar2 + uVar5)) {
                    uVar2 = (int)uVar27 + uVar5;
                    uVar27 = (ulong)uVar2;
                    uVar24 = uVar28 & 0xffffffff;
                    if (auVar35._12_4_ + auVar35._4_4_ < (int)(uVar2 + uVar5)) break;
                  }
                  if (**(long **)(*(long *)puVar8 + 0xb8) == 0) goto LAB_05d77dbc;
                  FUN_03ae6314(**(long **)(*(long *)puVar8 + 0xb8),iVar9 + iVar10,
                               uVar24 | uVar27 << 0x20,CONCAT44(uVar5,uVar5),
                               *(undefined8 *)
                                Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<MockRuntime>__
                              );
                  iVar10 = iVar10 + 1;
                } while ((int)uVar29 != iVar10);
              }
              uVar29 = (ulong)((int)uVar29 - 1);
              uVar21 = uVar21 + 1;
            } while (uVar21 != uVar26);
          }
          *(bool *)(param_4 + 5) = bVar1;
          *(uint *)(param_4 + 4) = uVar26;
          *(uint *)((long)param_4 + 0x24) = uVar11;
          *(uint *)((long)param_4 + 0x2c) = uVar30;
          *(int *)(param_4 + 6) = iVar25;
          return;
        }
      }
    }
  }
LAB_05d77dbc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


