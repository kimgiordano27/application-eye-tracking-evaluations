/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 01bce634
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_Qpl_Annotation_Builder_Entry>
                 (void)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  int iVar12;
  long lVar13;
  long unaff_x19;
  undefined8 uVar14;
  long *plVar15;
  uint uVar16;
  undefined8 in_stack_00000008;
  
  FUN_017fc350(PTR_DAT_037f8480);
  if (*(long *)(unaff_x19 + 0x38) == 0) {
    FUN_0185db00();
  }
  puVar4 = PTR_DAT_037f74d8;
  in_stack_00000008 = 0;
  lVar5 = *(long *)PTR_DAT_037f74d8;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar5 = *(long *)puVar4;
  }
  lVar9 = *(long *)(lVar5 + 0xb8);
  if (*(int *)(lVar9 + 0x34) < 1) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar5 = *(long *)puVar4;
      lVar9 = *(long *)(lVar5 + 0xb8);
    }
    iVar12 = *(int *)(lVar9 + 8);
    if (iVar12 + -1 <= *(int *)(lVar9 + 0x3c)) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        lVar9 = *(long *)(*(long *)puVar4 + 0xb8);
        iVar12 = *(int *)(lVar9 + 8);
      }
      in_stack_00000008 = CONCAT44(iVar12,*(undefined4 *)(lVar9 + 0xc));
      FUN_019c76b8(1,0);
      if (DAT_03a22097 == '\0') {
        FUN_017fc350(PTR_DAT_037f44d8);
        DAT_03a22097 = '\x01';
      }
      if (0 < **(int **)(*(long *)PTR_DAT_037f44d8 + 0xb8)) {
        uVar14 = FUN_02bccfd8((long)&stack0x00000008 + 4,0);
        uVar7 = FUN_02bccfd8(&stack0x00000008,0);
        puVar3 = PTR_DAT_037f3578;
        uVar14 = FUN_02a503d0(uVar14,*(undefined8 *)PTR_DAT_037f3578,uVar7,0);
        if (*(long *)PTR_DAT_037f8480 == 0) {
LAB_01bceb50:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        lVar5 = FUN_02a51f80(*(long *)PTR_DAT_037f8480,*(undefined8 *)PTR_DAT_037f8478,uVar14,0);
        lVar9 = *(long *)puVar4;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01843fdc(lVar9);
          lVar9 = *(long *)puVar4;
        }
        uVar14 = FUN_02bccfd8(*(long *)(lVar9 + 0xb8) + 8,0);
        uVar7 = FUN_02bccfd8(*(long *)(*(long *)puVar4 + 0xb8) + 0xc,0);
        uVar14 = FUN_02a503d0(uVar14,*(undefined8 *)puVar3,uVar7,0);
        if (lVar5 == 0) goto LAB_01bceb50;
        uVar14 = FUN_02a51f80(lVar5,*(undefined8 *)PTR_DAT_037f8470,uVar14,0);
        FUN_019c3f48(uVar14,0,0);
      }
    }
LAB_01bce988:
    if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    plVar15 = (long *)thunk_FUN_01861bbc();
    FUN_01e8be20(plVar15,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20));
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar5 = *(long *)puVar4;
    }
    *(int *)(*(long *)(lVar5 + 0xb8) + 0x3c) = *(int *)(*(long *)(lVar5 + 0xb8) + 0x3c) + 1;
    FUN_019c73dc(plVar15,0);
  }
  else {
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar5 = FUN_02bddb5c(uVar14,0);
    lVar9 = FUN_02bddb5c(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),0);
    lVar6 = FUN_02bddb5c(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10),0);
    lVar10 = *(long *)puVar4;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01843fdc(lVar10);
      lVar10 = *(long *)puVar4;
    }
    uVar16 = *(uint *)(*(long *)(lVar10 + 0xb8) + 0x84);
    while( true ) {
      iVar12 = *(int *)(lVar10 + 0xe0);
      if (iVar12 == 0) {
        thunk_FUN_01843fdc(lVar10);
        lVar10 = *(long *)puVar4;
        iVar12 = *(int *)(lVar10 + 0xe0);
      }
      iVar2 = *(int *)(*(long *)(lVar10 + 0xb8) + 0x80);
      if (iVar12 == 0) {
        thunk_FUN_01843fdc(lVar10);
        lVar10 = *(long *)puVar4;
      }
      lVar13 = *(long *)(lVar10 + 0xb8);
      if ((int)uVar16 <= iVar2 + -1) {
        if (*(int *)(lVar13 + 0x3c) < *(int *)(lVar13 + 8)) goto LAB_01bce988;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01843fdc(lVar10);
          lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
        }
        lVar5 = *(long *)(lVar13 + 0x50);
        if (lVar5 == 0) goto LAB_01bceb50;
        if (*(uint *)(lVar5 + 0x18) <= *(uint *)(lVar13 + 0x84)) goto LAB_01bceb54;
        puVar8 = (undefined8 *)(lVar5 + (long)(int)*(uint *)(lVar13 + 0x84) * 8 + 0x20);
        *puVar8 = 0;
        thunk_FUN_0188fd20(puVar8,0);
        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
        *(int *)(lVar5 + 0x84) = *(int *)(lVar5 + 0x84) + -1;
        *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + -1;
        *(int *)(lVar5 + 0x3c) = *(int *)(lVar5 + 0x3c) + -1;
        goto LAB_01bce988;
      }
      lVar13 = *(long *)(lVar13 + 0x50);
      if (lVar13 == 0) goto LAB_01bceb50;
      if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_01bceb54;
      plVar15 = *(long **)(lVar13 + (long)(int)uVar16 * 8 + 0x20);
      if ((((plVar15 != (long *)0x0) && (plVar15[0x1a] == lVar5)) && (plVar15[0x1b] == lVar9)) &&
         (plVar15[0x1c] == lVar6)) break;
      uVar16 = uVar16 - 1;
    }
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4(lVar5);
    }
    if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944(plVar15);
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_019c73dc(plVar15,0);
    lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50);
    if (lVar5 == 0) goto LAB_01bceb50;
    if (*(uint *)(lVar5 + 0x18) <= uVar16) {
LAB_01bceb54:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    puVar8 = (undefined8 *)(lVar5 + (long)(int)uVar16 * 8 + 0x20);
    *puVar8 = 0;
    thunk_FUN_0188fd20(puVar8,0);
    lVar5 = *(long *)puVar4;
    lVar9 = *(long *)(lVar5 + 0xb8);
    uVar1 = *(uint *)(lVar9 + 0x84);
    if (uVar1 != *(uint *)(lVar9 + 0x80)) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        lVar5 = *(long *)puVar4;
        lVar9 = *(long *)(lVar5 + 0xb8);
        uVar1 = *(uint *)(lVar9 + 0x84);
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          lVar5 = *(long *)puVar4;
          lVar9 = *(long *)(lVar5 + 0xb8);
        }
      }
      if (uVar1 == uVar16) {
        *(int *)(lVar9 + 0x84) = *(int *)(lVar9 + 0x84) + -1;
      }
      else {
        puVar11 = (uint *)(lVar9 + 0x80);
        if (*puVar11 == uVar16) {
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
            lVar5 = *(long *)puVar4;
            puVar11 = (uint *)(*(long *)(lVar5 + 0xb8) + 0x80);
            uVar16 = *puVar11;
          }
          *puVar11 = uVar16 + 1;
        }
      }
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar5 = *(long *)puVar4;
    }
    *(int *)(*(long *)(lVar5 + 0xb8) + 0x34) = *(int *)(*(long *)(lVar5 + 0xb8) + 0x34) + -1;
  }
  return plVar15;
}


