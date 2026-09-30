/*
FUNCTION_NAME: Oculus.Interaction.Input.SkeletonJointsCache$$GetWorldJointPose
ENTRY_POINT: 01937fa0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_rendering_without_foveation_or_eye_source
*/


void Oculus_Interaction_Input_SkeletonJointsCache__GetWorldJointPose
               (long param_1,float param_2,undefined1 param_3 [16],float param_4,float param_5,
               float param_6,float param_7)

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
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  int unaff_w23;
  long unaff_x24;
  long lVar11;
  long lVar12;
  uint unaff_w26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  int unaff_w29;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  float fVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float unaff_s9;
  float unaff_s11;
  float unaff_s12;
  float in_s18;
  float fVar25;
  float fVar26;
  float in_s27;
  float fVar27;
  float fVar28;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  float in_stack_00000038;
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
                    /* catch() { ... } // from try @ 019378cc with catch @ 01937fa4 */
                    /* try { // try from 01937fbc to 01a37fbf has its CatchHandler @ 01938040 */
    param_1 = param_1 + unaff_x24 * 0x10;
    fVar25 = *(float *)(param_1 + 0x20);
    fVar26 = *(float *)(param_1 + 0x24);
    in_stack_00000038 = (param_7 + in_s18 + unaff_s9 * param_5) - in_stack_00000038;
    fVar22 = (unaff_s12 * param_4 + in_s27 * param_6 + unaff_s11 * param_5) - unaff_s9 * param_2;
    fVar23 = (unaff_s9 * param_6 + in_s27 * param_2 + unaff_s12 * param_5) - unaff_s11 * param_4;
    fVar27 = *(float *)(param_1 + 0x28);
    fVar28 = *(float *)(param_1 + 0x2c);
    fVar24 = ((in_s27 * param_5 - unaff_s9 * param_4) - unaff_s11 * param_6) - unaff_s12 * param_2;
    lVar11 = unaff_x22[9];
    uVar10 = (ulong)(uint)((fVar23 * fVar25 + fVar24 * fVar26 + fVar22 * fVar28) -
                          in_stack_00000038 * fVar27);
    uVar18 = (ulong)(uint)((in_stack_00000038 * fVar26 + fVar24 * fVar27 + fVar23 * fVar28) -
                          fVar22 * fVar25);
    uVar21 = (ulong)(uint)(((fVar24 * fVar28 - in_stack_00000038 * fVar25) - fVar22 * fVar26) -
                          fVar23 * fVar27);
    if (*(int *)(*(long *)StringLiteral_645 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_01932ed0((fVar22 * fVar27 + fVar24 * fVar25 + in_stack_00000038 * fVar28) -
                          fVar23 * fVar26);
    if (lVar11 == 0) goto LAB_01938514;
    uStack0000000000000044 = (undefined4)uVar10;
    uStack0000000000000048 = (undefined4)uVar18;
    uStack000000000000004c = (undefined4)uVar21;
    uStack0000000000000040 = uVar13;
    FUN_013577f0(lVar11,unaff_w26 + unaff_w29,&stack0x00000040,*(undefined8 *)StringLiteral_1603);
    fVar22 = (float)uVar10;
    fVar23 = (float)uVar18;
    fVar24 = (float)uVar21;
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
          uVar13 = (**(code **)(*unaff_x22 + 0x298))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x2a0));
          if (lVar11 == 0) goto LAB_01938514;
          if (*(uint *)(lVar11 + 0x18) <= uVar13) goto LAB_01938518;
          lVar11 = *(long *)(lVar11 + (long)(int)uVar13 * 8 + 0x20);
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
          fVar22 = (float)uVar10;
          fVar23 = (float)uVar18;
          fVar24 = (float)uVar21;
        } while ((uVar6 & 1) == 0);
        if (unaff_x20 == (long *)0x0) goto LAB_01938514;
      } while (*(int *)((long)unaff_x20 + 0x24) < 1);
      unaff_w29 = 0;
      unaff_w23 = 1;
    }
    if (unaff_x20[6] == 0) goto LAB_01938514;
    FUN_013576e8(unaff_x20[6],unaff_w23 + -1,&stack0x00000040,*unaff_x27);
    uVar13 = uStack0000000000000040;
    if (unaff_x20[6] == 0) goto LAB_01938514;
    unaff_x24 = (long)(int)uStack0000000000000040;
    FUN_013576e8(unaff_x20[6],unaff_w23,&stack0x00000040,*unaff_x27);
    uVar14 = uStack0000000000000040;
    if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
       (lVar11 = *(long *)(*(long *)(unaff_x19 + 0xa8) + 0x118), lVar11 == 0)) goto LAB_01938514;
    lVar12 = (long)(int)uStack0000000000000040;
    FUN_0132138c(lVar11,uVar13,&stack0x00000040,*unaff_x28);
    if (CONCAT44(uStack0000000000000044,uStack0000000000000040) == 0) goto LAB_01938514;
    fVar25 = (float)FUN_0269f810(CONCAT44(uStack0000000000000044,uStack0000000000000040),0);
    if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
       (lVar11 = *(long *)(*(long *)(unaff_x19 + 0xa8) + 0x60), lVar11 == 0)) goto LAB_01938514;
    if (*(uint *)(lVar11 + 0x18) <= uVar13) goto LAB_01938518;
    lVar11 = lVar11 + unaff_x24 * 0x10;
    fVar27 = *(float *)(lVar11 + 0x24);
    fVar28 = *(float *)(lVar11 + 0x28);
    fVar20 = *(float *)(lVar11 + 0x2c);
    fVar26 = (float)FUN_02698858(*(undefined4 *)(lVar11 + 0x20),0);
    if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
       (lVar11 = *(long *)(*(long *)(unaff_x19 + 0xa8) + 0x118), lVar11 == 0)) goto LAB_01938514;
    FUN_0132138c(lVar11,uVar14,&stack0x00000040,*unaff_x28);
    if (CONCAT44(uStack0000000000000044,uStack0000000000000040) == 0) goto LAB_01938514;
    FUN_0269f810(CONCAT44(uStack0000000000000044,uStack0000000000000040),0);
    if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
       (lVar11 = *(long *)(*(long *)(unaff_x19 + 0xa8) + 0x60), lVar11 == 0)) goto LAB_01938514;
    if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_01938518;
    FUN_02698858(*(undefined4 *)(lVar11 + lVar12 * 0x10 + 0x20),0);
    lVar11 = *(long *)(unaff_x19 + 0xa8);
    if ((lVar11 == 0) || (param_1 = *(long *)(lVar11 + 0x58), param_1 == 0)) goto LAB_01938514;
    if ((*(uint *)(param_1 + 0x18) <= uVar13) || (*(uint *)(param_1 + 0x18) <= uVar14))
    goto LAB_01938518;
    param_6 = *(float *)(lVar11 + 0x15c);
    param_4 = *(float *)(lVar11 + 0x158);
    param_2 = *(float *)(lVar11 + 0x160);
    param_5 = *(float *)(lVar11 + 0x164);
    unaff_s12 = (fVar25 * fVar27 + fVar24 * fVar28 + fVar23 * fVar20) - fVar22 * fVar26;
    unaff_s9 = (fVar22 * fVar28 + fVar24 * fVar26 + fVar25 * fVar20) - fVar23 * fVar27;
    unaff_s11 = (fVar23 * fVar26 + fVar24 * fVar27 + fVar22 * fVar20) - fVar25 * fVar28;
    in_s27 = ((fVar24 * fVar20 - fVar25 * fVar26) - fVar22 * fVar27) - fVar23 * fVar28;
    in_stack_00000038 = unaff_s12 * param_6;
    in_s18 = in_s27 * param_4;
    param_7 = unaff_s11 * param_2;
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
  uVar13 = (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
  if (lVar11 == 0) goto LAB_01938514;
  if (*(uint *)(lVar11 + 0x18) <= uVar13) {
LAB_01938518:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  lVar11 = *(long *)(lVar11 + (long)(int)uVar13 * 8 + 0x20);
  if (lVar11 == 0) goto LAB_01938514;
  FUN_0132138c(lVar11,iVar4,&stack0x00000040,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__);
  uVar13 = uStack0000000000000040;
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
        uVar14 = uStack0000000000000040;
        if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_01938514;
        lVar12 = plVar2[9];
        lVar11 = FUN_0268fd10(*(long *)(unaff_x19 + 0x70),0);
        if (lVar11 == 0) goto LAB_01938514;
        FUN_026a0094(&stack0x00000040,lVar11,0);
        in_stack_00000088 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
        uVar16 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
        in_stack_00000098 = in_stack_00000058;
        in_stack_00000090 = in_stack_00000050;
        in_stack_000000a8 = in_stack_00000068;
        in_stack_000000a0 = in_stack_00000060;
        in_stack_000000b8 = in_stack_00000078;
        in_stack_000000b0 = in_stack_00000070;
        in_stack_00000080 = uVar16;
        if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
           (lVar11 = *(long *)(*(long *)(unaff_x19 + 0xa8) + 0x118), lVar11 == 0))
        goto LAB_01938514;
        uVar19 = in_stack_00000050;
        FUN_0132138c(lVar11,uVar14,&stack0x00000040,*unaff_x28);
        uVar17 = (undefined4)uVar19;
        uVar15 = (undefined4)uVar16;
        if (CONCAT44(uStack0000000000000044,uStack0000000000000040) == 0) goto LAB_01938514;
        FUN_0269f578(CONCAT44(uStack0000000000000044,uStack0000000000000040),0);
        uVar14 = FUN_02692df0(&stack0x00000080,0);
        if (lVar12 == 0) goto LAB_01938514;
        uStack000000000000004c = 0;
        uStack0000000000000040 = uVar14;
        uStack0000000000000044 = uVar15;
        uStack0000000000000048 = uVar17;
        FUN_013577f0(lVar12,uVar13 + iVar5,&stack0x00000040,
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


