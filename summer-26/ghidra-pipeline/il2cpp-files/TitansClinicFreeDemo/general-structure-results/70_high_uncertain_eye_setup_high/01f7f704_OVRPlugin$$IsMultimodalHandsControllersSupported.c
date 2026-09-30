/*
FUNCTION_NAME: OVRPlugin$$IsMultimodalHandsControllersSupported
ENTRY_POINT: 01f7f704
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsMultimodalHandsControllersSupported(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  ulong uVar8;
  
  puVar2 = PTR_DAT_027bb428;
  puVar1 = PTR_DAT_027b3ea8;
  if (unaff_x20 != 0) {
    uVar3 = FUN_01f7fe4c();
    lVar5 = FUN_01230af8(*(undefined8 *)puVar2,uVar3);
    iVar4 = FUN_01f7fe4c();
    if (0 < iVar4) {
      uVar8 = 0;
      do {
        uVar6 = FUN_01f7feac();
        lVar7 = *(long *)puVar1;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01220628(lVar7);
        }
        uVar6 = FUN_01f987bc(uVar6,0);
        if (lVar5 == 0) goto LAB_01f7f7e8;
        if (*(uint *)(lVar5 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        *(undefined8 *)(lVar5 + 0x20 + uVar8 * 8) = uVar6;
        uVar8 = uVar8 + 1;
        iVar4 = FUN_01f7fe4c();
      } while ((long)uVar8 < (long)iVar4);
    }
    puVar2 = PTR_DAT_027c1240;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar6 = FUN_01f987bc();
    FUN_01374758(lVar5,uVar6,*(undefined8 *)puVar2);
    return;
  }
LAB_01f7f7e8:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


