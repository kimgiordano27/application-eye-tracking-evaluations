/*
FUNCTION_NAME: UniJSON.JsonValue$$GetSingle
ENTRY_POINT: 02f49910
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02f49a98) */

long * UniJSON_JsonValue__GetSingle(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 unaff_x19;
  int unaff_w20;
  undefined8 uVar5;
  undefined8 unaff_x21;
  undefined8 uVar6;
  long *unaff_x23;
  long unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  ulong in_stack_00000008;
  
  uVar1 = in_stack_00000008;
code_r0x02f49910:
  OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
LAB_02f49918:
  if (unaff_x25 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(unaff_x25);
  }
  uVar6 = unaff_x19;
  if (unaff_w20 == 0) goto LAB_02f49768;
LAB_02f49988:
  unaff_x19 = unaff_x21;
  if ((uVar1 & 1) == 0) {
    if (unaff_x23 == (long *)0x0) {
      do {
        lVar2 = *unaff_x26;
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar2 = *unaff_x26;
        }
        plVar3 = *(long **)(*(long *)(lVar2 + 0xb8) + 8);
        if (plVar3 == (long *)0x0) {
LAB_02f49a84:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        unaff_x23 = (long *)(**(code **)(*plVar3 + 0x308))
                                      (plVar3,unaff_x19,*(undefined8 *)(*plVar3 + 0x310));
        if (unaff_x23 == (long *)0x0) {
          lVar2 = *unaff_x26;
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar2 = *unaff_x26;
          }
          plVar3 = (long *)**(long **)(lVar2 + 0xb8);
          if (plVar3 == (long *)0x0) goto LAB_02f49a84;
          unaff_x23 = (long *)(**(code **)(*plVar3 + 0x308))
                                        (plVar3,unaff_x19,*(undefined8 *)(*plVar3 + 0x310));
          if (unaff_x23 == (long *)0x0) goto LAB_02f49770;
        }
        if (*unaff_x23 != *unaff_x27) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(unaff_x23);
        }
LAB_02f49768:
        if (unaff_x23 != (long *)0x0) {
          return unaff_x23;
        }
      } while( true );
    }
  }
  else {
    lVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d23ef8);
    FUN_02f2b9ac(lVar2,unaff_x19,0);
    unaff_x23 = (long *)thunk_FUN_01a89e68(*unaff_x27);
    FUN_02f2b9dc(unaff_x23,0);
    unaff_x23[5] = lVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x23 + 5,lVar2);
    lVar2 = *unaff_x26;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar2 = *unaff_x26;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    in_stack_00000008._4_1_ = '\0';
    FUN_027e0bd8(uVar5,(long)&stack0x00000008 + 4,0);
    lVar2 = *unaff_x26;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar2 = *unaff_x26;
    }
    plVar3 = *(long **)(*(long *)(lVar2 + 0xb8) + 8);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*plVar3 + 0x318))(plVar3,uVar6,unaff_x23,*(undefined8 *)(*plVar3 + 800));
    if (in_stack_00000008._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
    }
  }
  return unaff_x23;
LAB_02f49770:
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  unaff_x21 = FUN_02f4eb88(unaff_x19);
  uVar6 = *unaff_x28;
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*unaff_x29);
  }
  uVar6 = FUN_0277b678(uVar6,0);
  uVar4 = FUN_02786d28(unaff_x19,uVar6,0);
  if ((uVar4 & 1) != 0) goto LAB_02f497e8;
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar4 = FUN_02786d28(unaff_x21,0,0);
  if ((uVar4 & 1) != 0) goto LAB_02f497e8;
  unaff_x23 = (long *)0x0;
  uVar6 = unaff_x19;
  goto LAB_02f49988;
LAB_02f497e8:
  lVar2 = *unaff_x26;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *unaff_x26;
  }
  param_1 = **(undefined8 **)(lVar2 + 0xb8);
  in_stack_00000008._4_1_ = '\0';
  FUN_027e0bd8(param_1,(long)&stack0x00000008 + 4,0);
  lVar2 = *unaff_x26;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *unaff_x26;
  }
  plVar3 = (long *)**(long **)(lVar2 + 0xb8);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  unaff_x23 = (long *)(**(code **)(*plVar3 + 0x308))
                                (plVar3,unaff_x19,*(undefined8 *)(*plVar3 + 0x310));
  if (unaff_x23 == (long *)0x0) {
    lVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d23cb8);
    FUN_02f2b9dc(lVar2,0);
    unaff_x23 = (long *)thunk_FUN_01a89e68(*unaff_x27);
    FUN_02f2b9dc(unaff_x23,0);
    unaff_x23[5] = lVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x23 + 5,lVar2);
    lVar2 = *unaff_x26;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar2 = *unaff_x26;
    }
    plVar3 = (long *)**(long **)(lVar2 + 0xb8);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*plVar3 + 0x318))(plVar3,unaff_x19,unaff_x23,*(undefined8 *)(*plVar3 + 800));
  }
  else if (*unaff_x23 != *unaff_x27) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0(unaff_x23);
  }
  unaff_w20 = 0;
  unaff_x25 = 0;
  if (in_stack_00000008._4_1_ != '\0') goto code_r0x02f49910;
  goto LAB_02f49918;
}


