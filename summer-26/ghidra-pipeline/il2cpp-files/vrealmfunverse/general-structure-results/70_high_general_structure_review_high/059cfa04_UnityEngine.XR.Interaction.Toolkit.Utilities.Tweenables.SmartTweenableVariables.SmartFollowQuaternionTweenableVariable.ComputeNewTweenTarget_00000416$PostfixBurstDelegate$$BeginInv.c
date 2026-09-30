/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.SmartTweenableVariables.SmartFollowQuaternionTweenableVariable.ComputeNewTweenTarget_00000416$PostfixBurstDelegate$$BeginInvoke
ENTRY_POINT: 059cfa04
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416_PostfixBurstDelegate__BeginInvoke
               (void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *unaff_x24;
  long unaff_x25;
  undefined1 auVar14 [12];
  int in_stack_00000010;
  undefined8 in_stack_00000018;
  
  thunk_FUN_02bb0e9c();
  if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(long *)(unaff_x25 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar11 = *unaff_x20;
  uVar1 = *(undefined4 *)(*(long *)(unaff_x25 + 0x18) + 0x18);
  uVar3 = thunk_FUN_02b79644(*(undefined8 *)Method_System_IO_BufferedStream_Write__);
  FUN_037a5d48(uVar3,uVar1,*(undefined8 *)Method_System_IO_BufferedStream_Read__);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  puVar12 = (undefined8 *)(lVar11 + 0x18);
  *puVar12 = uVar3;
  thunk_FUN_02bb0e9c(puVar12,uVar3);
  if (*(long *)(unaff_x25 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar11 = *unaff_x20;
  if (*(int *)(*(long *)(unaff_x25 + 0x18) + 0x18) < 1) {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
  else {
    if (*(long *)(unaff_x25 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    plVar13 = *(long **)(*(long *)(unaff_x25 + 0x10) + 0x28);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar8 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)Method_System_IO_BufferedStream_EnsureNotClosed__) {
          puVar12 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_059cfaf4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_02b7654c(plVar13,*(long *)Method_System_IO_BufferedStream_EnsureNotClosed__,0);
LAB_059cfaf4:
    uVar3 = (*(code *)*puVar12)(plVar13,puVar12[1]);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    *(undefined8 *)(lVar11 + 0x30) = uVar3;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x30));
    if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar11 = *(long *)(*unaff_x20 + 0x30);
    if (lVar11 == 0) {
      thunk_FUN_02ba3594(PTR_DAT_06315bd0);
      uVar3 = thunk_FUN_02b79644();
      uVar5 = thunk_FUN_02ba3594(Method_System_IO_BufferedStream_WriteAsync__);
      FUN_04d7dc70(uVar3,uVar5,0);
      thunk_FUN_02ba3594(Method_UnityEngine_Rendering_Universal_BuddyAllocator_GetNativeArray<int>__
                        );
      uVar5 = thunk_FUN_02b79644();
      uVar4 = thunk_FUN_02ba3594(Method_System_IO_BufferedStream_set_Position__);
      FUN_059cc5ec(uVar5,uVar4,uVar3,0);
      uVar3 = thunk_FUN_02ba3594(
                                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BezierLerp_00000343_PostfixBurstDelegate>__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar5,uVar3);
    }
    if (*(long *)(unaff_x25 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    plVar13 = *(long **)(*(long *)(unaff_x25 + 0x10) + 0x30);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar8 = *plVar13;
    uVar3 = *(undefined8 *)(lVar11 + 0x28);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)Method_System_IO_BufferedStream_EnsureCanWrite__) {
          puVar12 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_059cfb90;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_02b7654c(plVar13,*(long *)Method_System_IO_BufferedStream_EnsureCanWrite__,2);
LAB_059cfb90:
    (*(code *)*puVar12)(plVar13,uVar3,puVar12[1]);
    if (*(long *)(unaff_x25 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar11 = *unaff_x20;
    uVar1 = *(undefined4 *)(*(long *)(unaff_x25 + 0x18) + 0x18);
    uVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0631e6e8);
    FUN_037a5d48(uVar3,uVar1,*(undefined8 *)Method_System_IO_BufferedStream_ReadAsync__);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    puVar12 = (undefined8 *)(lVar11 + 0x20);
    *puVar12 = uVar3;
    thunk_FUN_02bb0e9c(puVar12,uVar3);
    lVar11 = *unaff_x20;
    uVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_System_Collections_Generic_List_Enumerator<ActiveRagdollMuscle>_Dispose__
                              );
    FUN_05620fd4(uVar3,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    puVar12 = (undefined8 *)(lVar11 + 0x10);
    *puVar12 = uVar3;
    thunk_FUN_02bb0e9c(puVar12,uVar3);
    iVar7 = 0;
    unaff_x19[0xc] = 0;
    while( true ) {
      if (*(long *)(unaff_x25 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar11 = *(long *)(unaff_x19 + 10);
      if (*(int *)(*(long *)(unaff_x25 + 0x18) + 0x18) <= iVar7) break;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar3 = FUN_059ced70(lVar11);
      if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4(0,uVar3);
      }
      lVar11 = FUN_059cec78();
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      in_stack_00000018 = FUN_04def52c(lVar11,0);
      uVar9 = FUN_04ca9e1c(&stack0x00000018,0);
      if ((uVar9 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
        thunk_FUN_02bb0e9c(unaff_x19 + 0xe,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_02e525fc(unaff_x19 + 2,&stack0x00000018);
        return;
      }
      FUN_04ca9ee4(&stack0x00000018,0);
      iVar7 = unaff_x19[0xc] + 1;
      unaff_x19[0xc] = iVar7;
      if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(long *)(lVar11 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (0 < *(int *)(*(long *)(lVar11 + 0x20) + 0x18)) {
      auVar14 = FUN_059ceef8(lVar11);
      if (auVar14._8_4_ != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_02c2be1c(auVar14._0_8_);
      }
      puVar12 = (undefined8 *)__cxa_begin_catch(auVar14._0_8_);
      uVar3 = thunk_FUN_02ba3594(PTR_DAT_06312bc0);
      uVar9 = thunk_FUN_02b9f224(uVar3,*(undefined8 *)*puVar12);
      if ((uVar9 & 1) != 0) {
        uVar3 = *puVar12;
        *(undefined8 *)(&stack0x00000008 + (long)in_stack_00000010 * 8) = uVar3;
        in_stack_00000010 = in_stack_00000010 + 1;
        __cxa_end_catch();
        *unaff_x19 = 0xfffffffe;
        *(undefined8 *)(unaff_x19 + 10) = 0;
        thunk_FUN_02bb0e9c(unaff_x19 + 10,0);
        lVar11 = thunk_FUN_02ba3594(Method_BrushScaleHandler_UpdateVisuals__);
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar5 = thunk_FUN_02ba3594(
                                  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BezierLerp_00000344_PostfixBurstDelegate>__
                                  );
        FUN_03a2fab0(unaff_x19 + 2,uVar3,uVar5);
        return;
      }
      puVar6 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar6 = *puVar12;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&PTR_PTR_05fbf508,0);
    }
  }
  puVar2 = Method_System_IO_BufferedStream_EnsureCanSeek__;
  uVar3 = *(undefined8 *)(lVar11 + 0x18);
  *(undefined8 *)(unaff_x19 + 10) = 0;
  *unaff_x19 = 0xfffffffe;
  thunk_FUN_02bb0e9c(unaff_x19 + 10,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_03a2f864(unaff_x19 + 2,uVar3,*(undefined8 *)puVar2);
  return;
}


