/*
FUNCTION_NAME: OVRManager.PassthroughCapabilities$$get_SupportsColorPassthrough
ENTRY_POINT: 02c0df28
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRManager_PassthroughCapabilities__get_SupportsColorPassthrough(long *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  
  if ((*(byte *)(unaff_x19 + 0xe32) & 1) == 0) {
    FUN_017fc350(PTR_DAT_037fa390);
    FUN_017fc350(PTR_DAT_0380b1d0);
    FUN_017fc350(PTR_DAT_03804bd0);
    *(undefined1 *)(unaff_x19 + 0xe32) = 1;
  }
  puVar3 = PTR_DAT_037fa390;
  plVar10 = param_1 + 3;
  if (*plVar10 == 0) {
    lVar6 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380b1d0);
    FUN_02c155e4(lVar6,0);
    *plVar10 = lVar6;
    thunk_FUN_0188fd20(plVar10,lVar6);
    plVar9 = (long *)0x0;
  }
  else {
    plVar9 = *(long **)(*plVar10 + 0x18);
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar5 = FUN_02b0d384(plVar9,0,0);
  if ((uVar5 & 1) != 0) {
    lVar6 = (**(code **)(*param_1 + 0x628))(param_1,0x36,*(undefined8 *)(*param_1 + 0x630));
    if (lVar6 == 0) {
LAB_02c0e0ac:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar1) {
      uVar11 = 0;
      do {
        if (uVar1 <= uVar11) {
LAB_02c0e0b0:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        plVar12 = (long *)(lVar6 + (long)(int)uVar11 * 8 + 0x20);
        plVar7 = (long *)*plVar12;
        if (plVar7 == (long *)0x0) goto LAB_02c0e0ac;
        iVar4 = (**(code **)(*plVar7 + 0x368))(plVar7,*(undefined8 *)(*plVar7 + 0x370));
        if (iVar4 == 0) {
          if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_02c0e0b0;
          plVar12 = (long *)*plVar12;
          if (plVar12 != (long *)0x0) {
            bVar2 = *(byte *)(*(long *)PTR_DAT_03804bd0 + 0x130);
            if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)PTR_DAT_03804bd0)) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc944(plVar12);
            }
          }
          if (*plVar10 != 0) {
            puVar8 = (undefined8 *)(*plVar10 + 0x18);
            *puVar8 = plVar12;
            thunk_FUN_0188fd20(puVar8,plVar12);
            return plVar12;
          }
          goto LAB_02c0e0ac;
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar1);
    }
  }
  return plVar9;
}


