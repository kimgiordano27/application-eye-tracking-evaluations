/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 055c9868
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * System_ArraySegment<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerable_GetEnumerator
                 (void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  int in_w8;
  long *plVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x24;
  long unaff_x25;
  
  if (in_w8 == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0768890c(unaff_x21 + 0x20,0);
  uVar4 = FUN_07691f40();
  if ((uVar4 & 1) != 0) {
    plVar5 = (long *)thunk_FUN_040b4efc(DAT_094b6d90);
    FUN_07620ef4(plVar5,0);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    plVar8 = *(long **)(lVar6 + 0xc0);
LAB_055c98c4:
    lVar6 = *plVar8;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc(lVar6);
    }
    if (plVar5 != (long *)0x0) {
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6))
      {
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(plVar5);
      }
    }
    return plVar5;
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  uVar10 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28);
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)(unaff_x25 + 0xe0));
  }
  plVar5 = (long *)FUN_0768890c(uVar10,0);
  if (plVar5 == (long *)0x0) {
LAB_055c9d8c:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar4 = (**(code **)(*plVar5 + 0x2b8))();
  if ((uVar4 & 1) != 0) {
    uVar10 = *(undefined8 *)PTR_DAT_092b99b0;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar10 = FUN_0768890c(uVar10,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*unaff_x24);
    }
    plVar5 = (long *)FUN_076bb894(uVar10);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc(lVar6);
    }
    plVar8 = *(long **)(lVar6 + 0xc0);
    goto LAB_055c98c4;
  }
  if (unaff_x20 == (long *)0x0) goto LAB_055c9d8c;
  uVar4 = (**(code **)(*unaff_x20 + 0x3d8))();
  if ((uVar4 & 1) != 0) {
    uVar10 = (**(code **)(*unaff_x20 + 0x458))();
    uVar11 = *(undefined8 *)PTR_DAT_092b99d8;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(unaff_x25 + 0xe0));
    }
    uVar11 = FUN_0768890c(uVar11,0);
    uVar4 = FUN_07691f40(uVar10,uVar11,0);
    if ((uVar4 & 1) != 0) {
      lVar6 = (**(code **)(*unaff_x20 + 0x478))();
      if (lVar6 == 0) goto LAB_055c9d8c;
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_055c9d90:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      plVar5 = *(long **)(lVar6 + 0x20);
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
      plVar8 = (long *)FUN_0768890c(uVar10,0);
      plVar7 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_092871e0,1);
      if (plVar7 == (long *)0x0) goto LAB_055c9d8c;
      if ((plVar5 != (long *)0x0) &&
         (lVar6 = thunk_FUN_040b4e00(plVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0)) {
        uVar10 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar10,0);
      }
      if ((int)plVar7[3] == 0) goto LAB_055c9d90;
      plVar7[4] = (long)plVar5;
      thunk_FUN_040ec700(plVar7 + 4,plVar5);
      if ((plVar8 == (long *)0x0) ||
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x9a8))
                                     (plVar8,plVar7,*(undefined8 *)(*plVar8 + 0x9b0)),
         plVar8 == (long *)0x0)) goto LAB_055c9d8c;
      uVar4 = (**(code **)(*plVar8 + 0x2b8))(plVar8,plVar5,*(undefined8 *)(*plVar8 + 0x2c0));
      if ((uVar4 & 1) != 0) {
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
  uVar4 = (**(code **)(*unaff_x20 + 0x5c8))();
  if ((uVar4 & 1) == 0) goto LAB_055c9d20;
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
        lVar6 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_092b99e8;
      }
      else {
        lVar6 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_092b99c8;
      }
    }
    else {
      lVar6 = *(long *)(unaff_x25 + 0xe0);
      puVar9 = (undefined8 *)PTR_DAT_092b99a8;
    }
  }
  else {
LAB_055c9c70:
    if (uVar3 != 5) {
LAB_055c9d20:
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_040b1acc();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_040b1acc();
      }
      plVar5 = (long *)thunk_FUN_040b4efc();
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_040b1acc(lVar6);
      }
      FUN_0618028c(plVar5,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
      return plVar5;
    }
    lVar6 = *(long *)(unaff_x25 + 0xe0);
    puVar9 = (undefined8 *)PTR_DAT_092b99e0;
  }
  uVar10 = *puVar9;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar10 = FUN_0768890c(uVar10,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*unaff_x24);
  }
LAB_055c9cc0:
  uVar10 = FUN_076bb894(uVar10);
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc(lVar6);
  }
  lVar6 = **(long **)(lVar6 + 0xc0);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc(lVar6);
  }
  plVar5 = (long *)FUN_03b0b7dc(uVar10,lVar6);
  return plVar5;
}


