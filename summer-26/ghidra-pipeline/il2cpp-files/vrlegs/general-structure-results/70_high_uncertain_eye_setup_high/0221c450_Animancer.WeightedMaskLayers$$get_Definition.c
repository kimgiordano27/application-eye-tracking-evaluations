/*
FUNCTION_NAME: Animancer.WeightedMaskLayers$$get_Definition
ENTRY_POINT: 0221c450
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0221c598) */
/* WARNING: Removing unreachable block (ram,0x0221c304) */
/* WARNING: Removing unreachable block (ram,0x0221c55c) */

void Animancer_WeightedMaskLayers__get_Definition(undefined8 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x20;
  long *unaff_x22;
  long lVar11;
  undefined8 in_stack_00000000;
  
  if (param_2 == 1) {
    plVar7 = (long *)__cxa_begin_catch(param_1);
    lVar11 = *plVar7;
    __cxa_end_catch();
    if (unaff_x22 != (long *)0x0) {
      lVar8 = *unaff_x22;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03cbed08) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0221c290;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_01a472ec();
LAB_0221c290:
      (*(code *)*puVar3)();
    }
    if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(lVar11);
    }
    iVar1 = *(int *)(unaff_x20 + 0x134);
    *(int *)(unaff_x20 + 0x134) = iVar1 + 1;
    if (iVar1 == 0) {
      plVar7 = *(long **)(unaff_x20 + 0x78);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar11 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03cdbdb0) {
            puVar3 = (undefined8 *)(lVar11 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_0221c31c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03cdbdb0,2);
LAB_0221c31c:
      (*(code *)*puVar3)(plVar7,puVar3[1]);
    }
    lVar11 = 0;
    bVar2 = true;
  }
  else {
    if (unaff_x22 != (long *)0x0) {
      lVar11 = *unaff_x22;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03cbed08) {
            puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x0221c524;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_01a472ec();
code_r0x0221c524:
      (*(code *)*puVar3)();
    }
    if (param_2 != 1) {
      if (in_stack_00000000._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b3fef0(param_1);
    }
    plVar7 = (long *)__cxa_begin_catch(param_1);
    lVar11 = *plVar7;
    __cxa_end_catch();
    bVar2 = false;
  }
  if (in_stack_00000000._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar11 == 0) {
    if (bVar2) {
      return;
    }
    uVar4 = FUN_029e5e84();
    lVar11 = *(long *)(unaff_x20 + 0x78);
    uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cdbdb8);
    if (lVar11 == 0) {
      uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cbfd80);
    }
    else {
      if ((*(long *)(unaff_x20 + 0x78) == 0) ||
         (plVar7 = (long *)thunk_FUN_01a5dd74(*(long *)(unaff_x20 + 0x78),0), plVar7 == (long *)0x0)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar6 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    }
    uVar4 = FUN_025bdc88(uVar4,uVar5,uVar6,0);
    thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
    uVar5 = thunk_FUN_01a89e68();
    FUN_027a794c(uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01a28d1c(lVar11);
}


