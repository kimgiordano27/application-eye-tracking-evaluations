/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$ResetBuffer
ENTRY_POINT: 044b8d70
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


long * Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__ResetBuffer(void)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x19;
  long *unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  long *unaff_x23;
  long unaff_x24;
  
  FUN_05015c2c();
  uVar2 = FUN_0501ed54();
  if ((uVar2 & 1) == 0) {
LAB_044b8ea0:
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    plVar6 = (long *)thunk_FUN_02d9d534();
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0(lVar3);
    }
    FUN_03e4ee5c(plVar6,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
    return plVar6;
  }
  lVar3 = (**(code **)(*unaff_x20 + 0x468))();
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
LAB_044b8f18:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    plVar6 = *(long **)(lVar3 + 0x20);
    if (plVar6 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x23 + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar6);
      }
    }
    uVar7 = *(undefined8 *)PTR_DAT_0676b178;
    if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    plVar4 = (long *)FUN_05015c2c(uVar7,0);
    plVar5 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675f8d8,1);
    if (plVar5 != (long *)0x0) {
      if ((plVar6 != (long *)0x0) &&
         (lVar3 = thunk_FUN_02d9d438(plVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0)) {
        uVar7 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar7,0);
      }
      if ((int)plVar5[3] == 0) goto LAB_044b8f18;
      plVar5[4] = (long)plVar6;
      thunk_FUN_02dd37b4(plVar5 + 4,plVar6);
      if ((plVar4 != (long *)0x0) &&
         (plVar4 = (long *)(**(code **)(*plVar4 + 0x958))
                                     (plVar4,plVar5,*(undefined8 *)(*plVar4 + 0x960)),
         plVar4 != (long *)0x0)) {
        uVar2 = (**(code **)(*plVar4 + 0x298))(plVar4,plVar6,*(undefined8 *)(*plVar4 + 0x2a0));
        if ((uVar2 & 1) != 0) {
          uVar7 = *(undefined8 *)PTR_DAT_0676b180;
          if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar7 = FUN_05015c2c(uVar7,0);
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*unaff_x23);
          }
          plVar6 = (long *)FUN_05048158(uVar7,plVar6,0);
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02d9a2e0(lVar3);
          }
          lVar3 = **(long **)(lVar3 + 0xc0);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02d9a2e0(lVar3);
          }
          if (plVar6 == (long *)0x0) {
            return (long *)0x0;
          }
          if ((*(byte *)(lVar3 + 0x130) <= *(byte *)(*plVar6 + 0x130)) &&
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) ==
              lVar3)) {
            return plVar6;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(plVar6);
        }
        goto LAB_044b8ea0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


