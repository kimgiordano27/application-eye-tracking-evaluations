/*
FUNCTION_NAME: FUN_05c13268
ENTRY_POINT: 05c13268
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_21;telemetry_or_network_hits_2
*/


void FUN_05c13268(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  int iVar19;
  undefined8 local_98;
  undefined8 *puStack_90;
  long *local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long *local_70;
  
  puVar8 = 
  Method_UnityEngine_Rendering_Universal_NativeArrayExtensions_UnsafeElementAt<VisibleLight>__;
  puVar7 = 
  Method_UnityEngine_Rendering_Universal_NativeArrayExtensions_UnsafeElementAt<URPLightShadowCullingInfos>__
  ;
  puVar6 = 
  Method_UnityEngine_Rendering_Universal_NativeArrayExtensions_UnsafeElementAt<ShadowSliceData>__;
  puVar5 = Method_Unity_Collections_NativeArrayExtensions_Contains<int,_int>__;
  puVar4 = Method_Unity_Collections_NativeArrayExtensions_Contains<int,_int>__;
  puVar3 = Method_System_Xml_Schema_NamespaceListNode_get_IsNullable__;
  puVar2 = PTR_DAT_06648570;
  if ((DAT_06a577bc & 1) == 0) {
    FUN_02d4dc40(
                Method_UnityEngine_Rendering_Universal_NativeArrayExtensions_UnsafeElementAt<VisibleLight>__
                );
    FUN_02d4dc40(PTR_DAT_066471b8);
    FUN_02d4dc40(PTR_DAT_0664a8a0);
    FUN_02d4dc40(Method_Unity_Collections_NativeArrayExtensions_Contains<int,_int>__);
    FUN_02d4dc40(
                Method_UnityEngine_Rendering_Universal_NativeArrayExtensions_UnsafeElementAt<URPLightShadowCullingInfos>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_Rendering_Universal_NativeArrayExtensions_UnsafeElementAt<ShadowSliceData>__
                );
    FUN_02d4dc40(Method_System_Xml_Schema_NamespaceListNode_get_IsNullable__);
    FUN_02d4dc40(PTR_DAT_0664b7f0);
    FUN_02d4dc40(PTR_DAT_0664b7f8);
    FUN_02d4dc40(PTR_DAT_0664b800);
    FUN_02d4dc40(
                Method_UnityEngine_Rendering_Universal_NativeArrayExtensions_UnsafeElementAtMutable<VisibleLight>__
                );
    FUN_02d4dc40(Method_Unity_Collections_NativeArrayExtensions_Contains<int,_int>__);
    FUN_02d4dc40(
                Method_UnityEngine_Rendering_Universal_NativeArrayExtensions_UnsafeElementAtMutable<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>__
                );
    FUN_02d4dc40(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<BatchCullingOutputDrawCommands>__
                );
    FUN_02d4dc40(PTR_DAT_0664b808);
    FUN_02d4dc40(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<bool>__
                );
    FUN_02d4dc40(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Bounds>__
                );
    FUN_02d4dc40(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<byte>__
                );
    FUN_02d4dc40(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<ContactPairHeader>__
                );
    FUN_02d4dc40(PTR_DAT_066462d0);
    FUN_02d4dc40(Method_UnityEngine_Component_GetComponent<WebRtcAudioDsp>__);
    FUN_02d4dc40(Method_UnityEngine_Rendering_MemoryUtilities_Malloc<int>__);
    FUN_02d4dc40(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<CullingSplit>__
                );
    FUN_02d4dc40(PTR_DAT_06648570);
    FUN_02d4dc40(Method_System_Collections_Specialized_NameValueCollection_Set__);
    FUN_02d4dc40(PTR_DAT_0664bc18);
    FUN_02d4dc40(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<GPUDrivenMeshLodInfo>__
                );
    DAT_06a577bc = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = (long *)0x0;
  uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
  FUN_047aab74(uVar12,10,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x18) = uVar12;
  thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0x18),uVar12);
  uVar12 = FUN_02d4dd2c(*(undefined8 *)puVar5,0x14);
  *(undefined8 *)(param_1 + 0x28) = uVar12;
  thunk_FUN_02dc1ef0();
  uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
  FUN_047a7444(uVar12,10,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x30) = uVar12;
  thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0x30),uVar12);
  lVar13 = FUN_02d4dd2c(*(undefined8 *)puVar8,8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98(*(long *)puVar2);
  }
  if (DAT_06a577e4 == '\0') {
    FUN_02d4dc40(PTR_DAT_06648570);
    DAT_06a577e4 = '\x01';
  }
  lVar14 = *(long *)puVar2;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar14 = *(long *)puVar2;
  }
  if (lVar13 == 0) goto LAB_05c13b2c;
  if (*(int *)(lVar13 + 0x18) != 0) {
    memmove((void *)(lVar13 + 0x20),(void *)(*(long *)(lVar14 + 0xb8) + 8),0x78);
    if (DAT_06a577e4 == '\0') {
      FUN_02d4dc40(PTR_DAT_06648570);
      DAT_06a577e4 = '\x01';
    }
    lVar14 = *(long *)puVar2;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar14 = *(long *)puVar2;
    }
    if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0) {
      memmove((void *)(lVar13 + 0x98),(void *)(*(long *)(lVar14 + 0xb8) + 8),0x78);
      if (DAT_06a577e4 == '\0') {
        FUN_02d4dc40(PTR_DAT_06648570);
        DAT_06a577e4 = '\x01';
      }
      lVar14 = *(long *)puVar2;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar14 = *(long *)puVar2;
      }
      if (2 < *(uint *)(lVar13 + 0x18)) {
        memmove((void *)(lVar13 + 0x110),(void *)(*(long *)(lVar14 + 0xb8) + 8),0x78);
        if (DAT_06a577e4 == '\0') {
          FUN_02d4dc40(PTR_DAT_06648570);
          DAT_06a577e4 = '\x01';
        }
        lVar14 = *(long *)puVar2;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar14 = *(long *)puVar2;
        }
        if ((*(uint *)(lVar13 + 0x18) & 0xfffffffc) != 0) {
          memmove((void *)(lVar13 + 0x188),(void *)(*(long *)(lVar14 + 0xb8) + 8),0x78);
          if (DAT_06a577e4 == '\0') {
            FUN_02d4dc40(PTR_DAT_06648570);
            DAT_06a577e4 = '\x01';
          }
          lVar14 = *(long *)puVar2;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar14 = *(long *)puVar2;
          }
          if (4 < *(uint *)(lVar13 + 0x18)) {
            memmove((void *)(lVar13 + 0x200),(void *)(*(long *)(lVar14 + 0xb8) + 8),0x78);
            if (DAT_06a577e4 == '\0') {
              FUN_02d4dc40(PTR_DAT_06648570);
              DAT_06a577e4 = '\x01';
            }
            lVar14 = *(long *)puVar2;
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar14 = *(long *)puVar2;
            }
            if (5 < *(uint *)(lVar13 + 0x18)) {
              memmove((void *)(lVar13 + 0x278),(void *)(*(long *)(lVar14 + 0xb8) + 8),0x78);
              if (DAT_06a577e4 == '\0') {
                FUN_02d4dc40(PTR_DAT_06648570);
                DAT_06a577e4 = '\x01';
              }
              lVar14 = *(long *)puVar2;
              if (*(int *)(lVar14 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar14 = *(long *)puVar2;
              }
              if (6 < *(uint *)(lVar13 + 0x18)) {
                memmove((void *)(lVar13 + 0x2f0),(void *)(*(long *)(lVar14 + 0xb8) + 8),0x78);
                if (DAT_06a577e4 == '\0') {
                  FUN_02d4dc40(PTR_DAT_06648570);
                  DAT_06a577e4 = '\x01';
                }
                lVar14 = *(long *)puVar2;
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                  lVar14 = *(long *)puVar2;
                }
                puVar10 = 
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<CullingSplit>__
                ;
                puVar9 = 
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<ContactPairHeader>__
                ;
                puVar8 = 
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<byte>__
                ;
                puVar7 = 
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Bounds>__
                ;
                puVar6 = 
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<bool>__
                ;
                puVar5 = 
                Method_UnityEngine_Rendering_Universal_NativeArrayExtensions_UnsafeElementAtMutable<VisibleLight>__
                ;
                puVar4 = Method_UnityEngine_Rendering_MemoryUtilities_Malloc<int>__;
                puVar3 = PTR_DAT_0664a8a0;
                puVar2 = PTR_DAT_066471b8;
                if ((*(uint *)(lVar13 + 0x18) & 0xfffffff8) != 0) {
                  memmove((void *)(lVar13 + 0x368),(void *)(*(long *)(lVar14 + 0xb8) + 8),0x78);
                  *(long *)(param_1 + 0x40) = lVar13;
                  thunk_FUN_02dc1ef0((long *)(param_1 + 0x40),lVar13);
                  uVar12 = FUN_02d4dd2c(*(undefined8 *)puVar2,8);
                  *(undefined8 *)(param_1 + 0xc0) = uVar12;
                  thunk_FUN_02dc1ef0();
                  uVar12 = FUN_02d4dd2c(*(undefined8 *)puVar4,8);
                  *(undefined8 *)(param_1 + 200) = uVar12;
                  thunk_FUN_02dc1ef0();
                  uVar12 = *(undefined8 *)puVar10;
                  *(undefined1 *)(param_1 + 0xe0) = 1;
                  uVar12 = thunk_FUN_02d8a638(uVar12);
                  FUN_05c1c7a8(uVar12,0);
                  *(undefined8 *)(param_1 + 0xf0) = uVar12;
                  thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0xf0),uVar12);
                  uVar12 = FUN_02d4dd2c(*(undefined8 *)puVar5,0);
                  *(undefined8 *)(param_1 + 0xf8) = uVar12;
                  thunk_FUN_02dc1ef0();
                  uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar9);
                  FUN_036a5618(uVar12,0x20,*(undefined8 *)puVar6);
                  *(undefined8 *)(param_1 + 0x108) = uVar12;
                  thunk_FUN_02dc1ef0(param_1 + 0x108,uVar12);
                  uVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar8);
                  FUN_036a5618(uVar12,10,*(undefined8 *)puVar7);
                  *(undefined8 *)(param_1 + 0x110) = uVar12;
                  thunk_FUN_02dc1ef0(param_1 + 0x110,uVar12);
                  uVar12 = *(undefined8 *)puVar3;
                  *(undefined2 *)(param_1 + 0x130) = 0x101;
                  uVar12 = thunk_FUN_02d8a638(uVar12);
                  FUN_05aee190(uVar12,0);
                  *(undefined8 *)(param_1 + 0x138) = uVar12;
                  thunk_FUN_02dc1ef0(param_1 + 0x138,uVar12);
                  FUN_05044d4c(param_1,0);
                  puVar3 = 
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<GPUDrivenMeshLodInfo>__
                  ;
                  puVar2 = Method_UnityEngine_Component_GetComponent<WebRtcAudioDsp>__;
                  if (param_2 != 0) {
                    uVar12 = thunk_FUN_05ee6e70(param_2,0);
                    uVar12 = FUN_04e723e0(*(undefined8 *)puVar3,uVar12,0);
                    uVar15 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
                    FUN_05b06d3c(uVar15,uVar12,0);
                    *(undefined8 *)(param_1 + 0xd8) = uVar15;
                    thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0xd8),uVar15);
                    puVar7 = 
                    Method_UnityEngine_Rendering_Universal_NativeArrayExtensions_UnsafeElementAtMutable<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>__
                    ;
                    puVar6 = Method_System_Collections_Specialized_NameValueCollection_Set__;
                    puVar5 = PTR_DAT_0664bc18;
                    puVar4 = PTR_DAT_0664b7f8;
                    puVar3 = PTR_DAT_0664b7f0;
                    puVar2 = PTR_DAT_066462d0;
                    if (*(long *)(param_2 + 0x30) != 0) {
                      FUN_036a68ac(&local_98,*(long *)(param_2 + 0x30),
                                   *(undefined8 *)PTR_DAT_0664b808);
                      local_70 = local_88;
                      puStack_78 = puStack_90;
                      local_80 = local_98;
                      local_98 = 0;
                      puStack_90 = &local_80;
LAB_05c13968:
                      uVar16 = FUN_049c6928(&local_80,*(undefined8 *)puVar4);
                      plVar11 = local_70;
                      if ((uVar16 & 1) != 0) {
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          thunk_FUN_02dabd98();
                        }
                        uVar16 = FUN_05ee2f7c(plVar11,0,0);
                        if ((uVar16 & 1) == 0) {
                          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_02d4dee8();
                          }
                          (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
                          lVar13 = *(long *)(param_1 + 0x110);
                          if (lVar13 != 0) {
                            lVar14 = *(long *)(lVar13 + 0x10);
                            lVar18 = *(long *)puVar7;
                            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                            if (lVar14 != 0) {
                              uVar1 = *(uint *)(lVar13 + 0x18);
                              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                puVar17 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                                *puVar17 = plVar11;
                                thunk_FUN_02dc1ef0(puVar17,plVar11);
                              }
                              else {
                                FUN_036a5e08(lVar13,plVar11,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                              }
                              goto LAB_05c13968;
                            }
                          }
                    /* WARNING: Subroutine does not return */
                          FUN_02d4dee8();
                        }
                        goto LAB_05c13968;
                      }
                      FUN_049c6924(&local_80,*(undefined8 *)puVar3);
                      FUN_05c0d9dc(param_1);
                      *(undefined1 *)(param_1 + 0x134) = *(undefined1 *)(param_2 + 0x40);
                      FUN_05c13b9c(param_1,0);
                      lVar13 = *(long *)(param_1 + 0x108);
                      if (lVar13 != 0) {
                        iVar19 = *(int *)(lVar13 + 0x18);
                        *(undefined4 *)(lVar13 + 0x18) = 0;
                        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                        if (0 < iVar19) {
                          FUN_05025690(*(undefined8 *)(lVar13 + 0x10),0,iVar19,0);
                        }
                        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                          thunk_FUN_02dabd98();
                        }
                        uVar12 = FUN_05c8ac5c(0);
                        lVar13 = *(long *)puVar2;
                        if (*(int *)(lVar13 + 0xe4) == 0) {
                          thunk_FUN_02dabd98(lVar13);
                        }
                        uVar16 = FUN_05ee6de4(uVar12,0);
                        if ((uVar16 & 1) == 0) {
                          iVar19 = *(int *)(param_1 + 0x100);
                        }
                        else {
                          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                            thunk_FUN_02dabd98();
                          }
                          lVar13 = FUN_05c8ac5c(0);
                          if (lVar13 == 0) goto LAB_05c13b2c;
                          iVar19 = *(int *)(lVar13 + 0x100);
                          *(int *)(param_1 + 0x100) = iVar19;
                        }
                        lVar13 = *(long *)puVar6;
                        if (*(int *)(lVar13 + 0xe4) == 0) {
                          thunk_FUN_02dabd98();
                          lVar13 = *(long *)puVar6;
                        }
                        *(bool *)(*(long *)(lVar13 + 0xb8) + 8) = iVar19 != 2;
                        return;
                      }
                    }
                  }
LAB_05c13b2c:
                    /* WARNING: Subroutine does not return */
                  FUN_02d4dee8();
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4def0();
}


