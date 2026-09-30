/*
FUNCTION_NAME: RootMotion.FinalIK.HitReaction.HitPointEffector.EffectorLink$$.ctor
ENTRY_POINT: 029d1dac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029d20e8) */
/* WARNING: Removing unreachable block (ram,0x029d20c8) */

uint RootMotion_FinalIK_HitReaction_HitPointEffector_EffectorLink___ctor(void)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar7;
  undefined8 unaff_x22;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  char cStack0000000000000008;
  int iStack000000000000000c;
  undefined8 in_stack_00000018;
  
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  plVar10 = (long *)(unaff_x19 + 0x50);
  lVar11 = *plVar10;
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar4 = FUN_036cee6c(lVar11,0,0);
  if ((uVar4 & 1) != 0) {
    if (*plVar10 == 0) goto LAB_029d20e0;
    FUN_029d9ba0();
  }
  lVar11 = FUN_029d9c0c(*(undefined8 *)PTR_DAT_03ccab70);
  *plVar10 = lVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar11);
  if (*plVar10 == 0) goto LAB_029d20e0;
  *(undefined8 *)(*plVar10 + 0x20) = unaff_x22;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  uVar8 = *(undefined8 *)(unaff_x19 + 0x50);
  uVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d08b40);
  FUN_02060754(uVar5,uVar8,*(undefined8 *)PTR_DAT_03d08c28,0);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x30),uVar5);
  uVar4 = FUN_025be440();
  if ((uVar4 & 1) == 0) {
    if ((unaff_x21 == 0) || (lVar11 = FUN_025c0b4c(), lVar11 == 0)) goto LAB_029d20e0;
    if ((2 < *(int *)(lVar11 + 0x18)) &&
       (uVar4 = FUN_02768050(*(undefined8 *)(lVar11 + 0x28),(long)&stack0x00000008 + 4,0),
       (uVar4 & 1) != 0)) {
      if (*(int *)(lVar11 + 0x18) == 0) {
LAB_029d20e4:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (unaff_x20 == 0) goto LAB_029d20e0;
      puVar7 = (undefined8 *)(unaff_x20 + 0x10);
      *puVar7 = *(undefined8 *)(lVar11 + 0x20);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar7);
      if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_029d20e4;
      uVar5 = *(undefined8 *)(lVar11 + 0x30);
      uVar4 = FUN_025be440(*puVar7,0);
      if (((uVar4 & 1) == 0) && (uVar4 = FUN_025be440(uVar5,0), (uVar4 & 1) == 0)) {
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_029d20e0;
        uVar4 = FUN_025bcee0(*(long *)(unaff_x19 + 0x18),uVar5,0);
        if ((uVar4 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_029d20e0;
          uVar4 = FUN_025c2edc(*(long *)(unaff_x19 + 0x18),*puVar7,0);
          iVar1 = iStack000000000000000c;
          puVar2 = PTR_DAT_03d08c40;
          if ((uVar4 & 1) != 0) {
            lVar11 = *(long *)PTR_DAT_03d08c40;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar11 = *(long *)puVar2;
            }
            if (iVar1 < *(int *)(*(long *)(lVar11 + 0xb8) + 8)) {
              lVar11 = *(long *)(unaff_x19 + 0x10);
              *(int *)(unaff_x19 + 0x38) = iStack000000000000000c;
              uVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d08c30);
              FUN_0225a3e8();
              if (lVar11 == 0) {
LAB_029d20e0:
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              FUN_02216dac(lVar11,uVar5,&stack0x00000018,*(undefined8 *)PTR_DAT_03d08c18);
              uVar5 = in_stack_00000018;
              uVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d08c00);
              FUN_02060754();
              lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
              FUN_029da054(lVar11,uVar5,uVar8);
              uVar5 = *(undefined8 *)(unaff_x19 + 0x28);
              cStack0000000000000008 = '\0';
              FUN_027e0bd8(uVar5,&stack0x00000008,0);
              lVar9 = *(long *)(unaff_x19 + 0x28);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              lVar6 = *(long *)PTR_DAT_03d08c10;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              uVar4 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 200))
              ;
              if ((uVar4 & 1) == 0) {
                *(undefined4 *)(lVar9 + 0x18) = 0;
              }
              else {
                iVar1 = *(int *)(lVar9 + 0x18);
                *(undefined4 *)(lVar9 + 0x18) = 0;
                if (0 < iVar1) {
                  FUN_02793a34(*(undefined8 *)(lVar9 + 0x10),0,iVar1,0);
                }
              }
              if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              FUN_01b5f01c(*(long *)(unaff_x19 + 0x28),lVar11,*(undefined8 *)PTR_DAT_03d08c08);
              if (cStack0000000000000008 != '\0') {
                OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
              }
              if (lVar11 == 0) goto LAB_029d20e0;
              FUN_029da100(lVar11);
              uVar3 = 1;
              goto LAB_029d1d7c;
            }
          }
        }
      }
    }
  }
  uVar3 = FUN_029d9ce0();
LAB_029d1d7c:
  return uVar3 & 1;
}


