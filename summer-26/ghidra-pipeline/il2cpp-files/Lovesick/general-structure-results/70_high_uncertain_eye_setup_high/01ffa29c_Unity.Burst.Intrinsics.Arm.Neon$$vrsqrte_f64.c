/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vrsqrte_f64
ENTRY_POINT: 01ffa29c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Burst_Intrinsics_Arm_Neon__vrsqrte_f64(ulong param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 uVar9;
  long unaff_x24;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ShadowCaster2D>_get_Item__);
    thunk_FUN_00d48444(System_Collections_Generic_IReadOnlyCollection<CommonTouch>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<PorchTempoTarget_AudioSourcePitchSet>_Dispose__
                      );
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    *(undefined1 *)(unaff_x24 + 0x844) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar2 = FUN_01789ac0();
  puVar5 = Method_System_Collections_Generic_List<ShadowCaster2D>_get_Item__;
  if ((uVar2 & 1) == 0) {
    if (unaff_x20 != 0) {
      if (unaff_x19 == 0) {
        thunk_FUN_00d48444(PTR_DAT_033f37c8);
        uVar9 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        puVar5 = System_Collections_Generic_Stack<ParameterExpression>_TypeInfo;
        goto LAB_01ffa4b4;
      }
      if (*(int *)(unaff_x20 + 0x18) != *(int *)(unaff_x19 + 0x18)) {
        uVar9 = thunk_FUN_00d48444(PTR_DAT_033f1870);
        uVar9 = FUN_015e2414(uVar9,0);
        thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
        uVar6 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        FUN_016f2f28(uVar6,uVar9,0);
        uVar9 = thunk_FUN_00d48444(
                                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass13_0_<DOIntensity>b__0__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar6,uVar9);
      }
    }
    if (unaff_x22 != (long *)0x0) {
      uVar9 = *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<CommonTouch>_TypeInfo;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01780344(uVar9,0);
      lVar7 = *unaff_x22;
      uVar2 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar5) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_01ffa3a4;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_00d59724();
LAB_01ffa3a4:
      plVar4 = (long *)(*(code *)*puVar3)();
      if (plVar4 != (long *)0x0) {
        lVar7 = *plVar4;
        bVar1 = *(byte *)(*(long *)
                           Method_System_Collections_Generic_List_Enumerator<PorchTempoTarget_AudioSourcePitchSet>_Dispose__
                         + 300);
        if (((bVar1 <= *(byte *)(lVar7 + 300)) &&
            (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) ==
             *(long *)
              Method_System_Collections_Generic_List_Enumerator<PorchTempoTarget_AudioSourcePitchSet>_Dispose__
            )) && (lVar7 = (**(code **)(lVar7 + 0x178))(), lVar7 != 0)) {
          return;
        }
      }
    }
    if (*(int *)(*(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar4 = (long *)FUN_01ffa538();
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01ffa438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x178))();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  thunk_FUN_00d48444(PTR_DAT_033f37c8);
  uVar9 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  puVar5 = PTR_DAT_033ec808;
LAB_01ffa4b4:
  uVar6 = thunk_FUN_00d48444(puVar5);
  FUN_016ec5b8(uVar9,uVar6,0);
  uVar6 = thunk_FUN_00d48444(
                            Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass13_0_<DOIntensity>b__0__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar9,uVar6);
}


