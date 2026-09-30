/*
FUNCTION_NAME: FUN_0617e944
ENTRY_POINT: 0617e944
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined4
FUN_0617e944(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
            long param_5,long param_6,int param_7,int *param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  int local_3e4;
  ulong local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  ulong local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  if ((DAT_06dc691b & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControl_GetChildControl<TouchPhaseControl>__);
    FUN_02d965b8(PTR_DAT_069fb990);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControl_GetChildControl<TouchPressControl>__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControl_GetChildControl<Vector2Control>__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControl_GetChildControl<Vector3Control>__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControl_TryGetChildControl<AxisControl>__);
    FUN_02d965b8(Method_UnityEngine_Hash128_Append<Vector2Int>__);
    FUN_02d965b8(Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControl_TryGetChildControl<Vector2Control>__);
    FUN_02d965b8(Method_System_HashCode_Add<bool>__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControl_GetChildControl__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControl_GetDeviceIndex__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControl_TryGetChildControl__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControl_WriteValueFromBufferIntoState__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControl_WriteValueFromObjectIntoState__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControl_get_Item__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControlExtensions_CopyState<MouseState>__);
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_InputControlExtensions_FindInParentChain<TouchControl>__
                );
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_InputControlExtensions_ReadUnprocessedValueFromEvent<float>__
                );
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_InputControlExtensions_ReadUnprocessedValueFromEvent<Vector2>__
                );
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControlExtensions_WriteValueIntoEvent<float>__)
    ;
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_InputControlExtensions_WriteValueIntoEvent<Vector2>__
                );
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControlExtensions_WriteValueIntoState<bool>__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControlExtensions_WriteValueIntoState<uint>__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControlExtensions_AccumulateValueInEvent__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControlExtensions_AccumulateValueInEvent__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControlExtensions_BuildPath__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControlExtensions_CheckStateIsAtDefault__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControlExtensions_CheckStateIsAtDefault__);
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_InputControlExtensions_CheckStateIsAtDefaultIgnoringNoise__
                );
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_InputControlExtensions_CheckStateIsAtDefaultIgnoringNoise__
                );
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControlExtensions_CompareState__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControlExtensions_CompareStateIgnoringNoise__);
    FUN_02d965b8(Method_System_Net_HttpWebRequest_set_Method__);
    FUN_02d965b8(Method_System_HashCode_Combine<ulong,_int>__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControlExtensions_EnumerateControls__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControlExtensions_GetStatePtrFromStateEvent__);
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_InputControlExtensions_GetStatePtrFromStateEventUnchecked__
                );
    DAT_06dc691b = 1;
  }
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_114 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  local_188 = 0;
  UnityEngine_XR_Interaction_Toolkit_Filtering_XRLastSelectedEvaluator__CalculateNormalizedScore();
  *param_8 = param_7;
  puVar4 = Method_System_HashCode_Combine<ulong,_int>__;
  if (param_6 == 0) {
LAB_06183bb8:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar9 = *(uint *)(param_6 + 0x18);
  if ((int)uVar9 <= param_7) {
    return 0;
  }
  bVar26 = false;
  uVar21 = 0;
  uVar20 = 0;
  local_3e4 = 0;
  iVar12 = 0;
  uVar25 = 0;
LAB_0617ebf0:
  uVar10 = (uint)uVar25;
  uVar24 = param_7 + uVar10;
  if (uVar9 <= uVar24) goto LAB_06183b5c;
  puVar22 = (uint *)(param_6 + (long)(int)uVar24 * 0x10 + 0x24);
  if (*puVar22 == 0) {
    return 0;
  }
  lVar14 = *(long *)puVar4;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar14 = *(long *)puVar4;
  }
  uVar29 = (undefined4)param_4;
  fVar27 = (float)param_3;
  uVar11 = (undefined4)param_2;
  lVar16 = *(long *)(lVar14 + 0xb8);
  lVar17 = *(long *)(lVar16 + 0x88);
  if (lVar17 == 0) goto LAB_06183bb8;
  if ((long)*(int *)(lVar17 + 0x18) <= (long)uVar25) {
    return 0;
  }
  if (*(uint *)(param_6 + 0x18) <= uVar24) goto LAB_06183b5c;
  uVar9 = *puVar22;
  if (uVar9 == 0x3c) {
    return 0;
  }
  if (uVar9 == 0x3e) {
    *param_8 = param_7 + uVar10;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar14 = *(long *)puVar4;
      lVar16 = *(long *)(lVar14 + 0xb8);
      lVar17 = *(long *)(lVar16 + 0x88);
      if (lVar17 == 0) goto LAB_06183bb8;
    }
    if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_06183b5c;
    *(undefined2 *)(lVar17 + uVar25 * 2 + 0x20) = 0;
    if (*(char *)(param_5 + 0x468) != '\0') {
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar14 = *(long *)puVar4;
        lVar16 = *(long *)(lVar14 + 0xb8);
      }
      lVar16 = *(long *)(lVar16 + 0x90);
      if (lVar16 == 0) goto LAB_06183bb8;
      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_06183b5c;
      if (*(int *)(lVar16 + 0x20) != -0x11878bc5) {
        return 0;
      }
    }
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar14 = *(long *)puVar4;
    }
    plVar18 = *(long **)(lVar14 + 0xb8);
    lVar16 = plVar18[0x12];
    if (lVar16 == 0) goto LAB_06183bb8;
    if (*(int *)(lVar16 + 0x18) == 0) goto LAB_06183b5c;
    if (*(int *)(lVar16 + 0x20) == -0x11878bc5) {
      *(undefined1 *)(param_5 + 0x468) = 0;
      return 1;
    }
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar14 = *(long *)puVar4;
      plVar18 = *(long **)(lVar14 + 0xb8);
    }
    lVar16 = plVar18[0x11];
    if (lVar16 == 0) goto LAB_06183bb8;
    if (*(int *)(lVar16 + 0x18) == 0) goto LAB_06183b5c;
    if ((uVar10 == 4) && (*(short *)(lVar16 + 0x20) == 0x23)) {
      if (*(int *)(lVar14 + 0xe4) == 0) {
        lVar14 = thunk_FUN_02df485c();
        lVar16 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88);
      }
      uVar15 = 4;
    }
    else {
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar14 = *(long *)puVar4;
        plVar18 = *(long **)(lVar14 + 0xb8);
        lVar16 = plVar18[0x11];
        if (lVar16 == 0) goto LAB_06183bb8;
      }
      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_06183b5c;
      if ((uVar10 == 5) && (*(short *)(lVar16 + 0x20) == 0x23)) {
        if (*(int *)(lVar14 + 0xe4) == 0) {
          lVar14 = thunk_FUN_02df485c();
          lVar16 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88);
        }
        uVar15 = 5;
      }
      else {
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar14 = *(long *)puVar4;
          plVar18 = *(long **)(lVar14 + 0xb8);
          lVar16 = plVar18[0x11];
          if (lVar16 == 0) goto LAB_06183bb8;
        }
        if (*(int *)(lVar16 + 0x18) == 0) goto LAB_06183b5c;
        if ((uVar10 == 7) && (*(short *)(lVar16 + 0x20) == 0x23)) {
          if (*(int *)(lVar14 + 0xe4) == 0) {
            lVar14 = thunk_FUN_02df485c();
            lVar16 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88);
          }
          uVar15 = 7;
        }
        else {
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar14 = *(long *)puVar4;
            plVar18 = *(long **)(lVar14 + 0xb8);
            lVar16 = plVar18[0x11];
            if (lVar16 == 0) goto LAB_06183bb8;
          }
          if (*(int *)(lVar16 + 0x18) == 0) goto LAB_06183b5c;
          if ((uVar10 != 9) || (*(short *)(lVar16 + 0x20) != 0x23)) {
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar14 = *(long *)puVar4;
              plVar18 = *(long **)(lVar14 + 0xb8);
            }
            lVar16 = plVar18[0x12];
            if (lVar16 == 0) goto LAB_06183bb8;
            if (*(int *)(lVar16 + 0x18) == 0) goto LAB_06183b5c;
            uVar9 = *(uint *)(lVar16 + 0x20);
            if ((int)uVar9 < 0x65d) {
              if ((int)uVar9 < -0x325312e0) {
                if (uVar9 < 0xa6c747d4) {
                  if (0x9dac6cf1 < uVar9) {
                    if (uVar9 < 0xa1903fc8) {
                      if (uVar9 == 0x9e50e566) {
                        *(undefined4 *)(param_5 + 0x2d8) = 0;
                        *(undefined1 *)(param_5 + 0x2dc) = 0;
                        return 1;
                      }
                      if (uVar9 != 0xa1903fc7) {
                        return 0;
                      }
                      if (*(int *)(lVar14 + 0xe4) == 0) {
                        lVar14 = thunk_FUN_02df485c();
                        plVar18 = *(long **)(*(long *)puVar4 + 0xb8);
                        lVar16 = plVar18[0x12];
                        if (lVar16 == 0) goto LAB_06183bb8;
                      }
                      if (*(int *)(lVar16 + 0x18) != 0) {
                        local_e0 = local_e0 & 0xffffffff00000000;
                        fVar27 = (float)FUN_0618a78c(lVar14,plVar18[0x11],
                                                     *(undefined4 *)(lVar16 + 0x2c),
                                                     *(undefined4 *)(lVar16 + 0x30),&local_e0);
                        if (fVar27 == -32768.0) {
                          return 0;
                        }
                        if (local_3e4 == 2) {
                          return 0;
                        }
                        if (local_3e4 == 1) {
                          fVar28 = DAT_010fd060;
                          if (*(char *)(param_5 + 0x33e) != '\0') {
                            fVar28 = 1.0;
                          }
                          fVar27 = *(float *)(param_5 + 0x210) * fVar27 * fVar28;
                        }
                        else {
                          fVar28 = DAT_010fd060;
                          if (*(char *)(param_5 + 0x33e) != '\0') {
                            fVar28 = 1.0;
                          }
                          fVar27 = fVar27 * fVar28;
                        }
                        *(float *)(param_5 + 0x2d4) = fVar27;
                        return 1;
                      }
                    }
                    else {
                      if (uVar9 != 0xa5c050bc) {
                        if (uVar9 != 0xa62e8917) {
                          if (uVar9 != 0xa6c747d3) {
                            return 0;
                          }
                          uVar11 = FUN_047e1df0(param_5 + 0x448,
                                                *(undefined8 *)
                                                 Method_UnityEngine_InputSystem_InputControlExtensions_CheckStateIsAtDefault__
                                               );
                          *(undefined4 *)(param_5 + 0x444) = uVar11;
                          return 1;
                        }
                        uVar15 = 8;
                        uVar9 = *(uint *)(param_5 + 0x284) | 8;
                        goto LAB_06181d60;
                      }
                      if (*(int *)(lVar14 + 0xe4) == 0) {
                        lVar14 = thunk_FUN_02df485c();
                        plVar18 = *(long **)(*(long *)puVar4 + 0xb8);
                        lVar16 = plVar18[0x12];
                        if (lVar16 == 0) goto LAB_06183bb8;
                      }
                      if (*(int *)(lVar16 + 0x18) != 0) {
                        local_e0 = local_e0 & 0xffffffff00000000;
                        fVar27 = (float)FUN_0618a78c(lVar14,plVar18[0x11],
                                                     *(undefined4 *)(lVar16 + 0x2c),
                                                     *(undefined4 *)(lVar16 + 0x30),&local_e0);
                        if (fVar27 == -32768.0) {
                          return 0;
                        }
                        if (local_3e4 == 2) {
                          fVar27 = (fVar27 * *(float *)(param_5 + 0x390)) / 100.0;
                        }
                        else if (local_3e4 == 1) {
                          fVar28 = DAT_010fd060;
                          if (*(char *)(param_5 + 0x33e) != '\0') {
                            fVar28 = 1.0;
                          }
                          fVar27 = *(float *)(param_5 + 0x210) * fVar27 * fVar28;
                        }
                        else {
                          fVar28 = DAT_010fd060;
                          if (*(char *)(param_5 + 0x33e) != '\0') {
                            fVar28 = 1.0;
                          }
                          fVar27 = fVar27 * fVar28;
                        }
                        uVar15 = *(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputControl_WriteValueFromBufferIntoState__
                        ;
                        *(float *)(param_5 + 0x444) = fVar27;
                        FUN_047e1dac(param_5 + 0x448,uVar15);
                        *(undefined4 *)(param_5 + 0x658) = *(undefined4 *)(param_5 + 0x444);
                        return 1;
                      }
                    }
                    goto LAB_06183b5c;
                  }
                  if (0x8f5a791e < uVar9) {
                    if (uVar9 == 0x9176b2c9) {
                      lVar16 = FUN_047e1810(param_5 + 0x5a0,
                                            *(undefined8 *)
                                             Method_UnityEngine_InputSystem_InputControlExtensions_AccumulateValueInEvent__
                                           );
                      *(long *)(param_5 + 0x598) = lVar16;
                      lVar14 = param_5 + 0x598;
LAB_0618362c:
                      LeanTween__value(lVar14,lVar16);
                      return 1;
                    }
                    if (uVar9 != 0x9312449e) {
                      if (uVar9 != 0x9dac6cf1) {
                        return 0;
                      }
                      *(undefined8 *)(param_5 + 0x388) = 0;
                      return 1;
                    }
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                      lVar16 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x90);
                      if (lVar16 == 0) goto LAB_06183bb8;
                    }
                    if (*(int *)(lVar16 + 0x18) != 0) {
                      local_114 = *(undefined4 *)(lVar16 + 0x24);
                      if (*(char *)(param_5 + 0x469) == '\0') {
                        return 1;
                      }
                      FUN_047e0414(param_5 + 0x610,local_114,
                                   *(undefined8 *)
                                    Method_UnityEngine_InputSystem_InputControl_GetDeviceIndex__);
                      uVar15 = FUN_054e5768(&local_114,0);
                      uVar23 = FUN_054e5768(param_5 + 0x4a4,0);
                      uVar15 = FUN_0536dcdc(*(undefined8 *)
                                             Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                            ,uVar15,*(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_EnumerateControls__
                                            ,uVar23,0);
                      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
                        thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
                      }
                      FUN_0630b598(uVar15,0);
                      return 1;
                    }
                    goto LAB_06183b5c;
                  }
                  if (uVar9 != 0x88ce15e6) {
                    if (uVar9 != 0x8f5a791e) {
                      return 0;
                    }
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      lVar14 = thunk_FUN_02df485c();
                      plVar18 = *(long **)(*(long *)puVar4 + 0xb8);
                      lVar16 = plVar18[0x12];
                      if (lVar16 == 0) goto LAB_06183bb8;
                    }
                    if (*(int *)(lVar16 + 0x18) != 0) {
                      local_e0 = local_e0 & 0xffffffff00000000;
                      fVar27 = (float)FUN_0618a78c(lVar14,plVar18[0x11],
                                                   *(undefined4 *)(lVar16 + 0x2c),
                                                   *(undefined4 *)(lVar16 + 0x30),&local_e0);
                      if (fVar27 == -32768.0) {
                        return 0;
                      }
                      uVar9 = 0x80000000;
                      if (fVar27 != INFINITY) {
                        uVar9 = (int)fVar27;
                      }
                      local_188 = CONCAT44(uVar9,(int)local_188);
                      if ((int)uVar9 < 0x191) {
                        if ((int)uVar9 < 0xc9) {
                          if ((uVar9 == 100) || (uVar9 == 200)) goto LAB_06182d08;
                        }
                        else if ((uVar9 == 300) || (uVar9 == 400)) goto LAB_06182d08;
                      }
                      else if (uVar9 < 0x259) {
                        if ((uVar9 == 500) || (uVar9 == 600)) goto LAB_06182d08;
                      }
                      else if ((uVar9 == 700) || ((uVar9 == 800 || (uVar9 == 900)))) {
LAB_06182d08:
                        *(uint *)(param_5 + 0x23c) = uVar9;
                      }
                      uVar11 = *(undefined4 *)(param_5 + 0x23c);
                      uVar15 = *(undefined8 *)
                                Method_UnityEngine_InputSystem_InputControlExtensions_CopyState<MouseState>__
                      ;
                      param_5 = param_5 + 0x240;
LAB_06183000:
                      FUN_047e09d0(param_5,uVar11,uVar15);
                      return 1;
                    }
                    goto LAB_06183b5c;
                  }
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    lVar16 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x90);
                    if (lVar16 == 0) goto LAB_06183bb8;
                  }
                  if (*(int *)(lVar16 + 0x18) == 0) goto LAB_06183b5c;
                  uVar11 = *(undefined4 *)(lVar16 + 0x24);
                  uVar25 = FUN_061402cc(uVar11,&local_108,0);
                  uVar15 = local_108;
                  puVar2 = PTR_DAT_069fb990;
                  if ((uVar25 & 1) == 0) {
                    if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    uVar25 = FUN_06350670(uVar15,0,0);
                    if ((uVar25 & 1) != 0) {
                      if (*(int *)(*(long *)
                                    Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__
                                  + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      uVar15 = FUN_0619f550(0);
                      lVar14 = *(long *)puVar4;
                      if (*(int *)(lVar14 + 0xe4) == 0) {
                        thunk_FUN_02df485c(lVar14);
                        lVar14 = *(long *)puVar4;
                      }
                      lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x90);
                      if (lVar16 == 0) goto LAB_06183bb8;
                      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_06183b5c;
                      uVar23 = FUN_05373aa8(0,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x88),
                                            *(undefined4 *)(lVar16 + 0x2c),
                                            *(undefined4 *)(lVar16 + 0x30),0);
                      uVar15 = FUN_05362cb4(uVar15,uVar23,0);
                      local_108 = FUN_038026b0(uVar15,*(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_InputSystem_InputControl_GetChildControl<Vector2Control>__
                                              );
                    }
                    uVar15 = local_108;
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    uVar25 = FUN_06350670(uVar15,0,0);
                    if ((uVar25 & 1) != 0) {
                      return 0;
                    }
                    FUN_0613ffd0(uVar11,local_108,0);
                    *(undefined8 *)(param_5 + 0x598) = local_108;
                  }
                  else {
                    *(undefined8 *)(param_5 + 0x598) = local_108;
                  }
                  LeanTween__value(param_5 + 0x598,local_108);
                  lVar14 = *(long *)puVar4;
                  uVar9 = 1;
                  *(undefined1 *)(param_5 + 0x5c8) = 0;
                  goto LAB_06182658;
                }
                if (uVar9 < 0xb93c7ef2) {
                  if (uVar9 < 0xace2bca9) {
                    if (uVar9 == 0xa97f2798) {
                      if ((*(byte *)(param_5 + 0x280) >> 3 & 1) != 0) {
                        return 1;
                      }
                      cVar7 = FUN_061a9c14(param_5 + 0x288,8,0);
                      if (cVar7 != '\0') {
                        return 1;
                      }
                      uVar9 = *(uint *)(param_5 + 0x284) & 0xfffffff7;
                      goto LAB_06181724;
                    }
                    if (uVar9 != 0xace2bca8) {
                      return 0;
                    }
                    if (*(char *)(param_5 + 0x469) == '\0') {
                      return 1;
                    }
                    uVar9 = *(int *)(param_5 + 0x4a4) - 1;
                    if (0 < *(int *)(param_5 + 0x4a4)) {
                      fVar27 = *(float *)(param_5 + 0x658) - *(float *)(param_5 + 0x2d4);
                      *(float *)(param_5 + 0x658) = fVar27;
                      if ((*(long *)(param_5 + 0x3a0) == 0) ||
                         (lVar14 = *(long *)(*(long *)(param_5 + 0x3a0) + 0x38), lVar14 == 0))
                      goto LAB_06183bb8;
                      if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_06183b5c;
                      *(float *)(lVar14 + (ulong)uVar9 * 0x178 + 0x13c) = fVar27;
                    }
                    *(undefined4 *)(param_5 + 0x2d4) = 0;
                    return 1;
                  }
                  if (uVar9 == 0xaf32f89e) {
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                      lVar14 = *(long *)puVar4;
                      plVar18 = *(long **)(lVar14 + 0xb8);
                      lVar16 = plVar18[0x12];
                      if (lVar16 == 0) goto LAB_06183bb8;
                    }
                    fVar27 = DAT_010fd060;
                    if (*(int *)(lVar16 + 0x18) == 0) goto LAB_06183b5c;
                    if (*(int *)(lVar16 + 0x28) != 1) {
                      if (*(int *)(lVar16 + 0x28) != 0) {
                        return 0;
                      }
                      uVar9 = 1;
                      goto LAB_06181a78;
                    }
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      lVar14 = thunk_FUN_02df485c();
                      plVar18 = *(long **)(*(long *)puVar4 + 0xb8);
                      lVar16 = plVar18[0x12];
                      if (lVar16 == 0) goto LAB_06183bb8;
                    }
                    if (*(int *)(lVar16 + 0x18) != 0) {
                      local_e0 = local_e0 & 0xffffffff00000000;
                      fVar27 = (float)FUN_0618a78c(lVar14,plVar18[0x11],
                                                   *(undefined4 *)(lVar16 + 0x2c),
                                                   *(undefined4 *)(lVar16 + 0x30),&local_e0);
                      if (fVar27 == -32768.0) {
                        return 0;
                      }
                      if (local_3e4 == 2) {
                        fVar28 = 0.0;
                        if (*(float *)(param_5 + 0x398) != -1.0) {
                          fVar28 = *(float *)(param_5 + 0x398);
                        }
                        fVar27 = (fVar27 * (*(float *)(param_5 + 0x390) - fVar28)) / 100.0;
                      }
                      else if (local_3e4 == 1) {
                        fVar28 = DAT_010fd060;
                        if (*(char *)(param_5 + 0x33e) != '\0') {
                          fVar28 = 1.0;
                        }
                        fVar27 = *(float *)(param_5 + 0x210) * fVar27 * fVar28;
                      }
                      else {
                        fVar28 = DAT_010fd060;
                        if (*(char *)(param_5 + 0x33e) != '\0') {
                          fVar28 = 1.0;
                        }
                        fVar27 = fVar27 * fVar28;
                      }
                      if (fVar27 < 0.0) {
                        fVar27 = 0.0;
                      }
                      *(float *)(param_5 + 0x388) = fVar27;
                      goto LAB_06182a1c;
                    }
                    goto LAB_06183b5c;
                  }
                  if (uVar9 != 0xb01dd609) {
                    if (uVar9 != 0xb93c7ef1) {
                      return 0;
                    }
                    if (*(char *)(param_5 + 0x469) != '\0') {
                      uVar11 = FUN_047e066c(param_5 + 0x610,
                                            *(undefined8 *)
                                             Method_UnityEngine_InputSystem_InputControlExtensions_FindInParentChain<TouchControl>__
                                           );
                      local_188 = CONCAT44(uVar11,(int)local_188);
                      uVar15 = FUN_054e5768((long)&local_188 + 4,0);
                      local_188 = CONCAT44(*(int *)(param_5 + 0x4a4) + -1,(int)local_188);
                      uVar23 = FUN_054e5768((long)&local_188 + 4,0);
                      uVar15 = FUN_0536dcdc(*(undefined8 *)
                                             Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                            ,uVar15,*(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_GetStatePtrFromStateEventUnchecked__
                                            ,uVar23,0);
                      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
                        thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
                      }
                      FUN_0630b598(uVar15,0);
                    }
                    FUN_047e045c(param_5 + 0x610,
                                 *(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputControlExtensions_AccumulateValueInEvent__
                                );
                    return 1;
                  }
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    lVar14 = thunk_FUN_02df485c();
                    plVar18 = *(long **)(*(long *)puVar4 + 0xb8);
                    lVar16 = plVar18[0x12];
                    if (lVar16 == 0) goto LAB_06183bb8;
                  }
                  if (*(int *)(lVar16 + 0x18) == 0) goto LAB_06183b5c;
                  local_e0 = local_e0 & 0xffffffff00000000;
                  fVar27 = (float)FUN_0618a78c(lVar14,plVar18[0x11],*(undefined4 *)(lVar16 + 0x2c),
                                               *(undefined4 *)(lVar16 + 0x30),&local_e0);
                  if (fVar27 == -32768.0) {
                    return 0;
                  }
                  lVar14 = *(long *)puVar4;
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    lVar14 = *(long *)puVar4;
                  }
                  lVar16 = *(long *)(lVar14 + 0xb8);
                  lVar17 = *(long *)(lVar16 + 0x90);
                  if (lVar17 == 0) goto LAB_06183bb8;
                  if (*(int *)(lVar17 + 0x18) == 0) goto LAB_06183b5c;
                  iVar12 = *(int *)(lVar17 + 0x34);
                  if (iVar12 == 2) {
                    return 0;
                  }
                  if (iVar12 == 1) {
                    fVar28 = DAT_010fd060;
                    if (*(char *)(param_5 + 0x33e) != '\0') {
                      fVar28 = 1.0;
                    }
                    fVar27 = *(float *)(param_5 + 0x210) * fVar27 * fVar28;
LAB_061830a8:
                    *(float *)(param_5 + 0x2d8) = fVar27;
                  }
                  else if (iVar12 == 0) {
                    fVar28 = DAT_010fd060;
                    if (*(char *)(param_5 + 0x33e) != '\0') {
                      fVar28 = 1.0;
                    }
                    fVar27 = fVar27 * fVar28;
                    goto LAB_061830a8;
                  }
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    lVar14 = *(long *)puVar4;
                    lVar16 = *(long *)(lVar14 + 0xb8);
                    lVar17 = *(long *)(lVar16 + 0x90);
                    if (lVar17 == 0) goto LAB_06183bb8;
                  }
                  if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) goto LAB_06183b5c;
                  if (*(int *)(lVar17 + 0x38) != 0x22bcfb9a) {
                    return 1;
                  }
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    lVar14 = thunk_FUN_02df485c();
                    lVar16 = *(long *)(*(long *)puVar4 + 0xb8);
                    lVar17 = *(long *)(lVar16 + 0x90);
                    if (lVar17 == 0) goto LAB_06183bb8;
                  }
                  if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) != 0) {
                    local_e0 = local_e0 & 0xffffffff00000000;
                    fVar27 = (float)FUN_0618a78c(lVar14,*(undefined8 *)(lVar16 + 0x88),
                                                 *(undefined4 *)(lVar17 + 0x44),
                                                 *(undefined4 *)(lVar17 + 0x48),&local_e0);
                    *(bool *)(param_5 + 0x2dc) = fVar27 != 0.0;
                    return 1;
                  }
                  goto LAB_06183b5c;
                }
                if (uVar9 < 0xc465179a) {
                  if (uVar9 == 0xbe648664) {
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                      plVar18 = *(long **)(*(long *)puVar4 + 0xb8);
                    }
                    FUN_047e10dc(&local_e0,plVar18 + 2,
                                 *(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputControlExtensions_CheckStateIsAtDefaultIgnoringNoise__
                                );
                    *(undefined8 *)(param_5 + 0x118) = local_c8;
                    LeanTween__value(param_5 + 0x118);
                    *(undefined4 *)(param_5 + 0x120) = (undefined4)local_e0;
                    return 1;
                  }
                  if (uVar9 != 0xc4651799) {
                    return 0;
                  }
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    lVar14 = thunk_FUN_02df485c();
                    plVar18 = *(long **)(*(long *)puVar4 + 0xb8);
                    lVar16 = plVar18[0x12];
                    if (lVar16 == 0) goto LAB_06183bb8;
                  }
                  if (*(int *)(lVar16 + 0x18) != 0) {
                    local_e0 = local_e0 & 0xffffffff00000000;
                    fVar27 = (float)FUN_0618a78c(lVar14,plVar18[0x11],*(undefined4 *)(lVar16 + 0x2c)
                                                 ,*(undefined4 *)(lVar16 + 0x30),&local_e0);
                    if (fVar27 == -32768.0) {
                      return 0;
                    }
                    fVar27 = fVar27 * DAT_010fd168;
                    uVar11 = 0;
                    uVar30 = FUN_0633f780(0,0);
LAB_061814dc:
                    *(undefined4 *)(param_5 + 0x46c) = uVar30;
                    *(undefined4 *)(param_5 + 0x470) = uVar11;
                    *(float *)(param_5 + 0x474) = fVar27;
                    *(undefined4 *)(param_5 + 0x478) = uVar29;
                    return 1;
                  }
                  goto LAB_06183b5c;
                }
                if (uVar9 != 0xc4e67de9) {
                  if (uVar9 != 0xcdaced1f) {
                    return 0;
                  }
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    lVar14 = thunk_FUN_02df485c();
                    plVar18 = *(long **)(*(long *)puVar4 + 0xb8);
                    lVar16 = plVar18[0x12];
                    if (lVar16 == 0) goto LAB_06183bb8;
                  }
                  if (*(int *)(lVar16 + 0x18) != 0) {
                    local_e0 = local_e0 & 0xffffffff00000000;
                    fVar27 = (float)FUN_0618a78c(lVar14,plVar18[0x11],*(undefined4 *)(lVar16 + 0x2c)
                                                 ,*(undefined4 *)(lVar16 + 0x30),&local_e0);
                    if (fVar27 == -32768.0) {
                      return 0;
                    }
                    if (local_3e4 == 2) {
                      fVar27 = (fVar27 * *(float *)(param_5 + 0x390)) / 100.0;
                    }
                    else if (local_3e4 == 1) {
                      fVar28 = DAT_010fd060;
                      if (*(char *)(param_5 + 0x33e) != '\0') {
                        fVar28 = 1.0;
                      }
                      fVar27 = *(float *)(param_5 + 0x210) * fVar27 * fVar28;
                    }
                    else {
                      fVar28 = DAT_010fd060;
                      if (*(char *)(param_5 + 0x33e) != '\0') {
                        fVar28 = 1.0;
                      }
                      fVar27 = fVar27 * fVar28;
                    }
                    *(float *)(param_5 + 0x440) = fVar27;
                    *(float *)(param_5 + 0x658) = *(float *)(param_5 + 0x658) + fVar27;
                    return 1;
                  }
                  goto LAB_06183b5c;
                }
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar14 = *(long *)puVar4;
                  lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x90);
                  if (lVar16 == 0) goto LAB_06183bb8;
                }
                if (*(int *)(lVar16 + 0x18) == 0) goto LAB_06183b5c;
                uVar11 = *(undefined4 *)(lVar16 + 0x24);
                *(undefined4 *)(param_5 + 0x6bc) = 0xffffffff;
                if (*(int *)(lVar16 + 0x28) == 0) {
LAB_06180b84:
                  puVar2 = PTR_DAT_069fb990;
                  uVar15 = *(undefined8 *)(param_5 + 0x1c8);
                  if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  uVar25 = FUN_0634eb94(uVar15,0,0);
                  if ((uVar25 & 1) == 0) {
                    uVar15 = *(undefined8 *)(param_5 + 0x6a8);
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    uVar25 = FUN_0634eb94(uVar15,0,0);
                    uVar15 = *(undefined8 *)(param_5 + 0x6a8);
                    if ((uVar25 & 1) != 0) {
                      *(undefined8 *)(param_5 + 0x6b0) = uVar15;
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance__set_aimAssistRequiredAngle
                      ;
                    }
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    uVar25 = FUN_06350670(uVar15,0,0);
                    puVar3 = Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__;
                    if ((uVar25 & 1) != 0) {
                      if (*(int *)(*(long *)
                                    Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__
                                  + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      uVar15 = FUN_0619f1f8(0);
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        thunk_FUN_02df485c(*(long *)puVar2);
                      }
                      uVar25 = FUN_0634eb94(uVar15,0,0);
                      if ((uVar25 & 1) == 0) {
                        uVar15 = FUN_038026b0(*(undefined8 *)
                                               Method_UnityEngine_InputSystem_InputControlExtensions_GetStatePtrFromStateEvent__
                                              ,*(undefined8 *)
                                                Method_UnityEngine_InputSystem_InputControl_TryGetChildControl<AxisControl>__
                                             );
                      }
                      else {
                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        uVar15 = FUN_0619f1f8(0);
                      }
                      *(undefined8 *)(param_5 + 0x6a8) = uVar15;
                      LeanTween__value((undefined8 *)(param_5 + 0x6a8),uVar15);
                      uVar15 = *(undefined8 *)(param_5 + 0x6a8);
                      *(undefined8 *)(param_5 + 0x6b0) = uVar15;
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance__set_aimAssistRequiredAngle
                      ;
                    }
                  }
                  else {
                    uVar15 = *(undefined8 *)(param_5 + 0x1c8);
                    *(undefined8 *)(param_5 + 0x6b0) = uVar15;
UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance__set_aimAssistRequiredAngle:
                    LeanTween__value(param_5 + 0x6b0,uVar15);
                  }
                  uVar15 = *(undefined8 *)(param_5 + 0x6b0);
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  uVar25 = FUN_06350670(uVar15,0,0);
                  if ((uVar25 & 1) != 0) {
                    return 0;
                  }
                }
                else {
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    lVar16 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x90);
                    if (lVar16 == 0) goto LAB_06183bb8;
                  }
                  if (*(int *)(lVar16 + 0x18) == 0) goto LAB_06183b5c;
                  if (*(int *)(lVar16 + 0x28) == 1) goto LAB_06180b84;
                  uVar25 = FUN_06140224(uVar11,&local_110,0);
                  uVar15 = local_110;
                  puVar2 = PTR_DAT_069fb990;
                  if ((uVar25 & 1) == 0) {
                    if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    uVar25 = FUN_06350670(uVar15,0,0);
                    if ((uVar25 & 1) != 0) {
                      lVar14 = *(long *)puVar4;
                      if (*(int *)(lVar14 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                        lVar14 = *(long *)puVar4;
                      }
                      lVar16 = *(long *)(lVar14 + 0xb8);
                      lVar17 = *(long *)(lVar16 + 0x78);
                      uVar15 = 0;
                      if (lVar17 != 0) {
                        if (*(int *)(lVar14 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                          lVar16 = *(long *)(*(long *)puVar4 + 0xb8);
                        }
                        lVar14 = *(long *)(lVar16 + 0x90);
                        if (lVar14 == 0) goto LAB_06183bb8;
                        if (*(int *)(lVar14 + 0x18) == 0) goto LAB_06183b5c;
                        uVar15 = FUN_05373aa8(0,*(undefined8 *)(lVar16 + 0x88),
                                              *(undefined4 *)(lVar14 + 0x2c),
                                              *(undefined4 *)(lVar14 + 0x30),0);
                        uVar15 = (**(code **)(lVar17 + 0x18))
                                           (*(undefined8 *)(lVar17 + 0x40),uVar11,uVar15,
                                            *(undefined8 *)(lVar17 + 0x28));
                      }
                      local_110 = uVar15;
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      uVar25 = FUN_06350670(uVar15,0,0);
                      if ((uVar25 & 1) != 0) {
                        if (*(int *)(*(long *)
                                      Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__
                                    + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        uVar15 = FUN_0619f2b8(0);
                        lVar14 = *(long *)puVar4;
                        if (*(int *)(lVar14 + 0xe4) == 0) {
                          thunk_FUN_02df485c(lVar14);
                          lVar14 = *(long *)puVar4;
                        }
                        lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x90);
                        if (lVar16 == 0) goto LAB_06183bb8;
                        if (*(int *)(lVar16 + 0x18) == 0) goto LAB_06183b5c;
                        uVar23 = FUN_05373aa8(0,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x88),
                                              *(undefined4 *)(lVar16 + 0x2c),
                                              *(undefined4 *)(lVar16 + 0x30),0);
                        uVar15 = FUN_05362cb4(uVar15,uVar23,0);
                        local_110 = FUN_038026b0(uVar15,*(undefined8 *)
                                                                                                                  
                                                  Method_UnityEngine_InputSystem_InputControl_TryGetChildControl<AxisControl>__
                                                );
                      }
                    }
                    uVar15 = local_110;
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    uVar25 = FUN_06350670(uVar15,0,0);
                    if ((uVar25 & 1) != 0) {
                      return 0;
                    }
                    FUN_0613fe2c(uVar11,local_110,0);
                    *(undefined8 *)(param_5 + 0x6b0) = local_110;
                  }
                  else {
                    *(undefined8 *)(param_5 + 0x6b0) = local_110;
                  }
                  LeanTween__value(param_5 + 0x6b0,local_110);
                }
                lVar14 = *(long *)puVar4;
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar14 = *(long *)puVar4;
                }
                lVar16 = *(long *)(lVar14 + 0xb8);
                lVar17 = *(long *)(lVar16 + 0x90);
                if (lVar17 == 0) goto LAB_06183bb8;
                if (*(int *)(lVar17 + 0x18) == 0) goto LAB_06183b5c;
                if (*(int *)(lVar17 + 0x28) == 1) {
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    lVar14 = thunk_FUN_02df485c();
                    lVar16 = *(long *)(*(long *)puVar4 + 0xb8);
                    lVar17 = *(long *)(lVar16 + 0x90);
                    if (lVar17 == 0) goto LAB_06183bb8;
                  }
                  if (*(int *)(lVar17 + 0x18) == 0) goto LAB_06183b5c;
                  local_e0 = local_e0 & 0xffffffff00000000;
                  fVar27 = (float)FUN_0618a78c(lVar14,*(undefined8 *)(lVar16 + 0x88),
                                               *(undefined4 *)(lVar17 + 0x2c),
                                               *(undefined4 *)(lVar17 + 0x30),&local_e0);
                  iVar12 = -0x80000000;
                  if (fVar27 != INFINITY) {
                    iVar12 = (int)fVar27;
                  }
                  if (iVar12 == -0x8000) {
                    return 0;
                  }
                  if ((*(long *)(param_5 + 0x6b0) == 0) ||
                     (lVar14 = FUN_061a2bf0(*(long *)(param_5 + 0x6b0),0), lVar14 == 0))
                  goto LAB_06183bb8;
                  if (*(int *)(lVar14 + 0x18) + -1 < iVar12) {
                    return 0;
                  }
                  lVar14 = *(long *)puVar4;
                  *(int *)(param_5 + 0x6bc) = iVar12;
                }
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar14 = *(long *)puVar4;
                }
                uVar9 = 0;
                uVar11 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x68);
                plVar18 = (long *)(param_5 + 0x6b0);
                *(undefined1 *)(param_5 + 0x1d1) = 0;
                *(undefined4 *)(param_5 + 0x1d4) = uVar11;
                goto LAB_061837a8;
              }
              if (-0x1044a318 < (int)uVar9) {
                if (0x53 < (int)uVar9) {
                  if (0x64d < uVar9) {
                    if (uVar9 != 0x64e) {
                      if (uVar9 == 0x65a) {
                        if (((*(byte *)(param_5 + 0x280) >> 2 & 1) == 0) &&
                           (cVar7 = FUN_061a9c14(param_5 + 0x288,4,0), cVar7 == '\0')) {
                          *(uint *)(param_5 + 0x284) = *(uint *)(param_5 + 0x284) & 0xfffffffb;
                        }
                        uVar11 = FUN_047df77c(param_5 + 0x528,
                                              *(undefined8 *)
                                               Method_UnityEngine_InputSystem_InputControlExtensions_BuildPath__
                                             );
                        *(undefined4 *)(param_5 + 0x158) = uVar11;
                        return 1;
                      }
                      if (uVar9 != 0x65c) {
                        return 0;
                      }
                      if (((*(byte *)(param_5 + 0x280) >> 6 & 1) == 0) &&
                         (cVar7 = FUN_061a9c14(param_5 + 0x288,0x40,0), cVar7 == '\0')) {
                        *(uint *)(param_5 + 0x284) = *(uint *)(param_5 + 0x284) & 0xffffffbf;
                      }
                      uVar11 = FUN_047df77c(param_5 + 0x548,
                                            *(undefined8 *)
                                             Method_UnityEngine_InputSystem_InputControlExtensions_BuildPath__
                                           );
                      *(undefined4 *)(param_5 + 0x15c) = uVar11;
                      return 1;
                    }
                    if (*(char *)(param_5 + 0x469) == '\0') {
                      return 1;
                    }
                    if (*(char *)(param_5 + 0x42d) != '\0') {
                      return 1;
                    }
                    lVar14 = *(long *)(param_5 + 0x3a0);
                    if ((lVar14 != 0) && (lVar16 = *(long *)(lVar14 + 0x48), lVar16 != 0)) {
                      uVar20 = *(uint *)(lVar14 + 0x28);
                      uVar9 = *(uint *)(lVar16 + 0x18);
                      goto FUN_061817b4;
                    }
                    goto LAB_06183bb8;
                  }
                  if (uVar9 != 0x55) {
                    if (uVar9 == 0x646) {
                      if ((*(byte *)(param_5 + 0x280) >> 1 & 1) != 0) {
                        return 1;
                      }
                      uVar11 = FUN_047e045c(param_5 + 0x5e8,
                                            *(undefined8 *)
                                             Method_UnityEngine_InputSystem_InputControlExtensions_AccumulateValueInEvent__
                                           );
                      *(undefined4 *)(param_5 + 0x608) = uVar11;
                      cVar7 = FUN_061a9c14(param_5 + 0x288,2,0);
                      if (cVar7 != '\0') {
                        return 1;
                      }
                      uVar9 = *(uint *)(param_5 + 0x284) & 0xfffffffd;
                      goto LAB_06181724;
                    }
                    if (uVar9 != 0x64d) {
                      return 0;
                    }
                    if ((*(byte *)(param_5 + 0x280) & 1) != 0) {
                      return 1;
                    }
                    cVar7 = FUN_061a9c14(param_5 + 0x288,1,0);
                    if (cVar7 != '\0') {
                      return 1;
                    }
                    uVar15 = *(undefined8 *)
                              Method_UnityEngine_InputSystem_InputControlExtensions_ReadUnprocessedValueFromEvent<float>__
                    ;
                    *(uint *)(param_5 + 0x284) = *(uint *)(param_5 + 0x284) & 0xfffffffe;
LAB_06182380:
                    uVar11 = FUN_047e0be0(param_5 + 0x240,uVar15);
                    *(undefined4 *)(param_5 + 0x23c) = uVar11;
                    return 1;
                  }
                  *(uint *)(param_5 + 0x284) = *(uint *)(param_5 + 0x284) | 4;
                  FUN_061a9b10(param_5 + 0x288,4,0);
                  lVar14 = *(long *)puVar4;
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    lVar14 = *(long *)puVar4;
                  }
                  lVar16 = *(long *)(lVar14 + 0xb8);
                  lVar17 = *(long *)(lVar16 + 0x90);
                  if (lVar17 == 0) goto LAB_06183bb8;
                  if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) goto LAB_06183b5c;
                  if (*(int *)(lVar17 + 0x38) == 0x4e3381d) {
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      lVar14 = thunk_FUN_02df485c();
                      lVar16 = *(long *)(*(long *)puVar4 + 0xb8);
                      lVar17 = *(long *)(lVar16 + 0x90);
                      if (lVar17 == 0) goto LAB_06183bb8;
                    }
                    if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) goto LAB_06183b5c;
                    uVar9 = FUN_0618a494(lVar14,*(undefined8 *)(lVar16 + 0x88),
                                         *(undefined4 *)(lVar17 + 0x44),
                                         *(undefined4 *)(lVar17 + 0x48));
                    *(uint *)(param_5 + 0x158) = uVar9;
                    bVar8 = *(byte *)(param_5 + 0x503);
                    if (uVar9 >> 0x18 <= (uint)*(byte *)(param_5 + 0x503)) {
                      bVar8 = (byte)(uVar9 >> 0x18);
                    }
                    *(byte *)(param_5 + 0x15b) = bVar8;
                    uVar11 = *(undefined4 *)(param_5 + 0x158);
                  }
                  else {
                    uVar11 = *(undefined4 *)(param_5 + 0x500);
                    *(undefined4 *)(param_5 + 0x158) = uVar11;
                  }
                  uVar15 = *(undefined8 *)
                            Method_UnityEngine_InputSystem_InputControl_WriteValueFromObjectIntoState__
                  ;
                  param_5 = param_5 + 0x528;
                  goto LAB_0617f5d4;
                }
                if (0x41 < (int)uVar9) {
                  if (uVar9 == 0x42) {
                    *(uint *)(param_5 + 0x284) = *(uint *)(param_5 + 0x284) | 1;
                    FUN_061a9b10(param_5 + 0x288,1,0);
                    *(undefined4 *)(param_5 + 0x23c) = 700;
                    return 1;
                  }
                  if (uVar9 == 0x49) {
                    *(uint *)(param_5 + 0x284) = *(uint *)(param_5 + 0x284) | 2;
                    FUN_061a9b10(param_5 + 0x288,2,0);
                    lVar14 = *(long *)puVar4;
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                      lVar14 = *(long *)puVar4;
                    }
                    lVar16 = *(long *)(lVar14 + 0xb8);
                    lVar17 = *(long *)(lVar16 + 0x90);
                    if (lVar17 == 0) goto LAB_06183bb8;
                    if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) goto LAB_06183b5c;
                    if (*(int *)(lVar17 + 0x38) == 0x47db7c1) {
                      if (*(int *)(lVar14 + 0xe4) == 0) {
                        lVar14 = thunk_FUN_02df485c();
                        lVar16 = *(long *)(*(long *)puVar4 + 0xb8);
                        lVar17 = *(long *)(lVar16 + 0x90);
                        if (lVar17 == 0) goto LAB_06183bb8;
                      }
                      if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) goto LAB_06183b5c;
                      local_e0 = local_e0 & 0xffffffff00000000;
                      fVar27 = (float)FUN_0618a78c(lVar14,*(undefined8 *)(lVar16 + 0x88),
                                                   *(undefined4 *)(lVar17 + 0x44),
                                                   *(undefined4 *)(lVar17 + 0x48),&local_e0);
                      uVar9 = (uint)fVar27;
                      uVar20 = 0x80000000;
                      if (fVar27 != INFINITY) {
                        uVar20 = uVar9;
                      }
                      *(uint *)(param_5 + 0x608) = uVar20;
                      if (0x168 < uVar20 + 0xb4) {
                        return 0;
                      }
                    }
                    else {
                      if (*(long *)(param_5 + 0x100) == 0) goto LAB_06183bb8;
                      bVar8 = *(byte *)(*(long *)(param_5 + 0x100) + 0x1b0);
                      uVar9 = (uint)bVar8;
                      *(uint *)(param_5 + 0x608) = (uint)bVar8;
                    }
                    FUN_047e0414(param_5 + 0x5e8,uVar9,
                                 *(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputControl_GetDeviceIndex__);
                    return 1;
                  }
                  if (uVar9 != 0x53) {
                    return 0;
                  }
                  *(uint *)(param_5 + 0x284) = *(uint *)(param_5 + 0x284) | 0x40;
                  FUN_061a9b10(param_5 + 0x288,0x40,0);
                  lVar14 = *(long *)puVar4;
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    lVar14 = *(long *)puVar4;
                  }
                  lVar16 = *(long *)(lVar14 + 0xb8);
                  lVar17 = *(long *)(lVar16 + 0x90);
                  if (lVar17 == 0) goto LAB_06183bb8;
                  if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) goto LAB_06183b5c;
                  if (*(int *)(lVar17 + 0x38) == 0x4e3381d) {
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      lVar14 = thunk_FUN_02df485c();
                      lVar16 = *(long *)(*(long *)puVar4 + 0xb8);
                      lVar17 = *(long *)(lVar16 + 0x90);
                      if (lVar17 == 0) goto LAB_06183bb8;
                    }
                    if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) goto LAB_06183b5c;
                    uVar9 = FUN_0618a494(lVar14,*(undefined8 *)(lVar16 + 0x88),
                                         *(undefined4 *)(lVar17 + 0x44),
                                         *(undefined4 *)(lVar17 + 0x48));
                    *(uint *)(param_5 + 0x15c) = uVar9;
                    bVar8 = *(byte *)(param_5 + 0x503);
                    if (uVar9 >> 0x18 <= (uint)*(byte *)(param_5 + 0x503)) {
                      bVar8 = (byte)(uVar9 >> 0x18);
                    }
                    *(byte *)(param_5 + 0x15f) = bVar8;
                    uVar11 = *(undefined4 *)(param_5 + 0x15c);
                  }
                  else {
                    uVar11 = *(undefined4 *)(param_5 + 0x500);
                    *(undefined4 *)(param_5 + 0x15c) = uVar11;
                  }
                  uVar15 = *(undefined8 *)
                            Method_UnityEngine_InputSystem_InputControl_WriteValueFromObjectIntoState__
                  ;
                  param_5 = param_5 + 0x548;
                  goto LAB_0617f5d4;
                }
                if (uVar9 == 0xff568194) {
                  *(undefined4 *)(param_5 + 0x634) = 0;
                  return 1;
                }
                if (uVar9 != 0x41) {
                  return 0;
                }
                if (*(char *)(param_5 + 0x469) == '\0') {
                  return 1;
                }
                if (*(char *)(param_5 + 0x42d) != '\0') {
                  return 1;
                }
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar16 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x90);
                  if (lVar16 == 0) goto LAB_06183bb8;
                }
                if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) goto LAB_06183b5c;
                if (*(int *)(lVar16 + 0x38) != 0x26afb9) {
                  return 1;
                }
                lVar14 = *(long *)(param_5 + 0x3a0);
                if (lVar14 == 0) goto LAB_06183bb8;
                lVar16 = *(long *)(lVar14 + 0x48);
                if (lVar16 == 0) goto LAB_06183bb8;
                uVar9 = *(uint *)(lVar14 + 0x28);
                if (*(int *)(lVar16 + 0x18) < (int)(uVar9 + 1)) {
                  if (*(int *)(*(long *)Method_System_HashCode_Add<bool>__ + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  FUN_0383ec34((long *)(lVar14 + 0x48),uVar9 + 1,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_InputControl_TryGetChildControl<Vector2Control>__
                              );
                  lVar14 = *(long *)(param_5 + 0x3a0);
                  if (lVar14 == 0) goto LAB_06183bb8;
                }
                lVar14 = *(long *)(lVar14 + 0x48);
                if (lVar14 == 0) goto LAB_06183bb8;
                if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_06183b5c;
                plVar18 = (long *)(lVar14 + (long)(int)uVar9 * 0x28 + 0x20);
                *plVar18 = param_5;
                LeanTween__value(plVar18,param_5);
                if ((*(long *)(param_5 + 0x3a0) == 0) ||
                   (lVar14 = *(long *)(*(long *)(param_5 + 0x3a0) + 0x48), lVar14 == 0))
                goto LAB_06183bb8;
                if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_06183b5c;
                lVar16 = lVar14 + (long)(int)uVar9 * 0x28;
                *(undefined4 *)(lVar16 + 0x28) = 0x26afb9;
                *(undefined4 *)(lVar16 + 0x34) = *(undefined4 *)(param_5 + 0x4a4);
                lVar17 = *(long *)puVar4;
                if (*(int *)(lVar17 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar17 = *(long *)puVar4;
                }
                lVar19 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x90);
                if (lVar19 == 0) goto LAB_06183bb8;
                if (((*(uint *)(lVar19 + 0x18) & 0xfffffffe) != 0) &&
                   (uVar9 < *(uint *)(lVar14 + 0x18))) {
                  iVar12 = *(int *)(lVar19 + 0x44);
                  uVar11 = *(undefined4 *)(lVar19 + 0x48);
                  uVar15 = *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x88);
LAB_06181954:
                  FUN_06151c6c(lVar16 + 0x20,uVar15,iVar12,uVar11,0);
                  return 1;
                }
                goto LAB_06183b5c;
              }
              if (uVar9 < 0xd2d23292) {
                if (0xd078112f < uVar9) {
                  if (uVar9 != 0xd256d1de) {
                    if (uVar9 == 0xd26babf6) {
                      uVar30 = FUN_0571b394(0);
                      goto LAB_061814dc;
                    }
                    if (uVar9 != 0xd2d23291) {
                      return 0;
                    }
                    FUN_047e0a18(param_5 + 0x240,
                                 *(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputControlExtensions_CompareState__
                                );
                    if (*(int *)(param_5 + 0x284) == 1) {
                      *(undefined4 *)(param_5 + 0x23c) = 700;
                      return 1;
                    }
                    uVar15 = *(undefined8 *)
                              Method_UnityEngine_InputSystem_InputControlExtensions_ReadUnprocessedValueFromEvent<float>__
                    ;
                    goto LAB_06182380;
                  }
                  uVar15 = 0x20;
                  uVar9 = *(uint *)(param_5 + 0x284) | 0x20;
                  goto LAB_06181d60;
                }
                if (uVar9 == 0xd05efa5c) {
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    lVar14 = thunk_FUN_02df485c();
                    plVar18 = *(long **)(*(long *)puVar4 + 0xb8);
                    lVar16 = plVar18[0x12];
                    if (lVar16 == 0) goto LAB_06183bb8;
                  }
                  if (*(int *)(lVar16 + 0x18) == 0) goto LAB_06183b5c;
                  local_e0 = local_e0 & 0xffffffff00000000;
                  fVar27 = (float)FUN_0618a78c(lVar14,plVar18[0x11],*(undefined4 *)(lVar16 + 0x2c),
                                               *(undefined4 *)(lVar16 + 0x30),&local_e0);
                  if (fVar27 == -32768.0) {
                    return 0;
                  }
                  if (local_3e4 != 2) {
                    if (local_3e4 == 1) {
                      fVar28 = DAT_010fd060;
                      if (*(char *)(param_5 + 0x33e) != '\0') {
                        fVar28 = 1.0;
                      }
                      fVar27 = *(float *)(param_5 + 0x210) * fVar27 * fVar28;
                    }
                    else {
                      fVar28 = DAT_010fd060;
                      if (*(char *)(param_5 + 0x33e) != '\0') {
                        fVar28 = 1.0;
                      }
                      fVar27 = fVar27 * fVar28;
                    }
                    *(float *)(param_5 + 0x2ec) = fVar27;
                    return 1;
                  }
                  if (*(long *)(param_5 + 0x100) != 0) {
                    fVar33 = *(float *)(param_5 + 0x210);
                    memmove(&local_180,(void *)(*(long *)(param_5 + 0x100) + 0x28),0x60);
                    fVar28 = (float)FUN_063ecbd8(&local_180,0);
                    if (*(long *)(param_5 + 0x100) != 0) {
                      memmove(&local_180,(void *)(*(long *)(param_5 + 0x100) + 0x28),0x60);
                      fVar32 = (float)FUN_063ecbe0(&local_180,0);
                      if (*(long *)(param_5 + 0xf8) != 0) {
                        fVar34 = DAT_010fd060;
                        if (*(char *)(param_5 + 0x33e) != '\0') {
                          fVar34 = 1.0;
                        }
                        memmove(&local_180,(void *)(*(long *)(param_5 + 0xf8) + 0x28),0x60);
                        fVar31 = (float)FUN_063ecc00(&local_180,0);
                        *(float *)(param_5 + 0x2ec) =
                             (fVar33 / fVar28) * fVar32 * fVar34 * ((fVar27 * fVar31) / 100.0);
                        return 1;
                      }
                    }
                  }
                  goto LAB_06183bb8;
                }
                if (uVar9 != 0xd078112f) {
                  return 0;
                }
              }
              else {
                if (0xe554f6f3 < uVar9) {
                  if (uVar9 == 0xe7ae3cb4) {
                    *(undefined1 *)(param_5 + 0x468) = 1;
                    return 1;
                  }
                  if (uVar9 == 0xedcbd276) goto LAB_0617fbc4;
                  if (uVar9 != 0xefbb5ce8) {
                    return 0;
                  }
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    lVar14 = thunk_FUN_02df485c();
                    plVar18 = *(long **)(*(long *)puVar4 + 0xb8);
                    lVar16 = plVar18[0x12];
                    if (lVar16 == 0) goto LAB_06183bb8;
                  }
                  if (*(int *)(lVar16 + 0x18) != 0) {
                    local_e0 = local_e0 & 0xffffffff00000000;
                    fVar27 = (float)FUN_0618a78c(lVar14,plVar18[0x11],*(undefined4 *)(lVar16 + 0x2c)
                                                 ,*(undefined4 *)(lVar16 + 0x30),&local_e0);
                    if (fVar27 == -32768.0) {
                      return 0;
                    }
                    if (local_3e4 == 2) {
                      fVar28 = 0.0;
                      if (*(float *)(param_5 + 0x398) != -1.0) {
                        fVar28 = *(float *)(param_5 + 0x398);
                      }
                      fVar27 = (fVar27 * (*(float *)(param_5 + 0x390) - fVar28)) / 100.0;
                    }
                    else if (local_3e4 == 1) {
                      fVar28 = DAT_010fd060;
                      if (*(char *)(param_5 + 0x33e) != '\0') {
                        fVar28 = 1.0;
                      }
                      fVar27 = *(float *)(param_5 + 0x210) * fVar27 * fVar28;
                    }
                    else {
                      fVar28 = DAT_010fd060;
                      if (*(char *)(param_5 + 0x33e) != '\0') {
                        fVar28 = 1.0;
                      }
                      fVar27 = fVar27 * fVar28;
                    }
                    if (fVar27 < 0.0) {
                      fVar27 = 0.0;
                    }
                    *(float *)(param_5 + 0x388) = fVar27;
                    return 1;
                  }
                  goto LAB_06183b5c;
                }
                if (uVar9 != 0xdd49c439) {
                  if (uVar9 != 0xe554f6f3) {
                    return 0;
                  }
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    lVar14 = thunk_FUN_02df485c();
                    plVar18 = *(long **)(*(long *)puVar4 + 0xb8);
                    lVar16 = plVar18[0x12];
                    if (lVar16 == 0) goto LAB_06183bb8;
                  }
                  if (*(int *)(lVar16 + 0x18) != 0) {
                    local_e0 = local_e0 & 0xffffffff00000000;
                    fVar27 = (float)FUN_0618a78c(lVar14,plVar18[0x11],*(undefined4 *)(lVar16 + 0x2c)
                                                 ,*(undefined4 *)(lVar16 + 0x30),&local_e0);
                    if (fVar27 == -32768.0) {
                      return 0;
                    }
                    if (local_3e4 == 2) {
                      fVar28 = 0.0;
                      if (*(float *)(param_5 + 0x398) != -1.0) {
                        fVar28 = *(float *)(param_5 + 0x398);
                      }
                      fVar27 = (fVar27 * (*(float *)(param_5 + 0x390) - fVar28)) / 100.0;
                    }
                    else if (local_3e4 == 1) {
                      fVar28 = DAT_010fd060;
                      if (*(char *)(param_5 + 0x33e) != '\0') {
                        fVar28 = 1.0;
                      }
                      fVar27 = *(float *)(param_5 + 0x210) * fVar27 * fVar28;
                    }
                    else {
                      fVar28 = DAT_010fd060;
                      if (*(char *)(param_5 + 0x33e) != '\0') {
                        fVar28 = 1.0;
                      }
                      fVar27 = fVar27 * fVar28;
                    }
                    if (fVar27 < 0.0) {
                      fVar27 = 0.0;
                    }
LAB_06182a1c:
                    *(float *)(param_5 + 0x38c) = fVar27;
                    return 1;
                  }
                  goto LAB_06183b5c;
                }
              }
              if ((*(byte *)(param_5 + 0x280) >> 4 & 1) != 0) {
                return 1;
              }
              cVar7 = FUN_061a9c14(param_5 + 0x288,0x10,0);
              if (cVar7 != '\0') {
                return 1;
              }
              uVar9 = *(uint *)(param_5 + 0x284) & 0xffffffef;
LAB_06181724:
              *(uint *)(param_5 + 0x284) = uVar9;
              return 1;
            }
            if (uVar9 < 0x37b920b) {
              if (0x2adb73 < uVar9) {
                if (0x597459 < uVar9) {
                  if (uVar9 < 0x36f95db) {
                    if (uVar9 == 0x36d097e) {
                      *(undefined1 *)(param_5 + 0x309) = 0;
                      return 1;
                    }
                    if (uVar9 != 0x36f95da) {
                      return 0;
                    }
                    if ((*(byte *)(param_5 + 0x281) >> 1 & 1) != 0) {
                      return 1;
                    }
                    FUN_047dfdc8(&local_e0,param_5 + 0x568,
                                 *(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputControlExtensions_CheckStateIsAtDefaultIgnoringNoise__
                                );
                    FUN_047dfb64(&local_e0,param_5 + 0x568,
                                 *(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputControlExtensions_CompareStateIgnoringNoise__
                                );
                    *(long *)(param_5 + 0x168) = lStack_d8;
                    *(ulong *)(param_5 + 0x160) = local_e0;
                    *(undefined4 *)(param_5 + 0x170) = (undefined4)local_d0;
                    cVar7 = FUN_061a9c14(param_5 + 0x288,0x200,0);
                    if (cVar7 != '\0') {
                      return 1;
                    }
                    uVar9 = *(uint *)(param_5 + 0x284) & 0xfffffdff;
                    goto LAB_06181724;
                  }
                  if (uVar9 != 0x37038af) {
                    if (uVar9 == 0x37128fc) {
                      if (*(int *)(lVar14 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                        plVar18 = *(long **)(*(long *)puVar4 + 0xb8);
                      }
                      FUN_047e10dc(&local_e0,plVar18 + 2,
                                   *(undefined8 *)
                                    Method_UnityEngine_InputSystem_InputControlExtensions_CheckStateIsAtDefaultIgnoringNoise__
                                  );
                      *(long *)(param_5 + 0x100) = lStack_d8;
                      LeanTween__value(param_5 + 0x100);
                      *(undefined8 *)(param_5 + 0x118) = local_c8;
                      LeanTween__value(param_5 + 0x118,local_c8);
                      *(undefined4 *)(param_5 + 0x120) = (undefined4)local_e0;
                      return 1;
                    }
                    if (uVar9 != 0x37b920a) {
                      return 0;
                    }
                    uVar11 = FUN_047e1df0(param_5 + 0x218,
                                          *(undefined8 *)
                                           Method_UnityEngine_InputSystem_InputControlExtensions_CheckStateIsAtDefault__
                                         );
                    *(undefined4 *)(param_5 + 0x210) = uVar11;
                    return 1;
                  }
                  if (*(char *)(param_5 + 0x469) == '\0') {
                    return 1;
                  }
                  if (*(char *)(param_5 + 0x42d) != '\0') {
                    return 1;
                  }
                  lVar14 = *(long *)(param_5 + 0x3a0);
                  if ((lVar14 == 0) || (lVar16 = *(long *)(lVar14 + 0x48), lVar16 == 0))
                  goto LAB_06183bb8;
                  uVar20 = *(uint *)(lVar14 + 0x28);
                  uVar9 = *(uint *)(lVar16 + 0x18);
                  if ((int)uVar9 <= (int)uVar20) {
                    return 1;
                  }
FUN_061817b4:
                  if (uVar20 < uVar9) {
                    lVar16 = lVar16 + (long)(int)uVar20 * 0x28;
                    *(int *)(lVar16 + 0x38) = *(int *)(param_5 + 0x4a4) - *(int *)(lVar16 + 0x34);
                    *(uint *)(lVar14 + 0x28) = uVar20 + 1;
                    return 1;
                  }
                  goto LAB_06183b5c;
                }
                if (0x2eb625 < uVar9) {
                  return 0;
                }
                if (uVar9 == 0x2b96d1) {
                  *(undefined1 *)(param_5 + 0x309) = 1;
                  return 1;
                }
                if (uVar9 != 0x2eb625) {
                  return 0;
                }
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  lVar14 = thunk_FUN_02df485c();
                  plVar18 = *(long **)(*(long *)puVar4 + 0xb8);
                  lVar16 = plVar18[0x12];
                  if (lVar16 == 0) goto LAB_06183bb8;
                }
                if (*(int *)(lVar16 + 0x18) == 0) goto LAB_06183b5c;
                local_e0 = local_e0 & 0xffffffff00000000;
                fVar27 = (float)FUN_0618a78c(lVar14,plVar18[0x11],*(undefined4 *)(lVar16 + 0x2c),
                                             *(undefined4 *)(lVar16 + 0x30),&local_e0);
                if (fVar27 == -32768.0) {
                  return 0;
                }
                if (local_3e4 == 2) {
                  fVar27 = (fVar27 * *(float *)(param_5 + 0x20c)) / 100.0;
                }
                else if (local_3e4 == 1) {
                  fVar27 = fVar27 * *(float *)(param_5 + 0x20c);
                }
                else {
                  lVar14 = *(long *)puVar4;
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    lVar14 = *(long *)puVar4;
                  }
                  lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x88);
                  if (lVar16 == 0) goto LAB_06183bb8;
                  if (*(uint *)(lVar16 + 0x18) < 6) goto LAB_06183b5c;
                  if (*(short *)(lVar16 + 0x2a) != 0x2b) {
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                      lVar16 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88);
                      if (lVar16 == 0) goto LAB_06183bb8;
                    }
                    if (*(uint *)(lVar16 + 0x18) < 6) goto LAB_06183b5c;
                    if (*(short *)(lVar16 + 0x2a) != 0x2d) {
                      uVar15 = *(undefined8 *)
                                Method_UnityEngine_InputSystem_InputControl_WriteValueFromBufferIntoState__
                      ;
                      *(float *)(param_5 + 0x210) = fVar27;
                      goto LAB_061829e4;
                    }
                  }
                  fVar27 = fVar27 + *(float *)(param_5 + 0x20c);
                }
                puVar4 = Method_UnityEngine_InputSystem_InputControl_WriteValueFromBufferIntoState__
                ;
                *(float *)(param_5 + 0x210) = fVar27;
                uVar15 = *(undefined8 *)puVar4;
LAB_061829e4:
                FUN_047e1dac(fVar27,param_5 + 0x218,uVar15);
                return 1;
              }
              if (uVar9 < 0x1b02fa) {
                if (uVar9 < 0x167e5) {
                  if (uVar9 == 0x14dac) {
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      lVar14 = thunk_FUN_02df485c();
                      plVar18 = *(long **)(*(long *)puVar4 + 0xb8);
                      lVar16 = plVar18[0x12];
                      if (lVar16 == 0) goto LAB_06183bb8;
                    }
                    if (*(int *)(lVar16 + 0x18) != 0) {
                      local_e0 = local_e0 & 0xffffffff00000000;
                      fVar27 = (float)FUN_0618a78c(lVar14,plVar18[0x11],
                                                   *(undefined4 *)(lVar16 + 0x2c),
                                                   *(undefined4 *)(lVar16 + 0x30),&local_e0);
                      if (fVar27 == -32768.0) {
                        return 0;
                      }
                      fVar28 = DAT_010fd060;
                      if (local_3e4 == 0) {
                        if (*(char *)(param_5 + 0x33e) != '\0') {
                          fVar28 = 1.0;
                        }
                      }
                      else {
                        if (local_3e4 != 1) {
                          fVar27 = (fVar27 * *(float *)(param_5 + 0x390)) / 100.0;
                          goto LAB_06182ac0;
                        }
                        fVar27 = fVar27 * *(float *)(param_5 + 0x210);
                        if (*(char *)(param_5 + 0x33e) != '\0') {
                          fVar28 = 1.0;
                        }
                      }
                      fVar27 = fVar27 * fVar28;
                      goto LAB_06182a74;
                    }
                    goto LAB_06183b5c;
                  }
                  if (uVar9 != 0x167e4) {
                    return 0;
                  }
                  if (*(long *)(param_5 + 0x100) == 0) goto LAB_06183bb8;
                  fVar33 = *(float *)(param_5 + 0x43c);
                  memmove(&local_180,(void *)(*(long *)(param_5 + 0x100) + 0x28),0x60);
                  fVar27 = (float)FUN_063ecc58(&local_180,0);
                  fVar28 = 1.0;
                  if (0.0 < fVar27) {
                    if (*(long *)(param_5 + 0x100) == 0) goto LAB_06183bb8;
                    memmove(&local_180,(void *)(*(long *)(param_5 + 0x100) + 0x28),0x60);
                    fVar28 = (float)FUN_063ecc58(&local_180,0);
                  }
                  uVar15 = *(undefined8 *)
                            Method_UnityEngine_InputSystem_InputControlExtensions_WriteValueIntoState<uint>__
                  ;
                  *(float *)(param_5 + 0x43c) = fVar33 * fVar28;
                  FUN_047e1e64(*(undefined4 *)(param_5 + 0x634),param_5 + 0x638,uVar15);
                  lVar14 = *(long *)puVar4;
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    lVar14 = *(long *)puVar4;
                  }
                  lVar16 = **(long **)(lVar14 + 0xb8);
                  if (lVar16 == 0) goto LAB_06183bb8;
                  if (*(uint *)(lVar16 + 0x18) <= *(uint *)(param_5 + 0x120)) goto LAB_06183b5c;
                  lVar16 = lVar16 + (long)(int)*(uint *)(param_5 + 0x120) * 0x38;
                  lStack_d8 = *(long *)(lVar16 + 0x28);
                  local_e0 = *(ulong *)(lVar16 + 0x20);
                  local_c8 = *(undefined8 *)(lVar16 + 0x38);
                  local_d0 = *(undefined8 *)(lVar16 + 0x30);
                  uStack_b8 = *(undefined8 *)(lVar16 + 0x48);
                  local_c0 = *(undefined8 *)(lVar16 + 0x40);
                  local_b0 = *(undefined8 *)(lVar16 + 0x50);
                  FUN_047e1168(*(long **)(lVar14 + 0xb8) + 2,&local_e0,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_InputControlExtensions_WriteValueIntoEvent<Vector2>__
                              );
                  if (*(long *)(param_5 + 0x100) == 0) goto LAB_06183bb8;
                  fVar28 = *(float *)(param_5 + 0x210);
                  memmove(&local_180,(void *)(*(long *)(param_5 + 0x100) + 0x28),0x60);
                  fVar27 = (float)FUN_063ecbd8(&local_180,0);
                  if (*(long *)(param_5 + 0x100) == 0) goto LAB_06183bb8;
                  memmove(&local_180,(void *)(*(long *)(param_5 + 0x100) + 0x28),0x60);
                  fVar33 = (float)FUN_063ecbe0(&local_180,0);
                  if (*(long *)(param_5 + 0x100) == 0) goto LAB_06183bb8;
                  fVar34 = *(float *)(param_5 + 0x634);
                  fVar32 = DAT_010fd060;
                  if (*(char *)(param_5 + 0x33e) != '\0') {
                    fVar32 = 1.0;
                  }
                  memmove(&local_180,(void *)(*(long *)(param_5 + 0x100) + 0x28),0x60);
                  fVar31 = (float)FUN_063ecc50(&local_180,0);
                  *(float *)(param_5 + 0x634) =
                       fVar34 + (fVar28 / fVar27) * fVar33 * fVar32 * fVar31 *
                                *(float *)(param_5 + 0x43c);
                  FUN_061a9b10(param_5 + 0x288,0x100,0);
                  uVar9 = *(uint *)(param_5 + 0x284) | 0x100;
                }
                else {
                  if (uVar9 != 0x167f6) {
                    if (uVar9 != 0x1b02eb) {
                      if (uVar9 != 0x1b02f9) {
                        return 0;
                      }
                      if (-1 < *(char *)(param_5 + 0x284)) {
                        return 1;
                      }
                      if (*(int *)(lVar14 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                        plVar18 = *(long **)(*(long *)puVar4 + 0xb8);
                      }
                      FUN_047e1260(&local_e0,plVar18 + 2,
                                   *(undefined8 *)
                                    Method_UnityEngine_InputSystem_InputControlExtensions_ReadUnprocessedValueFromEvent<Vector2>__
                                  );
                      lVar14 = lStack_d8;
                      if (*(float *)(param_5 + 0x43c) < 1.0) {
                        uVar11 = FUN_047e1f38(param_5 + 0x638,
                                              *(undefined8 *)
                                               Method_UnityEngine_InputSystem_InputControlExtensions_WriteValueIntoEvent<float>__
                                             );
                        *(undefined4 *)(param_5 + 0x634) = uVar11;
                        if (lVar14 == 0) goto LAB_06183bb8;
                        fVar33 = *(float *)(param_5 + 0x43c);
                        memmove(&local_180,(void *)(lVar14 + 0x28),0x60);
                        fVar27 = (float)FUN_063ecc48(&local_180,0);
                        fVar28 = 1.0;
                        if (0.0 < fVar27) {
                          memmove(&local_180,(void *)(lVar14 + 0x28),0x60);
                          fVar28 = (float)FUN_063ecc48(&local_180,0);
                        }
                        *(float *)(param_5 + 0x43c) = fVar33 / fVar28;
                      }
                      cVar7 = FUN_061a9c14(param_5 + 0x288,0x80,0);
                      if (cVar7 != '\0') {
                        return 1;
                      }
                      uVar9 = *(uint *)(param_5 + 0x284) & 0xffffff7f;
                      goto LAB_06181724;
                    }
                    if ((*(byte *)(param_5 + 0x285) & 1) == 0) {
                      return 1;
                    }
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                      plVar18 = *(long **)(*(long *)puVar4 + 0xb8);
                    }
                    FUN_047e1260(&local_e0,plVar18 + 2,
                                 *(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputControlExtensions_ReadUnprocessedValueFromEvent<Vector2>__
                                );
                    lVar14 = lStack_d8;
                    if (*(float *)(param_5 + 0x43c) < 1.0) {
                      uVar11 = FUN_047e1f38(param_5 + 0x638,
                                            *(undefined8 *)
                                             Method_UnityEngine_InputSystem_InputControlExtensions_WriteValueIntoEvent<float>__
                                           );
                      *(undefined4 *)(param_5 + 0x634) = uVar11;
                      if (lVar14 == 0) goto LAB_06183bb8;
                      fVar33 = *(float *)(param_5 + 0x43c);
                      memmove(&local_180,(void *)(lVar14 + 0x28),0x60);
                      fVar27 = (float)FUN_063ecc58(&local_180,0);
                      fVar28 = 1.0;
                      if (0.0 < fVar27) {
                        memmove(&local_180,(void *)(lVar14 + 0x28),0x60);
                        fVar28 = (float)FUN_063ecc58(&local_180,0);
                      }
                      *(float *)(param_5 + 0x43c) = fVar33 / fVar28;
                    }
                    cVar7 = FUN_061a9c14(param_5 + 0x288,0x100,0);
                    if (cVar7 != '\0') {
                      return 1;
                    }
                    uVar9 = *(uint *)(param_5 + 0x284) & 0xfffffeff;
                    goto LAB_06181724;
                  }
                  if (*(long *)(param_5 + 0x100) == 0) goto LAB_06183bb8;
                  fVar33 = *(float *)(param_5 + 0x43c);
                  memmove(&local_180,(void *)(*(long *)(param_5 + 0x100) + 0x28),0x60);
                  fVar27 = (float)FUN_063ecc48(&local_180,0);
                  fVar28 = 1.0;
                  if (0.0 < fVar27) {
                    if (*(long *)(param_5 + 0x100) == 0) goto LAB_06183bb8;
                    memmove(&local_180,(void *)(*(long *)(param_5 + 0x100) + 0x28),0x60);
                    fVar28 = (float)FUN_063ecc48(&local_180,0);
                  }
                  uVar15 = *(undefined8 *)
                            Method_UnityEngine_InputSystem_InputControlExtensions_WriteValueIntoState<uint>__
                  ;
                  *(float *)(param_5 + 0x43c) = fVar33 * fVar28;
                  FUN_047e1e64(*(undefined4 *)(param_5 + 0x634),param_5 + 0x638,uVar15);
                  lVar14 = *(long *)puVar4;
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    lVar14 = *(long *)puVar4;
                  }
                  lVar16 = **(long **)(lVar14 + 0xb8);
                  if (lVar16 == 0) goto LAB_06183bb8;
                  if (*(uint *)(lVar16 + 0x18) <= *(uint *)(param_5 + 0x120)) goto LAB_06183b5c;
                  lVar16 = lVar16 + (long)(int)*(uint *)(param_5 + 0x120) * 0x38;
                  lStack_d8 = *(long *)(lVar16 + 0x28);
                  local_e0 = *(ulong *)(lVar16 + 0x20);
                  local_c8 = *(undefined8 *)(lVar16 + 0x38);
                  local_d0 = *(undefined8 *)(lVar16 + 0x30);
                  uStack_b8 = *(undefined8 *)(lVar16 + 0x48);
                  local_c0 = *(undefined8 *)(lVar16 + 0x40);
                  local_b0 = *(undefined8 *)(lVar16 + 0x50);
                  FUN_047e1168(*(long **)(lVar14 + 0xb8) + 2,&local_e0,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_InputControlExtensions_WriteValueIntoEvent<Vector2>__
                              );
                  if (*(long *)(param_5 + 0x100) == 0) goto LAB_06183bb8;
                  fVar28 = *(float *)(param_5 + 0x210);
                  memmove(&local_180,(void *)(*(long *)(param_5 + 0x100) + 0x28),0x60);
                  fVar27 = (float)FUN_063ecbd8(&local_180,0);
                  if (*(long *)(param_5 + 0x100) == 0) goto LAB_06183bb8;
                  memmove(&local_180,(void *)(*(long *)(param_5 + 0x100) + 0x28),0x60);
                  fVar33 = (float)FUN_063ecbe0(&local_180,0);
                  if (*(long *)(param_5 + 0x100) == 0) goto LAB_06183bb8;
                  fVar34 = *(float *)(param_5 + 0x634);
                  fVar32 = DAT_010fd060;
                  if (*(char *)(param_5 + 0x33e) != '\0') {
                    fVar32 = 1.0;
                  }
                  memmove(&local_180,(void *)(*(long *)(param_5 + 0x100) + 0x28),0x60);
                  fVar31 = (float)FUN_063ecc40(&local_180,0);
                  *(float *)(param_5 + 0x634) =
                       fVar34 + (fVar28 / fVar27) * fVar33 * fVar32 * fVar31 *
                                *(float *)(param_5 + 0x43c);
                  FUN_061a9b10(param_5 + 0x288,0x80,0);
                  uVar9 = *(uint *)(param_5 + 0x284) | 0x80;
                }
                *(uint *)(param_5 + 0x284) = uVar9;
                return 1;
              }
              if (0x277753 < uVar9) {
                if (uVar9 != 0x288780) {
                  if (uVar9 != 0x292f75) {
                    if (uVar9 != 0x2adb73) {
                      return 0;
                    }
                    if (*(int *)(param_5 + 0x310) != 5) {
                      return 1;
                    }
                    *(undefined4 *)(param_5 + 0x4ec) = 0;
                    *(undefined1 *)(param_5 + 0x374) = 1;
                    *(int *)(param_5 + 0x4c4) = *(int *)(param_5 + 0x4c4) + 1;
                    fVar27 = *(float *)(param_5 + 0x440) + 0.0 + *(float *)(param_5 + 0x444);
LAB_06182ac0:
                    *(float *)(param_5 + 0x658) = fVar27;
                    return 1;
                  }
                  *(uint *)(param_5 + 0x284) = *(uint *)(param_5 + 0x284) | 0x200;
                  FUN_061a9b10(param_5 + 0x288,0x200,0);
                  puVar2 = Method_UnityEngine_Hash128_Append<Vector2Int>__;
                  if (*(int *)(*(long *)Method_UnityEngine_Hash128_Append<Vector2Int>__ + 0xe4) == 0
                     ) {
                    thunk_FUN_02df485c();
                  }
                  uVar30 = FUN_061371d8(0);
                  uVar9 = 0;
                  local_f0 = CONCAT44(uVar11,uVar30);
                  uVar25 = 0x4000ffff;
                  local_e8 = CONCAT44(uVar29,fVar27);
                  goto LAB_061810c8;
                }
                if (*(char *)(param_5 + 0x469) == '\0') {
                  return 1;
                }
                if (*(char *)(param_5 + 0x42d) != '\0') {
                  return 1;
                }
                lVar14 = *(long *)(param_5 + 0x3a0);
                if (lVar14 == 0) goto LAB_06183bb8;
                lVar16 = *(long *)(lVar14 + 0x48);
                if (lVar16 == 0) goto LAB_06183bb8;
                uVar9 = *(uint *)(lVar14 + 0x28);
                if (*(int *)(lVar16 + 0x18) < (int)(uVar9 + 1)) {
                  if (*(int *)(*(long *)Method_System_HashCode_Add<bool>__ + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  FUN_0383ec34((long *)(lVar14 + 0x48),uVar9 + 1,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_InputControl_TryGetChildControl<Vector2Control>__
                              );
                  lVar14 = *(long *)(param_5 + 0x3a0);
                  if (lVar14 == 0) goto LAB_06183bb8;
                }
                lVar14 = *(long *)(lVar14 + 0x48);
                if (lVar14 == 0) goto LAB_06183bb8;
                if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_06183b5c;
                plVar18 = (long *)(lVar14 + (long)(int)uVar9 * 0x28 + 0x20);
                *plVar18 = param_5;
                LeanTween__value(plVar18,param_5);
                if ((*(long *)(param_5 + 0x3a0) == 0) ||
                   (lVar14 = *(long *)(*(long *)(param_5 + 0x3a0) + 0x48), lVar14 == 0))
                goto LAB_06183bb8;
                lVar16 = *(long *)puVar4;
                if (*(int *)(lVar16 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar16 = *(long *)puVar4;
                }
                lVar17 = *(long *)(lVar16 + 0xb8);
                lVar19 = *(long *)(lVar17 + 0x90);
                if (lVar19 == 0) goto LAB_06183bb8;
                if ((*(int *)(lVar19 + 0x18) == 0) || (*(uint *)(lVar14 + 0x18) <= uVar9))
                goto LAB_06183b5c;
                *(undefined4 *)(lVar14 + (long)(int)uVar9 * 0x28 + 0x28) =
                     *(undefined4 *)(lVar19 + 0x24);
                if ((*(long *)(param_5 + 0x3a0) == 0) ||
                   (lVar16 = *(long *)(*(long *)(param_5 + 0x3a0) + 0x48), lVar16 == 0))
                goto LAB_06183bb8;
                if (uVar9 < *(uint *)(lVar16 + 0x18)) {
                  lVar16 = lVar16 + (long)(int)uVar9 * 0x28;
                  *(undefined4 *)(lVar16 + 0x34) = *(undefined4 *)(param_5 + 0x4a4);
                  iVar12 = *(int *)(lVar19 + 0x2c);
                  *(int *)(lVar16 + 0x2c) = iVar12 + param_7;
                  uVar11 = *(undefined4 *)(lVar19 + 0x30);
                  *(undefined4 *)(lVar16 + 0x30) = uVar11;
                  uVar15 = *(undefined8 *)(lVar17 + 0x88);
                  goto LAB_06181954;
                }
                goto LAB_06183b5c;
              }
              if (uVar9 == 0x1b2023) {
                *(undefined1 *)(param_5 + 0x30a) = 0;
                return 1;
              }
              if (uVar9 != 0x277753) {
                return 0;
              }
              if (*(int *)(lVar14 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar14 = *(long *)puVar4;
                plVar18 = *(long **)(lVar14 + 0xb8);
                lVar16 = plVar18[0x12];
                if (lVar16 == 0) goto LAB_06183bb8;
              }
              if ((*(int *)(lVar16 + 0x18) == 0) || (*(int *)(lVar16 + 0x18) == 1))
              goto LAB_06183b5c;
              iVar12 = *(int *)(lVar16 + 0x24);
              if (iVar12 != -0x25034fb5) {
                iVar13 = *(int *)(lVar16 + 0x38);
                iVar1 = *(int *)(lVar16 + 0x3c);
                FUN_0614017c(iVar12,&local_f8,0);
                lVar14 = local_f8;
                puVar2 = PTR_DAT_069fb990;
                if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                uVar25 = FUN_06350670(lVar14,0,0);
                if ((uVar25 & 1) != 0) {
                  lVar14 = *(long *)puVar4;
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    lVar14 = *(long *)puVar4;
                  }
                  lVar16 = *(long *)(lVar14 + 0xb8);
                  lVar17 = *(long *)(lVar16 + 0x70);
                  if (lVar17 == 0) {
                    lVar14 = 0;
                  }
                  else {
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                      lVar16 = *(long *)(*(long *)puVar4 + 0xb8);
                    }
                    lVar14 = *(long *)(lVar16 + 0x90);
                    if (lVar14 == 0) goto LAB_06183bb8;
                    if (*(int *)(lVar14 + 0x18) == 0) goto LAB_06183b5c;
                    uVar15 = FUN_05373aa8(0,*(undefined8 *)(lVar16 + 0x88),
                                          *(undefined4 *)(lVar14 + 0x2c),
                                          *(undefined4 *)(lVar14 + 0x30),0);
                    lVar14 = (**(code **)(lVar17 + 0x18))
                                       (*(undefined8 *)(lVar17 + 0x40),iVar12,uVar15,
                                        *(undefined8 *)(lVar17 + 0x28));
                  }
                  local_f8 = lVar14;
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  uVar25 = FUN_06350670(lVar14,0,0);
                  if ((uVar25 & 1) != 0) {
                    if (*(int *)(*(long *)
                                  Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__ +
                                0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    uVar15 = FUN_0619ed3c(0);
                    lVar14 = *(long *)puVar4;
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      thunk_FUN_02df485c(lVar14);
                      lVar14 = *(long *)puVar4;
                    }
                    lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x90);
                    if (lVar16 == 0) goto LAB_06183bb8;
                    if (*(int *)(lVar16 + 0x18) == 0) goto LAB_06183b5c;
                    uVar23 = FUN_05373aa8(0,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x88),
                                          *(undefined4 *)(lVar16 + 0x2c),
                                          *(undefined4 *)(lVar16 + 0x30),0);
                    uVar15 = FUN_05362cb4(uVar15,uVar23,0);
                    local_f8 = FUN_038026b0(uVar15,*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_InputSystem_InputControl_GetChildControl<Vector3Control>__
                                           );
                  }
                  lVar14 = local_f8;
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  uVar25 = FUN_06350670(lVar14,0,0);
                  if ((uVar25 & 1) != 0) {
                    return 0;
                  }
                  FUN_0613fc04(local_f8,0);
                }
                if (iVar13 == 0 && iVar1 == 0) {
                  if (local_f8 == 0) goto LAB_06183bb8;
                  *(undefined8 *)(param_5 + 0x118) = *(undefined8 *)(local_f8 + 0x88);
                  LeanTween__value(param_5 + 0x118);
                  lVar14 = local_f8;
                  lVar16 = *(long *)puVar4;
                  uVar15 = *(undefined8 *)(param_5 + 0x118);
                  if (*(int *)(lVar16 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    lVar16 = *(long *)puVar4;
                  }
                  uVar9 = FUN_061405e0(uVar15,lVar14,*(long *)(lVar16 + 0xb8),
                                       *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8),0);
                  lVar14 = *(long *)puVar4;
                  *(uint *)(param_5 + 0x120) = uVar9;
                  plVar18 = *(long **)(lVar14 + 0xb8);
                  lVar14 = *plVar18;
                  if (lVar14 == 0) goto LAB_06183bb8;
                  if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_06183b5c;
                  lVar14 = lVar14 + (long)(int)uVar9 * 0x38;
                  lStack_d8 = *(long *)(lVar14 + 0x28);
                  local_e0 = *(ulong *)(lVar14 + 0x20);
                  local_c8 = *(undefined8 *)(lVar14 + 0x38);
                  local_d0 = *(undefined8 *)(lVar14 + 0x30);
                  uStack_b8 = *(undefined8 *)(lVar14 + 0x48);
                  local_c0 = *(undefined8 *)(lVar14 + 0x40);
                  local_b0 = *(undefined8 *)(lVar14 + 0x50);
                }
                else {
                  if (iVar13 != 0x313400cb) {
                    return 0;
                  }
                  uVar25 = FUN_06140374(iVar1,&local_100,0);
                  if ((uVar25 & 1) == 0) {
                    if (*(int *)(*(long *)
                                  Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__ +
                                0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    uVar15 = FUN_0619ed3c(0);
                    lVar14 = *(long *)puVar4;
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      thunk_FUN_02df485c(lVar14);
                      lVar14 = *(long *)puVar4;
                    }
                    lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x90);
                    if (lVar16 == 0) goto LAB_06183bb8;
                    if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) goto LAB_06183b5c;
                    uVar23 = FUN_05373aa8(0,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x88),
                                          *(undefined4 *)(lVar16 + 0x44),
                                          *(undefined4 *)(lVar16 + 0x48),0);
                    uVar15 = FUN_05362cb4(uVar15,uVar23,0);
                    uVar15 = FUN_038026b0(uVar15,*(undefined8 *)
                                                  Method_UnityEngine_InputSystem_InputControl_GetChildControl<TouchPressControl>__
                                         );
                    local_100 = uVar15;
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_02df485c(*(long *)puVar2);
                    }
                    uVar25 = FUN_06350670(uVar15,0,0);
                    if ((uVar25 & 1) != 0) {
                      return 0;
                    }
                    FUN_0613ff38(iVar1,local_100,0);
                    *(undefined8 *)(param_5 + 0x118) = local_100;
                    LeanTween__value(param_5 + 0x118);
                    lVar14 = local_f8;
                    lVar16 = *(long *)puVar4;
                    uVar15 = *(undefined8 *)(param_5 + 0x118);
                    if (*(int *)(lVar16 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                      lVar16 = *(long *)puVar4;
                    }
                    uVar9 = FUN_061405e0(uVar15,lVar14,*(long *)(lVar16 + 0xb8),
                                         *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8),0);
                    lVar14 = *(long *)puVar4;
                    *(uint *)(param_5 + 0x120) = uVar9;
                    plVar18 = *(long **)(lVar14 + 0xb8);
                    lVar14 = *plVar18;
                    if (lVar14 == 0) goto LAB_06183bb8;
                    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_06183b5c;
                    lVar14 = lVar14 + (long)(int)uVar9 * 0x38;
                    lStack_d8 = *(long *)(lVar14 + 0x28);
                    local_e0 = *(ulong *)(lVar14 + 0x20);
                    local_c8 = *(undefined8 *)(lVar14 + 0x38);
                    local_d0 = *(undefined8 *)(lVar14 + 0x30);
                    uStack_b8 = *(undefined8 *)(lVar14 + 0x48);
                    local_c0 = *(undefined8 *)(lVar14 + 0x40);
                    local_b0 = *(undefined8 *)(lVar14 + 0x50);
                  }
                  else {
                    *(undefined8 *)(param_5 + 0x118) = local_100;
                    LeanTween__value(param_5 + 0x118);
                    lVar14 = local_f8;
                    lVar16 = *(long *)puVar4;
                    uVar15 = *(undefined8 *)(param_5 + 0x118);
                    if (*(int *)(lVar16 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                      lVar16 = *(long *)puVar4;
                    }
                    uVar9 = FUN_061405e0(uVar15,lVar14,*(long *)(lVar16 + 0xb8),
                                         *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8),0);
                    lVar14 = *(long *)puVar4;
                    *(uint *)(param_5 + 0x120) = uVar9;
                    plVar18 = *(long **)(lVar14 + 0xb8);
                    lVar14 = *plVar18;
                    if (lVar14 == 0) goto LAB_06183bb8;
                    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_06183b5c;
                    lVar14 = lVar14 + (long)(int)uVar9 * 0x38;
                    lStack_d8 = *(long *)(lVar14 + 0x28);
                    local_e0 = *(ulong *)(lVar14 + 0x20);
                    local_c8 = *(undefined8 *)(lVar14 + 0x38);
                    local_d0 = *(undefined8 *)(lVar14 + 0x30);
                    uStack_b8 = *(undefined8 *)(lVar14 + 0x48);
                    local_c0 = *(undefined8 *)(lVar14 + 0x40);
                    local_b0 = *(undefined8 *)(lVar14 + 0x50);
                  }
                }
                FUN_047e1068(plVar18 + 2,&local_e0,
                             *(undefined8 *)Method_UnityEngine_InputSystem_InputControl_get_Item__);
                lVar14 = param_5 + 0x100;
                *(long *)(param_5 + 0x100) = local_f8;
                lVar16 = local_f8;
                goto LAB_0618362c;
              }
              if (*(int *)(lVar14 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                plVar18 = *(long **)(*(long *)puVar4 + 0xb8);
              }
              lVar14 = *plVar18;
              if (lVar14 == 0) goto LAB_06183bb8;
              if (*(int *)(lVar14 + 0x18) == 0) goto LAB_06183b5c;
              *(undefined8 *)(param_5 + 0x100) = *(undefined8 *)(lVar14 + 0x28);
              LeanTween__value(param_5 + 0x100);
              lVar14 = **(long **)(*(long *)puVar4 + 0xb8);
              if (lVar14 == 0) goto LAB_06183bb8;
              if (*(int *)(lVar14 + 0x18) == 0) goto LAB_06183b5c;
              *(undefined8 *)(param_5 + 0x118) = *(undefined8 *)(lVar14 + 0x38);
              LeanTween__value(param_5 + 0x118);
              lVar14 = *(long *)puVar4;
              *(undefined4 *)(param_5 + 0x120) = 0;
              plVar18 = *(long **)(lVar14 + 0xb8);
              lVar14 = *plVar18;
              if (lVar14 == 0) goto LAB_06183bb8;
              if (*(int *)(lVar14 + 0x18) == 0) goto LAB_06183b5c;
              lStack_d8 = *(undefined8 *)(lVar14 + 0x28);
              local_e0 = *(ulong *)(lVar14 + 0x20);
              local_c8 = *(undefined8 *)(lVar14 + 0x38);
              local_d0 = *(undefined8 *)(lVar14 + 0x30);
              uStack_b8 = *(undefined8 *)(lVar14 + 0x48);
              local_c0 = *(undefined8 *)(lVar14 + 0x40);
              local_b0 = *(undefined8 *)(lVar14 + 0x50);
            }
            else {
              if (uVar9 < 0xb863a17) {
                if (0x5989790 < uVar9) {
                  if (uVar9 < 0x5fe5279) {
                    if (uVar9 == 0x5f72764) {
                      if (*(int *)(lVar14 + 0xe4) == 0) {
                        lVar14 = thunk_FUN_02df485c();
                        plVar18 = *(long **)(*(long *)puVar4 + 0xb8);
                        lVar16 = plVar18[0x12];
                        if (lVar16 == 0) goto LAB_06183bb8;
                      }
                      if (*(int *)(lVar16 + 0x18) != 0) {
                        local_e0 = local_e0 & 0xffffffff00000000;
                        fVar27 = (float)FUN_0618a78c(lVar14,plVar18[0x11],
                                                     *(undefined4 *)(lVar16 + 0x2c),
                                                     *(undefined4 *)(lVar16 + 0x30),&local_e0);
                        if (fVar27 == -32768.0) {
                          return 0;
                        }
                        if (local_3e4 == 2) {
                          return 0;
                        }
                        if (local_3e4 == 1) {
                          fVar28 = DAT_010fd060;
                          if (*(char *)(param_5 + 0x33e) != '\0') {
                            fVar28 = 1.0;
                          }
                          fVar27 = *(float *)(param_5 + 0x210) * fVar27 * fVar28;
                        }
                        else {
                          fVar28 = DAT_010fd060;
                          if (*(char *)(param_5 + 0x33e) != '\0') {
                            fVar28 = 1.0;
                          }
                          fVar27 = fVar27 * fVar28;
                        }
                        fVar27 = *(float *)(param_5 + 0x658) + fVar27;
LAB_06182a74:
                        *(float *)(param_5 + 0x658) = fVar27;
                        return 1;
                      }
                      goto LAB_06183b5c;
                    }
                    if (uVar9 != 0x5fe5278) {
                      return 0;
                    }
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      lVar14 = thunk_FUN_02df485c();
                      plVar18 = *(long **)(*(long *)puVar4 + 0xb8);
                      lVar16 = plVar18[0x12];
                      if (lVar16 == 0) goto LAB_06183bb8;
                    }
                    if (*(int *)(lVar16 + 0x18) != 0) {
                      local_e0 = local_e0 & 0xffffffff00000000;
                      fVar27 = (float)FUN_0618a78c(lVar14,plVar18[0x11],
                                                   *(undefined4 *)(lVar16 + 0x2c),
                                                   *(undefined4 *)(lVar16 + 0x30),&local_e0);
                      if (fVar27 == -32768.0) {
                        return 0;
                      }
                      uVar15 = NEON_fmov(0x3f800000,4);
                      *(float *)(param_5 + 0x47c) = fVar27;
                      *(undefined8 *)(param_5 + 0x480) = uVar15;
                      return 1;
                    }
                  }
                  else {
                    if (uVar9 != 0x64e48e6) {
                      return 0;
                    }
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      lVar14 = thunk_FUN_02df485c();
                      plVar18 = *(long **)(*(long *)puVar4 + 0xb8);
                      lVar16 = plVar18[0x12];
                      if (lVar16 == 0) goto LAB_06183bb8;
                    }
                    if (*(int *)(lVar16 + 0x18) != 0) {
                      local_e0 = local_e0 & 0xffffffff00000000;
                      fVar27 = (float)FUN_0618a78c(lVar14,plVar18[0x11],
                                                   *(undefined4 *)(lVar16 + 0x2c),
                                                   *(undefined4 *)(lVar16 + 0x30),&local_e0);
                      if (fVar27 == -32768.0) {
                        return 0;
                      }
                      if (local_3e4 != 2) {
                        if (local_3e4 == 1) {
                          return 0;
                        }
                        fVar28 = DAT_010fd060;
                        if (*(char *)(param_5 + 0x33e) != '\0') {
                          fVar28 = 1.0;
                        }
                        *(float *)(param_5 + 0x398) = fVar27 * fVar28;
                        return 1;
                      }
                      *(float *)(param_5 + 0x398) = (fVar27 * *(float *)(param_5 + 0x390)) / 100.0;
                      return 1;
                    }
                  }
                  goto LAB_06183b5c;
                }
                if (uVar9 < 0x47af055) {
                  if (uVar9 == 0x47a86ed) {
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                      lVar16 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x90);
                      if (lVar16 == 0) goto LAB_06183bb8;
                    }
                    if (*(int *)(lVar16 + 0x18) != 0) {
                      iVar12 = *(int *)(lVar16 + 0x24);
                      if (iVar12 < 0x28989c) {
                        if (iVar12 != -0x5ed67635) {
                          if (iVar12 != 0x28989b) {
                            return 0;
                          }
                          uVar15 = *(undefined8 *)
                                    Method_UnityEngine_InputSystem_InputControl_GetChildControl__;
                          *(undefined4 *)(param_5 + 0x2a0) = 1;
                          FUN_047e09d0(param_5 + 0x2a8,1,uVar15);
                          return 1;
                        }
                        uVar29 = 2;
                        uVar11 = 2;
                      }
                      else if (iVar12 == 0x5196c24) {
                        uVar29 = 0x10;
                        uVar11 = 0x10;
                      }
                      else if (iVar12 == 0x5f4ec60) {
                        uVar29 = 4;
                        uVar11 = 4;
                      }
                      else {
                        if (iVar12 != 0x30b3d31f) {
                          return 0;
                        }
                        uVar29 = 8;
                        uVar11 = 8;
                      }
                      uVar15 = *(undefined8 *)
                                Method_UnityEngine_InputSystem_InputControl_GetChildControl__;
                      *(undefined4 *)(param_5 + 0x2a0) = uVar29;
                      param_5 = param_5 + 0x2a8;
                      goto LAB_06183000;
                    }
                    goto LAB_06183b5c;
                  }
                  if (uVar9 != 0x47af054) {
                    return 0;
                  }
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    lVar14 = *(long *)puVar4;
                    plVar18 = *(long **)(lVar14 + 0xb8);
                    lVar16 = plVar18[0x12];
                    if (lVar16 == 0) goto LAB_06183bb8;
                  }
                  if (*(int *)(lVar16 + 0x18) == 0) goto LAB_06183b5c;
                  if (*(int *)(lVar16 + 0x30) != 3) {
                    return 0;
                  }
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    lVar14 = thunk_FUN_02df485c();
                    plVar18 = *(long **)(*(long *)puVar4 + 0xb8);
                  }
                  lVar16 = plVar18[0x11];
                  if (lVar16 == 0) goto LAB_06183bb8;
                  if ((7 < *(uint *)(lVar16 + 0x18)) && (*(uint *)(lVar16 + 0x18) != 8)) {
                    uVar15 = FUN_0618a00c(lVar14,*(undefined2 *)(lVar16 + 0x2e));
                    bVar8 = FUN_0618a00c(uVar15,*(undefined2 *)(lVar16 + 0x30));
                    *(byte *)(param_5 + 0x503) = bVar8 | (byte)((int)uVar15 << 4);
                    return 1;
                  }
                  goto LAB_06183b5c;
                }
                if (uVar9 != 0x4e3381d) {
                  if (uVar9 != 0x5989790) {
                    return 0;
                  }
                  *(undefined4 *)(param_5 + 0x440) = 0;
                  return 1;
                }
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar14 = *(long *)puVar4;
                  plVar18 = *(long **)(lVar14 + 0xb8);
                }
                lVar16 = plVar18[0x11];
                if (lVar16 == 0) goto LAB_06183bb8;
                if (*(uint *)(lVar16 + 0x18) < 7) goto LAB_06183b5c;
                if ((uVar10 == 10) && (*(short *)(lVar16 + 0x2c) == 0x23)) {
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    lVar14 = thunk_FUN_02df485c();
                    lVar16 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88);
                  }
                  uVar15 = 10;
LAB_0618305c:
                  uVar11 = FUN_0618a038(lVar14,lVar16,uVar15);
LAB_06183060:
                  uVar15 = *(undefined8 *)
                            Method_UnityEngine_InputSystem_InputControl_WriteValueFromObjectIntoState__
                  ;
                  *(undefined4 *)(param_5 + 0x500) = uVar11;
                }
                else {
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    lVar14 = *(long *)puVar4;
                    plVar18 = *(long **)(lVar14 + 0xb8);
                    lVar16 = plVar18[0x11];
                    if (lVar16 == 0) goto LAB_06183bb8;
                  }
                  if (*(uint *)(lVar16 + 0x18) < 7) goto LAB_06183b5c;
                  if ((uVar10 == 0xb) && (*(short *)(lVar16 + 0x2c) == 0x23)) {
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      lVar14 = thunk_FUN_02df485c();
                      lVar16 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88);
                    }
                    uVar15 = 0xb;
                    goto LAB_0618305c;
                  }
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    lVar14 = *(long *)puVar4;
                    plVar18 = *(long **)(lVar14 + 0xb8);
                    lVar16 = plVar18[0x11];
                    if (lVar16 == 0) goto LAB_06183bb8;
                  }
                  if (*(uint *)(lVar16 + 0x18) < 7) goto LAB_06183b5c;
                  if ((uVar10 == 0xd) && (*(short *)(lVar16 + 0x2c) == 0x23)) {
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      lVar14 = thunk_FUN_02df485c();
                      lVar16 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88);
                    }
                    uVar15 = 0xd;
                    goto LAB_0618305c;
                  }
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    lVar14 = *(long *)puVar4;
                    plVar18 = *(long **)(lVar14 + 0xb8);
                    lVar16 = plVar18[0x11];
                    if (lVar16 == 0) goto LAB_06183bb8;
                  }
                  if (*(uint *)(lVar16 + 0x18) < 7) goto LAB_06183b5c;
                  if ((uVar10 == 0xf) && (*(short *)(lVar16 + 0x2c) == 0x23)) {
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      lVar14 = thunk_FUN_02df485c();
                      lVar16 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88);
                    }
                    uVar15 = 0xf;
                    goto LAB_0618305c;
                  }
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    plVar18 = *(long **)(*(long *)puVar4 + 0xb8);
                  }
                  lVar14 = plVar18[0x12];
                  if (lVar14 == 0) goto LAB_06183bb8;
                  if (*(int *)(lVar14 + 0x18) == 0) goto LAB_06183b5c;
                  uVar9 = *(uint *)(lVar14 + 0x24);
                  local_188 = CONCAT44(uVar9,(int)local_188);
                  if (0x257e7e < (int)uVar9) {
                    if (uVar9 < 0x4d51a28) {
                      if (uVar9 != 0x284209) {
                        if (uVar9 != 0x4d51a27) {
                          return 0;
                        }
                        uVar15 = 0;
                        uVar11 = 0;
                        uVar29 = 0;
                        goto LAB_06183d30;
                      }
                      uVar29 = 0xff808080;
                      uVar11 = 0xff808080;
                      goto LAB_06183ce0;
                    }
                    if (uVar9 != 0x53084fb) {
                      if (uVar9 == 0x64c8d87) {
                        uVar15 = 0x3f800000;
                        uVar11 = 0x3f800000;
                        goto LAB_06183cf8;
                      }
                      if (uVar9 != 0x145436c0) {
                        return 0;
                      }
                      uVar29 = 0xffe6d8ad;
                      uVar11 = 0xffe6d8ad;
                      goto LAB_06183ce0;
                    }
                    uVar15 = 0;
                    uVar29 = 0;
                    uVar11 = 0x3f800000;
LAB_06183d30:
                    uVar11 = FUN_02ea7f18(uVar15,uVar11,uVar29,0x3f800000,0);
                    goto LAB_06183060;
                  }
                  if (-0x4213b590 < (int)uVar9) {
                    uVar11 = DAT_010fcf14;
                    uVar29 = DAT_010fd0bc;
                    if (uVar9 != 0xcb66f684) {
                      if (uVar9 != 0x165f3) {
                        if (uVar9 != 0x257e7e) {
                          return 0;
                        }
                        uVar15 = 0;
                        uVar11 = 0;
LAB_06183cf8:
                        uVar29 = 0x3f800000;
                        goto LAB_06183d30;
                      }
                      uVar11 = 0;
                      uVar29 = 0;
                    }
                    uVar15 = 0x3f800000;
                    goto LAB_06183d30;
                  }
                  if (uVar9 == 0xb57b1fce) {
                    uVar29 = 0xfff020a0;
                    uVar11 = 0xfff020a0;
                  }
                  else {
                    if (uVar9 != 0xbdec4a70) {
                      return 0;
                    }
                    uVar29 = 0xff0080ff;
                    uVar11 = 0xff0080ff;
                  }
LAB_06183ce0:
                  uVar15 = *(undefined8 *)
                            Method_UnityEngine_InputSystem_InputControl_WriteValueFromObjectIntoState__
                  ;
                  *(undefined4 *)(param_5 + 0x500) = uVar29;
                }
                param_5 = param_5 + 0x508;
                goto LAB_0617f5d4;
              }
              if (uVar9 < 0xd7fc39c) {
                if (uVar9 < 0xbea90d2) {
                  if (uVar9 != 0xbea90d1) {
                    return 0;
                  }
                  if ((*(byte *)(param_5 + 0x280) >> 5 & 1) != 0) {
                    return 1;
                  }
                  cVar7 = FUN_061a9c14(param_5 + 0x288,0x20,0);
                  if (cVar7 != '\0') {
                    return 1;
                  }
                  uVar9 = *(uint *)(param_5 + 0x284) & 0xffffffdf;
                  goto LAB_06181724;
                }
                if (uVar9 == 0xbf2aad3) {
                  *(undefined4 *)(param_5 + 0x2ec) = 0xc6fffe00;
                  return 1;
                }
                if (uVar9 != 0xd0298a0) {
                  return 0;
                }
LAB_0617fbc4:
                uVar15 = 0x10;
                uVar9 = *(uint *)(param_5 + 0x284) | 0x10;
LAB_06181d60:
                *(uint *)(param_5 + 0x284) = uVar9;
                FUN_061a9b10(param_5 + 0x288,uVar15,0);
                return 1;
              }
              if (0x72343fa2 < uVar9) {
                if (uVar9 == 0x72a5aa29) {
                  *(undefined4 *)(param_5 + 0x398) = 0xbf800000;
                  return 1;
                }
                if (uVar9 == 0x72f142b7) {
                  uVar29 = FUN_057e35d4(0);
                  *(undefined4 *)(param_5 + 0x47c) = uVar29;
                  *(undefined4 *)(param_5 + 0x480) = uVar11;
                  *(float *)(param_5 + 0x484) = fVar27;
                  return 1;
                }
                if (uVar9 != 0x745ef45b) {
                  return 0;
                }
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  lVar14 = thunk_FUN_02df485c();
                  plVar18 = *(long **)(*(long *)puVar4 + 0xb8);
                  lVar16 = plVar18[0x12];
                  if (lVar16 == 0) goto LAB_06183bb8;
                }
                if (*(int *)(lVar16 + 0x18) != 0) {
                  local_e0 = local_e0 & 0xffffffff00000000;
                  fVar27 = (float)FUN_0618a78c(lVar14,plVar18[0x11],*(undefined4 *)(lVar16 + 0x2c),
                                               *(undefined4 *)(lVar16 + 0x30),&local_e0);
                  if (fVar27 == -32768.0) {
                    return 0;
                  }
                  if (local_3e4 == 2) {
                    return 0;
                  }
                  if (local_3e4 == 1) {
                    fVar28 = DAT_010fd060;
                    if (*(char *)(param_5 + 0x33e) != '\0') {
                      fVar28 = 1.0;
                    }
                    fVar27 = *(float *)(param_5 + 0x210) * fVar27 * fVar28;
                  }
                  else {
                    fVar28 = DAT_010fd060;
                    if (*(char *)(param_5 + 0x33e) != '\0') {
                      fVar28 = 1.0;
                    }
                    fVar27 = fVar27 * fVar28;
                  }
                  *(float *)(param_5 + 0x634) = fVar27;
                  return 1;
                }
                goto LAB_06183b5c;
              }
              if (uVar9 != 0x313400cb) {
                if (uVar9 == 0x71c96d92) {
                  uVar11 = FUN_047df77c(param_5 + 0x508,
                                        *(undefined8 *)
                                         Method_UnityEngine_InputSystem_InputControlExtensions_BuildPath__
                                       );
                  *(undefined4 *)(param_5 + 0x500) = uVar11;
                  return 1;
                }
                if (uVar9 != 0x72343fa2) {
                  return 0;
                }
                uVar11 = FUN_047e0a18(param_5 + 0x2a8,
                                      *(undefined8 *)
                                       Method_UnityEngine_InputSystem_InputControlExtensions_CheckStateIsAtDefault__
                                     );
                *(undefined4 *)(param_5 + 0x2a0) = uVar11;
                return 1;
              }
              if (*(int *)(lVar14 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar14 = *(long *)puVar4;
                plVar18 = *(long **)(lVar14 + 0xb8);
                lVar16 = plVar18[0x12];
                if (lVar16 == 0) goto LAB_06183bb8;
              }
              if (*(int *)(lVar16 + 0x18) == 0) goto LAB_06183b5c;
              iVar12 = *(int *)(lVar16 + 0x24);
              if (iVar12 == -0x25034fb5) {
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  plVar18 = *(long **)(*(long *)puVar4 + 0xb8);
                }
                lVar14 = *plVar18;
                if (lVar14 == 0) goto LAB_06183bb8;
                if (*(int *)(lVar14 + 0x18) == 0) goto LAB_06183b5c;
                *(undefined8 *)(param_5 + 0x118) = *(undefined8 *)(lVar14 + 0x38);
                LeanTween__value(param_5 + 0x118);
                lVar14 = *(long *)puVar4;
                *(undefined4 *)(param_5 + 0x120) = 0;
                plVar18 = *(long **)(lVar14 + 0xb8);
                lVar14 = *plVar18;
                if (lVar14 == 0) goto LAB_06183bb8;
                if (*(int *)(lVar14 + 0x18) != 0) {
                  lStack_d8 = *(undefined8 *)(lVar14 + 0x28);
                  local_e0 = *(ulong *)(lVar14 + 0x20);
                  local_c8 = *(undefined8 *)(lVar14 + 0x38);
                  local_d0 = *(undefined8 *)(lVar14 + 0x30);
                  uStack_b8 = *(undefined8 *)(lVar14 + 0x48);
                  local_c0 = *(undefined8 *)(lVar14 + 0x40);
                  local_b0 = *(undefined8 *)(lVar14 + 0x50);
                  goto LAB_06182c20;
                }
                goto LAB_06183b5c;
              }
              uVar25 = FUN_06140374(iVar12,&local_100,0);
              if ((uVar25 & 1) == 0) {
                if (*(int *)(*(long *)
                              Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__ + 0xe4
                            ) == 0) {
                  thunk_FUN_02df485c();
                }
                uVar15 = FUN_0619ed3c(0);
                lVar14 = *(long *)puVar4;
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  thunk_FUN_02df485c(lVar14);
                  lVar14 = *(long *)puVar4;
                }
                lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x90);
                if (lVar16 == 0) goto LAB_06183bb8;
                if (*(int *)(lVar16 + 0x18) == 0) goto LAB_06183b5c;
                uVar23 = FUN_05373aa8(0,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x88),
                                      *(undefined4 *)(lVar16 + 0x2c),*(undefined4 *)(lVar16 + 0x30),
                                      0);
                uVar15 = FUN_05362cb4(uVar15,uVar23,0);
                uVar15 = FUN_038026b0(uVar15,*(undefined8 *)
                                              Method_UnityEngine_InputSystem_InputControl_GetChildControl<TouchPressControl>__
                                     );
                local_100 = uVar15;
                if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                  thunk_FUN_02df485c(*(long *)PTR_DAT_069fb990);
                }
                uVar25 = FUN_06350670(uVar15,0,0);
                if ((uVar25 & 1) != 0) {
                  return 0;
                }
                FUN_0613ff38(iVar12,local_100,0);
                *(undefined8 *)(param_5 + 0x118) = local_100;
                LeanTween__value(param_5 + 0x118);
                lVar14 = *(long *)puVar4;
                uVar15 = *(undefined8 *)(param_5 + 0x118);
                uVar23 = *(undefined8 *)(param_5 + 0x100);
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar14 = *(long *)puVar4;
                }
                uVar9 = FUN_061405e0(uVar15,uVar23,*(long *)(lVar14 + 0xb8),
                                     *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8),0);
                lVar14 = *(long *)puVar4;
                *(uint *)(param_5 + 0x120) = uVar9;
                plVar18 = *(long **)(lVar14 + 0xb8);
                lVar14 = *plVar18;
                if (lVar14 == 0) goto LAB_06183bb8;
                if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_06183b5c;
                lVar14 = lVar14 + (long)(int)uVar9 * 0x38;
                lStack_d8 = *(undefined8 *)(lVar14 + 0x28);
                local_e0 = *(ulong *)(lVar14 + 0x20);
                local_c8 = *(undefined8 *)(lVar14 + 0x38);
                local_d0 = *(undefined8 *)(lVar14 + 0x30);
                uStack_b8 = *(undefined8 *)(lVar14 + 0x48);
                local_c0 = *(undefined8 *)(lVar14 + 0x40);
                local_b0 = *(undefined8 *)(lVar14 + 0x50);
              }
              else {
                *(undefined8 *)(param_5 + 0x118) = local_100;
                LeanTween__value(param_5 + 0x118);
                lVar14 = *(long *)puVar4;
                uVar15 = *(undefined8 *)(param_5 + 0x118);
                uVar23 = *(undefined8 *)(param_5 + 0x100);
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar14 = *(long *)puVar4;
                }
                uVar9 = FUN_061405e0(uVar15,uVar23,*(long *)(lVar14 + 0xb8),
                                     *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8),0);
                lVar14 = *(long *)puVar4;
                *(uint *)(param_5 + 0x120) = uVar9;
                plVar18 = *(long **)(lVar14 + 0xb8);
                lVar14 = *plVar18;
                if (lVar14 == 0) goto LAB_06183bb8;
                if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_06183b5c;
                lVar14 = lVar14 + (long)(int)uVar9 * 0x38;
                lStack_d8 = *(undefined8 *)(lVar14 + 0x28);
                local_e0 = *(ulong *)(lVar14 + 0x20);
                local_c8 = *(undefined8 *)(lVar14 + 0x38);
                local_d0 = *(undefined8 *)(lVar14 + 0x30);
                uStack_b8 = *(undefined8 *)(lVar14 + 0x48);
                local_c0 = *(undefined8 *)(lVar14 + 0x40);
                local_b0 = *(undefined8 *)(lVar14 + 0x50);
              }
            }
LAB_06182c20:
            FUN_047e1068(plVar18 + 2,&local_e0,
                         *(undefined8 *)Method_UnityEngine_InputSystem_InputControl_get_Item__);
            return 1;
          }
          if (*(int *)(lVar14 + 0xe4) == 0) {
            lVar14 = thunk_FUN_02df485c();
            lVar16 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88);
          }
          uVar15 = 9;
        }
      }
    }
    uVar11 = FUN_0618a038(lVar14,lVar16,uVar15);
    puVar4 = Method_UnityEngine_InputSystem_InputControl_WriteValueFromObjectIntoState__;
    *(undefined4 *)(param_5 + 0x500) = uVar11;
    param_5 = param_5 + 0x508;
    uVar15 = *(undefined8 *)puVar4;
LAB_0617f5d4:
    FUN_047df734(param_5,uVar11,uVar15);
    return 1;
  }
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar14 = *(long *)puVar4;
    lVar16 = *(long *)(lVar14 + 0xb8);
    lVar17 = *(long *)(lVar16 + 0x88);
    if (lVar17 == 0) goto LAB_06183bb8;
  }
  if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_06183b5c;
  *(short *)(lVar17 + uVar25 * 2 + 0x20) = (short)uVar9;
  if (iVar12 != 1) goto LAB_0617f0fc;
  iVar12 = 1;
  if (uVar21 < 2) {
    if (uVar21 != 0) {
      if (uVar21 != 1) goto LAB_0617f0fc;
      if ((int)uVar9 < 0x65) {
        if (uVar9 == 0x20) {
LAB_0617efc0:
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar14 = *(long *)puVar4;
            lVar16 = *(long *)(lVar14 + 0xb8);
          }
          lVar16 = *(long *)(lVar16 + 0x90);
          if (lVar16 == 0) goto LAB_06183bb8;
          if (*(uint *)(lVar16 + 0x18) <= uVar20) goto LAB_06183b5c;
          local_3e4 = 0;
        }
        else {
          if (uVar9 != 0x25) {
LAB_0617f0b0:
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar14 = *(long *)puVar4;
              lVar16 = *(long *)(lVar14 + 0xb8);
            }
            lVar16 = *(long *)(lVar16 + 0x90);
            if (lVar16 != 0) {
              if (uVar20 < *(uint *)(lVar16 + 0x18)) {
                uVar21 = 1;
                goto LAB_0617f0ec;
              }
              goto LAB_06183b5c;
            }
            goto LAB_06183bb8;
          }
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar14 = *(long *)puVar4;
            lVar16 = *(long *)(lVar14 + 0xb8);
          }
          lVar16 = *(long *)(lVar16 + 0x90);
          if (lVar16 == 0) goto LAB_06183bb8;
          if (*(uint *)(lVar16 + 0x18) <= uVar20) goto LAB_06183b5c;
          local_3e4 = 2;
        }
      }
      else {
        if (uVar9 == 0x70) goto LAB_0617efc0;
        if (uVar9 != 0x65) goto LAB_0617f0b0;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar14 = *(long *)puVar4;
          lVar16 = *(long *)(lVar14 + 0xb8);
        }
        lVar16 = *(long *)(lVar16 + 0x90);
        if (lVar16 == 0) goto LAB_06183bb8;
        if (*(uint *)(lVar16 + 0x18) <= uVar20) goto LAB_06183b5c;
        local_3e4 = 1;
      }
      *(int *)(lVar16 + (long)(int)uVar20 * 0x18 + 0x34) = local_3e4;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar14 = *(long *)puVar4;
      }
      lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x90);
      if (lVar16 != 0) {
        if (uVar20 + 1 < *(uint *)(lVar16 + 0x18)) {
LAB_0617f038:
          uVar20 = uVar20 + 1;
          uVar21 = 0;
          iVar12 = 2;
          lVar16 = lVar16 + (long)(int)uVar20 * 0x18;
          *(undefined8 *)(lVar16 + 0x20) = 0;
          *(undefined8 *)(lVar16 + 0x28) = 0;
          *(undefined8 *)(lVar16 + 0x30) = 0;
          goto LAB_0617f0fc;
        }
        goto LAB_06183b5c;
      }
      goto LAB_06183bb8;
    }
    if (((uVar9 < 0x2f) && ((1L << ((ulong)uVar9 & 0x3f) & 0x680000000000U) != 0)) ||
       (uVar9 - 0x30 < 10)) {
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar16 = *(long *)(*(long *)puVar4 + 0xb8);
      }
      lVar14 = *(long *)(lVar16 + 0x90);
      if (lVar14 == 0) goto LAB_06183bb8;
      if (*(uint *)(lVar14 + 0x18) <= uVar20) goto LAB_06183b5c;
      uVar21 = 1;
LAB_0617edf0:
      local_3e4 = 0;
      lVar14 = lVar14 + (long)(int)uVar20 * 0x18;
      *(uint *)(lVar14 + 0x28) = uVar21;
      *(uint *)(lVar14 + 0x2c) = uVar10;
      iVar12 = 1;
      *(int *)(lVar14 + 0x30) = *(int *)(lVar14 + 0x30) + 1;
    }
    else {
      iVar12 = *(int *)(lVar14 + 0xe4);
      if (uVar9 != 0x22) {
        if (uVar9 == 0x23) {
          if (iVar12 == 0) {
            thunk_FUN_02df485c();
            lVar16 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          lVar14 = *(long *)(lVar16 + 0x90);
          if (lVar14 != 0) {
            if (uVar20 < *(uint *)(lVar14 + 0x18)) {
              uVar21 = 4;
              goto LAB_0617edf0;
            }
            goto LAB_06183b5c;
          }
          goto LAB_06183bb8;
        }
        if (iVar12 == 0) {
          thunk_FUN_02df485c();
          lVar16 = *(long *)(*(long *)puVar4 + 0xb8);
        }
        lVar14 = *(long *)(lVar16 + 0x90);
        if (lVar14 != 0) {
          if (uVar20 < *(uint *)(lVar14 + 0x18)) {
            lVar16 = lVar14 + (long)(int)uVar20 * 0x18;
            uVar21 = *(uint *)(lVar16 + 0x24);
            *(undefined4 *)(lVar16 + 0x28) = 2;
            *(uint *)(lVar16 + 0x2c) = uVar10;
            if (*(int *)(*(long *)Method_System_Net_HttpWebRequest_set_Method__ + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar10 = FUN_061acd28(uVar9,0);
            if (uVar20 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar16 + 0x24) = uVar21 * 0x21 ^ uVar10 & 0xffff;
              lVar14 = *(long *)puVar4;
              lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x90);
              if (lVar16 != 0) {
                if (uVar20 < *(uint *)(lVar16 + 0x18)) {
                  lVar16 = lVar16 + (long)(int)uVar20 * 0x18;
                  local_3e4 = 0;
                  uVar21 = 2;
                  goto LAB_0617f0f0;
                }
                goto LAB_06183b5c;
              }
              goto LAB_06183bb8;
            }
          }
          goto LAB_06183b5c;
        }
        goto LAB_06183bb8;
      }
      if (iVar12 == 0) {
        thunk_FUN_02df485c();
        lVar16 = *(long *)(*(long *)puVar4 + 0xb8);
      }
      lVar14 = *(long *)(lVar16 + 0x90);
      if (lVar14 == 0) goto LAB_06183bb8;
      if (*(uint *)(lVar14 + 0x18) <= uVar20) goto LAB_06183b5c;
      uVar21 = 2;
      local_3e4 = 0;
      lVar14 = lVar14 + (long)(int)uVar20 * 0x18;
      iVar12 = 1;
      *(undefined4 *)(lVar14 + 0x28) = 2;
      *(uint *)(lVar14 + 0x2c) = uVar10 + 1;
    }
  }
  else {
    if (uVar21 == 2) {
      if (uVar9 != 0x22) {
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar16 = *(long *)(*(long *)puVar4 + 0xb8);
        }
        lVar14 = *(long *)(lVar16 + 0x90);
        if (lVar14 != 0) {
          if (uVar20 < *(uint *)(lVar14 + 0x18)) {
            puVar22 = (uint *)(lVar14 + (long)(int)uVar20 * 0x18 + 0x24);
            uVar21 = *puVar22;
            if (*(int *)(*(long *)Method_System_Net_HttpWebRequest_set_Method__ + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar10 = FUN_061acd28(uVar9,0);
            if (uVar20 < *(uint *)(lVar14 + 0x18)) {
              *puVar22 = uVar21 * 0x21 ^ uVar10 & 0xffff;
              lVar14 = *(long *)puVar4;
              lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x90);
              if (lVar16 != 0) {
                if (uVar20 < *(uint *)(lVar16 + 0x18)) {
                  uVar21 = 2;
                  lVar16 = lVar16 + (long)(int)uVar20 * 0x18;
LAB_0617f0f0:
                  iVar12 = 1;
                  *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
                  goto LAB_0617f0fc;
                }
                goto LAB_06183b5c;
              }
              goto LAB_06183bb8;
            }
          }
          goto LAB_06183b5c;
        }
        goto LAB_06183bb8;
      }
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar16 = *(long *)(*(long *)puVar4 + 0xb8);
      }
      lVar14 = *(long *)(lVar16 + 0x90);
      if (lVar14 == 0) goto LAB_06183bb8;
      uVar20 = uVar20 + 1;
      if (*(uint *)(lVar14 + 0x18) <= uVar20) goto LAB_06183b5c;
      lVar14 = lVar14 + (long)(int)uVar20 * 0x18;
      iVar12 = 2;
    }
    else {
      if (uVar21 == 4) {
        if (uVar9 == 0x20) {
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar14 = *(long *)puVar4;
            lVar16 = *(long *)(lVar14 + 0xb8);
          }
          lVar16 = *(long *)(lVar16 + 0x90);
          if (lVar16 != 0) {
            if (uVar20 + 1 < *(uint *)(lVar16 + 0x18)) {
              local_3e4 = 0;
              goto LAB_0617f038;
            }
            goto LAB_06183b5c;
          }
          goto LAB_06183bb8;
        }
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar14 = *(long *)puVar4;
          lVar16 = *(long *)(lVar14 + 0xb8);
        }
        lVar16 = *(long *)(lVar16 + 0x90);
        if (lVar16 != 0) {
          if (uVar20 < *(uint *)(lVar16 + 0x18)) {
            uVar21 = 4;
LAB_0617f0ec:
            lVar16 = lVar16 + (long)(int)uVar20 * 0x18;
            goto LAB_0617f0f0;
          }
          goto LAB_06183b5c;
        }
        goto LAB_06183bb8;
      }
LAB_0617f0fc:
      if (uVar9 == 0x3d) {
        iVar12 = 1;
      }
      if ((uVar9 != 0x20) || (iVar12 != 0)) {
        if (iVar12 == 2) {
          iVar12 = (uint)(uVar9 != 0x20) << 1;
        }
        else if (iVar12 == 0) {
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar14 = *(long *)puVar4;
          }
          lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x90);
          if (lVar14 != 0) {
            if (uVar20 < *(uint *)(lVar14 + 0x18)) {
              puVar22 = (uint *)(lVar14 + (long)(int)uVar20 * 0x18 + 0x20);
              uVar10 = *puVar22;
              if (*(int *)(*(long *)Method_System_Net_HttpWebRequest_set_Method__ + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar9 = FUN_061acd28(uVar9,0);
              if (uVar20 < *(uint *)(lVar14 + 0x18)) {
                iVar12 = 0;
                *puVar22 = uVar10 * 0x21 ^ uVar9 & 0xffff;
                goto LAB_0617f25c;
              }
            }
            goto LAB_06183b5c;
          }
          goto LAB_06183bb8;
        }
        goto LAB_0617f25c;
      }
      if (bVar26) {
        return 0;
      }
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar14 = *(long *)puVar4;
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x90);
      if (lVar14 == 0) goto LAB_06183bb8;
      uVar20 = uVar20 + 1;
      if (*(uint *)(lVar14 + 0x18) <= uVar20) goto LAB_06183b5c;
      lVar14 = lVar14 + (long)(int)uVar20 * 0x18;
      iVar12 = 0;
      bVar26 = true;
    }
    local_3e4 = 0;
    uVar21 = 0;
    *(undefined8 *)(lVar14 + 0x20) = 0;
    *(undefined8 *)(lVar14 + 0x28) = 0;
    *(undefined8 *)(lVar14 + 0x30) = 0;
  }
LAB_0617f25c:
  uVar25 = uVar25 + 1;
  uVar9 = *(uint *)(param_6 + 0x18);
  if ((int)uVar9 <= param_7 + (int)uVar25) {
    return 0;
  }
  goto LAB_0617ebf0;
LAB_06182658:
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar14 = *(long *)puVar4;
  }
  lVar16 = *(long *)(lVar14 + 0xb8);
  lVar17 = *(long *)(lVar16 + 0x90);
  if (lVar17 == 0) goto LAB_06183bb8;
  if (*(int *)(lVar17 + 0x18) <= (int)uVar9) {
LAB_0618274c:
    FUN_047e17c0(param_5 + 0x5a0,*(undefined8 *)(param_5 + 0x598),
                 *(undefined8 *)Method_UnityEngine_InputSystem_InputControl_TryGetChildControl__);
    return 1;
  }
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar14 = *(long *)puVar4;
    lVar16 = *(long *)(lVar14 + 0xb8);
    lVar17 = *(long *)(lVar16 + 0x90);
    if (lVar17 == 0) goto LAB_06183bb8;
  }
  if (*(uint *)(lVar17 + 0x18) <= uVar9) goto LAB_06183b5c;
  if (*(int *)(lVar17 + (long)(int)uVar9 * 0x18 + 0x20) == 0) goto LAB_0618274c;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar14 = *(long *)puVar4;
    lVar16 = *(long *)(lVar14 + 0xb8);
    lVar17 = *(long *)(lVar16 + 0x90);
    if (lVar17 == 0) goto LAB_06183bb8;
  }
  if (*(uint *)(lVar17 + 0x18) <= uVar9) goto LAB_06183b5c;
  if (*(int *)(lVar17 + (long)(int)uVar9 * 0x18 + 0x20) == 0x2d2c87) {
    if (*(int *)(lVar14 + 0xe4) == 0) {
      lVar14 = thunk_FUN_02df485c();
      lVar16 = *(long *)(*(long *)puVar4 + 0xb8);
      lVar17 = *(long *)(lVar16 + 0x90);
      if (lVar17 == 0) goto LAB_06183bb8;
    }
    if (*(uint *)(lVar17 + 0x18) <= uVar9) goto LAB_06183b5c;
    lVar17 = lVar17 + (long)(int)uVar9 * 0x18;
    local_e0 = local_e0 & 0xffffffff00000000;
    fVar27 = (float)FUN_0618a78c(lVar14,*(undefined8 *)(lVar16 + 0x88),
                                 *(undefined4 *)(lVar17 + 0x2c),*(undefined4 *)(lVar17 + 0x30),
                                 &local_e0);
    lVar14 = *(long *)puVar4;
    *(bool *)(param_5 + 0x5c8) = fVar27 != 0.0;
  }
  uVar9 = uVar9 + 1;
  goto LAB_06182658;
LAB_06181a78:
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar14 = *(long *)puVar4;
  }
  lVar16 = *(long *)(lVar14 + 0xb8);
  lVar17 = *(long *)(lVar16 + 0x90);
  if (lVar17 == 0) goto LAB_06183bb8;
  if (*(int *)(lVar17 + 0x18) <= (int)uVar9) {
    return 1;
  }
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar14 = *(long *)puVar4;
    lVar16 = *(long *)(lVar14 + 0xb8);
    lVar17 = *(long *)(lVar16 + 0x90);
    if (lVar17 == 0) goto LAB_06183bb8;
  }
  if (*(uint *)(lVar17 + 0x18) <= uVar9) goto LAB_06183b5c;
  if (*(int *)(lVar17 + (long)(int)uVar9 * 0x18 + 0x20) == 0) {
    return 1;
  }
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar14 = *(long *)puVar4;
    lVar16 = *(long *)(lVar14 + 0xb8);
    lVar17 = *(long *)(lVar16 + 0x90);
    if (lVar17 == 0) goto LAB_06183bb8;
  }
  if (*(uint *)(lVar17 + 0x18) <= uVar9) goto LAB_06183b5c;
  iVar12 = *(int *)(lVar17 + (long)(int)uVar9 * 0x18 + 0x20);
  if (iVar12 == 0x5f4ec60) {
    if (*(int *)(lVar14 + 0xe4) == 0) {
      lVar14 = thunk_FUN_02df485c();
      lVar16 = *(long *)(*(long *)puVar4 + 0xb8);
      lVar17 = *(long *)(lVar16 + 0x90);
      if (lVar17 == 0) goto LAB_06183bb8;
    }
    if (*(uint *)(lVar17 + 0x18) <= uVar9) goto LAB_06183b5c;
    lVar17 = lVar17 + (long)(int)uVar9 * 0x18;
    local_e0 = local_e0 & 0xffffffff00000000;
    fVar28 = (float)FUN_0618a78c(lVar14,*(undefined8 *)(lVar16 + 0x88),
                                 *(undefined4 *)(lVar17 + 0x2c),*(undefined4 *)(lVar17 + 0x30),
                                 &local_e0);
    if (fVar28 == -32768.0) {
      return 0;
    }
    lVar14 = *(long *)puVar4;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar14 = *(long *)puVar4;
    }
    lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x90);
    if (lVar16 == 0) goto LAB_06183bb8;
    if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_06183b5c;
    iVar12 = *(int *)(lVar16 + (long)(int)uVar9 * 0x18 + 0x34);
    if (iVar12 == 0) {
      fVar33 = fVar27;
      if (*(char *)(param_5 + 0x33e) != '\0') {
        fVar33 = 1.0;
      }
      fVar28 = fVar28 * fVar33;
UnityEngine_XR_Interaction_Toolkit_Interactables_XRInteractableSnapVolume___ctor:
      *(float *)(param_5 + 0x38c) = fVar28;
    }
    else {
      if (iVar12 == 1) {
        fVar33 = fVar27;
        if (*(char *)(param_5 + 0x33e) != '\0') {
          fVar33 = 1.0;
        }
        fVar28 = *(float *)(param_5 + 0x210) * fVar28 * fVar33;
        goto UnityEngine_XR_Interaction_Toolkit_Interactables_XRInteractableSnapVolume___ctor;
      }
      if (iVar12 == 2) {
        fVar33 = 0.0;
        if (*(float *)(param_5 + 0x398) != -1.0) {
          fVar33 = *(float *)(param_5 + 0x398);
        }
        fVar28 = (fVar28 * (*(float *)(param_5 + 0x390) - fVar33)) / 100.0;
        *(float *)(param_5 + 0x38c) = fVar28;
      }
      else {
        fVar28 = *(float *)(param_5 + 0x38c);
      }
    }
    if (fVar28 < 0.0) {
      fVar28 = 0.0;
    }
    *(float *)(param_5 + 0x38c) = fVar28;
  }
  else if (iVar12 == 0x28989b) {
    if (*(int *)(lVar14 + 0xe4) == 0) {
      lVar14 = thunk_FUN_02df485c();
      lVar16 = *(long *)(*(long *)puVar4 + 0xb8);
      lVar17 = *(long *)(lVar16 + 0x90);
      if (lVar17 == 0) goto LAB_06183bb8;
    }
    if (*(uint *)(lVar17 + 0x18) <= uVar9) goto LAB_06183b5c;
    lVar17 = lVar17 + (long)(int)uVar9 * 0x18;
    local_e0 = local_e0 & 0xffffffff00000000;
    fVar28 = (float)FUN_0618a78c(lVar14,*(undefined8 *)(lVar16 + 0x88),
                                 *(undefined4 *)(lVar17 + 0x2c),*(undefined4 *)(lVar17 + 0x30),
                                 &local_e0);
    if (fVar28 == -32768.0) {
      return 0;
    }
    lVar14 = *(long *)puVar4;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar14 = *(long *)puVar4;
    }
    lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x90);
    if (lVar16 == 0) goto LAB_06183bb8;
    if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_06183b5c;
    iVar12 = *(int *)(lVar16 + (long)(int)uVar9 * 0x18 + 0x34);
    if (iVar12 == 0) {
      fVar33 = fVar27;
      if (*(char *)(param_5 + 0x33e) != '\0') {
        fVar33 = 1.0;
      }
      fVar28 = fVar28 * fVar33;
LAB_06181cec:
      *(float *)(param_5 + 0x388) = fVar28;
    }
    else {
      if (iVar12 == 1) {
        fVar33 = fVar27;
        if (*(char *)(param_5 + 0x33e) != '\0') {
          fVar33 = 1.0;
        }
        fVar28 = *(float *)(param_5 + 0x210) * fVar28 * fVar33;
        goto LAB_06181cec;
      }
      if (iVar12 == 2) {
        fVar33 = 0.0;
        if (*(float *)(param_5 + 0x398) != -1.0) {
          fVar33 = *(float *)(param_5 + 0x398);
        }
        fVar28 = (fVar28 * (*(float *)(param_5 + 0x390) - fVar33)) / 100.0;
        *(float *)(param_5 + 0x388) = fVar28;
      }
      else {
        fVar28 = *(float *)(param_5 + 0x388);
      }
    }
    if (fVar28 < 0.0) {
      fVar28 = 0.0;
    }
    *(float *)(param_5 + 0x388) = fVar28;
  }
  uVar9 = uVar9 + 1;
  goto LAB_06181a78;
LAB_061837a8:
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar14 = *(long *)puVar4;
  }
  lVar17 = *(long *)(lVar14 + 0xb8);
  lVar16 = *(long *)(lVar17 + 0x90);
  if (lVar16 == 0) goto LAB_06183bb8;
  if (*(int *)(lVar16 + 0x18) <= (int)uVar9) {
LAB_06183b60:
    if (*(int *)(param_5 + 0x6bc) == -1) {
      return 0;
    }
    lVar16 = *plVar18;
    if (lVar16 != 0) {
      uVar15 = *(undefined8 *)(lVar16 + 0x88);
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar14 = *(long *)puVar4;
      }
      uVar11 = FUN_0614081c(uVar15,lVar16,*(long *)(lVar14 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8),0);
      *(undefined4 *)(param_5 + 0x120) = uVar11;
      *(undefined4 *)(param_5 + 0x65c) = 1;
      return 1;
    }
    goto LAB_06183bb8;
  }
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar14 = *(long *)puVar4;
    lVar17 = *(long *)(lVar14 + 0xb8);
    lVar16 = *(long *)(lVar17 + 0x90);
    if (lVar16 == 0) goto LAB_06183bb8;
  }
  if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_06183b5c;
  if (*(int *)(lVar16 + (long)(int)uVar9 * 0x18 + 0x20) == 0) goto LAB_06183b60;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar14 = *(long *)puVar4;
    lVar17 = *(long *)(lVar14 + 0xb8);
    lVar16 = *(long *)(lVar17 + 0x90);
    if (lVar16 == 0) goto LAB_06183bb8;
  }
  if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_06183b5c;
  iVar13 = *(int *)(lVar16 + (long)(int)uVar9 * 0x18 + 0x20);
  local_188 = local_188 & 0xffffffff00000000;
  iVar12 = -0x80000000;
  if (iVar13 < 0x2be0e8) {
    if (iVar13 != -0x3b198217) {
      if (iVar13 != 0x22d74b) {
        if (iVar13 != 0x2be0e7) {
          return 0;
        }
        lVar17 = *plVar18;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar16 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x90);
          if (lVar16 == 0) goto LAB_06183bb8;
        }
        if (uVar9 < *(uint *)(lVar16 + 0x18)) {
          lVar14 = FUN_061a3ee0(lVar17,*(undefined4 *)(lVar16 + (long)(int)uVar9 * 0x18 + 0x24),1,
                                &local_188,0);
          *plVar18 = lVar14;
          LeanTween__value(plVar18,lVar14);
          if ((int)local_188 == -1) {
            return 0;
          }
          goto LAB_06183980;
        }
        goto LAB_06183b5c;
      }
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
        lVar16 = *(long *)(lVar17 + 0x90);
        if (lVar16 == 0) goto LAB_06183bb8;
      }
      if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_06183b5c;
      lVar16 = lVar16 + (long)(int)uVar9 * 0x18;
      iVar13 = FUN_0618a6e0(param_5,*(undefined8 *)(lVar17 + 0x88),*(undefined4 *)(lVar16 + 0x2c),
                            *(undefined4 *)(lVar16 + 0x30),lVar17 + 0x98);
      if (iVar13 != 3) {
        return 0;
      }
      lVar14 = *(long *)puVar4;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar14 = *(long *)puVar4;
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x98);
      if (lVar14 == 0) goto LAB_06183bb8;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_06183b5c;
      iVar13 = iVar12;
      if (*(float *)(lVar14 + 0x20) != INFINITY) {
        iVar13 = (int)*(float *)(lVar14 + 0x20);
      }
      *(int *)(param_5 + 0x6bc) = iVar13;
      if (*(char *)(param_5 + 0x469) != '\0') {
        lVar14 = FUN_06178390(param_5);
        lVar16 = *(long *)puVar4;
        uVar11 = *(undefined4 *)(param_5 + 0x4a4);
        uVar15 = *(undefined8 *)(param_5 + 0x6b0);
        uVar29 = *(undefined4 *)(param_5 + 0x6bc);
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_02df485c(lVar16);
          lVar16 = *(long *)puVar4;
        }
        lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x98);
        if (lVar16 == 0) goto LAB_06183bb8;
        if ((*(uint *)(lVar16 + 0x18) < 2) || (*(uint *)(lVar16 + 0x18) == 2)) goto LAB_06183b5c;
        if (lVar14 == 0) goto LAB_06183bb8;
        iVar13 = iVar12;
        if (*(float *)(lVar16 + 0x24) != INFINITY) {
          iVar13 = (int)*(float *)(lVar16 + 0x24);
        }
        if (*(float *)(lVar16 + 0x28) != INFINITY) {
          iVar12 = (int)*(float *)(lVar16 + 0x28);
        }
        FUN_061a2050(lVar14,uVar11,uVar15,uVar29,iVar13,iVar12,0);
      }
    }
  }
  else if (iVar13 == 0x2d2c87) {
    if (*(int *)(lVar14 + 0xe4) == 0) {
      lVar14 = thunk_FUN_02df485c();
      lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
      lVar16 = *(long *)(lVar17 + 0x90);
      if (lVar16 == 0) goto LAB_06183bb8;
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_06183b5c;
    lVar16 = lVar16 + (long)(int)uVar9 * 0x18;
    local_e0 = local_e0 & 0xffffffff00000000;
    fVar27 = (float)FUN_0618a78c(lVar14,*(undefined8 *)(lVar17 + 0x88),
                                 *(undefined4 *)(lVar16 + 0x2c),*(undefined4 *)(lVar16 + 0x30),
                                 &local_e0);
    *(bool *)(param_5 + 0x1d1) = fVar27 != 0.0;
  }
  else if (iVar13 == 0x4e3381d) {
    if (*(int *)(lVar14 + 0xe4) == 0) {
      lVar14 = thunk_FUN_02df485c();
      lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
      lVar16 = *(long *)(lVar17 + 0x90);
      if (lVar16 == 0) goto LAB_06183bb8;
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_06183b5c;
    lVar16 = lVar16 + (long)(int)uVar9 * 0x18;
    uVar11 = FUN_0618a494(lVar14,*(undefined8 *)(lVar17 + 0x88),*(undefined4 *)(lVar16 + 0x2c),
                          *(undefined4 *)(lVar16 + 0x30));
    *(undefined4 *)(param_5 + 0x1d4) = uVar11;
  }
  else {
    if (iVar13 != 0x505d3fe) {
      return 0;
    }
    if (*(int *)(lVar14 + 0xe4) == 0) {
      lVar14 = thunk_FUN_02df485c();
      lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
      lVar16 = *(long *)(lVar17 + 0x90);
      if (lVar16 == 0) goto LAB_06183bb8;
    }
    if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) goto LAB_06183b5c;
    local_e0 = local_e0 & 0xffffffff00000000;
    fVar27 = (float)FUN_0618a78c(lVar14,*(undefined8 *)(lVar17 + 0x88),
                                 *(undefined4 *)(lVar16 + 0x44),*(undefined4 *)(lVar16 + 0x48),
                                 &local_e0);
    if (fVar27 != INFINITY) {
      iVar12 = (int)fVar27;
    }
    local_188 = CONCAT44(local_188._4_4_,iVar12);
    if (iVar12 == -0x8000) {
      return 0;
    }
    if ((*plVar18 == 0) || (lVar14 = FUN_061a2bf0(*plVar18,0), lVar14 == 0)) goto LAB_06183bb8;
    if (*(int *)(lVar14 + 0x18) + -1 < iVar12) {
      return 0;
    }
LAB_06183980:
    *(int *)(param_5 + 0x6bc) = (int)local_188;
  }
  lVar14 = *(long *)puVar4;
  uVar9 = uVar9 + 1;
  goto LAB_061837a8;
LAB_061810c8:
  lVar14 = *(long *)puVar4;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar14 = *(long *)puVar4;
  }
  lVar16 = *(long *)(lVar14 + 0xb8);
  lVar17 = *(long *)(lVar16 + 0x90);
  if (lVar17 == 0) goto LAB_06183bb8;
  if (*(int *)(lVar17 + 0x18) <= (int)uVar9) {
LAB_061820dc:
    uStack_198 = 0;
    local_1a0 = 0;
    uVar9 = (uint)*(byte *)(param_5 + 0x503);
    if ((uint)uVar25 >> 0x18 <= (uint)*(byte *)(param_5 + 0x503)) {
      uVar9 = (uint)(uVar25 >> 0x18);
    }
    local_190 = 0;
    FUN_06152bf0(local_f0 & 0xffffffff,local_f0._4_4_,local_e8 & 0xffffffff,local_e8._4_4_,
                 &local_1a0,(uint)uVar25 & 0xffffff | uVar9 << 0x18,0);
    puVar4 = Method_UnityEngine_InputSystem_InputControlExtensions_WriteValueIntoState<bool>__;
    *(undefined8 *)(param_5 + 0x168) = uStack_198;
    *(ulong *)(param_5 + 0x160) = local_1a0;
    uVar15 = *(undefined8 *)puVar4;
    *(undefined4 *)(param_5 + 0x170) = local_190;
    lStack_d8 = uStack_198;
    local_e0 = local_1a0;
    local_d0 = CONCAT44(local_d0._4_4_,local_190);
    FUN_047dfe4c(param_5 + 0x568,&local_e0,uVar15);
    return 1;
  }
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar14 = *(long *)puVar4;
    lVar16 = *(long *)(lVar14 + 0xb8);
    lVar17 = *(long *)(lVar16 + 0x90);
    if (lVar17 == 0) goto LAB_06183bb8;
  }
  if (*(uint *)(lVar17 + 0x18) <= uVar9) goto LAB_06183b5c;
  if (*(int *)(lVar17 + (long)(int)uVar9 * 0x18 + 0x20) == 0) goto LAB_061820dc;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar14 = *(long *)puVar4;
    lVar16 = *(long *)(lVar14 + 0xb8);
    lVar17 = *(long *)(lVar16 + 0x90);
    if (lVar17 == 0) goto LAB_06183bb8;
  }
  if (*(uint *)(lVar17 + 0x18) <= uVar9) goto LAB_06183b5c;
  iVar12 = *(int *)(lVar17 + (long)(int)uVar9 * 0x18 + 0x20);
  if (iVar12 == -0x7fd3848f) {
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar16 = *(long *)(*(long *)puVar4 + 0xb8);
      lVar17 = *(long *)(lVar16 + 0x90);
      if (lVar17 == 0) goto LAB_06183bb8;
    }
    if (*(uint *)(lVar17 + 0x18) <= uVar9) {
LAB_06183b5c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar17 = lVar17 + (long)(int)uVar9 * 0x18;
    iVar12 = FUN_0618a6e0(param_5,*(undefined8 *)(lVar16 + 0x88),*(undefined4 *)(lVar17 + 0x2c),
                          *(undefined4 *)(lVar17 + 0x30),lVar16 + 0x98);
    if (iVar12 != 4) {
      return 0;
    }
    lVar14 = *(long *)puVar4;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar14 = *(long *)puVar4;
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x98);
    if (lVar14 == 0) goto LAB_06183bb8;
    uVar20 = *(uint *)(lVar14 + 0x18);
    if ((((uVar20 == 0) || (uVar20 == 1)) || (uVar20 < 3)) || (uVar20 == 3)) goto LAB_06183b5c;
    uVar11 = *(undefined4 *)(lVar14 + 0x20);
    uVar29 = *(undefined4 *)(lVar14 + 0x24);
    uVar30 = *(undefined4 *)(lVar14 + 0x28);
    uVar35 = *(undefined4 *)(lVar14 + 0x2c);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_06152920(uVar11,uVar29,uVar30,uVar35,&local_f0,0);
    uVar6 = local_e8;
    uVar5 = local_f0;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar29 = (undefined4)(uVar5 >> 0x20);
    uVar30 = (undefined4)uVar6;
    uVar35 = (undefined4)(uVar6 >> 0x20);
    uVar11 = FUN_06152a10(uVar5 & 0xffffffff,0);
    local_f0 = CONCAT44(uVar29,uVar11);
    local_e8 = CONCAT44(uVar35,uVar30);
  }
  else if (iVar12 == 0x4e3381d) {
    if (*(int *)(lVar14 + 0xe4) == 0) {
      lVar14 = thunk_FUN_02df485c();
      lVar16 = *(long *)(*(long *)puVar4 + 0xb8);
      lVar17 = *(long *)(lVar16 + 0x90);
      if (lVar17 == 0) goto LAB_06183bb8;
    }
    if (*(uint *)(lVar17 + 0x18) <= uVar9) goto LAB_06183b5c;
    lVar17 = lVar17 + (long)(int)uVar9 * 0x18;
LAB_06181200:
    uVar25 = FUN_0618a494(lVar14,*(undefined8 *)(lVar16 + 0x88),*(undefined4 *)(lVar17 + 0x2c),
                          *(undefined4 *)(lVar17 + 0x30));
    uVar25 = uVar25 & 0xffffffff;
  }
  else if (iVar12 == 0x292f75) {
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar14 = *(long *)puVar4;
      lVar16 = *(long *)(lVar14 + 0xb8);
      lVar17 = *(long *)(lVar16 + 0x90);
      if (lVar17 == 0) goto LAB_06183bb8;
    }
    if (*(uint *)(lVar17 + 0x18) <= uVar9) goto LAB_06183b5c;
    if (*(int *)(lVar17 + (long)(int)uVar9 * 0x18 + 0x28) == 4) {
      if (*(int *)(lVar14 + 0xe4) == 0) {
        lVar14 = thunk_FUN_02df485c();
        lVar16 = *(long *)(*(long *)puVar4 + 0xb8);
        lVar17 = *(long *)(lVar16 + 0x90);
        if (lVar17 == 0) goto LAB_06183bb8;
      }
      if (*(int *)(lVar17 + 0x18) != 0) goto LAB_06181200;
      goto LAB_06183b5c;
    }
  }
  uVar9 = uVar9 + 1;
  goto LAB_061810c8;
}


