/*
FUNCTION_NAME: OVRPlugin.PoseStatef$$.cctor
ENTRY_POINT: 07c9b1e8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PoseStatef___cctor(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x21;
  long *plVar6;
  uint uVar7;
  long unaff_x22;
  long lVar8;
  undefined8 uVar9;
  undefined4 uStack000000000000000c;
  
  plVar6 = *(long **)(unaff_x21 + 0x7b0);
  if ((*(byte *)(unaff_x22 + 0x987) & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f4e7b0);
    *(undefined1 *)(unaff_x22 + 0x987) = 1;
  }
  uStack000000000000000c = 2;
  FUN_07c9b348(param_1,param_2,&stack0x0000000c,0);
  lVar3 = *plVar6;
  uVar1 = *param_2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar3 = *plVar6;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= uVar1) {
LAB_07c9b344:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar3 = *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar1) {
        uVar7 = 0;
        do {
          if (uVar1 <= uVar7) goto LAB_07c9b344;
          lVar4 = *plVar6;
          uVar1 = *(uint *)(lVar3 + (long)(int)uVar7 * 4 + 0x20);
          lVar8 = (long)(int)uVar1;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
            lVar4 = *plVar6;
          }
          lVar4 = **(long **)(lVar4 + 0xb8);
          if (lVar4 == 0) goto LAB_07c9b340;
          if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_07c9b344;
          if ((*(long *)(param_1 + 0xc0) == 0) ||
             (lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + 0x48), lVar5 == 0)) goto LAB_07c9b340;
          uVar2 = *(uint *)(lVar4 + lVar8 * 4 + 0x20);
          if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_07c9b344;
          lVar4 = *(long *)(param_1 + 0x140);
          if (lVar4 == 0) goto LAB_07c9b340;
          if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_07c9b344;
          lVar5 = lVar5 + (long)(int)uVar2 * 0x10;
          uVar9 = *(undefined8 *)(lVar5 + 0x20);
          lVar4 = lVar4 + lVar8 * 0x10;
          *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
          *(undefined8 *)(lVar4 + 0x20) = uVar9;
          lVar4 = *(long *)(param_1 + 0xd0);
          if (lVar4 == 0) goto LAB_07c9b340;
          if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_07c9b344;
          *(undefined4 *)(lVar4 + lVar8 * 4 + 0x20) = 0x3f800000;
          uVar1 = *(uint *)(lVar3 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar1);
      }
      return;
    }
  }
LAB_07c9b340:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


