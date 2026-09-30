/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<Vector2>
ENTRY_POINT: 041a0594
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<Vector2>(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  plVar1 = (long *)FUN_076441d4(param_1,0);
  if (plVar1 == (long *)0x0) {
    uVar5 = 3;
    uVar4 = 0;
  }
  else {
                    /* try { // try from 041a05a8 to 042a05bf has its CatchHandler @ 041a0b0c */
    plVar2 = (long *)thunk_FUN_037784fc(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x38));
                    /* try { // try from 041a05c0 to 042a09f3 has its CatchHandler @ 041a01ec */
    lVar6 = *plVar1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d978a0) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_041a0688;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar1,*(long *)PTR_DAT_07d978a0,1);
LAB_041a0688:
    (*(code *)*puVar3)(plVar1);
    lVar6 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678(lVar6);
    }
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(long *)(*plVar2 + 0x40) != *(long *)(lVar6 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar2);
    }
    puVar3 = (undefined8 *)thunk_FUN_03778a20();
    uVar5 = 0;
    *unaff_x20 = *puVar3;
    uVar4 = 1;
  }
  *unaff_x19 = uVar5;
  return uVar4;
}


