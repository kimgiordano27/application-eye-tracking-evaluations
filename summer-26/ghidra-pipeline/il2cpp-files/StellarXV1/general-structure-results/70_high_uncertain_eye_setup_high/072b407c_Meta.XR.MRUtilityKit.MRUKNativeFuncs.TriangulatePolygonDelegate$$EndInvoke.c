/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.TriangulatePolygonDelegate$$EndInvoke
ENTRY_POINT: 072b407c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_TriangulatePolygonDelegate__EndInvoke(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long *unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000010;
  
  if (param_1 != *(long *)(unaff_x25 + 0x10)) {
    if (*(long *)(unaff_x25 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar7 = *(long **)(*(long *)(unaff_x25 + 0x18) + 0x20);
    lVar8 = *(long *)PTR_DAT_09288f08;
    lVar4 = *(long *)(lVar8 + 0x38);
    if (lVar4 == 0) {
      FUN_040b1b28(lVar8);
      lVar4 = *(long *)(lVar8 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar4 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar8 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    uVar9 = **(undefined8 **)(lVar4 + 0xb8);
    uVar10 = *(undefined8 *)PTR_DAT_092c2bd0;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092b9200) {
          puVar3 = (undefined8 *)(lVar8 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
          goto LAB_072b41a4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092b9200,0xc);
LAB_072b41a4:
    (*(code *)*puVar3)(plVar7,uVar10,uVar9,puVar3[1]);
  }
  if (*(long *)(unaff_x25 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar5 = FUN_072b13e8(*(long *)(unaff_x25 + 0x18),*(undefined8 *)(unaff_x25 + 0x20));
  if ((uVar5 & 1) == 0) {
    if (*(long *)(unaff_x25 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_072afde0(*(long *)(unaff_x25 + 0x18),*(undefined8 *)PTR_DAT_092c2bc8,1);
  }
  if (*(long *)(unaff_x25 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar9 = *(undefined8 *)(*(long *)(unaff_x25 + 0x18) + 0x40);
  if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar5 = UnityEngine_UIElements_AtlasBase__SetDynamicTexture(uVar9,0);
  if ((uVar5 & 1) == 0) {
    uVar9 = 0;
  }
  else {
    if (*(long *)(unaff_x25 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar8 = *(long *)(*(long *)(unaff_x25 + 0x18) + 0x40);
    uVar9 = *(undefined8 *)(unaff_x25 + 0x20);
    lVar11 = *(long *)PTR_DAT_092c2b68;
    lVar4 = *(long *)(lVar11 + 0x38);
    if (lVar4 == 0) {
      FUN_040b1b28(lVar11);
      lVar4 = *(long *)(lVar11 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar4 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    uVar12 = **(undefined8 **)(lVar4 + 0xb8);
    uVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c2bc0);
    FUN_073436a0(uVar10,uVar12,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = FUN_072caf78(lVar8,uVar9,uVar10,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000010 = FUN_06649f2c(lVar4,*(undefined8 *)PTR_DAT_092c2bb0);
    uVar5 = FUN_065f12f0(&stack0x00000010,*(undefined8 *)PTR_DAT_092c2b98);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000010;
      thunk_FUN_040ec700(unaff_x19 + 0xc,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04b17b08(unaff_x19 + 2,&stack0x00000010);
      return;
    }
    lVar4 = FUN_065f1330(&stack0x00000010,*(undefined8 *)PTR_DAT_092c2b90);
    if (((lVar4 == 0) || (*(long *)(lVar4 + 0x38) == 0)) ||
       (lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x40), lVar4 == 0)) {
      if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
    }
    else {
      if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar10 = *(undefined8 *)(unaff_x25 + 0x28);
      uVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c2a00);
      FUN_0678a1dc(uVar9,uVar10,*(undefined8 *)PTR_DAT_092c2ba8,0);
      FUN_0678cd88(lVar4,uVar9,*(undefined8 *)PTR_DAT_092c2a10);
    }
    if (*(long *)(unaff_x25 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *(long *)(*(long *)(unaff_x25 + 0x28) + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000010 = FUN_06649f2c(lVar4,*(undefined8 *)PTR_DAT_092c2bb0);
    uVar5 = FUN_065f12f0(&stack0x00000010,*(undefined8 *)PTR_DAT_092c2b98);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 2;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000010;
      thunk_FUN_040ec700(unaff_x19 + 0xc,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04b17b08(unaff_x19 + 2,&stack0x00000010);
      return;
    }
    uVar9 = FUN_065f1330(&stack0x00000010,*(undefined8 *)PTR_DAT_092c2b90);
  }
  puVar2 = PTR_DAT_092c2b80;
  iVar1 = *(int *)(*unaff_x24 + 0xe4);
  *unaff_x19 = 0xfffffffe;
  if (iVar1 == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_067119b4(unaff_x19 + 2,uVar9,*(undefined8 *)puVar2);
  return;
}


