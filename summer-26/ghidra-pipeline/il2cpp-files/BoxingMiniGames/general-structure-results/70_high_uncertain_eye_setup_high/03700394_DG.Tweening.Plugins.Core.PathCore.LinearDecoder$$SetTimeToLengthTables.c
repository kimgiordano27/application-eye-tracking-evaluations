/*
FUNCTION_NAME: DG.Tweening.Plugins.Core.PathCore.LinearDecoder$$SetTimeToLengthTables
ENTRY_POINT: 03700394
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void DG_Tweening_Plugins_Core_PathCore_LinearDecoder__SetTimeToLengthTables(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x19;
  long lVar4;
  long *unaff_x20;
  long *plVar5;
  long unaff_x21;
  long *plVar6;
  ulong uVar7;
  long unaff_x29;
  long in_stack_00000010;
  
  if (*unaff_x20 != -1) {
    in_stack_00000010 = unaff_x29 + -8;
    *(undefined1 **)(unaff_x29 + -8) = &stack0x00000008;
    std::__ndk1::__call_once
              ((ulong *)Method_System_ReadOnlySpan<OVRPlugin_DynamicObjectClass>_get_Length__,
               &stack0x00000010,FUN_03713bac);
  }
  uVar2 = (ulong)(int)unaff_x20[1];
  uVar7 = uVar2 - 1;
  if ((uVar7 < (ulong)(*(long *)(unaff_x19 + 0x18) - *(long *)(unaff_x19 + 0x10) >> 3)) &&
     (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x10) + uVar7 * 8), lVar4 != 0)) {
    FUN_03732780(1,lVar4 + 8);
    plVar5 = (long *)(unaff_x21 + 0x10);
    lVar1 = *plVar5;
    uVar3 = *(long *)(unaff_x21 + 0x18) - lVar1 >> 3;
    if (uVar3 <= uVar7) {
      if (uVar2 < uVar3 || uVar2 - uVar3 == 0) {
        if (uVar2 < uVar3) {
          *(ulong *)(unaff_x21 + 0x18) = lVar1 + uVar2 * 8;
        }
      }
      else {
        FUN_03712aa8(plVar5,uVar2 - uVar3);
        lVar1 = *plVar5;
      }
    }
    plVar6 = *(long **)(lVar1 + uVar7 * 8);
    if ((plVar6 != (long *)0x0) && (lVar1 = FUN_037327b0(0xffffffffffffffff,plVar6 + 1), lVar1 == 0)
       ) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    *(long *)(*plVar5 + uVar7 * 8) = lVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_036e0334();
}


