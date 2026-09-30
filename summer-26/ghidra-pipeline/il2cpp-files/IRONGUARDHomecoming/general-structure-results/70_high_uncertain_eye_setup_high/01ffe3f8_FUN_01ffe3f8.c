/*
FUNCTION_NAME: FUN_01ffe3f8
ENTRY_POINT: 01ffe3f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_01ffe3f8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  
  puVar2 = Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_get_Value__;
  if ((DAT_0482ef36 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_get_Value__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_ObjectPool<CommandBuffer>_Get__);
    DAT_0482ef36 = 1;
  }
                    /* try { // try from 01ffe448 to 020fe477 has its CatchHandler @ 01ffe448
                       catch() { ... } // from try @ 01ffe448 with catch @ 01ffe448
                       catch() { ... } // from try @ 01ffe484 with catch @ 01ffe448 */
  lVar3 = FUN_022c6500(param_1,*(undefined8 *)puVar2);
  puVar2 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if (lVar3 == 0) {
LAB_01ffe530:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar1 = *(uint *)(lVar3 + 0x18);
  iVar6 = *(int *)(param_1 + 0x134);
  if (iVar6 < (int)(uVar1 - 1)) {
    do {
                    /* try { // try from 01ffe478 to 020fe483 has its CatchHandler @ 01ffe49c */
      uVar7 = (uint)((long)iVar6 + 1);
                    /* try { // try from 01ffe484 to 020fe4af has its CatchHandler @ 01ffe448 */
      *(uint *)(param_1 + 0x134) = uVar7;
      if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar8 = *(long *)(lVar3 + ((long)iVar6 + 1) * 8 + 0x20);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_04073094(lVar8,0,0);
      if ((uVar4 & 1) != 0) {
        if (lVar8 == 0) goto LAB_01ffe530;
        lVar5 = *(long *)(lVar8 + 0x68);
        if ((((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) &&
            (uVar4 = FUN_020f6c98(lVar5,0), (uVar4 & 1) == 0)) &&
           (uVar4 = FUN_020f6b90(*(undefined8 *)(lVar8 + 0x68),0), (uVar4 & 1) == 0)) {
          FUN_02424ea4(*(undefined8 *)(lVar8 + 0x68),
                       *(undefined8 *)Method_UnityEngine_Rendering_ObjectPool<CommandBuffer>_Get__);
          return;
        }
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      iVar6 = *(int *)(param_1 + 0x134);
    } while (iVar6 < (int)(uVar1 - 1));
  }
  return;
}


