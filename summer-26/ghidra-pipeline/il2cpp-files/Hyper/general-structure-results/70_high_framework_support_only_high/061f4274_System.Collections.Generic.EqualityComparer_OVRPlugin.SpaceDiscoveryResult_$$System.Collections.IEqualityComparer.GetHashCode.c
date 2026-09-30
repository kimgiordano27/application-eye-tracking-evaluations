/*
FUNCTION_NAME: System.Collections.Generic.EqualityComparer<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEqualityComparer.GetHashCode
ENTRY_POINT: 061f4274
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
System_Collections_Generic_EqualityComparer<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEqualityComparer_GetHashCode
          (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  long *unaff_x24;
  long unaff_x25;
  
  if ((*(byte *)(param_1 + 0x130) < *(byte *)(param_3 + 0x130)) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(param_3 + 0x130) * 8 + -8) != param_3))
  {
                    /* WARNING: Subroutine does not return */
    FUN_0494850c();
  }
  uVar8 = *(undefined8 *)PTR_DAT_0ac43568;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  plVar3 = (long *)FUN_08d895f0(uVar8,0);
  lVar4 = FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac0fd48,1);
  if (lVar4 == 0) {
LAB_061f4568:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if ((unaff_x21 != 0) && (lVar5 = thunk_FUN_04983e64(), lVar5 == 0)) {
    uVar8 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar8,0);
  }
  if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948194();
  }
  *(long *)(lVar4 + 0x20) = unaff_x21;
  thunk_FUN_049ee3d8();
  if ((plVar3 == (long *)0x0) ||
     (plVar3 = (long *)(**(code **)(*plVar3 + 0x968))(plVar3,lVar4,*(undefined8 *)(*plVar3 + 0x970))
     , plVar3 == (long *)0x0)) goto LAB_061f4568;
  uVar6 = (**(code **)(*plVar3 + 0x2a8))();
  if ((uVar6 & 1) != 0) {
    uVar8 = *(undefined8 *)PTR_DAT_0ac43580;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar8 = FUN_08d895f0(uVar8,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_049a583c(*unaff_x24);
    }
    goto LAB_061f449c;
  }
  uVar6 = (**(code **)(*unaff_x20 + 0x5a8))();
  if ((uVar6 & 1) == 0)
  goto System_Collections_Generic_EqualityComparer<OVRPlugin_SpaceQueryResult>__get_Default;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar8 = FUN_08db0b50();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_049a583c(*(long *)(unaff_x25 + 0xe0));
  }
  uVar2 = FUN_08d96880(uVar8,0);
  if (uVar2 < 0xd) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar1 & 0x740) == 0) {
      if ((uVar1 & 0x1800) == 0) {
        if (uVar2 != 7) goto LAB_061f444c;
        lVar4 = *(long *)(unaff_x25 + 0xe0);
        puVar7 = (undefined8 *)PTR_DAT_0ac43590;
      }
      else {
        lVar4 = *(long *)(unaff_x25 + 0xe0);
        puVar7 = (undefined8 *)PTR_DAT_0ac43578;
      }
    }
    else {
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar7 = (undefined8 *)PTR_DAT_0ac43558;
    }
  }
  else {
LAB_061f444c:
    if (uVar2 != 5) {
System_Collections_Generic_EqualityComparer<OVRPlugin_SpaceQueryResult>__get_Default:
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04980b34();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_04980b34();
      }
      uVar8 = thunk_FUN_04983f60();
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04980b34(lVar4);
      }
      FUN_0709a494(uVar8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
      return uVar8;
    }
    lVar4 = *(long *)(unaff_x25 + 0xe0);
    puVar7 = (undefined8 *)PTR_DAT_0ac43588;
  }
  uVar8 = *puVar7;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar8 = FUN_08d895f0(uVar8,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_049a583c(*unaff_x24);
  }
LAB_061f449c:
  uVar8 = FUN_08dbe24c(uVar8);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_04980b34(lVar4);
  }
  lVar4 = **(long **)(lVar4 + 0xc0);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_04980b34(lVar4);
  }
  uVar8 = FUN_0433caac(uVar8,lVar4);
  return uVar8;
}


