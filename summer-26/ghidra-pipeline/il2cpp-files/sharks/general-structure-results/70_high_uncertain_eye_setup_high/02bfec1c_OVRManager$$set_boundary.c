/*
FUNCTION_NAME: OVRManager$$set_boundary
ENTRY_POINT: 02bfec1c
PROGRAM: sharks-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRManager__set_boundary(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *unaff_x19;
  uint unaff_w20;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  
  puVar1 = PTR_DAT_037f2f98;
  plVar2 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2f98);
  FUN_02bf1608(*unaff_x19,0,plVar2,0,unaff_w20,0);
  if (plVar2 != (long *)0x0) {
    if ((int)unaff_w20 < (int)plVar2[3]) {
      uVar7 = 0;
      plVar5 = plVar2 + (long)(int)unaff_w20 + 4;
      do {
        lVar4 = *unaff_x19;
        if (lVar4 == 0) goto LAB_02bfed5c;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto OVRManager__get_boundary;
        lVar4 = *(long *)(lVar4 + (long)(int)unaff_w20 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_02bfed5c;
        uVar6 = *(undefined8 *)puVar1;
        lVar3 = thunk_FUN_01861ac0(lVar4,uVar6);
        if (lVar3 == 0) {
LAB_02bfed60:
                    /* WARNING: Subroutine does not return */
          FUN_017fc944(lVar4,uVar6);
        }
        uVar6 = *(undefined8 *)puVar1;
        lVar3 = thunk_FUN_01861ac0(lVar4,uVar6);
        if (lVar3 == 0) goto LAB_02bfed60;
        if (*(uint *)(lVar3 + 0x18) <= uVar7) {
OVRManager__get_boundary:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        lVar4 = *(long *)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
        if ((lVar4 != 0) &&
           (lVar3 = thunk_FUN_01861ac0(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
          uVar6 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar6,0);
        }
        if (*(uint *)(plVar2 + 3) <= unaff_w20 + uVar7) goto OVRManager__get_boundary;
        *plVar5 = lVar4;
        thunk_FUN_0188fd20(plVar5,lVar4);
        uVar7 = uVar7 + 1;
        plVar5 = plVar5 + 1;
      } while ((int)(unaff_w20 + uVar7) < (int)plVar2[3]);
    }
    *unaff_x19 = (long)plVar2;
    thunk_FUN_0188fd20();
    return;
  }
LAB_02bfed5c:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


