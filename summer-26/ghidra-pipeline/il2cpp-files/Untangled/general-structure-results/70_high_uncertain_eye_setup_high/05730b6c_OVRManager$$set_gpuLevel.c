/*
FUNCTION_NAME: OVRManager$$set_gpuLevel
ENTRY_POINT: 05730b6c
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05730bb4) */
/* WARNING: Removing unreachable block (ram,0x05730bd4) */

long * OVRManager__set_gpuLevel(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int iVar9;
  long unaff_x22;
  
  FUN_02f07e70(PTR_DAT_06d58940);
  FUN_02f07e70(PTR_DAT_06d58308);
  *(undefined1 *)(unaff_x22 + 0x8e6) = 1;
  if (unaff_x20 == 0) {
    return (long *)0x0;
  }
  if (*(long *)(unaff_x21 + 0x58) != 0) {
    uVar6 = FUN_05733e74();
    puVar4 = PTR_DAT_06d58940;
    puVar3 = PTR_DAT_06d58938;
    puVar2 = PTR_DAT_06d58308;
    if ((uVar6 & 1) != 0) {
      return (long *)0x0;
    }
    if (unaff_w19 == 4) {
      return (long *)0x0;
    }
    lVar7 = *(long *)(unaff_x21 + 0x58);
    if (lVar7 != 0) {
      iVar9 = 0;
      do {
        iVar5 = FUN_049950e8(lVar7,*(undefined8 *)puVar3);
        if (iVar5 <= iVar9) {
          return (long *)0x0;
        }
        if ((*(long *)(unaff_x21 + 0x58) == 0) ||
           (plVar8 = (long *)FUN_04995178(*(long *)(unaff_x21 + 0x58),iVar9,*(undefined8 *)puVar4),
           plVar8 == (long *)0x0)) break;
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar8);
        }
        uVar6 = FUN_05464bbc(plVar8[0xc]);
        if ((uVar6 & 1) != 0) {
          return plVar8;
        }
        lVar7 = *(long *)(unaff_x21 + 0x58);
        iVar9 = iVar9 + 1;
      } while (lVar7 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


