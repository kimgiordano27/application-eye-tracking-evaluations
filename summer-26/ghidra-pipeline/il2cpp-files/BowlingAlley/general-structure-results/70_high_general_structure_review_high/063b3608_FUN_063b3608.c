/*
FUNCTION_NAME: FUN_063b3608
ENTRY_POINT: 063b3608
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_063b3608(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  puVar2 = UnityEngine_Rendering_Universal_RenderingData_TypeInfo;
  if ((DAT_076decdb & 1) == 0) {
    thunk_FUN_032e1da0(System_Reflection_RuntimeFieldInfo_TypeInfo);
    thunk_FUN_032e1da0(System_Runtime_InteropServices_RuntimeInformation_TypeInfo);
    thunk_FUN_032e1da0(System_RuntimeMethodHandle_TypeInfo);
    thunk_FUN_032e1da0(System_Reflection_RuntimeMethodInfo_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072850d8);
    thunk_FUN_032e1da0(UnityEngine_UIElements_RepaintData_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072851a8);
    thunk_FUN_032e1da0(PTR_DAT_07284668);
    thunk_FUN_032e1da0(UnityEngine_Rendering_Universal_RenderingData_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_RuntimePanel_TypeInfo);
    thunk_FUN_032e1da0(System_Reflection_RuntimeParameterInfo_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_RuntimePlatform_TypeInfo);
    thunk_FUN_032e1da0(Unity_XR_Oculus_RuntimePlatformChecks_TypeInfo);
    thunk_FUN_032e1da0(Mono_RuntimePropertyHandle_TypeInfo);
    thunk_FUN_032e1da0(System_Reflection_RuntimePropertyInfo_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_XR_ARSubsystems_RuntimeReferenceImageLibrary_TypeInfo);
    thunk_FUN_032e1da0(Meta_XR_ImmersiveDebugger_RuntimeSettings_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072851c0);
    thunk_FUN_032e1da0(Meta_XR_InputActions_RuntimeSettings_TypeInfo);
    thunk_FUN_032e1da0(Internal_Runtime_Augments_RuntimeThread_TypeInfo);
    thunk_FUN_032e1da0(System_Text_RegularExpressions_RegexTree_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07287a20);
    thunk_FUN_032e1da0(System_RuntimeType_TypeInfo);
    thunk_FUN_032e1da0(System_RuntimeTypeHandle_TypeInfo);
    thunk_FUN_032e1da0(System_Net_Cache_RequestCacheLevel_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_0728d7a8);
    thunk_FUN_032e1da0(PTR_DAT_072878b8);
    DAT_076decdb = 1;
  }
  lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
  FUN_06dde1c4(lVar4,0);
  puVar3 = UnityEngine_XR_ARSubsystems_RuntimeReferenceImageLibrary_TypeInfo;
  puVar1 = System_Reflection_RuntimeParameterInfo_TypeInfo;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)System_Net_Cache_RequestCacheLevel_TypeInfo;
    thunk_FUN_0333a630();
    auVar5 = _DAT_013a1e20;
    *(long *)(lVar4 + 0x48) = DAT_013a1e20._8_8_;
    *(long *)(lVar4 + 0x40) = auVar5._0_8_;
    *(long *)(param_1 + 0xa8) = lVar4;
    thunk_FUN_0333a630((long *)(param_1 + 0xa8),lVar4);
    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
    FUN_04c4a8b8(lVar4,*(undefined8 *)puVar1);
    puVar3 = Mono_RuntimePropertyHandle_TypeInfo;
    puVar1 = UnityEngine_UIElements_RuntimePanel_TypeInfo;
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x10) =
           *(undefined8 *)System_Text_RegularExpressions_RegexTree_TypeInfo;
      thunk_FUN_0333a630();
      *(undefined4 *)(lVar4 + 0x40) = 0;
      *(long *)(param_1 + 0xb0) = lVar4;
      thunk_FUN_0333a630((long *)(param_1 + 0xb0),lVar4);
      lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
      FUN_04c4a8b8(lVar4,*(undefined8 *)puVar1);
      puVar3 = Meta_XR_ImmersiveDebugger_RuntimeSettings_TypeInfo;
      puVar1 = UnityEngine_RuntimePlatform_TypeInfo;
      if (lVar4 != 0) {
        *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)Meta_XR_InputActions_RuntimeSettings_TypeInfo
        ;
        thunk_FUN_0333a630();
        *(undefined4 *)(lVar4 + 0x40) = 0;
        *(long *)(param_1 + 0xb8) = lVar4;
        thunk_FUN_0333a630((long *)(param_1 + 0xb8),lVar4);
        lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
        FUN_04c4a8b8(lVar4,*(undefined8 *)puVar1);
        puVar3 = System_Reflection_RuntimePropertyInfo_TypeInfo;
        puVar1 = Unity_XR_Oculus_RuntimePlatformChecks_TypeInfo;
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)System_RuntimeType_TypeInfo;
          thunk_FUN_0333a630();
          *(undefined4 *)(lVar4 + 0x40) = 1;
          *(long *)(param_1 + 0xc0) = lVar4;
          thunk_FUN_0333a630((long *)(param_1 + 0xc0),lVar4);
          lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
          FUN_04c4a8b8(lVar4,*(undefined8 *)puVar1);
          puVar1 = PTR_DAT_072851c0;
          if (lVar4 != 0) {
            *(undefined8 *)(lVar4 + 0x10) =
                 *(undefined8 *)Internal_Runtime_Augments_RuntimeThread_TypeInfo;
            thunk_FUN_0333a630();
            *(undefined4 *)(lVar4 + 0x40) = 0;
            *(long *)(param_1 + 200) = lVar4;
            thunk_FUN_0333a630((long *)(param_1 + 200),lVar4);
            lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
            FUN_06ddd094(lVar4,0);
            if (lVar4 != 0) {
              *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_0728d7a8;
              thunk_FUN_0333a630();
              *(undefined4 *)(lVar4 + 0x40) = 0;
              *(long *)(param_1 + 0xd0) = lVar4;
              thunk_FUN_0333a630((long *)(param_1 + 0xd0),lVar4);
              lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
              FUN_06ddd094(lVar4,0);
              puVar1 = PTR_DAT_07284668;
              if (lVar4 != 0) {
                *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_07287a20;
                thunk_FUN_0333a630();
                *(undefined4 *)(lVar4 + 0x40) = 0x7fffffff;
                *(long *)(param_1 + 0xd8) = lVar4;
                thunk_FUN_0333a630((long *)(param_1 + 0xd8),lVar4);
                lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                FUN_06dd4278(lVar4,0);
                if (lVar4 != 0) {
                  *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)System_RuntimeTypeHandle_TypeInfo;
                  thunk_FUN_0333a630();
                  *(undefined1 *)(lVar4 + 0x40) = 0;
                  *(long *)(param_1 + 0xe0) = lVar4;
                  thunk_FUN_0333a630((long *)(param_1 + 0xe0),lVar4);
                  lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
                  FUN_06dde1c4(lVar4,0);
                  if (lVar4 != 0) {
                    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_072878b8;
                    thunk_FUN_0333a630();
                    auVar5 = NEON_fmov(0x3f800000,4);
                    *(long *)(lVar4 + 0x48) = auVar5._8_8_;
                    *(long *)(lVar4 + 0x40) = auVar5._0_8_;
                    *(long *)(param_1 + 0xe8) = lVar4;
                    thunk_FUN_0333a630((long *)(param_1 + 0xe8),lVar4);
                    FUN_063a447c(param_1);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


