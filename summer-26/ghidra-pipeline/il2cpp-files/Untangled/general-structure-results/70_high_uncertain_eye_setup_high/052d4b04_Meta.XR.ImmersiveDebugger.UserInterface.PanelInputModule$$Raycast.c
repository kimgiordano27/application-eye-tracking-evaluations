/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$Raycast
ENTRY_POINT: 052d4b04
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__Raycast(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  
  if ((DAT_071c10db & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d3cf98);
    FUN_02f07e70(PTR_DAT_06d3cfa0);
    DAT_071c10db = 1;
  }
  puVar1 = PTR_DAT_06d3cfa0;
  lVar4 = param_1[0x18];
  if (lVar4 != 0) {
    iVar5 = 0;
    do {
      lVar4 = *(long *)(lVar4 + 0x60);
      if (lVar4 == 0) break;
      if (*(int *)(lVar4 + 0x18) <= iVar5) {
        return 0;
      }
      uVar2 = FUN_03fd09cc(lVar4,iVar5,*(undefined8 *)puVar1);
                    /* try { // try from 052d4b84 to 053d4bab has its CatchHandler @ 052d4ce8 */
      uVar3 = (**(code **)(*param_1 + 0x5a8))(param_1,uVar2,*(undefined8 *)(*param_1 + 0x5b0));
      if ((uVar3 & 1) != 0) {
        return uVar2;
      }
      lVar4 = param_1[0x18];
      iVar5 = iVar5 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


