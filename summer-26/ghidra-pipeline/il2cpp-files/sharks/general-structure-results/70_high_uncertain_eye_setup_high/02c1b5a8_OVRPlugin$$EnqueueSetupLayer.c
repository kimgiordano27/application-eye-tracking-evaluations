/*
FUNCTION_NAME: OVRPlugin$$EnqueueSetupLayer
ENTRY_POINT: 02c1b5a8
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__EnqueueSetupLayer(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  uint in_w9;
  long lVar8;
  long in_x10;
  long *unaff_x19;
  long *unaff_x22;
  
  if (*(long *)(in_x10 + -8) != param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc944();
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_03805178 + 0x130);
  if (((bVar1 <= in_w9) &&
      (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_03805178)) &&
     (plVar6 = (long *)(**(code **)(param_1 + 0x1b8))(), plVar6 != (long *)0x0)) {
    bVar1 = *(byte *)(*plVar6 + 0x130);
    bVar2 = *(byte *)(*(long *)PTR_DAT_037fc238 + 0x130);
    if ((bVar2 <= bVar1) &&
       (lVar8 = *(long *)(*plVar6 + 200),
       *(long *)(lVar8 + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_037fc238)) {
      bVar2 = *(byte *)(*unaff_x22 + 0x130);
      if ((bVar1 < bVar2) || (*(long *)(lVar8 + (ulong)bVar2 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc944(plVar6);
      }
      plVar7 = (long *)FUN_02b1c1d0(plVar6,0);
      uVar3 = FUN_02b0f554(plVar7,plVar6,0);
      uVar4 = 0;
      if ((uVar3 & 1) != 0) {
        return 0;
      }
      if (plVar7 != (long *)0x0) {
        lVar8 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
        uVar4 = (**(code **)(*unaff_x19 + 0x1e8))();
        if (lVar8 != 0) {
          if ((uint)uVar4 < *(uint *)(lVar8 + 0x18)) {
            return *(undefined8 *)(lVar8 + (long)(int)(uint)uVar4 * 8 + 0x20);
          }
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
      }
      goto LAB_02c1b69c;
    }
  }
  uVar3 = FUN_02b0f554();
  uVar4 = 0;
  if ((uVar3 & 1) == 0) {
    if (unaff_x19 == (long *)0x0) {
LAB_02c1b69c:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8(uVar4);
    }
    uVar3 = FUN_02b0f3d4();
    uVar4 = 0;
    if ((uVar3 & 1) != 0) {
      bVar1 = *(byte *)(*unaff_x22 + 0x130);
      if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc944();
      }
      uVar5 = FUN_02b1c1d0();
      uVar3 = FUN_02b0f554();
      uVar4 = 0;
      if ((uVar3 & 1) == 0) {
        uVar4 = uVar5;
      }
    }
  }
  return uVar4;
}


