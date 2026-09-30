/*
FUNCTION_NAME: OVRPlugin.OVRP_1_85_0$$ovrp_GetPassthroughCapabilities
ENTRY_POINT: 01fa0e60
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_OVRP_1_85_0__ovrp_GetPassthroughCapabilities(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x26;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  int iStack0000000000000018;
  
  thunk_FUN_01279b34(*(undefined8 *)(param_1 + 0x390));
  thunk_FUN_01279b34(PTR_DAT_027c1ff8);
  thunk_FUN_01279b34(PTR_DAT_027c1fd8);
  thunk_FUN_01279b34(PTR_DAT_027c2000);
  thunk_FUN_01279b34(PTR_DAT_027b32e0);
  *(undefined1 *)(unaff_x26 + 0xf6a) = 1;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  _iStack0000000000000018 = 0;
  if (unaff_x24 == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar3 = thunk_FUN_0124bba8();
    FUN_01e7e374(uVar3,0);
    uVar4 = thunk_FUN_01279b34(PTR_DAT_027c2008);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar3,uVar4);
  }
  FUN_01f9f3f0(&stack0x00000008);
  if (iStack0000000000000018 == 0) {
LAB_01fa0f38:
    plVar1 = (long *)0x0;
  }
  else {
    if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x18) == 0)) {
      if (iStack0000000000000018 == 1) {
        plVar1 = (long *)System_Collections_Generic_List<float3>__BinarySearch
                                   (&stack0x00000008,0,*(undefined8 *)PTR_DAT_027c2000);
        if (unaff_x19 == (long *)0x0) {
          return plVar1;
        }
        if (plVar1 == (long *)0x0) goto LAB_01fa10ac;
        (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230));
        uVar2 = (**(code **)(*unaff_x19 + 0x838))();
        if ((uVar2 & 1) != 0) {
          return plVar1;
        }
        goto LAB_01fa0f38;
      }
      if (unaff_x19 == (long *)0x0) {
        uVar3 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
        thunk_FUN_01279b34(PTR_DAT_027bc458);
        uVar4 = thunk_FUN_0124bba8();
        FUN_01ee31d4(uVar4,uVar3,0);
        uVar3 = thunk_FUN_01279b34(PTR_DAT_027c2008);
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar4,uVar3);
      }
    }
    if ((unaff_w22 >> 0x10 & 1) == 0) {
      if (unaff_x23 == (long *)0x0) {
        if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        unaff_x23 = (long *)FUN_01f824c8(0);
        uVar3 = FUN_018de6c0(&stack0x00000008,*(undefined8 *)PTR_DAT_027c1ff8);
        if (unaff_x23 == (long *)0x0) {
LAB_01fa10ac:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
      }
      else {
        uVar3 = FUN_018de6c0(&stack0x00000008,*(undefined8 *)PTR_DAT_027c1ff8);
      }
      plVar1 = (long *)(**(code **)(*unaff_x23 + 0x1c8))(unaff_x23,unaff_w22,uVar3);
    }
    else {
      uVar3 = FUN_018de6c0(&stack0x00000008,*(undefined8 *)PTR_DAT_027c1ff8);
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
      }
      plVar1 = (long *)FUN_01f96afc(uVar3);
    }
  }
  return plVar1;
}


