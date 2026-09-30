/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_EncodeMrcFrameWithPoseTime
ENTRY_POINT: 01a40c68
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameWithPoseTime(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  long *plVar10;
  float fVar11;
  float fVar12;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_10782);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0xc35) = 1;
  }
  puVar2 = StringLiteral_10782;
  plVar10 = *(long **)(param_2 + 0x20);
  if (plVar10 == (long *)0x0) goto LAB_01a40f60;
  lVar5 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_10782) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_01a40cfc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_00d59724(plVar10,*(long *)StringLiteral_10782,2);
LAB_01a40cfc:
  uVar8 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  if (((uVar8 & 1) != 0) && (*(char *)(param_2 + 0x30) == '\0')) {
    plVar10 = *(long **)(param_2 + 0x20);
    if (plVar10 == (long *)0x0) goto LAB_01a40f60;
    lVar6 = *plVar10;
    lVar5 = *(long *)puVar2;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 4) * 0x10 + 0x138);
          goto LAB_01a40d6c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724(plVar10,lVar5,4);
LAB_01a40d6c:
    uVar8 = (*(code *)*puVar3)(plVar10);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_2 + 0x28) != 0) {
        FUN_0268ace8(*(long *)(param_2 + 0x28),1,0);
        if ((*(long *)(param_2 + 0x28) != 0) &&
           (lVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                              (*(long *)(param_2 + 0x28),0), lVar5 != 0)) {
          FUN_0269f618(0,0,0,lVar5,0);
          if ((*(long *)(param_2 + 0x28) != 0) &&
             (lVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                (*(long *)(param_2 + 0x28),0), lVar5 != 0)) {
            FUN_0269f894(0,0,0,0,lVar5,0);
            if ((*(long *)(param_2 + 0x28) != 0) &&
               (lVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                  (*(long *)(param_2 + 0x28),0),
               puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo,
               lVar5 != 0)) {
              uVar4 = FUN_0269fe30(lVar5,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar1);
              }
              uVar8 = FUN_02681b9c(uVar4,0,0);
              if ((uVar8 & 1) == 0) {
                fVar11 = 1.0;
              }
              else {
                if (((*(long *)(param_2 + 0x28) == 0) ||
                    (lVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                       (*(long *)(param_2 + 0x28),0), lVar5 == 0)) ||
                   (lVar5 = FUN_0269fe30(lVar5,0), lVar5 == 0)) goto LAB_01a40f60;
                fVar11 = (float)FUN_026a125c(lVar5,0);
              }
              if (*(long *)(param_2 + 0x28) != 0) {
                lVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                  (*(long *)(param_2 + 0x28),0);
                plVar10 = *(long **)(param_2 + 0x20);
                if (plVar10 != (long *)0x0) {
                  lVar7 = *plVar10;
                  lVar6 = *(long *)puVar2;
                  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
                  if (uVar8 != 0) {
                    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == lVar6) {
                        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                        goto LAB_01a40ef4;
                      }
                      uVar8 = uVar8 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar3 = (undefined8 *)FUN_00d59724(plVar10,lVar6,1);
LAB_01a40ef4:
                  fVar12 = (float)(*(code *)*puVar3)(plVar10,puVar3[1]);
                  if (DAT_03774e1c == '\0') {
                    thunk_FUN_00d48444(
                                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                      );
                    DAT_03774e1c = '\x01';
                  }
                  if (lVar5 != 0) {
                    fVar12 = fVar12 / fVar11;
                    lVar6 = *(long *)(*(long *)
                                       Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                     + 0xb8);
                    FUN_0269fd98(fVar12 * *(float *)(lVar6 + 0xc),fVar12 * *(float *)(lVar6 + 0x10),
                                 fVar12 * *(float *)(lVar6 + 0x14),lVar5,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_01a40f60;
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    FUN_0268ace8(*(long *)(param_2 + 0x28),0,0);
    return;
  }
LAB_01a40f60:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


