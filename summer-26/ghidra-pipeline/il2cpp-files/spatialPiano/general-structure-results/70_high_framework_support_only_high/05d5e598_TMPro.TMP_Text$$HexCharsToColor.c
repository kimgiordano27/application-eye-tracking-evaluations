/*
FUNCTION_NAME: TMPro.TMP_Text$$HexCharsToColor
ENTRY_POINT: 05d5e598
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void TMPro_TMP_Text__HexCharsToColor(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x23;
  long lVar10;
  undefined4 unaff_w24;
  ulong unaff_x25;
  long lVar11;
  undefined4 unaff_w26;
  int unaff_w28;
  undefined8 in_stack_00000010;
  int in_stack_00000018;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000108;
  
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_060a6338(*(undefined8 *)
                Method_OVRTask_SetResult<OVRResult<Guid,_OVRColocationSession_Result>>__,0);
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar4 = FUN_050d645c(unaff_w26,1,0);
  uVar3 = in_stack_000000f8;
  uVar8 = in_stack_000000f0;
  if (unaff_w28 == 0) {
    unaff_w24 = 0;
  }
  if (unaff_w20 != 0) {
    unaff_w24 = 0xffffffff;
  }
  if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_061295c8(&stack0x00000108,unaff_x25 & 0xffffffff,unaff_x25 >> 0x20,uVar4,uVar8,uVar3,unaff_w24
               ,0);
  FUN_03ce5340(&stack0x000000f0,
               *(undefined8 *)Method_OVRTask_SetResult<OVRResult<OVRColocationSession_Result>>__);
  FUN_061297e8(&stack0x00000108,in_stack_000000e0,in_stack_000000e8,0,0);
  *(int *)(unaff_x19 + 0x10) = in_stack_00000018;
  FUN_03d18804(&stack0x000000e0,*(undefined8 *)PTR_DAT_067cc4c8);
  (**(code **)(*unaff_x21 + 0x1d8))();
  puVar5 = (undefined8 *)FUN_05ddf250();
  uVar8 = *puVar5;
  if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_06129b08(&stack0x00000108,uVar8,0);
  plVar6 = (long *)FUN_05ddf250();
  if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_06113868(*plVar6,0);
  uVar1 = in_stack_00000010._4_4_ - 1;
  if (uVar1 != 0) {
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(uint *)(unaff_x23 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (*(int *)(unaff_x23 + (long)(int)uVar1 * 4 + 0x20) != in_stack_00000018) goto LAB_05d5e754;
  }
  if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_061298c8(&stack0x00000108,0);
  FUN_06129940(&stack0x00000108,0);
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
LAB_05d5e754:
  puVar2 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  lVar11 = *(long *)(unaff_x19 + 0x40);
  if (lVar11 != 0) {
    uVar9 = 0;
    lVar10 = 0x20;
    do {
      if ((long)*(int *)(lVar11 + 0x18) <= (long)uVar9) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (DAT_06bc3978 == '\0') {
          FUN_02f08768(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                      );
          DAT_06bc3978 = '\x01';
        }
        lVar11 = *(long *)puVar2;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar11 = *(long *)puVar2;
        }
        memmove((void *)(unaff_x19 + 0x48),(void *)(*(long *)(lVar11 + 0xb8) + 8),0x78);
        FUN_05c5cb50(&stack0x00000104,0);
        return;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (DAT_06bc3978 == '\0') {
        FUN_02f08768(puVar2);
        DAT_06bc3978 = '\x01';
      }
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar7 = *(long *)puVar2;
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      memmove((void *)(lVar11 + lVar10),(void *)(*(long *)(lVar7 + 0xb8) + 8),0x78);
      lVar7 = *(long *)(unaff_x19 + 0xc0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar11 = *(long *)(unaff_x19 + 0x40);
      lVar7 = lVar7 + uVar9;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x78;
      *(undefined1 *)(lVar7 + 0x20) = 0;
    } while (lVar11 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


