/*
FUNCTION_NAME: OVRPlugin$$AddCustomMetadata
ENTRY_POINT: 0532229c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__AddCustomMetadata(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  int unaff_w19;
  long lVar8;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  FUN_03abf234(param_2,param_3,**(undefined8 **)(param_1 + 0xa0));
  *(undefined8 *)(unaff_x21 + 0x20) = param_2;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar6 = FUN_060f60a4();
  if ((uVar6 & 1) == 0) {
    lVar7 = **(long **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
  }
  else {
    if (unaff_x22 == 0) goto LAB_0532241c;
    lVar7 = FUN_060edf00();
  }
  if (*(int *)(*(long *)System_IO_Compression_DeflateStreamNative_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar5 = FUN_05322480();
  puVar2 = UnityEngine_Rendering_Universal_Internal_DeferredPass_TypeInfo;
  puVar1 = UnityEngine_Rendering_Universal_Internal_DeferredLights_TypeInfo;
  if (*(long *)(unaff_x21 + 0x20) != 0) {
    FUN_03ac039c(&stack0x00000008,*(long *)(unaff_x21 + 0x20),
                 *(undefined8 *)System_Delegate_TypeInfo);
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000008 = 0;
    lVar4 = 0;
    in_stack_00000010 = &stack0x00000020;
    do {
      while( true ) {
        do {
          lVar8 = lVar4;
          uVar6 = FUN_04aff1b0(&stack0x00000020,*(undefined8 *)puVar2);
          lVar3 = in_stack_00000030;
          if ((uVar6 & 1) == 0) {
            FUN_04aff1ac(&stack0x00000020,*(undefined8 *)puVar1);
            return lVar8;
          }
          if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar4 = lVar8;
        } while ((*(int *)(in_stack_00000030 + 0x10) != unaff_w19) ||
                ((*(uint *)(in_stack_00000030 + 0x20) != 0 &&
                 ((*(uint *)(in_stack_00000030 + 0x20) & uVar5) == 0))));
        uVar6 = FUN_04f6ebb4(*(undefined8 *)(in_stack_00000030 + 0x18),0);
        if ((uVar6 & 1) == 0) break;
        lVar4 = lVar3;
        if (lVar8 != 0) {
          lVar4 = lVar8;
        }
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar6 = FUN_04f6d65c(lVar7,*(undefined8 *)(lVar3 + 0x18),0);
    } while ((uVar6 & 1) == 0);
    FUN_04aff1ac(&stack0x00000020,*(undefined8 *)puVar1);
    return lVar3;
  }
LAB_0532241c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


