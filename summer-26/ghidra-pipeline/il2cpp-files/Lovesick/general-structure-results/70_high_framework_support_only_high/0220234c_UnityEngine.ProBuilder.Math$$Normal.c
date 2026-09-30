/*
FUNCTION_NAME: UnityEngine.ProBuilder.Math$$Normal
ENTRY_POINT: 0220234c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_ProBuilder_Math__Normal(ulong param_1,undefined8 param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar9;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong uVar10;
  undefined8 *unaff_x20;
  uint *unaff_x21;
  uint uVar11;
  ulong unaff_x23;
  int unaff_w25;
  long *unaff_x26;
  undefined1 auVar12 [16];
  undefined *puVar8;
  
  while( true ) {
    auVar12 = FUN_016f68bc(param_1,param_2);
    uVar10 = auVar12._8_8_;
    uVar11 = *unaff_x21;
    if ((auVar12._0_8_ & 1) == 0) break;
    uVar11 = uVar11 + 1;
    *unaff_x21 = uVar11;
    if (unaff_w25 <= (int)uVar11) break;
    param_1 = FUN_015fa29c();
    param_1 = param_1 & 0xffffffff;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x26);
    }
    param_2 = 0;
  }
  puVar8 = Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__;
  uVar2 = uVar11;
  if ((int)uVar11 < unaff_w25) {
    do {
      uVar2 = FUN_015fa29c();
      uVar10 = extraout_x1;
      if ((uVar2 & 0xffff) == 0x28) break;
      if (*(long *)puVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar3 = FUN_015fa29c(*(long *)puVar8,0,0);
      uVar10 = extraout_x1_00;
      if ((uVar2 & 0xffff) == (uVar3 & 0xffff)) break;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      auVar12 = FUN_016f68bc(uVar2,0);
      uVar10 = auVar12._8_8_;
      if ((auVar12._0_8_ & 1) != 0) break;
      uVar2 = *unaff_x21 + 1;
      uVar10 = (ulong)uVar2;
      *unaff_x21 = uVar2;
    } while ((int)uVar2 < unaff_w25);
    uVar2 = *unaff_x21;
  }
  if (uVar2 != uVar11) {
    uVar6 = FUN_01601d40();
    if ((unaff_x23 & 1) == 0) {
      uVar11 = *unaff_x21;
      while ((int)uVar11 < unaff_w25) {
        uVar4 = FUN_015fa29c();
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_00d32864(*unaff_x26);
        }
        uVar10 = FUN_016f68bc(uVar4,0);
        uVar11 = *unaff_x21;
        if ((uVar10 & 1) == 0) break;
        uVar11 = uVar11 + 1;
        *unaff_x21 = uVar11;
      }
      if ((int)uVar11 < unaff_w25) {
        sVar1 = FUN_015fa29c();
        uVar11 = *unaff_x21;
        if (sVar1 == 0x28) {
          *unaff_x21 = uVar11 + 1;
          iVar5 = FUN_016047b8();
          if (iVar5 == -1) {
            thunk_FUN_00d48444(
                              Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                              );
            uVar6 = thunk_FUN_00d61fa0();
            puVar8 = Method_FullSerializer_fsBaseConverter_DeserializeMember<TextClipping>__;
            goto LAB_0220259c;
          }
          FUN_01601d40();
          FUN_0220273c();
          uVar11 = iVar5 + 1;
          *unaff_x21 = uVar11;
        }
      }
      if (((int)uVar11 < unaff_w25) &&
         ((sVar1 = FUN_015fa29c(), sVar1 == 0x2c || (sVar1 = FUN_015fa29c(), sVar1 == 0x3b)))) {
        *unaff_x21 = *unaff_x21 + 1;
      }
      FUN_01380c7c();
      *unaff_x20 = uVar6;
      unaff_x20[2] = 0;
      unaff_x20[1] = 0;
    }
    else {
      unaff_x20[1] = 0;
      unaff_x20[2] = 0;
      *unaff_x20 = uVar6;
    }
    return;
  }
  thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__,
                     uVar10,0);
  uVar6 = thunk_FUN_00d61fa0();
  puVar8 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<NamedValue>_Dispose__;
LAB_0220259c:
  uVar7 = thunk_FUN_00d48444(puVar8);
  uVar6 = FUN_01600b5c(uVar7,uVar6);
  thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
  uVar7 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  uVar9 = thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetResult__);
  FUN_016ec624(uVar7,uVar6,uVar9,0);
  uVar6 = thunk_FUN_00d48444(
                            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<NamedValue>_get_Current__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar7,uVar6);
}


