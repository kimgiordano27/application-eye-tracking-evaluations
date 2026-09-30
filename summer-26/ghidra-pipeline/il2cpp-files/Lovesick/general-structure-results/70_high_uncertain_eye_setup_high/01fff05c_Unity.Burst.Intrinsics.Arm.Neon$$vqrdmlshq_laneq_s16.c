/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vqrdmlshq_laneq_s16
ENTRY_POINT: 01fff05c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Burst_Intrinsics_Arm_Neon__vqrdmlshq_laneq_s16(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  long *plVar8;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  
  plVar8 = *(long **)(unaff_x20 + 0x758);
  plVar2 = (long *)thunk_FUN_00d6225c();
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x21) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01fff0b8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724(plVar2,*unaff_x21,0);
LAB_01fff0b8:
    lVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (lVar5 != 0) {
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x21) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_01fff114;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_00d59724(plVar2,*unaff_x21,0);
LAB_01fff114:
      plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Newtonsoft_Json_Serialization_ReflectionAttributeProvider_TypeInfo) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_01fff180;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_00d59724(plVar2,*(long *)
                                    Newtonsoft_Json_Serialization_ReflectionAttributeProvider_TypeInfo
                            ,2);
LAB_01fff180:
      lVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) != 0)) goto LAB_01fff200;
    }
  }
  puVar1 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  lVar5 = *(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar5 = *(long *)puVar1;
  }
  in_stack_00000008._4_4_ = thunk_FUN_00d74634(*(long *)(lVar5 + 0xb8) + 0x24,0);
  lVar5 = *plVar8;
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + -1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar5);
  }
  uVar4 = FUN_01731954(0);
  lVar5 = FUN_0176ec60((long)&stack0x00000008 + 4,uVar4,0);
LAB_01fff200:
  puVar1 = Meta_Voice_Audio_RawAudioClipStream_var;
  if (*(int *)(*plVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_01731954(0);
  FUN_01600c94(uVar4,*(undefined8 *)puVar1,lVar5,0);
  return;
}


