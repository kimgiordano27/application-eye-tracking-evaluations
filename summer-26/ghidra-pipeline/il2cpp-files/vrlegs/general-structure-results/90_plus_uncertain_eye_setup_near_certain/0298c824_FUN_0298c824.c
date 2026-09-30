/*
FUNCTION_NAME: FUN_0298c824
ENTRY_POINT: 0298c824
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0298cbcc) */
/* WARNING: Removing unreachable block (ram,0x0298cc38) */

void FUN_0298c824(long *param_1)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  char local_58 [4];
  char local_54 [4];
  
  if ((DAT_04127ccf & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbfb98);
    FUN_01ab69ac(PTR_DAT_03d07900);
    FUN_01ab69ac(PTR_DAT_03d07960);
    FUN_01ab69ac(PTR_DAT_03d07968);
    FUN_01ab69ac(PTR_DAT_03ccaef8);
    FUN_01ab69ac(PTR_DAT_03d07970);
    DAT_04127ccf = 1;
  }
  local_54[0] = '\0';
  local_58[0] = '\0';
  FUN_0298cd2c(param_1);
  lVar10 = param_1[2];
  if (lVar10 == 0) goto LAB_0298cc34;
  if ((*(long *)(lVar10 + 0xf0) != 0) && ((char)param_1[4] == '\0')) {
    (**(code **)(*param_1 + 0x268))
              (param_1,*(long *)(lVar10 + 0xf0),*(undefined8 *)(*param_1 + 0x270));
    lVar10 = param_1[2];
    if (lVar10 == 0) goto LAB_0298cc34;
  }
  puVar4 = PTR_DAT_03d07970;
  if (*(long *)(lVar10 + 0x100) != 0) {
    *(undefined1 *)((long)param_1 + 0xdd) = 1;
  }
  uVar9 = 0xfffe;
  if (*(char *)(lVar10 + 0x68) == '\0') {
    uVar9 = 0xffff;
  }
  *(undefined2 *)(param_1 + 0xd) = uVar9;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_029be3b0(0);
  lVar10 = param_1[0x2b];
  *(undefined4 *)((long)param_1 + 0x174) = uVar5;
  if (lVar10 == 0) {
LAB_0298c94c:
    puVar4 = PTR_DAT_03cbfb98;
    if (param_1[2] == 0) goto LAB_0298cc34;
    uVar5 = FUN_0299ebac(param_1[2],0);
    lVar10 = FUN_01ab6a94(*(undefined8 *)puVar4,uVar5);
    param_1[0x2b] = lVar10;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x2b,lVar10);
  }
  else {
    if (param_1[2] == 0) goto LAB_0298cc34;
    iVar6 = FUN_0299ebac(param_1[2],0);
    if (iVar6 != *(int *)(lVar10 + 0x18)) goto LAB_0298c94c;
  }
  lVar10 = param_1[0x28];
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x29] = 0;
  if (lVar10 == 0) {
LAB_0298cc34:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar2 = *(uint *)(lVar10 + 0x18);
  if (0 < (long)((ulong)uVar2 << 0x20)) {
    uVar12 = 0;
    do {
      if (uVar2 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined4 *)(lVar10 + 0x20 + uVar12 * 4) = 0;
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)(int)uVar2);
  }
  lVar10 = param_1[0x31];
  local_54[0] = '\0';
  FUN_027e0bd8(lVar10,local_54,0);
  plVar1 = param_1 + 0x31;
  plVar13 = (long *)*plVar1;
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar11 = param_1[2];
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(byte *)(lVar11 + 0x6a) + 1 != (int)plVar13[3]) {
    plVar13 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d07900);
    lVar11 = param_1[2];
    if (lVar11 == 0) goto LAB_0298cab0;
  }
  puVar4 = PTR_DAT_03d07960;
  uVar12 = 0;
  plVar14 = plVar13 + 4;
  do {
    bVar3 = *(byte *)(lVar11 + 0x6a);
    lVar11 = param_1[0x2e];
    if (bVar3 <= uVar12) {
      lVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
      FUN_0298b8e8(lVar7,0xff,(int)lVar11);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if ((lVar7 != 0) &&
         (lVar11 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar13 + 0x40)), lVar11 == 0)) {
        uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar8,0);
      }
      if (*(uint *)(plVar13 + 3) <= (uint)bVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar13[(ulong)bVar3 + 4] = lVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (plVar13 + (ulong)bVar3 + 4,lVar7);
      *plVar1 = (long)plVar13;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,plVar13);
      if (local_54[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar10,0);
      }
      lVar10 = param_1[0x25];
      local_58[0] = '\0';
      FUN_027e0bd8(lVar10,local_58,0);
      lVar11 = param_1[0x25];
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar7 = *(long *)PTR_DAT_03d07968;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      uVar12 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 200));
      if ((uVar12 & 1) == 0) {
        *(undefined4 *)(lVar11 + 0x18) = 0;
      }
      else {
        iVar6 = *(int *)(lVar11 + 0x18);
        *(undefined4 *)(lVar11 + 0x18) = 0;
        if (0 < iVar6) {
          FUN_02793a34(*(undefined8 *)(lVar11 + 0x10),0,iVar6,0);
        }
      }
      if (local_58[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar10,0);
      }
      lVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ccaef8);
      FUN_029b3e24(lVar10,0,0);
      param_1[0x27] = lVar10;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x27,lVar10);
      return;
    }
    lVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
    FUN_0298b8e8(lVar7,uVar12 & 0xffffffff,(int)lVar11);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((lVar7 != 0) &&
       (lVar11 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar13 + 0x40)), lVar11 == 0)) {
      uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar8,0);
    }
    if (*(uint *)(plVar13 + 3) <= (uint)uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    *plVar14 = lVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14,lVar7);
    lVar11 = param_1[2];
    uVar12 = uVar12 + 1;
    plVar14 = plVar14 + 1;
  } while (lVar11 != 0);
LAB_0298cab0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


