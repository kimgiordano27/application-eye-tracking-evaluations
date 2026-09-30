/*
FUNCTION_NAME: System.Diagnostics.StackTrace$$ConvertAsyncStateMachineMethod
ENTRY_POINT: 026261ec
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0262669c) */

void System_Diagnostics_StackTrace__ConvertAsyncStateMachineMethod(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *in_x9;
  long unaff_x19;
  undefined8 uVar7;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x26;
  char cStack000000000000000c;
  
  uVar7 = *in_x9;
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78(param_1);
  }
  lVar2 = FUN_0277b678(uVar7,0);
  if (param_2 == (long *)0x0) goto LAB_0262660c;
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*param_2 + 0x40)), lVar3 == 0)) {
LAB_0262662c:
    uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar7,0);
  }
  if ((int)param_2[3] != 0) {
    param_2[4] = lVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2 + 4,lVar2);
    lVar2 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cf2368,0);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*param_2 + 0x40)), lVar3 == 0))
    goto LAB_0262662c;
    if (1 < *(uint *)(param_2 + 3)) {
      param_2[5] = lVar2;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2 + 5,lVar2);
      plVar4 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,2);
      lVar2 = FUN_0262a4e8();
      if (plVar4 == (long *)0x0) {
LAB_0262660c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
      goto LAB_0262662c;
      if ((int)plVar4[3] != 0) {
        plVar4[4] = lVar2;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 4,lVar2);
        if ((unaff_x22 != 0) && (lVar2 = thunk_FUN_01a89d6c(), lVar2 == 0)) goto LAB_0262662c;
        if (1 < *(uint *)(plVar4 + 3)) {
          plVar4[5] = unaff_x22;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          puVar1 = PTR_DAT_03cd8520;
          if (unaff_x21 != (long *)0x0) {
            lVar2 = FUN_0278a094();
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)puVar1);
            }
            uVar5 = FUN_0267bc0c(lVar2,0,0);
            if ((uVar5 & 1) != 0) {
              uVar7 = (**(code **)(*unaff_x21 + 0x168))();
              uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cf2390);
              uVar7 = FUN_025b1328(uVar7,uVar6,0);
              thunk_FUN_01a6ca08(PTR_DAT_03cf2180);
              uVar6 = thunk_FUN_01a89e68();
              FUN_026202e0(uVar6,uVar7);
              uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cf2348);
                    /* WARNING: Subroutine does not return */
              FUN_01ab6b14(uVar6,uVar7);
            }
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            lVar2 = FUN_0267bbcc(lVar2,plVar4,0);
            if (lVar2 == 0) {
              lVar3 = 0;
            }
            else {
              uVar7 = *(undefined8 *)PTR_DAT_03cf2360;
              lVar3 = thunk_FUN_01a89d6c(lVar2,uVar7);
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6ee0(lVar2,uVar7);
              }
            }
            lVar2 = *unaff_x26;
            if (*(int *)(lVar2 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar2 = *unaff_x26;
            }
            plVar4 = (long *)**(long **)(lVar2 + 0xb8);
            if (plVar4 != (long *)0x0) {
              uVar7 = (**(code **)(*plVar4 + 0x2d8))(plVar4,*(undefined8 *)(*plVar4 + 0x2e0));
              cStack000000000000000c = '\0';
              FUN_027e0bd8(uVar7,&stack0x0000000c,0);
              uVar5 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x19 + 0x28),
                                         *(undefined8 *)PTR_DAT_03ccc8b0,0);
              if (((uVar5 & 1) == 0) ||
                 (lVar2 = thunk_FUN_01a89d6c(lVar3,*(undefined8 *)PTR_DAT_03cf2170), lVar2 != 0)) {
                if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_0263a334(lVar3);
              }
              else {
                lVar2 = *unaff_x26;
                if (*(int *)(lVar2 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar2 = *unaff_x26;
                }
                plVar4 = *(long **)(*(long *)(lVar2 + 0xb8) + 8);
                if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                (**(code **)(*plVar4 + 0x308))(plVar4,lVar3,*(undefined8 *)(*plVar4 + 0x310));
              }
              if (cStack000000000000000c != '\0') {
                OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
              }
              return;
            }
          }
          goto LAB_0262660c;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


