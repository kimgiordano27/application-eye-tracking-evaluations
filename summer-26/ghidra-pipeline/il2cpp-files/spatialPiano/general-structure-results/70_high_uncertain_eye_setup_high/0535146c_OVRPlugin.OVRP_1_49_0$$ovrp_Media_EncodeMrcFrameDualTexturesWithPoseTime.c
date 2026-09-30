/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime
ENTRY_POINT: 0535146c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x19;
  uint uVar12;
  long lVar13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long *in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_0492d154();
  puVar3 = UnityEngine_UIElements_UIR_NativePagedList<NudgeJobData>_TypeInfo;
  puVar2 = PTR_DAT_067c9338;
  uVar10 = DAT_011b1100;
  in_stack_00000038 = in_stack_00000010;
  in_stack_00000030 = in_stack_00000008;
  in_stack_00000048 = in_stack_00000020;
  in_stack_00000040 = in_stack_00000018;
  uVar12 = 0;
  in_stack_00000050 = in_stack_00000028;
  do {
    uVar5 = FUN_04bbf644(&stack0x00000030,*(undefined8 *)puVar3);
    plVar4 = in_stack_00000048;
    uVar11 = in_stack_00000040;
    if ((uVar5 & 1) == 0) {
      FUN_04bbf758(&stack0x00000030,
                   *(undefined8 *)
                    UnityEngine_UIElements_UIR_NativePagedList<CopyMeshJobData>_TypeInfo);
      return;
    }
    if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar6 = thunk_FUN_02f1863c(in_stack_00000048,0);
    lVar13 = *(long *)(puVar2 + 0x48);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar7 = FUN_050e4454(lVar13 + 0x20,0);
    uVar5 = FUN_050ed374(uVar6,uVar7,0);
    if ((uVar5 & 1) == 0) {
      uVar6 = thunk_FUN_02f1863c(plVar4,0);
      lVar13 = *(long *)(puVar2 + 0x90);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar7 = FUN_050e4454(lVar13 + 0x20,0);
      uVar5 = FUN_050ed374(uVar6,uVar7,0);
      if ((uVar5 & 1) == 0) {
        uVar6 = thunk_FUN_02f1863c(plVar4,0);
        lVar13 = *(long *)(puVar2 + 0x80);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar7 = FUN_050e4454(lVar13 + 0x20,0);
        uVar5 = FUN_050ed374(uVar6,uVar7,0);
        if ((uVar5 & 1) == 0) {
          thunk_FUN_02f6ef30(PTR_DAT_067c9600);
          uVar10 = thunk_FUN_02f45270();
          uVar11 = thunk_FUN_02f6ef30(System_FormatException_TypeInfo);
          FUN_0510bee0(uVar10,uVar11,0);
          uVar11 = thunk_FUN_02f6ef30(System_Runtime_Serialization_FormatterConverter_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar10,uVar11);
        }
        if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(puVar2 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar4);
        }
        puVar9 = (undefined8 *)thunk_FUN_02f453b8(plVar4);
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        lVar13 = unaff_x19 + (long)(int)uVar12 * 0x28;
        uVar6 = *puVar9;
        *(undefined8 *)(lVar13 + 0x20) = uVar11;
        *(undefined4 *)(lVar13 + 0x28) = 2;
        *(undefined8 *)(lVar13 + 0x34) = 0;
        *(undefined8 *)(lVar13 + 0x2c) = 0;
        *(undefined4 *)(lVar13 + 0x3c) = 0;
        *(undefined8 *)(lVar13 + 0x40) = uVar6;
      }
      else {
        if (*plVar4 != *(long *)(puVar2 + 0x90)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar4);
        }
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        lVar13 = unaff_x19 + (long)(int)uVar12 * 0x28;
        *(undefined8 *)(lVar13 + 0x20) = uVar11;
        *(undefined8 *)(lVar13 + 0x28) = 0;
        *(undefined8 *)(lVar13 + 0x38) = 0;
        *(undefined8 *)(lVar13 + 0x40) = 0;
        *(long **)(lVar13 + 0x30) = plVar4;
      }
    }
    else {
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(puVar2 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar4);
      }
      puVar8 = (undefined4 *)thunk_FUN_02f453b8(plVar4);
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar13 = unaff_x19 + (long)(int)uVar12 * 0x28;
      uVar1 = *puVar8;
      *(undefined8 *)(lVar13 + 0x20) = uVar11;
      *(undefined8 *)(lVar13 + 0x28) = uVar10;
      *(undefined8 *)(lVar13 + 0x30) = 0;
      *(undefined4 *)(lVar13 + 0x38) = uVar1;
      *(undefined4 *)(lVar13 + 0x3c) = 0;
      *(undefined8 *)(lVar13 + 0x40) = 0;
    }
    uVar12 = uVar12 + 1;
  } while( true );
}


