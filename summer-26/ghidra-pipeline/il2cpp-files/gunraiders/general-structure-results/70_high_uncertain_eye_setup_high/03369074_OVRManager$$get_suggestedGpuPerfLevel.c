/*
FUNCTION_NAME: OVRManager$$get_suggestedGpuPerfLevel
ENTRY_POINT: 03369074
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_suggestedGpuPerfLevel(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined4 unaff_w19;
  long unaff_x20;
  long lVar4;
  long unaff_x21;
  int *piVar5;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0x438));
  FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<SolverManager>_Dispose__);
  FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<SolverManager>_MoveNext__);
  *(undefined1 *)(unaff_x20 + 0x54a) = 1;
  piVar5 = (int *)(unaff_x21 + 0x18);
  if (*piVar5 != 0) {
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) {
      lVar4 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<SolverManager>_MoveNext__
                                );
      System_Collections_Generic_List<ProbeVolumeSceneData_SerializableHasPVItem>__InsertRange
                (lVar4,*(undefined8 *)
                        Method_System_Collections_Generic_List_Enumerator<SolverManager>_Dispose__);
      *(long *)(unaff_x21 + 0x10) = lVar4;
      uStack0000000000000010 = *(undefined8 *)(unaff_x21 + 0x28);
      uStack0000000000000008 = *(undefined8 *)(unaff_x21 + 0x20);
      uStack0000000000000000 = *(undefined8 *)piVar5;
      if (lVar4 == 0) goto LAB_033691cc;
    }
    else {
      uStack0000000000000010 = *(undefined8 *)(unaff_x21 + 0x28);
      uStack0000000000000008 = *(undefined8 *)(unaff_x21 + 0x20);
      uStack0000000000000000 = *(undefined8 *)piVar5;
    }
    lVar2 = *(long *)(lVar4 + 0x10);
    lVar3 = *(long *)Method_System_Collections_Generic_List_Enumerator<SkyboxBuilding>_get_Current__
    ;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar2 == 0) {
LAB_033691cc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      lVar2 = lVar2 + (long)(int)uVar1 * 0x18;
      *(undefined8 *)(lVar2 + 0x30) = uStack0000000000000010;
      *(undefined8 *)(lVar2 + 0x28) = uStack0000000000000008;
      *(undefined8 *)(lVar2 + 0x20) = uStack0000000000000000;
    }
    else {
      in_stack_00000048 = uStack0000000000000008;
      in_stack_00000040 = uStack0000000000000000;
      in_stack_00000050 = uStack0000000000000010;
      FUN_02d35e70(lVar4,&stack0x00000040,
                   *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
  }
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  FUN_03358634(&stack0x00000040,unaff_w19);
  *(undefined8 *)(unaff_x21 + 0x28) = in_stack_00000050;
  *(undefined8 *)(unaff_x21 + 0x20) = in_stack_00000048;
  *(undefined8 *)piVar5 = in_stack_00000040;
  return;
}


