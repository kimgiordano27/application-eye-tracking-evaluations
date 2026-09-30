/*
FUNCTION_NAME: OVRPlugin$$SuggestBodyTrackingCalibrationOverride
ENTRY_POINT: 0567d248
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SuggestBodyTrackingCalibrationOverride(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  long *plVar8;
  long unaff_x20;
  undefined8 uVar9;
  
  FUN_02d965b8(System_Collections_Generic_List<TMP_SpriteCharacter>_TypeInfo);
                    /* try { // try from 0567d25c to 0577d25f has its CatchHandler @ 0567d908 */
  FUN_02d965b8(System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo);
                    /* try { // try from 0567d260 to 0577d26f has its CatchHandler @ 0567da94 */
  FUN_02d965b8(PTR_DAT_06a0e888);
                    /* try { // try from 0567d270 to 0577d2e7 has its CatchHandler @ 0567ccdc */
  *(undefined1 *)(unaff_x20 + 0x6fd) = 1;
  puVar2 = PTR_DAT_06a0e888;
  plVar8 = (long *)(unaff_x19 + 0x20);
  if (*plVar8 == 0) {
    lVar5 = *(long *)(*(long *)PTR_DAT_06a0e888 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18();
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
    if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)PTR_DAT_069fb990);
    }
    uVar6 = FUN_06350670(uVar9,0,0);
    puVar3 = System_Collections_Generic_List<TMP_SpriteCharacter>_TypeInfo;
                    /* try { // try from 0567d2e8 to 0577d2eb has its CatchHandler @ 0567d8e8 */
    if ((uVar6 & 1) == 0) {
                    /* try { // try from 0567d2ec to 0577d2fb has its CatchHandler @ 0567d924 */
      lVar5 = *(long *)System_Collections_Generic_List<TMP_SpriteCharacter>_TypeInfo;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar5 = *(long *)puVar3;
      }
      lVar7 = *(long *)(*(long *)puVar2 + 0x20);
                    /* try { // try from 0567d314 to 0577d317 has its CatchHandler @ 0567d910 */
      uVar9 = **(undefined8 **)(lVar5 + 0xb8);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02dcfd18(lVar7);
      }
      lVar5 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02dcfd18();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar5 != 0) {
        uVar1 = *(undefined4 *)(lVar5 + 0x24);
        lVar7 = *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
        lVar5 = *(long *)(lVar7 + 0x38);
        if (lVar5 == 0) {
          FUN_02dcfd74(lVar7);
          lVar5 = *(long *)(lVar7 + 0x38);
        }
        lVar7 = *(long *)(lVar5 + 0x10);
        lVar5 = *(long *)(lVar7 + 0x38);
        if (lVar5 == 0) {
          FUN_02dcfd74(lVar7);
          lVar5 = *(long *)(lVar7 + 0x38);
        }
        iVar4 = FUN_03885dec(uVar9,uVar1,*(undefined8 *)(lVar5 + 0x18));
        if (iVar4 < 0) {
          return;
        }
        lVar5 = *(long *)(*(long *)puVar2 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02dcfd18();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02dcfd18();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 != 0) {
          if ((*(int *)(lVar5 + 0x24) == 1) && (uVar6 = FUN_056a09f4(0), (uVar6 & 1) == 0)) {
            return;
          }
          lVar5 = *(long *)(*(long *)puVar2 + 0x20);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02dcfd18();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02dcfd18();
          }
          if (*(long *)(*(long *)(lVar5 + 0xb8) + 8) != 0) {
            FUN_0567d4e8();
            lVar5 = *(long *)(*(long *)puVar2 + 0x20);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_02dcfd18();
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_02dcfd18();
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
            if (lVar5 != 0) {
              if (*(long *)(lVar5 + 0x1b0) == 0) {
                return;
              }
              lVar5 = *(long *)(*(long *)puVar2 + 0x20);
              if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_02dcfd18();
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
              if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_02dcfd18();
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
              if (lVar5 != 0) {
                *plVar8 = *(long *)(lVar5 + 0x1b0);
                LeanTween__value(plVar8);
                return;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  return;
}


