/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$GetEnumerator
ENTRY_POINT: 047df3a8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator
          (ushort *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  uint unaff_w22;
  long unaff_x23;
  long *unaff_x24;
  undefined4 unaff_w25;
  long unaff_x26;
  long unaff_x27;
  
  do {
    if ((*param_1 & 1) == 0) {
      param_3 = FUN_0367c9fc(param_3);
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047df354 with catch @ 047df3b8
                       try { // try from 047df3b8 to 048df3cf has its CatchHandler @ 047df308 */
    }
    lVar2 = *unaff_x24;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
                    /* try { // try from 047df3d0 to 048df3e7 has its CatchHandler @ 047df45c */
        if (*(long *)(piVar4 + -2) == param_3) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_047df404;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
                    /* try { // try from 047df3e8 to 048df44b has its CatchHandler @ 047df308 */
    puVar1 = (undefined8 *)FUN_0367cd30(unaff_x24,param_3,0);
LAB_047df404:
    uVar3 = (*(code *)*puVar1)(unaff_x24,unaff_w21,unaff_w25,puVar1[1]);
    if ((uVar3 & 1) != 0) {
      if (unaff_x23 == 0) {
        lVar2 = *(long *)(unaff_x19 + 0x10);
        if (lVar2 == 0) {
LAB_047df498:
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(uint *)(lVar2 + 0x18) <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        puVar1 = (undefined8 *)(lVar2 + unaff_x26 * 8 + 0x20);
        *puVar1 = *(undefined8 *)(unaff_x27 + 0x20);
      }
      else {
        puVar1 = (undefined8 *)(unaff_x23 + 0x20);
        *puVar1 = *(undefined8 *)(unaff_x27 + 0x20);
      }
      thunk_FUN_036b7ad0(puVar1);
      *(ulong *)(unaff_x19 + 0x18) =
           CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) +
                    (int)((ulong)DAT_0164f610 >> 0x20),
                    (int)*(undefined8 *)(unaff_x19 + 0x18) + (int)DAT_0164f610);
      return 1;
    }
    lVar2 = *(long *)(unaff_x27 + 0x20);
    if (lVar2 == 0) {
      return 0;
    }
    unaff_x24 = *(long **)(unaff_x19 + 0x20);
    if (unaff_x24 == (long *)0x0) goto LAB_047df498;
    unaff_w25 = *(undefined4 *)(lVar2 + 0x10);
    param_3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    param_1 = (ushort *)(param_3 + 0x135);
    unaff_x23 = unaff_x27;
    unaff_x27 = lVar2;
  } while( true );
}


