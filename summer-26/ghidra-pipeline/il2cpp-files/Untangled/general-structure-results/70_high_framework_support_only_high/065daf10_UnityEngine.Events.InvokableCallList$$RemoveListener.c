/*
FUNCTION_NAME: UnityEngine.Events.InvokableCallList$$RemoveListener
ENTRY_POINT: 065daf10
PROGRAM: Untangled-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_Events_InvokableCallList__RemoveListener(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  int iVar18;
  uint uVar19;
  int iVar20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  uint uStack000000000000003c;
  
  FUN_02f07e70(*(undefined8 *)(param_1 + 0x560));
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
  *(undefined1 *)(unaff_x22 + 0xc39) = 1;
  uStack000000000000003c = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (((*(long *)(unaff_x20 + 0x70) != 0) &&
      (lVar8 = FUN_03a8638c(*(long *)(unaff_x20 + 0x70),*(undefined8 *)PTR_DAT_06d3ca50),
      unaff_x19 != 0)) && (iVar5 = FUN_04c742fc(), puVar3 = PTR_DAT_06d0b888, lVar8 != 0)) {
    FUN_066d3cf4((float)(int)(unaff_w21 * 0x19 + 0x127),(float)(iVar5 * 0x1e + 100),lVar8,0);
    if (0 < (int)unaff_w21) {
      uVar19 = 0;
      iVar5 = 0xf0;
      do {
        if ((uVar19 & 1) == 0) {
          FUN_04c742fc();
          FUN_065db890();
        }
        lVar8 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d01fb8);
        FUN_066c9ce0(lVar8,*(undefined8 *)UnityEngine_XR_Eyes_TypeInfo,0);
        if (lVar8 == 0) goto LAB_065db754;
        lVar9 = FUN_066c9a48(lVar8,0);
        if ((*(long *)(unaff_x20 + 0x78) == 0) ||
           (uVar10 = FUN_066c9a48(*(long *)(unaff_x20 + 0x78),0), lVar9 == 0)) goto LAB_065db754;
        FUN_066d51a4(lVar9,uVar10,0);
        lVar9 = FUN_03a862a4(lVar8,*(undefined8 *)puVar3);
        if (lVar9 == 0) goto LAB_065db754;
        FUN_066d3cf4(0x42480000,0x42200000,lVar9,0);
        FUN_066d3bd8((float)iVar5,0x42200000,lVar9,0);
        plVar11 = (long *)FUN_03a862a4(lVar8,*(undefined8 *)PTR_DAT_06d0b560);
        uVar19 = uVar19 + 1;
        uStack000000000000003c = uVar19;
        uVar10 = FUN_055ff450(&stack0x0000003c,0);
        if (plVar11 == (long *)0x0) goto LAB_065db754;
        (**(code **)(*plVar11 + 0x5e8))(plVar11,uVar10,*(undefined8 *)(*plVar11 + 0x5f0));
        FUN_0690c4f0(plVar11,*(undefined8 *)(unaff_x20 + 0xd0),0);
        FUN_0690c9bc(plVar11,0x14,0);
        (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
        (**(code **)(*plVar11 + 0x2a8))(plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
        lVar8 = *(long *)(unaff_x20 + 0x1c8);
        uVar10 = thunk_FUN_02ef1808(*(undefined8 *)UnityEngine_Timeline_Extrapolation_TypeInfo);
        FUN_03fd0468(uVar10,*(undefined8 *)PixelCrushers_DialogueSystem_ExtraDatabases_TypeInfo);
        if (lVar8 == 0) goto LAB_065db754;
        lVar9 = *(long *)(lVar8 + 0x10);
        lVar17 = *(long *)TMPro_Extents_TypeInfo;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_065db754;
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          puVar12 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
          *puVar12 = uVar10;
          thunk_FUN_02f411dc(puVar12,uVar10);
        }
        else {
          FUN_03fd0c9c(lVar8,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
        lVar8 = *(long *)(unaff_x20 + 0x1d0);
        if (lVar8 == 0) goto LAB_065db754;
        lVar9 = *(long *)(lVar8 + 0x10);
        lVar17 = *(long *)PTR_DAT_06d14458;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_065db754;
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          plVar16 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
          *plVar16 = (long)plVar11;
          thunk_FUN_02f411dc(plVar16,plVar11);
        }
        else {
          FUN_03fd0c9c(lVar8,plVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
        iVar5 = iVar5 + 0x1e;
      } while (unaff_w21 != uVar19);
    }
    puVar4 = PTR_DAT_06d15e40;
    puVar2 = PTR_DAT_06d02348;
    uVar10 = FUN_04c7430c();
    lVar8 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
    FUN_03fd0590(lVar8,uVar10,*(undefined8 *)puVar4);
    puVar4 = UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo;
    puVar2 = PTR_DAT_06d08648;
    if (lVar8 != 0) {
      FUN_03fd25e8(lVar8,*(undefined8 *)PTR_DAT_06d128b0);
      FUN_03fd16fc(&stack0x00000008,lVar8,*(undefined8 *)puVar2);
      iVar5 = 10;
      iVar18 = 0x11;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      do {
        uVar13 = FUN_04df6d30(&stack0x00000020,*(undefined8 *)PTR_DAT_06d08628);
        uVar10 = in_stack_00000030;
        if ((uVar13 & 1) == 0) {
          FUN_04df6d2c(&stack0x00000020,*(undefined8 *)PTR_DAT_06d08618);
          return;
        }
        uVar14 = FUN_05458458(in_stack_00000030,
                              *(undefined8 *)System_Runtime_Serialization_DataNode<byte>_TypeInfo,0)
        ;
        lVar8 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d01fb8);
        FUN_066c9ce0(lVar8,uVar14,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar9 = FUN_066c9a48(lVar8,0);
        if (*(long *)(unaff_x20 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar14 = FUN_066c9a48(*(long *)(unaff_x20 + 0x78),0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0(uVar14,uVar14);
        }
        FUN_066d51a4(lVar9,uVar14,0);
        lVar9 = FUN_03a862a4(lVar8,*(undefined8 *)puVar3);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_066d3cf4(0x43af0000,0x42200000,lVar9,0);
        FUN_066d3bd8(0x42a00000,(float)iVar5,lVar9,0);
        plVar11 = (long *)FUN_03a862a4(lVar8,*(undefined8 *)PTR_DAT_06d0b560);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        (**(code **)(*plVar11 + 0x5e8))(plVar11,uVar10,*(undefined8 *)(*plVar11 + 0x5f0));
        FUN_0690c4f0(plVar11,*(undefined8 *)(unaff_x20 + 0xd0),0);
        FUN_0690c9bc(plVar11,0x14,0);
        iVar5 = iVar5 + -0x1e;
        uVar13 = 0;
        iVar20 = 0xe4;
        while( true ) {
          lVar8 = FUN_04c745ac();
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar13) break;
          lVar8 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d01fb8);
          FUN_066c9ce0(lVar8,*(undefined8 *)puVar4,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar9 = FUN_066c9a48(lVar8,0);
          if (*(long *)(unaff_x20 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar10 = FUN_066c9a48(*(long *)(unaff_x20 + 0x78),0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0(uVar10,uVar10);
          }
          FUN_066d51a4(lVar9,uVar10,0);
          lVar9 = FUN_03a862a4(lVar8,*(undefined8 *)puVar3);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          FUN_066d3cf4(0x41c80000,0x41c80000,lVar9,0);
          FUN_066d3bd8((float)iVar20,(float)iVar18,lVar9,0);
          lVar9 = FUN_04c745ac();
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          if (*(int *)(lVar9 + uVar13 * 4 + 0x20) == 1) {
            plVar11 = (long *)FUN_03a862a4(lVar8,*(undefined8 *)PTR_DAT_06d44b88);
            plVar16 = *(long **)(unaff_x20 + 0xc0);
            if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            iVar6 = (**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
            plVar15 = *(long **)(unaff_x20 + 0xc0);
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            iVar7 = (**(code **)(*plVar15 + 0x1a8))(plVar15,*(undefined8 *)(*plVar15 + 0x1b0));
            uVar10 = FUN_066d788c(0,0,(float)iVar6,(float)iVar7,0x3f000000,0x3f000000,plVar16,0);
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0(uVar10,uVar10);
            }
            FUN_0678e014(plVar11,uVar10,0);
            (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
            (**(code **)(*plVar11 + 0x2a8))(plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
            if (*(long *)(unaff_x20 + 0x1c8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            lVar8 = FUN_03fd09cc(*(long *)(unaff_x20 + 0x1c8),uVar13 & 0xffffffff,
                                 *(undefined8 *)
                                  UnityEngine_InputSystem_UI_ExtendedSubmitCancelEventData_TypeInfo)
            ;
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            lVar9 = *(long *)(lVar8 + 0x10);
            lVar17 = *(long *)Photon_Realtime_Extensions_TypeInfo;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            uVar19 = *(uint *)(lVar8 + 0x18);
            if (uVar19 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar19 + 1;
              plVar16 = (long *)(lVar9 + (long)(int)uVar19 * 8 + 0x20);
              *plVar16 = (long)plVar11;
              thunk_FUN_02f411dc(plVar16,plVar11);
            }
            else {
              FUN_03fd0c9c(lVar8,plVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
          }
          iVar20 = iVar20 + 0x1e;
          uVar13 = uVar13 + 1;
        }
        iVar18 = iVar18 + -0x1e;
      } while( true );
    }
  }
LAB_065db754:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


