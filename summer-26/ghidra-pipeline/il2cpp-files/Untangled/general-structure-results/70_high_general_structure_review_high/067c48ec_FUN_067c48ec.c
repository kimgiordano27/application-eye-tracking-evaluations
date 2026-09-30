/*
FUNCTION_NAME: FUN_067c48ec
ENTRY_POINT: 067c48ec
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_12;ray_or_cast_sink_hits_11;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


long FUN_067c48ec(void)

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
  
  puVar4 = UnityEngine_XR_ARSubsystems_XRRaycast_TypeInfo;
  puVar3 = UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_TypeInfo;
  if ((DAT_071d649b & 1) == 0) {
    FUN_02f07e70(UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_ARSubsystems_XRRaycastHit_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_ARSubsystems_XRReferenceImage_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_ARSubsystems_XRReferenceImageLibrary_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_ARSubsystems_XRReferenceObject_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_ARSubsystems_XRSessionSubsystem_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_ARSubsystems_XRSessionUpdateParams_TypeInfo);
    FUN_02f07e70(UnityEngine_Experimental_Rendering_XRSystem_TypeInfo);
    FUN_02f07e70(UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_ARSubsystems_XRRaycast_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_ARSubsystems_XRTextureDescriptor_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystemDescriptor_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d41778);
    FUN_02f07e70(UnityEngine_Experimental_Rendering_XROcclusionMesh_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d4a9f8);
    FUN_02f07e70(UnityEngine_Rendering_Universal_XROcclusionMeshPass_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d493f0);
    FUN_02f07e70(PTR_DAT_06d079f0);
    FUN_02f07e70(UnityEngine_XR_ARSubsystems_XROcclusionSubsystemCinfo_TypeInfo);
    DAT_071d649b = 1;
  }
  puVar2 = UnityEngine_XR_ARSubsystems_XROcclusionSubsystemCinfo_TypeInfo;
  puVar1 = PTR_DAT_06d079f0;
  lVar5 = FUN_02f07f14(*(undefined8 *)puVar3,4);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02f12b58(lVar7);
    lVar7 = *(long *)puVar4;
  }
  uVar8 = *(undefined8 *)puVar2;
  uVar9 = *(undefined8 *)puVar1;
  lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar10 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02f12b58(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                 UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_TypeInfo);
    FUN_05166f84(lVar10,uVar11,*(undefined8 *)UnityEngine_XR_ARSubsystems_XRReferenceImage_TypeInfo,
                 0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar6 = lVar10;
    thunk_FUN_02f411dc(plVar6,lVar10);
    lVar7 = *(long *)puVar4;
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02f12b58(lVar7);
    lVar7 = *(long *)puVar4;
  }
  puVar3 = UnityEngine_XR_ARSubsystems_XRRaycastHit_TypeInfo;
  lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar12 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02f12b58(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar12 = thunk_FUN_02ef1808(*(undefined8 *)
                                 UnityEngine_XR_ARSubsystems_XRTextureDescriptor_TypeInfo);
    FUN_049f181c(lVar12,uVar11,
                 *(undefined8 *)UnityEngine_XR_ARSubsystems_XRReferenceImageLibrary_TypeInfo,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    *plVar6 = lVar12;
    thunk_FUN_02f411dc(plVar6,lVar12);
  }
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_0508f520(&local_70,uVar9,uVar8,lVar10,lVar12,*(undefined8 *)puVar3);
  puVar2 = UnityEngine_Rendering_Universal_XROcclusionMeshPass_TypeInfo;
  puVar1 = PTR_DAT_06d493f0;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (*(int *)(lVar5 + 0x18) != 0) {
    *(undefined8 *)(lVar5 + 0x28) = uStack_68;
    *(undefined8 *)(lVar5 + 0x20) = local_70;
    *(undefined8 *)(lVar5 + 0x38) = uStack_58;
    *(undefined8 *)(lVar5 + 0x30) = uStack_60;
    thunk_FUN_02f411dc(lVar5 + 0x20,0);
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar7 = *(long *)puVar4;
    }
    uVar8 = *(undefined8 *)puVar2;
    uVar9 = *(undefined8 *)puVar1;
    lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
    if (lVar10 == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar7 = *(long *)puVar4;
      }
      uVar11 = **(undefined8 **)(lVar7 + 0xb8);
      lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                   UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_TypeInfo
                                 );
      FUN_05166f84(lVar10,uVar11,
                   *(undefined8 *)UnityEngine_XR_ARSubsystems_XRReferenceObject_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
      *plVar6 = lVar10;
      thunk_FUN_02f411dc(plVar6,lVar10);
      lVar7 = *(long *)puVar4;
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar7 = *(long *)puVar4;
    }
    lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
    if (lVar12 == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar7 = *(long *)puVar4;
      }
      uVar11 = **(undefined8 **)(lVar7 + 0xb8);
      lVar12 = thunk_FUN_02ef1808(*(undefined8 *)
                                   UnityEngine_XR_ARSubsystems_XRTextureDescriptor_TypeInfo);
      FUN_049f181c(lVar12,uVar11,
                   *(undefined8 *)UnityEngine_XR_ARSubsystems_XRSessionSubsystem_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
      *plVar6 = lVar12;
      thunk_FUN_02f411dc(plVar6,lVar12);
    }
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    FUN_0508f520(&local_70,uVar9,uVar8,lVar10,lVar12,*(undefined8 *)puVar3);
    puVar2 = UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystemDescriptor_TypeInfo;
    puVar1 = PTR_DAT_06d41778;
    if (1 < *(uint *)(lVar5 + 0x18)) {
      *(undefined8 *)(lVar5 + 0x48) = uStack_68;
      *(undefined8 *)(lVar5 + 0x40) = local_70;
      *(undefined8 *)(lVar5 + 0x58) = uStack_58;
      *(undefined8 *)(lVar5 + 0x50) = uStack_60;
      thunk_FUN_02f411dc(lVar5 + 0x40,0);
      lVar7 = *(long *)puVar4;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar7 = *(long *)puVar4;
      }
      uVar8 = *(undefined8 *)puVar2;
      uVar9 = *(undefined8 *)puVar1;
      lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x28);
      if (lVar10 == 0) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar7 = *(long *)puVar4;
        }
        uVar11 = **(undefined8 **)(lVar7 + 0xb8);
        lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                     UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_TypeInfo
                                   );
        FUN_05166f84(lVar10,uVar11,
                     *(undefined8 *)
                      UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_TypeInfo,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
        *plVar6 = lVar10;
        thunk_FUN_02f411dc(plVar6,lVar10);
        lVar7 = *(long *)puVar4;
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar7 = *(long *)puVar4;
      }
      lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
      if (lVar12 == 0) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar7 = *(long *)puVar4;
        }
        uVar11 = **(undefined8 **)(lVar7 + 0xb8);
        lVar12 = thunk_FUN_02ef1808(*(undefined8 *)
                                     UnityEngine_XR_ARSubsystems_XRTextureDescriptor_TypeInfo);
        FUN_049f181c(lVar12,uVar11,
                     *(undefined8 *)UnityEngine_XR_ARSubsystems_XRSessionUpdateParams_TypeInfo,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
        *plVar6 = lVar12;
        thunk_FUN_02f411dc(plVar6,lVar12);
      }
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      FUN_0508f520(&local_70,uVar9,uVar8,lVar10,lVar12,*(undefined8 *)puVar3);
      puVar2 = UnityEngine_Experimental_Rendering_XROcclusionMesh_TypeInfo;
      puVar1 = PTR_DAT_06d4a9f8;
      if (2 < *(uint *)(lVar5 + 0x18)) {
        *(undefined8 *)(lVar5 + 0x68) = uStack_68;
        *(undefined8 *)(lVar5 + 0x60) = local_70;
        *(undefined8 *)(lVar5 + 0x78) = uStack_58;
        *(undefined8 *)(lVar5 + 0x70) = uStack_60;
        thunk_FUN_02f411dc(lVar5 + 0x60,0);
        lVar7 = *(long *)puVar4;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar7 = *(long *)puVar4;
        }
        uVar8 = *(undefined8 *)puVar2;
        uVar9 = *(undefined8 *)puVar1;
        lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x38);
        if (lVar10 == 0) {
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
            lVar7 = *(long *)puVar4;
          }
          uVar11 = **(undefined8 **)(lVar7 + 0xb8);
          lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                       UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_TypeInfo
                                     );
          FUN_05166f84(lVar10,uVar11,
                       *(undefined8 *)UnityEngine_Experimental_Rendering_XRSystem_TypeInfo,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
          *plVar6 = lVar10;
          thunk_FUN_02f411dc(plVar6,lVar10);
          lVar7 = *(long *)puVar4;
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar7 = *(long *)puVar4;
        }
        lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x40);
        if (lVar12 == 0) {
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
            lVar7 = *(long *)puVar4;
          }
          uVar11 = **(undefined8 **)(lVar7 + 0xb8);
          lVar12 = thunk_FUN_02ef1808(*(undefined8 *)
                                       UnityEngine_XR_ARSubsystems_XRTextureDescriptor_TypeInfo);
          FUN_049f181c(lVar12,uVar11,
                       *(undefined8 *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
          *plVar6 = lVar12;
          thunk_FUN_02f411dc(plVar6,lVar12);
        }
        uStack_68 = 0;
        local_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        FUN_0508f520(&local_70,uVar9,uVar8,lVar10,lVar12,*(undefined8 *)puVar3);
        if (3 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x88) = uStack_68;
          *(undefined8 *)(lVar5 + 0x80) = local_70;
          *(undefined8 *)(lVar5 + 0x98) = uStack_58;
          *(undefined8 *)(lVar5 + 0x90) = uStack_60;
          thunk_FUN_02f411dc(lVar5 + 0x80,0);
          return lVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


