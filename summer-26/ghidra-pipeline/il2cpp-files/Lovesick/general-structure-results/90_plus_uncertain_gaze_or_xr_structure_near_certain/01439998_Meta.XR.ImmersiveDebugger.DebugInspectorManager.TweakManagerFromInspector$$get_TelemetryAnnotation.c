/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.TweakManagerFromInspector$$get_TelemetryAnnotation
ENTRY_POINT: 01439998
PROGRAM: Lovesick-libil2cpp.so
SCORE: 145
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_3
*/


long Meta_XR_ImmersiveDebugger_DebugInspectorManager_TweakManagerFromInspector__get_TelemetryAnnotation
               (undefined8 param_1)

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
  uint uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int in_w9;
  uint uVar22;
  long lVar23;
  long unaff_x20;
  uint uVar24;
  uint uVar25;
  int iVar26;
  long unaff_x22;
  undefined8 *puVar27;
  long lVar28;
  uint unaff_w23;
  long unaff_x25;
  ulong uVar29;
  float fVar30;
  int iVar31;
  float fVar32;
  int iVar33;
  float fVar34;
  undefined8 in_stack_00000060;
  int iStack0000000000000070;
  int iStack0000000000000074;
  undefined8 in_stack_00000080;
  float fStack0000000000000088;
  float fStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  uint uStack00000000000000b0;
  float fStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined8 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  int iStack00000000000000e0;
  uint uStack00000000000000e4;
  uint uStack00000000000000e8;
  uint uStack00000000000000ec;
  
  if (in_w9 == 0) {
    thunk_FUN_00d32864(param_1);
  }
  FUN_02660dac();
  puVar10 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_get_Task__;
  if ((10 < in_stack_00000060._4_4_) && (0 < *(int *)(unaff_x20 + 0x10))) {
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026610e4(*(undefined8 *)puVar10,0);
  }
  if ((unaff_x22 == 0) ||
     (plVar17 = (long *)FUN_00da4fb8(*(undefined8 *)
                                      Method_System_MemoryExtensions_IndexOfAny<char>__,
                                     *(undefined4 *)(unaff_x22 + 0x18)), plVar17 == (long *)0x0))
  goto LAB_0143af6c;
  if ((int)plVar17[3] < 1) {
    uVar24 = 0;
    uVar22 = 0;
    fVar34 = 0.0;
  }
  else {
    uVar22 = 0;
    uVar24 = 0;
    uVar29 = 0;
    fVar34 = 0.0;
    do {
      puVar10 = Method_UnityEngine_Events_UnityEvent<string,_STMTextInfo>__ctor__;
      FUN_0132138c(unaff_x22,uVar29 & 0xffffffff,&stack0x00000088,
                   *(undefined8 *)Method_UnityEngine_Events_UnityEvent<string,_STMTextInfo>__ctor__)
      ;
      iVar31 = -0x80000000;
      if (fStack0000000000000088 != INFINITY) {
        iVar31 = (int)fStack0000000000000088;
      }
      FUN_0132138c(unaff_x22,uVar29 & 0xffffffff,&stack0x00000088,*(undefined8 *)puVar10);
      iVar33 = -0x80000000;
      if (fStack000000000000008c != INFINITY) {
        iVar33 = (int)fStack000000000000008c;
      }
      if (unaff_x25 == 0) goto LAB_0143af6c;
      FUN_0132138c(unaff_x25,uVar29 & 0xffffffff,&stack0x00000088,*(undefined8 *)StringLiteral_4419)
      ;
      uVar15 = _fStack0000000000000088;
      lVar18 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3457);
      if (lVar18 == 0) goto LAB_0143af6c;
      FUN_017b46ec(lVar18,0);
      iVar31 = ((uint)(uVar15 >> 0x1f) & 0xfffffffe) + iVar31;
      if (iVar31 <= iStack0000000000000070) {
        iVar31 = iStack0000000000000070;
      }
      iVar33 = iVar33 + (int)uVar15 * 2;
      *(int *)(lVar18 + 0x10) = (int)uVar29;
      *(int *)(lVar18 + 0x14) = iVar31;
      if (iVar33 <= iStack0000000000000074) {
        iVar33 = iStack0000000000000074;
      }
      *(int *)(lVar18 + 0x18) = iVar33;
      lVar19 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar17 + 0x40));
      if (lVar19 == 0) goto LAB_0143af74;
      uVar4 = *(uint *)(plVar17 + 3);
      if (uVar4 <= uVar29) goto LAB_0143af70;
      plVar17[uVar29 + 4] = lVar18;
      uVar25 = *(uint *)(lVar18 + 0x14);
      uVar16 = *(uint *)(lVar18 + 0x18);
      uVar29 = uVar29 + 1;
      if ((int)uVar24 <= (int)uVar25) {
        uVar24 = uVar25;
      }
      if ((int)uVar22 <= (int)uVar16) {
        uVar22 = uVar16;
      }
      fVar34 = fVar34 + (float)(int)(uVar16 * uVar25);
    } while ((long)uVar29 < (long)(int)uVar4);
  }
  puVar27 = (undefined8 *)StringLiteral_4789;
  puVar11 = 
  Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XROcclusionSubsystem,_XROcclusionSubsystem_Provider>__ctor__
  ;
  puVar10 = PTR_DAT_033f5f38;
  fVar30 = (float)(int)uVar22 / (float)(int)uVar24;
  if (fVar30 <= 2.0) {
    if (0.5 <= fVar30) {
      puVar27 = (undefined8 *)
                Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XROcclusionSubsystem,_XROcclusionSubsystem_Provider>__ctor__
      ;
      if (3 < *(int *)(unaff_x20 + 0x10)) {
        lVar19 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
        lVar18 = *(long *)(lVar19 + 0x38);
        if (lVar18 == 0) {
          FUN_00d59478(lVar19);
          lVar18 = *(long *)(lVar19 + 0x38);
        }
        lVar18 = *(long *)(lVar18 + 0x10);
        if ((*(byte *)(lVar18 + 0x132) & 1) == 0) {
          lVar18 = FUN_00d5941c();
        }
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar18 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
        bVar5 = *(byte *)(lVar18 + 0x132);
        puVar27 = (undefined8 *)puVar11;
        puVar9 = (undefined8 *)
                 Method_System_Collections_Generic_Dictionary<DataRow,_DataRowView>_ContainsKey__;
        goto joined_r0x01439c94;
      }
    }
    else {
      puVar27 = (undefined8 *)PTR_DAT_033f5f38;
      if (3 < *(int *)(unaff_x20 + 0x10)) {
        lVar19 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
        lVar18 = *(long *)(lVar19 + 0x38);
        if (lVar18 == 0) {
          FUN_00d59478(lVar19);
          lVar18 = *(long *)(lVar19 + 0x38);
        }
        lVar18 = *(long *)(lVar18 + 0x10);
        if ((*(byte *)(lVar18 + 0x132) & 1) == 0) {
          lVar18 = FUN_00d5941c();
        }
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar18 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
        bVar5 = *(byte *)(lVar18 + 0x132);
        puVar27 = (undefined8 *)puVar10;
        puVar9 = (undefined8 *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<ManagedWebSocket_<WaitForServerToCloseConnectionAsync>d__63>__
        ;
joined_r0x01439c94:
        if ((bVar5 & 1) == 0) {
          lVar18 = FUN_00d5941c();
        }
        FUN_013f38b0(*puVar9,**(undefined8 **)(lVar18 + 0xb8),0);
      }
    }
  }
  else if (3 < *(int *)(unaff_x20 + 0x10)) {
    lVar19 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
    lVar18 = *(long *)(lVar19 + 0x38);
    if (lVar18 == 0) {
      FUN_00d59478(lVar19);
      lVar18 = *(long *)(lVar19 + 0x38);
    }
    lVar18 = *(long *)(lVar18 + 0x10);
    if ((*(byte *)(lVar18 + 0x132) & 1) == 0) {
      lVar18 = FUN_00d5941c();
    }
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar18 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
    bVar5 = *(byte *)(lVar18 + 0x132);
    puVar9 = (undefined8 *)System_Net_TlsStream_TypeInfo;
    goto joined_r0x01439c94;
  }
  lVar18 = thunk_FUN_00d62348(*puVar27);
  puVar10 = PTR_DAT_033f1c00;
  if (lVar18 != 0) {
    FUN_017b46ec(lVar18,0);
    FUN_010b0550(plVar17,lVar18,*(undefined8 *)puVar10);
    puVar10 = System_Threading_Timer_TimerComparer_TypeInfo;
    uVar4 = 0x80000000;
    if (SQRT(fVar34) != INFINITY) {
      uVar4 = (int)SQRT(fVar34);
    }
    if (*(char *)(unaff_x20 + 0x14) == '\0') {
      uVar25 = uVar4;
      uVar16 = uVar4;
      if ((int)uVar4 < (int)uVar24) {
        if (DAT_03775e60 == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_03775e60 = '\x01';
        }
        fVar30 = fVar34 / (float)(int)uVar24;
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar16 = 0x80000000;
        if ((float)(int)fVar30 != INFINITY) {
          uVar16 = (int)fVar30;
        }
        uVar25 = uVar24;
        if ((int)uVar16 <= (int)uVar22) {
          uVar16 = uVar22;
        }
      }
      if ((int)uVar4 < (int)uVar22) {
        if (DAT_03775e60 == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_03775e60 = '\x01';
        }
        fVar30 = fVar34 / (float)(int)uVar22;
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar25 = 0x80000000;
        if ((float)(int)fVar30 != INFINITY) {
          uVar25 = (int)fVar30;
        }
        uVar16 = uVar22;
        if ((int)uVar25 <= (int)uVar24) {
          uVar25 = uVar24;
        }
      }
    }
    else {
      uVar16 = FUN_01435de0(uVar4);
      uVar25 = uVar16;
      if ((int)uVar16 < (int)uVar24) {
        fVar30 = logf((float)(int)uVar16);
        fVar30 = exp2f((float)(int)(fVar30 / DAT_0293f7bc));
        uVar25 = 0x80000000;
        if (fVar30 != INFINITY) {
          uVar25 = (int)fVar30;
        }
        if (uVar25 < 3) {
          uVar25 = 2;
        }
      }
      if ((int)uVar16 < (int)uVar22) {
        fVar30 = logf((float)(int)uVar16);
        fVar30 = exp2f((float)(int)(fVar30 / DAT_0293f7bc));
        uVar16 = 0x80000000;
        if (fVar30 != INFINITY) {
          uVar16 = (int)fVar30;
        }
        if (uVar16 < 3) {
          uVar16 = 2;
        }
      }
    }
    puVar11 = Method_UnityEngine_InputSystem_LowLevel_ActionEvent_set_interactionIndex__;
    puVar10 = 
    Method_UnityEngine_Pool_CollectionPool<List<IEventSystemHandler>,_IEventSystemHandler>_Get__;
    uVar24 = 4;
    if (uVar25 != 0) {
      uVar24 = uVar25;
    }
    uStack00000000000000e8 = 4;
    if (uVar16 != 0) {
      uStack00000000000000e8 = uVar16;
    }
    iVar33 = uVar4 * 1000;
    iVar31 = -0x80000000;
    if ((float)(int)uVar24 * DAT_028aa29c != INFINITY) {
      iVar31 = (int)((float)(int)uVar24 * DAT_028aa29c);
    }
    iVar3 = -0x80000000;
    if ((float)(int)uStack00000000000000e8 * DAT_028aa29c != INFINITY) {
      iVar3 = (int)((float)(int)uStack00000000000000e8 * DAT_028aa29c);
    }
    if (iVar31 == 0) {
      iVar31 = 1;
    }
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    uStack00000000000000ec = uVar24;
    if ((int)uStack00000000000000e8 < iVar33) {
      do {
        iVar26 = 0;
        uStack00000000000000ec = uVar24;
        while ((int)uStack00000000000000ec < iVar33) {
          lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar11);
          if (lVar18 == 0) goto LAB_0143af6c;
          FUN_017b46ec(lVar18,0);
          if (4 < *(int *)(unaff_x20 + 0x10)) {
            uVar20 = FUN_0176eb1c(&stack0x000000e8,0);
            uVar21 = FUN_0176eb1c((long)&stack0x000000e8 + 4,0);
            uVar20 = FUN_0160073c(*(undefined8 *)puVar10,uVar20,*(undefined8 *)PTR_DAT_033f5960,
                                  uVar21,0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02660dac(uVar20,0);
          }
          uVar29 = FUN_01437050(fVar34);
          if ((uVar29 & 1) != 0) {
            lVar19 = *(long *)(unaff_x20 + 0x18);
            if (lVar19 != 0) {
              fVar30 = 0.0;
              if (*(char *)(lVar18 + 0x28) != '\0') {
                fVar30 = 1.0;
              }
              if (*(char *)(unaff_x20 + 0x14) == '\0') {
                fVar32 = 0.0;
                if (*(char *)(lVar19 + 0x28) != '\0') {
                  fVar32 = 1.0;
                }
                fVar30 = fVar30 + *(float *)(lVar18 + 0x30) +
                                  *(float *)(lVar18 + 0x2c) + *(float *)(lVar18 + 0x2c);
                fVar32 = fVar32 + *(float *)(lVar19 + 0x30) +
                                  *(float *)(lVar19 + 0x2c) + *(float *)(lVar19 + 0x2c);
              }
              else {
                fVar30 = fVar30 + fVar30 + *(float *)(lVar18 + 0x2c);
                fVar32 = 0.0;
                if (*(char *)(lVar19 + 0x28) != '\0') {
                  fVar32 = 2.0;
                }
                fVar32 = *(float *)(lVar19 + 0x2c) + fVar32;
              }
              if (fVar30 <= fVar32) break;
            }
            *(long *)(unaff_x20 + 0x18) = lVar18;
            break;
          }
          if (((int)uStack00000000000000ec < (int)unaff_w23) &&
             (*(char *)(unaff_x20 + 0x14) != '\0')) {
            uStack00000000000000ec = uStack00000000000000ec << 1;
          }
          else {
            uVar22 = uStack00000000000000ec + iVar31;
            bVar8 = (int)unaff_w23 <= (int)uStack00000000000000ec;
            uStack00000000000000ec = unaff_w23;
            if ((int)uVar22 <= (int)unaff_w23 || bVar8) {
              uStack00000000000000ec = uVar22;
            }
          }
          iVar26 = iVar26 + 1;
          if (4 < *(int *)(unaff_x20 + 0x10)) {
            uVar20 = FUN_0176eb1c(&stack0x000000e8,0);
            uVar21 = FUN_0176eb1c((long)&stack0x000000e8 + 4,0);
            uVar20 = FUN_0160073c(*(undefined8 *)
                                   Method_System_Reflection_Emit_EnumBuilder_GetMethodImpl__,uVar20,
                                  *(undefined8 *)PTR_DAT_033f5960,uVar21,0);
            lVar19 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
            lVar18 = *(long *)(lVar19 + 0x38);
            if (lVar18 == 0) {
              FUN_00d59478(lVar19);
              lVar18 = *(long *)(lVar19 + 0x38);
            }
            lVar18 = *(long *)(lVar18 + 0x10);
            if ((*(byte *)(lVar18 + 0x132) & 1) == 0) {
              lVar18 = FUN_00d5941c();
            }
            if (*(int *)(lVar18 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar18 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
            if ((*(byte *)(lVar18 + 0x132) & 1) == 0) {
              lVar18 = FUN_00d5941c();
            }
            FUN_013f38b0(uVar20,**(undefined8 **)(lVar18 + 0xb8),0);
          }
        }
        if (((int)uStack00000000000000e8 < (int)in_stack_00000080._4_4_) &&
           (*(char *)(unaff_x20 + 0x14) != '\0')) {
          uStack00000000000000e8 = uStack00000000000000e8 << 1;
        }
        else {
          uVar22 = uStack00000000000000e8 + iVar3;
          bVar8 = (int)in_stack_00000080._4_4_ <= (int)uStack00000000000000e8;
          uStack00000000000000e8 = in_stack_00000080._4_4_;
          if ((int)uVar22 <= (int)in_stack_00000080._4_4_ || bVar8) {
            uStack00000000000000e8 = uVar22;
          }
        }
        if (3 < *(int *)(unaff_x20 + 0x10)) {
          uVar20 = FUN_0176eb1c(&stack0x000000e8,0);
          uVar21 = FUN_0176eb1c((long)&stack0x000000e8 + 4,0);
          uVar20 = FUN_0160073c(*(undefined8 *)Method_UnityEngine_Component_GetComponent<ARPlane>__,
                                uVar20,*(undefined8 *)PTR_DAT_033f5960,uVar21,0);
          lVar19 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
          lVar18 = *(long *)(lVar19 + 0x38);
          if (lVar18 == 0) {
            FUN_00d59478(lVar19);
            lVar18 = *(long *)(lVar19 + 0x38);
          }
          lVar18 = *(long *)(lVar18 + 0x10);
          if ((*(byte *)(lVar18 + 0x132) & 1) == 0) {
            lVar18 = FUN_00d5941c();
          }
          if (*(int *)(lVar18 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar18 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
          if ((*(byte *)(lVar18 + 0x132) & 1) == 0) {
            lVar18 = FUN_00d5941c();
          }
          FUN_013f38b0(uVar20,**(undefined8 **)(lVar18 + 0xb8),0);
        }
      } while ((0 < iVar26) && ((int)uStack00000000000000e8 < iVar33));
    }
    lVar18 = *(long *)(unaff_x20 + 0x18);
    if (lVar18 == 0) {
      return 0;
    }
    _iStack00000000000000e0 = 0;
    uVar24 = *(uint *)(lVar18 + 0x10);
    if (*(char *)(unaff_x20 + 0x14) == '\0') {
      if ((int)unaff_w23 <= (int)uVar24) {
        uVar24 = unaff_w23;
      }
      uVar22 = *(uint *)(lVar18 + 0x14);
      if ((int)in_stack_00000080._4_4_ <= (int)*(uint *)(lVar18 + 0x14)) {
        uVar22 = in_stack_00000080._4_4_;
      }
      _iStack00000000000000e0 = CONCAT44(uVar24,uVar22);
    }
    else {
      fVar30 = logf((float)(int)uVar24);
      fVar34 = DAT_0293f7bc;
      fVar30 = exp2f((float)(int)(fVar30 / DAT_0293f7bc));
      uVar24 = 0x80000000;
      if (fVar30 != INFINITY) {
        uVar24 = (int)fVar30;
      }
      if (uVar24 < 3) {
        uVar24 = 2;
      }
      if ((int)unaff_w23 <= (int)uVar24) {
        uVar24 = unaff_w23;
      }
      uStack00000000000000e4 = uVar24;
      fVar30 = logf((float)*(int *)(lVar18 + 0x14));
      fVar34 = exp2f((float)(int)(fVar30 / fVar34));
      uVar4 = 0x80000000;
      if (fVar34 != INFINITY) {
        uVar4 = (int)fVar34;
      }
      if (uVar4 < 3) {
        uVar4 = 2;
      }
      if ((int)in_stack_00000080._4_4_ <= (int)uVar4) {
        uVar4 = in_stack_00000080._4_4_;
      }
      uVar25 = uVar24;
      if ((int)uVar24 < 0) {
        uVar25 = uVar24 + 1;
      }
      uVar22 = (int)uVar25 >> 1;
      if ((int)uVar25 >> 1 <= (int)uVar4) {
        uVar22 = uVar4;
      }
      uVar4 = uVar22;
      if ((int)uVar22 < 0) {
        uVar4 = uVar22 + 1;
      }
      uVar4 = (int)uVar4 >> 1;
      _iStack00000000000000e0 = CONCAT44(uStack00000000000000e4,uVar22);
      if ((int)uVar24 < (int)uVar4) {
        _iStack00000000000000e0 = CONCAT44(uVar4,uVar22);
        uVar24 = uVar4;
      }
    }
    *(uint *)(lVar18 + 0x18) = uVar24;
    *(uint *)(lVar18 + 0x1c) = uVar22;
    if (3 < *(int *)(unaff_x20 + 0x10)) {
      plVar17 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,0xe);
      puVar10 = PTR_DAT_033f3760;
      if (plVar17 == (long *)0x0) goto LAB_0143af6c;
      if ((*(long *)PTR_DAT_033f3760 != 0) &&
         (lVar18 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f3760,*(undefined8 *)(*plVar17 + 0x40)),
         lVar18 == 0)) {
LAB_0143af74:
        uVar20 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar20,0);
      }
      if ((int)plVar17[3] == 0) goto LAB_0143af70;
      plVar17[4] = *(long *)puVar10;
      lVar18 = FUN_0176eb1c((long)&stack0x000000e0 + 4,0);
      if ((lVar18 != 0) &&
         (lVar19 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar17 + 0x40)), lVar19 == 0))
      goto LAB_0143af74;
      puVar10 = System_Action<CwInputManager_Finger>_TypeInfo;
      uVar24 = *(uint *)(plVar17 + 3);
      if (uVar24 < 2) {
LAB_0143af70:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar17[5] = lVar18;
      lVar18 = *(long *)puVar10;
      if (lVar18 != 0) {
        lVar18 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar17 + 0x40));
        if (lVar18 == 0) goto LAB_0143af74;
        uVar24 = *(uint *)(plVar17 + 3);
      }
      if (uVar24 < 3) goto LAB_0143af70;
      plVar17[6] = *(long *)puVar10;
      lVar18 = FUN_0176eb1c(&stack0x000000e0,0);
      if ((lVar18 != 0) &&
         (lVar19 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar17 + 0x40)), lVar19 == 0))
      goto LAB_0143af74;
      uVar24 = *(uint *)(plVar17 + 3);
      if (uVar24 < 4) goto LAB_0143af70;
      plVar17[7] = lVar18;
      if (*(long *)PTR_DAT_033f5960 != 0) {
        lVar18 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f5960,*(undefined8 *)(*plVar17 + 0x40));
        if (lVar18 == 0) goto LAB_0143af74;
        uVar24 = *(uint *)(plVar17 + 3);
      }
      if (uVar24 < 5) goto LAB_0143af70;
      plVar17[8] = *(long *)PTR_DAT_033f5960;
      if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_0143af6c;
      lVar18 = FUN_0176eb1c(*(long *)(unaff_x20 + 0x18) + 0x10,0);
      if ((lVar18 != 0) &&
         (lVar19 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar17 + 0x40)), lVar19 == 0))
      goto LAB_0143af74;
      uVar24 = *(uint *)(plVar17 + 3);
      if (uVar24 < 6) goto LAB_0143af70;
      plVar17[9] = lVar18;
      if (*(long *)Method_MedleyBossPushPhase_StartPhase__ != 0) {
        lVar18 = thunk_FUN_00d6225c(*(long *)Method_MedleyBossPushPhase_StartPhase__,
                                    *(undefined8 *)(*plVar17 + 0x40));
        if (lVar18 == 0) goto LAB_0143af74;
        uVar24 = *(uint *)(plVar17 + 3);
      }
      if (uVar24 < 7) goto LAB_0143af70;
      plVar17[10] = *(long *)Method_MedleyBossPushPhase_StartPhase__;
      if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_0143af6c;
      lVar18 = FUN_0176eb1c(*(long *)(unaff_x20 + 0x18) + 0x14,0);
      if ((lVar18 != 0) &&
         (lVar19 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar17 + 0x40)), lVar19 == 0))
      goto LAB_0143af74;
      puVar10 = StringLiteral_10387;
      uVar24 = *(uint *)(plVar17 + 3);
      if (uVar24 < 8) goto LAB_0143af70;
      plVar17[0xb] = lVar18;
      lVar18 = *(long *)puVar10;
      if (lVar18 != 0) {
        lVar18 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar17 + 0x40));
        if (lVar18 == 0) goto LAB_0143af74;
        uVar24 = *(uint *)(plVar17 + 3);
      }
      if (uVar24 < 9) goto LAB_0143af70;
      plVar17[0xc] = *(long *)puVar10;
      if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_0143af6c;
      lVar18 = FUN_017840ac(*(long *)(unaff_x20 + 0x18) + 0x2c,0);
      if ((lVar18 != 0) &&
         (lVar19 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar17 + 0x40)), lVar19 == 0))
      goto LAB_0143af74;
      puVar10 = 
      Method_System_Collections_Generic_List<StandardVelocityCalculator_SamplePoseData>__ctor__;
      uVar24 = *(uint *)(plVar17 + 3);
      if (uVar24 < 10) goto LAB_0143af70;
      plVar17[0xd] = lVar18;
      lVar18 = *(long *)puVar10;
      if (lVar18 != 0) {
        lVar18 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar17 + 0x40));
        if (lVar18 == 0) goto LAB_0143af74;
        uVar24 = *(uint *)(plVar17 + 3);
      }
      if (uVar24 < 0xb) goto LAB_0143af70;
      plVar17[0xe] = *(long *)puVar10;
      if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_0143af6c;
      lVar18 = FUN_017840ac(*(long *)(unaff_x20 + 0x18) + 0x30,0);
      if ((lVar18 != 0) &&
         (lVar19 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar17 + 0x40)), lVar19 == 0))
      goto LAB_0143af74;
      puVar10 = System_Action<InteractionGroupRegisteredEventArgs>_TypeInfo;
      uVar24 = *(uint *)(plVar17 + 3);
      if (uVar24 < 0xc) goto LAB_0143af70;
      plVar17[0xf] = lVar18;
      lVar18 = *(long *)puVar10;
      if (lVar18 != 0) {
        lVar18 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar17 + 0x40));
        if (lVar18 == 0) goto LAB_0143af74;
        uVar24 = *(uint *)(plVar17 + 3);
      }
      if (uVar24 < 0xd) goto LAB_0143af70;
      plVar17[0x10] = *(long *)puVar10;
      lVar18 = *(long *)(unaff_x20 + 0x18);
      if (lVar18 == 0) goto LAB_0143af6c;
      if (*(int *)(*(long *)StringLiteral_9958 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar18 = FUN_016f5f58(lVar18 + 0x28,0);
      if ((lVar18 != 0) &&
         (lVar19 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar17 + 0x40)), lVar19 == 0))
      goto LAB_0143af74;
      if (*(uint *)(plVar17 + 3) < 0xe) goto LAB_0143af70;
      plVar17[0x11] = lVar18;
      uVar20 = FUN_01600844(plVar17,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02660dac(uVar20,0);
    }
    lVar18 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3ef8);
    if (lVar18 != 0) {
      FUN_01320e50(lVar18,*(undefined8 *)StringLiteral_8754);
      puVar10 = Method_System_Numerics_BigIntegerCalculator_Multiply__;
      if (*(long *)(unaff_x20 + 0x18) != 0) {
        FUN_01436c38(*(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x20),lVar18);
        lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar10);
        puVar10 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_s16__;
        if (lVar19 != 0) {
          FUN_017b46ec(lVar19,0);
          FUN_01324f34(lVar18,lVar19,*(undefined8 *)puVar10);
          lVar19 = *(long *)(unaff_x20 + 0x18);
          if ((lVar19 != 0) && (unaff_x25 != 0)) {
            iVar33 = *(int *)(lVar19 + 0x10);
            iVar31 = *(int *)(lVar19 + 0x14);
            FUN_0132138c(unaff_x25,0,&stack0x00000088,*(undefined8 *)StringLiteral_4419);
            uVar29 = FUN_01435f44((float)iVar33,(float)iVar31);
            puVar11 = Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__;
            puVar10 = System_Runtime_Remoting_Messaging_ServerContextTerminatorSink_TypeInfo;
            if ((in_stack_00000060._4_4_ < 0xb) && ((uVar29 & 1) != 0)) {
              if (3 < *(int *)(unaff_x20 + 0x10)) {
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_02660dac(*(undefined8 *)puVar10,0);
              }
              lVar19 = FUN_014394d4();
            }
            else {
              uVar20 = FUN_01325140(unaff_x25,*(undefined8 *)StringLiteral_9168);
              lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar11);
              puVar11 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
              puVar10 = Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__;
              if (lVar19 == 0) goto LAB_0143af6c;
              FUN_017b46ec(lVar19,0);
              *(undefined8 *)(lVar19 + 0x28) = uVar20;
              uVar20 = FUN_00da4fb8(*(undefined8 *)puVar10,*(undefined4 *)(lVar18 + 0x18));
              *(undefined8 *)(lVar19 + 0x20) = uVar20;
              uVar20 = FUN_00da4fb8(*(undefined8 *)puVar11,*(undefined4 *)(lVar18 + 0x18));
              fVar34 = fStack00000000000000d8;
              *(undefined8 *)(lVar19 + 0x30) = uVar20;
              *(uint *)(lVar19 + 0x10) = uStack00000000000000e4;
              *(undefined8 *)(lVar19 + 0x18) = 0xffffffffffffffff;
              *(int *)(lVar19 + 0x14) = iStack00000000000000e0;
              puVar14 = StringLiteral_9909;
              puVar13 = 
              Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__;
              puVar12 = Method_System_Collections_Generic_List<Edge>_ToArray__;
              puVar11 = System_Xml_Serialization_XmlCustomFormatter_TypeInfo;
              puVar10 = System_Data_AutoIncrementBigInteger_TypeInfo;
              in_stack_000000c8._4_4_ = 0;
              if (0 < *(int *)(lVar18 + 0x18)) {
                fVar30 = fStack00000000000000d8 + fStack00000000000000d8;
                do {
                  FUN_0132138c(lVar18,in_stack_000000c8._4_4_,&stack0x00000088,
                               *(undefined8 *)puVar10);
                  uVar24 = in_stack_000000c8._4_4_;
                  uVar29 = _fStack0000000000000088;
                  if (_fStack0000000000000088 == 0) goto LAB_0143af6c;
                  piVar1 = (int *)(_fStack0000000000000088 + 0x1c);
                  piVar6 = (int *)(_fStack0000000000000088 + 0x20);
                  piVar2 = (int *)(_fStack0000000000000088 + 0x14);
                  piVar7 = (int *)(_fStack0000000000000088 + 0x18);
                  lVar23 = *(long *)(lVar19 + 0x20);
                  lVar28 = (long)(int)in_stack_000000c8._4_4_;
                  _fStack0000000000000088 = 0;
                  _uStack0000000000000090 = 0;
                  FUN_0268834c(fStack00000000000000dc +
                               (float)*piVar1 / (float)(int)uStack00000000000000e4,
                               fVar34 + (float)*piVar6 / (float)iStack00000000000000e0,
                               (float)*piVar2 / (float)(int)uStack00000000000000e4 -
                               (fStack00000000000000dc + fStack00000000000000dc),
                               (float)*piVar7 / (float)iStack00000000000000e0 - fVar30,
                               &stack0x00000088,0);
                  if (lVar23 == 0) goto LAB_0143af6c;
                  if (*(uint *)(lVar23 + 0x18) <= uVar24) goto LAB_0143af70;
                  lVar23 = lVar23 + lVar28 * 0x10;
                  *(float *)(lVar23 + 0x20) = fStack0000000000000088;
                  *(float *)(lVar23 + 0x24) = fStack000000000000008c;
                  *(undefined4 *)(lVar23 + 0x28) = uStack0000000000000090;
                  *(undefined4 *)(lVar23 + 0x2c) = uStack0000000000000094;
                  uStack00000000000000b8 = fStack0000000000000088;
                  uStack00000000000000bc = fStack000000000000008c;
                  uStack00000000000000c0 = uStack0000000000000090;
                  uStack00000000000000c4 = uStack0000000000000094;
                  lVar23 = *(long *)(lVar19 + 0x30);
                  if (lVar23 == 0) goto LAB_0143af6c;
                  if (*(uint *)(lVar23 + 0x18) <= in_stack_000000c8._4_4_) goto LAB_0143af70;
                  *(undefined4 *)(lVar23 + (long)(int)in_stack_000000c8._4_4_ * 4 + 0x20) =
                       *(undefined4 *)(uVar29 + 0x10);
                  if (3 < *(int *)(unaff_x20 + 0x10)) {
                    plVar17 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,0x10);
                    if (plVar17 == (long *)0x0) goto LAB_0143af6c;
                    if ((*(long *)Method_UnityEngine_Component_GetComponent<NavMeshSurface>__ != 0)
                       && (lVar23 = thunk_FUN_00d6225c(*(long *)
                                                  Method_UnityEngine_Component_GetComponent<NavMeshSurface>__
                                                  ,*(undefined8 *)(*plVar17 + 0x40)), lVar23 == 0))
                    goto LAB_0143af74;
                    if ((int)plVar17[3] == 0) goto LAB_0143af70;
                    plVar17[4] = *(long *)
                                  Method_UnityEngine_Component_GetComponent<NavMeshSurface>__;
                    lVar23 = FUN_0176eb1c((long)&stack0x000000c8 + 4,0);
                    if ((lVar23 != 0) &&
                       (lVar28 = thunk_FUN_00d6225c(lVar23,*(undefined8 *)(*plVar17 + 0x40)),
                       lVar28 == 0)) goto LAB_0143af74;
                    uVar24 = *(uint *)(plVar17 + 3);
                    if (uVar24 < 2) goto LAB_0143af70;
                    plVar17[5] = lVar23;
                    if (*(long *)System_Collections_Generic_List<Link>_TypeInfo != 0) {
                      lVar23 = thunk_FUN_00d6225c(*(long *)
                                                  System_Collections_Generic_List<Link>_TypeInfo,
                                                  *(undefined8 *)(*plVar17 + 0x40));
                      if (lVar23 == 0) goto LAB_0143af74;
                      uVar24 = *(uint *)(plVar17 + 3);
                    }
                    if (uVar24 < 3) goto LAB_0143af70;
                    plVar17[6] = *(long *)System_Collections_Generic_List<Link>_TypeInfo;
                    lVar23 = FUN_0176eb1c((undefined4 *)(uVar29 + 0x10),0);
                    if ((lVar23 != 0) &&
                       (lVar28 = thunk_FUN_00d6225c(lVar23,*(undefined8 *)(*plVar17 + 0x40)),
                       lVar28 == 0)) goto LAB_0143af74;
                    uVar24 = *(uint *)(plVar17 + 3);
                    if (uVar24 < 4) goto LAB_0143af70;
                    plVar17[7] = lVar23;
                    lVar23 = *(long *)puVar11;
                    if (lVar23 != 0) {
                      lVar23 = thunk_FUN_00d6225c(lVar23,*(undefined8 *)(*plVar17 + 0x40));
                      if (lVar23 == 0) goto LAB_0143af74;
                      uVar24 = *(uint *)(plVar17 + 3);
                    }
                    if (uVar24 < 5) goto LAB_0143af70;
                    plVar17[8] = *(long *)puVar11;
                    fStack00000000000000b4 = (float)FUN_02688390(&stack0x000000b8,0);
                    fStack00000000000000b4 =
                         fStack00000000000000b4 * (float)(int)uStack00000000000000e4;
                    lVar23 = FUN_017840ac((long)&stack0x000000b0 + 4,0);
                    if ((lVar23 != 0) &&
                       (lVar28 = thunk_FUN_00d6225c(lVar23,*(undefined8 *)(*plVar17 + 0x40)),
                       lVar28 == 0)) goto LAB_0143af74;
                    uVar24 = *(uint *)(plVar17 + 3);
                    if (uVar24 < 6) goto LAB_0143af70;
                    plVar17[9] = lVar23;
                    lVar23 = *(long *)puVar14;
                    if (lVar23 != 0) {
                      lVar23 = thunk_FUN_00d6225c(lVar23,*(undefined8 *)(*plVar17 + 0x40));
                      if (lVar23 == 0) goto LAB_0143af74;
                      uVar24 = *(uint *)(plVar17 + 3);
                    }
                    if (uVar24 < 7) goto LAB_0143af70;
                    plVar17[10] = *(long *)puVar14;
                    fStack00000000000000b4 = (float)FUN_026883a0(&stack0x000000b8,0);
                    fStack00000000000000b4 = fStack00000000000000b4 * (float)iStack00000000000000e0;
                    lVar23 = FUN_017840ac((long)&stack0x000000b0 + 4,0);
                    if ((lVar23 != 0) &&
                       (lVar28 = thunk_FUN_00d6225c(lVar23,*(undefined8 *)(*plVar17 + 0x40)),
                       lVar28 == 0)) goto LAB_0143af74;
                    uVar24 = *(uint *)(plVar17 + 3);
                    if (uVar24 < 8) goto LAB_0143af70;
                    plVar17[0xb] = lVar23;
                    if (*(long *)PTR_DAT_033f5960 != 0) {
                      lVar23 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f5960,
                                                  *(undefined8 *)(*plVar17 + 0x40));
                      if (lVar23 == 0) goto LAB_0143af74;
                      uVar24 = *(uint *)(plVar17 + 3);
                    }
                    if (uVar24 < 9) goto LAB_0143af70;
                    plVar17[0xc] = *(long *)PTR_DAT_033f5960;
                    fStack00000000000000b4 = (float)FUN_026884c4(&stack0x000000b8,0);
                    fStack00000000000000b4 =
                         fStack00000000000000b4 * (float)(int)uStack00000000000000e4;
                    lVar23 = FUN_017840ac((long)&stack0x000000b0 + 4,0);
                    if ((lVar23 != 0) &&
                       (lVar28 = thunk_FUN_00d6225c(lVar23,*(undefined8 *)(*plVar17 + 0x40)),
                       lVar28 == 0)) goto LAB_0143af74;
                    uVar24 = *(uint *)(plVar17 + 3);
                    if (uVar24 < 10) goto LAB_0143af70;
                    plVar17[0xd] = lVar23;
                    if (*(long *)Method_MedleyBossPushPhase_StartPhase__ != 0) {
                      lVar23 = thunk_FUN_00d6225c(*(long *)Method_MedleyBossPushPhase_StartPhase__,
                                                  *(undefined8 *)(*plVar17 + 0x40));
                      if (lVar23 == 0) goto LAB_0143af74;
                      uVar24 = *(uint *)(plVar17 + 3);
                    }
                    if (uVar24 < 0xb) goto LAB_0143af70;
                    plVar17[0xe] = *(long *)Method_MedleyBossPushPhase_StartPhase__;
                    fStack00000000000000b4 = (float)FUN_026884d4(&stack0x000000b8,0);
                    fStack00000000000000b4 = fStack00000000000000b4 * (float)iStack00000000000000e0;
                    lVar23 = FUN_017840ac((long)&stack0x000000b0 + 4,0);
                    if ((lVar23 != 0) &&
                       (lVar28 = thunk_FUN_00d6225c(lVar23,*(undefined8 *)(*plVar17 + 0x40)),
                       lVar28 == 0)) goto LAB_0143af74;
                    uVar24 = *(uint *)(plVar17 + 3);
                    if (uVar24 < 0xc) goto LAB_0143af70;
                    plVar17[0xf] = lVar23;
                    lVar23 = *(long *)puVar12;
                    if (lVar23 != 0) {
                      lVar23 = thunk_FUN_00d6225c(lVar23,*(undefined8 *)(*plVar17 + 0x40));
                      if (lVar23 == 0) goto LAB_0143af74;
                      uVar24 = *(uint *)(plVar17 + 3);
                    }
                    if (uVar24 < 0xd) goto LAB_0143af70;
                    plVar17[0x10] = *(long *)puVar12;
                    FUN_0132138c(unaff_x25,in_stack_000000c8._4_4_,&stack0x00000088,
                                 *(undefined8 *)StringLiteral_4419);
                    uStack00000000000000b0 = (uint)(_fStack0000000000000088 >> 0x1f) & 0xfffffffe;
                    lVar23 = FUN_0176eb1c(&stack0x000000b0,0);
                    if ((lVar23 != 0) &&
                       (lVar28 = thunk_FUN_00d6225c(lVar23,*(undefined8 *)(*plVar17 + 0x40)),
                       lVar28 == 0)) goto LAB_0143af74;
                    uVar24 = *(uint *)(plVar17 + 3);
                    if (uVar24 < 0xe) goto LAB_0143af70;
                    plVar17[0x11] = lVar23;
                    lVar23 = *(long *)puVar13;
                    if (lVar23 != 0) {
                      lVar23 = thunk_FUN_00d6225c(lVar23,*(undefined8 *)(*plVar17 + 0x40));
                      if (lVar23 == 0) goto LAB_0143af74;
                      uVar24 = *(uint *)(plVar17 + 3);
                    }
                    if (uVar24 < 0xf) goto LAB_0143af70;
                    plVar17[0x12] = *(long *)puVar13;
                    FUN_0132138c(unaff_x25,in_stack_000000c8._4_4_,&stack0x00000088,
                                 *(undefined8 *)StringLiteral_4419);
                    uStack00000000000000b0 = (int)fStack0000000000000088 << 1;
                    lVar23 = FUN_0176eb1c(&stack0x000000b0,0);
                    if ((lVar23 != 0) &&
                       (lVar28 = thunk_FUN_00d6225c(lVar23,*(undefined8 *)(*plVar17 + 0x40)),
                       lVar28 == 0)) goto LAB_0143af74;
                    if (*(uint *)(plVar17 + 3) < 0x10) goto LAB_0143af70;
                    plVar17[0x13] = lVar23;
                    uVar20 = FUN_01600844(plVar17,0);
                    lVar28 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
                    lVar23 = *(long *)(lVar28 + 0x38);
                    if (lVar23 == 0) {
                      FUN_00d59478(lVar28);
                      lVar23 = *(long *)(lVar28 + 0x38);
                    }
                    lVar23 = *(long *)(lVar23 + 0x10);
                    if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                      lVar23 = FUN_00d5941c();
                    }
                    if (*(int *)(lVar23 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar23 = *(long *)(*(long *)(lVar28 + 0x38) + 0x10);
                    if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                      lVar23 = FUN_00d5941c();
                    }
                    FUN_013f38b0(uVar20,**(undefined8 **)(lVar23 + 0xb8),0);
                  }
                  in_stack_000000c8._4_4_ = in_stack_000000c8._4_4_ + 1;
                } while ((int)in_stack_000000c8._4_4_ < *(int *)(lVar18 + 0x18));
              }
              FUN_014359a0(lVar19);
            }
            return lVar19;
          }
        }
      }
    }
  }
LAB_0143af6c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


