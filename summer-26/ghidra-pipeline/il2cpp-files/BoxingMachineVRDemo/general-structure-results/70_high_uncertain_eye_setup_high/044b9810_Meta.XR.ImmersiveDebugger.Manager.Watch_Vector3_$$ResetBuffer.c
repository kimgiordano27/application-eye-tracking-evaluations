/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$ResetBuffer
ENTRY_POINT: 044b9810
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


long * Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__ResetBuffer(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x170));
  FUN_02d6084c(PTR_DAT_0676b178);
  FUN_02d6084c(PTR_DAT_0676b180);
  FUN_02d6084c(PTR_DAT_06766c20);
  FUN_02d6084c(PTR_DAT_067678e8);
  FUN_02d6084c(PTR_DAT_0675f8d8);
  *(undefined1 *)(unaff_x20 + 0x834) = 1;
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  puVar2 = PTR_DAT_0675e258;
  uVar10 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x20);
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)(PTR_DAT_0675e258 + 0xe0));
  }
  puVar3 = PTR_DAT_067678e8;
  plVar5 = (long *)FUN_05015c2c(uVar10,0);
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
    goto LAB_044b9bcc;
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  plVar6 = (long *)FUN_05015c2c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28),0);
  if (plVar6 == (long *)0x0) goto LAB_044b9bc8;
  uVar7 = (**(code **)(*plVar6 + 0x298))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x2a0));
  if ((uVar7 & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_044b9bc8;
    uVar7 = (**(code **)(*plVar5 + 0x3b8))(plVar5,*(undefined8 *)(*plVar5 + 0x3c0));
    if ((uVar7 & 1) != 0) {
      uVar10 = (**(code **)(*plVar5 + 0x448))(plVar5,*(undefined8 *)(*plVar5 + 0x450));
      uVar11 = *(undefined8 *)PTR_DAT_06766c20;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)(puVar2 + 0xe0));
      }
      uVar11 = FUN_05015c2c(uVar11,0);
      uVar7 = FUN_0501ed54(uVar10,uVar11,0);
      if ((uVar7 & 1) != 0) {
        lVar4 = (**(code **)(*plVar5 + 0x468))(plVar5,*(undefined8 *)(*plVar5 + 0x470));
        if (lVar4 == 0) goto LAB_044b9bc8;
        if (*(int *)(lVar4 + 0x18) == 0) {
LAB_044b9bd4:
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        plVar5 = *(long **)(lVar4 + 0x20);
        if (plVar5 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
          if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
LAB_044b9bcc:
                    /* WARNING: Subroutine does not return */
            FUN_02d60e88(plVar5);
          }
        }
        uVar10 = *(undefined8 *)PTR_DAT_0676b178;
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        plVar6 = (long *)FUN_05015c2c(uVar10,0);
        plVar8 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675f8d8,1);
        if (plVar8 == (long *)0x0) goto LAB_044b9bc8;
        if ((plVar5 != (long *)0x0) &&
           (lVar4 = thunk_FUN_02d9d438(plVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar4 == 0)) {
          uVar10 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar10,0);
        }
        if ((int)plVar8[3] == 0) goto LAB_044b9bd4;
        plVar8[4] = (long)plVar5;
        thunk_FUN_02dd37b4(plVar8 + 4,plVar5);
        if (plVar6 == (long *)0x0) {
LAB_044b9bc8:
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        plVar6 = (long *)(**(code **)(*plVar6 + 0x958))
                                   (plVar6,plVar8,*(undefined8 *)(*plVar6 + 0x960));
        if (plVar6 == (long *)0x0) goto LAB_044b9bc8;
        uVar7 = (**(code **)(*plVar6 + 0x298))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x2a0));
        if ((uVar7 & 1) != 0) {
          lVar4 = *(long *)(puVar2 + 0xe0);
          puVar9 = (undefined8 *)PTR_DAT_0676b180;
          goto LAB_044b9920;
        }
      }
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    plVar5 = (long *)thunk_FUN_02d9d534();
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0(lVar4);
    }
    FUN_03e4f15c(plVar5,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
  }
  else {
    lVar4 = *(long *)(puVar2 + 0xe0);
    puVar9 = (undefined8 *)PTR_DAT_0676b170;
LAB_044b9920:
    uVar10 = *puVar9;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar10 = FUN_05015c2c(uVar10,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)puVar3);
    }
    plVar5 = (long *)FUN_05048158(uVar10,plVar5,0);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0(lVar4);
    }
    lVar4 = **(long **)(lVar4 + 0xc0);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0(lVar4);
    }
    if (plVar5 != (long *)0x0) {
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar5);
      }
    }
  }
  return plVar5;
}


