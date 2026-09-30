/*
FUNCTION_NAME: FUN_0701ddb0
ENTRY_POINT: 0701ddb0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 93
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0701ddb0(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 local_28;
  
  if ((DAT_07eebd7e & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4e28);
    DAT_07eebd7e = 1;
  }
  lVar12 = *(long *)(param_1 + 0xe8);
  local_28 = 0;
  if (lVar12 == 0) {
    return;
  }
  if (param_2 == 0) goto LAB_0701e168;
  uVar1 = FUN_06fc2f4c(param_2,0);
  uVar6 = FUN_06f98ac0(lVar12,uVar1 & 1,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0xe8) == 0) goto LAB_0701e168;
  uVar6 = FUN_06f98b04(*(long *)(param_1 + 0xe8),(long)&local_28 + 4,&local_28,0);
  if (((uVar6 & 1) == 0) ||
     ((local_28._4_4_ == 6 &&
      (uVar6 = UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__GetInteractionProfileType
                         (param_1), (uVar6 & 1) == 0)))) {
    if (*(long *)(param_1 + 0xe8) != 0) {
      FUN_06f991a0(*(long *)(param_1 + 0xe8),0);
      return;
    }
    goto LAB_0701e168;
  }
  lVar12 = *(long *)(param_2 + 0xd8);
  if (lVar12 == 0) goto LAB_0701e168;
                    /* try { // try from 0701de64 to 0711e05b has its CatchHandler @ 0701de64
                       catch() { ... } // from try @ 0701de64 with catch @ 0701de64
                       catch() { ... } // from try @ 0701e164 with catch @ 0701de64
                       catch() { ... } // from try @ 0701e314 with catch @ 0701de64
                       catch() { ... } // from try @ 0701e378 with catch @ 0701de64
                       catch() { ... } // from try @ 0701e41c with catch @ 0701de64
                       catch() { ... } // from try @ 0701e494 with catch @ 0701de64
                       catch() { ... } // from try @ 0701e4c8 with catch @ 0701de64
                       catch() { ... } // from try @ 0701e500 with catch @ 0701de64
                       catch() { ... } // from try @ 0701e5f8 with catch @ 0701de64
                       catch() { ... } // from try @ 0701e6a8 with catch @ 0701de64
                       catch() { ... } // from try @ 0701e6d8 with catch @ 0701de64 */
  iVar2 = FUN_07174cdc(lVar12,0);
  iVar3 = FUN_07174d90(lVar12,0);
  plVar13 = (long *)0x0;
  fVar14 = (float)(int)local_28 / 100.0;
  fVar15 = 1.0;
  if (fVar14 <= 1.0) {
    fVar15 = fVar14;
  }
  fVar16 = 0.0;
  if (0.0 <= fVar14) {
    fVar16 = fVar15;
  }
  if (local_28._4_4_ < 5) {
    if (local_28._4_4_ == 3) {
      lVar12 = *(long *)(param_1 + 0x170);
    }
    else {
      if (local_28._4_4_ != 4) goto LAB_0701df24;
      lVar12 = *(long *)(param_1 + 0x168);
    }
    if ((lVar12 == 0) || (*(long *)(lVar12 + 0xb8) == 0)) goto LAB_0701e168;
    puVar10 = (undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18);
LAB_0701df20:
    plVar13 = (long *)*puVar10;
  }
  else if (local_28._4_4_ == 5) {
    if ((*(long *)(param_1 + 0x2d0) != 0) &&
       (lVar12 = FUN_06fc6070(*(long *)(param_1 + 0x2d0),0), lVar12 != 0)) {
      puVar10 = (undefined8 *)(lVar12 + 0x18);
      goto LAB_0701df20;
    }
    plVar13 = (long *)0x0;
                    /* try { // try from 0701e164 to 0711e1bf has its CatchHandler @ 0701de64 */
  }
  else if (local_28._4_4_ == 6) {
    if (*(long *)(param_1 + 0x298) == 0) goto LAB_0701e168;
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x298) + 0xb8);
    goto LAB_0701df20;
  }
LAB_0701df24:
  if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  fVar14 = fVar16 * (float)iVar3;
  fVar16 = fVar16 * (float)iVar2;
  uVar6 = FUN_071c0684(plVar13,0,0);
  fVar15 = fVar16;
  if ((uVar6 & 1) != 0) {
    if (plVar13 == (long *)0x0) goto LAB_0701e168;
    iVar4 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
    iVar5 = (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
    if ((iVar4 != 0) && (iVar5 != 0)) {
      fVar15 = (fVar14 * (float)iVar4) / (float)iVar5;
      if (fVar16 < fVar15) {
        fVar14 = (fVar16 * (float)iVar5) / (float)iVar4;
        fVar15 = fVar16;
      }
    }
  }
  fVar15 = fVar15 / (float)iVar2;
  fVar14 = fVar14 / (float)iVar3;
  if (DAT_07ed7e32 == '\0') {
    FUN_03642964(PTR_DAT_079fb3d0);
    DAT_07ed7e32 = '\x01';
  }
  puVar11 = *(undefined4 **)(*(long *)PTR_DAT_079fb3d0 + 0xb8);
  uVar20 = *puVar11;
  uVar19 = puVar11[1];
  uVar18 = puVar11[2];
  uVar17 = puVar11[3];
  if (local_28._4_4_ < 4) {
    if (local_28._4_4_ == 1) {
      lVar7 = *(long *)(param_1 + 0xe8);
      if (lVar7 == 0) goto LAB_0701e168;
      uVar8 = *(undefined8 *)(param_1 + 0x268);
                    /* try { // try from 0701e094 to 0711e097 has its CatchHandler @ 0701e43c */
      uVar9 = 1;
      goto LAB_0701e138;
    }
    if (local_28._4_4_ == 2) {
      lVar7 = *(long *)(param_1 + 0xe8);
      if (lVar7 == 0) goto LAB_0701e168;
      uVar8 = *(undefined8 *)(param_1 + 0x288);
      uVar18 = 0;
      uVar17 = 0x3f800000;
                    /* try { // try from 0701e0e8 to 0711e0f3 has its CatchHandler @ 0701e444 */
      uVar9 = 1;
      uVar20 = DAT_01650aa0;
      uVar19 = DAT_01650e80;
      goto LAB_0701e138;
    }
    if (local_28._4_4_ != 3) {
      return;
    }
    lVar12 = *(long *)(param_1 + 0x170);
joined_r0x0701e0a4:
    if ((lVar12 == 0) || (lVar7 = *(long *)(param_1 + 0xe8), lVar7 == 0)) {
LAB_0701e168:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar8 = *(undefined8 *)(lVar12 + 0xb8);
  }
  else {
    if (local_28._4_4_ == 4) {
      lVar12 = *(long *)(param_1 + 0x168);
      goto joined_r0x0701e0a4;
    }
    if (local_28._4_4_ == 5) {
      lVar7 = *(long *)(param_1 + 0xe8);
      uVar8 = 0;
      if (*(long *)(param_1 + 0x2d0) != 0) {
        uVar8 = FUN_06fc6070(*(long *)(param_1 + 0x2d0),0);
      }
      if (lVar7 == 0) goto LAB_0701e168;
    }
    else {
      if (local_28._4_4_ != 6) {
        return;
      }
      if ((*(long *)(param_1 + 0x298) == 0) || (lVar7 = *(long *)(param_1 + 0xe8), lVar7 == 0))
      goto LAB_0701e168;
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x298) + 200);
                    /* try { // try from 0701e05c to 0711e063 has its CatchHandler @ 0701e478 */
    }
  }
  uVar9 = 0;
LAB_0701e138:
  FUN_06f99128(1.0 - fVar15,1.0 - fVar14,fVar15,fVar14,uVar20,uVar19,uVar18,uVar17,lVar7,uVar8,uVar9
               ,0);
                    /* try { // try from 0701e15c to 0711e163 has its CatchHandler @ 0701e440 */
  return;
}


