/*
FUNCTION_NAME: OVRPlugin$$CreatePassthroughColorLut
ENTRY_POINT: 06386a10
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreatePassthroughColorLut(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long *plVar8;
  uint uVar9;
  long *local_28;
  
  if ((DAT_0825c583 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db0690);
    FUN_0373b518(PTR_DAT_07d882c0);
    DAT_0825c583 = 1;
  }
  puVar1 = PTR_DAT_07d882c0;
  local_28 = (long *)0x0;
  if (param_2 == (long *)0x0) {
    thunk_FUN_037a15ac(PTR_DAT_07d8ebe8);
    uVar6 = thunk_FUN_037788cc();
    uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6260);
    FUN_061a1b40(uVar6,uVar5,0);
    uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6268);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar6,uVar5);
  }
  plVar8 = (long *)(param_1 + 0x28);
  if (*plVar8 == 0) {
    lVar4 = thunk_FUN_037787d0(param_2,*(undefined8 *)PTR_DAT_07d882c0);
    if (lVar4 != 0) {
      plVar2 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,1);
      if (plVar2 == (long *)0x0) goto LAB_06386c68;
      lVar4 = thunk_FUN_037787d0(param_2,*(undefined8 *)(*plVar2 + 0x40));
      if (lVar4 == 0) goto LAB_06386c5c;
      if ((int)plVar2[3] == 0) goto LAB_06386c10;
      plVar2[4] = (long)param_2;
      thunk_FUN_037aeb94(plVar2 + 4,param_2);
      param_2 = plVar2;
    }
    *plVar8 = (long)param_2;
  }
  else {
    local_28 = (long *)thunk_FUN_037787d0(*plVar8,*(undefined8 *)PTR_DAT_07d882c0);
    if (local_28 == (long *)0x0) {
      plVar2 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,2);
      if (plVar2 == (long *)0x0) {
LAB_06386c68:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar4 = *plVar8;
      if ((lVar4 != 0) &&
         (lVar3 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_06386c5c:
        uVar6 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar6,0);
      }
      if ((int)plVar2[3] != 0) {
        plVar2[4] = lVar4;
        thunk_FUN_037aeb94(plVar2 + 4,lVar4);
        lVar4 = thunk_FUN_037787d0(param_2,*(undefined8 *)(*plVar2 + 0x40));
        if (lVar4 == 0) goto LAB_06386c5c;
        if (1 < *(uint *)(plVar2 + 3)) {
          plVar2[5] = (long)param_2;
          thunk_FUN_037aeb94(plVar2 + 5,param_2);
          *plVar8 = (long)plVar2;
          param_2 = plVar2;
          goto LAB_06386bfc;
        }
      }
LAB_06386c10:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    uVar7 = (uint)local_28[3];
    if ((int)uVar7 < 1) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      do {
        if (uVar7 <= uVar9) goto LAB_06386c10;
      } while ((local_28[(long)(int)uVar9 + 4] != 0) && (uVar9 = uVar9 + 1, (int)uVar9 < (int)uVar7)
              );
    }
    if (uVar9 == uVar7) {
      FUN_03e0337c(&local_28,uVar9 << 1,*(undefined8 *)PTR_DAT_07db0690);
      *plVar8 = (long)local_28;
      thunk_FUN_037aeb94(plVar8);
      if (local_28 == (long *)0x0) goto LAB_06386c68;
    }
    plVar8 = local_28;
    lVar4 = thunk_FUN_037787d0(param_2,*(undefined8 *)(*local_28 + 0x40));
    if (lVar4 == 0) goto LAB_06386c5c;
    if (*(uint *)(plVar8 + 3) <= uVar9) goto LAB_06386c10;
    plVar8 = plVar8 + (long)(int)uVar9 + 4;
    *plVar8 = (long)param_2;
  }
LAB_06386bfc:
  thunk_FUN_037aeb94(plVar8,param_2);
  return;
}


