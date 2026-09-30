/*
FUNCTION_NAME: OVRPlugin$$GetRenderModelProperties
ENTRY_POINT: 01d94bec
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetRenderModelProperties(long param_1,undefined8 param_2,long param_3)

{
  bool in_CY;
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long in_x9;
  long *unaff_x19;
  
  if ((!in_CY) || (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_3)) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc8d0();
  }
  plVar1 = (long *)FUN_01cd4640();
  uVar2 = FUN_01cc8674(plVar1,0,0);
  if (((uVar2 & 1) == 0) || (uVar2 = FUN_01cc8674(plVar1), (uVar2 & 1) == 0)) {
    return 0;
  }
  lVar3 = (**(code **)(*unaff_x19 + 0x238))();
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x18) == 0)) {
    if (plVar1 != (long *)0x0) {
      lVar3 = (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
      uVar8 = (**(code **)(*unaff_x19 + 0x1a8))();
      uVar9 = (**(code **)(*unaff_x19 + 0x228))();
      if (lVar3 != 0) {
        uVar8 = FUN_01d62b4c(lVar3,uVar8,uVar9,0);
        return uVar8;
      }
    }
  }
  else {
    plVar4 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0234c5a8);
    if (plVar4 != (long *)0x0) {
      if (0 < (int)plVar4[3]) {
        uVar10 = 0;
        do {
          if (*(uint *)(lVar3 + 0x18) <= uVar10) {
LAB_01d94de4:
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          plVar5 = *(long **)(lVar3 + (long)(int)uVar10 * 8 + 0x20);
          if (plVar5 == (long *)0x0) goto LAB_01d94de0;
          lVar6 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_0103ffe0(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0)) {
            uVar8 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
            FUN_00fdc400(uVar8,0);
          }
          if (*(uint *)(plVar4 + 3) <= uVar10) goto LAB_01d94de4;
          plVar4[(long)(int)uVar10 + 4] = lVar6;
          thunk_FUN_0106e12c(plVar4 + (long)(int)uVar10 + 4,lVar6);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)plVar4[3]);
      }
      if (plVar1 != (long *)0x0) {
        lVar3 = (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
        uVar8 = (**(code **)(*unaff_x19 + 0x1a8))();
        uVar9 = (**(code **)(*unaff_x19 + 0x228))();
        if (lVar3 != 0) {
          uVar8 = FUN_01d62c44(lVar3,uVar8,uVar9,plVar4,0);
          return uVar8;
        }
      }
    }
  }
LAB_01d94de0:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


