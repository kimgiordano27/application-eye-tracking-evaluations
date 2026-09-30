/*
FUNCTION_NAME: FUN_01da5b3c
ENTRY_POINT: 01da5b3c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01da5b3c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_0377f6e2 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Type>_Add__);
    thunk_FUN_00d48444(Method_Obi_ObiPathDataChannel<ObiWingedPoint,_Vector3>_set_Item__);
    DAT_0377f6e2 = 1;
  }
  if ((((param_2 == 0) || (*(long *)(param_2 + 0x58) == 0)) ||
      (lVar8 = *(long *)(*(long *)(param_2 + 0x58) + 0x50), lVar8 == 0)) ||
     (lVar5 = FUN_01602744(lVar8,0x2f,0,0), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((int)*(long *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  lVar5 = *(long *)(lVar5 + ((*(long *)(lVar5 + 0x18) << 0x20) + -0x100000000 >> 0x1d) + 0x20);
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) != 0)) {
    iVar3 = FUN_016047a8(lVar5,0x3a,0);
    puVar2 = Method_Obi_ObiPathDataChannel<ObiWingedPoint,_Vector3>_set_Item__;
    puVar1 = Method_System_Collections_Generic_List<Type>_Add__;
    if (iVar3 != -1) {
      uVar4 = FUN_016047a8(lVar5,0x3a,0);
      uVar6 = FUN_01601d40(lVar5,0,uVar4,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar1);
      }
      uVar6 = FUN_01f6a2b8(uVar6,0);
      FUN_01da6230(param_1,uVar6);
      return;
    }
    if (*(int *)(*(long *)
                  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01d98168(param_2,*(undefined8 *)puVar2);
    return;
  }
  uVar6 = FUN_01d34b68(lVar8,0);
  uVar7 = thunk_FUN_00d48444(Method_FullSerializer_fsBaseConverter_DeserializeMember<RectOffset>__);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar6,uVar7);
}


