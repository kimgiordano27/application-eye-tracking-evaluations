/*
FUNCTION_NAME: FUN_0546e24c
ENTRY_POINT: 0546e24c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0546e62c) */
/* WARNING: Removing unreachable block (ram,0x0546e66c) */
/* WARNING: Removing unreachable block (ram,0x0546e79c) */
/* WARNING: Removing unreachable block (ram,0x0546e74c) */
/* WARNING: Removing unreachable block (ram,0x0546e770) */
/* WARNING: Removing unreachable block (ram,0x0546e7c0) */
/* WARNING: Removing unreachable block (ram,0x0546e80c) */

void FUN_0546e24c(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong local_120;
  undefined1 *puStack_118;
  long local_110;
  long *local_108;
  long local_100;
  long *local_f8;
  ulong local_f0;
  long *local_e8;
  ulong local_e0;
  undefined1 *local_d8;
  long local_d0;
  long *local_c8;
  long local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined1 local_8c [4];
  long local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 uStack_60;
  undefined1 local_54 [4];
  undefined1 local_50 [16];
  long local_38;
  
  local_38 = param_1;
  if ((DAT_06bbef4c & 1) == 0) {
    FUN_02f08768(PTR_DAT_067d2ed0);
    FUN_02f08768(Unity_XR_CoreUtils_XROrigin_TypeInfo);
    FUN_02f08768(UnityEngine_XR_Interaction_Toolkit_Locomotion_XROriginMovement_TypeInfo);
    FUN_02f08768(PTR_DAT_067d2ed8);
    FUN_02f08768(PTR_DAT_067cc4c8);
    FUN_02f08768(UnityEngine_TextCore_Text_TextElementType_TypeInfo);
    FUN_02f08768(PTR_DAT_067d2ee0);
    FUN_02f08768(PTR_DAT_067ceeb0);
    FUN_02f08768(System_Xml_TextEncodedRawTextWriter_TypeInfo);
    FUN_02f08768(Oculus_Platform_MessageWithLaunchUnblockFlowResult_TypeInfo);
    FUN_02f08768(PTR_DAT_067cc4d0);
    FUN_02f08768(UnityEngine_XR_Management_XRManagementAnalytics_TypeInfo);
    FUN_02f08768(UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator_TypeInfo);
    FUN_02f08768(UnityEngine_Experimental_Rendering_XRMirrorView_TypeInfo);
    FUN_02f08768(UnityEngine_XR_Interaction_Toolkit_Locomotion_XROriginUpAlignment_TypeInfo);
    FUN_02f08768(UnityEngine_XR_ARSubsystems_XRParticipant_TypeInfo);
    FUN_02f08768(UnityEngine_XR_ARSubsystems_XRParticipantSubsystemDescriptor_TypeInfo);
    DAT_06bbef4c = 1;
  }
  local_54[0] = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_8c[0] = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  if (*(char *)(param_1 + 0x30) != '\0') {
    local_50._8_8_ = *(undefined8 *)(param_1 + 0x40);
    local_50._0_8_ = *(undefined8 *)(param_1 + 0x38);
    uVar4 = FUN_06099400(local_50,0);
    if ((uVar4 & 1) != 0) {
      local_50 = FUN_03e1c810(local_38 + 0x30,
                              *(undefined8 *)
                               UnityEngine_Experimental_Rendering_XRMirrorView_TypeInfo);
      FUN_0609937c(local_50,0);
      *(undefined8 *)(local_38 + 0x38) = 0;
      *(undefined8 *)(local_38 + 0x40) = 0;
      *(undefined8 *)(local_38 + 0x30) = 0;
      if ((*(long *)(local_38 + 0x50) == 0) ||
         (piVar5 = *(int **)(local_38 + 0x60), piVar5 == (int *)0x0)) {
        if (*(char *)(local_38 + 0x48) != '\0') {
          FUN_0546dca8();
        }
      }
      else {
        local_c8 = &local_38;
        local_d0 = 0;
        if (((*piVar5 != 0) || (piVar5[1] != 0)) || (piVar5[2] != 0)) {
          local_e0 = local_e0 & 0xffffffffffffff00;
          System_Data_ForeignKeyConstraint__CascadeUpdate
                    (&local_e0,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Locomotion_XROriginUpAlignment_TypeInfo,0);
          puVar2 = PTR_DAT_067ceeb0;
          local_d8 = local_54;
          local_54[0] = (undefined1)local_e0;
          local_e0 = 0;
          FUN_03d59408(&local_68,*(undefined4 *)(local_38 + 0x58),2,0,
                       *(undefined8 *)PTR_DAT_067ceeb0);
          FUN_03d59408(&local_78,*(undefined4 *)(local_38 + 0x58),2,0,*(undefined8 *)puVar2);
          FUN_03d5724c(&local_88,*(undefined4 *)(local_38 + 0x58),2,0,
                       *(undefined8 *)System_Xml_TextEncodedRawTextWriter_TypeInfo);
          local_f0 = local_f0 & 0xffffffffffffff00;
          System_Data_ForeignKeyConstraint__CascadeUpdate
                    (&local_f0,*(undefined8 *)UnityEngine_XR_ARSubsystems_XRParticipant_TypeInfo,0);
          local_8c[0] = (undefined1)local_f0;
          if (0 < *(int *)(local_38 + 0x58)) {
            lVar6 = 0;
            lVar7 = 0;
            do {
              uVar8 = *(undefined8 *)(*(long *)(local_38 + 0x50) + lVar7 * 8);
              *(undefined4 *)((undefined8 *)(local_68 + lVar6) + 1) = 0;
              *(undefined8 *)(local_68 + lVar6) = uVar8;
              puVar1 = (undefined8 *)(local_78 + lVar6);
              lVar6 = lVar6 + 0xc;
              *puVar1 = 0;
              *(undefined4 *)(puVar1 + 1) = 0x3f800000;
              *(undefined8 *)(local_88 + lVar7 * 8) = uVar8;
              lVar7 = lVar7 + 1;
            } while (lVar7 < *(int *)(local_38 + 0x58));
          }
          FUN_054a3814(local_8c,0);
          local_108 = &local_c0;
          uStack_a8 = uStack_70;
          local_b0 = local_78;
          uStack_98 = uStack_60;
          local_a0 = local_68;
          local_e8 = &local_a0;
          local_f0 = 0;
          local_f8 = &local_b0;
          local_100 = 0;
          uStack_b8 = uStack_80;
          local_c0 = local_88;
          local_110 = 0;
          local_120 = local_120 & 0xffffffffffffff00;
          System_Data_ForeignKeyConstraint__CascadeUpdate
                    (&local_120,
                     *(undefined8 *)
                      UnityEngine_XR_ARSubsystems_XRParticipantSubsystemDescriptor_TypeInfo,0);
          local_8c[0] = (undefined1)local_120;
          puStack_118 = local_8c;
          local_120 = 0;
          if (*(long *)(local_38 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          FUN_060ca6c4(*(long *)(local_38 + 0x28),0);
          if (*(long *)(local_38 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          FUN_034741a0(*(long *)(local_38 + 0x28),local_68,uStack_60,*(undefined8 *)PTR_DAT_067d2ed8
                      );
          if (*(long *)(local_38 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          FUN_0347243c(*(long *)(local_38 + 0x28),*(undefined8 *)(local_38 + 0x60),
                       *(undefined8 *)(local_38 + 0x68),0,0,1,0,*(undefined8 *)PTR_DAT_067d2ed0);
          if (*(long *)(local_38 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          FUN_0347315c(*(long *)(local_38 + 0x28),local_78,uStack_70,
                       *(undefined8 *)Unity_XR_CoreUtils_XROrigin_TypeInfo);
          if (*(long *)(local_38 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          FUN_034734c4(*(long *)(local_38 + 0x28),0,local_88,uStack_80,
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Locomotion_XROriginMovement_TypeInfo);
          FUN_054a3814(local_8c,0);
          FUN_03d57548(local_108,*(undefined8 *)UnityEngine_TextCore_Text_TextElementType_TypeInfo);
          if (local_110 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c0();
          }
          FUN_03d5972c(local_f8,*(undefined8 *)PTR_DAT_067d2ee0);
          if (local_100 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c0();
          }
          FUN_03d5972c(local_e8,*(undefined8 *)PTR_DAT_067d2ee0);
          if (local_f0 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c0();
          }
          FUN_054a3814(local_d8,0);
          if (local_e0 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c0();
          }
        }
        plVar3 = local_c8;
        FUN_03d57548(*local_c8 + 0x50,
                     *(undefined8 *)UnityEngine_TextCore_Text_TextElementType_TypeInfo);
        FUN_03d18804(*plVar3 + 0x60,*(undefined8 *)PTR_DAT_067cc4c8);
        if (local_d0 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c0();
        }
      }
    }
  }
  return;
}


