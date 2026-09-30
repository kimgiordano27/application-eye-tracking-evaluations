/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime
ENTRY_POINT: 01a40de8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  long *unaff_x21;
  float fVar9;
  float fVar10;
  
  lVar2 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                    ();
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (lVar2 != 0) {
    uVar3 = FUN_0269fe30(lVar2,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar4 = FUN_02681b9c(uVar3,0,0);
    if ((uVar4 & 1) == 0) {
      fVar9 = 1.0;
    }
    else {
      if (((*(long *)(unaff_x19 + 0x28) == 0) ||
          (lVar2 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                             (*(long *)(unaff_x19 + 0x28),0), lVar2 == 0)) ||
         (lVar2 = FUN_0269fe30(lVar2,0), lVar2 == 0)) goto LAB_01a40f60;
      fVar9 = (float)FUN_026a125c(lVar2,0);
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      lVar2 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (*(long *)(unaff_x19 + 0x28),0);
      plVar8 = *(long **)(unaff_x19 + 0x20);
      if (plVar8 != (long *)0x0) {
        lVar6 = *plVar8;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x21) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_01a40ef4;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724(plVar8,*unaff_x21,1);
LAB_01a40ef4:
        fVar10 = (float)(*(code *)*puVar5)(plVar8,puVar5[1]);
        if (DAT_03774e1c == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774e1c = '\x01';
        }
        if (lVar2 != 0) {
          fVar10 = fVar10 / fVar9;
          lVar6 = *(long *)(*(long *)
                             Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                           + 0xb8);
          FUN_0269fd98(fVar10 * *(float *)(lVar6 + 0xc),fVar10 * *(float *)(lVar6 + 0x10),
                       fVar10 * *(float *)(lVar6 + 0x14),lVar2,0);
          return;
        }
      }
    }
  }
LAB_01a40f60:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


