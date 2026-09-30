/*
FUNCTION_NAME: FUN_071c6958
ENTRY_POINT: 071c6958
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2
*/


long FUN_071c6958(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  long local_38;
  
  if ((DAT_082682b2 & 1) == 0) {
    FUN_0373b518(System_Func<AndroidAxis,_string>_TypeInfo);
    FUN_0373b518(System_Func<ValueTuple<EventModifiers,_KeyCode>,_EventBase>_TypeInfo);
    FUN_0373b518(System_Func<string[],_HttpRequest>_TypeInfo);
                    /* try { // try from 071c69a4 to 072c69a7 has its CatchHandler @ 071c6a4c */
    FUN_0373b518(
                System_Func<ValueTuple<Vector2,_NavigationDeviceType,_EventModifiers>,_EventBase>_TypeInfo
                );
                    /* try { // try from 071c69a8 to 072c69af has its CatchHandler @ 071c61d8 */
                    /* try { // try from 071c69b0 to 072c69b3 has its CatchHandler @ 071c6a30 */
    FUN_0373b518(System_Func<string[],_HttpResponse>_TypeInfo);
                    /* try { // try from 071c69b4 to 072c69b7 has its CatchHandler @ 071c6a2c */
    FUN_0373b518(System_Func<Vector3[],_int>_TypeInfo);
    FUN_0373b518(System_Func<ValueTuple<string,_Type>,_string>_TypeInfo);
    DAT_082682b2 = 1;
  }
  local_38 = 0;
  plVar5 = (long *)(param_1 + 0x40);
  if (*plVar5 != 0) {
    return *plVar5;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar6 = *(int *)(*(long *)(param_1 + 0x20) + 0x18);
    lVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Func<ValueTuple<string,_Type>,_string>_TypeInfo
                              );
    FUN_049ce730(lVar2,iVar6 << 1,*(undefined8 *)System_Func<string[],_HttpRequest>_TypeInfo);
    local_38 = lVar2;
    FUN_071c6400(param_1);
    if (lVar2 != 0) {
      FUN_049cf100(lVar2,*(undefined8 *)(param_1 + 0x38),
                   *(undefined8 *)System_Func<AndroidAxis,_string>_TypeInfo);
      puVar1 = System_Func<Vector3[],_int>_TypeInfo;
      lVar3 = *(long *)(param_1 + 0x38);
      if (lVar3 != 0) {
        iVar6 = 0;
        do {
          if (*(int *)(lVar3 + 0x18) <= iVar6) {
            lVar2 = FUN_049d0970(lVar2,*(undefined8 *)
                                        System_Func<ValueTuple<EventModifiers,_KeyCode>,_EventBase>_TypeInfo
                                );
            *plVar5 = lVar2;
            thunk_FUN_037aeb94(plVar5,lVar2);
            return *plVar5;
          }
          uVar4 = FUN_049cec24(lVar3,iVar6,*(undefined8 *)puVar1);
          FUN_071c6ac0(uVar4,&local_38);
          lVar3 = *(long *)(param_1 + 0x38);
          iVar6 = iVar6 + 1;
        } while (lVar3 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


