/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_EncodeMrcFrameWithPoseTime
ENTRY_POINT: 053513a8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameWithPoseTime(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x19;
  long unaff_x20;
  uint uVar14;
  long lVar15;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long *in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_02f08768();
  FUN_02f08768(System_Data_ForeignKeyConstraint_TypeInfo);
  FUN_02f08768(UnityEngine_UIElements_UIR_NativePagedList<CopyMeshJobData>_TypeInfo);
  FUN_02f08768(UnityEngine_UIElements_UIR_NativePagedList<NudgeJobData>_TypeInfo);
  FUN_02f08768(
              UnityEngine_UIElements_UIR_NativePagedList<MeshGenerator_BackgroundRepeatInstance>_TypeInfo
              );
  FUN_02f08768(Unity_Collections_NativeParallelHashMap<DrawKey,_int>_TypeInfo);
  FUN_02f08768(Unity_Collections_NativeParallelHashMap<int,_BatchMaterialID>_TypeInfo);
  FUN_02f08768(UnityEngine_InputSystem_Utilities_ForDeviceEventObservable_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0x574) = 1;
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = (long *)0x0;
  in_stack_00000040 = 0;
  if ((unaff_x20 == 0) || (iVar4 = FUN_0492ca50(), iVar4 == 0)) {
    return 0;
  }
  uVar5 = FUN_0492ca50();
  lVar6 = FUN_02f0880c(*(undefined8 *)
                        UnityEngine_InputSystem_Utilities_ForDeviceEventObservable_TypeInfo,uVar5);
  FUN_0492d154(&stack0x00000008);
  puVar2 = UnityEngine_UIElements_UIR_NativePagedList<NudgeJobData>_TypeInfo;
  puVar1 = PTR_DAT_067c9338;
  uVar12 = DAT_011b1100;
  in_stack_00000038 = in_stack_00000010;
  in_stack_00000030 = in_stack_00000008;
  in_stack_00000048 = in_stack_00000020;
  in_stack_00000040 = in_stack_00000018;
  uVar14 = 0;
  in_stack_00000050 = in_stack_00000028;
  in_stack_00000008 = 0;
  in_stack_00000010 = &stack0x00000030;
  do {
    uVar7 = FUN_04bbf644(&stack0x00000030,*(undefined8 *)puVar2);
    plVar3 = in_stack_00000048;
    uVar13 = in_stack_00000040;
    if ((uVar7 & 1) == 0) {
      FUN_04bbf758(&stack0x00000030,
                   *(undefined8 *)
                    UnityEngine_UIElements_UIR_NativePagedList<CopyMeshJobData>_TypeInfo);
      return lVar6;
    }
    if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar8 = thunk_FUN_02f1863c(in_stack_00000048,0);
    lVar15 = *(long *)(puVar1 + 0x48);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar9 = FUN_050e4454(lVar15 + 0x20,0);
    uVar7 = FUN_050ed374(uVar8,uVar9,0);
    if ((uVar7 & 1) == 0) {
      uVar8 = thunk_FUN_02f1863c(plVar3,0);
      lVar15 = *(long *)(puVar1 + 0x90);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar9 = FUN_050e4454(lVar15 + 0x20,0);
      uVar7 = FUN_050ed374(uVar8,uVar9,0);
      if ((uVar7 & 1) == 0) {
        uVar8 = thunk_FUN_02f1863c(plVar3,0);
        lVar15 = *(long *)(puVar1 + 0x80);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar9 = FUN_050e4454(lVar15 + 0x20,0);
        uVar7 = FUN_050ed374(uVar8,uVar9,0);
        if ((uVar7 & 1) == 0) {
          thunk_FUN_02f6ef30(PTR_DAT_067c9600);
          uVar12 = thunk_FUN_02f45270();
          uVar13 = thunk_FUN_02f6ef30(System_FormatException_TypeInfo);
          FUN_0510bee0(uVar12,uVar13,0);
          uVar13 = thunk_FUN_02f6ef30(System_Runtime_Serialization_FormatterConverter_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar12,uVar13);
        }
        if (*(long *)(*plVar3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar3);
        }
        puVar11 = (undefined8 *)thunk_FUN_02f453b8(plVar3);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        lVar15 = lVar6 + (long)(int)uVar14 * 0x28;
        uVar8 = *puVar11;
        *(undefined8 *)(lVar15 + 0x20) = uVar13;
        *(undefined4 *)(lVar15 + 0x28) = 2;
        *(undefined8 *)(lVar15 + 0x34) = 0;
        *(undefined8 *)(lVar15 + 0x2c) = 0;
        *(undefined4 *)(lVar15 + 0x3c) = 0;
        *(undefined8 *)(lVar15 + 0x40) = uVar8;
      }
      else {
        if (*plVar3 != *(long *)(puVar1 + 0x90)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar3);
        }
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        lVar15 = lVar6 + (long)(int)uVar14 * 0x28;
        *(undefined8 *)(lVar15 + 0x20) = uVar13;
        *(undefined8 *)(lVar15 + 0x28) = 0;
        *(undefined8 *)(lVar15 + 0x38) = 0;
        *(undefined8 *)(lVar15 + 0x40) = 0;
        *(long **)(lVar15 + 0x30) = plVar3;
      }
    }
    else {
      if (*(long *)(*plVar3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar3);
      }
      puVar10 = (undefined4 *)thunk_FUN_02f453b8(plVar3);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar15 = lVar6 + (long)(int)uVar14 * 0x28;
      uVar5 = *puVar10;
      *(undefined8 *)(lVar15 + 0x20) = uVar13;
      *(undefined8 *)(lVar15 + 0x28) = uVar12;
      *(undefined8 *)(lVar15 + 0x30) = 0;
      *(undefined4 *)(lVar15 + 0x38) = uVar5;
      *(undefined4 *)(lVar15 + 0x3c) = 0;
      *(undefined8 *)(lVar15 + 0x40) = 0;
    }
    uVar14 = uVar14 + 1;
  } while( true );
}


