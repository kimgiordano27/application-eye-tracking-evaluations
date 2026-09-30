/*
FUNCTION_NAME: FUN_06339c90
ENTRY_POINT: 06339c90
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_3;telemetry_or_network_hits_8
*/


void FUN_06339c90(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  long local_d0;
  long lStack_c8;
  long *local_c0;
  long *plStack_b8;
  long *local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  long *local_90;
  long *plStack_88;
  long *local_80;
  long *plStack_78;
  ulong local_70;
  
  if ((DAT_071cd1ea & 1) == 0) {
    FUN_02f07e70(System_Runtime_Serialization_OnDeserializingAttribute_var);
    FUN_02f07e70(OVRStorable_var);
    FUN_02f07e70(Newtonsoft_Json_Serialization_OnErrorAttribute_var);
    FUN_02f07e70(System_Runtime_Serialization_OnSerializedAttribute_var);
    FUN_02f07e70(System_Runtime_Serialization_OnSerializingAttribute_var);
    FUN_02f07e70(UnityEngine_InputSystem_Composites_OneModifierComposite_var);
    FUN_02f07e70(System_Runtime_Remoting_Messaging_OneWayAttribute_var);
    FUN_02f07e70(PlayFab_ClientModels_OpenTradeRequest_var);
    FUN_02f07e70(PlayFab_ClientModels_OpenTradeResponse_var);
    FUN_02f07e70(ExitGames_Client_Photon_OperationRequest_var);
    FUN_02f07e70(Fusion_NetworkBehaviourId_var);
    FUN_02f07e70(Meta_XR_MultiplayerBlocks_Shared_NetworkBootstrapperParams_var);
    FUN_02f07e70(ExitGames_Client_Photon_OperationResponse_var);
    FUN_02f07e70(Fusion_NetworkBufferSerializerInfo_var);
    FUN_02f07e70(Fusion_NetworkId_var);
    FUN_02f07e70(System_Runtime_InteropServices_OptionalAttribute_var);
    FUN_02f07e70(System_Runtime_Serialization_OptionalFieldAttribute_var);
    FUN_02f07e70(System_OrdinalComparer_var);
    FUN_02f07e70(System_Runtime_InteropServices_OutAttribute_var);
    FUN_02f07e70(PTR_DAT_06d09890);
    FUN_02f07e70(System_OutOfMemoryException_var);
    FUN_02f07e70(PTR_DAT_06d01e20);
    FUN_02f07e70(UnityEngine_UIElements_PanelEventHandler_var);
    FUN_02f07e70(UnityEngine_UIElements_PanelRaycaster_var);
    DAT_071cd1ea = 1;
  }
  puVar5 = Fusion_NetworkId_var;
  local_98[0] = 0;
  local_a0 = 0;
  plStack_b8 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_a8 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_d0 = 0;
  lStack_c8 = 0;
  FUN_062a6cd4(local_98,0,*(undefined8 *)(param_1 + 0x48),0);
  puVar2 = PTR_DAT_06d01e20;
  if (*(int *)(param_1 + 0x30) < 1) {
    lVar10 = *(long *)(param_1 + 0x60);
  }
  else {
    iVar15 = 0;
    do {
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar10 = FUN_03fd09cc(*(long *)(param_1 + 0x10),iVar15,*(undefined8 *)puVar5);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar17 = *(undefined8 *)(lVar10 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)puVar2);
      }
      uVar11 = FUN_066ca6a0(uVar17,0,0);
      if ((uVar11 & 1) != 0) {
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar10 = FUN_03fd09cc(*(long *)(param_1 + 0x10),iVar15,*(undefined8 *)puVar5);
        uVar17 = FUN_063385a0(param_1);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        *(undefined8 *)(lVar10 + 0x28) = uVar17;
        thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x28));
      }
      puVar6 = System_OutOfMemoryException_var;
      puVar4 = Meta_XR_MultiplayerBlocks_Shared_NetworkBootstrapperParams_var;
      puVar3 = Fusion_NetworkBehaviourId_var;
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(param_1 + 0x30));
    lVar10 = *(long *)(param_1 + 0x60);
    if (0 < *(int *)(param_1 + 0x30)) {
      iVar15 = 0;
      do {
        local_a0 = 0;
        plStack_b8 = (long *)0x0;
        local_c0 = (long *)0x0;
        local_a8 = (long *)0x0;
        local_b0 = (long *)0x0;
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        local_c0 = (long *)FUN_03fd09cc(*(long *)(param_1 + 0x10),iVar15,*(undefined8 *)puVar5);
        thunk_FUN_02f411dc(&local_c0);
        if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        plStack_b8 = (long *)FUN_03fd09cc(*(long *)(param_1 + 0x18),iVar15,
                                          *(undefined8 *)Fusion_NetworkBufferSerializerInfo_var);
        thunk_FUN_02f411dc((ulong)&local_c0 | 8);
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        local_b0 = (long *)FUN_03fd09cc(*(long *)(param_1 + 0x20),iVar15,*(undefined8 *)puVar3);
        thunk_FUN_02f411dc(&local_b0);
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        local_a8 = (long *)FUN_03fd09cc(*(long *)(param_1 + 0x28),iVar15,*(undefined8 *)puVar4);
        thunk_FUN_02f411dc(&local_a8);
        local_a0 = CONCAT44(local_a0._4_4_,iVar15);
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar12 = FUN_03fd09cc(*(long *)(param_1 + 0x10),iVar15,*(undefined8 *)puVar5);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        local_a0._0_5_ = CONCAT14(*(int *)(lVar12 + 0x10) != 0,(undefined4)local_a0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        plStack_88 = plStack_b8;
        local_90 = local_c0;
        plStack_78 = local_a8;
        local_80 = local_b0;
        local_70 = local_a0;
        FUN_040b21b8(lVar10,iVar15,&local_90,*(undefined8 *)puVar6);
        lVar10 = *(long *)(param_1 + 0x60);
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(param_1 + 0x30));
    }
  }
  puVar2 = UnityEngine_UIElements_PanelRaycaster_var;
  plVar19 = (long *)(param_1 + 0x60);
  lVar12 = *(long *)UnityEngine_UIElements_PanelRaycaster_var;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_02f12b58(lVar12);
    lVar12 = *(long *)puVar2;
  }
  lVar18 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
  if (lVar18 == 0) {
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_02f12b58(lVar12);
      lVar12 = *(long *)puVar2;
    }
    uVar17 = **(undefined8 **)(lVar12 + 0xb8);
    lVar18 = thunk_FUN_02ef1808(*(undefined8 *)
                                 System_Runtime_Serialization_OnDeserializingAttribute_var);
    FUN_04a6134c(lVar18,uVar17,*(undefined8 *)UnityEngine_UIElements_PanelEventHandler_var,0);
    plVar13 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar13 = lVar18;
    thunk_FUN_02f411dc(plVar13,lVar18);
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_040b43bc(lVar10,lVar18,*(undefined8 *)ExitGames_Client_Photon_OperationRequest_var);
  puVar2 = ExitGames_Client_Photon_OperationResponse_var;
  if (0 < *(int *)(param_1 + 0x30)) {
    iVar15 = 0;
    do {
      if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_040b2150(&local_90,*plVar19,iVar15,*(undefined8 *)puVar2);
      if (iVar15 != (int)local_70) {
LAB_0633a12c:
        if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_04c6b0ac(*(long *)(param_1 + 0x58),
                     *(undefined8 *)Newtonsoft_Json_Serialization_OnErrorAttribute_var);
        if (0 < *(int *)(param_1 + 0x30)) {
          iVar15 = 0;
          iVar16 = 0;
          do {
            if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            FUN_040b2150(&local_90,*plVar19,iVar16,*(undefined8 *)puVar2);
            uVar11 = local_70;
            plVar9 = plStack_78;
            plVar8 = local_80;
            plVar7 = plStack_88;
            plVar13 = local_90;
            if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            FUN_040b2150(&local_90,*plVar19,iVar16,*(undefined8 *)puVar2);
            if ((local_70 & 0x100000000) == 0) {
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lStack_c8 = plVar13[4];
              local_d0 = plVar13[3];
              FUN_0668943c(&local_d0,0);
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lStack_c8 = plVar7[4];
              local_d0 = plVar7[3];
              FUN_0668943c(&local_d0,0);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lStack_c8 = plVar8[4];
              local_d0 = plVar8[3];
              FUN_0668943c(&local_d0,0);
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lStack_c8 = plVar9[4];
              local_d0 = plVar9[3];
              FUN_0668943c(&local_d0,0);
              (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
              (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
              (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
              (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
              uVar17 = extraout_x1;
            }
            else {
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              FUN_03fd0a20(*(long *)(param_1 + 0x10),iVar16,plVar13,
                           *(undefined8 *)System_Runtime_Serialization_OptionalFieldAttribute_var);
              if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              FUN_03fd0a20(*(long *)(param_1 + 0x18),iVar16,plVar7,
                           *(undefined8 *)System_Runtime_InteropServices_OutAttribute_var);
              if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              FUN_03fd0a20(*(long *)(param_1 + 0x20),iVar16,plVar8,
                           *(undefined8 *)System_OrdinalComparer_var);
              if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              FUN_03fd0a20(*(long *)(param_1 + 0x28),iVar16,plVar9,
                           *(undefined8 *)System_Runtime_InteropServices_OptionalAttribute_var);
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar12 = *(long *)(param_1 + 0x58);
              lVar10 = FUN_03fd09cc(*(long *)(param_1 + 0x10),iVar16,*(undefined8 *)puVar5);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar14 = FUN_04c6b118(lVar12,*(undefined8 *)(lVar10 + 0x28),
                                    *(undefined8 *)
                                     System_Runtime_Serialization_OnSerializedAttribute_var);
              if ((uVar14 & 1) == 0) {
                if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f080c0();
                }
                lVar12 = *(long *)(param_1 + 0x58);
                lVar10 = FUN_03fd09cc(*(long *)(param_1 + 0x10),iVar16,*(undefined8 *)puVar5);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f080c0();
                }
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f080c0();
                }
                FUN_04c6af24(lVar12,*(undefined8 *)(lVar10 + 0x28),iVar16,
                             *(undefined8 *)OVRStorable_var);
              }
              if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              FUN_03f837e4(*(long *)(param_1 + 0x68),uVar11 & 0xffffffff,iVar16,
                           *(undefined8 *)PTR_DAT_06d09890);
              iVar15 = iVar15 + 1;
              uVar17 = extraout_x1_00;
            }
            iVar1 = *(int *)(param_1 + 0x30);
            iVar16 = iVar16 + 1;
          } while (iVar16 < iVar1);
          iVar16 = iVar1 - iVar15;
          if (iVar16 != 0 && iVar15 <= iVar1) {
            if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0(0,uVar17,iVar16);
            }
            FUN_03fd2470(*(long *)(param_1 + 0x10),iVar15,iVar16,
                         *(undefined8 *)PlayFab_ClientModels_OpenTradeResponse_var);
            if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            FUN_03fd2470(*(long *)(param_1 + 0x18),iVar15,*(int *)(param_1 + 0x30) - iVar15,
                         *(undefined8 *)System_Runtime_Serialization_OnSerializingAttribute_var);
            if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            FUN_03fd2470(*(long *)(param_1 + 0x20),iVar15,*(int *)(param_1 + 0x30) - iVar15,
                         *(undefined8 *)UnityEngine_InputSystem_Composites_OneModifierComposite_var)
            ;
            if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            FUN_03fd2470(*(long *)(param_1 + 0x28),iVar15,*(int *)(param_1 + 0x30) - iVar15,
                         *(undefined8 *)System_Runtime_Remoting_Messaging_OneWayAttribute_var);
            if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            FUN_040b4164(*plVar19,iVar15,*(int *)(param_1 + 0x30) - iVar15,
                         *(undefined8 *)PlayFab_ClientModels_OpenTradeRequest_var);
            *(int *)(param_1 + 0x30) = iVar15;
          }
        }
        if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        UnityEngine_Timeline_TimelineHelpURLAttribute___ctor
                  (*(long *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x68));
        break;
      }
      if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_040b2150(&local_90,*plVar19,iVar15,*(undefined8 *)puVar2);
      if ((local_70 & 0x100000000) == 0) goto LAB_0633a12c;
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(param_1 + 0x30));
  }
  FUN_062a6cd8(local_98,0);
  return;
}


