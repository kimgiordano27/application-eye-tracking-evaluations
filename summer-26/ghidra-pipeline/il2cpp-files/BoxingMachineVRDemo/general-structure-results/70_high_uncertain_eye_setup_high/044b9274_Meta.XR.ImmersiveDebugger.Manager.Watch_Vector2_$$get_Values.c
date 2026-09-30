/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_Values
ENTRY_POINT: 044b9274
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_Values(undefined8 param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long unaff_x19;
  undefined8 uVar8;
  undefined8 uVar9;
  long *unaff_x23;
  long unaff_x24;
  
  plVar2 = (long *)FUN_05015c2c(param_1,0);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*unaff_x23 + 0x130);
    if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23))
    goto LAB_044b95a4;
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0();
  }
  plVar4 = (long *)FUN_05015c2c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),0);
  if (plVar4 == (long *)0x0) goto LAB_044b95a0;
  uVar5 = (**(code **)(*plVar4 + 0x298))(plVar4,plVar2,*(undefined8 *)(*plVar4 + 0x2a0));
  if ((uVar5 & 1) == 0) {
    if (plVar2 == (long *)0x0) goto LAB_044b95a0;
    uVar5 = (**(code **)(*plVar2 + 0x3b8))(plVar2,*(undefined8 *)(*plVar2 + 0x3c0));
    if ((uVar5 & 1) != 0) {
      uVar8 = (**(code **)(*plVar2 + 0x448))(plVar2,*(undefined8 *)(*plVar2 + 0x450));
      uVar9 = *(undefined8 *)PTR_DAT_06766c20;
      if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)(unaff_x24 + 0xe0));
      }
      uVar9 = FUN_05015c2c(uVar9,0);
      uVar5 = FUN_0501ed54(uVar8,uVar9,0);
      if ((uVar5 & 1) != 0) {
        lVar3 = (**(code **)(*plVar2 + 0x468))(plVar2,*(undefined8 *)(*plVar2 + 0x470));
        if (lVar3 == 0) goto LAB_044b95a0;
        if (*(int *)(lVar3 + 0x18) == 0) {
LAB_044b95ac:
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        plVar2 = *(long **)(lVar3 + 0x20);
        if (plVar2 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x23 + 0x130);
          if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
LAB_044b95a4:
                    /* WARNING: Subroutine does not return */
            FUN_02d60e88(plVar2);
          }
        }
        uVar8 = *(undefined8 *)PTR_DAT_0676b178;
        if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        plVar4 = (long *)FUN_05015c2c(uVar8,0);
        plVar6 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675f8d8,1);
        if (plVar6 == (long *)0x0) goto LAB_044b95a0;
        if ((plVar2 != (long *)0x0) &&
           (lVar3 = thunk_FUN_02d9d438(plVar2,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0)) {
          uVar8 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar8,0);
        }
        if ((int)plVar6[3] == 0) goto LAB_044b95ac;
        plVar6[4] = (long)plVar2;
        thunk_FUN_02dd37b4(plVar6 + 4,plVar2);
        if (plVar4 == (long *)0x0) {
LAB_044b95a0:
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        plVar4 = (long *)(**(code **)(*plVar4 + 0x958))
                                   (plVar4,plVar6,*(undefined8 *)(*plVar4 + 0x960));
        if (plVar4 == (long *)0x0) goto LAB_044b95a0;
        uVar5 = (**(code **)(*plVar4 + 0x298))(plVar4,plVar2,*(undefined8 *)(*plVar4 + 0x2a0));
        if ((uVar5 & 1) != 0) {
          lVar3 = *(long *)(unaff_x24 + 0xe0);
          puVar7 = (undefined8 *)PTR_DAT_0676b180;
          goto LAB_044b92f8;
        }
      }
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    plVar2 = (long *)thunk_FUN_02d9d534();
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0(lVar3);
    }
    FUN_03e4efd8(plVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
  }
  else {
    lVar3 = *(long *)(unaff_x24 + 0xe0);
    puVar7 = (undefined8 *)PTR_DAT_0676b170;
LAB_044b92f8:
    uVar8 = *puVar7;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar8 = FUN_05015c2c(uVar8,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*unaff_x23);
    }
    plVar2 = (long *)FUN_05048158(uVar8,plVar2,0);
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0(lVar3);
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0(lVar3);
    }
    if (plVar2 != (long *)0x0) {
      if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar2);
      }
    }
  }
  return plVar2;
}


