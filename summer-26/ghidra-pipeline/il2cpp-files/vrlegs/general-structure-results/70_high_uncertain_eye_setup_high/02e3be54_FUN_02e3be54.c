/*
FUNCTION_NAME: FUN_02e3be54
ENTRY_POINT: 02e3be54
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


/* WARNING: Removing unreachable block (ram,0x02e3c1f8) */

undefined8 FUN_02e3be54(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  char local_44 [4];
  
  puVar2 = PTR_DAT_03d18968;
  if ((DAT_0412a29c & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf21f8);
    FUN_01ab69ac(PTR_DAT_03cd81b0);
    FUN_01ab69ac(PTR_DAT_03d1df60);
    FUN_01ab69ac(PTR_DAT_03d18968);
    FUN_01ab69ac(PTR_DAT_03d1df68);
    FUN_01ab69ac(PTR_DAT_03d1df70);
    DAT_0412a29c = 1;
  }
  local_44[0] = '\0';
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  plVar3 = (long *)FUN_02f7ee28(param_2,0);
  if (param_3 != 0) {
    if (plVar3 == (long *)0x0) goto LAB_02e3c1f4;
    (**(code **)(*plVar3 + 0x248))(plVar3,param_3,*(undefined8 *)(*plVar3 + 0x250));
  }
  if (param_4 != 0) {
    if (plVar3 == (long *)0x0) goto LAB_02e3c1f4;
    (**(code **)(*plVar3 + 0x278))(plVar3,param_4,*(undefined8 *)(*plVar3 + 0x280));
  }
  if (param_5 == 0) {
                    /* try { // try from 02e3bf64 to 02f3bf8b has its CatchHandler @ 02e3c5e4 */
    if (plVar3 == (long *)0x0) goto LAB_02e3c1f4;
  }
  else {
    if (plVar3 == (long *)0x0) goto LAB_02e3c1f4;
    (**(code **)(*plVar3 + 0x1b8))(plVar3,param_5,*(undefined8 *)(*plVar3 + 0x1c0));
  }
  puVar2 = PTR_DAT_03cd81b0;
  plVar4 = (long *)(**(code **)(*plVar3 + 0x2b8))(plVar3,*(undefined8 *)(*plVar3 + 0x2c0));
  bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
  if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
    if (plVar4 == (long *)0x0) {
LAB_02e3c1f4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar5 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
  }
  else {
    local_44[0] = '\0';
                    /* try { // try from 02e3bfc0 to 02f3bfeb has its CatchHandler @ 02e3c5e0 */
    FUN_027e0bd8(param_1,local_44,0);
    puVar11 = (undefined8 *)(param_1 + 0x10);
    plVar13 = (long *)*puVar11;
    if (plVar13 == (long *)0x0) {
      uVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21f8);
      FUN_02733e6c(uVar5,0);
      *puVar11 = uVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar11,uVar5);
      plVar13 = (long *)*puVar11;
    }
    if (plVar3[8] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar5 = FUN_02ea1e90(plVar3[8],0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c(uVar5,uVar5);
    }
                    /* try { // try from 02e3c028 to 02f3c02f has its CatchHandler @ 02e3c518 */
    plVar13 = (long *)(**(code **)(*plVar13 + 0x308))
                                (plVar13,uVar5,*(undefined8 *)(*plVar13 + 0x310));
                    /* try { // try from 02e3c03c to 02f3c03f has its CatchHandler @ 02e3c504 */
    lVar9 = *(long *)PTR_DAT_03d1df60;
    if (plVar13 == (long *)0x0) {
      plVar13 = (long *)thunk_FUN_01a89e68(lVar9);
      FUN_027b3d9c(plVar13,0);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    else {
                    /* try { // try from 02e3c054 to 02f3c063 has its CatchHandler @ 02e3c500 */
                    /* try { // try from 02e3c064 to 02f3c267 has its CatchHandler @ 02e3b9a0 */
      if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(lVar9 + 0x130)) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) != lVar9))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar13);
      }
    }
    lVar9 = plVar13[2];
    lVar6 = thunk_FUN_02f9b4e0(plVar3,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((int)lVar9 < *(int *)(lVar6 + 0x78) + -1) {
      iVar10 = (int)plVar13[2];
      if (iVar10 == 0) {
        if (plVar3[8] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        plVar12 = (long *)*puVar11;
        uVar5 = FUN_02ea1e90(plVar3[8],0);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c(uVar5,uVar5);
        }
        (**(code **)(*plVar12 + 0x2a8))(plVar12,uVar5,plVar13,*(undefined8 *)(*plVar12 + 0x2b0));
        iVar10 = (int)plVar13[2];
      }
      *(int *)(plVar13 + 2) = iVar10 + 1;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar7 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
      if (plVar3[8] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar8 = FUN_02ea1e90(plVar3[8],0);
      uVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d1df70);
      FUN_02e3c2d8(uVar5,uVar7,param_1,uVar8);
    }
    else {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar7 = (**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
      uVar8 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
      uVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d1df68);
      FUN_02e3c37c(uVar5,uVar7,uVar8);
    }
    if (local_44[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
    }
  }
  return uVar5;
}


