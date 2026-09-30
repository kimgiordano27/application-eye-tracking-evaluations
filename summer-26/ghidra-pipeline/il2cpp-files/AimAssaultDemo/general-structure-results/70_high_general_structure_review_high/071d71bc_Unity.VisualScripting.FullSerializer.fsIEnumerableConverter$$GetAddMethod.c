/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsIEnumerableConverter$$GetAddMethod
ENTRY_POINT: 071d71bc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_VisualScripting_FullSerializer_fsIEnumerableConverter__GetAddMethod(long param_1)

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
  long *unaff_x19;
  long unaff_x20;
  long *plVar15;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 0x5d8));
  FUN_0373b518(PTR_DAT_07d86398);
  *(undefined1 *)(unaff_x20 + 0x366) = 1;
  puVar3 = System_Func<IUnitInputPort,_bool>_TypeInfo;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if ((char)unaff_x19[2] == '\0') {
    return;
  }
                    /* try { // try from 071d71ec to 072d7207 has its CatchHandler @ 071d74a0 */
  if (*unaff_x19 != 0) {
    uVar1 = *(undefined4 *)(*unaff_x19 + 0x18);
                    /* try { // try from 071d7208 to 072d7213 has its CatchHandler @ 071d7484 */
    lVar10 = thunk_FUN_037788cc(*(undefined8 *)System_Func<IUnifiedVariableUnit,_string>_TypeInfo);
    FUN_049ce730(lVar10,uVar1,*(undefined8 *)puVar3);
    plVar15 = unaff_x19 + 1;
                    /* try { // try from 071d721c to 072d7223 has its CatchHandler @ 071d747c */
    *plVar15 = lVar10;
                    /* try { // try from 071d7228 to 072d7233 has its CatchHandler @ 071d7478 */
    thunk_FUN_037aeb94(plVar15,lVar10);
    *(undefined1 *)((long)unaff_x19 + 0x11) = 0;
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
    if (*unaff_x19 != 0) {
                    /* try { // try from 071d7254 to 072d7267 has its CatchHandler @ 071d74ac */
      FUN_049cf910(&stack0x00000008,*unaff_x19,
                   *(undefined8 *)System_Func<string[],_HttpRequest>_TypeInfo);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      while( true ) {
        do {
          uVar11 = FUN_05d64e98(&stack0x00000020,*(undefined8 *)puVar7);
          uVar9 = in_stack_00000030;
          if ((uVar11 & 1) == 0) {
            FUN_05d64e94(&stack0x00000020,*(undefined8 *)puVar6);
            *(undefined1 *)(unaff_x19 + 2) = 0;
            return;
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
                    /* try { // try from 071d72b8 to 072d72c3 has its CatchHandler @ 071d74c4 */
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
                    /* try { // try from 071d72fc to 072d7337 has its CatchHandler @ 071d74cc */
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
                    /* try { // try from 071d7348 to 072d734b has its CatchHandler @ 071d745c */
          *(undefined1 *)((long)unaff_x19 + 0x11) = 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 071d7388 to 072d7397 has its CatchHandler @ 071d7464 */
  FUN_0373b7b4();
}


