/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceQueryResult>$$ThrowInvalidOperationIfDefault
ENTRY_POINT: 055ca568
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


undefined8 System_ArraySegment<OVRPlugin_SpaceQueryResult>__ThrowInvalidOperationIfDefault(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long *unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long unaff_x25;
  
  thunk_FUN_040d65a8();
  FUN_0768890c();
  uVar4 = FUN_07691f40();
  if ((uVar4 & 1) != 0) {
    lVar5 = (**(code **)(*unaff_x20 + 0x478))();
    if (lVar5 == 0) {
LAB_055ca8b0:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_055ca8b4:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    plVar9 = *(long **)(lVar5 + 0x20);
    if (plVar9 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x24 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(plVar9);
      }
    }
    uVar10 = *(undefined8 *)PTR_DAT_092b99b8;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    plVar6 = (long *)FUN_0768890c(uVar10,0);
    plVar7 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_092871e0,1);
    if (plVar7 == (long *)0x0) goto LAB_055ca8b0;
    if ((plVar9 != (long *)0x0) &&
       (lVar5 = thunk_FUN_040b4e00(plVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0)) {
      uVar10 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar10,0);
    }
    if ((int)plVar7[3] == 0) goto LAB_055ca8b4;
    plVar7[4] = (long)plVar9;
    thunk_FUN_040ec700(plVar7 + 4,plVar9);
    if ((plVar6 == (long *)0x0) ||
       (plVar6 = (long *)(**(code **)(*plVar6 + 0x9a8))
                                   (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x9b0)),
       plVar6 == (long *)0x0)) goto LAB_055ca8b0;
    uVar4 = (**(code **)(*plVar6 + 0x2b8))(plVar6,plVar9,*(undefined8 *)(*plVar6 + 0x2c0));
    if ((uVar4 & 1) != 0) {
      uVar10 = *(undefined8 *)PTR_DAT_092b99d0;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar10 = FUN_0768890c(uVar10,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*unaff_x24);
      }
      goto LAB_055ca7e4;
    }
  }
  uVar4 = (**(code **)(*unaff_x20 + 0x5c8))();
  if ((uVar4 & 1) == 0) goto LAB_055ca844;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar10 = FUN_076ae3f0();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)(unaff_x25 + 0xe0));
  }
  uVar3 = FUN_076947e0(uVar10,0);
  if (uVar3 < 0xd) {
    uVar2 = 1 << (ulong)(uVar3 & 0x1f);
    if ((uVar2 & 0x740) == 0) {
      if ((uVar2 & 0x1800) == 0) {
        if (uVar3 != 7) goto LAB_055ca794;
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar8 = (undefined8 *)PTR_DAT_092b99e8;
      }
      else {
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar8 = (undefined8 *)PTR_DAT_092b99c8;
      }
    }
    else {
      lVar5 = *(long *)(unaff_x25 + 0xe0);
      puVar8 = (undefined8 *)PTR_DAT_092b99a8;
    }
  }
  else {
LAB_055ca794:
    if (uVar3 != 5) {
LAB_055ca844:
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_040b1acc();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_040b1acc();
      }
      uVar10 = thunk_FUN_040b4efc();
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_040b1acc(lVar5);
      }
      FUN_06180628(uVar10,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
      return uVar10;
    }
    lVar5 = *(long *)(unaff_x25 + 0xe0);
    puVar8 = (undefined8 *)PTR_DAT_092b99e0;
  }
  uVar10 = *puVar8;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar10 = FUN_0768890c(uVar10,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*unaff_x24);
  }
LAB_055ca7e4:
  uVar10 = FUN_076bb894(uVar10);
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_040b1acc(lVar5);
  }
  lVar5 = **(long **)(lVar5 + 0xc0);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_040b1acc(lVar5);
  }
  uVar10 = FUN_03b0b7dc(uVar10,lVar5);
  return uVar10;
}


