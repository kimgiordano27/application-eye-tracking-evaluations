/*
FUNCTION_NAME: QFSW.QC.Suggestors.Tags.SceneNameAttribute$$.ctor
ENTRY_POINT: 02961794
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

void QFSW_QC_Suggestors_Tags_SceneNameAttribute___ctor(long param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  char cStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  int in_stack_00000048;
  
  if ((DAT_04127b3e & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd7348);
    FUN_01ab69ac(PTR_DAT_03cbfb98);
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(PTR_DAT_03d06168);
    FUN_01ab69ac(PTR_DAT_03d06170);
    FUN_01ab69ac(PTR_DAT_03d06178);
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(PTR_DAT_03d06180);
    FUN_01ab69ac(PTR_DAT_03d06188);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(PTR_DAT_03d06190);
    DAT_04127b3e = 1;
  }
  cStack000000000000003c = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + 0x18);
    if (0xfff4 < iVar1) {
      plVar7 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
      uStack0000000000000008 = (undefined4)*(undefined8 *)(param_3 + 0x18);
      lVar8 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x00000008);
      if (plVar7 == (long *)0x0) goto LAB_02961be8;
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
        uVar13 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar13,0);
      }
      if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar7[4] = lVar8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7 + 4,lVar8);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367b588(*(undefined8 *)PTR_DAT_03d06190,plVar7,0);
      iVar1 = *(int *)(param_3 + 0x18);
    }
    uStack0000000000000040 = 0x5283a76b;
    uStack0000000000000044 = param_2;
    in_stack_00000048 = iVar1;
    lVar8 = FUN_02960740(&stack0x00000040);
    if (lVar8 != 0) {
      lVar9 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfb98,
                           *(int *)(param_3 + 0x18) + *(int *)(lVar8 + 0x18));
      FUN_02793c34(lVar8,lVar9,0,0);
      FUN_02793c34(param_3,lVar9,*(undefined4 *)(lVar8 + 0x18),0);
      uVar13 = *(undefined8 *)(param_1 + 0x18);
      cStack000000000000003c = '\0';
      FUN_027e0bd8(uVar13,&stack0x0000003c,0);
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      Animancer_FadeGroup__get_TargetWeight
                (*(long *)(param_1 + 0x20),&stack0x00000008,*(undefined8 *)PTR_DAT_03d06180);
      puVar6 = PTR_DAT_03d06188;
      puVar5 = PTR_DAT_03d06178;
      puVar4 = PTR_DAT_03d06170;
      puVar3 = PTR_DAT_03d06168;
      puVar2 = PTR_DAT_03cd7348;
      in_stack_00000020 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000018;
      while( true ) {
        do {
          uVar10 = FUN_021b51c8(&stack0x00000020,*(undefined8 *)puVar4);
          if ((uVar10 & 1) == 0) {
            FUN_021b51c4(&stack0x00000020,*(undefined8 *)puVar3);
            if (cStack000000000000003c != '\0') {
              OVRManager_<>c__<InitOVRManager>b__424_0(uVar13,0);
            }
            return;
          }
          FUN_01b7a454(&stack0x00000020,&stack0x00000008,*(undefined8 *)puVar5);
          lVar8 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar10 = FUN_02ecc7e0(lVar8,0);
        } while ((uVar10 & 1) == 0);
        plVar7 = (long *)FUN_02ecd1cc(lVar8,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
        FUN_026b4574(uVar11,param_1,*(undefined8 *)puVar6,0);
        uVar12 = FUN_02ecd1cc(lVar8,0);
        if (plVar7 == (long *)0x0) break;
        (**(code **)(*plVar7 + 0x308))
                  (plVar7,lVar9,0,*(undefined4 *)(lVar9 + 0x18),uVar11,uVar12,
                   *(undefined8 *)(*plVar7 + 0x310));
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
LAB_02961be8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


