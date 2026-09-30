/*
FUNCTION_NAME: System.Collections.Generic.ObjectEqualityComparer<OVRPlugin.SpaceDiscoveryResult>$$GetHashCode
ENTRY_POINT: 0700b500
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Collections_Generic_ObjectEqualityComparer<OVRPlugin_SpaceDiscoveryResult>__GetHashCode
               (ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  long in_stack_00000008;
  long in_stack_00000010;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_04980b34();
  }
  lVar3 = *(long *)(*(long *)(param_2 + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
  if (lVar3 == 0) goto LAB_0700b77c;
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *unaff_x19;
  uVar2 = unaff_x19[1];
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_04980b34();
  }
  uVar5 = FUN_085f2d50(lVar3,uVar1,uVar2,&stack0x00000010,
                       *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2e0));
  if ((uVar5 & 1) != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
    if (lVar3 == 0) goto LAB_0700b77c;
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04980b34();
    }
    FUN_085f2758(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2e8));
    lVar3 = in_stack_00000010;
    if (in_stack_00000010 == 0) goto LAB_0700b77c;
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    (**(code **)(lVar3 + 0x18))
              (*(undefined8 *)(lVar3 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar3 + 0x28));
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x58);
  if (lVar3 != 0) {
    uVar5 = FUN_085f2d50(lVar3,*unaff_x19,unaff_x19[1],&stack0x00000008,
                         *(undefined8 *)PTR_DAT_0ac44700);
    if ((uVar5 & 1) == 0) {
      return;
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x58);
    if ((lVar3 != 0) &&
       (FUN_085f2758(lVar3,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_0ac446f0),
       in_stack_00000008 != 0)) {
      (**(code **)(in_stack_00000008 + 0x18))
                (*(undefined8 *)(in_stack_00000008 + 0x40),*unaff_x19,unaff_x19[1],
                 *(undefined8 *)(in_stack_00000008 + 0x28));
      return;
    }
  }
LAB_0700b77c:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


