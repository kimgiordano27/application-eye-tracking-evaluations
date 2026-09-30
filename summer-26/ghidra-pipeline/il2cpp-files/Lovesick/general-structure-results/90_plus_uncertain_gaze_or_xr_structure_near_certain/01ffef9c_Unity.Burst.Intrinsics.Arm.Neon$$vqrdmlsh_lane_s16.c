/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vqrdmlsh_lane_s16
ENTRY_POINT: 01ffef9c
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


void Unity_Burst_Intrinsics_Arm_Neon__vqrdmlsh_lane_s16(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  int iStack000000000000000c;
  
  uVar3 = thunk_FUN_00d48444(Meta_Voice_Audio_RawAudioClipStream_var);
  *(undefined1 *)(unaff_x20 + 0x852) = 1;
  puVar1 = StringLiteral_1821;
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  iStack000000000000000c = 0;
  if (unaff_x19 == (long *)0x0) {
LAB_01fff240:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c(uVar3);
  }
  plVar4 = (long *)(**(code **)(*unaff_x19 + 0x198))();
  uVar3 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar3 = FUN_01780344(uVar3,0);
  if (plVar4 == (long *)0x0) goto LAB_01fff240;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x1d8))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x1e0));
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovn_s32__;
  puVar2 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
  if (plVar4 == (long *)0x0) {
    return;
  }
  uVar3 = 0;
  if (*plVar4 != *(long *)OVR_OpenVR_IVRCompositor__PostPresentHandoff_TypeInfo) {
    return;
  }
  if (plVar4 == (long *)0x0) goto LAB_01fff240;
  if (plVar4[3] == 0) {
    return;
  }
  plVar4 = (long *)thunk_FUN_00d6225c(plVar4[3],
                                      *(undefined8 *)
                                       Method_Unity_Burst_Intrinsics_Arm_Neon_vmovn_s32__);
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    lVar6 = *(long *)puVar1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_01fff0b8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar4,lVar6,0);
LAB_01fff0b8:
    lVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (lVar6 != 0) {
      lVar7 = *plVar4;
      lVar6 = *(long *)puVar1;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_01fff114;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724(plVar4,lVar6,0);
LAB_01fff114:
      plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      uVar3 = 0;
      if (plVar4 == (long *)0x0) goto LAB_01fff240;
      lVar6 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Newtonsoft_Json_Serialization_ReflectionAttributeProvider_TypeInfo) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_01fff180;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_00d59724(plVar4,*(long *)
                                    Newtonsoft_Json_Serialization_ReflectionAttributeProvider_TypeInfo
                            ,2);
LAB_01fff180:
      lVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((lVar6 != 0) && (*(int *)(lVar6 + 0x10) != 0)) goto LAB_01fff200;
    }
  }
  puVar1 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  lVar6 = *(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar6 = *(long *)puVar1;
  }
  iStack000000000000000c = thunk_FUN_00d74634(*(long *)(lVar6 + 0xb8) + 0x24,0);
  lVar6 = *(long *)puVar2;
  iStack000000000000000c = iStack000000000000000c + -1;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar6);
  }
  uVar3 = FUN_01731954(0);
  lVar6 = FUN_0176ec60(&stack0x0000000c,uVar3,0);
LAB_01fff200:
  puVar1 = Meta_Voice_Audio_RawAudioClipStream_var;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_01731954(0);
  FUN_01600c94(uVar3,*(undefined8 *)puVar1,lVar6,0);
  return;
}


