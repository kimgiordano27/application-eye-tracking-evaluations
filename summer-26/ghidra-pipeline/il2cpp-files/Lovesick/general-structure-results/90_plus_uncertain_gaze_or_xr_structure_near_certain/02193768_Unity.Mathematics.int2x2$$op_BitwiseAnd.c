/*
FUNCTION_NAME: Unity.Mathematics.int2x2$$op_BitwiseAnd
ENTRY_POINT: 02193768
PROGRAM: Lovesick-libil2cpp.so
SCORE: 102
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_16;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02193a08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unity_Mathematics_int2x2__op_BitwiseAnd(long param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  float *pfVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  long unaff_x20;
  long lVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  long in_stack_00000058;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x958));
  thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_10__);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary<Guid,_OVRSpatialAnchor>_TryGetValue__
                    );
  thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentInParent<ObiSolver>__);
  thunk_FUN_00d48444(PTR_DAT_033f2b00);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_List_Enumerator<ExposedTeleportPoint>_get_Current__
                    );
  *(undefined1 *)(unaff_x20 + 0x4f8) = 1;
  in_stack_00000030 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  lVar17 = *(long *)(unaff_x19 + 0x480);
  auVar3 = ZEXT812(0);
  if (lVar17 != 0) {
    uVar18 = *(uint *)(unaff_x19 + 0xa8);
    if (*(int *)(lVar17 + 0x20) == 0) {
      Unity_Mathematics_int4__get_yzwy(lVar17,1,0);
      auVar3._8_4_ = in_stack_00000030;
      auVar3._0_8_ = in_stack_00000028;
      lVar17 = *(long *)(unaff_x19 + 0x480);
      if (lVar17 == 0) goto LAB_02193b3c;
    }
    uVar13 = *(int *)(lVar17 + 0x20) - 1;
    if (2 < uVar13) {
      FUN_00ac2be8(lVar17);
      uVar1 = *(undefined4 *)(lVar17 + 0x20);
      in_stack_00000038 = thunk_FUN_00d48444(Method_NoteWave_OnNoteReset__);
      in_stack_00000040 = 0xffffffffffffffff;
      uStack0000000000000048 = uVar1;
      uVar11 = FUN_017a7f78(&stack0x00000038,0);
      uVar12 = thunk_FUN_00d48444(
                                 RCG_Lovesick_InteractiveObjects_PlacePoint_<>c__DisplayClass57_0_TypeInfo
                                 );
      uVar11 = FUN_015f5b28(uVar12,uVar11,0);
      thunk_FUN_00d48444(Method_RCG_Events_ShowPromptOnMessage_OnTeleport__);
      uVar12 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      FUN_0176c578(uVar12,uVar11,0);
      uVar11 = thunk_FUN_00d48444(
                                 Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnSecondaryTouchPerformed__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar12,uVar11);
    }
    uVar18 = uVar18 & 4 | *(uint *)(&DAT_02955798 + (long)(int)uVar13 * 4);
    if ((*(uint *)(unaff_x19 + 0xa8) != uVar18) &&
       (*(uint *)(unaff_x19 + 0xa8) = uVar18, 0 < *(int *)(unaff_x19 + 0x70))) {
      FUN_02193ccc();
    }
    FUN_02194170();
    auVar3._8_4_ = in_stack_00000030;
    auVar3._0_8_ = in_stack_00000028;
    if (*(long *)(unaff_x19 + 0x480) != 0) {
      auVar19 = FUN_021a10fc(*(long *)(unaff_x19 + 0x480),0);
      if ((0 < auVar19._12_4_) && (0 < *(int *)(unaff_x19 + 0x70))) {
        uVar18 = 0;
        do {
          auVar5._8_4_ = in_stack_00000030;
          auVar5._0_8_ = in_stack_00000028;
          auVar4._8_4_ = in_stack_00000030;
          auVar4._0_8_ = in_stack_00000028;
          auVar3._8_4_ = in_stack_00000030;
          auVar3._0_8_ = in_stack_00000028;
          uVar11 = auVar19._8_8_;
          uVar12 = auVar19._0_8_;
          lVar17 = *(long *)(unaff_x19 + 0x78);
          if (lVar17 == 0) goto LAB_02193b3c;
          if (*(uint *)(lVar17 + 0x18) <= uVar18) {
LAB_02193b38:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194(uVar12,uVar11);
          }
          lVar17 = *(long *)(lVar17 + (long)(int)uVar18 * 8 + 0x20);
          auVar3 = auVar4;
          if (lVar17 == 0) goto LAB_02193b3c;
          if (0 < *(int *)(unaff_x19 + 0x88)) {
            lVar15 = *(long *)(unaff_x19 + 0x90);
            auVar3 = auVar5;
            if (lVar15 == 0) goto LAB_02193b3c;
            uVar11 = *(undefined8 *)(lVar17 + 0x58);
            auVar19._8_8_ = uVar11;
            auVar19._0_8_ = uVar12;
            uVar13 = 0;
            piVar16 = (int *)(lVar15 + 0x58);
            do {
              if (*(uint *)(lVar15 + 0x18) <= uVar13) goto LAB_02193b38;
              if (*piVar16 == *(int *)(lVar17 + 0xe0)) {
                auVar19 = Unity_Mathematics_int3___ctor();
                if ((auVar19._0_8_ & 1) == 0) {
                  auVar19 = FUN_0218e064();
                  uVar18 = uVar18 - 1;
                }
                break;
              }
              uVar13 = uVar13 + 1;
              piVar16 = piVar16 + 0x10;
            } while ((int)uVar13 < *(int *)(unaff_x19 + 0x88));
          }
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < *(int *)(unaff_x19 + 0x70));
      }
      lVar17 = *(long *)(unaff_x19 + 0x480);
      auVar3 = _in_stack_00000028;
      if (lVar17 != 0) {
        if (*(long *)(lVar17 + 0x60) != 0) {
          uVar10 = FUN_021a14d8(lVar17,*(undefined8 *)
                                        Method_System_Collections_Generic_List_Enumerator<ExposedTeleportPoint>_get_Current__
                                ,0);
          if ((uVar10 & 1) != 0) {
            _in_stack_00000028 = FUN_021d438c(1,0);
            lVar17 = FUN_010f6b58();
            puVar6 = PTR_DAT_033f2b00;
            if (lVar17 < 0) {
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_026610e4(*(undefined8 *)puVar6,0);
            }
          }
        }
        lVar17 = *(long *)(unaff_x19 + 0x480);
        auVar3 = _in_stack_00000028;
        if (lVar17 != 0) {
          lVar15 = *(long *)(*(long *)
                              Method_System_Collections_Generic_Dictionary<Guid,_OVRSpatialAnchor>_TryGetValue__
                            + 0xb8);
          *(undefined4 *)(lVar15 + 8) = *(undefined4 *)(lVar17 + 0x48);
          *(undefined4 *)(lVar15 + 0xc) = *(undefined4 *)(lVar17 + 0x58);
          puVar6 = 
          UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00000D6D_PostfixBurstDelegate_var
          ;
          *(float *)(lVar15 + 0x10) = *(float *)(lVar17 + 0x54) * *(float *)(lVar17 + 0x54);
          puVar7 = Method_System_Collections_Generic_List<GSTU_Cell>__ctor__;
          pfVar14 = *(float **)(*(long *)puVar6 + 0xb8);
          fVar2 = *(float *)(lVar17 + 0x40);
          if (*(float *)(lVar17 + 0x40) < _LAB_028aa024) {
            fVar2 = _LAB_028aa024;
          }
          *pfVar14 = fVar2;
          puVar9 = StringLiteral_9197;
          puVar8 = StringLiteral_5681;
          puVar6 = Method_UnityEngine_Component_GetComponentInParent<ObiSolver>__;
          pfVar14[1] = *(float *)(lVar17 + 0x44);
          FUN_0218d364();
          FUN_01380f50(&stack0x00000038);
          in_stack_00000020 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
          in_stack_00000018 = in_stack_00000040;
          in_stack_00000010 = in_stack_00000038;
          while( true ) {
            uVar10 = FUN_012bc794(&stack0x00000010,*(undefined8 *)puVar7);
            if ((uVar10 & 1) == 0) {
              FUN_012bc790(&stack0x00000010,*(undefined8 *)puVar9);
              FUN_0218d364();
              FUN_01380f50(&stack0x00000038);
              in_stack_00000020 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
              in_stack_00000018 = in_stack_00000040;
              in_stack_00000010 = in_stack_00000038;
              while( true ) {
                uVar10 = FUN_012bc794(&stack0x00000010,*(undefined8 *)puVar7);
                if ((uVar10 & 1) == 0) {
                  FUN_012bc790(&stack0x00000010,*(undefined8 *)puVar9);
                  FUN_021fde1c(unaff_x19 + 0x360,*(undefined8 *)puVar6,0,0);
                  return;
                }
                FUN_012bc7c0(&stack0x00000010,&stack0x00000038,*(undefined8 *)puVar8);
                if (in_stack_00000038 == 0) break;
                FUN_02144bf4(in_stack_00000038,0);
              }
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_012bc7c0(&stack0x00000010,&stack0x00000058,*(undefined8 *)puVar8);
            if (in_stack_00000058 == 0) break;
            FUN_021628d0(in_stack_00000058,0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
    }
  }
LAB_02193b3c:
  _in_stack_00000028 = auVar3;
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


