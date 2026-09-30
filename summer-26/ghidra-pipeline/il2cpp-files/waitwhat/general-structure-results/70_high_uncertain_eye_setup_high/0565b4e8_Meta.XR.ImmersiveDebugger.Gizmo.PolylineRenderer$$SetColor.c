/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetColor
ENTRY_POINT: 0565b4e8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetColor
          (long *param_1,long *param_2,long *param_3,long param_4)

{
  bool in_ZR;
  undefined8 uVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (in_ZR) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if ((param_2 != (long *)0x0) && (param_3 != (long *)0x0)) {
      lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
      }
      lVar3 = thunk_FUN_031c3cac(param_2,lVar3);
      if (lVar3 != 0) {
        lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_031c09d4(lVar3);
        }
        lVar3 = thunk_FUN_031c3cac(param_3,lVar3);
        if (lVar3 != 0) {
          lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_031c09d4(lVar3);
          }
          if (*(long *)(*param_2 + 0x40) == *(long *)(lVar3 + 0x40)) {
            puVar2 = (undefined4 *)thunk_FUN_031c3ef0(param_2);
            uVar4 = *puVar2;
            uVar5 = puVar2[1];
            uVar6 = puVar2[2];
            lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_031c09d4(lVar3);
            }
            param_2 = param_3;
            if (*(long *)(*param_3 + 0x40) == *(long *)(lVar3 + 0x40)) {
              puVar2 = (undefined4 *)thunk_FUN_031c3ef0();
                    /* WARNING: Could not recover jumptable at 0x0565b624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar1 = (**(code **)(*param_1 + 0x1b8))
                                (uVar4,uVar5,uVar6,*puVar2,puVar2[1],puVar2[2],param_1,
                                 *(undefined8 *)(*param_1 + 0x1c0));
              return uVar1;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03189058(param_2);
        }
      }
      FUN_0595040c(2,0);
      uVar1 = 0;
    }
  }
  return uVar1;
}


