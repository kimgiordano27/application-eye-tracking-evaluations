/*
FUNCTION_NAME: UnityEngine.AndroidJavaProxy$$Invoke
ENTRY_POINT: 0354a548
PROGRAM: vrlegs-libil2cpp.so
SCORE: 169
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_3
*/


void UnityEngine_AndroidJavaProxy__Invoke(void)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined *puVar9;
  char in_NG;
  undefined1 in_ZR;
  bool bVar10;
  char in_OV;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  int *piVar19;
  ulong uVar20;
  undefined1 uVar21;
  char cVar22;
  long lVar23;
  undefined4 *puVar24;
  uint uVar25;
  long lVar26;
  float *pfVar27;
  code *pcVar28;
  uint uVar29;
  uint uVar30;
  float *pfVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long *unaff_x19;
  uint *unaff_x20;
  uint unaff_w21;
  uint uVar37;
  long *unaff_x22;
  uint unaff_w23;
  int iVar38;
  ulong unaff_x24;
  long *plVar39;
  uint unaff_w26;
  long lVar40;
  long lVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  float fVar48;
  undefined4 uVar49;
  float unaff_s8;
  float fVar50;
  float fVar51;
  float fVar52;
  float unaff_s10;
  float fVar53;
  float unaff_s12;
  float fVar54;
  ulong unaff_d13;
  undefined4 uVar55;
  float unaff_s14;
  uint uVar56;
  float fVar57;
  ulong unaff_d15;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  int iStack000000000000002c;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  undefined8 in_stack_00000038;
  float fStack0000000000000040;
  undefined8 in_stack_00000048;
  float in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  ulong in_stack_00000060;
  byte bStack0000000000000068;
  byte bStack000000000000006c;
  float fStack0000000000000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  float in_stack_00000088;
  float fStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a8;
  long *in_stack_000000b8;
  undefined4 uStack00000000000000c0;
  float fStack00000000000000c4;
  undefined8 in_stack_000000c8;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  int iStack00000000000000d8;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  float in_stack_000000f0;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float fStack0000000000000120;
  float fStack0000000000000124;
  float in_stack_00000128;
  float fStack0000000000000134;
  float in_stack_00000138;
  float in_stack_00000150;
  undefined8 in_stack_00000168;
  long *in_stack_00000170;
  long *in_stack_00000178;
  int in_stack_00000180;
  undefined8 in_stack_00000188;
  float fStack0000000000000190;
  float fStack0000000000000194;
  float in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  float in_stack_000001b0;
  uint in_stack_000008b0;
  undefined4 in_stack_000008b4;
  undefined8 in_stack_000008b8;
  undefined4 in_stack_000008c0;
  long in_stack_00001708;
  uint in_stack_0000179c;
  uint in_stack_000017b8;
  undefined8 in_stack_000017c0;
  undefined8 in_stack_000017c8;
  float in_stack_000017d0;
  undefined8 in_stack_000017d8;
  char in_stack_000017e4;
  float in_stack_000017e8;
  uint in_stack_000017ec;
  
  do {
    if (!(bool)in_ZR && in_NG == in_OV) {
      in_stack_00000168._4_4_ = unaff_s8 - unaff_s10;
    }
    do {
      do {
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fStack00000000000000d0 = *(float *)(*in_stack_00000178 + 0x1b4);
        fVar46 = in_stack_000000f0;
LAB_0354a568:
        fVar50 = *(float *)(unaff_x19 + 200);
        fVar43 = (float)FUN_03776ca4(&stack0x000017a0,0);
        in_stack_000000f0 = (float)unaff_d13;
        fVar50 = fVar50 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                          in_stack_000000f0 *
                          (unaff_s12 + ((fVar43 - in_stack_00000168._4_4_) - unaff_s10));
        fVar43 = (float)FUN_03776cac(&stack0x000017a0,0);
        fVar57 = *(float *)((long)unaff_x19 + 0x61c) +
                 ((unaff_s14 +
                  in_stack_000000f0 * ((float)unaff_d15 + in_stack_00000168._4_4_ + fVar43)) -
                 *(float *)(unaff_x19 + 0x9b));
        fVar43 = (float)FUN_03776c9c(&stack0x000017a0,0);
        fStack0000000000000134 =
             fVar57 - in_stack_000000f0 *
                      (in_stack_00000168._4_4_ + in_stack_00000168._4_4_ + fVar43);
        fVar43 = (float)FUN_03776c94(&stack0x000017a0,0);
        fVar48 = fVar50 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                          in_stack_000000f0 *
                          (unaff_s10 + unaff_s10 +
                          in_stack_00000168._4_4_ + in_stack_00000168._4_4_ + fVar43);
        fStack0000000000000104 = fVar50;
        fVar43 = fVar48;
        if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
           ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
          fVar44 = (float)(int)unaff_x19[0xbe] * fStack0000000000000058;
          fVar43 = (float)FUN_03776cac(&stack0x000017a0,0);
          fVar45 = fVar44 * in_stack_000000f0 * (unaff_s10 + in_stack_00000168._4_4_ + fVar43);
          fVar43 = (float)FUN_03776cac(&stack0x000017a0,0);
          fVar42 = (float)FUN_03776c9c(&stack0x000017a0,0);
          fVar57 = fVar57 + 0.0;
          fStack0000000000000134 = fStack0000000000000134 + 0.0;
          fVar44 = fVar44 * in_stack_000000f0 *
                            (((fVar43 - fVar42) - in_stack_00000168._4_4_) - unaff_s10);
          fVar42 = fVar50 + fVar45;
          fVar43 = fVar48 + fVar44;
          fVar52 = (fVar45 - fVar44) * 0.5;
          fVar50 = (fVar50 + fVar44) - fVar52;
          fVar48 = (fVar48 + fVar45) - fVar52;
          fStack0000000000000104 = fVar42 - fVar52;
          fVar43 = fVar43 - fVar52;
        }
        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
          fVar44 = 0.0;
          fVar45 = 0.0;
          fVar51 = 0.0;
          fStack0000000000000100 = 0.0;
          fVar52 = fStack0000000000000134;
          fVar42 = fVar57;
        }
        else {
          thunk_FUN_036bc400(_fStack0000000000000070,0);
          fVar53 = (fVar48 + fVar50) * 0.5;
          fVar54 = (fStack0000000000000134 + fVar57) * 0.5;
          fVar57 = fVar57 - fVar54;
          fStack0000000000000100 = 0.0;
          fVar42 = fVar57;
          fStack0000000000000104 =
               (float)FUN_036bdd2c(fStack0000000000000104 - fVar53,_fStack0000000000000070,0);
          fStack0000000000000104 = fVar53 + fStack0000000000000104;
          fStack0000000000000100 = fStack0000000000000100 + 0.0;
          fVar52 = fStack0000000000000134 - fVar54;
          fVar44 = 0.0;
          fStack0000000000000134 = fVar52;
          fVar50 = (float)FUN_036bdd2c(fVar50 - fVar53,_fStack0000000000000070,0);
          fVar50 = fVar53 + fVar50;
          fVar44 = fVar44 + 0.0;
          fStack0000000000000134 = fVar54 + fStack0000000000000134;
          fVar51 = 0.0;
          fVar48 = (float)FUN_036bdd2c(fVar48 - fVar53,_fStack0000000000000070,0);
          fVar48 = fVar53 + fVar48;
          fVar57 = fVar54 + fVar57;
          fVar51 = fVar51 + 0.0;
          fVar45 = 0.0;
          fVar43 = (float)FUN_036bdd2c(fVar43 - fVar53,_fStack0000000000000070,0);
          fVar43 = fVar53 + fVar43;
          fVar45 = fVar45 + 0.0;
          fVar52 = fVar54 + fVar52;
          fVar42 = fVar54 + fVar42;
        }
        if (*unaff_x22 == 0) goto LAB_0354fbf4;
        lVar23 = *(long *)(*unaff_x22 + 0x38);
        uVar17 = unaff_d13 & 0xffffffff;
        if (lVar23 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar23 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
        *(float *)(lVar23 + 0x11c) = fVar50;
        *(float *)(lVar23 + 0x120) = fStack0000000000000134;
        *(float *)(lVar23 + 0x124) = fVar44;
        if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar23 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
        *(float *)(lVar23 + 0x114) = fVar42;
        *(float *)(lVar23 + 0x110) = fStack0000000000000104;
        *(float *)(lVar23 + 0x118) = fStack0000000000000100;
        if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar23 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
        *(float *)(lVar23 + 0x128) = fVar48;
        *(float *)(lVar23 + 300) = fVar57;
        *(float *)(lVar23 + 0x130) = fVar51;
        if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar23 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
        *(float *)(lVar23 + 0x134) = fVar43;
        *(float *)(lVar23 + 0x138) = fVar52;
        *(float *)(lVar23 + 0x13c) = fVar45;
        if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
        goto LAB_0354fbf4;
        uVar12 = *unaff_x20;
        lVar40 = (long)(int)uVar12;
        if (*(uint *)(lVar23 + 0x18) <= uVar12)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar26 = lVar23 + lVar40 * unaff_x24;
        *(int *)(lVar26 + 0x140) = (int)unaff_x19[200];
        fVar57 = *(float *)(unaff_x19 + 0x9b);
        uVar20 = (ulong)(uint)fVar57;
        fVar43 = *(float *)((long)unaff_x19 + 0x61c);
        *(float *)(lVar26 + 0x15c) = (fVar48 - fVar50) / (fVar42 - fStack0000000000000134);
        *(float *)(lVar26 + 0x14c) = (unaff_s14 - fVar57) + fVar43;
        fVar50 = fStack0000000000000124 * in_stack_000000f0;
        if (*(int *)((long)unaff_x19 + 0x644) == 0) {
          fVar50 = fVar50 / in_stack_00000150;
          fStack0000000000000120 = (fStack0000000000000120 * in_stack_000000f0) / in_stack_00000150;
        }
        else {
          fStack0000000000000120 = fStack0000000000000120 * in_stack_000000f0;
        }
        uVar25 = *(uint *)(unaff_x19 + 0x93);
        if ((unaff_w21 == 0) || (uVar12 == uVar25)) {
          fStack0000000000000120 = fVar43 + fStack0000000000000120;
          fVar50 = fVar43 + fVar50;
          fVar42 = fStack0000000000000120;
          fVar48 = fVar50;
          if (fVar43 != 0.0) {
            fVar48 = (fVar50 - fVar43) / *(float *)((long)unaff_x19 + 0x404);
            fVar42 = (fStack0000000000000120 - fVar43) / *(float *)((long)unaff_x19 + 0x404);
            if (fVar48 <= fVar50) {
              fVar48 = fVar50;
            }
            if (fStack0000000000000120 <= fVar42) {
              fVar42 = fStack0000000000000120;
            }
          }
          lVar23 = lVar23 + lVar40 * unaff_x24;
          fVar43 = fVar48;
          if (fVar48 <= *(float *)(unaff_x19 + 0x99)) {
            fVar43 = *(float *)(unaff_x19 + 0x99);
          }
          fVar44 = fVar42;
          if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar42) {
            fVar44 = *(float *)((long)unaff_x19 + 0x4cc);
          }
          *(float *)((long)unaff_x19 + 0x4cc) = fVar44;
          *(float *)(unaff_x19 + 0x99) = fVar43;
          *(float *)(lVar23 + 0x154) = fVar48;
          *(float *)(lVar23 + 0x158) = fVar42;
          *(float *)(lVar23 + 0x148) = fVar50 - fVar57;
          *(float *)(unaff_x19 + 0x98) = fVar50 - fVar57;
          *(float *)(lVar23 + 0x150) = fStack0000000000000120 - fVar57;
          *(float *)((long)unaff_x19 + 0x4c4) = fStack0000000000000120 - fVar57;
          if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
            *(float *)(unaff_x19 + 0x97) = fVar43;
            if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
            fVar43 = *(float *)((long)unaff_x19 + 0x4bc);
            fVar48 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
            in_stack_00000150 = (in_stack_000000f0 * fVar48) / in_stack_00000150;
            uVar20 = (ulong)*(uint *)(unaff_x19 + 0x9b);
            if (fVar43 <= in_stack_00000150) {
              fVar43 = in_stack_00000150;
            }
            *(float *)((long)unaff_x19 + 0x4bc) = fVar43;
          }
          if ((float)uVar20 == 0.0) {
            fVar43 = *(float *)(in_stack_00000078 + 0x208);
            if (*(float *)(in_stack_00000078 + 0x208) <= fVar50) {
              fVar43 = fVar50;
            }
            *(float *)(in_stack_00000078 + 0x208) = fVar43;
          }
        }
        else {
          fVar50 = *(float *)(unaff_x19 + 0x99);
          lVar23 = lVar23 + lVar40 * unaff_x24;
          *(float *)(lVar23 + 0x154) = fVar50;
          fVar43 = *(float *)((long)unaff_x19 + 0x4cc);
          fVar50 = fVar50 - fVar57;
          *(float *)(lVar23 + 0x148) = fVar50;
          *(float *)(lVar23 + 0x158) = fVar43;
          *(float *)(unaff_x19 + 0x98) = fVar50;
          fVar43 = fVar43 - fVar57;
          *(float *)(lVar23 + 0x150) = fVar43;
          *(float *)((long)unaff_x19 + 0x4c4) = fVar43;
        }
        lVar23 = *unaff_x22;
        if ((lVar23 == 0) || (lVar40 = *(long *)(lVar23 + 0x38), lVar40 == 0)) goto LAB_0354fbf4;
        uVar56 = *unaff_x20;
        if (*(uint *)(lVar40 + 0x18) <= uVar56)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar40 = lVar40 + (long)(int)uVar56 * unaff_x24;
        *(undefined1 *)(lVar40 + 0x194) = 0;
        uVar29 = *(uint *)(unaff_x19 + 0x4f);
        iVar38 = (int)unaff_x24;
        uVar37 = in_stack_000017ec;
        if ((in_stack_000017ec == 9) ||
           (((((unaff_w21 == 0 && (in_stack_000017ec != 3)) && (in_stack_000017ec != 0x200b)) &&
             (in_stack_000017ec != 0xad)) ||
            (((in_stack_000017ec == 0xad & (bStack000000000000006c ^ 0xff)) != 0 ||
             (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
          *(undefined1 *)(lVar40 + 0x194) = 1;
          pfVar27 = _fStack00000000000000a0;
          pfVar31 = _fStack00000000000000a8;
          if (unaff_w23 != 0) {
            lVar23 = *(long *)(lVar23 + 0x50);
            if (lVar23 == 0) goto LAB_0354fbf4;
            if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            pfVar31 = (float *)(lVar23 + 0x60);
            pfVar27 = (float *)(lVar23 + 100);
          }
          fVar43 = *pfVar31;
          fVar48 = *pfVar27;
          fVar50 = *(float *)(unaff_x19 + 0x6c);
          fVar57 = *(float *)(unaff_x19 + 200);
          in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar43) - fVar48;
          bVar10 = true;
          if ((fVar50 <= in_stack_000000f8._4_4_) && (bVar10 = false, !NAN(fVar50))) {
            bVar10 = fVar50 == -1.0;
          }
          if (!bVar10) {
            in_stack_000000f8._4_4_ = fVar50;
          }
          fVar50 = 0.0;
          if ((char)unaff_x19[0x1e] == '\0') {
            fVar50 = (float)FUN_03776cb4(&stack0x000017a0,0);
            uVar20 = (ulong)*(uint *)(unaff_x19 + 0x9b);
          }
          fVar42 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar44 = *(float *)((long)unaff_x19 + 0x4cc);
          if (in_stack_000017ec != 0xad) {
            fVar46 = in_stack_000000f0;
          }
          fVar45 = (float)uVar20;
          fVar52 = 0.0;
          if ((0.0 < fVar45) && (fVar52 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
            fVar52 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
          }
          uVar56 = *unaff_x20;
          fVar52 = (*(float *)(unaff_x19 + 0x97) - (fVar44 - fVar45)) + fVar52;
          if (fStack00000000000000c4 < fVar52) {
            if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
              *(uint *)((long)unaff_x19 + 0x2e4) = uVar56;
            }
            puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            uVar18 = DAT_00d37868;
            if ((char)unaff_x19[0x47] != '\0') {
              fVar51 = *(float *)(unaff_x19 + 0x59);
              if (((fVar51 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar45)) &&
                 (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                fVar46 = *(float *)((long)unaff_x19 + 700) +
                         ((fStack0000000000000018 - fVar52) / (float)(int)unaff_x19[0x95]) /
                         in_stack_00000050;
                if (fVar46 <= fVar51) {
                  fVar46 = fVar51;
                }
                goto UnityEngine_AndroidJavaObject___ctor;
              }
              fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
              fVar52 = *(float *)(unaff_x19 + 0x4a);
              uVar20 = (ulong)(uint)fVar52;
              if ((fVar52 < fVar45) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                fVar46 = (fVar45 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                if (fVar46 <= DAT_00d38b84) {
                  fVar46 = DAT_00d38b84;
                }
                fVar50 = (fVar45 - fVar46) * 20.0 + 0.5;
                *(float *)((long)unaff_x19 + 0x23c) = fVar45;
                fVar46 = DAT_00d38e60;
                if (fVar50 != INFINITY) {
                  fVar46 = (float)(int)fVar50 / 20.0;
                }
                if (fVar46 <= fVar52) {
                  fVar46 = fVar52;
                }
                goto LAB_0354d004;
              }
            }
            switch((int)unaff_x19[0x5c]) {
            case 1:
              lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar23 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar23 = *(long *)puVar9;
              }
              lVar40 = *(long *)(lVar23 + 0xb8);
              lVar23 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
              if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
                lVar23 = FUN_01a46ff8(lVar23);
              }
              piVar19 = (int *)thunk_FUN_01a59484(lVar40 + 0x11f0,
                                                  *(long *)(*(long *)(*(long *)(lVar23 + 0xc0) + 8)
                                                           + 0x80) + 0xa0);
              puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*piVar19 == 0) {
LAB_0354cf2c:
                in_stack_000017d8 = DAT_00d37868;
                unaff_x20[0] = 0;
                unaff_x20[1] = 0;
                in_stack_000017b8 = 0xffffffff;
              }
              else {
                lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar23 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar23 = *(long *)puVar9;
                }
                FUN_0209b778(*(long *)(lVar23 + 0xb8) + 0x11f0,&stack0x000008b0,
                             *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                memcpy(&stack0x00001390,&stack0x000008b0,0x378);
LAB_0354b394:
                iVar11 = FUN_0358c15c();
LAB_0354b3a0:
                iVar13 = *(int *)((long)unaff_x19 + 0x494) + -1;
                *(int *)((long)unaff_x19 + 0x494) = iVar13;
                in_stack_00000180 = in_stack_00000180 + 1;
                in_stack_000017b8 = iVar11 - 1;
                in_stack_000017d8 = CONCAT44(0x2026,iVar13);
              }
              goto LAB_03549564;
            default:
              goto switchD_0354ad3c_caseD_2;
            case 3:
              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
LAB_0354af20:
              in_stack_000017b8 = FUN_0358c15c();
              break;
            case 5:
              if ((uVar56 == 0) || ((int)in_stack_000017b8 < 0)) {
                *unaff_x20 = 0;
                in_stack_000017b8 = 0xffffffff;
                in_stack_000017d8 = uVar18;
              }
              else {
                fVar46 = *(float *)(unaff_x19 + 0x99);
                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                in_stack_000017b8 = FUN_0358c15c();
                if (fStack00000000000000c4 < fVar46 - fVar44) break;
                *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
                uVar20 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) +
                                   0x15a8);
                *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                lVar23 = NEON_rev64(uVar20,4);
                unaff_x19[0x99] = lVar23;
                *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                *(undefined8 *)(in_stack_00000078 + 0x208) = 0;
                *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
              }
              goto LAB_03549564;
            case 6:
              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              in_stack_000017b8 = FUN_0358c15c();
              lVar23 = unaff_x19[0x5d];
              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
              }
              uVar17 = FUN_036cee6c(lVar23,0,0);
              if ((uVar17 & 1) != 0) {
                plVar39 = (long *)unaff_x19[0x5d];
                uVar18 = (**(code **)(*unaff_x19 + 0x518))();
                if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
                (**(code **)(*plVar39 + 0x528))(plVar39,uVar18,*(undefined8 *)(*plVar39 + 0x530));
                lVar23 = unaff_x19[0x5d];
                if (lVar23 == 0) goto LAB_0354fbf4;
                *(int *)(lVar23 + 0x400) = (int)unaff_x19[0x80];
                FUN_0357ee30(lVar23,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                plVar39 = (long *)unaff_x19[0x5d];
                if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
                (**(code **)(*plVar39 + 0x7a8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7b0));
                *(undefined1 *)(unaff_x19 + 0x5f) = 1;
              }
            }
LAB_0354b0e0:
            in_stack_000017d8 = CONCAT44(3,uVar56);
            goto LAB_03549564;
          }
switchD_0354ad3c_caseD_2:
          puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          fVar50 = ABS(fVar57) + fVar50 * (1.0 - fVar42) * fVar46;
          fVar46 = 1.0;
          if ((uVar29 & 0x18) != 0) {
            fVar46 = DAT_00d38acc;
          }
          fVar57 = fVar46 * in_stack_000000f8._4_4_;
          if (fVar50 <= fVar57) {
LAB_0354b8e4:
            if (in_stack_000017ec == 0xad) {
              if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
                if (*unaff_x20 < *(uint *)(lVar23 + 0x18)) {
                  *(undefined1 *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
                  goto LAB_0354ba38;
                }
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              }
              goto LAB_0354fbf4;
            }
            if (in_stack_000017ec != 9) {
              if (*(int *)((long)unaff_x19 + 0x644) == 1) {
                (**(code **)(*unaff_x19 + 0x898))(fVar57,unaff_s10);
              }
              else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                (**(code **)(*unaff_x19 + 0x888))(in_stack_00000168._4_4_);
              }
              uVar56 = *unaff_x20;
              if ((in_stack_00000060 & 1) != 0) {
                *(uint *)(in_stack_00000078 + 0x1f0) = uVar56;
              }
              *(uint *)((long)unaff_x19 + 0x4a4) = uVar56;
              *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar23 = *(long *)(unaff_x19[0x6d] + 0x50), lVar23 != 0)) {
                if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar23 + 0x18)) {
                  lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                  in_stack_00000060 = 0;
                  *(float *)(lVar23 + 0x60) = fVar43;
                  *(float *)(lVar23 + 100) = fVar48;
                  goto LAB_0354ba38;
                }
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              }
              goto LAB_0354fbf4;
            }
            lVar23 = *unaff_x22;
            if ((lVar23 == 0) || (lVar40 = *(long *)(lVar23 + 0x38), lVar40 == 0))
            goto LAB_0354fbf4;
            uVar56 = *unaff_x20;
            if (uVar56 < *(uint *)(lVar40 + 0x18)) {
              *(undefined1 *)(lVar40 + (long)(int)uVar56 * unaff_x24 + 0x194) = 0;
              *(uint *)((long)unaff_x19 + 0x4a4) = uVar56;
              lVar40 = *(long *)(lVar23 + 0x50);
              if (lVar40 != 0) {
                if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar40 + 0x18)) {
                  lVar40 = lVar40 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                  *(int *)(lVar40 + 0x2c) = *(int *)(lVar40 + 0x2c) + 1;
                  goto LAB_0354b950;
                }
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              }
              goto LAB_0354fbf4;
            }
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          uVar20 = (ulong)(uint)unaff_s10;
          if (((char)unaff_x19[0x5b] != '\0') && (uVar56 != *(uint *)(unaff_x19 + 0x93))) {
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            in_stack_000017b8 = FUN_0358c15c();
            if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
              lVar23 = *unaff_x22;
              if ((lVar23 == 0) || (lVar40 = *(long *)(lVar23 + 0x38), lVar40 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar40 + 0x18) <= *unaff_x20)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              fVar57 = *(float *)(unaff_x19 + 0x9b);
              fVar42 = 0.0;
              if ((0.0 < fVar57) && (fVar42 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                fVar42 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
              }
              fVar42 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                       *(float *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                       (fVar42 - *(float *)((long)unaff_x19 + 0x4cc)) +
                       in_stack_00000050 *
                       (in_stack_00000048._4_4_ + *(float *)((long)unaff_x19 + 700));
            }
            else {
              lVar23 = unaff_x19[0x6d];
              *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
              if (lVar23 == 0) goto LAB_0354fbf4;
              fVar57 = *(float *)(unaff_x19 + 0x9b);
              fVar42 = *(float *)(unaff_x19 + 0x58) +
                       fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
            }
            puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar23 = *(long *)(lVar23 + 0x38);
            if (lVar23 != 0) {
              uVar32 = *(uint *)((long)unaff_x19 + 0x494);
              if ((*(uint *)(lVar23 + 0x18) <= uVar32) ||
                 (uVar5 = uVar32 - 1, *(uint *)(lVar23 + 0x18) <= uVar5))
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              uVar20 = (ulong)(uint)(fVar42 + *(float *)(unaff_x19 + 0x97));
              fVar44 = (fVar42 + *(float *)(unaff_x19 + 0x97) + fVar57) -
                       *(float *)(lVar23 + (long)(int)uVar32 * unaff_x24 + 0x158);
              if (((bStack000000000000006c & 1) == 0 &&
                   *(short *)(lVar23 + (long)(int)uVar5 * (long)iVar38 + 0x20) == 0xad) &&
                 ((fVar44 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
                bStack000000000000006c = 0;
                *unaff_x20 = uVar5;
                in_stack_000017b8 = in_stack_000017b8 - 1;
                in_stack_000017d8 = CONCAT44(0x2d,uVar5);
                goto LAB_03549564;
              }
              if (*(short *)(lVar23 + (long)(int)uVar32 * unaff_x24 + 0x20) == 0xad) {
                bStack000000000000006c = 1;
                goto LAB_03549564;
              }
              if ((bStack0000000000000068 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
                fVar42 = *(float *)((long)unaff_x19 + 0x2d4);
                fVar57 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                if ((fVar57 <= fVar42) ||
                   ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
                  fVar42 = *(float *)((long)unaff_x19 + 0x1e4);
                  uVar20 = (ulong)(uint)fVar42;
                  fVar57 = *(float *)(unaff_x19 + 0x4a);
                  if ((fVar42 <= fVar57) ||
                     ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) goto LAB_0354b6dc;
LAB_0354fcd0:
                  fVar46 = (fVar42 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                  if (fVar46 <= DAT_00d38b84) {
                    fVar46 = DAT_00d38b84;
                  }
                  *(float *)((long)unaff_x19 + 0x23c) = fVar42;
                  fVar42 = fVar42 - fVar46;
                  goto LAB_0354fc60;
                }
LAB_0354fc94:
                fVar43 = fVar50;
                if (0.0 < fVar42) {
                  fVar43 = fVar50 / (1.0 - fVar42);
                }
                fVar42 = fVar42 + (fVar50 - fVar46 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) /
                                  fVar43;
LAB_0354fc24:
                if (fVar57 <= fVar42) {
                  fVar42 = fVar57;
                }
                *(float *)((long)unaff_x19 + 0x2d4) = fVar42;
                return;
              }
LAB_0354b6dc:
              lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar23 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar23 = *(long *)puVar9;
              }
              iVar11 = *(int *)(*(long *)(lVar23 + 0xb8) + 0xe78);
              if (((iVar11 != iStack000000000000002c) && (iVar11 != -1)) &&
                 (((bStack0000000000000068 ^ 1) & 1) == 0)) {
                if (*(int *)(lVar23 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                in_stack_000017b8 = FUN_0358c15c();
                if ((unaff_x19[0x6d] == 0) ||
                   (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0)) goto LAB_0354fbf4;
                uVar32 = *unaff_x20 - 1;
                if (*(uint *)(lVar23 + 0x18) <= uVar32)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                iStack000000000000002c = iVar11;
                if (*(short *)(lVar23 + (long)(int)uVar32 * (long)iVar38 + 0x20) == 0xad) {
                  bStack000000000000006c = 0;
                  *unaff_x20 = uVar32;
                  in_stack_000017b8 = in_stack_000017b8 - 1;
                  in_stack_000017d8 = CONCAT44(0x2d,uVar32);
                  goto LAB_03549564;
                }
              }
              if (fVar44 <= fStack00000000000000c4) {
switchD_0354b88c_caseD_0:
                FUN_0358cbd4(in_stack_00000050,uVar17,fStack00000000000000d4,
                             *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                             in_stack_00000138,in_stack_000000f8._4_4_,in_stack_00000048._4_4_);
              }
              else {
                if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                  *(undefined4 *)((long)unaff_x19 + 0x2e4) =
                       *(undefined4 *)((long)unaff_x19 + 0x494);
                }
                fVar57 = fStack00000000000000c4;
                if ((char)unaff_x19[0x47] != '\0') {
                  fVar57 = *(float *)(unaff_x19 + 0x59);
                  if ((fVar57 < *(float *)((long)unaff_x19 + 700)) &&
                     (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                    fVar46 = *(float *)((long)unaff_x19 + 700) +
                             ((fStack0000000000000018 - fVar44) / (float)((int)unaff_x19[0x95] + 1))
                             / in_stack_00000050;
                    if (fVar46 <= fVar57) {
                      fVar46 = fVar57;
                    }
UnityEngine_AndroidJavaObject___ctor:
                    *(float *)((long)unaff_x19 + 700) = fVar46;
                    return;
                  }
                  fVar42 = *(float *)((long)unaff_x19 + 0x2d4);
                  fVar57 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                  if ((fVar42 < fVar57) &&
                     (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) goto LAB_0354fc94;
                  fVar42 = *(float *)((long)unaff_x19 + 0x1e4);
                  uVar20 = (ulong)(uint)fVar42;
                  fVar57 = *(float *)(unaff_x19 + 0x4a);
                  if ((fVar57 < fVar42) &&
                     (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) goto LAB_0354fcd0;
                }
                switch((int)unaff_x19[0x5c]) {
                case 0:
                case 2:
                case 4:
                  goto switchD_0354b88c_caseD_0;
                case 1:
                  lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar23 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  }
                  lVar40 = *(long *)(lVar23 + 0xb8);
                  lVar23 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
                    lVar23 = FUN_01a46ff8(lVar23);
                  }
                  piVar19 = (int *)thunk_FUN_01a59484(lVar40 + 0x11f0,
                                                      *(long *)(*(long *)(*(long *)(lVar23 + 0xc0) +
                                                                         8) + 0x80) + 0xa0);
                  if (*piVar19 == 0) {
                    bStack000000000000006c = 0;
                    goto LAB_0354cf2c;
                  }
                  lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar23 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  }
                  FUN_0209b778(*(long *)(lVar23 + 0xb8) + 0x11f0,&stack0x000008b0,
                               *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                  memcpy(&stack0x00001018,&stack0x000008b0,0x378);
                  iVar11 = FUN_0358c15c();
                  bStack000000000000006c = 0;
                  goto LAB_0354b3a0;
                case 3:
                  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  in_stack_000017b8 = FUN_0358c15c();
                  bStack000000000000006c = 0;
                  goto LAB_0354b0e0;
                case 5:
                  *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                  FUN_0358cbd4(in_stack_00000050,uVar17,fStack00000000000000d4,
                               *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                               in_stack_00000138,in_stack_000000f8._4_4_,in_stack_00000048._4_4_);
                  *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                  *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                  *(undefined8 *)(in_stack_00000078 + 0x208) = 0;
                  *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                  break;
                case 6:
                  lVar23 = unaff_x19[0x5d];
                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar17 = FUN_036cee6c(lVar23,0,0);
                  if ((uVar17 & 1) != 0) {
                    plVar39 = (long *)unaff_x19[0x5d];
                    uVar18 = (**(code **)(*unaff_x19 + 0x518))();
                    if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
                    (**(code **)(*plVar39 + 0x528))
                              (plVar39,uVar18,*(undefined8 *)(*plVar39 + 0x530));
                    lVar23 = unaff_x19[0x5d];
                    if (lVar23 == 0) goto LAB_0354fbf4;
                    *(int *)(lVar23 + 0x400) = (int)unaff_x19[0x80];
                    FUN_0357ee30(lVar23,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                    plVar39 = (long *)unaff_x19[0x5d];
                    if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
                    (**(code **)(*plVar39 + 0x7a8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7b0));
                    *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                  }
                  bStack000000000000006c = 0;
                  goto LAB_0354b4b4;
                default:
                  bStack000000000000006c = 0;
                  goto LAB_0354b8e4;
                }
              }
              bStack000000000000006c = 0;
              goto LAB_0354c6b4;
            }
            goto LAB_0354fbf4;
          }
          if (((char)unaff_x19[0x47] != '\0') &&
             (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
            fVar57 = *(float *)(unaff_x19 + 0x5a) / 100.0;
            if (fVar42 < fVar57) {
              fVar43 = fVar50 / (1.0 - fVar42);
              if (fVar42 <= 0.0) {
                fVar43 = fVar50;
              }
              fVar42 = fVar42 + (fVar50 - fVar46 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) /
                                fVar43;
              goto LAB_0354fc24;
            }
            fVar42 = *(float *)((long)unaff_x19 + 0x1e4);
            fVar57 = *(float *)(unaff_x19 + 0x4a);
            if (fVar57 < fVar42) {
              fVar46 = (fVar42 - *(float *)(unaff_x19 + 0x48)) * 0.5;
              if (fVar46 <= DAT_00d38b84) {
                fVar46 = DAT_00d38b84;
              }
              *(float *)((long)unaff_x19 + 0x23c) = fVar42;
              fVar42 = fVar42 - fVar46;
LAB_0354fc60:
              fVar50 = fVar42 * 20.0 + 0.5;
              fVar46 = DAT_00d38e60;
              if (fVar50 != INFINITY) {
                fVar46 = (float)(int)fVar50 / 20.0;
              }
              if (fVar46 <= fVar57) {
                fVar46 = fVar57;
              }
LAB_0354d004:
              *(float *)((long)unaff_x19 + 0x1e4) = fVar46;
              return;
            }
          }
          iVar11 = (int)unaff_x19[0x5c];
          if (iVar11 == 1) {
            lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar23 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar23 = *(long *)puVar9;
            }
            lVar40 = *(long *)(lVar23 + 0xb8);
            lVar23 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
            if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
              lVar23 = FUN_01a46ff8(lVar23);
            }
            piVar19 = (int *)thunk_FUN_01a59484(lVar40 + 0x11f0,
                                                *(long *)(*(long *)(*(long *)(lVar23 + 0xc0) + 8) +
                                                         0x80) + 0xa0);
            puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*piVar19 == 0) goto LAB_0354cf2c;
            lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar23 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar23 = *(long *)puVar9;
            }
            FUN_0209b778(*(long *)(lVar23 + 0xb8) + 0x11f0,&stack0x000008b0,
                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
            memcpy(&stack0x00000ca0,&stack0x000008b0,0x378);
            goto LAB_0354b394;
          }
          if (iVar11 != 6) {
            if (iVar11 == 3) {
              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              goto LAB_0354af20;
            }
            goto LAB_0354b8e4;
          }
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017b8 = FUN_0358c15c();
          lVar23 = unaff_x19[0x5d];
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
          }
          uVar17 = FUN_036cee6c(lVar23,0,0);
          if ((uVar17 & 1) != 0) {
            plVar39 = (long *)unaff_x19[0x5d];
            uVar18 = (**(code **)(*unaff_x19 + 0x518))();
            if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
            (**(code **)(*plVar39 + 0x528))(plVar39,uVar18,*(undefined8 *)(*plVar39 + 0x530));
            lVar23 = unaff_x19[0x5d];
            if (lVar23 == 0) goto LAB_0354fbf4;
            *(int *)(lVar23 + 0x400) = (int)unaff_x19[0x80];
            FUN_0357ee30(lVar23,*(undefined4 *)((long)unaff_x19 + 0x494),0);
            plVar39 = (long *)unaff_x19[0x5d];
            if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
            (**(code **)(*plVar39 + 0x7a8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7b0));
            *(undefined1 *)(unaff_x19 + 0x5f) = 1;
          }
LAB_0354b4b4:
          in_stack_000017d8 = CONCAT44(3,*unaff_x20);
        }
        else {
          if (((in_stack_000017ec & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
            fVar50 = (float)uVar20;
            fVar46 = 0.0;
            if ((0.0 < fVar50) && (fVar46 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
              fVar46 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
            }
            uVar20 = (ulong)(uint)fStack00000000000000c4;
            if (fStack00000000000000c4 <
                (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar50)) +
                fVar46) {
              if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                *(uint *)((long)unaff_x19 + 0x2e4) = uVar56;
              }
              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              in_stack_000017b8 = FUN_0358c15c();
              lVar23 = unaff_x19[0x5d];
              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
              }
              uVar17 = FUN_036cee6c(lVar23,0,0);
              if ((uVar17 & 1) != 0) {
                plVar39 = (long *)unaff_x19[0x5d];
                uVar18 = (**(code **)(*unaff_x19 + 0x518))();
                if (plVar39 != (long *)0x0) {
                  (**(code **)(*plVar39 + 0x528))(plVar39,uVar18,*(undefined8 *)(*plVar39 + 0x530));
                  lVar23 = unaff_x19[0x5d];
                  if (lVar23 != 0) {
                    *(int *)(lVar23 + 0x400) = (int)unaff_x19[0x80];
                    FUN_0357ee30(lVar23,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                    plVar39 = (long *)unaff_x19[0x5d];
                    if (plVar39 != (long *)0x0) {
                      (**(code **)(*plVar39 + 0x7a8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7b0))
                      ;
                      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                      goto LAB_0354b0e0;
                    }
                  }
                }
                goto LAB_0354fbf4;
              }
              goto LAB_0354b0e0;
            }
          }
          if ((((in_stack_000017ec - 0x2007 < 0x23) &&
               ((1L << ((ulong)(in_stack_000017ec - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
              (in_stack_000017ec - 10 < 2)) || (in_stack_000017ec == 0xa0)) {
LAB_0354b500:
            if (((in_stack_000017ec != 0xad) && (in_stack_000017ec != 0x200b)) &&
               (in_stack_000017ec != 0x2060)) {
              lVar23 = *unaff_x22;
              if ((lVar23 == 0) || (lVar40 = *(long *)(lVar23 + 0x50), lVar40 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar40 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar40 = lVar40 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
              *(int *)(lVar40 + 0x2c) = *(int *)(lVar40 + 0x2c) + 1;
              *(int *)(lVar23 + 0x20) = *(int *)(lVar23 + 0x20) + 1;
            }
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar17 = FUN_026b97f8(in_stack_000017ec,0);
            if ((uVar17 & 1) != 0) goto LAB_0354b500;
          }
          if (in_stack_000017ec == 0xa0) {
            if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x50), lVar23 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_0354b950:
            *(int *)(lVar23 + 0x20) = *(int *)(lVar23 + 0x20) + 1;
          }
LAB_0354ba38:
          if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017ec == 0x2d || (unaff_w23 != 1)))) {
            if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
            fVar46 = *(float *)(unaff_x19 + 0x3d);
            iVar11 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
            if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
            fVar43 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
            lVar23 = unaff_x19[0xca];
            fVar50 = fStack0000000000000098;
            if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
              fVar50 = 1.0;
            }
            if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_0354fbf4;
            fVar57 = *(float *)((long)unaff_x19 + 0x404);
            fVar44 = *(float *)(lVar23 + 0x2c);
            fVar48 = (float)FUN_03776ea8(*(long *)(lVar23 + 0x20),0);
            fVar42 = *_fStack00000000000000a8;
            fVar48 = fVar57 * (fVar46 / (float)iVar11) * fVar43 * fVar50 * fVar44 * fVar48;
            fVar46 = *_fStack00000000000000a0;
            if ((in_stack_000017ec == 10) &&
               (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
              if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
              goto LAB_0354fbf4;
              uVar56 = *(int *)((long)unaff_x19 + 0x494) - 1;
              if (*(uint *)(lVar23 + 0x18) <= uVar56)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
              fVar50 = *(float *)(lVar23 + (long)(int)uVar56 * (long)iVar38 + 0x60);
              iVar11 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
              if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
              fVar57 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
              lVar23 = unaff_x19[0xca];
              fVar43 = fStack0000000000000098;
              if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                fVar43 = 1.0;
              }
              if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_0354fbf4;
              fVar44 = *(float *)((long)unaff_x19 + 0x404);
              fVar52 = *(float *)(lVar23 + 0x2c);
              fVar48 = (float)FUN_03776ea8(*(long *)(lVar23 + 0x20),0);
              if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x50), lVar23 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
              fVar42 = *(float *)(lVar23 + 0x60);
              fVar46 = *(float *)(lVar23 + 100);
              fVar48 = fVar44 * (fVar50 / (float)iVar11) * fVar57 * fVar43 * fVar52 * fVar48;
            }
            fVar57 = *(float *)(unaff_x19 + 0x9b);
            fVar50 = 0.0;
            fVar43 = 0.0;
            if ((0.0 < fVar57) && (fVar43 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
              fVar43 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
            }
            fVar52 = *(float *)(unaff_x19 + 0x97);
            fVar45 = *(float *)((long)unaff_x19 + 0x4cc);
            fVar44 = *(float *)(unaff_x19 + 200);
            if ((char)unaff_x19[0x1e] == '\0') {
              if ((unaff_x19[0xca] == 0) ||
                 (lVar23 = *(long *)(unaff_x19[0xca] + 0x20), lVar23 == 0)) goto LAB_0354fbf4;
              FUN_03776e6c(&stack0x000008b0,lVar23,0);
              fVar50 = (float)FUN_03776cb4(&stack0x00001710,0);
            }
            puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            fVar51 = *(float *)(unaff_x19 + 0x6c);
            fVar46 = (fStack000000000000009c - fVar42) - fVar46;
            bVar10 = true;
            if ((fVar51 <= fVar46) && (bVar10 = false, !NAN(fVar51))) {
              bVar10 = fVar51 == -1.0;
            }
            if (!bVar10) {
              fVar46 = fVar51;
            }
            fVar42 = 1.0;
            if ((uVar29 & 0x18) != 0) {
              fVar42 = DAT_00d38acc;
            }
            if (((fVar52 - (fVar45 - fVar57)) + fVar43 < fStack00000000000000c4) &&
               (ABS(fVar44) + fVar48 * fVar50 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
                fVar42 * fVar46)) {
              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_0358c4f0();
              lVar23 = *(long *)(*(long *)puVar9 + 0xb8);
              memcpy(&stack0x00000538,(void *)(lVar23 + 0x788),0x378);
              FUN_0209b210(lVar23 + 0x11f0,&stack0x00000538,
                           *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
            }
          }
          lVar23 = *unaff_x22;
          if ((lVar23 == 0) || (lVar40 = *(long *)(lVar23 + 0x38), lVar40 == 0)) goto LAB_0354fbf4;
          if (*(uint *)(lVar40 + 0x18) <= *unaff_x20)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar56 = *(uint *)(unaff_x19 + 0x95);
          lVar40 = lVar40 + (long)(int)*unaff_x20 * unaff_x24;
          *(uint *)(lVar40 + 100) = uVar56;
          *(int *)(lVar40 + 0x68) = (int)unaff_x19[0x96];
          if (((unaff_w23 & 1) == 0) &&
             ((0xd < in_stack_000017ec || ((1 << (ulong)(in_stack_000017ec & 0x1f) & 0x2c00U) == 0))
             )) {
            lVar23 = *(long *)(lVar23 + 0x50);
            if (lVar23 == 0) goto LAB_0354fbf4;
LAB_0354bde0:
            if (*(uint *)(lVar23 + 0x18) <= uVar56)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            *(int *)(lVar23 + (long)(int)uVar56 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
          }
          else {
            lVar23 = *(long *)(lVar23 + 0x50);
            if (lVar23 == 0) goto LAB_0354fbf4;
            if (*(uint *)(lVar23 + 0x18) <= uVar56)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if (*(int *)(lVar23 + (long)(int)uVar56 * 0x5c + 0x24) == 1) goto LAB_0354bde0;
          }
          if (in_stack_000017ec == 9) {
            if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
            fVar46 = (float)FUN_03776a48(*in_stack_00000178 + 0x50,0);
            if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
            fVar43 = *(float *)(unaff_x19 + 200);
            fVar50 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000178 + 0x1b9));
            fVar46 = in_stack_000000f0 * fVar46 * fVar50;
            fVar50 = fVar46 * (float)(int)(fVar43 / fVar46);
            uVar20 = (ulong)(uint)fVar50;
            if (fVar50 <= fVar43) {
              fVar50 = fVar43 + fVar46;
            }
LAB_0354c000:
            *(float *)(unaff_x19 + 200) = fVar50;
          }
          else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
            if ((char)unaff_x19[0x1e] == '\0') {
              if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                fVar43 = 1.0;
              }
              else {
                fVar43 = (float)thunk_FUN_036bc400(_fStack0000000000000070,0);
              }
              fVar50 = *(float *)(unaff_x19 + 200);
              fVar48 = (float)FUN_03776cb4(&stack0x000017a0,0);
              if (unaff_x19[0x20] != 0) {
                fVar46 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
                fVar50 = fVar50 + fVar46 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                           in_stack_000000f0 * (in_stack_00000128 + fVar43 * fVar48)
                                           + fStack00000000000000d4 *
                                             (fStack00000000000000d0 +
                                             in_stack_00000138 + *(float *)(unaff_x19[0x20] + 0x1ac)
                                             ));
                *(float *)(unaff_x19 + 200) = fVar50;
                goto joined_r0x0354bf48;
              }
              goto LAB_0354fbf4;
            }
            if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
            fVar50 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                     (*(float *)((long)unaff_x19 + 0x2ac) +
                     in_stack_000000f0 * in_stack_00000128 +
                     fStack00000000000000d4 *
                     (fStack00000000000000d0 +
                     in_stack_00000138 + *(float *)(*in_stack_00000178 + 0x1ac)));
            uVar20 = (ulong)(uint)fVar50;
            fVar50 = *(float *)(unaff_x19 + 200) - fVar50;
            *(float *)(unaff_x19 + 200) = fVar50;
            if ((in_stack_000017ec == 0x200b) || (unaff_w21 != 0)) {
              fVar46 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
              uVar20 = (ulong)(uint)fVar46;
              fVar50 = fVar50 - fVar46;
              goto LAB_0354c000;
            }
          }
          else {
            if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
            fVar46 = *(float *)(unaff_x19 + 200);
            fVar50 = fVar46 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                              (*(float *)((long)unaff_x19 + 0x2ac) +
                              (*(float *)(unaff_x19 + 0x56) - in_stack_00000088) +
                              fStack00000000000000d4 *
                              (in_stack_00000138 + *(float *)(*in_stack_00000178 + 0x1ac)));
            *(float *)(unaff_x19 + 200) = fVar50;
joined_r0x0354bf48:
            if ((in_stack_000017ec == 0x200b) || (uVar20 = (ulong)(uint)fVar46, unaff_w21 != 0)) {
              fVar46 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
              uVar20 = (ulong)(uint)fVar46;
              fVar50 = fVar50 + fVar46;
              goto LAB_0354c000;
            }
          }
          lVar23 = *unaff_x22;
          if ((lVar23 == 0) || (lVar40 = *(long *)(lVar23 + 0x38), lVar40 == 0)) goto LAB_0354fbf4;
          uVar56 = *unaff_x20;
          uVar29 = (uint)*(undefined8 *)(lVar40 + 0x18);
          if (uVar29 <= uVar56) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          *(float *)(lVar40 + (long)(int)uVar56 * unaff_x24 + 0x144) = fVar50;
          uVar32 = in_stack_000017ec;
          if ((int)in_stack_000017ec < 0xd) {
            if ((in_stack_000017ec - 10 < 2) || (in_stack_000017ec == 3)) goto LAB_0354c060;
LAB_0354c6e8:
            if (((unaff_w23 & in_stack_000017ec == 0x2d) != 0) ||
               ((float)uVar56 == in_stack_00000080._4_4_)) goto LAB_0354c060;
          }
          else {
            if (1 < in_stack_000017ec - 0x2028) {
              if (in_stack_000017ec != 0xd) goto LAB_0354c6e8;
              uVar20 = 0;
              *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
              if ((float)uVar56 != in_stack_00000080._4_4_) goto LAB_0354c704;
            }
LAB_0354c060:
            if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
              fVar46 = *(float *)(unaff_x19 + 0x99);
              fVar50 = *(float *)(unaff_x19 + 0x9a);
              if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              fVar46 = fVar46 - fVar50;
              if (((fStack0000000000000058 < ABS(fVar46)) &&
                  (*(char *)((long)unaff_x19 + 0x2c4) == '\0')) &&
                 (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
                FUN_0358c860(fVar46);
                *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar46;
                *(float *)(unaff_x19 + 0x9b) = fVar46 + *(float *)(unaff_x19 + 0x9b);
                puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar23 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar23 = *(long *)puVar9;
                }
                lVar40 = *(long *)(lVar23 + 0xb8);
                if (*(int *)(lVar40 + 0x7ac) == (int)unaff_x19[0x95]) {
                  if (*(int *)(lVar23 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar40 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                  }
                  FUN_0209b778(lVar40 + 0x11f0,&stack0x000008b0,
                               *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                  puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                  lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  memcpy((void *)(*(long *)(lVar23 + 0xb8) + 0x788),&stack0x000008b0,0x378);
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (*(long *)(lVar23 + 0xb8) + 0x818,0);
                  lVar23 = *(long *)(*(long *)puVar9 + 0xb8);
                  *(float *)(lVar23 + 0x7bc) = fVar46 + *(float *)(lVar23 + 0x7bc);
                  *(float *)(lVar23 + 0x800) = fVar46 + *(float *)(lVar23 + 0x800);
                  memcpy(&stack0x000001c0,(void *)(lVar23 + 0x788),0x378);
                  FUN_0209b210(lVar23 + 0x11f0,&stack0x000001c0,
                               *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                }
              }
            }
            fVar43 = *(float *)(unaff_x19 + 0x9b);
            *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
            fVar50 = *(float *)((long)unaff_x19 + 0x4cc) - fVar43;
            fVar46 = *(float *)((long)unaff_x19 + 0x4c4);
            if (fVar50 <= *(float *)((long)unaff_x19 + 0x4c4)) {
              fVar46 = fVar50;
            }
            *(float *)((long)unaff_x19 + 0x4c4) = fVar46;
            fVar48 = *(float *)(unaff_x19 + 0x99);
            if (in_stack_000017e4 == '\0') {
              in_stack_000017e8 = fVar46;
            }
            if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
               (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
                ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
              in_stack_000017e4 = '\x01';
            }
            lVar23 = *unaff_x22;
            if ((lVar23 == 0) || (lVar40 = *(long *)(lVar23 + 0x50), lVar40 == 0))
            goto LAB_0354fbf4;
            uVar56 = *(uint *)(unaff_x19 + 0x95);
            if (*(uint *)(lVar40 + 0x18) <= uVar56)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar26 = unaff_x19[0x93];
            lVar16 = lVar40 + (long)(int)uVar56 * 0x5c;
            *(int *)(lVar16 + 0x34) = (int)lVar26;
            uVar29 = *(uint *)(unaff_x19 + 0x93);
            if ((int)lVar26 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
              uVar29 = *(uint *)((long)unaff_x19 + 0x49c);
            }
            *(uint *)((long)unaff_x19 + 0x49c) = uVar29;
            *(uint *)(lVar16 + 0x38) = uVar29;
            *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
            *(undefined4 *)(lVar16 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
            iVar11 = *(int *)((long)unaff_x19 + 0x49c);
            if ((int)uVar29 <= *(int *)((long)unaff_x19 + 0x4a4)) {
              iVar11 = *(int *)((long)unaff_x19 + 0x4a4);
            }
            *(int *)((long)unaff_x19 + 0x4a4) = iVar11;
            *(int *)(lVar16 + 0x40) = iVar11;
            *(int *)(lVar16 + 0x24) = (*(int *)(lVar16 + 0x3c) - *(int *)(lVar16 + 0x34)) + 1;
            *(undefined4 *)(lVar16 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
            lVar23 = *(long *)(lVar23 + 0x38);
            if (lVar23 == 0) goto LAB_0354fbf4;
            if (*(uint *)(lVar23 + 0x18) <= uVar29)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            uVar55 = *(undefined4 *)(lVar23 + (long)(int)uVar29 * (long)iVar38 + 0x11c);
            lVar40 = lVar40 + (long)(int)uVar56 * 0x5c;
            *(float *)(lVar40 + 0x70) = fVar50;
            *(undefined4 *)(lVar40 + 0x6c) = uVar55;
            lVar23 = *unaff_x22;
            if ((lVar23 == 0) || (lVar40 = *(long *)(lVar23 + 0x50), lVar40 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar40 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar23 = *(long *)(lVar23 + 0x38);
            if (lVar23 == 0) goto LAB_0354fbf4;
            if (*(uint *)(lVar23 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4))
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            fVar48 = fVar48 - fVar43;
            uVar20 = (ulong)(uint)fVar48;
            lVar40 = lVar40 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            *(undefined4 *)(lVar40 + 0x74) =
                 *(undefined4 *)
                  (lVar23 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
            *(float *)(lVar40 + 0x78) = fVar48;
            lVar23 = *unaff_x22;
            if ((lVar23 == 0) || (lVar26 = *(long *)(lVar23 + 0x50), lVar26 == 0))
            goto LAB_0354fbf4;
            lVar16 = (long)(int)*(uint *)(unaff_x19 + 0x95);
            if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar40 = lVar26 + lVar16 * 0x5c;
            *(float *)(lVar40 + 0x44) =
                 *(float *)(lVar40 + 0x74) - in_stack_000000f0 * in_stack_00000168._4_4_;
            *(float *)(lVar40 + 0x5c) = in_stack_000000f8._4_4_;
            if (*(int *)(lVar40 + 0x24) == 1) {
              *(int *)(lVar26 + lVar16 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
            }
            if ((*in_stack_00000178 == 0) || (lVar40 = *(long *)(lVar23 + 0x38), lVar40 == 0))
            goto LAB_0354fbf4;
            lVar41 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
            uVar29 = (uint)*(undefined8 *)(lVar40 + 0x18);
            if (uVar29 <= *(uint *)((long)unaff_x19 + 0x4a4))
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if ((*(char *)(lVar40 + lVar41 * unaff_x24 + 0x194) == '\0') &&
               (lVar41 = (long)(int)*(uint *)(unaff_x19 + 0x94),
               uVar29 <= *(uint *)(unaff_x19 + 0x94)))
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar26 = lVar26 + lVar16 * 0x5c;
            fVar43 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                     (fStack00000000000000d4 *
                      (fStack00000000000000d0 +
                      in_stack_00000138 + *(float *)(*in_stack_00000178 + 0x1ac)) -
                     *(float *)((long)unaff_x19 + 0x2ac));
            fVar46 = -fVar43;
            if ((char)unaff_x19[0x1e] != '\0') {
              fVar46 = fVar43;
            }
            *(float *)(lVar26 + 0x58) = *(float *)(lVar40 + lVar41 * unaff_x24 + 0x144) + fVar46;
            *(float *)(lVar26 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
            *(float *)(lVar26 + 0x54) = fVar50;
            *(float *)(lVar26 + 0x48) = fStack000000000000005c + (fVar48 - fVar50);
            *(float *)(lVar26 + 0x4c) = fVar48;
            if ((int)in_stack_000017ec < 0x2d) {
              if (in_stack_000017ec - 10 < 2) {
LAB_0354c4a8:
                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_0358c4f0();
                lVar23 = unaff_x19[0x6d];
                *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
                iVar11 = (int)unaff_x19[0x95] + 1;
                *(int *)(unaff_x19 + 0x95) = iVar11;
                *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
                if ((lVar23 != 0) && (*(long *)(lVar23 + 0x50) != 0)) {
                  if (*(int *)(*(long *)(lVar23 + 0x50) + 0x18) <= iVar11) {
                    FUN_0358ca18();
                    lVar23 = unaff_x19[0x6d];
                    if (lVar23 == 0) goto LAB_0354fbf4;
                  }
                  lVar23 = *(long *)(lVar23 + 0x38);
                  if (lVar23 != 0) {
                    if (*unaff_x20 < *(uint *)(lVar23 + 0x18)) {
                      fVar46 = *(float *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
                      if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                        if ((in_stack_000017ec == 0x2029) || (fVar50 = 0.0, in_stack_000017ec == 10)
                           ) {
                          fVar50 = *(float *)((long)unaff_x19 + 0x2cc);
                        }
                        uVar21 = 0;
                        fVar50 = fVar46 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                                 in_stack_00000050 *
                                 (in_stack_00000048._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                                 fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar50) +
                                 *(float *)(unaff_x19 + 0x9b);
                      }
                      else {
                        if ((in_stack_000017ec == 0x2029) || (fVar50 = 0.0, in_stack_000017ec == 10)
                           ) {
                          fVar50 = *(float *)((long)unaff_x19 + 0x2cc);
                        }
                        uVar21 = 1;
                        fVar50 = *(float *)(unaff_x19 + 0x9b) +
                                 *(float *)(unaff_x19 + 0x58) +
                                 fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar50);
                      }
                      *(float *)(unaff_x19 + 0x9b) = fVar50;
                      *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar21;
                      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                      lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      if (*(int *)(lVar23 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar23 = *(long *)puVar9;
                      }
                      uVar18 = *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
                      *(float *)(unaff_x19 + 0x9a) = fVar46;
                      uVar17 = NEON_rev64(uVar18,4);
                      unaff_x19[0x99] = uVar17;
                      *(float *)(unaff_x19 + 200) =
                           *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
                      FUN_0358c4f0();
                      FUN_0358c4f0();
                      *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
LAB_0354c6b4:
                      bStack0000000000000068 = 1;
                      in_stack_00000060 = 1;
                      uVar20 = uVar17;
                      goto LAB_03549564;
                    }
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  }
                }
                goto LAB_0354fbf4;
              }
              if (in_stack_000017ec == 3) {
                if (unaff_x19[0x8f] == 0) goto LAB_0354fbf4;
                in_stack_000017b8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
                uVar32 = 3;
              }
            }
            else if ((in_stack_000017ec - 0x2028 < 2) || (in_stack_000017ec == 0x2d))
            goto LAB_0354c4a8;
          }
LAB_0354c704:
          uVar56 = *unaff_x20;
          if (uVar29 <= uVar56) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if (*(char *)(lVar40 + (long)(int)uVar56 * unaff_x24 + 0x194) != '\0') {
            lVar40 = lVar40 + (long)(int)uVar56 * unaff_x24;
            uVar20 = *(ulong *)(lVar40 + 0x11c);
            uVar17 = *(ulong *)(in_stack_00000078 + 0x230);
            *(ulong *)(in_stack_00000078 + 0x230) =
                 uVar17 ^ (uVar17 ^ uVar20) &
                          ~CONCAT44(-(uint)((float)(uVar17 >> 0x20) < (float)(uVar20 >> 0x20)),
                                    -(uint)((float)uVar17 < (float)uVar20));
            uVar17 = *(ulong *)(in_stack_00000078 + 0x238);
            uVar20 = *(ulong *)(lVar40 + 0x128);
            *(ulong *)(in_stack_00000078 + 0x238) =
                 uVar17 ^ (uVar17 ^ uVar20) &
                          ~CONCAT44(-(uint)((float)(uVar20 >> 0x20) < (float)(uVar17 >> 0x20)),
                                    -(uint)((float)uVar20 < (float)uVar17));
          }
          if (((int)unaff_x19[0x5c] == 5) &&
             ((0xd < uVar32 || ((1 << (ulong)(uVar32 & 0x1f) & 0x2c00U) == 0)))) {
            lVar40 = *(long *)(lVar23 + 0x58);
            if (lVar40 == 0) goto LAB_0354fbf4;
            iVar11 = (int)unaff_x19[0x96] + 1;
            if (*(int *)(lVar40 + 0x18) < iVar11) {
              if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_01ff02b8((long *)(lVar23 + 0x58),iVar11,1,
                           *(undefined8 *)OVRPlugin_MeshType_TypeInfo);
              lVar23 = *unaff_x22;
              if (lVar23 == 0) goto LAB_0354fbf4;
            }
            lVar40 = *(long *)(lVar23 + 0x58);
            if (lVar40 == 0) goto LAB_0354fbf4;
            uVar29 = *(uint *)(unaff_x19 + 0x96);
            lVar26 = (long)(int)uVar29;
            uVar56 = *(uint *)(lVar40 + 0x18);
            if (uVar56 <= uVar29) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar16 = lVar40 + lVar26 * 0x14;
            fVar50 = *(float *)(lVar16 + 0x30);
            uVar20 = (ulong)(uint)fVar50;
            *(undefined4 *)(lVar16 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
            fVar46 = *(float *)((long)unaff_x19 + 0x4c4);
            if (fVar50 <= *(float *)((long)unaff_x19 + 0x4c4)) {
              fVar46 = fVar50;
            }
            *(float *)(lVar16 + 0x30) = fVar46;
            uVar32 = *(uint *)((long)unaff_x19 + 0x494);
            if (uVar32 == 0 && uVar29 == 0) {
              *(uint *)(lVar40 + (ulong)uVar29 * 0x14 + 0x20) = uVar32;
            }
            else {
              uVar5 = uVar32 - 1;
              if (0 < (int)uVar32) {
                lVar23 = *(long *)(lVar23 + 0x38);
                if (lVar23 == 0) goto LAB_0354fbf4;
                if (*(uint *)(lVar23 + 0x18) <= uVar5)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if (uVar29 != *(uint *)(lVar23 + (ulong)uVar5 * (unaff_x24 & 0xffffffff) + 0x68)) {
                  if (uVar29 - 1 < uVar56) {
                    *(uint *)(lVar40 + 0x20 + (long)(int)(uVar29 - 1) * 0x14 + 4) = uVar5;
                    *(uint *)(lVar40 + 0x20 + lVar26 * 0x14) = uVar32;
                    goto LAB_0354c780;
                  }
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                }
              }
              if ((float)uVar32 == in_stack_00000080._4_4_) {
                *(float *)(lVar40 + lVar26 * 0x14 + 0x24) = in_stack_00000080._4_4_;
              }
            }
          }
LAB_0354c780:
          puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (((char)unaff_x19[0x5b] == '\0') &&
             ((6 < *(uint *)(unaff_x19 + 0x5c) ||
              ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0))))
          goto LAB_0354cc90;
          if ((unaff_w21 == 0) &&
             (((in_stack_000017ec != 0x2d && (in_stack_000017ec != 0x200b)) &&
              (in_stack_000017ec != 0xad)))) {
            if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_0354c87c:
              if (((((0x2bfd < in_stack_000017ec - 0xac01) && (0xfd < in_stack_000017ec - 0x1101))
                   && (0x1d < in_stack_000017ec - 0xa961)) ||
                  (uVar17 = FUN_03597a54(0), (uVar17 & 1) != 0)) &&
                 ((((0xed < in_stack_000017ec - 0xff01 && (0x1d < in_stack_000017ec - 0xfe31)) &&
                   (0x717d < in_stack_000017ec - 0x2e81)) && (0x1fd < in_stack_000017ec - 0xf901))))
              goto LAB_0354c904;
              lVar23 = FUN_035978e8(0);
              if ((lVar23 == 0) || (*(long *)(lVar23 + 0x10) == 0)) goto LAB_0354fbf4;
              uVar56 = FUN_0219c130(*(long *)(lVar23 + 0x10),&stack0x000008b0,
                                    *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
              if ((int)in_stack_00000080._4_4_ <= (int)*unaff_x20) {
                in_stack_000008b0 = in_stack_000017ec;
                if ((uVar56 & 1) == 0) {
LAB_0354cc08:
                  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_0358c4f0();
                  bStack0000000000000068 = 0;
                  goto LAB_0354cc90;
                }
LAB_0354cb6c:
                if (uVar12 != uVar25 || ((bStack0000000000000068 ^ 0xff) & 1) != 0)
                goto LAB_0354cc90;
                if (unaff_w21 != 0) goto LAB_0354cb88;
                goto LAB_0354cbc0;
              }
              lVar23 = FUN_035978e8(0);
              if (((lVar23 == 0) || (*unaff_x22 == 0)) ||
                 (lVar40 = *(long *)(*unaff_x22 + 0x38), lVar40 == 0)) goto LAB_0354fbf4;
              if (*(uint *)(lVar40 + 0x18) <= *unaff_x20 + 1)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              if (*(long *)(lVar23 + 0x18) == 0) goto LAB_0354fbf4;
              in_stack_000008b0 =
                   (uint)*(ushort *)(lVar40 + (long)(int)(*unaff_x20 + 1) * (long)iVar38 + 0x20);
              uVar17 = FUN_0219c130(*(long *)(lVar23 + 0x18),&stack0x000008b0,
                                    *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
              if ((uVar56 & 1) != 0) goto LAB_0354cb6c;
              if ((uVar17 & 1) == 0) goto LAB_0354cc08;
              if ((bStack0000000000000068 & 1) == 0) goto LAB_0354cc88;
              if (unaff_w21 != 0) {
                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_0358c4f0();
              }
              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_0358c4f0();
            }
            else {
              if ((bStack0000000000000068 & 1) == 0) goto LAB_0354cc88;
LAB_0354c910:
              if ((bStack000000000000006c & 1) == 0 && in_stack_000017ec == 0xad) goto LAB_0354cb88;
LAB_0354cbc0:
              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_0358c4f0();
            }
            bStack0000000000000068 = 1;
          }
          else if (*(char *)((long)unaff_x19 + 0x2da) == '\x01') {
LAB_0354c904:
            if ((bStack0000000000000068 & 1) != 0) {
              if (unaff_w21 == 0) goto LAB_0354c910;
LAB_0354cb88:
              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_0358c4f0();
              goto LAB_0354cbc0;
            }
LAB_0354cc88:
            bStack0000000000000068 = 0;
          }
          else {
            if (((in_stack_000017ec - 0x2007 < 0x29) &&
                ((1L << ((ulong)(in_stack_000017ec - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
               ((in_stack_000017ec == 0xa0 || (in_stack_000017ec == 0x2060)))) goto LAB_0354c87c;
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0358c4f0();
            bStack0000000000000068 = 0;
            *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xe78) = 0xffffffff;
          }
LAB_0354cc90:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0358c4f0();
          *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
        }
LAB_03549564:
        do {
          uVar17 = unaff_d13 & 0xffffffff;
          in_stack_000017b8 = in_stack_000017b8 + 1;
          lVar23 = unaff_x19[0x8f];
          if (lVar23 == 0) goto LAB_0354fbf4;
          if ((int)*(uint *)(lVar23 + 0x18) <= (int)in_stack_000017b8) {
LAB_0354cf48:
            fVar46 = (float)uVar20;
            if (((char)unaff_x19[0x47] != '\0') &&
               (fVar46 = DAT_00d389f8,
               DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
              fVar46 = *(float *)((long)unaff_x19 + 0x1e4);
              fVar50 = *(float *)((long)unaff_x19 + 0x254);
              if ((fVar46 < fVar50) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
                  *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
                }
                fVar43 = (*(float *)((long)unaff_x19 + 0x23c) - fVar46) * 0.5;
                if (fVar43 <= DAT_00d38b84) {
                  fVar43 = DAT_00d38b84;
                }
                *(float *)(unaff_x19 + 0x48) = fVar46;
                fVar43 = (fVar46 + fVar43) * 20.0 + 0.5;
                fVar46 = DAT_00d38e60;
                if (fVar43 != INFINITY) {
                  fVar46 = (float)(int)fVar43 / 20.0;
                }
                if (fVar50 <= fVar46) {
                  fVar46 = fVar50;
                }
                goto LAB_0354d004;
              }
            }
            *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
            if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
              uVar18 = FUN_0276793c(in_stack_00000038,0);
              uVar14 = FUN_0277fa90(_fStack0000000000000040,0);
              uVar18 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar18,
                                    *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar14,0);
              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
              }
              FUN_0367a6ec(uVar18,0);
            }
            puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar37 == 3)))) {
              (**(code **)(*unaff_x19 + 0x928))();
              goto LAB_0354d0cc;
            }
            lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar23 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar23 = *(long *)puVar9;
            }
            plVar39 = (long *)OVRPlugin_Media_TypeInfo;
            lVar23 = **(long **)(lVar23 + 0xb8);
            if (lVar23 == 0) goto LAB_0354fbf4;
            if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0xd1))
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            iVar38 = *(int *)(lVar23 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
            if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x60), lVar23 == 0))
            goto LAB_0354fbf4;
            if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            if (*(int *)(lVar23 + 0x18) == 0)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            FUN_035968e8(lVar23 + 0x20,0,0);
            if (DAT_0411f172 == '\0') {
              FUN_01ab69ac(PTR_DAT_03cbded8);
              DAT_0411f172 = '\x01';
            }
            iVar11 = (int)unaff_x19[0x4e];
            in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
            _in_stack_000000f0 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
            lVar23 = unaff_x19[0xeb];
            in_stack_000000b8 = (long *)_in_stack_000000f0;
            fStack00000000000000c4 = in_stack_000000f8._4_4_;
            if (iVar11 < 0x401) {
              if (iVar11 == 0x100) {
                if (lVar23 == 0) goto LAB_0354fbf4;
                if (*(uint *)(lVar23 + 0x18) < 2)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                uVar18 = *(undefined8 *)(lVar23 + 0x30);
                if ((int)unaff_x19[0x5c] == 5) {
                  if ((*unaff_x22 == 0) || (lVar40 = *(long *)(*unaff_x22 + 0x58), lVar40 == 0))
                  goto LAB_0354fbf4;
                  if (*(uint *)(lVar40 + 0x18) <= uStack0000000000000034)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  fVar46 = *(float *)(lVar40 + (long)(int)uStack0000000000000034 * 0x14 + 0x28);
                }
                else {
                  fVar46 = *(float *)(unaff_x19 + 0x97);
                }
                fStack00000000000000c4 = fStack0000000000000028 + 0.0 + *(float *)(lVar23 + 0x2c);
                fVar46 = (0.0 - fVar46) - fStack000000000000001c;
              }
              else if (iVar11 == 0x200) {
                if (lVar23 == 0) goto LAB_0354fbf4;
                if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                fStack00000000000000c4 =
                     (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5,
                                  ((float)*(undefined8 *)(lVar23 + 0x24) +
                                  (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5);
                if ((int)unaff_x19[0x5c] == 5) {
                  if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x58), lVar23 == 0))
                  goto LAB_0354fbf4;
                  if (*(uint *)(lVar23 + 0x18) <= uStack0000000000000034)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar23 = lVar23 + (long)(int)uStack0000000000000034 * 0x14;
                  fStack00000000000000c4 = fStack0000000000000028 + 0.0 + fStack00000000000000c4;
                  fVar46 = ((fStack000000000000001c + *(float *)(lVar23 + 0x28) +
                            *(float *)(lVar23 + 0x30)) - fStack0000000000000020) * -0.5 + 0.0;
                }
                else {
                  fStack00000000000000c4 = fStack0000000000000028 + 0.0 + fStack00000000000000c4;
                  fVar46 = ((fStack000000000000001c + *(float *)(unaff_x19 + 0x97) +
                            in_stack_000017e8) - fStack0000000000000020) * -0.5 + 0.0;
                }
              }
              else {
                if (iVar11 != 0x400) goto LAB_0354d620;
                if (lVar23 == 0) goto LAB_0354fbf4;
                if (*(int *)(lVar23 + 0x18) == 0)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                uVar18 = *(undefined8 *)(lVar23 + 0x24);
                if ((int)unaff_x19[0x5c] == 5) {
                  if ((*unaff_x22 == 0) || (lVar40 = *(long *)(*unaff_x22 + 0x58), lVar40 == 0))
                  goto LAB_0354fbf4;
                  if (*(uint *)(lVar40 + 0x18) <= uStack0000000000000034)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  in_stack_000017e8 =
                       *(float *)(lVar40 + (long)(int)uStack0000000000000034 * 0x14 + 0x30);
                }
                fStack00000000000000c4 = fStack0000000000000028 + 0.0 + *(float *)(lVar23 + 0x20);
                fVar46 = fStack0000000000000020 + (0.0 - in_stack_000017e8);
              }
LAB_0354d610:
              in_stack_000000b8 =
                   (long *)CONCAT44((float)((ulong)uVar18 >> 0x20) + 0.0,(float)uVar18 + fVar46);
            }
            else if (iVar11 == 0x800) {
              if (lVar23 == 0) goto LAB_0354fbf4;
              if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              fVar46 = fStack0000000000000028 + 0.0 +
                       (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
              in_stack_000000b8 =
                   (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                                    (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5 +
                                    0.0,((float)*(undefined8 *)(lVar23 + 0x24) +
                                        (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5 + 0.0);
              fStack00000000000000c4 = fVar46;
            }
            else {
              if (iVar11 == 0x1000) {
                if (lVar23 == 0) goto LAB_0354fbf4;
                if ((*(int *)(lVar23 + 0x18) != 1) && (*(int *)(lVar23 + 0x18) != 0)) {
                  uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                                    (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5,
                                    ((float)*(undefined8 *)(lVar23 + 0x24) +
                                    (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5);
                  fStack00000000000000c4 =
                       fStack0000000000000028 + 0.0 +
                       (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                  fVar46 = 0.0 - ((fStack000000000000001c + *(float *)(unaff_x19 + 0x9d) +
                                  *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000020) * 0.5;
                  goto LAB_0354d610;
                }
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              }
              if (iVar11 == 0x2000) {
                if (lVar23 == 0) goto LAB_0354fbf4;
                if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                fVar46 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack000000000000001c) -
                               fStack0000000000000020) * 0.5;
                in_stack_000000b8 =
                     (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                                      (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5
                                      + 0.0,((float)*(undefined8 *)(lVar23 + 0x24) +
                                            (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5 + fVar46);
                fStack00000000000000c4 =
                     fStack0000000000000028 + 0.0 +
                     (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
              }
            }
LAB_0354d620:
            lVar23 = FUN_03559490();
            if (lVar23 == 0) goto LAB_0354fbf4;
            FUN_036df824(lVar23,0);
            *(float *)((long)unaff_x19 + 0x6e4) = fVar46;
            uVar55 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
            FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
            if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
            }
            if (DAT_0412df1c == '\0') {
              FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
              DAT_0412df1c = '\x01';
            }
            puVar9 = OVRPlugin_Mesh_TypeInfo;
            lVar23 = *(long *)OVRPlugin_Mesh_TypeInfo;
            if (*(int *)(lVar23 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar23 = *(long *)puVar9;
            }
            puVar24 = *(undefined4 **)(lVar23 + 0xb8);
            FUN_035683a4(*puVar24,puVar24[1],puVar24[2],puVar24[3],&stack0x000017c0,0x4000ffff,0);
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            lVar23 = *unaff_x22;
            if (lVar23 == 0) goto LAB_0354fbf4;
            uVar12 = *unaff_x20;
            if ((int)uVar12 < 1) {
              iStack00000000000000d8 = 0;
              iVar38 = 0;
              goto LAB_0354f7f4;
            }
            lVar23 = *(long *)(lVar23 + 0x38);
            if (lVar23 == 0) goto LAB_0354fbf4;
            bVar10 = false;
            bVar8 = false;
            bVar6 = false;
            fStack0000000000000124 = 0.0;
            bVar7 = false;
            iStack00000000000000d8 = 0;
            uStack0000000000000030 = 0;
            in_stack_00000168._4_4_ = 0.0;
            fStack000000000000005c = 0.0;
            lVar40 = 0x2e0;
            fVar43 = 0.0;
            fVar50 = 0.0;
            fStack00000000000000d0 = fStack00000000000000e0;
            fStack00000000000000d4 = fStack00000000000000e4;
            _bStack0000000000000068 = fStack00000000000000e4;
            fStack0000000000000104 =
                 *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
            fStack000000000000009c = fStack00000000000000e4;
            fStack00000000000000a0 = fStack00000000000000e0;
            fStack0000000000000100 = 0.0;
            in_stack_00000080._4_4_ = 0.0;
            in_stack_00000048._4_4_ = 0.0;
            fStack00000000000000a8 = 0.0;
            fStack0000000000000040 = 0.0;
            _bStack000000000000006c = uStack00000000000000c0;
            fStack0000000000000070 = fStack00000000000000e0;
            fStack0000000000000098 = (float)uStack00000000000000c0;
            uVar25 = 0;
            uVar56 = 1;
            goto LAB_0354d7c0;
          }
          if (*(uint *)(lVar23 + 0x18) <= in_stack_000017b8)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          in_stack_000017ec = *(uint *)(lVar23 + (long)(int)in_stack_000017b8 * 0xc + 0x20);
          if (in_stack_000017ec == 0) goto LAB_0354cf48;
          if (5 < in_stack_00000180) {
            uVar18 = FUN_0276793c(&stack0x000017ec,0);
            uVar14 = FUN_0276793c(&stack0x000017b8,0);
            uVar18 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar18,
                                  *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar14,0);
            if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
            }
            FUN_0367ae18(uVar18,0);
            in_stack_000017d8 = CONCAT44(3,*unaff_x20);
          }
          if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (in_stack_000017ec != 0x3c)) {
            if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar23 + 0x18) <= *unaff_x20)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
            *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar23 + 0x2c);
            *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar23 + 0x58);
            unaff_x19[0x20] = *(long *)(lVar23 + 0x38);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000178);
          }
          else {
            *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
            *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
            uVar15 = FUN_03586568();
            if (((uVar15 & 1) != 0) &&
               (in_stack_000017b8 = in_stack_0000179c, uVar37 = in_stack_000017ec,
               *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03549564;
          }
          if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
          goto LAB_0354fbf4;
          uVar12 = *unaff_x20;
          if (*(uint *)(lVar23 + 0x18) <= uVar12)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          lVar26 = (long)(int)uVar12;
          bVar3 = *(byte *)(lVar23 + lVar26 * unaff_x24 + 0x5c);
          unaff_w26 = (uint)bVar3;
          *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
          lVar40 = unaff_x19[0x24];
          if ((uint)in_stack_000017d8 == uVar12) {
            in_stack_000017ec = (uint)((ulong)in_stack_000017d8 >> 0x20);
            *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
            if (in_stack_000017ec == 0x2026) {
              *(long *)(lVar23 + lVar26 * unaff_x24 + 0x30) = unaff_x19[0xca];
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if ((unaff_x19[0x6d] == 0) ||
                 (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0)) goto LAB_0354fbf4;
              if (*(uint *)(lVar23 + 0x18) <= *unaff_x20)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
              *(undefined4 *)(lVar23 + 0x2c) = 0;
              *(long *)(lVar23 + 0x38) = unaff_x19[0xcb];
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if ((unaff_x19[0x6d] == 0) ||
                 (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0)) goto LAB_0354fbf4;
              if (*(uint *)(lVar23 + 0x18) <= *unaff_x20)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              *(long *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
              goto LAB_0354fbf4;
              uVar12 = *unaff_x20;
              if (*(uint *)(lVar23 + 0x18) <= uVar12)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              unaff_w23 = 1;
              *(int *)(lVar23 + (long)(int)uVar12 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
              *(undefined1 *)(unaff_x19 + 0x5f) = 1;
              in_stack_000017d8 = CONCAT44(3,uVar12 + 1);
            }
            else if (in_stack_000017ec == 3) {
              if ((*in_stack_00000178 == 0) ||
                 (lVar16 = FUN_03568ac0(*in_stack_00000178,0), lVar16 == 0)) goto LAB_0354fbf4;
              FUN_0219b634(lVar16,&stack0x00000c28,&stack0x000008b0,
                           *(undefined8 *)OVRPlugin_Hand_TypeInfo);
              if (*(uint *)(lVar23 + 0x18) <= uVar12)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              *(ulong *)(lVar23 + lVar26 * unaff_x24 + 0x30) =
                   CONCAT44(in_stack_000008b4,in_stack_000008b0);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              uVar12 = *(uint *)((long)unaff_x19 + 0x494);
              unaff_w23 = 1;
              *(undefined1 *)(unaff_x19 + 0x5f) = 1;
            }
            else {
              unaff_w23 = 1;
            }
          }
          else {
            unaff_w23 = 0;
          }
          if (((int)uVar12 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_000017ec != 3)) {
            if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar23 + 0x18) <= uVar12)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar23 = lVar23 + (long)(int)uVar12 * (long)iVar38;
            *(undefined1 *)(lVar23 + 0x194) = 0;
            *(undefined2 *)(lVar23 + 0x20) = 0x200b;
            *(undefined4 *)(lVar23 + 100) = 0;
            *unaff_x20 = uVar12 + 1;
            uVar37 = in_stack_000017ec;
            goto LAB_03549564;
          }
          iVar11 = *(int *)((long)unaff_x19 + 0x644);
          if (iVar11 == 0) {
            uVar12 = *(uint *)((long)unaff_x19 + 0x25c);
            if ((uVar12 >> 4 & 1) == 0) {
              if ((uVar12 >> 3 & 1) == 0) {
                in_stack_00000150 = 1.0;
                if ((uVar12 >> 5 & 1) != 0) {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar15 = FUN_026b812c(in_stack_000017ec,0);
                  if ((uVar15 & 1) != 0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar12 = FUN_026b8410(in_stack_000017ec,0);
                    in_stack_000017ec = uVar12 & 0xffff;
                    in_stack_00000150 = fStack0000000000000024;
                  }
                }
              }
              else {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar15 = FUN_026b8070(in_stack_000017ec,0);
                in_stack_00000150 = 1.0;
                if ((uVar15 & 1) != 0) {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar12 = FUN_026b8594(in_stack_000017ec,0);
                  goto LAB_03549968;
                }
              }
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar15 = FUN_026b812c(in_stack_000017ec,0);
              in_stack_00000150 = 1.0;
              if ((uVar15 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar12 = FUN_026b8410(in_stack_000017ec,0);
LAB_03549968:
                in_stack_00000150 = 1.0;
                in_stack_000017ec = uVar12 & 0xffff;
              }
            }
            iVar11 = *(int *)((long)unaff_x19 + 0x644);
          }
          else {
            in_stack_00000150 = 1.0;
          }
          uVar37 = in_stack_000017ec;
          if (iVar11 == 0) {
            if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar23 + 0x18) <= *unaff_x20)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            *_iStack00000000000000d8 = *(long *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (_iStack00000000000000d8);
            if (*_iStack00000000000000d8 != 0) {
              if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar23 + 0x18) <= *unaff_x20)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              *in_stack_00000178 = *(long *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000178);
              if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar23 + 0x18) <= *unaff_x20)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              *in_stack_00000170 = *(long *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
              goto LAB_0354fbf4;
              uVar25 = *unaff_x20;
              uVar12 = *(uint *)(lVar23 + 0x18);
              if (uVar12 <= uVar25) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              *(undefined4 *)(unaff_x19 + 0x24) =
                   *(undefined4 *)(lVar23 + (long)(int)uVar25 * unaff_x24 + 0x58);
              if (unaff_w23 == 0) {
LAB_03549a88:
                if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
                fVar46 = *(float *)(unaff_x19 + 0x3d);
                iVar11 = FUN_03776950(*in_stack_00000178 + 0x50,0);
                lVar23 = unaff_x19[0x20];
              }
              else {
                lVar40 = unaff_x19[0x8f];
                if (lVar40 == 0) goto LAB_0354fbf4;
                if (*(uint *)(lVar40 + 0x18) <= in_stack_000017b8)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if ((*(int *)(lVar40 + (long)(int)in_stack_000017b8 * 0xc + 0x20) != 10) ||
                   (uVar25 == *(uint *)(unaff_x19 + 0x93))) goto LAB_03549a88;
                if (uVar12 <= uVar25 - 1)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
                fVar46 = *(float *)(lVar23 + (long)(int)(uVar25 - 1) * (long)iVar38 + 0x60);
                iVar11 = FUN_03776950(*in_stack_00000178 + 0x50,0);
                lVar23 = *in_stack_00000178;
              }
              if (lVar23 == 0) goto LAB_0354fbf4;
              fVar43 = (float)FUN_03776960(lVar23 + 0x50,0);
              fVar50 = fStack0000000000000098;
              if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                fVar50 = 1.0;
              }
              uVar55 = 0;
              fStack0000000000000124 = 0.0;
              if ((unaff_w23 & in_stack_000017ec == 0x2026) == 0) {
                if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
                fStack0000000000000124 = (float)FUN_03776980(*in_stack_00000178 + 0x50,0);
                if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
                uVar55 = FUN_037769c0(*in_stack_00000178 + 0x50,0);
              }
              lVar23 = unaff_x19[0xc9];
              if (lVar23 == 0) goto LAB_0354fbf4;
              _fStack0000000000000120 = CONCAT44(fStack0000000000000124,uVar55);
              if (*(long *)(lVar23 + 0x20) == 0) goto LAB_0354fbf4;
              fVar57 = *(float *)((long)unaff_x19 + 0x404);
              fVar42 = *(float *)(lVar23 + 0x2c);
              fVar48 = (float)FUN_03776ea8(*(long *)(lVar23 + 0x20),0);
              if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
              fVar44 = (float)FUN_037769b0(*in_stack_00000178 + 0x50,0);
              if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
              fVar45 = *(float *)((long)unaff_x19 + 0x404);
              fVar52 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
              lVar23 = unaff_x19[0x6d];
              if ((lVar23 == 0) || (lVar40 = *(long *)(lVar23 + 0x38), lVar40 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar40 + 0x18) <= *unaff_x20)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar40 = lVar40 + (long)(int)*unaff_x20 * unaff_x24;
              *(undefined4 *)(lVar40 + 0x2c) = 0;
              fVar50 = ((in_stack_00000150 * fVar46) / (float)iVar11) * fVar43 * fVar50;
              fVar48 = fVar50 * fVar57 * fVar42 * fVar48;
              uVar17 = (ulong)(uint)fVar48;
              *(float *)(lVar40 + 0x160) = fVar48;
              uVar12 = *(uint *)(unaff_x19 + 0x24);
              unaff_s14 = fVar50 * fVar44 * fVar45 * fVar52;
              if (uVar12 == 0) {
                in_stack_00000168._4_4_ = *(float *)(unaff_x19 + 0xc3);
                goto LAB_03549e30;
              }
              lVar40 = unaff_x19[0xe1];
              if (lVar40 == 0) goto LAB_0354fbf4;
              if (*(uint *)(lVar40 + 0x18) <= uVar12)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar40 = *(long *)(lVar40 + (long)(int)uVar12 * 8 + 0x20);
              if (lVar40 == 0) goto LAB_0354fbf4;
              in_stack_00000168._4_4_ = *(float *)(lVar40 + 0x54);
              goto LAB_03549e30;
            }
            goto LAB_03549564;
          }
          if (iVar11 != 1) {
            lVar23 = *unaff_x22;
            unaff_s14 = 0.0;
            unaff_d13 = 0;
            if (in_stack_000017ec != 3 && in_stack_000017ec != 0xad) {
              unaff_d13 = uVar17;
            }
            if (lVar23 == 0) goto LAB_0354fbf4;
            _fStack0000000000000120 = 0;
            goto UnityEngine_AndroidJNISafe__ToSByteArray;
          }
          if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
          goto LAB_0354fbf4;
          if (*(uint *)(lVar23 + 0x18) <= *unaff_x20)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          *in_stack_000000b8 = *(long *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
          goto LAB_0354fbf4;
          if (*(uint *)(lVar23 + 0x18) <= *unaff_x20)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          *(undefined4 *)((long)unaff_x19 + 0x6a4) =
               *(undefined4 *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
          if ((unaff_x19[0xd3] == 0) ||
             (lVar23 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar23 == 0))
          goto LAB_0354fbf4;
          FUN_02215a88(lVar23,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008b0,
                       *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
          puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar23 = CONCAT44(in_stack_000008b4,in_stack_000008b0);
        } while (lVar23 == 0);
        if (in_stack_000017ec == 0x3c) {
          in_stack_000017ec = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
        }
        else {
          lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar26 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar26 = *(long *)puVar9;
          }
          *(undefined4 *)((long)unaff_x19 + 0x1bc) =
               *(undefined4 *)(*(long *)(lVar26 + 0xb8) + 0x68);
        }
        if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
        fVar46 = *(float *)(unaff_x19 + 0x3d);
        memmove(&stack0x00001730,(void *)(unaff_x19[0x20] + 0x50),0x60);
        iVar11 = FUN_03776950(&stack0x00001730,0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        memmove(&stack0x00001730,(void *)(*in_stack_00000178 + 0x50),0x60);
        fVar43 = (float)FUN_03776960(&stack0x00001730,0);
        fVar50 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar50 = 1.0;
        }
        if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
        fVar50 = (fVar46 / (float)iVar11) * fVar43 * fVar50;
        iVar11 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
        fVar46 = *(float *)(unaff_x19 + 0x3d);
        if (iVar11 < 1) {
          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
          iVar11 = FUN_03776950(*in_stack_00000178 + 0x50,0);
          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
          fVar48 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
          fVar43 = fStack0000000000000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            fVar43 = 1.0;
          }
          if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
          fVar57 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
          if (*(long *)(lVar23 + 0x20) == 0) goto LAB_0354fbf4;
          FUN_03776e6c(&stack0x000008b0,*(long *)(lVar23 + 0x20),0);
          fVar42 = (float)FUN_03776c9c(&stack0x00001710,0);
          if (*(long *)(lVar23 + 0x20) == 0) goto LAB_0354fbf4;
          fVar52 = *(float *)(lVar23 + 0x2c);
          fVar44 = (float)FUN_03776ea8(*(long *)(lVar23 + 0x20),0);
          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
          fVar45 = (float)FUN_03776980(*in_stack_00000178 + 0x50,0);
          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
          fVar51 = (float)FUN_037769b0(*in_stack_00000178 + 0x50,0);
          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
          fVar54 = *(float *)((long)unaff_x19 + 0x404);
          fVar53 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
          if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
          unaff_s14 = fVar50 * fVar51 * fVar54 * fVar53;
          fVar43 = (fVar46 / (float)iVar11) * fVar48 * fVar43;
          fVar50 = fVar43 * (fVar57 / fVar42) * fVar52 * fVar44;
          fVar43 = fVar43 / fVar50;
          fVar45 = fVar43 * fVar45;
          fVar46 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
          fVar43 = fVar43 * fVar46;
        }
        else {
          if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
          iVar11 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
          fVar43 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
          if (*(long *)(lVar23 + 0x20) == 0) goto LAB_0354fbf4;
          fVar57 = *(float *)(lVar23 + 0x2c);
          fVar48 = fStack0000000000000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            fVar48 = 1.0;
          }
          fVar42 = (float)FUN_03776ea8(*(long *)(lVar23 + 0x20),0);
          if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
          fVar45 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
          fVar44 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
          fVar51 = *(float *)((long)unaff_x19 + 0x404);
          fVar52 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
          if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
          unaff_s14 = fVar50 * fVar44 * fVar51 * fVar52;
          fVar50 = (fVar46 / (float)iVar11) * fVar43 * fVar48 * fVar57 * fVar42;
          fVar43 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
        }
        uVar17 = (ulong)(uint)fVar50;
        *_iStack00000000000000d8 = lVar23;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  (_iStack00000000000000d8,lVar23);
        if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar23 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar23 + 0x2c) = 1;
        *(float *)(lVar23 + 0x160) = fVar50;
        *(long *)(lVar23 + 0x40) = *in_stack_000000b8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar23 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *(long *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *in_stack_00000178;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar23 = *unaff_x22;
        if ((lVar23 == 0) || (lVar26 = *(long *)(lVar23 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar26 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        _fStack0000000000000120 = CONCAT44(fVar45,fVar43);
        in_stack_00000168._4_4_ = 0.0;
        *(int *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
        *(int *)(unaff_x19 + 0x24) = (int)lVar40;
LAB_03549e30:
        in_stack_000000f0 = (float)uVar17;
        unaff_d13 = 0;
        if (in_stack_000017ec != 3 && in_stack_000017ec != 0xad) {
          unaff_d13 = uVar17;
        }
UnityEngine_AndroidJNISafe__ToSByteArray:
        lVar23 = *(long *)(lVar23 + 0x38);
        if (lVar23 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar23 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
        *(short *)(lVar23 + 0x20) = (short)in_stack_000017ec;
        *(int *)(lVar23 + 0x60) = (int)unaff_x19[0x3d];
        *(undefined4 *)(lVar23 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
        if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar23 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *(int *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
        if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar23 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *(undefined4 *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
             *(undefined4 *)((long)unaff_x19 + 0x15c);
        if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
        goto LAB_0354fbf4;
        uVar12 = *unaff_x20;
        FUN_0209a6e0(in_stack_000000c8,&stack0x000008b0,
                     *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
        if (*(uint *)(lVar23 + 0x18) <= uVar12)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar23 = lVar23 + (long)(int)uVar12 * unaff_x24;
        *(undefined4 *)(lVar23 + 0x18c) = in_stack_000008c0;
        *(undefined8 *)(lVar23 + 0x184) = in_stack_000008b8;
        *(ulong *)(lVar23 + 0x17c) = CONCAT44(in_stack_000008b4,in_stack_000008b0);
        if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar23 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *(undefined4 *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
             *(undefined4 *)((long)unaff_x19 + 0x25c);
        if ((unaff_x19[0xc9] == 0) || (lVar23 = *(long *)(unaff_x19[0xc9] + 0x20), lVar23 == 0))
        goto LAB_0354fbf4;
        FUN_03776e6c(&stack0x00000c28,lVar23,0);
        if ((int)in_stack_000017ec < 0x10000) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar12 = FUN_026b63d8(in_stack_000017ec,0);
          unaff_w21 = uVar12 & 1;
        }
        else {
          unaff_w21 = 0;
        }
        in_stack_00000138 = *(float *)(unaff_x19 + 0x55);
        *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
        if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
          in_stack_00000128 = 0.0;
          unaff_d15 = 0;
          unaff_s12 = 0.0;
        }
        else {
          if (*_iStack00000000000000d8 == 0) goto LAB_0354fbf4;
          uVar25 = *unaff_x20;
          uVar12 = *(uint *)(*_iStack00000000000000d8 + 0x28);
          if ((int)uVar25 < (int)in_stack_00000080._4_4_) {
            if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar23 + 0x18) <= uVar25 + 1)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar23 = *(long *)(lVar23 + (long)(int)(uVar25 + 1) * (long)iVar38 + 0x30);
            if ((((lVar23 == 0) || (*in_stack_00000178 == 0)) ||
                (lVar40 = *(long *)(*in_stack_00000178 + 0x128), lVar40 == 0)) ||
               (lVar40 = *(long *)(lVar40 + 0x18), lVar40 == 0)) goto LAB_0354fbf4;
            in_stack_000008b0 = uVar12 | *(int *)(lVar23 + 0x28) << 0x10;
            uVar17 = FUN_0219f8b8(lVar40,&stack0x000008b0,&stack0x00001708,
                                  *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
            uVar55 = 0;
            if ((uVar17 & 1) == 0) {
              in_stack_00000128 = 0.0;
              uVar56 = 0;
              unaff_s12 = 0.0;
            }
            else {
              if (in_stack_00001708 == 0) goto LAB_0354fbf4;
              in_stack_00000128 = *(float *)(in_stack_00001708 + 0x1c);
              uVar55 = *(undefined4 *)(in_stack_00001708 + 0x20);
              unaff_s12 = *(float *)(in_stack_00001708 + 0x14);
              uVar56 = *(uint *)(in_stack_00001708 + 0x18);
              if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
                in_stack_00000138 = 0.0;
              }
            }
            uVar25 = *unaff_x20;
          }
          else {
            uVar55 = 0;
            in_stack_00000128 = 0.0;
            uVar56 = 0;
            unaff_s12 = 0.0;
          }
          unaff_d15 = (ulong)uVar56;
          if (0 < (int)uVar25) {
            if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar23 + 0x18) <= uVar25 - 1)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar23 = *(long *)(lVar23 + (ulong)(uVar25 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
            if (((lVar23 == 0) || (*in_stack_00000178 == 0)) ||
               ((lVar40 = *(long *)(*in_stack_00000178 + 0x128), lVar40 == 0 ||
                (lVar40 = *(long *)(lVar40 + 0x18), lVar40 == 0)))) goto LAB_0354fbf4;
            in_stack_000008b0 = *(uint *)(lVar23 + 0x28) | uVar12 << 0x10;
            uVar17 = FUN_0219f8b8(lVar40,&stack0x000008b0,&stack0x00001708,
                                  *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
            if ((uVar17 & 1) != 0) {
              if ((in_stack_00001708 == 0) ||
                 (unaff_s12 = (float)FUN_03571cb4(unaff_s12,unaff_d15,in_stack_00000128,uVar55,
                                                  *(undefined4 *)(in_stack_00001708 + 0x28),
                                                  *(undefined4 *)(in_stack_00001708 + 0x2c),
                                                  *(undefined4 *)(in_stack_00001708 + 0x30),
                                                  *(undefined4 *)(in_stack_00001708 + 0x34),0),
                 in_stack_00001708 == 0)) goto LAB_0354fbf4;
              if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
                in_stack_00000138 = 0.0;
              }
            }
          }
          *(float *)((long)unaff_x19 + 0x2fc) = in_stack_00000128;
        }
        if ((char)unaff_x19[0x1e] != '\0') {
          fVar50 = *(float *)(unaff_x19 + 200);
          fVar46 = (float)FUN_03776cb4(&stack0x000017a0,0);
          fVar50 = fVar50 - (float)unaff_d13 * fVar46 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
          *(float *)(unaff_x19 + 200) = fVar50;
          if ((in_stack_000017ec == 0x200b) || (unaff_w21 != 0)) {
            *(float *)(unaff_x19 + 200) =
                 fVar50 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
          }
        }
        fVar46 = *(float *)(unaff_x19 + 0x56);
        in_stack_00000088 = 0.0;
        if (fVar46 != 0.0) {
          fVar50 = (float)FUN_03776c94(&stack0x000017a0,0);
          fVar43 = (float)FUN_03776ca4(&stack0x000017a0,0);
          in_stack_00000088 =
               (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (fVar46 * 0.5 - (float)unaff_d13 * (fVar50 * 0.5 + fVar43));
          *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + in_stack_00000088;
        }
        if (((*(int *)((long)unaff_x19 + 0x644) != 0) || (bVar3 != 0)) ||
           ((*(byte *)((long)unaff_x19 + 0x25c) & 1) == 0)) {
          lVar23 = *in_stack_00000170;
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_036cee6c(lVar23,0,0);
          fStack00000000000000d0 = 0.0;
          fVar46 = in_stack_000000f0;
          if ((uVar17 & 1) == 0) {
LAB_0354a428:
            unaff_s10 = 0.0;
          }
          else {
            lVar23 = *in_stack_00000170;
            if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
            if (lVar23 == 0) goto LAB_0354fbf4;
            uVar17 = FUN_03699d3c(lVar23,*(undefined4 *)
                                          (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0x54),0);
            if ((uVar17 & 1) == 0) goto LAB_0354a428;
            lVar23 = *in_stack_00000170;
            if (*(int *)(*plVar39 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
            }
            if (lVar23 == 0) goto LAB_0354fbf4;
            uVar17 = FUN_03699d3c(lVar23,*(undefined4 *)(*(long *)(*plVar39 + 0xb8) + 0xcc),0);
            if ((uVar17 & 1) == 0) goto LAB_0354a428;
            lVar23 = *in_stack_00000170;
            if (*(int *)(*plVar39 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
            }
            if (lVar23 == 0) goto LAB_0354fbf4;
            fVar50 = (float)FUN_0369e060(lVar23,*(undefined4 *)(*(long *)(*plVar39 + 0xb8) + 0x54),0
                                        );
            if ((*in_stack_00000178 == 0) || (*in_stack_00000170 == 0)) goto LAB_0354fbf4;
            fVar48 = *(float *)(*in_stack_00000178 + 0x1a8);
            fVar43 = (float)FUN_0369e060(*in_stack_00000170,
                                         *(undefined4 *)
                                          (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
            unaff_s10 = fVar43 * fVar50 * fVar48 * 0.25;
            if (fVar50 < in_stack_00000168._4_4_ + unaff_s10) {
              in_stack_00000168._4_4_ = fVar50 - unaff_s10;
            }
          }
          goto LAB_0354a568;
        }
        lVar23 = *in_stack_00000170;
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_036cee6c(lVar23,0,0);
        unaff_s10 = 0.0;
      } while ((uVar17 & 1) == 0);
      lVar23 = *in_stack_00000170;
      if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
      if (lVar23 == 0) goto LAB_0354fbf4;
      uVar17 = FUN_03699d3c(lVar23,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                              0xb8) + 0x54),0);
      unaff_s10 = 0.0;
    } while ((uVar17 & 1) == 0);
    lVar23 = *in_stack_00000170;
    if (*(int *)(*plVar39 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
    }
    if (lVar23 == 0) goto LAB_0354fbf4;
    unaff_s8 = (float)FUN_0369e060(lVar23,*(undefined4 *)(*(long *)(*plVar39 + 0xb8) + 0x54),0);
    if ((*in_stack_00000178 == 0) || (*in_stack_00000170 == 0)) goto LAB_0354fbf4;
    fVar50 = *(float *)(*in_stack_00000178 + 0x1b0);
    fVar46 = (float)FUN_0369e060(*in_stack_00000170,
                                 *(undefined4 *)
                                  (*(long *)(*(long *)
                                              OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                            0xb8) + 0xcc),0);
    unaff_s10 = fVar46 * unaff_s8 * fVar50 * 0.25;
    fVar46 = in_stack_00000168._4_4_ + unaff_s10;
    in_NG = '\0';
    in_ZR = false;
    in_OV = '\x01';
    if (!NAN(fVar46) && !NAN(unaff_s8)) {
      in_NG = fVar46 < unaff_s8;
      in_ZR = fVar46 == unaff_s8;
      in_OV = '\0';
    }
  } while( true );
LAB_0354d7c0:
  uVar12 = uVar56 - 1;
  if (*(uint *)(lVar23 + 0x18) <= uVar12)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x50), lVar26 == 0)) goto LAB_0354fbf4;
  lVar41 = (long)(int)uVar12;
  lVar16 = lVar23 + lVar41 * 0x178;
  uVar29 = *(uint *)(lVar16 + 100);
  if (*(uint *)(lVar26 + 0x18) <= uVar29)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar33 = *(long *)(lVar16 + 0x38);
  lVar36 = (long)(int)uVar29;
  lVar26 = lVar26 + lVar36 * 0x5c;
  uVar37 = *(uint *)(lVar26 + 0x68);
  uVar30 = (uint)*(ushort *)(lVar16 + 0x20);
  uVar32 = *(uint *)(lVar26 + 0x3c);
  iVar2 = *(int *)(lVar26 + 0x20);
  iVar11 = *(int *)(lVar26 + 0x28);
  iVar13 = *(int *)(lVar26 + 0x2c);
  fVar42 = *(float *)(lVar26 + 0x4c);
  uVar5 = *(uint *)(lVar26 + 0x40);
  fVar52 = *(float *)(lVar26 + 0x54);
  fVar48 = *(float *)(lVar26 + 0x58);
  fVar51 = *(float *)(lVar26 + 0x5c);
  fVar53 = *(float *)(lVar26 + 0x60);
  fVar45 = *(float *)(lVar26 + 0x6c);
  fVar54 = *(float *)(lVar26 + 0x70);
  fVar57 = *(float *)(lVar26 + 0x74);
  fVar44 = *(float *)(lVar26 + 0x78);
  if ((int)uVar37 < 9) {
    switch(uVar37) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar53 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar48;
      }
      break;
    case 2:
LAB_0354d968:
      in_stack_000000f8._4_4_ = (fVar53 + fVar51 * 0.5) - fVar48 * 0.5;
      break;
    default:
      goto switchD_0354d8a4_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar51 + fVar53) - fVar48;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar51 + fVar53;
      }
      break;
    case 8:
      goto switchD_0354d8a4_caseD_8;
    }
LAB_0354d9d8:
    _in_stack_000000f0 = 0;
  }
  else if (uVar37 == 0x10) {
switchD_0354d8a4_caseD_8:
    if (uVar30 < 0xad) {
      if ((uVar30 != 3) && (uVar30 != 10)) {
FUN_0354d8fc:
        if (*(uint *)(lVar23 + 0x18) <= uVar32)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar4 = *(undefined2 *)(lVar23 + (long)(int)uVar32 * 0x178 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_026b8cc4(uVar4,0);
        if ((uVar17 & 1) == 0) {
          bVar1 = (int)uVar29 < (int)unaff_x19[0x95];
        }
        else {
          bVar1 = false;
        }
        if ((fVar48 <= fVar51) && (!bVar1 && uVar37 >> 4 == 0)) {
          in_stack_000000f8._4_4_ = fVar53;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar51 + fVar53;
          }
          goto LAB_0354d9d8;
        }
        if (((uVar56 == 1) || (uVar29 != uVar25)) || (uVar12 == *(uint *)((long)unaff_x19 + 0x324)))
        {
          in_stack_000000f8._4_4_ = fVar53;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar51 + fVar53;
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uStack0000000000000030 = FUN_026b97f8(uVar30,0);
          _in_stack_000000f0 = 0;
        }
        else {
          cVar22 = (char)unaff_x19[0x1e];
          fVar53 = -fVar48;
          if (cVar22 != '\0') {
            fVar53 = fVar48;
          }
          if (*(uint *)(lVar23 + 0x18) <= uVar32)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          iVar13 = (int)*(char *)(lVar23 + (long)(int)uVar32 * 0x178 + 0x194) +
                   (-iVar2 - (uStack0000000000000030 & 1)) + iVar13 + -1;
          if (iVar13 < 1) {
            fVar48 = 1.0;
            iVar13 = 1;
          }
          else {
            fVar48 = *(float *)((long)unaff_x19 + 0x2dc);
          }
          if (uVar30 == 9) {
LAB_0354f76c:
            fVar48 = 1.0 - fVar48;
          }
          else {
            if (uVar30 != 0xa0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar17 = FUN_026b97f8(uVar30,0);
              cVar22 = (char)unaff_x19[0x1e];
              if ((uVar17 & 1) != 0) goto LAB_0354f76c;
            }
            iVar13 = (iVar2 - (~uStack0000000000000030 & 1)) + iVar11;
          }
          fVar48 = ((fVar51 + fVar53) * fVar48) / (float)iVar13;
          if (cVar22 == '\0') {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar48;
            _in_stack_000000f0 =
                 CONCAT44((float)((ulong)_in_stack_000000f0 >> 0x20) + 0.0,
                          (float)_in_stack_000000f0 + 0.0);
          }
          else {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar48;
          }
        }
      }
    }
    else if (((uVar30 != 0xad) && (uVar30 != 0x200b)) && (uVar30 != 0x2060)) goto FUN_0354d8fc;
  }
  else if (uVar37 == 0x20) {
    fVar48 = fVar45 + fVar57;
    goto LAB_0354d968;
  }
switchD_0354d8a4_caseD_3:
  uVar37 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar37 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar23 + lVar41 * 0x178;
  fVar53 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar48 = SUB84(in_stack_000000b8,0) + (float)_in_stack_000000f0;
  fVar51 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)_in_stack_000000f0 >> 0x20);
  if (*(char *)(lVar26 + 0x194) == '\0') goto LAB_0354e1d0;
  iVar11 = *(int *)(lVar23 + lVar41 * 0x178 + 0x2c);
  if (iVar11 != 0) goto LAB_0354e05c;
  fVar43 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar29,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar16 = lVar23 + lVar41 * 0x178;
    *(undefined4 *)(lVar16 + 0x84) = 0;
    *(undefined4 *)(lVar16 + 0xac) = 0;
    *(undefined4 *)(lVar16 + 0xd4) = 0x3f800000;
    fVar43 = 1.0;
    break;
  case 1:
    fVar44 = *(float *)(lVar23 + lVar41 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar16 = lVar23 + lVar41 * 0x178;
      fVar57 = (in_stack_000000f8._4_4_ + fVar44) - *(float *)(in_stack_00000078 + 0x230);
      fVar44 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      goto LAB_0354db24;
    }
    lVar16 = lVar23 + lVar41 * 0x178;
    fVar57 = fVar57 - fVar45;
    *(float *)(lVar16 + 0x84) = fVar43 + (fVar44 - fVar45) / fVar57;
    *(float *)(lVar16 + 0xac) = fVar43 + (*(float *)(lVar16 + 0x98) - fVar45) / fVar57;
    *(float *)(lVar16 + 0xd4) = fVar43 + (*(float *)(lVar16 + 0xc0) - fVar45) / fVar57;
    fVar43 = fVar43 + (*(float *)(lVar16 + 0xe8) - fVar45) / fVar57;
    break;
  case 2:
    lVar16 = lVar23 + lVar41 * 0x178;
    fVar44 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
    fVar57 = (in_stack_000000f8._4_4_ + *(float *)(lVar16 + 0x70)) -
             *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
    *(float *)(lVar16 + 0x84) = fVar43 + fVar57 / fVar44;
    *(float *)(lVar16 + 0xac) =
         fVar43 + ((in_stack_000000f8._4_4_ + *(float *)(lVar16 + 0x98)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    *(float *)(lVar16 + 0xd4) =
         fVar43 + ((in_stack_000000f8._4_4_ + *(float *)(lVar16 + 0xc0)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    fVar43 = fVar43 + ((in_stack_000000f8._4_4_ + *(float *)(lVar16 + 0xe8)) -
                      *(float *)(in_stack_00000078 + 0x230)) /
                      (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar16 = lVar23 + lVar41 * 0x178;
      *(undefined4 *)(lVar16 + 0x88) = 0;
      *(undefined4 *)(lVar16 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar16 + 0xd8) = 0;
      *(undefined4 *)(lVar16 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar16 = lVar23 + lVar41 * 0x178;
      fVar44 = fVar44 - fVar54;
      fVar57 = fVar43 + (*(float *)(lVar16 + 0x74) - fVar54) / fVar44;
      fVar44 = fVar43 + (*(float *)(lVar16 + 0x9c) - fVar54) / fVar44;
      *(float *)(lVar16 + 0x88) = fVar57;
      *(float *)(lVar16 + 0xb0) = fVar44;
      *(float *)(lVar16 + 0xd8) = fVar57;
      *(float *)(lVar16 + 0x100) = fVar44;
      break;
    case 2:
      lVar16 = lVar23 + lVar41 * 0x178;
      fVar57 = fVar43 + (*(float *)(lVar16 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar16 + 0x88) = fVar57;
      fVar44 = *(float *)(unaff_x19 + 0x9c);
      fVar45 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar16 + 0xd8) = fVar57;
      fVar57 = fVar43 + (*(float *)(lVar16 + 0x9c) - fVar44) / (fVar45 - fVar44);
      *(float *)(lVar16 + 0xb0) = fVar57;
      *(float *)(lVar16 + 0x100) = fVar57;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar37 = (uint)*(undefined8 *)(lVar23 + 0x18);
    }
    if (uVar37 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar16 = lVar23 + lVar41 * 0x178;
    fVar57 = *(float *)(lVar16 + 0x15c);
    fVar44 = (1.0 - (*(float *)(lVar16 + 0x88) + *(float *)(lVar16 + 0xb0)) * fVar57) * 0.5;
    fVar45 = fVar43 + *(float *)(lVar16 + 0x88) * fVar57 + fVar44;
    fVar43 = fVar43 + fVar44 + *(float *)(lVar16 + 0xb0) * fVar57;
    *(float *)(lVar16 + 0x84) = fVar45;
    *(float *)(lVar16 + 0xac) = fVar45;
    *(float *)(lVar16 + 0xd4) = fVar43;
    break;
  default:
    goto switchD_0354da88_default;
  }
  *(float *)(lVar23 + lVar41 * 0x178 + 0xfc) = fVar43;
switchD_0354da88_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar37 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar16 = lVar23 + lVar41 * 0x178;
    *(undefined4 *)(lVar16 + 0x88) = 0;
    *(undefined4 *)(lVar16 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar16 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar16 + 0x100) = 0;
    break;
  case 1:
    if (uVar12 < uVar37) {
      lVar16 = lVar23 + lVar41 * 0x178;
      fVar42 = fVar42 - fVar52;
      fVar43 = (*(float *)(lVar16 + 0x74) - fVar52) / fVar42;
      fVar42 = (*(float *)(lVar16 + 0x9c) - fVar52) / fVar42;
      *(float *)(lVar16 + 0x88) = fVar43;
      goto LAB_0354de84;
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  case 2:
    if (uVar37 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar16 = lVar23 + lVar41 * 0x178;
    fVar43 = (*(float *)(lVar16 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar16 + 0x88) = fVar43;
    fVar42 = (*(float *)(lVar16 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
    *(float *)(lVar16 + 0xb0) = fVar42;
    *(float *)(lVar16 + 0xd8) = fVar42;
    *(float *)(lVar16 + 0x100) = fVar43;
    break;
  case 3:
    if (uVar37 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar16 = lVar23 + lVar41 * 0x178;
    fVar42 = *(float *)(lVar16 + 0x15c);
    fVar57 = (1.0 - (*(float *)(lVar16 + 0x84) + *(float *)(lVar16 + 0xd4)) / fVar42) * 0.5;
    fVar43 = *(float *)(lVar16 + 0x84) / fVar42 + fVar57;
    fVar57 = fVar57 + *(float *)(lVar16 + 0xd4) / fVar42;
    *(float *)(lVar16 + 0x88) = fVar43;
    *(float *)(lVar16 + 0xb0) = fVar57;
    *(float *)(lVar16 + 0x100) = fVar43;
    *(float *)(lVar16 + 0xd8) = fVar57;
  }
  if (uVar37 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar16 = lVar23 + lVar41 * 0x178;
  fVar43 = ABS(fVar46) * *(float *)(lVar16 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar16 + 0x5c) == '\0') && ((*(byte *)(lVar23 + lVar41 * 0x178 + 400) & 1) != 0)) {
    fVar43 = -fVar43;
  }
  lVar16 = lVar23 + lVar41 * 0x178;
  fVar42 = *(float *)(lVar16 + 0x88);
  fVar44 = *(float *)(lVar16 + 0x84);
  fVar57 = -2.1474836e+09;
  if (fVar44 != INFINITY) {
    fVar57 = (float)(int)fVar44;
  }
  fVar45 = *(float *)(lVar16 + 0xd4);
  fVar54 = *(float *)(lVar16 + 0xd8);
  fVar52 = -2.1474836e+09;
  if (fVar42 != INFINITY) {
    fVar52 = (float)(int)fVar42;
  }
  uVar47 = FUN_03591d3c(fVar44 - fVar57,fVar42 - fVar52);
  *(undefined4 *)(lVar16 + 0x84) = uVar47;
  if (*(uint *)(lVar23 + 0x18) <= uVar12)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar54 = fVar54 - fVar52;
  *(float *)(lVar16 + 0x88) = fVar43;
  uVar47 = FUN_03591d3c(fVar44 - fVar57,fVar54);
  *(undefined4 *)(lVar23 + lVar41 * 0x178 + 0xac) = uVar47;
  if (*(uint *)(lVar23 + 0x18) <= uVar12)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar45 = fVar45 - fVar57;
  *(float *)(lVar23 + lVar41 * 0x178 + 0xb0) = fVar43;
  fVar57 = (float)FUN_03591d3c(fVar45,fVar54);
  *(float *)(lVar16 + 0xd4) = fVar57;
  if (*(uint *)(lVar23 + 0x18) <= uVar12)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar16 + 0xd8) = fVar43;
  uVar47 = FUN_03591d3c(fVar45,fVar42 - fVar52);
  *(undefined4 *)(lVar23 + lVar41 * 0x178 + 0xfc) = uVar47;
  uVar37 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar37 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar23 + lVar41 * 0x178 + 0x100) = fVar43;
LAB_0354e05c:
  if (((int)uVar12 < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar29 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar37 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
      lVar26 = lVar23 + lVar41 * 0x178;
      *(ulong *)(lVar26 + 0x70) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar26 + 0x70) >> 0x20),
                    fVar53 + (float)*(undefined8 *)(lVar26 + 0x70));
      *(float *)(lVar26 + 0x78) = fVar51 + *(float *)(lVar26 + 0x78);
      *(ulong *)(lVar26 + 0x98) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar26 + 0x98) >> 0x20),
                    fVar53 + (float)*(undefined8 *)(lVar26 + 0x98));
      *(float *)(lVar26 + 0xa0) = fVar51 + *(float *)(lVar26 + 0xa0);
      *(ulong *)(lVar26 + 0xc0) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar26 + 0xc0) >> 0x20),
                    fVar53 + (float)*(undefined8 *)(lVar26 + 0xc0));
      *(float *)(lVar26 + 200) = fVar51 + *(float *)(lVar26 + 200);
      *(ulong *)(lVar26 + 0xe8) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar26 + 0xe8) >> 0x20),
                    fVar53 + (float)*(undefined8 *)(lVar26 + 0xe8));
      *(float *)(lVar26 + 0xf0) = fVar51 + *(float *)(lVar26 + 0xf0);
      goto LAB_0354e184;
    }
    if (((int)uVar29 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar12 < uVar37) {
        if (*(uint *)(lVar23 + lVar41 * 0x178 + 0x68) == uStack0000000000000034) goto LAB_0354f0d4;
        goto LAB_0354e0cc;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
  }
LAB_0354e0cc:
  if (uVar37 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac();
    DAT_0411f172 = '\x01';
    uVar37 = *(uint *)(lVar23 + 0x18);
  }
  puVar9 = PTR_DAT_03cbded8;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar16 = lVar23 + lVar41 * 0x178;
  *(undefined8 *)(lVar16 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar16 + 0x78) = uVar47;
  if (uVar37 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  lVar16 = lVar23 + lVar41 * 0x178;
  *(undefined8 *)(lVar16 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar16 + 0xa0) = uVar47;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar16 + 0xc0) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar16 + 200) = uVar47;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar16 + 0xe8) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar16 + 0xf0) = uVar47;
  *(undefined1 *)(lVar26 + 0x194) = 0;
LAB_0354e184:
  if (iVar11 == 0) {
    pcVar28 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
    (*pcVar28)();
  }
  else if (iVar11 == 1) {
    pcVar28 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0354e1b4;
  }
LAB_0354e1d0:
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar12)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar26 + lVar41 * 0x178;
  uVar18 = *(undefined8 *)(lVar26 + 0x11c);
  *(undefined8 *)(lVar26 + 0x11c) =
       CONCAT44(fVar48 + (float)((ulong)uVar18 >> 0x20),fVar53 + (float)uVar18);
  *(float *)(lVar26 + 0x124) = fVar51 + *(float *)(lVar26 + 0x124);
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar12)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar26 + lVar41 * 0x178;
  *(ulong *)(lVar26 + 0x110) =
       CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar26 + 0x110) >> 0x20),
                fVar53 + (float)*(undefined8 *)(lVar26 + 0x110));
  *(float *)(lVar26 + 0x118) = fVar51 + *(float *)(lVar26 + 0x118);
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar12)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar26 + lVar41 * 0x178;
  *(ulong *)(lVar26 + 0x128) =
       CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar26 + 0x128) >> 0x20),
                fVar53 + (float)*(undefined8 *)(lVar26 + 0x128));
  *(float *)(lVar26 + 0x130) = fVar51 + *(float *)(lVar26 + 0x130);
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar12)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar26 + lVar41 * 0x178;
  *(float *)(lVar26 + 0x134) = fVar53 + *(float *)(lVar26 + 0x134);
  *(ulong *)(lVar26 + 0x138) =
       CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar26 + 0x138) >> 0x20),
                fVar48 + (float)*(undefined8 *)(lVar26 + 0x138));
  lVar26 = *unaff_x22;
  if ((lVar26 == 0) || (lVar16 = *(long *)(lVar26 + 0x38), lVar16 == 0)) goto LAB_0354fbf4;
  uVar37 = *(uint *)(lVar16 + 0x18);
  if (uVar37 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar34 = lVar16 + lVar41 * 0x178;
  *(float *)(lVar34 + 0x150) = fVar48 + *(float *)(lVar34 + 0x150);
  *(ulong *)(lVar34 + 0x140) =
       CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar34 + 0x140) >> 0x20),
                fVar53 + (float)*(undefined8 *)(lVar34 + 0x140));
  *(ulong *)(lVar34 + 0x148) =
       CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar34 + 0x148) >> 0x20),
                fVar48 + (float)*(undefined8 *)(lVar34 + 0x148));
  if (uVar29 == uVar25) {
    uVar25 = *unaff_x20 - 1;
    if (uVar12 == uVar25) goto LAB_0354e3ec;
  }
  else {
    lVar26 = *(long *)(lVar26 + 0x50);
    if (lVar26 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar26 + 0x18) <= uVar25)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar34 = (long)(int)uVar25;
    lVar35 = lVar26 + lVar34 * 0x5c;
    fVar57 = fVar48 + *(float *)(lVar35 + 0x54);
    *(ulong *)(lVar35 + 0x4c) =
         CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar35 + 0x4c) >> 0x20),
                  fVar48 + (float)*(undefined8 *)(lVar35 + 0x4c));
    *(float *)(lVar35 + 0x54) = fVar57;
    *(float *)(lVar35 + 0x58) = fVar53 + *(float *)(lVar35 + 0x58);
    if (uVar37 <= *(uint *)(lVar35 + 0x34))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar47 = *(undefined4 *)(lVar16 + (long)(int)*(uint *)(lVar35 + 0x34) * 0x178 + 0x11c);
    lVar26 = lVar26 + lVar34 * 0x5c;
    *(float *)(lVar26 + 0x70) = fVar57;
    *(undefined4 *)(lVar26 + 0x6c) = uVar47;
    lVar26 = *unaff_x22;
    if ((lVar26 == 0) || (lVar16 = *(long *)(lVar26 + 0x50), lVar16 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar16 + 0x18) <= uVar25)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar26 = *(long *)(lVar26 + 0x38);
    if (lVar26 == 0) goto LAB_0354fbf4;
    uVar25 = *(uint *)(lVar16 + lVar34 * 0x5c + 0x40);
    if (*(uint *)(lVar26 + 0x18) <= uVar25)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar16 = lVar16 + lVar34 * 0x5c;
    *(undefined4 *)(lVar16 + 0x74) = *(undefined4 *)(lVar26 + (long)(int)uVar25 * 0x178 + 0x128);
    *(undefined4 *)(lVar16 + 0x78) = *(undefined4 *)(lVar16 + 0x4c);
    uVar25 = *unaff_x20 - 1;
LAB_0354e3ec:
    if (uVar12 == uVar25) {
      lVar26 = *unaff_x22;
      if ((lVar26 == 0) || (lVar16 = *(long *)(lVar26 + 0x50), lVar16 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= uVar29)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar34 = lVar16 + lVar36 * 0x5c;
      fVar57 = fVar48 + *(float *)(lVar34 + 0x54);
      *(ulong *)(lVar34 + 0x4c) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar34 + 0x4c) >> 0x20),
                    fVar48 + (float)*(undefined8 *)(lVar34 + 0x4c));
      *(float *)(lVar34 + 0x54) = fVar57;
      *(float *)(lVar34 + 0x58) = fVar53 + *(float *)(lVar34 + 0x58);
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(lVar34 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar47 = *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar34 + 0x34) * 0x178 + 0x11c);
      lVar16 = lVar16 + lVar36 * 0x5c;
      *(float *)(lVar16 + 0x70) = fVar57;
      *(undefined4 *)(lVar16 + 0x6c) = uVar47;
      lVar26 = *unaff_x22;
      if ((lVar26 == 0) || (lVar16 = *(long *)(lVar26 + 0x50), lVar16 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= uVar29)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_0354fbf4;
      uVar25 = *(uint *)(lVar16 + lVar36 * 0x5c + 0x40);
      if (*(uint *)(lVar26 + 0x18) <= uVar25)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = lVar16 + lVar36 * 0x5c;
      *(undefined4 *)(lVar16 + 0x74) = *(undefined4 *)(lVar26 + (long)(int)uVar25 * 0x178 + 0x128);
      *(undefined4 *)(lVar16 + 0x78) = *(undefined4 *)(lVar16 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar17 = FUN_026b82c4(uVar30,0);
  if (((((uVar17 & 1) == 0) && (1 < uVar30 - 0x2010)) && (uVar30 != 0xad)) && (uVar30 != 0x2d)) {
    if (bVar6) {
      if (((uVar56 != 1) && ((int)uVar12 < (int)(*(uint *)(lVar23 + 0x18) - 1))) &&
         (((int)uVar12 < (int)*unaff_x20 && ((uVar30 == 0x2019 || (uVar30 == 0x27)))))) {
        if (*(uint *)(lVar23 + 0x18) <= uVar56 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar4 = *(undefined2 *)(lVar23 + lVar40 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_026b82c4(uVar4,0);
        if ((uVar17 & 1) != 0) {
          if (*(uint *)(lVar23 + 0x18) <= uVar56)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar4 = *(undefined2 *)(lVar23 + lVar40 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_026b82c4(uVar4,0);
          if ((uVar17 & 1) != 0) goto LAB_0354e610;
        }
      }
    }
    else {
      if (uVar56 != 1) {
LAB_0354f144:
        bVar6 = false;
        goto LAB_0354e618;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_026b81f8(uVar30,0);
      if ((uVar17 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_026b63d8(uVar30,0);
        if (((uVar30 != 0x200b) && ((uVar17 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0354f144;
      }
    }
    if (uVar12 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_026b82c4(uVar30,0);
      iVar11 = (int)fStack0000000000000124;
      if ((uVar17 & 1) == 0) goto LAB_0354e93c;
    }
    else {
LAB_0354e93c:
      iVar11 = uVar56 - 2;
    }
    lVar26 = *unaff_x22;
    if (lVar26 == 0) goto LAB_0354fbf4;
    lVar16 = *(long *)(lVar26 + 0x40);
    if (lVar16 == 0) goto LAB_0354fbf4;
    uVar25 = *(uint *)(lVar26 + 0x24);
    iVar13 = *(int *)(lVar16 + 0x18);
    if (iVar13 < (int)(uVar25 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar26 + 0x40),iVar13 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar26 = *unaff_x22;
      if (lVar26 == 0) goto LAB_0354fbf4;
    }
    lVar26 = *(long *)(lVar26 + 0x40);
    if (lVar26 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar26 + 0x18) <= uVar25)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar26 = lVar26 + (long)(int)uVar25 * 0x18;
    *(long **)(lVar26 + 0x20) = unaff_x19;
    *(float *)(lVar26 + 0x28) = in_stack_00000168._4_4_;
    *(int *)(lVar26 + 0x2c) = iVar11;
    *(int *)(lVar26 + 0x30) = (iVar11 - (int)in_stack_00000168._4_4_) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar26 = unaff_x19[0x6d];
    if (lVar26 == 0) goto LAB_0354fbf4;
    lVar16 = *(long *)(lVar26 + 0x50);
    *(int *)(lVar26 + 0x24) = *(int *)(lVar26 + 0x24) + 1;
    if (lVar16 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar16 + 0x18) <= uVar29)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar16 = lVar16 + lVar36 * 0x5c;
    bVar6 = false;
    iStack00000000000000d8 = iStack00000000000000d8 + 1;
    *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
  }
  else {
    if (!bVar6) {
      in_stack_00000168._4_4_ = (float)uVar12;
    }
    if (uVar12 == *unaff_x20 - 1) {
      lVar26 = *unaff_x22;
      if (lVar26 == 0) goto LAB_0354fbf4;
      lVar16 = *(long *)(lVar26 + 0x40);
      if (lVar16 == 0) goto LAB_0354fbf4;
      uVar25 = *(uint *)(lVar26 + 0x24);
      iVar11 = *(int *)(lVar16 + 0x18);
      if (iVar11 < (int)(uVar25 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar26 + 0x40),iVar11 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar26 = *unaff_x22;
        if (lVar26 == 0) goto LAB_0354fbf4;
      }
      lVar26 = *(long *)(lVar26 + 0x40);
      if (lVar26 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar25)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + (long)(int)uVar25 * 0x18;
      *(long **)(lVar26 + 0x20) = unaff_x19;
      *(float *)(lVar26 + 0x28) = in_stack_00000168._4_4_;
      *(uint *)(lVar26 + 0x2c) = uVar12;
      *(uint *)(lVar26 + 0x30) = uVar56 - (int)in_stack_00000168._4_4_;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar26 = unaff_x19[0x6d];
      if (lVar26 == 0) goto LAB_0354fbf4;
      lVar16 = *(long *)(lVar26 + 0x50);
      *(int *)(lVar26 + 0x24) = *(int *)(lVar26 + 0x24) + 1;
      if (lVar16 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= uVar29)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = lVar16 + lVar36 * 0x5c;
      iStack00000000000000d8 = iStack00000000000000d8 + 1;
      *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
    }
LAB_0354e610:
    bVar6 = true;
  }
LAB_0354e618:
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  uVar25 = *(uint *)(lVar26 + 0x18);
  if (uVar25 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar26 + lVar41 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar10) {
LAB_0354e660:
      if (uVar25 <= uVar56 - 2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = *unaff_x19;
      uVar47 = *(undefined4 *)(lVar26 + lVar40 + -0x330);
      uVar49 = *(undefined4 *)(lVar26 + lVar40 + -0x2f8);
LAB_0354ebc0:
      pcVar28 = *(code **)(lVar16 + 0x8d8);
LAB_0354ebc8:
      (*pcVar28)(fStack0000000000000070,_bStack0000000000000068,_bStack000000000000006c,uVar47,
                 fStack0000000000000104,0,in_stack_00000080._4_4_,uVar49);
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar26 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar26 = *(long *)puVar9;
      }
LAB_0354ec1c:
      fVar50 = 0.0;
      bVar10 = false;
      fStack0000000000000104 = *(float *)(*(long *)(lVar26 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_0354eb28:
      bVar10 = false;
    }
  }
  else {
    lVar26 = lVar26 + lVar41 * 0x178;
    iVar11 = *(int *)(lVar26 + 0x68);
    *(int *)(lVar26 + 0x16c) = iVar38;
    if ((((int)unaff_x19[0x65] < (int)uVar12) || ((int)unaff_x19[0x66] < (int)uVar29)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar11 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar17 = FUN_026b63d8(uVar30,0);
    if ((uVar30 != 0x200b) && ((uVar17 & 1) == 0)) {
      lVar26 = *unaff_x22;
      if ((lVar26 == 0) || (lVar16 = *(long *)(lVar26 + 0x38), lVar16 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar57 = *(float *)(lVar16 + lVar41 * 0x178 + 0x160);
      if (fVar50 <= fVar57) {
        fVar50 = fVar57;
      }
      if (fStack0000000000000100 <= ABS(fVar43)) {
        fStack0000000000000100 = ABS(fVar43);
      }
      if ((float)iVar11 != fStack000000000000005c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar26 = *unaff_x22;
          if (lVar26 == 0) goto LAB_0354fbf4;
          lVar16 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar16 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar16 + 0x15a8);
      }
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
      fVar42 = *(float *)(lVar26 + lVar41 * 0x178 + 0x14c);
      fVar57 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar42 = fVar42 + fVar50 * fVar57;
      fStack000000000000005c = (float)iVar11;
      if (fVar42 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar42;
      }
    }
    if (!bVar10) {
      bVar10 = false;
      if ((((uVar30 == 0xd) || ((uVar30 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar12)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
      if (uVar12 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_026b97f8(uVar30,0);
        if ((uVar17 & 1) != 0) goto LAB_0354eb28;
      }
      if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + lVar41 * 0x178;
      in_stack_00000080._4_4_ = *(float *)(lVar26 + 0x160);
      fStack0000000000000070 = *(float *)(lVar26 + 0x11c);
      bVar10 = fVar50 != 0.0;
      fVar57 = in_stack_00000080._4_4_;
      if (bVar10) {
        fVar57 = fVar50;
      }
      fVar50 = fVar57;
      uVar55 = *(undefined4 *)(lVar26 + 0x168);
      _bStack000000000000006c = 0;
      fVar57 = fVar43;
      if (bVar10) {
        fVar57 = fStack0000000000000100;
      }
      _bStack0000000000000068 = fStack0000000000000104;
      fStack0000000000000100 = fVar57;
    }
    if (*unaff_x20 == 1) {
      if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
        if (uVar12 < *(uint *)(lVar26 + 0x18)) {
          lVar26 = lVar26 + lVar41 * 0x178;
          lVar16 = *unaff_x19;
          uVar47 = *(undefined4 *)(lVar26 + 0x128);
          uVar49 = *(undefined4 *)(lVar26 + 0x160);
          goto LAB_0354ebc0;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((uVar12 == uVar32) || ((int)uVar5 <= (int)uVar12)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_026b63d8(uVar30,0);
      if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
        lVar16 = lVar41;
        uVar25 = uVar12;
        if (uVar30 == 0x200b || (uVar17 & 1) != 0) {
          lVar16 = (long)(int)uVar5;
          uVar25 = uVar5;
        }
        if (uVar25 < *(uint *)(lVar26 + 0x18)) {
          lVar26 = lVar26 + lVar16 * 0x178;
          uVar47 = *(undefined4 *)(lVar26 + 0x128);
          uVar49 = *(undefined4 *)(lVar26 + 0x160);
          pcVar28 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354ebc8;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
        uVar25 = *(uint *)(lVar26 + 0x18);
        goto LAB_0354e660;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar12 < (int)(*unaff_x20 - 1)) {
      if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar56)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar17 = FUN_03567ad8(uVar55,*(undefined4 *)(lVar26 + lVar40),0);
      if ((uVar17 & 1) == 0) {
        if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
          if (uVar12 < *(uint *)(lVar26 + 0x18)) {
            lVar26 = lVar26 + lVar41 * 0x178;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000070,_bStack0000000000000068,_bStack000000000000006c,
                       *(undefined4 *)(lVar26 + 0x128),fStack0000000000000104,0,
                       in_stack_00000080._4_4_,*(undefined4 *)(lVar26 + 0x160));
            puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar26 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar26 = *(long *)puVar9;
            }
            goto LAB_0354ec1c;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
    }
    bVar10 = true;
  }
LAB_0354ec38:
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar12)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (lVar33 == 0) goto LAB_0354fbf4;
  uVar25 = *(uint *)(lVar26 + lVar41 * 0x178 + 400);
  fVar57 = (float)FUN_03776a30(lVar33 + 0x50,0);
  if ((uVar25 >> 6 & 1) == 0) {
    if (bVar7) {
      if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar56 - 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar47 = *(undefined4 *)(lVar26 + lVar40 + -0x330);
      fVar48 = *(float *)(lVar26 + lVar40 + -0x30c);
      pcVar28 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
      (*pcVar28)(fStack00000000000000a0,fStack000000000000009c,fStack0000000000000098,uVar47,
                 fStack00000000000000a8 * fVar57 + fVar48,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_0354f250:
    bVar7 = false;
  }
  else {
    lVar26 = *unaff_x22;
    if ((lVar26 == 0) || (lVar16 = *(long *)(lVar26 + 0x38), lVar16 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar16 + 0x18) <= uVar12)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(int *)(lVar16 + lVar41 * 0x178 + 0x174) = iVar38;
    if ((((int)unaff_x19[0x65] < (int)uVar12) || ((int)unaff_x19[0x66] < (int)uVar29)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar16 + lVar41 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar30 == 0xd) || ((uVar30 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar12)) ||
       (bVar7 || !bVar1)) {
LAB_0354ed84:
      if (!bVar7) goto LAB_0354f250;
    }
    else {
      if (uVar12 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_026b97f8(uVar30,0);
        if ((uVar17 & 1) != 0) goto LAB_0354ed84;
        lVar26 = *unaff_x22;
        if (lVar26 == 0) goto LAB_0354fbf4;
      }
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + lVar41 * 0x178;
      in_stack_00000048._4_4_ = *(float *)(lVar26 + 0x60);
      fStack0000000000000040 = *(float *)(lVar26 + 0x14c);
      fStack00000000000000a0 = *(float *)(lVar26 + 0x11c);
      fStack00000000000000a8 = *(float *)(lVar26 + 0x160);
      fStack000000000000009c = fVar57 * fStack00000000000000a8 + fStack0000000000000040;
      fStack0000000000000098 = 0.0;
    }
    uVar25 = *unaff_x20;
    if (uVar25 == 1) {
      if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
        uVar25 = *(uint *)(lVar26 + 0x18);
LAB_0354ef0c:
        if (uVar12 < uVar25) {
          lVar26 = lVar26 + lVar41 * 0x178;
          lVar16 = *unaff_x19;
          uVar47 = *(undefined4 *)(lVar26 + 0x128);
          fVar48 = *(float *)(lVar26 + 0x14c);
LAB_0354ef24:
          pcVar28 = *(code **)(lVar16 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (uVar12 == uVar32) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_026b63d8(uVar30,0);
      if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
        uVar25 = *(uint *)(lVar26 + 0x18);
        if (uVar30 == 0x200b || (uVar17 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
        lVar16 = lVar41;
        if (uVar12 < uVar25) {
LAB_0354f1f8:
          lVar26 = lVar26 + lVar16 * 0x178;
          fVar48 = *(float *)(lVar26 + 0x14c);
          uVar47 = *(undefined4 *)(lVar26 + 0x128);
          pcVar28 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar12 < (int)uVar25) {
      lVar26 = *unaff_x22;
      if ((lVar26 != 0) && (lVar16 = *(long *)(lVar26 + 0x38), lVar16 != 0)) {
        if (uVar56 < *(uint *)(lVar16 + 0x18)) {
          if (*(float *)(lVar16 + lVar40 + -0x108) == in_stack_00000048._4_4_) {
            fVar42 = *(float *)(lVar16 + lVar40 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar17 = FUN_03567bac(fVar48 + fVar42,fStack0000000000000040,0);
            if ((uVar17 & 1) != 0) {
              uVar25 = *unaff_x20;
              goto LAB_0354f010;
            }
            lVar26 = *unaff_x22;
            if (lVar26 == 0) goto LAB_0354fbf4;
          }
          lVar26 = *(long *)(lVar26 + 0x38);
          if (lVar26 != 0) {
            uVar25 = *(uint *)(lVar26 + 0x18);
            if ((int)uVar12 <= (int)uVar5) goto LAB_0354f1f0;
LAB_0354f1e0:
            lVar16 = (long)(int)uVar5;
            if (uVar5 < uVar25) goto LAB_0354f1f8;
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          goto LAB_0354fbf4;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
LAB_0354f010:
    if ((int)uVar12 < (int)uVar25) {
      iVar11 = FUN_036d3364(lVar33,0);
      if (*(uint *)(lVar23 + 0x18) <= uVar56)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = *(long *)(lVar23 + lVar40 + -0x130);
      if (lVar26 == 0) goto LAB_0354fbf4;
      iVar13 = FUN_036d3364(lVar26,0);
      if (iVar11 != iVar13) {
        if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
          uVar25 = *(uint *)(lVar26 + 0x18);
          goto LAB_0354ef0c;
        }
        goto LAB_0354fbf4;
      }
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
        if (uVar56 - 2 < *(uint *)(lVar26 + 0x18)) {
          lVar16 = *unaff_x19;
          uVar47 = *(undefined4 *)(lVar26 + lVar40 + -0x330);
          fVar48 = *(float *)(lVar26 + lVar40 + -0x30c);
          goto LAB_0354ef24;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    bVar7 = true;
  }
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  uVar25 = (uint)*(undefined8 *)(lVar26 + 0x18);
  if (uVar25 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar26 + lVar41 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar8) {
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                 fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
    }
LAB_0354f604:
    bVar8 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar12) || ((int)unaff_x19[0x66] < (int)uVar29)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar26 + lVar41 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar8) {
LAB_0354f400:
      if (uVar25 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + lVar41 * 0x178;
      fVar57 = *(float *)(lVar26 + 0x128);
      fVar52 = *(float *)(lVar26 + 0x188);
      uVar14 = *(undefined8 *)(lVar26 + 0x17c);
      fVar51 = *(float *)(lVar26 + 0x184);
      uVar18 = *(undefined8 *)(lVar26 + 0x184);
      fVar45 = *(float *)(lVar26 + 0x18c);
      fVar48 = *(float *)(lVar26 + 0x11c);
      fVar42 = *(float *)(lVar26 + 0x148);
      fVar44 = *(float *)(lVar26 + 0x150);
      in_stack_00000188 = uVar14;
      fStack0000000000000190 = fVar51;
      fStack0000000000000194 = fVar52;
      in_stack_00000198 = fVar45;
      in_stack_000001a0 = in_stack_000017c0;
      in_stack_000001a8 = in_stack_000017c8;
      in_stack_000001b0 = in_stack_000017d0;
      uVar17 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
      lVar26 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar17 & 1) == 0) {
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar26);
        }
        fVar57 = fVar57 + (float)in_stack_000017c8;
        fVar48 = fVar48 - (float)((ulong)in_stack_000017c0 >> 0x20);
        fVar42 = fVar42 + (float)((ulong)in_stack_000017c8 >> 0x20);
        if (fVar48 <= fStack00000000000000e0) {
          fStack00000000000000e0 = fVar48;
        }
        if (fVar44 - in_stack_000017d0 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar44 - in_stack_000017d0;
        }
        if (fStack00000000000000d0 <= fVar57) {
          fStack00000000000000d0 = fVar57;
        }
        if (fStack00000000000000d4 <= fVar42) {
          fStack00000000000000d4 = fVar42;
        }
      }
      else {
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar26);
        }
        fVar48 = (fVar48 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
        if (fVar44 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar44;
        }
        if (fStack00000000000000d4 <= fVar42) {
          fStack00000000000000d4 = fVar42;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,fVar48,
                   fStack00000000000000d4,uStack00000000000000c0);
        fStack00000000000000e4 = fVar44 - fVar45;
        fStack00000000000000d0 = fVar57 + fVar51;
        uStack00000000000000c0 = 0;
        fStack00000000000000d4 = fVar42 + fVar52;
        fStack00000000000000e0 = fVar48;
        in_stack_000017c0 = uVar14;
        in_stack_000017c8 = uVar18;
        in_stack_000017d0 = fVar45;
      }
      if (((*unaff_x20 == 1) || (uVar12 == uVar32)) || (((int)uVar5 <= (int)uVar12 || (!bVar1)))) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
        goto LAB_0354f604;
      }
      bVar8 = true;
    }
    else {
      if ((((uVar30 != 0xd) && ((uVar30 & 0xfffe) != 10)) && ((int)uVar12 <= (int)uVar5)) && (bVar1)
         ) {
        if (uVar12 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_026b97f8(uVar30,0);
          if ((uVar17 & 1) != 0) goto LAB_0354f374;
        }
        puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar16 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar16 = *(long *)puVar9;
        }
        if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
          uVar25 = (uint)*(undefined8 *)(lVar26 + 0x18);
          if (uVar12 < uVar25) {
            lVar16 = *(long *)(lVar16 + 0xb8);
            lVar33 = lVar26 + lVar41 * 0x178;
            in_stack_000017c8 = *(undefined8 *)(lVar33 + 0x184);
            in_stack_000017c0 = *(undefined8 *)(lVar33 + 0x17c);
            fStack00000000000000e0 = *(float *)(lVar16 + 0x1598);
            fStack00000000000000e4 = *(float *)(lVar16 + 0x159c);
            in_stack_000017d0 = *(float *)(lVar33 + 0x18c);
            fStack00000000000000d0 = *(float *)(lVar16 + 0x15a0);
            fStack00000000000000d4 = *(float *)(lVar16 + 0x15a4);
            uStack00000000000000c0 = 0;
            goto LAB_0354f400;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
LAB_0354f374:
      bVar8 = false;
    }
  }
  uVar12 = *unaff_x20;
  fStack0000000000000124 = (float)((int)fStack0000000000000124 + 1);
  lVar40 = lVar40 + 0x178;
  bVar1 = (int)uVar12 <= (int)uVar56;
  uVar25 = uVar29;
  uVar56 = uVar56 + 1;
  if (bVar1) goto LAB_0354f7d0;
  goto LAB_0354d7c0;
LAB_0354f7d0:
  lVar23 = *unaff_x22;
  if (lVar23 != 0) {
    iVar38 = uVar29 + 1;
    plVar39 = (long *)OVRPlugin_Media_TypeInfo;
LAB_0354f7f4:
    *(uint *)(lVar23 + 0x18) = uVar12;
    lVar40 = unaff_x19[0xd4];
    *(int *)(lVar23 + 0x2c) = iVar38;
    if ((int)uVar12 < 1 || iStack00000000000000d8 == 0) {
      iStack00000000000000d8 = 1;
    }
    *(int *)(lVar23 + 0x1c) = (int)lVar40;
    *(int *)(lVar23 + 0x24) = iStack00000000000000d8;
    *(int *)(lVar23 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar17 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar17 & 1) == 0)) {
LAB_0354d0cc:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar23 = unaff_x19[0xdb];
    if (lVar23 != 0) {
      (**(code **)(lVar23 + 0x18))
                (*(undefined8 *)(lVar23 + 0x40),*unaff_x22,*(undefined8 *)(lVar23 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x60), lVar23 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(*plVar39 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar23 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      FUN_03596b20(lVar23 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar23 = *(long *)(unaff_x19[0x6d] + 0x60), lVar23 != 0)) {
        if (*(int *)(lVar23 + 0x18) == 0) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar23 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar23 = *(long *)(unaff_x19[0x6d] + 0x60), lVar23 != 0)) {
            if (*(int *)(lVar23 + 0x18) == 0)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar23 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar23 = *(long *)(unaff_x19[0x6d] + 0x60), lVar23 != 0)) {
                if (*(int *)(lVar23 + 0x18) == 0)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar23 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar23 = *(long *)(unaff_x19[0x6d] + 0x60), lVar23 != 0)) {
                    if (*(int *)(lVar23 + 0x18) == 0)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar23 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        lVar23 = *unaff_x22;
                        if (lVar23 != 0) {
                          lVar26 = 0;
                          lVar40 = 0;
                          do {
                            uVar17 = lVar40 + 1;
                            if ((long)*(int *)(lVar23 + 0x34) <= (long)uVar17) goto LAB_0354d0cc;
                            lVar23 = *(long *)(lVar23 + 0x60);
                            if (lVar23 == 0) break;
                            if (*(int *)(*plVar39 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            if (*(uint *)(lVar23 + 0x18) <= uVar17)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            FUN_03596a20(lVar23 + lVar26 + 0x70,0);
                            lVar23 = unaff_x19[0xe1];
                            if (lVar23 == 0) break;
                            if (*(uint *)(lVar23 + 0x18) <= uVar17)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            uVar18 = *(undefined8 *)(lVar23 + lVar40 * 8 + 0x28);
                            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar20 = FUN_036d35a8(uVar18,0,0);
                            if ((uVar20 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                if ((*unaff_x22 == 0) ||
                                   (lVar23 = *(long *)(*unaff_x22 + 0x60), lVar23 == 0)) break;
                                if (*(int *)(*plVar39 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                if (*(uint *)(lVar23 + 0x18) <= uVar17)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                FUN_03596b20(lVar23 + lVar26 + 0x70,1,0);
                              }
                              lVar23 = unaff_x19[0xe1];
                              if (lVar23 == 0) break;
                              if (*(uint *)(lVar23 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar23 = *(long *)(lVar23 + lVar40 * 8 + 0x28);
                              if (lVar23 == 0) break;
                              lVar23 = FUN_0359d5ac(lVar23,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar16 = *(long *)(*unaff_x22 + 0x60), lVar16 == 0)) break;
                              if (*(uint *)(lVar16 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar23 == 0) break;
                              FUN_036a460c(lVar23,*(undefined8 *)(lVar16 + lVar26 + 0x80),0);
                              lVar23 = unaff_x19[0xe1];
                              if (lVar23 == 0) break;
                              if (*(uint *)(lVar23 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar23 = *(long *)(lVar23 + lVar40 * 8 + 0x28);
                              if (lVar23 == 0) break;
                              lVar23 = FUN_0359d5ac(lVar23,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar16 = *(long *)(*unaff_x22 + 0x60), lVar16 == 0)) break;
                              if (*(uint *)(lVar16 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar23 == 0) break;
                              FUN_036a4810(lVar23,*(undefined8 *)(lVar16 + lVar26 + 0x98),0);
                              lVar23 = unaff_x19[0xe1];
                              if (lVar23 == 0) break;
                              if (*(uint *)(lVar23 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar23 = *(long *)(lVar23 + lVar40 * 8 + 0x28);
                              if (lVar23 == 0) break;
                              lVar23 = FUN_0359d5ac(lVar23,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar16 = *(long *)(*unaff_x22 + 0x60), lVar16 == 0)) break;
                              if (*(uint *)(lVar16 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar23 == 0) break;
                              FUN_036a48bc(lVar23,*(undefined8 *)(lVar16 + lVar26 + 0xa0),0);
                              lVar23 = unaff_x19[0xe1];
                              if (lVar23 == 0) break;
                              if (*(uint *)(lVar23 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar23 = *(long *)(lVar23 + lVar40 * 8 + 0x28);
                              if (lVar23 == 0) break;
                              lVar23 = FUN_0359d5ac(lVar23,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar16 = *(long *)(*unaff_x22 + 0x60), lVar16 == 0)) break;
                              if (*(uint *)(lVar16 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar23 == 0) break;
                              FUN_036a4e24(lVar23,*(undefined8 *)(lVar16 + lVar26 + 0xa8),0);
                              lVar23 = unaff_x19[0xe1];
                              if (lVar23 == 0) break;
                              if (*(uint *)(lVar23 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar23 = *(long *)(lVar23 + lVar40 * 8 + 0x28);
                              if ((lVar23 == 0) || (lVar23 = FUN_0359d5ac(lVar23,0), lVar23 == 0))
                              break;
                              FUN_036aa280(lVar23,0);
                            }
                            lVar23 = *unaff_x22;
                            lVar40 = lVar40 + 1;
                            lVar26 = lVar26 + 0x50;
                          } while (lVar23 != 0);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0354fbf4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


