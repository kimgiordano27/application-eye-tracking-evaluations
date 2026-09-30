/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$SerializeMember<Vector2>
ENTRY_POINT: 041ba4dc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


undefined8 Unity_VisualScripting_FullSerializer_fsBaseConverter__SerializeMember<Vector2>(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x19;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_07d86548;
  uVar6 = **(undefined8 **)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = FUN_062519f8(uVar6,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar4 = FUN_0625cee0(lVar3,0);
  if ((uVar4 & 1) == 0) {
    return 1;
  }
                    /* try { // try from 041ba518 to 042ba51f has its CatchHandler @ 041baa48 */
  uVar6 = **(undefined8 **)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  plVar5 = (long *)FUN_062519f8(uVar6,0);
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 041ba540 to 042ba543 has its CatchHandler @ 041baa38 */
    bVar1 = *(byte *)(*(long *)PTR_DAT_07d95eb0 + 0x130);
    if (*(byte *)(*plVar5 + 0x130) < bVar1) {
      plVar5 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)PTR_DAT_07d95eb0) {
      plVar5 = (long *)0x0;
    }
  }
  uVar6 = thunk_FUN_0374f45c(plVar5,0);
  return uVar6;
}


