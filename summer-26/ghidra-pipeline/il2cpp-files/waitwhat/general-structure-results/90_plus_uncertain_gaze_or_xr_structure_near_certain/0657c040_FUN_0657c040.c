/*
FUNCTION_NAME: FUN_0657c040
ENTRY_POINT: 0657c040
PROGRAM: waitwhat-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 FUN_0657c040(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined1 auStack_260 [464];
  long local_90;
  
  if ((DAT_07557459 & 1) == 0) {
    FUN_03188a78(OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo);
    FUN_03188a78(OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_UIR_NativePagedList<NudgeJobData>_TypeInfo);
    FUN_03188a78(PTR_DAT_07125d30);
    DAT_07557459 = 1;
  }
  lVar6 = FUN_0657b394(param_1,param_2);
  puVar5 = OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo;
  puVar4 = OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo;
                    /* try { // try from 0657c0ac to 0667c0b7 has its CatchHandler @ 0657c204 */
  if (*(long *)(lVar6 + 0x1d0) != 0) {
                    /* try { // try from 0657c0c4 to 0667c0c7 has its CatchHandler @ 0657c200 */
    if ((*(int *)(*(long *)(lVar6 + 0x1d0) + 0x194) == 2) &&
       ((*(char *)(lVar6 + 8) != '\0' || (*(int *)(lVar6 + 0xc) - 1U < 2)))) {
                    /* try { // try from 0657c0d8 to 0667c0ef has its CatchHandler @ 0657c1fc */
      uVar7 = 0;
    }
    else {
                    /* try { // try from 0657c0f0 to 0667c0ff has its CatchHandler @ 0657c1f8 */
      piVar1 = (int *)(param_1 + 0x150);
      FUN_03f4dad4(auStack_260,piVar1,param_2,
                   *(undefined8 *)UnityEngine_UIElements_UIR_NativePagedList<NudgeJobData>_TypeInfo)
      ;
                    /* try { // try from 0657c110 to 0667c11f has its CatchHandler @ 0657c1f4 */
      if (*(int *)(param_1 + 0x134) == param_2) {
        *(undefined4 *)(param_1 + 0x138) = 0;
        *(undefined8 *)(param_1 + 0x130) = 0xffffffffffffffff;
      }
      else {
                    /* try { // try from 0657c130 to 0667c137 has its CatchHandler @ 0657c1ec */
        if (*(int *)(param_1 + 0x134) == *(int *)(param_1 + 0x140) + -1) {
          *(int *)(param_1 + 0x134) = param_2;
        }
      }
      FUN_03f4a53c(param_1 + 0x140,param_2,*(undefined8 *)puVar4);
      FUN_03f4eb80(piVar1,param_2,*(undefined8 *)puVar5);
      if ((local_90 == 0) || (lVar6 = *(long *)(local_90 + 0xf0), lVar6 == 0)) goto LAB_0657c22c;
      iVar2 = *(int *)(lVar6 + 0x18);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (0 < iVar2) {
        FUN_0595236c(*(undefined8 *)(lVar6 + 0x10),0,iVar2,0);
      }
      *(undefined8 *)(local_90 + 0x188) = 0;
      *(undefined8 *)(local_90 + 0x58) = 0;
      *(undefined8 *)(local_90 + 0x50) = 0;
      *(undefined8 *)(local_90 + 0x68) = 0;
      *(undefined8 *)(local_90 + 0x60) = 0;
      *(undefined8 *)(local_90 + 0x78) = 0;
      *(undefined8 *)(local_90 + 0x70) = 0;
      *(undefined8 *)(local_90 + 0x88) = 0;
      *(undefined8 *)(local_90 + 0x80) = 0;
      *(undefined8 *)(local_90 + 0x98) = 0;
      *(undefined8 *)(local_90 + 0x90) = 0;
      *(undefined8 *)(local_90 + 0xa8) = 0;
      *(undefined8 *)(local_90 + 0xa0) = 0;
      *(undefined8 *)(local_90 + 0xb8) = 0;
      *(undefined8 *)(local_90 + 0xb0) = 0;
      *(undefined8 *)(local_90 + 200) = 0;
      *(undefined8 *)(local_90 + 0xc0) = 0;
      *(undefined8 *)(local_90 + 0xd8) = 0;
      *(undefined8 *)(local_90 + 0xd0) = 0;
      *(undefined8 *)(local_90 + 0xe8) = 0;
      *(undefined8 *)(local_90 + 0xe0) = 0;
      FUN_06cb8950(local_90,0,0);
      FUN_06cb8950(local_90,0,0);
      *(undefined8 *)(local_90 + 0x38) = 0;
      *(undefined8 *)(local_90 + 0x40) = 0;
      iVar2 = *piVar1;
      *(undefined8 *)(local_90 + 0x20) = 0;
      if (iVar2 == 0) {
        plVar8 = (long *)(param_1 + 0x328);
      }
      else {
        lVar6 = *(long *)(param_1 + 0x378);
        if (lVar6 == 0) goto LAB_0657c22c;
        uVar3 = iVar2 - 1;
        if (*(uint *)(lVar6 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        plVar8 = (long *)(lVar6 + (long)(int)uVar3 * 0x220 + 0x1f0);
      }
      uVar7 = 1;
      *plVar8 = local_90;
    }
    return uVar7;
  }
LAB_0657c22c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


