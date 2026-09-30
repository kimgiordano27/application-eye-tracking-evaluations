/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._SetHighQualityOverlay$$EndInvoke
ENTRY_POINT: 05622fd8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1
*/


void OVR_OpenVR_IVROverlay__SetHighQualityOverlay__EndInvoke(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  long *unaff_x22;
  undefined8 uVar9;
  
  if (param_1 == 0) {
    FUN_02dcfd74();
    param_1 = *(long *)(unaff_x20 + 0x38);
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02dcfd18();
  }
                    /* try { // try from 05622ffc to 0572300b has its CatchHandler @ 056230e8 */
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if ((*(ushort *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x10) + 0x135) & 1) == 0) {
    FUN_02dcfd18();
  }
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar5 = FUN_035c7934();
  lVar8 = *unaff_x22;
  lVar7 = *(long *)(lVar8 + 0x38);
  if (lVar7 == 0) {
    FUN_02dcfd74(lVar8);
    lVar7 = *(long *)(lVar8 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02dcfd18();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02dcfd18();
  }
  uVar9 = **(undefined8 **)(lVar7 + 0xb8);
  lVar7 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0d7b0);
  FUN_062ed78c(lVar7,*(undefined8 *)System_Func<JsonProperty,_string>_TypeInfo,uVar9,0);
  puVar1 = PTR_DAT_069fc180;
  plVar6 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,1);
  puVar2 = System_Func<JsonProperty,_JsonProperty>_TypeInfo;
  if (plVar6 != (long *)0x0) {
    if ((*(long *)System_Func<JsonProperty,_JsonProperty>_TypeInfo != 0) &&
       (lVar8 = thunk_FUN_02dd3048(*(long *)System_Func<JsonProperty,_JsonProperty>_TypeInfo,
                                   *(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
      uVar9 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar9,0);
    }
    if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    plVar6[4] = *(long *)puVar2;
    LeanTween__value();
    puVar2 = PTR_DAT_06a01b78;
    if (lVar7 != 0) {
      FUN_035c7934(lVar7,*(undefined8 *)
                          System_Func<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_TypeInfo
                   ,plVar6,*(undefined8 *)PTR_DAT_06a01b78);
      plVar6 = (long *)FUN_02d966a4(*(undefined8 *)puVar1,1);
      puVar3 = System_Func<JsonProperty,_int>_TypeInfo;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if ((*(long *)System_Func<JsonProperty,_int>_TypeInfo != 0) &&
         (lVar8 = thunk_FUN_02dd3048(*(long *)System_Func<JsonProperty,_int>_TypeInfo,
                                     *(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
        uVar9 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar9,0);
      }
      if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      plVar6[4] = *(long *)puVar3;
      LeanTween__value();
      FUN_035c7934(lVar7,*(undefined8 *)System_Func<LabelScopeInfo,_LabelScopeInfo>_TypeInfo,plVar6,
                   *(undefined8 *)puVar2);
      plVar6 = (long *)FUN_02d966a4(*(undefined8 *)puVar1,2);
      puVar3 = System_Func<LightLambda,_Delegate>_TypeInfo;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if ((*(long *)System_Func<LightLambda,_Delegate>_TypeInfo != 0) &&
         (lVar8 = thunk_FUN_02dd3048(*(long *)System_Func<LightLambda,_Delegate>_TypeInfo,
                                     *(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
        uVar9 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar9,0);
      }
      if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      plVar6[4] = *(long *)puVar3;
      LeanTween__value();
      puVar3 = System_Func<InternedString,_string>_TypeInfo;
      if ((*(long *)System_Func<InternedString,_string>_TypeInfo != 0) &&
         (lVar8 = thunk_FUN_02dd3048(*(long *)System_Func<InternedString,_string>_TypeInfo,
                                     *(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
        uVar9 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar9,0);
      }
      if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      plVar6[5] = *(long *)puVar3;
      LeanTween__value();
      puVar4 = System_Func<KerningPair,_uint>_TypeInfo;
      FUN_035c7934(lVar7,*(undefined8 *)System_Func<KerningPair,_uint>_TypeInfo,plVar6,
                   *(undefined8 *)puVar2);
      plVar6 = (long *)FUN_02d966a4(*(undefined8 *)puVar1,2);
      puVar3 = System_Func<int,_int>_TypeInfo;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if ((*(long *)System_Func<int,_int>_TypeInfo != 0) &&
         (lVar8 = thunk_FUN_02dd3048(*(long *)System_Func<int,_int>_TypeInfo,
                                     *(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
        uVar9 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar9,0);
      }
      if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      plVar6[4] = *(long *)puVar3;
      LeanTween__value();
      if ((lVar5 != 0) &&
         (lVar8 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
        uVar9 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar9,0);
      }
      if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      plVar6[5] = lVar5;
      LeanTween__value(plVar6 + 5,lVar5);
      FUN_035c7934(lVar7,*(undefined8 *)puVar4,plVar6,*(undefined8 *)puVar2);
      plVar6 = (long *)thunk_FUN_02dd3144(*(undefined8 *)
                                           System_Func<InstanceHandle,_IInspector>_TypeInfo);
      FUN_0561e6d0();
      uVar9 = FUN_05362cb4(*(undefined8 *)System_Func<JProperty,_string>_TypeInfo,lVar5,0);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(uVar9,uVar9);
      }
      OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__EndInvoke(plVar6);
      puVar3 = Unity_Multiplayer_Tools_NetStats_EventMetric<NetworkVariableEvent>_TypeInfo;
      lVar5 = *(long *)Unity_Multiplayer_Tools_NetStats_EventMetric<NetworkVariableEvent>_TypeInfo;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar5 = *(long *)puVar3;
      }
      FUN_0561e804(plVar6,**(undefined8 **)(lVar5 + 0xb8),*(undefined8 *)PTR_DAT_069ff7d0);
      FUN_0561e804(plVar6,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8),
                   *(undefined8 *)System_Func<InternalsVisibleToAttribute,_AssemblyName>_TypeInfo);
      lVar5 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      plVar6 = (long *)FUN_02d966a4(*(undefined8 *)puVar1,2);
      puVar3 = PTR_DAT_06a1a9f0;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if ((*(long *)PTR_DAT_06a1a9f0 != 0) &&
         (lVar8 = thunk_FUN_02dd3048(*(long *)PTR_DAT_06a1a9f0,*(undefined8 *)(*plVar6 + 0x40)),
         lVar8 == 0)) {
        uVar9 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar9,0);
      }
      if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      plVar6[4] = *(long *)puVar3;
      LeanTween__value();
      if ((lVar5 != 0) &&
         (lVar8 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
        uVar9 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar9,0);
      }
      if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      plVar6[5] = lVar5;
      LeanTween__value(plVar6 + 5,lVar5);
      FUN_035c7934(lVar7,*(undefined8 *)puVar4,plVar6,*(undefined8 *)puVar2);
      plVar6 = (long *)FUN_02d966a4(*(undefined8 *)puVar1,1);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar5 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar5 == 0) {
        uVar9 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar9,0);
      }
      if ((int)plVar6[3] != 0) {
        plVar6[4] = lVar7;
        LeanTween__value(plVar6 + 4,lVar7);
        thunk_FUN_062eda98();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


