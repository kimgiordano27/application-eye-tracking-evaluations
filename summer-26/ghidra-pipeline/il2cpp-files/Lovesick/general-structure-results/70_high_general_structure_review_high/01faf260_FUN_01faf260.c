/*
FUNCTION_NAME: FUN_01faf260
ENTRY_POINT: 01faf260
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void FUN_01faf260(long param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  
  puVar2 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
  if ((DAT_0378062c & 1) == 0) {
    thunk_FUN_00d48444(Method_Sirenix_Serialization_FormatterLocator_GetFormatter__);
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_IXRCustomReticleProvider_TypeInfo);
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033f2c98);
    thunk_FUN_00d48444(PTR_DAT_033eb1d8);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass66_0_<DOLocalPath>b__0__
                      );
    thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonWriter_InternalWriteWhitespace__);
    DAT_0378062c = 1;
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar6 = *(long *)puVar2;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar8;
  *(undefined8 *)(param_1 + 0x30) = uVar8;
  FUN_017b46ec(param_1,0);
  if (param_2 != (long *)0x0) {
    *(long *)(param_1 + 0x10) = param_2[0xd];
    puVar2 = UnityEngine_XR_Interaction_Toolkit_IXRCustomReticleProvider_TypeInfo;
    if (param_2[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar8 = *(undefined8 *)(param_2[0xb] + 0x50);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_IXRCustomReticleProvider_TypeInfo
                              );
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_017b46ec(lVar6,0);
    *(undefined8 *)(lVar6 + 0x18) = uVar8;
    *(undefined1 *)(lVar6 + 0x20) = 0;
    *(undefined8 *)(lVar6 + 0x28) = param_3;
    FUN_01fab798(lVar6,uVar8,0,param_3);
    *(long *)(param_1 + 0x20) = lVar6;
    puVar3 = Method_Sirenix_Serialization_FormatterLocator_GetFormatter__;
    plVar10 = (long *)param_2[0xc];
    if (plVar10 != (long *)0x0) {
      uVar4 = FUN_0173d2f4(plVar10,0);
      uVar8 = FUN_00da4fb8(*(undefined8 *)puVar3,uVar4);
      *(undefined8 *)(param_1 + 0x28) = uVar8;
      iVar5 = FUN_0173d2f4(plVar10,0);
      puVar3 = Method_Newtonsoft_Json_JsonWriter_InternalWriteWhitespace__;
      if (0 < iVar5) {
        uVar9 = 0;
        do {
          plVar12 = *(long **)(param_1 + 0x28);
          plVar7 = (long *)(**(code **)(*plVar10 + 0x308))
                                     (plVar10,uVar9 & 0xffffffff,*(undefined8 *)(*plVar10 + 0x310));
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          bVar1 = *(byte *)(*(long *)puVar3 + 300);
          if ((*(byte *)(*plVar7 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c();
          }
          lVar11 = plVar7[10];
          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_017b46ec(lVar6,0);
          *(long *)(lVar6 + 0x18) = lVar11;
          *(undefined1 *)(lVar6 + 0x20) = 1;
          *(undefined8 *)(lVar6 + 0x28) = param_3;
          FUN_01fab798(lVar6,lVar11,1,param_3);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar11 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar12 + 0x40));
          if (lVar11 == 0) {
            uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar8,0);
          }
          if (*(uint *)(plVar12 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar12[uVar9 + 4] = lVar6;
          uVar9 = uVar9 + 1;
          iVar5 = FUN_0173d2f4(plVar10,0);
        } while ((long)uVar9 < (long)iVar5);
      }
      puVar2 = PTR_DAT_033eb1d8;
      lVar6 = *param_2;
      bVar1 = *(byte *)(*(long *)
                         Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass66_0_<DOLocalPath>b__0__
                       + 300);
      if ((*(byte *)(lVar6 + 300) < bVar1) ||
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass66_0_<DOLocalPath>b__0__))
      {
        bVar1 = *(byte *)(*(long *)PTR_DAT_033f2c98 + 300);
        if ((*(byte *)(lVar6 + 300) < bVar1) ||
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_033f2c98))
        {
          *(undefined4 *)(param_1 + 0x18) = 2;
          bVar1 = *(byte *)(*(long *)puVar2 + 300);
          if ((*(byte *)(*param_2 + 300) < bVar1) ||
             (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(param_2);
          }
          *(long *)(param_1 + 0x30) = param_2[0xf];
        }
        else {
          *(undefined4 *)(param_1 + 0x18) = 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


