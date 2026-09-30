/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetNativeSDKVersion
ENTRY_POINT: 02c4c7cc
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetNativeSDKVersion(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  
  uVar4 = FUN_01df4e10();
  puVar2 = PTR_DAT_037f8768;
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_037f8768 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
  }
  if (DAT_03a22660 == '\0') {
    FUN_017fc350(PTR_DAT_037f8768);
    FUN_017fc350(PTR_DAT_037f45f0);
    DAT_03a22660 = '\x01';
  }
  puVar1 = PTR_DAT_037f45f0;
  lVar5 = *(long *)PTR_DAT_037f45f0;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar5 = *(long *)puVar1;
  }
  if (*(char *)(*(long *)(lVar5 + 0xb8) + 0x10) != '\0') {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_02c42538();
  }
  puVar8 = (undefined8 *)(unaff_x19 + 0x58);
  plVar9 = (long *)*puVar8;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  lVar5 = *plVar9;
  uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar4 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0380c858) {
        puVar6 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto FUN_02c4c8dc;
      }
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar4 != 0);
  }
  puVar6 = (undefined8 *)FUN_0185dba8(plVar9,*(long *)PTR_DAT_0380c858,0);
FUN_02c4c8dc:
  iVar3 = (*(code *)*puVar6)(plVar9,puVar6[1]);
  puVar2 = PTR_DAT_0380c860;
  if (0 < iVar3) {
    iVar10 = 0;
    do {
      lVar5 = *plVar9;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02c4c94c;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_0185dba8(plVar9,*(long *)puVar2,0);
LAB_02c4c94c:
      lVar5 = (*(code *)*puVar6)(plVar9,iVar10,puVar6[1]);
      if ((lVar5 != 0) && (uVar4 = FUN_02c40bec(), (uVar4 & 1) == 0)) {
        FUN_02c433dc(lVar5);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar3);
  }
  *puVar8 = 0;
  thunk_FUN_0188fd20(puVar8,0);
  return;
}


