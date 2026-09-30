/*
FUNCTION_NAME: FUN_05e25a6c
ENTRY_POINT: 05e25a6c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05e25f2c) */
/* WARNING: Removing unreachable block (ram,0x05e26108) */

void FUN_05e25a6c(int *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_06b834af & 1) == 0) {
    FUN_02d6084c(Method_System_ValueTuple<Type,_string>__ctor__);
    FUN_02d6084c(Method_System_ValueTuple<Type,_string>_CompareTo__);
    FUN_02d6084c(Method_System_ValueTuple<Type,_string>_GetHashCode__);
    FUN_02d6084c(Method_System_ValueTuple<uint,_RenderTexture>__ctor__);
    FUN_02d6084c(Method_System_ValueTuple<uint,_uint>__ctor__);
    FUN_02d6084c(Method_System_ValueTuple<ulong,_ulong>__ctor__);
    FUN_02d6084c(Method_System_ValueTuple<ValueInput,_ValueOutput[]>__ctor__);
    FUN_02d6084c(Method_System_ValueTuple<ValueOutput,_ValueInput[]>__ctor__);
    FUN_02d6084c(Method_System_ValueTuple<Vector2,_bool>__ctor__);
    FUN_02d6084c(Method_System_ValueTuple<Vector3,_float>__ctor__);
    FUN_02d6084c(Method_System_ValueTuple<Vector3,_Vector3>__ctor__);
    FUN_02d6084c(Method_System_ValueTuple<Vector4,_Vector2Int>__ctor__);
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler_SwapchainCreateInfo<XrCompositionLayerCubeKHR>_op_Implicit__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler_SwapchainCreateInfo<XrCompositionLayerCylinderKHR>__ctor__
                );
    FUN_02d6084c(Method_System_ValueTuple<Vector4,_Vector4>__ctor__);
    FUN_02d6084c(Method_System_ValueTuple<VolumeProfile,_VolumeComponent>__ctor__);
    FUN_02d6084c(Method_System_ValueTuple<WebConnection,_bool>__ctor__);
    FUN_02d6084c(Method_System_ValueTuple<WebOperation,_bool>__ctor__);
    FUN_02d6084c(Method_System_ValueTuple<EnumDataUtility_CachedType,_Type>__ctor__);
    FUN_02d6084c(Method_System_ValueTuple<OVRPlugin_Result,_string>__ctor__);
    FUN_02d6084c(Method_System_ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>__ctor__);
    FUN_02d6084c(Method_System_ValueTuple<RichTextTagParser_TagType,_string>__ctor__);
    FUN_02d6084c(Method_System_ValueTuple<EventModifiers,_Nullable<int>>__ctor__);
    DAT_06b834af = 1;
  }
  plVar12 = (long *)Method_System_ValueTuple<EventModifiers,_Nullable<int>>__ctor__;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  iVar13 = *param_1;
  if (iVar13 == 0) {
    local_c0 = *(undefined8 *)(param_1 + 0x24);
    iVar13 = -1;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    *param_1 = -1;
    goto LAB_05e25e44;
  }
  if (*(long *)(param_1 + 6) == 0) {
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar6 = thunk_FUN_02d9d534();
    uVar7 = thunk_FUN_02dc61f4(
                              Method_System_ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>__ctor__
                              );
    FUN_04f7d8e0(uVar6,uVar7,0);
    uVar7 = thunk_FUN_02dc61f4(
                              Method_System_ValueTuple<VisualEffectControlTrackController_Event,_int>__ctor__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar6,uVar7);
  }
  lVar4 = *(long *)Method_System_ValueTuple<EventModifiers,_Nullable<int>>__ctor__;
  plVar10 = *(long **)(param_1 + 10);
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *plVar12;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar4 = FUN_03375ce0(lVar4,*(undefined8 *)
                              Method_System_ValueTuple<OVRPlugin_Result,_string>__ctor__);
  plVar9 = (long *)(param_1 + 0x10);
  *plVar9 = lVar4;
  thunk_FUN_02dd37b4(plVar9);
  puVar3 = Method_System_ValueTuple<ulong,_ulong>__ctor__;
  if (0 < param_1[8]) {
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar14 = 0;
    lVar4 = 0;
    do {
      lVar11 = *(long *)(param_1 + 0x10);
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 6) + lVar14);
      uVar7 = ((undefined8 *)(*(long *)(param_1 + 6) + lVar14))[1];
      uVar5 = (**(code **)(*plVar10 + 0x248))
                        (plVar10,uVar6,uVar7,*(undefined8 *)(param_1 + 0xc),
                         *(undefined8 *)(*plVar10 + 0x250));
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_048ff1d8(lVar11,uVar6,uVar7,uVar5,*(undefined8 *)puVar3);
      lVar4 = lVar4 + 1;
      lVar14 = lVar14 + 0x10;
    } while (lVar4 < param_1[8]);
  }
  plVar12 = (long *)Method_System_ValueTuple<EventModifiers,_Nullable<int>>__ctor__;
  lVar4 = *(long *)Method_System_ValueTuple<EventModifiers,_Nullable<int>>__ctor__;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *plVar12;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x20);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar6 = FUN_03375ce0(lVar4,*(undefined8 *)
                              Method_System_ValueTuple<EnumDataUtility_CachedType,_Type>__ctor__);
  *(undefined8 *)(param_1 + 0x12) = uVar6;
  thunk_FUN_02dd37b4();
  if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_048ff64c(&local_120,*plVar9,
               *(undefined8 *)Method_System_ValueTuple<ValueOutput,_ValueInput[]>__ctor__);
  uStack_e8 = uStack_118;
  local_f0 = local_120;
  uStack_d8 = uStack_108;
  uStack_e0 = local_110;
  uStack_c8 = uStack_f8;
  local_d0 = local_100;
  *(undefined8 *)(param_1 + 0x1a) = uStack_108;
  *(undefined8 *)(param_1 + 0x18) = local_110;
  *(undefined8 *)(param_1 + 0x1e) = uStack_f8;
  *(undefined8 *)(param_1 + 0x1c) = local_100;
  *(undefined8 *)(param_1 + 0x16) = uStack_118;
  *(undefined8 *)(param_1 + 0x14) = local_120;
  thunk_FUN_02dd37b4(param_1 + 0x14,0);
  while( true ) {
    uVar8 = FUN_04b47698(param_1 + 0x14,
                         *(undefined8 *)Method_System_ValueTuple<Vector3,_float>__ctor__);
    if ((uVar8 & 1) == 0) {
      if (iVar13 < 0) {
        FUN_04b477cc(param_1 + 0x14,*(undefined8 *)Method_System_ValueTuple<Vector2,_bool>__ctor__);
      }
      plVar10 = (long *)(param_1 + 0x12);
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_03d3b0fc(&local_80,*(undefined4 *)(*plVar10 + 0x18),param_1[0xe],1,
                   *(undefined8 *)Method_System_ValueTuple<WebConnection,_bool>__ctor__);
      puVar3 = Method_System_ValueTuple<VolumeProfile,_VolumeComponent>__ctor__;
      lVar4 = *plVar10;
      if (lVar4 != 0) {
        lVar14 = 0;
        uVar8 = 0;
        do {
          if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar8) {
            plVar9 = (long *)(param_1 + 0x10);
            if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            FUN_048ff378(*plVar9,*(undefined8 *)
                                  Method_System_ValueTuple<ValueInput,_ValueOutput[]>__ctor__);
            lVar4 = *plVar12;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar4 = *plVar12;
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            FUN_03375db0(lVar4,*plVar9,
                         *(undefined8 *)
                          Method_System_ValueTuple<RichTextTagParser_TagType,_string>__ctor__);
            lVar4 = *plVar10;
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(undefined4 *)(lVar4 + 0x18) = 0;
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            lVar14 = *(long *)(*(long *)(*plVar12 + 0xb8) + 0x20);
            if (lVar14 != 0) {
              FUN_03375db0(lVar14,lVar4,
                           *(undefined8 *)
                            Method_System_ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>__ctor__
                          );
              uVar6 = uStack_78;
              lVar4 = local_80;
              *param_1 = -2;
              param_1[0x10] = 0;
              param_1[0x11] = 0;
              thunk_FUN_02dd37b4(plVar9,0);
              param_1[0x12] = 0;
              param_1[0x13] = 0;
              thunk_FUN_02dd37b4(plVar10,0);
              FUN_03df6b94(param_1 + 2,lVar4,uVar6,
                           *(undefined8 *)Method_System_ValueTuple<Type,_string>_CompareTo__);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          FUN_03b3be58(&local_138,lVar4,uVar8 & 0xffffffff,*(undefined8 *)puVar3);
          uStack_118 = uStack_130;
          local_120 = local_138;
          uVar8 = uVar8 + 1;
          puVar1 = (undefined8 *)(local_80 + lVar14);
          local_110 = local_128;
          puVar1[2] = local_128;
          puVar1[1] = uStack_130;
          *puVar1 = local_138;
          lVar4 = *plVar10;
          lVar14 = lVar14 + 0x18;
        } while (lVar4 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    local_90 = *(undefined8 *)(param_1 + 0x1c);
    uStack_98 = *(undefined8 *)(param_1 + 0x1a);
    local_a0 = *(undefined8 *)(param_1 + 0x18);
    FUN_0390e080(&local_a0,&local_b0,&local_b8,
                 *(undefined8 *)Method_System_ValueTuple<Vector4,_Vector2Int>__ctor__);
    *(undefined8 *)(param_1 + 0x22) = uStack_a8;
    *(undefined8 *)(param_1 + 0x20) = local_b0;
    if (local_b8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    local_c0 = FUN_03e03534(local_b8,*(undefined8 *)
                                      Method_System_ValueTuple<Type,_string>_GetHashCode__);
    uVar8 = FUN_03e0610c(&local_c0,*(undefined8 *)Method_System_ValueTuple<uint,_uint>__ctor__);
    if ((uVar8 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x24) = local_c0;
      thunk_FUN_02dd37b4(param_1 + 0x24,0);
      FUN_03056f08(param_1 + 2,&local_c0,param_1,
                   *(undefined8 *)Method_System_ValueTuple<Type,_string>__ctor__);
      return;
    }
LAB_05e25e44:
    uVar6 = FUN_03e06130(&local_c0,
                         *(undefined8 *)Method_System_ValueTuple<uint,_RenderTexture>__ctor__);
    lVar4 = *(long *)(param_1 + 0x12);
    uStack_118 = *(undefined8 *)(param_1 + 0x22);
    local_120 = *(undefined8 *)(param_1 + 0x20);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar14 = *(long *)(lVar4 + 0x10);
    lVar11 = *(long *)
              Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler_SwapchainCreateInfo<XrCompositionLayerCubeKHR>_op_Implicit__
    ;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    local_70 = local_120;
    uStack_68 = uStack_118;
    if (lVar14 == 0) break;
    uVar2 = *(uint *)(lVar4 + 0x18);
    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar2 + 1;
      lVar14 = lVar14 + (long)(int)uVar2 * 0x18;
      *(undefined8 *)(lVar14 + 0x20) = uVar6;
      *(undefined8 *)(lVar14 + 0x30) = uStack_118;
      *(undefined8 *)(lVar14 + 0x28) = local_120;
    }
    else {
      local_f0 = uVar6;
      uStack_e8 = local_120;
      uStack_e0 = uStack_118;
      FUN_03b3c1f4(lVar4,&local_f0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


