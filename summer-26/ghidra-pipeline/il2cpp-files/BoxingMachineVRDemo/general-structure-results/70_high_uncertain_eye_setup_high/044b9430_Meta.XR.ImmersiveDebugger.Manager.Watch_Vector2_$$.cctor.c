/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$.cctor
ENTRY_POINT: 044b9430
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


long * Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>___cctor(long param_1)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  long *plVar6;
  undefined8 uVar7;
  long *unaff_x23;
  long unaff_x24;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
LAB_044b95ac:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    plVar6 = *(long **)(param_1 + 0x20);
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
    plVar2 = (long *)FUN_05015c2c(uVar7,0);
    plVar3 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675f8d8,1);
    if (plVar3 != (long *)0x0) {
      if ((plVar6 != (long *)0x0) &&
         (lVar4 = thunk_FUN_02d9d438(plVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
        uVar7 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar7,0);
      }
      if ((int)plVar3[3] == 0) goto LAB_044b95ac;
      plVar3[4] = (long)plVar6;
      thunk_FUN_02dd37b4(plVar3 + 4,plVar6);
      if (plVar2 != (long *)0x0) {
        plVar2 = (long *)(**(code **)(*plVar2 + 0x958))
                                   (plVar2,plVar3,*(undefined8 *)(*plVar2 + 0x960));
        if (plVar2 != (long *)0x0) {
          uVar5 = (**(code **)(*plVar2 + 0x298))(plVar2,plVar6,*(undefined8 *)(*plVar2 + 0x2a0));
          if ((uVar5 & 1) == 0) {
            lVar4 = *(long *)(unaff_x19 + 0x20);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_02d9a2e0();
            }
            if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
              FUN_02d9a2e0();
            }
            plVar6 = (long *)thunk_FUN_02d9d534();
            lVar4 = *(long *)(unaff_x19 + 0x20);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_02d9a2e0(lVar4);
            }
            FUN_03e4efd8(plVar6,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
          }
          else {
            uVar7 = *(undefined8 *)PTR_DAT_0676b180;
            if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar7 = FUN_05015c2c(uVar7,0);
            if (*(int *)(*unaff_x23 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(*unaff_x23);
            }
            plVar6 = (long *)FUN_05048158(uVar7,plVar6,0);
            lVar4 = *(long *)(unaff_x19 + 0x20);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_02d9a2e0(lVar4);
            }
            lVar4 = **(long **)(lVar4 + 0xc0);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_02d9a2e0(lVar4);
            }
            if (plVar6 != (long *)0x0) {
              if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) !=
                  lVar4)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60e88(plVar6);
              }
            }
          }
          return plVar6;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


