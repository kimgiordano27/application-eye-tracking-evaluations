/*
FUNCTION_NAME: Oculus.Interaction.Input.HandJointCache$$WorldJointPose
ENTRY_POINT: 01938058
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_rendering_without_foveation_or_eye_source
*/


void Oculus_Interaction_Input_HandJointCache__WorldJointPose
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,
               undefined1 param_4 [16],float param_5,float param_6,float param_7)

{
  byte bVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long in_x9;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  int unaff_w23;
  long lVar11;
  long lVar12;
  long lVar13;
  uint unaff_w26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  int unaff_w29;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  ulong uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float in_s20;
  float in_s21;
  float in_s24;
  float in_s27;
  float fVar35;
  float in_s30;
  float fVar36;
  float in_s31;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  uint uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  do {
    fVar35 = *(float *)(in_x9 + 0x28);
    fVar36 = *(float *)(in_x9 + 0x2c);
    fVar31 = ((in_s30 - in_s31) - in_s27) - in_s21;
    lVar11 = unaff_x22[9];
    uVar10 = (ulong)(uint)((param_7 * in_s20 + fVar31 * in_s24 + param_6 * fVar36) -
                          param_5 * fVar35);
    uVar25 = (ulong)(uint)((param_5 * in_s24 + fVar31 * fVar35 + param_7 * fVar36) -
                          param_6 * in_s20);
    uVar29 = (ulong)(uint)(((fVar31 * fVar36 - param_5 * in_s20) - param_6 * in_s24) -
                          param_7 * fVar35);
    if (*(int *)(*(long *)StringLiteral_645 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar17 = FUN_01932ed0((param_6 * fVar35 + fVar31 * in_s20 + param_5 * fVar36) - param_3);
    if (lVar11 == 0) goto LAB_01938514;
    uStack0000000000000044 = (undefined4)uVar10;
    uStack0000000000000048 = (undefined4)uVar25;
    uStack000000000000004c = (undefined4)uVar29;
    uStack0000000000000040 = uVar17;
    FUN_013577f0(lVar11,unaff_w26 + unaff_w29,&stack0x00000040,*(undefined8 *)StringLiteral_1603);
    fVar31 = (float)uVar10;
    fVar35 = (float)uVar25;
    fVar36 = (float)uVar29;
    unaff_w29 = unaff_w29 + 1;
    unaff_w23 = unaff_w23 + 2;
    if (*(int *)((long)unaff_x20 + 0x24) <= unaff_w29) {
      do {
        do {
          unaff_w21 = unaff_w21 + 1;
          iVar4 = FUN_013557c0(in_stack_00000010,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<Type,_IList<PropertyInfo>>_get_Item__
                              );
          puVar3 = Meta_WitAi_Data_AudioBuffer_<UpdateVolume>d__66_TypeInfo;
          if (iVar4 <= unaff_w21) {
            plVar7 = (long *)FUN_018f0970();
            if (plVar7 == (long *)0x0) {
LAB_01938250:
              plVar7 = (long *)0x0;
            }
            else {
              lVar11 = *(long *)puVar3;
              bVar1 = *(byte *)(lVar11 + 300);
              if (*(byte *)(*plVar7 + 300) < bVar1) goto LAB_01938250;
              if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != lVar11) {
                plVar7 = (long *)0x0;
              }
            }
            if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_01938514;
            plVar8 = (long *)FUN_019238a0(*(long *)(unaff_x19 + 0x70),0xc,0);
            if (plVar8 == (long *)0x0) {
              return;
            }
            lVar11 = *(long *)puVar3;
            bVar1 = *(byte *)(lVar11 + 300);
            if (*(byte *)(*plVar8 + 300) < bVar1) {
              return;
            }
            if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar11) {
              plVar8 = (long *)0x0;
            }
            if (plVar8 == (long *)0x0) {
              return;
            }
            if (plVar7 == (long *)0x0) {
              return;
            }
            if (*(char *)(unaff_x19 + 0xd0) == '\0') {
              return;
            }
            iVar4 = FUN_013557c0(plVar7,*(undefined8 *)
                                         Method_System_Collections_Generic_List_Enumerator<MetaXRAcousticGeometry_MeshMaterial>_Dispose__
                                );
            if (iVar4 < 1) {
              return;
            }
            iVar4 = 0;
            goto LAB_019382d4;
          }
          unaff_x20 = (long *)FUN_0135571c(in_stack_00000010,unaff_w21,
                                           *(undefined8 *)
                                            Method_UnityEngine_Rendering_UI_DebugUIHandlerWidget_CastWidget<DebugUI_Vector2Field>__
                                          );
          if (unaff_x20 == (long *)0x0) {
LAB_01937c60:
            unaff_x20 = (long *)0x0;
          }
          else {
            bVar1 = *(byte *)(*(long *)Newtonsoft_Json_Utilities_DateTimeUtils_TypeInfo + 300);
            if (*(byte *)(*unaff_x20 + 300) < bVar1) goto LAB_01937c60;
            if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)Newtonsoft_Json_Utilities_DateTimeUtils_TypeInfo) {
              unaff_x20 = (long *)0x0;
            }
          }
          if (*(long *)(in_stack_00000008 + 0x18) == 0) goto LAB_01938514;
          FUN_0132138c(*(long *)(in_stack_00000008 + 0x18),unaff_w21,&stack0x00000040,
                       *(undefined8 *)PTR_DAT_033efeb8);
          unaff_x22 = (long *)CONCAT44(uStack0000000000000044,uStack0000000000000040);
          if (unaff_x22 == (long *)0x0) goto LAB_01938514;
          lVar11 = *(long *)(unaff_x19 + 0x68);
          uVar17 = (**(code **)(*unaff_x22 + 0x298))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x2a0));
          if (lVar11 == 0) goto LAB_01938514;
          if (*(uint *)(lVar11 + 0x18) <= uVar17) goto LAB_01938518;
          lVar11 = *(long *)(lVar11 + (long)(int)uVar17 * 8 + 0x20);
          if (lVar11 == 0) goto LAB_01938514;
          FUN_0132138c(lVar11,unaff_w21,&stack0x00000040,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                      );
          unaff_w26 = uStack0000000000000040;
          if (unaff_x22[9] == 0) goto LAB_01938514;
          uVar6 = FUN_013576d8(unaff_x22[9],
                               *(undefined8 *)
                                Method_FullSerializer_fsMetaType_<>c__DisplayClass8_0_<CanSerializeField>b__0__
                              );
          fVar31 = (float)uVar10;
          fVar35 = (float)uVar25;
          fVar36 = (float)uVar29;
        } while ((uVar6 & 1) == 0);
        if (unaff_x20 == (long *)0x0) goto LAB_01938514;
      } while (*(int *)((long)unaff_x20 + 0x24) < 1);
      unaff_w29 = 0;
      unaff_w23 = 1;
    }
    if (unaff_x20[6] == 0) goto LAB_01938514;
    FUN_013576e8(unaff_x20[6],unaff_w23 + -1,&stack0x00000040,*unaff_x27);
    uVar17 = uStack0000000000000040;
    if (unaff_x20[6] == 0) goto LAB_01938514;
    lVar11 = (long)(int)uStack0000000000000040;
    FUN_013576e8(unaff_x20[6],unaff_w23,&stack0x00000040,*unaff_x27);
    uVar18 = uStack0000000000000040;
    if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
       (lVar12 = *(long *)(*(long *)(unaff_x19 + 0xa8) + 0x118), lVar12 == 0)) goto LAB_01938514;
    lVar13 = (long)(int)uStack0000000000000040;
    FUN_0132138c(lVar12,uVar17,&stack0x00000040,*unaff_x28);
    if (CONCAT44(uStack0000000000000044,uStack0000000000000040) == 0) goto LAB_01938514;
    fVar14 = (float)FUN_0269f810(CONCAT44(uStack0000000000000044,uStack0000000000000040),0);
    if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
       (lVar12 = *(long *)(*(long *)(unaff_x19 + 0xa8) + 0x60), lVar12 == 0)) goto LAB_01938514;
    if (*(uint *)(lVar12 + 0x18) <= uVar17) goto LAB_01938518;
    lVar12 = lVar12 + lVar11 * 0x10;
    fVar19 = *(float *)(lVar12 + 0x24);
    fVar22 = *(float *)(lVar12 + 0x28);
    fVar27 = *(float *)(lVar12 + 0x2c);
    fVar15 = (float)FUN_02698858(*(undefined4 *)(lVar12 + 0x20),0);
    if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
       (lVar12 = *(long *)(*(long *)(unaff_x19 + 0xa8) + 0x118), lVar12 == 0)) goto LAB_01938514;
    FUN_0132138c(lVar12,uVar18,&stack0x00000040,*unaff_x28);
    if (CONCAT44(uStack0000000000000044,uStack0000000000000040) == 0) goto LAB_01938514;
    FUN_0269f810(CONCAT44(uStack0000000000000044,uStack0000000000000040),0);
    if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
       (lVar12 = *(long *)(*(long *)(unaff_x19 + 0xa8) + 0x60), lVar12 == 0)) goto LAB_01938514;
    if (*(uint *)(lVar12 + 0x18) <= uVar18) goto LAB_01938518;
    FUN_02698858(*(undefined4 *)(lVar12 + lVar13 * 0x10 + 0x20),0);
    lVar12 = *(long *)(unaff_x19 + 0xa8);
    if ((lVar12 == 0) || (lVar13 = *(long *)(lVar12 + 0x58), lVar13 == 0)) goto LAB_01938514;
    if ((*(uint *)(lVar13 + 0x18) <= uVar17) || (*(uint *)(lVar13 + 0x18) <= uVar18))
    goto LAB_01938518;
    fVar30 = *(float *)(lVar12 + 0x15c);
    fVar23 = *(float *)(lVar12 + 0x158);
    fVar16 = *(float *)(lVar12 + 0x160);
    fVar28 = *(float *)(lVar12 + 0x164);
    fVar34 = (fVar14 * fVar19 + fVar36 * fVar22 + fVar35 * fVar27) - fVar31 * fVar15;
    fVar32 = (fVar31 * fVar22 + fVar36 * fVar15 + fVar14 * fVar27) - fVar35 * fVar19;
    fVar33 = (fVar35 * fVar15 + fVar36 * fVar19 + fVar31 * fVar27) - fVar14 * fVar22;
    fVar31 = ((fVar36 * fVar27 - fVar14 * fVar15) - fVar31 * fVar19) - fVar35 * fVar22;
    in_s30 = fVar31 * fVar28;
    in_s31 = fVar32 * fVar23;
    in_s27 = fVar33 * fVar30;
    in_s21 = fVar34 * fVar16;
    in_x9 = lVar13 + lVar11 * 0x10;
    in_s20 = *(float *)(in_x9 + 0x20);
    in_s24 = *(float *)(in_x9 + 0x24);
    param_5 = (fVar33 * fVar16 + fVar31 * fVar23 + fVar32 * fVar28) - fVar34 * fVar30;
    param_6 = (fVar34 * fVar23 + fVar31 * fVar30 + fVar33 * fVar28) - fVar32 * fVar16;
    param_7 = (fVar32 * fVar30 + fVar31 * fVar16 + fVar34 * fVar28) - fVar33 * fVar23;
    param_3 = param_7 * in_s24;
  } while( true );
LAB_019382d4:
  plVar9 = (long *)FUN_0135571c(plVar7,iVar4,
                                *(undefined8 *)
                                 System_Func<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo);
  if (plVar9 == (long *)0x0) {
LAB_01938310:
    plVar9 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_4__ + 300);
    if (*(byte *)(*plVar9 + 300) < bVar1) goto LAB_01938310;
    if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_4__) {
      plVar9 = (long *)0x0;
    }
  }
  if (plVar8[3] == 0) {
LAB_01938514:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_0132138c(plVar8[3],iVar4,&stack0x00000040,
               *(undefined8 *)Method_RoomMeshAnchor_IsComponentEnabled<OVRTriangleMesh>__);
  plVar2 = (long *)CONCAT44(uStack0000000000000044,uStack0000000000000040);
  if (plVar2 == (long *)0x0) goto LAB_01938514;
  lVar11 = *(long *)(unaff_x19 + 0x68);
  uVar17 = (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
  if (lVar11 == 0) goto LAB_01938514;
  if (*(uint *)(lVar11 + 0x18) <= uVar17) {
LAB_01938518:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  lVar11 = *(long *)(lVar11 + (long)(int)uVar17 * 8 + 0x20);
  if (lVar11 == 0) goto LAB_01938514;
  FUN_0132138c(lVar11,iVar4,&stack0x00000040,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__);
  uVar17 = uStack0000000000000040;
  if (plVar2[9] == 0) goto LAB_01938514;
  uVar10 = FUN_013576d8(plVar2[9],
                        *(undefined8 *)
                         Method_System_Collections_Generic_List<TemplateAsset>_get_Count__);
  if ((uVar10 & 1) != 0) {
    if (plVar9 == (long *)0x0) goto LAB_01938514;
    if (0 < *(int *)((long)plVar9 + 0x24)) {
      iVar5 = 0;
      do {
        if (plVar9[6] == 0) goto LAB_01938514;
        FUN_013576e8(plVar9[6],iVar5,&stack0x00000040,*unaff_x27);
        uVar18 = uStack0000000000000040;
        if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_01938514;
        lVar12 = plVar2[9];
        lVar11 = FUN_0268fd10(*(long *)(unaff_x19 + 0x70),0);
        if (lVar11 == 0) goto LAB_01938514;
        FUN_026a0094(&stack0x00000040,lVar11,0);
        in_stack_00000088 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
        uVar21 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
        in_stack_00000098 = in_stack_00000058;
        in_stack_00000090 = in_stack_00000050;
        in_stack_000000a8 = in_stack_00000068;
        in_stack_000000a0 = in_stack_00000060;
        in_stack_000000b8 = in_stack_00000078;
        in_stack_000000b0 = in_stack_00000070;
        in_stack_00000080 = uVar21;
        if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
           (lVar11 = *(long *)(*(long *)(unaff_x19 + 0xa8) + 0x118), lVar11 == 0))
        goto LAB_01938514;
        uVar26 = in_stack_00000050;
        FUN_0132138c(lVar11,uVar18,&stack0x00000040,*unaff_x28);
        uVar24 = (undefined4)uVar26;
        uVar20 = (undefined4)uVar21;
        if (CONCAT44(uStack0000000000000044,uStack0000000000000040) == 0) goto LAB_01938514;
        FUN_0269f578(CONCAT44(uStack0000000000000044,uStack0000000000000040),0);
        uVar18 = FUN_02692df0(&stack0x00000080,0);
        if (lVar12 == 0) goto LAB_01938514;
        uStack000000000000004c = 0;
        uStack0000000000000040 = uVar18;
        uStack0000000000000044 = uVar20;
        uStack0000000000000048 = uVar24;
        FUN_013577f0(lVar12,uVar17 + iVar5,&stack0x00000040,
                     *(undefined8 *)
                      System_Func<PlayerEditorConnectionEvents_MessageTypeSubscribers,_bool>_TypeInfo
                    );
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)((long)plVar9 + 0x24));
    }
  }
  iVar4 = iVar4 + 1;
  iVar5 = FUN_013557c0(plVar7,*(undefined8 *)
                               Method_System_Collections_Generic_List_Enumerator<MetaXRAcousticGeometry_MeshMaterial>_Dispose__
                      );
  if (iVar5 <= iVar4) {
    return;
  }
  goto LAB_019382d4;
}


