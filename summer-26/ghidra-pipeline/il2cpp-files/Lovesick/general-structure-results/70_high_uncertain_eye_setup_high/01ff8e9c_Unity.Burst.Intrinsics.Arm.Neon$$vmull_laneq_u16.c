/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vmull_laneq_u16
ENTRY_POINT: 01ff8e9c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x01ff9078) */

void Unity_Burst_Intrinsics_Arm_Neon__vmull_laneq_u16(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x21;
  char cStack000000000000000c;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x800));
  thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
  thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
  *(undefined1 *)(unaff_x20 + 0x842) = 1;
  cStack000000000000000c = 0;
  if (unaff_x21 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar6 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar5 = StringLiteral_2091;
  }
  else {
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar1 = FUN_01789ac0();
    puVar5 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar2 = *(long *)puVar5;
      }
      uVar6 = **(undefined8 **)(lVar2 + 0xb8);
      cStack000000000000000c = '\0';
      FUN_017d75a8(uVar6,&stack0x0000000c,0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar3 = FUN_01ff90f8();
      lVar2 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Selectable>__ctor__);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01fd81bc(lVar2,0);
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      *(long *)(lVar2 + 0x28) = unaff_x21;
      if ((long *)**(long **)(*(long *)puVar5 + 0xb8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*(long *)**(long **)(*(long *)puVar5 + 0xb8) + 0x318))();
      plVar4 = *(long **)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*plVar4 + 0x2b8))(plVar4,*(undefined8 *)(*plVar4 + 0x2c0));
      if (cStack000000000000000c != '\0') {
        thunk_FUN_00d56f10(uVar6,0);
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01ff9638();
      return;
    }
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar6 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar5 = Method_UnityEngine_UIElements_UIR_ShaderInfoStorage<Color>__ctor__;
  }
  uVar3 = thunk_FUN_00d48444(puVar5);
  FUN_016ec5b8(uVar6,uVar3,0);
  uVar3 = thunk_FUN_00d48444(Oculus_Platform_CAPI_ovrKeyValuePair___TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar6,uVar3);
}


