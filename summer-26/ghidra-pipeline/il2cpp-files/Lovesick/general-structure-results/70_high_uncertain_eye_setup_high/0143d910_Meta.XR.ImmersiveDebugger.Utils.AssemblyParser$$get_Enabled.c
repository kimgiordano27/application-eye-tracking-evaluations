/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$get_Enabled
ENTRY_POINT: 0143d910
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__get_Enabled
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  uint unaff_w20;
  int iVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long in_stack_00000008;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(
                    Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
                    );
  *(undefined1 *)(unaff_x22 + 0xa12) = 1;
  puVar4 = StringLiteral_11624;
  puVar3 = 
  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
  ;
  puVar2 = PTR_DAT_033ee2d8;
  if ((unaff_x19 != 0) && (lVar5 = *(long *)(unaff_x19 + 0x58), lVar5 != 0)) {
    iVar8 = 0;
    do {
      if (*(int *)(lVar5 + 0x18) <= iVar8) {
        return;
      }
      FUN_0132138c(lVar5,iVar8,&stack0x00000008,*(undefined8 *)puVar2);
      lVar5 = in_stack_00000008;
      if ((in_stack_00000008 == 0) || (lVar7 = *(long *)(in_stack_00000008 + 0x10), lVar7 == 0))
      break;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar7 = *(long *)(lVar7 + (long)(int)unaff_w20 * 8 + 0x20);
      if (lVar7 == 0) break;
      uVar6 = FUN_014440c0(lVar7,0);
      if ((uVar6 & 1) != 0) {
        lVar7 = *(long *)(lVar5 + 0x18);
        if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x10), lVar7 == 0)) break;
        lVar9 = *(long *)(unaff_x19 + 0x50);
        FUN_0132138c(lVar7,0,&stack0x00000008,*(undefined8 *)puVar3);
        if ((in_stack_00000008 == 0) || (*(long *)(unaff_x19 + 0x70) == 0)) break;
        uVar11 = *(undefined8 *)(in_stack_00000008 + 0x10);
        FUN_0132138c(*(long *)(unaff_x19 + 0x70),unaff_w20,&stack0x00000008,*(undefined8 *)puVar4);
        if (lVar9 == 0) break;
        uVar11 = FUN_0144a43c(lVar9,uVar11,in_stack_00000008,0);
        if (*(long *)(unaff_x19 + 0x70) == 0) break;
        FUN_0132138c(*(long *)(unaff_x19 + 0x70),unaff_w20,&stack0x00000008,*(undefined8 *)puVar4);
        if ((in_stack_00000008 == 0) || (*(long *)(unaff_x19 + 0x70) == 0)) break;
        uVar10 = *(undefined8 *)(in_stack_00000008 + 0x10);
        cVar1 = *(char *)(unaff_x19 + 0x27);
        FUN_0132138c(*(long *)(unaff_x19 + 0x70),unaff_w20,&stack0x00000008,*(undefined8 *)puVar4);
        if (in_stack_00000008 == 0) break;
        FUN_01444ef8(uVar11,param_2,param_3,param_4,lVar5,uVar10,unaff_w20,cVar1 != '\0');
      }
      lVar5 = *(long *)(unaff_x19 + 0x58);
      iVar8 = iVar8 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


