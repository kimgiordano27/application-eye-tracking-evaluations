/*
FUNCTION_NAME: OVRPlugin.Media$$SetPlatformCameraMode
ENTRY_POINT: 060fcfa4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Media__SetPlatformCameraMode(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  long lVar7;
  
  lVar7 = *(long *)(unaff_x19 + 0x80);
  if ((lVar7 != 0) && (plVar6 = *(long **)(unaff_x19 + 0x90), plVar6 != (long *)0x0)) {
    lVar2 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07a22a80) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_060fd00c;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(plVar6,*(long *)PTR_DAT_07a22a80,1);
LAB_060fd00c:
    (*(code *)*puVar1)(plVar6,lVar7 + 0x18,puVar1[1]);
    uVar3 = 0;
    while (lVar7 = *(long *)(unaff_x19 + 0xa0), lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      lVar2 = *(long *)(unaff_x19 + 0x80);
      if (lVar2 == 0) break;
      plVar6 = *(long **)(lVar7 + uVar3 * 8 + 0x20);
      if (plVar6 == (long *)0x0) break;
      lVar7 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x21) {
            puVar1 = (undefined8 *)(lVar7 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_060fd098;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_0367cd30(plVar6,*unaff_x21,1);
LAB_060fd098:
      (*(code *)*puVar1)(plVar6,lVar2 + 0x30,puVar1[1]);
      uVar3 = uVar3 + 1;
      if (uVar3 == 0x1a) {
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


