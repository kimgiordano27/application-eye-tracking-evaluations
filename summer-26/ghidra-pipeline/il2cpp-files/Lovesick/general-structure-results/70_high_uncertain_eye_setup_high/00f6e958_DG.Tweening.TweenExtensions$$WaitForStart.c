/*
FUNCTION_NAME: DG.Tweening.TweenExtensions$$WaitForStart
ENTRY_POINT: 00f6e958
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_13;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void DG_Tweening_TweenExtensions__WaitForStart(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  ulong uVar7;
  long in_stack_00000000;
  long in_stack_00000008;
  
  FUN_0269f750();
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    lVar1 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                      (*(long *)(unaff_x20 + 0x60),0);
    if (DAT_03774f00 == '\0') {
      thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__);
      DAT_03774f00 = '\x01';
    }
    if (lVar1 != 0) {
      puVar4 = *(undefined4 **)
                (*(long *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                + 0xb8);
      FUN_0269f994(*puVar4,puVar4[1],puVar4[2],puVar4[3],lVar1,0);
      if (*(long *)(unaff_x20 + 0x60) != 0) {
        lVar1 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                          (*(long *)(unaff_x20 + 0x60),0);
        if (DAT_03774e1c == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774e1c = '\x01';
        }
        if (lVar1 != 0) {
          lVar5 = *(long *)(*unaff_x22 + 0xb8);
          FUN_0269fd98(*(float *)(lVar5 + 0xc) * DAT_028aa8e8,
                       *(float *)(lVar5 + 0x10) * DAT_028aa8e8,
                       *(float *)(lVar5 + 0x14) * DAT_028aa8e8,lVar1,0);
          if (*(long *)(unaff_x20 + 0x60) != 0) {
            lVar1 = FUN_010e5800(*(long *)(unaff_x20 + 0x60),
                                 *(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo);
            FUN_010c2c5c();
            if ((in_stack_00000008 != 0) && (uVar2 = FUN_02665318(in_stack_00000008,0), lVar1 != 0))
            {
              FUN_02666150(lVar1,uVar2,0);
              if (*(long *)(unaff_x20 + 0x60) != 0) {
                lVar1 = FUN_010e5800(*(long *)(unaff_x20 + 0x60),
                                     *(undefined8 *)UnityEngine_Pose___TypeInfo);
                if (((in_stack_00000000 != 0) &&
                    (lVar5 = FUN_026688d4(in_stack_00000000,0), lVar5 != 0)) &&
                   (lVar5 = FUN_00da4fb8(*(undefined8 *)PTR_DAT_033f55b0,
                                         *(undefined4 *)(lVar5 + 0x18)), lVar5 != 0)) {
                  if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
                    uVar7 = 0;
                    uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
                    do {
                      if (unaff_x19 != 0) {
                        lVar3 = thunk_FUN_00d6225c();
                        if (lVar3 == 0) {
                          uVar2 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                          FUN_00da5038(uVar2,0);
                        }
                        uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
                      }
                      if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      *(long *)(lVar5 + 0x20 + uVar7 * 8) = unaff_x19;
                      uVar7 = uVar7 + 1;
                    } while ((long)uVar7 < (long)(int)uVar6);
                  }
                  if (lVar1 != 0) {
                    FUN_02668910(lVar1,lVar5,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


