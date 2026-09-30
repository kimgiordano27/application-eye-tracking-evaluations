/*
FUNCTION_NAME: RootMotion.FinalIK.FBBIKArmBending$$OnDestroy
ENTRY_POINT: 0298c9d8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0298cbcc) */
/* WARNING: Removing unreachable block (ram,0x0298cc38) */

void RootMotion_FinalIK_FBBIKArmBending__OnDestroy(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  char in_stack_00000008;
  char cStack000000000000000c;
  
  cStack000000000000000c = '\0';
  FUN_027e0bd8();
  puVar1 = (undefined8 *)(unaff_x19 + 0x188);
  plVar9 = (long *)*puVar1;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(byte *)(lVar8 + 0x6a) + 1 != (int)plVar9[3]) {
    plVar9 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d07900);
    lVar8 = *(long *)(unaff_x19 + 0x10);
    if (lVar8 == 0) goto LAB_0298cab0;
  }
  puVar5 = PTR_DAT_03d07960;
  uVar10 = 0;
  plVar11 = plVar9 + 4;
  do {
    bVar4 = *(byte *)(lVar8 + 0x6a);
    uVar2 = *(undefined4 *)(unaff_x19 + 0x170);
    if (bVar4 <= uVar10) {
      lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar5);
      FUN_0298b8e8(lVar8,0xff,uVar2);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if ((lVar8 != 0) &&
         (lVar6 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0)) {
        uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar7,0);
      }
      if (*(uint *)(plVar9 + 3) <= (uint)bVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar9[(ulong)bVar4 + 4] = lVar8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (plVar9 + (ulong)bVar4 + 4,lVar8);
      *puVar1 = plVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar1,plVar9);
      if (cStack000000000000000c != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0();
      }
      uVar7 = *(undefined8 *)(unaff_x19 + 0x128);
      in_stack_00000008 = '\0';
      FUN_027e0bd8(uVar7,&stack0x00000008,0);
      lVar8 = *(long *)(unaff_x19 + 0x128);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar6 = *(long *)PTR_DAT_03d07968;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      uVar10 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 200));
      if ((uVar10 & 1) == 0) {
        *(undefined4 *)(lVar8 + 0x18) = 0;
      }
      else {
        iVar3 = *(int *)(lVar8 + 0x18);
        *(undefined4 *)(lVar8 + 0x18) = 0;
        if (0 < iVar3) {
          FUN_02793a34(*(undefined8 *)(lVar8 + 0x10),0,iVar3,0);
        }
      }
      if (in_stack_00000008 != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
      }
      uVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ccaef8);
      FUN_029b3e24(uVar7,0,0);
      *(undefined8 *)(unaff_x19 + 0x138) = uVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x138,uVar7);
      return;
    }
    lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar5);
    FUN_0298b8e8(lVar8,uVar10 & 0xffffffff,uVar2);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((lVar8 != 0) &&
       (lVar6 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0)) {
      uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,0);
    }
    if (*(uint *)(plVar9 + 3) <= (uint)uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    *plVar11 = lVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,lVar8);
    lVar8 = *(long *)(unaff_x19 + 0x10);
    uVar10 = uVar10 + 1;
    plVar11 = plVar11 + 1;
  } while (lVar8 != 0);
LAB_0298cab0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


