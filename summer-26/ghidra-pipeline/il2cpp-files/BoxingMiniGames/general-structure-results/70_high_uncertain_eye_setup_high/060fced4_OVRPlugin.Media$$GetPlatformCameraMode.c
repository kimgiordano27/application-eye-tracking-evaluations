/*
FUNCTION_NAME: OVRPlugin.Media$$GetPlatformCameraMode
ENTRY_POINT: 060fced4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Media__GetPlatformCameraMode(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x21;
  long lVar9;
  
  if ((param_1 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a22a80);
    FUN_03642964(PTR_DAT_07a23d18);
    FUN_03642964(PTR_DAT_079f4e28);
    *(undefined1 *)(unaff_x21 + 0xd43) = 1;
  }
  uVar7 = *(undefined8 *)(unaff_x19 + 0x80);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar2 = FUN_071c24dc(uVar7,0,0);
  puVar1 = PTR_DAT_07a23d18;
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  lVar9 = *(long *)(unaff_x19 + 0x80);
  if ((lVar9 != 0) && (plVar8 = *(long **)(unaff_x19 + 0x88), plVar8 != (long *)0x0)) {
    lVar4 = *plVar8;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07a23d18) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_060fcf94;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30(plVar8,*(long *)PTR_DAT_07a23d18,1);
LAB_060fcf94:
    (*(code *)*puVar3)(plVar8,lVar9 + 0x24,puVar3[1]);
    lVar9 = *(long *)(unaff_x19 + 0x80);
    if ((lVar9 != 0) && (plVar8 = *(long **)(unaff_x19 + 0x90), plVar8 != (long *)0x0)) {
      lVar4 = *plVar8;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07a22a80) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_060fd00c;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_0367cd30(plVar8,*(long *)PTR_DAT_07a22a80,1);
LAB_060fd00c:
      (*(code *)*puVar3)(plVar8,lVar9 + 0x18,puVar3[1]);
      uVar2 = 0;
      while (lVar9 = *(long *)(unaff_x19 + 0xa0), lVar9 != 0) {
        if (*(uint *)(lVar9 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        lVar4 = *(long *)(unaff_x19 + 0x80);
        if ((lVar4 == 0) || (plVar8 = *(long **)(lVar9 + uVar2 * 8 + 0x20), plVar8 == (long *)0x0))
        break;
        lVar9 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar9 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_060fd098;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_0367cd30(plVar8,*(long *)puVar1,1);
LAB_060fd098:
        (*(code *)*puVar3)(plVar8,lVar4 + 0x30,puVar3[1]);
        uVar2 = uVar2 + 1;
        if (uVar2 == 0x1a) {
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


