/*
FUNCTION_NAME: Fusion.NetworkInputUtils.<>c$$.ctor
ENTRY_POINT: 01c70330
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


/* WARNING: Removing unreachable block (ram,0x01c7052c) */
/* WARNING: Removing unreachable block (ram,0x01c704f8) */

int Fusion_NetworkInputUtils_<>c___ctor(void)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long lVar9;
  long *unaff_x24;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  char cStack000000000000001c;
  
  puVar8 = *(undefined8 **)(*unaff_x24 + 0xb8);
  uStack0000000000000008 = puVar8[1];
  uStack0000000000000000 = *puVar8;
  thunk_FUN_01a89a98(*unaff_x24);
  if (unaff_x23 != (long *)0x0) {
    uVar2 = (**(code **)(*unaff_x23 + 0x138))();
    if ((uVar2 & 1) != 0) {
      lVar9 = *(long *)(unaff_x20 + 0x30);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      _uStack0000000000000000 = FUN_02760d74(0);
      thunk_FUN_01a89a98(*unaff_x24);
      if (lVar9 == 0) goto LAB_01c7051c;
      FUN_01c7069c(lVar9);
    }
    iVar1 = FUN_025bbc00();
    lVar9 = 0x58;
    if (iVar1 != 0) {
      lVar9 = 0x50;
    }
    lVar9 = *(long *)(unaff_x20 + lVar9);
    if ((lVar9 != 0) &&
       (plVar3 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,*(undefined4 *)(lVar9 + 0x18))
       , plVar3 != (long *)0x0)) {
      if (0 < (int)plVar3[3]) {
        uVar7 = 0;
        do {
          if (*(uint *)(lVar9 + 0x18) <= uVar7) {
LAB_01c70518:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          if (*(long *)(lVar9 + (long)(int)uVar7 * 8 + 0x20) == 0) goto LAB_01c7051c;
          lVar4 = FUN_01c6c41c();
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_01a89d6c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
            uVar6 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar6,0);
          }
          if (*(uint *)(plVar3 + 3) <= uVar7) goto LAB_01c70518;
          plVar3[(long)(int)uVar7 + 4] = lVar4;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (plVar3 + (long)(int)uVar7 + 4,lVar4);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)plVar3[3]);
      }
      lVar9 = FUN_01c708a8();
      cStack000000000000001c = '\0';
      FUN_027e0bd8(lVar9,&stack0x0000001c,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar1 = FUN_01c70b80(lVar9,plVar3);
      if (*(char *)(unaff_x20 + 0x60) != '\0') {
        FUN_01c70edc(*(undefined8 *)(unaff_x19 + 0x40));
        FUN_01c70f58();
      }
      if (cStack000000000000001c != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar9,0);
      }
      if (0 < iVar1) {
        FUN_01c7101c();
      }
      return iVar1;
    }
  }
LAB_01c7051c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


