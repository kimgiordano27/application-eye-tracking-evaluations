/*
FUNCTION_NAME: FUN_0268d384
ENTRY_POINT: 0268d384
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_0268d384(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_03785ec1 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtnq_u64_f64__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_VisualElementFocusRing_GetFocusChangeDirection__
                      );
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Linq_JToken_op_Explicit__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vabdq_f32__);
    thunk_FUN_00d48444(System_Collections_Generic_List<ITelemetryWriter>_TypeInfo);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeTransform_00000D6C_BurstDirectCall_TypeInfo
                      );
    thunk_FUN_00d48444(Sirenix_Utilities_DeepReflection_<>c__DisplayClass21_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2465);
    thunk_FUN_00d48444(Method_UnityEngine__AndroidJNIHelper_ConvertToJNIArray__);
    DAT_03785ec1 = 1;
  }
  plVar5 = (long *)FUN_0161b700(0);
  puVar1 = Method_UnityEngine_UIElements_VisualElementFocusRing_GetFocusChangeDirection__;
  if (plVar5 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar5 + 0x318))(plVar5,*(undefined8 *)(*plVar5 + 800));
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtnq_u64_f64__;
    puVar1 = Method_UnityEngine__AndroidJNIHelper_ConvertToJNIArray__;
    if (lVar6 != 0) {
      FUN_01608234(lVar6,*(undefined8 *)Method_UnityEngine__AndroidJNIHelper_ConvertToJNIArray__,0);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar3 = Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
      puVar2 = 
      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeTransform_00000D6C_BurstDirectCall_TypeInfo
      ;
      if (lVar7 != 0) {
        FUN_017f8ef0(lVar7,*(undefined8 *)puVar1,0);
        uVar8 = FUN_0161d574(uVar4,lVar6,lVar7,0);
        *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = uVar8;
        plVar5 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (plVar5 != (long *)0x0) {
          FUN_0160ebf0(plVar5,1,1,1,0);
          plVar9 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar2);
          puVar1 = StringLiteral_2465;
          if (plVar9 != (long *)0x0) {
            FUN_0160ebf0(plVar9,0,1,1,0);
            plVar10 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if (plVar10 != (long *)0x0) {
              FUN_01616d64(plVar10,1,1,1,0);
              plVar11 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar1);
              puVar1 = Sirenix_Utilities_DeepReflection_<>c__DisplayClass21_0_TypeInfo;
              if (plVar11 != (long *)0x0) {
                FUN_01616d64(plVar11,0,1,1,0);
                plVar12 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar1);
                puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vabdq_f32__;
                puVar1 = System_Collections_Generic_List<ITelemetryWriter>_TypeInfo;
                if (plVar12 != (long *)0x0) {
                  FUN_016134d0(plVar12,1,1,0);
                  lVar6 = FUN_00da4fb8(*(undefined8 *)puVar2,5);
                  uVar8 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
                  local_60 = 0;
                  uStack_58 = 0;
                  FUN_0131423c(&local_60,uVar8,plVar5,*(undefined8 *)puVar1);
                  if (lVar6 != 0) {
                    if (*(int *)(lVar6 + 0x18) != 0) {
                      *(undefined8 *)(lVar6 + 0x28) = uStack_58;
                      *(undefined8 *)(lVar6 + 0x20) = local_60;
                      uVar8 = (**(code **)(*plVar9 + 0x198))
                                        (plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
                      local_70 = 0;
                      uStack_68 = 0;
                      FUN_0131423c(&local_70,uVar8,plVar9,*(undefined8 *)puVar1);
                      if (1 < *(uint *)(lVar6 + 0x18)) {
                        *(undefined8 *)(lVar6 + 0x38) = uStack_68;
                        *(undefined8 *)(lVar6 + 0x30) = local_70;
                        uVar8 = (**(code **)(*plVar10 + 0x198))
                                          (plVar10,*(undefined8 *)(*plVar10 + 0x1a0));
                        local_80 = 0;
                        uStack_78 = 0;
                        FUN_0131423c(&local_80,uVar8,plVar10,*(undefined8 *)puVar1);
                        if (2 < *(uint *)(lVar6 + 0x18)) {
                          *(undefined8 *)(lVar6 + 0x48) = uStack_78;
                          *(undefined8 *)(lVar6 + 0x40) = local_80;
                          uVar8 = (**(code **)(*plVar11 + 0x198))
                                            (plVar11,*(undefined8 *)(*plVar11 + 0x1a0));
                          local_90 = 0;
                          uStack_88 = 0;
                          FUN_0131423c(&local_90,uVar8,plVar11,*(undefined8 *)puVar1);
                          if (3 < *(uint *)(lVar6 + 0x18)) {
                            *(undefined8 *)(lVar6 + 0x58) = uStack_88;
                            *(undefined8 *)(lVar6 + 0x50) = local_90;
                            uVar8 = (**(code **)(*plVar12 + 0x198))
                                              (plVar12,*(undefined8 *)(*plVar12 + 0x1a0));
                            local_a0 = 0;
                            uStack_98 = 0;
                            FUN_0131423c(&local_a0,uVar8,plVar12,*(undefined8 *)puVar1);
                            if (4 < *(uint *)(lVar6 + 0x18)) {
                              *(undefined8 *)(lVar6 + 0x68) = uStack_98;
                              *(undefined8 *)(lVar6 + 0x60) = local_a0;
                              **(long **)(*(long *)puVar3 + 0xb8) = lVar6;
                              return;
                            }
                          }
                        }
                      }
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
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
  FUN_00da518c();
}


