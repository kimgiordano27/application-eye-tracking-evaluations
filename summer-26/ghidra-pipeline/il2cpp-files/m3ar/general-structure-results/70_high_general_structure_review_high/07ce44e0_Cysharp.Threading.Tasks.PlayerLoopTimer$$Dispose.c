/*
FUNCTION_NAME: Cysharp.Threading.Tasks.PlayerLoopTimer$$Dispose
ENTRY_POINT: 07ce44e0
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_5;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Cysharp_Threading_Tasks_PlayerLoopTimer__Dispose(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  short sVar3;
  ushort uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  
  lVar11 = *param_1;
  if (lVar11 == 0) goto LAB_07ce488c;
  if (0 < *(int *)(lVar11 + 0x10)) {
    uVar5 = FUN_07363804(lVar11,0,0);
    puVar2 = PTR_DAT_08f65fa8;
    if (*(int *)(*(long *)PTR_DAT_08f65fa8 + 0xe4) == 0) {
      thunk_FUN_0408f364(*(long *)PTR_DAT_08f65fa8);
    }
    uVar1 = (uint)uVar5 & 0xffff;
    if (((0x20 < uVar1) || (0x20 < uVar1)) || ((1L << (uVar5 & 0x3f) & 0x100002600U) == 0)) {
      uVar5 = FUN_07363804(lVar11,*(int *)(lVar11 + 0x10) + -1,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364(*(long *)puVar2);
      }
      uVar1 = (uint)uVar5 & 0xffff;
      if (((0x20 < uVar1) || (0x20 < uVar1)) || ((1L << (uVar5 & 0x3f) & 0x100002600U) == 0))
      goto LAB_07ce45e4;
    }
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar7 = *(long *)puVar2;
    }
    lVar11 = System_Globalization_SortKey__Compare
                       (lVar11,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x88),0);
    if (lVar11 == 0) goto LAB_07ce488c;
  }
LAB_07ce45e4:
  if (*(int *)(lVar11 + 0x10) == 0) {
    if (unaff_x20 == 0) goto LAB_07ce488c;
    lVar11 = FUN_07ceb2f0();
    goto LAB_07ce4818;
  }
  sVar3 = FUN_07363804(lVar11,0,0);
  if (sVar3 == 0x23) {
    if (unaff_x20 == 0) goto LAB_07ce488c;
    if ((*(byte *)(unaff_x20 + 0x33) >> 5 & 1) != 0)
    goto Cysharp_Threading_Tasks_DeltaTimePlayerLoopTimer__ResetCore;
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_07ce488c;
    uVar5 = FUN_07d1f970(*(long *)(unaff_x20 + 0x20),0x40,0);
    if ((uVar5 & 1) == 0) goto Cysharp_Threading_Tasks_DeltaTimePlayerLoopTimer__ResetCore;
LAB_07ce4680:
    uVar6 = FUN_07ceb2f0();
    lVar11 = FUN_0735c7b4(uVar6,lVar11,0);
LAB_07ce4818:
    *unaff_x19 = lVar11;
    return 0;
  }
Cysharp_Threading_Tasks_DeltaTimePlayerLoopTimer__ResetCore:
  sVar3 = FUN_07363804(lVar11,0,0);
  if (sVar3 == 0x3f) {
    if (unaff_x20 == 0) goto LAB_07ce488c;
    if ((*(byte *)(unaff_x20 + 0x33) >> 5 & 1) == 0) {
      if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_07ce488c;
      uVar5 = FUN_07d1f970(*(long *)(unaff_x20 + 0x20),0x20,0);
      if ((uVar5 & 1) != 0) goto LAB_07ce4680;
    }
  }
  if ((2 < *(int *)(lVar11 + 0x10)) &&
     ((sVar3 = FUN_07363804(lVar11,1,0), sVar3 == 0x3a ||
      (sVar3 = FUN_07363804(lVar11,1,0), sVar3 == 0x7c)))) {
    uVar4 = FUN_07363804(lVar11,0,0);
    if (*(int *)(*(long *)PTR_DAT_08f65fa8 + 0xe4) == 0) {
      thunk_FUN_0408f364(*(long *)PTR_DAT_08f65fa8);
    }
    if (((ushort)((uVar4 & 0xffdf) - 0x41) < 0x1a) &&
       ((sVar3 = FUN_07363804(lVar11,2,0), sVar3 == 0x5c ||
        (sVar3 = FUN_07363804(lVar11,2,0), sVar3 == 0x2f)))) {
      if (unaff_x20 == 0) goto LAB_07ce488c;
      if ((*(byte *)(unaff_x20 + 0x33) >> 5 & 1) != 0) {
        *unaff_x19 = lVar11;
        return 0;
      }
      if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_07ce488c;
      uVar5 = FUN_07d1f970(*(long *)(unaff_x20 + 0x20),0x100000,0);
      if ((uVar5 & 1) != 0) {
        lVar7 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(unaff_x20 + 0x32) >> 4 & 1) == 0) {
          if (lVar7 == 0) goto LAB_07ce488c;
          uVar5 = FUN_07d1f970(lVar7,0x200000,0);
          puVar8 = (undefined8 *)PTR_DAT_08f65f00;
          puVar9 = (undefined8 *)PTR_DAT_08fd0c98;
        }
        else {
          if (lVar7 == 0) goto LAB_07ce488c;
          uVar5 = FUN_07d1f970(lVar7,0x200000,0);
          puVar8 = (undefined8 *)PTR_DAT_08f68230;
          puVar9 = (undefined8 *)PTR_DAT_08fd0c90;
        }
        if ((uVar5 & 1) == 0) {
          puVar9 = puVar8;
        }
        uVar10 = *puVar9;
        uVar6 = FUN_07ce777c();
        lVar11 = FUN_0736972c(uVar6,uVar10,lVar11,0);
        goto LAB_07ce4818;
      }
    }
  }
  if (*(int *)(*(long *)PTR_DAT_08f65fa8 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  FUN_07ce4c18();
  if (unaff_x20 != 0) {
    if (*unaff_x19 == *(long *)(unaff_x20 + 0x10)) {
      return unaff_x20;
    }
    return 0;
  }
LAB_07ce488c:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


