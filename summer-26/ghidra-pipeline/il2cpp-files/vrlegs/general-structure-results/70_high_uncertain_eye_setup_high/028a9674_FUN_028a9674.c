/*
FUNCTION_NAME: FUN_028a9674
ENTRY_POINT: 028a9674
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x028a9824) */

void FUN_028a9674(long param_1,long *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char local_34 [4];
  
  if ((DAT_0412682a & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc0648);
    FUN_01ab69ac(PTR_DAT_03d01cd0);
    FUN_01ab69ac(PTR_DAT_03d01cd8);
    FUN_01ab69ac(PTR_DAT_03cd2de8);
    FUN_01ab69ac(PTR_DAT_03cbf288);
    DAT_0412682a = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0xb0);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar6,local_34,0);
  lVar4 = *(long *)(param_1 + 0xb8);
  if (*param_2 == 0) {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  else {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar4 + 0x18) <= *(int *)(*param_2 + 0x18)) goto LAB_028a9764;
  }
  uVar2 = FUN_022158c0(lVar4,*(undefined8 *)PTR_DAT_03d01cd8);
  lVar4 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbf288,uVar2);
  *param_2 = lVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2);
  lVar4 = *(long *)(param_1 + 0xb8);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
LAB_028a9764:
  FUN_02216b94(lVar4,*param_2,*(undefined8 *)PTR_DAT_03d01cd0);
  lVar4 = *(long *)(param_1 + 0xb8);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  *param_3 = *(undefined4 *)(lVar4 + 0x18);
  *param_4 = *(undefined4 *)(param_1 + 0xc0);
  lVar5 = *(long *)PTR_DAT_03cc0648;
  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
  uVar3 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 200));
  if ((uVar3 & 1) == 0) {
    *(undefined4 *)(lVar4 + 0x18) = 0;
  }
  else {
    iVar1 = *(int *)(lVar4 + 0x18);
    *(undefined4 *)(lVar4 + 0x18) = 0;
    if (0 < iVar1) {
      FUN_02793a34(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
    }
  }
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
  }
  return;
}


