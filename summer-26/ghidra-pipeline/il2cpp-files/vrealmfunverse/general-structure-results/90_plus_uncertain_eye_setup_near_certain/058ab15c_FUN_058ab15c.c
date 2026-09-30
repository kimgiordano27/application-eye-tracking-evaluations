/*
FUNCTION_NAME: FUN_058ab15c
ENTRY_POINT: 058ab15c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_058ab15c(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  if (DAT_066d31cd == '\0') {
    FUN_02b3c81c(&DAT_0646b958);
    FUN_02b3c81c(&DAT_0646b980);
    DAT_066d31cd = '\x01';
  }
  if (param_1 != 0) {
    lVar3 = FUN_03ab1904(param_1 + 0x60,param_2,
                         *(undefined8 *)Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__);
    puVar2 = Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__;
    iVar1 = *(int *)(lVar3 + 0x2a0);
    lVar4 = FUN_03ab2128(param_1 + 0x18,*(undefined4 *)(lVar3 + 0x298),
                         *(undefined8 *)
                          Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
    if (iVar1 < 2) {
      uVar8 = 0xffffffff;
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x29c);
      iVar1 = *(int *)(lVar3 + 0x298);
      *(undefined4 *)(lVar4 + 0x1c) = 0;
      iVar1 = iVar6 - iVar1;
      if (1 < iVar1 + 1) {
        iVar6 = 0;
        iVar7 = 1;
        do {
          iVar5 = iVar6 + *(int *)(lVar3 + 0x298) + 1;
          lVar4 = FUN_03ab2128(param_1 + 0x18,iVar5,*(undefined8 *)puVar2);
          if (*(char *)(lVar4 + 0x7a) == '\0') {
            uVar8 = 1;
            iVar5 = *(int *)(lVar3 + 0x298) + iVar7;
          }
          else {
            uVar8 = 0xffffffff;
          }
          lVar4 = FUN_03ab2128(param_1 + 0x18,iVar5,*(undefined8 *)puVar2);
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 1;
          *(undefined4 *)(lVar4 + 0x1c) = uVar8;
        } while (iVar1 != iVar6);
        iVar6 = *(int *)(lVar3 + 0x29c);
      }
      lVar4 = FUN_03ab2128(param_1 + 0x18,iVar6,*(undefined8 *)puVar2);
      uVar8 = 2;
    }
    *(undefined4 *)(lVar4 + 0x1c) = uVar8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


