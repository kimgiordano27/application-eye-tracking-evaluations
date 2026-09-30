/*
FUNCTION_NAME: FUN_071d40a4
ENTRY_POINT: 071d40a4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_071d40a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_07d86398;
                    /* try { // try from 071d40b4 to 072d412f has its CatchHandler @ 071d4670 */
  if ((DAT_0826832c & 1) == 0) {
    FUN_0373b518(System_Func<int,_object>_TypeInfo);
    FUN_0373b518(System_Func<int,_PxrSemanticLabel>_TypeInfo);
    FUN_0373b518(System_Func<int,_OpenXRSettings_ColorSubmissionModeGroup>_TypeInfo);
    FUN_0373b518(PTR_DAT_07d866d8);
    FUN_0373b518(System_Func<MemberInfo,_string>_TypeInfo);
    FUN_0373b518(System_Func<Mesh,_Color[]>_TypeInfo);
    FUN_0373b518(System_Func<Mesh,_Vector2[]>_TypeInfo);
    FUN_0373b518(System_Func<Mesh,_Vector3[]>_TypeInfo);
    FUN_0373b518(PTR_DAT_07d86398);
    DAT_0826832c = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar3 = FUN_075ac5e0(param_2,0,0);
  puVar2 = System_Func<int,_PxrSemanticLabel>_TypeInfo;
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 071d41ac to 072d41cb has its CatchHandler @ 071d4638 */
    return;
  }
  lVar4 = *(long *)System_Func<int,_PxrSemanticLabel>_TypeInfo;
                    /* try { // try from 071d417c to 072d41ab has its CatchHandler @ 071d4618 */
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
  if (lVar4 != 0) {
    uVar3 = FUN_045b9578(lVar4,param_2,*(undefined8 *)System_Func<Mesh,_Vector2[]>_TypeInfo);
    if ((uVar3 & 1) != 0) {
      return;
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar4 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
    if (lVar4 != 0) {
                    /* try { // try from 071d41ec to 072d41ef has its CatchHandler @ 071d45f4 */
                    /* try { // try from 071d41f0 to 072d41fb has its CatchHandler @ 071d4630 */
      FUN_045ba050(lVar4,param_2,*(undefined8 *)System_Func<Mesh,_Color[]>_TypeInfo);
      lVar4 = FUN_04429f88(param_1 + 0x18,param_2,
                           *(undefined8 *)
                            System_Func<int,_OpenXRSettings_ColorSubmissionModeGroup>_TypeInfo);
      lVar6 = *(long *)puVar1;
                    /* try { // try from 071d4210 to 072d421b has its CatchHandler @ 071d466c */
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar6);
      }
      uVar3 = FUN_075aa744(lVar4,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(char *)(param_1 + 0x30) != '\0') {
          if (lVar4 == 0) goto LAB_071d4390;
          uVar5 = FUN_03fe2e5c(lVar4,1,*(undefined8 *)System_Func<MemberInfo,_string>_TypeInfo);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03798b70(*(long *)puVar2);
          }
          Unity_VisualScripting_FullSerializer_fsData__get_IsList(param_3,uVar5);
        }
        if (*(char *)(param_1 + 0x3b) != '\0') {
          lVar6 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d866d8,1);
          if (lVar6 == 0) goto LAB_071d4390;
          if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          *(long *)(lVar6 + 0x20) = lVar4;
          thunk_FUN_037aeb94((long *)(lVar6 + 0x20),lVar4);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          FUN_071d47ec(param_3,lVar6);
        }
        if (*(char *)(param_1 + 0x39) != '\0') {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar5 = FUN_071d3410(lVar4);
          FUN_071d4b64(param_3,param_2,uVar5);
        }
        if (*(char *)(param_1 + 0x38) != '\0') {
          uVar5 = FUN_03f1485c(param_1,lVar4,*(undefined8 *)System_Func<int,_object>_TypeInfo);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03798b70(*(long *)puVar2);
          }
          FUN_071d4f7c(param_3,uVar5);
        }
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar4 = *(long *)puVar2;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
      if (lVar4 != 0) {
        FUN_045b9744(lVar4,param_2,*(undefined8 *)System_Func<Mesh,_Vector3[]>_TypeInfo);
        return;
      }
    }
  }
LAB_071d4390:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


