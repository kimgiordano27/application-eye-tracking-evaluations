/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.AR.TapGestureRecognizer$$.ctor
ENTRY_POINT: 0251ca9c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 114
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


undefined1  [16]
UnityEngine_XR_Interaction_Toolkit_AR_TapGestureRecognizer___ctor
          (double param_1,undefined1 param_2 [16],undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  double dVar15;
  
  puVar4 = StringLiteral_13508;
  uVar14 = param_2._8_8_;
  dVar15 = param_2._0_8_;
  if ((*(byte *)(unaff_x20 + 0x9e7) & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033eafc8);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(Oculus_Platform_Request<ChallengeList>_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<SpriteRenderer>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IReadOnlyList<OVRSpatialAnchor>>_SetException__
                      );
    thunk_FUN_00d48444(StringLiteral_13508);
    thunk_FUN_00d48444(Meta_WitAi_Data_AudioBufferConfiguration_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7287);
    thunk_FUN_00d48444(System_Linq_Expressions_PrimitiveParameterExpression<DateTime>_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x9e7) = 1;
  }
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar4;
  }
  puVar1 = PTR_DAT_033eafc8;
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar9 == 0) goto LAB_0251ceb4;
    FUN_012d239c(lVar9,uVar10,
                 *(undefined8 *)System_Collections_Generic_List<SpriteRenderer>_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = lVar9;
  }
  puVar2 = Oculus_Platform_Request<ChallengeList>_TypeInfo;
  if (*(int *)(*(long *)Oculus_Platform_Request<ChallengeList>_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar7 = FUN_0251cf90(param_3,lVar9);
  if ((lVar7 == 0) ||
     (lVar7 = FUN_01602744(lVar7,0x3a,0,0), puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_105__,
     lVar7 == 0)) {
LAB_0251ceb4:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar9 = *(long *)(lVar7 + 0x18);
  if ((lVar9 == 0) || (4 < (int)lVar9)) goto LAB_0251ce4c;
  if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  uVar10 = *(undefined8 *)(lVar7 + ((lVar9 << 0x20) + -0x100000000 >> 0x1d) + 0x20);
  if (*(int *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__796_105__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar9 = FUN_0202015c(uVar10,*(undefined8 *)StringLiteral_7287,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar8 = FUN_0201bf00(lVar9,0);
  if ((uVar8 & 1) == 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar9 = FUN_0202015c(uVar10,*(undefined8 *)Meta_WitAi_Data_AudioBufferConfiguration_TypeInfo,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar8 = FUN_0201bf00(lVar9,0);
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar9 = FUN_0202015c(uVar10,*(undefined8 *)
                                   System_Linq_Expressions_PrimitiveParameterExpression<DateTime>_TypeInfo
                           ,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar8 = FUN_0201bf00(lVar9,0);
      if ((uVar8 & 1) == 0) goto LAB_0251ce4c;
      iVar5 = FUN_0176ee4c(uVar10,0);
      dVar15 = (double)iVar5;
    }
    else {
      lVar9 = *(long *)puVar4;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar9);
        lVar9 = *(long *)puVar4;
      }
      lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
      if (lVar11 == 0) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar9);
          lVar9 = *(long *)puVar4;
        }
        uVar14 = **(undefined8 **)(lVar9 + 0xb8);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_012d239c(lVar11,uVar14,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IReadOnlyList<OVRSpatialAnchor>>_SetException__
                     ,0);
        *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10) = lVar11;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar14 = FUN_0251cf90(uVar10,lVar11);
      dVar15 = (double)FUN_01756550(uVar14,0);
    }
    if ((int)*(long *)(lVar7 + 0x18) < 2) {
      iVar5 = 0;
      iVar6 = 0;
      dVar12 = 0.0;
    }
    else {
      iVar5 = FUN_0176ee4c(*(undefined8 *)
                            (lVar7 + ((*(long *)(lVar7 + 0x18) << 0x20) + -0x200000000 >> 0x1d) +
                            0x20),0);
      dVar12 = (double)iVar5;
      if ((int)*(long *)(lVar7 + 0x18) < 3) goto LAB_0251ce1c;
      iVar5 = FUN_0176ee4c(*(undefined8 *)
                            (lVar7 + ((*(long *)(lVar7 + 0x18) << 0x20) + -0x300000000 >> 0x1d) +
                            0x20),0);
      if ((int)*(long *)(lVar7 + 0x18) < 4) goto LAB_0251ce20;
      iVar6 = FUN_0176ee4c(*(undefined8 *)
                            (lVar7 + ((*(long *)(lVar7 + 0x18) << 0x20) + -0x400000000 >> 0x1d) +
                            0x20),0);
    }
  }
  else {
    dVar12 = (double)FUN_01756550(uVar10,0);
    iVar5 = (int)*(long *)(lVar7 + 0x18);
    if (3 < iVar5) goto LAB_0251ce4c;
    dVar15 = 0.0;
    if (iVar5 < 2) {
LAB_0251ce1c:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0176ee4c(*(undefined8 *)
                            (lVar7 + ((*(long *)(lVar7 + 0x18) << 0x20) + -0x200000000 >> 0x1d) +
                            0x20),0);
      if (2 < (int)*(long *)(lVar7 + 0x18)) {
        iVar6 = FUN_0176ee4c(*(undefined8 *)
                              (lVar7 + ((*(long *)(lVar7 + 0x18) << 0x20) + -0x300000000 >> 0x1d) +
                              0x20),0);
        goto LAB_0251ce24;
      }
    }
LAB_0251ce20:
    iVar6 = 0;
  }
LAB_0251ce24:
  dVar15 = dVar15 / param_1 + dVar12 + (double)(iVar5 * 0x3c) + (double)(iVar6 * 0xe10);
  uVar14 = 0;
LAB_0251ce4c:
  auVar13._8_8_ = uVar14;
  auVar13._0_8_ = dVar15;
  return auVar13;
}


