/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AddVectorsDelegate$$.ctor
ENTRY_POINT: 072b3dcc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AddVectorsDelegate___ctor(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int *piVar9;
  int *unaff_x19;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0xb68));
  FUN_04077588(PTR_DAT_09288f08);
  FUN_04077588(PTR_DAT_092c2b70);
  FUN_04077588(PTR_DAT_092c2b78);
  FUN_04077588(PTR_DAT_092c2b80);
  FUN_04077588(PTR_DAT_092c2b48);
  FUN_04077588(PTR_DAT_092b9200);
  FUN_04077588(PTR_DAT_09285bb0);
  FUN_04077588(PTR_DAT_092c2b88);
  FUN_04077588(PTR_DAT_092c2b90);
  FUN_04077588(PTR_DAT_092c2b98);
  FUN_04077588(PTR_DAT_092c2ba0);
  FUN_04077588(PTR_DAT_092c2ba8);
  FUN_04077588(PTR_DAT_092c2930);
  FUN_04077588(PTR_DAT_09286c70);
  FUN_04077588(PTR_DAT_092c2bb0);
  FUN_04077588(PTR_DAT_092c2bb8);
  FUN_04077588(PTR_DAT_09285b38);
  FUN_04077588(PTR_DAT_092c2a00);
  FUN_04077588(PTR_DAT_092c2a10);
  FUN_04077588(PTR_DAT_092c2a20);
  FUN_04077588(PTR_DAT_092c2a30);
  FUN_04077588(PTR_DAT_092c2bc0);
  FUN_04077588(PTR_DAT_092c2bc8);
  FUN_04077588(PTR_DAT_092c2bd0);
  *(undefined1 *)(unaff_x20 + 0x95e) = 1;
  puVar2 = PTR_DAT_092c2b48;
  iVar1 = *unaff_x19;
  lVar14 = *(long *)(unaff_x19 + 8);
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (iVar1 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 10);
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    *unaff_x19 = -1;
LAB_072b4064:
    lVar10 = FUN_065f1330(&stack0x00000018,*(undefined8 *)PTR_DAT_092c2b88);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (lVar10 != *(long *)(lVar14 + 0x10)) {
      if (*(long *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      plVar4 = *(long **)(*(long *)(lVar14 + 0x18) + 0x20);
      lVar5 = *(long *)PTR_DAT_09288f08;
      lVar10 = *(long *)(lVar5 + 0x38);
      if (lVar10 == 0) {
        FUN_040b1b28(lVar5);
        lVar10 = *(long *)(lVar5 + 0x38);
      }
      lVar10 = *(long *)(lVar10 + 0x10);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_040b1acc();
      }
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      lVar10 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_040b1acc();
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      uVar8 = **(undefined8 **)(lVar10 + 0xb8);
      uVar11 = *(undefined8 *)PTR_DAT_092c2bd0;
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092b9200) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xc) * 0x10 + 0x138);
            goto LAB_072b41a4;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00(plVar4,*(long *)PTR_DAT_092b9200,0xc);
LAB_072b41a4:
      (*(code *)*puVar7)(plVar4,uVar11,uVar8,puVar7[1]);
    }
LAB_072b41b8:
    if (*(long *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar6 = FUN_072b13e8(*(long *)(lVar14 + 0x18),*(undefined8 *)(lVar14 + 0x20));
    if ((uVar6 & 1) == 0) {
      if (*(long *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_072afde0(*(long *)(lVar14 + 0x18),*(undefined8 *)PTR_DAT_092c2bc8,1);
    }
    if (*(long *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar14 + 0x18) + 0x40);
    if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar6 = UnityEngine_UIElements_AtlasBase__SetDynamicTexture(uVar8,0);
    if ((uVar6 & 1) == 0) {
      uVar8 = 0;
      goto LAB_072b43cc;
    }
    if (*(long *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = *(long *)(*(long *)(lVar14 + 0x18) + 0x40);
    uVar8 = *(undefined8 *)(lVar14 + 0x20);
    lVar12 = *(long *)PTR_DAT_092c2b68;
    lVar10 = *(long *)(lVar12 + 0x38);
    if (lVar10 == 0) {
      FUN_040b1b28(lVar12);
      lVar10 = *(long *)(lVar12 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_040b1acc();
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_040b1acc();
    }
    uVar13 = **(undefined8 **)(lVar10 + 0xb8);
    uVar11 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c2bc0);
    FUN_073436a0(uVar11,uVar13,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar10 = FUN_072caf78(lVar5,uVar8,uVar11,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000010 = FUN_06649f2c(lVar10,*(undefined8 *)PTR_DAT_092c2bb0);
    uVar6 = FUN_065f12f0(&stack0x00000010,*(undefined8 *)PTR_DAT_092c2b98);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000010;
      thunk_FUN_040ec700(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04b17b08(unaff_x19 + 2,&stack0x00000010);
      return;
    }
FUN_072b42f4:
    lVar10 = FUN_065f1330(&stack0x00000010,*(undefined8 *)PTR_DAT_092c2b90);
    if (((lVar10 == 0) || (*(long *)(lVar10 + 0x38) == 0)) ||
       (lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x40), lVar10 == 0)) {
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
    }
    else {
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar11 = *(undefined8 *)(lVar14 + 0x28);
      uVar8 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c2a00);
      FUN_0678a1dc(uVar8,uVar11,*(undefined8 *)PTR_DAT_092c2ba8,0);
      FUN_0678cd88(lVar10,uVar8,*(undefined8 *)PTR_DAT_092c2a10);
    }
    if (*(long *)(lVar14 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0x28) + 0x10);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000010 = FUN_06649f2c(lVar14,*(undefined8 *)PTR_DAT_092c2bb0);
    uVar6 = FUN_065f12f0(&stack0x00000010,*(undefined8 *)PTR_DAT_092c2b98);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 2;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000010;
      thunk_FUN_040ec700(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04b17b08(unaff_x19 + 2,&stack0x00000010);
      return;
    }
  }
  else {
    if (iVar1 == 1) {
      in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0xc);
      unaff_x19[0xc] = 0;
      unaff_x19[0xd] = 0;
      *unaff_x19 = -1;
      goto FUN_072b42f4;
    }
    if (iVar1 != 2) {
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(long *)(lVar14 + 0x10) != 0) {
        plVar4 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09286c70,2);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar10 = *(long *)(lVar14 + 0x10);
        if ((lVar10 != 0) &&
           (lVar5 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
          uVar8 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar8,0);
        }
        if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        plVar4[4] = lVar10;
        thunk_FUN_040ec700(plVar4 + 4,lVar10);
        if (*(int *)(*(long *)PTR_DAT_09285b38 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        lVar10 = FUN_076fb804(15000,0);
        if ((lVar10 != 0) &&
           (lVar5 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
          uVar8 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar8,0);
        }
        if ((*(uint *)(plVar4 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        plVar4[5] = lVar10;
        thunk_FUN_040ec700(plVar4 + 5,lVar10);
        lVar10 = FUN_076fc920(plVar4,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        in_stack_00000018 = FUN_06649f2c(lVar10,*(undefined8 *)PTR_DAT_092c2bb8);
        uVar6 = FUN_065f12f0(&stack0x00000018,*(undefined8 *)PTR_DAT_092c2ba0);
        if ((uVar6 & 1) == 0) {
          *unaff_x19 = 0;
          *(undefined8 *)(unaff_x19 + 10) = in_stack_00000018;
          thunk_FUN_040ec700(unaff_x19 + 10,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          FUN_04b17b08(unaff_x19 + 2,&stack0x00000018);
          return;
        }
        goto LAB_072b4064;
      }
      goto LAB_072b41b8;
    }
    in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  uVar8 = FUN_065f1330(&stack0x00000010,*(undefined8 *)PTR_DAT_092c2b90);
LAB_072b43cc:
  puVar3 = PTR_DAT_092c2b80;
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *unaff_x19 = -2;
  if (iVar1 == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_067119b4(unaff_x19 + 2,uVar8,*(undefined8 *)puVar3);
  return;
}


