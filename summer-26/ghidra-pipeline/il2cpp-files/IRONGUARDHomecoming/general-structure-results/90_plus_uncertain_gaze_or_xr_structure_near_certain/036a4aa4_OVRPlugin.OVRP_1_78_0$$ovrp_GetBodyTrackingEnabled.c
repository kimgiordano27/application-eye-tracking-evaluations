/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetBodyTrackingEnabled
ENTRY_POINT: 036a4aa4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_17;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetBodyTrackingEnabled(void)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar21;
  undefined8 *unaff_x22;
  long *plVar22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 in_stack_00000020;
  int iStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  long in_stack_00000078;
  
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_11__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_29__);
  thunk_FUN_01efb3a4(Method_Oculus_Interaction_PhysicsGrabbable_<>c_<_ctor>b__27_0__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_<Register>b__0__
                    );
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass13_0_<Unregister>b__0__
                    );
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_<BlockUntilRecvMsg>b__0__
                    );
  thunk_FUN_01efb3a4(
                    Method_PassthroughStyler_<FadeToCurrentStyle>d__31_System_Collections_IEnumerator_Reset__
                    );
  thunk_FUN_01efb3a4(
                    Method_PassthroughStyler_<FadeToDefaultPassthrough>d__32_System_Collections_IEnumerator_Reset__
                    );
  thunk_FUN_01efb3a4(
                    Method_Scene_PlayerController_<SetTimeScaleRoutine>d__82_System_Collections_IEnumerator_Reset__
                    );
  *(undefined1 *)(unaff_x23 + 0xfa5) = 1;
  in_stack_00000078 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  uVar12 = FUN_01f08890(*unaff_x22,0x13);
  *(undefined8 *)(unaff_x19 + 0x68) = uVar12;
  thunk_FUN_01f51358();
  lVar13 = thunk_FUN_01f117cc(*unaff_x21);
  UnityEngine_UIElements_UIR_Implementation_RenderEvents__UpdateLocalFlipsWinding
            (lVar13,*unaff_x20,0);
  if (lVar13 != 0) {
    lVar13 = FUN_04073258(lVar13,0);
    uVar12 = FUN_04070398();
    if (lVar13 != 0) {
      FUN_0407dcf4(lVar13,uVar12,0,0);
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee12 = '\x01';
      }
      puVar16 = *(undefined4 **)
                 (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
      FUN_0407c958(*puVar16,puVar16[1],puVar16[2],lVar13,0);
      if (DAT_0482ee0f == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__);
        DAT_0482ee0f = '\x01';
      }
      puVar16 = *(undefined4 **)
                 (*(long *)Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__ + 0xb8);
      FUN_0407d6f4(*puVar16,puVar16[1],puVar16[2],puVar16[3],lVar13,0);
      lVar13 = FUN_040703d4(lVar13,0);
      puVar6 = 
      Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_<BlockUntilRecvMsg>b__0__
      ;
      puVar5 = 
      Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass13_0_<Unregister>b__0__
      ;
      if (lVar13 != 0) {
        FUN_040732d0(lVar13,*(undefined4 *)(unaff_x19 + 0x3c),0);
        lVar13 = thunk_FUN_01f117cc(*(undefined8 *)puVar6);
        FUN_030f23f0(lVar13,0x18,*(undefined8 *)puVar5);
        plVar22 = (long *)(unaff_x19 + 0x58);
        *plVar22 = lVar13;
        thunk_FUN_01f51358(plVar22,lVar13);
        puVar8 = Method_Oculus_Interaction_PhysicsGrabbable_<>c_<_ctor>b__27_0__;
        puVar7 = Method_System_IO_Path_<>c_<JoinInternal>b__57_0__;
        puVar6 = Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_11__;
        puVar5 = Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_29__;
        if (*plVar22 != 0) {
          uVar12 = System_Collections_Generic_List<ONSPPropagationGeometry_TerrainMaterial>__Sort
                             (*plVar22,*(undefined8 *)
                                        Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_<Register>b__0__
                             );
          *(undefined8 *)(unaff_x19 + 0x60) = uVar12;
          thunk_FUN_01f51358();
          uVar21 = 2;
          do {
            lVar13 = *(long *)puVar6;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar13 = *(long *)puVar6;
            }
            lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
            if (lVar13 == 0) goto LAB_036a4fe0;
            if (*(uint *)(lVar13 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            iVar1 = *(int *)(lVar13 + uVar21 * 4 + 0x20);
            if ((iVar1 != -1) &&
               ((*(uint *)(unaff_x19 + 0x40) >> (ulong)((uint)uVar21 & 0x1f) & 1) != 0)) {
              plVar22 = *(long **)(unaff_x19 + 0x28);
              if (plVar22 == (long *)0x0) goto LAB_036a4fe0;
              lVar17 = *plVar22;
              lVar13 = *(long *)puVar5;
              uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar18 != 0) {
                piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == lVar13) {
                    puVar14 = (undefined8 *)(lVar17 + (long)(*piVar20 + 4) * 0x10 + 0x138);
                    goto LAB_036a4d64;
                  }
                  uVar18 = uVar18 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar18 != 0);
              }
              puVar14 = (undefined8 *)FUN_01ecb238(plVar22,lVar13,4);
LAB_036a4d64:
              (*(code *)*puVar14)(&stack0x00000030,plVar22,uVar21 & 0xffffffff,0,puVar14[1]);
              uVar11 = uStack0000000000000038;
              uVar10 = uStack0000000000000034;
              iVar9 = iStack0000000000000030;
              uVar18 = FUN_036a4fe8();
              if ((uVar18 & 1) == 0) {
                plVar22 = *(long **)(unaff_x19 + 0x28);
                if (plVar22 == (long *)0x0) goto LAB_036a4fe0;
                lVar17 = *plVar22;
                lVar13 = *(long *)puVar5;
                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar18 != 0) {
                  piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) == lVar13) {
                      puVar14 = (undefined8 *)(lVar17 + (long)(*piVar20 + 4) * 0x10 + 0x138);
                      goto LAB_036a4df0;
                    }
                    uVar18 = uVar18 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar18 != 0);
                }
                puVar14 = (undefined8 *)FUN_01ecb238(plVar22,lVar13,4);
LAB_036a4df0:
                (*(code *)*puVar14)(&stack0x00000030,plVar22,iVar1,0,puVar14[1]);
                in_stack_00000010 = CONCAT44(uStack0000000000000034,iStack0000000000000030);
                uStack0000000000000064 = (undefined4)uStack0000000000000044;
                in_stack_00000068 = SUB84(uStack0000000000000044,4);
                in_stack_00000060 = uStack0000000000000040;
                in_stack_00000058 = uStack0000000000000038;
                uStack000000000000005c = uStack000000000000003c;
                in_stack_00000018 = uStack0000000000000038;
                in_stack_00000020 = uStack0000000000000040;
                in_stack_00000050 = in_stack_00000010;
                in_stack_00000078 = FUN_036a5088();
              }
              iStack0000000000000030 = iVar1;
              uVar12 = thunk_FUN_01f113fc(*(undefined8 *)puVar7,&stack0x00000030);
              in_stack_00000008._4_4_ = (uint)uVar21;
              uVar15 = thunk_FUN_01f113fc(*(undefined8 *)puVar7,(long)&stack0x00000008 + 4);
              FUN_0340f2f0(*(undefined8 *)
                            Method_Scene_PlayerController_<SetTimeScaleRoutine>d__82_System_Collections_IEnumerator_Reset__
                           ,uVar12,uVar15,0);
              if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_036a4fe0;
              uVar12 = FUN_036a5284(*(long *)(unaff_x19 + 0x30),iVar1);
              if (in_stack_00000078 == 0) goto LAB_036a4fe0;
              fVar3 = (float)uVar12;
              if (iVar1 != 0) {
                fVar3 = 0.0;
              }
              fVar4 = -(float)uVar12;
              if (uVar21 < 0x13) {
                fVar4 = fVar3;
              }
              FUN_04070398(in_stack_00000078,0);
              uVar12 = FUN_036a52fc(iVar9,uVar10,uVar11,uVar12,fVar4);
              lVar13 = in_stack_00000078;
              uVar15 = thunk_FUN_01f117cc(*(undefined8 *)
                                           Method_System_IO_Path_<>c_<JoinInternal>b__56_0__);
              FUN_036a5578(uVar15,iVar1,uVar21 & 0xffffffff,lVar13,uVar12);
              lVar13 = *(long *)(unaff_x19 + 0x58);
              if (lVar13 == 0) goto LAB_036a4fe0;
              lVar17 = *(long *)(lVar13 + 0x10);
              lVar19 = *(long *)puVar8;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar17 == 0) goto LAB_036a4fe0;
              uVar2 = *(uint *)(lVar13 + 0x18);
              if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                puVar14 = (undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20);
                *puVar14 = uVar15;
                thunk_FUN_01f51358(puVar14,uVar15);
              }
              else {
                FUN_030f2bb4(lVar13,uVar15,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 != 0x18);
          FUN_036a55d0();
          lVar13 = *(long *)(unaff_x19 + 0x48);
          *(undefined2 *)(unaff_x19 + 0x70) = 0x100;
          if (lVar13 != 0) {
            (**(code **)(lVar13 + 0x18))
                      (*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
            return;
          }
        }
      }
    }
  }
LAB_036a4fe0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


