/*
FUNCTION_NAME: System.Array$$IndexOfImpl<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 037f38d4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__IndexOfImpl<OVRPlugin_Qpl_Annotation_Builder_Entry>(long param_1)

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
  
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar1 = *(long *)(unaff_x23 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0xb) == '\0') {
LAB_037f3c28:
    uVar4 = 0;
    uVar8 = 2;
    goto LAB_037f3c80;
  }
  lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar10 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
  lVar1 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar1 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  lVar10 = *(long *)(unaff_x21 + 0x38);
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0xc) != '\0') {
    plVar2 = (long *)FUN_0357be8c(*(undefined8 *)(lVar10 + 0x18));
    if (plVar2 == (long *)0x0) goto LAB_037f3d18;
    uVar3 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*unaff_x20,0,*(undefined8 *)(*plVar2 + 0x1c0));
    if ((uVar3 & 1) != 0) {
      uVar4 = 0;
      uVar8 = 1;
      goto LAB_037f3c80;
    }
    lVar10 = *(long *)(unaff_x21 + 0x38);
  }
  lVar1 = *(long *)(lVar10 + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar10 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x48);
  lVar1 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar1 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  if (**(char **)(lVar1 + 0xb8) == '\0') {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x50);
    if (*(int *)(DAT_06dcfe48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = FUN_054f73b4(uVar4,0);
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      FUN_02dcfd18(lVar1);
    }
    uVar5 = thunk_FUN_02da6564();
    uVar3 = FUN_05501380(uVar4,uVar5,0);
    if ((uVar3 & 1) == 0) goto LAB_037f3c34;
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    uVar4 = thunk_FUN_02da6564();
    uVar3 = FUN_063ddb38(uVar4,0);
    if ((uVar3 & 1) == 0) goto LAB_037f3c28;
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    uVar4 = thunk_FUN_02da6564();
    if (*(int *)(*(long *)PTR_DAT_06a0e998 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)PTR_DAT_06a0e998);
    }
    plVar2 = (long *)FUN_063cf280(uVar4,0);
    if (plVar2 != (long *)0x0) {
      plVar6 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x38));
      lVar1 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06a0ea00) {
            puVar7 = (undefined8 *)(lVar1 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_037f3ca8;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar7 = (undefined8 *)FUN_02dd004c(plVar2,*(long *)PTR_DAT_06a0ea00,1);
LAB_037f3ca8:
      (*(code *)*puVar7)(plVar2);
      lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02dcfd18(lVar1);
      }
      if (plVar6 == (long *)0x0) {
LAB_037f3d18:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(long *)(*plVar6 + 0x40) != *(long *)(lVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar6);
      }
      puVar7 = (undefined8 *)thunk_FUN_02dd328c();
      uVar8 = 0;
      uVar4 = 1;
      *unaff_x20 = *puVar7;
      goto LAB_037f3c80;
    }
  }
  else {
LAB_037f3c34:
    if (*(int *)(DAT_06b37628 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar1 = FUN_037d9478(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
    if (lVar1 != 0) {
      FUN_037bdf44();
      uVar8 = 0;
      uVar4 = 1;
      goto LAB_037f3c80;
    }
  }
  uVar4 = 0;
  uVar8 = 3;
LAB_037f3c80:
  *unaff_x19 = uVar8;
  return uVar4;
}


