/*
FUNCTION_NAME: OVRPlugin$$set_suggestedCpuPerfLevel
ENTRY_POINT: 02c1a3cc
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__set_suggestedCpuPerfLevel(long param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  uint in_w9;
  long in_x10;
  long in_x11;
  long *unaff_x19;
  long lVar6;
  long *plVar7;
  long *unaff_x21;
  long lVar8;
  
  if (*(long *)(*(long *)(param_1 + 200) + in_x11 * 8 + -8) == in_x10) {
    plVar7 = (long *)FUN_02b0dd90();
  }
  else {
    bVar2 = *(byte *)(*(long *)PTR_DAT_03805178 + 0x130);
    if ((in_w9 < bVar2) ||
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_03805178)) {
      bVar2 = *(byte *)(*unaff_x21 + 0x130);
      if ((in_w9 < bVar2) ||
         (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x21)) {
        plVar7 = (long *)0x0;
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03804428 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        plVar7 = (long *)FUN_02c1a5fc();
      }
    }
    else {
      plVar7 = (long *)FUN_02b1effc();
    }
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar3 = FUN_02be74a8();
  if ((plVar7 != (long *)0x0) && ((uVar3 & 1) != 0)) {
    uVar1 = *(uint *)(plVar7 + 3);
    if (0 < (int)uVar1) {
      lVar8 = 0;
      do {
        if (uVar1 <= (uint)lVar8) {
LAB_02c1a5ec:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        if ((plVar7[lVar8 + 4] == 0) || (FUN_0187f3ac(), unaff_x19 == (long *)0x0)) {
LAB_02c1a5e8:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        uVar3 = (**(code **)(*unaff_x19 + 0x288))();
        if ((uVar3 & 1) != 0) {
          if ((int)plVar7[3] == 1) {
            return plVar7;
          }
          plVar4 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2f98,1);
          if ((uint)lVar8 < *(uint *)(plVar7 + 3)) {
            if (plVar4 == (long *)0x0) goto LAB_02c1a5e8;
            lVar8 = plVar7[lVar8 + 4];
            if ((lVar8 != 0) &&
               (lVar6 = thunk_FUN_01861ac0(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
              uVar5 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
              FUN_017fc474(uVar5,0);
            }
            if ((int)plVar4[3] != 0) {
              plVar4[4] = lVar8;
              thunk_FUN_0188fd20(plVar4 + 4,lVar8);
              return plVar4;
            }
          }
          goto LAB_02c1a5ec;
        }
        uVar1 = *(uint *)(plVar7 + 3);
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < (int)uVar1);
    }
    lVar6 = *(long *)PTR_DAT_037f4dc8;
    lVar8 = *(long *)(lVar6 + 0x38);
    if (lVar8 == 0) {
      FUN_0185db00(lVar6);
      lVar8 = *(long *)(lVar6 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0185daa4();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar8 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0185daa4();
    }
    plVar7 = (long *)**(long **)(lVar8 + 0xb8);
  }
  return plVar7;
}


