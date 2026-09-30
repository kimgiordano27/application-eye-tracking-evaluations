/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPlugin.Vector2f>
ENTRY_POINT: 03f1e93c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f1eb88) */

void System_Array__IndexOf<OVRPlugin_Vector2f>(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_031f20f4();
  FUN_031f20f4(PTR_DAT_0759b580);
  if (*(long *)(unaff_x20 + 0x38) == 0) {
    FUN_0322bf50();
  }
  lVar1 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759e720);
  FUN_036ceaf0(lVar1,0);
  plVar2 = *(long **)(unaff_x21 + 0x10);
  if ((plVar2 != (long *)0x0) &&
     (uVar3 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0)), lVar1 != 0))
  {
    FUN_036ceb60(lVar1,uVar3,0);
    plVar2 = *(long **)(unaff_x21 + 0x10);
    if (plVar2 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      FUN_036ceb60(lVar1,uVar3,0);
      lVar4 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759e730);
      thunk_FUN_036e8310(lVar4,lVar1,0);
      if ((lVar4 != 0) && (lVar1 = FUN_036e05e0(lVar4,0), unaff_x19 != (long *)0x0)) {
        lVar4 = **(long **)(unaff_x20 + 0x38);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0322bef4(lVar4);
        }
        lVar6 = *unaff_x19;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar4) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03f1ea60;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_0322c1e8();
LAB_03f1ea60:
        plVar2 = (long *)(*(code *)*puVar5)();
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        (**(code **)(*plVar2 + 0x378))
                  (plVar2,lVar1,0,*(undefined4 *)(lVar1 + 0x18),*(undefined8 *)(*plVar2 + 0x380));
        lVar1 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0759b580) {
              puVar5 = (undefined8 *)(lVar1 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03f1eaf0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_0322c1e8(plVar2,*(long *)PTR_DAT_0759b580,0);
LAB_03f1eaf0:
        (*(code *)*puVar5)(plVar2,puVar5[1]);
        lVar1 = **(long **)(unaff_x20 + 0x38);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0322bef4(lVar1);
        }
        lVar4 = *unaff_x19;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar1) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_03f1eb68;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_0322c1e8();
LAB_03f1eb68:
                    /* WARNING: Could not recover jumptable at 0x03f1eb7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar5)();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


