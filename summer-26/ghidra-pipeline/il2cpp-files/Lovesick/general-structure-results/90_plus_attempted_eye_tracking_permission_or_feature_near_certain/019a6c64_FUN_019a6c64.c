/*
FUNCTION_NAME: FUN_019a6c64
ENTRY_POINT: 019a6c64
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_019a6c64(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  
                    /* try { // try from 019a6c64 to 01aa6c8f has its CatchHandler @ 019a6bfc */
  if ((DAT_0377a551 & 1) == 0) {
                    /* catch() { ... } // from try @ 019a6c60 with catch @ 019a6c8c */
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshls_u32__);
                    /* try { // try from 019a6c90 to 01aa6c97 has its CatchHandler @ 019a6cac */
                    /* try { // try from 019a6c98 to 01aa6ca3 has its CatchHandler @ 019a6bfc */
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_Encoding>_TryGetValue__);
                    /* try { // try from 019a6ca4 to 01aa6cab has its CatchHandler @ 019a6cac */
    thunk_FUN_00d48444(StringLiteral_8132);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 019a6c90 with catch @ 019a6cac
                       catch(type#2 @ 00000000) { ... } // from try @ 019a6ca4 with catch @ 019a6cac
                        */
    DAT_0377a551 = 1;
  }
                    /* try { // try from 019a6cb0 to 01aa6db3 has its CatchHandler @ 019a6cb0
                       catch() { ... } // from try @ 019a6cb0 with catch @ 019a6cb0
                       catch() { ... } // from try @ 019a70d4 with catch @ 019a6cb0
                       catch() { ... } // from try @ 019a7120 with catch @ 019a6cb0 */
  if (*(char *)(param_1 + 0x80) != '\0') {
    plVar8 = *(long **)(param_1 + 0x20);
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshls_u32__);
    if ((lVar2 == 0) ||
       (FUN_011c181c(lVar2,param_1,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_Encoding>_TryGetValue__,0),
       plVar8 == (long *)0x0)) goto LAB_019a6de0;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)StringLiteral_8132) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_019a6d48;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724(plVar8,*(long *)StringLiteral_8132,1);
LAB_019a6d48:
    (*(code *)*puVar3)(plVar8,lVar2,puVar3[1]);
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  uVar9 = *param_2;
  uVar1 = *(undefined4 *)(param_2 + 3);
  uVar6 = param_2[2];
  *(undefined8 *)(param_1 + 0x6c) = param_2[1];
  *(undefined8 *)(param_1 + 100) = uVar9;
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  *(undefined8 *)(param_1 + 0x74) = uVar6;
  if ((*(long *)(param_1 + 0x40) == 0) ||
     (uVar5 = OVREyeGaze__Start(*(long *)(param_1 + 0x40),0), (uVar5 & 1) != 0)) {
    return;
  }
  FUN_019a6de4(param_1,0);
  FUN_019a6de4(param_1,2);
  lVar2 = *(long *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x019a6ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),param_1,*(undefined8 *)(lVar2 + 0x28))
    ;
    return;
  }
LAB_019a6de0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


