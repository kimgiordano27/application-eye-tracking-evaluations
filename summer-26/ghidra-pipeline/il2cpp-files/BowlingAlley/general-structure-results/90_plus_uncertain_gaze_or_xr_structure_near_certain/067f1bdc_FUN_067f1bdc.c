/*
FUNCTION_NAME: FUN_067f1bdc
ENTRY_POINT: 067f1bdc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 215
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


undefined4 FUN_067f1bdc(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  bool bVar5;
  float fVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  void *__dest;
  long lVar24;
  long lVar25;
  uint uVar26;
  long *plVar27;
  long lVar28;
  long *plVar29;
  long *plVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  uint *puVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  int local_20c;
  undefined1 auStack_1f0 [80];
  undefined1 auStack_1a0 [80];
  undefined8 local_150;
  undefined8 uStack_148;
  ulong local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  uint local_78;
  undefined1 local_74 [4];
  
  if ((DAT_076e0bc7 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727fa20);
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(PTR_DAT_07284948);
    thunk_FUN_032e1da0(Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<char>>_Remove__)
    ;
    thunk_FUN_032e1da0(PTR_DAT_07279558);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionMap>_RemoveAtWithCapacity__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Clear__);
    thunk_FUN_032e1da0(PTR_DAT_0727acd0);
    thunk_FUN_032e1da0(PTR_DAT_07279560);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(PTR_DAT_072794f8);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionMap>_get_Item__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<IMECompositionString>>_get_Item__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_Append__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072a6408);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_AppendWithCapacity__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_Clear__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_ClearWithCapacity__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<OnScreenControl_OnScreenDeviceInfo>_RemoveAt__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_Add__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_GetEnumerator__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_Add__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                      );
    thunk_FUN_032e1da0(PTR_DAT_0727f0a8);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_set_Item__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputControl>_AppendWithCapacity__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputControl>_RemoveAtByMovingTailWithCapacity__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputDevice>_AppendWithCapacity__
                      );
    DAT_076e0bc7 = 1;
  }
  puVar9 = Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__;
  puVar7 = Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_Add__;
  local_74[0] = 0;
  local_78 = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  *(undefined1 *)((long)param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x86) = 0;
  *(int *)((long)param_1 + 0x25c) = (int)param_1[0x4b];
  FUN_0683a1c4(param_1 + 0x4c,0);
  if ((*(byte *)((long)param_1 + 0x25c) & 1) == 0) {
    uVar14 = (undefined4)param_1[0x42];
  }
  else {
    uVar14 = 700;
  }
  *(undefined4 *)((long)param_1 + 0x214) = uVar14;
  puVar8 = Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_GetEnumerator__;
  FUN_04a0e200(param_1 + 0x43,uVar14,*(undefined8 *)puVar7);
  plVar27 = param_1 + 0x20;
  param_1[0x20] = param_1[0x1f];
  thunk_FUN_0333a630(plVar27);
  plVar29 = param_1 + 0x23;
  param_1[0x23] = param_1[0x22];
  thunk_FUN_0333a630(plVar29);
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar14 = 0;
  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar9,0);
    uVar14 = (undefined4)param_1[0x24];
  }
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  FUN_067e59d0((int)param_1[0xc3],&local_c0,uVar14,param_1[0x20],0,param_1[0x23]);
  uStack_148 = uStack_b8;
  local_150 = local_c0;
  uStack_138 = uStack_a8;
  local_140 = local_b0;
  uStack_128 = uStack_98;
  local_130 = local_a0;
  local_120 = local_90;
  uVar20 = local_b0;
  FUN_04a0e820(*(long *)(*(long *)puVar9 + 0xb8) + 0x10,&local_150,*(undefined8 *)puVar8);
  plVar18 = (long *)Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_Add__;
  lVar15 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 8);
  if (lVar15 == 0) goto LAB_067f3a90;
  FUN_0503307c(lVar15,*(undefined8 *)PTR_DAT_07284948);
  FUN_067e5b88(param_1[0x23],param_1[0x20],*(long *)(*(long *)puVar9 + 0xb8),
               *(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 8));
  plVar1 = param_1 + 0x6d;
  if (param_1[0x6d] == 0) {
    lVar15 = param_1[0x90];
    lVar28 = thunk_FUN_032a56a0(*plVar18);
    FUN_06839050(lVar28,(int)lVar15,0);
    param_1[0x6d] = lVar28;
    thunk_FUN_0333a630(plVar1,lVar28);
  }
  else {
    plVar30 = (long *)(param_1[0x6d] + 0x38);
    lVar15 = *plVar30;
    if (lVar15 == 0) goto LAB_067f3a90;
    lVar28 = param_1[0x90];
    if (*(int *)(lVar15 + 0x18) < (int)lVar28) {
      if (*(int *)(*plVar18 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_03b4ef60(plVar30,(int)lVar28,0,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_Clear__)
      ;
    }
  }
  iVar10 = (int)param_1[0x5c];
  *(undefined4 *)((long)param_1 + 0x644) = 0;
  if (iVar10 == 1) {
    FUN_06827324(param_1,param_1[0x20],0);
    plVar30 = (long *)
              Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__;
    if (param_1[0xca] == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 3;
      uVar16 = FUN_06830920(0);
      if ((uVar16 & 1) == 0) {
        if (*plVar27 == 0) goto LAB_067f3a90;
        uVar17 = FUN_06becffc(*plVar27,0);
        uVar17 = FUN_057aaeec(*(undefined8 *)
                               Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputControl>_RemoveAtByMovingTailWithCapacity__
                              ,uVar17,*(undefined8 *)
                                       Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputDevice>_AppendWithCapacity__
                              ,0);
        if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
        }
        FUN_06bb3070(uVar17,param_1,0);
      }
    }
    else {
      if (param_1[0xcb] == 0) goto LAB_067f3a90;
      iVar10 = FUN_06becc20(param_1[0xcb],0);
      if (*plVar27 == 0) goto LAB_067f3a90;
      iVar11 = FUN_06becc20(*plVar27,0);
      if (iVar10 != iVar11) {
        uVar16 = FUN_06830a78(0);
        if ((uVar16 & 1) == 0) {
LAB_067f1fdc:
          if (param_1[0xcb] == 0) goto LAB_067f3a90;
          param_1[0xcc] = *(long *)(param_1[0xcb] + 0x20);
        }
        else {
          if (*plVar29 == 0) goto LAB_067f3a90;
          iVar10 = FUN_06becc20(*plVar29,0);
          if ((param_1[0xcb] == 0) || (lVar15 = *(long *)(param_1[0xcb] + 0x20), lVar15 == 0))
          goto LAB_067f3a90;
          iVar11 = FUN_06becc20(lVar15,0);
          if (iVar10 == iVar11) goto LAB_067f1fdc;
          if (param_1[0xcb] == 0) goto LAB_067f3a90;
          lVar15 = param_1[0x23];
          uVar17 = *(undefined8 *)(param_1[0xcb] + 0x20);
          if (*(int *)(*(long *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_Append__
                      + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          lVar15 = FUN_0682cd84(lVar15,uVar17,0);
          param_1[0xcc] = lVar15;
          plVar30 = (long *)
                    Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
          ;
        }
        thunk_FUN_0333a630(param_1 + 0xcc);
        lVar15 = *plVar30;
        lVar28 = param_1[0xcc];
        lVar31 = param_1[0xcb];
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar15 = *plVar30;
        }
        uVar12 = FUN_067e5b88(lVar28,lVar31,*(long *)(lVar15 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
        *(uint *)(param_1 + 0xcd) = uVar12;
        lVar15 = **(long **)(*plVar30 + 0xb8);
        if (lVar15 == 0) goto LAB_067f3a90;
        if (*(uint *)(lVar15 + 0x18) <= uVar12) {
LAB_067f3b20:
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *(undefined4 *)(lVar15 + (long)(int)uVar12 * 0x38 + 0x54) = 0;
      }
    }
    iVar10 = (int)param_1[0x5c];
  }
  if (iVar10 == 6) {
    lVar15 = param_1[0x5d];
    if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar16 = FUN_06be9890(lVar15,0,0);
    puVar7 = PTR_DAT_072794f8;
    if (((uVar16 & 1) != 0) && (plVar30 = param_1, *(char *)((long)param_1 + 0x3f5) == '\0')) {
      while( true ) {
        plVar30 = (long *)plVar30[0x5d];
        if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar16 = FUN_06be9890(plVar30,0,0);
        if ((uVar16 & 1) == 0) goto LAB_067f2164;
        if (plVar30 == (long *)0x0) break;
        (**(code **)(*plVar30 + 0x558))
                  (plVar30,**(undefined8 **)(*(long *)puVar7 + 0xb8),
                   *(undefined8 *)(*plVar30 + 0x560));
        (**(code **)(*plVar30 + 0x948))(plVar30,*(undefined8 *)(*plVar30 + 0x950));
        if (plVar30[0x6d] == 0) break;
        FUN_06839390(plVar30[0x6d],0);
      }
      goto LAB_067f3a90;
    }
  }
LAB_067f2164:
  if (param_2 != 0) {
    uVar12 = *(uint *)(param_2 + 0x18);
    plVar30 = (long *)
              Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__;
    if ((int)uVar12 < 1) {
      local_20c = 0;
    }
    else {
      uVar26 = 0;
      local_20c = 0;
      do {
        if (uVar12 <= uVar26) goto LAB_067f3b20;
        puVar34 = (uint *)(param_2 + (long)(int)uVar26 * 0xc + 0x20);
        if (*puVar34 == 0) break;
        if (*plVar1 == 0) goto LAB_067f3a90;
        plVar30 = (long *)(*plVar1 + 0x38);
        lVar28 = *plVar30;
        lVar15 = param_1[0x92];
        if ((lVar28 == 0) || (*(int *)(lVar28 + 0x18) <= (int)lVar15)) {
          if (*(int *)(*plVar18 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          FUN_03b4ef60(plVar30,(int)lVar15 + 1,1,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_Clear__
                      );
          uVar12 = *(uint *)(param_2 + 0x18);
        }
        if (uVar12 <= uVar26) goto LAB_067f3b20;
        uVar12 = *puVar34;
        if ((uVar12 == 0x3c) && (*(char *)((long)param_1 + 0x302) != '\0')) {
          lVar15 = param_1[0x24];
          uVar16 = FUN_0681c370(param_1,param_2,uVar26 + 1,&local_78,0);
          uVar13 = local_78;
          if ((uVar16 & 1) == 0) goto LAB_067f2434;
          if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_067f3b20;
          iVar10 = *(int *)(param_2 + (long)(int)uVar26 * 0xc + 0x24);
          if ((*(byte *)((long)param_1 + 0x25c) & 1) != 0) {
            *(undefined1 *)((long)param_1 + 0x26a) = 1;
          }
          puVar7 = 
          Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__;
          plVar30 = (long *)
                    Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
          ;
          uVar26 = local_78;
          if (*(int *)((long)param_1 + 0x644) == 1) {
            lVar28 = *(long *)
                      Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
            ;
            if (*(int *)(lVar28 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar28 = *(long *)puVar7;
            }
            lVar28 = **(long **)(lVar28 + 0xb8);
            if (lVar28 != 0) {
              if (*(uint *)(param_1 + 0x24) < *(uint *)(lVar28 + 0x18)) {
                lVar28 = lVar28 + (long)(int)*(uint *)(param_1 + 0x24) * 0x38;
                *(int *)(lVar28 + 0x54) = *(int *)(lVar28 + 0x54) + 1;
                if ((*plVar1 != 0) && (lVar28 = *(long *)(*plVar1 + 0x38), lVar28 != 0)) {
                  if (*(uint *)(param_1 + 0x92) < *(uint *)(lVar28 + 0x18)) {
                    uVar14 = *(undefined4 *)((long)param_1 + 0x6a4);
                    lVar28 = lVar28 + (long)(int)*(uint *)(param_1 + 0x92) * 0x178;
                    *(short *)(lVar28 + 0x20) = (short)uVar14 + -0x2000;
                    *(undefined4 *)(lVar28 + 0x48) = uVar14;
                    *(long *)(lVar28 + 0x38) = *plVar27;
                    thunk_FUN_0333a630();
                    if ((*plVar1 != 0) && (lVar28 = *(long *)(*plVar1 + 0x38), lVar28 != 0)) {
                      if (*(uint *)(param_1 + 0x92) < *(uint *)(lVar28 + 0x18)) {
                        *(long *)(lVar28 + (long)(int)*(uint *)(param_1 + 0x92) * 0x178 + 0x40) =
                             param_1[0xd3];
                        thunk_FUN_0333a630();
                        if ((*plVar1 != 0) && (lVar28 = *(long *)(*plVar1 + 0x38), lVar28 != 0)) {
                          uVar12 = *(uint *)(param_1 + 0x92);
                          if (uVar12 < *(uint *)(lVar28 + 0x18)) {
                            *(int *)(lVar28 + (long)(int)uVar12 * 0x178 + 0x58) = (int)param_1[0x24]
                            ;
                            if ((param_1[0xd3] != 0) &&
                               (lVar31 = FUN_06833818(param_1[0xd3],0), lVar31 != 0)) {
                              uVar17 = FUN_041e29a8(lVar31,*(undefined4 *)((long)param_1 + 0x6a4),
                                                    *(undefined8 *)
                                                                                                          
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Clear__
                                                  );
                              if (uVar12 < *(uint *)(lVar28 + 0x18)) {
                                *(undefined8 *)(lVar28 + (long)(int)uVar12 * 0x178 + 0x30) = uVar17;
                                thunk_FUN_0333a630();
                                if ((*plVar1 != 0) &&
                                   (lVar28 = *(long *)(*plVar1 + 0x38), lVar28 != 0)) {
                                  uVar12 = *(uint *)(param_1 + 0x92);
                                  if (uVar12 < *(uint *)(lVar28 + 0x18)) {
                                    uVar14 = *(undefined4 *)((long)param_1 + 0x644);
                                    lVar31 = lVar28 + (long)(int)uVar12 * 0x178;
                                    *(int *)(lVar31 + 0x24) = iVar10;
                                    *(undefined4 *)(lVar31 + 0x2c) = uVar14;
                                    if (uVar13 < *(uint *)(param_2 + 0x18)) {
                                      *(int *)(lVar28 + (long)(int)uVar12 * 0x178 + 0x28) =
                                           (*(int *)(param_2 + (long)(int)uVar13 * 0xc + 0x24) -
                                           iVar10) + 1;
                                      *(undefined4 *)((long)param_1 + 0x644) = 0;
                                      *(int *)(param_1 + 0x24) = (int)lVar15;
                                      local_20c = local_20c + 1;
                                      plVar30 = (long *)
                                                Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                      ;
                                      uVar26 = uVar13;
                                      goto LAB_067f3144;
                                    }
                                  }
                                  goto LAB_067f3b20;
                                }
                                goto LAB_067f3a90;
                              }
                              goto LAB_067f3b20;
                            }
                            goto LAB_067f3a90;
                          }
                          goto LAB_067f3b20;
                        }
                        goto LAB_067f3a90;
                      }
                      goto LAB_067f3b20;
                    }
                    goto LAB_067f3a90;
                  }
                  goto LAB_067f3b20;
                }
                goto LAB_067f3a90;
              }
              goto LAB_067f3b20;
            }
            goto LAB_067f3a90;
          }
        }
        else {
LAB_067f2434:
          local_74[0] = 0;
          lVar31 = param_1[0x20];
          lVar28 = param_1[0x23];
          lVar15 = param_1[0x24];
          if (*(int *)((long)param_1 + 0x644) != 0) goto LAB_067f2510;
          uVar13 = *(uint *)((long)param_1 + 0x25c);
          if ((uVar13 >> 4 & 1) == 0) {
            if ((uVar13 >> 3 & 1) == 0) {
              if ((uVar13 >> 5 & 1) != 0) goto LAB_067f2464;
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              uVar16 = FUN_058a4a34(uVar12,0);
              if ((uVar16 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                }
                uVar12 = FUN_058a4f48(uVar12,0);
                goto LAB_067f250c;
              }
            }
          }
          else {
LAB_067f2464:
            if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            uVar16 = FUN_058a4af0(uVar12,0);
            if ((uVar16 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              uVar12 = FUN_058a4dd0(uVar12,0);
LAB_067f250c:
              uVar12 = uVar12 & 0xffff;
            }
          }
LAB_067f2510:
          lVar24 = FUN_06827664(param_1,uVar12,param_1[0x20],*(undefined4 *)((long)param_1 + 0x25c),
                                *(undefined4 *)((long)param_1 + 0x214),local_74,0);
          if (lVar24 == 0) {
            iVar10 = FUN_068308e4();
            if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_067f3b20;
            if (iVar10 == 0) {
              uVar13 = 0x25a1;
            }
            else {
              uVar13 = FUN_068308e4(0);
            }
            *puVar34 = uVar13;
            lVar24 = param_1[0x20];
            uVar14 = *(undefined4 *)((long)param_1 + 0x25c);
            uVar3 = *(undefined4 *)((long)param_1 + 0x214);
            if (*(int *)(*(long *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionMap>_get_Item__
                        + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            lVar24 = FUN_0680704c(uVar13,lVar24,1,uVar14,uVar3,local_74,0);
            if (lVar24 == 0) {
              lVar24 = FUN_06830a5c();
              if (lVar24 != 0) {
                lVar24 = FUN_06830a5c(0);
                if (lVar24 == 0) goto LAB_067f3a90;
                if (0 < *(int *)(lVar24 + 0x18)) {
                  lVar24 = param_1[0x20];
                  uVar17 = FUN_06830a5c(0);
                  uVar14 = *(undefined4 *)((long)param_1 + 0x25c);
                  uVar3 = *(undefined4 *)((long)param_1 + 0x214);
                  if (*(int *)(*(long *)
                                Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionMap>_get_Item__
                              + 0xe0) == 0) {
                    thunk_FUN_032cd7c0(*(long *)
                                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionMap>_get_Item__
                                      );
                  }
                  lVar24 = FUN_0680756c(uVar13,lVar24,uVar17,1,uVar14,uVar3,local_74,0);
                  if (lVar24 != 0) goto LAB_067f25c0;
                }
              }
              uVar17 = FUN_0683093c(0);
              if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
                thunk_FUN_032cd7c0(*(long *)PTR_DAT_072794f0);
              }
              uVar16 = FUN_06be9890(uVar17,0,0);
              if ((uVar16 & 1) != 0) {
                uVar17 = FUN_0683093c(0);
                uVar14 = *(undefined4 *)((long)param_1 + 0x25c);
                uVar3 = *(undefined4 *)((long)param_1 + 0x214);
                if (*(int *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionMap>_get_Item__
                            + 0xe0) == 0) {
                  thunk_FUN_032cd7c0(*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionMap>_get_Item__
                                    );
                }
                lVar24 = FUN_0680704c(uVar13,uVar17,1,uVar14,uVar3,local_74,0);
                if (lVar24 != 0) goto LAB_067f25c0;
              }
              if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_067f3b20;
              *puVar34 = 0x20;
              lVar24 = param_1[0x20];
              uVar14 = *(undefined4 *)((long)param_1 + 0x25c);
              uVar3 = *(undefined4 *)((long)param_1 + 0x214);
              if (*(int *)(*(long *)
                            Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionMap>_get_Item__
                          + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              uVar13 = 0x20;
              lVar24 = FUN_0680704c(0x20,lVar24,1,uVar14,uVar3,local_74,0);
              if (lVar24 == 0) {
                if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_067f3b20;
                *puVar34 = 3;
                lVar24 = param_1[0x20];
                uVar14 = *(undefined4 *)((long)param_1 + 0x25c);
                uVar3 = *(undefined4 *)((long)param_1 + 0x214);
                if (*(int *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionMap>_get_Item__
                            + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                }
                uVar13 = 3;
                lVar24 = FUN_0680704c(3,lVar24,1,uVar14,uVar3,local_74,0);
              }
            }
LAB_067f25c0:
            uVar16 = FUN_06830920(0);
            if ((uVar16 & 1) == 0) {
              plVar18 = (long *)FUN_032d5d3c(*(undefined8 *)PTR_DAT_07279560,4);
              if ((int)uVar12 < 0x10000) {
                local_150 = CONCAT44(local_150._4_4_,uVar12);
                lVar21 = thunk_FUN_032a52d0(*(undefined8 *)PTR_DAT_07279558,&local_150);
                if (plVar18 == (long *)0x0) goto LAB_067f3a90;
                if ((lVar21 != 0) &&
                   (lVar25 = thunk_FUN_032a55a4(lVar21,*(undefined8 *)(*plVar18 + 0x40)),
                   lVar25 == 0)) goto LAB_067f3b24;
                if ((int)plVar18[3] == 0) goto LAB_067f3b20;
                plVar18[4] = lVar21;
                thunk_FUN_0333a630(plVar18 + 4,lVar21);
                if (param_1[0x1f] == 0) goto LAB_067f3a90;
                lVar21 = FUN_06becffc(param_1[0x1f],0);
                if ((lVar21 != 0) &&
                   (lVar25 = thunk_FUN_032a55a4(lVar21,*(undefined8 *)(*plVar18 + 0x40)),
                   lVar25 == 0)) goto LAB_067f3b24;
                if (*(uint *)(plVar18 + 3) < 2) goto LAB_067f3b20;
                plVar18[5] = lVar21;
                thunk_FUN_0333a630(plVar18 + 5,lVar21);
                if (lVar24 == 0) goto LAB_067f3a90;
                local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar24 + 0x14));
                lVar21 = thunk_FUN_032a52d0(*(undefined8 *)PTR_DAT_0727f0a8,&local_c0);
                if ((lVar21 != 0) &&
                   (lVar25 = thunk_FUN_032a55a4(lVar21,*(undefined8 *)(*plVar18 + 0x40)),
                   lVar25 == 0)) goto LAB_067f3b24;
                if (*(uint *)(plVar18 + 3) < 3) goto LAB_067f3b20;
                plVar18[6] = lVar21;
                thunk_FUN_0333a630(plVar18 + 6,lVar21);
                lVar21 = FUN_06becffc(param_1,0);
                if ((lVar21 != 0) &&
                   (lVar25 = thunk_FUN_032a55a4(lVar21,*(undefined8 *)(*plVar18 + 0x40)),
                   lVar25 == 0)) goto LAB_067f3b24;
                if (*(uint *)(plVar18 + 3) < 4) goto LAB_067f3b20;
                plVar18[7] = lVar21;
                thunk_FUN_0333a630(plVar18 + 7,lVar21);
                puVar22 = (undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputControl>_AppendWithCapacity__
                ;
              }
              else {
                local_150 = CONCAT44(local_150._4_4_,uVar12);
                lVar21 = thunk_FUN_032a52d0(*(undefined8 *)PTR_DAT_07279558,&local_150);
                if (plVar18 == (long *)0x0) goto LAB_067f3a90;
                if ((lVar21 != 0) &&
                   (lVar25 = thunk_FUN_032a55a4(lVar21,*(undefined8 *)(*plVar18 + 0x40)),
                   lVar25 == 0)) goto LAB_067f3b24;
                if ((int)plVar18[3] == 0) goto LAB_067f3b20;
                plVar18[4] = lVar21;
                thunk_FUN_0333a630(plVar18 + 4,lVar21);
                if (param_1[0x1f] == 0) goto LAB_067f3a90;
                lVar21 = FUN_06becffc(param_1[0x1f],0);
                if ((lVar21 != 0) &&
                   (lVar25 = thunk_FUN_032a55a4(lVar21,*(undefined8 *)(*plVar18 + 0x40)),
                   lVar25 == 0)) goto LAB_067f3b24;
                if (*(uint *)(plVar18 + 3) < 2) goto LAB_067f3b20;
                plVar18[5] = lVar21;
                thunk_FUN_0333a630(plVar18 + 5,lVar21);
                if (lVar24 == 0) goto LAB_067f3a90;
                local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar24 + 0x14));
                lVar21 = thunk_FUN_032a52d0(*(undefined8 *)PTR_DAT_0727f0a8,&local_c0);
                if ((lVar21 != 0) &&
                   (lVar25 = thunk_FUN_032a55a4(lVar21,*(undefined8 *)(*plVar18 + 0x40)),
                   lVar25 == 0)) goto LAB_067f3b24;
                if (*(uint *)(plVar18 + 3) < 3) goto LAB_067f3b20;
                plVar18[6] = lVar21;
                thunk_FUN_0333a630(plVar18 + 6,lVar21);
                lVar21 = FUN_06becffc(param_1,0);
                if ((lVar21 != 0) &&
                   (lVar25 = thunk_FUN_032a55a4(lVar21,*(undefined8 *)(*plVar18 + 0x40)),
                   lVar25 == 0)) goto LAB_067f3b24;
                if (*(uint *)(plVar18 + 3) < 4) goto LAB_067f3b20;
                plVar18[7] = lVar21;
                thunk_FUN_0333a630(plVar18 + 7,lVar21);
                puVar22 = (undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_set_Item__
                ;
              }
              uVar17 = FUN_057ab6a4(*puVar22,plVar18,0);
              if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              FUN_06bb3070(uVar17,param_1,0);
              uVar12 = uVar13;
            }
            else {
              uVar12 = uVar13;
              if (lVar24 == 0) goto LAB_067f3a90;
            }
          }
          if (*(char *)(lVar24 + 0x10) == '\x01') {
            if (*(long *)(lVar24 + 0x18) == 0) goto LAB_067f3a90;
            iVar10 = FUN_067f6c0c(*(long *)(lVar24 + 0x18),0);
            if (*plVar27 == 0) goto LAB_067f3a90;
            iVar11 = FUN_067f6c0c(*plVar27,0);
            if (iVar10 == iVar11) goto LAB_067f2ad4;
            plVar18 = *(long **)(lVar24 + 0x18);
            if (plVar18 == (long *)0x0) {
              plVar18 = (long *)0x0;
              *plVar27 = 0;
            }
            else {
              lVar21 = *(long *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<IMECompositionString>>_get_Item__
              ;
              bVar4 = *(byte *)(lVar21 + 0x130);
              if (*(byte *)(*plVar18 + 0x130) < bVar4) {
                plVar30 = (long *)0x0;
              }
              else {
                plVar30 = plVar18;
                if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar4 * 8 + -8) != lVar21) {
                  plVar30 = (long *)0x0;
                }
              }
              *plVar27 = (long)plVar30;
              if (*(byte *)(*plVar18 + 0x130) < bVar4) {
                plVar18 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar4 * 8 + -8) != lVar21) {
                plVar18 = (long *)0x0;
              }
            }
            thunk_FUN_0333a630(plVar27,plVar18);
            bVar5 = true;
          }
          else {
LAB_067f2ad4:
            bVar5 = false;
          }
          if ((*plVar1 == 0) || (lVar21 = *(long *)(*plVar1 + 0x38), lVar21 == 0))
          goto LAB_067f3a90;
          if (*(uint *)(lVar21 + 0x18) <= *(uint *)(param_1 + 0x92)) goto LAB_067f3b20;
          lVar21 = lVar21 + (long)(int)*(uint *)(param_1 + 0x92) * 0x178;
          plVar18 = (long *)(lVar21 + 0x30);
          *plVar18 = lVar24;
          *(undefined4 *)(lVar21 + 0x2c) = 0;
          thunk_FUN_0333a630(plVar18,lVar24);
          if ((*plVar1 == 0) || (lVar21 = *(long *)(*plVar1 + 0x38), lVar21 == 0))
          goto LAB_067f3a90;
          uVar13 = *(uint *)(param_1 + 0x92);
          if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_067f3b20;
          lVar25 = lVar21 + (long)(int)uVar13 * 0x178;
          *(short *)(lVar25 + 0x20) = (short)uVar12;
          *(undefined1 *)(lVar25 + 0x5c) = local_74[0];
          if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_067f3b20;
          lVar21 = lVar21 + (long)(int)uVar13 * 0x178;
          *(undefined8 *)(lVar21 + 0x24) = *(undefined8 *)(param_2 + (long)(int)uVar26 * 0xc + 0x24)
          ;
          *(long *)(lVar21 + 0x38) = *plVar27;
          thunk_FUN_0333a630();
          plVar30 = (long *)
                    Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
          ;
          if (*(char *)(lVar24 + 0x10) == '\x02') {
            plVar18 = *(long **)(lVar24 + 0x18);
            if (plVar18 == (long *)0x0) goto LAB_067f3a90;
            bVar4 = *(byte *)(*(long *)
                               Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_AppendWithCapacity__
                             + 0x130);
            if ((*(byte *)(*plVar18 + 0x130) < bVar4) ||
               (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar4 * 8 + -8) !=
                *(long *)
                 Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_AppendWithCapacity__
               )) goto LAB_067f3a90;
            lVar31 = plVar18[4];
            lVar28 = *(long *)
                      Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
            ;
            if (*(int *)(lVar28 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar28 = *plVar30;
            }
            uVar12 = FUN_067e5db8(lVar31,plVar18,*(long *)(lVar28 + 0xb8),
                                  *(undefined8 *)(*(long *)(lVar28 + 0xb8) + 8));
            *(uint *)(param_1 + 0x24) = uVar12;
            lVar28 = **(long **)(*plVar30 + 0xb8);
            if (lVar28 == 0) goto LAB_067f3a90;
            if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_067f3b20;
            lVar28 = lVar28 + (long)(int)uVar12 * 0x38;
            *(int *)(lVar28 + 0x54) = *(int *)(lVar28 + 0x54) + 1;
            if ((*plVar1 == 0) || (lVar28 = *(long *)(*plVar1 + 0x38), lVar28 == 0))
            goto LAB_067f3a90;
            if (*(uint *)(lVar28 + 0x18) <= *(uint *)(param_1 + 0x92)) goto LAB_067f3b20;
            lVar28 = lVar28 + (long)(int)*(uint *)(param_1 + 0x92) * 0x178;
            *(undefined4 *)(lVar28 + 0x2c) = 1;
            lVar31 = param_1[0x24];
            *(undefined8 *)(lVar28 + 0x40) = plVar18;
            *(int *)(lVar28 + 0x58) = (int)lVar31;
            thunk_FUN_0333a630((undefined8 *)(lVar28 + 0x40),plVar18);
            plVar30 = (long *)
                      Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
            ;
            if ((param_1[0x6d] == 0) || (lVar28 = *(long *)(param_1[0x6d] + 0x38), lVar28 == 0))
            goto LAB_067f3a90;
            uVar12 = *(uint *)(param_1 + 0x92);
            if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_067f3b20;
            *(undefined4 *)(lVar28 + (long)(int)uVar12 * 0x178 + 0x48) =
                 *(undefined4 *)(lVar24 + 0x28);
            *(undefined4 *)((long)param_1 + 0x644) = 0;
            *(int *)(param_1 + 0x24) = (int)lVar15;
            local_20c = local_20c + 1;
            plVar18 = (long *)Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_Add__
            ;
          }
          else {
            if (bVar5) {
              if (*plVar27 == 0) goto LAB_067f3a90;
              iVar10 = FUN_067f6c0c(*plVar27,0);
              if (param_1[0x1f] == 0) goto LAB_067f3a90;
              iVar11 = FUN_067f6c0c(param_1[0x1f],0);
              if (iVar10 != iVar11) {
                uVar16 = FUN_06830a78(0);
                if ((uVar16 & 1) == 0) {
                  if (*plVar27 == 0) goto LAB_067f3a90;
                  lVar21 = *(long *)(*plVar27 + 0x20);
                }
                else {
                  if (*plVar27 == 0) goto LAB_067f3a90;
                  lVar21 = *plVar29;
                  uVar17 = *(undefined8 *)(*plVar27 + 0x20);
                  if (*(int *)(*(long *)
                                Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_Append__
                              + 0xe0) == 0) {
                    thunk_FUN_032cd7c0();
                  }
                  lVar21 = FUN_0682cd84(lVar21,uVar17,0);
                }
                *plVar29 = lVar21;
                thunk_FUN_0333a630(plVar29);
                lVar21 = *plVar30;
                lVar25 = *plVar29;
                lVar32 = *plVar27;
                if (*(int *)(lVar21 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                  lVar21 = *plVar30;
                }
                uVar14 = FUN_067e5b88(lVar25,lVar32,*(long *)(lVar21 + 0xb8),
                                      *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 8));
                *(undefined4 *)(param_1 + 0x24) = uVar14;
              }
            }
            if (*(long *)(lVar24 + 0x20) == 0) goto LAB_067f3a90;
            iVar10 = FUN_06c51ec4(*(long *)(lVar24 + 0x20),0);
            if (0 < iVar10) {
              if (*(long *)(lVar24 + 0x20) == 0) goto LAB_067f3a90;
              lVar21 = *plVar27;
              lVar25 = *plVar29;
              uVar14 = FUN_06c51ec4(*(long *)(lVar24 + 0x20),0);
              if (*(int *)(*(long *)
                            Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_Append__
                          + 0xe0) == 0) {
                thunk_FUN_032cd7c0(*(long *)
                                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_Append__
                                  );
              }
              lVar24 = FUN_0682c820(lVar21,lVar25,uVar14,0);
              *plVar29 = lVar24;
              thunk_FUN_0333a630(plVar29,lVar24);
              lVar24 = *plVar30;
              lVar21 = *plVar29;
              lVar25 = *plVar27;
              if (*(int *)(lVar24 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
                lVar24 = *plVar30;
              }
              uVar14 = FUN_067e5b88(lVar21,lVar25,*(long *)(lVar24 + 0xb8),
                                    *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 8));
              bVar5 = true;
              *(undefined4 *)(param_1 + 0x24) = uVar14;
            }
            if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            uVar16 = FUN_058a1fe4(uVar12,0);
            plVar18 = (long *)Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_Add__
            ;
            if ((uVar12 != 0x200b) && ((uVar16 & 1) == 0)) {
              lVar24 = *plVar30;
              if (*(int *)(lVar24 + 0xe0) == 0) {
                thunk_FUN_032cd7c0(lVar24);
                lVar24 = *plVar30;
              }
              lVar21 = **(long **)(lVar24 + 0xb8);
              if (lVar21 == 0) goto LAB_067f3a90;
              uVar12 = *(uint *)(param_1 + 0x24);
              if (*(uint *)(lVar21 + 0x18) <= uVar12) goto LAB_067f3b20;
              if (*(int *)(lVar21 + (long)(int)uVar12 * 0x38 + 0x54) < 0x3fff) {
                if (*(int *)(lVar24 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0(lVar24);
                  lVar21 = **(long **)(*plVar30 + 0xb8);
                  if (lVar21 == 0) goto LAB_067f3a90;
                  uVar12 = *(uint *)(param_1 + 0x24);
                }
              }
              else {
                lVar24 = *plVar29;
                uVar17 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727acd0);
                FUN_06bc34e4(uVar17,lVar24,0);
                lVar24 = *plVar30;
                lVar21 = *plVar27;
                if (*(int *)(lVar24 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                  lVar24 = *plVar30;
                }
                uVar12 = FUN_067e5b88(uVar17,lVar21,*(long *)(lVar24 + 0xb8),
                                      *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 8));
                *(uint *)(param_1 + 0x24) = uVar12;
                lVar21 = **(long **)(*plVar30 + 0xb8);
                if (lVar21 == 0) goto LAB_067f3a90;
              }
              if (*(uint *)(lVar21 + 0x18) <= uVar12) goto LAB_067f3b20;
              lVar21 = lVar21 + (long)(int)uVar12 * 0x38;
              *(int *)(lVar21 + 0x54) = *(int *)(lVar21 + 0x54) + 1;
            }
            if ((*plVar1 == 0) || (lVar24 = *(long *)(*plVar1 + 0x38), lVar24 == 0))
            goto LAB_067f3a90;
            if (*(uint *)(lVar24 + 0x18) <= *(uint *)(param_1 + 0x92)) goto LAB_067f3b20;
            *(long *)(lVar24 + (long)(int)*(uint *)(param_1 + 0x92) * 0x178 + 0x50) = *plVar29;
            thunk_FUN_0333a630();
            if ((*plVar1 == 0) || (lVar24 = *(long *)(*plVar1 + 0x38), lVar24 == 0))
            goto LAB_067f3a90;
            if (*(uint *)(lVar24 + 0x18) <= *(uint *)(param_1 + 0x92)) goto LAB_067f3b20;
            uVar12 = *(uint *)(param_1 + 0x24);
            *(uint *)(lVar24 + (long)(int)*(uint *)(param_1 + 0x92) * 0x178 + 0x58) = uVar12;
            lVar24 = *plVar30;
            if (*(int *)(lVar24 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar24 = *plVar30;
              uVar12 = *(uint *)(param_1 + 0x24);
            }
            lVar21 = **(long **)(lVar24 + 0xb8);
            if (lVar21 == 0) goto LAB_067f3a90;
            if (*(uint *)(lVar21 + 0x18) <= uVar12) goto LAB_067f3b20;
            *(bool *)(lVar21 + (long)(int)uVar12 * 0x38 + 0x41) = bVar5;
            if (bVar5) {
              if (*(int *)(lVar24 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
                lVar21 = **(long **)(*plVar30 + 0xb8);
                if (lVar21 == 0) goto LAB_067f3a90;
                uVar12 = *(uint *)(param_1 + 0x24);
              }
              if (*(uint *)(lVar21 + 0x18) <= uVar12) goto LAB_067f3b20;
              plVar19 = (long *)(lVar21 + (long)(int)uVar12 * 0x38 + 0x48);
              *plVar19 = lVar28;
              thunk_FUN_0333a630(plVar19,lVar28);
              param_1[0x20] = lVar31;
              thunk_FUN_0333a630(plVar27);
              param_1[0x23] = lVar28;
              thunk_FUN_0333a630(plVar29,lVar28);
              *(int *)(param_1 + 0x24) = (int)lVar15;
            }
            uVar12 = *(uint *)(param_1 + 0x92);
          }
LAB_067f3144:
          *(uint *)(param_1 + 0x92) = uVar12 + 1;
        }
        uVar12 = *(uint *)(param_2 + 0x18);
        uVar26 = uVar26 + 1;
      } while ((int)uVar26 < (int)uVar12);
    }
    if (*(char *)((long)param_1 + 0x3f5) != '\0') {
      *(undefined1 *)((long)param_1 + 0x3f5) = 0;
LAB_067f3170:
      return (int)param_1[0x92];
    }
    lVar15 = *plVar1;
    if (lVar15 != 0) {
      *(int *)(lVar15 + 0x1c) = local_20c;
      lVar28 = *plVar30;
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar28 = *plVar30;
      }
      lVar28 = *(long *)(*(long *)(lVar28 + 0xb8) + 8);
      if (lVar28 != 0) {
        uVar12 = FUN_05032bb0(lVar28,*(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<char>>_Remove__
                             );
        *(uint *)(lVar15 + 0x34) = uVar12;
        if (*plVar1 != 0) {
          plVar27 = (long *)(*plVar1 + 0x60);
          lVar15 = *plVar27;
          if (lVar15 != 0) {
            uVar16 = (ulong)uVar12;
            if (*(int *)(lVar15 + 0x18) < (int)uVar12) {
              if (*(int *)(*plVar18 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              FUN_03b4f000(plVar27,uVar16,0,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_ClearWithCapacity__
                          );
            }
            if (param_1[0xe1] != 0) {
              plVar27 = param_1 + 0xe1;
              if (*(int *)(param_1[0xe1] + 0x18) < (int)uVar12) {
                uVar14 = FUN_06bdf11c(uVar12 + 1,0);
                if (*(int *)(*plVar18 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0(*plVar18);
                }
                FUN_03b4ed4c(plVar27,uVar14,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_InlinedArray<OnScreenControl_OnScreenDeviceInfo>_RemoveAt__
                            );
              }
              if (*(char *)((long)param_1 + 0x321) != '\0') {
                if (*plVar1 == 0) goto LAB_067f3a90;
                plVar29 = (long *)(*plVar1 + 0x38);
                lVar15 = *plVar29;
                if (lVar15 == 0) goto LAB_067f3a90;
                iVar10 = (int)param_1[0x92];
                if (0x100 < *(int *)(lVar15 + 0x18) - iVar10) {
                  iVar11 = 0x100;
                  if (0x100 < iVar10 + 1) {
                    iVar11 = iVar10 + 1;
                  }
                  if (*(int *)(*plVar18 + 0xe0) == 0) {
                    thunk_FUN_032cd7c0();
                  }
                  FUN_03b4ef60(plVar29,iVar11,1,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_Clear__
                              );
                  plVar30 = (long *)
                            Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                  ;
                }
              }
              fVar6 = DAT_0139fccc;
              if (0 < (int)uVar12) {
                lVar15 = 0;
                uVar33 = 0;
                lVar28 = 0x54;
                lVar31 = 0x20;
                do {
                  fVar38 = (float)uVar20;
                  if (uVar33 != 0) {
                    lVar24 = *plVar27;
                    if (lVar24 == 0) goto LAB_067f3a90;
                    if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_067f3b20;
                    uVar17 = *(undefined8 *)(lVar24 + uVar33 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                    }
                    uVar20 = FUN_06bece64(uVar17,0,0);
                    if ((uVar20 & 1) != 0) {
                      lVar24 = *plVar30;
                      plVar29 = (long *)*plVar27;
                      if (*(int *)(lVar24 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                        lVar24 = *plVar30;
                      }
                      lVar24 = **(long **)(lVar24 + 0xb8);
                      if (lVar24 == 0) goto LAB_067f3a90;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_067f3b20;
                      lVar24 = lVar24 + lVar28;
                      local_d0 = *(undefined8 *)(lVar24 + -4);
                      uStack_d8 = *(undefined8 *)(lVar24 + -0xc);
                      uStack_e0 = *(undefined8 *)(lVar24 + -0x14);
                      uStack_e8 = *(undefined8 *)(lVar24 + -0x1c);
                      uVar17 = *(undefined8 *)(lVar24 + -0x24);
                      uStack_f8 = *(undefined8 *)(lVar24 + -0x2c);
                      local_100 = *(undefined8 *)(lVar24 + -0x34);
                      local_f0 = uVar17;
                      lVar24 = FUN_06837d6c(param_1,&local_100,0);
                      fVar38 = (float)uVar17;
                      if (plVar29 == (long *)0x0) goto LAB_067f3a90;
                      if ((lVar24 != 0) &&
                         (lVar21 = thunk_FUN_032a55a4(lVar24,*(undefined8 *)(*plVar29 + 0x40)),
                         lVar21 == 0)) {
LAB_067f3b24:
                        uVar17 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
                        FUN_032d5dbc(uVar17,0);
                      }
                      if (*(uint *)(plVar29 + 3) <= uVar33) goto LAB_067f3b20;
                      plVar29[uVar33 + 4] = lVar24;
                      thunk_FUN_0333a630((long)plVar29 + lVar31,lVar24);
                      plVar30 = (long *)
                                Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                      ;
                      if ((*plVar1 == 0) || (lVar24 = *(long *)(*plVar1 + 0x60), lVar24 == 0))
                      goto LAB_067f3a90;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_067f3b20;
                      puVar22 = (undefined8 *)(lVar24 + lVar15 + 0x30);
                      *puVar22 = 0;
                      thunk_FUN_0333a630(puVar22,0);
                    }
                    if (param_1[0x70] == 0) goto LAB_067f3a90;
                    fVar35 = (float)FUN_06bf3c50(param_1[0x70],0);
                    lVar24 = *plVar27;
                    if (lVar24 == 0) goto LAB_067f3a90;
                    if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_067f3b20;
                    lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                    if ((lVar24 == 0) ||
                       (fVar37 = fVar38, lVar24 = FUN_06c93eb4(lVar24,0), lVar24 == 0))
                    goto LAB_067f3a90;
                    fVar36 = (float)FUN_06bf3c50(lVar24,0);
                    fVar38 = (fVar38 - fVar37) * (fVar38 - fVar37);
                    uVar20 = (ulong)(uint)fVar38;
                    if (fVar6 <= (fVar35 - fVar36) * (fVar35 - fVar36) + fVar38) {
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto LAB_067f3a90;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_067f3b20;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (lVar24 == 0) goto LAB_067f3a90;
                      lVar24 = FUN_06c93eb4(lVar24,0);
                      if ((param_1[0x70] == 0) || (FUN_06bf3c50(param_1[0x70],0), lVar24 == 0))
                      goto LAB_067f3a90;
                      FUN_06bf3ce0(lVar24,0);
                    }
                    lVar24 = *plVar27;
                    if (lVar24 == 0) goto LAB_067f3a90;
                    if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_067f3b20;
                    lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                    if (lVar24 == 0) goto LAB_067f3a90;
                    uVar17 = *(undefined8 *)(lVar24 + 0xf0);
                    if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                    }
                    uVar23 = FUN_06bece64(uVar17,0,0);
                    if ((uVar23 & 1) == 0) {
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto LAB_067f3a90;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_067f3b20;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if ((lVar24 == 0) || (lVar24 = *(long *)(lVar24 + 0xf0), lVar24 == 0))
                      goto LAB_067f3a90;
                      iVar10 = FUN_06becc20(lVar24,0);
                      lVar24 = *plVar30;
                      if (*(int *)(lVar24 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0(lVar24);
                        lVar24 = *plVar30;
                      }
                      lVar24 = **(long **)(lVar24 + 0xb8);
                      if (lVar24 == 0) goto LAB_067f3a90;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_067f3b20;
                      lVar24 = *(long *)(lVar24 + lVar28 + -0x1c);
                      if (lVar24 == 0) goto LAB_067f3a90;
                      iVar11 = FUN_06becc20(lVar24,0);
                      if (iVar10 != iVar11) goto LAB_067f35c0;
                    }
                    else {
LAB_067f35c0:
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto LAB_067f3a90;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_067f3b20;
                      lVar21 = *plVar30;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (*(int *)(lVar21 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                        lVar21 = *plVar30;
                      }
                      lVar21 = **(long **)(lVar21 + 0xb8);
                      if (lVar21 == 0) goto LAB_067f3a90;
                      if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_067f3b20;
                      if (lVar24 == 0) goto LAB_067f3a90;
                      thunk_FUN_068379c0(lVar24,*(undefined8 *)(lVar21 + lVar28 + -0x1c),0);
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto LAB_067f3a90;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_067f3b20;
                      lVar21 = **(long **)(*plVar30 + 0xb8);
                      if (lVar21 == 0) goto LAB_067f3a90;
                      if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_067f3b20;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (lVar24 == 0) goto LAB_067f3a90;
                      *(undefined8 *)(lVar24 + 0xd8) = *(undefined8 *)(lVar21 + lVar28 + -0x2c);
                      thunk_FUN_0333a630();
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto LAB_067f3a90;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_067f3b20;
                      lVar21 = **(long **)(*plVar30 + 0xb8);
                      if (lVar21 == 0) goto LAB_067f3a90;
                      if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_067f3b20;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (lVar24 == 0) goto LAB_067f3a90;
                      *(undefined8 *)(lVar24 + 0xe0) = *(undefined8 *)(lVar21 + lVar28 + -0x24);
                      thunk_FUN_0333a630();
                    }
                    lVar24 = *plVar30;
                    if (*(int *)(lVar24 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                      lVar24 = *plVar30;
                    }
                    lVar21 = **(long **)(lVar24 + 0xb8);
                    if (lVar21 == 0) goto LAB_067f3a90;
                    if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_067f3b20;
                    if (*(char *)(lVar21 + lVar28 + -0x13) != '\0') {
                      lVar25 = *plVar27;
                      if (lVar25 == 0) goto LAB_067f3a90;
                      if (*(uint *)(lVar25 + 0x18) <= uVar33) goto LAB_067f3b20;
                      lVar25 = *(long *)(lVar25 + uVar33 * 8 + 0x20);
                      if (*(int *)(lVar24 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                        lVar21 = **(long **)(*plVar30 + 0xb8);
                        if (lVar21 == 0) goto LAB_067f3a90;
                      }
                      if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_067f3b20;
                      if (lVar25 == 0) goto LAB_067f3a90;
                      FUN_06837a1c(lVar25,*(undefined8 *)(lVar21 + lVar28 + -0x1c),0);
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto LAB_067f3a90;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_067f3b20;
                      lVar21 = **(long **)(*plVar30 + 0xb8);
                      if (lVar21 == 0) goto LAB_067f3a90;
                      if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_067f3b20;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (lVar24 == 0) goto LAB_067f3a90;
                      *(undefined8 *)(lVar24 + 0x100) = *(undefined8 *)(lVar21 + lVar28 + -0xc);
                      thunk_FUN_0333a630(lVar24 + 0x100);
                    }
                  }
                  lVar24 = *plVar30;
                  if (*(int *)(lVar24 + 0xe0) == 0) {
                    thunk_FUN_032cd7c0();
                    lVar24 = *plVar30;
                  }
                  lVar24 = **(long **)(lVar24 + 0xb8);
                  if (lVar24 == 0) goto LAB_067f3a90;
                  if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_067f3b20;
                  if ((*plVar1 == 0) || (lVar21 = *(long *)(*plVar1 + 0x60), lVar21 == 0))
                  goto LAB_067f3a90;
                  if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_067f3b20;
                  lVar25 = *(long *)(lVar21 + lVar15 + 0x30);
                  iVar10 = *(int *)(lVar24 + lVar28);
                  if (lVar25 == 0) {
                    if (uVar33 == 0) {
                      uStack_118 = 0;
                      local_120 = 0;
                      uStack_108 = 0;
                      uStack_110 = 0;
                      uStack_138 = 0;
                      local_140 = 0;
                      uStack_128 = 0;
                      local_130 = 0;
                      uStack_148 = 0;
                      local_150 = 0;
                      FUN_0682d8a4(&local_150,param_1[0x74],iVar10 + 1,0);
                      memcpy(auStack_1a0,&local_150,0x50);
                      if (*(int *)(lVar21 + 0x18) == 0) goto LAB_067f3b20;
                      memcpy((void *)(lVar21 + lVar15 + 0x20),auStack_1a0,0x50);
                      __dest = (void *)(lVar21 + 0x20);
                    }
                    else {
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto LAB_067f3a90;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_067f3b20;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (lVar24 == 0) goto LAB_067f3a90;
                      uVar17 = FUN_06837bfc(lVar24,0);
                      uStack_118 = 0;
                      local_120 = 0;
                      uStack_108 = 0;
                      uStack_110 = 0;
                      uStack_138 = 0;
                      local_140 = 0;
                      uStack_128 = 0;
                      local_130 = 0;
                      uStack_148 = 0;
                      local_150 = 0;
                      FUN_0682d8a4(&local_150,uVar17,iVar10 + 1,0);
                      memcpy(auStack_1f0,&local_150,0x50);
                      if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_067f3b20;
                      __dest = (void *)(lVar21 + lVar15 + 0x20);
                      memcpy(__dest,auStack_1f0,0x50);
                    }
                    thunk_FUN_0333a630(__dest,0);
                  }
                  else {
                    iVar11 = *(int *)(lVar25 + 0x18);
                    if (iVar11 < iVar10 * 4) {
LAB_067f3830:
                      if (iVar10 < 0x401) {
                        iVar10 = FUN_06bdf11c(iVar10 + 1,0);
                      }
                      else {
                        iVar10 = iVar10 + 0x100;
                      }
                      if (*(int *)(*(long *)PTR_DAT_072a6408 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                      }
                      FUN_0682e674(lVar21 + lVar15 + 0x20,iVar10,0);
                    }
                    else if ((0 < iVar10) && (*(char *)((long)param_1 + 0x321) != '\0')) {
                      iVar2 = iVar11 + 3;
                      if (-1 < iVar11) {
                        iVar2 = iVar11;
                      }
                      if (0x100 < (iVar2 >> 2) - iVar10) goto LAB_067f3830;
                    }
                  }
                  plVar30 = (long *)
                            Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                  ;
                  if ((*plVar1 == 0) || (lVar24 = *(long *)(*plVar1 + 0x60), lVar24 == 0))
                  goto LAB_067f3a90;
                  lVar21 = *(long *)
                            Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                  ;
                  if (*(int *)(lVar21 + 0xe0) == 0) {
                    thunk_FUN_032cd7c0();
                    lVar21 = *plVar30;
                  }
                  lVar21 = **(long **)(lVar21 + 0xb8);
                  if (lVar21 == 0) goto LAB_067f3a90;
                  if ((*(uint *)(lVar21 + 0x18) <= uVar33) || (*(uint *)(lVar24 + 0x18) <= uVar33))
                  goto LAB_067f3b20;
                  *(undefined8 *)(lVar24 + lVar15 + 0x68) = *(undefined8 *)(lVar21 + lVar28 + -0x1c)
                  ;
                  thunk_FUN_0333a630();
                  uVar33 = uVar33 + 1;
                  lVar15 = lVar15 + 0x50;
                  lVar28 = lVar28 + 0x38;
                  lVar31 = lVar31 + 8;
                } while (uVar12 != uVar33);
              }
              lVar15 = *plVar27;
              if (lVar15 != 0) {
                lVar28 = (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3) + 0x20;
                do {
                  uVar12 = (uint)uVar16;
                  if ((int)*(uint *)(lVar15 + 0x18) <= (int)uVar12) goto LAB_067f3170;
                  if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_067f3b20;
                  uVar17 = *(undefined8 *)(lVar15 + lVar28);
                  if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
                    thunk_FUN_032cd7c0();
                  }
                  uVar20 = FUN_06be9890(uVar17,0,0);
                  if ((uVar20 & 1) == 0) goto LAB_067f3170;
                  if ((*plVar1 == 0) || (lVar15 = *(long *)(*plVar1 + 0x60), lVar15 == 0)) break;
                  if ((int)uVar12 < *(int *)(lVar15 + 0x18)) {
                    lVar15 = *plVar27;
                    if (lVar15 == 0) break;
                    if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_067f3b20;
                    if ((*(long *)(lVar15 + lVar28) == 0) ||
                       (lVar15 = FUN_06c947a0(*(long *)(lVar15 + lVar28),0), lVar15 == 0)) break;
                    FUN_06de4d8c(lVar15,0,0);
                  }
                  lVar15 = *plVar27;
                  uVar16 = (ulong)(uVar12 + 1);
                  lVar28 = lVar28 + 8;
                } while (lVar15 != 0);
              }
            }
          }
        }
      }
    }
  }
LAB_067f3a90:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


