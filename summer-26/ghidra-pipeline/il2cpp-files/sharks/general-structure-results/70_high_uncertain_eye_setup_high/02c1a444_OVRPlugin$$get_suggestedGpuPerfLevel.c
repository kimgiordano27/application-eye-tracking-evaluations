/*
FUNCTION_NAME: OVRPlugin$$get_suggestedGpuPerfLevel
ENTRY_POINT: 02c1a444
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__get_suggestedGpuPerfLevel(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long lVar5;
  long *unaff_x21;
  long lVar6;
  
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar2 = FUN_02be74a8();
  if ((param_1 != (long *)0x0) && ((uVar2 & 1) != 0)) {
    uVar1 = *(uint *)(param_1 + 3);
    if (0 < (int)uVar1) {
      lVar6 = 0;
      do {
        if (uVar1 <= (uint)lVar6) {
LAB_02c1a5ec:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        if ((param_1[lVar6 + 4] == 0) || (FUN_0187f3ac(), unaff_x19 == (long *)0x0)) {
LAB_02c1a5e8:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        uVar2 = (**(code **)(*unaff_x19 + 0x288))();
        if ((uVar2 & 1) != 0) {
          if ((int)param_1[3] == 1) {
            return param_1;
          }
          plVar3 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2f98,1);
          if ((uint)lVar6 < *(uint *)(param_1 + 3)) {
            if (plVar3 == (long *)0x0) goto LAB_02c1a5e8;
            lVar6 = param_1[lVar6 + 4];
            if ((lVar6 != 0) &&
               (lVar5 = thunk_FUN_01861ac0(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
              uVar4 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
              FUN_017fc474(uVar4,0);
            }
            if ((int)plVar3[3] != 0) {
              plVar3[4] = lVar6;
              thunk_FUN_0188fd20(plVar3 + 4,lVar6);
              return plVar3;
            }
          }
          goto LAB_02c1a5ec;
        }
        uVar1 = *(uint *)(param_1 + 3);
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)uVar1);
    }
    lVar5 = *(long *)PTR_DAT_037f4dc8;
    lVar6 = *(long *)(lVar5 + 0x38);
    if (lVar6 == 0) {
      FUN_0185db00(lVar5);
      lVar6 = *(long *)(lVar5 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0185daa4();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0185daa4();
    }
    param_1 = (long *)**(long **)(lVar6 + 0xb8);
  }
  return param_1;
}


