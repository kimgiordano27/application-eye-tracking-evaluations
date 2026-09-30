/*
FUNCTION_NAME: FUN_00f6e724
ENTRY_POINT: 00f6e724
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_00f6e724(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  long local_40;
  long local_38;
  
  if ((DAT_037757fd & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033eb4e0);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<StyleValue>_get_Count__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_93_0_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Pose___TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3868);
    thunk_FUN_00d48444(PTR_DAT_033f55b0);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_14026);
    DAT_037757fd = 1;
  }
  local_40 = 0;
  if (*(char *)(param_1 + 0x58) == '\0') {
    *(undefined1 *)(param_1 + 0x58) = 1;
    if (*(long *)(param_1 + 0x170) != 0) {
      FUN_013e0100(*(long *)(param_1 + 0x170),param_2,param_1,*(undefined8 *)StringLiteral_14026);
    }
    puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    lVar5 = *(long *)(param_1 + 0x1c8);
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))
                (*(undefined8 *)(lVar5 + 0x40),param_2,param_1,*(undefined8 *)(lVar5 + 0x28));
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar2 = FUN_02681b9c(param_3,0,0);
    if ((uVar2 & 1) == 0) {
      param_3 = *(long *)(param_1 + 0x28);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar2 = FUN_02681b9c(param_3,0,0);
    if ((uVar2 & 1) == 0) {
      if (param_2 == 0) goto LAB_00f6eb44;
      param_3 = *(long *)(param_2 + 0x1f8);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar2 = FUN_02681b9c(param_3,0,0);
    puVar1 = PTR_DAT_033eb4e0;
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_0268fd4c(param_1,0);
      uVar2 = FUN_010bd378(uVar3,&local_40,*(undefined8 *)puVar1);
      if ((uVar2 & 1) != 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3868);
        if (lVar5 != 0) {
          FUN_0268b098(lVar5,0);
          *(long *)(param_1 + 0x60) = lVar5;
          lVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (lVar5,0);
          uVar3 = FUN_0268fd10(param_1,0);
          if (lVar5 != 0) {
            FUN_0269fea8(lVar5,uVar3,0);
            if (*(long *)(param_1 + 0x60) != 0) {
              lVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                (*(long *)(param_1 + 0x60),0);
              if (DAT_03774d76 == '\0') {
                thunk_FUN_00d48444(
                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                  );
                DAT_03774d76 = '\x01';
              }
              puVar1 = 
              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
              if (lVar5 != 0) {
                puVar6 = *(undefined4 **)
                          (*(long *)
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          + 0xb8);
                FUN_0269f750(*puVar6,puVar6[1],puVar6[2],lVar5,0);
                if (*(long *)(param_1 + 0x60) != 0) {
                  lVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                    (*(long *)(param_1 + 0x60),0);
                  if (DAT_03774f00 == '\0') {
                    thunk_FUN_00d48444(
                                      Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                                      );
                    DAT_03774f00 = '\x01';
                  }
                  if (lVar5 != 0) {
                    puVar6 = *(undefined4 **)
                              (*(long *)
                                Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                              + 0xb8);
                    FUN_0269f994(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar5,0);
                    if (*(long *)(param_1 + 0x60) != 0) {
                      lVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                        (*(long *)(param_1 + 0x60),0);
                      if (DAT_03774e1c == '\0') {
                        thunk_FUN_00d48444(
                                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                          );
                        DAT_03774e1c = '\x01';
                      }
                      if (lVar5 != 0) {
                        lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
                        FUN_0269fd98(*(float *)(lVar7 + 0xc) * DAT_028aa8e8,
                                     *(float *)(lVar7 + 0x10) * DAT_028aa8e8,
                                     *(float *)(lVar7 + 0x14) * DAT_028aa8e8,lVar5,0);
                        puVar1 = Method_System_Collections_Generic_List<StyleValue>_get_Count__;
                        if (*(long *)(param_1 + 0x60) != 0) {
                          lVar5 = FUN_010e5800(*(long *)(param_1 + 0x60),
                                               *(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo);
                          FUN_010c2c5c(param_1,&local_38,*(undefined8 *)puVar1);
                          if ((local_38 != 0) && (uVar3 = FUN_02665318(local_38,0), lVar5 != 0)) {
                            FUN_02666150(lVar5,uVar3,0);
                            if ((*(long *)(param_1 + 0x60) != 0) &&
                               (((lVar5 = FUN_010e5800(*(long *)(param_1 + 0x60),
                                                       *(undefined8 *)UnityEngine_Pose___TypeInfo),
                                 local_40 != 0 && (lVar7 = FUN_026688d4(local_40,0), lVar7 != 0)) &&
                                (plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033f55b0,
                                                               *(undefined4 *)(lVar7 + 0x18)),
                                plVar4 != (long *)0x0)))) {
                              if (0 < (int)plVar4[3]) {
                                uVar2 = 0;
                                uVar8 = plVar4[3] & 0xffffffff;
                                do {
                                  if (param_3 != 0) {
                                    lVar7 = thunk_FUN_00d6225c(param_3,*(undefined8 *)
                                                                        (*plVar4 + 0x40));
                                    if (lVar7 == 0) {
                                      uVar3 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                      FUN_00da5038(uVar3,0);
                                    }
                                    uVar8 = (ulong)*(uint *)(plVar4 + 3);
                                  }
                                  if (uVar8 <= uVar2) {
                    /* WARNING: Subroutine does not return */
                                    FUN_00da5194();
                                  }
                                  plVar4[uVar2 + 4] = param_3;
                                  uVar2 = uVar2 + 1;
                                } while ((long)uVar2 < (long)(int)uVar8);
                              }
                              if (lVar5 != 0) {
                                FUN_02668910(lVar5,plVar4,0);
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
            }
          }
        }
LAB_00f6eb44:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
  }
  return;
}


