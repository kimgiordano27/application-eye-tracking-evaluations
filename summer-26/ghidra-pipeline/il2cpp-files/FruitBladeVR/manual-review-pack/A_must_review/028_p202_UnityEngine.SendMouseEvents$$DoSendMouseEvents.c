/*
FUNCTION_NAME: UnityEngine.SendMouseEvents$$DoSendMouseEvents
ENTRY_POINT: 037dbcf8
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_SendMouseEvents__DoSendMouseEvents(int param_1)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  char *pcVar17;
  ulong uVar18;
  float *pfVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 *puVar23;
  ulong uVar24;
  long *plVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float in_s3;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  float local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  float local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  float local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  
  puVar6 = PTR_UnityEngine_SendMouseEvents_TypeInfo_03cebbd0;
  if ((DAT_03efb31a & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Camera___TypeInfo_03cb7570);
    FUN_01c5c92c(PTR_UnityEngine_Display_TypeInfo_03ccc158);
                    /* try { // try from 037dbd5c to 038dbd63 has its CatchHandler @ 037dc294 */
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    FUN_01c5c92c(PTR_UnityEngine_SendMouseEvents_TypeInfo_03cebbd0);
    DAT_03efb31a = 1;
  }
                    /* try { // try from 037dbd78 to 038dbd7f has its CatchHandler @ 037dc28c */
  local_a8 = 0;
  local_b0 = 0;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  UnityEngine_SendMouseEvents__UpdateMouse();
                    /* try { // try from 037dbd9c to 038dbd9f has its CatchHandler @ 037dc288 */
  fVar31 = *(float *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x30);
  fVar32 = *(float *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x34);
  iVar9 = UnityEngine_Camera__get_allCamerasCount(0);
  lVar16 = *(long *)puVar6;
  lVar21 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x20);
  if (lVar21 == 0) {
LAB_037dbde4:
    uVar13 = FUN_01c5ca18(*(undefined8 *)PTR_UnityEngine_Camera___TypeInfo_03cb7570,iVar9);
    lVar16 = *(long *)puVar6;
                    /* try { // try from 037dbdfc to 038dbdff has its CatchHandler @ 037dc264 */
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c(lVar16);
      lVar16 = *(long *)puVar6;
    }
                    /* try { // try from 037dbe18 to 038dbe1b has its CatchHandler @ 037dc268 */
    puVar14 = (undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x20);
    *puVar14 = uVar13;
    thunk_FUN_01cc8040(puVar14,uVar13);
    lVar16 = *(long *)puVar6;
  }
  else {
                    /* try { // try from 037dbdbc to 038dbdbf has its CatchHandler @ 037dc25c */
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c(lVar16);
      lVar16 = *(long *)puVar6;
      lVar21 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x20);
      if (lVar21 == 0) {
LAB_037dc65c:
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbd4();
      }
    }
                    /* try { // try from 037dbde0 to 038dbde3 has its CatchHandler @ 037dc290 */
    if (iVar9 != *(int *)(lVar21 + 0x18)) goto LAB_037dbde4;
  }
  if (*(int *)(lVar16 + 0xe4) == 0) {
                    /* try { // try from 037dbe34 to 038dbe37 has its CatchHandler @ 037dc278 */
    thunk_FUN_01cb0d4c(lVar16);
    lVar16 = *(long *)puVar6;
  }
  UnityEngine_Camera__GetAllCameras(*(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x20),0);
  uVar24 = 0;
  lVar16 = 0x20;
  while( true ) {
    lVar21 = *(long *)puVar6;
                    /* try { // try from 037dbe58 to 038dbe5b has its CatchHandler @ 037dc254 */
                    /* try { // try from 037dbe5c to 038dbe6b has its CatchHandler @ 037dc258 */
    if (*(int *)(lVar21 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      lVar21 = *(long *)puVar6;
    }
    pcVar17 = *(char **)(lVar21 + 0xb8);
    lVar22 = *(long *)(pcVar17 + 0x18);
                    /* try { // try from 037dbe70 to 038dbe7b has its CatchHandler @ 037dc250 */
    if (lVar22 == 0) goto LAB_037dc65c;
                    /* try { // try from 037dbe80 to 038dbe87 has its CatchHandler @ 037dc240 */
    if ((long)*(int *)(lVar22 + 0x18) <= (long)uVar24) {
      if (*(int *)(lVar21 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
                    /* try { // try from 037dbec8 to 038dbed7 has its CatchHandler @ 037dc238 */
        lVar21 = *(long *)puVar6;
        pcVar17 = *(char **)(lVar21 + 0xb8);
      }
      if (*pcVar17 != '\0') goto LAB_037dc5a0;
      if (*(int *)(lVar21 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        pcVar17 = *(char **)(*(long *)puVar6 + 0xb8);
      }
      puVar4 = PTR_UnityEngine_Vector3_TypeInfo_03cb5ab0;
      puVar3 = PTR_UnityEngine_Object_TypeInfo_03cb5a80;
      fVar2 = DAT_00b460c0;
      fVar1 = DAT_00b45dd0;
      lVar16 = *(long *)(pcVar17 + 0x20);
      if (lVar16 == 0) goto LAB_037dc65c;
      if ((int)*(ulong *)(lVar16 + 0x18) < 1) goto LAB_037dc5a0;
                    /* try { // try from 037dbf04 to 038dbf0f has its CatchHandler @ 037dc300 */
                    /* try { // try from 037dbf20 to 038dbf23 has its CatchHandler @ 037dc298 */
                    /* try { // try from 037dbf24 to 038dbf2b has its CatchHandler @ 037dc2f4 */
      uVar24 = 0;
      uVar18 = *(ulong *)(lVar16 + 0x18) & 0xffffffff;
      plVar25 = (long *)PTR_UnityEngine_Display_TypeInfo_03ccc158;
      goto LAB_037dbf40;
    }
    if (*(int *)(lVar21 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      lVar22 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
      if (lVar22 == 0) goto LAB_037dc65c;
    }
    if (*(uint *)(lVar22 + 0x18) <= uVar24) break;
                    /* try { // try from 037dbea8 to 038dbeb3 has its CatchHandler @ 037dc228 */
    puVar14 = (undefined8 *)(lVar22 + lVar16);
    uVar24 = uVar24 + 1;
    lVar16 = lVar16 + 0x10;
                    /* try { // try from 037dbeb4 to 038dbebf has its CatchHandler @ 037dc234 */
    *puVar14 = 0;
    puVar14[1] = 0;
  }
LAB_037dc660:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbdc();
LAB_037dbf40:
  do {
                    /* try { // try from 037dbf40 to 038dbf47 has its CatchHandler @ 037dc2ac */
    if (uVar18 <= uVar24) goto LAB_037dc660;
    lVar21 = *(long *)(lVar16 + 0x20 + uVar24 * 8);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
                    /* try { // try from 037dbf64 to 038dbf67 has its CatchHandler @ 037dc2a8 */
    uVar18 = UnityEngine_Object__op_Equality(lVar21,0,0);
    if ((uVar18 & 1) == 0) {
      if (param_1 == 0) {
        if (lVar21 == 0) goto LAB_037dc65c;
      }
      else {
        if (lVar21 == 0) goto LAB_037dc65c;
                    /* try { // try from 037dbf7c to 038dbf83 has its CatchHandler @ 037dc2ec */
        uVar13 = UnityEngine_Camera__get_targetTexture(lVar21,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c(*(long *)puVar3);
        }
                    /* try { // try from 037dbfa4 to 038dbfa7 has its CatchHandler @ 037dc2d0 */
        uVar18 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar18 & 1) != 0) goto LAB_037dc590;
      }
                    /* try { // try from 037dbfc0 to 038dbfc3 has its CatchHandler @ 037dc2c8 */
      uVar10 = UnityEngine_Camera__get_targetDisplay(lVar21,0);
      if (*(int *)(*plVar25 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c(*plVar25);
      }
      fVar29 = 0.0;
      fVar27 = fVar32;
                    /* try { // try from 037dbfe4 to 038dbfe7 has its CatchHandler @ 037dc2bc */
      fVar26 = (float)UnityEngine_Display__RelativeMouseAt(fVar31,0);
                    /* try { // try from 037dc000 to 038dc003 has its CatchHandler @ 037dc2a4 */
      if (DAT_03ef1415 == '\0') {
        FUN_01c5c92c(puVar4);
                    /* try { // try from 037dc01c to 038dc01f has its CatchHandler @ 037dc2dc */
        DAT_03ef1415 = '\x01';
      }
      pfVar19 = *(float **)(*(long *)puVar4 + 0xb8);
                    /* try { // try from 037dc038 to 038dc03b has its CatchHandler @ 037dc2d8 */
      fVar30 = fVar29 - pfVar19[2];
                    /* try { // try from 037dc05c to 038dc05f has its CatchHandler @ 037dc2b8 */
                    /* try { // try from 037dc060 to 038dc06f has its CatchHandler @ 037dc2c0 */
      fVar28 = fVar1;
      fVar34 = fVar31;
      fVar35 = fVar32;
      fVar33 = 0.0;
      if (fVar30 * fVar30 +
          (fVar26 - *pfVar19) * (fVar26 - *pfVar19) + (fVar27 - pfVar19[1]) * (fVar27 - pfVar19[1])
          < fVar1) {
LAB_037dc1d0:
                    /* try { // try from 037dc1d0 to 038dc1d3 has its CatchHandler @ 037dc2e4 */
                    /* try { // try from 037dc1d4 to 038dc1d7 has its CatchHandler @ 037dc2e0 */
                    /* try { // try from 037dc1d8 to 038dc1db has its CatchHandler @ 037dc2d4 */
        fVar27 = (float)UnityEngine_Camera__get_pixelRect(lVar21,0);
                    /* try { // try from 037dc1dc to 038dc1df has its CatchHandler @ 037dc2cc */
                    /* try { // try from 037dc1e0 to 038dc1e3 has its CatchHandler @ 037dc2f8 */
                    /* try { // try from 037dc1e4 to 038dc1e7 has its CatchHandler @ 037dc2c4 */
                    /* try { // try from 037dc1e8 to 038dc1eb has its CatchHandler @ 037dc2f8 */
                    /* try { // try from 037dc1ec to 038dc1ef has its CatchHandler @ 037dc2b4 */
                    /* try { // try from 037dc1f0 to 038dc1f3 has its CatchHandler @ 037dc2a0 */
                    /* try { // try from 037dc1f4 to 038dc1f7 has its CatchHandler @ 037dc284 */
                    /* try { // try from 037dc1f8 to 038dc1fb has its CatchHandler @ 037dc280 */
                    /* try { // try from 037dc1fc to 038dc1ff has its CatchHandler @ 037dc27c */
                    /* try { // try from 037dc200 to 038dc203 has its CatchHandler @ 037dc274 */
                    /* try { // try from 037dc204 to 038dc207 has its CatchHandler @ 037dc270 */
                    /* try { // try from 037dc208 to 038dc20f has its CatchHandler @ 037dc29c */
                    /* try { // try from 037dc210 to 038dc213 has its CatchHandler @ 037dc26c */
        if (((fVar27 <= fVar34) && (fVar34 < fVar27 + fVar30)) &&
           ((fVar28 <= fVar35 &&
            ((fVar35 < fVar28 + in_s3 &&
             (iVar9 = UnityEngine_Camera__get_eventMask(lVar21,0), iVar9 != 0)))))) {
                    /* try { // try from 037dc214 to 038dc217 has its CatchHandler @ 037dc260 */
                    /* try { // try from 037dc218 to 038dc21b has its CatchHandler @ 037dc244 */
                    /* try { // try from 037dc21c to 038dc21f has its CatchHandler @ 037dc230 */
                    /* try { // try from 037dc220 to 038dc223 has its CatchHandler @ 037dc22c */
                    /* try { // try from 037dc224 to 038dc317 has its CatchHandler @ 037dbb30 */
                    /* catch() { ... } // from try @ 037dbea8 with catch @ 037dc228 */
                    /* catch() { ... } // from try @ 037dc220 with catch @ 037dc22c */
          UnityEngine_Camera__ScreenPointToRay(&local_c8,fVar34,fVar35,fVar33,lVar21,0);
          fVar27 = local_b4;
          uVar8 = uStack_b8;
          uVar7 = local_bc;
                    /* catch() { ... } // from try @ 037dc21c with catch @ 037dc230 */
                    /* catch() { ... } // from try @ 037dbeb4 with catch @ 037dc234 */
                    /* catch() { ... } // from try @ 037dbec8 with catch @ 037dc238 */
                    /* catch() { ... } // from try @ 037dc09c with catch @ 037dc23c */
                    /* catch() { ... } // from try @ 037dbe80 with catch @ 037dc240 */
                    /* catch() { ... } // from try @ 037dc218 with catch @ 037dc244 */
          local_b0 = local_c8;
          local_a8 = local_c0;
                    /* catch() { ... } // from try @ 037dbe70 with catch @ 037dc250 */
          if (DAT_03ef1815 == '\0') {
                    /* catch() { ... } // from try @ 037dbe58 with catch @ 037dc254 */
                    /* catch() { ... } // from try @ 037dbe5c with catch @ 037dc258 */
                    /* catch() { ... } // from try @ 037dbdbc with catch @ 037dc25c */
            FUN_01c5c92c(PTR_UnityEngine_Mathf_TypeInfo_03cb6100);
                    /* catch() { ... } // from try @ 037dc214 with catch @ 037dc260 */
                    /* catch() { ... } // from try @ 037dbdfc with catch @ 037dc264 */
                    /* catch() { ... } // from try @ 037dbe18 with catch @ 037dc268 */
            DAT_03ef1815 = '\x01';
          }
                    /* catch() { ... } // from try @ 037dc210 with catch @ 037dc26c */
                    /* catch() { ... } // from try @ 037dc204 with catch @ 037dc270 */
                    /* catch() { ... } // from try @ 037dc200 with catch @ 037dc274 */
          in_s3 = 8.0;
                    /* catch() { ... } // from try @ 037dbe34 with catch @ 037dc278 */
                    /* catch() { ... } // from try @ 037dc1fc with catch @ 037dc27c */
                    /* catch() { ... } // from try @ 037dc1f8 with catch @ 037dc280 */
                    /* catch() { ... } // from try @ 037dc1f4 with catch @ 037dc284 */
          fVar26 = ABS(fVar27) * fVar2;
                    /* catch() { ... } // from try @ 037dbd9c with catch @ 037dc288 */
                    /* catch() { ... } // from try @ 037dbd78 with catch @ 037dc28c */
                    /* catch() { ... } // from try @ 037dbde0 with catch @ 037dc290 */
          fVar29 = **(float **)(*(long *)PTR_UnityEngine_Mathf_TypeInfo_03cb6100 + 0xb8) * 8.0;
                    /* catch() { ... } // from try @ 037dbd5c with catch @ 037dc294 */
                    /* catch() { ... } // from try @ 037dbf20 with catch @ 037dc298 */
          if (fVar26 <= fVar29) {
            fVar26 = fVar29;
          }
                    /* catch() { ... } // from try @ 037dc208 with catch @ 037dc29c */
                    /* catch() { ... } // from try @ 037dc1f0 with catch @ 037dc2a0 */
          if (fVar26 <= ABS(fVar27)) {
                    /* catch() { ... } // from try @ 037dc074 with catch @ 037dc2b0 */
                    /* catch() { ... } // from try @ 037dc1ec with catch @ 037dc2b4 */
                    /* catch() { ... } // from try @ 037dc05c with catch @ 037dc2b8 */
            fVar26 = (float)UnityEngine_Camera__get_farClipPlane(lVar21,0);
                    /* catch() { ... } // from try @ 037dbfe4 with catch @ 037dc2bc */
                    /* catch() { ... } // from try @ 037dc060 with catch @ 037dc2c0 */
                    /* catch() { ... } // from try @ 037dc1e4 with catch @ 037dc2c4 */
                    /* catch() { ... } // from try @ 037dbfc0 with catch @ 037dc2c8 */
            fVar29 = (float)UnityEngine_Camera__get_nearClipPlane(lVar21,0);
                    /* catch() { ... } // from try @ 037dc1dc with catch @ 037dc2cc */
                    /* catch() { ... } // from try @ 037dbfa4 with catch @ 037dc2d0 */
                    /* catch() { ... } // from try @ 037dc1d8 with catch @ 037dc2d4 */
            fVar26 = ABS((fVar26 - fVar29) / fVar27);
          }
          else {
                    /* catch() { ... } // from try @ 037dc000 with catch @ 037dc2a4 */
                    /* catch() { ... } // from try @ 037dbf64 with catch @ 037dc2a8 */
            fVar26 = INFINITY;
                    /* catch() { ... } // from try @ 037dbf40 with catch @ 037dc2ac */
          }
                    /* catch() { ... } // from try @ 037dc038 with catch @ 037dc2d8 */
                    /* catch() { ... } // from try @ 037dc01c with catch @ 037dc2dc */
                    /* catch() { ... } // from try @ 037dc1d4 with catch @ 037dc2e0 */
          uVar10 = UnityEngine_Camera__get_cullingMask(lVar21,0);
                    /* catch() { ... } // from try @ 037dc1d0 with catch @ 037dc2e4 */
                    /* catch() { ... } // from try @ 037dc1cc with catch @ 037dc2e8 */
                    /* catch() { ... } // from try @ 037dbf7c with catch @ 037dc2ec */
                    /* catch() { ... } // from try @ 037dc1c8 with catch @ 037dc2f0 */
          uVar12 = UnityEngine_Camera__get_eventMask(lVar21,0);
                    /* catch() { ... } // from try @ 037dbf24 with catch @ 037dc2f4 */
                    /* catch() { ... } // from try @ 037dc1e0 with catch @ 037dc2f8
                       catch() { ... } // from try @ 037dc1e8 with catch @ 037dc2f8 */
                    /* catch() { ... } // from try @ 037dc1c4 with catch @ 037dc2fc */
                    /* catch() { ... } // from try @ 037dbf04 with catch @ 037dc300 */
          local_e0 = local_b0;
          local_d8 = local_a8;
          local_d4 = uVar7;
          uStack_d0 = uVar8;
                    /* try { // try from 037dc318 to 038dc31b has its CatchHandler @ 037dc33c */
          local_cc = fVar27;
                    /* try { // try from 037dc31c to 038dc33f has its CatchHandler @ 037dbb30 */
          uVar13 = UnityEngine_CameraRaycastHelper__RaycastTry
                             (fVar26,lVar21,&local_e0,uVar12 & uVar10);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c(*(long *)puVar3);
          }
                    /* catch() { ... } // from try @ 037dc318 with catch @ 037dc33c */
                    /* try { // try from 037dc340 to 038dc347 has its CatchHandler @ 037dc350 */
          uVar18 = UnityEngine_Object__op_Inequality(uVar13,0,0);
                    /* try { // try from 037dc348 to 038dc353 has its CatchHandler @ 037dbb30 */
          if ((uVar18 & 1) == 0) {
            iVar9 = UnityEngine_Camera__get_clearFlags(lVar21,0);
            if ((iVar9 == 1) || (iVar9 = UnityEngine_Camera__get_clearFlags(lVar21,0), iVar9 == 2))
            {
              lVar22 = *(long *)puVar6;
              if (*(int *)(lVar22 + 0xe4) == 0) {
                thunk_FUN_01cb0d4c();
                lVar22 = *(long *)puVar6;
              }
              lVar22 = *(long *)(*(long *)(lVar22 + 0xb8) + 0x18);
              if (lVar22 != 0) {
                if ((*(uint *)(lVar22 + 0x18) & 0xfffffffe) != 0) {
                  *(undefined8 *)(lVar22 + 0x30) = 0;
                  thunk_FUN_01cc8040((undefined8 *)(lVar22 + 0x30),0);
                  lVar22 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
                  if (lVar22 != 0) {
                    if ((*(uint *)(lVar22 + 0x18) & 0xfffffffe) != 0) {
                      lVar20 = 0;
                      plVar15 = (long *)(lVar22 + 0x38);
                      *plVar15 = 0;
                      goto LAB_037dc430;
                    }
                    goto LAB_037dc660;
                  }
                  goto LAB_037dc65c;
                }
                goto LAB_037dc660;
              }
              goto LAB_037dc65c;
            }
          }
          else {
            lVar22 = *(long *)puVar6;
                    /* catch() { ... } // from try @ 037dc340 with catch @ 037dc350 */
            if (*(int *)(lVar22 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
              lVar22 = *(long *)puVar6;
            }
            lVar22 = *(long *)(*(long *)(lVar22 + 0xb8) + 0x18);
            if (lVar22 == 0) goto LAB_037dc65c;
            if ((*(uint *)(lVar22 + 0x18) & 0xfffffffe) == 0) goto LAB_037dc660;
            *(undefined8 *)(lVar22 + 0x30) = uVar13;
            thunk_FUN_01cc8040((undefined8 *)(lVar22 + 0x30),uVar13);
            lVar22 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
            if (lVar22 == 0) goto LAB_037dc65c;
            if ((*(uint *)(lVar22 + 0x18) & 0xfffffffe) == 0) goto LAB_037dc660;
            plVar15 = (long *)(lVar22 + 0x38);
            *plVar15 = lVar21;
            lVar20 = lVar21;
LAB_037dc430:
            thunk_FUN_01cc8040(plVar15,lVar20);
          }
          uVar10 = UnityEngine_Camera__get_cullingMask(lVar21,0);
          uVar12 = UnityEngine_Camera__get_eventMask(lVar21,0);
          local_f8 = local_b0;
          local_f0 = local_a8;
          local_ec = uVar7;
          uStack_e8 = uVar8;
          local_e4 = fVar27;
          uVar13 = UnityEngine_CameraRaycastHelper__RaycastTry2D
                             (fVar26,lVar21,&local_f8,uVar12 & uVar10);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c(*(long *)puVar3);
          }
          uVar18 = UnityEngine_Object__op_Inequality(uVar13,0,0);
          if ((uVar18 & 1) == 0) {
            iVar9 = UnityEngine_Camera__get_clearFlags(lVar21,0);
            if ((iVar9 != 1) && (iVar9 = UnityEngine_Camera__get_clearFlags(lVar21,0), iVar9 != 2))
            goto LAB_037dc590;
            lVar21 = *(long *)puVar6;
            if (*(int *)(lVar21 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
              lVar21 = *(long *)puVar6;
            }
            lVar21 = *(long *)(*(long *)(lVar21 + 0xb8) + 0x18);
            if (lVar21 == 0) goto LAB_037dc65c;
            if (*(uint *)(lVar21 + 0x18) < 3) goto LAB_037dc660;
            *(undefined8 *)(lVar21 + 0x40) = 0;
            thunk_FUN_01cc8040((undefined8 *)(lVar21 + 0x40),0);
            lVar22 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
            if (lVar22 == 0) goto LAB_037dc65c;
            if (*(uint *)(lVar22 + 0x18) < 3) goto LAB_037dc660;
            lVar21 = 0;
            plVar15 = (long *)(lVar22 + 0x48);
            *plVar15 = 0;
          }
          else {
            lVar22 = *(long *)puVar6;
            if (*(int *)(lVar22 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
              lVar22 = *(long *)puVar6;
            }
            lVar22 = *(long *)(*(long *)(lVar22 + 0xb8) + 0x18);
            if (lVar22 == 0) goto LAB_037dc65c;
            if (*(uint *)(lVar22 + 0x18) < 3) goto LAB_037dc660;
            *(undefined8 *)(lVar22 + 0x40) = uVar13;
            thunk_FUN_01cc8040((undefined8 *)(lVar22 + 0x40),uVar13);
            lVar22 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
            if (lVar22 == 0) goto LAB_037dc65c;
            if (*(uint *)(lVar22 + 0x18) < 3) goto LAB_037dc660;
            plVar15 = (long *)(lVar22 + 0x48);
            *plVar15 = lVar21;
          }
          thunk_FUN_01cc8040(plVar15,lVar21);
        }
      }
      else {
                    /* try { // try from 037dc074 to 038dc07f has its CatchHandler @ 037dc2b0 */
        uVar12 = 0x80000000;
        if (fVar29 != INFINITY) {
          uVar12 = (int)fVar29;
        }
        if (uVar12 == uVar10) {
          iVar9 = UnityEngine_Screen__get_width(0);
          iVar11 = UnityEngine_Screen__get_height(0);
          puVar5 = PTR_UnityEngine_Display_TypeInfo_03ccc158;
                    /* try { // try from 037dc09c to 038dc0ab has its CatchHandler @ 037dc23c */
          if (0 < (int)uVar10) {
                    /* try { // try from 037dc0ac to 038dc1c3 has its CatchHandler @ 037dbb30 */
            lVar22 = *(long *)PTR_UnityEngine_Display_TypeInfo_03ccc158;
            if (*(int *)(lVar22 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
              lVar22 = *(long *)puVar5;
            }
            puVar5 = PTR_UnityEngine_Display_TypeInfo_03ccc158;
            lVar20 = **(long **)(lVar22 + 0xb8);
            if (lVar20 == 0) goto LAB_037dc65c;
            if ((int)uVar10 < *(int *)(lVar20 + 0x18)) {
              if (*(int *)(lVar22 + 0xe4) == 0) {
                thunk_FUN_01cb0d4c();
                lVar20 = **(long **)(*(long *)puVar5 + 0xb8);
                if (lVar20 == 0) goto LAB_037dc65c;
              }
              if (*(uint *)(lVar20 + 0x18) <= uVar10) goto LAB_037dc660;
              lVar22 = *(long *)(lVar20 + (ulong)uVar10 * 8 + 0x20);
              if (lVar22 == 0) goto LAB_037dc65c;
              iVar9 = UnityEngine_Display__get_systemWidth(lVar22,0);
              lVar22 = **(long **)(*(long *)puVar5 + 0xb8);
              if (lVar22 == 0) goto LAB_037dc65c;
              if (*(uint *)(lVar22 + 0x18) <= uVar10) goto LAB_037dc660;
              lVar22 = *(long *)(lVar22 + (ulong)uVar10 * 8 + 0x20);
              if (lVar22 == 0) goto LAB_037dc65c;
              iVar11 = UnityEngine_Display__get_systemHeight(lVar22,0);
            }
          }
          plVar25 = (long *)PTR_UnityEngine_Display_TypeInfo_03ccc158;
          if ((((0.0 <= fVar26 / (float)iVar9) && (fVar28 = 1.0, fVar26 / (float)iVar9 <= 1.0)) &&
              (0.0 <= fVar27 / (float)iVar11)) &&
             (fVar34 = fVar26, fVar35 = fVar27, fVar33 = fVar29, fVar27 / (float)iVar11 <= 1.0))
          goto LAB_037dc1d0;
        }
      }
    }
LAB_037dc590:
    uVar18 = (ulong)*(uint *)(lVar16 + 0x18);
    uVar24 = uVar24 + 1;
  } while ((long)uVar24 < (long)(int)*(uint *)(lVar16 + 0x18));
LAB_037dc5a0:
  lVar16 = 0;
  uVar24 = 0;
  while( true ) {
    lVar21 = *(long *)puVar6;
    if (*(int *)(lVar21 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      lVar21 = *(long *)puVar6;
    }
    puVar23 = *(undefined1 **)(lVar21 + 0xb8);
    lVar22 = *(long *)(puVar23 + 0x18);
    if (lVar22 == 0) goto LAB_037dc65c;
    if ((long)*(int *)(lVar22 + 0x18) <= (long)uVar24) {
      if (*(int *)(lVar21 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        puVar23 = *(undefined1 **)(*(long *)puVar6 + 0xb8);
      }
      *puVar23 = 0;
      return;
    }
    if (*(int *)(lVar21 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      lVar22 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
      if (lVar22 == 0) goto LAB_037dc65c;
    }
    if (*(uint *)(lVar22 + 0x18) <= uVar24) break;
    UnityEngine_SendMouseEvents__SendEvents
              (uVar24 & 0xffffffff,*(undefined8 *)(lVar22 + lVar16 + 0x20),
               *(undefined8 *)(lVar22 + lVar16 + 0x28));
    uVar24 = uVar24 + 1;
    lVar16 = lVar16 + 0x10;
  }
  goto LAB_037dc660;
}


