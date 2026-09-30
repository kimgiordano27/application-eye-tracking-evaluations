/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SerializationHelpers$$Serialize
ENTRY_POINT: 072d3a00
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SerializationHelpers__Serialize(void)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x27;
  undefined8 in_stack_00000048;
  undefined4 uStack000000000000007c;
  
  FUN_073037b0();
  plVar1 = (long *)*unaff_x21;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  (**(code **)(*plVar1 + 0x2e8))(plVar1,0xffffffff,*(undefined8 *)(*plVar1 + 0x2f0));
  plVar1 = (long *)*unaff_x21;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar2 = (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
  uVar3 = thunk_FUN_074e4840(uVar2,*(undefined8 *)PTR_DAT_092a5b20,0);
  if ((uVar3 & 1) == 0) {
    plVar1 = (long *)*unaff_x21;
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar2 = (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
    uVar3 = thunk_FUN_074e4840(uVar2,*(undefined8 *)PTR_DAT_092a7c78,0);
    if ((uVar3 & 1) == 0) goto LAB_072d33ec;
  }
  plVar1 = (long *)*unaff_x21;
  uVar2 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092b9810);
  FUN_075d6668();
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar2 = (**(code **)(*plVar1 + 0x338))(plVar1,uVar2,*unaff_x21,*(undefined8 *)(*plVar1 + 0x340));
  lVar4 = FUN_073025fc(uVar2,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  in_stack_00000048 = FUN_076f1ee4(lVar4,0);
  uVar3 = FUN_07591eb4(&stack0x00000048,0);
  if ((uVar3 & 1) == 0) {
    uStack000000000000007c = 0;
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000048;
    thunk_FUN_040ec700(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_04e53830(unaff_x19 + 2,&stack0x00000048);
    return;
  }
  FUN_07591f7c(&stack0x00000048,0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
LAB_072d33ec:
  plVar1 = *(long **)(unaff_x20 + 0xe8);
  if (plVar1 == (long *)0x0) {
    thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285e40);
    FUN_075d444c();
    FUN_069ad2b0();
  }
  else {
    uVar2 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092b9810);
    FUN_075d6668();
    uVar2 = (**(code **)(*plVar1 + 0x318))
                      (plVar1,uVar2,*(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(*plVar1 + 800)
                      );
    lVar4 = FUN_073025fc(uVar2,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000048 = FUN_076f1ee4(lVar4,0);
    uVar3 = FUN_07591eb4(&stack0x00000048,0);
    if ((uVar3 & 1) == 0) {
      uStack000000000000007c = 1;
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000048;
      thunk_FUN_040ec700(unaff_x19 + 0xc,0);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e53830(unaff_x19 + 2,&stack0x00000048);
      return;
    }
    FUN_07591f7c(&stack0x00000048,0);
  }
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0759053c(unaff_x19 + 2,0);
  return;
}


