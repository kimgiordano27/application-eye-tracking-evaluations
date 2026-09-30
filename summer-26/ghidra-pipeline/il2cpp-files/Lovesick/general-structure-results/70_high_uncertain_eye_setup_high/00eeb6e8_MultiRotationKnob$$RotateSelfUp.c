/*
FUNCTION_NAME: MultiRotationKnob$$RotateSelfUp
ENTRY_POINT: 00eeb6e8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void MultiRotationKnob__RotateSelfUp(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar5;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  uint unaff_w29;
  undefined8 in_stack_00000018;
  
  do {
    DAT_03774e19 = '\x01';
    do {
      lVar3 = *unaff_x21;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *unaff_x21;
      }
                    /* try { // try from 00eeb70c to 00feb7cf has its CatchHandler @ 00eeb8cc */
      if (**(long **)(lVar3 + 0xb8) == 0) {
LAB_00eec06c:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar5 = *(undefined8 *)(**(long **)(lVar3 + 0xb8) + 0x138);
      uVar4 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (unaff_x23,0);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
      }
      lVar3 = FUN_0112fe80(uVar5,uVar4,*(undefined8 *)StringLiteral_7102);
      if (lVar3 == 0) goto LAB_00eec06c;
      FUN_010c2c5c(lVar3,&stack0x00000028,*unaff_x27);
      in_stack_00000018 = FUN_026eabc8(lVar3,0);
      FUN_026eb484(&stack0x00000018,unaff_x24,0);
      if (*(long *)(unaff_x20 + 0x30) == 0) goto LAB_00eec06c;
      FUN_00ac5cb0(*(long *)(unaff_x20 + 0x30),lVar3,*unaff_x28);
      FUN_026ea898(lVar3,0);
      FUN_0268c0c8(unaff_x23,0);
      unaff_w29 = unaff_w29 + 1;
      if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)unaff_w29) {
        FUN_00ee8614();
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_12098);
        if (lVar3 != 0) {
          FUN_0268a094(0x3f400000,lVar3,0);
          *(long *)(unaff_x20 + 0x18) = lVar3;
          *(undefined4 *)(unaff_x20 + 0x10) = 1;
                    /* catch() { ... } // from try @ 00eeb70c with catch @ 00eeb8cc */
                    /* catch() { ... } // from try @ 00eeb64c with catch @ 00eeb8d0 */
                    /* catch() { ... } // from try @ 00eeb5c0 with catch @ 00eeb8d4
                       catch() { ... } // from try @ 00eeb6b4 with catch @ 00eeb8d4 */
          return;
        }
        goto LAB_00eec06c;
      }
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_w29) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar3 = *(long *)(unaff_x22 + (long)(int)unaff_w29 * 8 + 0x20);
      unaff_x23 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3868);
      if (unaff_x23 == 0) goto LAB_00eec06c;
      FUN_0268b098(unaff_x23,0);
      lVar1 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (unaff_x23,0);
      if ((*(long *)(unaff_x20 + 0x28) == 0) ||
         (uVar4 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (*(long *)(unaff_x20 + 0x28),0), lVar1 == 0)) goto LAB_00eec06c;
      FUN_0269fea8(lVar1,uVar4,0);
      lVar1 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (unaff_x23,0);
      if ((lVar3 == 0) ||
         ((lVar2 = FUN_0268fd10(lVar3,0), lVar2 == 0 || (FUN_0269f578(lVar2,0), lVar1 == 0))))
      goto LAB_00eec06c;
      FUN_0269f618(lVar1,0);
      lVar1 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (unaff_x23,0);
      lVar2 = FUN_0268fd10(lVar3,0);
      if ((lVar2 == 0) || (FUN_026a125c(lVar2,0), lVar1 == 0)) goto LAB_00eec06c;
      FUN_0269fd98(lVar1,0);
      lVar1 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (unaff_x23,0);
      lVar2 = FUN_0268fd10(lVar3,0);
      if ((lVar2 == 0) || (FUN_0269f810(lVar2,0), lVar1 == 0)) goto LAB_00eec06c;
      FUN_0269f894(lVar1,0);
      lVar1 = FUN_010e5800(unaff_x23,*(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo);
      uVar4 = FUN_026774f4(lVar3,0);
      if (lVar1 == 0) goto LAB_00eec06c;
      FUN_02677530(lVar1,uVar4,0);
      unaff_x24 = FUN_010e5800(unaff_x23,*(undefined8 *)UnityEngine_Pose___TypeInfo);
      if (unaff_x24 == 0) goto LAB_00eec06c;
      FUN_0266622c(unaff_x24,0,0);
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
    } while (DAT_03774e19 != '\0');
    thunk_FUN_00d48444();
  } while( true );
}


