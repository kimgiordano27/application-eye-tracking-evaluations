/*
FUNCTION_NAME: FUN_014540a0
ENTRY_POINT: 014540a0
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


long * FUN_014540a0(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  long local_28;
  
  if ((DAT_03776a7f & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__);
    thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
    thunk_FUN_00d48444(System_Collections_Generic_List<StyleSheet>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(PTR_DAT_033ee2d8);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<int,_RTHandle[]>_TypeInfo);
    DAT_03776a7f = 1;
  }
  puVar3 = Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__;
  puVar2 = System_Collections_Generic_List<StyleSheet>_TypeInfo;
  puVar1 = System_Collections_Generic_Dictionary<int,_RTHandle[]>_TypeInfo;
  if (3 < param_4) {
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)puVar1,0);
  }
  plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,1);
  lVar6 = FUN_00da4fb8(*(undefined8 *)puVar2,1);
  if (param_2 == 0) {
LAB_014543b4:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  local_38 = 0;
  FUN_01435968(&local_38,*(undefined4 *)(param_2 + 0x18),0);
  puVar1 = Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__;
  if (lVar6 == 0) goto LAB_014543b4;
  if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014543b8;
  *(undefined8 *)(lVar6 + 0x20) = local_38;
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if ((lVar7 == 0) || (FUN_01435978(lVar7,lVar6,0), plVar5 == (long *)0x0)) goto LAB_014543b4;
  lVar6 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar5 + 0x40));
  puVar1 = Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__;
  if (lVar6 == 0) {
    uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar8,0);
  }
  if ((int)plVar5[3] != 0) {
    plVar5[4] = lVar7;
    uVar8 = FUN_00da4fb8(*(undefined8 *)puVar1,1);
    *(undefined8 *)(lVar7 + 0x20) = uVar8;
    if ((int)plVar5[3] == 0) goto LAB_014543b8;
    lVar6 = plVar5[4];
    uVar8 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,1);
    if (lVar6 == 0) goto LAB_014543b4;
    *(undefined8 *)(lVar6 + 0x30) = uVar8;
    if ((int)plVar5[3] == 0) goto LAB_014543b8;
    if (plVar5[4] == 0) goto LAB_014543b4;
    lVar6 = *(long *)(plVar5[4] + 0x20);
    local_50 = 0;
    uStack_48 = 0;
    FUN_0268834c(0,0,0x3f800000,0x3f800000,&local_50,0);
    if (lVar6 == 0) goto LAB_014543b4;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014543b8;
    *(undefined8 *)(lVar6 + 0x28) = uStack_48;
    *(long *)(lVar6 + 0x20) = local_50;
    puVar1 = PTR_DAT_033ee2d8;
    if (*(long *)(param_2 + 0x58) == 0) goto LAB_014543b4;
    FUN_0132138c(*(long *)(param_2 + 0x58),0,&local_28,*(undefined8 *)PTR_DAT_033ee2d8);
    if ((local_28 == 0) || (*(long *)(local_28 + 0x10) == 0)) goto LAB_014543b4;
    if (*(long *)(*(long *)(local_28 + 0x10) + 0x18) != 0) {
      if (*(long *)(param_2 + 0x58) == 0) goto LAB_014543b4;
      FUN_0132138c(*(long *)(param_2 + 0x58),0,&local_50,*(undefined8 *)puVar1);
      if ((local_50 == 0) || (lVar6 = *(long *)(local_50 + 0x10), lVar6 == 0)) goto LAB_014543b4;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014543b8;
      lVar6 = *(long *)(lVar6 + 0x20);
      if ((lVar6 != 0) && (uVar9 = FUN_014440c0(lVar6), (uVar9 & 1) == 0)) {
        if ((int)plVar5[3] == 0) goto LAB_014543b8;
        lVar7 = plVar5[4];
        uVar4 = FUN_01444120(lVar6);
        if (lVar7 == 0) goto LAB_014543b4;
        *(undefined4 *)(lVar7 + 0x10) = uVar4;
        if ((int)plVar5[3] == 0) goto LAB_014543b8;
        lVar7 = plVar5[4];
        uVar4 = FUN_014441ac(lVar6);
        if (lVar7 == 0) goto LAB_014543b4;
        *(undefined4 *)(lVar7 + 0x14) = uVar4;
        if ((int)plVar5[3] == 0) goto LAB_014543b8;
        lVar7 = plVar5[4];
        uVar4 = FUN_01444120(lVar6);
        if (lVar7 == 0) goto LAB_014543b4;
        *(undefined4 *)(lVar7 + 0x18) = uVar4;
        if ((int)plVar5[3] == 0) goto LAB_014543b8;
        lVar7 = plVar5[4];
        uVar4 = FUN_014441ac(lVar6);
        if (lVar7 == 0) goto LAB_014543b4;
        goto LAB_0145432c;
      }
    }
    if ((int)plVar5[3] != 0) {
      lVar7 = plVar5[4];
      if (lVar7 != 0) {
        uVar4 = 0x10;
        *(undefined8 *)(lVar7 + 0x10) = 0x1000000010;
        *(undefined4 *)(lVar7 + 0x18) = 0x10;
LAB_0145432c:
        *(undefined4 *)(lVar7 + 0x1c) = uVar4;
        return plVar5;
      }
      goto LAB_014543b4;
    }
  }
LAB_014543b8:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


