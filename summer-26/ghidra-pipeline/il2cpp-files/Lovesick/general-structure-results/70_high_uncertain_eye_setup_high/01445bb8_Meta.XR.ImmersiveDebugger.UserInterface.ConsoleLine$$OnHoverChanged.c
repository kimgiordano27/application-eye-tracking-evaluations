/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.ConsoleLine$$OnHoverChanged
ENTRY_POINT: 01445bb8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_ConsoleLine__OnHoverChanged(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  int iVar4;
  long unaff_x21;
  long lVar5;
  long *unaff_x25;
  long in_stack_00000008;
  
  lVar3 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if ((*(byte *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x10) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  FUN_0160dd60();
  puVar2 = 
  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
  ;
  puVar1 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__;
  lVar3 = *(long *)(unaff_x19 + 0x18);
  if (lVar3 != 0) {
    iVar4 = 0;
    do {
      lVar3 = *(long *)(lVar3 + 0x18);
      if (lVar3 == 0) break;
      if (*(int *)(lVar3 + 0x18) <= iVar4) {
        lVar5 = *unaff_x25;
        lVar3 = *(long *)(lVar5 + 0x38);
        if (lVar3 == 0) {
          FUN_00d59478(lVar5);
          lVar3 = *(long *)(lVar5 + 0x38);
        }
        lVar3 = *(long *)(lVar3 + 0x10);
        if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
          lVar3 = FUN_00d5941c();
        }
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0x38) + 0x10) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        FUN_0160dd60();
        lVar3 = *(long *)(unaff_x19 + 0x18);
        if (lVar3 != 0) {
          iVar4 = 0;
          goto LAB_01445d04;
        }
        break;
      }
      FUN_0132138c(lVar3,iVar4,&stack0x00000008,*(undefined8 *)puVar1);
      if (in_stack_00000008 == 0) break;
      FUN_0268b6ac(in_stack_00000008,0);
      FUN_0160d178();
      lVar3 = *(long *)(unaff_x19 + 0x18);
      iVar4 = iVar4 + 1;
    } while (lVar3 != 0);
  }
  goto LAB_01445d54;
  while( true ) {
    if (*(int *)(lVar3 + 0x18) <= iVar4) {
      FUN_0160c430();
      (**(code **)(*unaff_x20 + 0x168))();
      return;
    }
    FUN_0132138c(lVar3,iVar4,&stack0x00000008,*(undefined8 *)puVar2);
    if (in_stack_00000008 == 0) break;
    FUN_0144461c();
    FUN_0160d178();
    lVar3 = *(long *)(unaff_x19 + 0x18);
    iVar4 = iVar4 + 1;
    if (lVar3 == 0) break;
LAB_01445d04:
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) break;
  }
LAB_01445d54:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


