/*
FUNCTION_NAME: FUN_031c3b48
ENTRY_POINT: 031c3b48
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_3
*/


void FUN_031c3b48(long *param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  
  if ((DAT_04532518 & 1) == 0) {
    FUN_01c5d288(
                Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_TypeInfo
                );
    FUN_01c5d288(KillTrigger_<DelayEnable>d__8_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRSystem__GetButtonIdNameFromEnum_TypeInfo);
    DAT_04532518 = 1;
  }
  param_1[7] = (long)param_2;
  if (param_2 != (long *)0x0) {
    lVar5 = *param_2;
    bVar6 = *(byte *)(lVar5 + 0x130);
    bVar1 = *(byte *)(*(long *)
                       Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_TypeInfo
                     + 0x130);
    if ((bVar1 <= bVar6) &&
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_TypeInfo)
       ) {
      param_1[3] = param_2[0xc];
      param_1[4] = param_2[10];
      plVar3 = (long *)(**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
      if (plVar3 != (long *)0x0) {
        bVar6 = *(byte *)(*(long *)OVR_OpenVR_IVRSystem__GetButtonIdNameFromEnum_TypeInfo + 0x130);
        if ((*(byte *)(*plVar3 + 0x130) < bVar6) ||
           (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar6 * 8 + -8) !=
            *(long *)OVR_OpenVR_IVRSystem__GetButtonIdNameFromEnum_TypeInfo)) goto LAB_031c3d64;
      }
      lVar5 = *param_2;
      param_2[0xe] = (long)plVar3;
      bVar6 = *(byte *)(lVar5 + 0x130);
    }
    puVar2 = KillTrigger_<DelayEnable>d__8_TypeInfo;
    bVar1 = *(byte *)(*(long *)KillTrigger_<DelayEnable>d__8_TypeInfo + 0x130);
    if ((bVar6 < bVar1) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)KillTrigger_<DelayEnable>d__8_TypeInfo)) {
      lVar5 = param_2[2];
    }
    else {
      plVar4 = (long *)(**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
      lVar5 = *(long *)puVar2;
      bVar6 = *(byte *)(lVar5 + 0x130);
      plVar3 = param_2;
      if ((*(byte *)(*param_2 + 0x130) < bVar6) ||
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar6 * 8 + -8) != lVar5)) {
LAB_031c3d64:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar3);
      }
      if (plVar4 != (long *)0x0) {
        bVar6 = *(byte *)(*(long *)OVR_OpenVR_IVRSystem__GetButtonIdNameFromEnum_TypeInfo + 0x130);
        if ((*(byte *)(*plVar4 + 0x130) < bVar6) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar6 * 8 + -8) !=
            *(long *)OVR_OpenVR_IVRSystem__GetButtonIdNameFromEnum_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar4);
        }
      }
      FUN_031b0d14(param_2,plVar4,0);
      lVar5 = *(long *)puVar2;
      bVar6 = *(byte *)(lVar5 + 0x130);
      if ((*(byte *)(*param_2 + 0x130) < bVar6) ||
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar6 * 8 + -8) != lVar5)) goto LAB_031c3d64;
      lVar5 = FUN_031b0d84(param_2,0);
    }
    lVar7 = param_1[7];
    param_1[6] = lVar5;
    if (lVar7 != 0) {
      lVar5 = *(long *)(lVar7 + 0x20);
      if (lVar5 == 0) {
        lVar5 = *(long *)(lVar7 + 0x18);
      }
      else {
        *(undefined1 *)(param_1 + 0xb) = 1;
      }
      param_1[10] = lVar5;
      param_1[0xc] = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


