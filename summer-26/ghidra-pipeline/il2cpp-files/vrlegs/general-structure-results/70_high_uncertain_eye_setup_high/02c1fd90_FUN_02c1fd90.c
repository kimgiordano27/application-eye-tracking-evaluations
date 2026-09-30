/*
FUNCTION_NAME: FUN_02c1fd90
ENTRY_POINT: 02c1fd90
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


/* WARNING: Removing unreachable block (ram,0x02c1fee4) */

void FUN_02c1fd90(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  char local_44 [4];
  long local_38;
  
  if ((DAT_041292bc & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d168c0);
    FUN_01ab69ac(PTR_DAT_03d168c8);
    FUN_01ab69ac(PTR_DAT_03d168d0);
    FUN_01ab69ac(PTR_DAT_03d168d8);
    DAT_041292bc = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar7 = *(long *)(param_2 + 0x200);
  local_44[0] = '\0';
  FUN_027e0bd8(lVar7,local_44,0);
  puVar3 = PTR_DAT_03d168d8;
  puVar2 = PTR_DAT_03d168c8;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar1 = *(int *)(lVar7 + 0x18);
  while( true ) {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      FUN_01b5f01c(lVar7,param_1,*(undefined8 *)PTR_DAT_03d168c0);
      if (local_44[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar7,0);
      }
      return;
    }
    FUN_02215a88(lVar7,iVar1,&local_38,*(undefined8 *)puVar3);
    lVar4 = local_38;
    if (local_38 == 0) break;
    plVar5 = *(long **)(local_38 + 0x10);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar6 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
    if ((uVar6 & 1) == 0) {
      FUN_022190f4(lVar7,iVar1,*(undefined8 *)puVar2);
      FUN_02c1ff68(lVar4,0);
      FUN_02c1f044(lVar4);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


