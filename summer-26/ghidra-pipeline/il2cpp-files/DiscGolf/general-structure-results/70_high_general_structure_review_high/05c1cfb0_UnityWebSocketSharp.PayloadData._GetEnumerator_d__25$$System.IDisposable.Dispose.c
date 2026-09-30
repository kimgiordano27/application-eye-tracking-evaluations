/*
FUNCTION_NAME: UnityWebSocketSharp.PayloadData.<GetEnumerator>d__25$$System.IDisposable.Dispose
ENTRY_POINT: 05c1cfb0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityWebSocketSharp_PayloadData_<GetEnumerator>d__25__System_IDisposable_Dispose
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if ((DAT_06dc2721 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a151c8);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TryGetValue__
                );
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_get_Item__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_set_Item__
                );
    FUN_02d965b8(System_Net_Http_Headers_Parser_DateTime_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0db58);
    DAT_06dc2721 = 1;
  }
  FUN_05ce813c(param_1,0);
  *(undefined8 *)(param_1 + 0x20) = param_2;
  LeanTween__value((undefined8 *)(param_1 + 0x20),param_2);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  LeanTween__value((undefined8 *)(param_1 + 0x38),param_3);
  plVar4 = (long *)(param_1 + 0x78);
  *plVar4 = param_4;
  LeanTween__value(plVar4,param_4);
  if (param_4 == 0) goto LAB_05c1d260;
  lVar6 = *(long *)(param_4 + 0x88);
  if (lVar6 == 0) {
    lVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__
                              );
    FUN_05ce7754(lVar6,0);
  }
  plVar5 = (long *)(param_1 + 0x28);
  *plVar5 = lVar6;
  LeanTween__value(plVar5,lVar6);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_4 + 0xa0);
  LeanTween__value((undefined8 *)(param_1 + 0x40));
  lVar6 = *(long *)(param_4 + 0x98);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_4 + 0x90);
  if (lVar6 == 0) {
    lVar6 = thunk_FUN_05cd490c();
  }
  *(long *)(param_1 + 0x50) = lVar6;
  LeanTween__value();
  puVar7 = (undefined8 *)(param_1 + 0x58);
  *puVar7 = 0xffffffffffffffff;
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar2 = FUN_05ccbaa0(*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_06a0db58,0);
  uVar3 = FUN_0536c9cc(uVar2,0);
  if (((uVar3 & 1) != 0) || (uVar3 = FUN_054e7658(uVar2,puVar7,0), (uVar3 & 1) == 0)) {
    *puVar7 = 0xffffffffffffffff;
  }
  if (param_5 != 0) {
    *(long *)(param_1 + 0x68) = param_5;
    LeanTween__value((long *)(param_1 + 0x68),param_5);
    UnityWebSocketSharp_WebSocket__get_ReadyState(param_1);
  }
  puVar1 = Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_get_Item__
  ;
  if (*plVar5 == 0) goto LAB_05c1d260;
  uVar2 = FUN_05ccbaa0(*plVar5,*(undefined8 *)System_Net_Http_Headers_Parser_DateTime_TypeInfo,0);
  uVar3 = thunk_FUN_0536b75c(uVar2,*(undefined8 *)puVar1,0);
  if ((uVar3 & 1) == 0) {
LAB_05c1d1a0:
    uVar3 = thunk_FUN_0536b75c(uVar2,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_set_Item__
                               ,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(long *)(param_4 + 0x40) == 0) goto LAB_05c1d260;
    if ((*(byte *)(*(long *)(param_4 + 0x40) + 0x134) >> 1 & 1) == 0) {
      return;
    }
    lVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a151c8);
    FUN_05cd1940(lVar6,param_4,0,0);
  }
  else {
    if (*(long *)(param_4 + 0x40) == 0) goto LAB_05c1d260;
    if ((*(byte *)(*(long *)(param_4 + 0x40) + 0x134) & 1) == 0) goto LAB_05c1d1a0;
    lVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TryGetValue__
                              );
    FUN_05cd0dc8(lVar6,param_4,0,0);
  }
  *plVar4 = lVar6;
  LeanTween__value(plVar4,lVar6);
  if (*plVar5 != 0) {
    FUN_05ced418(*plVar5,0xd,0);
    return;
  }
LAB_05c1d260:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


