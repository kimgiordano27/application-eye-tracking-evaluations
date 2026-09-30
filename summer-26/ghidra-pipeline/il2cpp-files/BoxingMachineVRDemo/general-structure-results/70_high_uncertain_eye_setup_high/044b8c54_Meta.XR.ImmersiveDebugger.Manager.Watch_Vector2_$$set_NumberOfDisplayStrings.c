/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$set_NumberOfDisplayStrings
ENTRY_POINT: 044b8c54
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


long * Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__set_NumberOfDisplayStrings(ulong param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x23;
  long unaff_x24;
  
  if ((param_1 & 1) == 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_044b8f0c;
    uVar4 = (**(code **)(*unaff_x20 + 0x3b8))();
    if ((uVar4 & 1) != 0) {
      uVar7 = (**(code **)(*unaff_x20 + 0x448))();
      uVar8 = *(undefined8 *)PTR_DAT_06766c20;
      if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)(unaff_x24 + 0xe0));
      }
      uVar8 = FUN_05015c2c(uVar8,0);
      uVar4 = FUN_0501ed54(uVar7,uVar8,0);
      if ((uVar4 & 1) != 0) {
        lVar2 = (**(code **)(*unaff_x20 + 0x468))();
        if (lVar2 == 0) goto LAB_044b8f0c;
        if (*(int *)(lVar2 + 0x18) == 0) {
LAB_044b8f18:
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        unaff_x20 = *(long **)(lVar2 + 0x20);
        if (unaff_x20 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x23 + 0x130);
          if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60e88(unaff_x20);
          }
        }
        uVar7 = *(undefined8 *)PTR_DAT_0676b178;
        if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        plVar3 = (long *)FUN_05015c2c(uVar7,0);
        plVar5 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675f8d8,1);
        if (plVar5 == (long *)0x0) goto LAB_044b8f0c;
        if ((unaff_x20 != (long *)0x0) &&
           (lVar2 = thunk_FUN_02d9d438(unaff_x20,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0)) {
          uVar7 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar7,0);
        }
        if ((int)plVar5[3] == 0) goto LAB_044b8f18;
        plVar5[4] = (long)unaff_x20;
        thunk_FUN_02dd37b4(plVar5 + 4,unaff_x20);
        if (plVar3 == (long *)0x0) {
LAB_044b8f0c:
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        plVar3 = (long *)(**(code **)(*plVar3 + 0x958))
                                   (plVar3,plVar5,*(undefined8 *)(*plVar3 + 0x960));
        if (plVar3 == (long *)0x0) goto LAB_044b8f0c;
        uVar4 = (**(code **)(*plVar3 + 0x298))(plVar3,unaff_x20,*(undefined8 *)(*plVar3 + 0x2a0));
        if ((uVar4 & 1) != 0) {
          lVar2 = *(long *)(unaff_x24 + 0xe0);
          puVar6 = (undefined8 *)PTR_DAT_0676b180;
          goto LAB_044b8c64;
        }
      }
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    plVar3 = (long *)thunk_FUN_02d9d534();
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0(lVar2);
    }
    FUN_03e4ee5c(plVar3,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38));
  }
  else {
    lVar2 = *(long *)(unaff_x24 + 0xe0);
    puVar6 = (undefined8 *)PTR_DAT_0676b170;
LAB_044b8c64:
    uVar7 = *puVar6;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar7 = FUN_05015c2c(uVar7,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*unaff_x23);
    }
    plVar3 = (long *)FUN_05048158(uVar7,unaff_x20,0);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0(lVar2);
    }
    lVar2 = **(long **)(lVar2 + 0xc0);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0(lVar2);
    }
    if (plVar3 != (long *)0x0) {
      if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar3);
      }
    }
  }
  return plVar3;
}


