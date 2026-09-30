/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$get_Current
ENTRY_POINT: 046549fc
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array_InternalEnumerator<OVRPlugin_Quatf>__get_Current
               (int *param_1,ulong param_2,long param_3)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  lVar5 = *(long *)(param_3 + 0x20);
  iVar2 = *param_1;
                    /* try { // try from 04654a1c to 04754b2f has its CatchHandler @ 04654a1c
                       catch() { ... } // from try @ 04654a1c with catch @ 04654a1c
                       catch() { ... } // from try @ 04654c04 with catch @ 04654a1c
                       catch() { ... } // from try @ 04654cc4 with catch @ 04654a1c
                       catch() { ... } // from try @ 04654d64 with catch @ 04654a1c */
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0338f618();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0xb8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0338f618();
  }
  lVar5 = FUN_03398188(lVar5,iVar2);
  if (0 < *param_1) {
    uVar9 = 0;
    do {
      lVar6 = *(long *)(param_3 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0338f618();
      }
      uVar7 = FUN_04653658(param_1,uVar9 & 0xffffffff,
                           *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0xa8));
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      puVar8 = (undefined8 *)(lVar5 + uVar9 * 8 + 0x20);
      *puVar8 = uVar7;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar8 >> 0x12 & 0x7fff);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)*param_1);
  }
  if ((param_2 & 1) != 0) {
    if ((*(byte *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
      FUN_0338f618();
    }
    FUN_04654bd4(param_1);
  }
  return lVar5;
}


