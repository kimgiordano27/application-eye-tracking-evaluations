/*
FUNCTION_NAME: TMPro.TMP_Text$$GetTextInfo
ENTRY_POINT: 023d7008
PROGRAM: Lovesick-libil2cpp.so
SCORE: 193
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void TMPro_TMP_Text__GetTextInfo
               (long param_1,long *param_2,undefined8 param_3,long param_4,undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long *plVar14;
  int iVar15;
  long *plVar16;
  undefined8 *puStack0000000000000008;
  long lStack0000000000000010;
  undefined8 uStack0000000000000020;
  long lStack0000000000000028;
  undefined8 in_stack_00000030;
  long *in_stack_00000038;
  
  puStack0000000000000008 = param_5;
  lStack0000000000000010 = param_4;
  uStack0000000000000020 = param_3;
  lStack0000000000000028 = param_1;
  if ((*(byte *)(unaff_x19 + 0x117) & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_System_Xml_Schema_XmlListConverter_ToArray<uint>__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vaddq_s16__);
    thunk_FUN_00d48444(PTR_DAT_033f5d40);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_ValueCollection<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_GetEnumerator__
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3368);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Func<Type,_bool>>_get_Count__);
    thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_ArrayUtility_Fill<Vector2>__);
    thunk_FUN_00d48444(Sirenix_Serialization_SingleSerializer_var);
    *(undefined1 *)(unaff_x19 + 0x117) = 1;
  }
  puVar4 = Method_System_Collections_Generic_List<Func<Type,_bool>>_get_Count__;
  puVar3 = 
  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
  ;
  puVar2 = PTR_DAT_033f5d40;
  puVar1 = PTR_DAT_033f3368;
  in_stack_00000030 = 0;
  if (param_2 == (long *)0x0) {
LAB_023d7480:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar15 = 0;
  plVar16 = (long *)0x0;
  plVar14 = (long *)0x0;
LAB_023d70e0:
  lVar11 = *param_2;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
        puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_023d712c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar2,0);
LAB_023d712c:
  lVar11 = (*(code *)*puVar6)(param_2,puVar6[1]);
  if (lVar11 == 0) goto LAB_023d7480;
  iVar5 = FUN_01360268(lVar11,*(undefined8 *)puVar1);
  if (iVar5 <= iVar15) {
    return;
  }
  lVar11 = *param_2;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
        puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_023d7198;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar2,0);
LAB_023d7198:
  lVar11 = (*(code *)*puVar6)(param_2,puVar6[1]);
  if ((lVar11 == 0) ||
     (FUN_0135fd9c(lVar11,iVar15,&stack0x00000038,*(undefined8 *)puVar4), plVar8 = in_stack_00000038
     , in_stack_00000038 == (long *)0x0)) goto LAB_023d7480;
  uVar12 = FUN_023aa3a8(in_stack_00000038,0);
  plVar9 = plVar14;
  if (((uVar12 & 1) == 0) && (uVar12 = FUN_023aa3ec(plVar8,0), (uVar12 & 1) == 0)) {
    lVar11 = *(long *)(lStack0000000000000028 + 0x20);
    uVar7 = thunk_FUN_00d93c64(plVar8,0);
    if (lVar11 == 0) goto LAB_023d7480;
    uVar12 = FUN_0129eff4(lVar11,uVar7,&stack0x00000030,*(undefined8 *)puVar3);
    uVar7 = in_stack_00000030;
    if ((uVar12 & 1) == 0) {
      plVar9 = (long *)thunk_FUN_00d93c64(plVar8,0);
      plVar8 = plVar16;
      if (plVar9 != (long *)0x0) {
        plVar8 = plVar9;
      }
      uVar7 = *(undefined8 *)Method_UnityEngine_ProBuilder_ArrayUtility_Fill<Vector2>__;
      plVar16 = plVar8;
      if (plVar9 == (long *)0x0) goto LAB_023d7314;
      if (plVar8 == (long *)0x0) goto LAB_023d7480;
      lVar11 = *plVar8;
LAB_023d7304:
      uVar10 = (**(code **)(lVar11 + 0x168))(plVar8,*(undefined8 *)(lVar11 + 0x170));
    }
    else {
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar11 = FUN_0112ff18(uVar7,uStack0000000000000020,0,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary_ValueCollection<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_GetEnumerator__
                           );
      if ((lVar11 == 0) || (lVar11 = FUN_0268fd4c(lVar11,0), lVar11 == 0)) goto LAB_023d7480;
      FUN_0268b75c(lVar11,plVar8[5],0);
      FUN_010e58e8(lVar11,&stack0x00000038,
                   *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vaddq_s16__);
      plVar9 = in_stack_00000038;
      uVar12 = FUN_0268b4e0(in_stack_00000038,0,0);
      if ((uVar12 & 1) == 0) {
        uVar12 = FUN_015ff8a0(*(undefined8 *)(lStack0000000000000028 + 0x50),0);
        if ((uVar12 & 1) == 0) {
          if (plVar8[7] == 0) goto LAB_023d7480;
          uVar12 = FUN_015fe250(plVar8[7],*(undefined8 *)(lStack0000000000000028 + 0x50),0);
          if ((uVar12 & 1) != 0) {
            *puStack0000000000000008 = plVar9;
          }
        }
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_02681b9c(plVar14,0,0);
        if ((uVar12 & 1) != 0) {
          if (plVar14 == (long *)0x0) goto LAB_023d7480;
          plVar14[9] = (long)plVar9;
        }
        if (plVar9 == (long *)0x0) goto LAB_023d7480;
        plVar9[7] = lStack0000000000000010;
        plVar9[8] = (long)plVar14;
        (**(code **)(*plVar9 + 0x188))(plVar9,plVar8,*(undefined8 *)(*plVar9 + 400));
        FUN_010e58e8(lVar11,&stack0x00000038,
                     *(undefined8 *)Method_System_Xml_Schema_XmlListConverter_ToArray<uint>__);
        plVar14 = in_stack_00000038;
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_02681b9c(plVar14,0,0);
        if (((uVar12 & 1) != 0) &&
           (lVar11 = thunk_FUN_00d6225c(plVar8,*(undefined8 *)puVar2), lVar11 != 0)) {
          if (plVar14 != (long *)0x0) {
            FUN_023d6fe8(lStack0000000000000028,lVar11,plVar14[3],plVar9,puStack0000000000000008);
            goto LAB_023d7458;
          }
          goto LAB_023d7480;
        }
        goto LAB_023d7458;
      }
      plVar8 = (long *)thunk_FUN_00d93c64(plVar8,0);
      uVar7 = *(undefined8 *)Sirenix_Serialization_SingleSerializer_var;
      if (plVar8 != (long *)0x0) {
        if (plVar8 != (long *)0x0) {
          lVar11 = *plVar8;
          goto LAB_023d7304;
        }
        goto LAB_023d7480;
      }
LAB_023d7314:
      uVar10 = 0;
    }
    uVar7 = FUN_015f5b28(uVar7,uVar10,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_02661754(uVar7,0);
    plVar9 = plVar14;
  }
LAB_023d7458:
  iVar15 = iVar15 + 1;
  plVar14 = plVar9;
  goto LAB_023d70e0;
}


