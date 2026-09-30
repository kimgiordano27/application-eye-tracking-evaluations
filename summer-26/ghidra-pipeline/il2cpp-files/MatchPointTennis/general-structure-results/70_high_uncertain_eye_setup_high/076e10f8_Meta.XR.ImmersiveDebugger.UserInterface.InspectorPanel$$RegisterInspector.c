/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$RegisterInspector
ENTRY_POINT: 076e10f8
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


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__RegisterInspector(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  ulong uVar7;
  undefined8 uVar8;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  do {
    lVar6 = *(long *)(unaff_x23 + 0x18);
    uVar7 = unaff_x20;
    if (lVar6 == 0) {
LAB_076e172c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    while (((param_1 & 1) == 0 || ((long)*(int *)(lVar6 + 0x18) <= (long)uVar7))) {
      if ((param_1 & 1) == 0) {
        unaff_x23 = 0;
      }
      in_stack_00000000._4_4_ = in_stack_00000000._4_4_ + 1;
      lVar6 = *unaff_x28;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar6 = *unaff_x28;
      }
      lVar3 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_076e172c;
      if (*(int *)(lVar3 + 0x18) <= in_stack_00000000._4_4_) {
        if (unaff_x23 == 0) {
          uVar7 = FUN_078b4450(unaff_x24,0);
          uVar1 = *(undefined8 *)PTR_DAT_09f2f138;
          if ((uVar7 & 1) == 0) {
            uVar1 = unaff_x24;
          }
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
          }
          FUN_094c33b0(uVar1,0);
          return;
        }
LAB_076e1300:
        if (*(long *)(unaff_x23 + 0x10) != 0) {
          plVar4 = (long *)FUN_0796aedc(*(long *)(unaff_x23 + 0x10),
                                        *(undefined8 *)(unaff_x23 + 0x20));
          plVar5 = *(long **)(unaff_x23 + 0x10);
          if (plVar5 != (long *)0x0) {
            uVar1 = (**(code **)(*plVar5 + 0x3d8))(plVar5,*(undefined8 *)(*plVar5 + 0x3e0));
            lVar6 = *(long *)(PTR_DAT_09f1e5b8 + 0x20);
            if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            uVar8 = FUN_07a4ce38(lVar6 + 0x20,0);
            uVar7 = FUN_07a56f5c(uVar1,uVar8,0);
            if ((uVar7 & 1) != 0) {
              if ((plVar4 == (long *)0x0) ||
                 (uVar7 = (**(code **)(*plVar4 + 0x138))(plVar4,0,*(undefined8 *)(*plVar4 + 0x140)),
                 (uVar7 & 1) != 0)) {
                if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                }
                uVar1 = *(undefined8 *)PTR_DAT_09f2f168;
              }
              else {
                uVar1 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
                uVar1 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f2f160,uVar1,0);
                if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                  thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                }
              }
              FUN_094c652c(uVar1,0);
            }
            return;
          }
        }
        goto LAB_076e172c;
      }
      if (unaff_x23 != 0) goto LAB_076e1300;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar3 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
        if (lVar3 == 0) goto LAB_076e172c;
      }
      unaff_x23 = FUN_05badb74(lVar3,in_stack_00000000._4_4_,*(undefined8 *)PTR_DAT_09f2ef68);
      if ((unaff_x23 == 0) || (lVar6 = *(long *)(unaff_x23 + 0x18), lVar6 == 0)) goto LAB_076e172c;
      param_1 = 1;
      uVar7 = 0;
    }
    lVar6 = *unaff_x28;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar6 = *unaff_x28;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    unaff_x20 = uVar7 + 1;
    uVar1 = FUN_05badb74(lVar6,unaff_x20 & 0xffffffff,*unaff_x29);
    lVar6 = *(long *)(unaff_x23 + 0x18);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    uVar8 = *(undefined8 *)(lVar6 + uVar7 * 8 + 0x20);
    uVar2 = FUN_076e19f4(uVar1,uVar8,&stack0x00000008);
    lVar6 = in_stack_00000008;
    if ((uVar2 & 1) == 0) {
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar8 = FUN_076e0214(uVar8);
      unaff_x24 = FUN_078b56f4(*unaff_x22,uVar1,*unaff_x21,uVar8,0);
      param_1 = 0;
    }
    else {
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if ((in_stack_00000008 != 0) &&
         (lVar3 = thunk_FUN_04485110(in_stack_00000008,*(undefined8 *)(*unaff_x19 + 0x40)),
         lVar3 == 0)) {
        uVar1 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar1,0);
      }
      if (*(uint *)(unaff_x19 + 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      unaff_x19[uVar7 + 4] = lVar6;
      thunk_FUN_044bb4b4(unaff_x19 + uVar7 + 4,lVar6);
      param_1 = 1;
    }
  } while( true );
}


