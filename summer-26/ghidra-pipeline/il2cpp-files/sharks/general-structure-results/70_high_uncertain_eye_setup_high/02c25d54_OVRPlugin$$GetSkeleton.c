/*
FUNCTION_NAME: OVRPlugin$$GetSkeleton
ENTRY_POINT: 02c25d54
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


void OVRPlugin__GetSkeleton(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  long unaff_x22;
  long *plVar5;
  
  if ((*(byte *)(unaff_x22 + 0xf15) & 1) == 0) {
    FUN_017fc350(PTR_DAT_0380ba70);
    *(undefined1 *)(unaff_x22 + 0xf15) = 1;
  }
  plVar5 = (long *)(param_1 + 0x10);
  lVar3 = *plVar5;
  if (lVar3 != 0) {
    uVar4 = *(uint *)(param_1 + 0x18);
    if (uVar4 != *(uint *)(lVar3 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar4 + 1;
LAB_02c25e04:
      if (uVar4 < *(uint *)(lVar3 + 0x18)) {
        lVar3 = lVar3 + (long)(int)uVar4 * 0x10;
        puVar2 = (undefined8 *)(lVar3 + 0x28);
        *puVar2 = param_3;
        *(undefined8 *)(lVar3 + 0x20) = param_2;
        thunk_FUN_0188fd20(puVar2,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    uVar1 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380ba70,uVar4 << 1);
    lVar3 = *plVar5;
    if (lVar3 != 0) {
      FUN_02bf1608(lVar3,0,uVar1,0,*(undefined4 *)(lVar3 + 0x18),0);
      *(undefined8 *)(param_1 + 0x10) = uVar1;
      thunk_FUN_0188fd20(plVar5,uVar1);
      uVar4 = *(uint *)(param_1 + 0x18);
      lVar3 = *(long *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x18) = uVar4 + 1;
      if (lVar3 != 0) goto LAB_02c25e04;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


