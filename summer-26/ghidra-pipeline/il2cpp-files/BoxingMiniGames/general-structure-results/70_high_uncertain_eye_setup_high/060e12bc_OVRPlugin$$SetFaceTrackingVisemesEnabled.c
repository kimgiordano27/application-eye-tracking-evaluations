/*
FUNCTION_NAME: OVRPlugin$$SetFaceTrackingVisemesEnabled
ENTRY_POINT: 060e12bc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetFaceTrackingVisemesEnabled
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  int iVar7;
  long unaff_x21;
  ulong uVar8;
  undefined4 uVar9;
  
  if ((*(byte *)(unaff_x21 + 0xb88) & 1) == 0) {
    FUN_03642964(PTR_DAT_07a06cd0);
    *(undefined1 *)(unaff_x21 + 0xb88) = 1;
  }
  puVar2 = PTR_DAT_07a06cd0;
  if (unaff_x19 != (long *)0x0) {
    uVar8 = 0;
    iVar7 = 0;
    do {
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_060e1338;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0367cd30();
LAB_060e1338:
      uVar9 = (*(code *)*puVar3)();
      lVar4 = *(long *)(unaff_x20 + 0x10);
      if (lVar4 == 0) break;
      uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
      if (uVar5 <= uVar8) {
LAB_060e13ac:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      *(undefined4 *)(lVar4 + uVar8 * 4 + 0x20) = uVar9;
      if (uVar5 <= uVar8 + 1) goto LAB_060e13ac;
      uVar1 = uVar8 + 2;
      *(undefined4 *)(lVar4 + (uVar8 + 1) * 4 + 0x20) = param_2;
      if (uVar5 <= uVar1) goto LAB_060e13ac;
      iVar7 = iVar7 + 1;
      uVar8 = uVar8 + 3;
      *(undefined4 *)(lVar4 + uVar1 * 4 + 0x20) = param_3;
      if (iVar7 == 0x18) {
        return;
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


