/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$OnTransparencyChanged
ENTRY_POINT: 076e108c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__OnTransparencyChanged
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  ulong unaff_x25;
  undefined8 uVar8;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  do {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(param_1 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    uVar8 = *(undefined8 *)(param_1 + unaff_x25 * 8 + 0x20);
    uVar2 = FUN_076e19f4(param_2,uVar8,&stack0x00000008);
    lVar7 = in_stack_00000008;
    if ((uVar2 & 1) == 0) {
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar8 = FUN_076e0214(uVar8);
      unaff_x24 = FUN_078b56f4(*unaff_x22,param_2,*unaff_x21,uVar8,0);
      bVar1 = false;
    }
    else {
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if ((in_stack_00000008 != 0) &&
         (lVar3 = thunk_FUN_04485110(in_stack_00000008,*(undefined8 *)(*unaff_x19 + 0x40)),
         lVar3 == 0)) {
        uVar8 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar8,0);
      }
      if (*(uint *)(unaff_x19 + 3) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      unaff_x19[unaff_x25 + 4] = lVar7;
      thunk_FUN_044bb4b4(unaff_x19 + unaff_x25 + 4,lVar7);
      bVar1 = true;
    }
    lVar7 = *(long *)(unaff_x23 + 0x18);
    unaff_x25 = unaff_x20;
    if (lVar7 == 0) {
LAB_076e172c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    while ((!bVar1 || ((long)*(int *)(lVar7 + 0x18) <= (long)unaff_x25))) {
      if (!bVar1) {
        unaff_x23 = 0;
      }
      in_stack_00000000._4_4_ = in_stack_00000000._4_4_ + 1;
      lVar7 = *unaff_x28;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar7 = *unaff_x28;
      }
      lVar3 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_076e172c;
      if (*(int *)(lVar3 + 0x18) <= in_stack_00000000._4_4_) {
        if (unaff_x23 == 0) {
          uVar2 = FUN_078b4450(unaff_x24,0);
          uVar8 = *(undefined8 *)PTR_DAT_09f2f138;
          if ((uVar2 & 1) == 0) {
            uVar8 = unaff_x24;
          }
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
          }
          FUN_094c33b0(uVar8,0);
          return;
        }
LAB_076e1300:
        if (*(long *)(unaff_x23 + 0x10) != 0) {
          plVar4 = (long *)FUN_0796aedc(*(long *)(unaff_x23 + 0x10),
                                        *(undefined8 *)(unaff_x23 + 0x20));
          plVar6 = *(long **)(unaff_x23 + 0x10);
          if (plVar6 != (long *)0x0) {
            uVar8 = (**(code **)(*plVar6 + 0x3d8))(plVar6,*(undefined8 *)(*plVar6 + 0x3e0));
            lVar7 = *(long *)(PTR_DAT_09f1e5b8 + 0x20);
            if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            uVar5 = FUN_07a4ce38(lVar7 + 0x20,0);
            uVar2 = FUN_07a56f5c(uVar8,uVar5,0);
            if ((uVar2 & 1) != 0) {
              if ((plVar4 == (long *)0x0) ||
                 (uVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,0,*(undefined8 *)(*plVar4 + 0x140)),
                 (uVar2 & 1) != 0)) {
                if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                }
                uVar8 = *(undefined8 *)PTR_DAT_09f2f168;
              }
              else {
                uVar8 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
                uVar8 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f2f160,uVar8,0);
                if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                  thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                }
              }
              FUN_094c652c(uVar8,0);
            }
            return;
          }
        }
        goto LAB_076e172c;
      }
      if (unaff_x23 != 0) goto LAB_076e1300;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar3 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
        if (lVar3 == 0) goto LAB_076e172c;
      }
      unaff_x23 = FUN_05badb74(lVar3,in_stack_00000000._4_4_,*(undefined8 *)PTR_DAT_09f2ef68);
      if ((unaff_x23 == 0) || (lVar7 = *(long *)(unaff_x23 + 0x18), lVar7 == 0)) goto LAB_076e172c;
      bVar1 = true;
      unaff_x25 = 0;
    }
    lVar7 = *unaff_x28;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar7 = *unaff_x28;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    unaff_x20 = unaff_x25 + 1;
    param_2 = FUN_05badb74(lVar7,unaff_x20 & 0xffffffff,*unaff_x29);
    param_1 = *(long *)(unaff_x23 + 0x18);
  } while( true );
}


