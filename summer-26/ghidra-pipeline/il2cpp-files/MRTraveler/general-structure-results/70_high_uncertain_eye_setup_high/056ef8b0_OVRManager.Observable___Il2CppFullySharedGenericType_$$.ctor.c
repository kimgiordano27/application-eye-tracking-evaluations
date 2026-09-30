/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 056ef8b0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_Observable<__Il2CppFullySharedGenericType>___ctor(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar7;
  undefined8 uVar8;
  long in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  
  lVar3 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
  if (lVar3 != 0) {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *unaff_x20;
    uVar2 = unaff_x20[1];
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03cf1244();
    }
    uVar5 = FUN_068e6ae8(lVar3,uVar1,uVar2,&stack0x00000080,
                         *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xf8));
    lVar3 = in_stack_00000080;
    if ((uVar5 & 1) == 0) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03cf1244();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03cf1244();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03cf1244();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03cf1244();
      }
      uVar8 = unaff_x21[1];
      uVar7 = *unaff_x21;
      uVar6 = unaff_x21[2];
      uVar1 = *unaff_x20;
      uVar2 = unaff_x20[1];
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_056efa94;
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03cf1244();
      }
      in_stack_00000090 = uVar7;
      in_stack_00000098 = uVar8;
      in_stack_000000a0 = uVar6;
      FUN_068cf974(lVar3,uVar1,uVar2,&stack0x00000090,
                   *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x168));
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      FUN_056ef57c();
    }
    else {
      uVar8 = unaff_x21[1];
      uVar7 = *unaff_x21;
      uVar6 = unaff_x21[2];
      uVar1 = *unaff_x20;
      uVar2 = unaff_x20[1];
      if (in_stack_00000080 == 0) goto LAB_056efa94;
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      in_stack_00000090 = uVar7;
      in_stack_00000098 = uVar8;
      in_stack_000000a0 = uVar6;
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),uVar1,uVar2,&stack0x00000090,
                 *(undefined8 *)(lVar3 + 0x28));
    }
    return;
  }
LAB_056efa94:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


