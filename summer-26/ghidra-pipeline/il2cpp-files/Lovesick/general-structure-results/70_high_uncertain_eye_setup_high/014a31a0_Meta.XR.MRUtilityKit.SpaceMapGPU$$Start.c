/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$Start
ENTRY_POINT: 014a31a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMapGPU__Start(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  int in_w8;
  undefined4 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x26;
  long lVar4;
  undefined1 in_stack_00000008;
  undefined4 uStack0000000000000018;
  int iStack000000000000001c;
  
  while( true ) {
    if (in_w8 <= unaff_w21) {
      if (unaff_x20 != 0) {
        lVar4 = *(long *)(unaff_x20 + 0x80);
        *(undefined1 *)(unaff_x20 + 0x29) = 0;
        if (*(char *)(unaff_x20 + 0x28) == '\0') {
          if (lVar4 != 0) {
            (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28))
            ;
          }
          *(int *)(unaff_x20 + 0x38) = *(int *)(unaff_x20 + 0x38) + 1;
        }
        else {
          if (lVar4 != 0) {
            (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28))
            ;
          }
          FUN_014a2798();
        }
        *unaff_x19 = 0xfffffffe;
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_016a2130(unaff_x19 + 2,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar4 = *(long *)(unaff_x20 + 0x88);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      in_w8 = *(int *)(unaff_x26 + 0x18);
    }
    iVar2 = FUN_017726a0(*(undefined4 *)(lVar4 + 0x18),in_w8 - unaff_w21,0);
    FUN_01795470(*(undefined8 *)(unaff_x19 + 10),unaff_x19[0xc],*(undefined8 *)(unaff_x20 + 0x88),0,
                 iVar2,0);
    lVar4 = *(long *)(unaff_x20 + 0x78);
    if (lVar4 != 0) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uStack0000000000000018 = 0xff7fffff;
      iStack000000000000001c = iVar2;
      (**(code **)(lVar4 + 0x18))
                (*(undefined8 *)(lVar4 + 0x40),(long)&stack0x00000018 + 4,
                 *(undefined8 *)(unaff_x20 + 0x88),&stack0x00000018,*(undefined8 *)(lVar4 + 0x28));
    }
    puVar1 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
    unaff_x19[0xc] = unaff_x19[0xc] + iVar2;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_017ee208(0);
    in_stack_00000008 = FUN_016a2efc();
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar3 = FUN_016a2f04(&stack0x00000008,0);
    if ((uVar3 & 1) == 0) break;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_016a32c8(&stack0x00000008,0);
    unaff_x26 = *(long *)(unaff_x19 + 10);
    if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    unaff_w21 = unaff_x19[0xc];
    in_w8 = *(int *)(unaff_x26 + 0x18);
    unaff_x24 = (long *)System_SystemException_TypeInfo;
  }
  *unaff_x19 = 0;
  *(undefined1 *)(unaff_x19 + 0xd) = in_stack_00000008;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_010bbddc(unaff_x19 + 2,&stack0x00000008);
  return;
}


