/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceDiscoveryResult>$$ThrowInvalidOperationIfDefault
ENTRY_POINT: 055c9924
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


long * System_ArraySegment<OVRPlugin_SpaceDiscoveryResult>__ThrowInvalidOperationIfDefault(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x24;
  long unaff_x25;
  
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_040b1acc();
  }
  uVar10 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28);
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)(unaff_x25 + 0xe0));
  }
  plVar5 = (long *)FUN_0768890c(uVar10,0);
  if (plVar5 == (long *)0x0) {
LAB_055c9d8c:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar6 = (**(code **)(*plVar5 + 0x2b8))();
  if ((uVar6 & 1) != 0) {
    uVar10 = *(undefined8 *)PTR_DAT_092b99b0;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar10 = FUN_0768890c(uVar10,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*unaff_x24);
    }
    plVar5 = (long *)FUN_076bb894(uVar10);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc(lVar4);
    }
    lVar4 = **(long **)(lVar4 + 0xc0);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc(lVar4);
    }
    if (plVar5 == (long *)0x0) {
      return (long *)0x0;
    }
    if ((*(byte *)(lVar4 + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) == lVar4)) {
      return plVar5;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077bb0(plVar5);
  }
  if (unaff_x20 == (long *)0x0) goto LAB_055c9d8c;
  uVar6 = (**(code **)(*unaff_x20 + 0x3d8))();
  if ((uVar6 & 1) != 0) {
    uVar10 = (**(code **)(*unaff_x20 + 0x458))();
    uVar11 = *(undefined8 *)PTR_DAT_092b99d8;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(unaff_x25 + 0xe0));
    }
    uVar11 = FUN_0768890c(uVar11,0);
    uVar6 = FUN_07691f40(uVar10,uVar11,0);
    if ((uVar6 & 1) != 0) {
      lVar4 = (**(code **)(*unaff_x20 + 0x478))();
      if (lVar4 == 0) goto LAB_055c9d8c;
      if (*(int *)(lVar4 + 0x18) == 0) {
LAB_055c9d90:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      plVar5 = *(long **)(lVar4 + 0x20);
      if (plVar5 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x24 + 0x130);
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077bb0(plVar5);
        }
      }
      uVar10 = *(undefined8 *)PTR_DAT_092b99b8;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      plVar7 = (long *)FUN_0768890c(uVar10,0);
      plVar8 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_092871e0,1);
      if (plVar8 == (long *)0x0) goto LAB_055c9d8c;
      if ((plVar5 != (long *)0x0) &&
         (lVar4 = thunk_FUN_040b4e00(plVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar4 == 0)) {
        uVar10 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar10,0);
      }
      if ((int)plVar8[3] == 0) goto LAB_055c9d90;
      plVar8[4] = (long)plVar5;
      thunk_FUN_040ec700(plVar8 + 4,plVar5);
      if ((plVar7 == (long *)0x0) ||
         (plVar7 = (long *)(**(code **)(*plVar7 + 0x9a8))
                                     (plVar7,plVar8,*(undefined8 *)(*plVar7 + 0x9b0)),
         plVar7 == (long *)0x0)) goto LAB_055c9d8c;
      uVar6 = (**(code **)(*plVar7 + 0x2b8))(plVar7,plVar5,*(undefined8 *)(*plVar7 + 0x2c0));
      if ((uVar6 & 1) != 0) {
        uVar10 = *(undefined8 *)PTR_DAT_092b99d0;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar10 = FUN_0768890c(uVar10,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_040d65a8(*unaff_x24);
        }
        goto LAB_055c9cc0;
      }
    }
  }
  uVar6 = (**(code **)(*unaff_x20 + 0x5c8))();
  if ((uVar6 & 1) == 0) goto LAB_055c9d20;
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
        if (uVar3 != 7) goto LAB_055c9c70;
        lVar4 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_092b99e8;
      }
      else {
        lVar4 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_092b99c8;
      }
    }
    else {
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar9 = (undefined8 *)PTR_DAT_092b99a8;
    }
  }
  else {
LAB_055c9c70:
    if (uVar3 != 5) {
LAB_055c9d20:
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_040b1acc();
      }
      plVar5 = (long *)thunk_FUN_040b4efc();
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc(lVar4);
      }
      FUN_0618028c(plVar5,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
      return plVar5;
    }
    lVar4 = *(long *)(unaff_x25 + 0xe0);
    puVar9 = (undefined8 *)PTR_DAT_092b99e0;
  }
  uVar10 = *puVar9;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar10 = FUN_0768890c(uVar10,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*unaff_x24);
  }
LAB_055c9cc0:
  uVar10 = FUN_076bb894(uVar10);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_040b1acc(lVar4);
  }
  lVar4 = **(long **)(lVar4 + 0xc0);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_040b1acc(lVar4);
  }
  plVar5 = (long *)FUN_03b0b7dc(uVar10,lVar4);
  return plVar5;
}


