/*
FUNCTION_NAME: FUN_02664fc8
ENTRY_POINT: 02664fc8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


void FUN_02664fc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = StringLiteral_2109;
  if ((DAT_03784697 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_3485);
    thunk_FUN_00d48444(StringLiteral_789);
    thunk_FUN_00d48444(Method_Meta_WitAi_Requests_VRequest_Request<Dictionary<string,_string>>__);
    thunk_FUN_00d48444(StringLiteral_5326);
    thunk_FUN_00d48444(PTR_DAT_033f2588);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrev64_s32__);
    thunk_FUN_00d48444(PTR_DAT_033f5ef8);
    thunk_FUN_00d48444(StringLiteral_3172);
    thunk_FUN_00d48444(StringLiteral_1636);
    thunk_FUN_00d48444(Method_System_Guid_GuidResult_SetFailure__);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_DebugUI_Field<Vector4>__ctor__);
    thunk_FUN_00d48444(Meta_WitAi_Events_WitResponseEvent_TypeInfo);
    thunk_FUN_00d48444(
                      <>f__AnonymousType0<HandFinger,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>_TypeInfo
                      );
    thunk_FUN_00d48444(PTR_DAT_033f3508);
    thunk_FUN_00d48444(StringLiteral_2109);
    thunk_FUN_00d48444(Method_AutoExtensions_CanGetComponent<Candle>__);
    DAT_03784697 = 1;
  }
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = Method_AutoExtensions_CanGetComponent<Candle>__;
  if (lVar5 != 0) {
    FUN_017b46ec(lVar5,0);
    *(undefined8 *)(lVar5 + 0x10) = param_2;
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar1;
    }
    puVar2 = StringLiteral_1636;
    lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if (lVar7 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar6 + 0xb8);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar7 == 0) goto LAB_02665304;
      FUN_012d239c(lVar7,uVar8,*(undefined8 *)Method_System_Guid_GuidResult_SetFailure__,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar7;
    }
    puVar2 = PTR_DAT_033f5ef8;
    uVar8 = FUN_010dca98(param_1,lVar7,*(undefined8 *)StringLiteral_3485);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrev64_s32__;
    puVar3 = Method_Meta_WitAi_Requests_VRequest_Request<Dictionary<string,_string>>__;
    if (lVar6 != 0) {
      FUN_012d239c(lVar6,lVar5,*(undefined8 *)Meta_WitAi_Events_WitResponseEvent_TypeInfo,0);
      uVar8 = FUN_010df4b4(uVar8,lVar6,*(undefined8 *)puVar3);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      puVar4 = StringLiteral_789;
      if (lVar6 != 0) {
        FUN_012d239c(lVar6,lVar5,
                     *(undefined8 *)
                      <>f__AnonymousType0<HandFinger,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>_TypeInfo
                     ,0);
        uVar8 = FUN_010df4b4(uVar8,lVar6,*(undefined8 *)puVar4);
        lVar6 = *(long *)puVar1;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar6);
          lVar6 = *(long *)puVar1;
        }
        puVar4 = StringLiteral_3172;
        lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
        if (lVar7 == 0) {
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar6);
            lVar6 = *(long *)puVar1;
          }
          uVar9 = **(undefined8 **)(lVar6 + 0xb8);
          lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
          if (lVar7 == 0) goto LAB_02665304;
          FUN_012d239c(lVar7,uVar9,
                       *(undefined8 *)Method_UnityEngine_Rendering_DebugUI_Field<Vector4>__ctor__,0)
          ;
          *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar7;
        }
        uVar8 = FUN_010df4b4(uVar8,lVar7,*(undefined8 *)StringLiteral_5326);
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        puVar1 = PTR_DAT_033f2588;
        if (lVar6 != 0) {
          FUN_012d239c(lVar6,lVar5,*(undefined8 *)PTR_DAT_033f3508,0);
          uVar8 = FUN_010df4b4(uVar8,lVar6,*(undefined8 *)puVar3);
          FUN_010df6b8(uVar8,*(undefined8 *)puVar1);
          return;
        }
      }
    }
  }
LAB_02665304:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


