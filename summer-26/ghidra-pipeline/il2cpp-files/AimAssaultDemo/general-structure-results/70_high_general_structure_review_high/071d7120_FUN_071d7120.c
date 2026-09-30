/*
FUNCTION_NAME: FUN_071d7120
ENTRY_POINT: 071d7120
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_071d7120(long *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
                    /* try { // try from 071d7138 to 072d7147 has its CatchHandler @ 071d74a8 */
  if ((DAT_08268366 & 1) == 0) {
                    /* try { // try from 071d714c to 072d7157 has its CatchHandler @ 071d74a4 */
    FUN_0373b518(
                System_Func<ValueTuple<NavigationMoveEvent_Direction,_EventModifiers,_DefaultEventSystem_LegacyInputProcessor_IInput>,_EventBase>_TypeInfo
                );
                    /* try { // try from 071d715c to 072d7163 has its CatchHandler @ 071d748c */
    FUN_0373b518(
                System_Func<ValueTuple<NavigationMoveEvent_Direction,_NavigationDeviceType,_EventModifiers>,_EventBase>_TypeInfo
                );
    FUN_0373b518(System_Func<object[],_object>_TypeInfo);
                    /* try { // try from 071d7178 to 072d717f has its CatchHandler @ 071d7458 */
    FUN_0373b518(System_Func<KeyValuePair<string,_JSONNode>,_bool>_TypeInfo);
                    /* try { // try from 071d7184 to 072d718b has its CatchHandler @ 071d7454 */
    FUN_0373b518(System_Func<KeyValuePair<string,_JsonSchemaModel>,_bool>_TypeInfo);
    FUN_0373b518(System_Func<OpenXRFeature,_int>_TypeInfo);
    FUN_0373b518(System_Func<string[],_HttpRequest>_TypeInfo);
                    /* try { // try from 071d71a0 to 072d71a7 has its CatchHandler @ 071d7450 */
    FUN_0373b518(System_Func<IUnitInputPort,_bool>_TypeInfo);
                    /* try { // try from 071d71b4 to 072d71c3 has its CatchHandler @ 071d7460 */
    FUN_0373b518(System_Func<string[],_HttpResponse>_TypeInfo);
    FUN_0373b518(System_Func<IUnifiedVariableUnit,_string>_TypeInfo);
    FUN_0373b518(PTR_DAT_07d86398);
    DAT_08268366 = 1;
  }
  puVar3 = System_Func<IUnitInputPort,_bool>_TypeInfo;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if ((char)param_1[2] == '\0') {
    return;
  }
  if (*param_1 != 0) {
    uVar1 = *(undefined4 *)(*param_1 + 0x18);
    lVar10 = thunk_FUN_037788cc(*(undefined8 *)System_Func<IUnifiedVariableUnit,_string>_TypeInfo);
    FUN_049ce730(lVar10,uVar1,*(undefined8 *)puVar3);
    plVar15 = param_1 + 1;
    *plVar15 = lVar10;
    thunk_FUN_037aeb94(plVar15,lVar10);
    *(undefined1 *)((long)param_1 + 0x11) = 0;
    puVar8 = System_Func<OpenXRFeature,_int>_TypeInfo;
    puVar7 = 
    System_Func<ValueTuple<NavigationMoveEvent_Direction,_NavigationDeviceType,_EventModifiers>,_EventBase>_TypeInfo
    ;
    puVar6 = 
    System_Func<ValueTuple<NavigationMoveEvent_Direction,_EventModifiers,_DefaultEventSystem_LegacyInputProcessor_IInput>,_EventBase>_TypeInfo
    ;
    puVar5 = System_Func<KeyValuePair<string,_JsonSchemaModel>,_bool>_TypeInfo;
    puVar4 = System_Func<KeyValuePair<string,_JSONNode>,_bool>_TypeInfo;
    puVar3 = PTR_DAT_07d86398;
    if (*param_1 != 0) {
      FUN_049cf910(&local_98,*param_1,*(undefined8 *)System_Func<string[],_HttpRequest>_TypeInfo);
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      while( true ) {
        do {
          uVar11 = FUN_05d64e98(&local_80,*(undefined8 *)puVar7);
          uVar9 = local_70;
          if ((uVar11 & 1) == 0) {
            FUN_05d64e94(&local_80,*(undefined8 *)puVar6);
            *(undefined1 *)(param_1 + 2) = 0;
            return;
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar11 = FUN_075aa744(uVar9,0,0);
        } while ((uVar11 & 1) == 0);
        lVar10 = *plVar15;
        if (lVar10 == 0) break;
        uVar12 = thunk_FUN_037787d0(uVar9,*(undefined8 *)puVar4);
        lVar13 = *(long *)(lVar10 + 0x10);
        lVar14 = *(long *)puVar8;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar2 = *(uint *)(lVar10 + 0x18);
        if (uVar2 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar12;
          thunk_FUN_037aeb94();
        }
        else {
          FUN_049ceef4(lVar10,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        lVar10 = thunk_FUN_037787d0(uVar9,*(undefined8 *)puVar5);
        if (lVar10 != 0) {
          *(undefined1 *)((long)param_1 + 0x11) = 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


