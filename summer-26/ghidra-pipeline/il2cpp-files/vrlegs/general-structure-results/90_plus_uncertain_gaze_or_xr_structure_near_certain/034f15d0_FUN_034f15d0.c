/*
FUNCTION_NAME: FUN_034f15d0
ENTRY_POINT: 034f15d0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 127
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x034f1a98) */
/* WARNING: Removing unreachable block (ram,0x034f1aa8) */

void FUN_034f15d0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  char *pcVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  long *plVar17;
  long local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_80;
  undefined8 uStack_78;
  char local_6c [4];
  undefined8 local_68;
  
  if ((DAT_0412dc9b & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbeeb0);
    FUN_01ab69ac(
                UnityEngine_ResourceManagement_Diagnostics_DiagnosticEventCollectorSingleton_<>c_TypeInfo
                );
    FUN_01ab69ac(
                Newtonsoft_Json_Converters_DiscriminatedUnionConverter_<>c__DisplayClass8_0_TypeInfo
                );
    FUN_01ab69ac(
                Newtonsoft_Json_Converters_DiscriminatedUnionConverter_<>c__DisplayClass9_0_TypeInfo
                );
    FUN_01ab69ac(Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union_TypeInfo);
    FUN_01ab69ac(UnityEngine_Rendering_Universal_Internal_DepthOnlyPass_<>c_TypeInfo);
    FUN_01ab69ac(Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_TypeInfo);
    FUN_01ab69ac(Unity_Physics_DispatchPairSequencer_DispatchPair_TypeInfo);
    FUN_01ab69ac(UnityEngine_Display_DisplaysUpdatedDelegate_TypeInfo);
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_DivInstruction_DivDouble_TypeInfo);
    FUN_01ab69ac(Animancer_DirectionalAnimationSet8_Direction_TypeInfo);
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_DivInstruction_DivInt16_TypeInfo);
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_DivInstruction_DivInt32_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cfe530);
    FUN_01ab69ac(PTR_DAT_03cfddf8);
    FUN_01ab69ac(PTR_DAT_03cd4590);
    DAT_0412dc9b = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  local_6c[0] = '\0';
  FUN_027e0bd8(uVar9,local_6c,0);
  lVar16 = *(long *)(param_1 + 0x58);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar14 = *(long *)Unity_Physics_DispatchPairSequencer_DispatchPair_TypeInfo;
  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
  uVar10 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 200));
  if ((uVar10 & 1) == 0) {
    *(undefined4 *)(lVar16 + 0x18) = 0;
  }
  else {
    iVar1 = *(int *)(lVar16 + 0x18);
    *(undefined4 *)(lVar16 + 0x18) = 0;
    if (0 < iVar1) {
      FUN_02793a34(*(undefined8 *)(lVar16 + 0x10),0,iVar1,0);
    }
  }
  puVar8 = System_Linq_Expressions_Interpreter_DivInstruction_DivInt32_TypeInfo;
  puVar7 = Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union_TypeInfo;
  puVar6 = Newtonsoft_Json_Converters_DiscriminatedUnionConverter_<>c__DisplayClass9_0_TypeInfo;
  puVar5 = UnityEngine_Rendering_Universal_Internal_DepthOnlyPass_<>c_TypeInfo;
  puVar4 = PTR_DAT_03cfe530;
  puVar3 = PTR_DAT_03cd4590;
  puVar2 = PTR_DAT_03cbeeb0;
  lVar16 = *(long *)(param_1 + 0x48);
  while( true ) {
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar16 + 0x30) < 1) break;
    FUN_02224f30(lVar16,&local_c8,*(undefined8 *)puVar8);
    if (local_c8 == 0) {
      local_b0 = 0;
      uStack_a8 = 0;
    }
    else {
      if (local_c8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      local_68 = *(undefined8 *)(local_c8 + 0x18);
      local_c8 = 0;
      uStack_c0 = 0;
      FUN_02241190(&local_c8,&local_68,*(undefined8 *)PTR_DAT_03cfddf8);
      uStack_a8 = uStack_c0;
      local_b0 = local_c8;
    }
    uStack_78 = uStack_a8;
    local_80 = local_b0;
    plVar17 = *(long **)(param_1 + 0x38);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar16 = *plVar17;
    uVar10 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar10 != 0) {
      piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
          puVar11 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
          goto UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__CanHoverSnap;
        }
        uVar10 = uVar10 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_01a472ec(plVar17,*(long *)puVar5,0);
UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__CanHoverSnap:
    uVar12 = (*(code *)*puVar11)(plVar17,puVar11[1]);
    lVar16 = *(long *)(*(long *)puVar3 + 0x20);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_01a46ff8();
    }
    pcVar13 = (char *)thunk_FUN_01a59484(&local_80,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar16 + 0xc0) + 8) + 0x80));
    if (*pcVar13 == '\0') break;
    FUN_01ba9478(&local_80,&local_c8,*(undefined8 *)puVar4);
    lVar16 = local_c8;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar10 = FUN_02748788(lVar16,uVar12,0);
    if ((uVar10 & 1) == 0) break;
    if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02225f20(*(long *)(param_1 + 0x48),&local_c8,
                 *(undefined8 *)
                  System_Linq_Expressions_Interpreter_DivInstruction_DivDouble_TypeInfo);
    lVar16 = local_c8;
    if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_01b5f01c(*(long *)(param_1 + 0x58),local_c8,
                 *(undefined8 *)
                  Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_TypeInfo);
    if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02225b40(*(long *)(param_1 + 0x48),lVar16,
                 *(undefined8 *)Animancer_DirectionalAnimationSet8_Direction_TypeInfo);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    local_c8 = *(long *)(lVar16 + 0x20);
    FUN_0219eaf8(*(long *)(param_1 + 0x50),&local_c8,
                 *(undefined8 *)
                  UnityEngine_ResourceManagement_Diagnostics_DiagnosticEventCollectorSingleton_<>c_TypeInfo
                );
    lVar16 = *(long *)(param_1 + 0x48);
  }
  if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  Animancer_FadeGroup__get_TargetWeight
            (*(long *)(param_1 + 0x58),&local_c8,
             *(undefined8 *)UnityEngine_Display_DisplaysUpdatedDelegate_TypeInfo);
  uStack_98 = uStack_c0;
  local_a0 = local_c8;
  local_90 = local_b8;
  while( true ) {
    uVar10 = FUN_021b51c8(&local_a0,*(undefined8 *)puVar6);
    if ((uVar10 & 1) == 0) {
      FUN_021b51c4(&local_a0,
                   *(undefined8 *)
                    Newtonsoft_Json_Converters_DiscriminatedUnionConverter_<>c__DisplayClass8_0_TypeInfo
                  );
      if (local_6c[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
      }
      return;
    }
    FUN_01b7a454(&local_a0,&local_c8,*(undefined8 *)puVar7);
    if (local_c8 == 0) break;
    lVar16 = *(long *)(local_c8 + 0x10);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(lVar16 + 0x18))(*(undefined8 *)(lVar16 + 0x40),*(undefined8 *)(lVar16 + 0x28));
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


