/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceDiscoveryResult>$$GetHashCode
ENTRY_POINT: 055c8ff0
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


undefined8 System_ArraySegment<OVRPlugin_SpaceDiscoveryResult>__GetHashCode(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar8;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  
  lVar3 = FUN_04077674(param_1);
  if (lVar3 == 0) {
LAB_055c9284:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if ((unaff_x21 != 0) && (lVar4 = thunk_FUN_040b4e00(), lVar4 == 0)) {
    uVar8 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar8,0);
  }
  if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  *(long *)(lVar3 + 0x20) = unaff_x21;
  thunk_FUN_040ec700();
  if ((unaff_x22 == (long *)0x0) ||
     (plVar5 = (long *)(**(code **)(*unaff_x22 + 0x9a8))(), plVar5 == (long *)0x0))
  goto LAB_055c9284;
  uVar6 = (**(code **)(*plVar5 + 0x2b8))();
  if ((uVar6 & 1) != 0) {
    uVar8 = *(undefined8 *)PTR_DAT_092b99d0;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar8 = FUN_0768890c(uVar8,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*unaff_x24);
    }
    goto LAB_055c91b8;
  }
  uVar6 = (**(code **)(*unaff_x20 + 0x5c8))();
  if ((uVar6 & 1) == 0) goto LAB_055c9218;
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
        if (uVar2 != 7) goto LAB_055c9168;
        lVar3 = *(long *)(unaff_x25 + 0xe0);
        puVar7 = (undefined8 *)PTR_DAT_092b99e8;
      }
      else {
        lVar3 = *(long *)(unaff_x25 + 0xe0);
        puVar7 = (undefined8 *)PTR_DAT_092b99c8;
      }
    }
    else {
      lVar3 = *(long *)(unaff_x25 + 0xe0);
      puVar7 = (undefined8 *)PTR_DAT_092b99a8;
    }
  }
  else {
LAB_055c9168:
    if (uVar2 != 5) {
LAB_055c9218:
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_040b1acc();
      }
      uVar8 = thunk_FUN_040b4efc();
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc(lVar3);
      }
      FUN_0617fef0(uVar8,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
      return uVar8;
    }
    lVar3 = *(long *)(unaff_x25 + 0xe0);
    puVar7 = (undefined8 *)PTR_DAT_092b99e0;
  }
  uVar8 = *puVar7;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar8 = FUN_0768890c(uVar8,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*unaff_x24);
  }
LAB_055c91b8:
  uVar8 = FUN_076bb894(uVar8);
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
  }
  uVar8 = FUN_03b0b7dc(uVar8,lVar3);
  return uVar8;
}


