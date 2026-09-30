/*
FUNCTION_NAME: Oculus.Interaction.PoseDetection.TransformFeatureStateCollection$$UpdateFeatureStates
ENTRY_POINT: 018d91b4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_9;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x018d93b8) */
/* WARNING: Removing unreachable block (ram,0x018d947c) */

long Oculus_Interaction_PoseDetection_TransformFeatureStateCollection__UpdateFeatureStates
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long in_x9;
  ulong uVar12;
  long in_x10;
  int *piVar13;
  long *unaff_x19;
  long lVar14;
  
  piVar13 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar13 + -2) == param_3) {
      puVar6 = (undefined8 *)(param_1 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_018d9218;
    }
    in_x9 = in_x9 + -1;
    piVar13 = piVar13 + 4;
  } while (in_x9 != 0);
  puVar6 = (undefined8 *)FUN_00d59724();
LAB_018d9218:
  puVar5 = StringLiteral_10310;
  puVar2 = System_Xml_Schema_ConstraintStruct___TypeInfo;
  plVar7 = (long *)(*(code *)*puVar6)();
  puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar3 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_StartTransition<float>__;
  puVar1 = PTR_DAT_033f6fb8;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar11 = *plVar7;
                    /* try { // try from 018d9258 to 019d925b has its CatchHandler @ 018d95b0 */
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
                    /* try { // try from 018d926c to 019d9273 has its CatchHandler @ 018d95ac */
        if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
                    /* try { // try from 018d929c to 019d92af has its CatchHandler @ 018d95c0 */
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_018d92a0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
                    /* try { // try from 018d9288 to 019d928f has its CatchHandler @ 018d95b8 */
    puVar6 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar4,0);
LAB_018d92a0:
    uVar12 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar12 & 1) == 0) {
                    /* try { // try from 018d9348 to 019d9357 has its CatchHandler @ 018d9378 */
      if (plVar7 == (long *)0x0) goto LAB_018d93ac;
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar12 == 0) goto LAB_018d9384;
                    /* try { // try from 018d9368 to 019d936b has its CatchHandler @ 018d9380 */
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar7;
                    /* try { // try from 018d92b4 to 019d92b7 has its CatchHandler @ 018d95bc */
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
                    /* try { // try from 018d92cc to 019d92cf has its CatchHandler @ 018d9388 */
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_018d92fc;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
                    /* try { // try from 018d92e4 to 019d92f3 has its CatchHandler @ 018d9384 */
    puVar6 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar3,0);
LAB_018d92fc:
                    /* try { // try from 018d9300 to 019d931b has its CatchHandler @ 018d9380 */
    uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    lVar14 = unaff_x19[4];
    lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
                    /* try { // try from 018d9324 to 019d9347 has its CatchHandler @ 018d937c */
    FUN_017b46ec(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar8;
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_00bf15cc(lVar14,lVar11,*(undefined8 *)puVar1);
  } while( true );
  while( true ) {
                    /* catch() { ... } // from try @ 018d9348 with catch @ 018d9378 */
    uVar12 = uVar12 - 1;
                    /* catch() { ... } // from try @ 018d9324 with catch @ 018d937c
                       catch() { ... } // from try @ 018d9370 with catch @ 018d937c */
    piVar13 = piVar13 + 4;
                    /* catch() { ... } // from try @ 018d9300 with catch @ 018d9380
                       catch() { ... } // from try @ 018d9368 with catch @ 018d9380 */
    if (uVar12 == 0) break;
                    /* try { // try from 018d9370 to 019d9373 has its CatchHandler @ 018d937c */
                    /* try { // try from 018d9374 to 019d93a3 has its CatchHandler @ 018d9154 */
    if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_018d93a0;
    }
  }
LAB_018d9384:
                    /* catch() { ... } // from try @ 018d92e4 with catch @ 018d9384 */
                    /* catch() { ... } // from try @ 018d92cc with catch @ 018d9388 */
  puVar6 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar5,0);
LAB_018d93a0:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_018d93ac:
  uVar8 = (**(code **)(*unaff_x19 + 0x298))();
  uVar12 = FUN_018d9540();
  puVar1 = StringLiteral_5186;
  if ((uVar12 & 1) != 0) {
    lVar14 = unaff_x19[4];
    uVar9 = FUN_01e3d1bc(*(undefined8 *)StringLiteral_10543,0);
    lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar11 != 0) {
      FUN_01e351f8(lVar11,uVar9,uVar8,0);
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar10 != 0) {
        FUN_017b46ec(lVar10,0);
        *(long *)(lVar10 + 0x10) = lVar11;
        if (lVar14 != 0) {
          FUN_01323a14(lVar14,0,lVar10,
                       *(undefined8 *)
                        System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
          goto LAB_018d90f4;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
LAB_018d90f4:
  return unaff_x19[4];
}


