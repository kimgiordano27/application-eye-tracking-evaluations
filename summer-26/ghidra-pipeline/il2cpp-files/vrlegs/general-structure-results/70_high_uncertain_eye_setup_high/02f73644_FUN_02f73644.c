/*
FUNCTION_NAME: FUN_02f73644
ENTRY_POINT: 02f73644
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f73944) */
/* WARNING: Removing unreachable block (ram,0x02f7396c) */

int FUN_02f73644(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 local_a0;
  long **pplStack_98;
  long *local_90;
  undefined8 local_88;
  int *piStack_80;
  undefined8 *local_78;
  long *plStack_70;
  undefined8 *local_68;
  char local_5c [4];
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  int local_3c;
  long local_38;
  
  puVar1 = PTR_DAT_03d1fee8;
  local_3c = param_2;
  local_38 = param_1;
  if ((DAT_0412acb5 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d1fee8);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(PTR_DAT_03d25048);
    FUN_01ab69ac(PTR_DAT_03d25050);
    FUN_01ab69ac(PTR_DAT_03d25058);
                    /* try { // try from 02f736b8 to 030737fb has its CatchHandler @ 02f736b8
                       catch() { ... } // from try @ 02f736b8 with catch @ 02f736b8
                       catch() { ... } // from try @ 02f738dc with catch @ 02f736b8
                       catch() { ... } // from try @ 02f739a0 with catch @ 02f736b8
                       catch() { ... } // from try @ 02f739a8 with catch @ 02f736b8
                       catch() { ... } // from try @ 02f73a68 with catch @ 02f736b8 */
    FUN_01ab69ac(PTR_DAT_03d25060);
    DAT_0412acb5 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_58 = (long *)0x0;
  local_5c[0] = '\0';
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_02f651a8();
  puVar2 = PTR_DAT_03d25048;
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
    local_88 = CONCAT44(local_88._4_4_,param_2);
    lVar5 = thunk_FUN_01a89a98(*(undefined8 *)puVar2,&local_88);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,0);
    }
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar4[4] = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 4,lVar5);
    uVar7 = FUN_026780b0(*(undefined8 *)PTR_DAT_03d25058,plVar4,0);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar5);
    }
    FUN_02f6520c(local_38,uVar7,*(undefined8 *)PTR_DAT_03d25060);
    param_1 = local_38;
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    local_3c = 4;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  local_5c[0] = '\0';
  FUN_027e0bd8(uVar7,local_5c,0);
  iVar10 = *(int *)(local_38 + 0xd8);
  if (local_3c != 0) {
    if ((iVar10 == 4) && (local_3c == 4)) {
      iVar9 = 5;
      iVar10 = 4;
      iVar8 = 4;
      goto LAB_02f738a0;
    }
                    /* try { // try from 02f737fc to 03073823 has its CatchHandler @ 02f739cc */
    if (iVar10 < local_3c) {
      *(int *)(local_38 + 0xd8) = local_3c;
    }
    if (1 < local_3c) {
      uStack_48 = *(undefined8 *)(local_38 + 0xf8);
      local_50 = *(undefined8 *)(local_38 + 0x100);
      local_58 = *(long **)(local_38 + 200);
      if (local_3c == 4) {
                    /* try { // try from 02f73858 to 03073883 has its CatchHandler @ 02f739c8 */
        if (((*(long *)(local_38 + 0xa8) == 0) && (iVar10 != 3)) &&
           (*(char *)(local_38 + 0xa1) == '\0')) {
          if (*(long *)(local_38 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if ((*(byte *)(*(long *)(local_38 + 0x50) + 0x1c) & 1) != 0) {
            plVar4 = *(long **)(local_38 + 0xe8);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            uVar3 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
            if ((uVar3 & 1) == 0) goto LAB_02f73894;
          }
        }
        *(undefined8 *)(local_38 + 200) = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(local_38 + 200),0);
      }
      iVar9 = 0xb;
      iVar8 = 0;
      goto LAB_02f738a0;
    }
  }
LAB_02f73894:
  iVar9 = 5;
  iVar8 = iVar10;
LAB_02f738a0:
  if (local_5c[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
  }
  if ((iVar9 == 0xb) || (iVar9 == 0)) {
    piStack_80 = &local_3c;
    local_78 = &local_50;
    plStack_70 = &local_38;
    local_88 = 0;
    local_68 = &uStack_48;
    if ((iVar10 == 4 || local_3c == 4) && (local_58 != (long *)0x0)) {
      pplStack_98 = &local_58;
      local_a0 = 0;
      local_90 = &local_38;
      if (*(long *)(local_38 + 0xa8) != 0) {
        (**(code **)(*local_58 + 1000))
                  (local_58,*(long *)(local_38 + 0xa8),*(undefined8 *)(*local_58 + 0x3f0));
      }
      FUN_019c4920(&local_a0);
    }
    FUN_019c4a58(&local_88);
    iVar8 = iVar10;
  }
  return iVar8;
}


