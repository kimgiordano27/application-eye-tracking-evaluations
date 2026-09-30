/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig.GetRightControllerTransformDelegate$$BeginInvoke
ENTRY_POINT: 04c1c9c8
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


void Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetRightControllerTransformDelegate__BeginInvoke
               (undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  long in_x9;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 uVar8;
  long *plVar9;
  
  plVar9 = (long *)*param_1;
  plVar1 = (long *)FUN_02ce7ad4(**(undefined8 **)(in_x9 + 0xa10),2);
  lVar2 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065e5918);
  if (plVar1 == (long *)0x0) {
LAB_04c1cd74:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_02cea798(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
LAB_04c1cd7c:
    uVar8 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar8,0);
  }
  uVar5 = *(uint *)(plVar1 + 3);
  if (uVar5 != 0) {
    plVar1[4] = lVar2;
    if (unaff_x19 != 0) {
      lVar2 = thunk_FUN_02cea798();
      if (lVar2 == 0) goto LAB_04c1cd7c;
      uVar5 = *(uint *)(plVar1 + 3);
    }
    if (1 < uVar5) {
      plVar1[5] = unaff_x19;
      if (plVar9 != (long *)0x0) {
        lVar2 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
        uVar8 = *(undefined8 *)PTR_DAT_065e5920;
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065e39d8) {
              puVar4 = (undefined8 *)(lVar2 + (long)(*piVar7 + 5) * 0x10 + 0x138);
              goto LAB_04c1cb3c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065e39d8,5);
LAB_04c1cb3c:
        (*(code *)*puVar4)(plVar9,uVar8,plVar1,puVar4[1]);
        return;
      }
      goto LAB_04c1cd74;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


