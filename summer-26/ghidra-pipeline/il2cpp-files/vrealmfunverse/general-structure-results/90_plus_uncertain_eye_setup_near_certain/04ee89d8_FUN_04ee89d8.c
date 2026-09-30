/*
FUNCTION_NAME: FUN_04ee89d8
ENTRY_POINT: 04ee89d8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_04ee89d8(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  undefined4 local_54;
  
                    /* try { // try from 04ee89e4 to 04fe89f7 has its CatchHandler @ 04ee8c7c */
  if ((DAT_066c9632 & 1) == 0) {
                    /* try { // try from 04ee8a00 to 04fe8a03 has its CatchHandler @ 04ee8c74 */
    FUN_02b3c81c(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
                    /* try { // try from 04ee8a0c to 04fe8a0f has its CatchHandler @ 04ee8c70 */
    FUN_02b3c81c(PTR_DAT_06312520);
                    /* try { // try from 04ee8a18 to 04fe8a1b has its CatchHandler @ 04ee8c68 */
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_UI_PointerHitData_var);
                    /* try { // try from 04ee8a24 to 04fe8a27 has its CatchHandler @ 04ee8c64 */
    DAT_066c9632 = 1;
  }
  cVar4 = DAT_066c1d97;
  if (*(char *)(param_1 + 0x1c8) != '\0') {
                    /* try { // try from 04ee8a44 to 04fe8a47 has its CatchHandler @ 04ee8c60 */
    *(undefined8 *)(param_1 + 0x18c) = *(undefined8 *)(param_1 + 0x180);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x188);
    if (cVar4 == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
                    /* try { // try from 04ee8a60 to 04fe8a63 has its CatchHandler @ 04ee8c3c */
      DAT_066c1d97 = '\x01';
    }
                    /* try { // try from 04ee8a78 to 04fe8a7b has its CatchHandler @ 04ee8cd4 */
    uVar13 = **(undefined8 **)(*(long *)PTR_DAT_06312438 + 0xb8);
    uVar14 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_06312438 + 0xb8) + 1);
    *(undefined1 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x180) = uVar13;
    *(undefined4 *)(param_1 + 0x188) = uVar14;
                    /* try { // try from 04ee8a94 to 04fe8a97 has its CatchHandler @ 04ee8cd0 */
                    /* try { // try from 04ee8aa0 to 04fe8aa3 has its CatchHandler @ 04ee8cc8 */
    return;
  }
  lVar8 = *(long *)(param_1 + 0xd0);
  if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar5 = FUN_05c8e378(lVar8,0,0);
  puVar3 = System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo;
  puVar2 = UnityEngine_XR_Interaction_Toolkit_UI_PointerHitData_var;
                    /* try { // try from 04ee8ad4 to 04fe8aff has its CatchHandler @ 04ee8cdc */
  if ((uVar5 & 1) == 0) {
    if ((*(long *)(param_1 + 0x1a8) != 0) &&
       (lVar10 = *(long *)(*(long *)(param_1 + 0x1a8) + 0x10), lVar10 != 0)) {
      OVRPlugin_OVRP_1_63_0__ovrp_GetInsightPassthroughInitialized
                (lVar10,*(undefined8 *)(param_1 + 0x1b0),0);
      if (*(long *)(param_1 + 0x1a8) != 0) {
        FUN_04ee8e4c(*(long *)(param_1 + 0x1a8),*(undefined8 *)(param_1 + 0x1b0));
        uVar5 = FUN_04ee8098(param_1);
        puVar2 = PTR_DAT_06312438;
        if ((uVar5 & 1) == 0) {
LAB_04ee8cf0:
          lVar8 = *(long *)(param_1 + 0x170);
          if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04ee8d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28))
            ;
            return;
          }
        }
        else {
          lVar10 = *(long *)(param_1 + 0x1a0);
          if (lVar10 != 0) {
            uVar9 = 0;
            do {
              if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar9) goto LAB_04ee8cf0;
              if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_04ee8e48;
              lVar10 = *(long *)(lVar10 + (long)(int)uVar9 * 8 + 0x20);
              if (lVar10 == 0) break;
              if (*(char *)(lVar10 + 0x10) == '\0') {
                if (lVar8 == 0) break;
                uVar13 = *(undefined8 *)(lVar8 + 0xd8);
                if (DAT_066c1d97 == '\0') {
                  FUN_02b3c81c(puVar2);
                  DAT_066c1d97 = '\x01';
                }
                puVar7 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
                FUN_04ee7cbc(*puVar7,puVar7[1],puVar7[2],param_1,uVar9,uVar13);
              }
              else {
                if (lVar8 == 0) break;
                uVar13 = *(undefined8 *)(lVar8 + 0xd8);
                if (DAT_066c1d97 == '\0') {
                  FUN_02b3c81c(puVar2);
                  DAT_066c1d97 = '\x01';
                }
                puVar7 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
                FUN_04ee8704(*puVar7,puVar7[1],puVar7[2],param_1,uVar9,uVar13);
              }
              lVar10 = *(long *)(param_1 + 0x1a0);
              uVar9 = uVar9 + 1;
            } while (lVar10 != 0);
          }
        }
      }
    }
  }
  else {
    lVar8 = *(long *)(param_1 + 0x1a0);
    if (lVar8 != 0) {
      uVar9 = 0;
      do {
        if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar9) {
          uVar9 = 0;
          goto LAB_04ee8d24;
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_04ee8e48;
                    /* try { // try from 04ee8b0c to 04fe8b23 has its CatchHandler @ 04ee8cbc */
        lVar10 = *(long *)(lVar8 + (long)(int)uVar9 * 8 + 0x20);
        if (lVar10 == 0) break;
        if (*(char *)(lVar10 + 0x10) != '\0') {
          *(undefined2 *)(lVar10 + 0x10) = 0x100;
          *(undefined4 *)(lVar10 + 0x2c) = 0;
          if (*(long *)(lVar10 + 0x18) == 0) break;
                    /* try { // try from 04ee8b2c to 04fe8b2f has its CatchHandler @ 04ee8c38 */
          lVar8 = FUN_02b3c908(*(undefined8 *)puVar2,
                               *(undefined4 *)(*(long *)(lVar10 + 0x18) + 0x18));
          lVar6 = *(long *)(lVar10 + 0x18);
          if (lVar6 == 0) break;
          uVar5 = 0;
          lVar11 = 0x20;
          while ((long)uVar5 < (long)(int)*(uint *)(lVar6 + 0x18)) {
            if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_04ee8e48;
            if ((*(long *)(param_1 + 0x1b8) == 0) ||
               (FUN_04f91cec(&local_6c,*(long *)(param_1 + 0x1b8),
                             *(undefined4 *)(lVar6 + uVar5 * 4 + 0x20),0), lVar8 == 0))
            goto LAB_04ee8e44;
            if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_04ee8e48;
            puVar1 = (undefined8 *)(lVar8 + lVar11);
            lVar11 = lVar11 + 0x1c;
            uVar5 = uVar5 + 1;
            *(undefined4 *)(puVar1 + 3) = local_54;
            puVar1[2] = local_5c;
            puVar1[1] = uStack_64;
            *puVar1 = local_6c;
            lVar6 = *(long *)(lVar10 + 0x18);
            if (lVar6 == 0) goto LAB_04ee8e44;
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar14 = FUN_04f1e218(lVar8,0);
          *(undefined4 *)(lVar10 + 0x28) = uVar14;
          lVar8 = *(long *)(param_1 + 0x1a0);
        }
        uVar9 = uVar9 + 1;
      } while (lVar8 != 0);
    }
  }
  goto LAB_04ee8e44;
  while( true ) {
    lVar8 = *(long *)(param_1 + 0x1a0);
    uVar9 = uVar9 + 1;
    if (lVar8 == 0) break;
LAB_04ee8d24:
    if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar9) {
      return;
    }
    if (*(uint *)(lVar8 + 0x18) <= uVar9) {
LAB_04ee8e48:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar8 = *(long *)(lVar8 + (long)(int)uVar9 * 8 + 0x20);
    if (lVar8 == 0) break;
    if (*(char *)(lVar8 + 0x11) != '\0') {
      if (*(long *)(lVar8 + 0x18) == 0) break;
      lVar10 = FUN_02b3c908(*(undefined8 *)puVar2,*(undefined4 *)(*(long *)(lVar8 + 0x18) + 0x18));
      lVar6 = *(long *)(lVar8 + 0x18);
      if (lVar6 == 0) break;
      uVar5 = 0;
      lVar11 = 0x20;
      while ((long)uVar5 < (long)(int)*(uint *)(lVar6 + 0x18)) {
        if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_04ee8e48;
        if ((*(long *)(param_1 + 0x1b8) == 0) ||
           (FUN_04f91cec(&local_6c,*(long *)(param_1 + 0x1b8),
                         *(undefined4 *)(lVar6 + uVar5 * 4 + 0x20),0), lVar10 == 0))
        goto LAB_04ee8e44;
        if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_04ee8e48;
        puVar1 = (undefined8 *)(lVar10 + lVar11);
        lVar11 = lVar11 + 0x1c;
        uVar5 = uVar5 + 1;
        *(undefined4 *)(puVar1 + 3) = local_54;
        puVar1[2] = local_5c;
        puVar1[1] = uStack_64;
        *puVar1 = local_6c;
        lVar6 = *(long *)(lVar8 + 0x18);
        if (lVar6 == 0) goto LAB_04ee8e44;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      fVar12 = (float)FUN_04f1e218(lVar10,0);
      if (*(float *)(lVar8 + 0x28) - *(float *)(param_1 + 0x15c) <= fVar12) {
        *(undefined4 *)(lVar8 + 0x2c) = 0;
      }
      else {
        fVar12 = *(float *)(lVar8 + 0x2c) + *(float *)(param_1 + 0x1d0);
        *(float *)(lVar8 + 0x2c) = fVar12;
        if (fVar12 < *(float *)(param_1 + 0x160)) {
          return;
        }
        *(undefined1 *)(lVar8 + 0x11) = 0;
      }
    }
  }
LAB_04ee8e44:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


