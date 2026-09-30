/*
FUNCTION_NAME: OVRPlugin$$ProcessorPerformanceLevelToPerformanceLevelHint
ENTRY_POINT: 02c1a358
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__ProcessorPerformanceLevelToPerformanceLevelHint(long param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x19;
  long lVar9;
  long *unaff_x20;
  long *plVar10;
  long unaff_x21;
  
  FUN_017fc350(*(undefined8 *)(param_1 + 0x178));
  FUN_017fc350(PTR_DAT_037f2c78);
  *(undefined1 *)(unaff_x21 + 0xec3) = 1;
  puVar4 = PTR_DAT_037f2c78;
  plVar10 = (long *)0x0;
  if (unaff_x20 != (long *)0x0) {
    lVar8 = *unaff_x20;
    bVar2 = *(byte *)(lVar8 + 0x130);
    bVar3 = *(byte *)(*(long *)PTR_DAT_03802908 + 0x130);
    if ((bVar2 < bVar3) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_03802908)) {
      bVar3 = *(byte *)(*(long *)PTR_DAT_03803208 + 0x130);
      if ((bVar2 < bVar3) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_03803208)) {
        bVar3 = *(byte *)(*(long *)PTR_DAT_03805178 + 0x130);
        if ((bVar2 < bVar3) ||
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_03805178))
        {
          bVar3 = *(byte *)(*(long *)PTR_DAT_037f2c78 + 0x130);
          if ((bVar2 < bVar3) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_037f2c78
             )) {
            plVar10 = (long *)0x0;
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_03804428 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            plVar10 = (long *)FUN_02c1a5fc();
          }
        }
        else {
          plVar10 = (long *)FUN_02b1effc();
        }
      }
      else {
        plVar10 = (long *)FUN_02b0dd90();
      }
    }
    else {
      plVar10 = (long *)FUN_02b1ca68();
    }
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar5 = FUN_02be74a8();
  if ((plVar10 != (long *)0x0) && ((uVar5 & 1) != 0)) {
    uVar1 = *(uint *)(plVar10 + 3);
    if (0 < (int)uVar1) {
      lVar8 = 0;
      do {
        if (uVar1 <= (uint)lVar8) {
LAB_02c1a5ec:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        if ((plVar10[lVar8 + 4] == 0) || (FUN_0187f3ac(), unaff_x19 == (long *)0x0)) {
LAB_02c1a5e8:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        uVar5 = (**(code **)(*unaff_x19 + 0x288))();
        if ((uVar5 & 1) != 0) {
          if ((int)plVar10[3] == 1) {
            return plVar10;
          }
          plVar6 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2f98,1);
          if ((uint)lVar8 < *(uint *)(plVar10 + 3)) {
            if (plVar6 == (long *)0x0) goto LAB_02c1a5e8;
            lVar8 = plVar10[lVar8 + 4];
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_01861ac0(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
              uVar7 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
              FUN_017fc474(uVar7,0);
            }
            if ((int)plVar6[3] != 0) {
              plVar6[4] = lVar8;
              thunk_FUN_0188fd20(plVar6 + 4,lVar8);
              return plVar6;
            }
          }
          goto LAB_02c1a5ec;
        }
        uVar1 = *(uint *)(plVar10 + 3);
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < (int)uVar1);
    }
    lVar9 = *(long *)PTR_DAT_037f4dc8;
    lVar8 = *(long *)(lVar9 + 0x38);
    if (lVar8 == 0) {
      FUN_0185db00(lVar9);
      lVar8 = *(long *)(lVar9 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0185daa4();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0185daa4();
    }
    plVar10 = (long *)**(long **)(lVar8 + 0xb8);
  }
  return plVar10;
}


