/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$GetImmersiveDebuggerEnabled
ENTRY_POINT: 0143d8b4
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


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__GetImmersiveDebuggerEnabled
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,uint param_7,long param_8)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long local_88;
  
  if ((DAT_03776a12 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_6682);
    thunk_FUN_00d48444(PTR_DAT_033ee2d8);
    thunk_FUN_00d48444(StringLiteral_11624);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
                      );
    DAT_03776a12 = 1;
  }
  puVar4 = StringLiteral_11624;
  puVar3 = 
  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
  ;
  puVar2 = PTR_DAT_033ee2d8;
  if ((param_8 != 0) && (lVar5 = *(long *)(param_8 + 0x58), lVar5 != 0)) {
    iVar8 = 0;
    do {
      if (*(int *)(lVar5 + 0x18) <= iVar8) {
        return;
      }
      FUN_0132138c(lVar5,iVar8,&local_88,*(undefined8 *)puVar2);
      lVar5 = local_88;
      if ((local_88 == 0) || (lVar7 = *(long *)(local_88 + 0x10), lVar7 == 0)) break;
      if (*(uint *)(lVar7 + 0x18) <= param_7) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar7 = *(long *)(lVar7 + (long)(int)param_7 * 8 + 0x20);
      if (lVar7 == 0) break;
      uVar6 = FUN_014440c0(lVar7,0);
      if ((uVar6 & 1) != 0) {
        lVar7 = *(long *)(lVar5 + 0x18);
        if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x10), lVar7 == 0)) break;
        lVar9 = *(long *)(param_8 + 0x50);
        FUN_0132138c(lVar7,0,&local_88,*(undefined8 *)puVar3);
        if ((local_88 == 0) || (*(long *)(param_8 + 0x70) == 0)) break;
        uVar11 = *(undefined8 *)(local_88 + 0x10);
        FUN_0132138c(*(long *)(param_8 + 0x70),param_7,&local_88,*(undefined8 *)puVar4);
        if (lVar9 == 0) break;
        uVar11 = FUN_0144a43c(lVar9,uVar11,local_88,0);
        if (*(long *)(param_8 + 0x70) == 0) break;
        FUN_0132138c(*(long *)(param_8 + 0x70),param_7,&local_88,*(undefined8 *)puVar4);
        if ((local_88 == 0) || (*(long *)(param_8 + 0x70) == 0)) break;
        uVar10 = *(undefined8 *)(local_88 + 0x10);
        cVar1 = *(char *)(param_8 + 0x27);
        FUN_0132138c(*(long *)(param_8 + 0x70),param_7,&local_88,*(undefined8 *)puVar4);
        if (local_88 == 0) break;
        FUN_01444ef8(uVar11,param_2,param_3,param_4,lVar5,uVar10,param_7,cVar1 != '\0',param_6,
                     *(undefined1 *)(local_88 + 0x18),0);
      }
      lVar5 = *(long *)(param_8 + 0x58);
      iVar8 = iVar8 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


