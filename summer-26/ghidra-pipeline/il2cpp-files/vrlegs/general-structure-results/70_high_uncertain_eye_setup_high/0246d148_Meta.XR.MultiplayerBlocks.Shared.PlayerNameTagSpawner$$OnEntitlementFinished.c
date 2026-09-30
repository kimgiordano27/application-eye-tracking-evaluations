/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlayerNameTagSpawner$$OnEntitlementFinished
ENTRY_POINT: 0246d148
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_PlayerNameTagSpawner__OnEntitlementFinished(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  
  FUN_01ab69ac(PTR_DAT_03ce2d48);
  FUN_01ab69ac(PTR_DAT_03ce4e28);
  FUN_01ab69ac(PTR_DAT_03ce45a0);
  FUN_01ab69ac(PTR_DAT_03ce6bf8);
  FUN_01ab69ac(PTR_DAT_03ce6f70);
  *(undefined1 *)(unaff_x20 + 0x3aa) = 1;
  if (*(int *)(unaff_x19 + 0xe0) != 100) {
    if (*(long *)(unaff_x19 + 0x138) == 0) goto LAB_0246d394;
    if (*(uint *)(*(long *)(unaff_x19 + 0x138) + 0x18) <= *(int *)(unaff_x19 + 0x14c) - 3U)
    goto LAB_0246d398;
    FUN_0245bbbc();
    FUN_02488330();
  }
  puVar3 = PTR_DAT_03ce45a0;
  lVar8 = *(long *)(unaff_x19 + 0x138);
  if (lVar8 != 0) {
    uVar2 = *(int *)(unaff_x19 + 0x14c) - 2;
    if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_0246d398;
    plVar5 = *(long **)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
    if (plVar5 != (long *)0x0) {
      lVar8 = *(long *)PTR_DAT_03ce6bf8;
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8))
      {
LAB_0246d3ac:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar5,lVar8);
      }
      uVar9 = *(undefined8 *)(unaff_x19 + 0x48);
      lVar8 = plVar5[3];
      uVar4 = FUN_024a0e54(plVar5,0);
      uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
      FUN_023eeb34(uVar6,uVar9,lVar8,uVar4,0);
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        FUN_023ef320(*(long *)(unaff_x19 + 0x48),uVar6,0);
        lVar8 = *(long *)(unaff_x19 + 0x138);
        if (lVar8 != 0) {
          uVar2 = *(int *)(unaff_x19 + 0x14c) - 3;
          if (*(uint *)(lVar8 + 0x18) <= uVar2) {
LAB_0246d398:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          plVar5 = *(long **)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
          lVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ce6f68);
          if (plVar5 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_03ce4e28 + 0x130);
            if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_03ce4e28)) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6ee0(plVar5);
            }
          }
          FUN_024dcd0c(lVar7,plVar5,uVar6,0);
          lVar8 = *(long *)(unaff_x19 + 0x138);
          if (lVar8 != 0) {
            if (*(uint *)(lVar8 + 0x18) <= *(uint *)(unaff_x19 + 0x14c)) goto LAB_0246d398;
            if (lVar7 != 0) {
              plVar5 = *(long **)(lVar8 + (long)(int)*(uint *)(unaff_x19 + 0x14c) * 8 + 0x20);
              if (plVar5 != (long *)0x0) {
                lVar8 = *(long *)PTR_DAT_03ce2d48;
                if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
                   (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8)
                    != lVar8)) goto LAB_0246d3ac;
              }
              *(long **)(lVar7 + 0x38) = plVar5;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              *(long *)(unaff_x19 + 0x140) = lVar7;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (unaff_x19 + 0x140,lVar7);
              return;
            }
          }
        }
      }
    }
  }
LAB_0246d394:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


