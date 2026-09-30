/*
FUNCTION_NAME: FUN_034ed924
ENTRY_POINT: 034ed924
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_11;frame_or_lifecycle_behavior
*/


undefined1  [16] FUN_034ed924(long param_1)

{
  undefined1 auVar1 [16];
  short sVar2;
  short sVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  char local_30;
  undefined7 uStack_2f;
  undefined8 uStack_28;
  
  if ((DAT_04832e21 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Net_WebRequest_get_RequestUri__);
    thunk_FUN_01efb3a4(Method_System_Net_WebRequest_get_Method__);
    thunk_FUN_01efb3a4(Method_System_Net_WebRequest_get_Proxy__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(Method_System_Net_WebRequest_get_Timeout__);
    DAT_04832e21 = 1;
  }
  local_34 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = '\0';
  uStack_2f = 0;
  uStack_28 = 0;
  uVar4 = FUN_0340eec4(param_1,0);
  if ((uVar4 & 1) != 0) goto LAB_034edb20;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  sVar2 = FUN_03409f80(param_1,0,0);
  if ((sVar2 == 0x2d) || (sVar3 = FUN_03409f80(param_1,0,0), sVar3 == 0x2b)) {
    param_1 = FUN_0341265c(param_1,1,0);
  }
  uVar4 = FUN_03568ae4(param_1,&local_34,0);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_03532f80(0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                        );
    }
    uVar4 = FUN_03581c68(param_1,*(undefined8 *)Method_System_Net_WebRequest_get_Timeout__,uVar5,
                         &local_40,0);
    uVar5 = local_40;
    if ((uVar4 & 1) != 0) goto LAB_034edaa0;
  }
  else {
    local_50 = 0;
    FUN_035812ac(&local_50,local_34,0,0,0);
    uVar5 = local_50;
LAB_034edaa0:
    FUN_03333e28(&local_30,uVar5,*(undefined8 *)Method_System_Net_WebRequest_get_RequestUri__);
  }
  if ((sVar2 == 0x2d) && (local_30 != '\0')) {
    local_48 = FUN_03333e40(&local_30,*(undefined8 *)Method_System_Net_WebRequest_get_Proxy__);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                        );
    }
    uVar5 = FUN_03581a80(&local_48,0);
    FUN_03333e28(&local_30,uVar5,*(undefined8 *)Method_System_Net_WebRequest_get_RequestUri__);
  }
LAB_034edb20:
  auVar1._1_7_ = uStack_2f;
  auVar1[0] = local_30;
  auVar1._8_8_ = uStack_28;
  return auVar1;
}


