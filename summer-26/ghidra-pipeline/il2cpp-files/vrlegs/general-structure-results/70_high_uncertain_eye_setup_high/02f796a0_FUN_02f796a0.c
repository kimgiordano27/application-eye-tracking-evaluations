/*
FUNCTION_NAME: FUN_02f796a0
ENTRY_POINT: 02f796a0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f79a34) */
/* WARNING: Removing unreachable block (ram,0x02f799b8) */
/* WARNING: Removing unreachable block (ram,0x02f79a14) */
/* WARNING: Removing unreachable block (ram,0x02f79a3c) */

long * FUN_02f796a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char local_44 [4];
  
  puVar1 = PTR_DAT_03d251b8;
  if ((DAT_0412acd0 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d251c0);
    FUN_01ab69ac(PTR_DAT_03d251c8);
    FUN_01ab69ac(PTR_DAT_03d251d0);
    FUN_01ab69ac(PTR_DAT_03d07d40);
    FUN_01ab69ac(PTR_DAT_03d251d8);
    FUN_01ab69ac(PTR_DAT_03d251e0);
    FUN_01ab69ac(PTR_DAT_03d251e8);
    FUN_01ab69ac(PTR_DAT_03d251f0);
    FUN_01ab69ac(PTR_DAT_03d251f8);
    FUN_01ab69ac(PTR_DAT_03d251b8);
    DAT_0412acd0 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  plVar10 = (long *)**(long **)(*(long *)puVar1 + 0xb8);
  thunk_FUN_01a4b338();
  if (plVar10 != (long *)0x0) {
    return plVar10;
  }
  uVar5 = FUN_02f79b68();
  local_44[0] = '\0';
  FUN_027e0bd8(uVar5,local_44,0);
  plVar10 = (long *)**(undefined8 **)(*(long *)puVar1 + 0xb8);
  thunk_FUN_01a4b338();
  if (plVar10 != (long *)0x0) goto LAB_02f799dc;
  lVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d251f8);
  Animancer_AnimancerState__OnSetIsPlaying(lVar6,*(undefined8 *)PTR_DAT_03d251e8);
  uVar7 = FUN_02f99d90(0);
  lVar8 = FUN_02f99ac8(uVar7,0);
  if (lVar8 == 0) {
LAB_02f798d4:
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  else {
    if ((*(long *)(lVar8 + 0x10) != 0) &&
       (iVar4 = FUN_025c2f58(*(long *)(lVar8 + 0x10),0x2e,0), iVar4 != -1)) {
      if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar7 = FUN_025c262c(*(long *)(lVar8 + 0x10),iVar4,0);
      *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = uVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    }
    puVar2 = PTR_DAT_03d251d8;
    lVar8 = *(long *)(lVar8 + 0x20);
    if ((lVar8 == 0) || ((int)*(ulong *)(lVar8 + 0x18) < 1)) goto LAB_02f798d4;
    uVar12 = 0;
    uVar9 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
    do {
      if (uVar9 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_01b5f01c(lVar6,*(undefined8 *)(lVar8 + 0x20 + uVar12 * 8),*(undefined8 *)puVar2);
      uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)(int)*(uint *)(lVar8 + 0x18));
  }
  plVar10 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d07d40,*(undefined4 *)(lVar6 + 0x18));
  Animancer_FadeGroup__get_TargetWeight(lVar6,&local_78,*(undefined8 *)PTR_DAT_03d251e0);
  puVar3 = PTR_DAT_03d251d0;
  puVar2 = PTR_DAT_03d251c8;
  uStack_58 = uStack_70;
  local_60 = local_78;
  local_50 = local_68;
  uVar11 = 0;
  while (uVar12 = FUN_021b51c8(&local_60,*(undefined8 *)puVar2), (uVar12 & 1) != 0) {
    FUN_01b7a454(&local_60,&local_78,*(undefined8 *)puVar3);
    lVar6 = local_78;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((local_78 != 0) &&
       (lVar8 = thunk_FUN_01a89d6c(local_78,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)) {
      uVar5 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,0);
    }
    if (*(uint *)(plVar10 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar10[(long)(int)uVar11 + 4] = lVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              (plVar10 + (long)(int)uVar11 + 4,lVar6);
    uVar11 = uVar11 + 1;
  }
  FUN_021b51c4(&local_60,*(undefined8 *)PTR_DAT_03d251c0);
  thunk_FUN_01a4b338();
  **(long **)(*(long *)puVar1 + 0xb8) = (long)plVar10;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            (*(undefined8 *)(*(long *)puVar1 + 0xb8),plVar10);
LAB_02f799dc:
  if (local_44[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
  }
  return plVar10;
}


