/*
FUNCTION_NAME: OVRPlugin$$GetCurrentInteractionProfile
ENTRY_POINT: 07c753a0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetCurrentInteractionProfile(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  int iVar8;
  long *unaff_x21;
  long unaff_x22;
  long *plVar9;
  float fVar10;
  
  FUN_04447ba8(PTR_DAT_09f4d170);
  FUN_04447ba8(PTR_DAT_09f50720);
  FUN_04447ba8(PTR_DAT_09f1e538);
  *(undefined1 *)(unaff_x22 + 0x75a) = 1;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar4 = FUN_0952c404();
  puVar2 = PTR_DAT_09f50720;
  puVar1 = PTR_DAT_09f4d170;
  if ((uVar4 & 1) == 0) {
    if (unaff_x19 == 0) {
LAB_07c754e8:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    iVar8 = 0;
    do {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      iVar3 = FUN_07c8f8b4();
      if (iVar3 != 0) {
        plVar9 = *(long **)(unaff_x20 + 0x130);
        if (plVar9 == (long *)0x0) goto LAB_07c754e8;
        lVar6 = *plVar9;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_07c7549c;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_044822ac(plVar9,*(long *)puVar2,0);
LAB_07c7549c:
        fVar10 = (float)(*(code *)*puVar5)(plVar9,iVar8,puVar5[1]);
        if (*(float *)(unaff_x19 + 0xd8) < fVar10) {
          return 1;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 5);
  }
  return 0;
}


