/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_EncodeMrcFrame
ENTRY_POINT: 01a40d2c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_EncodeMrcFrame(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long in_x9;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  long *unaff_x21;
  float fVar9;
  float fVar10;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar7 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(*piVar7 + 4) * 0x10 + 0x138);
      goto LAB_01a40d6c;
    }
    in_x9 = in_x9 + -1;
    piVar7 = piVar7 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_00d59724();
LAB_01a40d6c:
  uVar3 = (*(code *)*puVar2)();
  if ((uVar3 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_0268ace8(*(long *)(unaff_x19 + 0x28),0,0);
      return;
    }
  }
  else if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_0268ace8(*(long *)(unaff_x19 + 0x28),1,0);
    if ((*(long *)(unaff_x19 + 0x28) != 0) &&
       (lVar4 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                          (*(long *)(unaff_x19 + 0x28),0), lVar4 != 0)) {
      FUN_0269f618(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar4,0);
      if ((*(long *)(unaff_x19 + 0x28) != 0) &&
         (lVar4 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (*(long *)(unaff_x19 + 0x28),0), lVar4 != 0)) {
        FUN_0269f894(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                     in_stack_00000018,lVar4,0);
        if ((*(long *)(unaff_x19 + 0x28) != 0) &&
           (lVar4 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                              (*(long *)(unaff_x19 + 0x28),0),
           puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo,
           lVar4 != 0)) {
          uVar5 = FUN_0269fe30(lVar4,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar1);
          }
          uVar3 = FUN_02681b9c(uVar5,0,0);
          if ((uVar3 & 1) == 0) {
            fVar9 = 1.0;
          }
          else {
            if (((*(long *)(unaff_x19 + 0x28) == 0) ||
                (lVar4 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                   (*(long *)(unaff_x19 + 0x28),0), lVar4 == 0)) ||
               (lVar4 = FUN_0269fe30(lVar4,0), lVar4 == 0)) goto LAB_01a40f60;
            fVar9 = (float)FUN_026a125c(lVar4,0);
          }
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            lVar4 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                              (*(long *)(unaff_x19 + 0x28),0);
            plVar8 = *(long **)(unaff_x19 + 0x20);
            if (plVar8 != (long *)0x0) {
              lVar6 = *plVar8;
              uVar3 = (ulong)*(ushort *)(lVar6 + 0x12a);
              if (uVar3 != 0) {
                piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *unaff_x21) {
                    puVar2 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                    goto LAB_01a40ef4;
                  }
                  uVar3 = uVar3 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined8 *)FUN_00d59724(plVar8,*unaff_x21,1);
LAB_01a40ef4:
              fVar10 = (float)(*(code *)*puVar2)(plVar8,puVar2[1]);
              if (DAT_03774e1c == '\0') {
                thunk_FUN_00d48444(
                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                  );
                DAT_03774e1c = '\x01';
              }
              if (lVar4 != 0) {
                fVar10 = fVar10 / fVar9;
                lVar6 = *(long *)(*(long *)
                                   Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                 + 0xb8);
                FUN_0269fd98(fVar10 * *(float *)(lVar6 + 0xc),fVar10 * *(float *)(lVar6 + 0x10),
                             fVar10 * *(float *)(lVar6 + 0x14),lVar4,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_01a40f60:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


