/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$ToggleEffectMeshVisibility
ENTRY_POINT: 0146de88
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16]
Meta_XR_MRUtilityKit_EffectMesh__ToggleEffectMeshVisibility
          (undefined1 param_1 [16],undefined4 param_2,undefined1 param_3 [16],undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long unaff_x21;
  long unaff_x22;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uStack0000000000000004;
  undefined4 uStack000000000000000c;
  
  *(undefined1 *)(unaff_x22 + 0xaef) = in_w8;
  if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) {
LAB_0146e260:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar3 = FUN_015fe250(*(long *)(unaff_x21 + 0x10),*(undefined8 *)StringLiteral_12470,0);
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((uVar3 & 1) != 0) {
    uVar7 = 0;
    uVar6 = 0x3f000000;
    goto LAB_0146e230;
  }
  if (*(long *)(unaff_x21 + 0x10) == 0) goto LAB_0146e260;
  uVar3 = FUN_015fe250(*(long *)(unaff_x21 + 0x10),*(undefined8 *)PTR_DAT_033ec030,0);
  puVar1 = System_Runtime_InteropServices_InAttribute_TypeInfo;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar3 = FUN_02681b9c();
    if ((uVar3 & 1) != 0) {
      if (unaff_x19 == 0) goto LAB_0146e260;
      uVar3 = FUN_0267e21c();
      if ((uVar3 & 1) != 0) {
        uVar7 = 0;
        uVar6 = 0x3f800000;
        goto LAB_0146e230;
      }
    }
    goto LAB_0146e220;
  }
  if (*(long *)(unaff_x21 + 0x10) == 0) goto LAB_0146e260;
  uVar3 = FUN_015fe250(*(long *)(unaff_x21 + 0x10),
                       *(undefined8 *)
                        Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                       ,0);
  if ((uVar3 & 1) == 0) {
    if (*(long *)(unaff_x21 + 0x10) == 0) goto LAB_0146e260;
    uVar3 = FUN_015fe250(*(long *)(unaff_x21 + 0x10),
                         *(undefined8 *)Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__,
                         0);
    if ((uVar3 & 1) == 0) {
      if (*(long *)(unaff_x21 + 0x10) == 0) goto LAB_0146e260;
      uVar3 = FUN_015fe250(*(long *)(unaff_x21 + 0x10),
                           *(undefined8 *)UnityEngine_InputSystem_InputProcessor_TypeInfo,0);
      uVar6 = 0;
      uVar7 = 0;
      if ((uVar3 & 1) != 0) goto LAB_0146e230;
      if (*(long *)(unaff_x21 + 0x10) == 0) goto LAB_0146e260;
      uVar3 = FUN_015fe250(*(long *)(unaff_x21 + 0x10),*(undefined8 *)StringLiteral_5916,0);
      if ((uVar3 & 1) != 0) {
        uVar7 = 0;
        uVar6 = 0x3f800000;
        goto LAB_0146e230;
      }
      if (*(long *)(unaff_x21 + 0x10) == 0) goto LAB_0146e260;
      uVar3 = FUN_015fe250(*(long *)(unaff_x21 + 0x10),
                           *(undefined8 *)
                            Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_<TryBuildImmutableForDictionaryContract>b__0__
                           ,0);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(unaff_x21 + 0x10) == 0) goto LAB_0146e260;
        uVar3 = FUN_015fe250(*(long *)(unaff_x21 + 0x10),
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_TryGetValue__
                             ,0);
        if ((uVar3 & 1) != 0) goto LAB_0146e230;
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar3 = FUN_02681b9c();
        if ((uVar3 & 1) != 0) {
          if (unaff_x19 == 0) goto LAB_0146e260;
          uVar3 = FUN_0267e394();
          if ((uVar3 & 1) != 0) {
            uVar3 = FUN_0267e21c();
            if ((uVar3 & 1) != 0) {
              auVar5 = FUN_0267d928();
              uVar7 = auVar5._8_8_;
              uVar6 = auVar5._0_8_;
              lVar4 = *(long *)(unaff_x20 + 0x10);
              uStack0000000000000004 = param_2;
              uStack000000000000000c = param_4;
              thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_7349);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_0146af84(lVar4);
            }
            goto LAB_0146e230;
          }
          goto LAB_0146e100;
        }
      }
LAB_0146e220:
      uVar7 = 0;
      uVar6 = 0x3f800000;
      goto LAB_0146e230;
    }
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar3 = FUN_0267e21c();
    if ((uVar3 & 1) != 0) {
      FUN_0267f5a0();
    }
    lVar4 = *(long *)(unaff_x20 + 0x10);
    thunk_FUN_00d61fa0(*(undefined8 *)puVar1);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0146af84(lVar4);
    uVar7 = 0;
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar3 = FUN_02681b9c();
    uVar7 = 0;
    if ((uVar3 & 1) != 0) {
      if (unaff_x19 == 0) goto LAB_0146e260;
      uVar3 = FUN_0267e21c();
      if ((uVar3 & 1) != 0) {
        FUN_0267f5a0();
        lVar4 = *(long *)(unaff_x20 + 0x10);
        thunk_FUN_00d61fa0(*(undefined8 *)puVar1);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0146af84(lVar4);
      }
    }
  }
LAB_0146e100:
  uVar6 = 0;
LAB_0146e230:
  auVar5._8_8_ = uVar7;
  auVar5._0_8_ = uVar6;
  return auVar5;
}


