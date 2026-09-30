/*
FUNCTION_NAME: LitJson.JsonReader$$Close
ENTRY_POINT: 05ac0b40
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_19;ray_or_cast_sink_hits_1;strong_file_logging_hits_3
*/


void LitJson_JsonReader__Close(undefined1 param_1 [16])

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *puVar8;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
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
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xf60);
  *(long *)(unaff_x19 + 0x28) = param_1._8_8_;
  *(undefined8 *)(unaff_x19 + 0x20) = param_1._0_8_;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x20),0);
  in_stack_00000140 = *puVar8;
  in_stack_00000148 = 0;
  thunk_FUN_02bb0e9c(&stack0x00000140);
  puVar2 = PTR_DAT_0631b1f0;
  in_stack_00000148 = CONCAT44(in_stack_00000148._4_4_,1);
  if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffe) != 0) {
    *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000148;
    *(undefined8 *)(unaff_x19 + 0x30) = in_stack_00000140;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x30),0);
    in_stack_00000130 = *(undefined8 *)puVar2;
    in_stack_00000138 = 0;
    thunk_FUN_02bb0e9c(&stack0x00000130);
    puVar2 = PTR_DAT_0631b1e8;
    in_stack_00000138 = CONCAT44(in_stack_00000138._4_4_,2);
    if (2 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x48) = in_stack_00000138;
      *(undefined8 *)(unaff_x19 + 0x40) = in_stack_00000130;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x40),0);
      in_stack_00000120 = *(undefined8 *)puVar2;
      in_stack_00000128 = 0;
      thunk_FUN_02bb0e9c(&stack0x00000120);
      puVar2 = Method_System_Linq_Enumerable_Select<AndroidAxis,_string>__;
      in_stack_00000128 = CONCAT44(in_stack_00000128._4_4_,2);
      if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffc) != 0) {
        *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000128;
        *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000120;
        thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x50),0);
        in_stack_00000110 = *(undefined8 *)puVar2;
        in_stack_00000118 = 0;
        thunk_FUN_02bb0e9c(&stack0x00000110);
        puVar2 = Method_System_Linq_Enumerable_Select<DataColumn,_Type>__;
        in_stack_00000118 = CONCAT44(in_stack_00000118._4_4_,1);
        if (4 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000118;
          *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000110;
          thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x60),0);
          in_stack_00000100 = *(undefined8 *)puVar2;
          in_stack_00000108 = 0;
          thunk_FUN_02bb0e9c(&stack0x00000100);
          puVar2 = Method_System_Linq_Enumerable_Select<Collider,_Transform>__;
          in_stack_00000108 = CONCAT44(in_stack_00000108._4_4_,1);
          if (5 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x78) = in_stack_00000108;
            *(undefined8 *)(unaff_x19 + 0x70) = in_stack_00000100;
            thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x70),0);
            in_stack_000000f0 = *(undefined8 *)puVar2;
            in_stack_000000f8 = 0;
            thunk_FUN_02bb0e9c(&stack0x000000f0);
            puVar2 = Method_System_Linq_Enumerable_Select<FieldInfo,_VolumeParameter>__;
            in_stack_000000f8 = CONCAT44(in_stack_000000f8._4_4_,1);
            if (6 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x88) = in_stack_000000f8;
              *(undefined8 *)(unaff_x19 + 0x80) = in_stack_000000f0;
              thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x80),0);
              in_stack_000000e0 = *(undefined8 *)puVar2;
              in_stack_000000e8 = 0;
              thunk_FUN_02bb0e9c(&stack0x000000e0);
              puVar2 = Method_System_Linq_Enumerable_Select<FieldInfo,_string>__;
              in_stack_000000e8 = CONCAT44(in_stack_000000e8._4_4_,1);
              if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff8) != 0) {
                *(undefined8 *)(unaff_x19 + 0x98) = in_stack_000000e8;
                *(undefined8 *)(unaff_x19 + 0x90) = in_stack_000000e0;
                thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x90),0);
                in_stack_000000d0 = *(undefined8 *)puVar2;
                in_stack_000000d8 = 0;
                thunk_FUN_02bb0e9c(&stack0x000000d0);
                puVar2 = 
                Method_System_Linq_Enumerable_Select<KeyValuePair<string,_string>,_string>__;
                in_stack_000000d8 = CONCAT44(in_stack_000000d8._4_4_,1);
                if (8 < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 0xa8) = in_stack_000000d8;
                  *(undefined8 *)(unaff_x19 + 0xa0) = in_stack_000000d0;
                  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xa0),0);
                  in_stack_000000c0 = *(undefined8 *)puVar2;
                  in_stack_000000c8 = 0;
                  thunk_FUN_02bb0e9c(&stack0x000000c0);
                  puVar2 = Method_System_Linq_Enumerable_Select<FieldInfo,_Enum>__;
                  in_stack_000000c8 = CONCAT44(in_stack_000000c8._4_4_,1);
                  if (9 < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined8 *)(unaff_x19 + 0xb8) = in_stack_000000c8;
                    *(undefined8 *)(unaff_x19 + 0xb0) = in_stack_000000c0;
                    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xb0),0);
                    in_stack_000000b0 = *(undefined8 *)puVar2;
                    in_stack_000000b8 = 0;
                    thunk_FUN_02bb0e9c(&stack0x000000b0);
                    puVar2 = Method_System_Linq_Enumerable_Select<EnumMemberAttribute,_string>__;
                    in_stack_000000b8 = CONCAT44(in_stack_000000b8._4_4_,1);
                    if (10 < *(uint *)(unaff_x19 + 0x18)) {
                      *(undefined8 *)(unaff_x19 + 200) = in_stack_000000b8;
                      *(undefined8 *)(unaff_x19 + 0xc0) = in_stack_000000b0;
                      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xc0),0);
                      in_stack_000000a0 = *(undefined8 *)puVar2;
                      in_stack_000000a8 = 0;
                      thunk_FUN_02bb0e9c(&stack0x000000a0);
                      puVar2 = 
                      Method_System_Linq_Enumerable_Select<KeyValuePair<Guid,_PxrSpatialMeshInfo>,_Guid>__
                      ;
                      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,1);
                      if (0xb < *(uint *)(unaff_x19 + 0x18)) {
                        *(undefined8 *)(unaff_x19 + 0xd8) = in_stack_000000a8;
                        *(undefined8 *)(unaff_x19 + 0xd0) = in_stack_000000a0;
                        thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xd0),0);
                        in_stack_00000090 = *(undefined8 *)puVar2;
                        in_stack_00000098 = 0;
                        thunk_FUN_02bb0e9c(&stack0x00000090);
                        puVar2 = 
                        Method_System_Linq_Enumerable_Select<IGrouping<HandFinger,_ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>>,_<>f__AnonymousType0<HandFinger,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>>__
                        ;
                        in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,1);
                        if (0xc < *(uint *)(unaff_x19 + 0x18)) {
                          *(undefined8 *)(unaff_x19 + 0xe8) = in_stack_00000098;
                          *(undefined8 *)(unaff_x19 + 0xe0) = in_stack_00000090;
                          thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xe0),0);
                          in_stack_00000080 = *(undefined8 *)puVar2;
                          in_stack_00000088 = 0;
                          thunk_FUN_02bb0e9c(&stack0x00000080);
                          puVar2 = 
                          Method_System_Linq_Enumerable_Select<KeyValuePair<string,_JsonParser_JsonValue>,_string>__
                          ;
                          in_stack_00000088 = CONCAT44(in_stack_00000088._4_4_,1);
                          if (0xd < *(uint *)(unaff_x19 + 0x18)) {
                            *(undefined8 *)(unaff_x19 + 0xf8) = in_stack_00000088;
                            *(undefined8 *)(unaff_x19 + 0xf0) = in_stack_00000080;
                            thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xf0),0);
                            in_stack_00000070 = *(undefined8 *)puVar2;
                            in_stack_00000078 = 0;
                            thunk_FUN_02bb0e9c(&stack0x00000070);
                            in_stack_00000078 = CONCAT44(in_stack_00000078._4_4_,3);
                            if (0xe < *(uint *)(unaff_x19 + 0x18)) {
                              *(undefined8 *)(unaff_x19 + 0x108) = in_stack_00000078;
                              *(undefined8 *)(unaff_x19 + 0x100) = in_stack_00000070;
                              thunk_FUN_02bb0e9c(unaff_x19 + 0x100,0);
                              in_stack_00000060 = *(undefined8 *)puVar2;
                              in_stack_00000068 = 0;
                              thunk_FUN_02bb0e9c(&stack0x00000060);
                              in_stack_00000068 = CONCAT44(in_stack_00000068._4_4_,4);
                              if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff0) != 0) {
                                *(undefined8 *)(unaff_x19 + 0x118) = in_stack_00000068;
                                *(undefined8 *)(unaff_x19 + 0x110) = in_stack_00000060;
                                thunk_FUN_02bb0e9c(unaff_x19 + 0x110,0);
                                in_stack_00000050 = *(undefined8 *)puVar2;
                                in_stack_00000058 = 0;
                                thunk_FUN_02bb0e9c(&stack0x00000050);
                                in_stack_00000058 = CONCAT44(in_stack_00000058._4_4_,5);
                                if (0x10 < *(uint *)(unaff_x19 + 0x18)) {
                                  *(undefined8 *)(unaff_x19 + 0x128) = in_stack_00000058;
                                  *(undefined8 *)(unaff_x19 + 0x120) = in_stack_00000050;
                                  thunk_FUN_02bb0e9c(unaff_x19 + 0x120,0);
                                  in_stack_00000040 = *(undefined8 *)puVar2;
                                  in_stack_00000048 = 0;
                                  thunk_FUN_02bb0e9c(&stack0x00000040);
                                  puVar4 = 
                                  Method_System_Linq_Enumerable_Select<DynamicMetaObject,_Expression>__
                                  ;
                                  in_stack_00000048 = CONCAT44(in_stack_00000048._4_4_,6);
                                  if (0x11 < *(uint *)(unaff_x19 + 0x18)) {
                                    *(undefined8 *)(unaff_x19 + 0x138) = in_stack_00000048;
                                    *(undefined8 *)(unaff_x19 + 0x130) = in_stack_00000040;
                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x130,0);
                                    in_stack_00000030 = *(undefined8 *)puVar4;
                                    in_stack_00000038 = 0;
                                    thunk_FUN_02bb0e9c(&stack0x00000030);
                                    in_stack_00000038 = CONCAT44(in_stack_00000038._4_4_,3);
                                    if (0x12 < *(uint *)(unaff_x19 + 0x18)) {
                                      *(undefined8 *)(unaff_x19 + 0x148) = in_stack_00000038;
                                      *(undefined8 *)(unaff_x19 + 0x140) = in_stack_00000030;
                                      thunk_FUN_02bb0e9c(unaff_x19 + 0x140,0);
                                      in_stack_00000020 = *(undefined8 *)puVar4;
                                      in_stack_00000028 = 0;
                                      thunk_FUN_02bb0e9c(&stack0x00000020);
                                      in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,4);
                                      if (0x13 < *(uint *)(unaff_x19 + 0x18)) {
                                        *(undefined8 *)(unaff_x19 + 0x158) = in_stack_00000028;
                                        *(undefined8 *)(unaff_x19 + 0x150) = in_stack_00000020;
                                        thunk_FUN_02bb0e9c(unaff_x19 + 0x150,0);
                                        in_stack_00000010 = *(undefined8 *)puVar4;
                                        in_stack_00000018 = 0;
                                        thunk_FUN_02bb0e9c(&stack0x00000010);
                                        in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,5);
                                        if (0x14 < *(uint *)(unaff_x19 + 0x18)) {
                                          *(undefined8 *)(unaff_x19 + 0x168) = in_stack_00000018;
                                          *(undefined8 *)(unaff_x19 + 0x160) = in_stack_00000010;
                                          thunk_FUN_02bb0e9c(unaff_x19 + 0x160,0);
                                          uVar7 = *(undefined8 *)puVar4;
                                          thunk_FUN_02bb0e9c();
                                          puVar3 = 
                                          Method_Unity_Services_Core_Internal_DictionaryExtensions_ValueEquals<string,_object>__
                                          ;
                                          puVar1 = PTR_DAT_06313630;
                                          if (0x15 < *(uint *)(unaff_x19 + 0x18)) {
                                            *(undefined8 *)(unaff_x19 + 0x178) = 6;
                                            *(undefined8 *)(unaff_x19 + 0x170) = uVar7;
                                            thunk_FUN_02bb0e9c(unaff_x19 + 0x170,0);
                                            **(long **)(*(long *)puVar3 + 0xb8) = unaff_x19;
                                            thunk_FUN_02bb0e9c(*(undefined8 *)
                                                                (*(long *)puVar3 + 0xb8));
                                            lVar5 = FUN_02b3c908(*(undefined8 *)puVar1,3);
                                            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                                              FUN_02b3cac4();
                                            }
                                            if (*(int *)(lVar5 + 0x18) != 0) {
                                              *(undefined8 *)(lVar5 + 0x20) = *unaff_x21;
                                              thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x20));
                                              if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
                                                *(undefined8 *)(lVar5 + 0x28) =
                                                     *(undefined8 *)puVar2;
                                                thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x28));
                                                if (2 < *(uint *)(lVar5 + 0x18)) {
                                                  *(undefined8 *)(lVar5 + 0x30) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02bb0e9c();
                                                  plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8
                                                                             ) + 8);
                                                  *plVar6 = lVar5;
                                                  thunk_FUN_02bb0e9c(plVar6,lVar5);
                                                  return;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


