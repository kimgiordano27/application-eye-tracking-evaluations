/*
FUNCTION_NAME: OVRManager$$get_tracker
ENTRY_POINT: 02bfeb0c
PROGRAM: sharks-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_8
*/


void OVRManager__get_tracker(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar7 = *unaff_x19;
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02bfcc88(uVar5,lVar7);
  puVar3 = PTR_DAT_037f2f98;
  plVar8 = (long *)*unaff_x19;
  if (plVar8 == (long *)0x0) {
LAB_02bfed5c:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  if (*(char *)(unaff_x20 + 0x1c) == '\0') {
    if ((int)plVar8[3] <= *(int *)(unaff_x20 + 0x18)) {
      return;
    }
    lVar7 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2f98);
    FUN_02bf1608(*unaff_x19,0,lVar7,0,*(undefined4 *)(unaff_x20 + 0x18),0);
    *unaff_x19 = lVar7;
  }
  else {
    iVar1 = (int)plVar8[3];
    uVar2 = iVar1 - 1;
    if (*(int *)(unaff_x20 + 0x18) == iVar1) {
      if (iVar1 == 0) goto OVRManager__get_boundary;
      unaff_x19 = plVar8 + (long)(int)uVar2 + 4;
      lVar7 = *unaff_x19;
      if (lVar7 == 0) goto LAB_02bfed5c;
      uVar5 = *(undefined8 *)PTR_DAT_037f2f98;
      lVar4 = thunk_FUN_01861ac0(lVar7,uVar5);
      if (lVar4 == 0) {
LAB_02bfed80:
                    /* WARNING: Subroutine does not return */
        FUN_017fc944(lVar7,uVar5);
      }
      uVar5 = *(undefined8 *)puVar3;
      lVar4 = thunk_FUN_01861ac0(lVar7,uVar5);
      if (lVar4 == 0) goto LAB_02bfed80;
      if (*(int *)(lVar4 + 0x18) == 0) {
OVRManager__get_boundary:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      plVar6 = *(long **)(lVar4 + 0x20);
      if ((plVar6 != (long *)0x0) &&
         (lVar7 = thunk_FUN_01861ac0(plVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0)) {
LAB_02bfed6c:
        uVar5 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar5,0);
      }
      if (*(uint *)(plVar8 + 3) <= uVar2) goto OVRManager__get_boundary;
    }
    else {
      plVar6 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2f98);
      FUN_02bf1608(*unaff_x19,0,plVar6,0,uVar2,0);
      if (plVar6 == (long *)0x0) goto LAB_02bfed5c;
      if ((int)uVar2 < (int)plVar6[3]) {
        uVar9 = 0;
        plVar8 = plVar6 + (long)(int)uVar2 + 4;
        do {
          lVar7 = *unaff_x19;
          if (lVar7 == 0) goto LAB_02bfed5c;
          if (*(uint *)(lVar7 + 0x18) <= uVar2) goto OVRManager__get_boundary;
          lVar7 = *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
          if (lVar7 == 0) goto LAB_02bfed5c;
          uVar5 = *(undefined8 *)puVar3;
          lVar4 = thunk_FUN_01861ac0(lVar7,uVar5);
          if (lVar4 == 0) {
LAB_02bfed60:
                    /* WARNING: Subroutine does not return */
            FUN_017fc944(lVar7,uVar5);
          }
          uVar5 = *(undefined8 *)puVar3;
          lVar4 = thunk_FUN_01861ac0(lVar7,uVar5);
          if (lVar4 == 0) goto LAB_02bfed60;
          if (*(uint *)(lVar4 + 0x18) <= uVar9) goto OVRManager__get_boundary;
          lVar7 = *(long *)(lVar4 + (long)(int)uVar9 * 8 + 0x20);
          if ((lVar7 != 0) &&
             (lVar4 = thunk_FUN_01861ac0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0))
          goto LAB_02bfed6c;
          if (*(uint *)(plVar6 + 3) <= uVar2 + uVar9) goto OVRManager__get_boundary;
          *plVar8 = lVar7;
          thunk_FUN_0188fd20(plVar8,lVar7);
          uVar9 = uVar9 + 1;
          plVar8 = plVar8 + 1;
        } while ((int)(uVar2 + uVar9) < (int)plVar6[3]);
      }
    }
    *unaff_x19 = (long)plVar6;
  }
  thunk_FUN_0188fd20();
  return;
}


