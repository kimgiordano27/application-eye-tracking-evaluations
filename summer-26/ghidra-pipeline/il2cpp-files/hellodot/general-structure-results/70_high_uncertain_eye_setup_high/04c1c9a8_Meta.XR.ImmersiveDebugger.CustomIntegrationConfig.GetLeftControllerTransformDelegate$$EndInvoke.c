/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig.GetLeftControllerTransformDelegate$$EndInvoke
ENTRY_POINT: 04c1c9a8
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


void Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetLeftControllerTransformDelegate__EndInvoke
               (void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  undefined8 uVar7;
  long unaff_x20;
  long *plVar8;
  long *plVar9;
  
  plVar8 = *(long **)(unaff_x20 + 0xe10);
  lVar1 = *plVar8;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar1 = *plVar8;
  }
  plVar9 = (long *)**(undefined8 **)(lVar1 + 0xb8);
  plVar8 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
  lVar1 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065e5918);
  if (plVar8 == (long *)0x0) {
LAB_04c1cd74:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_02cea798(lVar1,*(undefined8 *)(*plVar8 + 0x40)), lVar2 == 0)) {
LAB_04c1cd7c:
    uVar7 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar7,0);
  }
  uVar4 = *(uint *)(plVar8 + 3);
  if (uVar4 != 0) {
    plVar8[4] = lVar1;
    if (unaff_x19 != 0) {
      lVar1 = thunk_FUN_02cea798();
      if (lVar1 == 0) goto LAB_04c1cd7c;
      uVar4 = *(uint *)(plVar8 + 3);
    }
    if (1 < uVar4) {
      plVar8[5] = unaff_x19;
      if (plVar9 != (long *)0x0) {
        lVar1 = *plVar9;
        uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
        uVar7 = *(undefined8 *)PTR_DAT_065e5920;
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_065e39d8) {
              puVar3 = (undefined8 *)(lVar1 + (long)(*piVar6 + 5) * 0x10 + 0x138);
              goto LAB_04c1cb3c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065e39d8,5);
LAB_04c1cb3c:
        (*(code *)*puVar3)(plVar9,uVar7,plVar8,puVar3[1]);
        return;
      }
      goto LAB_04c1cd74;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


