/*
FUNCTION_NAME: FUN_021936f4
ENTRY_POINT: 021936f4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_16;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02193a08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021936f4(long param_1)

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
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  float *pfVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  undefined1 local_a0 [16];
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78 [12];
  long local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  long local_48;
  
  if ((DAT_037814f8 & 1) == 0) {
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00000D6D_PostfixBurstDelegate_var
                      );
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_9197);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<GSTU_Cell>__ctor__);
    thunk_FUN_00d48444(StringLiteral_5681);
    thunk_FUN_00d48444(StringLiteral_9738);
    thunk_FUN_00d48444(PTR_DAT_033f3958);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_10__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Guid,_OVRSpatialAnchor>_TryGetValue__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentInParent<ObiSolver>__);
    thunk_FUN_00d48444(PTR_DAT_033f2b00);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<ExposedTeleportPoint>_get_Current__
                      );
    DAT_037814f8 = 1;
  }
  local_78._8_4_ = 0;
  local_80 = 0;
  local_78._0_8_ = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  lVar18 = *(long *)(param_1 + 0x480);
  auVar3 = ZEXT812(0);
  if (lVar18 != 0) {
    uVar19 = *(uint *)(param_1 + 0xa8);
    if (*(int *)(lVar18 + 0x20) == 0) {
      Unity_Mathematics_int4__get_yzwy(lVar18,1,0);
      auVar3._8_4_ = local_78._8_4_;
      auVar3._0_8_ = local_78._0_8_;
      lVar18 = *(long *)(param_1 + 0x480);
      if (lVar18 == 0) goto LAB_02193b3c;
    }
    uVar14 = *(int *)(lVar18 + 0x20) - 1;
    if (2 < uVar14) {
      FUN_00ac2be8(lVar18);
      uVar1 = *(undefined4 *)(lVar18 + 0x20);
      local_68 = thunk_FUN_00d48444(Method_NoteWave_OnNoteReset__);
      uStack_60 = 0xffffffffffffffff;
      local_58 = uVar1;
      uVar12 = FUN_017a7f78(&local_68,0);
      uVar13 = thunk_FUN_00d48444(
                                 RCG_Lovesick_InteractiveObjects_PlacePoint_<>c__DisplayClass57_0_TypeInfo
                                 );
      uVar12 = FUN_015f5b28(uVar13,uVar12,0);
      thunk_FUN_00d48444(Method_RCG_Events_ShowPromptOnMessage_OnTeleport__);
      uVar13 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      FUN_0176c578(uVar13,uVar12,0);
      uVar12 = thunk_FUN_00d48444(
                                 Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnSecondaryTouchPerformed__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar13,uVar12);
    }
    uVar19 = uVar19 & 4 | *(uint *)(&DAT_02955798 + (long)(int)uVar14 * 4);
    if ((*(uint *)(param_1 + 0xa8) != uVar19) &&
       (*(uint *)(param_1 + 0xa8) = uVar19, 0 < *(int *)(param_1 + 0x70))) {
      FUN_02193ccc(param_1);
    }
    FUN_02194170(param_1);
    auVar3._8_4_ = local_78._8_4_;
    auVar3._0_8_ = local_78._0_8_;
    if (*(long *)(param_1 + 0x480) != 0) {
      auVar20 = FUN_021a10fc(*(long *)(param_1 + 0x480),0);
      if ((0 < auVar20._12_4_) && (0 < *(int *)(param_1 + 0x70))) {
        uVar19 = 0;
        do {
          auVar5._8_4_ = local_78._8_4_;
          auVar5._0_8_ = local_78._0_8_;
          auVar4._8_4_ = local_78._8_4_;
          auVar4._0_8_ = local_78._0_8_;
          auVar3._8_4_ = local_78._8_4_;
          auVar3._0_8_ = local_78._0_8_;
          uVar12 = auVar20._8_8_;
          uVar13 = auVar20._0_8_;
          lVar18 = *(long *)(param_1 + 0x78);
          if (lVar18 == 0) goto LAB_02193b3c;
          if (*(uint *)(lVar18 + 0x18) <= uVar19) {
LAB_02193b38:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194(uVar13,uVar12);
          }
          lVar18 = *(long *)(lVar18 + (long)(int)uVar19 * 8 + 0x20);
          auVar3 = auVar4;
          if (lVar18 == 0) goto LAB_02193b3c;
          if (0 < *(int *)(param_1 + 0x88)) {
            lVar16 = *(long *)(param_1 + 0x90);
            auVar3 = auVar5;
            if (lVar16 == 0) goto LAB_02193b3c;
            uVar12 = *(undefined8 *)(lVar18 + 0x58);
            auVar20._8_8_ = uVar12;
            auVar20._0_8_ = uVar13;
            uVar14 = 0;
            piVar17 = (int *)(lVar16 + 0x58);
            do {
              if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_02193b38;
              if (*piVar17 == *(int *)(lVar18 + 0xe0)) {
                auVar20 = Unity_Mathematics_int3___ctor
                                    (param_1,uVar12,*(undefined8 *)(lVar18 + 0x60));
                if ((auVar20._0_8_ & 1) == 0) {
                  auVar20 = FUN_0218e064(param_1,lVar18,1);
                  uVar19 = uVar19 - 1;
                }
                break;
              }
              uVar14 = uVar14 + 1;
              piVar17 = piVar17 + 0x10;
            } while ((int)uVar14 < *(int *)(param_1 + 0x88));
          }
          uVar19 = uVar19 + 1;
        } while ((int)uVar19 < *(int *)(param_1 + 0x70));
      }
      lVar18 = *(long *)(param_1 + 0x480);
      auVar3 = local_78;
      if (lVar18 != 0) {
        if (*(long *)(lVar18 + 0x60) != 0) {
          uVar11 = FUN_021a14d8(lVar18,*(undefined8 *)
                                        Method_System_Collections_Generic_List_Enumerator<ExposedTeleportPoint>_get_Current__
                                ,0);
          puVar6 = StringLiteral_9738;
          if ((uVar11 & 1) != 0) {
            local_78 = FUN_021d438c(1,0);
            lVar18 = FUN_010f6b58(param_1,local_78,*(undefined8 *)puVar6);
            puVar6 = PTR_DAT_033f2b00;
            if (lVar18 < 0) {
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_026610e4(*(undefined8 *)puVar6,0);
            }
          }
        }
        lVar18 = *(long *)(param_1 + 0x480);
        auVar3 = local_78;
        if (lVar18 != 0) {
          lVar16 = *(long *)(*(long *)
                              Method_System_Collections_Generic_Dictionary<Guid,_OVRSpatialAnchor>_TryGetValue__
                            + 0xb8);
          *(undefined4 *)(lVar16 + 8) = *(undefined4 *)(lVar18 + 0x48);
          *(undefined4 *)(lVar16 + 0xc) = *(undefined4 *)(lVar18 + 0x58);
          puVar7 = 
          UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00000D6D_PostfixBurstDelegate_var
          ;
          puVar6 = PTR_DAT_033f3958;
          *(float *)(lVar16 + 0x10) = *(float *)(lVar18 + 0x54) * *(float *)(lVar18 + 0x54);
          puVar8 = Method_System_Collections_Generic_List<GSTU_Cell>__ctor__;
          pfVar15 = *(float **)(*(long *)puVar7 + 0xb8);
          fVar2 = *(float *)(lVar18 + 0x40);
          if (*(float *)(lVar18 + 0x40) < _LAB_028aa024) {
            fVar2 = _LAB_028aa024;
          }
          *pfVar15 = fVar2;
          puVar10 = StringLiteral_9197;
          puVar9 = StringLiteral_5681;
          puVar7 = Method_UnityEngine_Component_GetComponentInParent<ObiSolver>__;
          pfVar15[1] = *(float *)(lVar18 + 0x44);
          local_a0 = FUN_0218d364(param_1);
          FUN_01380f50(&local_68,local_a0,*(undefined8 *)puVar6);
          uStack_88 = uStack_60;
          local_90 = local_68;
          while( true ) {
            uVar11 = FUN_012bc794(&local_90,*(undefined8 *)puVar8);
            if ((uVar11 & 1) == 0) {
              FUN_012bc790(&local_90,*(undefined8 *)puVar10);
              auVar20 = FUN_0218d364(param_1);
              local_a0 = auVar20;
              FUN_01380f50(&local_68,local_a0,*(undefined8 *)puVar6);
              uStack_88 = uStack_60;
              local_90 = local_68;
              while( true ) {
                uVar11 = FUN_012bc794(&local_90,*(undefined8 *)puVar8);
                if ((uVar11 & 1) == 0) {
                  FUN_012bc790(&local_90,*(undefined8 *)puVar10);
                  FUN_021fde1c(param_1 + 0x360,*(undefined8 *)puVar7,0,0);
                  return;
                }
                FUN_012bc7c0(&local_90,&local_68,*(undefined8 *)puVar9);
                if (local_68 == 0) break;
                FUN_02144bf4(local_68,0);
              }
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_012bc7c0(&local_90,&local_48,*(undefined8 *)puVar9);
            if (local_48 == 0) break;
            FUN_021628d0(local_48,0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
    }
  }
LAB_02193b3c:
  local_78 = auVar3;
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


