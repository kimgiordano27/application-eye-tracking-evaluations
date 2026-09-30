/*
FUNCTION_NAME: FUN_023efef4
ENTRY_POINT: 023efef4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_6;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


void FUN_023efef4(undefined8 *param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_90;
  ulong local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  
  if ((DAT_03782203 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<ConsoleLine,_ProxyConsoleLine>__ctor__
                      );
    thunk_FUN_00d48444(Method_SmackAJack_ClownHidden__);
    thunk_FUN_00d48444(Method_System_Linq_Expressions_Interpreter_LessThanInstruction_Create__);
    thunk_FUN_00d48444(Method_Oculus_Interaction_InteractorUnityEventWrapper_HandleProcessed__);
    thunk_FUN_00d48444(StringLiteral_517);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<WriteValueNotNullAsync>d__110>__
                      );
    thunk_FUN_00d48444(StringLiteral_3064);
    thunk_FUN_00d48444(
                      Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c__DisplayClass176_0_<UnusedElementGroup>b__0__
                      );
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>__ctor__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f5018);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<ValueTuple<DebugGizmoType,_Type>,_GizmoTypeInfo>__ctor__
                      );
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Linq_JToken_op_Explicit__);
    thunk_FUN_00d48444(StringLiteral_9728);
    DAT_03782203 = 1;
  }
  puVar5 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  auVar2 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  if (param_2 != 0) {
    lVar15 = FUN_023ef608(param_2);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar5);
    }
    uVar16 = FUN_0268b4e0(param_3,0,0);
    puVar8 = StringLiteral_3064;
    puVar7 = Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
    puVar6 = 
    Method_System_Collections_Generic_Dictionary<ValueTuple<DebugGizmoType,_Type>,_GizmoTypeInfo>__ctor__
    ;
    puVar5 = PTR_DAT_033f5018;
    auVar4._8_8_ = local_70._8_8_;
    auVar4._0_8_ = local_70._0_8_;
    auVar3._8_8_ = local_70._8_8_;
    auVar3._0_8_ = local_70._0_8_;
    auVar2._8_8_ = local_80._8_8_;
    auVar2._0_8_ = local_80._0_8_;
    auVar20._8_8_ = local_80._8_8_;
    auVar20._0_8_ = local_80._0_8_;
    if ((uVar16 & 1) == 0) {
      if (param_3 != 0) {
        FUN_026a345c(param_3,0);
        local_70 = FUN_01142b50(param_3,0,*(undefined8 *)puVar7);
        local_80 = FUN_01142b50(param_3,4,*(undefined8 *)puVar6);
        auVar20 = FUN_026a3e80(param_3,0);
        uVar16 = auVar20._8_8_;
        FUN_026a2f70(&local_110,param_3,0);
        uStack_a8 = uStack_108;
        local_a0 = local_100;
        FUN_02687c20(&local_b0,0);
        FUN_026a2f70(&local_110,param_3,0);
        local_b0 = CONCAT44(uStack_10c,local_110);
        uStack_a8 = uStack_108;
        local_a0 = local_100;
        FUN_02687c90(&local_b0,0);
        FUN_013421d4(&local_90,uVar16 & 0xffffffff,2,1,*(undefined8 *)puVar8);
        iVar14 = FUN_01344a5c(local_70,*(undefined8 *)puVar5);
        puVar7 = 
        Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c__DisplayClass176_0_<UnusedElementGroup>b__0__
        ;
        puVar6 = 
        Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>__ctor__;
        if (0 < iVar14) {
          lVar19 = 0;
          uVar18 = 0;
          do {
            DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                      (local_70,uVar18 & 0xffffffff,&local_110,*(undefined8 *)puVar6);
            uVar12 = local_110;
            DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                      (local_70,uVar18 & 0xffffffff,&local_110,*(undefined8 *)puVar6);
            uVar13 = uStack_10c;
            DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                      (local_80,uVar18 & 0xffffffff,&local_110,*(undefined8 *)puVar7);
            uVar18 = uVar18 + 1;
            puVar1 = (undefined4 *)(local_90 + lVar19);
            *puVar1 = uVar12;
            puVar1[1] = uVar13;
            *(undefined8 *)(puVar1 + 2) = 0;
            *(undefined8 *)(puVar1 + 4) = 0;
            puVar1[6] = 0x3f800000;
            *(ulong *)(puVar1 + 7) = CONCAT44(uStack_10c,local_110);
            iVar14 = FUN_01344a5c(local_70,*(undefined8 *)puVar5);
            lVar19 = lVar19 + 0x24;
          } while ((long)uVar18 < (long)iVar14);
        }
        uVar18 = local_88;
        puVar5 = Method_SmackAJack_ClownHidden__;
        if (*(int *)(*(long *)Method_SmackAJack_ClownHidden__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        puVar11 = StringLiteral_9728;
        puVar10 = StringLiteral_517;
        puVar9 = Method_System_Linq_Expressions_Interpreter_LessThanInstruction_Create__;
        puVar8 = Method_Oculus_Interaction_InteractorUnityEventWrapper_HandleProcessed__;
        puVar7 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<WriteValueNotNullAsync>d__110>__
        ;
        puVar6 = 
        Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<ConsoleLine,_ProxyConsoleLine>__ctor__
        ;
        auVar2 = local_80;
        auVar4 = local_70;
        if (lVar15 != 0) {
          FUN_0266d128(lVar15,uVar18 & 0xffffffff,**(undefined8 **)(*(long *)puVar5 + 0xb8),0);
          FUN_01121c9c(lVar15,local_90,local_88,0,0,local_88 & 0xffffffff,0,0,*(undefined8 *)puVar8)
          ;
          FUN_011210ec(lVar15,auVar20._0_8_,uVar16,0,0,1,0,*(undefined8 *)puVar9);
          uVar17 = FUN_00da4fb8(*(undefined8 *)puVar6,local_88 & 0xffffffff);
          *(undefined8 *)(param_2 + 0x90) = uVar17;
          FUN_013439ac(local_90,local_88,uVar17,local_88 & 0xffffffff,*(undefined8 *)puVar7);
          uVar17 = FUN_00da4fb8(*(undefined8 *)puVar11,uVar16 & 0xffffffff);
          *(undefined8 *)(param_2 + 0x98) = uVar17;
          FUN_013439ac(auVar20._0_8_,uVar16,uVar17,uVar16 & 0xffffffff,*(undefined8 *)puVar10);
          UnityEngine_UIElements_VisualElementExtensions__AddManipulator(&local_110,lVar15,0,0);
          param_1[1] = uStack_108;
          *param_1 = CONCAT44(uStack_10c,local_110);
          param_1[2] = local_100;
          return;
        }
      }
    }
    else {
      auVar2 = auVar20;
      auVar4 = auVar3;
      if (lVar15 != 0) {
        FUN_0266ed50(lVar15,0);
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        FUN_02687990(param_1,0);
        return;
      }
    }
  }
  local_80 = auVar2;
  local_70 = auVar4;
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


