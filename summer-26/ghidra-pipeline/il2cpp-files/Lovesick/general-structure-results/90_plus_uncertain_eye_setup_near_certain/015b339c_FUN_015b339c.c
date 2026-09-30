/*
FUNCTION_NAME: FUN_015b339c
ENTRY_POINT: 015b339c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_015b339c(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((DAT_03777ddf & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<int,_DynamicResUpscaleFilter>_ContainsKey__
                      );
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(PTR_DAT_033f3868);
    thunk_FUN_00d48444(Method_System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_<_cctor>b__10_0__);
    thunk_FUN_00d48444(PTR_DAT_033f6148);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EndProcessProperty__
                      );
    thunk_FUN_00d48444(StringLiteral_4833);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_TMPro_TextMeshProUGUI_<DelayedGraphicRebuild>d__18_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(OVR_OpenVR_IVROverlay__SetOverlayFromFile_TypeInfo);
    DAT_03777ddf = 1;
  }
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (param_4 != (long *)0x0) {
    lVar5 = *param_4;
    uVar10 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_<_cctor>b__10_0__) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
          goto LAB_015b34bc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_00d59724(param_4,*(long *)
                                   Method_System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_<_cctor>b__10_0__
                          ,6);
LAB_015b34bc:
    puVar1 = StringLiteral_4833;
    (*(code *)*puVar3)(param_4,uVar10,puVar3[1]);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar10 = FUN_0112e800(*(undefined8 *)puVar1);
    uVar6 = FUN_0268b4e0(uVar10,0,0);
    puVar1 = OVR_OpenVR_IVROverlay__SetOverlayFromFile_TypeInfo;
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02661754(*(undefined8 *)puVar1,0);
      return;
    }
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_TMPro_TextMeshProUGUI_<DelayedGraphicRebuild>d__18_System_Collections_IEnumerator_Reset__
                              );
    if (lVar5 != 0) {
      FUN_015b37d8(lVar5,uVar10);
      param_1[3] = lVar5;
      uVar10 = param_1[5];
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar6 = FUN_02681b9c(uVar10,0,0);
      if ((uVar6 & 1) != 0) {
        if ((param_1[5] == 0) || (lVar5 = *(long *)(param_1[5] + 0x20), lVar5 == 0))
        goto LAB_015b37d4;
        if (*(char *)(lVar5 + 0x10) != '\0') {
          lVar5 = param_1[3];
          if (param_2 == 0) {
            param_2 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3868);
            if (param_2 == 0) goto LAB_015b37d4;
            FUN_0268b098(param_2,0);
          }
          if (lVar5 == 0) goto LAB_015b37d4;
          *(long *)(lVar5 + 0x40) = param_2;
        }
      }
      puVar1 = PTR_DAT_033f6148;
      FUN_015b38c8(param_3,param_4);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_03777c7e == '\0') {
        thunk_FUN_00d48444(PTR_DAT_033f6148);
        DAT_03777c7e = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar1;
      }
      uVar10 = **(undefined8 **)(lVar5 + 0xb8);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      uVar6 = FUN_02681b9c(uVar10,0,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_03777c7e == '\0') {
          thunk_FUN_00d48444(PTR_DAT_033f6148);
          DAT_03777c7e = '\x01';
        }
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar5 = *(long *)puVar1;
        }
        if (**(long **)(lVar5 + 0xb8) == 0) goto LAB_015b37d4;
        *(undefined1 *)(**(long **)(lVar5 + 0xb8) + 0x40) = 0;
      }
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<int,_DynamicResUpscaleFilter>_ContainsKey__
                                );
      if (lVar5 != 0) {
        FUN_017b46ec(lVar5,0);
        param_1[4] = lVar5;
        if (DAT_03777e4b == '\0') {
          thunk_FUN_00d48444(
                            Method_Oculus_Interaction_PointerInteractable<HandGrabInteractor,_HandGrabInteractable>_get_PointableElement__
                            );
          DAT_03777e4b = '\x01';
        }
        puVar2 = 
        Method_Oculus_Interaction_PointerInteractable<HandGrabInteractor,_HandGrabInteractable>_get_PointableElement__
        ;
        uVar10 = **(undefined8 **)
                   (*(long *)
                     Method_Oculus_Interaction_PointerInteractable<HandGrabInteractor,_HandGrabInteractable>_get_PointableElement__
                   + 0xb8);
        if (DAT_03777e4c == '\0') {
          thunk_FUN_00d48444(
                            Method_Oculus_Interaction_PointerInteractable<HandGrabInteractor,_HandGrabInteractable>_get_PointableElement__
                            );
          DAT_03777e4c = '\x01';
        }
        if (param_1[2] != 0) {
          uVar9 = param_1[3];
          uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
          uVar4 = FUN_0268fd4c(param_1[2],0);
          FUN_015b394c(lVar5,uVar10,uVar11,uVar9,uVar4,*param_1,param_1[1]);
          puVar2 = OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo;
          lVar5 = param_1[6];
          if (lVar5 != 0) {
            (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28))
            ;
            lVar8 = param_1[4];
            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            if ((lVar5 != 0) &&
               (FUN_011c181c(lVar5,0,*(undefined8 *)
                                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EndProcessProperty__
                             ,0), lVar8 != 0)) {
              FUN_015b3b38(lVar8,lVar5);
              if (param_1[4] != 0) {
                FUN_015b7898();
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_015b37d4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


