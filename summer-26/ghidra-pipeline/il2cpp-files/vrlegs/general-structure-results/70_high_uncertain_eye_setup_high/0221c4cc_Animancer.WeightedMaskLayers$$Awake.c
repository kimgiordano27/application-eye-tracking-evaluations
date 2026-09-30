/*
FUNCTION_NAME: Animancer.WeightedMaskLayers$$Awake
ENTRY_POINT: 0221c4cc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0221c34c) */
/* WARNING: Removing unreachable block (ram,0x0221c598) */

void Animancer_WeightedMaskLayers__Awake(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  int unaff_w24;
  undefined8 in_stack_00000000;
  
  if (unaff_x22 != (long *)0x0) {
    lVar6 = *unaff_x22;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto code_r0x0221c524;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01a472ec();
code_r0x0221c524:
    (*(code *)*puVar4)();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c();
  }
  if (unaff_w24 != 1) {
    if (in_stack_00000000._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0();
  }
  plVar5 = (long *)__cxa_begin_catch();
  lVar6 = *plVar5;
  __cxa_end_catch();
  if (in_stack_00000000._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar6);
  }
  uVar1 = FUN_029e5e84();
  lVar6 = *(long *)(unaff_x20 + 0x78);
  uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cdbdb8);
  if (lVar6 == 0) {
    uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cbfd80);
  }
  else {
    if ((*(long *)(unaff_x20 + 0x78) == 0) ||
       (plVar5 = (long *)thunk_FUN_01a5dd74(*(long *)(unaff_x20 + 0x78),0), plVar5 == (long *)0x0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar3 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
  }
  uVar1 = FUN_025bdc88(uVar1,uVar2,uVar3,0);
  thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
  uVar2 = thunk_FUN_01a89e68();
  FUN_027a794c(uVar2,uVar1,0);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar2);
}


