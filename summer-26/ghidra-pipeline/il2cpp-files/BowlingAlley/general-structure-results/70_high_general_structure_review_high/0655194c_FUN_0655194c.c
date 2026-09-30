/*
FUNCTION_NAME: FUN_0655194c
ENTRY_POINT: 0655194c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior
*/


void FUN_0655194c(long param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  int extraout_var;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
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
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_076dfb64 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_ARFoundation_ARTrackableManager<XRPointCloudSubsystem,_XRPointCloudSubsystemDescriptor,_XRPointCloudSubsystem_Provider,_XRPointCloud,_ARPointCloud>_get_trackables__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_ARFoundation_ARTrackableManager<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider,_BoundedPlane,_ARPlane>_get_trackables__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_get_Value__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_set_Value__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_BroadcastValue__
                      );
    thunk_FUN_032e1da0(Meta_WitAi_Json_WitResponseNode_<get_Childs>d__17_TypeInfo);
    thunk_FUN_032e1da0(
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_Subscribe__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<PokeStateData>_get_Value__
                      );
    thunk_FUN_032e1da0(System_Security_Util_Tokenizer_StringMaker_TypeInfo);
    thunk_FUN_032e1da0(Unity_Collections_LowLevel_Unsafe_WordStorage_<>c_TypeInfo);
    thunk_FUN_032e1da0(
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_SubscribeAndUpdate__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_set_Value__
                      );
    DAT_076dfb64 = 1;
  }
  puVar3 = PTR_DAT_072794f0;
  puVar1 = (undefined4 *)(param_1 + 0xa0);
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uVar5 = FUN_06552240(puVar1);
  if ((uVar5 & 1) != 0) {
    FUN_06554ccc(puVar1);
  }
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  puVar3 = 
  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<PokeStateData>_get_Value__;
  uVar5 = FUN_06bece64(uVar12,0,0);
  if ((uVar5 & 1) != 0) {
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar3;
    }
    if (*(int *)(*(long *)(lVar6 + 0xb8) + 0x18) < 1) {
      *puVar1 = 0;
      return;
    }
    uVar5 = 0;
    while( true ) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar3;
      }
      lVar10 = *(long *)(lVar6 + 0xb8);
      if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar5) {
        return;
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar10 = *(long *)(*(long *)puVar3 + 0xb8);
      }
      lVar6 = *(long *)(lVar10 + 0x20);
      if (lVar6 == 0) goto LAB_0655205c;
      if (*(uint *)(lVar6 + 0x18) <= uVar5) break;
      uVar4 = FUN_06554f3c(*(undefined8 *)(lVar6 + uVar5 * 8 + 0x20),*(undefined4 *)(param_1 + 0xa0)
                           ,0);
      *(undefined4 *)(param_1 + 0xa0) = uVar4;
      lVar6 = *(long *)puVar3;
      uVar5 = uVar5 + 1;
    }
LAB_06552060:
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_0655205c;
  FUN_064ad6d4(*(long *)(param_1 + 0x20),0);
  if (extraout_var < 1) {
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar6);
      lVar6 = *(long *)puVar3;
    }
    if (0 < *(int *)(*(long *)(lVar6 + 0xb8) + 0x18)) {
      uVar5 = 0;
      while( true ) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(lVar6);
          lVar6 = *(long *)puVar3;
        }
        lVar10 = *(long *)(lVar6 + 0xb8);
        if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar5) goto LAB_0655202c;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(lVar6);
          lVar10 = *(long *)(*(long *)puVar3 + 0xb8);
        }
        lVar6 = *(long *)(lVar10 + 0x20);
        if (lVar6 == 0) goto LAB_0655205c;
        if (*(uint *)(lVar6 + 0x18) <= uVar5) break;
        uVar4 = FUN_06554f3c(*(undefined8 *)(lVar6 + uVar5 * 8 + 0x20),
                             *(undefined4 *)(param_1 + 0xa0),0);
        *(undefined4 *)(param_1 + 0xa0) = uVar4;
        lVar6 = *(long *)puVar3;
        uVar5 = uVar5 + 1;
      }
      goto LAB_06552060;
    }
    FUN_065552d4(&local_120);
    puVar3 = 
    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_get_Value__;
    if (0 < (int)local_120) {
      iVar11 = 0;
      do {
        uVar12 = FUN_03d5bcd8(&local_120,iVar11,*(undefined8 *)puVar3);
        uVar5 = FUN_06555348(param_1,uVar12);
        if ((uVar5 & 1) != 0) {
          uVar4 = FUN_06554f3c(uVar12,*(undefined4 *)(param_1 + 0xa0),0);
          *(undefined4 *)(param_1 + 0xa0) = uVar4;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)local_120);
    }
    puVar7 = &local_120;
  }
  else {
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar3;
    }
    uVar5 = FUN_057ab1f0(*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x30),0);
    if ((uVar5 & 1) == 0) {
      lVar6 = *(long *)(param_1 + 0x20);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if (lVar6 == 0) goto LAB_0655205c;
      FUN_064aedb4(&local_60,lVar6,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30),0);
      uStack_78 = uStack_58;
      local_80 = local_60;
      uVar12 = local_80;
      uStack_68 = uStack_48;
      uStack_70 = local_50;
      local_80._0_1_ = (char)local_60;
      local_80 = uVar12;
      if ((char)local_80 != '\0') {
        FUN_04645b98(&local_60,&local_80,
                     *(undefined8 *)
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_Subscribe__
                    );
        puVar7 = &local_140;
        uStack_138 = uStack_58;
        local_140 = local_60;
        local_130 = local_50;
        goto LAB_06551c44;
      }
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar3;
      }
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x30);
      uVar12 = *(undefined8 *)
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_set_Value__
      ;
LAB_06551c94:
      uVar12 = FUN_057ab61c(uVar12,uVar8,uVar9,0);
      if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
      }
      FUN_06bb2b08(uVar12,param_1,0);
    }
    else {
      uVar5 = FUN_057ab1f0(*(undefined8 *)(param_1 + 0x60),0);
      if ((uVar5 & 1) == 0) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_0655205c;
        FUN_064aedb4(&local_60,*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x60),0);
        uStack_98 = uStack_58;
        local_a0 = local_60;
        uVar12 = local_a0;
        uStack_88 = uStack_48;
        uStack_90 = local_50;
        local_a0._0_1_ = (char)local_60;
        local_a0 = uVar12;
        if ((char)local_a0 == '\0') {
          uVar8 = *(undefined8 *)(param_1 + 0x60);
          uVar9 = *(undefined8 *)(param_1 + 0x20);
          uVar12 = *(undefined8 *)
                    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_SubscribeAndUpdate__
          ;
          goto LAB_06551c94;
        }
        FUN_04645b98(&local_60,&local_a0,
                     *(undefined8 *)
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_Subscribe__
                    );
        puVar7 = &local_160;
        uStack_158 = uStack_58;
        local_160 = local_60;
        local_150 = local_50;
LAB_06551c44:
        FUN_065550f8(param_1,puVar7);
      }
    }
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar3;
    }
    if (0 < *(int *)(*(long *)(lVar6 + 0xb8) + 0x18)) {
      uVar5 = FUN_06552240(puVar1);
      if ((uVar5 & 1) != 0) {
        FUN_065522e8(&local_60,puVar1);
        if ((char)local_60 != '\0') goto LAB_06551d10;
      }
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar3;
      }
      local_1a0 = 0;
      uStack_198 = 0;
      FUN_048100e4(&local_1a0,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x20),0,
                   *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x18),
                   *(undefined8 *)System_Security_Util_Tokenizer_StringMaker_TypeInfo);
      if (*(long *)(param_1 + 0x20) == 0) {
LAB_0655205c:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      auVar13 = FUN_064ad6d4(*(long *)(param_1 + 0x20),0);
      FUN_03a1ff0c(&local_60,local_1a0,uStack_198,auVar13._0_8_,auVar13._8_8_,0,1,
                   *(undefined8 *)
                    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_BroadcastValue__
                  );
      uStack_b8 = uStack_58;
      local_c0 = local_60;
      uVar12 = local_c0;
      uStack_a8 = uStack_48;
      uStack_b0 = local_50;
      local_c0._0_1_ = (char)local_60;
      bVar2 = (char)local_c0 != '\0';
      local_c0 = uVar12;
      if (bVar2) {
        FUN_04645b98(&local_60,&local_c0,
                     *(undefined8 *)
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_Subscribe__
                    );
        uStack_178 = uStack_58;
        local_180 = local_60;
        local_170 = local_50;
        FUN_065550f8(param_1,&local_180);
      }
      goto LAB_0655202c;
    }
LAB_06551d10:
    uVar5 = FUN_06552240(puVar1);
    if ((uVar5 & 1) != 0) {
      FUN_065522e8(&local_60,puVar1);
      if ((char)local_60 != '\0') goto LAB_0655202c;
    }
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar3;
    }
    uVar5 = FUN_057ab1f0(*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x30),0);
    if ((uVar5 & 1) == 0) goto LAB_0655202c;
    FUN_065552d4(&local_60);
    uStack_d8 = uStack_58;
    local_e0 = local_60;
    uStack_c8 = uStack_48;
    uStack_d0 = local_50;
    uStack_198 = uStack_58;
    local_1a0 = local_60;
    uStack_188 = uStack_48;
    uStack_190 = local_50;
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    auVar13 = FUN_064ad6d4(*(long *)(param_1 + 0x20),0);
    uStack_58 = uStack_198;
    local_60 = local_1a0;
    uStack_48 = uStack_188;
    local_50 = uStack_190;
    FUN_03a1fe04(&local_1c0,&local_60,auVar13._0_8_,auVar13._8_8_,0,0,
                 *(undefined8 *)
                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_set_Value__
                );
    uStack_f8 = uStack_1b8;
    local_100 = local_1c0;
    uVar12 = local_100;
    uStack_e8 = uStack_1a8;
    uStack_f0 = uStack_1b0;
    local_100._0_1_ = (char)local_1c0;
    bVar2 = (char)local_100 != '\0';
    local_100 = uVar12;
    if (bVar2) {
      FUN_04645b98(&local_60,&local_100,
                   *(undefined8 *)
                    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_Subscribe__
                  );
      uStack_1d8 = uStack_58;
      local_1e0 = local_60;
      local_1d0 = local_50;
      FUN_065550f8(param_1,&local_1e0);
    }
    puVar7 = &local_e0;
  }
  FUN_03d5d1ec(puVar7,*(undefined8 *)
                       Method_UnityEngine_XR_ARFoundation_ARTrackableManager<XRPointCloudSubsystem,_XRPointCloudSubsystemDescriptor,_XRPointCloudSubsystem_Provider,_XRPointCloud,_ARPointCloud>_get_trackables__
              );
LAB_0655202c:
  uVar5 = FUN_06552240(puVar1);
  if ((uVar5 & 1) != 0) {
    FUN_0655544c(puVar1,*(undefined8 *)(param_1 + 0x20));
  }
  return;
}


