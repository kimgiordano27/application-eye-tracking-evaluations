/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawnerUtilities$$AlignPrefabPivot
ENTRY_POINT: 014683dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 259
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities__AlignPrefabPivot
               (ulong param_1,undefined8 param_2,long param_3,float *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  long lVar13;
  long lVar14;
  int iVar15;
  float *unaff_x25;
  float fVar16;
  float fVar17;
  ulong uVar18;
  float fVar19;
  ulong uVar20;
  undefined4 uVar21;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000068;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(System_Net_ServerCertValidationCallback_CallbackContext_TypeInfo);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<Type,_Action<BinaryDataWriter,_object>>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer_Get<GradientColorKey[]>__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<OVRGLTFAccessor_GLTFAccessor>_get_Item__
                      );
    thunk_FUN_00d48444(System_Reflection_CustomAttributeNamedArgument_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ef540);
    thunk_FUN_00d48444(StringLiteral_3757);
    thunk_FUN_00d48444(StringLiteral_11612);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
    thunk_FUN_00d48444(Polenter_Serialization_SharpSerializer_TypeInfo);
    thunk_FUN_00d48444(Method_Meta_Voice_Net_WebSockets_WitWebSocketClient_HandleSocketDisconnect__)
    ;
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<float3>_Dispose__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputRemoting_SerializeData<InputRemoting_NewLayoutMsg_Data>__
                      );
    thunk_FUN_00d48444(StringLiteral_10008);
    *(undefined1 *)(unaff_x20 + 0xac4) = 1;
  }
  puVar4 = StringLiteral_11612;
  puVar3 = System_Reflection_CustomAttributeNamedArgument_TypeInfo;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000048 = 0;
  if (unaff_x19 != 0) {
    lVar14 = *(long *)(unaff_x19 + 0x60);
    if (lVar14 == 0) {
      lVar14 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11612);
      if (lVar14 == 0) goto LAB_014689e4;
      FUN_01320e50(lVar14,*(undefined8 *)puVar3);
      *(long *)(unaff_x19 + 0x60) = lVar14;
    }
    lVar11 = *(long *)Method_Sirenix_Serialization_Serializer_Get<GradientColorKey[]>__;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
    if ((uVar9 & 1) == 0) {
      *(undefined4 *)(lVar14 + 0x18) = 0;
    }
    else {
      iVar15 = *(int *)(lVar14 + 0x18);
      *(undefined4 *)(lVar14 + 0x18) = 0;
      if (0 < iVar15) {
        FUN_0179519c(*(undefined8 *)(lVar14 + 0x10),0,iVar15,0);
      }
    }
    puVar2 = System_Collections_Generic_Dictionary<Type,_Action<BinaryDataWriter,_object>>_TypeInfo;
    lVar14 = *(long *)(unaff_x19 + 0x48);
    if (lVar14 != 0) {
      if ((*(long *)(lVar14 + 0x18) == 0) || (*(long *)(*(long *)(lVar14 + 0x18) + 0x18) == 0)) {
        *param_4 = 1.0;
        *unaff_x25 = 10.0;
LAB_01468678:
        if (param_3 != 0) {
          (**(code **)(param_3 + 0x18))
                    (0,*(undefined8 *)(param_3 + 0x40),
                     *(undefined8 *)
                      Method_Meta_Voice_Net_WebSockets_WitWebSocketClient_HandleSocketDisconnect__,
                     *(undefined8 *)(param_3 + 0x28));
        }
        in_stack_00000068 = param_3;
        lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        if (lVar14 != 0) {
          FUN_01320e50(lVar14,*(undefined8 *)puVar3);
          puVar8 = StringLiteral_3757;
          puVar7 = Method_Unity_Collections_NativeArray<float3>_Dispose__;
          puVar6 = Method_System_Collections_Generic_List<OVRGLTFAccessor_GLTFAccessor>_get_Item__;
          puVar5 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
          puVar4 = System_Net_ServerCertValidationCallback_CallbackContext_TypeInfo;
          puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          lVar11 = *(long *)(unaff_x19 + 0x60);
          if (lVar11 != 0) {
            iVar15 = 0;
            while( true ) {
              if (*(int *)(lVar11 + 0x18) <= iVar15) {
                if (*(int *)(lVar14 + 0x18) < 1) goto LAB_014687c0;
                iVar15 = 0;
                goto LAB_01468780;
              }
              FUN_0132138c(lVar11,iVar15,&stack0x00000030,*(undefined8 *)puVar8);
              if (in_stack_00000030 == 0) break;
              FUN_00bbcd7c(lVar14,*(undefined8 *)(in_stack_00000030 + 0x18),*(undefined8 *)puVar2);
              if ((*(long *)(unaff_x19 + 0x60) == 0) ||
                 (FUN_0132138c(*(long *)(unaff_x19 + 0x60),iVar15,&stack0x00000030,
                               *(undefined8 *)puVar8), in_stack_00000030 == 0)) break;
              FUN_00bbcd7c(lVar14,*(undefined8 *)(in_stack_00000030 + 0x20),*(undefined8 *)puVar2);
              lVar11 = *(long *)(unaff_x19 + 0x60);
              iVar15 = iVar15 + 1;
              if (lVar11 == 0) break;
            }
          }
        }
      }
      else {
        if (param_3 == 0) {
          *unaff_x25 = 1.0;
          *param_4 = 1e+07;
        }
        else {
          (**(code **)(param_3 + 0x18))
                    (0,*(undefined8 *)(param_3 + 0x40),*(undefined8 *)StringLiteral_10008,
                     *(undefined8 *)(param_3 + 0x28));
          lVar14 = *(long *)(unaff_x19 + 0x48);
          *unaff_x25 = 1.0;
          *param_4 = 1e+07;
          if (lVar14 == 0) goto LAB_014689e4;
        }
        lVar11 = 0;
        do {
          lVar14 = *(long *)(lVar14 + 0x18);
          if (lVar14 == 0) break;
          if ((int)*(uint *)(lVar14 + 0x18) <= (int)(uint)lVar11) goto LAB_01468678;
          if (*(uint *)(lVar14 + 0x18) <= (uint)lVar11) goto LAB_01468ad4;
          lVar14 = *(long *)(lVar14 + lVar11 * 8 + 0x20);
          if (lVar14 == 0) break;
          if ((*(float *)(lVar14 + 0x2c) <= *(float *)(unaff_x19 + 0x50)) &&
             ((*(char *)(unaff_x19 + 0x41) != '\0' || (*(long *)(lVar14 + 0x10) == 0)))) {
            if (*(long *)(unaff_x19 + 0x60) == 0) break;
            FUN_00bbcd7c(*(long *)(unaff_x19 + 0x60),lVar14,*(undefined8 *)puVar2);
          }
          if (*unaff_x25 < *(float *)(lVar14 + 0x2c)) {
            *unaff_x25 = *(float *)(lVar14 + 0x2c);
          }
          if ((0 < *(int *)(lVar14 + 0x28)) && (*(float *)(lVar14 + 0x2c) < *param_4)) {
            *param_4 = *(float *)(lVar14 + 0x2c);
          }
          lVar14 = *(long *)(unaff_x19 + 0x48);
          lVar11 = lVar11 + 1;
        } while (lVar14 != 0);
      }
    }
  }
  goto LAB_014689e4;
code_r0x014689ac:
  if (*(uint *)(lVar14 + 0x18) <= uVar9) {
LAB_01468ad4:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  *(float *)(lVar14 + uVar9 * 4 + 0x20) = SQRT(fVar19 * fVar19 + fVar16 * fVar16 + fVar17 * fVar17);
  lVar14 = *(long *)(unaff_x19 + 0x68);
  uVar9 = uVar9 + 1;
  if (lVar14 == 0) goto LAB_014689e4;
  goto LAB_01468810;
  while( true ) {
    FUN_0132448c(lVar11,in_stack_00000030,*(undefined8 *)puVar6);
    lVar11 = *(long *)(unaff_x19 + 0x60);
    iVar15 = iVar15 + 1;
    if (*(int *)(lVar14 + 0x18) <= iVar15) break;
LAB_01468780:
    FUN_0132138c(lVar14,iVar15,&stack0x00000030,*(undefined8 *)puVar8);
    if (lVar11 == 0) goto LAB_014689e4;
  }
  if (lVar11 != 0) {
LAB_014687c0:
    lVar14 = FUN_00da4fb8(*(undefined8 *)puVar5,*(undefined4 *)(lVar11 + 0x18));
    *(long *)(unaff_x19 + 0x68) = lVar14;
    if (in_stack_00000068 != 0) {
      (**(code **)(in_stack_00000068 + 0x18))
                (0,*(undefined8 *)(in_stack_00000068 + 0x40),*(undefined8 *)puVar7,
                 *(undefined8 *)(in_stack_00000068 + 0x28));
      lVar14 = *(long *)(unaff_x19 + 0x68);
    }
    puVar5 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
    puVar2 = System_Threading_Timer_TimerComparer_TypeInfo;
    if (lVar14 != 0) {
      uVar9 = 0;
LAB_01468810:
      if ((long)*(int *)(lVar14 + 0x18) <= (long)uVar9) {
        if (in_stack_00000068 != 0) {
          (**(code **)(in_stack_00000068 + 0x18))
                    (0,*(undefined8 *)(in_stack_00000068 + 0x40),
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_InputRemoting_SerializeData<InputRemoting_NewLayoutMsg_Data>__
                     ,*(undefined8 *)(in_stack_00000068 + 0x28));
        }
        fVar17 = *unaff_x25;
        if (*unaff_x25 <= *param_4) {
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_026610e4(*(undefined8 *)Polenter_Serialization_SharpSerializer_TypeInfo,0);
          *param_4 = 1e-05;
          fVar17 = *unaff_x25;
          if (*unaff_x25 < 10.0) {
            *unaff_x25 = 10.0;
            fVar17 = 10.0;
          }
        }
        *(float *)(unaff_x19 + 0x58) = fVar17 + 1.0;
        *(float *)(unaff_x19 + 0x5c) = *param_4 * DAT_028aa040;
        if (fVar17 + 1.0 < 2.0) {
          *(undefined4 *)(unaff_x19 + 0x58) = 0x40000000;
        }
        return;
      }
      if ((*(long *)(unaff_x19 + 0x60) != 0) &&
         (FUN_0132138c(*(long *)(unaff_x19 + 0x60),uVar9 & 0xffffffff,&stack0x00000030,
                       *(undefined8 *)puVar8), lVar14 = in_stack_00000030, in_stack_00000030 != 0))
      {
        uVar21 = *(undefined4 *)(in_stack_00000030 + 0x30);
        uVar18 = (ulong)*(uint *)(in_stack_00000030 + 0x34);
        uVar20 = (ulong)*(uint *)(in_stack_00000030 + 0x38);
        if (DAT_03774e1c == '\0') {
          thunk_FUN_00d48444(puVar5);
          DAT_03774e1c = '\x01';
        }
        lVar11 = *(long *)(*(long *)puVar5 + 0xb8);
        FUN_02687990(uVar21,uVar18,uVar20,*(undefined4 *)(lVar11 + 0xc),
                     *(undefined4 *)(lVar11 + 0x10),*(undefined4 *)(lVar11 + 0x14),&stack0x00000048,
                     0);
        lVar11 = *(long *)(lVar14 + 0x40);
        if (lVar11 != 0) {
          lVar13 = 0;
          while( true ) {
            fVar19 = (float)uVar20;
            fVar17 = (float)uVar18;
            if ((int)*(uint *)(lVar11 + 0x18) <= (int)(uint)lVar13) break;
            if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_014689e4;
            if (*(uint *)(lVar11 + 0x18) <= (uint)lVar13) goto LAB_01468ad4;
            lVar12 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x18);
            if (lVar12 == 0) goto LAB_014689e4;
            uVar1 = *(uint *)(lVar11 + lVar13 * 4 + 0x20);
            if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_01468ad4;
            lVar11 = *(long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
            if (((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x10), lVar11 == 0)) ||
               (lVar11 = *(long *)(lVar11 + 0x10), lVar11 == 0)) goto LAB_014689e4;
            FUN_010e58e8(lVar11,&stack0x00000030,*(undefined8 *)puVar4);
            lVar11 = in_stack_00000030;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar10 = FUN_02681b9c(lVar11,0,0);
            if ((uVar10 & 1) != 0) {
              if (lVar11 == 0) goto LAB_014689e4;
              FUN_02667cd8(&stack0x00000030,lVar11,0);
              in_stack_00000018 = in_stack_00000038;
              in_stack_00000010 = in_stack_00000030;
              in_stack_00000020 = in_stack_00000040;
              FUN_02687e74(&stack0x00000048,&stack0x00000010,0);
            }
            lVar11 = *(long *)(lVar14 + 0x40);
            lVar13 = lVar13 + 1;
            if (lVar11 == 0) goto LAB_014689e4;
          }
          lVar14 = *(long *)(unaff_x19 + 0x68);
          fVar16 = (float)FUN_02687a8c(&stack0x00000048,0);
          if (DAT_03774e1b == '\0') {
            thunk_FUN_00d48444(puVar2);
            DAT_03774e1b = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (lVar14 != 0) goto code_r0x014689ac;
        }
      }
    }
  }
LAB_014689e4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


