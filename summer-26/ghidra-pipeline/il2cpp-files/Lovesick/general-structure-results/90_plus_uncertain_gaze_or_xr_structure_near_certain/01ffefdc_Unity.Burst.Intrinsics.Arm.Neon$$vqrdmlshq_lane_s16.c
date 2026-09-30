/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vqrdmlshq_lane_s16
ENTRY_POINT: 01ffefdc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_Burst_Intrinsics_Arm_Neon__vqrdmlshq_lane_s16(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  undefined8 in_stack_00000008;
  
  uVar9 = *unaff_x20;
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_00d32864(param_1);
  }
  uVar9 = FUN_01780344(uVar9,0);
  if (param_2 == (long *)0x0) {
LAB_01fff240:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c(uVar9);
  }
  plVar3 = (long *)(**(code **)(*param_2 + 0x1d8))(param_2,uVar9,*(undefined8 *)(*param_2 + 0x1e0));
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovn_s32__;
  puVar2 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
  if (plVar3 == (long *)0x0) {
    return;
  }
  uVar9 = 0;
  if (*plVar3 != *(long *)OVR_OpenVR_IVRCompositor__PostPresentHandoff_TypeInfo) {
    return;
  }
  if (plVar3 == (long *)0x0) goto LAB_01fff240;
  if (plVar3[3] == 0) {
    return;
  }
  plVar3 = (long *)thunk_FUN_00d6225c(plVar3[3],
                                      *(undefined8 *)
                                       Method_Unity_Burst_Intrinsics_Arm_Neon_vmovn_s32__);
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    lVar5 = *(long *)puVar1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_01fff0b8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar3,lVar5,0);
LAB_01fff0b8:
    lVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (lVar5 != 0) {
      lVar6 = *plVar3;
      lVar5 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_01fff114;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724(plVar3,lVar5,0);
LAB_01fff114:
      plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      uVar9 = 0;
      if (plVar3 == (long *)0x0) goto LAB_01fff240;
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Newtonsoft_Json_Serialization_ReflectionAttributeProvider_TypeInfo) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_01fff180;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_00d59724(plVar3,*(long *)
                                    Newtonsoft_Json_Serialization_ReflectionAttributeProvider_TypeInfo
                            ,2);
LAB_01fff180:
      lVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
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
  lVar5 = *(long *)puVar2;
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + -1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar5);
  }
  uVar9 = FUN_01731954(0);
  lVar5 = FUN_0176ec60((long)&stack0x00000008 + 4,uVar9,0);
LAB_01fff200:
  puVar1 = Meta_Voice_Audio_RawAudioClipStream_var;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar9 = FUN_01731954(0);
  FUN_01600c94(uVar9,*(undefined8 *)puVar1,lVar5,0);
  return;
}


