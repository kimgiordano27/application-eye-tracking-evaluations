/*
FUNCTION_NAME: FUN_00f9c52c
ENTRY_POINT: 00f9c52c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f9c52c(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_03775971 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_XR_ARSubsystems_XRCpuImage_Api_ConvertAsync__);
    thunk_FUN_00d48444(Method_Sirenix_Utilities_EmitUtilities_CreateWeakInstancePropertySetter__);
    thunk_FUN_00d48444(StringLiteral_4197);
    thunk_FUN_00d48444(Method_System_Nullable<ARRaycastHit>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<VRequest_<WaitForTurn>d__5>__
                      );
    thunk_FUN_00d48444(System_Linq_Expressions_ConditionalExpression_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_79);
    thunk_FUN_00d48444(DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass1_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<UsageHint>_get_Current__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_s32__);
    DAT_03775971 = 1;
  }
  uVar2 = DAT_028aa9b8;
  uVar6 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x9c) = uVar6;
  uVar6 = DAT_028aa9c0;
  *(undefined8 *)(param_1 + 0x4c) = uVar2;
  *(undefined8 *)(param_1 + 0x68) = DAT_028aa9c8;
  uVar2 = DAT_028aa9d0;
  *(undefined4 *)(param_1 + 0x84) = 0x3f19999a;
  *(undefined8 *)(param_1 + 0x74) = uVar2;
  uVar2 = DAT_028aa8e0;
  *(undefined4 *)(param_1 + 0x94) = 0x3f000000;
  *(undefined8 *)(param_1 + 0x8c) = uVar2;
  uVar3 = _UNK_028aaa08;
  uVar2 = _DAT_028aaa00;
  *(undefined2 *)(param_1 + 0x48) = 0x101;
  *(undefined2 *)(param_1 + 0x88) = 0x101;
  *(undefined8 *)(param_1 + 0x5c) = uVar6;
  *(undefined1 *)(param_1 + 0x58) = 1;
  *(undefined1 *)(param_1 + 100) = 1;
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined1 *)(param_1 + 0x98) = 1;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xa8) = 1;
  *(undefined8 *)(param_1 + 0xbc) = 0x3f00000040c00000;
  *(undefined8 *)(param_1 + 0xb4) = uVar3;
  *(undefined8 *)(param_1 + 0xac) = uVar2;
  puVar4 = Method_System_Collections_Generic_List_Enumerator<UsageHint>_get_Current__;
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  uVar1 = *(undefined4 *)
           (*(undefined8 **)
             (*(long *)
               Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
             0xb8) + 1);
  *(undefined8 *)(param_1 + 0xec) =
       **(undefined8 **)
         (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
         0xb8);
  *(undefined4 *)(param_1 + 0xf4) = uVar1;
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
  puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_s32__;
  if (lVar5 != 0) {
    FUN_01320e50(lVar5,*(undefined8 *)StringLiteral_79);
    *(long *)(param_1 + 0xf8) = lVar5;
    *(undefined1 *)(param_1 + 0x121) = 1;
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    puVar4 = Method_System_Nullable<ARRaycastHit>__ctor__;
    if (lVar5 != 0) {
      FUN_01320e50(lVar5,*(undefined8 *)
                          DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass1_0_TypeInfo);
      *(long *)(param_1 + 0x178) = lVar5;
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      puVar4 = System_Linq_Expressions_ConditionalExpression_TypeInfo;
      if (lVar5 != 0) {
        FUN_01298da0(lVar5,*(undefined8 *)StringLiteral_4197);
        *(long *)(param_1 + 0x180) = lVar5;
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        puVar4 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<VRequest_<WaitForTurn>d__5>__
        ;
        if (lVar5 != 0) {
          FUN_01298da0(lVar5,*(undefined8 *)
                              Method_UnityEngine_XR_ARSubsystems_XRCpuImage_Api_ConvertAsync__);
          *(long *)(param_1 + 0x188) = lVar5;
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
          if (lVar5 != 0) {
            FUN_01298da0(lVar5,*(undefined8 *)
                                Method_Sirenix_Utilities_EmitUtilities_CreateWeakInstancePropertySetter__
                        );
            *(long *)(param_1 + 400) = lVar5;
            thunk_FUN_0268a01c(param_1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


