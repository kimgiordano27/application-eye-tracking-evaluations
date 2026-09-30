/*
FUNCTION_NAME: FUN_067c2558
ENTRY_POINT: 067c2558
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_21;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


undefined4 FUN_067c2558(long *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  undefined4 *puVar26;
  undefined4 uVar27;
  uint uVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  uint *puVar32;
  uint uVar33;
  ulong uVar34;
  undefined8 *puVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  int local_194;
  undefined8 local_170;
  undefined8 uStack_168;
  ulong local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  uint local_9c;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  uint local_78;
  undefined1 local_74 [4];
  
  if ((DAT_0755887f & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(System_Data_ConstNode_TypeInfo);
    FUN_03188a78(UnityEngine_XR_OpenXR_WaitForRestartFinish_TypeInfo);
    FUN_03188a78(PTR_DAT_070c2600);
    FUN_03188a78(UnityEngine_Rendering_VolumeComponent_TypeInfo);
    FUN_03188a78(PTR_DAT_070c2610);
    FUN_03188a78(DG_Tweening_Plugins_Vector3ArrayPlugin_TypeInfo);
    FUN_03188a78(UnityEngine_WaitForSeconds_TypeInfo);
    FUN_03188a78(UnityEngine_WaitForSecondsRealtime_TypeInfo);
    FUN_03188a78(System_Threading_WaitHandle_TypeInfo);
    FUN_03188a78(System_Threading_WaitHandleCannotBeOpenedException_TypeInfo);
    FUN_03188a78(System_Threading_WaitOrTimerCallback_TypeInfo);
    FUN_03188a78(PTR_DAT_070f0e50);
    FUN_03188a78(PTR_DAT_070c2638);
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(UnityEngine_WaitUntil_TypeInfo);
    FUN_03188a78(UnityEngine_Rendering_Vrs_TypeInfo);
    FUN_03188a78(System_Net_Http_Headers_WarningHeaderValue_TypeInfo);
    FUN_03188a78(UnityEngine_Vector3Int_TypeInfo);
    FUN_03188a78(Unity_Properties_Internal_Vector3IntPropertyBag_TypeInfo);
    FUN_03188a78(UnityEngine_Rendering_Vector3Parameter_TypeInfo);
    FUN_03188a78(Sentry_Unity_WarningTimeDebounce_TypeInfo);
    FUN_03188a78(MyBox_WarningsPool_TypeInfo);
    FUN_03188a78(System_Net_WebSockets_WebSocketHandle_TypeInfo);
    FUN_03188a78(UnityEngine_Vector4_TypeInfo);
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Theme_Primitives_Vector4AffordanceTheme_TypeInfo
                );
    FUN_03188a78(UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_TypeInfo);
    FUN_03188a78(System_Text_Json_Serialization_Converters_VersionConverter_TypeInfo);
    FUN_03188a78(PTR_DAT_0711c200);
    FUN_03188a78(Meta_XR_ImmersiveDebugger_Manager_WatchManagerForAddon_TypeInfo);
    FUN_03188a78(Meta_XR_ImmersiveDebugger_Manager_WatchTexture_TypeInfo);
    FUN_03188a78(Meta_XR_ImmersiveDebugger_Manager_WatchUtils_TypeInfo);
    FUN_03188a78(Oculus_Interaction_Demo_WaterSpray_TypeInfo);
    DAT_0755887f = 1;
  }
  puVar5 = System_Text_Json_Serialization_Converters_VersionConverter_TypeInfo;
  local_74[0] = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  local_9c = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined1 *)((long)param_1 + 0x292) = 0;
  plVar30 = (long *)PTR_DAT_0711c200;
  *(undefined2 *)(param_1 + 0x8d) = 0;
  *(int *)((long)param_1 + 0x284) = (int)param_1[0x50];
  FUN_0681cdb8(param_1 + 0x51,0);
  puVar4 = UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_TypeInfo;
  if ((*(byte *)((long)param_1 + 0x284) & 1) == 0) {
    uVar27 = (undefined4)param_1[0x47];
  }
  else {
    uVar27 = 700;
  }
  uVar20 = *(undefined8 *)puVar5;
  *(undefined4 *)((long)param_1 + 0x23c) = uVar27;
  FUN_04b49194(param_1 + 0x48,uVar27,uVar20);
  lVar21 = param_1[0x1f];
  lVar22 = param_1[0x22];
  lVar14 = *plVar30;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x20] = lVar21;
  param_1[0x23] = lVar22;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    uVar27 = (undefined4)param_1[0x24];
    lVar21 = param_1[0x20];
    lVar22 = param_1[0x23];
  }
  else {
    uVar27 = 0;
  }
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  FUN_067b6584((int)param_1[0xc6],&local_e0,uVar27,lVar21,0,lVar22);
  uStack_168 = uStack_d8;
  local_170 = local_e0;
  uStack_158 = uStack_c8;
  local_160 = local_d0;
  uStack_148 = uStack_b8;
  local_150 = local_c0;
  local_140 = local_b0;
  uVar17 = local_d0;
  FUN_04b49784(*(long *)(*plVar30 + 0xb8) + 0x10,&local_170,*(undefined8 *)puVar4);
  puVar35 = (undefined8 *)Sentry_Unity_WarningTimeDebounce_TypeInfo;
  puVar4 = UnityEngine_Vector4_TypeInfo;
  lVar14 = *(long *)(*(long *)(*plVar30 + 0xb8) + 8);
  if (lVar14 == 0) goto LAB_067c4854;
  FUN_0518114c(lVar14,*(undefined8 *)System_Data_ConstNode_TypeInfo);
  FUN_067b6708(param_1[0x23],param_1[0x20],*(long *)(*plVar30 + 0xb8),
               *(undefined8 *)(*(long *)(*plVar30 + 0xb8) + 8));
  if (param_1[0x74] == 0) {
    lVar14 = param_1[0x92];
    lVar21 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar4);
    FUN_0681b534(lVar21,(int)lVar14,0);
    param_1[0x74] = lVar21;
  }
  else {
    plVar29 = (long *)(param_1[0x74] + 0x38);
    lVar14 = *plVar29;
    if (lVar14 == 0) goto LAB_067c4854;
    lVar21 = param_1[0x92];
    if (*(int *)(lVar14 + 0x18) < (int)lVar21) {
      if (*(int *)(*(long *)UnityEngine_Vector4_TypeInfo + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_03c51094(plVar29,(int)lVar21,0,*puVar35);
    }
  }
  plVar29 = (long *)Unity_Properties_Internal_Vector3IntPropertyBag_TypeInfo;
  *(undefined4 *)((long)param_1 + 0x65c) = 0;
  if ((int)param_1[0x62] == 1) {
    FUN_067fd290(param_1,param_1[0x20],0);
    if (param_1[0xcd] == 0) {
      lVar14 = *plVar29;
      *(undefined4 *)(param_1 + 0x62) = 3;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar15 = FUN_06812604(0);
      if ((uVar15 & 1) == 0) {
        if (param_1[0x20] == 0) goto LAB_067c4854;
        uVar20 = thunk_FUN_069dc13c(param_1[0x20],0);
        uVar20 = FUN_057bf780(*(undefined8 *)Meta_XR_ImmersiveDebugger_Manager_WatchUtils_TypeInfo,
                              uVar20,*(undefined8 *)Oculus_Interaction_Demo_WaterSpray_TypeInfo,0);
        if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
          thunk_FUN_031e5338(*(long *)PTR_DAT_070c2418);
        }
        FUN_0698f53c(uVar20,param_1,0);
      }
    }
    else {
      if (param_1[0xce] == 0) goto LAB_067c4854;
      iVar7 = FUN_069dbe8c(param_1[0xce],0);
      if (param_1[0x20] == 0) goto LAB_067c4854;
      iVar8 = FUN_069dbe8c(param_1[0x20],0);
      if (iVar7 != iVar8) {
        if (*(int *)(*plVar29 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar15 = FUN_06812b1c(0);
        if ((uVar15 & 1) == 0) {
LAB_067c2984:
          lVar14 = param_1[0xce];
          if (lVar14 == 0) goto LAB_067c4854;
          lVar21 = *(long *)(lVar14 + 0x88);
          param_1[0xcf] = lVar21;
        }
        else {
          if (param_1[0x23] == 0) goto LAB_067c4854;
          iVar7 = FUN_069dbe8c(param_1[0x23],0);
          if ((param_1[0xce] == 0) || (lVar14 = *(long *)(param_1[0xce] + 0x88), lVar14 == 0))
          goto LAB_067c4854;
          iVar8 = FUN_069dbe8c(lVar14,0);
          if (iVar7 == iVar8) goto LAB_067c2984;
          if (param_1[0xce] == 0) goto LAB_067c4854;
          lVar14 = param_1[0x23];
          uVar20 = *(undefined8 *)(param_1[0xce] + 0x88);
          if (*(int *)(*(long *)System_Net_Http_Headers_WarningHeaderValue_TypeInfo + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          lVar21 = FUN_0680dca8(lVar14,uVar20,0);
          lVar14 = param_1[0xce];
          param_1[0xcf] = lVar21;
        }
        lVar22 = *plVar30;
        if (*(int *)(lVar22 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar22 = *plVar30;
        }
        uVar9 = FUN_067b6708(lVar21,lVar14,*(long *)(lVar22 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 8));
        lVar14 = *plVar30;
        *(uint *)(param_1 + 0xd0) = uVar9;
        lVar14 = **(long **)(lVar14 + 0xb8);
        if (lVar14 == 0) goto LAB_067c4854;
        if (*(uint *)(lVar14 + 0x18) <= uVar9) {
LAB_067c48ec:
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        *(undefined4 *)(lVar14 + (long)(int)uVar9 * 0x38 + 0x54) = 0;
      }
    }
  }
  if (param_1[0x66] == 0) {
LAB_067c4854:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar9 = FUN_04399354(param_1[0x66],0x6c696761,
                       *(undefined8 *)DG_Tweening_Plugins_Vector3ArrayPlugin_TypeInfo);
  if ((int)param_1[0x62] == 6) {
    lVar14 = param_1[99];
    if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar15 = FUN_069d69b8(lVar14,0,0);
    puVar4 = PTR_DAT_070c1958;
    if (((uVar15 & 1) != 0) && (plVar31 = param_1, *(char *)((long)param_1 + 0x42d) == '\0')) {
      while( true ) {
        plVar31 = (long *)plVar31[99];
        if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar15 = FUN_069d69b8(plVar31,0,0);
        if ((uVar15 & 1) == 0) goto LAB_067c2b28;
        if (plVar31 == (long *)0x0) break;
        (**(code **)(*plVar31 + 0x558))
                  (plVar31,**(undefined8 **)(*(long *)(puVar4 + 0x90) + 0xb8),
                   *(undefined8 *)(*plVar31 + 0x560));
        (**(code **)(*plVar31 + 0x948))(plVar31,*(undefined8 *)(*plVar31 + 0x950));
        lVar14 = FUN_067ebab4(plVar31,0);
        if (lVar14 == 0) break;
        FUN_0681b7f4(lVar14,0);
      }
      goto LAB_067c4854;
    }
  }
LAB_067c2b28:
  if (param_2 == 0) goto LAB_067c4854;
  uVar10 = *(uint *)(param_2 + 0x18);
  if ((int)uVar10 < 1) {
    local_194 = 0;
UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__TryGetCurrentRaycast:
    if (*(char *)((long)param_1 + 0x42d) != '\0') {
      *(undefined1 *)((long)param_1 + 0x42d) = 0;
LAB_067c3fb4:
      return (int)param_1[0x94];
    }
    lVar14 = param_1[0x74];
    if (lVar14 != 0) {
      lVar21 = *plVar30;
      *(int *)(lVar14 + 0x1c) = local_194;
      puVar4 = UnityEngine_Vector4_TypeInfo;
      if (*(int *)(lVar21 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar21 = *plVar30;
      }
      lVar21 = *(long *)(*(long *)(lVar21 + 0xb8) + 8);
      if (lVar21 != 0) {
        uVar9 = FUN_05180cc8(lVar21,*(undefined8 *)UnityEngine_Rendering_VolumeComponent_TypeInfo);
        *(uint *)(lVar14 + 0x34) = uVar9;
        if (param_1[0x74] != 0) {
          plVar29 = (long *)(param_1[0x74] + 0x60);
          lVar14 = *plVar29;
          if (lVar14 != 0) {
            uVar15 = (ulong)uVar9;
            if (*(int *)(lVar14 + 0x18) < (int)uVar9) {
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              FUN_03c51140(plVar29,uVar15,0,*(undefined8 *)MyBox_WarningsPool_TypeInfo);
            }
            if (param_1[0xe4] != 0) {
              plVar29 = param_1 + 0xe4;
              if (*(int *)(param_1[0xe4] + 0x18) < (int)uVar9) {
                uVar10 = uVar9 | (int)uVar9 >> 0x10;
                uVar10 = uVar10 | (int)uVar10 >> 8;
                uVar10 = uVar10 | (int)uVar10 >> 4;
                uVar10 = uVar10 | (int)uVar10 >> 2;
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_031e5338();
                }
                FUN_03c50e64(plVar29,(uVar10 | (int)uVar10 >> 1) + 1,
                             *(undefined8 *)System_Net_WebSockets_WebSocketHandle_TypeInfo);
              }
              if (*(char *)((long)param_1 + 0x359) != '\0') {
                if (param_1[0x74] == 0) goto LAB_067c4854;
                plVar31 = (long *)(param_1[0x74] + 0x38);
                lVar14 = *plVar31;
                if (lVar14 == 0) goto LAB_067c4854;
                iVar7 = (int)param_1[0x94];
                if (0x100 < *(int *)(lVar14 + 0x18) - iVar7) {
                  iVar8 = 0x100;
                  if (0x100 < iVar7 + 1) {
                    iVar8 = iVar7 + 1;
                  }
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_031e5338();
                  }
                  FUN_03c51094(plVar31,iVar8,1,*puVar35);
                }
              }
              puVar4 = UnityEngine_Vector3Int_TypeInfo;
              fVar3 = DAT_012e345c;
              if (0 < (int)uVar9) {
                lVar14 = 0;
                uVar34 = 0;
                lVar21 = 0x54;
                do {
                  fVar39 = (float)uVar17;
                  if (uVar34 == 0) {
                    lVar22 = *plVar30;
                  }
                  else {
                    lVar22 = *plVar29;
                    if (lVar22 == 0) goto LAB_067c4854;
                    if (*(uint *)(lVar22 + 0x18) <= uVar34) goto LAB_067c48ec;
                    uVar20 = *(undefined8 *)(lVar22 + uVar34 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
                      thunk_FUN_031e5338();
                    }
                    uVar17 = FUN_069d8404(uVar20,0,0);
                    if ((uVar17 & 1) != 0) {
                      lVar22 = *plVar30;
                      plVar31 = (long *)*plVar29;
                      if (*(int *)(lVar22 + 0xe4) == 0) {
                        thunk_FUN_031e5338();
                        lVar22 = *plVar30;
                      }
                      lVar22 = **(long **)(lVar22 + 0xb8);
                      if (lVar22 == 0) goto LAB_067c4854;
                      if (*(uint *)(lVar22 + 0x18) <= uVar34) goto LAB_067c48ec;
                      lVar22 = lVar22 + lVar21;
                      local_f0 = *(undefined8 *)(lVar22 + -4);
                      uStack_f8 = *(undefined8 *)(lVar22 + -0xc);
                      uStack_100 = *(undefined8 *)(lVar22 + -0x14);
                      uStack_118 = *(undefined8 *)(lVar22 + -0x2c);
                      uVar20 = *(undefined8 *)(lVar22 + -0x34);
                      uStack_108 = *(undefined8 *)(lVar22 + -0x1c);
                      local_110 = *(undefined8 *)(lVar22 + -0x24);
                      local_120 = uVar20;
                      lVar22 = FUN_0681a304(param_1,&local_120,0);
                      fVar39 = (float)uVar20;
                      if (plVar31 == (long *)0x0) goto LAB_067c4854;
                      if ((lVar22 != 0) &&
                         (lVar18 = thunk_FUN_031c3cac(lVar22,*(undefined8 *)(*plVar31 + 0x40)),
                         lVar18 == 0)) {
LAB_067c48f0:
                        uVar20 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
                        FUN_03188b9c(uVar20,0);
                      }
                      if (*(uint *)(plVar31 + 3) <= uVar34) goto LAB_067c48ec;
                      plVar31[uVar34 + 4] = lVar22;
                      plVar30 = (long *)PTR_DAT_0711c200;
                      if ((param_1[0x74] == 0) ||
                         (lVar22 = *(long *)(param_1[0x74] + 0x60), lVar22 == 0)) goto LAB_067c4854;
                      if (*(uint *)(lVar22 + 0x18) <= uVar34) goto LAB_067c48ec;
                      *(undefined8 *)(lVar22 + lVar14 + 0x30) = 0;
                    }
                    if (param_1[0x77] == 0) goto LAB_067c4854;
                    fVar36 = (float)FUN_069e6360(param_1[0x77],0);
                    lVar22 = *plVar29;
                    if (lVar22 == 0) goto LAB_067c4854;
                    if (*(uint *)(lVar22 + 0x18) <= uVar34) goto LAB_067c48ec;
                    lVar22 = *(long *)(lVar22 + uVar34 * 8 + 0x20);
                    if ((lVar22 == 0) ||
                       (fVar38 = fVar39, lVar22 = FUN_06ad2524(lVar22,0), lVar22 == 0))
                    goto LAB_067c4854;
                    fVar37 = (float)FUN_069e6360(lVar22,0);
                    fVar39 = (fVar39 - fVar38) * (fVar39 - fVar38);
                    uVar17 = (ulong)(uint)fVar39;
                    if (fVar3 <= (fVar36 - fVar37) * (fVar36 - fVar37) + fVar39) {
                      lVar22 = *plVar29;
                      if (lVar22 == 0) goto LAB_067c4854;
                      if (*(uint *)(lVar22 + 0x18) <= uVar34) goto LAB_067c48ec;
                      lVar22 = *(long *)(lVar22 + uVar34 * 8 + 0x20);
                      if (lVar22 == 0) goto LAB_067c4854;
                      lVar22 = FUN_06ad2524(lVar22,0);
                      if ((param_1[0x77] == 0) || (FUN_069e6360(param_1[0x77],0), lVar22 == 0))
                      goto LAB_067c4854;
                      FUN_069e642c(lVar22,0);
                    }
                    lVar22 = *plVar29;
                    if (lVar22 == 0) goto LAB_067c4854;
                    if (*(uint *)(lVar22 + 0x18) <= uVar34) goto LAB_067c48ec;
                    lVar22 = *(long *)(lVar22 + uVar34 * 8 + 0x20);
                    if (lVar22 == 0) goto LAB_067c4854;
                    uVar20 = *(undefined8 *)(lVar22 + 0xf0);
                    if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
                      thunk_FUN_031e5338();
                    }
                    uVar19 = FUN_069d8404(uVar20,0,0);
                    if ((uVar19 & 1) == 0) {
                      lVar22 = *plVar29;
                      if (lVar22 == 0) goto LAB_067c4854;
                      if (*(uint *)(lVar22 + 0x18) <= uVar34) goto LAB_067c48ec;
                      lVar22 = *(long *)(lVar22 + uVar34 * 8 + 0x20);
                      if ((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0xf0), lVar22 == 0))
                      goto LAB_067c4854;
                      iVar7 = FUN_069dbe8c(lVar22,0);
                      lVar22 = *plVar30;
                      if (*(int *)(lVar22 + 0xe4) == 0) {
                        thunk_FUN_031e5338(lVar22);
                        lVar22 = *plVar30;
                      }
                      lVar22 = **(long **)(lVar22 + 0xb8);
                      if (lVar22 == 0) goto LAB_067c4854;
                      if (*(uint *)(lVar22 + 0x18) <= uVar34) goto LAB_067c48ec;
                      lVar22 = *(long *)(lVar22 + lVar21 + -0x1c);
                      if (lVar22 == 0) goto LAB_067c4854;
                      iVar8 = FUN_069dbe8c(lVar22,0);
                      if (iVar7 != iVar8) goto LAB_067c43f4;
                      lVar22 = *plVar30;
                    }
                    else {
LAB_067c43f4:
                      lVar22 = *plVar29;
                      if (lVar22 == 0) goto LAB_067c4854;
                      if (*(uint *)(lVar22 + 0x18) <= uVar34) goto LAB_067c48ec;
                      lVar18 = *plVar30;
                      lVar22 = *(long *)(lVar22 + uVar34 * 8 + 0x20);
                      if (*(int *)(lVar18 + 0xe4) == 0) {
                        thunk_FUN_031e5338();
                        lVar18 = *plVar30;
                      }
                      lVar18 = **(long **)(lVar18 + 0xb8);
                      if (lVar18 == 0) goto LAB_067c4854;
                      if (*(uint *)(lVar18 + 0x18) <= uVar34) goto LAB_067c48ec;
                      if (lVar22 == 0) goto LAB_067c4854;
                      FUN_06819f7c(lVar22,*(undefined8 *)(lVar18 + lVar21 + -0x1c),0);
                      lVar18 = *plVar29;
                      if (lVar18 == 0) goto LAB_067c4854;
                      if (*(uint *)(lVar18 + 0x18) <= uVar34) goto LAB_067c48ec;
                      lVar22 = *plVar30;
                      lVar24 = **(long **)(lVar22 + 0xb8);
                      if (lVar24 == 0) goto LAB_067c4854;
                      if (*(uint *)(lVar24 + 0x18) <= uVar34) goto LAB_067c48ec;
                      lVar18 = lVar18 + uVar34 * 8;
                      lVar25 = *(long *)(lVar18 + 0x20);
                      if (lVar25 == 0) goto LAB_067c4854;
                      *(undefined8 *)(lVar25 + 0xd8) = *(undefined8 *)(lVar24 + lVar21 + -0x2c);
                      lVar18 = *(long *)(lVar18 + 0x20);
                      if (lVar18 == 0) goto LAB_067c4854;
                      *(undefined8 *)(lVar18 + 0xe0) = *(undefined8 *)(lVar24 + lVar21 + -0x24);
                    }
                    if (*(int *)(lVar22 + 0xe4) == 0) {
                      thunk_FUN_031e5338();
                      lVar22 = *plVar30;
                    }
                    lVar18 = **(long **)(lVar22 + 0xb8);
                    if (lVar18 == 0) goto LAB_067c4854;
                    if (*(uint *)(lVar18 + 0x18) <= uVar34) goto LAB_067c48ec;
                    if (*(char *)(lVar18 + lVar21 + -0x13) != '\0') {
                      lVar24 = *plVar29;
                      if (lVar24 == 0) goto LAB_067c4854;
                      if (*(uint *)(lVar24 + 0x18) <= uVar34) goto LAB_067c48ec;
                      lVar24 = *(long *)(lVar24 + uVar34 * 8 + 0x20);
                      if (*(int *)(lVar22 + 0xe4) == 0) {
                        thunk_FUN_031e5338();
                        lVar18 = **(long **)(*plVar30 + 0xb8);
                        if (lVar18 == 0) goto LAB_067c4854;
                      }
                      if (*(uint *)(lVar18 + 0x18) <= uVar34) goto LAB_067c48ec;
                      if (lVar24 == 0) goto LAB_067c4854;
                      FUN_06819fe4(lVar24,*(undefined8 *)(lVar18 + lVar21 + -0x1c),0);
                      lVar18 = *plVar29;
                      if (lVar18 == 0) goto LAB_067c4854;
                      if (*(uint *)(lVar18 + 0x18) <= uVar34) goto LAB_067c48ec;
                      lVar22 = *plVar30;
                      lVar24 = **(long **)(lVar22 + 0xb8);
                      if (lVar24 == 0) goto LAB_067c4854;
                      if (*(uint *)(lVar24 + 0x18) <= uVar34) goto LAB_067c48ec;
                      lVar18 = *(long *)(lVar18 + uVar34 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_067c4854;
                      *(undefined8 *)(lVar18 + 0x100) = *(undefined8 *)(lVar24 + lVar21 + -0xc);
                    }
                  }
                  if (*(int *)(lVar22 + 0xe4) == 0) {
                    thunk_FUN_031e5338();
                    lVar22 = *plVar30;
                  }
                  lVar22 = **(long **)(lVar22 + 0xb8);
                  if (lVar22 == 0) goto LAB_067c4854;
                  if (*(uint *)(lVar22 + 0x18) <= uVar34) goto LAB_067c48ec;
                  if ((param_1[0x74] == 0) ||
                     (lVar18 = *(long *)(param_1[0x74] + 0x60), lVar18 == 0)) goto LAB_067c4854;
                  if (*(uint *)(lVar18 + 0x18) <= uVar34) goto LAB_067c48ec;
                  uVar10 = *(uint *)(lVar22 + lVar21);
                  lVar22 = *(long *)(lVar18 + lVar14 + 0x30);
                  if (lVar22 == 0) {
                    if (uVar34 == 0) {
                      uStack_158 = 0;
                      local_160 = 0;
                      uStack_148 = 0;
                      local_150 = 0;
                      uStack_138 = 0;
                      local_140 = 0;
                      uStack_128 = 0;
                      uStack_130 = 0;
                      uStack_168 = 0;
                      local_170 = 0;
                      FUN_0680e7a0(&local_170,param_1[0x7b],uVar10 + 1,0);
                      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_067c48ec;
                    }
                    else {
                      lVar22 = *plVar29;
                      if (lVar22 == 0) goto LAB_067c4854;
                      if (*(uint *)(lVar22 + 0x18) <= uVar34) goto LAB_067c48ec;
                      lVar22 = *(long *)(lVar22 + uVar34 * 8 + 0x20);
                      if (lVar22 == 0) goto LAB_067c4854;
                      uVar20 = FUN_0681a1b8(lVar22,0);
                      uStack_158 = 0;
                      local_160 = 0;
                      uStack_148 = 0;
                      local_150 = 0;
                      uStack_138 = 0;
                      local_140 = 0;
                      uStack_128 = 0;
                      uStack_130 = 0;
                      uStack_168 = 0;
                      local_170 = 0;
                      FUN_0680e7a0(&local_170,uVar20,uVar10 + 1,0);
                      if (*(uint *)(lVar18 + 0x18) <= uVar34) goto LAB_067c48ec;
                      lVar18 = lVar18 + lVar14;
                    }
                    memmove((void *)(lVar18 + 0x20),&local_170,0x50);
                  }
                  else {
                    iVar7 = *(int *)(lVar22 + 0x18);
                    if (iVar7 < (int)(uVar10 * 4)) {
                      if ((int)uVar10 < 0x401) {
                        uVar10 = uVar10 | (int)uVar10 >> 0x10;
                        uVar10 = uVar10 | (int)uVar10 >> 8;
                        uVar10 = uVar10 | (int)uVar10 >> 4;
                        uVar10 = uVar10 | (int)uVar10 >> 2;
                        uVar10 = uVar10 | (int)uVar10 >> 1;
LAB_067c46c4:
                        iVar7 = uVar10 + 1;
                      }
                      else {
LAB_067c45f4:
                        iVar7 = uVar10 + 0x100;
                      }
                      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                        thunk_FUN_031e5338();
                      }
                      FUN_0680f474(lVar18 + lVar14 + 0x20,iVar7,0);
                    }
                    else if ((*(char *)((long)param_1 + 0x359) != '\0') && (0 < (int)uVar10)) {
                      iVar8 = iVar7 + 3;
                      if (-1 < iVar7) {
                        iVar8 = iVar7;
                      }
                      if (0x100 < (int)((iVar8 >> 2) - uVar10)) {
                        if (uVar10 < 0x401) {
                          uVar10 = uVar10 >> 4 | uVar10 >> 8 | uVar10;
                          uVar10 = uVar10 | uVar10 >> 2;
                          uVar10 = uVar10 | uVar10 >> 1;
                          goto LAB_067c46c4;
                        }
                        goto LAB_067c45f4;
                      }
                    }
                  }
                  plVar30 = (long *)PTR_DAT_0711c200;
                  if ((param_1[0x74] == 0) ||
                     (lVar22 = *(long *)(param_1[0x74] + 0x60), lVar22 == 0)) goto LAB_067c4854;
                  lVar18 = *(long *)PTR_DAT_0711c200;
                  if (*(int *)(lVar18 + 0xe4) == 0) {
                    thunk_FUN_031e5338();
                    lVar18 = *plVar30;
                  }
                  lVar18 = **(long **)(lVar18 + 0xb8);
                  if (lVar18 == 0) goto LAB_067c4854;
                  if ((*(uint *)(lVar18 + 0x18) <= uVar34) || (*(uint *)(lVar22 + 0x18) <= uVar34))
                  goto LAB_067c48ec;
                  lVar18 = lVar18 + lVar21;
                  uVar34 = uVar34 + 1;
                  lVar22 = lVar22 + lVar14;
                  lVar14 = lVar14 + 0x50;
                  lVar21 = lVar21 + 0x38;
                  *(undefined8 *)(lVar22 + 0x68) = *(undefined8 *)(lVar18 + -0x1c);
                } while (uVar15 != uVar34);
              }
              lVar14 = *plVar29;
              if (lVar14 != 0) {
                lVar21 = (long)(int)uVar9 + 4;
                do {
                  uVar9 = (uint)*(undefined8 *)(lVar14 + 0x18);
                  if ((long)(int)uVar9 <= lVar21 + -4) goto LAB_067c3fb4;
                  uVar10 = (uint)uVar15;
                  if (uVar9 <= uVar10) goto LAB_067c48ec;
                  uVar20 = *(undefined8 *)(lVar14 + lVar21 * 8);
                  if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
                    thunk_FUN_031e5338();
                  }
                  uVar17 = FUN_069d69b8(uVar20,0,0);
                  if ((uVar17 & 1) == 0) goto LAB_067c3fb4;
                  if ((param_1[0x74] == 0) ||
                     (lVar14 = *(long *)(param_1[0x74] + 0x60), lVar14 == 0)) break;
                  if (lVar21 + -4 < (long)*(int *)(lVar14 + 0x18)) {
                    lVar14 = *plVar29;
                    if (lVar14 == 0) break;
                    if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_067c48ec;
                    lVar14 = *(long *)(lVar14 + lVar21 * 8);
                    if ((lVar14 == 0) || (lVar14 = FUN_06ad2dc8(lVar14,0), lVar14 == 0)) break;
                    FUN_06c8b4fc(lVar14,0,0);
                  }
                  lVar14 = *plVar29;
                  lVar21 = lVar21 + 1;
                  uVar15 = (ulong)(uVar10 + 1);
                } while (lVar14 != 0);
              }
            }
          }
        }
      }
    }
    goto LAB_067c4854;
  }
  uVar28 = 0;
  lVar14 = param_2 + 0x20;
  local_194 = 0;
LAB_067c2b48:
  if (uVar10 <= uVar28) goto LAB_067c48ec;
  puVar32 = (uint *)(lVar14 + (long)(int)uVar28 * 0x10 + 4);
  if (*puVar32 == 0)
  goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__TryGetCurrentRaycast;
  if (param_1[0x74] == 0) goto LAB_067c4854;
  plVar30 = (long *)(param_1[0x74] + 0x38);
  lVar22 = *plVar30;
  lVar21 = param_1[0x94];
  if ((lVar22 == 0) || (*(int *)(lVar22 + 0x18) <= (int)lVar21)) {
    if (*(int *)(*(long *)UnityEngine_Vector4_TypeInfo + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_03c51094(plVar30,(int)lVar21 + 1,1,*puVar35);
    uVar10 = *(uint *)(param_2 + 0x18);
  }
  if (uVar10 <= uVar28) goto LAB_067c48ec;
  uVar10 = *puVar32;
  uVar27 = (undefined4)param_1[0x24];
  if ((*(char *)((long)param_1 + 0x33a) != '\0') && (uVar10 == 0x3c)) {
    uVar15 = FUN_067f2ab0(param_1,param_2,uVar28 + 1,&local_78,0);
    uVar1 = local_78;
    if ((uVar15 & 1) == 0) {
      uVar27 = (undefined4)param_1[0x24];
      goto LAB_067c2db4;
    }
    if (*(uint *)(param_2 + 0x18) <= uVar28) goto LAB_067c48ec;
    iVar7 = *(int *)(lVar14 + (long)(int)uVar28 * 0x10 + 8);
    if ((*(byte *)((long)param_1 + 0x284) & 1) != 0) {
      *(undefined1 *)((long)param_1 + 0x292) = 1;
    }
    plVar30 = (long *)PTR_DAT_0711c200;
    uVar28 = local_78;
    if (*(int *)((long)param_1 + 0x65c) != 1) goto LAB_067c3f90;
    lVar21 = *(long *)PTR_DAT_0711c200;
    if (*(int *)(lVar21 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar21 = *plVar30;
    }
    lVar21 = **(long **)(lVar21 + 0xb8);
    if (lVar21 != 0) {
      if (*(uint *)(param_1 + 0x24) < *(uint *)(lVar21 + 0x18)) {
        lVar21 = lVar21 + (long)(int)*(uint *)(param_1 + 0x24) * 0x38;
        *(int *)(lVar21 + 0x54) = *(int *)(lVar21 + 0x54) + 1;
        if ((param_1[0x74] != 0) && (lVar21 = *(long *)(param_1[0x74] + 0x38), lVar21 != 0)) {
          uVar10 = *(uint *)(param_1 + 0x94);
          if (uVar10 < *(uint *)(lVar21 + 0x18)) {
            lVar22 = lVar21 + 0x20 + (long)(int)uVar10 * 0x178;
            *(short *)(lVar22 + 4) = *(short *)((long)param_1 + 0x6bc) + -0x2000;
            *(long *)(lVar22 + 0x20) = param_1[0x20];
            *(int *)(lVar22 + 0x30) = (int)param_1[0x24];
            if ((param_1[0xd6] != 0) &&
               (lVar22 = UnityEngine_XR_Interaction_Toolkit_Feedback_SimpleHapticFeedback__get_selectExitedData
                                   (param_1[0xd6],0), lVar22 != 0)) {
              uVar20 = FUN_042e47a4(lVar22,*(undefined4 *)((long)param_1 + 0x6bc),
                                    *(undefined8 *)
                                     System_Threading_WaitHandleCannotBeOpenedException_TypeInfo);
              if (uVar10 < *(uint *)(lVar21 + 0x18)) {
                *(undefined8 *)(lVar21 + 0x20 + (long)(int)uVar10 * 0x178 + 0x10) = uVar20;
                if ((param_1[0x74] != 0) && (lVar21 = *(long *)(param_1[0x74] + 0x38), lVar21 != 0))
                {
                  uVar10 = *(uint *)(param_1 + 0x94);
                  if (uVar10 < *(uint *)(lVar21 + 0x18)) {
                    puVar26 = (undefined4 *)(lVar21 + 0x20 + (long)(int)uVar10 * 0x178);
                    *puVar26 = *(undefined4 *)((long)param_1 + 0x65c);
                    puVar26[2] = iVar7;
                    if (uVar1 < *(uint *)(param_2 + 0x18)) {
                      *(int *)(lVar21 + 0x20 + (long)(int)uVar10 * 0x178 + 0xc) =
                           (*(int *)(lVar14 + (long)(int)uVar1 * 0x10 + 8) - iVar7) + 1;
                      *(undefined4 *)((long)param_1 + 0x65c) = 0;
                      local_194 = local_194 + 1;
                      *(undefined4 *)(param_1 + 0x24) = uVar27;
                      uVar28 = uVar1;
                      goto LAB_067c3f88;
                    }
                  }
                  goto LAB_067c48ec;
                }
                goto LAB_067c4854;
              }
              goto LAB_067c48ec;
            }
            goto LAB_067c4854;
          }
          goto LAB_067c48ec;
        }
        goto LAB_067c4854;
      }
      goto LAB_067c48ec;
    }
    goto LAB_067c4854;
  }
LAB_067c2db4:
  lVar22 = param_1[0x20];
  lVar21 = param_1[0x23];
  local_74[0] = 0;
  if (*(int *)((long)param_1 + 0x65c) != 0) goto LAB_067c2e7c;
  uVar1 = *(uint *)((long)param_1 + 0x284);
  if ((uVar1 >> 4 & 1) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      if ((uVar1 >> 5 & 1) != 0) goto LAB_067c2ddc;
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0x88) + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar15 = FUN_058a799c(uVar10,0);
      if ((uVar15 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0x88) + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar10 = FUN_058a7e3c(uVar10,0);
        goto LAB_067c2e78;
      }
    }
  }
  else {
LAB_067c2ddc:
    if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0x88) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar15 = FUN_058a7a3c(uVar10,0);
    if ((uVar15 & 1) != 0) {
      if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0x88) + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar10 = FUN_058a7cc4(uVar10,0);
LAB_067c2e78:
      uVar10 = uVar10 & 0xffff;
    }
  }
LAB_067c2e7c:
  uVar1 = uVar28 + 1;
  if ((int)uVar1 < (int)*(uint *)(param_2 + 0x18)) {
    if (*(uint *)(param_2 + 0x18) <= uVar1) goto LAB_067c48ec;
    uVar33 = *(uint *)(lVar14 + (long)(int)uVar1 * 0x10 + 4);
  }
  else {
    uVar33 = 0;
  }
  uVar11 = uVar10;
  if (*(char *)((long)param_1 + 0x33b) == '\0') {
LAB_067c2fe8:
    lVar18 = FUN_067fd650(param_1,uVar10,param_1[0x20],*(undefined4 *)((long)param_1 + 0x284),
                          *(undefined4 *)((long)param_1 + 0x23c),local_74,0);
    plVar30 = (long *)PTR_DAT_0711c200;
    if (lVar18 == 0) {
      if (*(uint *)(param_2 + 0x18) <= uVar28) goto LAB_067c48ec;
      FUN_067fdce8(param_1,uVar10,*(undefined4 *)(lVar14 + (long)(int)uVar28 * 0x10 + 8),
                   param_1[0x20],0);
      if (*(int *)(*plVar29 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      iVar7 = FUN_068124ec(0);
      plVar30 = (long *)PTR_DAT_0711c200;
      bVar6 = *(uint *)(param_2 + 0x18) <= uVar28;
      if (iVar7 == 0) {
        if (bVar6) goto LAB_067c48ec;
        uVar11 = 0x25a1;
      }
      else {
        if (bVar6) goto LAB_067c48ec;
        if (*(int *)(*plVar29 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar11 = FUN_068124ec(0);
      }
      *puVar32 = uVar11;
      lVar18 = param_1[0x20];
      if (*(int *)(*(long *)UnityEngine_WaitUntil_TypeInfo + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      lVar18 = FUN_067db188(uVar11,lVar18,1,0,400,local_74,0);
      if (lVar18 == 0) {
        if (*(int *)(*plVar29 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        lVar18 = UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader__TryGetInputActionReference
                           (0);
        if (lVar18 != 0) {
          if (*(int *)(*plVar29 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          lVar18 = UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader__TryGetInputActionReference
                             (0);
          if (lVar18 == 0) goto LAB_067c4854;
          if (0 < *(int *)(lVar18 + 0x18)) {
            lVar18 = param_1[0x20];
            if (*(int *)(*plVar29 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            uVar20 = UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader__TryGetInputActionReference
                               (0);
            if (*(int *)(*(long *)UnityEngine_WaitUntil_TypeInfo + 0xe4) == 0) {
              thunk_FUN_031e5338(*(long *)UnityEngine_WaitUntil_TypeInfo);
            }
            lVar18 = FUN_067db8c4(uVar11,lVar18,uVar20,1,0,400,local_74,0);
            plVar29 = (long *)Unity_Properties_Internal_Vector3IntPropertyBag_TypeInfo;
            if (lVar18 != 0) goto LAB_067c331c;
          }
        }
        if (*(int *)(*plVar29 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar20 = FUN_06812660(0);
        if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
          thunk_FUN_031e5338(*(long *)PTR_DAT_070c1b68);
        }
        uVar15 = FUN_069d69b8(uVar20,0,0);
        if ((uVar15 & 1) != 0) {
          if (*(int *)(*plVar29 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar20 = FUN_06812660(0);
          if (*(int *)(*(long *)UnityEngine_WaitUntil_TypeInfo + 0xe4) == 0) {
            thunk_FUN_031e5338(*(long *)UnityEngine_WaitUntil_TypeInfo);
          }
          lVar18 = FUN_067db188(uVar11,uVar20,1,0,400,local_74,0);
          if (lVar18 != 0) goto LAB_067c331c;
        }
        if (*(uint *)(param_2 + 0x18) <= uVar28) goto LAB_067c48ec;
        *puVar32 = 0x20;
        lVar18 = param_1[0x20];
        if (*(int *)(*(long *)UnityEngine_WaitUntil_TypeInfo + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar11 = 0x20;
        lVar18 = FUN_067db188(0x20,lVar18,1,0,400,local_74,0);
        if (lVar18 == 0) {
          if (*(uint *)(param_2 + 0x18) <= uVar28) goto LAB_067c48ec;
          *puVar32 = 3;
          lVar18 = param_1[0x20];
          if (*(int *)(*(long *)UnityEngine_WaitUntil_TypeInfo + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar11 = 3;
          lVar18 = FUN_067db188(3,lVar18,1,0,400,local_74,0);
        }
      }
LAB_067c331c:
      if (*(int *)(*plVar29 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar15 = FUN_06812604(0);
      puVar35 = (undefined8 *)Sentry_Unity_WarningTimeDebounce_TypeInfo;
      if ((uVar15 & 1) == 0) {
        plVar29 = (long *)FUN_03188b1c(*(undefined8 *)PTR_DAT_070c2638,4);
        puVar35 = (undefined8 *)Sentry_Unity_WarningTimeDebounce_TypeInfo;
        if (uVar10 >> 0x10 == 0) {
          local_170 = CONCAT44(local_170._4_4_,uVar10);
          lVar24 = thunk_FUN_031c39fc(*(undefined8 *)(PTR_DAT_070c1958 + 0x50),&local_170);
          if (plVar29 == (long *)0x0) goto LAB_067c4854;
          if ((lVar24 != 0) &&
             (lVar25 = thunk_FUN_031c3cac(lVar24,*(undefined8 *)(*plVar29 + 0x40)), lVar25 == 0))
          goto LAB_067c48f0;
          if ((int)plVar29[3] == 0) goto LAB_067c48ec;
          plVar29[4] = lVar24;
          if (param_1[0x1f] == 0) goto LAB_067c4854;
          lVar24 = thunk_FUN_069dc13c(param_1[0x1f],0);
          if ((lVar24 != 0) &&
             (lVar25 = thunk_FUN_031c3cac(lVar24,*(undefined8 *)(*plVar29 + 0x40)), lVar25 == 0))
          goto LAB_067c48f0;
          if ((*(uint *)(plVar29 + 3) & 0xfffffffe) == 0) goto LAB_067c48ec;
          plVar29[5] = lVar24;
          if (lVar18 == 0) goto LAB_067c4854;
          local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(lVar18 + 0x14));
          lVar24 = thunk_FUN_031c39fc(*(undefined8 *)(PTR_DAT_070c1958 + 0x50),&local_e0);
          if ((lVar24 != 0) &&
             (lVar25 = thunk_FUN_031c3cac(lVar24,*(undefined8 *)(*plVar29 + 0x40)), lVar25 == 0))
          goto LAB_067c48f0;
          if (*(uint *)(plVar29 + 3) < 3) goto LAB_067c48ec;
          plVar29[6] = lVar24;
          lVar24 = thunk_FUN_069dc13c(param_1,0);
          if ((lVar24 != 0) &&
             (lVar25 = thunk_FUN_031c3cac(lVar24,*(undefined8 *)(*plVar29 + 0x40)), lVar25 == 0))
          goto LAB_067c48f0;
          if ((*(uint *)(plVar29 + 3) & 0xfffffffc) == 0) goto LAB_067c48ec;
          plVar29[7] = lVar24;
          puVar23 = (undefined8 *)Meta_XR_ImmersiveDebugger_Manager_WatchTexture_TypeInfo;
        }
        else {
          local_170 = CONCAT44(local_170._4_4_,uVar10);
          lVar24 = thunk_FUN_031c39fc(*(undefined8 *)(PTR_DAT_070c1958 + 0x50),&local_170);
          if (plVar29 == (long *)0x0) goto LAB_067c4854;
          if ((lVar24 != 0) &&
             (lVar25 = thunk_FUN_031c3cac(lVar24,*(undefined8 *)(*plVar29 + 0x40)), lVar25 == 0))
          goto LAB_067c48f0;
          if ((int)plVar29[3] == 0) goto LAB_067c48ec;
          plVar29[4] = lVar24;
          if (param_1[0x1f] == 0) goto LAB_067c4854;
          lVar24 = thunk_FUN_069dc13c(param_1[0x1f],0);
          if ((lVar24 != 0) &&
             (lVar25 = thunk_FUN_031c3cac(lVar24,*(undefined8 *)(*plVar29 + 0x40)), lVar25 == 0))
          goto LAB_067c48f0;
          if ((*(uint *)(plVar29 + 3) & 0xfffffffe) == 0) goto LAB_067c48ec;
          plVar29[5] = lVar24;
          if (lVar18 == 0) goto LAB_067c4854;
          local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(lVar18 + 0x14));
          lVar24 = thunk_FUN_031c39fc(*(undefined8 *)(PTR_DAT_070c1958 + 0x50),&local_e0);
          if ((lVar24 != 0) &&
             (lVar25 = thunk_FUN_031c3cac(lVar24,*(undefined8 *)(*plVar29 + 0x40)), lVar25 == 0))
          goto LAB_067c48f0;
          if (*(uint *)(plVar29 + 3) < 3) goto LAB_067c48ec;
          plVar29[6] = lVar24;
          lVar24 = thunk_FUN_069dc13c(param_1,0);
          if ((lVar24 != 0) &&
             (lVar25 = thunk_FUN_031c3cac(lVar24,*(undefined8 *)(*plVar29 + 0x40)), lVar25 == 0))
          goto LAB_067c48f0;
          if ((*(uint *)(plVar29 + 3) & 0xfffffffc) == 0) goto LAB_067c48ec;
          plVar29[7] = lVar24;
          puVar23 = (undefined8 *)Meta_XR_ImmersiveDebugger_Manager_WatchManagerForAddon_TypeInfo;
        }
        uVar20 = FUN_057c0370(*puVar23,plVar29,0);
        plVar29 = (long *)Unity_Properties_Internal_Vector3IntPropertyBag_TypeInfo;
        if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_0698f53c(uVar20,param_1,0);
      }
    }
  }
  else {
    if (*(int *)(*(long *)
                  UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Theme_Primitives_Vector4AffordanceTheme_TypeInfo
                + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar15 = FUN_0681c77c(uVar10,0);
    if (((uVar15 & 1) == 0) || (uVar33 == 0xfe0e)) {
      if (*(int *)(*(long *)
                    UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Theme_Primitives_Vector4AffordanceTheme_TypeInfo
                  + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar15 = FUN_0681c6fc(uVar10,0);
      if (((uVar15 & 1) == 0) || (uVar33 != 0xfe0f)) goto LAB_067c2fe8;
    }
    if (*(int *)(*plVar29 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar18 = FUN_06812e68(0);
    if (lVar18 == 0) goto LAB_067c2fe8;
    if (*(int *)(*plVar29 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar18 = FUN_06812e68(0);
    if (lVar18 == 0) goto LAB_067c4854;
    if (*(int *)(lVar18 + 0x18) < 1) goto LAB_067c2fe8;
    lVar18 = param_1[0x20];
    if (*(int *)(*plVar29 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar20 = FUN_06812e68(0);
    lVar24 = param_1[0x50];
    lVar25 = param_1[0x47];
    if (*(int *)(*(long *)UnityEngine_WaitUntil_TypeInfo + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)UnityEngine_WaitUntil_TypeInfo);
    }
    lVar18 = FUN_067dbad8(uVar10,lVar18,uVar20,1,(int)lVar24,(int)lVar25,local_74,0);
    plVar29 = (long *)Unity_Properties_Internal_Vector3IntPropertyBag_TypeInfo;
    puVar35 = (undefined8 *)Sentry_Unity_WarningTimeDebounce_TypeInfo;
    plVar30 = (long *)PTR_DAT_0711c200;
    if (lVar18 == 0) goto LAB_067c2fe8;
  }
  if ((param_1[0x74] == 0) || (lVar24 = *(long *)(param_1[0x74] + 0x38), lVar24 == 0))
  goto LAB_067c4854;
  if (*(uint *)(lVar24 + 0x18) <= *(uint *)(param_1 + 0x94)) goto LAB_067c48ec;
  *(undefined8 *)(lVar24 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178 + 0x38) = 0;
  if (lVar18 == 0) goto LAB_067c4854;
  if (*(char *)(lVar18 + 0x10) == '\x01') {
    if (*(long *)(lVar18 + 0x18) == 0) goto LAB_067c4854;
    iVar7 = FUN_067c7a48(*(long *)(lVar18 + 0x18),0);
    if (param_1[0x20] == 0) goto LAB_067c4854;
    iVar8 = FUN_067c7a48(param_1[0x20],0);
    bVar6 = iVar7 != iVar8;
    if (bVar6) {
      plVar31 = *(long **)(lVar18 + 0x18);
      if (plVar31 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)UnityEngine_Rendering_Vrs_TypeInfo + 0x130);
        if (*(byte *)(*plVar31 + 0x130) < bVar2) {
          plVar31 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar31 + 200) + (ulong)bVar2 * 8 + -8) !=
                 *(long *)UnityEngine_Rendering_Vrs_TypeInfo) {
          plVar31 = (long *)0x0;
        }
      }
      param_1[0x20] = (long)plVar31;
    }
    if ((uVar33 >> 4 == 0xfe0) || (uVar33 - 0xe0100 < 0xf0)) {
      if (param_1[0x20] == 0) goto LAB_067c4854;
      iVar7 = FUN_067d49a0(param_1[0x20],uVar11,uVar33,0);
      if (iVar7 != 0) {
        if (param_1[0x20] == 0) goto LAB_067c4854;
        uVar15 = FUN_067d6cc8(param_1[0x20],iVar7,&local_90,0);
        if ((uVar15 & 1) != 0) {
          if ((param_1[0x74] == 0) || (lVar24 = *(long *)(param_1[0x74] + 0x38), lVar24 == 0))
          goto LAB_067c4854;
          if (*(uint *)(lVar24 + 0x18) <= *(uint *)(param_1 + 0x94)) goto LAB_067c48ec;
          *(undefined8 *)(lVar24 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178 + 0x38) = local_90;
        }
      }
      if (*(uint *)(param_2 + 0x18) <= uVar1) goto LAB_067c48ec;
      *(undefined4 *)(lVar14 + (long)(int)uVar1 * 0x10 + 4) = 0x1a;
      uVar28 = uVar1;
    }
    if ((uVar9 & 1) != 0) {
      if (((param_1[0x20] == 0) || (lVar24 = *(long *)(param_1[0x20] + 0x178), lVar24 == 0)) ||
         (lVar24 = *(long *)(lVar24 + 0x38), lVar24 == 0)) goto LAB_067c4854;
      uVar15 = FUN_052f3970(lVar24,*(undefined4 *)(lVar18 + 0x28),&local_88,
                            *(undefined8 *)UnityEngine_XR_OpenXR_WaitForRestartFinish_TypeInfo);
      if ((uVar15 & 1) == 0) goto LAB_067c3988;
      if (local_88 == 0)
      goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__TryGetCurrentRaycast;
      iVar7 = 0;
      while (plVar29 = (long *)Unity_Properties_Internal_Vector3IntPropertyBag_TypeInfo,
            puVar35 = (undefined8 *)Sentry_Unity_WarningTimeDebounce_TypeInfo,
            iVar7 < *(int *)(local_88 + 0x18)) {
        auVar40 = FUN_042a0fb8(local_88,iVar7,
                               *(undefined8 *)System_Threading_WaitOrTimerCallback_TypeInfo);
        lVar24 = auVar40._0_8_;
        if (lVar24 == 0) goto LAB_067c4854;
        uVar15 = *(ulong *)(lVar24 + 0x18);
        iVar8 = (int)uVar15;
        if (1 < iVar8) {
          lVar25 = 0;
          do {
            uVar10 = uVar28 + 1 + (int)lVar25;
            if (*(uint *)(param_2 + 0x18) <= uVar10) goto LAB_067c48ec;
            if (param_1[0x20] == 0) goto LAB_067c4854;
            iVar12 = FUN_067d48c4(param_1[0x20],
                                  *(undefined4 *)(lVar14 + (long)(int)uVar10 * 0x10 + 4),0);
            if (*(uint *)(lVar24 + 0x18) <= (int)lVar25 + 1U) goto LAB_067c48ec;
            if (iVar12 != *(int *)(lVar24 + 0x24 + lVar25 * 4)) goto LAB_067c3874;
            lVar25 = lVar25 + 1;
          } while (iVar8 + -1 != (int)lVar25);
        }
        if (auVar40._8_4_ != 0) {
          if (param_1[0x20] == 0) goto LAB_067c4854;
          uVar34 = FUN_067d6cc8(param_1[0x20],auVar40._8_8_ & 0xffffffff,&local_98,0);
          puVar35 = (undefined8 *)Sentry_Unity_WarningTimeDebounce_TypeInfo;
          plVar29 = (long *)Unity_Properties_Internal_Vector3IntPropertyBag_TypeInfo;
          if ((uVar34 & 1) != 0) {
            if ((param_1[0x74] == 0) || (lVar24 = *(long *)(param_1[0x74] + 0x38), lVar24 == 0))
            goto LAB_067c4854;
            if (*(uint *)(lVar24 + 0x18) <= *(uint *)(param_1 + 0x94)) goto LAB_067c48ec;
            *(undefined8 *)(lVar24 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178 + 0x38) = local_98
            ;
            plVar30 = (long *)PTR_DAT_0711c200;
            if (iVar8 < 1) goto LAB_067c397c;
            uVar34 = 0;
            goto LAB_067c3938;
          }
        }
LAB_067c3874:
        iVar7 = iVar7 + 1;
        plVar30 = (long *)PTR_DAT_0711c200;
        if (local_88 == 0) goto LAB_067c4854;
      }
    }
  }
  else {
    bVar6 = false;
  }
  goto LAB_067c3988;
LAB_067c3938:
  do {
    if (uVar34 == 0) {
      if (*(uint *)(param_2 + 0x18) <= uVar28) goto LAB_067c48ec;
      *(int *)(lVar14 + (long)(int)uVar28 * 0x10 + 0xc) = iVar8;
    }
    else {
      uVar10 = uVar28 + (int)uVar34;
      if (*(uint *)(param_2 + 0x18) <= uVar10) goto LAB_067c48ec;
      *(undefined4 *)(lVar14 + (long)(int)uVar10 * 0x10 + 4) = 0x1a;
    }
    uVar34 = uVar34 + 1;
  } while ((uVar15 & 0xffffffff) != uVar34);
LAB_067c397c:
  uVar28 = (uVar28 + iVar8) - 1;
LAB_067c3988:
  if ((param_1[0x74] == 0) || (lVar24 = *(long *)(param_1[0x74] + 0x38), lVar24 == 0))
  goto LAB_067c4854;
  uVar10 = *(uint *)(param_1 + 0x94);
  if (*(uint *)(lVar24 + 0x18) <= uVar10) goto LAB_067c48ec;
  puVar26 = (undefined4 *)(lVar24 + 0x20 + (long)(int)uVar10 * 0x178);
  *puVar26 = 0;
  *(long *)(puVar26 + 4) = lVar18;
  *(short *)(puVar26 + 1) = (short)uVar11;
  *(undefined1 *)(puVar26 + 0xd) = local_74[0];
  if (*(uint *)(param_2 + 0x18) <= uVar28) goto LAB_067c48ec;
  lVar25 = lVar24 + 0x20 + (long)(int)uVar10 * 0x178;
  *(undefined8 *)(lVar25 + 8) = *(undefined8 *)(lVar14 + (long)(int)uVar28 * 0x10 + 8);
  lVar24 = param_1[0x20];
  *(long *)(lVar25 + 0x20) = lVar24;
  if (*(char *)(lVar18 + 0x10) == '\x02') {
    plVar31 = *(long **)(lVar18 + 0x18);
    if (plVar31 == (long *)0x0) goto LAB_067c4854;
    bVar2 = *(byte *)(*(long *)UnityEngine_Rendering_Vector3Parameter_TypeInfo + 0x130);
    if ((*(byte *)(*plVar31 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar31 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)UnityEngine_Rendering_Vector3Parameter_TypeInfo)) goto LAB_067c4854;
    lVar21 = *plVar30;
    lVar22 = plVar31[0x11];
    if (*(int *)(lVar21 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar21 = *plVar30;
    }
    uVar10 = FUN_067b6920(lVar22,plVar31,*(long *)(lVar21 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 8));
    lVar21 = *plVar30;
    *(uint *)(param_1 + 0x24) = uVar10;
    lVar21 = **(long **)(lVar21 + 0xb8);
    if (lVar21 == 0) goto LAB_067c4854;
    if (*(uint *)(lVar21 + 0x18) <= uVar10) goto LAB_067c48ec;
    lVar21 = lVar21 + (long)(int)uVar10 * 0x38;
    *(int *)(lVar21 + 0x54) = *(int *)(lVar21 + 0x54) + 1;
    if ((param_1[0x74] == 0) || (lVar21 = *(long *)(param_1[0x74] + 0x38), lVar21 == 0))
    goto LAB_067c4854;
    uVar10 = *(uint *)(param_1 + 0x94);
    if (*(uint *)(lVar21 + 0x18) <= uVar10) goto LAB_067c48ec;
    lVar21 = lVar21 + (long)(int)uVar10 * 0x178;
    *(undefined4 *)(lVar21 + 0x20) = 1;
    *(int *)(lVar21 + 0x50) = (int)param_1[0x24];
    *(undefined4 *)((long)param_1 + 0x65c) = 0;
    *(undefined4 *)(param_1 + 0x24) = uVar27;
    local_194 = local_194 + 1;
    goto LAB_067c3f88;
  }
  if (bVar6) {
    if (lVar24 == 0) goto LAB_067c4854;
    iVar7 = FUN_067c7a48(lVar24,0);
    if (param_1[0x1f] == 0) goto LAB_067c4854;
    iVar8 = FUN_067c7a48(param_1[0x1f],0);
    if (iVar7 != iVar8) {
      if (*(int *)(*plVar29 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar15 = FUN_06812b1c(0);
      if ((uVar15 & 1) == 0) {
        lVar24 = param_1[0x20];
        if (lVar24 == 0) goto LAB_067c4854;
        lVar25 = *(long *)(lVar24 + 0x88);
      }
      else {
        if (param_1[0x20] == 0) goto LAB_067c4854;
        lVar24 = param_1[0x23];
        uVar20 = *(undefined8 *)(param_1[0x20] + 0x88);
        if (*(int *)(*(long *)System_Net_Http_Headers_WarningHeaderValue_TypeInfo + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        lVar25 = FUN_0680dca8(lVar24,uVar20,0);
        lVar24 = param_1[0x20];
      }
      lVar16 = *plVar30;
      param_1[0x23] = lVar25;
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar16 = *plVar30;
      }
      uVar13 = FUN_067b6708(lVar25,lVar24,*(long *)(lVar16 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8));
      *(undefined4 *)(param_1 + 0x24) = uVar13;
      plVar29 = (long *)Unity_Properties_Internal_Vector3IntPropertyBag_TypeInfo;
    }
  }
  if (*(long *)(lVar18 + 0x20) == 0) goto LAB_067c4854;
  iVar7 = FUN_06a827ec(*(long *)(lVar18 + 0x20),0);
  if (0 < iVar7) {
    if (*(long *)(lVar18 + 0x20) == 0) goto LAB_067c4854;
    lVar24 = param_1[0x20];
    lVar25 = param_1[0x23];
    uVar13 = FUN_06a827ec(*(long *)(lVar18 + 0x20),0);
    if (*(int *)(*(long *)System_Net_Http_Headers_WarningHeaderValue_TypeInfo + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)System_Net_Http_Headers_WarningHeaderValue_TypeInfo);
    }
    lVar18 = FUN_0680d74c(lVar24,lVar25,uVar13,0);
    lVar24 = *plVar30;
    lVar25 = param_1[0x20];
    param_1[0x23] = lVar18;
    if (*(int *)(lVar24 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar24 = *plVar30;
    }
    uVar13 = FUN_067b6708(lVar18,lVar25,*(long *)(lVar24 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 8));
    bVar6 = true;
    *(undefined4 *)(param_1 + 0x24) = uVar13;
  }
  if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0x88) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar15 = FUN_058a53dc(uVar11,0);
  if (((uVar15 & 1) == 0) && (uVar11 != 0x200b)) {
    lVar18 = *plVar30;
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar18 = *plVar30;
    }
    lVar24 = **(long **)(lVar18 + 0xb8);
    if (lVar24 == 0) goto LAB_067c4854;
    uVar10 = *(uint *)(param_1 + 0x24);
    if (*(uint *)(lVar24 + 0x18) <= uVar10) goto LAB_067c48ec;
    if (*(int *)(lVar24 + (long)(int)uVar10 * 0x38 + 0x54) < 0x3fff) {
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        plVar31 = *(long **)(*plVar30 + 0xb8);
        goto LAB_067c3e2c;
      }
LAB_067c3e34:
      uVar10 = *(uint *)(param_1 + 0x24);
    }
    else {
      if (bVar6) {
        if (param_1[0xf7] == 0) goto LAB_067c4854;
        uVar15 = FUN_051828d0(param_1[0xf7],(long)(int)uVar10,&local_9c,
                              *(undefined8 *)PTR_DAT_070c2600);
        if ((uVar15 & 1) == 0) {
LAB_067c3d80:
          lVar18 = param_1[0x23];
          uVar20 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)PTR_DAT_070f0e50);
          FUN_069a35c8(uVar20,lVar18,0);
          lVar18 = *plVar30;
          lVar24 = param_1[0x20];
          if (*(int *)(lVar18 + 0xe4) == 0) {
            thunk_FUN_031e5338();
            lVar18 = *plVar30;
          }
          uVar10 = FUN_067b6708(uVar20,lVar24,*(long *)(lVar18 + 0xb8),
                                *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8));
          if (param_1[0xf7] == 0) goto LAB_067c4854;
          FUN_05180fb8(param_1[0xf7],(int)param_1[0x24],uVar10,*(undefined8 *)PTR_DAT_070c2610);
          lVar18 = *plVar30;
        }
        else {
          lVar18 = *plVar30;
          if (*(int *)(lVar18 + 0xe4) == 0) {
            thunk_FUN_031e5338();
            lVar18 = *plVar30;
          }
          lVar24 = **(long **)(lVar18 + 0xb8);
          if (lVar24 == 0) goto LAB_067c4854;
          if (*(uint *)(lVar24 + 0x18) <= local_9c) goto LAB_067c48ec;
          uVar10 = local_9c;
          if (0x3ffe < *(int *)(lVar24 + (long)(int)local_9c * 0x38 + 0x54)) goto LAB_067c3d80;
        }
        *(uint *)(param_1 + 0x24) = uVar10;
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar18 = *plVar30;
        }
        plVar31 = *(long **)(lVar18 + 0xb8);
LAB_067c3e2c:
        lVar24 = *plVar31;
        if (lVar24 == 0) goto LAB_067c4854;
        goto LAB_067c3e34;
      }
      lVar18 = param_1[0x23];
      uVar20 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_070f0e50);
      FUN_069a35c8(uVar20,lVar18,0);
      lVar18 = *plVar30;
      lVar24 = param_1[0x20];
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar18 = *plVar30;
      }
      uVar10 = FUN_067b6708(uVar20,lVar24,*(long *)(lVar18 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8));
      lVar18 = *plVar30;
      *(uint *)(param_1 + 0x24) = uVar10;
      lVar24 = **(long **)(lVar18 + 0xb8);
      if (lVar24 == 0) goto LAB_067c4854;
    }
    if (*(uint *)(lVar24 + 0x18) <= uVar10) goto LAB_067c48ec;
    lVar24 = lVar24 + (long)(int)uVar10 * 0x38;
    *(int *)(lVar24 + 0x54) = *(int *)(lVar24 + 0x54) + 1;
  }
  if ((param_1[0x74] == 0) || (lVar18 = *(long *)(param_1[0x74] + 0x38), lVar18 == 0))
  goto LAB_067c4854;
  if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0x94)) goto LAB_067c48ec;
  lVar18 = lVar18 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178;
  *(long *)(lVar18 + 0x48) = param_1[0x23];
  *(int *)(lVar18 + 0x50) = (int)param_1[0x24];
  lVar18 = *plVar30;
  if (*(int *)(lVar18 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar18 = *plVar30;
  }
  lVar24 = **(long **)(lVar18 + 0xb8);
  if (lVar24 == 0) goto LAB_067c4854;
  if (*(uint *)(lVar24 + 0x18) <= *(uint *)(param_1 + 0x24)) goto LAB_067c48ec;
  *(bool *)(lVar24 + (long)(int)*(uint *)(param_1 + 0x24) * 0x38 + 0x41) = bVar6;
  if (bVar6) {
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar24 = **(long **)(*plVar30 + 0xb8);
      if (lVar24 == 0) goto LAB_067c4854;
    }
    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(param_1 + 0x24)) goto LAB_067c48ec;
    *(long *)(lVar24 + (long)(int)*(uint *)(param_1 + 0x24) * 0x38 + 0x48) = lVar21;
    param_1[0x23] = lVar21;
    param_1[0x20] = lVar22;
    *(undefined4 *)(param_1 + 0x24) = uVar27;
  }
  uVar10 = *(uint *)(param_1 + 0x94);
LAB_067c3f88:
  *(uint *)(param_1 + 0x94) = uVar10 + 1;
LAB_067c3f90:
  uVar10 = *(uint *)(param_2 + 0x18);
  uVar28 = uVar28 + 1;
  if ((int)uVar10 <= (int)uVar28)
  goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__TryGetCurrentRaycast;
  goto LAB_067c2b48;
}


