/*
FUNCTION_NAME: Meta.WitAi.Json.WitResponseNode.<get_Childs>d__19$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 013f6578
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


bool Meta_WitAi_Json_WitResponseNode_<get_Childs>d__19__System_Collections_IEnumerable_GetEnumerator
               (undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  int in_w8;
  int in_w9;
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
  
  do {
    bVar1 = (*in_x10)((float)(in_w8 - in_w9) / (float)in_w8,*(undefined8 *)(unaff_x20 + 0x40),
                      param_2,*(undefined8 *)(unaff_x20 + 0x28));
    *(byte *)(unaff_x19 + 0x20) = bVar1 & 1;
    do {
      fVar11 = (float)FUN_013f6c84();
      iVar2 = FUN_01370f8c();
      if (iVar2 == 0) goto LAB_013f65fc;
      do {
        FUN_0136f148();
        in_stack_00000028 = in_stack_00000040;
        in_stack_00000030 = in_stack_00000048;
        lVar5 = FUN_00bbcf6c(&stack0x00000028,*unaff_x29);
        if (lVar5 == 0) goto LAB_013f6bc4;
        while( true ) {
          if (*(long *)(lVar5 + 0x10) == 0) goto LAB_013f6bc4;
          if (*(char *)(*(long *)(lVar5 + 0x10) + 0x4c) == '\0') break;
          lVar5 = FUN_00bbcf6c(&stack0x00000028,*unaff_x29);
          if ((lVar5 == 0) || (*(long *)(lVar5 + 0x18) == 0)) goto LAB_013f6bc4;
          if (*(char *)(*(long *)(lVar5 + 0x18) + 0x4c) == '\0') break;
LAB_013f65fc:
          lVar5 = FUN_00bbcf6c(&stack0x00000028,*unaff_x29);
          if (lVar5 == 0) goto LAB_013f6bc4;
          uVar7 = *(undefined8 *)(lVar5 + 0x10);
          lVar5 = FUN_00bbcf6c(&stack0x00000028,*unaff_x29);
          if (lVar5 == 0) goto LAB_013f6bc4;
          uVar9 = *(undefined8 *)(lVar5 + 0x18);
          uVar13 = FUN_00bbd074(&stack0x00000028,*(undefined8 *)StringLiteral_2381);
          uVar10 = *(undefined8 *)(unaff_x19 + 0x18);
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                      System_Collections_Generic_ICollection<PlayableDirector>_TypeInfo
                                    );
          if (lVar5 == 0) goto LAB_013f6bc4;
          FUN_013f70a4(uVar13,lVar5,uVar7,uVar9,unaff_w21,in_stack_00000008._4_4_,uVar10);
          lVar4 = FUN_00bbcf6c(&stack0x00000028,*unaff_x29);
          if (lVar4 == 0) goto LAB_013f6bc4;
          FUN_0132448c();
          lVar4 = FUN_00bbcf6c(&stack0x00000028,*unaff_x29);
          if (lVar4 == 0) goto LAB_013f6bc4;
          FUN_0132448c();
          lVar4 = FUN_00bbcf6c(&stack0x00000028,*unaff_x29);
          if ((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) goto LAB_013f6bc4;
          *(undefined1 *)(*(long *)(lVar4 + 0x10) + 0x4c) = 0;
          lVar4 = FUN_00bbcf6c(&stack0x00000028,*unaff_x29);
          if ((lVar4 == 0) || (*(long *)(lVar4 + 0x18) == 0)) goto LAB_013f6bc4;
          *(undefined1 *)(*(long *)(lVar4 + 0x18) + 0x4c) = 0;
          plVar3 = *(long **)(unaff_x19 + 0x18);
          if (plVar3 == (long *)0x0) goto LAB_013f6bc4;
          if (unaff_w21 == *(uint *)(plVar3 + 3)) {
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_026610e4(*(undefined8 *)
                          Method_System_Collections_Specialized_NameObjectCollectionBase_OnDeserialization__
                         ,0);
            plVar3 = *(long **)(unaff_x19 + 0x18);
            if (plVar3 == (long *)0x0) goto LAB_013f6bc4;
          }
          lVar4 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar3 + 0x40));
          if (lVar4 == 0) goto LAB_013f6bcc;
          if (*(uint *)(plVar3 + 3) <= unaff_w21)
          goto 
          Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
          ;
          plVar3[(long)(int)unaff_w21 + 4] = lVar5;
          FUN_00bbcd7c();
          *(undefined1 *)(lVar5 + 0x4c) = 1;
          if (0 < *(int *)(unaff_x22 + 0x18) + -1) {
            iVar2 = 0;
            do {
              uVar14 = *(undefined4 *)(lVar5 + 0x30);
              uVar15 = *(undefined4 *)(lVar5 + 0x34);
              uVar16 = *(undefined4 *)(lVar5 + 0x38);
              FUN_0132138c();
              if (in_stack_00000040 == 0) goto LAB_013f6bc4;
              fVar12 = (float)FUN_013f5ae0(uVar14,uVar15,uVar16,
                                           *(undefined4 *)(in_stack_00000040 + 0x30),
                                           *(undefined4 *)(in_stack_00000040 + 0x34),
                                           *(undefined4 *)(in_stack_00000040 + 0x38));
              if (fVar12 < fVar11) {
                FUN_0132138c();
                lVar4 = in_stack_00000040;
                lVar6 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_12461);
                if (lVar6 == 0) goto LAB_013f6bc4;
                FUN_017b46ec(lVar6,0);
                *(long *)(lVar6 + 0x10) = lVar5;
                *(long *)(lVar6 + 0x18) = lVar4;
                in_stack_00000010 = 0;
                in_stack_00000018 = 0;
                in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,fVar12);
                FUN_0131423c(&stack0x00000010,&stack0x00000040,lVar6,
                             *(undefined8 *)
                              Method_System_Xml_HtmlEncodedRawTextWriter_WriteCharEntity__);
                in_stack_00000040 = in_stack_00000010;
                in_stack_00000048 = in_stack_00000018;
                FUN_0137089c();
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(unaff_x22 + 0x18) + -1);
          }
          unaff_x27 = 1000000;
          if (*(char *)(unaff_x19 + 0x20) != '\0') {
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
          if (*(int *)(*(long *)GoogleSheetsToUnity_GSTU_Cell_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00000038 = FUN_017aac64(0,0);
          in_stack_00000038 = in_stack_00000038 / 1000000;
          if (unaff_x20 != 0) {
            plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
            if (plVar3 == (long *)0x0) goto LAB_013f6bc4;
            if ((*(long *)PTR_DAT_033ef658 != 0) &&
               (lVar5 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033ef658,*(undefined8 *)(*plVar3 + 0x40)
                                          ), lVar5 == 0)) goto LAB_013f6bcc;
            if ((int)plVar3[3] == 0)
            goto 
            Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
            ;
            plVar3[4] = *(long *)PTR_DAT_033ef658;
            if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_013f6bc4;
            iVar2 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
            fStack0000000000000024 =
                 ((float)(iVar2 - *(int *)(unaff_x22 + 0x18)) * 100.0) / (float)iVar2;
            lVar5 = FUN_017840ac((long)&stack0x00000020 + 4,0);
            if ((lVar5 != 0) &&
               (lVar4 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
            goto LAB_013f6bcc;
            uVar8 = *(uint *)(plVar3 + 3);
            if (uVar8 < 2)
            goto 
            Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
            ;
            plVar3[5] = lVar5;
            if (*(long *)
                 Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_120>_SliceWithStride<Vector2>__
                != 0) {
              lVar5 = thunk_FUN_00d6225c(*(long *)
                                          Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_120>_SliceWithStride<Vector2>__
                                         ,*(undefined8 *)(*plVar3 + 0x40));
              if (lVar5 == 0) goto LAB_013f6bcc;
              uVar8 = *(uint *)(plVar3 + 3);
            }
            if (uVar8 < 3)
            goto 
            Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
            ;
            plVar3[6] = *(long *)
                         Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_120>_SliceWithStride<Vector2>__
            ;
            uStack0000000000000020 = *(undefined4 *)(unaff_x22 + 0x18);
            lVar5 = FUN_0176eb1c(&stack0x00000020,0);
            if ((lVar5 != 0) &&
               (lVar4 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
            goto LAB_013f6bcc;
            uVar8 = *(uint *)(plVar3 + 3);
            if (uVar8 < 4)
            goto 
            Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
            ;
            plVar3[7] = lVar5;
            if (*(long *)System_Xml_Schema_ContentValidator_TypeInfo != 0) {
              lVar5 = thunk_FUN_00d6225c(*(long *)System_Xml_Schema_ContentValidator_TypeInfo,
                                         *(undefined8 *)(*plVar3 + 0x40));
              if (lVar5 == 0) goto LAB_013f6bcc;
              uVar8 = *(uint *)(plVar3 + 3);
            }
            if (uVar8 < 5)
            goto 
            Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
            ;
            plVar3[8] = *(long *)System_Xml_Schema_ContentValidator_TypeInfo;
            uStack0000000000000020 = FUN_01370f8c();
            lVar5 = FUN_0176eb1c(&stack0x00000020,0);
            if ((lVar5 != 0) &&
               (lVar4 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
            goto LAB_013f6bcc;
            uVar8 = *(uint *)(plVar3 + 3);
            if (uVar8 < 6)
            goto 
            Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
            ;
            plVar3[9] = lVar5;
            if (*(long *)Method_RCG_Lovesick_Powers_Tune_TunePower_<ButtonPressed>b__40_2__ != 0) {
              lVar5 = thunk_FUN_00d6225c(*(long *)
                                          Method_RCG_Lovesick_Powers_Tune_TunePower_<ButtonPressed>b__40_2__
                                         ,*(undefined8 *)(*plVar3 + 0x40));
              if (lVar5 == 0) goto LAB_013f6bcc;
              uVar8 = *(uint *)(plVar3 + 3);
            }
            if (uVar8 < 7)
            goto 
            Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
            ;
            plVar3[10] = *(long *)Method_RCG_Lovesick_Powers_Tune_TunePower_<ButtonPressed>b__40_2__
            ;
            lVar5 = FUN_0176fc30(&stack0x00000038,0);
            if ((lVar5 != 0) &&
               (lVar4 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
            goto LAB_013f6bcc;
            if (*(uint *)(plVar3 + 3) < 8)
            goto 
            Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
            ;
            plVar3[0xb] = lVar5;
            uVar7 = FUN_01600844(plVar3,0);
            if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_013f6bc4;
            iVar2 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
            bVar1 = (**(code **)(unaff_x20 + 0x18))
                              ((float)(iVar2 - *(int *)(unaff_x22 + 0x18)) / (float)iVar2,
                               *(undefined8 *)(unaff_x20 + 0x40),uVar7,
                               *(undefined8 *)(unaff_x20 + 0x28));
            *(byte *)(unaff_x19 + 0x20) = bVar1 & 1;
          }
          unaff_w21 = unaff_w21 + 1;
          if (*(int *)(unaff_x22 + 0x18) < 2) goto LAB_013f6b5c;
          iVar2 = FUN_01370f8c();
          if (iVar2 == 0) {
            if (*(int *)(*(long *)GoogleSheetsToUnity_GSTU_Cell_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            in_stack_00000038 = FUN_017aac64(0,0);
            in_stack_00000038 = in_stack_00000038 / 1000000;
            if (unaff_x20 != 0) {
              plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
              if (plVar3 == (long *)0x0) goto LAB_013f6bc4;
              if ((*(long *)System_Data_Rule_var != 0) &&
                 (lVar5 = thunk_FUN_00d6225c(*(long *)System_Data_Rule_var,
                                             *(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
              goto LAB_013f6bcc;
              if ((int)plVar3[3] == 0)
              goto 
              Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
              ;
              plVar3[4] = *(long *)System_Data_Rule_var;
              if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_013f6bc4;
              iVar2 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
              fStack0000000000000024 =
                   ((float)(iVar2 - *(int *)(unaff_x22 + 0x18)) * 100.0) / (float)iVar2;
              lVar5 = FUN_017840ac((long)&stack0x00000020 + 4,0);
              if ((lVar5 != 0) &&
                 (lVar4 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
              goto LAB_013f6bcc;
              uVar8 = *(uint *)(plVar3 + 3);
              if (uVar8 < 2)
              goto 
              Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
              ;
              plVar3[5] = lVar5;
              if (*(long *)
                   Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_120>_SliceWithStride<Vector2>__
                  != 0) {
                lVar5 = thunk_FUN_00d6225c(*(long *)
                                            Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_120>_SliceWithStride<Vector2>__
                                           ,*(undefined8 *)(*plVar3 + 0x40));
                if (lVar5 == 0) goto LAB_013f6bcc;
                uVar8 = *(uint *)(plVar3 + 3);
              }
              if (uVar8 < 3)
              goto 
              Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
              ;
              plVar3[6] = *(long *)
                           Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_120>_SliceWithStride<Vector2>__
              ;
              uStack0000000000000020 = *(undefined4 *)(unaff_x22 + 0x18);
              lVar5 = FUN_0176eb1c(&stack0x00000020,0);
              if ((lVar5 != 0) &&
                 (lVar4 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
              goto LAB_013f6bcc;
              uVar8 = *(uint *)(plVar3 + 3);
              if (uVar8 < 4)
              goto 
              Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
              ;
              plVar3[7] = lVar5;
              if (*(long *)System_Xml_Schema_ContentValidator_TypeInfo != 0) {
                lVar5 = thunk_FUN_00d6225c(*(long *)System_Xml_Schema_ContentValidator_TypeInfo,
                                           *(undefined8 *)(*plVar3 + 0x40));
                if (lVar5 == 0) goto LAB_013f6bcc;
                uVar8 = *(uint *)(plVar3 + 3);
              }
              if (uVar8 < 5)
              goto 
              Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
              ;
              plVar3[8] = *(long *)System_Xml_Schema_ContentValidator_TypeInfo;
              uStack0000000000000020 = FUN_01370f8c();
              lVar5 = FUN_0176eb1c(&stack0x00000020,0);
              if ((lVar5 != 0) &&
                 (lVar4 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
              goto LAB_013f6bcc;
              uVar8 = *(uint *)(plVar3 + 3);
              if (uVar8 < 6)
              goto 
              Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
              ;
              plVar3[9] = lVar5;
              if (*(long *)Method_RCG_Lovesick_Powers_Tune_TunePower_<ButtonPressed>b__40_2__ != 0)
              {
                lVar5 = thunk_FUN_00d6225c(*(long *)
                                            Method_RCG_Lovesick_Powers_Tune_TunePower_<ButtonPressed>b__40_2__
                                           ,*(undefined8 *)(*plVar3 + 0x40));
                if (lVar5 == 0) goto LAB_013f6bcc;
                uVar8 = *(uint *)(plVar3 + 3);
              }
              if (uVar8 < 7)
              goto 
              Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
              ;
              plVar3[10] = *(long *)
                            Method_RCG_Lovesick_Powers_Tune_TunePower_<ButtonPressed>b__40_2__;
              lVar5 = FUN_0176fc30(&stack0x00000038,0);
              if ((lVar5 != 0) &&
                 (lVar4 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
              goto LAB_013f6bcc;
              if (*(uint *)(plVar3 + 3) < 8)
              goto 
              Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
              ;
              plVar3[0xb] = lVar5;
              uVar7 = FUN_01600844(plVar3,0);
              if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_013f6bc4;
              iVar2 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
              bVar1 = (**(code **)(unaff_x20 + 0x18))
                                ((float)(iVar2 - *(int *)(unaff_x22 + 0x18)) / (float)iVar2,
                                 *(undefined8 *)(unaff_x20 + 0x40),uVar7,
                                 *(undefined8 *)(unaff_x20 + 0x28));
              *(byte *)(unaff_x19 + 0x20) = bVar1 & 1;
            }
            fVar11 = (float)FUN_013f6c84();
            iVar2 = FUN_01370f8c();
            if (iVar2 == 0) goto LAB_013f6b5c;
          }
          FUN_0136f148();
          in_stack_00000028 = in_stack_00000040;
          in_stack_00000030 = in_stack_00000048;
          lVar5 = FUN_00bbcf6c(&stack0x00000028,*unaff_x29);
          if (lVar5 == 0) goto LAB_013f6bc4;
          in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
        }
        iVar2 = FUN_01370f8c();
      } while (iVar2 != 0);
      if (*(int *)(*(long *)GoogleSheetsToUnity_GSTU_Cell_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar5 = FUN_017aac64(0,0);
      in_stack_00000038 = 0;
      if (unaff_x27 != 0) {
        in_stack_00000038 = lVar5 / unaff_x27;
      }
    } while (unaff_x20 == 0);
    plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
    if (plVar3 == (long *)0x0) {
LAB_013f6bc4:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((*(long *)PTR_DAT_033ef658 != 0) &&
       (lVar5 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033ef658,*(undefined8 *)(*plVar3 + 0x40)),
       lVar5 == 0)) {
LAB_013f6bcc:
      uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar7,0);
    }
    if ((int)plVar3[3] == 0)
    goto 
    Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
    ;
    plVar3[4] = *(long *)PTR_DAT_033ef658;
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_013f6bc4;
    iVar2 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
    fStack0000000000000024 = ((float)(iVar2 - *(int *)(unaff_x22 + 0x18)) * 100.0) / (float)iVar2;
    lVar5 = FUN_017840ac((long)&stack0x00000020 + 4,0);
    if ((lVar5 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
    goto LAB_013f6bcc;
    uVar8 = *(uint *)(plVar3 + 3);
    if (uVar8 < 2) {

      Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
      :
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar3[5] = lVar5;
    if (*(long *)
         Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_120>_SliceWithStride<Vector2>__
        != 0) {
      lVar5 = thunk_FUN_00d6225c(*(long *)
                                  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_120>_SliceWithStride<Vector2>__
                                 ,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_013f6bcc;
      uVar8 = *(uint *)(plVar3 + 3);
    }
    if (uVar8 < 3)
    goto 
    Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
    ;
    plVar3[6] = *(long *)
                 Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_120>_SliceWithStride<Vector2>__
    ;
    uStack0000000000000020 = *(undefined4 *)(unaff_x22 + 0x18);
    lVar5 = FUN_0176eb1c(&stack0x00000020,0);
    if ((lVar5 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
    goto LAB_013f6bcc;
    uVar8 = *(uint *)(plVar3 + 3);
    if (uVar8 < 4)
    goto 
    Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
    ;
    plVar3[7] = lVar5;
    if (*(long *)System_Xml_Schema_ContentValidator_TypeInfo != 0) {
      lVar5 = thunk_FUN_00d6225c(*(long *)System_Xml_Schema_ContentValidator_TypeInfo,
                                 *(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_013f6bcc;
      uVar8 = *(uint *)(plVar3 + 3);
    }
    if (uVar8 < 5)
    goto 
    Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
    ;
    plVar3[8] = *(long *)System_Xml_Schema_ContentValidator_TypeInfo;
    uStack0000000000000020 = FUN_01370f8c();
    lVar5 = FUN_0176eb1c(&stack0x00000020,0);
    if ((lVar5 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
    goto LAB_013f6bcc;
    uVar8 = *(uint *)(plVar3 + 3);
    if (uVar8 < 6)
    goto 
    Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
    ;
    plVar3[9] = lVar5;
    if (*(long *)Method_RCG_Lovesick_Powers_Tune_TunePower_<ButtonPressed>b__40_2__ != 0) {
      lVar5 = thunk_FUN_00d6225c(*(long *)
                                  Method_RCG_Lovesick_Powers_Tune_TunePower_<ButtonPressed>b__40_2__
                                 ,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_013f6bcc;
      uVar8 = *(uint *)(plVar3 + 3);
    }
    if (uVar8 < 7)
    goto 
    Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
    ;
    plVar3[10] = *(long *)Method_RCG_Lovesick_Powers_Tune_TunePower_<ButtonPressed>b__40_2__;
    lVar5 = FUN_0176fc30(&stack0x00000038,0);
    if ((lVar5 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
    goto LAB_013f6bcc;
    if (*(uint *)(plVar3 + 3) < 8)
    goto 
    Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
    ;
    plVar3[0xb] = lVar5;
    param_2 = FUN_01600844(plVar3,0);
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_013f6bc4;
    in_w8 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
    in_w9 = *(int *)(unaff_x22 + 0x18);
    in_x10 = *(code **)(unaff_x20 + 0x18);
  } while( true );
}


