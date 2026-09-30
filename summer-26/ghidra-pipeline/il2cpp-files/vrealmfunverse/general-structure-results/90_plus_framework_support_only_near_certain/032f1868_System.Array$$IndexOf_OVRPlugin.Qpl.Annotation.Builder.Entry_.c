/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 032f1868
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 140
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__IndexOf<OVRPlugin_Qpl_Annotation_Builder_Entry>(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long lVar10;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02b76218();
  }
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar1 = *(long *)(unaff_x23 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0xb) == '\0') {
LAB_032f1bb8:
    uVar4 = 0;
    uVar8 = 2;
    goto LAB_032f1c10;
  }
  lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar10 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
  lVar1 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar1 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  lVar10 = *(long *)(unaff_x21 + 0x38);
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0xc) != '\0') {
    plVar2 = (long *)FUN_03150270(*(undefined8 *)(lVar10 + 0x18));
    if (plVar2 == (long *)0x0) goto LAB_032f1ca8;
    uVar3 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,*unaff_x20,unaff_x20[1],0,0,*(undefined8 *)(*plVar2 + 0x1c0));
    if ((uVar3 & 1) != 0) {
      uVar4 = 0;
      uVar8 = 1;
      goto LAB_032f1c10;
    }
    lVar10 = *(long *)(unaff_x21 + 0x38);
  }
  lVar1 = *(long *)(lVar10 + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar10 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x48);
  lVar1 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar1 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  if (**(char **)(lVar1 + 0xb8) == '\0') {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x50);
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar4 = FUN_04d8a7b0(uVar4,0);
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      FUN_02b76218(lVar1);
    }
    uVar5 = thunk_FUN_02b4c898();
    uVar3 = FUN_04d94540(uVar4,uVar5,0);
    if ((uVar3 & 1) == 0) goto LAB_032f1bc4;
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    uVar4 = thunk_FUN_02b4c898();
    uVar3 = FUN_05d314e0(uVar4,0);
    if ((uVar3 & 1) == 0) goto LAB_032f1bb8;
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    uVar4 = thunk_FUN_02b4c898();
    if (*(int *)(*(long *)PTR_DAT_0631fe88 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)PTR_DAT_0631fe88);
    }
    plVar2 = (long *)FUN_05d22c28(uVar4,0);
    if (plVar2 == (long *)0x0) goto LAB_032f1c0c;
    plVar6 = (long *)DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                               (*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x38));
    lVar1 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0631fef8) {
          puVar7 = (undefined8 *)(lVar1 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_032f1c38;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar7 = (undefined8 *)FUN_02b7654c(plVar2,*(long *)PTR_DAT_0631fef8,1);
LAB_032f1c38:
    (*(code *)*puVar7)(plVar2);
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02b76218(lVar1);
    }
    if (plVar6 == (long *)0x0) {
LAB_032f1ca8:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(long *)(*plVar6 + 0x40) != *(long *)(lVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(plVar6);
    }
    puVar7 = (undefined8 *)thunk_FUN_02b7978c();
    uVar4 = *puVar7;
    unaff_x20[1] = puVar7[1];
    *unaff_x20 = uVar4;
    thunk_FUN_02bb0e9c(unaff_x20 + 1,0);
  }
  else {
LAB_032f1bc4:
    if (*(int *)(*(long *)PTR_DAT_0631fe88 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar1 = FUN_032d5c14(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
    if (lVar1 == 0) {
LAB_032f1c0c:
      uVar4 = 0;
      uVar8 = 3;
      goto LAB_032f1c10;
    }
    FUN_032b96c8();
  }
  uVar8 = 0;
  uVar4 = 1;
LAB_032f1c10:
  *unaff_x19 = uVar8;
  return uVar4;
}


