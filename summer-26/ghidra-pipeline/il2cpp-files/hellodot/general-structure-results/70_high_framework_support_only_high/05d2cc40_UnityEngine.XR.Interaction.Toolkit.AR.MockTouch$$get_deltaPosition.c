/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.AR.MockTouch$$get_deltaPosition
ENTRY_POINT: 05d2cc40
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_AR_MockTouch__get_deltaPosition
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  char cStack0000000000000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  AkMIDIEventCallbackInfo__get_byProgramNum
            (System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca018);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca020);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cbf18);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca030);
  AkMIDIEventCallbackInfo__get_byProgramNum
            (System_Collections_Generic_Dictionary<Type,_ObjectPool_IPoolClass>_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum
            (Oculus_Interaction_Input_DataModifier<ControllerDataAsset>_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum
            (UnityEngine_UIElements_UIR_Page_DataSet<ushort>_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
  *(undefined1 *)(unaff_x20 + 0x779) = 1;
  lVar10 = *unaff_x22;
  _cStack0000000000000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar10 = *unaff_x22;
  }
  auVar3._8_8_ = in_stack_00000028;
  auVar3._0_8_ = in_stack_00000020;
  lVar10 = **(long **)(lVar10 + 0xb8);
  if (lVar10 != 0) {
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    _in_stack_00000020 = auVar3;
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_05d2b518(&stack0x00000008);
      puVar9 = System_Collections_Generic_Dictionary<Type,_ObjectPool_IPoolClass>_TypeInfo;
      puVar8 = System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo;
      puVar7 = System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>_TypeInfo;
      puVar6 = 
      System_Collections_Generic_Dictionary<Type,_EventInterestReflectionUtils_DefaultEventInterests>_TypeInfo
      ;
      puVar5 = UnityEngine_UIElements_UIR_Page_DataSet<ushort>_TypeInfo;
      puVar4 = PTR_DAT_065ca020;
      in_stack_00000058 = in_stack_00000010;
      _cStack0000000000000050 = in_stack_00000008;
      uVar15 = _cStack0000000000000050;
      cStack0000000000000050 = (char)in_stack_00000008;
      in_stack_00000060 = in_stack_00000018;
      bVar1 = cStack0000000000000050 != '\0';
      _cStack0000000000000050 = uVar15;
      if (bVar1) {
        if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_05d2cfac;
        FUN_05d2b518(&stack0x00000008);
        in_stack_00000058 = in_stack_00000010;
        _cStack0000000000000050 = in_stack_00000008;
        in_stack_00000060 = in_stack_00000018;
        _in_stack_00000020 = FUN_03c7c254(&stack0x00000050,*(undefined8 *)puVar5);
        FUN_03c6fedc(&stack0x00000008,&stack0x00000020,*(undefined8 *)puVar9);
        in_stack_00000038 = in_stack_00000010;
        in_stack_00000030 = in_stack_00000008;
        in_stack_00000040 = in_stack_00000018;
        while (uVar11 = FUN_0482dfcc(&stack0x00000030,*(undefined8 *)puVar7), (uVar11 & 1) != 0) {
          uVar14 = FUN_0482e024(&stack0x00000030,*(undefined8 *)puVar8);
          lVar10 = *unaff_x22;
          uVar15 = param_2;
          uVar16 = param_3;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
            lVar10 = *unaff_x22;
          }
          lVar10 = **(long **)(lVar10 + 0xb8);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar13 = *(long *)(lVar10 + 0x10);
          lVar12 = *(long *)puVar4;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          uVar2 = *(uint *)(lVar10 + 0x18);
          if (uVar2 < *(uint *)(lVar13 + 0x18)) {
            lVar13 = lVar13 + (long)(int)uVar2 * 0xc;
            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
            *(int *)(lVar13 + 0x20) = (int)uVar14;
            *(int *)(lVar13 + 0x24) = (int)param_2;
            *(int *)(lVar13 + 0x28) = (int)param_3;
            param_2 = uVar15;
            param_3 = uVar16;
          }
          else {
            FUN_03a14600(uVar14,lVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_0482dfc8(&stack0x00000030,*(undefined8 *)puVar6);
      }
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_05ed6a1c(*(long *)(unaff_x19 + 0x20),0);
        lVar10 = *(long *)(unaff_x19 + 0x20);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        if (lVar10 != 0) {
          FUN_05ed17fc(lVar10,**(undefined8 **)(*unaff_x22 + 0xb8),0);
          puVar4 = PTR_DAT_065c8c40;
          if (**(long **)(*unaff_x22 + 0xb8) != 0) {
            lVar10 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065ca018,
                                  *(undefined4 *)(**(long **)(*unaff_x22 + 0xb8) + 0x18));
            lVar12 = *unaff_x22;
            uVar11 = 0;
            while( true ) {
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
                lVar12 = *unaff_x22;
              }
              if (**(long **)(lVar12 + 0xb8) == 0) goto LAB_05d2cfac;
              if ((long)*(int *)(**(long **)(lVar12 + 0xb8) + 0x18) <= (long)uVar11) break;
              if (lVar10 == 0) goto LAB_05d2cfac;
              if (*(uint *)(lVar10 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c84();
              }
              *(int *)(lVar10 + 0x20 + uVar11 * 4) = (int)uVar11;
              uVar11 = uVar11 + 1;
            }
            if (*(long *)(unaff_x19 + 0x20) != 0) {
              FUN_05ed5bc4(*(long *)(unaff_x19 + 0x20),lVar10,5,0,0);
              lVar10 = FUN_03392fac();
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_02cd038c(*(long *)puVar4);
              }
              uVar11 = FUN_05ef59b8(lVar10,0,0);
              if ((uVar11 & 1) != 0) {
                if (lVar10 == 0) goto LAB_05d2cfac;
                FUN_05ecdfa4(lVar10,*(undefined8 *)(unaff_x19 + 0x20),0);
              }
              return;
            }
          }
        }
      }
    }
  }
LAB_05d2cfac:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


