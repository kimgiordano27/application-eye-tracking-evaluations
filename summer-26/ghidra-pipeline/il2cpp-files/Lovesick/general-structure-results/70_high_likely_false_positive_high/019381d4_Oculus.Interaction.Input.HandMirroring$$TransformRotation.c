/*
FUNCTION_NAME: Oculus.Interaction.Input.HandMirroring$$TransformRotation
ENTRY_POINT: 019381d4
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


void Oculus_Interaction_Input_HandMirroring__TransformRotation
               (uint param_1,ulong param_2,ulong param_3,ulong param_4,long param_5,ulong param_6,
               undefined1 *param_7,undefined8 param_8)

{
  byte bVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  int unaff_w23;
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
  float fVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
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
  
  uStack0000000000000040 = param_1;
  do {
    uStack0000000000000044 = (undefined4)param_2;
    uStack0000000000000048 = (undefined4)param_3;
    uStack000000000000004c = (undefined4)param_4;
    FUN_013577f0(param_5,param_6,param_7,param_8);
    fVar28 = (float)param_2;
    fVar29 = (float)param_3;
    fVar30 = (float)param_4;
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
          uVar5 = (**(code **)(*unaff_x22 + 0x298))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x2a0));
          if (lVar11 == 0) goto LAB_01938514;
          if (*(uint *)(lVar11 + 0x18) <= uVar5) goto LAB_01938518;
          lVar11 = *(long *)(lVar11 + (long)(int)uVar5 * 8 + 0x20);
          if (lVar11 == 0) goto LAB_01938514;
          FUN_0132138c(lVar11,unaff_w21,&stack0x00000040,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                      );
          unaff_w26 = uStack0000000000000040;
          if (unaff_x22[9] == 0) goto LAB_01938514;
          uVar10 = FUN_013576d8(unaff_x22[9],
                                *(undefined8 *)
                                 Method_FullSerializer_fsMetaType_<>c__DisplayClass8_0_<CanSerializeField>b__0__
                               );
          fVar28 = (float)param_2;
          fVar29 = (float)param_3;
          fVar30 = (float)param_4;
        } while ((uVar10 & 1) == 0);
        if (unaff_x20 == (long *)0x0) goto LAB_01938514;
      } while (*(int *)((long)unaff_x20 + 0x24) < 1);
      unaff_w29 = 0;
      unaff_w23 = 1;
    }
    if (unaff_x20[6] == 0) goto LAB_01938514;
    FUN_013576e8(unaff_x20[6],unaff_w23 + -1,&stack0x00000040,*unaff_x27);
    uVar5 = uStack0000000000000040;
    if (unaff_x20[6] == 0) goto LAB_01938514;
    lVar11 = (long)(int)uStack0000000000000040;
    FUN_013576e8(unaff_x20[6],unaff_w23,&stack0x00000040,*unaff_x27);
    uVar17 = uStack0000000000000040;
    if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
       (lVar12 = *(long *)(*(long *)(unaff_x19 + 0xa8) + 0x118), lVar12 == 0)) goto LAB_01938514;
    lVar13 = (long)(int)uStack0000000000000040;
    FUN_0132138c(lVar12,uVar5,&stack0x00000040,*unaff_x28);
    if (CONCAT44(uStack0000000000000044,uStack0000000000000040) == 0) goto LAB_01938514;
    fVar14 = (float)FUN_0269f810(CONCAT44(uStack0000000000000044,uStack0000000000000040),0);
    if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
       (lVar12 = *(long *)(*(long *)(unaff_x19 + 0xa8) + 0x60), lVar12 == 0)) goto LAB_01938514;
    if (*(uint *)(lVar12 + 0x18) <= uVar5) goto LAB_01938518;
    lVar12 = lVar12 + lVar11 * 0x10;
    fVar18 = *(float *)(lVar12 + 0x24);
    fVar21 = *(float *)(lVar12 + 0x28);
    fVar25 = *(float *)(lVar12 + 0x2c);
    fVar15 = (float)FUN_02698858(*(undefined4 *)(lVar12 + 0x20),0);
    if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
       (lVar12 = *(long *)(*(long *)(unaff_x19 + 0xa8) + 0x118), lVar12 == 0)) goto LAB_01938514;
    FUN_0132138c(lVar12,uVar17,&stack0x00000040,*unaff_x28);
    if (CONCAT44(uStack0000000000000044,uStack0000000000000040) == 0) goto LAB_01938514;
    FUN_0269f810(CONCAT44(uStack0000000000000044,uStack0000000000000040),0);
    if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
       (lVar12 = *(long *)(*(long *)(unaff_x19 + 0xa8) + 0x60), lVar12 == 0)) goto LAB_01938514;
    if (*(uint *)(lVar12 + 0x18) <= uVar17) goto LAB_01938518;
    lVar12 = lVar12 + lVar13 * 0x10;
    FUN_02698858(*(undefined4 *)(lVar12 + 0x20),*(undefined4 *)(lVar12 + 0x24),
                 *(undefined4 *)(lVar12 + 0x28),*(undefined4 *)(lVar12 + 0x2c),0);
    lVar12 = *(long *)(unaff_x19 + 0xa8);
    if ((lVar12 == 0) || (lVar13 = *(long *)(lVar12 + 0x58), lVar13 == 0)) goto LAB_01938514;
    if ((*(uint *)(lVar13 + 0x18) <= uVar5) || (*(uint *)(lVar13 + 0x18) <= uVar17))
    goto LAB_01938518;
    fVar27 = *(float *)(lVar12 + 0x15c);
    fVar22 = *(float *)(lVar12 + 0x158);
    fVar16 = *(float *)(lVar12 + 0x160);
    fVar26 = *(float *)(lVar12 + 0x164);
    fVar33 = (fVar14 * fVar18 + fVar30 * fVar21 + fVar29 * fVar25) - fVar28 * fVar15;
    fVar31 = (fVar28 * fVar21 + fVar30 * fVar15 + fVar14 * fVar25) - fVar29 * fVar18;
    fVar32 = (fVar29 * fVar15 + fVar30 * fVar18 + fVar28 * fVar25) - fVar14 * fVar21;
    fVar14 = ((fVar30 * fVar25 - fVar14 * fVar15) - fVar28 * fVar18) - fVar29 * fVar21;
    lVar13 = lVar13 + lVar11 * 0x10;
    fVar15 = *(float *)(lVar13 + 0x20);
    fVar18 = *(float *)(lVar13 + 0x24);
    fVar28 = (fVar32 * fVar16 + fVar14 * fVar22 + fVar31 * fVar26) - fVar33 * fVar27;
    fVar29 = (fVar33 * fVar22 + fVar14 * fVar27 + fVar32 * fVar26) - fVar31 * fVar16;
    fVar30 = (fVar31 * fVar27 + fVar14 * fVar16 + fVar33 * fVar26) - fVar32 * fVar22;
    fVar21 = *(float *)(lVar13 + 0x28);
    fVar25 = *(float *)(lVar13 + 0x2c);
    fVar14 = ((fVar14 * fVar26 - fVar31 * fVar22) - fVar32 * fVar27) - fVar33 * fVar16;
    param_5 = unaff_x22[9];
    param_2 = (ulong)(uint)((fVar30 * fVar15 + fVar14 * fVar18 + fVar29 * fVar25) - fVar28 * fVar21)
    ;
    param_3 = (ulong)(uint)((fVar28 * fVar18 + fVar14 * fVar21 + fVar30 * fVar25) - fVar29 * fVar15)
    ;
    param_4 = (ulong)(uint)(((fVar14 * fVar25 - fVar28 * fVar15) - fVar29 * fVar18) -
                           fVar30 * fVar21);
    if (*(int *)(*(long *)StringLiteral_645 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_01932ed0((fVar29 * fVar21 + fVar14 * fVar15 + fVar28 * fVar25) - fVar30 * fVar18);
    if (param_5 == 0) goto LAB_01938514;
    param_6 = (ulong)(unaff_w26 + unaff_w29);
    param_7 = (undefined1 *)&stack0x00000040;
    param_8 = *(undefined8 *)StringLiteral_1603;
    uStack0000000000000040 = uVar5;
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
  uVar5 = (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
  if (lVar11 == 0) goto LAB_01938514;
  if (*(uint *)(lVar11 + 0x18) <= uVar5) {
LAB_01938518:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  lVar11 = *(long *)(lVar11 + (long)(int)uVar5 * 8 + 0x20);
  if (lVar11 == 0) goto LAB_01938514;
  FUN_0132138c(lVar11,iVar4,&stack0x00000040,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__);
  uVar5 = uStack0000000000000040;
  if (plVar2[9] == 0) goto LAB_01938514;
  uVar10 = FUN_013576d8(plVar2[9],
                        *(undefined8 *)
                         Method_System_Collections_Generic_List<TemplateAsset>_get_Count__);
  if ((uVar10 & 1) != 0) {
    if (plVar9 == (long *)0x0) goto LAB_01938514;
    if (0 < *(int *)((long)plVar9 + 0x24)) {
      iVar6 = 0;
      do {
        if (plVar9[6] == 0) goto LAB_01938514;
        FUN_013576e8(plVar9[6],iVar6,&stack0x00000040,*unaff_x27);
        uVar17 = uStack0000000000000040;
        if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_01938514;
        lVar12 = plVar2[9];
        lVar11 = FUN_0268fd10(*(long *)(unaff_x19 + 0x70),0);
        if (lVar11 == 0) goto LAB_01938514;
        FUN_026a0094(&stack0x00000040,lVar11,0);
        in_stack_00000088 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
        uVar20 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
        in_stack_00000098 = in_stack_00000058;
        in_stack_00000090 = in_stack_00000050;
        in_stack_000000a8 = in_stack_00000068;
        in_stack_000000a0 = in_stack_00000060;
        in_stack_000000b8 = in_stack_00000078;
        in_stack_000000b0 = in_stack_00000070;
        in_stack_00000080 = uVar20;
        if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
           (lVar11 = *(long *)(*(long *)(unaff_x19 + 0xa8) + 0x118), lVar11 == 0))
        goto LAB_01938514;
        uVar24 = in_stack_00000050;
        FUN_0132138c(lVar11,uVar17,&stack0x00000040,*unaff_x28);
        uVar23 = (undefined4)uVar24;
        uVar19 = (undefined4)uVar20;
        if (CONCAT44(uStack0000000000000044,uStack0000000000000040) == 0) goto LAB_01938514;
        FUN_0269f578(CONCAT44(uStack0000000000000044,uStack0000000000000040),0);
        uVar17 = FUN_02692df0(&stack0x00000080,0);
        if (lVar12 == 0) goto LAB_01938514;
        uStack000000000000004c = 0;
        uStack0000000000000040 = uVar17;
        uStack0000000000000044 = uVar19;
        uStack0000000000000048 = uVar23;
        FUN_013577f0(lVar12,uVar5 + iVar6,&stack0x00000040,
                     *(undefined8 *)
                      System_Func<PlayerEditorConnectionEvents_MessageTypeSubscribers,_bool>_TypeInfo
                    );
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)((long)plVar9 + 0x24));
    }
  }
  iVar4 = iVar4 + 1;
  iVar6 = FUN_013557c0(plVar7,*(undefined8 *)
                               Method_System_Collections_Generic_List_Enumerator<MetaXRAcousticGeometry_MeshMaterial>_Dispose__
                      );
  if (iVar6 <= iVar4) {
    return;
  }
  goto LAB_019382d4;
}


