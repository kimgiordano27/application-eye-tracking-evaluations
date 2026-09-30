/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$.cctor
ENTRY_POINT: 07521a94
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x07521c58) */

void System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>___cctor(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x23;
  
  do {
    lVar2 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_07521ae4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
                    /* try { // try from 07521ad0 to 07621af7 has its CatchHandler @ 07521b0c */
    puVar1 = (undefined8 *)FUN_044822ac();
LAB_07521ae4:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) break;
                    /* try { // try from 07521af8 to 07621b03 has its CatchHandler @ 075215e0 */
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
                    /* try { // try from 07521b04 to 07621b0b has its CatchHandler @ 07521b0c */
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07521ad0 with catch @ 07521b0c
                       catch(type#2 @ 00000000) { ... } // from try @ 07521b04 with catch @ 07521b0c
                        */
      lVar2 = FUN_04481fb8(lVar2);
    }
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
                    /* try { // try from 07521b24 to 07621d17 has its CatchHandler @ 07521b24
                       catch() { ... } // from try @ 07521b24 with catch @ 07521b24
                       catch() { ... } // from try @ 07521e00 with catch @ 07521b24
                       catch() { ... } // from try @ 07521e94 with catch @ 07521b24
                       catch() { ... } // from try @ 07521f30 with catch @ 07521b24 */
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__get_Current;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_044822ac();
System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__get_Current:
    (*(code *)*puVar1)();
    FUN_07523178();
  } while( true );
  if (unaff_x21 != (long *)0x0) {
    lVar2 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_07521c10;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_044822ac();
LAB_07521c10:
    (*(code *)*puVar1)();
  }
  return;
}


