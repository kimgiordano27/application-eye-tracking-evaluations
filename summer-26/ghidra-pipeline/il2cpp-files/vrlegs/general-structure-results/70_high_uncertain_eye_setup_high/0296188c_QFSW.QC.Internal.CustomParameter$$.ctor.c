/*
FUNCTION_NAME: QFSW.QC.Internal.CustomParameter$$.ctor
ENTRY_POINT: 0296188c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02961bec) */
/* WARNING: Removing unreachable block (ram,0x02961bf8) */

void QFSW_QC_Internal_CustomParameter___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x19;
  undefined8 uVar11;
  long unaff_x20;
  long *unaff_x22;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  char cStack000000000000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  lVar5 = thunk_FUN_01a89a98();
  if (unaff_x22 != (long *)0x0) {
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*unaff_x22 + 0x40)), lVar6 == 0)) {
      uVar11 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar11,0);
    }
    if ((int)unaff_x22[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    unaff_x22[4] = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x22 + 4,lVar5);
    if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0367b588(*(undefined8 *)PTR_DAT_03d06190);
    in_stack_00000048 = *(undefined4 *)(unaff_x19 + 0x18);
    in_stack_00000040 = 0x5283a76b;
    lVar5 = FUN_02960740(&stack0x00000040);
    if (lVar5 != 0) {
      lVar6 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfb98,
                           *(int *)(unaff_x19 + 0x18) + *(int *)(lVar5 + 0x18));
      FUN_02793c34(lVar5,lVar6,0,0);
      FUN_02793c34();
      uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
      cStack000000000000003c = '\0';
      FUN_027e0bd8(uVar11,&stack0x0000003c,0);
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      Animancer_FadeGroup__get_TargetWeight
                (*(long *)(unaff_x20 + 0x20),&stack0x00000008,*(undefined8 *)PTR_DAT_03d06180);
      puVar4 = PTR_DAT_03d06178;
      puVar3 = PTR_DAT_03d06170;
      puVar2 = PTR_DAT_03d06168;
      puVar1 = PTR_DAT_03cd7348;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      while( true ) {
        do {
          uVar7 = FUN_021b51c8(&stack0x00000020,*(undefined8 *)puVar3);
          if ((uVar7 & 1) == 0) {
            FUN_021b51c4(&stack0x00000020,*(undefined8 *)puVar2);
            if (cStack000000000000003c != '\0') {
              OVRManager_<>c__<InitOVRManager>b__424_0(uVar11,0);
            }
            return;
          }
          FUN_01b7a454(&stack0x00000020,&stack0x00000008,*(undefined8 *)puVar4);
          lVar5 = in_stack_00000008;
          if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar7 = FUN_02ecc7e0(in_stack_00000008,0);
        } while ((uVar7 & 1) == 0);
        plVar8 = (long *)FUN_02ecd1cc(lVar5,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar9 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
        FUN_026b4574();
        uVar10 = FUN_02ecd1cc(lVar5,0);
        if (plVar8 == (long *)0x0) break;
        (**(code **)(*plVar8 + 0x308))
                  (plVar8,lVar6,0,*(undefined4 *)(lVar6 + 0x18),uVar9,uVar10,
                   *(undefined8 *)(*plVar8 + 0x310));
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


