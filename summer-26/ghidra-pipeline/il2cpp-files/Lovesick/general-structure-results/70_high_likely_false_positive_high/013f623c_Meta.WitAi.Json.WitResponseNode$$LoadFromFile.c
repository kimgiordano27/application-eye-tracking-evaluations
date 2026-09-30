/*
FUNCTION_NAME: Meta.WitAi.Json.WitResponseNode$$LoadFromFile
ENTRY_POINT: 013f623c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_9;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_9;strong_file_logging_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_WitAi_Json_WitResponseNode__LoadFromFile
               (float param_1,float param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
               )

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  code *in_x10;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x27;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *unaff_x29;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000020;
  float fStack0000000000000024;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  
code_r0x013f623c:
  bVar1 = (*in_x10)(param_1 / param_2,param_3,param_4,param_5);
  *(byte *)(unaff_x19 + 0x20) = bVar1 & 1;
LAB_013f6254:
  fVar11 = (float)FUN_013f6c84();
  iVar2 = FUN_01370f8c();
  if (iVar2 == 0) {
LAB_013f6b5c:
    if (unaff_x20 == 0) {
      bVar1 = *(byte *)(unaff_x19 + 0x20);
    }
    else {
      bVar1 = (**(code **)(unaff_x20 + 0x18))
                        (0x42c80000,*(undefined8 *)(unaff_x20 + 0x40),
                         *(undefined8 *)PTR_DAT_033f3c08,*(undefined8 *)(unaff_x20 + 0x28));
      bVar1 = bVar1 & 1;
      *(byte *)(unaff_x19 + 0x20) = bVar1;
    }
    return bVar1 == 0;
  }
LAB_013f6280:
  FUN_0136f148();
  in_stack_00000028 = in_stack_00000040;
  in_stack_00000030 = in_stack_00000048;
  lVar3 = FUN_00bbcf6c(&stack0x00000028,*unaff_x29);
  if (lVar3 != 0) {
    in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
    do {
      if (*(long *)(lVar3 + 0x10) == 0) break;
      if (*(char *)(*(long *)(lVar3 + 0x10) + 0x4c) != '\0') {
        lVar3 = FUN_00bbcf6c(&stack0x00000028,*unaff_x29);
        if ((lVar3 == 0) || (*(long *)(lVar3 + 0x18) == 0)) break;
        if (*(char *)(*(long *)(lVar3 + 0x18) + 0x4c) != '\0') goto LAB_013f65fc;
      }
      iVar2 = FUN_01370f8c();
      if (iVar2 == 0) {
        if (*(int *)(*(long *)GoogleSheetsToUnity_GSTU_Cell_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar3 = FUN_017aac64(0,0);
        in_stack_00000038 = 0;
        if (unaff_x27 != 0) {
          in_stack_00000038 = lVar3 / unaff_x27;
        }
        if (unaff_x20 != 0) {
          plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
          if (plVar4 == (long *)0x0) break;
          if ((*(long *)PTR_DAT_033ef658 != 0) &&
             (lVar3 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033ef658,*(undefined8 *)(*plVar4 + 0x40)),
             lVar3 == 0)) goto LAB_013f6bcc;
          if ((int)plVar4[3] == 0)
          goto 
          Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
          ;
          plVar4[4] = *(long *)PTR_DAT_033ef658;
          if (*(long *)(unaff_x19 + 0x10) == 0) break;
          iVar2 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
          fStack0000000000000024 =
               ((float)(iVar2 - *(int *)(unaff_x22 + 0x18)) * 100.0) / (float)iVar2;
          lVar3 = FUN_017840ac((long)&stack0x00000020 + 4,0);
          if ((lVar3 != 0) &&
             (lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
          goto LAB_013f6bcc;
          uVar8 = *(uint *)(plVar4 + 3);
          if (uVar8 < 2)
          goto 
          Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
          ;
          plVar4[5] = lVar3;
          if (*(long *)
               Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_120>_SliceWithStride<Vector2>__
              != 0) {
            lVar3 = thunk_FUN_00d6225c(*(long *)
                                        Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_120>_SliceWithStride<Vector2>__
                                       ,*(undefined8 *)(*plVar4 + 0x40));
            if (lVar3 == 0) goto LAB_013f6bcc;
            uVar8 = *(uint *)(plVar4 + 3);
          }
          if (uVar8 < 3)
          goto 
          Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
          ;
          plVar4[6] = *(long *)
                       Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_120>_SliceWithStride<Vector2>__
          ;
          uStack0000000000000020 = *(undefined4 *)(unaff_x22 + 0x18);
          lVar3 = FUN_0176eb1c(&stack0x00000020,0);
          if ((lVar3 != 0) &&
             (lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
          goto LAB_013f6bcc;
          uVar8 = *(uint *)(plVar4 + 3);
          if (uVar8 < 4)
          goto 
          Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
          ;
          plVar4[7] = lVar3;
          if (*(long *)System_Xml_Schema_ContentValidator_TypeInfo != 0) {
            lVar3 = thunk_FUN_00d6225c(*(long *)System_Xml_Schema_ContentValidator_TypeInfo,
                                       *(undefined8 *)(*plVar4 + 0x40));
            if (lVar3 == 0) goto LAB_013f6bcc;
            uVar8 = *(uint *)(plVar4 + 3);
          }
          if (uVar8 < 5)
          goto 
          Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
          ;
          plVar4[8] = *(long *)System_Xml_Schema_ContentValidator_TypeInfo;
          uStack0000000000000020 = FUN_01370f8c();
          lVar3 = FUN_0176eb1c(&stack0x00000020,0);
          if ((lVar3 != 0) &&
             (lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
          goto LAB_013f6bcc;
          uVar8 = *(uint *)(plVar4 + 3);
          if (uVar8 < 6)
          goto 
          Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
          ;
          plVar4[9] = lVar3;
          if (*(long *)Method_RCG_Lovesick_Powers_Tune_TunePower_<ButtonPressed>b__40_2__ != 0) {
            lVar3 = thunk_FUN_00d6225c(*(long *)
                                        Method_RCG_Lovesick_Powers_Tune_TunePower_<ButtonPressed>b__40_2__
                                       ,*(undefined8 *)(*plVar4 + 0x40));
            if (lVar3 == 0) goto LAB_013f6bcc;
            uVar8 = *(uint *)(plVar4 + 3);
          }
          if (uVar8 < 7)
          goto 
          Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
          ;
          plVar4[10] = *(long *)Method_RCG_Lovesick_Powers_Tune_TunePower_<ButtonPressed>b__40_2__;
          lVar3 = FUN_0176fc30(&stack0x00000038,0);
          if ((lVar3 != 0) &&
             (lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
          goto LAB_013f6bcc;
          if (*(uint *)(plVar4 + 3) < 8)
          goto 
          Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
          ;
          plVar4[0xb] = lVar3;
          uVar6 = FUN_01600844(plVar4,0);
          if (*(long *)(unaff_x19 + 0x10) == 0) break;
          iVar2 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
          bVar1 = (**(code **)(unaff_x20 + 0x18))
                            ((float)(iVar2 - *(int *)(unaff_x22 + 0x18)) / (float)iVar2,
                             *(undefined8 *)(unaff_x20 + 0x40),uVar6,
                             *(undefined8 *)(unaff_x20 + 0x28));
          *(byte *)(unaff_x19 + 0x20) = bVar1 & 1;
        }
        fVar11 = (float)FUN_013f6c84();
        iVar2 = FUN_01370f8c();
        if (iVar2 == 0) goto LAB_013f65fc;
      }
      FUN_0136f148();
      in_stack_00000028 = in_stack_00000040;
      in_stack_00000030 = in_stack_00000048;
      lVar3 = FUN_00bbcf6c(&stack0x00000028,*unaff_x29);
      if (lVar3 == 0) break;
    } while( true );
  }
  goto LAB_013f6bc4;
LAB_013f65fc:
  lVar3 = FUN_00bbcf6c(&stack0x00000028,*unaff_x29);
  if (lVar3 == 0) goto LAB_013f6bc4;
  uVar6 = *(undefined8 *)(lVar3 + 0x10);
  lVar3 = FUN_00bbcf6c(&stack0x00000028,*unaff_x29);
  if (lVar3 == 0) goto LAB_013f6bc4;
  uVar9 = *(undefined8 *)(lVar3 + 0x18);
  uVar13 = FUN_00bbd074(&stack0x00000028,*(undefined8 *)StringLiteral_2381);
  uVar10 = *(undefined8 *)(unaff_x19 + 0x18);
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                              System_Collections_Generic_ICollection<PlayableDirector>_TypeInfo);
  if (lVar3 == 0) goto LAB_013f6bc4;
  FUN_013f70a4(uVar13,lVar3,uVar6,uVar9,unaff_w21,in_stack_00000008._4_4_,uVar10);
  lVar5 = FUN_00bbcf6c(&stack0x00000028,*unaff_x29);
  if (lVar5 == 0) goto LAB_013f6bc4;
  FUN_0132448c();
  lVar5 = FUN_00bbcf6c(&stack0x00000028,*unaff_x29);
  if (lVar5 == 0) goto LAB_013f6bc4;
  FUN_0132448c();
  lVar5 = FUN_00bbcf6c(&stack0x00000028,*unaff_x29);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x10) == 0)) goto LAB_013f6bc4;
  *(undefined1 *)(*(long *)(lVar5 + 0x10) + 0x4c) = 0;
  lVar5 = FUN_00bbcf6c(&stack0x00000028,*unaff_x29);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x18) == 0)) goto LAB_013f6bc4;
  *(undefined1 *)(*(long *)(lVar5 + 0x18) + 0x4c) = 0;
  plVar4 = *(long **)(unaff_x19 + 0x18);
  if (plVar4 == (long *)0x0) goto LAB_013f6bc4;
  if (unaff_w21 == *(uint *)(plVar4 + 3)) {
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026610e4(*(undefined8 *)
                  Method_System_Collections_Specialized_NameObjectCollectionBase_OnDeserialization__
                 ,0);
    plVar4 = *(long **)(unaff_x19 + 0x18);
    if (plVar4 == (long *)0x0) goto LAB_013f6bc4;
  }
  lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40));
  if (lVar5 == 0) goto LAB_013f6bcc;
  if (*(uint *)(plVar4 + 3) <= unaff_w21)
  goto 
  Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
  ;
  plVar4[(long)(int)unaff_w21 + 4] = lVar3;
  FUN_00bbcd7c();
  *(undefined1 *)(lVar3 + 0x4c) = 1;
  if (0 < *(int *)(unaff_x22 + 0x18) + -1) {
    iVar2 = 0;
    do {
      uVar14 = *(undefined4 *)(lVar3 + 0x30);
      uVar15 = *(undefined4 *)(lVar3 + 0x34);
      uVar16 = *(undefined4 *)(lVar3 + 0x38);
      FUN_0132138c();
      if (in_stack_00000040 == 0) goto LAB_013f6bc4;
      fVar12 = (float)FUN_013f5ae0(uVar14,uVar15,uVar16,*(undefined4 *)(in_stack_00000040 + 0x30),
                                   *(undefined4 *)(in_stack_00000040 + 0x34),
                                   *(undefined4 *)(in_stack_00000040 + 0x38));
      if (fVar12 < fVar11) {
        FUN_0132138c();
        lVar5 = in_stack_00000040;
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_12461);
        if (lVar7 == 0) goto LAB_013f6bc4;
        FUN_017b46ec(lVar7,0);
        *(long *)(lVar7 + 0x10) = lVar3;
        *(long *)(lVar7 + 0x18) = lVar5;
        in_stack_00000010 = 0;
        in_stack_00000018 = 0;
        in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,fVar12);
        FUN_0131423c(&stack0x00000010,&stack0x00000040,lVar7,
                     *(undefined8 *)Method_System_Xml_HtmlEncodedRawTextWriter_WriteCharEntity__);
        in_stack_00000040 = in_stack_00000010;
        in_stack_00000048 = in_stack_00000018;
        FUN_0137089c();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(unaff_x22 + 0x18) + -1);
  }
  unaff_x27 = 1000000;
  if (*(char *)(unaff_x19 + 0x20) != '\0') goto LAB_013f6b5c;
  if (*(int *)(*(long *)GoogleSheetsToUnity_GSTU_Cell_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  in_stack_00000038 = FUN_017aac64(0,0);
  in_stack_00000038 = in_stack_00000038 / 1000000;
  if (unaff_x20 != 0) {
    plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
    if (plVar4 == (long *)0x0) goto LAB_013f6bc4;
    if ((*(long *)PTR_DAT_033ef658 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033ef658,*(undefined8 *)(*plVar4 + 0x40)),
       lVar3 == 0)) goto LAB_013f6bcc;
    if ((int)plVar4[3] == 0)
    goto 
    Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
    ;
    plVar4[4] = *(long *)PTR_DAT_033ef658;
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_013f6bc4;
    iVar2 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
    fStack0000000000000024 = ((float)(iVar2 - *(int *)(unaff_x22 + 0x18)) * 100.0) / (float)iVar2;
    lVar3 = FUN_017840ac((long)&stack0x00000020 + 4,0);
    if ((lVar3 != 0) &&
       (lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    goto LAB_013f6bcc;
    uVar8 = *(uint *)(plVar4 + 3);
    if (uVar8 < 2)
    goto 
    Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
    ;
    plVar4[5] = lVar3;
    if (*(long *)
         Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_120>_SliceWithStride<Vector2>__
        != 0) {
      lVar3 = thunk_FUN_00d6225c(*(long *)
                                  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_120>_SliceWithStride<Vector2>__
                                 ,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar3 == 0) goto LAB_013f6bcc;
      uVar8 = *(uint *)(plVar4 + 3);
    }
    if (uVar8 < 3)
    goto 
    Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
    ;
    plVar4[6] = *(long *)
                 Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_120>_SliceWithStride<Vector2>__
    ;
    uStack0000000000000020 = *(undefined4 *)(unaff_x22 + 0x18);
    lVar3 = FUN_0176eb1c(&stack0x00000020,0);
    if ((lVar3 != 0) &&
       (lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    goto LAB_013f6bcc;
    uVar8 = *(uint *)(plVar4 + 3);
    if (uVar8 < 4)
    goto 
    Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
    ;
    plVar4[7] = lVar3;
    if (*(long *)System_Xml_Schema_ContentValidator_TypeInfo != 0) {
      lVar3 = thunk_FUN_00d6225c(*(long *)System_Xml_Schema_ContentValidator_TypeInfo,
                                 *(undefined8 *)(*plVar4 + 0x40));
      if (lVar3 == 0) goto LAB_013f6bcc;
      uVar8 = *(uint *)(plVar4 + 3);
    }
    if (uVar8 < 5)
    goto 
    Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
    ;
    plVar4[8] = *(long *)System_Xml_Schema_ContentValidator_TypeInfo;
    uStack0000000000000020 = FUN_01370f8c();
    lVar3 = FUN_0176eb1c(&stack0x00000020,0);
    if ((lVar3 != 0) &&
       (lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    goto LAB_013f6bcc;
    uVar8 = *(uint *)(plVar4 + 3);
    if (uVar8 < 6)
    goto 
    Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
    ;
    plVar4[9] = lVar3;
    if (*(long *)Method_RCG_Lovesick_Powers_Tune_TunePower_<ButtonPressed>b__40_2__ != 0) {
      lVar3 = thunk_FUN_00d6225c(*(long *)
                                  Method_RCG_Lovesick_Powers_Tune_TunePower_<ButtonPressed>b__40_2__
                                 ,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar3 == 0) goto LAB_013f6bcc;
      uVar8 = *(uint *)(plVar4 + 3);
    }
    if (uVar8 < 7)
    goto 
    Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
    ;
    plVar4[10] = *(long *)Method_RCG_Lovesick_Powers_Tune_TunePower_<ButtonPressed>b__40_2__;
    lVar3 = FUN_0176fc30(&stack0x00000038,0);
    if ((lVar3 != 0) &&
       (lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    goto LAB_013f6bcc;
    if (*(uint *)(plVar4 + 3) < 8)
    goto 
    Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
    ;
    plVar4[0xb] = lVar3;
    uVar6 = FUN_01600844(plVar4,0);
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_013f6bc4;
    iVar2 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
    bVar1 = (**(code **)(unaff_x20 + 0x18))
                      ((float)(iVar2 - *(int *)(unaff_x22 + 0x18)) / (float)iVar2,
                       *(undefined8 *)(unaff_x20 + 0x40),uVar6,*(undefined8 *)(unaff_x20 + 0x28));
    *(byte *)(unaff_x19 + 0x20) = bVar1 & 1;
  }
  unaff_w21 = unaff_w21 + 1;
  if (*(int *)(unaff_x22 + 0x18) < 2) goto LAB_013f6b5c;
  iVar2 = FUN_01370f8c();
  if (iVar2 == 0) goto code_r0x013f5fa4;
  goto LAB_013f6280;
code_r0x013f5fa4:
  if (*(int *)(*(long *)GoogleSheetsToUnity_GSTU_Cell_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  in_stack_00000038 = FUN_017aac64(0,0);
  in_stack_00000038 = in_stack_00000038 / 1000000;
  if (unaff_x20 != 0) goto code_r0x013f5fd4;
  goto LAB_013f6254;
code_r0x013f5fd4:
  plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
  if (plVar4 == (long *)0x0) {
LAB_013f6bc4:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((*(long *)System_Data_Rule_var != 0) &&
     (lVar3 = thunk_FUN_00d6225c(*(long *)System_Data_Rule_var,*(undefined8 *)(*plVar4 + 0x40)),
     lVar3 == 0)) {
LAB_013f6bcc:
    uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = *(long *)System_Data_Rule_var;
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_013f6bc4;
    iVar2 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
    fStack0000000000000024 = ((float)(iVar2 - *(int *)(unaff_x22 + 0x18)) * 100.0) / (float)iVar2;
    lVar3 = FUN_017840ac((long)&stack0x00000020 + 4,0);
    if ((lVar3 != 0) &&
       (lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    goto LAB_013f6bcc;
    uVar8 = *(uint *)(plVar4 + 3);
    if (1 < uVar8) {
      plVar4[5] = lVar3;
      if (*(long *)
           Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_120>_SliceWithStride<Vector2>__
          != 0) {
        lVar3 = thunk_FUN_00d6225c(*(long *)
                                    Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_120>_SliceWithStride<Vector2>__
                                   ,*(undefined8 *)(*plVar4 + 0x40));
        if (lVar3 == 0) goto LAB_013f6bcc;
        uVar8 = *(uint *)(plVar4 + 3);
      }
      if (2 < uVar8) {
        plVar4[6] = *(long *)
                     Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_120>_SliceWithStride<Vector2>__
        ;
        uStack0000000000000020 = *(undefined4 *)(unaff_x22 + 0x18);
        lVar3 = FUN_0176eb1c(&stack0x00000020,0);
        if ((lVar3 != 0) &&
           (lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
        goto LAB_013f6bcc;
        uVar8 = *(uint *)(plVar4 + 3);
        if (3 < uVar8) {
          plVar4[7] = lVar3;
          if (*(long *)System_Xml_Schema_ContentValidator_TypeInfo != 0) {
            lVar3 = thunk_FUN_00d6225c(*(long *)System_Xml_Schema_ContentValidator_TypeInfo,
                                       *(undefined8 *)(*plVar4 + 0x40));
            if (lVar3 == 0) goto LAB_013f6bcc;
            uVar8 = *(uint *)(plVar4 + 3);
          }
          if (4 < uVar8) {
            plVar4[8] = *(long *)System_Xml_Schema_ContentValidator_TypeInfo;
            uStack0000000000000020 = FUN_01370f8c();
            lVar3 = FUN_0176eb1c(&stack0x00000020,0);
            if ((lVar3 != 0) &&
               (lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
            goto LAB_013f6bcc;
            uVar8 = *(uint *)(plVar4 + 3);
            if (5 < uVar8) {
              plVar4[9] = lVar3;
              if (*(long *)Method_RCG_Lovesick_Powers_Tune_TunePower_<ButtonPressed>b__40_2__ != 0)
              {
                lVar3 = thunk_FUN_00d6225c(*(long *)
                                            Method_RCG_Lovesick_Powers_Tune_TunePower_<ButtonPressed>b__40_2__
                                           ,*(undefined8 *)(*plVar4 + 0x40));
                if (lVar3 == 0) goto LAB_013f6bcc;
                uVar8 = *(uint *)(plVar4 + 3);
              }
              if (6 < uVar8) {
                plVar4[10] = *(long *)
                              Method_RCG_Lovesick_Powers_Tune_TunePower_<ButtonPressed>b__40_2__;
                lVar3 = FUN_0176fc30(&stack0x00000038,0);
                if ((lVar3 != 0) &&
                   (lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                goto LAB_013f6bcc;
                if (7 < *(uint *)(plVar4 + 3)) {
                  plVar4[0xb] = lVar3;
                  param_4 = FUN_01600844(plVar4,0);
                  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_013f6bc4;
                  iVar2 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
                  in_x10 = *(code **)(unaff_x20 + 0x18);
                  param_3 = *(undefined8 *)(unaff_x20 + 0x40);
                  param_5 = *(undefined8 *)(unaff_x20 + 0x28);
                  param_1 = (float)(iVar2 - *(int *)(unaff_x22 + 0x18));
                  param_2 = (float)iVar2;
                  goto code_r0x013f623c;
                }
              }
            }
          }
        }
      }
    }
  }

  Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
  :
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


