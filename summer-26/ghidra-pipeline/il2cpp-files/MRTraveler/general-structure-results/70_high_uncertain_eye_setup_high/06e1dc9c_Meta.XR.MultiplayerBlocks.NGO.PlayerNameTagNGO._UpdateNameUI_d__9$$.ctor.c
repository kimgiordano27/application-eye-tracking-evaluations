/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.PlayerNameTagNGO.<UpdateNameUI>d__9$$.ctor
ENTRY_POINT: 06e1dc9c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_NGO_PlayerNameTagNGO_<UpdateNameUI>d__9___ctor(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  FUN_03c8f898(PTR_DAT_08e93390);
  FUN_03c8f898(PTR_DAT_08e93378);
  FUN_03c8f898(PTR_DAT_08e93398);
  *(undefined1 *)(unaff_x20 + 0x23) = 1;
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x20) == '\0') {
LAB_06e1dda4:
      if ((*(long *)(lVar2 + 0x48) != 0) &&
         (lVar2 = *(long *)(*(long *)(lVar2 + 0x48) + 0x18), lVar2 != 0)) {
        FUN_05d690c0(lVar2,*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_08e93370);
        return;
      }
      return;
    }
    if ((*(long *)(unaff_x19 + 0x18) != 0) &&
       (plVar5 = *(long **)(lVar2 + 0x28), plVar5 != (long *)0x0)) {
      lVar2 = *plVar5;
      uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x18) + 0x10);
      uVar9 = *(undefined8 *)PTR_DAT_08e93398;
      uVar7 = *(undefined8 *)PTR_DAT_08e93390;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      uVar8 = *(undefined8 *)PTR_DAT_08e93378;
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_08e82378) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 4) * 0x10 + 0x138);
            goto LAB_06e1dd68;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)PTR_DAT_08e82378,4);
LAB_06e1dd68:
      (*(code *)*puVar1)(plVar5,uVar9,uVar6,0,0,0,uVar7,uVar8);
      lVar2 = *(long *)(unaff_x19 + 0x10);
      if (lVar2 != 0) goto LAB_06e1dda4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


