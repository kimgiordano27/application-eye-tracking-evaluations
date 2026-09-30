/*
FUNCTION_NAME: FUN_06c8f180
ENTRY_POINT: 06c8f180
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_06c8f180(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar3 = 
  Method_Unity_VisualScripting_ConnectionCollectionBase<ValueConnection,_ValueOutput,_ValueInput,_GraphElementCollection<ValueConnection>>_WithDestination__
  ;
  puVar2 = PTR_DAT_0727f888;
  puVar1 = PTR_DAT_07279510;
  if ((DAT_076e90f5 & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Net_Configuration_DefaultProxySection__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_072b94f0);
    thunk_FUN_032e1da0(Method_System_IO_Compression_DeflateStream_EndRead__);
    thunk_FUN_032e1da0(PTR_DAT_0727b948);
    thunk_FUN_032e1da0(Method_System_IO_Compression_DeflateStream_EndWrite__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_InputControl<float>_ReadValueFromStateWithCaching__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_VisualScripting_ConnectionCollectionBase<ValueConnection,_ValueOutput,_ValueInput,_GraphElementCollection<ValueConnection>>_WithDestination__
                      );
    thunk_FUN_032e1da0(Method_System_IO_Compression_DeflateStream_Flush__);
    thunk_FUN_032e1da0(
                      Method_Nova_InternalNamespace_0_InternalNamespace_4_InternalType_162<InternalType_305,_InternalType_162<InternalType_368,_InternalType_792>>_get_InternalProperty_216__
                      );
    thunk_FUN_032e1da0(Method_System_IO_Compression_DeflateStream_Read__);
    thunk_FUN_032e1da0(PTR_DAT_0727f888);
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    thunk_FUN_032e1da0(Method_System_IO_Compression_DeflateStream_SetLength__);
    thunk_FUN_032e1da0(Method_UnityEngine_InputSystem_InputControl<Vector2>__ctor__);
    thunk_FUN_032e1da0(Method_System_IO_Compression_DeflateStream_Write__);
    thunk_FUN_032e1da0(UnityEngine_UIElements_UxmlEnumAttributeDescription<TextSize>_TypeInfo);
    thunk_FUN_032e1da0(Method_System_IO_Compression_DeflateStream_WriteInternal__);
    DAT_076e90f5 = 1;
  }
  plVar5 = (long *)FUN_032d5d3c(*(undefined8 *)puVar2,2);
  uVar13 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar1);
  }
  lVar6 = FUN_059324dc(uVar13,0);
  if (plVar5 == (long *)0x0) goto LAB_06c8fa94;
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_06c8fa9c:
    uVar13 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar13,0);
  }
  puVar1 = Method_System_IO_Compression_DeflateStream_Read__;
  if ((int)plVar5[3] != 0) {
    plVar5[4] = lVar6;
    thunk_FUN_0333a630(plVar5 + 4,lVar6);
    lVar6 = FUN_059324dc(*(undefined8 *)puVar1,0);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_06c8fa9c;
    puVar4 = Method_System_IO_Compression_DeflateStream_WriteInternal__;
    puVar1 = Method_System_Net_Configuration_DefaultProxySection__ctor__;
    if (1 < *(uint *)(plVar5 + 3)) {
      plVar5[5] = lVar6;
      thunk_FUN_0333a630(plVar5 + 5,lVar6);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar6 = FUN_06c8b028(0x43480000,0x43480000,*(undefined8 *)puVar4,plVar5);
      plVar5 = (long *)FUN_032d5d3c(*(undefined8 *)puVar2,2);
      lVar7 = FUN_059324dc(*(undefined8 *)puVar3,0);
      if (plVar5 == (long *)0x0) goto LAB_06c8fa94;
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
      goto LAB_06c8fa9c;
      puVar1 = Method_System_IO_Compression_DeflateStream_Flush__;
      if ((int)plVar5[3] != 0) {
        plVar5[4] = lVar7;
        thunk_FUN_0333a630(plVar5 + 4,lVar7);
        lVar7 = FUN_059324dc(*(undefined8 *)puVar1,0);
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
        goto LAB_06c8fa9c;
        puVar3 = 
        Method_Nova_InternalNamespace_0_InternalNamespace_4_InternalType_162<InternalType_305,_InternalType_162<InternalType_368,_InternalType_792>>_get_InternalProperty_216__
        ;
        puVar1 = Method_UnityEngine_InputSystem_InputControl<Vector2>__ctor__;
        if (1 < *(uint *)(plVar5 + 3)) {
          plVar5[5] = lVar7;
          thunk_FUN_0333a630(plVar5 + 5,lVar7);
          lVar7 = FUN_06c8b188(*(undefined8 *)puVar1,lVar6,plVar5);
          plVar5 = (long *)FUN_032d5d3c(*(undefined8 *)puVar2,1);
          lVar8 = FUN_059324dc(*(undefined8 *)puVar3,0);
          if (plVar5 != (long *)0x0) {
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_032a55a4(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0))
            goto LAB_06c8fa9c;
            puVar1 = UnityEngine_UIElements_UxmlEnumAttributeDescription<TextSize>_TypeInfo;
            if ((int)plVar5[3] == 0) goto LAB_06c8fa98;
            plVar5[4] = lVar8;
            thunk_FUN_0333a630(plVar5 + 4,lVar8);
            lVar8 = FUN_06c8b188(*(undefined8 *)puVar1,lVar7,plVar5);
            local_70 = param_1[6];
            uStack_88 = param_1[3];
            local_90 = param_1[2];
            uStack_78 = param_1[5];
            uStack_80 = param_1[4];
            uStack_98 = param_1[1];
            local_a0 = *param_1;
            lVar9 = FUN_06c8cb34(&local_a0);
            puVar1 = PTR_DAT_0727b948;
            if (lVar9 != 0) {
              FUN_06bed0ac(lVar9,*(undefined8 *)
                                  Method_System_IO_Compression_DeflateStream_SetLength__,0);
              FUN_06c8b2b0(lVar9,lVar6);
              lVar10 = FUN_039efd20(lVar9,*(undefined8 *)puVar1);
              if (DAT_076ce198 == '\0') {
                thunk_FUN_032e1da0(PTR_DAT_07279af0);
                DAT_076ce198 = '\x01';
              }
              puVar1 = PTR_DAT_07279af0;
              if (lVar10 != 0) {
                FUN_06bf3870(**(undefined4 **)(*(long *)PTR_DAT_07279af0 + 0xb8),
                             (*(undefined4 **)(*(long *)PTR_DAT_07279af0 + 0xb8))[1],lVar10,0);
                if (DAT_076d4139 == '\0') {
                  thunk_FUN_032e1da0(PTR_DAT_07279af0);
                  DAT_076d4139 = '\x01';
                }
                FUN_06bf398c(*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28),
                             *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2c),lVar10,0);
                if (DAT_076ce198 == '\0') {
                  thunk_FUN_032e1da0(PTR_DAT_07279af0);
                  DAT_076ce198 = '\x01';
                }
                FUN_06bf3ce0(**(undefined4 **)(*(long *)puVar1 + 0xb8),
                             (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],lVar10,0);
                FUN_06bf3b34(lVar10,0);
                FUN_06bf3bc4(0,lVar10,0);
                local_b0 = param_1[6];
                uStack_c8 = param_1[3];
                local_d0 = param_1[2];
                uStack_b8 = param_1[5];
                uStack_c0 = param_1[4];
                uStack_d8 = param_1[1];
                local_e0 = *param_1;
                lVar10 = FUN_06c8cb34(&local_e0);
                puVar2 = 
                Method_UnityEngine_InputSystem_InputControl<float>_ReadValueFromStateWithCaching__;
                if (lVar10 != 0) {
                  FUN_06bed0ac(lVar10,*(undefined8 *)
                                       Method_System_IO_Compression_DeflateStream_Write__,0);
                  FUN_06c8b2b0(lVar10,lVar6);
                  lVar11 = FUN_039efd20(lVar10,*(undefined8 *)puVar2);
                  if (lVar11 != 0) {
                    FUN_06dff5fc(lVar11,2,1,0);
                    lVar11 = FUN_039efd20(lVar10,*(undefined8 *)PTR_DAT_0727b948);
                    if (DAT_076d4139 == '\0') {
                      thunk_FUN_032e1da0(PTR_DAT_07279af0);
                      DAT_076d4139 = '\x01';
                    }
                    if (lVar11 != 0) {
                      FUN_06bf3870(*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28),
                                   *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2c),lVar11,
                                   0);
                      if (DAT_076cd825 == '\0') {
                        thunk_FUN_032e1da0(PTR_DAT_07279af0);
                        DAT_076cd825 = '\x01';
                      }
                      FUN_06bf398c(*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),
                                   *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),lVar11,0
                                  );
                      if (DAT_076cd825 == '\0') {
                        thunk_FUN_032e1da0(PTR_DAT_07279af0);
                        DAT_076cd825 = '\x01';
                      }
                      FUN_06bf3ce0(*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),
                                   *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),lVar11,0
                                  );
                      uVar13 = FUN_06bf3b34(lVar11,0);
                      FUN_06bf3bc4(uVar13,0,lVar11,0);
                      if (lVar7 != 0) {
                        lVar11 = FUN_039efd20(lVar7,*(undefined8 *)PTR_DAT_0727b948);
                        if (DAT_076ce198 == '\0') {
                          thunk_FUN_032e1da0(PTR_DAT_07279af0);
                          DAT_076ce198 = '\x01';
                        }
                        if (lVar11 != 0) {
                          FUN_06bf3870(**(undefined4 **)(*(long *)puVar1 + 0xb8),
                                       (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],lVar11,0);
                          if (DAT_076cd825 == '\0') {
                            thunk_FUN_032e1da0(PTR_DAT_07279af0);
                            DAT_076cd825 = '\x01';
                          }
                          FUN_06bf398c(*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),
                                       *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),
                                       lVar11,0);
                          if (DAT_076ce198 == '\0') {
                            thunk_FUN_032e1da0(PTR_DAT_07279af0);
                            DAT_076ce198 = '\x01';
                          }
                          FUN_06bf3bc4(**(undefined4 **)(*(long *)puVar1 + 0xb8),
                                       (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],lVar11,0);
                          if (DAT_076d3763 == '\0') {
                            thunk_FUN_032e1da0(PTR_DAT_07279af0);
                            DAT_076d3763 = '\x01';
                          }
                          FUN_06bf3ce0(*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10),
                                       *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x14),
                                       lVar11,0);
                          if (lVar8 != 0) {
                            lVar8 = FUN_039efd20(lVar8,*(undefined8 *)PTR_DAT_0727b948);
                            if (DAT_076d3763 == '\0') {
                              thunk_FUN_032e1da0(PTR_DAT_07279af0);
                              DAT_076d3763 = '\x01';
                            }
                            if (lVar8 != 0) {
                              FUN_06bf3870(*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10)
                                           ,*(undefined4 *)
                                             (*(long *)(*(long *)puVar1 + 0xb8) + 0x14),lVar8,0);
                              if (DAT_076cd825 == '\0') {
                                thunk_FUN_032e1da0(PTR_DAT_07279af0);
                                DAT_076cd825 = '\x01';
                              }
                              FUN_06bf398c(*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),
                                           *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),
                                           lVar8,0);
                              FUN_06bf3bc4(0,0x43960000,lVar8,0);
                              if (DAT_076d3763 == '\0') {
                                thunk_FUN_032e1da0(PTR_DAT_07279af0);
                                DAT_076d3763 = '\x01';
                              }
                              FUN_06bf3ce0(*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10)
                                           ,*(undefined4 *)
                                             (*(long *)(*(long *)puVar1 + 0xb8) + 0x14),lVar8,0);
                              if ((lVar6 != 0) &&
                                 (lVar12 = FUN_039efd20(lVar6,*(undefined8 *)
                                                                                                                              
                                                  Method_System_IO_Compression_DeflateStream_EndWrite__
                                                  ), puVar1 = PTR_DAT_072b94f0, lVar12 != 0)) {
                                *(long *)(lVar12 + 0x20) = lVar8;
                                thunk_FUN_0333a630((long *)(lVar12 + 0x20),lVar8);
                                FUN_06dffad0(lVar12,lVar11,0);
                                puVar2 = 
                                Method_UnityEngine_InputSystem_InputControl<float>_ReadValueFromStateWithCaching__
                                ;
                                uVar13 = FUN_039efd20(lVar9,*(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_InputSystem_InputControl<float>_ReadValueFromStateWithCaching__
                                                  );
                                FUN_06dffbbc(lVar12,uVar13,0);
                                uVar13 = FUN_039efd20(lVar10,*(undefined8 *)puVar2);
                                FUN_06dffd5c(lVar12,uVar13,0);
                                FUN_06dffefc(lVar12,2,0);
                                FUN_06dfff0c(lVar12,2,0);
                                FUN_06dfff1c(0xc0400000,lVar12,0);
                                FUN_06dfffb4(0xc0400000,lVar12,0);
                                plVar5 = (long *)FUN_039efd20(lVar6,*(undefined8 *)puVar1);
                                puVar2 = Method_System_IO_Compression_DeflateStream_EndRead__;
                                if (plVar5 != (long *)0x0) {
                                  FUN_06c8b898(plVar5,param_1[1]);
                                  FUN_06c8bb5c(plVar5,1);
                                  lVar8 = *(long *)(*(long *)
                                                  Method_System_Net_Configuration_DefaultProxySection__ctor__
                                                  + 0xb8);
                                  (**(code **)(*plVar5 + 0x2a8))
                                            (*(undefined4 *)(lVar8 + 0x30),
                                             *(undefined4 *)(lVar8 + 0x34),
                                             *(undefined4 *)(lVar8 + 0x38),
                                             *(undefined4 *)(lVar8 + 0x3c),plVar5,
                                             *(undefined8 *)(*plVar5 + 0x2b0));
                                  lVar8 = FUN_039efd20(lVar7,*(undefined8 *)puVar2);
                                  if (lVar8 != 0) {
                                    FUN_06df8b00(lVar8,0,0);
                                    lVar7 = FUN_039efd20(lVar7,*(undefined8 *)puVar1);
                                    if (lVar7 != 0) {
                                      FUN_06c8b898(lVar7,param_1[6]);
                                      FUN_06c8bb5c(lVar7,1);
                                      return lVar6;
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
LAB_06c8fa94:
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
      }
    }
  }
LAB_06c8fa98:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


