/*
FUNCTION_NAME: FUN_0697f710
ENTRY_POINT: 0697f710
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 126
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
FUN_0697f710(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 *param_5,
            undefined8 *param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = 
  Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>__ctor__
  ;
  if ((DAT_076e1cbc & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_get_Count__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_Add__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_GetEnumerator__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<DebugUI_Table_Row>_get_Count__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>__ctor__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072820c0);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>_Add__
                      );
    DAT_076e1cbc = 1;
  }
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar6 = FUN_0697fb74(param_3);
  if ((uVar6 & 1) == 0) goto LAB_0697f964;
  if (param_3 != 0) {
    lVar7 = FUN_06969174(param_3,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)puVar3);
    }
    if (lVar7 != 0) {
      lVar7 = FUN_050f8a90(lVar7,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20),
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_get_Count__
                          );
      if (lVar7 != 0) {
        uVar8 = FUN_069683b0(lVar7,0);
        puVar3 = 
        Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>_Add__;
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>_Add__
                    + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)
                              Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>_Add__
                            );
        }
        FUN_0697e688(local_d0,param_4);
        puVar4 = 
        Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>__ctor__;
        uStack_78 = local_d0._8_8_;
        local_80 = local_d0._0_8_;
        uVar11 = local_80;
        uStack_68 = uStack_b8;
        uStack_70 = local_c0;
        local_80._0_1_ = (char)local_d0._0_8_;
        bVar1 = (char)local_80 != '\0';
        local_80 = uVar11;
        if (bVar1) {
          FUN_04e5c8e4(local_d0,&local_80,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>__ctor__
                      );
          uVar6 = FUN_057aa92c(local_d0._8_8_,uVar8,0);
          puVar2 = PTR_DAT_072820c0;
          if ((uVar6 & 1) != 0) {
            lVar7 = *(long *)PTR_DAT_072820c0;
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar7 = *(long *)puVar2;
            }
            uVar12 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
            uVar11 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
            local_90._0_8_ = uVar11;
            local_90._8_8_ = uVar12;
            FUN_04e5c8e4(&local_e8,&local_80,*(undefined8 *)puVar4);
            local_d0._8_8_ = uStack_e0;
            local_d0._0_8_ = local_e8;
            local_c0 = local_d8;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            uStack_f8 = local_d0._8_8_;
            local_100 = local_d0._0_8_;
            local_f0 = local_c0;
            auVar13 = FUN_0697fc2c(uVar8,&local_100,&local_98);
            local_90 = FUN_069675bc(uVar11,uVar12,auVar13._0_8_,auVar13._8_8_,0);
            uVar6 = FUN_069670a4(local_90,0);
            puVar3 = 
            Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_GetEnumerator__
            ;
            uVar11 = local_90._8_8_;
            uVar8 = local_90._0_8_;
            if ((uVar6 & 1) != 0) {
LAB_0697fb54:
              uVar8 = FUN_0697cb3c(param_1,param_4);
              *param_6 = uVar8;
              thunk_FUN_0333a630(param_6,uVar8);
              return local_90._0_8_;
            }
            if (local_98 != 0) {
              FUN_042bab18(local_d0,local_98,0,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_GetEnumerator__
                          );
              auVar13 = FUN_0697ff48(param_1,param_2,param_3,local_c0,param_5,param_6);
              if (*(int *)(*(long *)PTR_DAT_072820c0 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              auVar13 = FUN_069675bc(uVar8,uVar11,auVar13._0_8_,auVar13._8_8_,0);
              local_90 = auVar13;
              uVar6 = FUN_069670a4(local_90,0);
              if ((uVar6 & 1) != 0) {
                return local_90._0_8_;
              }
              if (local_98 != 0) {
                iVar10 = 1;
                do {
                  puVar4 = 
                  Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>__ctor__
                  ;
                  if (*(int *)(local_98 + 0x18) <= iVar10) {
                    if (*(int *)(*(long *)
                                  Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>__ctor__
                                + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                    }
                    uVar6 = FUN_06980394(param_3);
                    puVar2 = 
                    Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_get_Count__;
                    puVar3 = PTR_DAT_072820c0;
                    if ((uVar6 & 1) != 0) {
                      lVar7 = FUN_06969174(param_3,0);
                      lVar9 = *(long *)puVar4;
                      if (*(int *)(lVar9 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0(lVar9);
                      }
                      if (lVar7 == 0) break;
                      lVar7 = FUN_050f8a90(lVar7,*(undefined8 *)
                                                  (*(long *)(*(long *)puVar4 + 0xb8) + 0x10),
                                           *(undefined8 *)puVar2);
                      if (lVar7 == 0) break;
                      uVar8 = FUN_069683b0(lVar7,0);
                      uVar5 = FUN_059212b0(uVar8,0);
                      if (*(long *)(param_1 + 0x28) == 0) break;
                      FUN_0698044c(*(long *)(param_1 + 0x28),uVar5,*param_5);
                    }
                    local_d0 = local_90;
                    uVar8 = thunk_FUN_032a52d0(*(undefined8 *)puVar3,local_d0);
                    param_4 = thunk_FUN_032f70fc(uVar8,0);
                    goto LAB_0697fb54;
                  }
                  FUN_042bab18(local_d0,local_98,iVar10,*(undefined8 *)puVar3);
                  uStack_a8 = local_d0._8_8_;
                  local_b0 = local_d0._0_8_;
                  local_a0 = local_c0;
                  uVar8 = FUN_069802e0(&local_b0,*param_5);
                  *param_5 = uVar8;
                  thunk_FUN_0333a630(param_5,uVar8);
                  iVar10 = iVar10 + 1;
                } while (local_98 != 0);
              }
            }
            goto LAB_0697fb70;
          }
        }
LAB_0697f964:
        uVar8 = FUN_0697ff48(param_1,param_2,param_3,param_4,param_5,param_6);
        return uVar8;
      }
    }
  }
LAB_0697fb70:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


