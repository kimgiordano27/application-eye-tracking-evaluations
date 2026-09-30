/*
FUNCTION_NAME: OVRManager.Observable<Int32Enum>$$get_Value
ENTRY_POINT: 061b6474
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_Observable<Int32Enum>__get_Value(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long in_stack_00000008;
  long in_stack_00000010;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  lVar3 = *unaff_x20;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
  if (lVar3 == 0) goto LAB_061b66d8;
  lVar4 = *unaff_x20;
  uVar1 = *unaff_x19;
  uVar2 = unaff_x19[1];
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_04481fb8();
  }
  uVar5 = FUN_072cbc60(lVar3,uVar1,uVar2,&stack0x00000010,
                       *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2e0));
  if ((uVar5 & 1) != 0) {
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
    if (lVar3 == 0) goto LAB_061b66d8;
    lVar4 = *unaff_x20;
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8();
    }
    FUN_072cb648(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2e8));
    lVar3 = in_stack_00000010;
    if (in_stack_00000010 == 0) goto LAB_061b66d8;
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
    if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    (**(code **)(lVar3 + 0x18))
              (*(undefined8 *)(lVar3 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar3 + 0x28));
  }
  lVar3 = *unaff_x20;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  lVar3 = *unaff_x20;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x58);
  if (lVar3 != 0) {
    uVar5 = FUN_072cbc60(lVar3,*unaff_x19,unaff_x19[1],&stack0x00000008,
                         *(undefined8 *)PTR_DAT_09f29470);
    if ((uVar5 & 1) == 0) {
      return;
    }
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x58);
    if ((lVar3 != 0) &&
       (FUN_072cb648(lVar3,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_09f29460),
       in_stack_00000008 != 0)) {
      (**(code **)(in_stack_00000008 + 0x18))
                (*(undefined8 *)(in_stack_00000008 + 0x40),*unaff_x19,unaff_x19[1],
                 *(undefined8 *)(in_stack_00000008 + 0x28));
      return;
    }
  }
LAB_061b66d8:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


