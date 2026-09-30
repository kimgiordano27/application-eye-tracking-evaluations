/*
FUNCTION_NAME: OVRManager$$get_batteryLevel
ENTRY_POINT: 076add3c
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_batteryLevel(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar2 = FUN_085849e0(param_1,0);
  puVar1 = PTR_DAT_08f65598;
  if (lVar2 != 0) {
    uVar3 = thunk_FUN_085992a0(lVar2,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364(*(long *)puVar1);
    }
    uVar4 = FUN_0858816c(uVar3,0,0);
    fVar9 = 1.0;
    if ((uVar4 & 1) != 0) {
      lVar2 = FUN_085849e0();
      if ((lVar2 == 0) || (lVar2 = thunk_FUN_085992a0(lVar2,0), lVar2 == 0)) goto LAB_076ade74;
      fVar9 = (float)FUN_0859aca0(lVar2,0);
    }
    lVar2 = FUN_085849e0();
    plVar8 = *(long **)(unaff_x19 + 0x28);
    if (plVar8 != (long *)0x0) {
      lVar6 = *plVar8;
      uVar3 = *(undefined8 *)(unaff_x19 + 0x34);
      fVar11 = *(float *)(unaff_x19 + 0x3c);
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f6a1b8) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 4) * 0x10 + 0x138);
            goto LAB_076ade28;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08f6a1b8,4);
LAB_076ade28:
      fVar10 = (float)(*(code *)*puVar5)(plVar8,puVar5[1]);
      if (lVar2 != 0) {
        UnityEngine_UI_Dropdown__OnSubmit
                  (((float)uVar3 * fVar10) / fVar9,((float)((ulong)uVar3 >> 0x20) * fVar10) / fVar9,
                   (fVar11 * fVar10) / fVar9,lVar2,0);
        return;
      }
    }
  }
LAB_076ade74:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


