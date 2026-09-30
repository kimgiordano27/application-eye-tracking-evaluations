/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$DrawLine
ENTRY_POINT: 077022a8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthManagerRaycastExtensions__DrawLine(long param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x23;
  long *plVar9;
  
  plVar9 = *(long **)(unaff_x23 + 0x538);
  uVar7 = *(undefined8 *)(param_1 + 0x110);
  if (*(int *)(*plVar9 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar1 = FUN_0952c404(uVar7,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_07702428;
    FUN_09539308(0,0,0,*(long *)(unaff_x19 + 0x58),0);
    if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_07702428;
    FUN_076f2788(*(long *)(unaff_x19 + 0x70),3);
  }
  if (unaff_x20 != 0) {
    uVar7 = *(undefined8 *)(unaff_x19 + 0x80);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
    if (*(int *)(*plVar9 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar1 = FUN_09531730(uVar7,uVar8,0);
    if ((uVar1 & 1) != 0) {
      if (*(long **)(unaff_x19 + 0x68) == (long *)0x0) goto LAB_07702428;
      (**(code **)(**(long **)(unaff_x19 + 0x68) + 0x448))();
      if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_07702428;
      if (*(char *)(*(long *)(unaff_x19 + 0x68) + 0x120) == '\0') {
LAB_077023ec:
        lVar5 = *(long *)(unaff_x19 + 0x38);
      }
      else {
        uVar7 = *(undefined8 *)(unaff_x19 + 0x40);
        if (*(int *)(*plVar9 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar1 = FUN_0952fedc(uVar7,0);
        if ((uVar1 & 1) == 0) goto LAB_077023ec;
        lVar5 = *(long *)(unaff_x19 + 0x40);
      }
      if (lVar5 != 0) {
        puVar3 = (undefined4 *)(lVar5 + 0x24);
        puVar2 = (undefined4 *)(lVar5 + 0x18);
        puVar4 = (undefined4 *)(lVar5 + 0x20);
        puVar6 = (undefined4 *)(lVar5 + 0x1c);
        goto LAB_07702404;
      }
      goto LAB_07702428;
    }
  }
  if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_07702428;
  if (*(char *)(*(long *)(unaff_x19 + 0x68) + 0x120) == '\0') {
    uVar7 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*plVar9 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar1 = FUN_0952fedc(uVar7,0);
    if ((uVar1 & 1) == 0) goto LAB_077023cc;
    lVar5 = *(long *)(unaff_x19 + 0x40);
  }
  else {
LAB_077023cc:
    lVar5 = *(long *)(unaff_x19 + 0x38);
  }
  if ((lVar5 != 0) && (unaff_x19 != 0)) {
    puVar3 = (undefined4 *)(lVar5 + 0x34);
    puVar2 = (undefined4 *)(lVar5 + 0x28);
    puVar4 = (undefined4 *)(lVar5 + 0x30);
    puVar6 = (undefined4 *)(lVar5 + 0x2c);
LAB_07702404:
    FUN_07702144(*puVar2,*puVar6,*puVar4,*puVar3);
    return;
  }
LAB_07702428:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


