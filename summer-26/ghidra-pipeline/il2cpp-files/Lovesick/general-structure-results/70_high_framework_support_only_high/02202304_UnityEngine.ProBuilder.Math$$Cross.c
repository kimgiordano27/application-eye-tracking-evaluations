/*
FUNCTION_NAME: UnityEngine.ProBuilder.Math$$Cross
ENTRY_POINT: 02202304
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_ProBuilder_Math__Cross(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar12;
  ulong extraout_x1;
  ulong extraout_x1_00;
  long unaff_x19;
  undefined8 *unaff_x20;
  uint *unaff_x21;
  uint uVar13;
  ulong unaff_x23;
  undefined1 auVar14 [16];
  undefined *puVar11;
  
  puVar11 = Newtonsoft_Json_JsonReader_State_TypeInfo;
  iVar1 = *(int *)(unaff_x19 + 0x10);
  uVar13 = *unaff_x21;
  while ((int)uVar13 < iVar1) {
    uVar4 = FUN_015fa29c();
    if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar11);
    }
    auVar14 = FUN_016f68bc(uVar4,0);
    param_2 = auVar14._8_8_;
    uVar13 = *unaff_x21;
    if ((auVar14._0_8_ & 1) == 0) break;
    uVar13 = uVar13 + 1;
    *unaff_x21 = uVar13;
  }
  puVar2 = Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__;
  uVar5 = uVar13;
  if ((int)uVar13 < iVar1) {
    do {
      uVar5 = FUN_015fa29c();
      param_2 = extraout_x1;
      if ((uVar5 & 0xffff) == 0x28) break;
      if (*(long *)puVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar6 = FUN_015fa29c(*(long *)puVar2,0,0);
      param_2 = extraout_x1_00;
      if ((uVar5 & 0xffff) == (uVar6 & 0xffff)) break;
      if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      auVar14 = FUN_016f68bc(uVar5,0);
      param_2 = auVar14._8_8_;
      if ((auVar14._0_8_ & 1) != 0) break;
      uVar5 = *unaff_x21 + 1;
      param_2 = (ulong)uVar5;
      *unaff_x21 = uVar5;
    } while ((int)uVar5 < iVar1);
    uVar5 = *unaff_x21;
  }
  if (uVar5 != uVar13) {
    uVar8 = FUN_01601d40();
    if ((unaff_x23 & 1) == 0) {
      uVar13 = *unaff_x21;
      while ((int)uVar13 < iVar1) {
        uVar4 = FUN_015fa29c();
        if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar11);
        }
        uVar9 = FUN_016f68bc(uVar4,0);
        uVar13 = *unaff_x21;
        if ((uVar9 & 1) == 0) break;
        uVar13 = uVar13 + 1;
        *unaff_x21 = uVar13;
      }
      if ((int)uVar13 < iVar1) {
        sVar3 = FUN_015fa29c();
        uVar13 = *unaff_x21;
        if (sVar3 == 0x28) {
          *unaff_x21 = uVar13 + 1;
          iVar7 = FUN_016047b8();
          if (iVar7 == -1) {
            thunk_FUN_00d48444(
                              Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                              );
            uVar8 = thunk_FUN_00d61fa0();
            puVar11 = Method_FullSerializer_fsBaseConverter_DeserializeMember<TextClipping>__;
            goto LAB_0220259c;
          }
          FUN_01601d40();
          FUN_0220273c();
          uVar13 = iVar7 + 1;
          *unaff_x21 = uVar13;
        }
      }
      if (((int)uVar13 < iVar1) &&
         ((sVar3 = FUN_015fa29c(), sVar3 == 0x2c || (sVar3 = FUN_015fa29c(), sVar3 == 0x3b)))) {
        *unaff_x21 = *unaff_x21 + 1;
      }
      FUN_01380c7c();
      *unaff_x20 = uVar8;
      unaff_x20[2] = 0;
      unaff_x20[1] = 0;
    }
    else {
      unaff_x20[1] = 0;
      unaff_x20[2] = 0;
      *unaff_x20 = uVar8;
    }
    return;
  }
  thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__,
                     param_2,0);
  uVar8 = thunk_FUN_00d61fa0();
  puVar11 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<NamedValue>_Dispose__;
LAB_0220259c:
  uVar10 = thunk_FUN_00d48444(puVar11);
  uVar8 = FUN_01600b5c(uVar10,uVar8);
  thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
  uVar10 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  uVar12 = thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetResult__)
  ;
  FUN_016ec624(uVar10,uVar8,uVar12,0);
  uVar8 = thunk_FUN_00d48444(
                            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<NamedValue>_get_Current__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar10,uVar8);
}


