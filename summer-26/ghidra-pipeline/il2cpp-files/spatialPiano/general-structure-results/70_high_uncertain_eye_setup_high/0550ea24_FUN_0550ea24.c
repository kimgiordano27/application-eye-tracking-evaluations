/*
FUNCTION_NAME: FUN_0550ea24
ENTRY_POINT: 0550ea24
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_19;functionality_eye_api_context_without_clear_sink_hits_21
*/


long FUN_0550ea24(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  uint uVar16;
  undefined4 local_44;
  
  puVar2 = OVRPlugin_OVRP_1_99_0_TypeInfo;
  if ((DAT_06bbf5a2 & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_1_9_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OpenXREventDelegateType_TypeInfo);
    FUN_02f08768(OVRPlugin_OverlayShape_TypeInfo);
    FUN_02f08768(OVRPlugin_PoseStatef_TypeInfo);
    FUN_02f08768(
                System_Linq_Expressions_Interpreter_LessThanOrEqualInstruction_LessThanOrEqualDouble_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067cbc80);
    FUN_02f08768(PTR_DAT_067ca1a8);
    FUN_02f08768(PTR_DAT_067cbc88);
    FUN_02f08768(OVRPlugin_Posef_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_99_0_TypeInfo);
    FUN_02f08768(OVRPlugin_Quatf_TypeInfo);
    FUN_02f08768(OVRPlugin_Result_TypeInfo);
    FUN_02f08768(OVRPlugin_Size3f_TypeInfo);
    FUN_02f08768(OVRPlugin_Sizef_TypeInfo);
    FUN_02f08768(OVRPlugin_Sizei_TypeInfo);
    DAT_06bbf5a2 = 1;
  }
  local_44 = 0;
  lVar3 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_05116b38(lVar3,0);
  puVar2 = PTR_DAT_067cbc80;
  if (lVar3 == 0) goto LAB_0550f224;
  iVar1 = *(int *)(*(long *)PTR_DAT_067cbc88 + 0xe4);
  *(undefined8 *)(lVar3 + 0x18) = param_1;
  if (iVar1 == 0) {
    thunk_FUN_02f6670c();
  }
  plVar4 = (long *)FUN_0552e020(param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)puVar2);
  }
  lVar5 = FUN_0552a738(plVar4,0);
  if (lVar5 == 0) goto LAB_0550f224;
  if (0xf < *(int *)(lVar5 + 0x18)) {
    return 0;
  }
  if (plVar4 == (long *)0x0) goto LAB_0550f224;
  uVar14 = *(undefined8 *)OVRPlugin_Quatf_TypeInfo;
  uVar6 = (**(code **)(*plVar4 + 0x3d8))(plVar4,*(undefined8 *)(*plVar4 + 0x3e0));
  puVar2 = PTR_DAT_067c9338;
  lVar15 = *(long *)(PTR_DAT_067c9338 + 0x20);
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
  }
  uVar7 = FUN_050e4454(lVar15 + 0x20,0);
  uVar8 = FUN_050ed374(uVar6,uVar7,0);
  if ((uVar8 & 1) == 0) {
    plVar9 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067ca1a8,*(int *)(lVar5 + 0x18) + 1);
    if (plVar9 == (long *)0x0) goto LAB_0550f224;
    lVar15 = (**(code **)(*plVar4 + 0x3d8))(plVar4,*(undefined8 *)(*plVar4 + 0x3e0));
    if ((lVar15 != 0) &&
       (lVar11 = thunk_FUN_02f45174(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
    goto LAB_0550f228;
    if (*(uint *)(plVar9 + 3) == 0) goto LAB_0550f24c;
    *(long *)((long)plVar9 +
             ((long)(((ulong)*(uint *)(plVar9 + 3) << 0x20) + -0x100000000) >> 0x1d) + 0x20) =
         lVar15;
  }
  else {
    uVar14 = FUN_04f65260(uVar14,*(undefined8 *)OVRPlugin_Sizef_TypeInfo,0);
    plVar9 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067ca1a8,*(undefined4 *)(lVar5 + 0x18));
  }
  uVar6 = (**(code **)(*plVar4 + 0x3d8))(plVar4,*(undefined8 *)(*plVar4 + 0x3e0));
  lVar15 = *(long *)(puVar2 + 0x20);
  if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(puVar2 + 0xe0));
  }
  uVar7 = FUN_050e4454(lVar15 + 0x20,0);
  uVar8 = FUN_050ed374(uVar6,uVar7,0);
  if ((uVar8 & 1) == 0) {
LAB_0550ee5c:
    uVar6 = (**(code **)(*plVar4 + 0x3d8))(plVar4,*(undefined8 *)(*plVar4 + 0x3e0));
    lVar15 = *(long *)(puVar2 + 0x20);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)(puVar2 + 0xe0));
    }
    uVar7 = FUN_050e4454(lVar15 + 0x20,0);
    uVar8 = FUN_050ed374(uVar6,uVar7,0);
    if ((uVar8 & 1) != 0) {
      if (plVar9 == (long *)0x0) goto LAB_0550f224;
      if (plVar9[3] != 0) goto LAB_0550eeb8;
      uVar6 = *(undefined8 *)OVRPlugin_PoseStatef_TypeInfo;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar15 = FUN_050e4454(uVar6,0);
      if (lVar15 == 0) goto LAB_0550f224;
      uVar6 = *(undefined8 *)OVRPlugin_Sizei_TypeInfo;
LAB_0550f130:
      plVar4 = (long *)FUN_050ef6a8(lVar15,uVar6,0x24,0);
      goto LAB_0550f140;
    }
LAB_0550eeb8:
    uVar13 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar13) {
      lVar15 = 4;
      do {
        uVar16 = (int)lVar15 - 4;
        if (uVar13 <= uVar16) goto LAB_0550f24c;
        plVar4 = *(long **)(lVar5 + lVar15 * 8);
        if ((plVar4 == (long *)0x0) ||
           (lVar11 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0)),
           plVar9 == (long *)0x0)) goto LAB_0550f224;
        if (lVar11 == 0) {
          if ((int)lVar15 - 4U < *(uint *)(plVar9 + 3)) {
            plVar9[lVar15] = 0;
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_0550f24c;
        }
        lVar12 = thunk_FUN_02f45174(lVar11,*(undefined8 *)(*plVar9 + 0x40));
        if (lVar12 == 0) goto LAB_0550f228;
        if (*(uint *)(plVar9 + 3) <= uVar16) goto LAB_0550f24c;
        plVar9[lVar15] = lVar11;
        uVar8 = FUN_050eed58(lVar11,0);
        if ((uVar8 & 1) != 0) {
          return 0;
        }
        uVar13 = *(uint *)(lVar5 + 0x18);
        lVar15 = lVar15 + 1;
      } while ((int)lVar15 + -4 < (int)uVar13);
    }
    uVar6 = FUN_0550f264(plVar9);
    uVar7 = *(undefined8 *)(lVar3 + 0x18);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)(puVar2 + 0xe0));
    }
    uVar8 = FUN_050ed374(uVar6,uVar7,0);
    if ((uVar8 & 1) == 0) {
      uVar6 = *(undefined8 *)OVRPlugin_PoseStatef_TypeInfo;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar15 = FUN_050e4454(uVar6,0);
      local_44 = (undefined4)*(undefined8 *)(lVar5 + 0x18);
      uVar6 = FUN_050d2c48(&local_44,0);
      uVar6 = FUN_04f65260(uVar14,uVar6,0);
      if (lVar15 == 0) goto LAB_0550f224;
      goto LAB_0550f130;
    }
    local_44 = (undefined4)*(undefined8 *)(lVar5 + 0x18);
    uVar6 = FUN_050d2c48(&local_44,0);
    uVar6 = FUN_04f6f6b4(*(undefined8 *)OVRPlugin_Result_TypeInfo,uVar14,uVar6,0);
    uVar14 = *(undefined8 *)OVRPlugin_PoseStatef_TypeInfo;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)(puVar2 + 0xe0));
    }
    lVar5 = FUN_050e4454(uVar14,0);
    if ((lVar5 == 0) || (plVar4 = (long *)FUN_050ef6a8(lVar5,uVar6,0x28,0), plVar4 == (long *)0x0))
    goto LAB_0550f224;
    plVar4 = (long *)(**(code **)(*plVar4 + 0x3f8))(plVar4,plVar9,*(undefined8 *)(*plVar4 + 0x400));
    puVar2 = 
    System_Linq_Expressions_Interpreter_LessThanOrEqualInstruction_LessThanOrEqualDouble_TypeInfo;
    lVar5 = *(long *)
             System_Linq_Expressions_Interpreter_LessThanOrEqualInstruction_LessThanOrEqualDouble_TypeInfo
    ;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar5);
      lVar5 = *(long *)puVar2;
    }
    uVar6 = *(undefined8 *)(lVar3 + 0x18);
    lVar5 = **(long **)(lVar5 + 0xb8);
    uVar14 = FUN_050e4454(*(undefined8 *)OVRPlugin_OpenXREventDelegateType_TypeInfo,0);
    if (plVar4 == (long *)0x0) goto LAB_0550f224;
    lVar3 = (**(code **)(*plVar4 + 0x418))(plVar4,uVar14,*(undefined8 *)(*plVar4 + 0x420));
    if (lVar3 == 0) {
      lVar15 = 0;
    }
    else {
      uVar14 = *(undefined8 *)OVRPlugin_OverlayShape_TypeInfo;
      lVar15 = thunk_FUN_02f45174(lVar3,uVar14);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(lVar3,uVar14);
      }
    }
  }
  else {
    if (plVar9 == (long *)0x0) goto LAB_0550f224;
    if ((int)plVar9[3] != 2) goto LAB_0550ee5c;
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_0550f24c:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    plVar10 = *(long **)(lVar5 + 0x20);
    if ((plVar10 == (long *)0x0) ||
       (lVar15 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0)),
       lVar15 == 0)) goto LAB_0550f224;
    uVar8 = FUN_050eed58(lVar15,0);
    if ((uVar8 & 1) == 0) goto LAB_0550ee5c;
    if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_0550f24c;
    plVar10 = *(long **)(lVar5 + 0x28);
    if ((plVar10 == (long *)0x0) ||
       (lVar15 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0)),
       lVar15 == 0)) goto LAB_0550f224;
    uVar8 = FUN_050eed58(lVar15,0);
    if ((uVar8 & 1) == 0) goto LAB_0550ee5c;
    uVar6 = *(undefined8 *)OVRPlugin_PoseStatef_TypeInfo;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar15 = FUN_050e4454(uVar6,0);
    if (lVar15 == 0) goto LAB_0550f224;
    plVar4 = (long *)FUN_050ef6a8(lVar15,*(undefined8 *)OVRPlugin_Size3f_TypeInfo,0x24,0);
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_0550f24c;
    plVar10 = *(long **)(lVar5 + 0x20);
    if ((plVar10 == (long *)0x0) ||
       (plVar10 = (long *)(**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0))
       , plVar10 == (long *)0x0)) goto LAB_0550f224;
    lVar15 = (**(code **)(*plVar10 + 0x418))(plVar10,*(undefined8 *)(*plVar10 + 0x420));
    if ((lVar15 != 0) &&
       (lVar11 = thunk_FUN_02f45174(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
LAB_0550f228:
      uVar6 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar6,0);
    }
    if (((int)plVar9[3] == 0) || (plVar9[4] = lVar15, (*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0))
    goto LAB_0550f24c;
    plVar10 = *(long **)(lVar5 + 0x28);
    if ((plVar10 == (long *)0x0) ||
       (plVar10 = (long *)(**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0))
       , plVar10 == (long *)0x0)) goto LAB_0550f224;
    lVar5 = (**(code **)(*plVar10 + 0x418))(plVar10,*(undefined8 *)(*plVar10 + 0x420));
    if ((lVar5 != 0) &&
       (lVar15 = thunk_FUN_02f45174(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar15 == 0))
    goto LAB_0550f228;
    if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_0550f24c;
    plVar9[5] = lVar5;
LAB_0550f140:
    if (plVar4 == (long *)0x0) goto LAB_0550f224;
    uVar8 = (**(code **)(*plVar4 + 0x308))(plVar4,*(undefined8 *)(*plVar4 + 0x310));
    if ((uVar8 & 1) != 0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x3f8))
                                 (plVar4,plVar9,*(undefined8 *)(*plVar4 + 0x400));
    }
    puVar2 = 
    System_Linq_Expressions_Interpreter_LessThanOrEqualInstruction_LessThanOrEqualDouble_TypeInfo;
    *(long **)(lVar3 + 0x10) = plVar4;
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar5 = *(long *)puVar2;
    }
    uVar6 = *(undefined8 *)(lVar3 + 0x18);
    lVar5 = **(long **)(lVar5 + 0xb8);
    lVar15 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OverlayShape_TypeInfo);
    FUN_04e02ad4(lVar15,lVar3,*(undefined8 *)OVRPlugin_Posef_TypeInfo,0);
  }
  if (lVar5 != 0) {
    FUN_042df5c0(lVar5,uVar6,lVar15,*(undefined8 *)OVRPlugin_OVRP_1_9_0_TypeInfo);
    return lVar15;
  }
LAB_0550f224:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


