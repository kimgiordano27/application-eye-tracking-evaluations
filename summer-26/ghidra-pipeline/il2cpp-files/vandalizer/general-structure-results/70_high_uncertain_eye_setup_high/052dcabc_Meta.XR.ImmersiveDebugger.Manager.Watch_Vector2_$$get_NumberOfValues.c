/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_NumberOfValues
ENTRY_POINT: 052dcabc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_NumberOfValues(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075da548);
    *(undefined1 *)(unaff_x23 + 0x830) = 1;
  }
  if (unaff_x22 == (long *)0x0) {
    uVar9 = 1;
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    if (*unaff_x22 != lVar2) {
      lVar2 = FUN_02d7812c(*(undefined8 *)(unaff_x20 + 0x20));
      uVar9 = thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 8));
      plVar4 = (long *)thunk_FUN_03202440(uVar9,0);
      FUN_02d65918();
      uVar9 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      uVar8 = thunk_FUN_03257e30(PTR_DAT_075da550);
      uVar9 = FUN_05c697a8(uVar8,uVar9,0);
      thunk_FUN_03257e30(PTR_DAT_0759c0b8);
      uVar8 = thunk_FUN_0322f148();
      uVar5 = thunk_FUN_03257e30(PTR_DAT_075ad8e8);
      FUN_05d6f3dc(uVar8,uVar9,uVar5,0);
                    /* WARNING: Subroutine does not return */
      FUN_031f225c(uVar8);
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4(lVar2);
    }
    if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2730();
    }
    puVar3 = (undefined8 *)thunk_FUN_0322f29c();
    uVar9 = *puVar3;
    uVar8 = puVar3[1];
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    thunk_FUN_0322ed78(**(undefined8 **)(lVar2 + 0xc0));
    lVar2 = *(long *)(unaff_x20 + 0x20);
    in_stack_00000018 = uVar9;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4(lVar2);
    }
    thunk_FUN_0322ed78(**(undefined8 **)(lVar2 + 0xc0),&stack0x00000018);
    puVar1 = PTR_DAT_075da548;
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar2 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_075da548) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_052dcc18;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0322c1e8();
LAB_052dcc18:
    uVar9 = (*(code *)*puVar3)();
    if ((int)uVar9 == 0) {
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10));
      in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,(int)uVar8);
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4(lVar2);
      }
      thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10),&stack0x00000018);
      lVar2 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_052dccd8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0322c1e8();
LAB_052dccd8:
      uVar9 = (*(code *)*puVar3)();
    }
  }
  return uVar9;
}


