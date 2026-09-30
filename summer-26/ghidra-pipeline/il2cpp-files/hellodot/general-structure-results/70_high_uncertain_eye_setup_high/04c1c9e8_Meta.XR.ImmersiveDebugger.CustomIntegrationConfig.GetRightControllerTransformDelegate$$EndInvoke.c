/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig.GetRightControllerTransformDelegate$$EndInvoke
ENTRY_POINT: 04c1c9e8
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetRightControllerTransformDelegate__EndInvoke
               (undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  
  lVar1 = thunk_FUN_02cea4e8(*param_1);
  if (unaff_x21 == (long *)0x0) {
LAB_04c1cd74:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_02cea798(lVar1,*(undefined8 *)(*unaff_x21 + 0x40)), lVar2 == 0)) {
LAB_04c1cd7c:
    uVar4 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar4,0);
  }
  uVar5 = *(uint *)(unaff_x21 + 3);
  if (uVar5 != 0) {
    unaff_x21[4] = lVar1;
    if (unaff_x19 != 0) {
      lVar1 = thunk_FUN_02cea798();
      if (lVar1 == 0) goto LAB_04c1cd7c;
      uVar5 = *(uint *)(unaff_x21 + 3);
    }
    if (1 < uVar5) {
      unaff_x21[5] = unaff_x19;
      if (unaff_x20 != (long *)0x0) {
        lVar1 = *unaff_x20;
        uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065e39d8) {
              puVar3 = (undefined8 *)(lVar1 + (long)(*piVar7 + 5) * 0x10 + 0x138);
              goto LAB_04c1cb3c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_02ce0a7c();
LAB_04c1cb3c:
        (*(code *)*puVar3)();
        return;
      }
      goto LAB_04c1cd74;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


