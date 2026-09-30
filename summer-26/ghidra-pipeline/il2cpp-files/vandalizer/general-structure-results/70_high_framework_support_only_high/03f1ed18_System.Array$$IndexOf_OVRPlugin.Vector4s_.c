/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPlugin.Vector4s>
ENTRY_POINT: 03f1ed18
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f1ef48) */

void System_Array__IndexOf<OVRPlugin_Vector4s>(void)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  void *unaff_x19;
  long *unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x27;
  long unaff_x29;
  
  FUN_036ceb60();
  plVar1 = *(long **)(unaff_x24 + 0x10);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
    FUN_036ceb60();
    lVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759e730);
    thunk_FUN_036e8310();
    if ((lVar2 != 0) && (lVar2 = FUN_036e05e0(lVar2,0), unaff_x20 != (long *)0x0)) {
      lVar4 = **(long **)(unaff_x23 + 0x38);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0322bef4(lVar4);
      }
      lVar5 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03f1eddc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0322c1e8();
LAB_03f1eddc:
      plVar1 = (long *)(*(code *)*puVar3)();
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      (**(code **)(*plVar1 + 0x378))
                (plVar1,lVar2,0,*(undefined4 *)(lVar2 + 0x18),*(undefined8 *)(*plVar1 + 0x380));
      lVar2 = *plVar1;
      uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0759b580) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03f1ee6c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0322c1e8(plVar1,*(long *)PTR_DAT_0759b580,0);
LAB_03f1ee6c:
      (*(code *)*puVar3)(plVar1,puVar3[1]);
      lVar2 = **(long **)(unaff_x23 + 0x38);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4(lVar2);
      }
      lVar4 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar2) {
            lVar2 = lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138;
            goto LAB_03f1eee4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar2 = FUN_0322c1e8();
LAB_03f1eee4:
      *(void **)(unaff_x29 + -0x10) = unaff_x22;
      (**(code **)(*(long *)(lVar2 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar2 + 8) + 8));
      memcpy(unaff_x19,unaff_x22,unaff_x21);
      if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


