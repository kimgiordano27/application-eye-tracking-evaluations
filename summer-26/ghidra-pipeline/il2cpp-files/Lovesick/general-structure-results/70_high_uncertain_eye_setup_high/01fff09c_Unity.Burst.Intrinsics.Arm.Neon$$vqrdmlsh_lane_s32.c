/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vqrdmlsh_lane_s32
ENTRY_POINT: 01fff09c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Burst_Intrinsics_Arm_Neon__vqrdmlsh_lane_s32(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  
  puVar2 = (undefined8 *)FUN_00d59724();
  lVar3 = (*(code *)*puVar2)();
  if (lVar3 != 0) {
    lVar3 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01fff114;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_00d59724();
LAB_01fff114:
    plVar4 = (long *)(*(code *)*puVar2)();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar3 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Newtonsoft_Json_Serialization_ReflectionAttributeProvider_TypeInfo) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_01fff180;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_00d59724(plVar4,*(long *)
                                  Newtonsoft_Json_Serialization_ReflectionAttributeProvider_TypeInfo
                          ,2);
LAB_01fff180:
    lVar3 = (*(code *)*puVar2)(plVar4,puVar2[1]);
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x10) != 0)) goto LAB_01fff200;
  }
  puVar1 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  lVar3 = *(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *(long *)puVar1;
  }
  in_stack_00000008._4_4_ = thunk_FUN_00d74634(*(long *)(lVar3 + 0xb8) + 0x24,0);
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + -1;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x20);
  }
  uVar5 = FUN_01731954(0);
  lVar3 = FUN_0176ec60((long)&stack0x00000008 + 4,uVar5,0);
LAB_01fff200:
  puVar1 = Meta_Voice_Audio_RawAudioClipStream_var;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_01731954(0);
  FUN_01600c94(uVar5,*(undefined8 *)puVar1,lVar3,0);
  return;
}


