/*
FUNCTION_NAME: FUN_04fd366c
ENTRY_POINT: 04fd366c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_8;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_04fd366c(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  
  puVar3 = System_Collections_Generic_IEnumerable<InputBindingCompositeContext_PartBinding>_TypeInfo
  ;
  puVar2 = System_Func<Collider,_Transform>_TypeInfo;
  if ((DAT_066cbe70 & 1) == 0) {
    FUN_02b3c81c(System_Func<Collider,_Transform>_TypeInfo);
    FUN_02b3c81c(
                System_Collections_Generic_IEnumerable<JointRotationActiveState_JointRotationFeatureConfig>_TypeInfo
                );
    FUN_02b3c81c(
                System_Collections_Generic_IEnumerable<InputBindingCompositeContext_PartBinding>_TypeInfo
                );
    FUN_02b3c81c(
                System_Collections_Generic_IEnumerable<JointVelocityActiveState_JointVelocityFeatureConfig>_TypeInfo
                );
    FUN_02b3c81c(System_Collections_Generic_IEnumerable<OVRPermissionsRequester_Permission>_TypeInfo
                );
    FUN_02b3c81c(System_Collections_Generic_IEnumerable<OVRSemanticLabels_Classification>_TypeInfo);
    DAT_066cbe70 = 1;
  }
  puVar5 = System_Collections_Generic_IEnumerable<OVRSemanticLabels_Classification>_TypeInfo;
  puVar4 = System_Collections_Generic_IEnumerable<OVRPermissionsRequester_Permission>_TypeInfo;
  FUN_0433d440(param_1,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar7 = FUN_04faa310(param_2,0);
  uVar6 = FUN_04dd5138(uVar7,0);
  lVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
  FUN_037a5d48(lVar8,(ulong)uVar6,*(undefined8 *)puVar4);
  plVar13 = (long *)(param_1 + 0x10);
  *plVar13 = lVar8;
  thunk_FUN_02bb0e9c(plVar13,lVar8);
  puVar4 = 
  System_Collections_Generic_IEnumerable<JointVelocityActiveState_JointVelocityFeatureConfig>_TypeInfo
  ;
  puVar3 = 
  System_Collections_Generic_IEnumerable<JointRotationActiveState_JointRotationFeatureConfig>_TypeInfo
  ;
  if (0 < (int)uVar6) {
    uVar14 = 0;
    do {
      lVar8 = *plVar13;
      uVar7 = FUN_04dd513c(uVar14,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)puVar2);
      }
      uVar7 = FUN_04faa0e4(param_2,uVar7,0);
      uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
      FUN_04fd3344(uVar9,uVar7);
      if (lVar8 == 0) {
LAB_04fd38bc:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar11 = *(long *)(lVar8 + 0x10);
      lVar12 = *(long *)puVar4;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_04fd38bc;
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        puVar10 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *puVar10 = uVar9;
        thunk_FUN_02bb0e9c(puVar10,uVar9);
      }
      else {
        FUN_037a6538(lVar8,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar14 = uVar14 + 1;
    } while (uVar6 != uVar14);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar7 = FUN_04faa38c(param_2,0);
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  uVar7 = FUN_04faa23c(param_2,0);
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  thunk_FUN_02bb0e9c();
  uVar7 = FUN_04faa168(param_2,0);
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x18),uVar7);
  return;
}


