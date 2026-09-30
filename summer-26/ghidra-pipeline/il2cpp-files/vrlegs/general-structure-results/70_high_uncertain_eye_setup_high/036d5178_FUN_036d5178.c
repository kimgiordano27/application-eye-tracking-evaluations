/*
FUNCTION_NAME: FUN_036d5178
ENTRY_POINT: 036d5178
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x036d533c) */
/* WARNING: Removing unreachable block (ram,0x036d5348) */

void FUN_036d5178(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  char local_34 [4];
  
  if ((DAT_04133aca & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(
                Method_Crosstales_BWF_Manager_BaseManager<BadWordManager,_BadWordFilter>_onContainsComplete__
                );
    FUN_01ab69ac(PTR_DAT_03cc6f48);
    DAT_04133aca = 1;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  lVar3 = FUN_027df29c(0);
  if (lVar3 == 0) {
LAB_036d5338:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar2 = FUN_027e32ac(lVar3,0);
  if (iVar1 == iVar2) {
    if (param_2 == 0) goto LAB_036d5338;
    (**(code **)(param_2 + 0x18))
              (*(undefined8 *)(param_2 + 0x40),param_3,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    plVar4 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc6f48);
    FUN_027d7058(plVar4,0,0);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    local_34[0] = '\0';
    FUN_027e0bd8(uVar8,local_34,0);
    lVar3 = *(long *)(param_1 + 0x18);
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    FUN_036d5468(&local_50,param_2,param_3,plVar4);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uStack_68 = uStack_48;
    local_70 = local_50;
    local_60 = local_40;
    FUN_01b5f01c(lVar3,&local_70,
                 *(undefined8 *)
                  Method_Crosstales_BWF_Manager_BaseManager<BadWordManager,_BadWordFilter>_onContainsComplete__
                );
    if (local_34[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
    lVar3 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_036d5314;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_01a472ec(plVar4,*(long *)PTR_DAT_03cbed08,0);
LAB_036d5314:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  return;
}


