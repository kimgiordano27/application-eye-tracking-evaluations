/*
FUNCTION_NAME: FUN_0283fb40
ENTRY_POINT: 0283fb40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0283fb40(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 local_100 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
  ;
  if ((DAT_03788ce8 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_12524);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<LeaderboardEntry>__ctor__);
    thunk_FUN_00d48444(Method_System_Data_DataCommonEventSource_Trace<int,_int,_bool>__);
    thunk_FUN_00d48444(StringLiteral_10500);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_Data_SqlTypes_SqlInt64_op_Modulus__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_Start<JsonReader_<ReadArrayIntoByteArrayAsync>d__5>__
                      );
    thunk_FUN_00d48444(UnityEngine_VFX_VFXEventAttribute_TypeInfo);
    DAT_03788ce8 = 1;
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_a0._8_8_ = 0;
  local_a0._0_8_ = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_b0._8_8_ = 0;
  local_b0._0_8_ = 0;
  lStack_d8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  local_100._0_8_ = 0;
  local_100._8_8_ = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar5 = StringLiteral_10500;
  puVar4 = Method_System_Data_DataCommonEventSource_Trace<int,_int,_bool>__;
  puVar3 = Method_System_Collections_Generic_List<LeaderboardEntry>__ctor__;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_Start<JsonReader_<ReadArrayIntoByteArrayAsync>d__5>__
  ;
  FUN_027a7a28(&local_128,0);
  iVar16 = 0;
  uStack_88 = uStack_120;
  local_90 = local_128;
  uStack_78 = uStack_110;
  uStack_80 = local_118;
  local_70 = local_108;
  puVar15 = (undefined8 *)((ulong)&local_f0 | 8);
LAB_0283fc6c:
  do {
    do {
      do {
        uVar7 = FUN_012bf140(&local_90,*(undefined8 *)puVar3);
        if ((uVar7 & 1) == 0) {
          return;
        }
        auVar21 = FUN_00ce7198(&local_90,*(undefined8 *)puVar4);
        local_100 = auVar21;
        plVar8 = (long *)FUN_00ce72a0(local_100,*(undefined8 *)puVar5);
        if (plVar8 == (long *)0x0) goto LAB_0283ffe0;
        plVar9 = (long *)(**(code **)(*plVar8 + 0x408))(plVar8,6,*(undefined8 *)(*plVar8 + 0x410));
      } while (plVar9 == (long *)0x0);
      bVar1 = *(byte *)(*(long *)puVar2 + 300);
    } while (((*(byte *)(*plVar9 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) ||
            (lVar18 = plVar9[5], lVar18 == 0));
    if (*(int *)(lVar18 + 0x7c) < 0) {
      bVar6 = true;
    }
    else {
      bVar6 = *(long *)(lVar18 + 0x10) == 0;
    }
  } while (bVar6);
  bVar1 = *(byte *)(*(long *)StringLiteral_12524 + 300);
  if ((*(byte *)(*plVar8 + 300) < bVar1) ||
     (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_12524))
  {
                    /* WARNING: Subroutine does not return */
    FUN_00da544c(plVar8);
  }
  if (lVar18 == 0) {
LAB_0283ffe0:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar10 = FUN_0283f4a4(lVar18);
  puVar15[1] = 0;
  *puVar15 = 0;
  puVar15[3] = 0;
  puVar15[2] = 0;
  puVar15[5] = 0;
  puVar15[4] = 0;
  puVar15[7] = 0;
  puVar15[6] = 0;
  puVar15[9] = 0;
  puVar15[8] = 0;
  puVar15[10] = 0;
  local_d0 = *(undefined8 *)(lVar18 + 0x130);
  lVar11 = *(long *)(lVar18 + 0x140);
  local_f0 = uVar10;
  if (lVar11 == 0) {
    local_c8 = 0;
  }
  else {
    if (lVar11 == 0) goto LAB_0283ffe0;
    local_c8 = FUN_02775a74(lVar11,0);
  }
  lVar11 = lVar18 + 0x148;
  if (*(int *)(*(long *)UnityEngine_VFX_VFXEventAttribute_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)UnityEngine_VFX_VFXEventAttribute_TypeInfo);
  }
  local_c0 = FUN_0283865c(lVar11);
  uVar20 = FUN_02768f80(plVar8,0);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar20);
  auVar21 = FUN_028385cc(lVar11);
  local_b0 = auVar21;
  auVar21 = FUN_02838614(lVar11);
  if (*(int *)(lVar18 + 0x84) == 0) {
    lStack_d8 = *(long *)(lVar18 + 0x10);
    lVar11 = *(long *)Method_System_Data_SqlTypes_SqlInt64_op_Modulus__;
    iVar17 = iVar16;
    uStack_e8 = uVar10;
  }
  else {
    lVar19 = *(long *)(lVar18 + 0x10);
    local_a0 = auVar21;
    if (lVar19 == 0) goto LAB_0283fc6c;
    uVar14 = 0;
    lVar11 = lVar19;
    do {
      while (local_a0 = auVar21, *(int *)(lVar11 + 0x34) != 0) {
        lVar11 = *(long *)(lVar11 + 0x28);
        if (lVar11 == 0) goto LAB_0283ff78;
      }
      uVar12 = *(undefined8 *)(lVar11 + 0x38);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar7 = FUN_0268b4e0(uVar12,0,0);
      uVar12 = uVar10;
      if ((uVar7 & 1) == 0) {
        uVar12 = *(undefined8 *)(lVar11 + 0x38);
      }
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar7 = FUN_02681b9c(uVar12,uVar14,0);
      uVar13 = uVar14;
      auVar21 = local_a0;
      if ((uVar7 & 1) != 0) {
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar7 = FUN_02681b9c(uVar14,0,0);
        uVar13 = uVar12;
        auVar21 = local_a0;
        if ((uVar7 & 1) != 0) {
          uStack_e8 = uVar14;
          lStack_d8 = lVar19;
          if (*(int *)(*(long *)Method_System_Data_SqlTypes_SqlInt64_op_Modulus__ + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_0283ffec(plVar8,lVar18,&local_f0,param_1,iVar16);
          lVar19 = lVar11;
          iVar16 = iVar16 + 1;
          auVar21 = local_a0;
        }
      }
      lVar11 = *(long *)(lVar11 + 0x28);
      uVar14 = uVar13;
      local_a0 = auVar21;
    } while (lVar11 != 0);
LAB_0283ff78:
    if (lVar19 == 0) goto LAB_0283fc6c;
    lVar11 = *(long *)Method_System_Data_SqlTypes_SqlInt64_op_Modulus__;
    iVar17 = iVar16;
    uStack_e8 = uVar14;
    lStack_d8 = lVar19;
    auVar21 = local_a0;
  }
  iVar16 = iVar17 + 1;
  local_a0 = auVar21;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_0283ffec(plVar8,lVar18,&local_f0,param_1,iVar17);
  goto LAB_0283fc6c;
}


