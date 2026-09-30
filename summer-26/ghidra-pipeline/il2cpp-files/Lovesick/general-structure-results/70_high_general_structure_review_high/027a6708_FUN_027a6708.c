/*
FUNCTION_NAME: FUN_027a6708
ENTRY_POINT: 027a6708
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x027a6c0c) */
/* WARNING: Removing unreachable block (ram,0x027a6aec) */
/* WARNING: Removing unreachable block (ram,0x027a6b34) */
/* WARNING: Removing unreachable block (ram,0x027a6b40) */
/* WARNING: Removing unreachable block (ram,0x027a6c14) */
/* WARNING: Removing unreachable block (ram,0x027a6904) */
/* WARNING: Removing unreachable block (ram,0x027a6c00) */

bool FUN_027a6708(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined8 uVar14;
  
  if ((DAT_0378878f & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
                      );
    DAT_0378878f = 1;
  }
  puVar2 = StringLiteral_302;
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
  ;
  if (param_1 == (long *)0x0) {
LAB_027a6bfc:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar5 = (**(code **)(*param_1 + 0x3c8))(param_1,*(undefined8 *)(*param_1 + 0x3d0));
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  FUN_02661ba8(iVar5 == 1,0);
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar6 = *(long *)puVar1;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (lVar6 == 0) goto LAB_027a6bfc;
  iVar5 = FUN_026cc440(lVar6,0);
  puVar2 = Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__;
  if (iVar5 == 7) {
    uVar7 = FUN_02685354(0);
    uVar8 = FUN_02675830(0);
    FUN_02685afc(0,0);
    FUN_02675858(0,0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar1;
    }
    uVar14 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x50);
    if (DAT_0377a0ed == '\0') {
      thunk_FUN_00d48444(
                        Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                        );
      DAT_0377a0ed = '\x01';
    }
    uVar9 = FUN_017bc96c(uVar14,**(undefined8 **)(*(long *)puVar2 + 0xb8),0);
    if ((uVar9 & 1) != 0) {
      FUN_0265d9e8(uVar14,0);
    }
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar1;
    }
    (**(code **)(*param_1 + 0x298))
              (param_1,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),
               *(undefined8 *)(*param_1 + 0x2a0));
    if (DAT_0377a0ef == '\0') {
      thunk_FUN_00d48444(
                        Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                        );
      DAT_0377a0ef = '\x01';
    }
    uVar9 = FUN_017bc96c(uVar14,**(undefined8 **)(*(long *)puVar2 + 0xb8),0);
    if ((uVar9 & 1) != 0) {
      FUN_0265dab4(uVar14,0);
    }
    iVar5 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
    FUN_02685afc(uVar7,0);
    FUN_02675858(uVar8,0);
    return 0 < iVar5;
  }
  (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = StringLiteral_10310;
  plVar10 = (long *)FUN_027a75b0(*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10));
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar6);
    lVar6 = *(long *)puVar1;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar5 = FUN_026cc440(lVar6,0);
  if (iVar5 != 0xc) {
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar1;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar5 = FUN_026cc440(lVar6,0);
    if (iVar5 != 8) {
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar1;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar5 = FUN_026cc440(lVar6,0);
      if (iVar5 != 0xe) {
        lVar6 = *(long *)puVar1;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar6 = *(long *)puVar1;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iVar5 = FUN_026cc440(lVar6,0);
        bVar4 = iVar5 == 0xd;
        goto LAB_027a6a18;
      }
    }
  }
  bVar4 = true;
LAB_027a6a18:
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar6 = *(long *)puVar1;
  }
  uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x58);
  if (DAT_0377a0ed == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    DAT_0377a0ed = '\x01';
  }
  uVar9 = FUN_017bc96c(uVar7,**(undefined8 **)(*(long *)puVar2 + 0xb8),0);
  if ((uVar9 & 1) != 0) {
    FUN_0265d9e8(uVar7,0);
  }
  uVar12 = 1;
  if (bVar4) {
    uVar12 = 2;
  }
  FUN_027708f0(param_1,plVar10,uVar12,0);
  if (DAT_0377a0ef == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    DAT_0377a0ef = '\x01';
  }
  uVar9 = FUN_017bc96c(uVar7,**(undefined8 **)(*(long *)puVar2 + 0xb8),0);
  if ((uVar9 & 1) != 0) {
    FUN_0265dab4(uVar7,0);
  }
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar9 = FUN_027fa360(plVar10,0);
  if ((uVar9 & 1) == 0) {
    bVar4 = false;
  }
  else {
    lVar6 = (**(code **)(*param_1 + 0x368))(param_1,*(undefined8 *)(*param_1 + 0x370));
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0274a398(lVar6,0x800,0);
    bVar4 = true;
  }
  lVar6 = *plVar10;
  uVar9 = (ulong)*(ushort *)(lVar6 + 0x12a);
  if (uVar9 != 0) {
    piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
        puVar11 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_027a6b98;
      }
      uVar9 = uVar9 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar9 != 0);
  }
  puVar11 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar3,0);
LAB_027a6b98:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  return bVar4;
}


