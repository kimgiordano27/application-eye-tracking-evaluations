/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.Utilities$$StringLabelToEnum
ENTRY_POINT: 01494188
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_Utilities__StringLabelToEnum(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long *in_stack_00000008;
  
  if ((DAT_03776c3e & 1) == 0) {
    thunk_FUN_00d48444(
                      OVR_OpenVR_IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose_TypeInfo
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(Method_System_Xml_Schema_XmlAnyConverter_ChangeType__);
    thunk_FUN_00d48444(Method_ToggleSubtitlesOnTouch_OnSelected__);
    thunk_FUN_00d48444(System_Func<InteractorUnregisteredEventArgs>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1883);
    thunk_FUN_00d48444(DigitalOpus_MB_Core_MatAndTransformToMerged_TypeInfo);
    DAT_03776c3e = 1;
  }
  plVar9 = *(long **)(param_1 + 0x18);
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    lVar4 = FUN_0268fd4c(param_1,0);
    if (lVar4 == 0) goto LAB_014943fc;
    FUN_010e5b20(lVar4,&stack0x00000008,
                 *(undefined8 *)Method_System_Xml_Schema_XmlAnyConverter_ChangeType__);
    *(long **)(param_1 + 0x18) = in_stack_00000008;
    plVar9 = in_stack_00000008;
    if (in_stack_00000008 == (long *)0x0) {
      return;
    }
  }
  puVar2 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
  puVar3 = Method_ToggleSubtitlesOnTouch_OnSelected__;
  puVar1 = OVR_OpenVR_IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose_TypeInfo;
  if (lVar4 != 0) {
    FUN_016f27fc(lVar4,param_1,*(undefined8 *)StringLiteral_1883,0);
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_014942b8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar3,0);
LAB_014942b8:
    (*(code *)*puVar5)(plVar9,lVar4,puVar5[1]);
    plVar9 = *(long **)(param_1 + 0x18);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar4 != 0) &&
       (FUN_011c22d0(lVar4,param_1,
                     *(undefined8 *)System_Func<InteractorUnregisteredEventArgs>_TypeInfo,0),
       plVar9 != (long *)0x0)) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
            goto LAB_01494348;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar3,4);
LAB_01494348:
      (*(code *)*puVar5)(plVar9,lVar4,puVar5[1]);
      plVar9 = *(long **)(param_1 + 0x18);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if ((lVar4 != 0) &&
         (FUN_016f27fc(lVar4,param_1,
                       *(undefined8 *)DigitalOpus_MB_Core_MatAndTransformToMerged_TypeInfo,0),
         plVar9 != (long *)0x0)) {
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 6) * 0x10 + 0x138);
              goto LAB_014943d8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar3,6);
LAB_014943d8:
        (*(code *)*puVar5)(plVar9,lVar4,puVar5[1]);
        return;
      }
    }
  }
LAB_014943fc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


