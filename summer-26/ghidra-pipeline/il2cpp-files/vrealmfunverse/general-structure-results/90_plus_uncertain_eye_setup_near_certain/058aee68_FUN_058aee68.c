/*
FUNCTION_NAME: FUN_058aee68
ENTRY_POINT: 058aee68
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_058aee68(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
                    /* try { // try from 058aee80 to 059aee83 has its CatchHandler @ 058af38c */
                    /* try { // try from 058aee84 to 059aee97 has its CatchHandler @ 058af390 */
  if ((DAT_066d31ee & 1) == 0) {
                    /* try { // try from 058aee98 to 059af3a7 has its CatchHandler @ 058aeca8 */
    FUN_02b3c81c(Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__);
    FUN_02b3c81c(Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
    DAT_066d31ee = 1;
  }
  puVar2 = Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__;
  if (param_1 != 0) {
    lVar3 = FUN_03ab1904(param_1 + 0x60,param_2,
                         *(undefined8 *)Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__);
    iVar1 = *(int *)(lVar3 + 0x2a0);
    lVar4 = FUN_03ab2128(param_1 + 0x18,*(undefined4 *)(lVar3 + 0x298),*(undefined8 *)puVar2);
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


