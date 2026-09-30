/*
FUNCTION_NAME: Fusion.NetworkInputUtils$$ResetStatics
ENTRY_POINT: 01c70264
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01c704f8) */
/* WARNING: Removing unreachable block (ram,0x01c7052c) */

int Fusion_NetworkInputUtils__ResetStatics(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  char cStack000000000000001c;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0xb18));
  FUN_01ab69ac(PTR_DAT_03cbe5e8);
  FUN_01ab69ac(PTR_DAT_03cc4e98);
  *(undefined1 *)(unaff_x23 + 0x89f) = 1;
  cStack000000000000001c = 0;
  if (unaff_x22 != 0) {
    if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_02786d28();
    if ((uVar3 & 1) == 0) {
      lVar4 = FUN_01c6d508();
      if (lVar4 != 0) {
        if ((*(long *)(lVar4 + 0x30) != 0) && (*(char *)(*(long *)(lVar4 + 0x30) + 0x31) != '\0')) {
          plVar5 = (long *)FUN_01c6c41c();
          puVar1 = PTR_DAT_03cbed58;
          lVar10 = *(long *)PTR_DAT_03cbed58;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar10);
            lVar10 = *(long *)puVar1;
          }
          uVar6 = thunk_FUN_01a89a98(lVar10);
          if (plVar5 == (long *)0x0) goto LAB_01c7051c;
          uVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x140));
          if ((uVar3 & 1) != 0) {
            lVar10 = *(long *)(lVar4 + 0x30);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_02760d74(0);
            thunk_FUN_01a89a98(*(undefined8 *)puVar1);
            if (lVar10 == 0) goto LAB_01c7051c;
            FUN_01c7069c(lVar10);
          }
        }
        iVar2 = FUN_025bbc00();
        lVar10 = 0x58;
        if (iVar2 != 0) {
          lVar10 = 0x50;
        }
        lVar10 = *(long *)(lVar4 + lVar10);
        if ((lVar10 != 0) &&
           (plVar5 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,
                                          *(undefined4 *)(lVar10 + 0x18)), plVar5 != (long *)0x0)) {
          if (0 < (int)plVar5[3]) {
            uVar9 = 0;
            do {
              if (*(uint *)(lVar10 + 0x18) <= uVar9) {
LAB_01c70518:
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              if (*(long *)(lVar10 + (long)(int)uVar9 * 8 + 0x20) == 0) goto LAB_01c7051c;
              lVar7 = FUN_01c6c41c();
              if ((lVar7 != 0) &&
                 (lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0)) {
                uVar6 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                FUN_01ab6b14(uVar6,0);
              }
              if (*(uint *)(plVar5 + 3) <= uVar9) goto LAB_01c70518;
              plVar5[(long)(int)uVar9 + 4] = lVar7;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (plVar5 + (long)(int)uVar9 + 4,lVar7);
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)plVar5[3]);
          }
          lVar10 = FUN_01c708a8();
          cStack000000000000001c = '\0';
          FUN_027e0bd8(lVar10,&stack0x0000001c,0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          iVar2 = FUN_01c70b80(lVar10,plVar5);
          if (*(char *)(lVar4 + 0x60) != '\0') {
            FUN_01c70edc(*(undefined8 *)(unaff_x19 + 0x40));
            FUN_01c70f58(lVar4);
          }
          if (cStack000000000000001c != '\0') {
            OVRManager_<>c__<InitOVRManager>b__424_0(lVar10,0);
          }
          if (iVar2 < 1) {
            return iVar2;
          }
          FUN_01c7101c();
          return iVar2;
        }
      }
LAB_01c7051c:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  return 0;
}


