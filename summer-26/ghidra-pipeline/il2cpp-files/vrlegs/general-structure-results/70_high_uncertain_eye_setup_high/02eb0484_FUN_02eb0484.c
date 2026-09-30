/*
FUNCTION_NAME: FUN_02eb0484
ENTRY_POINT: 02eb0484
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02eb0578) */
/* WARNING: Removing unreachable block (ram,0x02eb0640) */

void FUN_02eb0484(long param_1,ulong param_2,long param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  char local_54 [4];
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_0412a641 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d1f958);
    FUN_01ab69ac(PTR_DAT_03d1f960);
    FUN_01ab69ac(PTR_DAT_03d1f968);
    DAT_0412a641 = 1;
  }
  iVar3 = thunk_FUN_01aa519c(param_1 + 0x8c,1,0,0);
  if (iVar3 == 0) {
    local_54[0] = '\0';
    FUN_027e0bd8(param_1,local_54,0);
    lVar4 = FUN_01aa5318(param_1 + 0x68,0);
    lVar5 = FUN_01aa5318(param_1 + 0x80,0);
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x130) = 1;
    if (local_54[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
    }
    if (param_3 == 0) {
      uVar6 = FUN_02eacbb0(param_1);
      bVar1 = false;
      if (((lVar4 != 0) && ((uVar6 & 1) == 0)) && ((param_2 & 1) != 0)) {
        bVar1 = *(char *)(lVar4 + 0xa8) != '\0';
      }
      if (lVar5 == 0) {
        lVar4 = 0;
      }
      else {
        bVar2 = FUN_02eacbb0(lVar5);
        bVar1 = (bool)(bVar1 & (bVar2 ^ 1));
        lVar4 = 0;
        if ((bVar2 & 1) == 0) {
          lVar4 = lVar5;
        }
      }
      lVar5 = *(long *)(param_1 + 0x58);
      local_68 = 0;
      uStack_60 = 0;
      local_50 = CONCAT71(local_50._1_7_,bVar1);
      FUN_020f03e8(&local_68,&local_50,lVar4,*(undefined8 *)PTR_DAT_03d1f958);
      if (lVar5 == 0) goto LAB_02eb064c;
      local_50 = local_68;
      uStack_48 = uStack_60;
      FUN_02132b60(lVar5,&local_50,*(undefined8 *)PTR_DAT_03d1f960);
    }
    else {
      if (lVar5 != 0) {
        FUN_02eb06cc(lVar5,param_3);
      }
      if (*(long *)(param_1 + 0x58) == 0) {
LAB_02eb064c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02132e78(*(long *)(param_1 + 0x58),param_3,*(undefined8 *)PTR_DAT_03d1f968);
    }
  }
  return;
}


