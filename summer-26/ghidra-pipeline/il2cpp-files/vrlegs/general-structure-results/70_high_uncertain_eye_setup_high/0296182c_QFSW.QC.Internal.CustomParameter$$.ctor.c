/*
FUNCTION_NAME: QFSW.QC.Internal.CustomParameter$$.ctor
ENTRY_POINT: 0296182c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02961bec) */
/* WARNING: Removing unreachable block (ram,0x02961bf8) */

void QFSW_QC_Internal_CustomParameter___ctor(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x19;
  undefined8 uVar12;
  long unaff_x20;
  long unaff_x22;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  char cStack000000000000003c;
  undefined4 in_stack_00000040;
  int in_stack_00000048;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 400));
  *(undefined1 *)(unaff_x22 + 0xb3e) = 1;
  cStack000000000000003c = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (unaff_x19 != 0) {
    iVar1 = *(int *)(unaff_x19 + 0x18);
    if (0xfff4 < iVar1) {
      plVar6 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
      uStack0000000000000008 = (undefined4)*(undefined8 *)(unaff_x19 + 0x18);
      lVar7 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x00000008);
      if (plVar6 == (long *)0x0) goto LAB_02961be8;
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
        uVar12 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar12,0);
      }
      if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar6[4] = lVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 4,lVar7);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367b588(*(undefined8 *)PTR_DAT_03d06190,plVar6,0);
      iVar1 = *(int *)(unaff_x19 + 0x18);
    }
    in_stack_00000040 = 0x5283a76b;
    in_stack_00000048 = iVar1;
    lVar7 = FUN_02960740(&stack0x00000040);
    if (lVar7 != 0) {
      lVar8 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfb98,
                           *(int *)(unaff_x19 + 0x18) + *(int *)(lVar7 + 0x18));
      FUN_02793c34(lVar7,lVar8,0,0);
      FUN_02793c34();
      uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
      cStack000000000000003c = '\0';
      FUN_027e0bd8(uVar12,&stack0x0000003c,0);
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      Animancer_FadeGroup__get_TargetWeight
                (*(long *)(unaff_x20 + 0x20),&stack0x00000008,*(undefined8 *)PTR_DAT_03d06180);
      puVar5 = PTR_DAT_03d06178;
      puVar4 = PTR_DAT_03d06170;
      puVar3 = PTR_DAT_03d06168;
      puVar2 = PTR_DAT_03cd7348;
      in_stack_00000020 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000018;
      while( true ) {
        do {
          uVar9 = FUN_021b51c8(&stack0x00000020,*(undefined8 *)puVar4);
          if ((uVar9 & 1) == 0) {
            FUN_021b51c4(&stack0x00000020,*(undefined8 *)puVar3);
            if (cStack000000000000003c != '\0') {
              OVRManager_<>c__<InitOVRManager>b__424_0(uVar12,0);
            }
            return;
          }
          FUN_01b7a454(&stack0x00000020,&stack0x00000008,*(undefined8 *)puVar5);
          lVar7 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar9 = FUN_02ecc7e0(lVar7,0);
        } while ((uVar9 & 1) == 0);
        plVar6 = (long *)FUN_02ecd1cc(lVar7,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar10 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
        FUN_026b4574();
        uVar11 = FUN_02ecd1cc(lVar7,0);
        if (plVar6 == (long *)0x0) break;
        (**(code **)(*plVar6 + 0x308))
                  (plVar6,lVar8,0,*(undefined4 *)(lVar8 + 0x18),uVar10,uVar11,
                   *(undefined8 *)(*plVar6 + 0x310));
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
LAB_02961be8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


