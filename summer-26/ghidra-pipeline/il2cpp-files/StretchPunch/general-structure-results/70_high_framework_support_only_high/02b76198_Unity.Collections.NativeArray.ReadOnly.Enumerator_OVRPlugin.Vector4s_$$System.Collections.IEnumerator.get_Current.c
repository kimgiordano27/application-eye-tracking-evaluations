/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4s>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02b76198
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4s>__System_Collections_IEnumerator_get_Current
               (void)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  int unaff_w24;
  uint unaff_w25;
  int unaff_w26;
  long unaff_x27;
  
code_r0x02b76198:
  do {
                    /* try { // try from 02b7619c to 02c761c3 has its CatchHandler @ 02b761d8 */
    puVar2 = (undefined8 *)FUN_01dde8fc();
    while( true ) {
      uVar3 = (*(code *)*puVar2)();
                    /* try { // try from 02b761c4 to 02c761cf has its CatchHandler @ 02b75ca0 */
      if ((uVar3 & 1) != 0) {
        return unaff_w25;
      }
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      do {
                    /* try { // try from 02b761d0 to 02c761d7 has its CatchHandler @ 02b761d8 */
        if (uVar1 <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02b7619c with catch @ 02b761d8
                       catch(type#2 @ 00000000) { ... } // from try @ 02b761d0 with catch @ 02b761d8
                        */
        unaff_w25 = *(uint *)(unaff_x23 + unaff_x27 * 0x20 + 0x24);
        if ((int)uVar1 <= unaff_w26) {
          FUN_033b37f8(0);
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        unaff_w26 = unaff_w26 + 1;
        if (uVar1 <= unaff_w25) {
          return unaff_w25;
        }
        unaff_x27 = (long)(int)unaff_w25;
      } while (*(int *)(unaff_x23 + unaff_x27 * 0x20 + 0x20) != unaff_w24);
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01dde7f8(lVar4);
      }
      lVar5 = *unaff_x21;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 == 0) break;
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      while (*(long *)(piVar6 + -2) != lVar4) {
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
        if (uVar3 == 0) goto code_r0x02b76198;
      }
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
    }
  } while( true );
}


