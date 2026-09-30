/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.ConsoleLine$$get_Label
ENTRY_POINT: 01445518
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_ConsoleLine__get_Label(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 in_w8;
  long lVar3;
  long unaff_x19;
  int iVar4;
  long unaff_x20;
  long lVar5;
  uint uVar6;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  long in_stack_00000028;
  
  *(undefined1 *)(unaff_x20 + 0xa3f) = in_w8;
  uStack0000000000000008 = 0;
  uStack0000000000000000 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  FUN_0143157c(0,0,0x3f800000,0x3f800000);
  if (*(char *)(unaff_x19 + 0x20) == '\0') {
LAB_014455b0:
    puVar1 = 
    Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
    ;
    lVar3 = *(long *)(unaff_x19 + 0x18);
    if (lVar3 != 0) {
      iVar4 = 0;
      do {
        lVar3 = *(long *)(lVar3 + 0x10);
        if (lVar3 == 0) break;
        if (*(int *)(lVar3 + 0x18) <= iVar4) {
          return;
        }
        FUN_0132138c(lVar3,iVar4,&stack0x00000028,*(undefined8 *)puVar1);
        if (in_stack_00000028 == 0) break;
        FUN_014446e8(uStack0000000000000000,uStack0000000000000008,uStack0000000000000010,
                     uStack0000000000000018,in_stack_00000028,*(undefined1 *)(unaff_x19 + 0x20));
        lVar3 = *(long *)(unaff_x19 + 0x18);
        iVar4 = iVar4 + 1;
      } while (lVar3 != 0);
    }
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 != 0) {
      lVar5 = 4;
      do {
        uVar6 = (int)lVar5 - 4;
        if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar6) goto LAB_014455b0;
        if (*(uint *)(lVar3 + 0x18) <= uVar6) {
LAB_01445620:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (*(long *)(lVar3 + lVar5 * 8) == 0) break;
        uVar2 = FUN_014440c0();
        if ((uVar2 & 1) == 0) {
          lVar3 = *(long *)(unaff_x19 + 0x10);
          if (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_01445620;
            lVar3 = *(long *)(lVar3 + lVar5 * 8);
            if (lVar3 != 0) {
              uStack0000000000000008 = *(undefined8 *)(lVar3 + 0x48);
              uStack0000000000000000 = *(undefined8 *)(lVar3 + 0x40);
              uStack0000000000000018 = *(undefined8 *)(lVar3 + 0x58);
              uStack0000000000000010 = *(undefined8 *)(lVar3 + 0x50);
              goto LAB_014455b0;
            }
          }
          break;
        }
        lVar3 = *(long *)(unaff_x19 + 0x10);
        lVar5 = lVar5 + 1;
      } while (lVar3 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


