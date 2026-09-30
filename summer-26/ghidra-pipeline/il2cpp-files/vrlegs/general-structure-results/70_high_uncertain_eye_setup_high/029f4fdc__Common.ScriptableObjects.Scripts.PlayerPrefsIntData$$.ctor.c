/*
FUNCTION_NAME: _Common.ScriptableObjects.Scripts.PlayerPrefsIntData$$.ctor
ENTRY_POINT: 029f4fdc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void _Common_ScriptableObjects_Scripts_PlayerPrefsIntData___ctor(void)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  undefined8 unaff_x20;
  undefined8 uVar8;
  long lVar9;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000038;
  
  plVar3 = (long *)__cxa_begin_catch();
  lVar7 = *plVar3;
  __cxa_end_catch();
  iVar1 = 0;
  lVar9 = 0;
  while( true ) {
    if (in_stack_00000020._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(unaff_x20,0);
    }
    if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(lVar7);
    }
    if ((iVar1 != 6) && (iVar1 != 0)) break;
    if (lVar9 == 0) {
      if (*(char *)(in_stack_00000028 + 0x60) != '\0') break;
      plVar3 = *(long **)(in_stack_00000028 + 0x30);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
    }
    else {
      iVar1 = FUN_029f5270(*(undefined8 *)(in_stack_00000028 + 0x58),lVar9,
                           *(undefined4 *)(lVar9 + 0x18));
      if (*(long *)(in_stack_00000028 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_021c7fbc(*(long *)(in_stack_00000028 + 0x38),lVar9,*unaff_x25);
      if (*(int *)(in_stack_00000028 + 0x88) != iVar1) {
        *(int *)(in_stack_00000028 + 0x88) = iVar1;
        plVar6 = *(long **)(in_stack_00000028 + 0x78);
        plVar3 = (long *)FUN_01ab6a94(*unaff_x26,1);
        in_stack_00000008._4_4_ = iVar1;
        lVar9 = thunk_FUN_01a89a98(*unaff_x27,(long)&stack0x00000008 + 4);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if ((lVar9 != 0) &&
           (lVar7 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar3 + 0x40)), lVar7 == 0)) {
          uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar8,0);
        }
        if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        plVar3[4] = lVar9;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3 + 4,lVar9);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar9 = *plVar6;
        uVar8 = *unaff_x28;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x23) {
              puVar2 = (undefined8 *)(lVar9 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_029f4f9c;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_01a472ec(plVar6,*unaff_x23,0);
LAB_029f4f9c:
        (*(code *)*puVar2)(plVar6,uVar8,plVar3,puVar2[1]);
      }
    }
    unaff_x20 = *(undefined8 *)(in_stack_00000028 + 0x28);
    in_stack_00000020._4_1_ = '\0';
    FUN_027e0bd8(unaff_x20,(long)&stack0x00000020 + 4,0);
    lVar9 = *(long *)(in_stack_00000028 + 0x28);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar9 + 0x20) < 1) {
      lVar9 = 0;
    }
    else {
      FUN_022661a4(lVar9,&stack0x00000038,*unaff_x24);
      lVar9 = in_stack_00000038;
    }
    lVar7 = 0;
    iVar1 = 6;
  }
  FUN_019b3b28(&stack0x00000010);
  return;
}


