/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.OverlayCanvas$$set_Panel
ENTRY_POINT: 01454158
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x014542e8) */
/* WARNING: Removing unreachable block (ram,0x014542f0) */
/* WARNING: Removing unreachable block (ram,0x014542f8) */
/* WARNING: Removing unreachable block (ram,0x01454300) */
/* WARNING: Removing unreachable block (ram,0x01454348) */
/* WARNING: Removing unreachable block (ram,0x01454350) */
/* WARNING: Removing unreachable block (ram,0x01454360) */
/* WARNING: Removing unreachable block (ram,0x0145436c) */
/* WARNING: Removing unreachable block (ram,0x0145437c) */
/* WARNING: Removing unreachable block (ram,0x01454388) */
/* WARNING: Removing unreachable block (ram,0x01454398) */
/* WARNING: Removing unreachable block (ram,0x014543a4) */

long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_OverlayCanvas__set_Panel(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int in_w8;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *puVar6;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0x5d0);
  if (in_w8 == 0) {
    thunk_FUN_00d32864();
  }
  FUN_02660dac(*puVar6,0);
  plVar2 = (long *)FUN_00da4fb8(*unaff_x21,1);
  lVar3 = FUN_00da4fb8(*unaff_x19,1);
  if (unaff_x20 != 0) {
    in_stack_00000018 = 0;
    FUN_01435968(&stack0x00000018,*(undefined4 *)(unaff_x20 + 0x18),0);
    puVar1 = Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__;
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) != 0) {
        *(undefined8 *)(lVar3 + 0x20) = in_stack_00000018;
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if ((lVar4 == 0) || (FUN_01435978(lVar4,lVar3,0), plVar2 == (long *)0x0)) goto LAB_014543b4;
        lVar3 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar2 + 0x40));
        puVar1 = Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__;
        if (lVar3 == 0) {
          uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar5,0);
        }
        if ((int)plVar2[3] != 0) {
          plVar2[4] = lVar4;
          uVar5 = FUN_00da4fb8(*(undefined8 *)puVar1,1);
          *(undefined8 *)(lVar4 + 0x20) = uVar5;
          if ((int)plVar2[3] != 0) {
            lVar3 = plVar2[4];
            uVar5 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__
                                 ,1);
            if (lVar3 != 0) {
              *(undefined8 *)(lVar3 + 0x30) = uVar5;
              if ((int)plVar2[3] == 0) goto LAB_014543b8;
              if (plVar2[4] != 0) {
                lVar3 = *(long *)(plVar2[4] + 0x20);
                FUN_0268834c(0,0,0x3f800000,0x3f800000);
                if (lVar3 != 0) {
                  if (*(int *)(lVar3 + 0x18) == 0) goto LAB_014543b8;
                  *(undefined8 *)(lVar3 + 0x28) = 0;
                  *(undefined8 *)(lVar3 + 0x20) = 0;
                  if (((*(long *)(unaff_x20 + 0x58) != 0) &&
                      (FUN_0132138c(*(long *)(unaff_x20 + 0x58),0,&stack0x00000028,
                                    *(undefined8 *)PTR_DAT_033ee2d8), in_stack_00000028 != 0)) &&
                     (*(long *)(in_stack_00000028 + 0x10) != 0)) {
                    if (*(long *)(*(long *)(in_stack_00000028 + 0x10) + 0x18) == 0) {
                      if ((int)plVar2[3] == 0) goto LAB_014543b8;
                      lVar3 = plVar2[4];
                      if (lVar3 != 0) {
                        *(undefined8 *)(lVar3 + 0x10) = 0x1000000010;
                        *(undefined4 *)(lVar3 + 0x18) = 0x10;
                        *(undefined4 *)(lVar3 + 0x1c) = 0x10;
                        return plVar2;
                      }
                    }
                    else if (*(long *)(unaff_x20 + 0x58) != 0) {
                      FUN_0132138c(*(long *)(unaff_x20 + 0x58),0);
                    }
                  }
                }
              }
            }
            goto LAB_014543b4;
          }
        }
      }
LAB_014543b8:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
  }
LAB_014543b4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


