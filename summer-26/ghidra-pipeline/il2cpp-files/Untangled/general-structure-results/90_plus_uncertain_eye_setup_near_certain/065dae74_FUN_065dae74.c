/*
FUNCTION_NAME: FUN_065dae74
ENTRY_POINT: 065dae74
PROGRAM: Untangled-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_065dae74(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  uint local_74;
  
  if ((DAT_071cec39 & 1) == 0) {
    FUN_02f07e70(Unity_VisualScripting_ExtensionMethodCache_TypeInfo);
    FUN_02f07e70(Fusion_ExponentialDecay_TypeInfo);
    FUN_02f07e70(Fusion_Photon_Realtime_Extensions_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d08618);
    FUN_02f07e70(PTR_DAT_06d08628);
    FUN_02f07e70(PTR_DAT_06d08630);
    FUN_02f07e70(PTR_DAT_06d44b88);
    FUN_02f07e70(PTR_DAT_06d0b888);
    FUN_02f07e70(PTR_DAT_06d0b560);
    FUN_02f07e70(PTR_DAT_06d3ca50);
    FUN_02f07e70(PTR_DAT_06d01fb8);
    FUN_02f07e70(PTR_DAT_06d14458);
    FUN_02f07e70(Photon_Realtime_Extensions_TypeInfo);
    FUN_02f07e70(TMPro_Extents_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d08648);
    FUN_02f07e70(PTR_DAT_06d128b0);
    FUN_02f07e70(PTR_DAT_06d15e40);
    FUN_02f07e70(PixelCrushers_DialogueSystem_ExtraDatabases_TypeInfo);
    FUN_02f07e70(UnityEngine_InputSystem_UI_ExtendedSubmitCancelEventData_TypeInfo);
    FUN_02f07e70(UnityEngine_Timeline_Extrapolation_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d02348);
    FUN_02f07e70(System_Runtime_Serialization_DataNode<byte>_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_Eyes_TypeInfo);
    DAT_071cec39 = 1;
  }
  local_74 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  if (((*(long *)(param_1 + 0x70) != 0) &&
      (lVar10 = FUN_03a8638c(*(long *)(param_1 + 0x70),*(undefined8 *)PTR_DAT_06d3ca50),
      param_2 != 0)) &&
     (iVar6 = FUN_04c742fc(param_2,*(undefined8 *)
                                    Unity_VisualScripting_ExtensionMethodCache_TypeInfo),
     puVar3 = PTR_DAT_06d0b888, lVar10 != 0)) {
    FUN_066d3cf4((float)(int)(param_3 * 0x19 + 0x127),(float)(iVar6 * 0x1e + 100),lVar10,0);
    if (0 < (int)param_3) {
      uVar20 = 0;
      iVar6 = 0xf0;
      do {
        if ((uVar20 & 1) == 0) {
          iVar7 = FUN_04c742fc(param_2,*(undefined8 *)
                                        Unity_VisualScripting_ExtensionMethodCache_TypeInfo);
          FUN_065db890(param_1,iVar6 + -0xc,iVar7 * 0x2d + 0x3c);
        }
        lVar10 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d01fb8);
        FUN_066c9ce0(lVar10,*(undefined8 *)UnityEngine_XR_Eyes_TypeInfo,0);
        if (lVar10 == 0) goto LAB_065db754;
        lVar11 = FUN_066c9a48(lVar10,0);
        if ((*(long *)(param_1 + 0x78) == 0) ||
           (uVar12 = FUN_066c9a48(*(long *)(param_1 + 0x78),0), lVar11 == 0)) goto LAB_065db754;
        FUN_066d51a4(lVar11,uVar12,0);
        lVar11 = FUN_03a862a4(lVar10,*(undefined8 *)puVar3);
        if (lVar11 == 0) goto LAB_065db754;
        FUN_066d3cf4(0x42480000,0x42200000,lVar11,0);
        FUN_066d3bd8((float)iVar6,0x42200000,lVar11,0);
        plVar13 = (long *)FUN_03a862a4(lVar10,*(undefined8 *)PTR_DAT_06d0b560);
        uVar20 = uVar20 + 1;
        local_74 = uVar20;
        uVar12 = FUN_055ff450(&local_74,0);
        if (plVar13 == (long *)0x0) goto LAB_065db754;
        (**(code **)(*plVar13 + 0x5e8))(plVar13,uVar12,*(undefined8 *)(*plVar13 + 0x5f0));
        FUN_0690c4f0(plVar13,*(undefined8 *)(param_1 + 0xd0),0);
        FUN_0690c9bc(plVar13,0x14,0);
        (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
        (**(code **)(*plVar13 + 0x2a8))(plVar13,*(undefined8 *)(*plVar13 + 0x2b0));
        lVar10 = *(long *)(param_1 + 0x1c8);
        uVar12 = thunk_FUN_02ef1808(*(undefined8 *)UnityEngine_Timeline_Extrapolation_TypeInfo);
        FUN_03fd0468(uVar12,*(undefined8 *)PixelCrushers_DialogueSystem_ExtraDatabases_TypeInfo);
        if (lVar10 == 0) goto LAB_065db754;
        lVar11 = *(long *)(lVar10 + 0x10);
        lVar19 = *(long *)TMPro_Extents_TypeInfo;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_065db754;
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          puVar14 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
          *puVar14 = uVar12;
          thunk_FUN_02f411dc(puVar14,uVar12);
        }
        else {
          FUN_03fd0c9c(lVar10,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
        lVar10 = *(long *)(param_1 + 0x1d0);
        if (lVar10 == 0) goto LAB_065db754;
        lVar11 = *(long *)(lVar10 + 0x10);
        lVar19 = *(long *)PTR_DAT_06d14458;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_065db754;
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          plVar18 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
          *plVar18 = (long)plVar13;
          thunk_FUN_02f411dc(plVar18,plVar13);
        }
        else {
          FUN_03fd0c9c(lVar10,plVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
        iVar6 = iVar6 + 0x1e;
      } while (param_3 != uVar20);
    }
    puVar4 = PTR_DAT_06d15e40;
    puVar2 = PTR_DAT_06d02348;
    uVar12 = FUN_04c7430c(param_2,*(undefined8 *)Fusion_Photon_Realtime_Extensions_TypeInfo);
    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
    FUN_03fd0590(lVar10,uVar12,*(undefined8 *)puVar4);
    puVar5 = UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo;
    puVar4 = Fusion_ExponentialDecay_TypeInfo;
    puVar2 = PTR_DAT_06d08648;
    if (lVar10 != 0) {
      FUN_03fd25e8(lVar10,*(undefined8 *)PTR_DAT_06d128b0);
      FUN_03fd16fc(&local_a8,lVar10,*(undefined8 *)puVar2);
      iVar6 = 10;
      iVar7 = 0x11;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      local_80 = local_98;
      do {
        uVar15 = FUN_04df6d30(&local_90,*(undefined8 *)PTR_DAT_06d08628);
        uVar12 = local_80;
        if ((uVar15 & 1) == 0) {
          FUN_04df6d2c(&local_90,*(undefined8 *)PTR_DAT_06d08618);
          return;
        }
        uVar16 = FUN_05458458(local_80,*(undefined8 *)
                                        System_Runtime_Serialization_DataNode<byte>_TypeInfo,0);
        lVar10 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d01fb8);
        FUN_066c9ce0(lVar10,uVar16,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar11 = FUN_066c9a48(lVar10,0);
        if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar16 = FUN_066c9a48(*(long *)(param_1 + 0x78),0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0(uVar16,uVar16);
        }
        FUN_066d51a4(lVar11,uVar16,0);
        lVar11 = FUN_03a862a4(lVar10,*(undefined8 *)puVar3);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_066d3cf4(0x43af0000,0x42200000,lVar11,0);
        FUN_066d3bd8(0x42a00000,(float)iVar6,lVar11,0);
        plVar13 = (long *)FUN_03a862a4(lVar10,*(undefined8 *)PTR_DAT_06d0b560);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        (**(code **)(*plVar13 + 0x5e8))(plVar13,uVar12,*(undefined8 *)(*plVar13 + 0x5f0));
        FUN_0690c4f0(plVar13,*(undefined8 *)(param_1 + 0xd0),0);
        FUN_0690c9bc(plVar13,0x14,0);
        iVar6 = iVar6 + -0x1e;
        uVar15 = 0;
        iVar21 = 0xe4;
        while( true ) {
          lVar10 = FUN_04c745ac(param_2,uVar12,*(undefined8 *)puVar4);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar15) break;
          lVar10 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d01fb8);
          FUN_066c9ce0(lVar10,*(undefined8 *)puVar5,0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar11 = FUN_066c9a48(lVar10,0);
          if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar16 = FUN_066c9a48(*(long *)(param_1 + 0x78),0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0(uVar16,uVar16);
          }
          FUN_066d51a4(lVar11,uVar16,0);
          lVar11 = FUN_03a862a4(lVar10,*(undefined8 *)puVar3);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          FUN_066d3cf4(0x41c80000,0x41c80000,lVar11,0);
          FUN_066d3bd8((float)iVar21,(float)iVar7,lVar11,0);
          lVar11 = FUN_04c745ac(param_2,uVar12,*(undefined8 *)puVar4);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (*(uint *)(lVar11 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          if (*(int *)(lVar11 + uVar15 * 4 + 0x20) == 1) {
            plVar13 = (long *)FUN_03a862a4(lVar10,*(undefined8 *)PTR_DAT_06d44b88);
            plVar18 = *(long **)(param_1 + 0xc0);
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            iVar8 = (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
            plVar17 = *(long **)(param_1 + 0xc0);
            if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            iVar9 = (**(code **)(*plVar17 + 0x1a8))(plVar17,*(undefined8 *)(*plVar17 + 0x1b0));
            uVar16 = FUN_066d788c(0,0,(float)iVar8,(float)iVar9,0x3f000000,0x3f000000,plVar18,0);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0(uVar16,uVar16);
            }
            FUN_0678e014(plVar13,uVar16,0);
            (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
            (**(code **)(*plVar13 + 0x2a8))(plVar13,*(undefined8 *)(*plVar13 + 0x2b0));
            if (*(long *)(param_1 + 0x1c8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            lVar10 = FUN_03fd09cc(*(long *)(param_1 + 0x1c8),uVar15 & 0xffffffff,
                                  *(undefined8 *)
                                   UnityEngine_InputSystem_UI_ExtendedSubmitCancelEventData_TypeInfo
                                 );
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            lVar11 = *(long *)(lVar10 + 0x10);
            lVar19 = *(long *)Photon_Realtime_Extensions_TypeInfo;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            uVar20 = *(uint *)(lVar10 + 0x18);
            if (uVar20 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar20 + 1;
              plVar18 = (long *)(lVar11 + (long)(int)uVar20 * 8 + 0x20);
              *plVar18 = (long)plVar13;
              thunk_FUN_02f411dc(plVar18,plVar13);
            }
            else {
              FUN_03fd0c9c(lVar10,plVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
          }
          iVar21 = iVar21 + 0x1e;
          uVar15 = uVar15 + 1;
        }
        iVar7 = iVar7 + -0x1e;
      } while( true );
    }
  }
LAB_065db754:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


