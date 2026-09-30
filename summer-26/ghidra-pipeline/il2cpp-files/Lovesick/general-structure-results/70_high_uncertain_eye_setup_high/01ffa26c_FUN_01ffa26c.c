/*
FUNCTION_NAME: FUN_01ffa26c
ENTRY_POINT: 01ffa26c
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


void FUN_01ffa26c(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  
  puVar6 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((DAT_03780844 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ShadowCaster2D>_get_Item__);
    thunk_FUN_00d48444(System_Collections_Generic_IReadOnlyCollection<CommonTouch>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<PorchTempoTarget_AudioSourcePitchSet>_Dispose__
                      );
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_03780844 = 1;
  }
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_01789ac0(param_2,0,0);
  puVar2 = Method_System_Collections_Generic_List<ShadowCaster2D>_get_Item__;
  if ((uVar3 & 1) == 0) {
    if (param_3 != 0) {
      if (param_4 == 0) {
        thunk_FUN_00d48444(PTR_DAT_033f37c8);
        uVar10 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        puVar6 = System_Collections_Generic_Stack<ParameterExpression>_TypeInfo;
        goto LAB_01ffa4b4;
      }
      if (*(int *)(param_3 + 0x18) != *(int *)(param_4 + 0x18)) {
        uVar10 = thunk_FUN_00d48444(PTR_DAT_033f1870);
        uVar10 = FUN_015e2414(uVar10,0);
        thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
        uVar7 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        FUN_016f2f28(uVar7,uVar10,0);
        uVar10 = thunk_FUN_00d48444(
                                   Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass13_0_<DOIntensity>b__0__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar7,uVar10);
      }
    }
    if (param_1 != (long *)0x0) {
      uVar10 = *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<CommonTouch>_TypeInfo;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_01780344(uVar10,0);
      lVar8 = *param_1;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_01ffa3a4;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724(param_1,*(long *)puVar2,0);
LAB_01ffa3a4:
      plVar5 = (long *)(*(code *)*puVar4)(param_1,uVar10,puVar4[1]);
      if (plVar5 != (long *)0x0) {
        lVar8 = *plVar5;
        bVar1 = *(byte *)(*(long *)
                           Method_System_Collections_Generic_List_Enumerator<PorchTempoTarget_AudioSourcePitchSet>_Dispose__
                         + 300);
        if (((bVar1 <= *(byte *)(lVar8 + 300)) &&
            (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) ==
             *(long *)
              Method_System_Collections_Generic_List_Enumerator<PorchTempoTarget_AudioSourcePitchSet>_Dispose__
            )) && (lVar8 = (**(code **)(lVar8 + 0x178))
                                     (plVar5,param_1,param_2,param_3,param_4,
                                      *(undefined8 *)(lVar8 + 0x180)), lVar8 != 0)) {
          return;
        }
      }
    }
    if (*(int *)(*(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar5 = (long *)FUN_01ffa538(param_2);
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01ffa438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x178))
                (plVar5,param_1,param_2,param_3,param_4,*(undefined8 *)(*plVar5 + 0x180));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  thunk_FUN_00d48444(PTR_DAT_033f37c8);
  uVar10 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  puVar6 = PTR_DAT_033ec808;
LAB_01ffa4b4:
  uVar7 = thunk_FUN_00d48444(puVar6);
  FUN_016ec5b8(uVar10,uVar7,0);
  uVar7 = thunk_FUN_00d48444(
                            Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass13_0_<DOIntensity>b__0__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar10,uVar7);
}


