/*
FUNCTION_NAME: FullSerializer.Internal.fsIEnumerableConverter$$TrySerialize
ENTRY_POINT: 00e3c38c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 117
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;telemetry;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x00e40474) */
/* WARNING: Removing unreachable block (ram,0x00e411d8) */
/* WARNING: Removing unreachable block (ram,0x00e40b00) */
/* WARNING: Removing unreachable block (ram,0x00e4022c) */
/* WARNING: Removing unreachable block (ram,0x00e40338) */
/* WARNING: Removing unreachable block (ram,0x00e3ecf8) */
/* WARNING: Removing unreachable block (ram,0x00e3fd64) */
/* WARNING: Removing unreachable block (ram,0x00e4063c) */
/* WARNING: Removing unreachable block (ram,0x00e42814) */
/* WARNING: Removing unreachable block (ram,0x00e40c08) */
/* WARNING: Removing unreachable block (ram,0x00e428b4) */
/* WARNING: Removing unreachable block (ram,0x00e42b18) */
/* WARNING: Removing unreachable block (ram,0x00e42bb8) */
/* WARNING: Removing unreachable block (ram,0x00e42e1c) */
/* WARNING: Removing unreachable block (ram,0x00e42ebc) */
/* WARNING: Removing unreachable block (ram,0x00e43124) */
/* WARNING: Removing unreachable block (ram,0x00e431c4) */

void FullSerializer_Internal_fsIEnumerableConverter__TrySerialize(void)

{
  undefined4 *puVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  char cVar6;
  undefined *puVar7;
  short sVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  ulong uVar17;
  float *pfVar18;
  long lVar19;
  long *unaff_x19;
  undefined8 uVar20;
  undefined8 *puVar21;
  long lVar22;
  uint *puVar23;
  uint uVar24;
  ulong unaff_x21;
  ulong uVar25;
  uint uVar26;
  undefined8 *unaff_x22;
  undefined8 uVar27;
  uint uVar28;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined **unaff_x25;
  long *plVar29;
  double *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  ulong uVar30;
  undefined4 uVar31;
  float fVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float unaff_s8;
  float fVar38;
  int iVar39;
  float fVar40;
  ulong unaff_d14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  undefined8 *in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  double *in_stack_00000060;
  float fStack0000000000000070;
  long in_stack_00000078;
  
  do {
                    /* try { // try from 00e3c394 to 00f3c39b has its CatchHandler @ 00e3c3c0 */
    if ((int)unaff_x19[0x2a] - 3U < 2) goto LAB_00e3c40c;
    do {
                    /* try { // try from 00e3c39c to 00f3c3db has its CatchHandler @ 00e3c370 */
      if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
      iVar9 = *(int *)(unaff_x19[0xf] + 0x10) + -1;
      *(int *)((long)unaff_x19 + 0x38c) = iVar9;
                    /* catch() { ... } // from try @ 00e3c394 with catch @ 00e3c3c0 */
      if ((unaff_x19[9] == 0) ||
         (FUN_0132138c(unaff_x19[9],iVar9,&stack0x00000070,*unaff_x27),
         _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
                    /* catch() { ... } // from try @ 00e3c380 with catch @ 00e3c3d0 */
      *(undefined4 *)(unaff_x19 + 0x4a) = *(undefined4 *)((long)_fStack0000000000000070 + 0x48);
      if ((unaff_x19[9] == 0) ||
         (FUN_0132138c(unaff_x19[9],*(undefined4 *)((long)unaff_x19 + 0x38c),&stack0x00000070,
                       *unaff_x27), _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
      *(float *)((long)unaff_x19 + 0x254) =
           *(float *)((long)_fStack0000000000000070 + 0x48) + *(float *)((long)unaff_x19 + 0x50c);
      *(undefined4 *)(unaff_x19 + 0x4b) = *(undefined4 *)((long)unaff_x19 + 0x18c);
LAB_00e3c40c:
      FUN_00e4e52c();
      if (*(char *)((long)unaff_x19 + 0x6e1) != '\0') {
        FUN_00e45d2c();
      }
      if ((char)unaff_x19[0xdc] != '\0') {
        (**(code **)(*unaff_x19 + 0x218))();
        if (unaff_x19[0x54] != 0) {
          FUN_026c868c(unaff_x19[0x54],0);
        }
        lVar14 = unaff_x19[0x55];
        if (lVar14 != 0) {
          (**(code **)(lVar14 + 0x18))
                    (*(undefined8 *)(lVar14 + 0x40),*(undefined8 *)(lVar14 + 0x28));
        }
      }
      unaff_x19[0xc6] = 0;
      fVar38 = 0.0;
      *(undefined4 *)(unaff_x19 + 199) = 0;
                    /* catch() { ... } // from try @ 00e3c4cc with catch @ 00e3c484 */
      fVar32 = 0.0;
      if ((((0.0 < fStack000000000000004c) &&
           (uVar2 = *(uint *)(unaff_x19 + 0x2a), fVar32 = fVar38, uVar2 < 5)) &&
          ((1 << (ulong)(uVar2 & 0x1f) & 0x19U) != 0)) &&
         (*(float *)(unaff_x19 + 0x4a) < -*(float *)((long)unaff_x19 + 0x184))) {
                    /* try { // try from 00e3c4c0 to 00f3c4cb has its CatchHandler @ 00e3c4ec */
        if (uVar2 == 4) {
          lVar14 = unaff_x19[0xc];
                    /* try { // try from 00e3c4cc to 00f3c513 has its CatchHandler @ 00e3c484 */
          if (lVar14 == 0) goto LAB_00e443fc;
          if (0 < *(int *)(lVar14 + 0x18)) {
            iVar9 = 0;
            do {
                    /* catch() { ... } // from try @ 00e3c4c0 with catch @ 00e3c4ec */
              FUN_0132138c(lVar14,iVar9,&stack0x00000070,*unaff_x22);
              *(float *)((long)unaff_x19 + 0x634) = fStack0000000000000070;
              fVar32 = fStack0000000000000070;
              if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <=
                  fStack0000000000000070) break;
              lVar14 = unaff_x19[0xc];
              if (lVar14 == 0) goto LAB_00e443fc;
              iVar9 = iVar9 + 1;
            } while (iVar9 < *(int *)(lVar14 + 0x18));
          }
        }
        else {
          lVar14 = unaff_x19[0xb];
          if (lVar14 == 0) goto LAB_00e443fc;
          iVar9 = 0;
          fVar32 = 0.0;
          while (iVar9 < *(int *)(lVar14 + 0x18)) {
            FUN_0132138c(lVar14,iVar9,&stack0x00000070,*unaff_x22);
            fVar32 = fVar32 + fStack0000000000000070;
            *(float *)((long)unaff_x19 + 0x634) = fVar32;
            if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <= fVar32)
            break;
            lVar14 = unaff_x19[0xb];
            iVar9 = iVar9 + 1;
            if (lVar14 == 0) goto LAB_00e443fc;
          }
        }
      }
                    /* catch() { ... } // from try @ 00e3c690 with catch @ 00e3c594 */
      *(float *)(unaff_x19 + 0xc6) = *(float *)(unaff_x19 + 0xc6) + *(float *)(unaff_x19 + 0xa7);
      if (unaff_x19[9] == 0) goto LAB_00e443fc;
      fVar38 = *(float *)((long)unaff_x19 + 0x53c);
      FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*unaff_x27);
      if ((_fStack0000000000000070 == 0.0) || (unaff_x19[9] == 0)) goto LAB_00e443fc;
      fVar40 = *(float *)((long)_fStack0000000000000070 + 0x5c);
      FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*unaff_x27);
      if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
      fVar36 = *(float *)(unaff_x19 + 0xa8);
      fVar34 = *(float *)(unaff_x19 + 199) + fVar36;
      *(float *)((long)unaff_x19 + 0x634) =
           fVar32 + fVar38 + (fVar40 + -1.0) * *(float *)((long)_fStack0000000000000070 + 0x84);
      *(float *)(unaff_x19 + 199) = fVar34;
      puVar7 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
                    /* try { // try from 00e3c614 to 00f3c61f has its CatchHandler @ 00e3c6d0 */
      if (*(char *)((long)unaff_x25 + 0xd76) == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        *(undefined1 *)((long)unaff_x25 + 0xd76) = 1;
      }
      fVar38 = 1.0;
      fVar32 = 1.0;
      uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
      unaff_x23[0x10] = **(undefined8 **)(*(long *)puVar7 + 0xb8);
      *(undefined4 *)((long)unaff_x19 + 0x67c) = uVar31;
      if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
      uVar20 = *(undefined8 *)(unaff_x19[0xca] + 200);
                    /* try { // try from 00e3c664 to 00f3c66f has its CatchHandler @ 00e3c6bc */
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_02681b9c(uVar20,0,0);
      if ((uVar10 & 1) != 0) {
                    /* try { // try from 00e3c684 to 00f3c68f has its CatchHandler @ 00e3c6b4 */
        lVar14 = __start_il2cpp();
        if (lVar14 == 0) goto LAB_00e443fc;
                    /* try { // try from 00e3c690 to 00f3c6df has its CatchHandler @ 00e3c594 */
        if ((*(char *)(lVar14 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
          *(undefined1 *)(unaff_x19 + 0x2e) = 1;
          if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                    /* catch() { ... } // from try @ 00e3c684 with catch @ 00e3c6b4 */
          uVar31 = FUN_00e4ee40();
          *(undefined4 *)((long)unaff_x19 + 0x674) = uVar31;
                    /* catch() { ... } // from try @ 00e3c664 with catch @ 00e3c6bc */
          *(float *)(unaff_x19 + 0xcf) = fVar34;
          *(float *)((long)unaff_x19 + 0x67c) = fVar36;
        }
      }
      if (*(char *)((long)unaff_x25 + 0xd76) == '\0') {
                    /* catch() { ... } // from try @ 00e3c614 with catch @ 00e3c6d0 */
        thunk_FUN_00d48444(puVar7);
        *(undefined1 *)((long)unaff_x25 + 0xd76) = 1;
      }
      lVar15 = *(long *)puVar7;
      uVar31 = *(undefined4 *)(*(undefined8 **)(lVar15 + 0xb8) + 1);
      *unaff_x23 = **(undefined8 **)(lVar15 + 0xb8);
      *(undefined4 *)((long)unaff_x19 + 0x5fc) = uVar31;
      lVar14 = (*(long **)(lVar15 + 0xb8))[1];
      unaff_x19[0xc0] = **(long **)(lVar15 + 0xb8);
      *(int *)(unaff_x19 + 0xc1) = (int)lVar14;
      uVar31 = *(undefined4 *)(*(undefined8 **)(lVar15 + 0xb8) + 1);
      unaff_x23[3] = **(undefined8 **)(lVar15 + 0xb8);
      *(undefined4 *)((long)unaff_x19 + 0x614) = uVar31;
      lVar14 = (*(long **)(lVar15 + 0xb8))[1];
      unaff_x19[0xc3] = **(long **)(lVar15 + 0xb8);
      *(int *)(unaff_x19 + 0xc4) = (int)lVar14;
      uVar31 = *(undefined4 *)(*(undefined8 **)(lVar15 + 0xb8) + 1);
      unaff_x23[6] = **(undefined8 **)(lVar15 + 0xb8);
      *(undefined4 *)((long)unaff_x19 + 0x62c) = uVar31;
      if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
      uVar20 = *(undefined8 *)(unaff_x19[0xca] + 0xc0);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_02681b9c(uVar20,0,0);
      if ((uVar10 & 1) != 0) {
        if (*unaff_x26 == 0.0) goto LAB_00e443fc;
        if (*(float *)((long)*unaff_x26 + 0x84) != 0.0) {
          lVar14 = __start_il2cpp();
          if (lVar14 == 0) goto LAB_00e443fc;
          if ((*(char *)(lVar14 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
            lVar14 = unaff_x19[0xca];
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
            if ((lVar14 == 0) || (lVar15 = *(long *)(lVar14 + 0xc0), lVar15 == 0))
            goto LAB_00e443fc;
            uVar10 = unaff_d14;
            if (*(char *)(lVar15 + 0x18) != '\0') {
              fVar34 = *(float *)(lVar14 + 100);
              uVar10 = (ulong)(uint)(*(float *)((long)unaff_x19 + 0x2ec) - fVar34);
            }
            if (*(char *)(lVar15 + 0x19) != '\0') {
              uVar31 = FUN_00e4e9f4(uVar10);
              lVar14 = unaff_x19[0xca];
              *(undefined4 *)((long)unaff_x19 + 0x5f4) = uVar31;
              *(float *)(unaff_x19 + 0xbf) = fVar34;
              *(float *)((long)unaff_x19 + 0x5fc) = fVar36;
              if (lVar14 == 0) goto LAB_00e443fc;
            }
            if (*(long *)(lVar14 + 0xc0) == 0) goto LAB_00e443fc;
            if (*(char *)(*(long *)(lVar14 + 0xc0) + 0x28) != '\0') {
              fVar40 = (float)FUN_00e4e9f4(uVar10);
              *(float *)((long)unaff_x19 + 0x63c) = fVar40;
              *(float *)(unaff_x19 + 200) = fVar34;
              fVar35 = fVar36 + *(float *)(unaff_x19 + 0xc1);
              *(float *)((long)unaff_x19 + 0x644) = fVar36;
              unaff_x19[0xc0] =
                   CONCAT44(fVar34 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                            fVar40 + (float)unaff_x19[0xc0]);
              *(float *)(unaff_x19 + 0xc1) = fVar35;
              if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
              goto LAB_00e443fc;
              fVar40 = (float)FUN_00e4e9f4(uVar10);
              *(float *)((long)unaff_x19 + 0x63c) = fVar40;
              *(float *)(unaff_x19 + 200) = fVar35;
              *(float *)((long)unaff_x19 + 0x644) = fVar36;
              unaff_x23[3] = CONCAT44(fVar35 + (float)((ulong)unaff_x23[3] >> 0x20),
                                      fVar40 + (float)unaff_x23[3]);
              *(float *)((long)unaff_x19 + 0x614) = fVar36 + *(float *)((long)unaff_x19 + 0x614);
              if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
              goto LAB_00e443fc;
              fVar40 = (float)FUN_00e4e9f4(uVar10);
              *(float *)((long)unaff_x19 + 0x63c) = fVar40;
              *(float *)(unaff_x19 + 200) = fVar35;
              fVar34 = fVar36 + *(float *)(unaff_x19 + 0xc4);
              *(float *)((long)unaff_x19 + 0x644) = fVar36;
              unaff_x19[0xc3] =
                   CONCAT44(fVar35 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                            fVar40 + (float)unaff_x19[0xc3]);
              *(float *)(unaff_x19 + 0xc4) = fVar34;
              if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
              goto LAB_00e443fc;
              fVar40 = (float)FUN_00e4e9f4(uVar10);
              *(float *)((long)unaff_x19 + 0x63c) = fVar40;
              *(float *)(unaff_x19 + 200) = fVar34;
              *(float *)((long)unaff_x19 + 0x644) = fVar36;
              unaff_x23[6] = CONCAT44(fVar34 + (float)((ulong)unaff_x23[6] >> 0x20),
                                      fVar40 + (float)unaff_x23[6]);
              lVar14 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x62c) = fVar36 + *(float *)((long)unaff_x19 + 0x62c);
              if (lVar14 == 0) goto LAB_00e443fc;
            }
            if (*(long *)(lVar14 + 0xc0) == 0) goto LAB_00e443fc;
            if (*(char *)(*(long *)(lVar14 + 0xc0) + 0x50) != '\0') {
              FUN_00e5eda8(lVar14,0);
              fVar40 = (float)FUN_00e4eb50();
              lVar14 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x63c) = fVar40;
              *(float *)(unaff_x19 + 200) = fVar34;
              fVar35 = fVar36 + *(float *)(unaff_x19 + 0xc1);
              *(float *)((long)unaff_x19 + 0x644) = fVar36;
              unaff_x19[0xc0] =
                   CONCAT44(fVar34 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                            fVar40 + (float)unaff_x19[0xc0]);
              *(float *)(unaff_x19 + 0xc1) = fVar35;
              if ((lVar14 == 0) || (*(long *)(lVar14 + 0xc0) == 0)) goto LAB_00e443fc;
              FUN_00e5b838(lVar14,0);
              fVar40 = (float)FUN_00e4eb50();
              *(float *)((long)unaff_x19 + 0x63c) = fVar40;
              *(float *)(unaff_x19 + 200) = fVar35;
              *(float *)((long)unaff_x19 + 0x644) = fVar36;
              unaff_x23[3] = CONCAT44(fVar35 + (float)((ulong)unaff_x23[3] >> 0x20),
                                      fVar40 + (float)unaff_x23[3]);
              lVar14 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x614) = fVar36 + *(float *)((long)unaff_x19 + 0x614);
              if ((lVar14 == 0) || (*(long *)(lVar14 + 0xc0) == 0)) goto LAB_00e443fc;
              FUN_00e5eea4(lVar14,0);
              fVar40 = (float)FUN_00e4eb50();
              lVar14 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x63c) = fVar40;
              *(float *)(unaff_x19 + 200) = fVar35;
              fVar34 = fVar36 + *(float *)(unaff_x19 + 0xc4);
              *(float *)((long)unaff_x19 + 0x644) = fVar36;
              unaff_x19[0xc3] =
                   CONCAT44(fVar35 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                            fVar40 + (float)unaff_x19[0xc3]);
              *(float *)(unaff_x19 + 0xc4) = fVar34;
              if ((lVar14 == 0) || (*(long *)(lVar14 + 0xc0) == 0)) goto LAB_00e443fc;
              FUN_00e5b7d8(lVar14,0);
              fVar40 = (float)FUN_00e4eb50();
              *(float *)((long)unaff_x19 + 0x63c) = fVar40;
              *(float *)(unaff_x19 + 200) = fVar34;
              *(float *)((long)unaff_x19 + 0x644) = fVar36;
              unaff_x23[6] = CONCAT44(fVar34 + (float)((ulong)unaff_x23[6] >> 0x20),
                                      fVar40 + (float)unaff_x23[6]);
              lVar14 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x62c) = fVar36 + *(float *)((long)unaff_x19 + 0x62c);
              if (lVar14 == 0) goto LAB_00e443fc;
            }
            lVar15 = *(long *)(lVar14 + 0xc0);
            if (lVar15 == 0) goto LAB_00e443fc;
            if (*(char *)(lVar15 + 0x60) != '\0') {
              uVar27 = *(undefined8 *)(lVar15 + 0x68);
              uVar20 = FUN_00e5eda8(lVar14,0);
              fVar40 = (float)FUN_00e4ecc4(uVar20,lVar14,uVar27);
              lVar14 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x63c) = fVar40;
              *(float *)(unaff_x19 + 200) = fVar34;
              fVar35 = fVar36 + *(float *)(unaff_x19 + 0xc1);
              *(float *)((long)unaff_x19 + 0x644) = fVar36;
              unaff_x19[0xc0] =
                   CONCAT44(fVar34 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                            fVar40 + (float)unaff_x19[0xc0]);
              *(float *)(unaff_x19 + 0xc1) = fVar35;
              if ((lVar14 == 0) || (*(long *)(lVar14 + 0xc0) == 0)) goto LAB_00e443fc;
              uVar27 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x68);
              uVar20 = FUN_00e5b838(lVar14,0);
              fVar40 = (float)FUN_00e4ecc4(uVar20,lVar14,uVar27);
              *(float *)((long)unaff_x19 + 0x63c) = fVar40;
              *(float *)(unaff_x19 + 200) = fVar35;
              *(float *)((long)unaff_x19 + 0x644) = fVar36;
              unaff_x23[3] = CONCAT44(fVar35 + (float)((ulong)unaff_x23[3] >> 0x20),
                                      fVar40 + (float)unaff_x23[3]);
              lVar14 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x614) = fVar36 + *(float *)((long)unaff_x19 + 0x614);
              if ((lVar14 == 0) || (*(long *)(lVar14 + 0xc0) == 0)) goto LAB_00e443fc;
              uVar27 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x68);
              uVar20 = FUN_00e5eea4(lVar14,0);
              fVar40 = (float)FUN_00e4ecc4(uVar20,lVar14,uVar27);
              lVar14 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x63c) = fVar40;
              *(float *)(unaff_x19 + 200) = fVar35;
              fVar34 = fVar36 + *(float *)(unaff_x19 + 0xc4);
              *(float *)((long)unaff_x19 + 0x644) = fVar36;
              unaff_x19[0xc3] =
                   CONCAT44(fVar35 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                            fVar40 + (float)unaff_x19[0xc3]);
              *(float *)(unaff_x19 + 0xc4) = fVar34;
              if ((lVar14 == 0) || (*(long *)(lVar14 + 0xc0) == 0)) goto LAB_00e443fc;
              uVar27 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x68);
              uVar20 = FUN_00e5b7d8(lVar14,0);
              fVar40 = (float)FUN_00e4ecc4(uVar20,lVar14,uVar27);
              *(float *)((long)unaff_x19 + 0x63c) = fVar40;
              *(float *)(unaff_x19 + 200) = fVar34;
              *(float *)((long)unaff_x19 + 0x644) = fVar36;
              unaff_x23[6] = CONCAT44(fVar34 + (float)((ulong)unaff_x23[6] >> 0x20),
                                      fVar40 + (float)unaff_x23[6]);
              *(float *)((long)unaff_x19 + 0x62c) = fVar36 + *(float *)((long)unaff_x19 + 0x62c);
            }
          }
        }
      }
      uVar2 = (int)unaff_x21 << 2;
      if ((fStack000000000000004c <= 0.0) || ((int)unaff_x19[0x2a] == 2)) {
LAB_00e3cd74:
        if (*(char *)((long)unaff_x19 + 300) == '\0') {
          unaff_x23[0x1e] = unaff_x19[0x24];
        }
        else {
          if (*unaff_x26 == 0.0) goto LAB_00e443fc;
          uVar20 = *(undefined8 *)((long)*unaff_x26 + 0x80);
          unaff_x23[0x1e] =
               CONCAT44((float)((ulong)unaff_x19[0x24] >> 0x20) * (float)((ulong)uVar20 >> 0x20),
                        (float)unaff_x19[0x24] * (float)uVar20);
        }
        lVar14 = unaff_x19[0x5e];
        *(int *)((long)unaff_x19 + 0x6ec) = (int)unaff_x19[0x25];
        if ((lVar14 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
        fVar40 = (float)FUN_00e5eda8(*unaff_x26,0);
        if (*(uint *)(lVar14 + 0x18) <= uVar2) goto LAB_00e44400;
        fVar34 = *(float *)((long)unaff_x19 + 0x674);
        uVar17 = (ulong)(int)uVar2;
        *(float *)(lVar14 + uVar17 * 0xc + 0x20) =
             fVar40 + fVar34 + *(float *)(unaff_x19 + 0xc0) + *(float *)((long)unaff_x19 + 0x5f4) +
             *(float *)(unaff_x19 + 0xc6) + *(float *)((long)unaff_x19 + 0x6e4);
        lVar14 = unaff_x19[0x5e];
        if ((lVar14 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
        FUN_00e5eda8(*unaff_x26,0);
        if (*(uint *)(lVar14 + 0x18) <= uVar2) goto LAB_00e44400;
        fVar40 = *(float *)((long)unaff_x19 + 0x604);
        *(float *)(lVar14 + uVar17 * 0xc + 0x24) =
             fVar34 + *(float *)(unaff_x19 + 0xcf) + fVar40 + *(float *)(unaff_x19 + 0xbf) +
             *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
        lVar14 = unaff_x19[0x5e];
        if ((lVar14 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
        FUN_00e5eda8(*unaff_x26,0);
        if (*(uint *)(lVar14 + 0x18) <= uVar2) goto LAB_00e44400;
        *(float *)(lVar14 + uVar17 * 0xc + 0x28) =
             fVar40 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc1) +
             *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
             *(float *)((long)unaff_x19 + 0x6ec);
        lVar14 = unaff_x19[0x5e];
        if ((lVar14 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
        fVar40 = (float)FUN_00e5b838(*unaff_x26,0);
        uVar30 = uVar17 | 1;
        uVar24 = (uint)uVar30;
        if (*(uint *)(lVar14 + 0x18) <= uVar24) goto LAB_00e44400;
        fVar34 = *(float *)((long)unaff_x19 + 0x674);
        *(float *)(lVar14 + uVar30 * 0xc + 0x20) =
             fVar40 + fVar34 + *(float *)((long)unaff_x19 + 0x60c) +
             *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
             *(float *)((long)unaff_x19 + 0x6e4);
        lVar14 = unaff_x19[0x5e];
        if ((lVar14 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
        FUN_00e5b838(*unaff_x26,0);
        if (*(uint *)(lVar14 + 0x18) <= uVar24) goto LAB_00e44400;
        fVar40 = *(float *)(unaff_x19 + 0xc2);
        *(float *)(lVar14 + uVar30 * 0xc + 0x24) =
             fVar34 + *(float *)(unaff_x19 + 0xcf) + fVar40 + *(float *)(unaff_x19 + 0xbf) +
             *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
        lVar14 = unaff_x19[0x5e];
        if ((lVar14 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
        FUN_00e5b838(*unaff_x26,0);
        if (*(uint *)(lVar14 + 0x18) <= uVar24) goto LAB_00e44400;
        *(float *)(lVar14 + uVar30 * 0xc + 0x28) =
             fVar40 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)((long)unaff_x19 + 0x614) +
             *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
             *(float *)((long)unaff_x19 + 0x6ec);
        lVar14 = unaff_x19[0x5e];
        if ((lVar14 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
        fVar40 = (float)FUN_00e5eea4(*unaff_x26,0);
        uVar13 = uVar17 | 2;
        uVar26 = (uint)uVar13;
        if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
        fVar34 = *(float *)((long)unaff_x19 + 0x674);
        *(float *)(lVar14 + uVar13 * 0xc + 0x20) =
             fVar40 + fVar34 + *(float *)(unaff_x19 + 0xc3) + *(float *)((long)unaff_x19 + 0x5f4) +
             *(float *)(unaff_x19 + 0xc6) + *(float *)((long)unaff_x19 + 0x6e4);
        lVar14 = unaff_x19[0x5e];
        if ((lVar14 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
        FUN_00e5eea4(*unaff_x26,0);
        if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
        fVar40 = *(float *)((long)unaff_x19 + 0x61c);
        *(float *)(lVar14 + uVar13 * 0xc + 0x24) =
             fVar34 + *(float *)(unaff_x19 + 0xcf) + fVar40 + *(float *)(unaff_x19 + 0xbf) +
             *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
        lVar14 = unaff_x19[0x5e];
        if ((lVar14 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
        FUN_00e5eea4(*unaff_x26,0);
        if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
        *(float *)(lVar14 + uVar13 * 0xc + 0x28) =
             fVar40 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc4) +
             *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
             *(float *)((long)unaff_x19 + 0x6ec);
        lVar14 = unaff_x19[0x5e];
        if ((lVar14 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
        fVar40 = (float)FUN_00e5b7d8(*unaff_x26,0);
        uVar25 = uVar17 | 3;
        uVar28 = (uint)uVar25;
        if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
        fVar34 = *(float *)((long)unaff_x19 + 0x674);
        *(float *)(lVar14 + uVar25 * 0xc + 0x20) =
             fVar40 + fVar34 + *(float *)((long)unaff_x19 + 0x624) +
             *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
             *(float *)((long)unaff_x19 + 0x6e4);
        lVar14 = unaff_x19[0x5e];
        if ((lVar14 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
        FUN_00e5b7d8(*unaff_x26,0);
        if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
        uVar10 = (ulong)(uint)*(float *)(unaff_x19 + 0xc5);
        *(float *)(lVar14 + uVar25 * 0xc + 0x24) =
             fVar34 + *(float *)(unaff_x19 + 0xcf) + *(float *)(unaff_x19 + 0xc5) +
             *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634) +
             *(float *)(unaff_x19 + 0xdd);
        lVar14 = unaff_x19[0x5e];
        if ((lVar14 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
        FUN_00e5b7d8(*unaff_x26,0);
        if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
        fVar40 = *(float *)((long)unaff_x19 + 0x62c);
        *(float *)(lVar14 + uVar25 * 0xc + 0x28) =
             (float)uVar10 + *(float *)((long)unaff_x19 + 0x67c) + fVar40 +
             *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
             *(float *)((long)unaff_x19 + 0x6ec);
        lVar14 = unaff_x19[0xca];
        if (lVar14 == 0) goto LAB_00e443fc;
        lVar15 = *unaff_x28;
        if (*(char *)(lVar14 + 0x108) == '\0') {
          uVar31 = FUN_0272b9dc(lVar14 + 0x10,0);
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar2) goto LAB_00e44400;
          lVar15 = lVar15 + uVar17 * 8;
          *(undefined4 *)(lVar15 + 0x20) = uVar31;
          *(float *)(lVar15 + 0x24) = fVar40;
          if (*unaff_x26 == 0.0) goto LAB_00e443fc;
          lVar14 = *unaff_x28;
          uVar31 = thunk_FUN_0272b8d8((long)*unaff_x26 + 0x10,0);
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar24) goto LAB_00e44400;
          lVar14 = lVar14 + uVar30 * 8;
          *(undefined4 *)(lVar14 + 0x20) = uVar31;
          *(float *)(lVar14 + 0x24) = fVar40;
          if (*unaff_x26 == 0.0) goto LAB_00e443fc;
          lVar14 = *unaff_x28;
          uVar31 = FUN_0272b9c8((long)*unaff_x26 + 0x10,0);
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
          lVar14 = lVar14 + uVar13 * 8;
          *(undefined4 *)(lVar14 + 0x20) = uVar31;
          *(float *)(lVar14 + 0x24) = fVar40;
          if (*unaff_x26 == 0.0) goto LAB_00e443fc;
          lVar14 = *unaff_x28;
          uVar31 = FUN_0272b98c((long)*unaff_x26 + 0x10,0);
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
          lVar14 = lVar14 + uVar25 * 8;
          *(undefined4 *)(lVar14 + 0x20) = uVar31;
          *(float *)(lVar14 + 0x24) = fVar40;
          if (*unaff_x26 == 0.0) goto LAB_00e443fc;
          uVar31 = FUN_00e5ecc0(*unaff_x26,0);
          *(undefined4 *)(unaff_x19 + 0xd9) = uVar31;
          if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
          FUN_00e5ecc0(unaff_x19[0xca],0);
          *(float *)((long)unaff_x19 + 0x6cc) = fVar40;
          unaff_x23 = in_stack_00000040;
          unaff_x24 = in_stack_00000030;
        }
        else {
          if ((*(long *)(lVar14 + 0x100) == 0) ||
             (uVar31 = FUN_00e5dd14(unaff_d14,*(long *)(lVar14 + 0x100),
                                    *(undefined4 *)(lVar14 + 0x10c),0), lVar15 == 0))
          goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar2) goto LAB_00e44400;
          lVar15 = lVar15 + uVar17 * 8;
          *(undefined4 *)(lVar15 + 0x20) = uVar31;
          *(float *)(lVar15 + 0x24) = fVar40;
          dVar16 = *unaff_x26;
          if ((dVar16 == 0.0) || (*(long *)((long)dVar16 + 0x100) == 0)) goto LAB_00e443fc;
          lVar14 = *unaff_x28;
          uVar31 = FUN_00e5de6c(unaff_d14,*(long *)((long)dVar16 + 0x100),
                                *(undefined4 *)((long)dVar16 + 0x10c),0);
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar24) goto LAB_00e44400;
          lVar14 = lVar14 + uVar30 * 8;
          *(undefined4 *)(lVar14 + 0x20) = uVar31;
          *(float *)(lVar14 + 0x24) = fVar40;
          dVar16 = *unaff_x26;
          if ((dVar16 == 0.0) || (*(long *)((long)dVar16 + 0x100) == 0)) goto LAB_00e443fc;
          lVar14 = *unaff_x28;
          uVar31 = FUN_00e5dea4(unaff_d14,*(long *)((long)dVar16 + 0x100),
                                *(undefined4 *)((long)dVar16 + 0x10c),0);
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
          lVar14 = lVar14 + uVar13 * 8;
          *(undefined4 *)(lVar14 + 0x20) = uVar31;
          *(float *)(lVar14 + 0x24) = fVar40;
          dVar16 = *unaff_x26;
          if ((dVar16 == 0.0) || (*(long *)((long)dVar16 + 0x100) == 0)) goto LAB_00e443fc;
          lVar14 = *unaff_x28;
          uVar31 = thunk_FUN_00e5dd60(unaff_d14,*(long *)((long)dVar16 + 0x100),
                                      *(undefined4 *)((long)dVar16 + 0x10c),0);
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
          lVar14 = lVar14 + uVar25 * 8;
          *(undefined4 *)(lVar14 + 0x20) = uVar31;
          *(float *)(lVar14 + 0x24) = fVar40;
          dVar16 = *unaff_x26;
          if ((dVar16 == 0.0) || (*(long *)((long)dVar16 + 0x100) == 0)) goto LAB_00e443fc;
          uVar31 = FUN_00e5dedc(unaff_d14,*(long *)((long)dVar16 + 0x100),
                                *(undefined4 *)((long)dVar16 + 0x10c),0);
          lVar14 = unaff_x19[0xca];
          *(undefined4 *)(unaff_x19 + 0xd9) = uVar31;
          *(float *)((long)unaff_x19 + 0x6cc) = fVar40;
          if ((lVar14 == 0) || (lVar15 = *(long *)(lVar14 + 0x100), lVar15 == 0)) goto LAB_00e443fc;
          unaff_x23 = in_stack_00000040;
          unaff_x24 = in_stack_00000030;
          if (((1 < *(int *)(lVar15 + 0x28)) && (0.0 < *(float *)(lVar15 + 0x34))) &&
             (*(int *)(lVar14 + 0x10c) < 0)) {
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
          }
        }
      }
      else {
        dVar16 = *unaff_x26;
        if (dVar16 == 0.0) goto LAB_00e443fc;
        uVar10 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x634);
        if ((*(float *)((long)dVar16 + 0x48) + *(float *)((long)dVar16 + 0x84) +
            *(float *)((long)unaff_x19 + 0x634)) - *(float *)((long)unaff_x19 + 0x53c) <=
            DAT_028aa038 - *(float *)(unaff_x19 + 0x2f)) goto LAB_00e3cd74;
        lVar14 = *in_stack_00000038;
        if (*(char *)((long)unaff_x25 + 0xd76) == '\0') {
          thunk_FUN_00d48444(puVar7);
          *(undefined1 *)((long)unaff_x25 + 0xd76) = 1;
        }
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= uVar2) goto LAB_00e44400;
        uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
        uVar17 = (ulong)(int)uVar2;
        lVar14 = lVar14 + uVar17 * 0xc;
        *(undefined8 *)(lVar14 + 0x20) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
        *(undefined4 *)(lVar14 + 0x28) = uVar31;
        lVar14 = *in_stack_00000038;
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= (uint)(uVar17 | 1)) goto LAB_00e44400;
        lVar14 = lVar14 + (uVar17 | 1) * 0xc;
        uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
        *(undefined8 *)(lVar14 + 0x20) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
        *(undefined4 *)(lVar14 + 0x28) = uVar31;
        lVar14 = *in_stack_00000038;
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= (uint)(uVar17 | 2)) goto LAB_00e44400;
        lVar14 = lVar14 + (uVar17 | 2) * 0xc;
        uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
        *(undefined8 *)(lVar14 + 0x20) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
        *(undefined4 *)(lVar14 + 0x28) = uVar31;
        lVar14 = *in_stack_00000038;
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= (uint)(uVar17 | 3)) goto LAB_00e44400;
        lVar14 = lVar14 + (uVar17 | 3) * 0xc;
        uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
        *(undefined8 *)(lVar14 + 0x20) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
        *(undefined4 *)(lVar14 + 0x28) = uVar31;
      }
      if (*unaff_x26 == 0.0) goto LAB_00e443fc;
      uVar20 = *(undefined8 *)((long)*unaff_x26 + 0xf8);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_02681b9c(uVar20,0,0);
      if ((uVar17 & 1) == 0) {
        lVar14 = unaff_x19[0x10];
      }
      else {
        if ((*unaff_x26 == 0.0) || (lVar14 = *(long *)((long)*unaff_x26 + 0xf8), lVar14 == 0))
        goto LAB_00e443fc;
        lVar14 = *(long *)(lVar14 + 0x18);
      }
      if (((lVar14 == 0) || (lVar14 = FUN_0272bcf4(lVar14,0), lVar14 == 0)) ||
         (plVar11 = (long *)FUN_0267dac8(lVar14,0), plVar11 == (long *)0x0)) goto LAB_00e443fc;
      iVar9 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
      *(float *)(unaff_x19 + 0xda) = (float)iVar9;
      iVar9 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
      *(float *)((long)unaff_x19 + 0x6d4) = (float)iVar9;
      *(int *)(unaff_x19 + 0xdb) = (int)unaff_x19[0xd9];
      *(undefined4 *)((long)unaff_x19 + 0x6dc) = *(undefined4 *)((long)unaff_x19 + 0x6cc);
      puVar7 = UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
      _fStack0000000000000070 = (double)CONCAT44((float)iVar9,(int)unaff_x19[0xda]);
      in_stack_00000078 = unaff_x19[0xd9];
      FUN_0132149c(unaff_x19[0x62],uVar2,&stack0x00000070,
                   *(undefined8 *)
                    UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo);
      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      uVar17 = (ulong)(int)uVar2;
      uVar30 = uVar17 | 1;
      FUN_0132149c(unaff_x19[0x62],uVar2 | 1,&stack0x00000070,*(undefined8 *)puVar7);
      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      uVar13 = uVar17 | 2;
      FUN_0132149c(unaff_x19[0x62],uVar13,&stack0x00000070,*(undefined8 *)puVar7);
      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      uVar25 = uVar17 | 3;
      FUN_0132149c(unaff_x19[0x62],uVar2 | 3,&stack0x00000070,*(undefined8 *)puVar7);
      plVar29 = (long *)StringLiteral_9119;
      lVar14 = unaff_x19[0x60];
      if (lVar14 == 0) goto LAB_00e443fc;
      if ((*(uint *)(lVar14 + 0x18) <= uVar2) ||
         (uVar24 = (uint)uVar25, *(uint *)(lVar14 + 0x18) <= uVar24)) goto LAB_00e44400;
      lVar15 = unaff_x19[0xca];
      fVar40 = unaff_s8;
      if (*(float *)(lVar14 + 0x20 + uVar17 * 8) != *(float *)(lVar14 + 0x20 + uVar25 * 8)) {
        fVar40 = fVar38;
      }
      *(float *)(unaff_x19 + 0xda) = fVar40;
      if (lVar15 == 0) goto LAB_00e443fc;
      cVar6 = *(char *)(lVar15 + 0x108);
      fVar40 = fVar38;
      if (cVar6 != '\0' || 0x7fffffff < *(uint *)(lVar15 + 0x138)) {
        fVar40 = -1.0;
      }
      *(float *)((long)unaff_x19 + 0x6d4) = *(float *)(lVar15 + 0x84) * fVar40;
      if (cVar6 == '\0') {
        iVar39 = *(int *)(lVar15 + 0x160);
        iVar9 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
        uVar10 = 0x3e800000;
        *(float *)(unaff_x19 + 0xdb) = (float)iVar39 / ((float)iVar9 * 0.25);
        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
        iVar39 = *(int *)(unaff_x19[0xca] + 0x160);
        iVar9 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
        fVar34 = (float)iVar39;
        fVar40 = (float)iVar9;
        puVar21 = (undefined8 *)
                  UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
      }
      else {
        if (*(long *)(lVar15 + 0x100) == 0) goto LAB_00e443fc;
        fVar40 = (float)FUN_00e5df18(*(long *)(lVar15 + 0x100),0);
        puVar21 = (undefined8 *)
                  UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
        if (((*in_stack_00000060 == 0.0) ||
            (lVar14 = *(long *)((long)*in_stack_00000060 + 0x100), lVar14 == 0)) ||
           (plVar11 = *(long **)(lVar14 + 0x18), plVar11 == (long *)0x0)) goto LAB_00e443fc;
        iVar9 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
        if ((*in_stack_00000060 == 0.0) ||
           (lVar14 = *(long *)((long)*in_stack_00000060 + 0x100), lVar14 == 0)) goto LAB_00e443fc;
        fVar34 = 0.25;
        *(float *)(unaff_x19 + 0xdb) = fVar40 / (*(float *)(lVar14 + 0x40) * (float)iVar9 * 0.25);
        FUN_00e5df18(lVar14,0);
        if ((unaff_x19[0xca] == 0) ||
           ((lVar14 = *(long *)(unaff_x19[0xca] + 0x100), lVar14 == 0 ||
            (plVar11 = *(long **)(lVar14 + 0x18), plVar11 == (long *)0x0)))) goto LAB_00e443fc;
        iVar9 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
        if ((*in_stack_00000060 == 0.0) ||
           (lVar14 = *(long *)((long)*in_stack_00000060 + 0x100), lVar14 == 0)) goto LAB_00e443fc;
        fVar40 = *(float *)(lVar14 + 0x44) * (float)iVar9;
      }
      fVar36 = 0.25;
      fVar34 = fVar34 / (fVar40 * 0.25);
      *(float *)((long)unaff_x19 + 0x6dc) = fVar34;
      if (unaff_x19[99] == 0) goto LAB_00e443fc;
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      in_stack_00000078 = CONCAT44(fVar34,(int)unaff_x19[0xdb]);
      FUN_0132149c(unaff_x19[99],uVar2,&stack0x00000070,*puVar21);
      if (unaff_x19[99] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      FUN_0132149c(unaff_x19[99],uVar2 | 1,&stack0x00000070,*puVar21);
      if (unaff_x19[99] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      FUN_0132149c(unaff_x19[99],uVar2 | 2,&stack0x00000070,*puVar21);
      if (unaff_x19[99] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      FUN_0132149c(unaff_x19[99],uVar2 | 3,&stack0x00000070,*puVar21);
      if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
      uVar20 = *(undefined8 *)(unaff_x19[0xca] + 0xb0);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_02681b9c(uVar20,0,0);
      fVar34 = (float)uVar10;
      fVar40 = (float)unaff_d14;
      uVar28 = (uint)uVar30;
      uVar26 = (uint)uVar13;
      if ((uVar12 & 1) != 0) {
        if (unaff_x21 == in_stack_00000010) {
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          fVar35 = (float)FUN_00e5b838(*in_stack_00000060,0);
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          pfVar18 = *(float **)
                     (*(long *)
                       Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                     + 0xb8);
          fVar34 = fVar34 - pfVar18[2];
          uVar10 = (ulong)(uint)fVar34;
          if (fVar34 * fVar34 +
              (fVar35 - *pfVar18) * (fVar35 - *pfVar18) +
              (fVar36 - pfVar18[1]) * (fVar36 - pfVar18[1]) < DAT_028aa020) goto LAB_00e3dbd8;
        }
        if ((*in_stack_00000060 == 0.0) ||
           (lVar14 = *(long *)((long)*in_stack_00000060 + 0xb0), lVar14 == 0)) goto LAB_00e443fc;
        uVar20 = *(undefined8 *)(lVar14 + 0x38);
        if (DAT_03774d77 == '\0') {
          thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__)
          ;
          DAT_03774d77 = '\x01';
        }
        fVar34 = (float)uVar20 -
                 (float)**(undefined8 **)
                          (*(long *)
                            Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__ +
                          0xb8);
        fVar36 = (float)((ulong)uVar20 >> 0x20) -
                 (float)((ulong)**(undefined8 **)
                                  (*(long *)
                                    Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                  + 0xb8) >> 0x20);
        if (DAT_028aa020 <= fVar34 * fVar34 + fVar36 * fVar36) {
          *(undefined1 *)(unaff_x19 + 0x2e) = 1;
        }
        dVar16 = *in_stack_00000060;
        if ((dVar16 == 0.0) || (lVar14 = *(long *)((long)dVar16 + 0xb0), lVar14 == 0))
        goto LAB_00e443fc;
        fVar36 = fVar40 * *(float *)(lVar14 + 0x38);
        *(float *)(unaff_x19 + 0xc9) = fVar36;
        fVar34 = fVar40 * *(float *)(lVar14 + 0x3c);
        *(float *)((long)unaff_x19 + 0x64c) = fVar34;
        if (*(char *)(lVar14 + 0x25) != '\0') {
          fVar32 = 1.0 / *(float *)((long)dVar16 + 0x84);
        }
        lVar14 = *in_stack_00000038;
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= uVar2) goto LAB_00e44400;
        lVar15 = lVar14 + uVar17 * 0xc;
        fVar35 = *(float *)(lVar15 + 0x20);
        uVar20 = *(undefined8 *)(lVar15 + 0x24);
        *(float *)(unaff_x19 + 0xcd) = fVar35;
        unaff_x23[0xf] = uVar20;
        *(float *)(unaff_x19 + 0xd0) = fVar35;
        fVar37 = (float)uVar20;
        *(float *)((long)unaff_x19 + 0x684) = fVar37;
        if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
        lVar15 = lVar14 + uVar30 * 0xc;
        uVar31 = *(undefined4 *)(lVar15 + 0x20);
        uVar20 = *(undefined8 *)(lVar15 + 0x24);
        *(undefined4 *)(unaff_x19 + 0xcd) = uVar31;
        unaff_x23[0xf] = uVar20;
        *(undefined4 *)(unaff_x19 + 0xd2) = uVar31;
        *(int *)((long)unaff_x19 + 0x694) = (int)uVar20;
        if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
        lVar15 = lVar14 + uVar13 * 0xc;
        uVar31 = *(undefined4 *)(lVar15 + 0x20);
        uVar20 = *(undefined8 *)(lVar15 + 0x24);
        *(undefined4 *)(unaff_x19 + 0xcd) = uVar31;
        unaff_x23[0xf] = uVar20;
        *(undefined4 *)(unaff_x19 + 0xd4) = uVar31;
        *(int *)((long)unaff_x19 + 0x6a4) = (int)uVar20;
        if (*(uint *)(lVar14 + 0x18) <= uVar24) goto LAB_00e44400;
        lVar14 = lVar14 + uVar25 * 0xc;
        uVar31 = *(undefined4 *)(lVar14 + 0x20);
        uVar20 = *(undefined8 *)(lVar14 + 0x24);
        *(undefined4 *)(unaff_x19 + 0xcd) = uVar31;
        unaff_x23[0xf] = uVar20;
        *(undefined4 *)(unaff_x19 + 0xd6) = uVar31;
        *(int *)((long)unaff_x19 + 0x6b4) = (int)uVar20;
        lVar14 = *(long *)((long)dVar16 + 0xb0);
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(char *)(lVar14 + 0x24) == '\0') {
          lVar15 = *in_stack_00000028;
          if (lVar15 == 0) goto LAB_00e443fc;
          uVar5 = *(uint *)(lVar15 + 0x18);
          if (uVar5 <= uVar2) goto LAB_00e44400;
          lVar22 = lVar15 + uVar17 * 8;
          *(float *)(lVar22 + 0x20) = (fVar36 + fVar32 * fVar35) - *(float *)(lVar14 + 0x30);
          *(float *)(lVar22 + 0x24) = (fVar34 + fVar32 * fVar37) - *(float *)(lVar14 + 0x34);
          if (((uVar5 <= uVar28) ||
              (*(ulong *)(lVar15 + uVar30 * 8 + 0x20) =
                    CONCAT44(((float)((ulong)unaff_x19[0xd2] >> 0x20) * fVar32 +
                             (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                             (float)((ulong)*(undefined8 *)(lVar14 + 0x30) >> 0x20),
                             ((float)unaff_x19[0xd2] * fVar32 + (float)unaff_x19[0xc9]) -
                             (float)*(undefined8 *)(lVar14 + 0x30)), uVar5 <= uVar26)) ||
             (*(ulong *)(lVar15 + uVar13 * 8 + 0x20) =
                   CONCAT44((fVar32 * (float)((ulong)unaff_x19[0xd4] >> 0x20) +
                            (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                            (float)((ulong)*(undefined8 *)(lVar14 + 0x30) >> 0x20),
                            (fVar32 * (float)unaff_x19[0xd4] + (float)unaff_x19[0xc9]) -
                            (float)*(undefined8 *)(lVar14 + 0x30)), uVar5 <= uVar24))
          goto LAB_00e44400;
          uVar10 = unaff_x19[0xc9];
          *(ulong *)(lVar15 + uVar25 * 8 + 0x20) =
               CONCAT44((fVar32 * (float)((ulong)unaff_x19[0xd6] >> 0x20) + (float)(uVar10 >> 0x20))
                        - (float)((ulong)*(undefined8 *)(lVar14 + 0x30) >> 0x20),
                        (fVar32 * (float)unaff_x19[0xd6] + (float)uVar10) -
                        (float)*(undefined8 *)(lVar14 + 0x30));
        }
        else {
          fVar3 = *(float *)((long)dVar16 + 0x44);
          *(float *)(unaff_x19 + 0xd8) = fVar3;
          fVar4 = *(float *)((long)dVar16 + 0x48);
          lVar15 = unaff_x19[0x61];
          *(float *)((long)unaff_x19 + 0x6c4) = fVar4;
          if (lVar15 == 0) goto LAB_00e443fc;
          uVar5 = *(uint *)(lVar15 + 0x18);
          if (uVar5 <= uVar2) goto LAB_00e44400;
          lVar22 = lVar15 + uVar17 * 8;
          *(float *)(lVar22 + 0x20) =
               (fVar36 + fVar32 * (fVar35 - fVar3)) - *(float *)(lVar14 + 0x30);
          *(float *)(lVar22 + 0x24) =
               (fVar34 + fVar32 * (fVar37 - fVar4)) - *(float *)(lVar14 + 0x34);
          if (((uVar5 <= uVar28) ||
              (*(ulong *)(lVar15 + uVar30 * 8 + 0x20) =
                    CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                             ((float)((ulong)unaff_x19[0xd2] >> 0x20) -
                             (float)((ulong)unaff_x19[0xd8] >> 0x20)) * fVar32) -
                             (float)((ulong)*(undefined8 *)(lVar14 + 0x30) >> 0x20),
                             ((float)unaff_x19[0xc9] +
                             ((float)unaff_x19[0xd2] - (float)unaff_x19[0xd8]) * fVar32) -
                             (float)*(undefined8 *)(lVar14 + 0x30)), uVar5 <= uVar26)) ||
             (*(ulong *)(lVar15 + uVar13 * 8 + 0x20) =
                   CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                            fVar32 * ((float)((ulong)unaff_x19[0xd4] >> 0x20) -
                                     (float)((ulong)unaff_x19[0xd8] >> 0x20))) -
                            (float)((ulong)*(undefined8 *)(lVar14 + 0x30) >> 0x20),
                            ((float)unaff_x19[0xc9] +
                            fVar32 * ((float)unaff_x19[0xd4] - (float)unaff_x19[0xd8])) -
                            (float)*(undefined8 *)(lVar14 + 0x30)), uVar5 <= uVar24))
          goto LAB_00e44400;
          uVar10 = unaff_x19[0xd8];
          *(ulong *)(lVar15 + uVar25 * 8 + 0x20) =
               CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                        fVar32 * ((float)((ulong)unaff_x19[0xd6] >> 0x20) - (float)(uVar10 >> 0x20))
                        ) - (float)((ulong)*(undefined8 *)(lVar14 + 0x30) >> 0x20),
                        ((float)unaff_x19[0xc9] + fVar32 * ((float)unaff_x19[0xd6] - (float)uVar10))
                        - (float)*(undefined8 *)(lVar14 + 0x30));
        }
      }
LAB_00e3dbd8:
      dVar16 = *in_stack_00000060;
      if (dVar16 == 0.0) goto LAB_00e443fc;
      if (*(char *)((long)dVar16 + 0x108) != '\0') {
        if (*(long *)((long)dVar16 + 0x100) == 0) goto LAB_00e443fc;
        if (*(char *)(*(long *)((long)dVar16 + 0x100) + 0x20) == '\0') {
          lVar14 = *unaff_x28;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar2) goto LAB_00e44400;
          lVar15 = *in_stack_00000028;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar2) goto LAB_00e44400;
          *(undefined8 *)(lVar15 + uVar17 * 8 + 0x20) = *(undefined8 *)(lVar14 + uVar17 * 8 + 0x20);
          lVar14 = *unaff_x28;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
          lVar15 = *in_stack_00000028;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_00e44400;
          *(undefined8 *)(lVar15 + (long)(int)uVar28 * 8 + 0x20) =
               *(undefined8 *)(lVar14 + (long)(int)uVar28 * 8 + 0x20);
          lVar14 = *unaff_x28;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
          lVar15 = *in_stack_00000028;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
          *(undefined8 *)(lVar15 + (long)(int)uVar26 * 8 + 0x20) =
               *(undefined8 *)(lVar14 + (long)(int)uVar26 * 8 + 0x20);
          lVar14 = *unaff_x28;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar24) goto LAB_00e44400;
          lVar15 = *in_stack_00000028;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_00e44400;
          *(undefined8 *)(lVar15 + uVar25 * 8 + 0x20) = *(undefined8 *)(lVar14 + uVar25 * 8 + 0x20);
          dVar16 = *in_stack_00000060;
          if (dVar16 == 0.0) goto LAB_00e443fc;
        }
      }
      dVar33 = DAT_028aa048;
      if (*(char *)((long)dVar16 + 0x108) == '\0') {
LAB_00e3dd34:
        uVar20 = *(undefined8 *)((long)dVar16 + 0xa8);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar30 = FUN_02681b9c(uVar20,0,0);
        dVar16 = *in_stack_00000060;
        if (dVar16 == 0.0) goto LAB_00e443fc;
        if ((uVar30 & 1) == 0) {
          uVar20 = *(undefined8 *)((long)dVar16 + 0xb0);
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar30 = FUN_02681b9c(uVar20,0,0);
          dVar16 = DAT_028aa048;
          if ((uVar30 & 1) == 0) {
            if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
            uVar20 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar10 = FUN_02681b9c(uVar20,0,0);
            lVar14 = *unaff_x24;
            if ((uVar10 & 1) == 0) {
              fVar38 = *(float *)((long)unaff_x19 + 0x8c);
              fVar40 = *(float *)(unaff_x19 + 0x12);
              fVar36 = *(float *)((long)unaff_x19 + 0x94);
              fVar34 = *(float *)(unaff_x19 + 0x13);
              fVar32 = fVar38;
              if (1.0 < fVar38) {
                fVar32 = 1.0;
              }
              fVar32 = fVar32 * 255.0;
              if (fVar38 < 0.0) {
                fVar32 = unaff_s8;
              }
              dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar16 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar32 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + -0.5);
              }
              fVar38 = fVar40;
              if (1.0 < fVar40) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar40 < 0.0) {
                fVar38 = unaff_s8;
              }
              dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar16 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3fd48;
                }
                fVar40 = (float)(int)(fVar38 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fd48:
                fVar40 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar40 = fVar38;
                }
              }
              else {
                fVar40 = (float)(int)(fVar38 + -0.5);
              }
              fVar38 = fVar36;
              if (1.0 < fVar36) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar36 < 0.0) {
                fVar38 = unaff_s8;
              }
              dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar16 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + -0.5);
              }
              fVar36 = fVar34;
              if (1.0 < fVar34) {
                fVar36 = 1.0;
              }
              fVar36 = fVar36 * 255.0;
              if (fVar34 < 0.0) {
                fVar36 = unaff_s8;
              }
              dVar16 = modf((double)fVar36,(double *)&stack0x00000070);
              if (0.0 <= fVar36) {
                if (dVar16 == 0.5) {
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar36 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar34 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar34 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar34 = (float)(int)(fVar36 + -0.5);
              }
              if (lVar14 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar14 + 0x18) <= uVar2) goto LAB_00e44400;
              *(uint *)(lVar14 + uVar17 * 4 + 0x20) =
                   (int)fVar32 & 0xffU | ((int)fVar40 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10
                   | (int)fVar34 << 0x18;
              fVar38 = *(float *)(unaff_x19 + 0x12);
              lVar14 = unaff_x19[0x5f];
              fVar34 = *(float *)((long)unaff_x19 + 0x94);
              fVar40 = *(float *)(unaff_x19 + 0x13);
              fVar32 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
              if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                fVar32 = unaff_s8;
              }
              dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar16 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar32 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + -0.5);
              }
              fVar36 = fVar38;
              if (1.0 < fVar38) {
                fVar36 = 1.0;
              }
              fVar36 = fVar36 * 255.0;
              if (fVar38 < 0.0) {
                fVar36 = unaff_s8;
              }
              dVar16 = modf((double)fVar36,(double *)&stack0x00000070);
              if (0.0 <= fVar36) {
                if (dVar16 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e40610;
                }
                fVar36 = (float)(int)(fVar36 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40610:
                fVar36 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar36 = fVar38;
                }
              }
              else {
                fVar36 = (float)(int)(fVar36 + -0.5);
              }
              fVar38 = fVar34;
              if (1.0 < fVar34) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar34 < 0.0) {
                fVar38 = unaff_s8;
              }
              dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar16 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + -0.5);
              }
              fVar34 = fVar40;
              if (1.0 < fVar40) {
                fVar34 = 1.0;
              }
              fVar34 = fVar34 * 255.0;
              if (fVar40 < 0.0) {
                fVar34 = unaff_s8;
              }
              dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
              if (0.0 <= fVar34) {
                if (dVar16 == 0.5) {
                  fVar40 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar40 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar40 = (float)(int)(fVar34 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar40 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar40 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar40 = (float)(int)(fVar34 + -0.5);
              }
              if (lVar14 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
              *(uint *)(lVar14 + (long)(int)uVar28 * 4 + 0x20) =
                   (int)fVar32 & 0xffU | ((int)fVar36 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10
                   | (int)fVar40 << 0x18;
              fVar38 = *(float *)(unaff_x19 + 0x12);
              lVar14 = unaff_x19[0x5f];
              fVar34 = *(float *)((long)unaff_x19 + 0x94);
              fVar40 = *(float *)(unaff_x19 + 0x13);
              fVar32 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
              if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                fVar32 = unaff_s8;
              }
              dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar16 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar32 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + -0.5);
              }
              fVar36 = fVar38;
              if (1.0 < fVar38) {
                fVar36 = 1.0;
              }
              fVar36 = fVar36 * 255.0;
              if (fVar38 < 0.0) {
                fVar36 = unaff_s8;
              }
              dVar16 = modf((double)fVar36,(double *)&stack0x00000070);
              if (0.0 <= fVar36) {
                if (dVar16 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e40e20;
                }
                fVar36 = (float)(int)(fVar36 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40e20:
                fVar36 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar36 = fVar38;
                }
              }
              else {
                fVar36 = (float)(int)(fVar36 + -0.5);
              }
              fVar38 = fVar34;
              if (1.0 < fVar34) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar34 < 0.0) {
                fVar38 = unaff_s8;
              }
              dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar16 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + -0.5);
              }
              fVar34 = fVar40;
              if (1.0 < fVar40) {
                fVar34 = 1.0;
              }
              fVar34 = fVar34 * 255.0;
              if (fVar40 < 0.0) {
                fVar34 = unaff_s8;
              }
              dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
              if (0.0 <= fVar34) {
                if (dVar16 == 0.5) {
                  fVar40 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar40 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar40 = (float)(int)(fVar34 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar40 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar40 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar40 = (float)(int)(fVar34 + -0.5);
              }
              if (lVar14 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
              *(uint *)(lVar14 + (long)(int)uVar26 * 4 + 0x20) =
                   (int)fVar32 & 0xffU | ((int)fVar36 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10
                   | (int)fVar40 << 0x18;
              fVar32 = *(float *)((long)unaff_x19 + 0x8c);
              fVar38 = *(float *)(unaff_x19 + 0x12);
              lVar14 = unaff_x19[0x5f];
              fVar34 = *(float *)((long)unaff_x19 + 0x94);
              fVar40 = *(float *)(unaff_x19 + 0x13);
            }
            else {
              if ((*in_stack_00000060 == 0.0) ||
                 (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0))
              goto LAB_00e443fc;
              fVar38 = *(float *)(lVar15 + 0x18);
              fVar40 = *(float *)(lVar15 + 0x1c);
              fVar36 = *(float *)(lVar15 + 0x20);
              fVar34 = *(float *)(lVar15 + 0x24);
              fVar32 = fVar38;
              if (1.0 < fVar38) {
                fVar32 = 1.0;
              }
              fVar32 = fVar32 * 255.0;
              if (fVar38 < 0.0) {
                fVar32 = unaff_s8;
              }
              dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar16 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar32 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + -0.5);
              }
              fVar38 = fVar40;
              if (1.0 < fVar40) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar40 < 0.0) {
                fVar38 = unaff_s8;
              }
              dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar16 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3fcc4;
                }
                fVar40 = (float)(int)(fVar38 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fcc4:
                fVar40 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar40 = fVar38;
                }
              }
              else {
                fVar40 = (float)(int)(fVar38 + -0.5);
              }
              fVar38 = fVar36;
              if (1.0 < fVar36) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar36 < 0.0) {
                fVar38 = unaff_s8;
              }
              dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar16 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + -0.5);
              }
              fVar36 = fVar34;
              if (1.0 < fVar34) {
                fVar36 = 1.0;
              }
              fVar36 = fVar36 * 255.0;
              if (fVar34 < 0.0) {
                fVar36 = unaff_s8;
              }
              dVar16 = modf((double)fVar36,(double *)&stack0x00000070);
              if (0.0 <= fVar36) {
                if (dVar16 == 0.5) {
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar36 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar34 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar34 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar34 = (float)(int)(fVar36 + -0.5);
              }
              if (lVar14 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar14 + 0x18) <= uVar2) goto LAB_00e44400;
              *(uint *)(lVar14 + uVar17 * 4 + 0x20) =
                   (int)fVar32 & 0xffU | ((int)fVar40 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10
                   | (int)fVar34 << 0x18;
              if ((*in_stack_00000060 == 0.0) ||
                 (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0))
              goto LAB_00e443fc;
              fVar38 = *(float *)(lVar14 + 0x1c);
              lVar15 = *unaff_x24;
              fVar34 = *(float *)(lVar14 + 0x20);
              fVar40 = *(float *)(lVar14 + 0x24);
              fVar32 = *(float *)(lVar14 + 0x18) * 255.0;
              if (*(float *)(lVar14 + 0x18) < 0.0) {
                fVar32 = unaff_s8;
              }
              dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar16 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar32 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + -0.5);
              }
              fVar36 = fVar38;
              if (1.0 < fVar38) {
                fVar36 = 1.0;
              }
              fVar36 = fVar36 * 255.0;
              if (fVar38 < 0.0) {
                fVar36 = unaff_s8;
              }
              dVar16 = modf((double)fVar36,(double *)&stack0x00000070);
              if (0.0 <= fVar36) {
                if (dVar16 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e4057c;
                }
                fVar36 = (float)(int)(fVar36 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4057c:
                fVar36 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar36 = fVar38;
                }
              }
              else {
                fVar36 = (float)(int)(fVar36 + -0.5);
              }
              fVar38 = fVar34;
              if (1.0 < fVar34) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar34 < 0.0) {
                fVar38 = unaff_s8;
              }
              dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar16 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + -0.5);
              }
              fVar34 = fVar40;
              if (1.0 < fVar40) {
                fVar34 = 1.0;
              }
              fVar34 = fVar34 * 255.0;
              if (fVar40 < 0.0) {
                fVar34 = unaff_s8;
              }
              dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
              if (0.0 <= fVar34) {
                if (dVar16 == 0.5) {
                  fVar40 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar40 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar40 = (float)(int)(fVar34 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar40 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar40 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar40 = (float)(int)(fVar34 + -0.5);
              }
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_00e44400;
              *(uint *)(lVar15 + (long)(int)uVar28 * 4 + 0x20) =
                   (int)fVar32 & 0xffU | ((int)fVar36 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10
                   | (int)fVar40 << 0x18;
              if ((*in_stack_00000060 == 0.0) ||
                 (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0))
              goto LAB_00e443fc;
              fVar38 = *(float *)(lVar14 + 0x1c);
              lVar15 = *unaff_x24;
              fVar34 = *(float *)(lVar14 + 0x20);
              fVar40 = *(float *)(lVar14 + 0x24);
              fVar32 = *(float *)(lVar14 + 0x18) * 255.0;
              if (*(float *)(lVar14 + 0x18) < 0.0) {
                fVar32 = unaff_s8;
              }
              dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar16 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar32 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + -0.5);
              }
              fVar36 = fVar38;
              if (1.0 < fVar38) {
                fVar36 = 1.0;
              }
              fVar36 = fVar36 * 255.0;
              if (fVar38 < 0.0) {
                fVar36 = unaff_s8;
              }
              dVar16 = modf((double)fVar36,(double *)&stack0x00000070);
              if (0.0 <= fVar36) {
                if (dVar16 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e40d8c;
                }
                fVar36 = (float)(int)(fVar36 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40d8c:
                fVar36 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar36 = fVar38;
                }
              }
              else {
                fVar36 = (float)(int)(fVar36 + -0.5);
              }
              fVar38 = fVar34;
              if (1.0 < fVar34) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar34 < 0.0) {
                fVar38 = unaff_s8;
              }
              dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar16 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + -0.5);
              }
              fVar34 = fVar40;
              if (1.0 < fVar40) {
                fVar34 = 1.0;
              }
              fVar34 = fVar34 * 255.0;
              if (fVar40 < 0.0) {
                fVar34 = unaff_s8;
              }
              dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
              if (0.0 <= fVar34) {
                if (dVar16 == 0.5) {
                  fVar40 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar40 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar40 = (float)(int)(fVar34 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar40 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar40 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar40 = (float)(int)(fVar34 + -0.5);
              }
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
              *(uint *)(lVar15 + (long)(int)uVar26 * 4 + 0x20) =
                   (int)fVar32 & 0xffU | ((int)fVar36 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10
                   | (int)fVar40 << 0x18;
              if ((*in_stack_00000060 == 0.0) ||
                 (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0))
              goto LAB_00e443fc;
              fVar32 = *(float *)(lVar15 + 0x18);
              fVar38 = *(float *)(lVar15 + 0x1c);
              lVar14 = *unaff_x24;
              fVar34 = *(float *)(lVar15 + 0x20);
              fVar40 = *(float *)(lVar15 + 0x24);
            }
            fVar36 = fVar32 * 255.0;
            if (fVar32 < 0.0) {
              fVar36 = unaff_s8;
            }
            dVar16 = modf((double)fVar36,(double *)&stack0x00000070);
            if (0.0 <= fVar36) {
              if (dVar16 == 0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar36 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar32 = (float)(int)(fVar36 + -0.5);
            }
            fVar36 = fVar38;
            if (1.0 < fVar38) {
              fVar36 = 1.0;
            }
            fVar36 = fVar36 * 255.0;
            if (fVar38 < 0.0) {
              fVar36 = unaff_s8;
            }
            dVar16 = modf((double)fVar36,(double *)&stack0x00000070);
            if (0.0 <= fVar36) {
              if (dVar16 == 0.5) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e412dc;
              }
              fVar36 = (float)(int)(fVar36 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e412dc:
              fVar36 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar36 = fVar38;
              }
            }
            else {
              fVar36 = (float)(int)(fVar36 + -0.5);
            }
            fVar38 = fVar34;
            if (1.0 < fVar34) {
              fVar38 = 1.0;
            }
            fVar38 = fVar38 * 255.0;
            if (fVar34 < 0.0) {
              fVar38 = unaff_s8;
            }
            dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar16 == 0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            uVar10 = 0x3f800000;
            fVar34 = fVar40;
            if (1.0 < fVar40) {
              fVar34 = 1.0;
            }
            fVar34 = fVar34 * 255.0;
            if (fVar40 < 0.0) {
              fVar34 = unaff_s8;
            }
            dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
            if (0.0 <= fVar34) {
              if (dVar16 == 0.5) {
                fVar40 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar40 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar40 = (float)(int)(fVar34 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar40 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar40 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar40 = (float)(int)(fVar34 + -0.5);
            }
            if (lVar14 != 0) {
              if (uVar24 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar14 + uVar25 * 4 + 0x20) =
                     (int)fVar32 & 0xffU | ((int)fVar36 & 0xffU) << 8 |
                     ((int)fVar38 & 0xffU) << 0x10 | (int)fVar40 << 0x18;
                goto LAB_00e43400;
              }
              goto LAB_00e44400;
            }
            goto LAB_00e443fc;
          }
          lVar14 = *unaff_x24;
          dVar33 = modf(DAT_028aa048,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar32 = 255.0;
          }
          dVar33 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar38 = 255.0;
          }
          dVar33 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar40 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar40 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar40 = 255.0;
          }
          dVar33 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar34 = 255.0;
          }
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar2) goto LAB_00e44400;
          *(uint *)(lVar14 + uVar17 * 4 + 0x20) =
               (int)fVar32 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar40 & 0xffU) << 0x10 |
               (int)fVar34 << 0x18;
          lVar14 = *unaff_x24;
          dVar33 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar32 = 255.0;
          }
          dVar33 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar38 = 255.0;
          }
          dVar33 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar40 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar40 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar40 = 255.0;
          }
          dVar33 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar34 = 255.0;
          }
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
          *(uint *)(lVar14 + (long)(int)uVar28 * 4 + 0x20) =
               (int)fVar32 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar40 & 0xffU) << 0x10 |
               (int)fVar34 << 0x18;
          lVar14 = *unaff_x24;
          dVar33 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar32 = 255.0;
          }
          dVar33 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar38 = 255.0;
          }
          dVar33 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar40 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar40 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar40 = 255.0;
          }
          dVar33 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar34 = 255.0;
          }
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
          *(uint *)(lVar14 + (long)(int)uVar26 * 4 + 0x20) =
               (int)fVar32 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar40 & 0xffU) << 0x10 |
               (int)fVar34 << 0x18;
          lVar14 = *unaff_x24;
          dVar33 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar32 = 255.0;
          }
          dVar33 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar38 = 255.0;
          }
          dVar33 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar40 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar40 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar40 = 255.0;
          }
          dVar16 = modf(dVar16,(double *)&stack0x00000070);
          if (dVar16 == 0.5) {
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar34 = 255.0;
          }
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar24) goto LAB_00e44400;
          *(uint *)(lVar14 + uVar25 * 4 + 0x20) =
               (int)fVar32 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar40 & 0xffU) << 0x10 |
               (int)fVar34 << 0x18;
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          uVar20 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar30 = FUN_02681b9c(uVar20,0,0);
          if ((uVar30 & 1) == 0) goto LAB_00e43400;
          lVar14 = *unaff_x24;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar2) goto LAB_00e44400;
          puVar23 = (uint *)(lVar14 + uVar17 * 4 + 0x20);
          uVar5 = *puVar23;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0)) goto LAB_00e443fc;
          fVar38 = ((float)(uVar5 & 0xff) / 255.0) * *(float *)(lVar14 + 0x18);
          fVar36 = ((float)(uVar5 >> 8 & 0xff) / 255.0) * *(float *)(lVar14 + 0x1c);
          fVar34 = *(float *)(lVar14 + 0x20);
          fVar40 = *(float *)(lVar14 + 0x24);
          fVar32 = fVar38 * 255.0;
          if (fVar38 < 0.0) {
            fVar32 = unaff_s8;
          }
          dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar16 == 0.5) {
              fVar32 = 1.0;
              goto LAB_00e3ede4;
            }
            fVar38 = (float)(int)(fVar32 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar32 = -1.0;
LAB_00e3ede4:
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + fVar32;
            }
          }
          else {
            fVar38 = (float)(int)(fVar32 + -0.5);
          }
          fVar34 = ((float)(uVar5 >> 0x10 & 0xff) / 255.0) * fVar34;
          fVar32 = fVar36 * 255.0;
          if (fVar36 < 0.0) {
            fVar32 = unaff_s8;
          }
          dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar16 == 0.5) {
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar32 = (float)(int)(fVar32 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar32 = (float)(int)(fVar32 + -0.5);
          }
          fVar36 = fVar34;
          if (1.0 < fVar34) {
            fVar36 = 1.0;
          }
          fVar40 = ((float)(uVar5 >> 0x18) / 255.0) * fVar40;
          fVar36 = fVar36 * 255.0;
          if (fVar34 < 0.0) {
            fVar36 = unaff_s8;
          }
          dVar16 = modf((double)fVar36,(double *)&stack0x00000070);
          if (0.0 <= fVar36) {
            if (dVar16 == 0.5) {
              fVar34 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e3ffb0;
            }
            fVar36 = (float)(int)(fVar36 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ffb0:
            fVar36 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar36 = fVar34;
            }
          }
          else {
            fVar36 = (float)(int)(fVar36 + -0.5);
          }
          fVar34 = fVar40;
          if (1.0 < fVar40) {
            fVar34 = 1.0;
          }
          fVar34 = fVar34 * 255.0;
          if (fVar40 < 0.0) {
            fVar34 = unaff_s8;
          }
          dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
          if (0.0 <= fVar34) {
            if (dVar16 == 0.5) {
              fVar40 = 1.0;
              goto LAB_00e40174;
            }
            fVar34 = (float)(int)(fVar34 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar40 = -1.0;
LAB_00e40174:
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = (float)_fStack0000000000000070 + fVar40;
            }
          }
          else {
            fVar34 = (float)(int)(fVar34 + -0.5);
          }
          *puVar23 = (int)fVar38 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                     ((int)fVar36 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
          lVar14 = *unaff_x24;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
          puVar23 = (uint *)(lVar14 + (long)(int)uVar28 * 4 + 0x20);
          uVar5 = *puVar23;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0)) goto LAB_00e443fc;
          fVar38 = ((float)(uVar5 & 0xff) / 255.0) * *(float *)(lVar14 + 0x18);
          fVar36 = ((float)(uVar5 >> 8 & 0xff) / 255.0) * *(float *)(lVar14 + 0x1c);
          fVar34 = *(float *)(lVar14 + 0x20);
          fVar40 = *(float *)(lVar14 + 0x24);
          fVar32 = fVar38 * 255.0;
          if (fVar38 < 0.0) {
            fVar32 = unaff_s8;
          }
          dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar16 == 0.5) {
              fVar32 = 1.0;
              goto LAB_00e404dc;
            }
            fVar38 = (float)(int)(fVar32 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar32 = -1.0;
LAB_00e404dc:
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + fVar32;
            }
          }
          else {
            fVar38 = (float)(int)(fVar32 + -0.5);
          }
          fVar34 = ((float)(uVar5 >> 0x10 & 0xff) / 255.0) * fVar34;
          fVar32 = fVar36 * 255.0;
          if (fVar36 < 0.0) {
            fVar32 = unaff_s8;
          }
          dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar16 == 0.5) {
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar32 = (float)(int)(fVar32 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar32 = (float)(int)(fVar32 + -0.5);
          }
          fVar36 = fVar34;
          if (1.0 < fVar34) {
            fVar36 = 1.0;
          }
          fVar40 = ((float)(uVar5 >> 0x18) / 255.0) * fVar40;
          fVar36 = fVar36 * 255.0;
          if (fVar34 < 0.0) {
            fVar36 = unaff_s8;
          }
          dVar16 = modf((double)fVar36,(double *)&stack0x00000070);
          if (0.0 <= fVar36) {
            if (dVar16 == 0.5) {
              fVar34 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e40888;
            }
            fVar36 = (float)(int)(fVar36 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40888:
            fVar36 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar36 = fVar34;
            }
          }
          else {
            fVar36 = (float)(int)(fVar36 + -0.5);
          }
          fVar34 = fVar40;
          if (1.0 < fVar40) {
            fVar34 = 1.0;
          }
          fVar34 = fVar34 * 255.0;
          if (fVar40 < 0.0) {
            fVar34 = unaff_s8;
          }
          dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
          if (0.0 <= fVar34) {
            if (dVar16 == 0.5) {
              fVar40 = 1.0;
              goto LAB_00e40a4c;
            }
            fVar34 = (float)(int)(fVar34 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar40 = -1.0;
LAB_00e40a4c:
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = (float)_fStack0000000000000070 + fVar40;
            }
          }
          else {
            fVar34 = (float)(int)(fVar34 + -0.5);
          }
          *puVar23 = (int)fVar38 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                     ((int)fVar36 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
          lVar14 = *unaff_x24;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
          lVar14 = lVar14 + (long)(int)uVar26 * 4;
        }
        else {
          lVar14 = *(long *)((long)dVar16 + 0xa8);
          if (lVar14 == 0) goto LAB_00e443fc;
          fVar32 = *(float *)(lVar14 + 0x24);
          if (fVar32 != 0.0) {
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
          }
          plVar29 = (long *)StringLiteral_9119;
          cVar6 = *(char *)(lVar14 + 0x2c);
          lVar22 = *unaff_x24;
          lVar15 = *(long *)(lVar14 + 0x18);
          fVar40 = fVar40 * fVar32;
          if (*(int *)(lVar14 + 0x28) == 1) {
            if (cVar6 == '\0') {
              if (lVar15 == 0) goto LAB_00e443fc;
              fVar34 = *(float *)(lVar14 + 0x20);
              fVar36 = *(float *)((long)dVar16 + 0x84);
              fVar40 = fVar40 + (*(float *)((long)dVar16 + 0x48) * fVar34) / fVar36;
              fVar40 = fVar40 - (float)(int)fVar40;
              fVar32 = fVar40;
              if (1.0 < fVar40) {
                fVar32 = fVar38;
              }
              fVar35 = fVar32;
              if (fVar40 < 0.0) {
                fVar35 = 0.0;
              }
              fVar35 = (float)FUN_0269ad38(fVar35,lVar15,0);
              fVar40 = fVar35;
              if (1.0 < fVar35) {
                fVar40 = fVar38;
              }
              fVar40 = fVar40 * 255.0;
              if (fVar35 < 0.0) {
                fVar40 = 0.0;
              }
              dVar16 = modf((double)fVar40,(double *)&stack0x00000070);
              if (0.0 <= fVar40) {
                if (dVar16 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3eeac;
                }
                fVar40 = (float)(int)(fVar40 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3eeac:
                fVar40 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar40 = fVar38;
                }
              }
              else {
                fVar40 = (float)(int)(fVar40 + -0.5);
              }
              fVar38 = fVar32;
              if (1.0 < fVar32) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar32 < 0.0) {
                fVar38 = 0.0;
              }
              dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar16 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41534;
                }
                fVar38 = (float)(int)(fVar38 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41534:
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = fVar32;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + -0.5);
              }
              fVar32 = fVar34;
              if (1.0 < fVar34) {
                fVar32 = 1.0;
              }
              fVar32 = fVar32 * 255.0;
              if (fVar34 < 0.0) {
                fVar32 = 0.0;
              }
              dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar16 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar32 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + -0.5);
              }
              fVar34 = fVar36;
              if (1.0 < fVar36) {
                fVar34 = 1.0;
              }
              fVar34 = fVar34 * 255.0;
              if (fVar36 < 0.0) {
                fVar34 = 0.0;
              }
              dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
              if (0.0 <= fVar34) {
                if (dVar16 == 0.5) {
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar34 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar34 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar34 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar34 = (float)(int)(fVar34 + -0.5);
              }
              if (lVar22 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar22 + 0x18) <= uVar2) goto LAB_00e44400;
              *(uint *)(lVar22 + uVar17 * 4 + 0x20) =
                   (int)fVar40 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar32 & 0xffU) << 0x10
                   | (int)fVar34 << 0x18;
              dVar16 = *in_stack_00000060;
              if (((dVar16 == 0.0) || (lVar14 = *(long *)((long)dVar16 + 0xa8), lVar14 == 0)) ||
                 (lVar15 = *(long *)(lVar14 + 0x18), lVar15 == 0)) goto LAB_00e443fc;
              fVar40 = *(float *)((long)dVar16 + 0x48);
              fVar34 = *(float *)((long)dVar16 + 0x84);
              lVar22 = *unaff_x24;
              fVar38 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                       (fVar40 * *(float *)(lVar14 + 0x20)) / fVar34;
              fVar38 = fVar38 - (float)(int)fVar38;
              fVar32 = fVar38;
              if (1.0 < fVar38) {
                fVar32 = 1.0;
              }
            }
            else {
              if (lVar15 == 0) goto LAB_00e443fc;
              fVar34 = *(float *)((long)dVar16 + 0x84);
              fVar36 = *(float *)(lVar14 + 0x20);
              fVar40 = fVar40 + ((*(float *)((long)dVar16 + 0x48) + fVar34) * fVar36) / fVar34;
              fVar40 = fVar40 - (float)(int)fVar40;
              fVar32 = fVar40;
              if (1.0 < fVar40) {
                fVar32 = fVar38;
              }
              fVar35 = fVar32;
              if (fVar40 < 0.0) {
                fVar35 = 0.0;
              }
              fVar35 = (float)FUN_0269ad38(fVar35,lVar15,0);
              fVar40 = fVar35;
              if (1.0 < fVar35) {
                fVar40 = fVar38;
              }
              fVar40 = fVar40 * 255.0;
              if (fVar35 < 0.0) {
                fVar40 = 0.0;
              }
              dVar16 = modf((double)fVar40,(double *)&stack0x00000070);
              if (0.0 <= fVar40) {
                if (dVar16 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3ed6c;
                }
                fVar40 = (float)(int)(fVar40 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ed6c:
                fVar40 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar40 = fVar38;
                }
              }
              else {
                fVar40 = (float)(int)(fVar40 + -0.5);
              }
              fVar38 = fVar32;
              if (1.0 < fVar32) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar32 < 0.0) {
                fVar38 = 0.0;
              }
              dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar16 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3f2ec;
                }
                fVar38 = (float)(int)(fVar38 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f2ec:
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = fVar32;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + -0.5);
              }
              fVar32 = fVar34;
              if (1.0 < fVar34) {
                fVar32 = 1.0;
              }
              fVar32 = fVar32 * 255.0;
              if (fVar34 < 0.0) {
                fVar32 = 0.0;
              }
              dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar16 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar32 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + -0.5);
              }
              fVar34 = fVar36;
              if (1.0 < fVar36) {
                fVar34 = 1.0;
              }
              fVar34 = fVar34 * 255.0;
              if (fVar36 < 0.0) {
                fVar34 = 0.0;
              }
              dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
              if (0.0 <= fVar34) {
                if (dVar16 == 0.5) {
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar34 + 0.5);
                }
              }
              else if (dVar16 == -0.5) {
                fVar34 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar34 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar34 = (float)(int)(fVar34 + -0.5);
              }
              if (lVar22 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar22 + 0x18) <= uVar2) goto LAB_00e44400;
              *(uint *)(lVar22 + uVar17 * 4 + 0x20) =
                   (int)fVar40 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar32 & 0xffU) << 0x10
                   | (int)fVar34 << 0x18;
              dVar16 = *in_stack_00000060;
              if (((dVar16 == 0.0) || (lVar14 = *(long *)((long)dVar16 + 0xa8), lVar14 == 0)) ||
                 (lVar15 = *(long *)(lVar14 + 0x18), lVar15 == 0)) goto LAB_00e443fc;
              fVar40 = *(float *)((long)dVar16 + 0x84);
              fVar34 = *(float *)(lVar14 + 0x20);
              lVar22 = *unaff_x24;
              fVar38 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                       ((*(float *)((long)dVar16 + 0x48) + fVar40) * fVar34) / fVar40;
              fVar38 = fVar38 - (float)(int)fVar38;
              fVar32 = fVar38;
              if (1.0 < fVar38) {
                fVar32 = 1.0;
              }
            }
            fVar36 = fVar32;
            if (fVar38 < 0.0) {
              fVar36 = 0.0;
            }
            fVar36 = (float)FUN_0269ad38(fVar36,lVar15,0);
            fVar38 = fVar36;
            if (1.0 < fVar36) {
              fVar38 = 1.0;
            }
            fVar38 = fVar38 * 255.0;
            if (fVar36 < 0.0) {
              fVar38 = 0.0;
            }
            dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar16 == 0.5) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e419a4;
              }
              fVar36 = (float)(int)(fVar38 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e419a4:
              fVar36 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar36 = fVar38;
              }
            }
            else {
              fVar36 = (float)(int)(fVar38 + -0.5);
            }
            fVar38 = fVar32;
            if (1.0 < fVar32) {
              fVar38 = 1.0;
            }
            fVar38 = fVar38 * 255.0;
            if (fVar32 < 0.0) {
              fVar38 = 0.0;
            }
            dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar16 == 0.5) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e41a34;
              }
              fVar38 = (float)(int)(fVar38 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41a34:
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = fVar32;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            fVar32 = fVar40;
            if (1.0 < fVar40) {
              fVar32 = 1.0;
            }
            fVar32 = fVar32 * 255.0;
            if (fVar40 < 0.0) {
              fVar32 = 0.0;
            }
            dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar16 == 0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar32 = (float)(int)(fVar32 + -0.5);
            }
            fVar40 = fVar34;
            if (1.0 < fVar34) {
              fVar40 = 1.0;
            }
            fVar40 = fVar40 * 255.0;
            if (fVar34 < 0.0) {
              fVar40 = 0.0;
            }
            dVar16 = modf((double)fVar40,(double *)&stack0x00000070);
            if (0.0 <= fVar40) {
              if (dVar16 == 0.5) {
                fVar40 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar40 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar40 = (float)(int)(fVar40 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar40 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar40 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar40 = (float)(int)(fVar40 + -0.5);
            }
            if (lVar22 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar22 + 0x18) <= uVar28) goto LAB_00e44400;
            *(uint *)(lVar22 + (long)(int)uVar28 * 4 + 0x20) =
                 (int)fVar36 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar32 & 0xffU) << 0x10 |
                 (int)fVar40 << 0x18;
            dVar16 = *in_stack_00000060;
            if (((dVar16 == 0.0) || (lVar14 = *(long *)((long)dVar16 + 0xa8), lVar14 == 0)) ||
               (*(long *)(lVar14 + 0x18) == 0)) goto LAB_00e443fc;
            fVar40 = *(float *)((long)dVar16 + 0x48);
            fVar34 = *(float *)((long)dVar16 + 0x84);
            lVar15 = *unaff_x24;
            fVar38 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                     (fVar40 * *(float *)(lVar14 + 0x20)) / fVar34;
            fVar38 = fVar38 - (float)(int)fVar38;
            fVar32 = fVar38;
            if (1.0 < fVar38) {
              fVar32 = 1.0;
            }
            fVar36 = fVar32;
            if (fVar38 < 0.0) {
              fVar36 = 0.0;
            }
            fVar36 = (float)FUN_0269ad38(fVar36,*(long *)(lVar14 + 0x18),0);
            fVar38 = fVar36;
            if (1.0 < fVar36) {
              fVar38 = 1.0;
            }
            fVar38 = fVar38 * 255.0;
            if (fVar36 < 0.0) {
              fVar38 = 0.0;
            }
            dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar16 == 0.5) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e41cd0;
              }
              fVar36 = (float)(int)(fVar38 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41cd0:
              fVar36 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar36 = fVar38;
              }
            }
            else {
              fVar36 = (float)(int)(fVar38 + -0.5);
            }
            fVar38 = fVar32;
            if (1.0 < fVar32) {
              fVar38 = 1.0;
            }
            fVar38 = fVar38 * 255.0;
            if (fVar32 < 0.0) {
              fVar38 = 0.0;
            }
            dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar16 == 0.5) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e41d60;
              }
              fVar38 = (float)(int)(fVar38 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41d60:
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = fVar32;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            fVar32 = fVar40;
            if (1.0 < fVar40) {
              fVar32 = 1.0;
            }
            fVar32 = fVar32 * 255.0;
            if (fVar40 < 0.0) {
              fVar32 = 0.0;
            }
            dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar16 == 0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar32 = (float)(int)(fVar32 + -0.5);
            }
            fVar40 = fVar34;
            if (1.0 < fVar34) {
              fVar40 = 1.0;
            }
            fVar40 = fVar40 * 255.0;
            if (fVar34 < 0.0) {
              fVar40 = 0.0;
            }
            dVar16 = modf((double)fVar40,(double *)&stack0x00000070);
            if (0.0 <= fVar40) {
              if (dVar16 == 0.5) {
                fVar40 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar40 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar40 = (float)(int)(fVar40 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar40 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar40 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar40 = (float)(int)(fVar40 + -0.5);
            }
            if (lVar15 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
            *(uint *)(lVar15 + (long)(int)uVar26 * 4 + 0x20) =
                 (int)fVar36 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar32 & 0xffU) << 0x10 |
                 (int)fVar40 << 0x18;
            dVar16 = *in_stack_00000060;
            if (((dVar16 == 0.0) || (lVar14 = *(long *)((long)dVar16 + 0xa8), lVar14 == 0)) ||
               (*(long *)(lVar14 + 0x18) == 0)) goto LAB_00e443fc;
            fVar40 = *(float *)((long)dVar16 + 0x48);
            fVar34 = *(float *)((long)dVar16 + 0x84);
            lVar15 = *unaff_x24;
            fVar38 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                     (fVar40 * *(float *)(lVar14 + 0x20)) / fVar34;
            fVar38 = fVar38 - (float)(int)fVar38;
            fVar32 = fVar38;
            if (1.0 < fVar38) {
              fVar32 = 1.0;
            }
            fVar36 = fVar32;
            if (fVar38 < 0.0) {
              fVar36 = 0.0;
            }
            fVar36 = (float)FUN_0269ad38(fVar36,*(long *)(lVar14 + 0x18),0);
            fVar38 = fVar36;
            if (1.0 < fVar36) {
              fVar38 = 1.0;
            }
            uVar10 = 0x437f0000;
            fVar38 = fVar38 * 255.0;
            if (fVar36 < 0.0) {
              fVar38 = 0.0;
            }
            dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar16 == 0.5) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e41ffc;
              }
              fVar36 = (float)(int)(fVar38 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41ffc:
              fVar36 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar36 = fVar38;
              }
            }
            else {
              fVar36 = (float)(int)(fVar38 + -0.5);
            }
            fVar38 = fVar32;
            if (1.0 < fVar32) {
              fVar38 = 1.0;
            }
            fVar38 = fVar38 * 255.0;
            if (fVar32 < 0.0) {
              fVar38 = 0.0;
            }
LAB_00e42040:
            dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
            if (fVar38 < 0.0) goto LAB_00e4204c;
LAB_00e425b8:
            if (dVar16 == 0.5) {
              fVar32 = (float)_fStack0000000000000070;
              fVar38 = fVar32 + 1.0;
              goto LAB_00e425d4;
            }
            fVar32 = (float)(int)(fVar38 + 0.5);
          }
          else {
            lVar19 = *in_stack_00000038;
            if (lVar19 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar19 + 0x18) <= uVar2) goto LAB_00e44400;
            if (lVar15 == 0) goto LAB_00e443fc;
            fVar34 = *(float *)(lVar19 + uVar17 * 0xc + 0x20);
            fVar36 = *(float *)((long)dVar16 + 0x84);
            fVar40 = fVar40 + (fVar34 * *(float *)(lVar14 + 0x20)) / fVar36;
            fVar40 = fVar40 - (float)(int)fVar40;
            fVar32 = fVar40;
            if (1.0 < fVar40) {
              fVar32 = fVar38;
            }
            fVar35 = fVar32;
            if (fVar40 < 0.0) {
              fVar35 = 0.0;
            }
            fVar35 = (float)FUN_0269ad38(fVar35,lVar15,0);
            fVar40 = fVar35;
            if (1.0 < fVar35) {
              fVar40 = fVar38;
            }
            fVar40 = fVar40 * 255.0;
            if (fVar35 < 0.0) {
              fVar40 = 0.0;
            }
            dVar16 = modf((double)fVar40,(double *)&stack0x00000070);
            if (0.0 <= fVar40) {
              if (dVar16 == 0.5) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e3e0b0;
              }
              fVar40 = (float)(int)(fVar40 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3e0b0:
              fVar40 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar40 = fVar38;
              }
            }
            else {
              fVar40 = (float)(int)(fVar40 + -0.5);
            }
            fVar38 = fVar32;
            if (1.0 < fVar32) {
              fVar38 = 1.0;
            }
            fVar38 = fVar38 * 255.0;
            if (fVar32 < 0.0) {
              fVar38 = 0.0;
            }
            dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar16 == 0.5) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e3ee80;
              }
              fVar38 = (float)(int)(fVar38 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ee80:
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = fVar32;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            fVar32 = fVar34;
            if (1.0 < fVar34) {
              fVar32 = 1.0;
            }
            fVar32 = fVar32 * 255.0;
            if (fVar34 < 0.0) {
              fVar32 = 0.0;
            }
            dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar16 == 0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar32 = (float)(int)(fVar32 + -0.5);
            }
            fVar34 = fVar36;
            if (1.0 < fVar36) {
              fVar34 = 1.0;
            }
            fVar34 = fVar34 * 255.0;
            if (fVar36 < 0.0) {
              fVar34 = 0.0;
            }
            dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
            if (0.0 <= fVar34) {
              if (dVar16 == 0.5) {
                fVar34 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar34 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar34 = (float)(int)(fVar34 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar34 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar34 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar34 = (float)(int)(fVar34 + -0.5);
            }
            if (lVar22 == 0) goto LAB_00e443fc;
            fVar36 = 1.0;
            if (*(uint *)(lVar22 + 0x18) <= uVar2) goto LAB_00e44400;
            *(uint *)(lVar22 + uVar17 * 4 + 0x20) =
                 (int)fVar40 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar32 & 0xffU) << 0x10 |
                 (int)fVar34 << 0x18;
            plVar29 = (long *)StringLiteral_9119;
            dVar16 = *in_stack_00000060;
            if (((dVar16 == 0.0) || (lVar14 = *(long *)((long)dVar16 + 0xa8), lVar14 == 0)) ||
               (lVar15 = *in_stack_00000038, lVar15 == 0)) goto LAB_00e443fc;
            lVar19 = *unaff_x24;
            lVar22 = *(long *)(lVar14 + 0x18);
            fVar32 = fStack0000000000000048 * *(float *)(lVar14 + 0x24);
            if (cVar6 != '\0') {
              if (uVar28 < *(uint *)(lVar15 + 0x18)) {
                if (lVar22 != 0) {
                  fVar40 = *(float *)(lVar15 + (long)(int)uVar28 * 0xc + 0x20);
                  fVar34 = *(float *)((long)dVar16 + 0x84);
                  fVar32 = fVar32 + (fVar40 * *(float *)(lVar14 + 0x20)) / fVar34;
                  fVar32 = fVar32 - (float)(int)fVar32;
                  fVar38 = fVar32;
                  if (1.0 < fVar32) {
                    fVar38 = fVar36;
                  }
                  fVar35 = fVar38;
                  if (fVar32 < 0.0) {
                    fVar35 = 0.0;
                  }
                  fVar35 = (float)FUN_0269ad38(fVar35,lVar22,0);
                  fVar32 = fVar35;
                  if (1.0 < fVar35) {
                    fVar32 = fVar36;
                  }
                  fVar32 = fVar32 * 255.0;
                  if (fVar35 < 0.0) {
                    fVar32 = 0.0;
                  }
                  dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
                  if (0.0 <= fVar32) {
                    if (dVar16 == 0.5) {
                      fVar32 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e3f234;
                    }
                    fVar36 = (float)(int)(fVar32 + 0.5);
                  }
                  else if (dVar16 == -0.5) {
                    fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f234:
                    fVar36 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar36 = fVar32;
                    }
                  }
                  else {
                    fVar36 = (float)(int)(fVar32 + -0.5);
                  }
                  fVar32 = fVar38;
                  if (1.0 < fVar38) {
                    fVar32 = 1.0;
                  }
                  fVar32 = fVar32 * 255.0;
                  if (fVar38 < 0.0) {
                    fVar32 = 0.0;
                  }
                  dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
                  if (0.0 <= fVar32) {
                    if (dVar16 == 0.5) {
                      fVar32 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e3f594;
                    }
                    fVar38 = (float)(int)(fVar32 + 0.5);
                  }
                  else if (dVar16 == -0.5) {
                    fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f594:
                    fVar38 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar38 = fVar32;
                    }
                  }
                  else {
                    fVar38 = (float)(int)(fVar32 + -0.5);
                  }
                  fVar32 = fVar40;
                  if (1.0 < fVar40) {
                    fVar32 = 1.0;
                  }
                  fVar32 = fVar32 * 255.0;
                  if (fVar40 < 0.0) {
                    fVar32 = 0.0;
                  }
                  dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
                  if (0.0 <= fVar32) {
                    if (dVar16 == 0.5) {
                      fVar32 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar32 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar32 = (float)(int)(fVar32 + 0.5);
                    }
                  }
                  else if (dVar16 == -0.5) {
                    fVar32 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar32 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar32 = (float)(int)(fVar32 + -0.5);
                  }
                  fVar40 = fVar34;
                  if (1.0 < fVar34) {
                    fVar40 = 1.0;
                  }
                  fVar40 = fVar40 * 255.0;
                  if (fVar34 < 0.0) {
                    fVar40 = 0.0;
                  }
                  dVar16 = modf((double)fVar40,(double *)&stack0x00000070);
                  if (0.0 <= fVar40) {
                    if (dVar16 == 0.5) {
                      fVar40 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar40 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar40 = (float)(int)(fVar40 + 0.5);
                    }
                  }
                  else if (dVar16 == -0.5) {
                    fVar40 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar40 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar40 = (float)(int)(fVar40 + -0.5);
                  }
                  if (lVar19 != 0) {
                    if (uVar28 < *(uint *)(lVar19 + 0x18)) {
                      *(uint *)(lVar19 + (long)(int)uVar28 * 4 + 0x20) =
                           (int)fVar36 & 0xffU | ((int)fVar38 & 0xffU) << 8 |
                           ((int)fVar32 & 0xffU) << 0x10 | (int)fVar40 << 0x18;
                      dVar16 = *in_stack_00000060;
                      if (((dVar16 != 0.0) && (lVar14 = *(long *)((long)dVar16 + 0xa8), lVar14 != 0)
                          ) && (lVar15 = *in_stack_00000038, lVar15 != 0)) {
                        if (uVar26 < *(uint *)(lVar15 + 0x18)) {
                          if (*(long *)(lVar14 + 0x18) != 0) {
                            fVar40 = *(float *)(lVar15 + (long)(int)uVar26 * 0xc + 0x20);
                            fVar34 = *(float *)((long)dVar16 + 0x84);
                            lVar15 = *unaff_x24;
                            fVar38 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                                     (fVar40 * *(float *)(lVar14 + 0x20)) / fVar34;
                            fVar38 = fVar38 - (float)(int)fVar38;
                            fVar32 = fVar38;
                            if (1.0 < fVar38) {
                              fVar32 = 1.0;
                            }
                            fVar36 = fVar32;
                            if (fVar38 < 0.0) {
                              fVar36 = 0.0;
                            }
                            fVar36 = (float)FUN_0269ad38(fVar36,*(long *)(lVar14 + 0x18),0);
                            fVar38 = fVar36;
                            if (1.0 < fVar36) {
                              fVar38 = 1.0;
                            }
                            fVar38 = fVar38 * 255.0;
                            if (fVar36 < 0.0) {
                              fVar38 = 0.0;
                            }
                            dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
                            if (0.0 <= fVar38) {
                              if (dVar16 == 0.5) {
                                fVar38 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e3f858;
                              }
                              fVar36 = (float)(int)(fVar38 + 0.5);
                            }
                            else if (dVar16 == -0.5) {
                              fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f858:
                              fVar36 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar36 = fVar38;
                              }
                            }
                            else {
                              fVar36 = (float)(int)(fVar38 + -0.5);
                            }
                            fVar38 = fVar32;
                            if (1.0 < fVar32) {
                              fVar38 = 1.0;
                            }
                            fVar38 = fVar38 * 255.0;
                            if (fVar32 < 0.0) {
                              fVar38 = 0.0;
                            }
                            dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
                            if (0.0 <= fVar38) {
                              if (dVar16 == 0.5) {
                                fVar32 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e3f8e8;
                              }
                              fVar38 = (float)(int)(fVar38 + 0.5);
                            }
                            else if (dVar16 == -0.5) {
                              fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f8e8:
                              fVar38 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar38 = fVar32;
                              }
                            }
                            else {
                              fVar38 = (float)(int)(fVar38 + -0.5);
                            }
                            fVar32 = fVar40;
                            if (1.0 < fVar40) {
                              fVar32 = 1.0;
                            }
                            fVar32 = fVar32 * 255.0;
                            if (fVar40 < 0.0) {
                              fVar32 = 0.0;
                            }
                            dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
                            if (0.0 <= fVar32) {
                              if (dVar16 == 0.5) {
                                fVar32 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar32 = (float)(int)(fVar32 + 0.5);
                              }
                            }
                            else if (dVar16 == -0.5) {
                              fVar32 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar32 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar32 = (float)(int)(fVar32 + -0.5);
                            }
                            fVar40 = fVar34;
                            if (1.0 < fVar34) {
                              fVar40 = 1.0;
                            }
                            fVar40 = fVar40 * 255.0;
                            if (fVar34 < 0.0) {
                              fVar40 = 0.0;
                            }
                            dVar16 = modf((double)fVar40,(double *)&stack0x00000070);
                            plVar29 = (long *)StringLiteral_9119;
                            if (0.0 <= fVar40) {
                              if (dVar16 == 0.5) {
                                fVar40 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar40 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar40 = (float)(int)(fVar40 + 0.5);
                              }
                            }
                            else if (dVar16 == -0.5) {
                              fVar40 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar40 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar40 = (float)(int)(fVar40 + -0.5);
                            }
                            if (lVar15 != 0) {
                              if (uVar26 < *(uint *)(lVar15 + 0x18)) {
                                *(uint *)(lVar15 + (long)(int)uVar26 * 4 + 0x20) =
                                     (int)fVar36 & 0xffU | ((int)fVar38 & 0xffU) << 8 |
                                     ((int)fVar32 & 0xffU) << 0x10 | (int)fVar40 << 0x18;
                                dVar16 = *in_stack_00000060;
                                if (((dVar16 != 0.0) &&
                                    (lVar14 = *(long *)((long)dVar16 + 0xa8), lVar14 != 0)) &&
                                   (lVar15 = *in_stack_00000038, lVar15 != 0)) {
                                  if (uVar24 < *(uint *)(lVar15 + 0x18)) {
                                    if (*(long *)(lVar14 + 0x18) != 0) {
                                      fVar40 = *(float *)(lVar15 + uVar25 * 0xc + 0x20);
                                      fVar34 = *(float *)((long)dVar16 + 0x84);
                                      lVar15 = *unaff_x24;
                                      fVar38 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                                               (fVar40 * *(float *)(lVar14 + 0x20)) / fVar34;
                                      fVar38 = fVar38 - (float)(int)fVar38;
                                      fVar32 = fVar38;
                                      if (1.0 < fVar38) {
                                        fVar32 = 1.0;
                                      }
                                      fVar36 = fVar32;
                                      if (fVar38 < 0.0) {
                                        fVar36 = 0.0;
                                      }
                                      fVar36 = (float)FUN_0269ad38(fVar36,*(long *)(lVar14 + 0x18),0
                                                                  );
                                      fVar38 = fVar36;
                                      if (1.0 < fVar36) {
                                        fVar38 = 1.0;
                                      }
                                      uVar10 = 0x437f0000;
                                      fVar38 = fVar38 * 255.0;
                                      if (fVar36 < 0.0) {
                                        fVar38 = 0.0;
                                      }
                                      dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
                                      if (0.0 <= fVar38) {
                                        if (dVar16 == 0.5) {
                                          fVar38 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e3fbd0;
                                        }
                                        fVar36 = (float)(int)(fVar38 + 0.5);
                                      }
                                      else if (dVar16 == -0.5) {
                                        fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fbd0:
                                        fVar36 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar36 = fVar38;
                                        }
                                      }
                                      else {
                                        fVar36 = (float)(int)(fVar38 + -0.5);
                                      }
                                      fVar38 = fVar32;
                                      if (1.0 < fVar32) {
                                        fVar38 = 1.0;
                                      }
                                      fVar38 = fVar38 * 255.0;
                                      if (fVar32 < 0.0) {
                                        fVar38 = 0.0;
                                      }
                                      goto LAB_00e42040;
                                    }
                                    goto LAB_00e443fc;
                                  }
                                  goto LAB_00e44400;
                                }
                                goto LAB_00e443fc;
                              }
                              goto LAB_00e44400;
                            }
                          }
                          goto LAB_00e443fc;
                        }
                        goto LAB_00e44400;
                      }
                      goto LAB_00e443fc;
                    }
                    goto LAB_00e44400;
                  }
                }
                goto LAB_00e443fc;
              }
              goto LAB_00e44400;
            }
            if (*(uint *)(lVar15 + 0x18) <= uVar2) goto LAB_00e44400;
            if (lVar22 == 0) goto LAB_00e443fc;
            fVar40 = *(float *)(lVar15 + uVar17 * 0xc + 0x20);
            fVar34 = *(float *)((long)dVar16 + 0x84);
            fVar32 = fVar32 + (fVar40 * *(float *)(lVar14 + 0x20)) / fVar34;
            fVar32 = fVar32 - (float)(int)fVar32;
            fVar38 = fVar32;
            if (1.0 < fVar32) {
              fVar38 = fVar36;
            }
            fVar35 = fVar38;
            if (fVar32 < 0.0) {
              fVar35 = 0.0;
            }
            fVar35 = (float)FUN_0269ad38(fVar35,lVar22,0);
            fVar32 = fVar35;
            if (1.0 < fVar35) {
              fVar32 = fVar36;
            }
            fVar32 = fVar32 * 255.0;
            if (fVar35 < 0.0) {
              fVar32 = 0.0;
            }
            dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar16 == 0.5) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e3f25c;
              }
              fVar36 = (float)(int)(fVar32 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f25c:
              fVar36 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar36 = fVar32;
              }
            }
            else {
              fVar36 = (float)(int)(fVar32 + -0.5);
            }
            fVar32 = fVar38;
            if (1.0 < fVar38) {
              fVar32 = 1.0;
            }
            fVar32 = fVar32 * 255.0;
            if (fVar38 < 0.0) {
              fVar32 = 0.0;
            }
            dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar16 == 0.5) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e415c4;
              }
              fVar38 = (float)(int)(fVar32 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e415c4:
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = fVar32;
              }
            }
            else {
              fVar38 = (float)(int)(fVar32 + -0.5);
            }
            fVar32 = fVar40;
            if (1.0 < fVar40) {
              fVar32 = 1.0;
            }
            fVar32 = fVar32 * 255.0;
            if (fVar40 < 0.0) {
              fVar32 = 0.0;
            }
            dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar16 == 0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar32 = (float)(int)(fVar32 + -0.5);
            }
            fVar40 = fVar34;
            if (1.0 < fVar34) {
              fVar40 = 1.0;
            }
            fVar40 = fVar40 * 255.0;
            if (fVar34 < 0.0) {
              fVar40 = 0.0;
            }
            dVar16 = modf((double)fVar40,(double *)&stack0x00000070);
            if (0.0 <= fVar40) {
              if (dVar16 == 0.5) {
                fVar40 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar40 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar40 = (float)(int)(fVar40 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar40 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar40 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar40 = (float)(int)(fVar40 + -0.5);
            }
            if (lVar19 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar19 + 0x18) <= uVar28) goto LAB_00e44400;
            *(uint *)(lVar19 + (long)(int)uVar28 * 4 + 0x20) =
                 (int)fVar36 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar32 & 0xffU) << 0x10 |
                 (int)fVar40 << 0x18;
            dVar16 = *in_stack_00000060;
            if (((dVar16 == 0.0) || (lVar14 = *(long *)((long)dVar16 + 0xa8), lVar14 == 0)) ||
               (lVar15 = *in_stack_00000038, lVar15 == 0)) goto LAB_00e443fc;
            if (*(uint *)(lVar15 + 0x18) <= uVar2) goto LAB_00e44400;
            if (*(long *)(lVar14 + 0x18) == 0) goto LAB_00e443fc;
            fVar40 = *(float *)(lVar15 + uVar17 * 0xc + 0x20);
            fVar34 = *(float *)((long)dVar16 + 0x84);
            lVar15 = *unaff_x24;
            fVar38 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                     (fVar40 * *(float *)(lVar14 + 0x20)) / fVar34;
            fVar38 = fVar38 - (float)(int)fVar38;
            fVar32 = fVar38;
            if (1.0 < fVar38) {
              fVar32 = 1.0;
            }
            fVar36 = fVar32;
            if (fVar38 < 0.0) {
              fVar36 = 0.0;
            }
            fVar36 = (float)FUN_0269ad38(fVar36,*(long *)(lVar14 + 0x18),0);
            fVar38 = fVar36;
            if (1.0 < fVar36) {
              fVar38 = 1.0;
            }
            fVar38 = fVar38 * 255.0;
            if (fVar36 < 0.0) {
              fVar38 = 0.0;
            }
            dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar16 == 0.5) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e421fc;
              }
              fVar36 = (float)(int)(fVar38 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e421fc:
              fVar36 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar36 = fVar38;
              }
            }
            else {
              fVar36 = (float)(int)(fVar38 + -0.5);
            }
            fVar38 = fVar32;
            if (1.0 < fVar32) {
              fVar38 = 1.0;
            }
            fVar38 = fVar38 * 255.0;
            if (fVar32 < 0.0) {
              fVar38 = 0.0;
            }
            dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar16 == 0.5) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e4228c;
              }
              fVar38 = (float)(int)(fVar38 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4228c:
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = fVar32;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            fVar32 = fVar40;
            if (1.0 < fVar40) {
              fVar32 = 1.0;
            }
            fVar32 = fVar32 * 255.0;
            if (fVar40 < 0.0) {
              fVar32 = 0.0;
            }
            dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar16 == 0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar32 = (float)(int)(fVar32 + -0.5);
            }
            fVar40 = fVar34;
            if (1.0 < fVar34) {
              fVar40 = 1.0;
            }
            fVar40 = fVar40 * 255.0;
            if (fVar34 < 0.0) {
              fVar40 = 0.0;
            }
            dVar16 = modf((double)fVar40,(double *)&stack0x00000070);
            if (0.0 <= fVar40) {
              if (dVar16 == 0.5) {
                fVar40 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar40 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar40 = (float)(int)(fVar40 + 0.5);
              }
            }
            else if (dVar16 == -0.5) {
              fVar40 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar40 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar40 = (float)(int)(fVar40 + -0.5);
            }
            if (lVar15 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar15 + 0x18) <= uVar26) goto LAB_00e44400;
            *(uint *)(lVar15 + (long)(int)uVar26 * 4 + 0x20) =
                 (int)fVar36 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar32 & 0xffU) << 0x10 |
                 (int)fVar40 << 0x18;
            dVar16 = *in_stack_00000060;
            if (((dVar16 == 0.0) || (lVar14 = *(long *)((long)dVar16 + 0xa8), lVar14 == 0)) ||
               (lVar15 = *in_stack_00000038, lVar15 == 0)) goto LAB_00e443fc;
            if (*(uint *)(lVar15 + 0x18) <= uVar2) goto LAB_00e44400;
            if (*(long *)(lVar14 + 0x18) == 0) goto LAB_00e443fc;
            fVar40 = *(float *)(lVar15 + uVar17 * 0xc + 0x20);
            fVar34 = *(float *)((long)dVar16 + 0x84);
            lVar15 = *unaff_x24;
            fVar38 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                     (fVar40 * *(float *)(lVar14 + 0x20)) / fVar34;
            fVar38 = fVar38 - (float)(int)fVar38;
            fVar32 = fVar38;
            if (1.0 < fVar38) {
              fVar32 = 1.0;
            }
            fVar36 = fVar32;
            if (fVar38 < 0.0) {
              fVar36 = 0.0;
            }
            fVar36 = (float)FUN_0269ad38(fVar36,*(long *)(lVar14 + 0x18),0);
            fVar38 = fVar36;
            if (1.0 < fVar36) {
              fVar38 = 1.0;
            }
            uVar10 = 0x437f0000;
            fVar38 = fVar38 * 255.0;
            if (fVar36 < 0.0) {
              fVar38 = 0.0;
            }
            dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar16 == 0.5) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e42560;
              }
              fVar36 = (float)(int)(fVar38 + 0.5);
            }
            else if (dVar16 == -0.5) {
              fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42560:
              fVar36 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar36 = fVar38;
              }
            }
            else {
              fVar36 = (float)(int)(fVar38 + -0.5);
            }
            fVar38 = fVar32;
            if (1.0 < fVar32) {
              fVar38 = 1.0;
            }
            fVar38 = fVar38 * 255.0;
            if (fVar32 < 0.0) {
              fVar38 = 0.0;
            }
            dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) goto LAB_00e425b8;
LAB_00e4204c:
            if (dVar16 == -0.5) {
              fVar32 = (float)_fStack0000000000000070;
              fVar38 = fVar32 + -1.0;
LAB_00e425d4:
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = fVar38;
              }
            }
            else {
              fVar32 = (float)(int)(fVar38 + -0.5);
            }
          }
          unaff_s8 = 0.0;
          fVar38 = fVar40;
          if (1.0 < fVar40) {
            fVar38 = 1.0;
          }
          fVar38 = fVar38 * 255.0;
          if (fVar40 < 0.0) {
            fVar38 = 0.0;
          }
          dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar16 == 0.5) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e42654;
            }
            fVar40 = (float)(int)(fVar38 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42654:
            fVar40 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar40 = fVar38;
            }
          }
          else {
            fVar40 = (float)(int)(fVar38 + -0.5);
          }
          fVar38 = fVar34;
          if (1.0 < fVar34) {
            fVar38 = 1.0;
          }
          fVar38 = fVar38 * 255.0;
          if (fVar34 < 0.0) {
            fVar38 = 0.0;
          }
          dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar16 == 0.5) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e426e4;
            }
            fVar34 = (float)(int)(fVar38 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e426e4:
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = fVar38;
            }
          }
          else {
            fVar34 = (float)(int)(fVar38 + -0.5);
          }
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_00e44400;
          *(uint *)(lVar15 + uVar25 * 4 + 0x20) =
               (int)fVar36 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar40 & 0xffU) << 0x10 |
               (int)fVar34 << 0x18;
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          uVar20 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
          unaff_d14 = _fStack0000000000000048 & 0xffffffff;
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar30 = FUN_02681b9c(uVar20,0,0);
          if ((uVar30 & 1) == 0) goto LAB_00e43400;
          lVar14 = *unaff_x24;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar2) goto LAB_00e44400;
          puVar23 = (uint *)(lVar14 + uVar17 * 4 + 0x20);
          uVar5 = *puVar23;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0)) goto LAB_00e443fc;
          fVar32 = ((float)(uVar5 & 0xff) / 255.0) * *(float *)(lVar14 + 0x18);
          fVar36 = ((float)(uVar5 >> 8 & 0xff) / 255.0) * *(float *)(lVar14 + 0x1c);
          fVar34 = *(float *)(lVar14 + 0x20);
          fVar40 = *(float *)(lVar14 + 0x24);
          fVar38 = fVar32 * 255.0;
          if (fVar32 < 0.0) {
            fVar38 = 0.0;
          }
          dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar16 == 0.5) {
              fVar32 = 1.0;
              goto LAB_00e4287c;
            }
            fVar38 = (float)(int)(fVar38 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar32 = -1.0;
LAB_00e4287c:
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + fVar32;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          fVar32 = fVar36 * 255.0;
          fVar34 = ((float)(uVar5 >> 0x10 & 0xff) / 255.0) * fVar34;
          if (fVar36 < 0.0) {
            fVar32 = 0.0;
          }
          dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar16 == 0.5) {
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar32 = (float)(int)(fVar32 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar32 = (float)(int)(fVar32 + -0.5);
          }
          fVar36 = fVar34;
          if (1.0 < fVar34) {
            fVar36 = 1.0;
          }
          fVar36 = fVar36 * 255.0;
          fVar40 = ((float)(uVar5 >> 0x18) / 255.0) * fVar40;
          if (fVar34 < 0.0) {
            fVar36 = 0.0;
          }
          dVar16 = modf((double)fVar36,(double *)&stack0x00000070);
          if (0.0 <= fVar36) {
            if (dVar16 == 0.5) {
              fVar34 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e429c8;
            }
            fVar36 = (float)(int)(fVar36 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e429c8:
            fVar36 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar36 = fVar34;
            }
          }
          else {
            fVar36 = (float)(int)(fVar36 + -0.5);
          }
          fVar34 = fVar40;
          if (1.0 < fVar40) {
            fVar34 = 1.0;
          }
          fVar34 = fVar34 * 255.0;
          if (fVar40 < 0.0) {
            fVar34 = 0.0;
          }
          dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
          if (0.0 <= fVar34) {
            if (dVar16 == 0.5) {
              fVar40 = 1.0;
              goto LAB_00e42a44;
            }
            fVar34 = (float)(int)(fVar34 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar40 = -1.0;
LAB_00e42a44:
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = (float)_fStack0000000000000070 + fVar40;
            }
          }
          else {
            fVar34 = (float)(int)(fVar34 + -0.5);
          }
          *puVar23 = (int)fVar38 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                     ((int)fVar36 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
          lVar14 = *unaff_x24;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
          puVar23 = (uint *)(lVar14 + (long)(int)uVar28 * 4 + 0x20);
          uVar5 = *puVar23;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0)) goto LAB_00e443fc;
          fVar32 = ((float)(uVar5 & 0xff) / 255.0) * *(float *)(lVar14 + 0x18);
          fVar36 = ((float)(uVar5 >> 8 & 0xff) / 255.0) * *(float *)(lVar14 + 0x1c);
          fVar34 = *(float *)(lVar14 + 0x20);
          fVar40 = *(float *)(lVar14 + 0x24);
          fVar38 = fVar32 * 255.0;
          if (fVar32 < 0.0) {
            fVar38 = 0.0;
          }
          dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar16 == 0.5) {
              fVar32 = 1.0;
              goto LAB_00e42b80;
            }
            fVar38 = (float)(int)(fVar38 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar32 = -1.0;
LAB_00e42b80:
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + fVar32;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          fVar32 = fVar36 * 255.0;
          fVar34 = ((float)(uVar5 >> 0x10 & 0xff) / 255.0) * fVar34;
          if (fVar36 < 0.0) {
            fVar32 = 0.0;
          }
          dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar16 == 0.5) {
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar32 = (float)(int)(fVar32 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar32 = (float)(int)(fVar32 + -0.5);
          }
          fVar36 = fVar34;
          if (1.0 < fVar34) {
            fVar36 = 1.0;
          }
          fVar36 = fVar36 * 255.0;
          fVar40 = ((float)(uVar5 >> 0x18) / 255.0) * fVar40;
          if (fVar34 < 0.0) {
            fVar36 = 0.0;
          }
          dVar16 = modf((double)fVar36,(double *)&stack0x00000070);
          if (0.0 <= fVar36) {
            if (dVar16 == 0.5) {
              fVar34 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e42ccc;
            }
            fVar36 = (float)(int)(fVar36 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42ccc:
            fVar36 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar36 = fVar34;
            }
          }
          else {
            fVar36 = (float)(int)(fVar36 + -0.5);
          }
          fVar34 = fVar40;
          if (1.0 < fVar40) {
            fVar34 = 1.0;
          }
          fVar34 = fVar34 * 255.0;
          if (fVar40 < 0.0) {
            fVar34 = 0.0;
          }
          dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
          if (0.0 <= fVar34) {
            if (dVar16 == 0.5) {
              fVar40 = 1.0;
              goto LAB_00e42d48;
            }
            fVar34 = (float)(int)(fVar34 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar40 = -1.0;
LAB_00e42d48:
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = (float)_fStack0000000000000070 + fVar40;
            }
          }
          else {
            fVar34 = (float)(int)(fVar34 + -0.5);
          }
          *puVar23 = (int)fVar38 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                     ((int)fVar36 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
          lVar14 = *unaff_x24;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
          lVar14 = lVar14 + (long)(int)uVar26 * 4;
        }
        uVar5 = *(uint *)(lVar14 + 0x20);
        if ((*in_stack_00000060 == 0.0) ||
           (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0)) goto LAB_00e443fc;
        fVar38 = ((float)(uVar5 & 0xff) / 255.0) * *(float *)(lVar15 + 0x18);
        fVar36 = ((float)(uVar5 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
        fVar34 = *(float *)(lVar15 + 0x20);
        fVar40 = *(float *)(lVar15 + 0x24);
        fVar32 = fVar38 * 255.0;
        if (fVar38 < 0.0) {
          fVar32 = unaff_s8;
        }
        dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
        if (0.0 <= fVar32) {
          if (dVar16 == 0.5) {
            fVar32 = 1.0;
            goto FUN_00e42e84;
          }
          fVar38 = (float)(int)(fVar32 + 0.5);
        }
        else if (dVar16 == -0.5) {
          fVar32 = -1.0;
FUN_00e42e84:
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = (float)_fStack0000000000000070 + fVar32;
          }
        }
        else {
          fVar38 = (float)(int)(fVar32 + -0.5);
        }
        fVar34 = ((float)(uVar5 >> 0x10 & 0xff) / 255.0) * fVar34;
        fVar32 = fVar36 * 255.0;
        if (fVar36 < 0.0) {
          fVar32 = unaff_s8;
        }
        dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
        if (0.0 <= fVar32) {
          if (dVar16 == 0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar32 = (float)(int)(fVar32 + 0.5);
          }
        }
        else if (dVar16 == -0.5) {
          fVar32 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar32 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar32 = (float)(int)(fVar32 + -0.5);
        }
        fVar36 = fVar34;
        if (1.0 < fVar34) {
          fVar36 = 1.0;
        }
        fVar40 = ((float)(uVar5 >> 0x18) / 255.0) * fVar40;
        fVar36 = fVar36 * 255.0;
        if (fVar34 < 0.0) {
          fVar36 = unaff_s8;
        }
        dVar16 = modf((double)fVar36,(double *)&stack0x00000070);
        if (0.0 <= fVar36) {
          if (dVar16 == 0.5) {
            fVar34 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e42fd0;
          }
          fVar36 = (float)(int)(fVar36 + 0.5);
        }
        else if (dVar16 == -0.5) {
          fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42fd0:
          fVar36 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar36 = fVar34;
          }
        }
        else {
          fVar36 = (float)(int)(fVar36 + -0.5);
        }
        fVar34 = fVar40;
        if (1.0 < fVar40) {
          fVar34 = 1.0;
        }
        fVar34 = fVar34 * 255.0;
        if (fVar40 < 0.0) {
          fVar34 = unaff_s8;
        }
        dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
        if (0.0 <= fVar34) {
          if (dVar16 == 0.5) {
            fVar40 = 1.0;
            goto LAB_00e4304c;
          }
          fVar34 = (float)(int)(fVar34 + 0.5);
        }
        else if (dVar16 == -0.5) {
          fVar40 = -1.0;
LAB_00e4304c:
          fVar34 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar34 = (float)_fStack0000000000000070 + fVar40;
          }
        }
        else {
          fVar34 = (float)(int)(fVar34 + -0.5);
        }
        *(uint *)(lVar14 + 0x20) =
             (int)fVar38 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar36 & 0xffU) << 0x10 |
             (int)fVar34 << 0x18;
        lVar14 = *unaff_x24;
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= uVar24) goto LAB_00e44400;
        puVar23 = (uint *)(lVar14 + uVar25 * 4 + 0x20);
        uVar5 = *puVar23;
        if ((*in_stack_00000060 == 0.0) ||
           (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0)) goto LAB_00e443fc;
        fVar38 = (float)(uVar5 & 0xff) / 255.0;
        uVar10 = (ulong)(uint)fVar38;
        fVar38 = fVar38 * *(float *)(lVar14 + 0x18);
        fVar36 = ((float)(uVar5 >> 8 & 0xff) / 255.0) * *(float *)(lVar14 + 0x1c);
        fVar34 = *(float *)(lVar14 + 0x20);
        fVar40 = *(float *)(lVar14 + 0x24);
        fVar32 = fVar38 * 255.0;
        if (fVar38 < 0.0) {
          fVar32 = unaff_s8;
        }
        dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
        if (0.0 <= fVar32) {
          if (dVar16 == 0.5) {
            fVar32 = 1.0;
            goto LAB_00e4318c;
          }
          fVar38 = (float)(int)(fVar32 + 0.5);
        }
        else if (dVar16 == -0.5) {
          fVar32 = -1.0;
LAB_00e4318c:
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = (float)_fStack0000000000000070 + fVar32;
          }
        }
        else {
          fVar38 = (float)(int)(fVar32 + -0.5);
        }
        fVar34 = ((float)(uVar5 >> 0x10 & 0xff) / 255.0) * fVar34;
        fVar32 = fVar36 * 255.0;
        if (fVar36 < 0.0) {
          fVar32 = unaff_s8;
        }
        dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
        if (0.0 <= fVar32) {
          if (dVar16 == 0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar32 = (float)(int)(fVar32 + 0.5);
          }
        }
        else if (dVar16 == -0.5) {
          fVar32 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar32 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar32 = (float)(int)(fVar32 + -0.5);
        }
        fVar36 = fVar34;
        if (1.0 < fVar34) {
          fVar36 = 1.0;
        }
        fVar40 = ((float)(uVar5 >> 0x18) / 255.0) * fVar40;
        fVar36 = fVar36 * 255.0;
        if (fVar34 < 0.0) {
          fVar36 = unaff_s8;
        }
        dVar16 = modf((double)fVar36,(double *)&stack0x00000070);
        if (0.0 <= fVar36) {
          if (dVar16 == 0.5) {
            fVar34 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e432e0;
          }
          fVar36 = (float)(int)(fVar36 + 0.5);
        }
        else if (dVar16 == -0.5) {
          fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e432e0:
          fVar36 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar36 = fVar34;
          }
        }
        else {
          fVar36 = (float)(int)(fVar36 + -0.5);
        }
        fVar34 = fVar40;
        if (1.0 < fVar40) {
          fVar34 = 1.0;
        }
        fVar34 = fVar34 * 255.0;
        if (fVar40 < 0.0) {
          fVar34 = unaff_s8;
        }
        dVar16 = modf((double)fVar34,(double *)&stack0x00000070);
        if (0.0 <= fVar34) {
          if (dVar16 == 0.5) {
            fVar40 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar40 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar40 = (float)(int)(fVar34 + 0.5);
          }
        }
        else if (dVar16 == -0.5) {
          fVar40 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar40 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar40 = (float)(int)(fVar34 + -0.5);
        }
        unaff_d14 = _fStack0000000000000048 & 0xffffffff;
        *puVar23 = (int)fVar38 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar36 & 0xffU) << 0x10
                   | (int)fVar40 << 0x18;
        unaff_s15 = in_stack_00000008._4_4_;
      }
      else {
        if (*(long *)((long)dVar16 + 0x100) == 0) goto LAB_00e443fc;
        if (*(char *)(*(long *)((long)dVar16 + 0x100) + 0x20) != '\0') goto LAB_00e3dd34;
        lVar14 = *unaff_x24;
        dVar16 = modf(DAT_028aa048,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar32 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar32 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar32 = 255.0;
        }
        dVar16 = modf(dVar33,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar38 = 255.0;
        }
        dVar16 = modf(dVar33,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar40 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar40 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar40 = 255.0;
        }
        dVar16 = modf(dVar33,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar34 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar34 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar34 = 255.0;
        }
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= uVar2) goto LAB_00e44400;
        *(uint *)(lVar14 + uVar17 * 4 + 0x20) =
             (int)fVar32 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar40 & 0xffU) << 0x10 |
             (int)fVar34 << 0x18;
        lVar14 = *unaff_x24;
        dVar16 = modf(dVar33,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar32 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar32 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar32 = 255.0;
        }
        dVar16 = modf(dVar33,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar38 = 255.0;
        }
        dVar16 = modf(dVar33,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar40 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar40 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar40 = 255.0;
        }
        dVar16 = modf(dVar33,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar34 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar34 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar34 = 255.0;
        }
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
        *(uint *)(lVar14 + (long)(int)uVar28 * 4 + 0x20) =
             (int)fVar32 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar40 & 0xffU) << 0x10 |
             (int)fVar34 << 0x18;
        lVar14 = *unaff_x24;
        dVar16 = modf(dVar33,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar32 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar32 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar32 = 255.0;
        }
        dVar16 = modf(dVar33,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar38 = 255.0;
        }
        dVar16 = modf(dVar33,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar40 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar40 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar40 = 255.0;
        }
        dVar16 = modf(dVar33,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar34 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar34 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar34 = 255.0;
        }
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
        *(uint *)(lVar14 + (long)(int)uVar26 * 4 + 0x20) =
             (int)fVar32 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar40 & 0xffU) << 0x10 |
             (int)fVar34 << 0x18;
        lVar14 = *unaff_x24;
        dVar16 = modf(dVar33,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar32 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar32 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar32 = 255.0;
        }
        dVar16 = modf(dVar33,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar38 = 255.0;
        }
        dVar16 = modf(dVar33,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar40 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar40 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar40 = 255.0;
        }
        dVar16 = modf(dVar33,(double *)&stack0x00000070);
        if (dVar16 == 0.5) {
          fVar34 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar34 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar34 = 255.0;
        }
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= uVar24) goto LAB_00e44400;
        *(uint *)(lVar14 + uVar25 * 4 + 0x20) =
             (int)fVar32 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar40 & 0xffU) << 0x10 |
             (int)fVar34 << 0x18;
      }
LAB_00e43400:
      lVar14 = *unaff_x24;
      if (lVar14 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar14 + 0x18) <= uVar2) goto LAB_00e44400;
      lVar14 = lVar14 + uVar17 * 4;
      fVar32 = (float)NEON_ucvtf((uint)*(byte *)(lVar14 + 0x23));
      *(char *)(lVar14 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar32);
      lVar14 = unaff_x19[0x5f];
      if (lVar14 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
      lVar14 = lVar14 + (long)(int)uVar28 * 4;
      fVar32 = (float)NEON_ucvtf((uint)*(byte *)(lVar14 + 0x23));
      *(char *)(lVar14 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar32);
      lVar14 = unaff_x19[0x5f];
      if (lVar14 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
      lVar14 = lVar14 + (long)(int)uVar26 * 4;
      fVar32 = (float)NEON_ucvtf((uint)*(byte *)(lVar14 + 0x23));
      *(char *)(lVar14 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar32);
      lVar14 = unaff_x19[0x5f];
      if (lVar14 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar14 + 0x18) <= uVar24) goto LAB_00e44400;
      lVar14 = lVar14 + uVar25 * 4;
      uVar30 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x374);
      fVar32 = (float)NEON_ucvtf((uint)*(byte *)(lVar14 + 0x23));
      *(char *)(lVar14 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar32);
      uVar13 = FUN_00e3703c();
      if ((uVar13 & 1) == 0) {
        lVar14 = *plVar29;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar14 = *plVar29;
        }
        if (*(int *)(*(long *)(lVar14 + 0xb8) + 0x20) == 1) {
          lVar14 = *unaff_x24;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar2) goto LAB_00e44400;
          puVar23 = (uint *)(lVar14 + uVar17 * 4 + 0x20);
          uVar5 = *puVar23;
          fVar38 = (float)FUN_026982b0((float)(uVar5 & 0xff) / 255.0,0);
          fVar40 = (float)FUN_026982b0((float)(uVar5 >> 8 & 0xff) / 255.0,0);
          fVar34 = (float)FUN_026982b0((float)(uVar5 >> 0x10 & 0xff) / 255.0,0);
          fVar32 = fVar38;
          if (1.0 < fVar38) {
            fVar32 = 1.0;
          }
          fVar32 = fVar32 * 255.0;
          if (fVar38 < 0.0) {
            fVar32 = unaff_s8;
          }
          dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar16 == 0.5) {
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar32 = (float)(int)(fVar32 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar32 = (float)(int)(fVar32 + -0.5);
          }
          fVar38 = fVar40;
          if (1.0 < fVar40) {
            fVar38 = 1.0;
          }
          fVar38 = fVar38 * 255.0;
          if (fVar40 < 0.0) {
            fVar38 = unaff_s8;
          }
          dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar16 == 0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          fVar40 = fVar34;
          if (1.0 < fVar34) {
            fVar40 = 1.0;
          }
          fVar36 = (float)(uVar5 >> 0x18) / 255.0;
          fVar40 = fVar40 * 255.0;
          if (fVar34 < 0.0) {
            fVar40 = unaff_s8;
          }
          dVar16 = modf((double)fVar40,(double *)&stack0x00000070);
          if (0.0 <= fVar40) {
            if (dVar16 == 0.5) {
              fVar40 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e43744;
            }
            fVar34 = (float)(int)(fVar40 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar40 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43744:
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = fVar40;
            }
          }
          else {
            fVar34 = (float)(int)(fVar40 + -0.5);
          }
          if (1.0 < fVar36) {
            fVar36 = 1.0;
          }
          fVar36 = fVar36 * 255.0;
          dVar16 = modf((double)fVar36,(double *)&stack0x00000070);
          if (0.0 <= fVar36) {
            if (dVar16 == 0.5) {
              fVar40 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar40 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar40 = (float)(int)(fVar36 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar40 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar40 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar40 = (float)(int)(fVar36 + -0.5);
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar2) goto LAB_00e44400;
          *puVar23 = (int)fVar32 & 0xffU | ((int)fVar38 & 0xffU) << 8 |
                     ((int)fVar34 & 0xffU) << 0x10 | (int)fVar40 << 0x18;
          lVar14 = *in_stack_00000030;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
          puVar23 = (uint *)(lVar14 + (long)(int)uVar28 * 4 + 0x20);
          uVar2 = *puVar23;
          fVar38 = (float)FUN_026982b0((float)(uVar2 & 0xff) / 255.0,0);
          fVar40 = (float)FUN_026982b0((float)(uVar2 >> 8 & 0xff) / 255.0,0);
          fVar34 = (float)FUN_026982b0((float)(uVar2 >> 0x10 & 0xff) / 255.0,0);
          fVar32 = fVar38;
          if (1.0 < fVar38) {
            fVar32 = 1.0;
          }
          fVar32 = fVar32 * 255.0;
          if (fVar38 < 0.0) {
            fVar32 = unaff_s8;
          }
          dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar16 == 0.5) {
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar32 = (float)(int)(fVar32 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar32 = (float)(int)(fVar32 + -0.5);
          }
          fVar38 = fVar40;
          if (1.0 < fVar40) {
            fVar38 = 1.0;
          }
          fVar38 = fVar38 * 255.0;
          if (fVar40 < 0.0) {
            fVar38 = unaff_s8;
          }
          dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar16 == 0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          fVar40 = fVar34;
          if (1.0 < fVar34) {
            fVar40 = 1.0;
          }
          fVar36 = (float)(uVar2 >> 0x18) / 255.0;
          fVar40 = fVar40 * 255.0;
          if (fVar34 < 0.0) {
            fVar40 = unaff_s8;
          }
          dVar16 = modf((double)fVar40,(double *)&stack0x00000070);
          if (0.0 <= fVar40) {
            if (dVar16 == 0.5) {
              fVar40 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e43a84;
            }
            fVar34 = (float)(int)(fVar40 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar40 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43a84:
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = fVar40;
            }
          }
          else {
            fVar34 = (float)(int)(fVar40 + -0.5);
          }
          if (1.0 < fVar36) {
            fVar36 = 1.0;
          }
          fVar36 = fVar36 * 255.0;
          dVar16 = modf((double)fVar36,(double *)&stack0x00000070);
          if (0.0 <= fVar36) {
            if (dVar16 == 0.5) {
              fVar40 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar40 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar40 = (float)(int)(fVar36 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar40 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar40 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar40 = (float)(int)(fVar36 + -0.5);
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar28) goto LAB_00e44400;
          *puVar23 = (int)fVar32 & 0xffU | ((int)fVar38 & 0xffU) << 8 |
                     ((int)fVar34 & 0xffU) << 0x10 | (int)fVar40 << 0x18;
          lVar14 = *in_stack_00000030;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
          puVar23 = (uint *)(lVar14 + (long)(int)uVar26 * 4 + 0x20);
          uVar2 = *puVar23;
          fVar38 = (float)FUN_026982b0((float)(uVar2 & 0xff) / 255.0,0);
          fVar40 = (float)FUN_026982b0((float)(uVar2 >> 8 & 0xff) / 255.0,0);
          fVar34 = (float)FUN_026982b0((float)(uVar2 >> 0x10 & 0xff) / 255.0,0);
          fVar32 = fVar38;
          if (1.0 < fVar38) {
            fVar32 = 1.0;
          }
          fVar32 = fVar32 * 255.0;
          if (fVar38 < 0.0) {
            fVar32 = unaff_s8;
          }
          dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar16 == 0.5) {
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar32 = (float)(int)(fVar32 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar32 = (float)(int)(fVar32 + -0.5);
          }
          fVar38 = fVar40;
          if (1.0 < fVar40) {
            fVar38 = 1.0;
          }
          fVar38 = fVar38 * 255.0;
          if (fVar40 < 0.0) {
            fVar38 = unaff_s8;
          }
          dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar16 == 0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          fVar40 = fVar34;
          if (1.0 < fVar34) {
            fVar40 = 1.0;
          }
          fVar36 = (float)(uVar2 >> 0x18) / 255.0;
          fVar40 = fVar40 * 255.0;
          if (fVar34 < 0.0) {
            fVar40 = unaff_s8;
          }
          dVar16 = modf((double)fVar40,(double *)&stack0x00000070);
          if (0.0 <= fVar40) {
            if (dVar16 == 0.5) {
              fVar40 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e43dbc;
            }
            fVar34 = (float)(int)(fVar40 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar40 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43dbc:
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = fVar40;
            }
          }
          else {
            fVar34 = (float)(int)(fVar40 + -0.5);
          }
          if (1.0 < fVar36) {
            fVar36 = 1.0;
          }
          fVar36 = fVar36 * 255.0;
          dVar16 = modf((double)fVar36,(double *)&stack0x00000070);
          if (0.0 <= fVar36) {
            if (dVar16 == 0.5) {
              fVar40 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar40 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar40 = (float)(int)(fVar36 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar40 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar40 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar40 = (float)(int)(fVar36 + -0.5);
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_00e44400;
          *puVar23 = (int)fVar32 & 0xffU | ((int)fVar38 & 0xffU) << 8 |
                     ((int)fVar34 & 0xffU) << 0x10 | (int)fVar40 << 0x18;
          lVar14 = *in_stack_00000030;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar24) goto LAB_00e44400;
          puVar23 = (uint *)(lVar14 + uVar25 * 4 + 0x20);
          uVar2 = *puVar23;
          fVar38 = (float)FUN_026982b0((float)(uVar2 & 0xff) / 255.0,0);
          fVar40 = (float)FUN_026982b0((float)(uVar2 >> 8 & 0xff) / 255.0,0);
          fVar34 = (float)FUN_026982b0((float)(uVar2 >> 0x10 & 0xff) / 255.0,0);
          fVar32 = fVar38;
          if (1.0 < fVar38) {
            fVar32 = 1.0;
          }
          fVar32 = fVar32 * 255.0;
          if (fVar38 < 0.0) {
            fVar32 = unaff_s8;
          }
          dVar16 = modf((double)fVar32,(double *)&stack0x00000070);
          if (0.0 <= fVar32) {
            if (dVar16 == 0.5) {
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar32 = (float)(int)(fVar32 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar32 = (float)(int)(fVar32 + -0.5);
          }
          uVar10 = 0x3f800000;
          fVar38 = fVar40;
          if (1.0 < fVar40) {
            fVar38 = 1.0;
          }
          fVar38 = fVar38 * 255.0;
          if (fVar40 < 0.0) {
            fVar38 = unaff_s8;
          }
          dVar16 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar16 == 0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + 0.5);
            }
          }
          else if (dVar16 == -0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          fVar40 = fVar34;
          if (1.0 < fVar34) {
            fVar40 = 1.0;
          }
          fVar36 = (float)(uVar2 >> 0x18) / 255.0;
          fVar40 = fVar40 * 255.0;
          if (fVar34 < 0.0) {
            fVar40 = unaff_s8;
          }
          dVar16 = modf((double)fVar40,(double *)&stack0x00000070);
          if (0.0 <= fVar40) {
            if (dVar16 == 0.5) {
              fVar40 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e440f4;
            }
            fVar34 = (float)(int)(fVar40 + 0.5);
          }
          else if (dVar16 == -0.5) {
            fVar40 = (float)_fStack0000000000000070 + -1.0;
LAB_00e440f4:
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = fVar40;
            }
          }
          else {
            fVar34 = (float)(int)(fVar40 + -0.5);
          }
          if (1.0 < fVar36) {
            fVar36 = 1.0;
          }
          fVar36 = fVar36 * 255.0;
          dVar16 = modf((double)fVar36,(double *)&stack0x00000070);
          if (0.0 <= fVar36) {
            uVar30 = 0;
            if (dVar16 == 0.5) {
              fVar40 = 1.0;
              goto LAB_00e44170;
            }
            fVar36 = (float)(int)(fVar36 + 0.5);
          }
          else {
            uVar30 = 0;
            if (dVar16 == -0.5) {
              fVar40 = -1.0;
LAB_00e44170:
              fVar40 = (float)_fStack0000000000000070 + fVar40;
              uVar30 = (ulong)(uint)fVar40;
              fVar36 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar36 = fVar40;
              }
            }
            else {
              fVar36 = (float)(int)(fVar36 + -0.5);
            }
          }
          unaff_d14 = _fStack0000000000000048 & 0xffffffff;
          if (*(uint *)(lVar14 + 0x18) <= uVar24) goto LAB_00e44400;
          *puVar23 = (int)fVar32 & 0xffU | ((int)fVar38 & 0xffU) << 8 |
                     ((int)fVar34 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
          unaff_x24 = in_stack_00000030;
        }
      }
      unaff_x27 = (undefined8 *)StringLiteral_4992;
      unaff_x22 = (undefined8 *)OVREyeGaze_TypeInfo;
      unaff_x21 = unaff_x21 + 1;
      unaff_x25 = &PTR_FUN_03774000;
      if (unaff_x21 == in_stack_00000018) {
        if (((unaff_x19[0x58] == 0) || (iVar9 = FUN_026c82cc(unaff_x19[0x58],0), iVar9 < 1)) &&
           (unaff_x19[0x59] == 0)) goto LAB_00e443b0;
        puVar7 = Method_Sirenix_Utilities_RectExtensions_TakeFromDir__;
        if ((unaff_x19[0xcb] == 0) || (unaff_x19[0xf] == 0)) goto LAB_00e443fc;
        iVar9 = *(int *)(unaff_x19[0xf] + 0x10);
        plVar11 = unaff_x19 + 0xcb;
        if (iVar9 != *(int *)(unaff_x19[0xcb] + 0x18)) {
          FUN_010afdd4(plVar11,iVar9,
                       *(undefined8 *)Method_Sirenix_Utilities_RectExtensions_TakeFromDir__);
        }
        if ((unaff_x19[0xcc] == 0) || (lVar14 = unaff_x19[0xf], lVar14 == 0)) goto LAB_00e443fc;
        plVar29 = unaff_x19 + 0xcc;
        if (*(int *)(lVar14 + 0x10) != *(int *)(unaff_x19[0xcc] + 0x18)) {
          FUN_010afdd4(plVar29,*(int *)(lVar14 + 0x10),*(undefined8 *)puVar7);
          lVar14 = unaff_x19[0xf];
          if (lVar14 == 0) goto LAB_00e443fc;
        }
        uVar2 = *(uint *)(lVar14 + 0x10);
        if ((int)uVar2 < 1) goto LAB_00e44358;
        uVar17 = 0;
        lVar14 = 0x20;
        goto LAB_00e442cc;
      }
      if (unaff_x19[9] == 0) goto LAB_00e443fc;
      FUN_0132138c(unaff_x19[9],unaff_x21 & 0xffffffff,&stack0x00000070,
                   *(undefined8 *)StringLiteral_4992);
      *in_stack_00000060 = _fStack0000000000000070;
      if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
      iVar9 = FUN_00e4e99c();
      if (iVar9 <= *(int *)((long)unaff_x19 + 0x38c)) {
        if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
        *(undefined1 *)((long)*in_stack_00000060 + 0x165) = 1;
      }
      if (*(float *)(unaff_x19 + 0x14) == 0.0) {
        FUN_00e45d2c();
      }
      *(undefined2 *)(unaff_x19 + 0xdc) = 0;
      unaff_x26 = in_stack_00000060;
      unaff_x28 = in_stack_00000020;
      if (*(char *)((long)unaff_x19 + 0xf6) != '\0') {
        dVar16 = *in_stack_00000060;
        if ((dVar16 == 0.0) || (*(long *)((long)dVar16 + 0x78) == 0)) goto LAB_00e443fc;
        fVar38 = *(float *)(*(long *)((long)dVar16 + 0x78) + 0x18);
        fVar32 = DAT_028aa034;
        if (fVar38 != 0.0) {
          fVar32 = fVar38;
        }
        unaff_x23 = in_stack_00000040;
        if ((0.0 < (unaff_s15 - *(float *)((long)dVar16 + 100)) / fVar32) &&
           (*(char *)((long)dVar16 + 0x165) == '\0')) {
          *(undefined1 *)((long)dVar16 + 0x165) = 1;
          *(undefined1 *)((long)unaff_x19 + 0x6e1) = 1;
          if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
          sVar8 = FUN_015fa29c(unaff_x19[0xf],unaff_x21 & 0xffffffff,0);
          if (sVar8 != 0x200b) {
            *(undefined1 *)(unaff_x19 + 0xdc) = 1;
            if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
            sVar8 = FUN_015fa29c(unaff_x19[0xf],unaff_x21 & 0xffffffff,0);
            if (sVar8 != 0x20) {
              if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
              sVar8 = FUN_015fa29c(unaff_x19[0xf],unaff_x21 & 0xffffffff,0);
              if (sVar8 != 10) {
                lVar14 = unaff_x19[0xca];
                if (lVar14 == 0) goto LAB_00e443fc;
                fVar40 = *(float *)(lVar14 + 0x48);
                fVar32 = *(float *)(unaff_x19 + 0x4b);
                fVar34 = fVar40 + *(float *)((long)unaff_x19 + 0x50c);
                fVar38 = *(float *)(unaff_x19 + 0x4a);
                if (fVar40 <= *(float *)(unaff_x19 + 0x4a)) {
                  fVar38 = fVar40;
                }
                *(float *)(unaff_x19 + 0x4a) = fVar38;
                fVar38 = *(float *)((long)unaff_x19 + 0x254);
                if (fVar34 <= *(float *)((long)unaff_x19 + 0x254)) {
                  fVar38 = fVar34;
                }
                *(float *)((long)unaff_x19 + 0x254) = fVar38;
                fVar38 = (float)FUN_00e5ef30(*(undefined4 *)((long)unaff_x19 + 0x134),lVar14,0);
                fVar38 = fVar38 + *(float *)(unaff_x19 + 0xa1) + *(float *)((long)unaff_x19 + 0x55c)
                ;
                if (fVar32 <= fVar38) {
                  fVar32 = fVar38;
                }
                *(float *)(unaff_x19 + 0x4b) = fVar32;
              }
            }
          }
          iVar39 = *(int *)((long)unaff_x19 + 0x38c);
          if (*(int *)((long)unaff_x19 + 0x38c) <= iVar9) {
            iVar39 = iVar9;
          }
          *(int *)((long)unaff_x19 + 0x38c) = iVar39;
        }
        goto LAB_00e3c40c;
      }
      uVar10 = FUN_0269e56c(0);
      unaff_x23 = in_stack_00000040;
    } while ((fStack000000000000004c == 0.0) || ((uVar10 & 1) == 0));
  } while( true );
LAB_00e442cc:
  do {
    if (unaff_x19[9] == 0) goto LAB_00e443fc;
    FUN_0132138c(unaff_x19[9],uVar17 & 0xffffffff,&stack0x00000070,*unaff_x27);
    unaff_x19[0xca] = (long)_fStack0000000000000070;
    if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
    lVar15 = unaff_x19[0xcb];
    uVar31 = FUN_00e58a1c(_fStack0000000000000070,0);
    if (lVar15 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar15 + 0x18) <= uVar17) {
LAB_00e44400:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    puVar1 = (undefined4 *)(lVar15 + lVar14);
    *puVar1 = uVar31;
    puVar1[1] = (int)uVar30;
    puVar1[2] = (int)uVar10;
    lVar15 = unaff_x19[0xca];
    if ((lVar15 == 0) || (lVar22 = unaff_x19[0xcc], lVar22 == 0)) goto LAB_00e443fc;
    if (*(uint *)(lVar22 + 0x18) <= uVar17) goto LAB_00e44400;
    uVar31 = *(undefined4 *)(lVar15 + 0x4c);
    uVar17 = uVar17 + 1;
    puVar21 = (undefined8 *)(lVar22 + lVar14);
    lVar14 = lVar14 + 0xc;
    *puVar21 = *(undefined8 *)(lVar15 + 0x44);
    *(undefined4 *)(puVar21 + 1) = uVar31;
  } while (uVar2 != uVar17);
LAB_00e44358:
  if (unaff_x19[0x58] != 0) {
    FUN_013e0924(unaff_x19[0x58],*in_stack_00000038,*plVar11,*plVar29,
                 *(undefined8 *)StringLiteral_225);
  }
  lVar14 = unaff_x19[0x59];
  if (lVar14 != 0) {
    (**(code **)(lVar14 + 0x18))
              (*(undefined8 *)(lVar14 + 0x40),*in_stack_00000038,*plVar11,*plVar29,
               *(undefined8 *)(lVar14 + 0x28));
  }
  *(undefined1 *)(unaff_x19 + 0x2e) = 1;
LAB_00e443b0:
  lVar14 = __start_il2cpp();
  if (lVar14 != 0) {
    if ((*(char *)(lVar14 + 0x109) != '\0') || (*(char *)((long)unaff_x19 + 0xa9) != '\0')) {
      *(undefined1 *)(unaff_x19 + 0x2e) = 0;
    }
    return;
  }
LAB_00e443fc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


