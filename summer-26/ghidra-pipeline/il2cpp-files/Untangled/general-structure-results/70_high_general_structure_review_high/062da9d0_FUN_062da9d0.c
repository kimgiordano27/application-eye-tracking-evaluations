/*
FUNCTION_NAME: FUN_062da9d0
ENTRY_POINT: 062da9d0
PROGRAM: Untangled-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_062da9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,long *param_8,int param_9,
                 ulong param_10,undefined4 param_11,char *param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_071cce68 & 1) == 0) {
    FUN_02f07e70(UnityEngine_XR_ARFoundation_ARRaycastHit_var);
    FUN_02f07e70(
                System_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>_var
                );
    FUN_02f07e70(System_AppDomainSetup_var);
    FUN_02f07e70(PlayFab_GroupsModels_ApplyToGroupRequest_var);
    DAT_071cce68 = 1;
  }
  puVar2 = UnityEngine_XR_ARFoundation_ARRaycastHit_var;
  puVar1 = 
  System_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>_var
  ;
  if (param_8 != (long *)0x0) {
    uVar4 = (**(code **)(*param_8 + 0x1c8))(param_8,*(undefined8 *)(*param_8 + 0x1d0));
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)puVar1);
    }
    uVar5 = FUN_062d87bc(uVar4,0);
    lVar7 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)puVar2);
    }
    if (lVar7 != 0) {
      FUN_066a0a9c(lVar7,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4),param_8,0);
      lVar7 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
      if (lVar7 != 0) {
        FUN_066a0774((float)param_9,lVar7,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10),
                     0);
        lVar7 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
        if (lVar7 != 0) {
          thunk_FUN_0669fc8c(0x3f800000,0x3f800000,0,0,lVar7,
                             *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),0);
          lVar7 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
          if (lVar7 != 0) {
            thunk_FUN_0669fc8c(param_3,param_4,param_5,param_6,lVar7,
                               *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),0);
            lVar7 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
            if (lVar7 != 0) {
              thunk_FUN_0669fc8c(param_1,param_2,0,0,lVar7,
                                 *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x14),0);
              lVar7 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
              if ((lVar7 != 0) &&
                 (FUN_066a06a0(lVar7,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18),
                               param_11,0), param_7 != 0)) {
                FUN_066e440c(param_7,uVar5,*(long *)(*(long *)puVar1 + 0xb8) + 0x38,*param_12,0);
                if (*param_12 != '\0') {
                  lVar7 = *(long *)puVar1;
                  if (*(int *)(lVar7 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                    lVar7 = *(long *)puVar1;
                  }
                  puVar3 = PlayFab_GroupsModels_ApplyToGroupRequest_var;
                  lVar6 = *(long *)puVar2;
                  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
                  if (*(int *)(lVar6 + 0xe0) == 0) {
                    thunk_FUN_02f12b58(lVar6);
                    lVar6 = *(long *)puVar2;
                  }
                  uVar4 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x1c);
                  FUN_04329524(param_12,*(undefined8 *)puVar3);
                  if (lVar7 == 0) goto LAB_062dacdc;
                  thunk_FUN_0669fc8c(lVar7,uVar4,0);
                }
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                uVar4 = 0x15;
                if ((param_10 & 1) != 0) {
                  uVar4 = 0x16;
                }
                FUN_062d89ec(param_7,uVar5,uVar4);
                FUN_066e440c(param_7,uVar5,*(long *)(*(long *)puVar1 + 0xb8) + 0x38,0,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_062dacdc:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


