/*
FUNCTION_NAME: RootMotion.FinalIK.HitReaction.HitPointEffector.EffectorLink$$Apply
ENTRY_POINT: 029d1cfc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029d20c8) */
/* WARNING: Removing unreachable block (ram,0x029d20e8) */

uint RootMotion_FinalIK_HitReaction_HitPointEffector_EffectorLink__Apply(void)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar8;
  undefined8 unaff_x22;
  undefined8 uVar9;
  long unaff_x23;
  long *plVar10;
  long lVar11;
  char in_stack_00000008;
  int iStack000000000000000c;
  undefined8 in_stack_00000018;
  
  FUN_01ab69ac();
  FUN_01ab69ac(PTR_DAT_03d08c38);
  FUN_01ab69ac(PTR_DAT_03d08c40);
  FUN_01ab69ac(PTR_DAT_03d08c48);
  FUN_01ab69ac(PTR_DAT_03d08bf8);
  FUN_01ab69ac(PTR_DAT_03ccab70);
  *(undefined1 *)(unaff_x23 + 0xe84) = 1;
  iStack000000000000000c = 0;
  in_stack_00000008 = '\0';
  lVar4 = thunk_FUN_01a89e68(*unaff_x20);
  FUN_027b3d9c(lVar4,0);
  if (((*(long *)(unaff_x19 + 0x10) == 0) || (*(int *)(*(long *)(unaff_x19 + 0x10) + 0x18) == 0)) ||
     (*(char *)(unaff_x19 + 0x48) != '\0')) {
    uVar3 = 0;
  }
  else {
    *(undefined2 *)(unaff_x19 + 0x48) = 1;
    *(long *)(unaff_x19 + 0x40) = unaff_x21;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    plVar10 = (long *)(unaff_x19 + 0x50);
    lVar11 = *plVar10;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_036cee6c(lVar11,0,0);
    if ((uVar5 & 1) != 0) {
      if (*plVar10 == 0) goto LAB_029d20e0;
      FUN_029d9ba0();
    }
    lVar11 = FUN_029d9c0c(*(undefined8 *)PTR_DAT_03ccab70);
    *plVar10 = lVar11;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar11);
    if (*plVar10 == 0) {
LAB_029d20e0:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(undefined8 *)(*plVar10 + 0x20) = unaff_x22;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar9 = *(undefined8 *)(unaff_x19 + 0x50);
    uVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d08b40);
    FUN_02060754(uVar6,uVar9,*(undefined8 *)PTR_DAT_03d08c28,0);
    *(undefined8 *)(unaff_x19 + 0x30) = uVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x19 + 0x30),uVar6);
    uVar5 = FUN_025be440();
    if ((uVar5 & 1) == 0) {
      if ((unaff_x21 == 0) || (lVar11 = FUN_025c0b4c(), lVar11 == 0)) goto LAB_029d20e0;
      if ((2 < *(int *)(lVar11 + 0x18)) &&
         (uVar5 = FUN_02768050(*(undefined8 *)(lVar11 + 0x28),&stack0x0000000c,0), (uVar5 & 1) != 0)
         ) {
        if (*(int *)(lVar11 + 0x18) == 0) {
LAB_029d20e4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (lVar4 == 0) goto LAB_029d20e0;
        puVar8 = (undefined8 *)(lVar4 + 0x10);
        *puVar8 = *(undefined8 *)(lVar11 + 0x20);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar8);
        if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_029d20e4;
        uVar6 = *(undefined8 *)(lVar11 + 0x30);
        uVar5 = FUN_025be440(*puVar8,0);
        if (((uVar5 & 1) == 0) && (uVar5 = FUN_025be440(uVar6,0), (uVar5 & 1) == 0)) {
          if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_029d20e0;
          uVar5 = FUN_025bcee0(*(long *)(unaff_x19 + 0x18),uVar6,0);
          if ((uVar5 & 1) != 0) {
            if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_029d20e0;
            uVar5 = FUN_025c2edc(*(long *)(unaff_x19 + 0x18),*puVar8,0);
            iVar1 = iStack000000000000000c;
            puVar2 = PTR_DAT_03d08c40;
            if ((uVar5 & 1) != 0) {
              lVar11 = *(long *)PTR_DAT_03d08c40;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar11 = *(long *)puVar2;
              }
              if (iVar1 < *(int *)(*(long *)(lVar11 + 0xb8) + 8)) {
                lVar11 = *(long *)(unaff_x19 + 0x10);
                *(int *)(unaff_x19 + 0x38) = iStack000000000000000c;
                uVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d08c30);
                FUN_0225a3e8(uVar6,lVar4,*(undefined8 *)PTR_DAT_03d08c48,0);
                if (lVar11 != 0) {
                  FUN_02216dac(lVar11,uVar6,&stack0x00000018,*(undefined8 *)PTR_DAT_03d08c18);
                  uVar6 = in_stack_00000018;
                  uVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d08c00);
                  FUN_02060754();
                  lVar4 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
                  FUN_029da054(lVar4,uVar6,uVar9);
                  uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
                  in_stack_00000008 = '\0';
                  FUN_027e0bd8(uVar6,&stack0x00000008,0);
                  lVar11 = *(long *)(unaff_x19 + 0x28);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  lVar7 = *(long *)PTR_DAT_03d08c10;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  uVar5 = FUN_01ab7534(*(undefined8 *)
                                        (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 200));
                  if ((uVar5 & 1) == 0) {
                    *(undefined4 *)(lVar11 + 0x18) = 0;
                  }
                  else {
                    iVar1 = *(int *)(lVar11 + 0x18);
                    *(undefined4 *)(lVar11 + 0x18) = 0;
                    if (0 < iVar1) {
                      FUN_02793a34(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
                    }
                  }
                  if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  FUN_01b5f01c(*(long *)(unaff_x19 + 0x28),lVar4,*(undefined8 *)PTR_DAT_03d08c08);
                  if (in_stack_00000008 != '\0') {
                    OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
                  }
                  if (lVar4 != 0) {
                    FUN_029da100(lVar4);
                    uVar3 = 1;
                    goto LAB_029d1d7c;
                  }
                }
                goto LAB_029d20e0;
              }
            }
          }
        }
      }
    }
    uVar3 = FUN_029d9ce0();
  }
LAB_029d1d7c:
  return uVar3 & 1;
}


