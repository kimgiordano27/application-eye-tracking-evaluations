/*
FUNCTION_NAME: FUN_059cf8e0
ENTRY_POINT: 059cf8e0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_059cf8e0(int *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  undefined1 auVar17 [12];
  undefined8 uStack_58;
  int local_50;
  undefined8 local_48;
  
  if ((DAT_066d3b41 & 1) == 0) {
    FUN_02b3c81c(Method_System_IO_BufferedStream_EnsureCanRead__);
    FUN_02b3c81c(Method_System_IO_BufferedStream_EnsureCanSeek__);
    FUN_02b3c81c(Method_BrushScaleHandler_UpdateVisuals__);
    FUN_02b3c81c(Method_System_IO_BufferedStream_EnsureCanWrite__);
    FUN_02b3c81c(Method_System_IO_BufferedStream_EnsureNotClosed__);
    FUN_02b3c81c(Method_System_IO_BufferedStream_Read__);
    FUN_02b3c81c(Method_System_IO_BufferedStream_ReadAsync__);
    FUN_02b3c81c(PTR_DAT_0631e708);
    FUN_02b3c81c(PTR_DAT_06316cb8);
    FUN_02b3c81c(Method_System_IO_BufferedStream_Write__);
    FUN_02b3c81c(PTR_DAT_0631e6e8);
    FUN_02b3c81c(Method_System_Collections_Generic_List_Enumerator<ActiveRagdollMuscle>_Dispose__);
    FUN_02b3c81c(Method_System_IO_BufferedStream_Write__);
    DAT_066d3b41 = 1;
  }
  puVar2 = Method_BrushScaleHandler_UpdateVisuals__;
  lVar16 = *(long *)(param_1 + 8);
  local_48 = 0;
  local_50 = 0;
  if (*param_1 == 0) {
    local_48 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
    goto LAB_059cfd7c;
  }
  lVar4 = thunk_FUN_02b79644(*(undefined8 *)Method_System_IO_BufferedStream_Write__);
  FUN_04dbdb8c(lVar4,0);
  plVar13 = (long *)(param_1 + 10);
  *plVar13 = lVar4;
  thunk_FUN_02bb0e9c(plVar13,lVar4);
  if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(undefined8 *)(*plVar13 + 0x28) = *(undefined8 *)(param_1 + 8);
  thunk_FUN_02bb0e9c();
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(long *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar4 = *plVar13;
  uVar1 = *(undefined4 *)(*(long *)(lVar16 + 0x18) + 0x18);
  uVar5 = thunk_FUN_02b79644(*(undefined8 *)Method_System_IO_BufferedStream_Write__);
  FUN_037a5d48(uVar5,uVar1,*(undefined8 *)Method_System_IO_BufferedStream_Read__);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  puVar14 = (undefined8 *)(lVar4 + 0x18);
  *puVar14 = uVar5;
  thunk_FUN_02bb0e9c(puVar14,uVar5);
  if (*(long *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar4 = *plVar13;
  if (*(int *)(*(long *)(lVar16 + 0x18) + 0x18) < 1) {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
  else {
    if (*(long *)(lVar16 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    plVar15 = *(long **)(*(long *)(lVar16 + 0x10) + 0x28);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar10 = *plVar15;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)Method_System_IO_BufferedStream_EnsureNotClosed__) {
          puVar14 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_059cfaf4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar14 = (undefined8 *)
              FUN_02b7654c(plVar15,*(long *)Method_System_IO_BufferedStream_EnsureNotClosed__,0);
LAB_059cfaf4:
    uVar5 = (*(code *)*puVar14)(plVar15,puVar14[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    *(undefined8 *)(lVar4 + 0x30) = uVar5;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x30));
    if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar4 = *(long *)(*plVar13 + 0x30);
    if (lVar4 == 0) {
      thunk_FUN_02ba3594(PTR_DAT_06315bd0);
      uVar5 = thunk_FUN_02b79644();
      uVar7 = thunk_FUN_02ba3594(Method_System_IO_BufferedStream_WriteAsync__);
      FUN_04d7dc70(uVar5,uVar7,0);
      thunk_FUN_02ba3594(Method_UnityEngine_Rendering_Universal_BuddyAllocator_GetNativeArray<int>__
                        );
      uVar7 = thunk_FUN_02b79644();
      uVar6 = thunk_FUN_02ba3594(Method_System_IO_BufferedStream_set_Position__);
      FUN_059cc5ec(uVar7,uVar6,uVar5,0);
      uVar5 = thunk_FUN_02ba3594(
                                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BezierLerp_00000343_PostfixBurstDelegate>__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar7,uVar5);
    }
    if (*(long *)(lVar16 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    plVar15 = *(long **)(*(long *)(lVar16 + 0x10) + 0x30);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar10 = *plVar15;
    uVar5 = *(undefined8 *)(lVar4 + 0x28);
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)Method_System_IO_BufferedStream_EnsureCanWrite__) {
          puVar14 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_059cfb90;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar14 = (undefined8 *)
              FUN_02b7654c(plVar15,*(long *)Method_System_IO_BufferedStream_EnsureCanWrite__,2);
LAB_059cfb90:
    (*(code *)*puVar14)(plVar15,uVar5,puVar14[1]);
    if (*(long *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar4 = *plVar13;
    uVar1 = *(undefined4 *)(*(long *)(lVar16 + 0x18) + 0x18);
    uVar5 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0631e6e8);
    FUN_037a5d48(uVar5,uVar1,*(undefined8 *)Method_System_IO_BufferedStream_ReadAsync__);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    puVar14 = (undefined8 *)(lVar4 + 0x20);
    *puVar14 = uVar5;
    thunk_FUN_02bb0e9c(puVar14,uVar5);
    lVar4 = *plVar13;
    uVar5 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_System_Collections_Generic_List_Enumerator<ActiveRagdollMuscle>_Dispose__
                              );
    FUN_05620fd4(uVar5,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    puVar14 = (undefined8 *)(lVar4 + 0x10);
    *puVar14 = uVar5;
    thunk_FUN_02bb0e9c(puVar14,uVar5);
    iVar9 = 0;
    param_1[0xc] = 0;
    while( true ) {
      if (*(long *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar4 = *(long *)(param_1 + 10);
      if (*(int *)(*(long *)(lVar16 + 0x18) + 0x18) <= iVar9) break;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar5 = FUN_059ced70(lVar4);
      if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4(0,uVar5);
      }
      lVar4 = FUN_059cec78();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      local_48 = FUN_04def52c(lVar4,0);
      uVar11 = FUN_04ca9e1c(&local_48,0);
      if ((uVar11 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0xe) = local_48;
        thunk_FUN_02bb0e9c(param_1 + 0xe,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_02e525fc(param_1 + 2,&local_48,param_1,
                     *(undefined8 *)Method_System_IO_BufferedStream_EnsureCanRead__);
        return;
      }
LAB_059cfd7c:
      FUN_04ca9ee4(&local_48,0);
      iVar9 = param_1[0xc] + 1;
      param_1[0xc] = iVar9;
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(long *)(lVar4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (0 < *(int *)(*(long *)(lVar4 + 0x20) + 0x18)) {
      auVar17 = FUN_059ceef8(lVar4);
      if (auVar17._8_4_ != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_02c2be1c(auVar17._0_8_);
      }
      puVar14 = (undefined8 *)__cxa_begin_catch(auVar17._0_8_);
      uVar5 = thunk_FUN_02ba3594(PTR_DAT_06312bc0);
      uVar11 = thunk_FUN_02b9f224(uVar5,*(undefined8 *)*puVar14);
      if ((uVar11 & 1) != 0) {
        uVar5 = *puVar14;
        (&uStack_58)[local_50] = uVar5;
        local_50 = local_50 + 1;
        __cxa_end_catch();
        *param_1 = -2;
        piVar12 = param_1 + 10;
        piVar12[0] = 0;
        piVar12[1] = 0;
        thunk_FUN_02bb0e9c(piVar12,0);
        lVar16 = thunk_FUN_02ba3594(Method_BrushScaleHandler_UpdateVisuals__);
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar7 = thunk_FUN_02ba3594(
                                  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BezierLerp_00000344_PostfixBurstDelegate>__
                                  );
        FUN_03a2fab0(param_1 + 2,uVar5,uVar7);
        return;
      }
      puVar8 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar8 = *puVar14;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,&PTR_PTR_05fbf508,0);
    }
  }
  puVar3 = Method_System_IO_BufferedStream_EnsureCanSeek__;
  uVar5 = *(undefined8 *)(lVar4 + 0x18);
  piVar12 = param_1 + 10;
  piVar12[0] = 0;
  piVar12[1] = 0;
  *param_1 = -2;
  thunk_FUN_02bb0e9c(piVar12,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_03a2f864(param_1 + 2,uVar5,*(undefined8 *)puVar3);
  return;
}


