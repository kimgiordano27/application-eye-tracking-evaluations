/*
FUNCTION_NAME: FUN_01648d1c
ENTRY_POINT: 01648d1c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_file_logging_hits_8;functionality_data_collection_or_telemetry_hits_8
*/


void FUN_01648d1c(long *param_1,long *param_2,long param_3,long param_4,long param_5,long param_6,
                 ulong param_7)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  int *piVar16;
  
  puVar4 = Method_System_Runtime_Remoting_Messaging_ServerObjectReplySink_AsyncProcessMessage__;
  if ((DAT_037782a7 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Item__
                      );
    thunk_FUN_00d48444(Method_System_ComponentModel_DateTimeConverter_ConvertFrom__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_lane_f32__);
    thunk_FUN_00d48444(UnityEngine_UIElements_DefaultDragAndDropClient_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_106_0_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Rendering_DebugActionState_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<DragGesture>_Cancel__);
    thunk_FUN_00d48444(Method_System_Threading_Tasks_Task_Run<Stream>__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_Remoting_Messaging_ServerObjectReplySink_AsyncProcessMessage__
                      );
    thunk_FUN_00d48444(Method_System_IO_FileStream_FlushBuffer__);
    thunk_FUN_00d48444(StringLiteral_6618);
    thunk_FUN_00d48444(System_Func<float,_int>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<FaceRebuildData>__ctor__);
    thunk_FUN_00d48444(Sirenix_Serialization_MinimalBaseFormatter<Version>_TypeInfo);
    thunk_FUN_00d48444(System_UriComponents_TypeInfo);
    DAT_037782a7 = 1;
  }
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
  puVar4 = UnityEngine_Rendering_DebugActionState_TypeInfo;
  if (lVar8 != 0) {
    FUN_01320e50(lVar8,*(undefined8 *)Method_System_Threading_Tasks_Task_Run<Stream>__);
    param_1[3] = lVar8;
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    puVar7 = StringLiteral_6618;
    puVar6 = Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<DragGesture>_Cancel__;
    puVar5 = System_UriComponents_TypeInfo;
    puVar4 = Sirenix_Serialization_MinimalBaseFormatter<Version>_TypeInfo;
    if (lVar8 != 0) {
      FUN_01260fc8(lVar8,*(undefined8 *)OVRPlugin_OVRP_1_106_0_TypeInfo);
      lVar14 = *(long *)puVar5;
      param_1[4] = lVar8;
      param_1[5] = lVar14;
      param_1[6] = *(long *)puVar4;
      param_1[7] = *(long *)puVar7;
      FUN_017b46ec(param_1,0);
      if (((param_2 != (long *)0x0) && ((param_7 & 1) != 0)) &&
         (uVar9 = FUN_015ff8a0(param_4,0), (uVar9 & 1) != 0)) {
        lVar8 = *param_2;
        bVar3 = *(byte *)(*(long *)Method_System_IO_FileStream_FlushBuffer__ + 300);
        if ((*(byte *)(lVar8 + 300) < bVar3) ||
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)Method_System_IO_FileStream_FlushBuffer__)) {
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar9 != 0) {
            piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
                puVar10 = (undefined8 *)(lVar8 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_01648f50;
              }
              uVar9 = uVar9 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar6,1);
LAB_01648f50:
          param_4 = (*(code *)*puVar10)(param_2,puVar10[1]);
        }
        else {
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar9 != 0) {
            piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
                puVar10 = (undefined8 *)(lVar8 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_01648fb0;
              }
              uVar9 = uVar9 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar6,1);
LAB_01648fb0:
          param_4 = (*(code *)*puVar10)(param_2,puVar10[1]);
        }
      }
      param_1[9] = param_4;
      uVar9 = FUN_015ff8a0(param_5,0);
      bVar1 = (uVar9 & 1) == 0;
      if (bVar1) {
        param_1[5] = param_5;
      }
      uVar9 = FUN_015ff8a0(param_6,0);
      bVar2 = (uVar9 & 1) == 0;
      if (bVar2) {
        param_1[6] = param_6;
      }
      if (param_2 != (long *)0x0) {
        lVar8 = *param_2;
        bVar3 = *(byte *)(*(long *)UnityEngine_UIElements_DefaultDragAndDropClient_TypeInfo + 300);
        if ((*(byte *)(lVar8 + 300) < bVar3) ||
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)UnityEngine_UIElements_DefaultDragAndDropClient_TypeInfo)) {
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar9 != 0) {
            piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
                puVar10 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_016490c8;
              }
              uVar9 = uVar9 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar6,0);
LAB_016490c8:
          uVar11 = (*(code *)*puVar10)(param_2,puVar10[1]);
          uVar9 = FUN_015ff8a0(uVar11,0);
          puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_lane_f32__;
          if ((uVar9 & 1) == 0) {
            lVar8 = *param_2;
            lVar14 = param_1[5];
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar9 != 0) {
              piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
                  puVar10 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_016491e4;
                }
                uVar9 = uVar9 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar9 != 0);
            }
            puVar10 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar6,0);
LAB_016491e4:
            uVar11 = (*(code *)*puVar10)(param_2,puVar10[1]);
            lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
            if (lVar8 == 0) goto LAB_0164935c;
            FUN_01648494(lVar8,lVar14,uVar11,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<FaceRebuildData>__ctor__,
                         *(undefined8 *)System_Func<float,_int>_TypeInfo,
                         *(undefined8 *)System_Func<float,_int>_TypeInfo,param_1,0);
            FUN_01649728(param_1,lVar8);
          }
        }
        else {
          param_1[0xb] = param_2[0xb];
          if (!bVar1) {
            param_1[5] = param_2[5];
          }
          if (!bVar2) {
            param_1[6] = param_2[6];
          }
          param_1[10] = param_2[10];
          plVar12 = (long *)param_2[8];
          plVar15 = plVar12;
          if (plVar12 != (long *)0x0) {
            do {
              if (plVar15 == param_1) {
                uVar11 = thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vaddd_s64__);
                uVar11 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar11,0);
                thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
                uVar13 = thunk_FUN_00d62348();
                FUN_00ac2be8();
                FUN_017713a8(uVar13,uVar11,0);
                uVar11 = thunk_FUN_00d48444(StringLiteral_9115);
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(uVar13,uVar11);
              }
              plVar15 = (long *)plVar15[8];
            } while (plVar15 != (long *)0x0);
            if (**(char **)(*(long *)
                             Method_System_Collections_Generic_List<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Item__
                           + 0xb8) == '\0') {
              plVar12 = (long *)(**(code **)(*plVar12 + 0x1c8))
                                          (plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
            }
            param_1[8] = (long)plVar12;
          }
          lVar8 = *param_2;
          lVar14 = *(long *)Method_System_IO_FileStream_FlushBuffer__;
          bVar3 = *(byte *)(lVar14 + 300);
          if (((*(byte *)(lVar8 + 300) < bVar3) ||
              (*(long *)(*(long *)(lVar8 + 200) + ((ulong)bVar3 - 1) * 8) != lVar14)) ||
             ((bVar3 <= *(byte *)(*param_1 + 300) &&
              (*(long *)(*(long *)(*param_1 + 200) + ((ulong)bVar3 - 1) * 8) == lVar14)))) {
            lVar8 = param_2[3];
          }
          else {
            lVar8 = (**(code **)(lVar8 + 0x1a8))(param_2,*(undefined8 *)(lVar8 + 0x1b0));
          }
          FUN_016493cc(param_1,lVar8);
          puVar4 = Method_System_ComponentModel_DateTimeConverter_ConvertFrom__;
          if (param_2[2] != 0) {
            uVar11 = FUN_017959a4(param_2[2],0);
            lVar8 = thunk_FUN_00d6225c(uVar11,*(undefined8 *)puVar4);
            param_1[2] = lVar8;
            thunk_FUN_00d6225c(uVar11,*(undefined8 *)puVar4);
          }
        }
      }
      if (param_3 == 0) {
        return;
      }
      FUN_016493cc(param_1);
      return;
    }
  }
LAB_0164935c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


