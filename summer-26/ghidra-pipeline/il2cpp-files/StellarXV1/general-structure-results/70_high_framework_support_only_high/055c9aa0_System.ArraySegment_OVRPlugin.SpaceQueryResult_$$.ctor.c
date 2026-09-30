/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 055c9aa0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_ArraySegment<OVRPlugin_SpaceQueryResult>___ctor(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long in_x9;
  uint in_w10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  long *unaff_x24;
  long unaff_x25;
  
  if ((in_w10 < (uint)in_x9) || (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_3)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077bb0();
  }
  uVar8 = *(undefined8 *)PTR_DAT_092b99b8;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  plVar3 = (long *)FUN_0768890c(uVar8,0);
  lVar4 = FUN_04077674(*(undefined8 *)PTR_DAT_092871e0,1);
  if (lVar4 == 0) {
LAB_055c9d8c:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if ((unaff_x21 != 0) && (lVar5 = thunk_FUN_040b4e00(), lVar5 == 0)) {
    uVar8 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar8,0);
  }
  if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  *(long *)(lVar4 + 0x20) = unaff_x21;
  thunk_FUN_040ec700();
  if ((plVar3 == (long *)0x0) ||
     (plVar3 = (long *)(**(code **)(*plVar3 + 0x9a8))(plVar3,lVar4,*(undefined8 *)(*plVar3 + 0x9b0))
     , plVar3 == (long *)0x0)) goto LAB_055c9d8c;
  uVar6 = (**(code **)(*plVar3 + 0x2b8))();
  if ((uVar6 & 1) != 0) {
    uVar8 = *(undefined8 *)PTR_DAT_092b99d0;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar8 = FUN_0768890c(uVar8,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*unaff_x24);
    }
    goto LAB_055c9cc0;
  }
  uVar6 = (**(code **)(*unaff_x20 + 0x5c8))();
  if ((uVar6 & 1) == 0) goto LAB_055c9d20;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar8 = FUN_076ae3f0();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)(unaff_x25 + 0xe0));
  }
  uVar2 = FUN_076947e0(uVar8,0);
  if (uVar2 < 0xd) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar1 & 0x740) == 0) {
      if ((uVar1 & 0x1800) == 0) {
        if (uVar2 != 7) goto LAB_055c9c70;
        lVar4 = *(long *)(unaff_x25 + 0xe0);
        puVar7 = (undefined8 *)PTR_DAT_092b99e8;
      }
      else {
        lVar4 = *(long *)(unaff_x25 + 0xe0);
        puVar7 = (undefined8 *)PTR_DAT_092b99c8;
      }
    }
    else {
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar7 = (undefined8 *)PTR_DAT_092b99a8;
    }
  }
  else {
LAB_055c9c70:
    if (uVar2 != 5) {
LAB_055c9d20:
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_040b1acc();
      }
      uVar8 = thunk_FUN_040b4efc();
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc(lVar4);
      }
      FUN_0618028c(uVar8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
      return uVar8;
    }
    lVar4 = *(long *)(unaff_x25 + 0xe0);
    puVar7 = (undefined8 *)PTR_DAT_092b99e0;
  }
  uVar8 = *puVar7;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar8 = FUN_0768890c(uVar8,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*unaff_x24);
  }
LAB_055c9cc0:
  uVar8 = FUN_076bb894(uVar8);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_040b1acc(lVar4);
  }
  lVar4 = **(long **)(lVar4 + 0xc0);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_040b1acc(lVar4);
  }
  uVar8 = FUN_03b0b7dc(uVar8,lVar4);
  return uVar8;
}


