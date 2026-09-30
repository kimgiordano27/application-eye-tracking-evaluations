/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 024d8230
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_Qpl_Annotation>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  int in_w8;
  long lVar8;
  long unaff_x19;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  
  if (in_w8 == 0) {
    thunk_FUN_016466fc();
  }
  uVar4 = FUN_051d94d4();
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar5 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e43108);
  if (lVar5 != 0) {
    FUN_043c1bd8(lVar5,*(undefined8 *)PTR_DAT_06db1e58);
    plVar9 = (long *)(unaff_x19 + 0x88);
    *plVar9 = lVar5;
    thunk_FUN_01656ef8(plVar9,lVar5);
    puVar3 = PTR_DAT_06e32150;
    puVar2 = PTR_DAT_06defc90;
    puVar1 = PTR_DAT_06de2d80;
    lVar5 = *(long *)(unaff_x19 + 0x70);
    if (lVar5 != 0) {
      lVar12 = 4;
      while( true ) {
        uVar13 = (int)lVar12 - 4;
        if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar13) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar13) {
LAB_024d8418:
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        lVar11 = *(long *)(lVar5 + lVar12 * 8);
        lVar10 = *plVar9;
        lVar5 = thunk_FUN_015d056c(*(undefined8 *)puVar3);
        if ((lVar5 == 0) || (FUN_0365e780(lVar5,0), lVar11 == 0)) goto LAB_024d8414;
        uVar6 = FUN_034e0f7c(lVar11,0);
        *(undefined8 *)(lVar5 + 0x10) = uVar6;
        thunk_FUN_01656ef8();
        lVar11 = *(long *)(unaff_x19 + 0x78);
        if (lVar11 == 0) goto LAB_024d8414;
        if (*(uint *)(lVar11 + 0x18) <= uVar13) goto LAB_024d8418;
        plVar7 = *(long **)(lVar11 + lVar12 * 8);
        if (plVar7 == (long *)0x0) goto LAB_024d8414;
        plVar7 = (long *)(**(code **)(*plVar7 + 0x2f8))(plVar7,*(undefined8 *)(*plVar7 + 0x300));
        if (plVar7 == (long *)0x0) {
          plVar7 = (long *)0x0;
        }
        else if (*plVar7 != *(long *)puVar1) {
          plVar7 = (long *)0x0;
        }
        *(long **)(lVar5 + 0x18) = plVar7;
        thunk_FUN_01656ef8();
        if (lVar10 == 0) goto LAB_024d8414;
        lVar11 = *(long *)(lVar10 + 0x10);
        lVar8 = *(long *)puVar2;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_024d8414;
        uVar13 = *(uint *)(lVar10 + 0x18);
        if (uVar13 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar13 + 1;
          plVar7 = (long *)(lVar11 + (long)(int)uVar13 * 8 + 0x20);
          *plVar7 = lVar5;
          thunk_FUN_01656ef8(plVar7,lVar5);
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))
                    (lVar10,lVar5);
        }
        lVar5 = *(long *)(unaff_x19 + 0x70);
        lVar12 = lVar12 + 1;
        if (lVar5 == 0) goto LAB_024d8414;
      }
      if (*(long *)(unaff_x19 + 0x80) != 0) {
        FUN_0365fc10(*(long *)(unaff_x19 + 0x80),*plVar9,0);
        return;
      }
    }
  }
LAB_024d8414:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


