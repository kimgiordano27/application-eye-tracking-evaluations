/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugInterface$$ToggleFollowRotation
ENTRY_POINT: 076de780
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__ToggleFollowRotation
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long *unaff_x22;
  long unaff_x24;
  long *plVar13;
  
  puVar5 = PTR_DAT_09f2efe0;
  puVar4 = PTR_DAT_09f2efa8;
  puVar3 = PTR_DAT_09f2ef68;
  puVar2 = PTR_DAT_09f20ed0;
  puVar1 = PTR_DAT_09f1e538;
  plVar13 = *(long **)(unaff_x24 + 0x540);
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar7 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f2efe8);
    lVar9 = *plVar13;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_044a54b4(lVar9);
    }
    FUN_094c33b0(uVar7,0);
    return;
  }
  iVar11 = 0;
  iVar12 = 0x19;
  while( true ) {
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      param_2 = *unaff_x22;
    }
    lVar9 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
    if (lVar9 == 0) goto LAB_076dea3c;
    if (*(int *)(lVar9 + 0x18) <= iVar11) break;
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar9 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
      if (lVar9 == 0) goto LAB_076dea3c;
    }
    lVar9 = FUN_05badb74(lVar9,iVar11,*(undefined8 *)puVar3);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x30) == 0)) goto LAB_076dea3c;
    param_2 = *unaff_x22;
    iVar11 = iVar11 + 1;
    iVar12 = iVar12 + *(int *)(*(long *)(lVar9 + 0x30) + 0x10) + 7;
  }
  plVar6 = (long *)thunk_FUN_0448520c(*(undefined8 *)puVar2);
  FUN_078bb6f4(plVar6,iVar12,0);
  if (plVar6 != (long *)0x0) {
    FUN_078bb7b4(plVar6,*(undefined8 *)puVar5,0);
    iVar11 = 0;
    goto LAB_076de864;
  }
LAB_076dea3c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
LAB_076de864:
  lVar9 = *unaff_x22;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar9 = *unaff_x22;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
  if (lVar9 == 0) goto LAB_076dea3c;
  if (*(int *)(lVar9 + 0x18) <= iVar11) {
    uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    lVar9 = *plVar13;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_044a54b4(lVar9);
    }
    FUN_094c652c(uVar7,0);
    if (DAT_0a522ec6 == '\0') {
      FUN_04447ba8(PTR_DAT_09f2efb8);
      DAT_0a522ec6 = '\x01';
    }
    puVar2 = PTR_DAT_09f2efb8;
    uVar7 = **(undefined8 **)(*(long *)PTR_DAT_09f2efb8 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar8 = FUN_0952fedc(uVar7,0);
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (DAT_0a522ec6 == '\0') {
      FUN_04447ba8(PTR_DAT_09f2efb8);
      DAT_0a522ec6 = '\x01';
    }
    if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
      FUN_076de438(**(long **)(*(long *)puVar2 + 0xb8),1,1);
      return;
    }
    goto LAB_076dea3c;
  }
  lVar9 = FUN_078bb7b4(plVar6,*(undefined8 *)puVar4,0);
  lVar10 = *unaff_x22;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_044a54b4(lVar10);
    lVar10 = *unaff_x22;
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
  if (((lVar10 == 0) || (lVar10 = FUN_05badb74(lVar10,iVar11,*(undefined8 *)puVar3), lVar10 == 0))
     || (lVar9 == 0)) goto LAB_076dea3c;
  FUN_078bb7b4(lVar9,*(undefined8 *)(lVar10 + 0x30),0);
  iVar11 = iVar11 + 1;
  goto LAB_076de864;
}


