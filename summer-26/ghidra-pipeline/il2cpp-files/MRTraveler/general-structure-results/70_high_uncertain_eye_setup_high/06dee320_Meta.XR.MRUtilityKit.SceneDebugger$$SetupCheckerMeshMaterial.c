/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$SetupCheckerMeshMaterial
ENTRY_POINT: 06dee320
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDebugger__SetupCheckerMeshMaterial(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  
  if (param_1 != 0) {
    if (*(int *)(unaff_x21 + 0x18) != 0) {
      *(undefined8 *)(unaff_x21 + 0x20) = unaff_x23;
      thunk_FUN_03d233cc();
      if ((unaff_x22 != 0) && (lVar1 = thunk_FUN_03cf5138(), lVar1 == 0)) goto LAB_06dee410;
      if (1 < *(uint *)(unaff_x21 + 0x18)) {
        *(long *)(unaff_x21 + 0x28) = unaff_x22;
        thunk_FUN_03d233cc();
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar1 = thunk_FUN_03ce5214(PTR_DAT_08e82378);
        thunk_FUN_03ce5214(PTR_DAT_08e91e28);
        lVar4 = *unaff_x20;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar1) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x11) * 0x10 + 0x138);
              goto LAB_06dee290;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_03cf1348();
LAB_06dee290:
        (*(code *)*puVar2)();
        FUN_06deeb78();
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
LAB_06dee410:
  uVar3 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar3,0);
}


