/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.ActionManagerFromInspector$$.ctor
ENTRY_POINT: 01439cb0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 135
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Meta_XR_ImmersiveDebugger_DebugInspectorManager_ActionManagerFromInspector___ctor(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  uint uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long *plVar18;
  uint unaff_w19;
  long lVar19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar20;
  uint uVar21;
  int iVar22;
  long lVar23;
  uint unaff_w23;
  long lVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  int iVar28;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  undefined8 in_stack_00000060;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  int iStack0000000000000088;
  undefined4 uStack000000000000008c;
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
  
  lVar14 = thunk_FUN_00d62348();
  if (lVar14 != 0) {
    FUN_017b46ec(lVar14,0);
    FUN_010b0550();
    puVar8 = System_Threading_Timer_TimerComparer_TypeInfo;
    uVar20 = 0x80000000;
    if (SQRT(unaff_s8) != INFINITY) {
      uVar20 = (int)SQRT(unaff_s8);
    }
    if (*(char *)(unaff_x20 + 0x14) == '\0') {
      uVar21 = uVar20;
      uVar13 = uVar20;
      if ((int)uVar20 < (int)unaff_w21) {
        if (DAT_03775e60 == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_03775e60 = '\x01';
        }
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar13 = 0x80000000;
        if ((float)(int)(unaff_s8 / unaff_s11) != INFINITY) {
          uVar13 = (int)(unaff_s8 / unaff_s11);
        }
        uVar21 = unaff_w21;
        if ((int)uVar13 <= (int)unaff_w19) {
          uVar13 = unaff_w19;
        }
      }
      if ((int)uVar20 < (int)unaff_w19) {
        if (DAT_03775e60 == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_03775e60 = '\x01';
        }
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = 0x80000000;
        if ((float)(int)(unaff_s8 / unaff_s9) != INFINITY) {
          uVar21 = (int)(unaff_s8 / unaff_s9);
        }
        uVar13 = unaff_w19;
        if ((int)uVar21 <= (int)unaff_w21) {
          uVar21 = unaff_w21;
        }
      }
    }
    else {
      uVar13 = FUN_01435de0(uVar20);
      uVar21 = uVar13;
      if ((int)uVar13 < (int)unaff_w21) {
        fVar25 = logf((float)(int)uVar13);
        fVar25 = exp2f((float)(int)(fVar25 / DAT_0293f7bc));
        uVar21 = 0x80000000;
        if (fVar25 != INFINITY) {
          uVar21 = (int)fVar25;
        }
        if (uVar21 < 3) {
          uVar21 = 2;
        }
      }
      if ((int)uVar13 < (int)unaff_w19) {
        fVar25 = logf((float)(int)uVar13);
        fVar25 = exp2f((float)(int)(fVar25 / DAT_0293f7bc));
        uVar13 = 0x80000000;
        if (fVar25 != INFINITY) {
          uVar13 = (int)fVar25;
        }
        if (uVar13 < 3) {
          uVar13 = 2;
        }
      }
    }
    puVar9 = Method_UnityEngine_InputSystem_LowLevel_ActionEvent_set_interactionIndex__;
    puVar8 = 
    Method_UnityEngine_Pool_CollectionPool<List<IEventSystemHandler>,_IEventSystemHandler>_Get__;
    uVar3 = 4;
    if (uVar21 != 0) {
      uVar3 = uVar21;
    }
    uStack00000000000000e8 = 4;
    if (uVar13 != 0) {
      uStack00000000000000e8 = uVar13;
    }
    iVar28 = uVar20 * 1000;
    iVar27 = -0x80000000;
    if ((float)(int)uVar3 * DAT_028aa29c != INFINITY) {
      iVar27 = (int)((float)(int)uVar3 * DAT_028aa29c);
    }
    iVar4 = -0x80000000;
    if ((float)(int)uStack00000000000000e8 * DAT_028aa29c != INFINITY) {
      iVar4 = (int)((float)(int)uStack00000000000000e8 * DAT_028aa29c);
    }
    if (iVar27 == 0) {
      iVar27 = 1;
    }
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    uStack00000000000000ec = uVar3;
    if ((int)uStack00000000000000e8 < iVar28) {
      do {
        iVar22 = 0;
        uStack00000000000000ec = uVar3;
        while ((int)uStack00000000000000ec < iVar28) {
          lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar9);
          if (lVar14 == 0) goto LAB_0143af6c;
          FUN_017b46ec(lVar14,0);
          if (4 < *(int *)(unaff_x20 + 0x10)) {
            uVar15 = FUN_0176eb1c(&stack0x000000e8,0);
            uVar16 = FUN_0176eb1c((long)&stack0x000000e8 + 4,0);
            uVar15 = FUN_0160073c(*(undefined8 *)puVar8,uVar15,*(undefined8 *)PTR_DAT_033f5960,
                                  uVar16,0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02660dac(uVar15,0);
          }
          uVar17 = FUN_01437050();
          if ((uVar17 & 1) != 0) {
            lVar24 = *(long *)(unaff_x20 + 0x18);
            if (lVar24 != 0) {
              fVar25 = 0.0;
              if (*(char *)(lVar14 + 0x28) != '\0') {
                fVar25 = 1.0;
              }
              if (*(char *)(unaff_x20 + 0x14) == '\0') {
                fVar26 = 0.0;
                if (*(char *)(lVar24 + 0x28) != '\0') {
                  fVar26 = 1.0;
                }
                fVar25 = fVar25 + *(float *)(lVar14 + 0x30) +
                                  *(float *)(lVar14 + 0x2c) + *(float *)(lVar14 + 0x2c);
                fVar26 = fVar26 + *(float *)(lVar24 + 0x30) +
                                  *(float *)(lVar24 + 0x2c) + *(float *)(lVar24 + 0x2c);
              }
              else {
                fVar25 = fVar25 + fVar25 + *(float *)(lVar14 + 0x2c);
                fVar26 = 0.0;
                if (*(char *)(lVar24 + 0x28) != '\0') {
                  fVar26 = unaff_s10;
                }
                fVar26 = *(float *)(lVar24 + 0x2c) + fVar26;
              }
              if (fVar25 <= fVar26) break;
            }
            *(long *)(unaff_x20 + 0x18) = lVar14;
            break;
          }
          if (((int)uStack00000000000000ec < (int)unaff_w23) &&
             (*(char *)(unaff_x20 + 0x14) != '\0')) {
            uStack00000000000000ec = uStack00000000000000ec << 1;
          }
          else {
            uVar20 = uStack00000000000000ec + iVar27;
            bVar7 = (int)unaff_w23 <= (int)uStack00000000000000ec;
            uStack00000000000000ec = unaff_w23;
            if ((int)uVar20 <= (int)unaff_w23 || bVar7) {
              uStack00000000000000ec = uVar20;
            }
          }
          iVar22 = iVar22 + 1;
          if (4 < *(int *)(unaff_x20 + 0x10)) {
            uVar15 = FUN_0176eb1c(&stack0x000000e8,0);
            uVar16 = FUN_0176eb1c((long)&stack0x000000e8 + 4,0);
            uVar15 = FUN_0160073c(*(undefined8 *)
                                   Method_System_Reflection_Emit_EnumBuilder_GetMethodImpl__,uVar15,
                                  *(undefined8 *)PTR_DAT_033f5960,uVar16,0);
            lVar24 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
            lVar14 = *(long *)(lVar24 + 0x38);
            if (lVar14 == 0) {
              FUN_00d59478(lVar24);
              lVar14 = *(long *)(lVar24 + 0x38);
            }
            lVar14 = *(long *)(lVar14 + 0x10);
            if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
              lVar14 = FUN_00d5941c();
            }
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar14 = *(long *)(*(long *)(lVar24 + 0x38) + 0x10);
            if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
              lVar14 = FUN_00d5941c();
            }
            FUN_013f38b0(uVar15,**(undefined8 **)(lVar14 + 0xb8),0);
          }
        }
        if (((int)uStack00000000000000e8 < (int)in_stack_00000080._4_4_) &&
           (*(char *)(unaff_x20 + 0x14) != '\0')) {
          uStack00000000000000e8 = uStack00000000000000e8 << 1;
        }
        else {
          uVar20 = uStack00000000000000e8 + iVar4;
          bVar7 = (int)in_stack_00000080._4_4_ <= (int)uStack00000000000000e8;
          uStack00000000000000e8 = in_stack_00000080._4_4_;
          if ((int)uVar20 <= (int)in_stack_00000080._4_4_ || bVar7) {
            uStack00000000000000e8 = uVar20;
          }
        }
        if (3 < *(int *)(unaff_x20 + 0x10)) {
          uVar15 = FUN_0176eb1c(&stack0x000000e8,0);
          uVar16 = FUN_0176eb1c((long)&stack0x000000e8 + 4,0);
          uVar15 = FUN_0160073c(*(undefined8 *)Method_UnityEngine_Component_GetComponent<ARPlane>__,
                                uVar15,*(undefined8 *)PTR_DAT_033f5960,uVar16,0);
          lVar24 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
          lVar14 = *(long *)(lVar24 + 0x38);
          if (lVar14 == 0) {
            FUN_00d59478(lVar24);
            lVar14 = *(long *)(lVar24 + 0x38);
          }
          lVar14 = *(long *)(lVar14 + 0x10);
          if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
            lVar14 = FUN_00d5941c();
          }
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar14 = *(long *)(*(long *)(lVar24 + 0x38) + 0x10);
          if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
            lVar14 = FUN_00d5941c();
          }
          FUN_013f38b0(uVar15,**(undefined8 **)(lVar14 + 0xb8),0);
        }
      } while ((0 < iVar22) && ((int)uStack00000000000000e8 < iVar28));
    }
    lVar14 = *(long *)(unaff_x20 + 0x18);
    if (lVar14 == 0) {
      return 0;
    }
    _iStack00000000000000e0 = 0;
    uVar20 = *(uint *)(lVar14 + 0x10);
    if (*(char *)(unaff_x20 + 0x14) == '\0') {
      if ((int)unaff_w23 <= (int)uVar20) {
        uVar20 = unaff_w23;
      }
      uVar21 = *(uint *)(lVar14 + 0x14);
      if ((int)in_stack_00000080._4_4_ <= (int)*(uint *)(lVar14 + 0x14)) {
        uVar21 = in_stack_00000080._4_4_;
      }
      _iStack00000000000000e0 = CONCAT44(uVar20,uVar21);
    }
    else {
      fVar26 = logf((float)(int)uVar20);
      fVar25 = DAT_0293f7bc;
      fVar26 = exp2f((float)(int)(fVar26 / DAT_0293f7bc));
      uVar20 = 0x80000000;
      if (fVar26 != INFINITY) {
        uVar20 = (int)fVar26;
      }
      if (uVar20 < 3) {
        uVar20 = 2;
      }
      if ((int)unaff_w23 <= (int)uVar20) {
        uVar20 = unaff_w23;
      }
      uStack00000000000000e4 = uVar20;
      fVar26 = logf((float)*(int *)(lVar14 + 0x14));
      fVar25 = exp2f((float)(int)(fVar26 / fVar25));
      uVar13 = 0x80000000;
      if (fVar25 != INFINITY) {
        uVar13 = (int)fVar25;
      }
      if (uVar13 < 3) {
        uVar13 = 2;
      }
      if ((int)in_stack_00000080._4_4_ <= (int)uVar13) {
        uVar13 = in_stack_00000080._4_4_;
      }
      uVar3 = uVar20;
      if ((int)uVar20 < 0) {
        uVar3 = uVar20 + 1;
      }
      uVar21 = (int)uVar3 >> 1;
      if ((int)uVar3 >> 1 <= (int)uVar13) {
        uVar21 = uVar13;
      }
      uVar13 = uVar21;
      if ((int)uVar21 < 0) {
        uVar13 = uVar21 + 1;
      }
      uVar13 = (int)uVar13 >> 1;
      _iStack00000000000000e0 = CONCAT44(uStack00000000000000e4,uVar21);
      if ((int)uVar20 < (int)uVar13) {
        _iStack00000000000000e0 = CONCAT44(uVar13,uVar21);
        uVar20 = uVar13;
      }
    }
    *(uint *)(lVar14 + 0x18) = uVar20;
    *(uint *)(lVar14 + 0x1c) = uVar21;
    if (3 < *(int *)(unaff_x20 + 0x10)) {
      plVar18 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,0xe);
      puVar8 = PTR_DAT_033f3760;
      if (plVar18 == (long *)0x0) goto LAB_0143af6c;
      if ((*(long *)PTR_DAT_033f3760 != 0) &&
         (lVar14 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f3760,*(undefined8 *)(*plVar18 + 0x40)),
         lVar14 == 0)) {
LAB_0143af74:
        uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar15,0);
      }
      if ((int)plVar18[3] == 0) goto LAB_0143af70;
      plVar18[4] = *(long *)puVar8;
      lVar14 = FUN_0176eb1c((long)&stack0x000000e0 + 4,0);
      if ((lVar14 != 0) &&
         (lVar24 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar18 + 0x40)), lVar24 == 0))
      goto LAB_0143af74;
      puVar8 = System_Action<CwInputManager_Finger>_TypeInfo;
      uVar20 = *(uint *)(plVar18 + 3);
      if (uVar20 < 2) {
LAB_0143af70:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar18[5] = lVar14;
      lVar14 = *(long *)puVar8;
      if (lVar14 != 0) {
        lVar14 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar18 + 0x40));
        if (lVar14 == 0) goto LAB_0143af74;
        uVar20 = *(uint *)(plVar18 + 3);
      }
      if (uVar20 < 3) goto LAB_0143af70;
      plVar18[6] = *(long *)puVar8;
      lVar14 = FUN_0176eb1c(&stack0x000000e0,0);
      if ((lVar14 != 0) &&
         (lVar24 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar18 + 0x40)), lVar24 == 0))
      goto LAB_0143af74;
      uVar20 = *(uint *)(plVar18 + 3);
      if (uVar20 < 4) goto LAB_0143af70;
      plVar18[7] = lVar14;
      if (*(long *)PTR_DAT_033f5960 != 0) {
        lVar14 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f5960,*(undefined8 *)(*plVar18 + 0x40));
        if (lVar14 == 0) goto LAB_0143af74;
        uVar20 = *(uint *)(plVar18 + 3);
      }
      if (uVar20 < 5) goto LAB_0143af70;
      plVar18[8] = *(long *)PTR_DAT_033f5960;
      if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_0143af6c;
      lVar14 = FUN_0176eb1c(*(long *)(unaff_x20 + 0x18) + 0x10,0);
      if ((lVar14 != 0) &&
         (lVar24 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar18 + 0x40)), lVar24 == 0))
      goto LAB_0143af74;
      uVar20 = *(uint *)(plVar18 + 3);
      if (uVar20 < 6) goto LAB_0143af70;
      plVar18[9] = lVar14;
      if (*(long *)Method_MedleyBossPushPhase_StartPhase__ != 0) {
        lVar14 = thunk_FUN_00d6225c(*(long *)Method_MedleyBossPushPhase_StartPhase__,
                                    *(undefined8 *)(*plVar18 + 0x40));
        if (lVar14 == 0) goto LAB_0143af74;
        uVar20 = *(uint *)(plVar18 + 3);
      }
      if (uVar20 < 7) goto LAB_0143af70;
      plVar18[10] = *(long *)Method_MedleyBossPushPhase_StartPhase__;
      if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_0143af6c;
      lVar14 = FUN_0176eb1c(*(long *)(unaff_x20 + 0x18) + 0x14,0);
      if ((lVar14 != 0) &&
         (lVar24 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar18 + 0x40)), lVar24 == 0))
      goto LAB_0143af74;
      puVar8 = StringLiteral_10387;
      uVar20 = *(uint *)(plVar18 + 3);
      if (uVar20 < 8) goto LAB_0143af70;
      plVar18[0xb] = lVar14;
      lVar14 = *(long *)puVar8;
      if (lVar14 != 0) {
        lVar14 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar18 + 0x40));
        if (lVar14 == 0) goto LAB_0143af74;
        uVar20 = *(uint *)(plVar18 + 3);
      }
      if (uVar20 < 9) goto LAB_0143af70;
      plVar18[0xc] = *(long *)puVar8;
      if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_0143af6c;
      lVar14 = FUN_017840ac(*(long *)(unaff_x20 + 0x18) + 0x2c,0);
      if ((lVar14 != 0) &&
         (lVar24 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar18 + 0x40)), lVar24 == 0))
      goto LAB_0143af74;
      puVar8 = 
      Method_System_Collections_Generic_List<StandardVelocityCalculator_SamplePoseData>__ctor__;
      uVar20 = *(uint *)(plVar18 + 3);
      if (uVar20 < 10) goto LAB_0143af70;
      plVar18[0xd] = lVar14;
      lVar14 = *(long *)puVar8;
      if (lVar14 != 0) {
        lVar14 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar18 + 0x40));
        if (lVar14 == 0) goto LAB_0143af74;
        uVar20 = *(uint *)(plVar18 + 3);
      }
      if (uVar20 < 0xb) goto LAB_0143af70;
      plVar18[0xe] = *(long *)puVar8;
      if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_0143af6c;
      lVar14 = FUN_017840ac(*(long *)(unaff_x20 + 0x18) + 0x30,0);
      if ((lVar14 != 0) &&
         (lVar24 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar18 + 0x40)), lVar24 == 0))
      goto LAB_0143af74;
      puVar8 = System_Action<InteractionGroupRegisteredEventArgs>_TypeInfo;
      uVar20 = *(uint *)(plVar18 + 3);
      if (uVar20 < 0xc) goto LAB_0143af70;
      plVar18[0xf] = lVar14;
      lVar14 = *(long *)puVar8;
      if (lVar14 != 0) {
        lVar14 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar18 + 0x40));
        if (lVar14 == 0) goto LAB_0143af74;
        uVar20 = *(uint *)(plVar18 + 3);
      }
      if (uVar20 < 0xd) goto LAB_0143af70;
      plVar18[0x10] = *(long *)puVar8;
      lVar14 = *(long *)(unaff_x20 + 0x18);
      if (lVar14 == 0) goto LAB_0143af6c;
      if (*(int *)(*(long *)StringLiteral_9958 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar14 = FUN_016f5f58(lVar14 + 0x28,0);
      if ((lVar14 != 0) &&
         (lVar24 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar18 + 0x40)), lVar24 == 0))
      goto LAB_0143af74;
      if (*(uint *)(plVar18 + 3) < 0xe) goto LAB_0143af70;
      plVar18[0x11] = lVar14;
      uVar15 = FUN_01600844(plVar18,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02660dac(uVar15,0);
    }
    lVar14 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3ef8);
    if (lVar14 != 0) {
      FUN_01320e50(lVar14,*(undefined8 *)StringLiteral_8754);
      puVar8 = Method_System_Numerics_BigIntegerCalculator_Multiply__;
      if (*(long *)(unaff_x20 + 0x18) != 0) {
        FUN_01436c38(*(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x20),lVar14);
        lVar24 = thunk_FUN_00d62348(*(undefined8 *)puVar8);
        puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_s16__;
        if (lVar24 != 0) {
          FUN_017b46ec(lVar24,0);
          FUN_01324f34(lVar14,lVar24,*(undefined8 *)puVar8);
          lVar24 = *(long *)(unaff_x20 + 0x18);
          if ((lVar24 != 0) && (in_stack_00000078 != 0)) {
            iVar28 = *(int *)(lVar24 + 0x10);
            iVar27 = *(int *)(lVar24 + 0x14);
            FUN_0132138c(in_stack_00000078,0,&stack0x00000088,*(undefined8 *)StringLiteral_4419);
            uVar17 = FUN_01435f44((float)iVar28,(float)iVar27);
            puVar9 = Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__;
            puVar8 = System_Runtime_Remoting_Messaging_ServerContextTerminatorSink_TypeInfo;
            if ((in_stack_00000060._4_4_ < 0xb) && ((uVar17 & 1) != 0)) {
              if (3 < *(int *)(unaff_x20 + 0x10)) {
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_02660dac(*(undefined8 *)puVar8,0);
              }
              lVar24 = FUN_014394d4();
            }
            else {
              uVar15 = FUN_01325140(in_stack_00000078,*(undefined8 *)StringLiteral_9168);
              lVar24 = thunk_FUN_00d62348(*(undefined8 *)puVar9);
              puVar9 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
              puVar8 = Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__;
              if (lVar24 == 0) goto LAB_0143af6c;
              FUN_017b46ec(lVar24,0);
              *(undefined8 *)(lVar24 + 0x28) = uVar15;
              uVar15 = FUN_00da4fb8(*(undefined8 *)puVar8,*(undefined4 *)(lVar14 + 0x18));
              *(undefined8 *)(lVar24 + 0x20) = uVar15;
              uVar15 = FUN_00da4fb8(*(undefined8 *)puVar9,*(undefined4 *)(lVar14 + 0x18));
              fVar25 = fStack00000000000000d8;
              *(undefined8 *)(lVar24 + 0x30) = uVar15;
              *(uint *)(lVar24 + 0x10) = uStack00000000000000e4;
              *(undefined8 *)(lVar24 + 0x18) = 0xffffffffffffffff;
              *(int *)(lVar24 + 0x14) = iStack00000000000000e0;
              puVar12 = StringLiteral_9909;
              puVar11 = 
              Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__;
              puVar10 = Method_System_Collections_Generic_List<Edge>_ToArray__;
              puVar9 = System_Xml_Serialization_XmlCustomFormatter_TypeInfo;
              puVar8 = System_Data_AutoIncrementBigInteger_TypeInfo;
              in_stack_000000c8._4_4_ = 0;
              if (0 < *(int *)(lVar14 + 0x18)) {
                fVar26 = fStack00000000000000d8 + fStack00000000000000d8;
                do {
                  FUN_0132138c(lVar14,in_stack_000000c8._4_4_,&stack0x00000088,*(undefined8 *)puVar8
                              );
                  uVar20 = in_stack_000000c8._4_4_;
                  uVar17 = _iStack0000000000000088;
                  if (_iStack0000000000000088 == 0) goto LAB_0143af6c;
                  piVar1 = (int *)(_iStack0000000000000088 + 0x1c);
                  piVar5 = (int *)(_iStack0000000000000088 + 0x20);
                  piVar2 = (int *)(_iStack0000000000000088 + 0x14);
                  piVar6 = (int *)(_iStack0000000000000088 + 0x18);
                  lVar19 = *(long *)(lVar24 + 0x20);
                  lVar23 = (long)(int)in_stack_000000c8._4_4_;
                  _iStack0000000000000088 = 0;
                  _uStack0000000000000090 = 0;
                  FUN_0268834c(fStack00000000000000dc +
                               (float)*piVar1 / (float)(int)uStack00000000000000e4,
                               fVar25 + (float)*piVar5 / (float)iStack00000000000000e0,
                               (float)*piVar2 / (float)(int)uStack00000000000000e4 -
                               (fStack00000000000000dc + fStack00000000000000dc),
                               (float)*piVar6 / (float)iStack00000000000000e0 - fVar26,
                               &stack0x00000088,0);
                  if (lVar19 == 0) goto LAB_0143af6c;
                  if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_0143af70;
                  lVar19 = lVar19 + lVar23 * 0x10;
                  *(int *)(lVar19 + 0x20) = iStack0000000000000088;
                  *(undefined4 *)(lVar19 + 0x24) = uStack000000000000008c;
                  *(undefined4 *)(lVar19 + 0x28) = uStack0000000000000090;
                  *(undefined4 *)(lVar19 + 0x2c) = uStack0000000000000094;
                  uStack00000000000000b8 = iStack0000000000000088;
                  uStack00000000000000bc = uStack000000000000008c;
                  uStack00000000000000c0 = uStack0000000000000090;
                  uStack00000000000000c4 = uStack0000000000000094;
                  lVar19 = *(long *)(lVar24 + 0x30);
                  if (lVar19 == 0) goto LAB_0143af6c;
                  if (*(uint *)(lVar19 + 0x18) <= in_stack_000000c8._4_4_) goto LAB_0143af70;
                  *(undefined4 *)(lVar19 + (long)(int)in_stack_000000c8._4_4_ * 4 + 0x20) =
                       *(undefined4 *)(uVar17 + 0x10);
                  if (3 < *(int *)(unaff_x20 + 0x10)) {
                    plVar18 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,0x10);
                    if (plVar18 == (long *)0x0) goto LAB_0143af6c;
                    if ((*(long *)Method_UnityEngine_Component_GetComponent<NavMeshSurface>__ != 0)
                       && (lVar19 = thunk_FUN_00d6225c(*(long *)
                                                  Method_UnityEngine_Component_GetComponent<NavMeshSurface>__
                                                  ,*(undefined8 *)(*plVar18 + 0x40)), lVar19 == 0))
                    goto LAB_0143af74;
                    if ((int)plVar18[3] == 0) goto LAB_0143af70;
                    plVar18[4] = *(long *)
                                  Method_UnityEngine_Component_GetComponent<NavMeshSurface>__;
                    lVar19 = FUN_0176eb1c((long)&stack0x000000c8 + 4,0);
                    if ((lVar19 != 0) &&
                       (lVar23 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40)),
                       lVar23 == 0)) goto LAB_0143af74;
                    uVar20 = *(uint *)(plVar18 + 3);
                    if (uVar20 < 2) goto LAB_0143af70;
                    plVar18[5] = lVar19;
                    if (*(long *)System_Collections_Generic_List<Link>_TypeInfo != 0) {
                      lVar19 = thunk_FUN_00d6225c(*(long *)
                                                  System_Collections_Generic_List<Link>_TypeInfo,
                                                  *(undefined8 *)(*plVar18 + 0x40));
                      if (lVar19 == 0) goto LAB_0143af74;
                      uVar20 = *(uint *)(plVar18 + 3);
                    }
                    if (uVar20 < 3) goto LAB_0143af70;
                    plVar18[6] = *(long *)System_Collections_Generic_List<Link>_TypeInfo;
                    lVar19 = FUN_0176eb1c((undefined4 *)(uVar17 + 0x10),0);
                    if ((lVar19 != 0) &&
                       (lVar23 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40)),
                       lVar23 == 0)) goto LAB_0143af74;
                    uVar20 = *(uint *)(plVar18 + 3);
                    if (uVar20 < 4) goto LAB_0143af70;
                    plVar18[7] = lVar19;
                    lVar19 = *(long *)puVar9;
                    if (lVar19 != 0) {
                      lVar19 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40));
                      if (lVar19 == 0) goto LAB_0143af74;
                      uVar20 = *(uint *)(plVar18 + 3);
                    }
                    if (uVar20 < 5) goto LAB_0143af70;
                    plVar18[8] = *(long *)puVar9;
                    fStack00000000000000b4 = (float)FUN_02688390(&stack0x000000b8,0);
                    fStack00000000000000b4 =
                         fStack00000000000000b4 * (float)(int)uStack00000000000000e4;
                    lVar19 = FUN_017840ac((long)&stack0x000000b0 + 4,0);
                    if ((lVar19 != 0) &&
                       (lVar23 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40)),
                       lVar23 == 0)) goto LAB_0143af74;
                    uVar20 = *(uint *)(plVar18 + 3);
                    if (uVar20 < 6) goto LAB_0143af70;
                    plVar18[9] = lVar19;
                    lVar19 = *(long *)puVar12;
                    if (lVar19 != 0) {
                      lVar19 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40));
                      if (lVar19 == 0) goto LAB_0143af74;
                      uVar20 = *(uint *)(plVar18 + 3);
                    }
                    if (uVar20 < 7) goto LAB_0143af70;
                    plVar18[10] = *(long *)puVar12;
                    fStack00000000000000b4 = (float)FUN_026883a0(&stack0x000000b8,0);
                    fStack00000000000000b4 = fStack00000000000000b4 * (float)iStack00000000000000e0;
                    lVar19 = FUN_017840ac((long)&stack0x000000b0 + 4,0);
                    if ((lVar19 != 0) &&
                       (lVar23 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40)),
                       lVar23 == 0)) goto LAB_0143af74;
                    uVar20 = *(uint *)(plVar18 + 3);
                    if (uVar20 < 8) goto LAB_0143af70;
                    plVar18[0xb] = lVar19;
                    if (*(long *)PTR_DAT_033f5960 != 0) {
                      lVar19 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f5960,
                                                  *(undefined8 *)(*plVar18 + 0x40));
                      if (lVar19 == 0) goto LAB_0143af74;
                      uVar20 = *(uint *)(plVar18 + 3);
                    }
                    if (uVar20 < 9) goto LAB_0143af70;
                    plVar18[0xc] = *(long *)PTR_DAT_033f5960;
                    fStack00000000000000b4 = (float)FUN_026884c4(&stack0x000000b8,0);
                    fStack00000000000000b4 =
                         fStack00000000000000b4 * (float)(int)uStack00000000000000e4;
                    lVar19 = FUN_017840ac((long)&stack0x000000b0 + 4,0);
                    if ((lVar19 != 0) &&
                       (lVar23 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40)),
                       lVar23 == 0)) goto LAB_0143af74;
                    uVar20 = *(uint *)(plVar18 + 3);
                    if (uVar20 < 10) goto LAB_0143af70;
                    plVar18[0xd] = lVar19;
                    if (*(long *)Method_MedleyBossPushPhase_StartPhase__ != 0) {
                      lVar19 = thunk_FUN_00d6225c(*(long *)Method_MedleyBossPushPhase_StartPhase__,
                                                  *(undefined8 *)(*plVar18 + 0x40));
                      if (lVar19 == 0) goto LAB_0143af74;
                      uVar20 = *(uint *)(plVar18 + 3);
                    }
                    if (uVar20 < 0xb) goto LAB_0143af70;
                    plVar18[0xe] = *(long *)Method_MedleyBossPushPhase_StartPhase__;
                    fStack00000000000000b4 = (float)FUN_026884d4(&stack0x000000b8,0);
                    fStack00000000000000b4 = fStack00000000000000b4 * (float)iStack00000000000000e0;
                    lVar19 = FUN_017840ac((long)&stack0x000000b0 + 4,0);
                    if ((lVar19 != 0) &&
                       (lVar23 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40)),
                       lVar23 == 0)) goto LAB_0143af74;
                    uVar20 = *(uint *)(plVar18 + 3);
                    if (uVar20 < 0xc) goto LAB_0143af70;
                    plVar18[0xf] = lVar19;
                    lVar19 = *(long *)puVar10;
                    if (lVar19 != 0) {
                      lVar19 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40));
                      if (lVar19 == 0) goto LAB_0143af74;
                      uVar20 = *(uint *)(plVar18 + 3);
                    }
                    if (uVar20 < 0xd) goto LAB_0143af70;
                    plVar18[0x10] = *(long *)puVar10;
                    FUN_0132138c(in_stack_00000078,in_stack_000000c8._4_4_,&stack0x00000088,
                                 *(undefined8 *)StringLiteral_4419);
                    uStack00000000000000b0 = (uint)(_iStack0000000000000088 >> 0x1f) & 0xfffffffe;
                    lVar19 = FUN_0176eb1c(&stack0x000000b0,0);
                    if ((lVar19 != 0) &&
                       (lVar23 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40)),
                       lVar23 == 0)) goto LAB_0143af74;
                    uVar20 = *(uint *)(plVar18 + 3);
                    if (uVar20 < 0xe) goto LAB_0143af70;
                    plVar18[0x11] = lVar19;
                    lVar19 = *(long *)puVar11;
                    if (lVar19 != 0) {
                      lVar19 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40));
                      if (lVar19 == 0) goto LAB_0143af74;
                      uVar20 = *(uint *)(plVar18 + 3);
                    }
                    if (uVar20 < 0xf) goto LAB_0143af70;
                    plVar18[0x12] = *(long *)puVar11;
                    FUN_0132138c(in_stack_00000078,in_stack_000000c8._4_4_,&stack0x00000088,
                                 *(undefined8 *)StringLiteral_4419);
                    uStack00000000000000b0 = iStack0000000000000088 << 1;
                    lVar19 = FUN_0176eb1c(&stack0x000000b0,0);
                    if ((lVar19 != 0) &&
                       (lVar23 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40)),
                       lVar23 == 0)) goto LAB_0143af74;
                    if (*(uint *)(plVar18 + 3) < 0x10) goto LAB_0143af70;
                    plVar18[0x13] = lVar19;
                    uVar15 = FUN_01600844(plVar18,0);
                    lVar23 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
                    lVar19 = *(long *)(lVar23 + 0x38);
                    if (lVar19 == 0) {
                      FUN_00d59478(lVar23);
                      lVar19 = *(long *)(lVar23 + 0x38);
                    }
                    lVar19 = *(long *)(lVar19 + 0x10);
                    if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
                      lVar19 = FUN_00d5941c();
                    }
                    if (*(int *)(lVar19 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar19 = *(long *)(*(long *)(lVar23 + 0x38) + 0x10);
                    if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
                      lVar19 = FUN_00d5941c();
                    }
                    FUN_013f38b0(uVar15,**(undefined8 **)(lVar19 + 0xb8),0);
                  }
                  in_stack_000000c8._4_4_ = in_stack_000000c8._4_4_ + 1;
                } while ((int)in_stack_000000c8._4_4_ < *(int *)(lVar14 + 0x18));
              }
              FUN_014359a0(lVar24);
            }
            return lVar24;
          }
        }
      }
    }
  }
LAB_0143af6c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


