/*
FUNCTION_NAME: FUN_071c6400
ENTRY_POINT: 071c6400
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_071c6400(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  
  if ((DAT_082682b0 & 1) == 0) {
    FUN_0373b518(
                System_Func<ValueTuple<NavigationMoveEvent_Direction,_EventModifiers,_DefaultEventSystem_LegacyInputProcessor_IInput>,_EventBase>_TypeInfo
                );
    FUN_0373b518(
                System_Func<ValueTuple<NavigationMoveEvent_Direction,_NavigationDeviceType,_EventModifiers>,_EventBase>_TypeInfo
                );
    FUN_0373b518(System_Func<object[],_object>_TypeInfo);
    FUN_0373b518(System_Func<ValueTuple<EventModifiers,_char>,_EventBase>_TypeInfo);
    FUN_0373b518(System_Func<string[],_HttpRequest>_TypeInfo);
    FUN_0373b518(System_Func<string[],_HttpRequest>_TypeInfo);
    FUN_0373b518(System_Func<ValueTuple<NavigationDeviceType,_EventModifiers>,_EventBase>_TypeInfo);
    FUN_0373b518(System_Func<string[],_HttpResponse>_TypeInfo);
    FUN_0373b518(System_Func<ValueTuple<string,_Type>,_string>_TypeInfo);
    FUN_0373b518(PTR_DAT_07d86398);
    FUN_0373b518(PTR_DAT_07d88ba8);
    DAT_082682b0 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (long *)0x0;
  plVar14 = (long *)(param_1 + 0x38);
  if (*plVar14 == 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      lVar10 = thunk_FUN_037788cc(*(undefined8 *)
                                   System_Func<ValueTuple<string,_Type>,_string>_TypeInfo);
      FUN_049ce6c0(lVar10,*(undefined8 *)
                           System_Func<ValueTuple<NavigationDeviceType,_EventModifiers>,_EventBase>_TypeInfo
                  );
      *plVar14 = lVar10;
      thunk_FUN_037aeb94(plVar14,lVar10);
      return;
    }
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Func<ValueTuple<string,_Type>,_string>_TypeInfo
                              );
                    /* try { // try from 071c64f0 to 072c651f has its CatchHandler @ 071c6a4c */
    FUN_049ce730(uVar8,uVar1,*(undefined8 *)System_Func<string[],_HttpRequest>_TypeInfo);
    *(undefined8 *)(param_1 + 0x38) = uVar8;
    thunk_FUN_037aeb94(plVar14,uVar8);
    puVar4 = PTR_DAT_07d86398;
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar9 = FUN_075aa744(uVar8,0,0);
    if ((uVar9 & 1) != 0) {
      lVar10 = *plVar14;
      if (lVar10 == 0) goto Unity_VisualScripting_Serialization__NotifyDependencyUnavailable;
      uVar8 = *(undefined8 *)(param_1 + 0x58);
      lVar11 = *(long *)(lVar10 + 0x10);
      lVar13 = *(long *)System_Func<ValueTuple<EventModifiers,_char>,_EventBase>_TypeInfo;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar11 == 0) goto Unity_VisualScripting_Serialization__NotifyDependencyUnavailable;
      uVar3 = *(uint *)(lVar10 + 0x18);
      if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                    /* try { // try from 071c6574 to 072c65ab has its CatchHandler @ 071c6a3c */
        *(uint *)(lVar10 + 0x18) = uVar3 + 1;
        puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
        *puVar12 = uVar8;
        thunk_FUN_037aeb94(puVar12);
      }
      else {
        FUN_049ceef4(lVar10,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
    if (*(long *)(param_1 + 0x20) == 0) {
Unity_VisualScripting_Serialization__NotifyDependencyUnavailable:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_049cf910(&local_78,*(long *)(param_1 + 0x20),
                 *(undefined8 *)System_Func<string[],_HttpRequest>_TypeInfo);
    puVar7 = 
    System_Func<ValueTuple<NavigationMoveEvent_Direction,_NavigationDeviceType,_EventModifiers>,_EventBase>_TypeInfo
    ;
    puVar6 = System_Func<ValueTuple<EventModifiers,_char>,_EventBase>_TypeInfo;
    puVar5 = PTR_DAT_07d88ba8;
                    /* try { // try from 071c65f4 to 072c6623 has its CatchHandler @ 071c6a38 */
    uStack_58 = uStack_70;
    local_60 = local_78;
    local_50 = local_68;
    while (uVar9 = FUN_05d64e98(&local_60,*(undefined8 *)puVar7), (uVar9 & 1) != 0) {
      if (local_50 == (long *)0x0) {
LAB_071c664c:
        plVar15 = (long *)0x0;
      }
      else {
        bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
        if (*(byte *)(*local_50 + 0x130) < bVar2) goto LAB_071c664c;
        plVar15 = local_50;
        if (*(long *)(*(long *)(*local_50 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5) {
          plVar15 = (long *)0x0;
        }
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    /* try { // try from 071c6674 to 072c667f has its CatchHandler @ 071c6a04 */
        thunk_FUN_03798b70();
      }
      uVar9 = FUN_075aa744(plVar15,0,0);
      if ((uVar9 & 1) != 0) {
        lVar10 = *plVar14;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
                    /* try { // try from 071c6698 to 072c669b has its CatchHandler @ 071c69e8 */
        lVar11 = *(long *)(lVar10 + 0x10);
        lVar13 = *(long *)puVar6;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                    /* try { // try from 071c66a8 to 072c66cb has its CatchHandler @ 071c69f4 */
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar3 = *(uint *)(lVar10 + 0x18);
        if (uVar3 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar3 + 1;
          puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
          *puVar12 = plVar15;
          thunk_FUN_037aeb94(puVar12,plVar15);
        }
        else {
          FUN_049ceef4(lVar10,plVar15,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    FUN_05d64e94(&local_60,
                 *(undefined8 *)
                  System_Func<ValueTuple<NavigationMoveEvent_Direction,_EventModifiers,_DefaultEventSystem_LegacyInputProcessor_IInput>,_EventBase>_TypeInfo
                );
  }
  return;
}


