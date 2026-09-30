/*
FUNCTION_NAME: FUN_0708748c
ENTRY_POINT: 0708748c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;eye_or_gaze_keyword_boost_only
*/


long FUN_0708748c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = OVR_OpenVR_IVRCompositor__SubmitExplicitTimingData_TypeInfo;
  puVar2 = OVR_OpenVR_IVRCompositor__Submit_TypeInfo;
  if ((DAT_07a5a6d6 & 1) == 0) {
    FUN_031f20f4(OVR_OpenVR_IVRCompositor__Submit_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRCompositor__SuspendRendering_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRCompositor__UnlockGLSharedTextureForAccess_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRCompositor__WaitGetPoses_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRDriverManager__GetDriverCount_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRDriverManager__GetDriverHandle_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRDriverManager__GetDriverName_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRExtendedDisplay__GetDXGIOutputInfo_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRExtendedDisplay__GetEyeOutputViewport_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRExtendedDisplay__GetWindowBounds_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRIOBuffer__Close_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRCompositor__SubmitExplicitTimingData_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRIOBuffer__Open_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRIOBuffer__PropertyContainer_TypeInfo);
    FUN_031f20f4(PTR_DAT_07624788);
    FUN_031f20f4(OVR_OpenVR_IVRIOBuffer__Read_TypeInfo);
    FUN_031f20f4(PTR_DAT_075e4f40);
    FUN_031f20f4(OVR_OpenVR_IVRIOBuffer__Write_TypeInfo);
    FUN_031f20f4(PTR_DAT_075e3f58);
    FUN_031f20f4(PTR_DAT_075a6250);
    FUN_031f20f4(OVR_OpenVR_IVRInput__DecompressSkeletalBoneData_TypeInfo);
    DAT_07a5a6d6 = 1;
  }
  puVar4 = OVR_OpenVR_IVRInput__DecompressSkeletalBoneData_TypeInfo;
  puVar1 = PTR_DAT_075a6250;
  lVar5 = FUN_031f21dc(*(undefined8 *)puVar2,4);
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar3;
  }
  uVar8 = *(undefined8 *)puVar4;
  uVar9 = *(undefined8 *)puVar1;
  lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar10 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar3;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar10 = thunk_FUN_0322f148(*(undefined8 *)
                                 OVR_OpenVR_IVRCompositor__UnlockGLSharedTextureForAccess_TypeInfo);
    System_Collections_Generic_HashSet<uint>__InternalGetHashCode
              (lVar10,uVar11,*(undefined8 *)OVR_OpenVR_IVRCompositor__WaitGetPoses_TypeInfo,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar6 = lVar10;
    thunk_FUN_0329bf60(plVar6,lVar10);
    lVar7 = *(long *)puVar3;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
    lVar7 = *(long *)puVar3;
  }
  puVar2 = OVR_OpenVR_IVRCompositor__SuspendRendering_TypeInfo;
  lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar12 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar3;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar12 = thunk_FUN_0322f148(*(undefined8 *)OVR_OpenVR_IVRIOBuffer__Open_TypeInfo);
    FUN_05426a5c(lVar12,uVar11,*(undefined8 *)OVR_OpenVR_IVRDriverManager__GetDriverCount_TypeInfo,0
                );
    plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
    *plVar6 = lVar12;
    thunk_FUN_0329bf60(plVar6,lVar12);
  }
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_042a0d70(&local_70,uVar9,uVar8,lVar10,lVar12,*(undefined8 *)puVar2);
  puVar4 = OVR_OpenVR_IVRIOBuffer__Write_TypeInfo;
  puVar1 = PTR_DAT_075e3f58;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if (*(int *)(lVar5 + 0x18) != 0) {
    *(undefined8 *)(lVar5 + 0x28) = uStack_68;
    *(undefined8 *)(lVar5 + 0x20) = local_70;
    *(undefined8 *)(lVar5 + 0x38) = uStack_58;
    *(undefined8 *)(lVar5 + 0x30) = uStack_60;
    thunk_FUN_0329bf60(lVar5 + 0x20,0);
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar7 = *(long *)puVar3;
    }
    uVar8 = *(undefined8 *)puVar4;
    uVar9 = *(undefined8 *)puVar1;
    lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
    if (lVar10 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar7 = *(long *)puVar3;
      }
      uVar11 = **(undefined8 **)(lVar7 + 0xb8);
      lVar10 = thunk_FUN_0322f148(*(undefined8 *)
                                   OVR_OpenVR_IVRCompositor__UnlockGLSharedTextureForAccess_TypeInfo
                                 );
      System_Collections_Generic_HashSet<uint>__InternalGetHashCode
                (lVar10,uVar11,*(undefined8 *)OVR_OpenVR_IVRDriverManager__GetDriverHandle_TypeInfo,
                 0);
      plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
      *plVar6 = lVar10;
      thunk_FUN_0329bf60(plVar6,lVar10);
      lVar7 = *(long *)puVar3;
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar7 = *(long *)puVar3;
    }
    lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
    if (lVar12 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar7 = *(long *)puVar3;
      }
      uVar11 = **(undefined8 **)(lVar7 + 0xb8);
      lVar12 = thunk_FUN_0322f148(*(undefined8 *)OVR_OpenVR_IVRIOBuffer__Open_TypeInfo);
      FUN_05426a5c(lVar12,uVar11,*(undefined8 *)OVR_OpenVR_IVRDriverManager__GetDriverName_TypeInfo,
                   0);
      plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
      *plVar6 = lVar12;
      thunk_FUN_0329bf60(plVar6,lVar12);
    }
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    FUN_042a0d70(&local_70,uVar9,uVar8,lVar10,lVar12,*(undefined8 *)puVar2);
    puVar4 = OVR_OpenVR_IVRIOBuffer__PropertyContainer_TypeInfo;
    puVar1 = PTR_DAT_07624788;
    if (1 < *(uint *)(lVar5 + 0x18)) {
      *(undefined8 *)(lVar5 + 0x48) = uStack_68;
      *(undefined8 *)(lVar5 + 0x40) = local_70;
      *(undefined8 *)(lVar5 + 0x58) = uStack_58;
      *(undefined8 *)(lVar5 + 0x50) = uStack_60;
      thunk_FUN_0329bf60(lVar5 + 0x40,0);
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar7 = *(long *)puVar3;
      }
      uVar8 = *(undefined8 *)puVar4;
      uVar9 = *(undefined8 *)puVar1;
      lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x28);
      if (lVar10 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar7 = *(long *)puVar3;
        }
        uVar11 = **(undefined8 **)(lVar7 + 0xb8);
        lVar10 = thunk_FUN_0322f148(*(undefined8 *)
                                     OVR_OpenVR_IVRCompositor__UnlockGLSharedTextureForAccess_TypeInfo
                                   );
        System_Collections_Generic_HashSet<uint>__InternalGetHashCode
                  (lVar10,uVar11,
                   *(undefined8 *)OVR_OpenVR_IVRExtendedDisplay__GetDXGIOutputInfo_TypeInfo,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
        *plVar6 = lVar10;
        thunk_FUN_0329bf60(plVar6,lVar10);
        lVar7 = *(long *)puVar3;
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar7 = *(long *)puVar3;
      }
      lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
      if (lVar12 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar7 = *(long *)puVar3;
        }
        uVar11 = **(undefined8 **)(lVar7 + 0xb8);
        lVar12 = thunk_FUN_0322f148(*(undefined8 *)OVR_OpenVR_IVRIOBuffer__Open_TypeInfo);
        FUN_05426a5c(lVar12,uVar11,
                     *(undefined8 *)OVR_OpenVR_IVRExtendedDisplay__GetEyeOutputViewport_TypeInfo,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
        *plVar6 = lVar12;
        thunk_FUN_0329bf60(plVar6,lVar12);
      }
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      FUN_042a0d70(&local_70,uVar9,uVar8,lVar10,lVar12,*(undefined8 *)puVar2);
      puVar4 = OVR_OpenVR_IVRIOBuffer__Read_TypeInfo;
      puVar1 = PTR_DAT_075e4f40;
      if (2 < *(uint *)(lVar5 + 0x18)) {
        *(undefined8 *)(lVar5 + 0x68) = uStack_68;
        *(undefined8 *)(lVar5 + 0x60) = local_70;
        *(undefined8 *)(lVar5 + 0x78) = uStack_58;
        *(undefined8 *)(lVar5 + 0x70) = uStack_60;
        thunk_FUN_0329bf60(lVar5 + 0x60,0);
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar7 = *(long *)puVar3;
        }
        uVar8 = *(undefined8 *)puVar4;
        uVar9 = *(undefined8 *)puVar1;
        lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x38);
        if (lVar10 == 0) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar7 = *(long *)puVar3;
          }
          uVar11 = **(undefined8 **)(lVar7 + 0xb8);
          lVar10 = thunk_FUN_0322f148(*(undefined8 *)
                                       OVR_OpenVR_IVRCompositor__UnlockGLSharedTextureForAccess_TypeInfo
                                     );
          System_Collections_Generic_HashSet<uint>__InternalGetHashCode
                    (lVar10,uVar11,
                     *(undefined8 *)OVR_OpenVR_IVRExtendedDisplay__GetWindowBounds_TypeInfo,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38);
          *plVar6 = lVar10;
          thunk_FUN_0329bf60(plVar6,lVar10);
          lVar7 = *(long *)puVar3;
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar7 = *(long *)puVar3;
        }
        lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x40);
        if (lVar12 == 0) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar7 = *(long *)puVar3;
          }
          uVar11 = **(undefined8 **)(lVar7 + 0xb8);
          lVar12 = thunk_FUN_0322f148(*(undefined8 *)OVR_OpenVR_IVRIOBuffer__Open_TypeInfo);
          FUN_05426a5c(lVar12,uVar11,*(undefined8 *)OVR_OpenVR_IVRIOBuffer__Close_TypeInfo,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40);
          *plVar6 = lVar12;
          thunk_FUN_0329bf60(plVar6,lVar12);
        }
        uStack_68 = 0;
        local_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        FUN_042a0d70(&local_70,uVar9,uVar8,lVar10,lVar12,*(undefined8 *)puVar2);
        if (3 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x88) = uStack_68;
          *(undefined8 *)(lVar5 + 0x80) = local_70;
          *(undefined8 *)(lVar5 + 0x98) = uStack_58;
          *(undefined8 *)(lVar5 + 0x90) = uStack_60;
          thunk_FUN_0329bf60(lVar5 + 0x80,0);
          return lVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


