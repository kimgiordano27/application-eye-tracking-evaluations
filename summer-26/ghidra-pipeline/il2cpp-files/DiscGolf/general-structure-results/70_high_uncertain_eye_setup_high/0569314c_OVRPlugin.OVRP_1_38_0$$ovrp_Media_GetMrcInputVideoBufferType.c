/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcInputVideoBufferType
ENTRY_POINT: 0569314c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcInputVideoBufferType(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  int iVar4;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0xa0));
  FUN_02d965b8(PTR_DAT_06a0ba00);
  *(undefined1 *)(unaff_x21 + 0x7cb) = 1;
  puVar2 = OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo;
  puVar1 = PTR_DAT_06a0ba00;
  lVar3 = *(long *)(unaff_x20 + 0x128);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (lVar3 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar4) {
        return;
      }
      FUN_03fd1a8c(&stack0x00000008,lVar3,iVar4,*(undefined8 *)puVar2);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      if ((*(long *)(unaff_x20 + 0x130) == 0) ||
         (FUN_03f35094(*(long *)(unaff_x20 + 0x130),iVar4,*(undefined8 *)puVar1), unaff_x19 == 0))
      break;
      FUN_06320430();
      lVar3 = *(long *)(unaff_x20 + 0x128);
      iVar4 = iVar4 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


