/*
FUNCTION_NAME: OVRPlugin.GUID$$.ctor
ENTRY_POINT: 033e4ae8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033e4bb4) */

undefined8 OVRPlugin_GUID___ctor(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long lVar7;
  
  if (param_2 != 1) {
    plVar3 = (long *)thunk_FUN_01de26bc();
    if (plVar3 != (long *)0x0) {
      lVar7 = *plVar3;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads)
          {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
            goto code_r0x033e4b9c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01dde8fc(plVar3,*(long *)
                                    Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads
                            ,0);
code_r0x033e4b9c:
      (*(code *)*puVar2)(plVar3,puVar2[1]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01e7f0d0(param_1);
  }
  plVar3 = (long *)__cxa_begin_catch(param_1);
  lVar7 = *plVar3;
  __cxa_end_catch();
  puVar1 = Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads;
  plVar3 = (long *)thunk_FUN_01de26bc();
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_033e4a48;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01dde8fc(plVar3,*(long *)puVar1,0);
LAB_033e4a48:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
  if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db68(lVar7);
  }
  *unaff_x19 = 0;
  return 0xffffffff;
}


