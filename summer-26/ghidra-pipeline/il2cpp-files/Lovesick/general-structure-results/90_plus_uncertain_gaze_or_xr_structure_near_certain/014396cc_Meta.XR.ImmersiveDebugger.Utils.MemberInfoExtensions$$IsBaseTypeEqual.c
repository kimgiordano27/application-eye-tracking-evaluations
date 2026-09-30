/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.MemberInfoExtensions$$IsBaseTypeEqual
ENTRY_POINT: 014396cc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 135
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


long Meta_XR_ImmersiveDebugger_Utils_MemberInfoExtensions__IsBaseTypeEqual(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined4 uVar16;
  uint uVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint uVar23;
  long unaff_x19;
  long lVar24;
  long unaff_x20;
  undefined4 unaff_w21;
  uint uVar25;
  uint uVar26;
  int iVar27;
  long unaff_x22;
  undefined8 *puVar28;
  long lVar29;
  uint unaff_w23;
  long unaff_x25;
  ulong uVar30;
  float fVar31;
  int iVar32;
  float fVar33;
  int iVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  int iStack0000000000000064;
  int iStack0000000000000070;
  int iStack0000000000000074;
  undefined8 in_stack_00000080;
  float fStack0000000000000088;
  float fStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  int iStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 in_stack_000000a0;
  int in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  ulong in_stack_000000b8;
  undefined8 in_stack_000000c0;
  uint uStack00000000000000cc;
  undefined8 in_stack_000000d0;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  int iStack00000000000000e0;
  uint uStack00000000000000e4;
  uint uStack00000000000000e8;
  uint uStack00000000000000ec;
  undefined4 in_stack_00000170;
  int in_stack_00000178;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary<DataRow,_DataRowView>_ContainsKey__
                    );
  thunk_FUN_00d48444(System_Xml_Serialization_XmlCustomFormatter_TypeInfo);
  thunk_FUN_00d48444(
                    Method_UnityEngine_Pool_CollectionPool<List<IEventSystemHandler>,_IEventSystemHandler>_Get__
                    );
  thunk_FUN_00d48444(Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_get_Task__)
  ;
  thunk_FUN_00d48444(System_Net_TlsStream_TypeInfo);
  thunk_FUN_00d48444(PTR_DAT_033f5960);
  thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<ARPlane>__);
  thunk_FUN_00d48444(System_Action<InteractionGroupRegisteredEventArgs>_TypeInfo);
  thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<NavMeshSurface>__);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_laneq_u16__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<Edge>_ToArray__);
  thunk_FUN_00d48444(Method_System_Reflection_Emit_EnumBuilder_GetMethodImpl__);
  uVar16 = in_stack_00000170;
  *(undefined1 *)(unaff_x19 + 0xa07) = 1;
  _iStack00000000000000e0 = 0;
  uStack00000000000000e8 = 0;
  uStack00000000000000ec = 0;
  in_stack_000000d0 = 0;
  _fStack00000000000000d8 = 0;
  uStack00000000000000cc = 0;
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  _uStack00000000000000b0 = 0;
  iStack0000000000000064 = in_stack_00000178;
  if (3 < *(int *)(unaff_x20 + 0x10)) {
    plVar18 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,7);
    puVar10 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
    if (unaff_x22 == 0) goto LAB_0143af6c;
    _fStack0000000000000088 = CONCAT44(fStack000000000000008c,*(undefined4 *)(unaff_x22 + 0x18));
    lVar19 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                ,&stack0x00000088);
    if (plVar18 == (long *)0x0) goto LAB_0143af6c;
    if ((lVar19 != 0) &&
       (lVar20 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40)), lVar20 == 0))
    goto LAB_0143af74;
    if ((int)plVar18[3] == 0) goto LAB_0143af70;
    plVar18[4] = lVar19;
    lVar19 = thunk_FUN_00d61fa0(*(undefined8 *)puVar10,&stack0x000000ac);
    if ((lVar19 != 0) &&
       (lVar20 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40)), lVar20 == 0))
    goto LAB_0143af74;
    if (*(uint *)(plVar18 + 3) < 2) goto LAB_0143af70;
    plVar18[5] = lVar19;
    in_stack_000000a8 = iStack0000000000000070;
    lVar19 = thunk_FUN_00d61fa0(*(undefined8 *)puVar10,&stack0x000000a8);
    if ((lVar19 != 0) &&
       (lVar20 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40)), lVar20 == 0))
    goto LAB_0143af74;
    if (*(uint *)(plVar18 + 3) < 3) goto LAB_0143af70;
    plVar18[6] = lVar19;
    lVar19 = thunk_FUN_00d61fa0(*(undefined8 *)puVar10,&stack0x000000a4);
    if ((lVar19 != 0) &&
       (lVar20 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40)), lVar20 == 0))
    goto LAB_0143af74;
    if (*(uint *)(plVar18 + 3) < 4) goto LAB_0143af70;
    plVar18[7] = lVar19;
    in_stack_000000a0 = unaff_w21;
    lVar19 = thunk_FUN_00d61fa0(*(undefined8 *)puVar10,&stack0x000000a0);
    if ((lVar19 != 0) &&
       (lVar20 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40)), lVar20 == 0))
    goto LAB_0143af74;
    if (*(uint *)(plVar18 + 3) < 5) goto LAB_0143af70;
    plVar18[8] = lVar19;
    uStack000000000000009c = uVar16;
    lVar19 = thunk_FUN_00d61fa0(*(undefined8 *)puVar10,(long)&stack0x00000098 + 4);
    if ((lVar19 != 0) &&
       (lVar20 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40)), lVar20 == 0))
    goto LAB_0143af74;
    if (*(uint *)(plVar18 + 3) < 6) goto LAB_0143af70;
    plVar18[9] = lVar19;
    iStack0000000000000098 = iStack0000000000000064;
    lVar19 = thunk_FUN_00d61fa0(*(undefined8 *)puVar10,&stack0x00000098);
    if ((lVar19 != 0) &&
       (lVar20 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40)), lVar20 == 0))
    goto LAB_0143af74;
    puVar10 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_laneq_u16__;
    if (*(uint *)(plVar18 + 3) < 7) goto LAB_0143af70;
    plVar18[10] = lVar19;
    uVar21 = FUN_01600be4(*(undefined8 *)puVar10,plVar18,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_02660dac(uVar21,0);
  }
  puVar10 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_get_Task__;
  if ((10 < iStack0000000000000064) && (0 < *(int *)(unaff_x20 + 0x10))) {
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026610e4(*(undefined8 *)puVar10,0);
  }
  if ((unaff_x22 == 0) ||
     (plVar18 = (long *)FUN_00da4fb8(*(undefined8 *)
                                      Method_System_MemoryExtensions_IndexOfAny<char>__,
                                     *(undefined4 *)(unaff_x22 + 0x18)), plVar18 == (long *)0x0))
  goto LAB_0143af6c;
  if ((int)plVar18[3] < 1) {
    uVar25 = 0;
    uVar23 = 0;
    fVar35 = 0.0;
  }
  else {
    uVar23 = 0;
    uVar25 = 0;
    uVar30 = 0;
    fVar35 = 0.0;
    do {
      puVar10 = Method_UnityEngine_Events_UnityEvent<string,_STMTextInfo>__ctor__;
      FUN_0132138c(unaff_x22,uVar30 & 0xffffffff,&stack0x00000088,
                   *(undefined8 *)Method_UnityEngine_Events_UnityEvent<string,_STMTextInfo>__ctor__)
      ;
      iVar32 = -0x80000000;
      if (fStack0000000000000088 != INFINITY) {
        iVar32 = (int)fStack0000000000000088;
      }
      FUN_0132138c(unaff_x22,uVar30 & 0xffffffff,&stack0x00000088,*(undefined8 *)puVar10);
      iVar34 = -0x80000000;
      if (fStack000000000000008c != INFINITY) {
        iVar34 = (int)fStack000000000000008c;
      }
      if (unaff_x25 == 0) goto LAB_0143af6c;
      FUN_0132138c(unaff_x25,uVar30 & 0xffffffff,&stack0x00000088,*(undefined8 *)StringLiteral_4419)
      ;
      uVar15 = _fStack0000000000000088;
      lVar19 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3457);
      if (lVar19 == 0) goto LAB_0143af6c;
      FUN_017b46ec(lVar19,0);
      iVar32 = ((uint)(uVar15 >> 0x1f) & 0xfffffffe) + iVar32;
      if (iVar32 <= iStack0000000000000070) {
        iVar32 = iStack0000000000000070;
      }
      iVar34 = iVar34 + (int)uVar15 * 2;
      *(int *)(lVar19 + 0x10) = (int)uVar30;
      *(int *)(lVar19 + 0x14) = iVar32;
      if (iVar34 <= iStack0000000000000074) {
        iVar34 = iStack0000000000000074;
      }
      *(int *)(lVar19 + 0x18) = iVar34;
      lVar20 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40));
      if (lVar20 == 0) goto LAB_0143af74;
      uVar4 = *(uint *)(plVar18 + 3);
      if (uVar4 <= uVar30) goto LAB_0143af70;
      plVar18[uVar30 + 4] = lVar19;
      uVar26 = *(uint *)(lVar19 + 0x14);
      uVar17 = *(uint *)(lVar19 + 0x18);
      uVar30 = uVar30 + 1;
      if ((int)uVar25 <= (int)uVar26) {
        uVar25 = uVar26;
      }
      if ((int)uVar23 <= (int)uVar17) {
        uVar23 = uVar17;
      }
      fVar35 = fVar35 + (float)(int)(uVar17 * uVar26);
    } while ((long)uVar30 < (long)(int)uVar4);
  }
  puVar28 = (undefined8 *)StringLiteral_4789;
  puVar11 = 
  Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XROcclusionSubsystem,_XROcclusionSubsystem_Provider>__ctor__
  ;
  puVar10 = PTR_DAT_033f5f38;
  fVar31 = (float)(int)uVar23 / (float)(int)uVar25;
  if (fVar31 <= 2.0) {
    if (0.5 <= fVar31) {
      puVar28 = (undefined8 *)
                Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XROcclusionSubsystem,_XROcclusionSubsystem_Provider>__ctor__
      ;
      if (3 < *(int *)(unaff_x20 + 0x10)) {
        lVar20 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
        lVar19 = *(long *)(lVar20 + 0x38);
        if (lVar19 == 0) {
          FUN_00d59478(lVar20);
          lVar19 = *(long *)(lVar20 + 0x38);
        }
        lVar19 = *(long *)(lVar19 + 0x10);
        if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
          lVar19 = FUN_00d5941c();
        }
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar19 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
        bVar5 = *(byte *)(lVar19 + 0x132);
        puVar28 = (undefined8 *)puVar11;
        puVar9 = (undefined8 *)
                 Method_System_Collections_Generic_Dictionary<DataRow,_DataRowView>_ContainsKey__;
        goto joined_r0x01439c94;
      }
    }
    else {
      puVar28 = (undefined8 *)PTR_DAT_033f5f38;
      if (3 < *(int *)(unaff_x20 + 0x10)) {
        lVar20 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
        lVar19 = *(long *)(lVar20 + 0x38);
        if (lVar19 == 0) {
          FUN_00d59478(lVar20);
          lVar19 = *(long *)(lVar20 + 0x38);
        }
        lVar19 = *(long *)(lVar19 + 0x10);
        if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
          lVar19 = FUN_00d5941c();
        }
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar19 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
        bVar5 = *(byte *)(lVar19 + 0x132);
        puVar28 = (undefined8 *)puVar10;
        puVar9 = (undefined8 *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<ManagedWebSocket_<WaitForServerToCloseConnectionAsync>d__63>__
        ;
joined_r0x01439c94:
        if ((bVar5 & 1) == 0) {
          lVar19 = FUN_00d5941c();
        }
        FUN_013f38b0(*puVar9,**(undefined8 **)(lVar19 + 0xb8),0);
      }
    }
  }
  else if (3 < *(int *)(unaff_x20 + 0x10)) {
    lVar20 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
    lVar19 = *(long *)(lVar20 + 0x38);
    if (lVar19 == 0) {
      FUN_00d59478(lVar20);
      lVar19 = *(long *)(lVar20 + 0x38);
    }
    lVar19 = *(long *)(lVar19 + 0x10);
    if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
      lVar19 = FUN_00d5941c();
    }
    if (*(int *)(lVar19 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar19 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
    bVar5 = *(byte *)(lVar19 + 0x132);
    puVar9 = (undefined8 *)System_Net_TlsStream_TypeInfo;
    goto joined_r0x01439c94;
  }
  lVar19 = thunk_FUN_00d62348(*puVar28);
  puVar10 = PTR_DAT_033f1c00;
  if (lVar19 != 0) {
    FUN_017b46ec(lVar19,0);
    FUN_010b0550(plVar18,lVar19,*(undefined8 *)puVar10);
    puVar10 = System_Threading_Timer_TimerComparer_TypeInfo;
    uVar4 = 0x80000000;
    if (SQRT(fVar35) != INFINITY) {
      uVar4 = (int)SQRT(fVar35);
    }
    if (*(char *)(unaff_x20 + 0x14) == '\0') {
      uVar26 = uVar4;
      uVar17 = uVar4;
      if ((int)uVar4 < (int)uVar25) {
        if (DAT_03775e60 == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_03775e60 = '\x01';
        }
        fVar31 = fVar35 / (float)(int)uVar25;
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = 0x80000000;
        if ((float)(int)fVar31 != INFINITY) {
          uVar17 = (int)fVar31;
        }
        uVar26 = uVar25;
        if ((int)uVar17 <= (int)uVar23) {
          uVar17 = uVar23;
        }
      }
      if ((int)uVar4 < (int)uVar23) {
        if (DAT_03775e60 == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_03775e60 = '\x01';
        }
        fVar31 = fVar35 / (float)(int)uVar23;
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar26 = 0x80000000;
        if ((float)(int)fVar31 != INFINITY) {
          uVar26 = (int)fVar31;
        }
        uVar17 = uVar23;
        if ((int)uVar26 <= (int)uVar25) {
          uVar26 = uVar25;
        }
      }
    }
    else {
      uVar17 = FUN_01435de0(uVar4);
      uVar26 = uVar17;
      if ((int)uVar17 < (int)uVar25) {
        fVar31 = logf((float)(int)uVar17);
        fVar31 = exp2f((float)(int)(fVar31 / DAT_0293f7bc));
        uVar26 = 0x80000000;
        if (fVar31 != INFINITY) {
          uVar26 = (int)fVar31;
        }
        if (uVar26 < 3) {
          uVar26 = 2;
        }
      }
      if ((int)uVar17 < (int)uVar23) {
        fVar31 = logf((float)(int)uVar17);
        fVar31 = exp2f((float)(int)(fVar31 / DAT_0293f7bc));
        uVar17 = 0x80000000;
        if (fVar31 != INFINITY) {
          uVar17 = (int)fVar31;
        }
        if (uVar17 < 3) {
          uVar17 = 2;
        }
      }
    }
    puVar11 = Method_UnityEngine_InputSystem_LowLevel_ActionEvent_set_interactionIndex__;
    puVar10 = 
    Method_UnityEngine_Pool_CollectionPool<List<IEventSystemHandler>,_IEventSystemHandler>_Get__;
    uVar25 = 4;
    if (uVar26 != 0) {
      uVar25 = uVar26;
    }
    uStack00000000000000e8 = 4;
    if (uVar17 != 0) {
      uStack00000000000000e8 = uVar17;
    }
    iVar34 = uVar4 * 1000;
    iVar32 = -0x80000000;
    if ((float)(int)uVar25 * DAT_028aa29c != INFINITY) {
      iVar32 = (int)((float)(int)uVar25 * DAT_028aa29c);
    }
    iVar3 = -0x80000000;
    if ((float)(int)uStack00000000000000e8 * DAT_028aa29c != INFINITY) {
      iVar3 = (int)((float)(int)uStack00000000000000e8 * DAT_028aa29c);
    }
    if (iVar32 == 0) {
      iVar32 = 1;
    }
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    uStack00000000000000ec = uVar25;
    if ((int)uStack00000000000000e8 < iVar34) {
      do {
        iVar27 = 0;
        uStack00000000000000ec = uVar25;
        while ((int)uStack00000000000000ec < iVar34) {
          lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar11);
          if (lVar19 == 0) goto LAB_0143af6c;
          FUN_017b46ec(lVar19,0);
          if (4 < *(int *)(unaff_x20 + 0x10)) {
            uVar21 = FUN_0176eb1c(&stack0x000000e8,0);
            uVar22 = FUN_0176eb1c((long)&stack0x000000e8 + 4,0);
            uVar21 = FUN_0160073c(*(undefined8 *)puVar10,uVar21,*(undefined8 *)PTR_DAT_033f5960,
                                  uVar22,0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02660dac(uVar21,0);
          }
          uVar30 = FUN_01437050(fVar35);
          if ((uVar30 & 1) != 0) {
            lVar20 = *(long *)(unaff_x20 + 0x18);
            if (lVar20 != 0) {
              fVar31 = 0.0;
              if (*(char *)(lVar19 + 0x28) != '\0') {
                fVar31 = 1.0;
              }
              if (*(char *)(unaff_x20 + 0x14) == '\0') {
                fVar36 = 0.0;
                if (*(char *)(lVar20 + 0x28) != '\0') {
                  fVar36 = 1.0;
                }
                fVar31 = fVar31 + *(float *)(lVar19 + 0x30) +
                                  *(float *)(lVar19 + 0x2c) + *(float *)(lVar19 + 0x2c);
                fVar36 = fVar36 + *(float *)(lVar20 + 0x30) +
                                  *(float *)(lVar20 + 0x2c) + *(float *)(lVar20 + 0x2c);
              }
              else {
                fVar31 = fVar31 + fVar31 + *(float *)(lVar19 + 0x2c);
                fVar36 = 0.0;
                if (*(char *)(lVar20 + 0x28) != '\0') {
                  fVar36 = 2.0;
                }
                fVar36 = *(float *)(lVar20 + 0x2c) + fVar36;
              }
              if (fVar31 <= fVar36) break;
            }
            *(long *)(unaff_x20 + 0x18) = lVar19;
            break;
          }
          if (((int)uStack00000000000000ec < (int)unaff_w23) &&
             (*(char *)(unaff_x20 + 0x14) != '\0')) {
            uStack00000000000000ec = uStack00000000000000ec << 1;
          }
          else {
            uVar23 = uStack00000000000000ec + iVar32;
            bVar8 = (int)unaff_w23 <= (int)uStack00000000000000ec;
            uStack00000000000000ec = unaff_w23;
            if ((int)uVar23 <= (int)unaff_w23 || bVar8) {
              uStack00000000000000ec = uVar23;
            }
          }
          iVar27 = iVar27 + 1;
          if (4 < *(int *)(unaff_x20 + 0x10)) {
            uVar21 = FUN_0176eb1c(&stack0x000000e8,0);
            uVar22 = FUN_0176eb1c((long)&stack0x000000e8 + 4,0);
            uVar21 = FUN_0160073c(*(undefined8 *)
                                   Method_System_Reflection_Emit_EnumBuilder_GetMethodImpl__,uVar21,
                                  *(undefined8 *)PTR_DAT_033f5960,uVar22,0);
            lVar20 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
            lVar19 = *(long *)(lVar20 + 0x38);
            if (lVar19 == 0) {
              FUN_00d59478(lVar20);
              lVar19 = *(long *)(lVar20 + 0x38);
            }
            lVar19 = *(long *)(lVar19 + 0x10);
            if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
              lVar19 = FUN_00d5941c();
            }
            if (*(int *)(lVar19 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar19 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
            if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
              lVar19 = FUN_00d5941c();
            }
            FUN_013f38b0(uVar21,**(undefined8 **)(lVar19 + 0xb8),0);
          }
        }
        if (((int)uStack00000000000000e8 < (int)in_stack_00000080._4_4_) &&
           (*(char *)(unaff_x20 + 0x14) != '\0')) {
          uStack00000000000000e8 = uStack00000000000000e8 << 1;
        }
        else {
          uVar23 = uStack00000000000000e8 + iVar3;
          bVar8 = (int)in_stack_00000080._4_4_ <= (int)uStack00000000000000e8;
          uStack00000000000000e8 = in_stack_00000080._4_4_;
          if ((int)uVar23 <= (int)in_stack_00000080._4_4_ || bVar8) {
            uStack00000000000000e8 = uVar23;
          }
        }
        if (3 < *(int *)(unaff_x20 + 0x10)) {
          uVar21 = FUN_0176eb1c(&stack0x000000e8,0);
          uVar22 = FUN_0176eb1c((long)&stack0x000000e8 + 4,0);
          uVar21 = FUN_0160073c(*(undefined8 *)Method_UnityEngine_Component_GetComponent<ARPlane>__,
                                uVar21,*(undefined8 *)PTR_DAT_033f5960,uVar22,0);
          lVar20 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
          lVar19 = *(long *)(lVar20 + 0x38);
          if (lVar19 == 0) {
            FUN_00d59478(lVar20);
            lVar19 = *(long *)(lVar20 + 0x38);
          }
          lVar19 = *(long *)(lVar19 + 0x10);
          if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
            lVar19 = FUN_00d5941c();
          }
          if (*(int *)(lVar19 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar19 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
          if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
            lVar19 = FUN_00d5941c();
          }
          FUN_013f38b0(uVar21,**(undefined8 **)(lVar19 + 0xb8),0);
        }
      } while ((0 < iVar27) && ((int)uStack00000000000000e8 < iVar34));
    }
    lVar19 = *(long *)(unaff_x20 + 0x18);
    if (lVar19 == 0) {
      return 0;
    }
    _iStack00000000000000e0 = 0;
    uVar25 = *(uint *)(lVar19 + 0x10);
    if (*(char *)(unaff_x20 + 0x14) == '\0') {
      if ((int)unaff_w23 <= (int)uVar25) {
        uVar25 = unaff_w23;
      }
      uVar23 = *(uint *)(lVar19 + 0x14);
      if ((int)in_stack_00000080._4_4_ <= (int)*(uint *)(lVar19 + 0x14)) {
        uVar23 = in_stack_00000080._4_4_;
      }
      _iStack00000000000000e0 = CONCAT44(uVar25,uVar23);
    }
    else {
      fVar31 = logf((float)(int)uVar25);
      fVar35 = DAT_0293f7bc;
      fVar31 = exp2f((float)(int)(fVar31 / DAT_0293f7bc));
      uVar25 = 0x80000000;
      if (fVar31 != INFINITY) {
        uVar25 = (int)fVar31;
      }
      if (uVar25 < 3) {
        uVar25 = 2;
      }
      if ((int)unaff_w23 <= (int)uVar25) {
        uVar25 = unaff_w23;
      }
      uStack00000000000000e4 = uVar25;
      fVar31 = logf((float)*(int *)(lVar19 + 0x14));
      fVar35 = exp2f((float)(int)(fVar31 / fVar35));
      uVar4 = 0x80000000;
      if (fVar35 != INFINITY) {
        uVar4 = (int)fVar35;
      }
      if (uVar4 < 3) {
        uVar4 = 2;
      }
      if ((int)in_stack_00000080._4_4_ <= (int)uVar4) {
        uVar4 = in_stack_00000080._4_4_;
      }
      uVar26 = uVar25;
      if ((int)uVar25 < 0) {
        uVar26 = uVar25 + 1;
      }
      uVar23 = (int)uVar26 >> 1;
      if ((int)uVar26 >> 1 <= (int)uVar4) {
        uVar23 = uVar4;
      }
      uVar4 = uVar23;
      if ((int)uVar23 < 0) {
        uVar4 = uVar23 + 1;
      }
      uVar4 = (int)uVar4 >> 1;
      _iStack00000000000000e0 = CONCAT44(uStack00000000000000e4,uVar23);
      if ((int)uVar25 < (int)uVar4) {
        _iStack00000000000000e0 = CONCAT44(uVar4,uVar23);
        uVar25 = uVar4;
      }
    }
    *(uint *)(lVar19 + 0x18) = uVar25;
    *(uint *)(lVar19 + 0x1c) = uVar23;
    if (3 < *(int *)(unaff_x20 + 0x10)) {
      plVar18 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,0xe);
      puVar10 = PTR_DAT_033f3760;
      if (plVar18 == (long *)0x0) goto LAB_0143af6c;
      if ((*(long *)PTR_DAT_033f3760 != 0) &&
         (lVar19 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f3760,*(undefined8 *)(*plVar18 + 0x40)),
         lVar19 == 0)) {
LAB_0143af74:
        uVar21 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar21,0);
      }
      if ((int)plVar18[3] == 0) goto LAB_0143af70;
      plVar18[4] = *(long *)puVar10;
      lVar19 = FUN_0176eb1c((long)&stack0x000000e0 + 4,0);
      if ((lVar19 != 0) &&
         (lVar20 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40)), lVar20 == 0))
      goto LAB_0143af74;
      puVar10 = System_Action<CwInputManager_Finger>_TypeInfo;
      uVar25 = *(uint *)(plVar18 + 3);
      if (uVar25 < 2) {
LAB_0143af70:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar18[5] = lVar19;
      lVar19 = *(long *)puVar10;
      if (lVar19 != 0) {
        lVar19 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40));
        if (lVar19 == 0) goto LAB_0143af74;
        uVar25 = *(uint *)(plVar18 + 3);
      }
      if (uVar25 < 3) goto LAB_0143af70;
      plVar18[6] = *(long *)puVar10;
      lVar19 = FUN_0176eb1c(&stack0x000000e0,0);
      if ((lVar19 != 0) &&
         (lVar20 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40)), lVar20 == 0))
      goto LAB_0143af74;
      uVar25 = *(uint *)(plVar18 + 3);
      if (uVar25 < 4) goto LAB_0143af70;
      plVar18[7] = lVar19;
      if (*(long *)PTR_DAT_033f5960 != 0) {
        lVar19 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f5960,*(undefined8 *)(*plVar18 + 0x40));
        if (lVar19 == 0) goto LAB_0143af74;
        uVar25 = *(uint *)(plVar18 + 3);
      }
      if (uVar25 < 5) goto LAB_0143af70;
      plVar18[8] = *(long *)PTR_DAT_033f5960;
      if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_0143af6c;
      lVar19 = FUN_0176eb1c(*(long *)(unaff_x20 + 0x18) + 0x10,0);
      if ((lVar19 != 0) &&
         (lVar20 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40)), lVar20 == 0))
      goto LAB_0143af74;
      uVar25 = *(uint *)(plVar18 + 3);
      if (uVar25 < 6) goto LAB_0143af70;
      plVar18[9] = lVar19;
      if (*(long *)Method_MedleyBossPushPhase_StartPhase__ != 0) {
        lVar19 = thunk_FUN_00d6225c(*(long *)Method_MedleyBossPushPhase_StartPhase__,
                                    *(undefined8 *)(*plVar18 + 0x40));
        if (lVar19 == 0) goto LAB_0143af74;
        uVar25 = *(uint *)(plVar18 + 3);
      }
      if (uVar25 < 7) goto LAB_0143af70;
      plVar18[10] = *(long *)Method_MedleyBossPushPhase_StartPhase__;
      if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_0143af6c;
      lVar19 = FUN_0176eb1c(*(long *)(unaff_x20 + 0x18) + 0x14,0);
      if ((lVar19 != 0) &&
         (lVar20 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40)), lVar20 == 0))
      goto LAB_0143af74;
      puVar10 = StringLiteral_10387;
      uVar25 = *(uint *)(plVar18 + 3);
      if (uVar25 < 8) goto LAB_0143af70;
      plVar18[0xb] = lVar19;
      lVar19 = *(long *)puVar10;
      if (lVar19 != 0) {
        lVar19 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40));
        if (lVar19 == 0) goto LAB_0143af74;
        uVar25 = *(uint *)(plVar18 + 3);
      }
      if (uVar25 < 9) goto LAB_0143af70;
      plVar18[0xc] = *(long *)puVar10;
      if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_0143af6c;
      lVar19 = FUN_017840ac(*(long *)(unaff_x20 + 0x18) + 0x2c,0);
      if ((lVar19 != 0) &&
         (lVar20 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40)), lVar20 == 0))
      goto LAB_0143af74;
      puVar10 = 
      Method_System_Collections_Generic_List<StandardVelocityCalculator_SamplePoseData>__ctor__;
      uVar25 = *(uint *)(plVar18 + 3);
      if (uVar25 < 10) goto LAB_0143af70;
      plVar18[0xd] = lVar19;
      lVar19 = *(long *)puVar10;
      if (lVar19 != 0) {
        lVar19 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40));
        if (lVar19 == 0) goto LAB_0143af74;
        uVar25 = *(uint *)(plVar18 + 3);
      }
      if (uVar25 < 0xb) goto LAB_0143af70;
      plVar18[0xe] = *(long *)puVar10;
      if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_0143af6c;
      lVar19 = FUN_017840ac(*(long *)(unaff_x20 + 0x18) + 0x30,0);
      if ((lVar19 != 0) &&
         (lVar20 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40)), lVar20 == 0))
      goto LAB_0143af74;
      puVar10 = System_Action<InteractionGroupRegisteredEventArgs>_TypeInfo;
      uVar25 = *(uint *)(plVar18 + 3);
      if (uVar25 < 0xc) goto LAB_0143af70;
      plVar18[0xf] = lVar19;
      lVar19 = *(long *)puVar10;
      if (lVar19 != 0) {
        lVar19 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40));
        if (lVar19 == 0) goto LAB_0143af74;
        uVar25 = *(uint *)(plVar18 + 3);
      }
      if (uVar25 < 0xd) goto LAB_0143af70;
      plVar18[0x10] = *(long *)puVar10;
      lVar19 = *(long *)(unaff_x20 + 0x18);
      if (lVar19 == 0) goto LAB_0143af6c;
      if (*(int *)(*(long *)StringLiteral_9958 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar19 = FUN_016f5f58(lVar19 + 0x28,0);
      if ((lVar19 != 0) &&
         (lVar20 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40)), lVar20 == 0))
      goto LAB_0143af74;
      if (*(uint *)(plVar18 + 3) < 0xe) goto LAB_0143af70;
      plVar18[0x11] = lVar19;
      uVar21 = FUN_01600844(plVar18,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02660dac(uVar21,0);
    }
    lVar19 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3ef8);
    if (lVar19 != 0) {
      FUN_01320e50(lVar19,*(undefined8 *)StringLiteral_8754);
      puVar10 = Method_System_Numerics_BigIntegerCalculator_Multiply__;
      if (*(long *)(unaff_x20 + 0x18) != 0) {
        FUN_01436c38(*(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x20),lVar19);
        lVar20 = thunk_FUN_00d62348(*(undefined8 *)puVar10);
        puVar10 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_s16__;
        if (lVar20 != 0) {
          FUN_017b46ec(lVar20,0);
          FUN_01324f34(lVar19,lVar20,*(undefined8 *)puVar10);
          lVar20 = *(long *)(unaff_x20 + 0x18);
          if ((lVar20 != 0) && (unaff_x25 != 0)) {
            iVar34 = *(int *)(lVar20 + 0x10);
            iVar32 = *(int *)(lVar20 + 0x14);
            FUN_0132138c(unaff_x25,0,&stack0x00000088,*(undefined8 *)StringLiteral_4419);
            uVar30 = FUN_01435f44((float)iVar34,(float)iVar32);
            puVar11 = Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__;
            puVar10 = System_Runtime_Remoting_Messaging_ServerContextTerminatorSink_TypeInfo;
            if ((iStack0000000000000064 < 0xb) && ((uVar30 & 1) != 0)) {
              if (3 < *(int *)(unaff_x20 + 0x10)) {
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_02660dac(*(undefined8 *)puVar10,0);
              }
              lVar20 = FUN_014394d4();
            }
            else {
              uVar21 = FUN_01325140(unaff_x25,*(undefined8 *)StringLiteral_9168);
              lVar20 = thunk_FUN_00d62348(*(undefined8 *)puVar11);
              puVar11 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
              puVar10 = Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__;
              if (lVar20 == 0) goto LAB_0143af6c;
              FUN_017b46ec(lVar20,0);
              *(undefined8 *)(lVar20 + 0x28) = uVar21;
              uVar21 = FUN_00da4fb8(*(undefined8 *)puVar10,*(undefined4 *)(lVar19 + 0x18));
              *(undefined8 *)(lVar20 + 0x20) = uVar21;
              uVar21 = FUN_00da4fb8(*(undefined8 *)puVar11,*(undefined4 *)(lVar19 + 0x18));
              *(undefined8 *)(lVar20 + 0x30) = uVar21;
              *(uint *)(lVar20 + 0x10) = uStack00000000000000e4;
              *(undefined8 *)(lVar20 + 0x18) = 0xffffffffffffffff;
              *(int *)(lVar20 + 0x14) = iStack00000000000000e0;
              puVar14 = StringLiteral_9909;
              puVar13 = 
              Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__;
              puVar12 = Method_System_Collections_Generic_List<Edge>_ToArray__;
              puVar11 = System_Xml_Serialization_XmlCustomFormatter_TypeInfo;
              puVar10 = System_Data_AutoIncrementBigInteger_TypeInfo;
              uStack00000000000000cc = 0;
              if (0 < *(int *)(lVar19 + 0x18)) {
                fVar35 = fStack00000000000000d8;
                fVar31 = fStack00000000000000dc;
                fVar36 = fStack00000000000000dc + fStack00000000000000dc;
                fVar37 = fStack00000000000000d8 + fStack00000000000000d8;
                do {
                  FUN_0132138c(lVar19,uStack00000000000000cc,&stack0x00000088,*(undefined8 *)puVar10
                              );
                  uVar25 = uStack00000000000000cc;
                  uVar30 = _fStack0000000000000088;
                  if (_fStack0000000000000088 == 0) goto LAB_0143af6c;
                  piVar1 = (int *)(_fStack0000000000000088 + 0x1c);
                  piVar6 = (int *)(_fStack0000000000000088 + 0x20);
                  piVar2 = (int *)(_fStack0000000000000088 + 0x14);
                  piVar7 = (int *)(_fStack0000000000000088 + 0x18);
                  lVar24 = *(long *)(lVar20 + 0x20);
                  lVar29 = (long)(int)uStack00000000000000cc;
                  _fStack0000000000000088 = 0;
                  _uStack0000000000000090 = 0;
                  FUN_0268834c(fVar31 + (float)*piVar1 / (float)(int)uStack00000000000000e4,
                               fVar35 + (float)*piVar6 / (float)iStack00000000000000e0,
                               (float)*piVar2 / (float)(int)uStack00000000000000e4 - fVar36,
                               (float)*piVar7 / (float)iStack00000000000000e0 - fVar37,
                               &stack0x00000088,0);
                  if (lVar24 == 0) goto LAB_0143af6c;
                  if (*(uint *)(lVar24 + 0x18) <= uVar25) goto LAB_0143af70;
                  lVar24 = lVar24 + lVar29 * 0x10;
                  *(float *)(lVar24 + 0x20) = fStack0000000000000088;
                  *(float *)(lVar24 + 0x24) = fStack000000000000008c;
                  *(undefined4 *)(lVar24 + 0x28) = uStack0000000000000090;
                  *(undefined4 *)(lVar24 + 0x2c) = uStack0000000000000094;
                  in_stack_000000b8 = _fStack0000000000000088;
                  in_stack_000000c0 = _uStack0000000000000090;
                  lVar24 = *(long *)(lVar20 + 0x30);
                  if (lVar24 == 0) goto LAB_0143af6c;
                  if (*(uint *)(lVar24 + 0x18) <= uStack00000000000000cc) goto LAB_0143af70;
                  *(undefined4 *)(lVar24 + (long)(int)uStack00000000000000cc * 4 + 0x20) =
                       *(undefined4 *)(uVar30 + 0x10);
                  if (3 < *(int *)(unaff_x20 + 0x10)) {
                    plVar18 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,0x10);
                    if (plVar18 == (long *)0x0) goto LAB_0143af6c;
                    if ((*(long *)Method_UnityEngine_Component_GetComponent<NavMeshSurface>__ != 0)
                       && (lVar24 = thunk_FUN_00d6225c(*(long *)
                                                  Method_UnityEngine_Component_GetComponent<NavMeshSurface>__
                                                  ,*(undefined8 *)(*plVar18 + 0x40)), lVar24 == 0))
                    goto LAB_0143af74;
                    if ((int)plVar18[3] == 0) goto LAB_0143af70;
                    plVar18[4] = *(long *)
                                  Method_UnityEngine_Component_GetComponent<NavMeshSurface>__;
                    lVar24 = FUN_0176eb1c(&stack0x000000cc,0);
                    if ((lVar24 != 0) &&
                       (lVar29 = thunk_FUN_00d6225c(lVar24,*(undefined8 *)(*plVar18 + 0x40)),
                       lVar29 == 0)) goto LAB_0143af74;
                    uVar25 = *(uint *)(plVar18 + 3);
                    if (uVar25 < 2) goto LAB_0143af70;
                    plVar18[5] = lVar24;
                    if (*(long *)System_Collections_Generic_List<Link>_TypeInfo != 0) {
                      lVar24 = thunk_FUN_00d6225c(*(long *)
                                                  System_Collections_Generic_List<Link>_TypeInfo,
                                                  *(undefined8 *)(*plVar18 + 0x40));
                      if (lVar24 == 0) goto LAB_0143af74;
                      uVar25 = *(uint *)(plVar18 + 3);
                    }
                    if (uVar25 < 3) goto LAB_0143af70;
                    plVar18[6] = *(long *)System_Collections_Generic_List<Link>_TypeInfo;
                    lVar24 = FUN_0176eb1c((undefined4 *)(uVar30 + 0x10),0);
                    if ((lVar24 != 0) &&
                       (lVar29 = thunk_FUN_00d6225c(lVar24,*(undefined8 *)(*plVar18 + 0x40)),
                       lVar29 == 0)) goto LAB_0143af74;
                    uVar25 = *(uint *)(plVar18 + 3);
                    if (uVar25 < 4) goto LAB_0143af70;
                    plVar18[7] = lVar24;
                    lVar24 = *(long *)puVar11;
                    if (lVar24 != 0) {
                      lVar24 = thunk_FUN_00d6225c(lVar24,*(undefined8 *)(*plVar18 + 0x40));
                      if (lVar24 == 0) goto LAB_0143af74;
                      uVar25 = *(uint *)(plVar18 + 3);
                    }
                    if (uVar25 < 5) goto LAB_0143af70;
                    plVar18[8] = *(long *)puVar11;
                    fVar33 = (float)FUN_02688390(&stack0x000000b8,0);
                    _uStack00000000000000b0 =
                         CONCAT44(fVar33 * (float)(int)uStack00000000000000e4,uStack00000000000000b0
                                 );
                    lVar24 = FUN_017840ac((long)&stack0x000000b0 + 4,0);
                    if ((lVar24 != 0) &&
                       (lVar29 = thunk_FUN_00d6225c(lVar24,*(undefined8 *)(*plVar18 + 0x40)),
                       lVar29 == 0)) goto LAB_0143af74;
                    uVar25 = *(uint *)(plVar18 + 3);
                    if (uVar25 < 6) goto LAB_0143af70;
                    plVar18[9] = lVar24;
                    lVar24 = *(long *)puVar14;
                    if (lVar24 != 0) {
                      lVar24 = thunk_FUN_00d6225c(lVar24,*(undefined8 *)(*plVar18 + 0x40));
                      if (lVar24 == 0) goto LAB_0143af74;
                      uVar25 = *(uint *)(plVar18 + 3);
                    }
                    if (uVar25 < 7) goto LAB_0143af70;
                    plVar18[10] = *(long *)puVar14;
                    fVar33 = (float)FUN_026883a0(&stack0x000000b8,0);
                    _uStack00000000000000b0 =
                         CONCAT44(fVar33 * (float)iStack00000000000000e0,uStack00000000000000b0);
                    lVar24 = FUN_017840ac((long)&stack0x000000b0 + 4,0);
                    if ((lVar24 != 0) &&
                       (lVar29 = thunk_FUN_00d6225c(lVar24,*(undefined8 *)(*plVar18 + 0x40)),
                       lVar29 == 0)) goto LAB_0143af74;
                    uVar25 = *(uint *)(plVar18 + 3);
                    if (uVar25 < 8) goto LAB_0143af70;
                    plVar18[0xb] = lVar24;
                    if (*(long *)PTR_DAT_033f5960 != 0) {
                      lVar24 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f5960,
                                                  *(undefined8 *)(*plVar18 + 0x40));
                      if (lVar24 == 0) goto LAB_0143af74;
                      uVar25 = *(uint *)(plVar18 + 3);
                    }
                    if (uVar25 < 9) goto LAB_0143af70;
                    plVar18[0xc] = *(long *)PTR_DAT_033f5960;
                    fVar33 = (float)FUN_026884c4(&stack0x000000b8,0);
                    _uStack00000000000000b0 =
                         CONCAT44(fVar33 * (float)(int)uStack00000000000000e4,uStack00000000000000b0
                                 );
                    lVar24 = FUN_017840ac((long)&stack0x000000b0 + 4,0);
                    if ((lVar24 != 0) &&
                       (lVar29 = thunk_FUN_00d6225c(lVar24,*(undefined8 *)(*plVar18 + 0x40)),
                       lVar29 == 0)) goto LAB_0143af74;
                    uVar25 = *(uint *)(plVar18 + 3);
                    if (uVar25 < 10) goto LAB_0143af70;
                    plVar18[0xd] = lVar24;
                    if (*(long *)Method_MedleyBossPushPhase_StartPhase__ != 0) {
                      lVar24 = thunk_FUN_00d6225c(*(long *)Method_MedleyBossPushPhase_StartPhase__,
                                                  *(undefined8 *)(*plVar18 + 0x40));
                      if (lVar24 == 0) goto LAB_0143af74;
                      uVar25 = *(uint *)(plVar18 + 3);
                    }
                    if (uVar25 < 0xb) goto LAB_0143af70;
                    plVar18[0xe] = *(long *)Method_MedleyBossPushPhase_StartPhase__;
                    fVar33 = (float)FUN_026884d4(&stack0x000000b8,0);
                    _uStack00000000000000b0 =
                         CONCAT44(fVar33 * (float)iStack00000000000000e0,uStack00000000000000b0);
                    lVar24 = FUN_017840ac((long)&stack0x000000b0 + 4,0);
                    if ((lVar24 != 0) &&
                       (lVar29 = thunk_FUN_00d6225c(lVar24,*(undefined8 *)(*plVar18 + 0x40)),
                       lVar29 == 0)) goto LAB_0143af74;
                    uVar25 = *(uint *)(plVar18 + 3);
                    if (uVar25 < 0xc) goto LAB_0143af70;
                    plVar18[0xf] = lVar24;
                    lVar24 = *(long *)puVar12;
                    if (lVar24 != 0) {
                      lVar24 = thunk_FUN_00d6225c(lVar24,*(undefined8 *)(*plVar18 + 0x40));
                      if (lVar24 == 0) goto LAB_0143af74;
                      uVar25 = *(uint *)(plVar18 + 3);
                    }
                    if (uVar25 < 0xd) goto LAB_0143af70;
                    plVar18[0x10] = *(long *)puVar12;
                    FUN_0132138c(unaff_x25,uStack00000000000000cc,&stack0x00000088,
                                 *(undefined8 *)StringLiteral_4419);
                    _uStack00000000000000b0 =
                         CONCAT44(uStack00000000000000b4,(int)(_fStack0000000000000088 >> 0x1f)) &
                         0xfffffffffffffffe;
                    lVar24 = FUN_0176eb1c(&stack0x000000b0,0);
                    if ((lVar24 != 0) &&
                       (lVar29 = thunk_FUN_00d6225c(lVar24,*(undefined8 *)(*plVar18 + 0x40)),
                       lVar29 == 0)) goto LAB_0143af74;
                    uVar25 = *(uint *)(plVar18 + 3);
                    if (uVar25 < 0xe) goto LAB_0143af70;
                    plVar18[0x11] = lVar24;
                    lVar24 = *(long *)puVar13;
                    if (lVar24 != 0) {
                      lVar24 = thunk_FUN_00d6225c(lVar24,*(undefined8 *)(*plVar18 + 0x40));
                      if (lVar24 == 0) goto LAB_0143af74;
                      uVar25 = *(uint *)(plVar18 + 3);
                    }
                    if (uVar25 < 0xf) goto LAB_0143af70;
                    plVar18[0x12] = *(long *)puVar13;
                    FUN_0132138c(unaff_x25,uStack00000000000000cc,&stack0x00000088,
                                 *(undefined8 *)StringLiteral_4419);
                    _uStack00000000000000b0 =
                         CONCAT44(uStack00000000000000b4,(int)fStack0000000000000088 << 1);
                    lVar24 = FUN_0176eb1c(&stack0x000000b0,0);
                    if ((lVar24 != 0) &&
                       (lVar29 = thunk_FUN_00d6225c(lVar24,*(undefined8 *)(*plVar18 + 0x40)),
                       lVar29 == 0)) goto LAB_0143af74;
                    if (*(uint *)(plVar18 + 3) < 0x10) goto LAB_0143af70;
                    plVar18[0x13] = lVar24;
                    uVar21 = FUN_01600844(plVar18,0);
                    lVar29 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
                    lVar24 = *(long *)(lVar29 + 0x38);
                    if (lVar24 == 0) {
                      FUN_00d59478(lVar29);
                      lVar24 = *(long *)(lVar29 + 0x38);
                    }
                    lVar24 = *(long *)(lVar24 + 0x10);
                    if ((*(byte *)(lVar24 + 0x132) & 1) == 0) {
                      lVar24 = FUN_00d5941c();
                    }
                    if (*(int *)(lVar24 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar24 = *(long *)(*(long *)(lVar29 + 0x38) + 0x10);
                    if ((*(byte *)(lVar24 + 0x132) & 1) == 0) {
                      lVar24 = FUN_00d5941c();
                    }
                    FUN_013f38b0(uVar21,**(undefined8 **)(lVar24 + 0xb8),0);
                  }
                  uStack00000000000000cc = uStack00000000000000cc + 1;
                } while ((int)uStack00000000000000cc < *(int *)(lVar19 + 0x18));
              }
              FUN_014359a0(lVar20);
            }
            return lVar20;
          }
        }
      }
    }
  }
LAB_0143af6c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


