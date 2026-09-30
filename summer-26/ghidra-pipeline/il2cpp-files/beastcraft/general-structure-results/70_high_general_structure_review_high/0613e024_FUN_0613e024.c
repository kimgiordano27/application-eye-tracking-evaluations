/*
FUNCTION_NAME: FUN_0613e024
ENTRY_POINT: 0613e024
PROGRAM: beastcraft-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0613e42c) */
/* WARNING: Removing unreachable block (ram,0x0613e430) */
/* WARNING: Removing unreachable block (ram,0x0613e4c4) */
/* WARNING: Removing unreachable block (ram,0x0613e490) */
/* WARNING: Removing unreachable block (ram,0x0613e554) */

void FUN_0613e024(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  if ((bRam0000000006e95666 & 1) == 0) {
    FUN_02e3ca1c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder_TypeInfo);
    FUN_02e3ca1c(Cysharp_Threading_Tasks_AsyncUnit_TypeInfo);
    FUN_02e3ca1c(Mono_Net_Security_AsyncWriteRequest_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Rendering_AtlasAllocator_TypeInfo);
    FUN_02e3ca1c(UnityEngine_ResourceManagement_ResourceProviders_AtlasSpriteProvider_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_Attachment_AttachPointVelocityTracker_TypeInfo);
    FUN_02e3ca1c(UnityEngine_UIElements_AttachToPanelEvent_TypeInfo);
    FUN_02e3ca1c(
                UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<FlexDirection>,_FlexDirection>_TypeInfo
                );
    FUN_02e3ca1c(UnityEngine_Rendering_AttachmentDescriptor_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Rendering_AttachmentIndexArray_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a2ed80);
    bRam0000000006e95666 = 1;
  }
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  uStack_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  lStack_90 = 0;
  FUN_0613e5b8(param_1);
  FUN_0613dcec(param_1);
  puVar7 = UnityEngine_Rendering_AttachmentDescriptor_TypeInfo;
  puVar5 = UnityEngine_Rendering_AtlasAllocator_TypeInfo;
  puVar3 = Cysharp_Threading_Tasks_AsyncUnit_TypeInfo;
  puVar2 = 
  UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<FlexDirection>,_FlexDirection>_TypeInfo;
  puVar1 = PTR_DAT_06a2ed80;
  if (*(long *)(param_1 + 0x80) != 0) {
    iVar8 = FUN_04b1fa68(*(long *)(param_1 + 0x80),
                         *(undefined8 *)
                          System_Runtime_CompilerServices_AsyncTaskMethodBuilder_TypeInfo);
    if (iVar8 < 1) {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_0613e4cc;
      FUN_03f2c008(&uStack_b8,*(long *)(param_1 + 0x50),*(undefined8 *)puVar7);
      lStack_70 = lStack_a8;
      puStack_78 = puStack_b0;
      uStack_80 = uStack_b8;
      uStack_b8 = 0;
      puStack_b0 = &uStack_80;
      while (uVar9 = FUN_04fc1198(&uStack_80,*(undefined8 *)puVar5), lVar10 = lStack_70,
            (uVar9 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar9 = FUN_06267b6c(lVar10,0,0);
        if (((uVar9 & 1) != 0) &&
           (lVar10 = thunk_FUN_02e789bc(lVar10,*(undefined8 *)puVar2), lVar10 != 0)) {
          FUN_0613e868(param_1);
        }
      }
    }
    else {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_0613e4cc;
      FUN_03f2c008(&uStack_b8,*(long *)(param_1 + 0x50),*(undefined8 *)puVar7);
      lStack_70 = lStack_a8;
      puStack_78 = puStack_b0;
      uStack_80 = uStack_b8;
      uStack_b8 = 0;
      iVar8 = 0;
      puStack_b0 = &uStack_80;
      while (uVar9 = FUN_04fc1198(&uStack_80,*(undefined8 *)puVar5), lVar10 = lStack_70,
            (uVar9 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar9 = FUN_06267b6c(lVar10,0,0);
        if (((uVar9 & 1) != 0) &&
           (lVar10 = thunk_FUN_02e789bc(lVar10,*(undefined8 *)puVar2), lVar10 != 0)) {
          FUN_0613e678(param_1,lVar10,iVar8);
          iVar8 = iVar8 + 1;
        }
      }
    }
    FUN_04fc1194(&uStack_80,*(undefined8 *)puVar3);
    puVar13 = (undefined8 *)(param_1 + 0x30);
    uVar9 = FUN_0548ca34(*puVar13,0);
    if ((uVar9 & 1) != 0) {
      lVar10 = FUN_06264e10(param_1,0);
      if (lVar10 == 0) goto LAB_0613e4cc;
      uVar11 = thunk_FUN_0626d4fc(lVar10,0);
      *puVar13 = uVar11;
      thunk_FUN_02ee2be8(puVar13,uVar11);
    }
    FUN_0613ddec(param_1);
    puVar6 = UnityEngine_ResourceManagement_ResourceProviders_AtlasSpriteProvider_TypeInfo;
    puVar4 = Mono_Net_Security_AsyncWriteRequest_TypeInfo;
    if (*(long *)(param_1 + 0x58) != 0) {
      FUN_03f2c008(&uStack_b8,*(long *)(param_1 + 0x58),
                   *(undefined8 *)UnityEngine_Rendering_AttachmentIndexArray_TypeInfo);
      lStack_90 = lStack_a8;
      puStack_98 = puStack_b0;
      uStack_a0 = uStack_b8;
      while( true ) {
        uVar9 = FUN_04fc1198(&uStack_a0,*(undefined8 *)puVar6);
        lVar10 = lStack_90;
        if ((uVar9 & 1) == 0) {
          FUN_04fc1194(&uStack_a0,*(undefined8 *)puVar4);
          *(undefined1 *)(param_1 + 0x78) = 1;
          return;
        }
        if (lStack_90 == 0) break;
        uVar11 = *(undefined8 *)(lStack_90 + 0x10);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar9 = FUN_062696b0(uVar11,0,0);
        if (((uVar9 & 1) == 0) &&
           (lVar12 = thunk_FUN_02e789bc(uVar11,*(undefined8 *)puVar2), lVar12 != 0)) {
          if (*(long *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          FUN_03f2c008(&uStack_b8,*(long *)(lVar10 + 0x18),*(undefined8 *)puVar7);
          uStack_80 = uStack_b8;
          uStack_b8 = 0;
          puStack_78 = puStack_b0;
          lStack_70 = lStack_a8;
          puStack_b0 = &uStack_80;
          while (uVar9 = FUN_04fc1198(&uStack_80,*(undefined8 *)puVar5), lVar10 = lStack_70,
                (uVar9 & 1) != 0) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar9 = FUN_06267b6c(lVar10,0,0);
            if (((uVar9 & 1) != 0) &&
               (lVar10 = thunk_FUN_02e789bc(lVar10,*(undefined8 *)puVar2), lVar10 != 0)) {
              FUN_0613e9a4(param_1,lVar12,lVar10);
            }
          }
          FUN_04fc1194(&uStack_80,*(undefined8 *)puVar3);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
  }
LAB_0613e4cc:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


