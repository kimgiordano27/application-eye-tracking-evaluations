/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$Raycast
ENTRY_POINT: 077004c8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 96
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthManagerRaycastExtensions__Raycast
               (long param_1,ulong param_2,uint param_3)

{
  long *plVar1;
  int in_w8;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if ((param_2 & 1) == 0) {
    if (in_w8 == *(int *)(param_1 + 0x34)) goto LAB_077004f4;
    iVar3 = *(int *)(param_1 + 0x30);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x30);
    if (in_w8 == iVar3) {
LAB_077004f4:
      lVar2 = *(long *)(param_1 + 0x50);
      FUN_09516910(0,0,0,0);
      if (lVar2 != 0) {
        FUN_0953a418(lVar2,0);
        FUN_076ff888(param_1);
        return;
      }
      goto LAB_0770064c;
    }
  }
  if (in_w8 != iVar3) {
    if ((*(long *)(param_1 + 0x40) == 0) ||
       (plVar1 = *(long **)(*(long *)(param_1 + 0x40) + 0x50), plVar1 == (long *)0x0))
    goto LAB_0770064c;
    (**(code **)(*plVar1 + 0x2a8))
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
    in_w8 = *(int *)(param_1 + 0x38);
  }
  if (in_w8 != *(int *)(param_1 + 0x34)) {
    if ((*(long *)(param_1 + 0x48) == 0) ||
       (plVar1 = *(long **)(*(long *)(param_1 + 0x48) + 0x50), plVar1 == (long *)0x0))
    goto LAB_0770064c;
    (**(code **)(*plVar1 + 0x2a8))
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
  }
  if ((param_2 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 == 0) goto LAB_0770064c;
    lVar4 = *(long *)(param_1 + 0x48);
    if ((param_3 & 1) != 0) goto LAB_077005bc;
LAB_077005e8:
    if ((lVar4 == 0) || (plVar1 = *(long **)(lVar4 + 0x48), plVar1 == (long *)0x0))
    goto LAB_0770064c;
    lVar4 = *plVar1;
    uVar5 = *(undefined4 *)(lVar2 + 0x28);
    uVar6 = *(undefined4 *)(lVar2 + 0x2c);
    uVar7 = *(undefined4 *)(lVar2 + 0x30);
    uVar8 = *(undefined4 *)(lVar2 + 0x34);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 == 0) goto LAB_0770064c;
    lVar4 = *(long *)(param_1 + 0x40);
    if ((param_3 & 1) == 0) goto LAB_077005e8;
LAB_077005bc:
    if ((lVar4 == 0) || (plVar1 = *(long **)(lVar4 + 0x48), plVar1 == (long *)0x0))
    goto LAB_0770064c;
    lVar4 = *plVar1;
    uVar5 = *(undefined4 *)(lVar2 + 0x18);
    uVar6 = *(undefined4 *)(lVar2 + 0x1c);
    uVar7 = *(undefined4 *)(lVar2 + 0x20);
    uVar8 = *(undefined4 *)(lVar2 + 0x24);
  }
  (**(code **)(lVar4 + 0x2a8))(uVar5,uVar6,uVar7,uVar8,plVar1,*(undefined8 *)(lVar4 + 0x2b0));
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_076f2788(*(long *)(param_1 + 0x60),3);
    lVar2 = *(long *)(param_1 + 0x50);
    FUN_09516910(0,0,0,0);
    if (lVar2 != 0) {
      FUN_0953a418(lVar2,0);
      return;
    }
  }
LAB_0770064c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


