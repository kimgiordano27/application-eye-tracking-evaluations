/*
FUNCTION_NAME: FUN_0697fc2c
ENTRY_POINT: 0697fc2c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_0697fc2c(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  puVar4 = Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedEventArgs,_bool,_bool>__
  ;
  puVar3 = 
  Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__;
  puVar2 = Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>_Add__
  ;
  if ((DAT_076e1d0c & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedType,_DataRow,_bool>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedEventArgs,_bool,_bool>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072794b0);
    thunk_FUN_032e1da0(PTR_DAT_072820b8);
    thunk_FUN_032e1da0(Method_System_Data_Listeners<DataViewListener>__ctor__);
    thunk_FUN_032e1da0(Method_System_Data_Listeners<DataViewListener>_Add__);
    thunk_FUN_032e1da0(PTR_DAT_072820c0);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>_Add__
                      );
    DAT_076e1d0c = 1;
  }
  lVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
  FUN_042ba5b4(lVar5,*(undefined8 *)puVar4);
  *param_3 = lVar5;
  thunk_FUN_0333a630(param_3,lVar5);
  local_50 = param_2[2];
  uStack_58 = param_2[1];
  local_60 = *param_2;
  lVar5 = *param_3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uStack_98 = uStack_58;
  local_a0 = local_60;
  local_90 = local_50;
  uVar6 = FUN_069867e4(lVar5,param_1,&local_a0);
  if ((uVar6 & 1) == 0) {
    lVar5 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_072794b0,5);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x20) =
             *(undefined8 *)Method_System_Data_Listeners<DataViewListener>__ctor__;
        thunk_FUN_0333a630((undefined8 *)(lVar5 + 0x20));
        if (1 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x28) = param_1;
          thunk_FUN_0333a630((undefined8 *)(lVar5 + 0x28),param_1);
          if (2 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x30) =
                 *(undefined8 *)Method_System_Data_Listeners<DataViewListener>_Add__;
            thunk_FUN_0333a630((undefined8 *)(lVar5 + 0x30));
            if (3 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x38) = param_2[1];
              thunk_FUN_0333a630((undefined8 *)(lVar5 + 0x38));
              if (4 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)PTR_DAT_072820b8;
                thunk_FUN_0333a630();
                uVar7 = FUN_057ab314(lVar5,0);
                if (*(int *)(*(long *)PTR_DAT_072820c0 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0(*(long *)PTR_DAT_072820c0);
                }
                uVar7 = FUN_069682a4(uVar7,0);
                return uVar7;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
  }
  else {
    lVar5 = *param_3;
    uVar7 = param_2[2];
    uVar11 = param_2[1];
    uVar10 = *param_2;
    if (lVar5 != 0) {
      lVar8 = *(long *)(lVar5 + 0x10);
      lVar9 = *(long *)
               Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedType,_DataRow,_bool>__
      ;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      local_80 = uVar10;
      uStack_78 = uVar11;
      local_70 = uVar7;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          lVar8 = lVar8 + (long)(int)uVar1 * 0x18;
          *(undefined8 *)(lVar8 + 0x30) = uVar7;
          *(undefined8 *)(lVar8 + 0x28) = uVar11;
          *(undefined8 *)(lVar8 + 0x20) = uVar10;
          thunk_FUN_0333a630(lVar8 + 0x20,0);
        }
        else {
          local_60 = uVar10;
          uStack_58 = uVar11;
          local_50 = uVar7;
          FUN_042baed4(lVar5,&local_60,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        puVar2 = PTR_DAT_072820c0;
        lVar5 = *(long *)PTR_DAT_072820c0;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar5 = *(long *)puVar2;
        }
        return *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


