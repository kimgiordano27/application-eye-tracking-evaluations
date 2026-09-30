/*
FUNCTION_NAME: FUN_07ea6e40
ENTRY_POINT: 07ea6e40
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_11
*/


void FUN_07ea6e40(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  bool bVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  int iVar20;
  long *plVar21;
  bool bVar22;
  undefined8 *puVar23;
  undefined1 auVar24 [16];
  undefined4 local_80;
  int local_7c;
  undefined4 local_74;
  undefined1 local_70 [16];
  
  plVar21 = (long *)
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
  ;
  if ((DAT_0899abf9 & 1) == 0) {
    FUN_03a8a718(OVRPlugin_OverlayShape_TypeInfo);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetResult__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetStateMachine__
                );
    FUN_03a8a718(PTR_DAT_084959d8);
    FUN_03a8a718(PTR_DAT_084959d0);
    FUN_03a8a718(UnityEngine_UIElements_TextElement_GlyphsEnumerable_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_TextElement_UxmlFactory_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_113_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_115_0_TypeInfo);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_Start<JsonTextReader_<ParseNumberNaNAsync>d__26>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
                );
    FUN_03a8a718(OVRPlugin_OVRP_0_1_3_TypeInfo);
    FUN_03a8a718(PTR_DAT_084ba068);
    DAT_0899abf9 = 1;
  }
  lVar10 = *plVar21;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_74 = 0;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar10 = *plVar21;
  }
  auVar7._8_8_ = local_70._8_8_;
  auVar7._0_8_ = local_70._0_8_;
  auVar24._8_8_ = local_70._8_8_;
  auVar24._0_8_ = local_70._0_8_;
  plVar15 = *(long **)(lVar10 + 0xb8);
  lVar10 = *plVar15;
  if (lVar10 != 0) {
    lVar18 = plVar15[1];
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    local_70 = auVar24;
    if (lVar18 != 0) {
      lVar10 = plVar15[2];
      *(undefined4 *)(lVar18 + 0x18) = 0;
      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
      local_70 = auVar7;
      if (lVar10 != 0) {
        iVar9 = *(int *)(lVar10 + 0x18);
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (0 < iVar9) {
          Newtonsoft_Json_Schema_ValidationEventArgs__get_Path
                    (*(undefined8 *)(lVar10 + 0x10),0,iVar9,0);
          plVar15 = *(long **)(*plVar21 + 0xb8);
        }
        auVar8._8_8_ = local_70._8_8_;
        auVar8._0_8_ = local_70._0_8_;
        lVar10 = plVar15[3];
        if (lVar10 != 0) {
          *(undefined4 *)(lVar10 + 0x18) = 0;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          local_70 = auVar8;
          if (param_1 != 0) {
            local_7c = 0;
            iVar1 = *(int *)(param_1 + 0x54);
            iVar9 = 0;
            bVar16 = false;
            plVar15 = (long *)OVRPlugin_OverlayShape_TypeInfo;
            puVar19 = (undefined8 *)OVRPlugin_OVRP_1_113_0_TypeInfo;
            puVar23 = (undefined8 *)OVRPlugin_OVRP_1_115_0_TypeInfo;
            do {
              if (bVar16) goto LAB_07ea7470;
              if (*(int *)(*plVar15 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              lVar10 = FUN_07ea4cb4();
              if (lVar10 == 0) goto LAB_07ea74f4;
              auVar24 = FUN_04e8f030(lVar10,0,*puVar19);
              local_70 = auVar24;
              lVar10 = FUN_07ea4c3c();
              if (lVar10 == 0) goto LAB_07ea74f4;
              uVar11 = FUN_04eafaec(lVar10,0,*puVar23);
              lVar10 = FUN_07ea4bc4();
              if (lVar10 == 0) goto LAB_07ea74f4;
              uVar12 = FUN_04eafaec(lVar10,0,*puVar23);
              lVar10 = FUN_07ea4d2c();
              if (lVar10 == 0) goto LAB_07ea74f4;
              local_80 = FUN_04d5b5f4(lVar10,0,*(undefined8 *)
                                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_Start<JsonTextReader_<ParseNumberNaNAsync>d__26>__
                                     );
              if (iVar9 < iVar1) {
                bVar22 = false;
                bVar3 = false;
                bVar6 = false;
                bVar5 = false;
                bVar4 = true;
                bVar16 = false;
                do {
                  iVar20 = iVar9;
                  iVar9 = FUN_07eaf39c(param_1,iVar20,0);
                  if (iVar9 < 4) {
                    if (iVar9 == 1) {
                      uVar14 = FUN_07eaf4b0(param_1,iVar20,6,0);
                      if (((uVar14 & 1) == 0) || (local_7c != 0)) goto LAB_07ea71a4;
                      FUN_07e2c78c(local_70,*(undefined8 *)PTR_DAT_084ba068,0);
                      bVar6 = true;
                      local_7c = 0;
                      bVar16 = true;
                    }
                    else if (iVar9 == 3) {
                      uVar13 = FUN_07eaf9c4(param_1,iVar20,0);
                      if (bVar22) {
                        if (!bVar3) {
                          uVar12 = uVar13;
                        }
                        bVar4 = (bool)((bVar3 ^ 1U) & bVar4);
                        bVar22 = true;
                        bVar3 = true;
                      }
                      else {
                        bVar22 = true;
                        uVar11 = uVar13;
                      }
                    }
                    else {
LAB_07ea71a4:
                      bVar4 = false;
                    }
                  }
                  else {
                    if (iVar9 != 7) {
                      if (iVar9 != 0xb) goto LAB_07ea71a4;
                      local_7c = local_7c + 1;
                      break;
                    }
                    uVar13 = FUN_07eaf54c(param_1,iVar20,0);
                    if (!bVar5) {
                      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_3_TypeInfo + 0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                      }
                      uVar14 = FUN_07ea7830(5,uVar13,&local_74);
                      if ((uVar14 & 1) != 0) {
                        local_80 = FUN_07de5678(local_74,0);
                        bVar5 = true;
                        goto LAB_07ea71cc;
                      }
                    }
                    if (bVar6) {
                      bVar4 = false;
                    }
                    else {
                      FUN_07e2c78c(local_70,uVar13,0);
                    }
                    bVar6 = true;
                  }
LAB_07ea71cc:
                  iVar9 = iVar20 + 1;
                } while (iVar20 + 1 < iVar1);
                iVar9 = iVar20 + 1;
                bVar22 = iVar9 < iVar1;
                plVar15 = (long *)OVRPlugin_OverlayShape_TypeInfo;
                puVar19 = (undefined8 *)OVRPlugin_OVRP_1_113_0_TypeInfo;
                plVar21 = (long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
                ;
                puVar23 = (undefined8 *)OVRPlugin_OVRP_1_115_0_TypeInfo;
              }
              else {
                bVar16 = false;
                bVar22 = false;
                bVar4 = true;
              }
              lVar10 = *plVar21;
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
                lVar10 = *plVar21;
              }
              lVar10 = **(long **)(lVar10 + 0xb8);
              if (lVar10 == 0) goto LAB_07ea74f4;
              lVar18 = *(long *)(lVar10 + 0x10);
              lVar17 = *(long *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetResult__
              ;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_07ea74f4;
              uVar2 = *(uint *)(lVar10 + 0x18);
              if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar18 + (long)(int)uVar2 * 8 + 0x20) = uVar12;
              }
              else {
                FUN_04eafde0(lVar10,uVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              lVar10 = *(long *)(*(long *)(*plVar21 + 0xb8) + 8);
              if (lVar10 == 0) goto LAB_07ea74f4;
              lVar18 = *(long *)(lVar10 + 0x10);
              lVar17 = *(long *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetResult__
              ;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_07ea74f4;
              uVar2 = *(uint *)(lVar10 + 0x18);
              if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar18 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
              }
              else {
                FUN_04eafde0(lVar10,uVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              lVar10 = *(long *)(*(long *)(*plVar21 + 0xb8) + 0x10);
              if (lVar10 == 0) goto LAB_07ea74f4;
              lVar18 = *(long *)(lVar10 + 0x10);
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_07ea74f4;
              uVar2 = *(uint *)(lVar10 + 0x18);
              if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                lVar18 = lVar18 + (long)(int)uVar2 * 0x10;
                *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                *(undefined1 (*) [16])(lVar18 + 0x20) = local_70;
                thunk_FUN_03afed3c(lVar18 + 0x28,0);
              }
              else {
                FUN_04e8f350();
              }
              lVar10 = *(long *)(*(long *)(*plVar21 + 0xb8) + 0x18);
              if (lVar10 == 0) goto LAB_07ea74f4;
              lVar18 = *(long *)(lVar10 + 0x10);
              lVar17 = *(long *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetStateMachine__
              ;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_07ea74f4;
              uVar2 = *(uint *)(lVar10 + 0x18);
              if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                *(undefined4 *)(lVar18 + (long)(int)uVar2 * 4 + 0x20) = local_80;
              }
              else {
                FUN_04d5b8f0(lVar10,local_80,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
            } while ((bool)(bVar22 & bVar4));
            if (bVar4) {
              lVar10 = *plVar21;
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
                lVar10 = *plVar21;
              }
              *param_4 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10);
              thunk_FUN_03afed3c(param_4);
              *param_2 = **(undefined8 **)(*plVar21 + 0xb8);
              thunk_FUN_03afed3c(param_2);
              *param_3 = *(undefined8 *)(*(long *)(*plVar21 + 0xb8) + 8);
              thunk_FUN_03afed3c(param_3);
              uVar11 = *(undefined8 *)(*(long *)(*plVar21 + 0xb8) + 0x18);
            }
            else {
LAB_07ea7470:
              if (*(int *)(*plVar15 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar11 = FUN_07ea4cb4();
              *param_4 = uVar11;
              thunk_FUN_03afed3c();
              uVar11 = FUN_07ea4bc4();
              *param_2 = uVar11;
              thunk_FUN_03afed3c();
              uVar11 = FUN_07ea4c3c();
              *param_3 = uVar11;
              thunk_FUN_03afed3c();
              uVar11 = FUN_07ea4d2c();
            }
            *param_5 = uVar11;
            thunk_FUN_03afed3c(param_5);
            return;
          }
        }
      }
    }
  }
LAB_07ea74f4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


