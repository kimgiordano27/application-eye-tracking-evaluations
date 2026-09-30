/*
FUNCTION_NAME: UnityEngine._AndroidJNIHelper$$Box
ENTRY_POINT: 0354b448
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_21
*/


void UnityEngine__AndroidJNIHelper__Box(long param_1,undefined1 param_2 [16],ulong param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  undefined8 uVar20;
  long lVar21;
  long *plVar22;
  undefined1 uVar23;
  char cVar24;
  uint uVar25;
  undefined4 *puVar26;
  long lVar27;
  float *pfVar28;
  code *pcVar29;
  uint uVar30;
  uint uVar31;
  float *pfVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x24;
  long *unaff_x25;
  long lVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  ulong uVar50;
  undefined4 uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  ulong unaff_d13;
  undefined4 uVar60;
  float fVar61;
  float fVar62;
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
  undefined8 uStack00000000000000f0;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float fStack0000000000000120;
  float fStack0000000000000124;
  float fStack0000000000000134;
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
  char in_stack_000017e4;
  float in_stack_000017e8;
  uint in_stack_000017ec;
  
code_r0x0354b448:
  uVar20 = (**(code **)(param_1 + 0x518))();
  if (unaff_x25 != (long *)0x0) {
    (**(code **)(*unaff_x25 + 0x528))(unaff_x25,uVar20,*(undefined8 *)(*unaff_x25 + 0x530));
    lVar21 = unaff_x19[0x5d];
    if (lVar21 != 0) {
      *(int *)(lVar21 + 0x400) = (int)unaff_x19[0x80];
      FUN_0357ee30(lVar21,*(undefined4 *)((long)unaff_x19 + 0x494),0);
      plVar22 = (long *)unaff_x19[0x5d];
      if (plVar22 != (long *)0x0) {
        (**(code **)(*plVar22 + 0x7a8))(plVar22,0,0,*(undefined8 *)(*plVar22 + 0x7b0));
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
LAB_0354b4b4:
        uVar20 = CONCAT44(3,*unaff_x20);
        uVar10 = in_stack_000017ec;
LAB_03549564:
        fVar52 = (float)unaff_d13;
        in_stack_000017b8 = in_stack_000017b8 + 1;
        lVar21 = unaff_x19[0x8f];
        if (lVar21 != 0) {
          if ((int)in_stack_000017b8 < (int)*(uint *)(lVar21 + 0x18)) {
            if (*(uint *)(lVar21 + 0x18) <= in_stack_000017b8)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            in_stack_000017ec = *(uint *)(lVar21 + (long)(int)in_stack_000017b8 * 0xc + 0x20);
            if (in_stack_000017ec == 0) goto LAB_0354cf48;
            if (5 < in_stack_00000180) {
              uVar20 = FUN_0276793c(&stack0x000017ec,0);
              uVar16 = FUN_0276793c(&stack0x000017b8,0);
              uVar20 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar20,
                                    *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar16,0);
              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
              }
              FUN_0367ae18(uVar20,0);
              uVar20 = CONCAT44(3,*unaff_x20);
            }
            if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (in_stack_000017ec == 0x3c))
            goto code_r0x035492f0;
            if ((*unaff_x22 != 0) && (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 != 0)) {
              if (*unaff_x20 < *(uint *)(lVar21 + 0x18)) {
                lVar21 = lVar21 + (long)(int)*unaff_x20 * unaff_x24;
                *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar21 + 0x2c);
                *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar21 + 0x58);
                unaff_x19[0x20] = *(long *)(lVar21 + 0x38);
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x21);
                goto LAB_03549378;
              }
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            }
            goto LAB_0354fbf4;
          }
LAB_0354cf48:
          fVar52 = (float)param_3;
          if (((char)unaff_x19[0x47] != '\0') &&
             (fVar52 = DAT_00d389f8,
             DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
            fVar52 = *(float *)((long)unaff_x19 + 0x1e4);
            fVar48 = *(float *)((long)unaff_x19 + 0x254);
            if ((fVar52 < fVar48) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
              if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
                *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
              }
              fVar61 = (*(float *)((long)unaff_x19 + 0x23c) - fVar52) * 0.5;
              if (fVar61 <= DAT_00d38b84) {
                fVar61 = DAT_00d38b84;
              }
              *(float *)(unaff_x19 + 0x48) = fVar52;
              fVar61 = (fVar52 + fVar61) * 20.0 + 0.5;
              fVar52 = DAT_00d38e60;
              if (fVar61 != INFINITY) {
                fVar52 = (float)(int)fVar61 / 20.0;
              }
              if (fVar48 <= fVar52) {
                fVar52 = fVar48;
              }
              goto LAB_0354d004;
            }
          }
          *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
          if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
            uVar20 = FUN_0276793c(in_stack_00000038,0);
            uVar16 = FUN_0277fa90(_fStack0000000000000040,0);
            uVar20 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar20,
                                  *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar16,0);
            if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
            }
            FUN_0367a6ec(uVar20,0);
          }
          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar10 == 3)))) {
            (**(code **)(*unaff_x19 + 0x928))();
            goto LAB_0354d0cc;
          }
          lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar21 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar21 = *(long *)puVar7;
          }
          plVar22 = (long *)OVRPlugin_Media_TypeInfo;
          lVar21 = **(long **)(lVar21 + 0xb8);
          if (lVar21 == 0) goto LAB_0354fbf4;
          if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0xd1))
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          iVar13 = *(int *)(lVar21 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
          if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x60), lVar21 == 0))
          goto LAB_0354fbf4;
          if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (*(int *)(lVar21 + 0x18) == 0)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          FUN_035968e8(lVar21 + 0x20,0,0);
          if (DAT_0411f172 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbded8);
            DAT_0411f172 = '\x01';
          }
          iVar11 = (int)unaff_x19[0x4e];
          in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
          uStack00000000000000f0 =
               *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
          lVar21 = unaff_x19[0xeb];
          in_stack_000000b8 = (long *)uStack00000000000000f0;
          fStack00000000000000c4 = in_stack_000000f8._4_4_;
          if (iVar11 < 0x401) {
            if (iVar11 == 0x100) {
              if (lVar21 == 0) goto LAB_0354fbf4;
              if (*(uint *)(lVar21 + 0x18) < 2)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              uVar20 = *(undefined8 *)(lVar21 + 0x30);
              if ((int)unaff_x19[0x5c] == 5) {
                if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x58), lVar27 == 0))
                goto LAB_0354fbf4;
                if (*(uint *)(lVar27 + 0x18) <= uStack0000000000000034)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                fVar52 = *(float *)(lVar27 + (long)(int)uStack0000000000000034 * 0x14 + 0x28);
              }
              else {
                fVar52 = *(float *)(unaff_x19 + 0x97);
              }
              fStack00000000000000c4 = fStack0000000000000028 + 0.0 + *(float *)(lVar21 + 0x2c);
              fVar52 = (0.0 - fVar52) - fStack000000000000001c;
            }
            else if (iVar11 == 0x200) {
              if (lVar21 == 0) goto LAB_0354fbf4;
              if ((*(int *)(lVar21 + 0x18) == 1) || (*(int *)(lVar21 + 0x18) == 0))
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              fStack00000000000000c4 = (*(float *)(lVar21 + 0x20) + *(float *)(lVar21 + 0x2c)) * 0.5
              ;
              uVar20 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar21 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20)) * 0.5,
                                ((float)*(undefined8 *)(lVar21 + 0x24) +
                                (float)*(undefined8 *)(lVar21 + 0x30)) * 0.5);
              if ((int)unaff_x19[0x5c] == 5) {
                if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x58), lVar21 == 0))
                goto LAB_0354fbf4;
                if (*(uint *)(lVar21 + 0x18) <= uStack0000000000000034)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                lVar21 = lVar21 + (long)(int)uStack0000000000000034 * 0x14;
                fStack00000000000000c4 = fStack0000000000000028 + 0.0 + fStack00000000000000c4;
                fVar52 = ((fStack000000000000001c + *(float *)(lVar21 + 0x28) +
                          *(float *)(lVar21 + 0x30)) - fStack0000000000000020) * -0.5 + 0.0;
              }
              else {
                fStack00000000000000c4 = fStack0000000000000028 + 0.0 + fStack00000000000000c4;
                fVar52 = ((fStack000000000000001c + *(float *)(unaff_x19 + 0x97) + in_stack_000017e8
                          ) - fStack0000000000000020) * -0.5 + 0.0;
              }
            }
            else {
              if (iVar11 != 0x400) goto LAB_0354d620;
              if (lVar21 == 0) goto LAB_0354fbf4;
              if (*(int *)(lVar21 + 0x18) == 0)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              uVar20 = *(undefined8 *)(lVar21 + 0x24);
              if ((int)unaff_x19[0x5c] == 5) {
                if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x58), lVar27 == 0))
                goto LAB_0354fbf4;
                if (*(uint *)(lVar27 + 0x18) <= uStack0000000000000034)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                in_stack_000017e8 =
                     *(float *)(lVar27 + (long)(int)uStack0000000000000034 * 0x14 + 0x30);
              }
              fStack00000000000000c4 = fStack0000000000000028 + 0.0 + *(float *)(lVar21 + 0x20);
              fVar52 = fStack0000000000000020 + (0.0 - in_stack_000017e8);
            }
LAB_0354d610:
            in_stack_000000b8 =
                 (long *)CONCAT44((float)((ulong)uVar20 >> 0x20) + 0.0,(float)uVar20 + fVar52);
          }
          else if (iVar11 == 0x800) {
            if (lVar21 == 0) goto LAB_0354fbf4;
            if ((*(int *)(lVar21 + 0x18) == 1) || (*(int *)(lVar21 + 0x18) == 0))
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            fVar52 = fStack0000000000000028 + 0.0 +
                     (*(float *)(lVar21 + 0x20) + *(float *)(lVar21 + 0x2c)) * 0.5;
            in_stack_000000b8 =
                 (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar21 + 0x24) >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20)) * 0.5 +
                                  0.0,((float)*(undefined8 *)(lVar21 + 0x24) +
                                      (float)*(undefined8 *)(lVar21 + 0x30)) * 0.5 + 0.0);
            fStack00000000000000c4 = fVar52;
          }
          else {
            if (iVar11 == 0x1000) {
              if (lVar21 == 0) goto LAB_0354fbf4;
              if ((*(int *)(lVar21 + 0x18) != 1) && (*(int *)(lVar21 + 0x18) != 0)) {
                uVar20 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar21 + 0x24) >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20)) * 0.5,
                                  ((float)*(undefined8 *)(lVar21 + 0x24) +
                                  (float)*(undefined8 *)(lVar21 + 0x30)) * 0.5);
                fStack00000000000000c4 =
                     fStack0000000000000028 + 0.0 +
                     (*(float *)(lVar21 + 0x20) + *(float *)(lVar21 + 0x2c)) * 0.5;
                fVar52 = 0.0 - ((fStack000000000000001c + *(float *)(unaff_x19 + 0x9d) +
                                *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000020) * 0.5;
                goto LAB_0354d610;
              }
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            }
            if (iVar11 == 0x2000) {
              if (lVar21 == 0) goto LAB_0354fbf4;
              if ((*(int *)(lVar21 + 0x18) == 1) || (*(int *)(lVar21 + 0x18) == 0))
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              fVar52 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack000000000000001c) -
                             fStack0000000000000020) * 0.5;
              in_stack_000000b8 =
                   (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar21 + 0x24) >> 0x20) +
                                    (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20)) * 0.5 +
                                    0.0,((float)*(undefined8 *)(lVar21 + 0x24) +
                                        (float)*(undefined8 *)(lVar21 + 0x30)) * 0.5 + fVar52);
              fStack00000000000000c4 =
                   fStack0000000000000028 + 0.0 +
                   (*(float *)(lVar21 + 0x20) + *(float *)(lVar21 + 0x2c)) * 0.5;
            }
          }
LAB_0354d620:
          lVar21 = FUN_03559490();
          if (lVar21 == 0) goto LAB_0354fbf4;
          FUN_036df824(lVar21,0);
          *(float *)((long)unaff_x19 + 0x6e4) = fVar52;
          uVar60 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
          FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
          if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
          }
          if (DAT_0412df1c == '\0') {
            FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
            DAT_0412df1c = '\x01';
          }
          puVar7 = OVRPlugin_Mesh_TypeInfo;
          lVar21 = *(long *)OVRPlugin_Mesh_TypeInfo;
          if (*(int *)(lVar21 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar21 = *(long *)puVar7;
          }
          puVar26 = *(undefined4 **)(lVar21 + 0xb8);
          FUN_035683a4(*puVar26,puVar26[1],puVar26[2],puVar26[3],&stack0x000017c0,0x4000ffff,0);
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          lVar21 = *unaff_x22;
          if (lVar21 == 0) goto LAB_0354fbf4;
          uVar10 = *unaff_x20;
          if ((int)uVar10 < 1) {
            iStack00000000000000d8 = 0;
            iVar13 = 0;
            goto LAB_0354f7f4;
          }
          lVar21 = *(long *)(lVar21 + 0x38);
          if (lVar21 == 0) goto LAB_0354fbf4;
          bVar9 = false;
          bVar6 = false;
          bVar8 = false;
          fStack0000000000000124 = 0.0;
          bVar5 = false;
          iStack00000000000000d8 = 0;
          uStack0000000000000030 = 0;
          in_stack_00000168._4_4_ = 0.0;
          fStack000000000000005c = 0.0;
          lVar27 = 0x2e0;
          fVar61 = 0.0;
          fVar48 = 0.0;
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
          uVar12 = 0;
          uVar25 = 1;
          goto LAB_0354d7c0;
        }
      }
    }
  }
  goto LAB_0354fbf4;
code_r0x035492f0:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar17 = FUN_03586568();
  if (((uVar17 & 1) != 0) &&
     (in_stack_000017b8 = in_stack_0000179c, uVar10 = in_stack_000017ec,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03549564;
LAB_03549378:
  if ((unaff_x19[0x6d] == 0) || (lVar21 = *(long *)(unaff_x19[0x6d] + 0x38), lVar21 == 0))
  goto LAB_0354fbf4;
  uVar10 = *unaff_x20;
  if (*(uint *)(lVar21 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar39 = (long)(int)uVar10;
  cVar24 = *(char *)(lVar21 + lVar39 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar27 = unaff_x19[0x24];
  if ((uint)uVar20 == uVar10) {
    in_stack_000017ec = (uint)((ulong)uVar20 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (in_stack_000017ec == 0x2026) {
      *(long *)(lVar21 + lVar39 * unaff_x24 + 0x30) = unaff_x19[0xca];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar21 = *(long *)(unaff_x19[0x6d] + 0x38), lVar21 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar21 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar21 = lVar21 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar21 + 0x2c) = 0;
      *(long *)(lVar21 + 0x38) = unaff_x19[0xcb];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar21 = *(long *)(unaff_x19[0x6d] + 0x38), lVar21 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar21 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(long *)(lVar21 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0))
      goto LAB_0354fbf4;
      uVar10 = *unaff_x20;
      if (*(uint *)(lVar21 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      bVar9 = true;
      *(int *)(lVar21 + (long)(int)uVar10 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      uVar20 = CONCAT44(3,uVar10 + 1);
    }
    else if (in_stack_000017ec == 3) {
      if ((*unaff_x21 == 0) || (lVar18 = FUN_03568ac0(*unaff_x21,0), lVar18 == 0))
      goto LAB_0354fbf4;
      FUN_0219b634(lVar18,&stack0x00000c28,&stack0x000008b0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (*(uint *)(lVar21 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(ulong *)(lVar21 + lVar39 * unaff_x24 + 0x30) = CONCAT44(in_stack_000008b4,in_stack_000008b0)
      ;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar10 = *(uint *)((long)unaff_x19 + 0x494);
      bVar9 = true;
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
    }
    else {
      bVar9 = true;
    }
  }
  else {
    bVar9 = false;
  }
  iVar13 = (int)unaff_x24;
  if (((int)uVar10 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_000017ec != 3)) {
    if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar21 + 0x18) <= uVar10)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar21 = lVar21 + (long)(int)uVar10 * (long)iVar13;
    *(undefined1 *)(lVar21 + 0x194) = 0;
    *(undefined2 *)(lVar21 + 0x20) = 0x200b;
    *(undefined4 *)(lVar21 + 100) = 0;
    *unaff_x20 = uVar10 + 1;
    uVar10 = in_stack_000017ec;
    goto LAB_03549564;
  }
  iVar11 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar11 == 0) {
    uVar10 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar10 >> 4 & 1) == 0) {
      if ((uVar10 >> 3 & 1) == 0) {
        fVar48 = 1.0;
        if ((uVar10 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_026b812c(in_stack_000017ec,0);
          if ((uVar17 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar10 = FUN_026b8410(in_stack_000017ec,0);
            in_stack_000017ec = uVar10 & 0xffff;
            fVar48 = fStack0000000000000024;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_026b8070(in_stack_000017ec,0);
        fVar48 = 1.0;
        if ((uVar17 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = FUN_026b8594(in_stack_000017ec,0);
          goto LAB_03549968;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_026b812c(in_stack_000017ec,0);
      fVar48 = 1.0;
      if ((uVar17 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar10 = FUN_026b8410(in_stack_000017ec,0);
LAB_03549968:
        fVar48 = 1.0;
        in_stack_000017ec = uVar10 & 0xffff;
      }
    }
    iVar11 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar11 != 0) goto LAB_03549594;
LAB_03549978:
    if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar21 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *_iStack00000000000000d8 = *(long *)(lVar21 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(_iStack00000000000000d8);
    uVar10 = in_stack_000017ec;
    if (*_iStack00000000000000d8 == 0) goto LAB_03549564;
    if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar21 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *unaff_x21 = *(long *)(lVar21 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x21);
    if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar21 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *in_stack_00000170 = *(long *)(lVar21 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0))
    goto LAB_0354fbf4;
    uVar12 = *unaff_x20;
    uVar10 = *(uint *)(lVar21 + 0x18);
    if (uVar10 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar21 + (long)(int)uVar12 * unaff_x24 + 0x58);
    if (bVar9) {
      lVar27 = unaff_x19[0x8f];
      if (lVar27 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar27 + 0x18) <= in_stack_000017b8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if ((*(int *)(lVar27 + (long)(int)in_stack_000017b8 * 0xc + 0x20) != 10) ||
         (uVar12 == *(uint *)(unaff_x19 + 0x93))) goto LAB_03549a88;
      if (uVar10 <= uVar12 - 1) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (*unaff_x21 == 0) goto LAB_0354fbf4;
      fVar61 = *(float *)(lVar21 + (long)(int)(uVar12 - 1) * (long)iVar13 + 0x60);
      iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar21 = *unaff_x21;
    }
    else {
LAB_03549a88:
      if (*unaff_x21 == 0) goto LAB_0354fbf4;
      fVar61 = *(float *)(unaff_x19 + 0x3d);
      iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar21 = unaff_x19[0x20];
    }
    if (lVar21 == 0) goto LAB_0354fbf4;
    fVar45 = (float)FUN_03776960(lVar21 + 0x50,0);
    fVar40 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar40 = 1.0;
    }
    uVar60 = 0;
    fStack0000000000000124 = 0.0;
    if (!(bool)(bVar9 & in_stack_000017ec == 0x2026)) {
      if (*unaff_x21 == 0) goto LAB_0354fbf4;
      fStack0000000000000124 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_0354fbf4;
      uVar60 = FUN_037769c0(*unaff_x21 + 0x50,0);
    }
    lVar21 = unaff_x19[0xc9];
    if (lVar21 == 0) goto LAB_0354fbf4;
    _fStack0000000000000120 = CONCAT44(fStack0000000000000124,uVar60);
    if (*(long *)(lVar21 + 0x20) == 0) goto LAB_0354fbf4;
    fVar57 = *(float *)((long)unaff_x19 + 0x404);
    fVar41 = *(float *)(lVar21 + 0x2c);
    fVar52 = (float)FUN_03776ea8(*(long *)(lVar21 + 0x20),0);
    if (*unaff_x21 == 0) goto LAB_0354fbf4;
    fVar43 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_0354fbf4;
    fVar58 = *(float *)((long)unaff_x19 + 0x404);
    fVar44 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
    lVar21 = unaff_x19[0x6d];
    if ((lVar21 == 0) || (lVar27 = *(long *)(lVar21 + 0x38), lVar27 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar27 + 0x2c) = 0;
    fVar40 = ((fVar48 * fVar61) / (float)iVar11) * fVar45 * fVar40;
    fVar52 = fVar40 * fVar57 * fVar41 * fVar52;
    *(float *)(lVar27 + 0x160) = fVar52;
    uVar10 = *(uint *)(unaff_x19 + 0x24);
    fVar44 = fVar40 * fVar43 * fVar58 * fVar44;
    if (uVar10 == 0) {
      in_stack_00000168._4_4_ = *(float *)(unaff_x19 + 0xc3);
    }
    else {
      lVar27 = unaff_x19[0xe1];
      if (lVar27 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar27 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar27 = *(long *)(lVar27 + (long)(int)uVar10 * 8 + 0x20);
      if (lVar27 == 0) goto LAB_0354fbf4;
      in_stack_00000168._4_4_ = *(float *)(lVar27 + 0x54);
    }
LAB_03549e30:
    fVar61 = 0.0;
    if (in_stack_000017ec != 3 && in_stack_000017ec != 0xad) {
      fVar61 = fVar52;
    }
  }
  else {
    fVar48 = 1.0;
    if (iVar11 == 0) goto LAB_03549978;
LAB_03549594:
    if (iVar11 == 1) {
      if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar21 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *in_stack_000000b8 = *(long *)(lVar21 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar21 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar21 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) ||
         (lVar21 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar21 == 0))
      goto LAB_0354fbf4;
      FUN_02215a88(lVar21,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008b0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar21 = CONCAT44(in_stack_000008b4,in_stack_000008b0);
      uVar10 = in_stack_000017ec;
      if (lVar21 == 0) goto LAB_03549564;
      if (in_stack_000017ec == 0x3c) {
        in_stack_000017ec = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar39 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar39 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar39 = *(long *)puVar7;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar39 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
      fVar52 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00001730,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar11 = FUN_03776950(&stack0x00001730,0);
      if (*unaff_x21 == 0) goto LAB_0354fbf4;
      memmove(&stack0x00001730,(void *)(*unaff_x21 + 0x50),0x60);
      fVar40 = (float)FUN_03776960(&stack0x00001730,0);
      fVar61 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar61 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
      fVar61 = (fVar52 / (float)iVar11) * fVar40 * fVar61;
      iVar11 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
      fVar52 = *(float *)(unaff_x19 + 0x3d);
      if (iVar11 < 1) {
        if (*unaff_x21 == 0) goto LAB_0354fbf4;
        iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_0354fbf4;
        fVar45 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        fVar40 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar40 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
        fVar57 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar21 + 0x20) == 0) goto LAB_0354fbf4;
        FUN_03776e6c(&stack0x000008b0,*(long *)(lVar21 + 0x20),0);
        fVar41 = (float)FUN_03776c9c(&stack0x00001710,0);
        if (*(long *)(lVar21 + 0x20) == 0) goto LAB_0354fbf4;
        fVar58 = *(float *)(lVar21 + 0x2c);
        fVar43 = (float)FUN_03776ea8(*(long *)(lVar21 + 0x20),0);
        if (*unaff_x21 == 0) goto LAB_0354fbf4;
        fVar42 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_0354fbf4;
        fVar55 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_0354fbf4;
        fVar62 = *(float *)((long)unaff_x19 + 0x404);
        fVar44 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
        fVar44 = fVar61 * fVar55 * fVar62 * fVar44;
        fVar40 = (fVar52 / (float)iVar11) * fVar45 * fVar40;
        fVar52 = fVar40 * (fVar57 / fVar41) * fVar58 * fVar43;
        fVar40 = fVar40 / fVar52;
        fVar42 = fVar40 * fVar42;
        fVar61 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
        fVar40 = fVar40 * fVar61;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        iVar11 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        fVar40 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar21 + 0x20) == 0) goto LAB_0354fbf4;
        fVar57 = *(float *)(lVar21 + 0x2c);
        fVar45 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar45 = 1.0;
        }
        fVar41 = (float)FUN_03776ea8(*(long *)(lVar21 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
        fVar42 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        fVar43 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        fVar58 = *(float *)((long)unaff_x19 + 0x404);
        fVar44 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
        fVar44 = fVar61 * fVar43 * fVar58 * fVar44;
        fVar52 = (fVar52 / (float)iVar11) * fVar40 * fVar45 * fVar57 * fVar41;
        fVar40 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
      }
      *_iStack00000000000000d8 = lVar21;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (_iStack00000000000000d8,lVar21);
      if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar21 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar21 = lVar21 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar21 + 0x2c) = 1;
      *(float *)(lVar21 + 0x160) = fVar52;
      *(long *)(lVar21 + 0x40) = *in_stack_000000b8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar21 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(long *)(lVar21 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar21 = *unaff_x22;
      if ((lVar21 == 0) || (lVar39 = *(long *)(lVar21 + 0x38), lVar39 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar39 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      _fStack0000000000000120 = CONCAT44(fVar42,fVar40);
      in_stack_00000168._4_4_ = 0.0;
      *(int *)(lVar39 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar27;
      goto LAB_03549e30;
    }
    lVar21 = *unaff_x22;
    fVar44 = 0.0;
    fVar61 = fVar44;
    if (in_stack_000017ec != 3 && in_stack_000017ec != 0xad) {
      fVar61 = fVar52;
    }
    if (lVar21 == 0) goto LAB_0354fbf4;
    _fStack0000000000000120 = 0;
  }
  lVar21 = *(long *)(lVar21 + 0x38);
  if (lVar21 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar21 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar21 = lVar21 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar21 + 0x20) = (short)in_stack_000017ec;
  *(int *)(lVar21 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar21 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar21 = *(long *)(unaff_x19[0x6d] + 0x38), lVar21 == 0))
  goto LAB_0354fbf4;
  if (*(uint *)(lVar21 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(int *)(lVar21 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar21 = *(long *)(unaff_x19[0x6d] + 0x38), lVar21 == 0))
  goto LAB_0354fbf4;
  if (*(uint *)(lVar21 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(undefined4 *)(lVar21 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar21 = *(long *)(unaff_x19[0x6d] + 0x38), lVar21 == 0))
  goto LAB_0354fbf4;
  uVar10 = *unaff_x20;
  FUN_0209a6e0(in_stack_000000c8,&stack0x000008b0,*(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar21 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar21 = lVar21 + (long)(int)uVar10 * unaff_x24;
  *(undefined4 *)(lVar21 + 0x18c) = in_stack_000008c0;
  *(undefined8 *)(lVar21 + 0x184) = in_stack_000008b8;
  *(ulong *)(lVar21 + 0x17c) = CONCAT44(in_stack_000008b4,in_stack_000008b0);
  if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar21 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(undefined4 *)(lVar21 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar21 = *(long *)(unaff_x19[0xc9] + 0x20), lVar21 == 0))
  goto LAB_0354fbf4;
  FUN_03776e6c(&stack0x00000c28,lVar21,0);
  if ((int)in_stack_000017ec < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_026b63d8(in_stack_000017ec,0);
    uVar12 = uVar12 & 1;
  }
  else {
    uVar12 = 0;
  }
  fVar40 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    fVar45 = 0.0;
    fVar41 = 0.0;
    fVar57 = 0.0;
  }
  else {
    if (*_iStack00000000000000d8 == 0) goto LAB_0354fbf4;
    uVar25 = *unaff_x20;
    uVar10 = *(uint *)(*_iStack00000000000000d8 + 0x28);
    if ((int)uVar25 < (int)in_stack_00000080._4_4_) {
      if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar21 + 0x18) <= uVar25 + 1)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar21 = *(long *)(lVar21 + (long)(int)(uVar25 + 1) * (long)iVar13 + 0x30);
      if ((((lVar21 == 0) || (*in_stack_00000178 == 0)) ||
          (lVar27 = *(long *)(*in_stack_00000178 + 0x128), lVar27 == 0)) ||
         (lVar27 = *(long *)(lVar27 + 0x18), lVar27 == 0)) goto LAB_0354fbf4;
      in_stack_000008b0 = uVar10 | *(int *)(lVar21 + 0x28) << 0x10;
      uVar17 = FUN_0219f8b8(lVar27,&stack0x000008b0,&stack0x00001708,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar60 = 0;
      if ((uVar17 & 1) == 0) {
        fVar45 = 0.0;
        fVar41 = 0.0;
        fVar57 = 0.0;
      }
      else {
        if (in_stack_00001708 == 0) goto LAB_0354fbf4;
        fVar45 = *(float *)(in_stack_00001708 + 0x1c);
        uVar60 = *(undefined4 *)(in_stack_00001708 + 0x20);
        fVar57 = *(float *)(in_stack_00001708 + 0x14);
        fVar41 = *(float *)(in_stack_00001708 + 0x18);
        if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
          fVar40 = 0.0;
        }
      }
      uVar25 = *unaff_x20;
    }
    else {
      uVar60 = 0;
      fVar45 = 0.0;
      fVar41 = 0.0;
      fVar57 = 0.0;
    }
    if (0 < (int)uVar25) {
      if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar21 + 0x18) <= uVar25 - 1)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar21 = *(long *)(lVar21 + (ulong)(uVar25 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar21 == 0) || (*in_stack_00000178 == 0)) ||
         ((lVar27 = *(long *)(*in_stack_00000178 + 0x128), lVar27 == 0 ||
          (lVar27 = *(long *)(lVar27 + 0x18), lVar27 == 0)))) goto LAB_0354fbf4;
      in_stack_000008b0 = *(uint *)(lVar21 + 0x28) | uVar10 << 0x10;
      uVar17 = FUN_0219f8b8(lVar27,&stack0x000008b0,&stack0x00001708,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar17 & 1) != 0) {
        if ((in_stack_00001708 == 0) ||
           (fVar57 = (float)FUN_03571cb4(fVar57,fVar41,fVar45,uVar60,
                                         *(undefined4 *)(in_stack_00001708 + 0x28),
                                         *(undefined4 *)(in_stack_00001708 + 0x2c),
                                         *(undefined4 *)(in_stack_00001708 + 0x30),
                                         *(undefined4 *)(in_stack_00001708 + 0x34),0),
           in_stack_00001708 == 0)) goto LAB_0354fbf4;
        if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
          fVar40 = 0.0;
        }
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fVar45;
  }
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar58 = *(float *)(unaff_x19 + 200);
    fVar43 = (float)FUN_03776cb4(&stack0x000017a0,0);
    fVar58 = fVar58 - fVar61 * fVar43 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar58;
    if ((in_stack_000017ec == 0x200b) || (uVar12 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar58 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar58 = *(float *)(unaff_x19 + 0x56);
  fVar43 = 0.0;
  if (fVar58 != 0.0) {
    fVar43 = (float)FUN_03776c94(&stack0x000017a0,0);
    fVar42 = (float)FUN_03776ca4(&stack0x000017a0,0);
    fVar43 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fVar58 * 0.5 - fVar61 * (fVar43 * 0.5 + fVar42));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar43;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar24 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar21 = *in_stack_00000170;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar17 = FUN_036cee6c(lVar21,0,0);
    fVar42 = 0.0;
    if ((uVar17 & 1) != 0) {
      lVar21 = *in_stack_00000170;
      if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar22 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
      if (lVar21 == 0) goto LAB_0354fbf4;
      uVar17 = FUN_03699d3c(lVar21,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                              0xb8) + 0x54),0);
      fVar42 = 0.0;
      if ((uVar17 & 1) != 0) {
        lVar21 = *in_stack_00000170;
        if (*(int *)(*plVar22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          plVar22 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        }
        if (lVar21 == 0) goto LAB_0354fbf4;
        fVar58 = (float)FUN_0369e060(lVar21,*(undefined4 *)(*(long *)(*plVar22 + 0xb8) + 0x54),0);
        if ((*in_stack_00000178 == 0) || (*in_stack_00000170 == 0)) goto LAB_0354fbf4;
        fVar55 = *(float *)(*in_stack_00000178 + 0x1b0);
        fVar42 = (float)FUN_0369e060(*in_stack_00000170,
                                     *(undefined4 *)
                                      (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                + 0xb8) + 0xcc),0);
        fVar42 = fVar42 * fVar58 * fVar55 * 0.25;
        if (fVar58 < in_stack_00000168._4_4_ + fVar42) {
          in_stack_00000168._4_4_ = fVar58 - fVar42;
        }
      }
    }
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fStack00000000000000d0 = *(float *)(*in_stack_00000178 + 0x1b4);
  }
  else {
    lVar21 = *in_stack_00000170;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar17 = FUN_036cee6c(lVar21,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar17 & 1) != 0) {
      lVar21 = *in_stack_00000170;
      if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar22 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
      if (lVar21 == 0) goto LAB_0354fbf4;
      uVar17 = FUN_03699d3c(lVar21,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                              0xb8) + 0x54),0);
      if ((uVar17 & 1) != 0) {
        lVar21 = *in_stack_00000170;
        if (*(int *)(*plVar22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          plVar22 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        }
        if (lVar21 == 0) goto LAB_0354fbf4;
        uVar17 = FUN_03699d3c(lVar21,*(undefined4 *)(*(long *)(*plVar22 + 0xb8) + 0xcc),0);
        if ((uVar17 & 1) != 0) {
          lVar21 = *in_stack_00000170;
          if (*(int *)(*plVar22 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            plVar22 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
          }
          if (lVar21 == 0) goto LAB_0354fbf4;
          fVar58 = (float)FUN_0369e060(lVar21,*(undefined4 *)(*(long *)(*plVar22 + 0xb8) + 0x54),0);
          if ((*in_stack_00000178 == 0) || (*in_stack_00000170 == 0)) goto LAB_0354fbf4;
          fVar55 = *(float *)(*in_stack_00000178 + 0x1a8);
          fVar42 = (float)FUN_0369e060(*in_stack_00000170,
                                       *(undefined4 *)
                                        (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
          fVar42 = fVar42 * fVar58 * fVar55 * 0.25;
          if (fVar58 < in_stack_00000168._4_4_ + fVar42) {
            in_stack_00000168._4_4_ = fVar58 - fVar42;
          }
          goto LAB_0354a568;
        }
      }
    }
    fVar42 = 0.0;
  }
LAB_0354a568:
  fVar58 = *(float *)(unaff_x19 + 200);
  fVar55 = (float)FUN_03776ca4(&stack0x000017a0,0);
  fVar58 = fVar58 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar61 * (fVar57 + ((fVar55 - in_stack_00000168._4_4_) - fVar42));
  fVar57 = (float)FUN_03776cac(&stack0x000017a0,0);
  fVar55 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar44 + fVar61 * (fVar41 + in_stack_00000168._4_4_ + fVar57)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar57 = (float)FUN_03776c9c(&stack0x000017a0,0);
  fStack0000000000000134 =
       fVar55 - fVar61 * (in_stack_00000168._4_4_ + in_stack_00000168._4_4_ + fVar57);
  fVar57 = (float)FUN_03776c94(&stack0x000017a0,0);
  fVar41 = fVar58 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar61 * (fVar42 + fVar42 +
                             in_stack_00000168._4_4_ + in_stack_00000168._4_4_ + fVar57);
  fStack0000000000000104 = fVar58;
  fVar57 = fVar41;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar24 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar46 = (float)(int)unaff_x19[0xbe] * fStack0000000000000058;
    fVar57 = (float)FUN_03776cac(&stack0x000017a0,0);
    fVar47 = fVar46 * fVar61 * (fVar42 + in_stack_00000168._4_4_ + fVar57);
    fVar57 = (float)FUN_03776cac(&stack0x000017a0,0);
    fVar62 = (float)FUN_03776c9c(&stack0x000017a0,0);
    fVar55 = fVar55 + 0.0;
    fStack0000000000000134 = fStack0000000000000134 + 0.0;
    fVar46 = fVar46 * fVar61 * (((fVar57 - fVar62) - in_stack_00000168._4_4_) - fVar42);
    fVar62 = fVar58 + fVar47;
    fVar57 = fVar41 + fVar46;
    fVar54 = (fVar47 - fVar46) * 0.5;
    fVar58 = (fVar58 + fVar46) - fVar54;
    fVar41 = (fVar41 + fVar47) - fVar54;
    fStack0000000000000104 = fVar62 - fVar54;
    fVar57 = fVar57 - fVar54;
  }
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fVar46 = 0.0;
    fVar47 = 0.0;
    fVar53 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar54 = fStack0000000000000134;
    fVar62 = fVar55;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000070,0);
    fVar56 = (fVar41 + fVar58) * 0.5;
    fVar59 = (fStack0000000000000134 + fVar55) * 0.5;
    fVar55 = fVar55 - fVar59;
    fStack0000000000000100 = 0.0;
    fVar62 = fVar55;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar56,_fStack0000000000000070,0);
    fStack0000000000000104 = fVar56 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar54 = fStack0000000000000134 - fVar59;
    fVar46 = 0.0;
    fStack0000000000000134 = fVar54;
    fVar58 = (float)FUN_036bdd2c(fVar58 - fVar56,_fStack0000000000000070,0);
    fVar58 = fVar56 + fVar58;
    fVar46 = fVar46 + 0.0;
    fStack0000000000000134 = fVar59 + fStack0000000000000134;
    fVar53 = 0.0;
    fVar41 = (float)FUN_036bdd2c(fVar41 - fVar56,_fStack0000000000000070,0);
    fVar41 = fVar56 + fVar41;
    fVar55 = fVar59 + fVar55;
    fVar53 = fVar53 + 0.0;
    fVar47 = 0.0;
    fVar57 = (float)FUN_036bdd2c(fVar57 - fVar56,_fStack0000000000000070,0);
    fVar57 = fVar56 + fVar57;
    fVar47 = fVar47 + 0.0;
    fVar54 = fVar59 + fVar54;
    fVar62 = fVar59 + fVar62;
  }
  if (*unaff_x22 == 0) goto LAB_0354fbf4;
  lVar21 = *(long *)(*unaff_x22 + 0x38);
  unaff_d13 = (ulong)(uint)fVar61;
  if (lVar21 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar21 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar21 = lVar21 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar21 + 0x11c) = fVar58;
  *(float *)(lVar21 + 0x120) = fStack0000000000000134;
  *(float *)(lVar21 + 0x124) = fVar46;
  if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar21 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar21 = lVar21 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar21 + 0x114) = fVar62;
  *(float *)(lVar21 + 0x110) = fStack0000000000000104;
  *(float *)(lVar21 + 0x118) = fStack0000000000000100;
  if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar21 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar21 = lVar21 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar21 + 0x128) = fVar41;
  *(float *)(lVar21 + 300) = fVar55;
  *(float *)(lVar21 + 0x130) = fVar53;
  if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar21 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar21 = lVar21 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar21 + 0x134) = fVar57;
  *(float *)(lVar21 + 0x138) = fVar54;
  *(float *)(lVar21 + 0x13c) = fVar47;
  if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0)) goto LAB_0354fbf4;
  uVar25 = *unaff_x20;
  lVar27 = (long)(int)uVar25;
  if (*(uint *)(lVar21 + 0x18) <= uVar25)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar39 = lVar21 + lVar27 * unaff_x24;
  *(int *)(lVar39 + 0x140) = (int)unaff_x19[200];
  fVar55 = *(float *)(unaff_x19 + 0x9b);
  param_3 = (ulong)(uint)fVar55;
  fVar57 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar39 + 0x15c) = (fVar41 - fVar58) / (fVar62 - fStack0000000000000134);
  *(float *)(lVar39 + 0x14c) = (fVar44 - fVar55) + fVar57;
  fVar41 = fStack0000000000000124 * fVar61;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar41 = fVar41 / fVar48;
    fStack0000000000000120 = (fStack0000000000000120 * fVar61) / fVar48;
  }
  else {
    fStack0000000000000120 = fStack0000000000000120 * fVar61;
  }
  uVar2 = *(uint *)(unaff_x19 + 0x93);
  if ((uVar12 == 0) || (uVar25 == uVar2)) {
    fStack0000000000000120 = fVar57 + fStack0000000000000120;
    fVar41 = fVar57 + fVar41;
    fVar44 = fStack0000000000000120;
    fVar58 = fVar41;
    if (fVar57 != 0.0) {
      fVar58 = (fVar41 - fVar57) / *(float *)((long)unaff_x19 + 0x404);
      fVar44 = (fStack0000000000000120 - fVar57) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar58 <= fVar41) {
        fVar58 = fVar41;
      }
      if (fStack0000000000000120 <= fVar44) {
        fVar44 = fStack0000000000000120;
      }
    }
    lVar21 = lVar21 + lVar27 * unaff_x24;
    fVar57 = fVar58;
    if (fVar58 <= *(float *)(unaff_x19 + 0x99)) {
      fVar57 = *(float *)(unaff_x19 + 0x99);
    }
    fVar62 = fVar44;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar44) {
      fVar62 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar62;
    *(float *)(unaff_x19 + 0x99) = fVar57;
    *(float *)(lVar21 + 0x154) = fVar58;
    *(float *)(lVar21 + 0x158) = fVar44;
    *(float *)(lVar21 + 0x148) = fVar41 - fVar55;
    *(float *)(unaff_x19 + 0x98) = fVar41 - fVar55;
    *(float *)(lVar21 + 0x150) = fStack0000000000000120 - fVar55;
    *(float *)((long)unaff_x19 + 0x4c4) = fStack0000000000000120 - fVar55;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar57;
      if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
      fVar57 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar58 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fVar48 = (fVar61 * fVar58) / fVar48;
      param_3 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar57 <= fVar48) {
        fVar57 = fVar48;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar57;
    }
    if ((float)param_3 == 0.0) {
      fVar48 = *(float *)(in_stack_00000078 + 0x208);
      if (*(float *)(in_stack_00000078 + 0x208) <= fVar41) {
        fVar48 = fVar41;
      }
      *(float *)(in_stack_00000078 + 0x208) = fVar48;
    }
  }
  else {
    fVar48 = *(float *)(unaff_x19 + 0x99);
    lVar21 = lVar21 + lVar27 * unaff_x24;
    *(float *)(lVar21 + 0x154) = fVar48;
    fVar57 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar48 = fVar48 - fVar55;
    *(float *)(lVar21 + 0x148) = fVar48;
    *(float *)(lVar21 + 0x158) = fVar57;
    *(float *)(unaff_x19 + 0x98) = fVar48;
    fVar57 = fVar57 - fVar55;
    *(float *)(lVar21 + 0x150) = fVar57;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar57;
  }
  lVar21 = *unaff_x22;
  if ((lVar21 == 0) || (lVar27 = *(long *)(lVar21 + 0x38), lVar27 == 0)) goto LAB_0354fbf4;
  uVar14 = *unaff_x20;
  if (*(uint *)(lVar27 + 0x18) <= uVar14)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar27 = lVar27 + (long)(int)uVar14 * unaff_x24;
  *(undefined1 *)(lVar27 + 0x194) = 0;
  uVar30 = *(uint *)(unaff_x19 + 0x4f);
  unaff_x21 = in_stack_00000178;
  uVar10 = in_stack_000017ec;
  if ((in_stack_000017ec == 9) ||
     (((((uVar12 == 0 && (in_stack_000017ec != 3)) && (in_stack_000017ec != 0x200b)) &&
       (in_stack_000017ec != 0xad)) ||
      (((in_stack_000017ec == 0xad & (bStack000000000000006c ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
    *(undefined1 *)(lVar27 + 0x194) = 1;
    pfVar28 = _fStack00000000000000a0;
    pfVar32 = _fStack00000000000000a8;
    if (bVar9) {
      lVar21 = *(long *)(lVar21 + 0x50);
      if (lVar21 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar32 = (float *)(lVar21 + 0x60);
      pfVar28 = (float *)(lVar21 + 100);
    }
    fVar57 = *pfVar32;
    fVar41 = *pfVar28;
    fVar48 = *(float *)(unaff_x19 + 0x6c);
    fVar58 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar57) - fVar41;
    bVar8 = true;
    if ((fVar48 <= in_stack_000000f8._4_4_) && (bVar8 = false, !NAN(fVar48))) {
      bVar8 = fVar48 == -1.0;
    }
    if (!bVar8) {
      in_stack_000000f8._4_4_ = fVar48;
    }
    fVar48 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar48 = (float)FUN_03776cb4(&stack0x000017a0,0);
      param_3 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar55 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar44 = *(float *)((long)unaff_x19 + 0x4cc);
    if (in_stack_000017ec != 0xad) {
      fVar52 = fVar61;
    }
    fVar46 = (float)param_3;
    fVar62 = 0.0;
    if ((0.0 < fVar46) && (fVar62 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar62 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar14 = *unaff_x20;
    fVar62 = (*(float *)(unaff_x19 + 0x97) - (fVar44 - fVar46)) + fVar62;
    if (fStack00000000000000c4 < fVar62) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar14;
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      uVar16 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar54 = *(float *)(unaff_x19 + 0x59);
        if (((fVar54 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar46)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar52 = *(float *)((long)unaff_x19 + 700) +
                   ((fStack0000000000000018 - fVar62) / (float)(int)unaff_x19[0x95]) /
                   in_stack_00000050;
          if (fVar52 <= fVar54) {
            fVar52 = fVar54;
          }
          goto UnityEngine_AndroidJavaObject___ctor;
        }
        fVar46 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar62 = *(float *)(unaff_x19 + 0x4a);
        param_3 = (ulong)(uint)fVar62;
        if ((fVar62 < fVar46) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar52 = (fVar46 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar52 <= DAT_00d38b84) {
            fVar52 = DAT_00d38b84;
          }
          fVar48 = (fVar46 - fVar52) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar46;
          fVar52 = DAT_00d38e60;
          if (fVar48 != INFINITY) {
            fVar52 = (float)(int)fVar48 / 20.0;
          }
          if (fVar52 <= fVar62) {
            fVar52 = fVar62;
          }
          goto LAB_0354d004;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar21 = *(long *)puVar7;
        }
        lVar27 = *(long *)(lVar21 + 0xb8);
        lVar21 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
          lVar21 = FUN_01a46ff8(lVar21);
        }
        piVar19 = (int *)thunk_FUN_01a59484(lVar27 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar21 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar19 == 0) goto LAB_0354cf2c;
        lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar21 = *(long *)puVar7;
        }
        FUN_0209b778(*(long *)(lVar21 + 0xb8) + 0x11f0,&stack0x000008b0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00001390,&stack0x000008b0,0x378);
LAB_0354b394:
        iVar13 = FUN_0358c15c();
        goto LAB_0354b3a0;
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
        if ((uVar14 == 0) || ((int)in_stack_000017b8 < 0)) {
          *unaff_x20 = 0;
          in_stack_000017b8 = 0xffffffff;
          uVar20 = uVar16;
          goto LAB_03549564;
        }
        fVar52 = *(float *)(unaff_x19 + 0x99);
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        if (fVar52 - fVar44 <= fStack00000000000000c4) {
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          param_3 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar21 = NEON_rev64(param_3,4);
          unaff_x19[0x99] = lVar21;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000078 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          goto LAB_03549564;
        }
        break;
      case 6:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        lVar21 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar17 = FUN_036cee6c(lVar21,0,0);
        if ((uVar17 & 1) != 0) {
          plVar22 = (long *)unaff_x19[0x5d];
          uVar20 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar22 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar22 + 0x528))(plVar22,uVar20,*(undefined8 *)(*plVar22 + 0x530));
          lVar21 = unaff_x19[0x5d];
          if (lVar21 == 0) goto LAB_0354fbf4;
          *(int *)(lVar21 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar21,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar22 = (long *)unaff_x19[0x5d];
          if (plVar22 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar22 + 0x7a8))(plVar22,0,0,*(undefined8 *)(*plVar22 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
      goto LAB_0354b0e0;
    }
switchD_0354ad3c_caseD_2:
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar48 = ABS(fVar58) + fVar48 * (1.0 - fVar55) * fVar52;
    fVar52 = 1.0;
    if ((uVar30 & 0x18) != 0) {
      fVar52 = DAT_00d38acc;
    }
    fVar58 = fVar52 * in_stack_000000f8._4_4_;
    if (fVar58 < fVar48) {
      param_3 = (ulong)(uint)fVar42;
      if (((char)unaff_x19[0x5b] != '\0') && (uVar14 != *(uint *)(unaff_x19 + 0x93))) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
          lVar21 = *unaff_x22;
          if ((lVar21 == 0) || (lVar27 = *(long *)(lVar21 + 0x38), lVar27 == 0)) goto LAB_0354fbf4;
          if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          fVar58 = *(float *)(unaff_x19 + 0x9b);
          fVar55 = 0.0;
          if ((0.0 < fVar58) && (fVar55 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
            fVar55 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
          }
          fVar55 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                   *(float *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                   (fVar55 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   in_stack_00000050 * (in_stack_00000048._4_4_ + *(float *)((long)unaff_x19 + 700))
          ;
        }
        else {
          lVar21 = unaff_x19[0x6d];
          *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
          if (lVar21 == 0) goto LAB_0354fbf4;
          fVar58 = *(float *)(unaff_x19 + 0x9b);
          fVar55 = *(float *)(unaff_x19 + 0x58) +
                   fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
        }
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar21 = *(long *)(lVar21 + 0x38);
        if (lVar21 == 0) goto LAB_0354fbf4;
        uVar33 = *(uint *)((long)unaff_x19 + 0x494);
        if ((*(uint *)(lVar21 + 0x18) <= uVar33) ||
           (uVar31 = uVar33 - 1, *(uint *)(lVar21 + 0x18) <= uVar31))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        param_3 = (ulong)(uint)(fVar55 + *(float *)(unaff_x19 + 0x97));
        fVar44 = (fVar55 + *(float *)(unaff_x19 + 0x97) + fVar58) -
                 *(float *)(lVar21 + (long)(int)uVar33 * unaff_x24 + 0x158);
        if (((bStack000000000000006c & 1) == 0 &&
             *(short *)(lVar21 + (long)(int)uVar31 * (long)iVar13 + 0x20) == 0xad) &&
           ((fVar44 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
          bStack000000000000006c = 0;
          *unaff_x20 = uVar31;
          in_stack_000017b8 = in_stack_000017b8 - 1;
          uVar20 = CONCAT44(0x2d,uVar31);
          goto LAB_03549564;
        }
        if (*(short *)(lVar21 + (long)(int)uVar33 * unaff_x24 + 0x20) == 0xad) {
          bStack000000000000006c = 1;
          goto LAB_03549564;
        }
        if ((bStack0000000000000068 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
          fVar55 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar58 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar58 <= fVar55) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
            fVar55 = *(float *)((long)unaff_x19 + 0x1e4);
            param_3 = (ulong)(uint)fVar55;
            fVar58 = *(float *)(unaff_x19 + 0x4a);
            if ((fVar55 <= fVar58) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
            goto LAB_0354b6dc;
LAB_0354fcd0:
            fVar52 = (fVar55 - *(float *)(unaff_x19 + 0x48)) * 0.5;
            if (fVar52 <= DAT_00d38b84) {
              fVar52 = DAT_00d38b84;
            }
            *(float *)((long)unaff_x19 + 0x23c) = fVar55;
            fVar55 = fVar55 - fVar52;
LAB_0354fc60:
            fVar48 = fVar55 * 20.0 + 0.5;
            fVar52 = DAT_00d38e60;
            if (fVar48 != INFINITY) {
              fVar52 = (float)(int)fVar48 / 20.0;
            }
            if (fVar52 <= fVar58) {
              fVar52 = fVar58;
            }
LAB_0354d004:
            *(float *)((long)unaff_x19 + 0x1e4) = fVar52;
            return;
          }
LAB_0354fc94:
          fVar61 = fVar48;
          if (0.0 < fVar55) {
            fVar61 = fVar48 / (1.0 - fVar55);
          }
          fVar55 = fVar55 + (fVar48 - fVar52 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar61;
LAB_0354fc24:
          if (fVar58 <= fVar55) {
            fVar55 = fVar58;
          }
          *(float *)((long)unaff_x19 + 0x2d4) = fVar55;
          return;
        }
LAB_0354b6dc:
        lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar21 = *(long *)puVar7;
        }
        iVar11 = *(int *)(*(long *)(lVar21 + 0xb8) + 0xe78);
        if (((iVar11 != iStack000000000000002c) && (iVar11 != -1)) &&
           (((bStack0000000000000068 ^ 1) & 1) == 0)) {
          if (*(int *)(lVar21 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017b8 = FUN_0358c15c();
          if ((unaff_x19[0x6d] == 0) || (lVar21 = *(long *)(unaff_x19[0x6d] + 0x38), lVar21 == 0))
          goto LAB_0354fbf4;
          uVar33 = *unaff_x20 - 1;
          if (*(uint *)(lVar21 + 0x18) <= uVar33)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          iStack000000000000002c = iVar11;
          if (*(short *)(lVar21 + (long)(int)uVar33 * (long)iVar13 + 0x20) == 0xad) {
            bStack000000000000006c = 0;
            *unaff_x20 = uVar33;
            in_stack_000017b8 = in_stack_000017b8 - 1;
            uVar20 = CONCAT44(0x2d,uVar33);
            goto LAB_03549564;
          }
        }
        if (fVar44 <= fStack00000000000000c4) {
switchD_0354b88c_caseD_0:
          FUN_0358cbd4(in_stack_00000050,unaff_d13,fStack00000000000000d4,
                       *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,fVar40,
                       in_stack_000000f8._4_4_,in_stack_00000048._4_4_);
        }
        else {
          if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
            *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
          }
          fVar58 = fStack00000000000000c4;
          if ((char)unaff_x19[0x47] != '\0') {
            fVar58 = *(float *)(unaff_x19 + 0x59);
            if ((fVar58 < *(float *)((long)unaff_x19 + 700)) &&
               (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
              fVar52 = *(float *)((long)unaff_x19 + 700) +
                       ((fStack0000000000000018 - fVar44) / (float)((int)unaff_x19[0x95] + 1)) /
                       in_stack_00000050;
              if (fVar52 <= fVar58) {
                fVar52 = fVar58;
              }
UnityEngine_AndroidJavaObject___ctor:
              *(float *)((long)unaff_x19 + 700) = fVar52;
              return;
            }
            fVar55 = *(float *)((long)unaff_x19 + 0x2d4);
            fVar58 = *(float *)(unaff_x19 + 0x5a) / 100.0;
            if ((fVar55 < fVar58) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
            goto LAB_0354fc94;
            fVar55 = *(float *)((long)unaff_x19 + 0x1e4);
            param_3 = (ulong)(uint)fVar55;
            fVar58 = *(float *)(unaff_x19 + 0x4a);
            if ((fVar58 < fVar55) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
            goto LAB_0354fcd0;
          }
          switch((int)unaff_x19[0x5c]) {
          case 0:
          case 2:
          case 4:
            goto switchD_0354b88c_caseD_0;
          case 1:
            lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar21 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            }
            lVar27 = *(long *)(lVar21 + 0xb8);
            lVar21 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
            if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
              lVar21 = FUN_01a46ff8(lVar21);
            }
            piVar19 = (int *)thunk_FUN_01a59484(lVar27 + 0x11f0,
                                                *(long *)(*(long *)(*(long *)(lVar21 + 0xc0) + 8) +
                                                         0x80) + 0xa0);
            if (*piVar19 == 0) {
              bStack000000000000006c = 0;
LAB_0354cf2c:
              uVar20 = DAT_00d37868;
              unaff_x20[0] = 0;
              unaff_x20[1] = 0;
              in_stack_000017b8 = 0xffffffff;
              goto LAB_03549564;
            }
            lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar21 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            }
            FUN_0209b778(*(long *)(lVar21 + 0xb8) + 0x11f0,&stack0x000008b0,
                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
            memcpy(&stack0x00001018,&stack0x000008b0,0x378);
            iVar13 = FUN_0358c15c();
            bStack000000000000006c = 0;
LAB_0354b3a0:
            iVar11 = *(int *)((long)unaff_x19 + 0x494) + -1;
            *(int *)((long)unaff_x19 + 0x494) = iVar11;
            in_stack_00000180 = in_stack_00000180 + 1;
            in_stack_000017b8 = iVar13 - 1;
            uVar20 = CONCAT44(0x2026,iVar11);
            goto LAB_03549564;
          case 3:
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            in_stack_000017b8 = FUN_0358c15c();
            bStack000000000000006c = 0;
LAB_0354b0e0:
            uVar20 = CONCAT44(3,uVar14);
            goto LAB_03549564;
          case 5:
            *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
            FUN_0358cbd4(in_stack_00000050,unaff_d13,fStack00000000000000d4,
                         *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,fVar40,
                         in_stack_000000f8._4_4_,in_stack_00000048._4_4_);
            *(undefined4 *)(unaff_x19 + 0x9a) = 0;
            *(undefined4 *)(unaff_x19 + 0x9b) = 0;
            *(undefined8 *)(in_stack_00000078 + 0x208) = 0;
            *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
            break;
          case 6:
            goto switchD_0354b88c_caseD_6;
          default:
            bStack000000000000006c = 0;
            goto LAB_0354b8e4;
          }
        }
        bStack000000000000006c = 0;
        goto LAB_0354c6b4;
      }
      if (((char)unaff_x19[0x47] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar58 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if (fVar55 < fVar58) {
          fVar61 = fVar48 / (1.0 - fVar55);
          if (fVar55 <= 0.0) {
            fVar61 = fVar48;
          }
          fVar55 = fVar55 + (fVar48 - fVar52 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar61;
          goto LAB_0354fc24;
        }
        fVar55 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar58 = *(float *)(unaff_x19 + 0x4a);
        if (fVar58 < fVar55) {
          fVar52 = (fVar55 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar52 <= DAT_00d38b84) {
            fVar52 = DAT_00d38b84;
          }
          *(float *)((long)unaff_x19 + 0x23c) = fVar55;
          fVar55 = fVar55 - fVar52;
          goto LAB_0354fc60;
        }
      }
      iVar11 = (int)unaff_x19[0x5c];
      if (iVar11 == 1) {
        lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar21 = *(long *)puVar7;
        }
        lVar27 = *(long *)(lVar21 + 0xb8);
        lVar21 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
          lVar21 = FUN_01a46ff8(lVar21);
        }
        piVar19 = (int *)thunk_FUN_01a59484(lVar27 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar21 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar19 == 0) goto LAB_0354cf2c;
        lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar21 = *(long *)puVar7;
        }
        FUN_0209b778(*(long *)(lVar21 + 0xb8) + 0x11f0,&stack0x000008b0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00000ca0,&stack0x000008b0,0x378);
        goto LAB_0354b394;
      }
      if (iVar11 == 6) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        lVar21 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar17 = FUN_036cee6c(lVar21,0,0);
        if ((uVar17 & 1) == 0) goto LAB_0354b4b4;
        param_1 = *unaff_x19;
        unaff_x25 = (long *)unaff_x19[0x5d];
        goto code_r0x0354b448;
      }
      if (iVar11 == 3) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        goto LAB_0354af20;
      }
    }
LAB_0354b8e4:
    if (in_stack_000017ec == 0xad) {
      if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar21 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(undefined1 *)(lVar21 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
    }
    else {
      if (in_stack_000017ec == 9) {
        lVar21 = *unaff_x22;
        if ((lVar21 == 0) || (lVar27 = *(long *)(lVar21 + 0x38), lVar27 == 0)) goto LAB_0354fbf4;
        uVar14 = *unaff_x20;
        if (*(uint *)(lVar27 + 0x18) <= uVar14)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *(undefined1 *)(lVar27 + (long)(int)uVar14 * unaff_x24 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar14;
        lVar27 = *(long *)(lVar21 + 0x50);
        if (lVar27 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar27 + 0x2c) = *(int *)(lVar27 + 0x2c) + 1;
        goto LAB_0354b950;
      }
      if (*(int *)((long)unaff_x19 + 0x644) == 1) {
        (**(code **)(*unaff_x19 + 0x898))(fVar58,fVar42);
      }
      else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
        (**(code **)(*unaff_x19 + 0x888))(in_stack_00000168._4_4_);
      }
      uVar14 = *unaff_x20;
      if ((in_stack_00000060 & 1) != 0) {
        *(uint *)(in_stack_00000078 + 0x1f0) = uVar14;
      }
      *(uint *)((long)unaff_x19 + 0x4a4) = uVar14;
      *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
      if ((unaff_x19[0x6d] == 0) || (lVar21 = *(long *)(unaff_x19[0x6d] + 0x50), lVar21 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      in_stack_00000060 = 0;
      *(float *)(lVar21 + 0x60) = fVar57;
      *(float *)(lVar21 + 100) = fVar41;
    }
  }
  else {
    if (((in_stack_000017ec & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar48 = (float)param_3;
      fVar52 = 0.0;
      if ((0.0 < fVar48) && (fVar52 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar52 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      param_3 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar48)) + fVar52)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar14;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        lVar21 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar17 = FUN_036cee6c(lVar21,0,0);
        if ((uVar17 & 1) != 0) {
          plVar22 = (long *)unaff_x19[0x5d];
          uVar20 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar22 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar22 + 0x528))(plVar22,uVar20,*(undefined8 *)(*plVar22 + 0x530));
          lVar21 = unaff_x19[0x5d];
          if (lVar21 == 0) goto LAB_0354fbf4;
          *(int *)(lVar21 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar21,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar22 = (long *)unaff_x19[0x5d];
          if (plVar22 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar22 + 0x7a8))(plVar22,0,0,*(undefined8 *)(*plVar22 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
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
        lVar21 = *unaff_x22;
        if ((lVar21 == 0) || (lVar27 = *(long *)(lVar21 + 0x50), lVar27 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar27 + 0x2c) = *(int *)(lVar27 + 0x2c) + 1;
        *(int *)(lVar21 + 0x20) = *(int *)(lVar21 + 0x20) + 1;
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
      if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x50), lVar21 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_0354b950:
      *(int *)(lVar21 + 0x20) = *(int *)(lVar21 + 0x20) + 1;
    }
  }
  if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017ec == 0x2d || (!bVar9)))) {
    if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
    fVar52 = *(float *)(unaff_x19 + 0x3d);
    iVar11 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
    if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
    fVar57 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
    lVar21 = unaff_x19[0xca];
    fVar48 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar48 = 1.0;
    }
    if ((lVar21 == 0) || (*(long *)(lVar21 + 0x20) == 0)) goto LAB_0354fbf4;
    fVar58 = *(float *)((long)unaff_x19 + 0x404);
    fVar55 = *(float *)(lVar21 + 0x2c);
    fVar41 = (float)FUN_03776ea8(*(long *)(lVar21 + 0x20),0);
    fVar42 = *_fStack00000000000000a8;
    fVar41 = fVar58 * (fVar52 / (float)iVar11) * fVar57 * fVar48 * fVar55 * fVar41;
    fVar52 = *_fStack00000000000000a0;
    if ((in_stack_000017ec == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
      if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0))
      goto LAB_0354fbf4;
      uVar14 = *(int *)((long)unaff_x19 + 0x494) - 1;
      if (*(uint *)(lVar21 + 0x18) <= uVar14)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
      fVar48 = *(float *)(lVar21 + (long)(int)uVar14 * (long)iVar13 + 0x60);
      iVar11 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
      fVar58 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar21 = unaff_x19[0xca];
      fVar57 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar57 = 1.0;
      }
      if ((lVar21 == 0) || (*(long *)(lVar21 + 0x20) == 0)) goto LAB_0354fbf4;
      fVar55 = *(float *)((long)unaff_x19 + 0x404);
      fVar44 = *(float *)(lVar21 + 0x2c);
      fVar41 = (float)FUN_03776ea8(*(long *)(lVar21 + 0x20),0);
      if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x50), lVar21 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      fVar42 = *(float *)(lVar21 + 0x60);
      fVar52 = *(float *)(lVar21 + 100);
      fVar41 = fVar55 * (fVar48 / (float)iVar11) * fVar58 * fVar57 * fVar44 * fVar41;
    }
    fVar58 = *(float *)(unaff_x19 + 0x9b);
    fVar48 = 0.0;
    fVar57 = 0.0;
    if ((0.0 < fVar58) && (fVar57 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar57 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    fVar44 = *(float *)(unaff_x19 + 0x97);
    fVar62 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar55 = *(float *)(unaff_x19 + 200);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xca] == 0) || (lVar21 = *(long *)(unaff_x19[0xca] + 0x20), lVar21 == 0))
      goto LAB_0354fbf4;
      FUN_03776e6c(&stack0x000008b0,lVar21,0);
      fVar48 = (float)FUN_03776cb4(&stack0x00001710,0);
    }
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar46 = *(float *)(unaff_x19 + 0x6c);
    fVar52 = (fStack000000000000009c - fVar42) - fVar52;
    bVar8 = true;
    if ((fVar46 <= fVar52) && (bVar8 = false, !NAN(fVar46))) {
      bVar8 = fVar46 == -1.0;
    }
    if (!bVar8) {
      fVar52 = fVar46;
    }
    fVar42 = 1.0;
    if ((uVar30 & 0x18) != 0) {
      fVar42 = DAT_00d38acc;
    }
    if (((fVar44 - (fVar62 - fVar58)) + fVar57 < fStack00000000000000c4) &&
       (ABS(fVar55) + fVar41 * fVar48 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
        fVar42 * fVar52)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
      lVar21 = *(long *)(*(long *)puVar7 + 0xb8);
      memcpy(&stack0x00000538,(void *)(lVar21 + 0x788),0x378);
      FUN_0209b210(lVar21 + 0x11f0,&stack0x00000538,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
    }
  }
  lVar21 = *unaff_x22;
  if (lVar21 == 0) goto LAB_0354fbf4;
  lVar27 = *(long *)(lVar21 + 0x38);
  if (lVar27 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar14 = *(uint *)(unaff_x19 + 0x95);
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(uint *)(lVar27 + 100) = uVar14;
  *(int *)(lVar27 + 0x68) = (int)unaff_x19[0x96];
  if ((bVar9) ||
     ((in_stack_000017ec < 0xe && ((1 << (ulong)(in_stack_000017ec & 0x1f) & 0x2c00U) != 0)))) {
    lVar21 = *(long *)(lVar21 + 0x50);
    if (lVar21 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar21 + 0x18) <= uVar14)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (*(int *)(lVar21 + (long)(int)uVar14 * 0x5c + 0x24) == 1) goto LAB_0354bde0;
  }
  else {
    lVar21 = *(long *)(lVar21 + 0x50);
    if (lVar21 == 0) goto LAB_0354fbf4;
LAB_0354bde0:
    if (*(uint *)(lVar21 + 0x18) <= uVar14)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(int *)(lVar21 + (long)(int)uVar14 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
  }
  if (in_stack_000017ec == 9) {
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar52 = (float)FUN_03776a48(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar45 = *(float *)(unaff_x19 + 200);
    fVar48 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000178 + 0x1b9));
    fVar52 = fVar61 * fVar52 * fVar48;
    fVar48 = fVar52 * (float)(int)(fVar45 / fVar52);
    param_3 = (ulong)(uint)fVar48;
    if (fVar48 <= fVar45) {
      fVar48 = fVar45 + fVar52;
    }
LAB_0354c000:
    *(float *)(unaff_x19 + 200) = fVar48;
  }
  else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
    if ((char)unaff_x19[0x1e] == '\0') {
      if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
        fVar57 = 1.0;
      }
      else {
        fVar57 = (float)thunk_FUN_036bc400(_fStack0000000000000070,0);
      }
      fVar48 = *(float *)(unaff_x19 + 200);
      fVar41 = (float)FUN_03776cb4(&stack0x000017a0,0);
      if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
      fVar52 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
      fVar48 = fVar48 + fVar52 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                 fVar61 * (fVar45 + fVar57 * fVar41) +
                                 fStack00000000000000d4 *
                                 (fStack00000000000000d0 +
                                 fVar40 + *(float *)(unaff_x19[0x20] + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar48;
      goto joined_r0x0354bf48;
    }
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar48 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (*(float *)((long)unaff_x19 + 0x2ac) +
             fVar61 * fVar45 +
             fStack00000000000000d4 *
             (fStack00000000000000d0 + fVar40 + *(float *)(*in_stack_00000178 + 0x1ac)));
    param_3 = (ulong)(uint)fVar48;
    fVar48 = *(float *)(unaff_x19 + 200) - fVar48;
    *(float *)(unaff_x19 + 200) = fVar48;
    if ((in_stack_000017ec == 0x200b) || (uVar12 != 0)) {
      fVar52 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      param_3 = (ulong)(uint)fVar52;
      fVar48 = fVar48 - fVar52;
      goto LAB_0354c000;
    }
  }
  else {
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar52 = *(float *)(unaff_x19 + 200);
    fVar48 = fVar52 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                      (*(float *)((long)unaff_x19 + 0x2ac) +
                      (*(float *)(unaff_x19 + 0x56) - fVar43) +
                      fStack00000000000000d4 * (fVar40 + *(float *)(*in_stack_00000178 + 0x1ac)));
    *(float *)(unaff_x19 + 200) = fVar48;
joined_r0x0354bf48:
    if ((in_stack_000017ec == 0x200b) || (param_3 = (ulong)(uint)fVar52, uVar12 != 0)) {
      fVar52 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      param_3 = (ulong)(uint)fVar52;
      fVar48 = fVar48 + fVar52;
      goto LAB_0354c000;
    }
  }
  lVar21 = *unaff_x22;
  if ((lVar21 == 0) || (lVar27 = *(long *)(lVar21 + 0x38), lVar27 == 0)) goto LAB_0354fbf4;
  uVar14 = *unaff_x20;
  uVar30 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar30 <= uVar14) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar27 + (long)(int)uVar14 * unaff_x24 + 0x144) = fVar48;
  uVar33 = in_stack_000017ec;
  if ((int)in_stack_000017ec < 0xd) {
    if ((in_stack_000017ec - 10 < 2) || (in_stack_000017ec == 3)) goto LAB_0354c060;
LAB_0354c6e8:
    if (((bool)(bVar9 & in_stack_000017ec == 0x2d)) || ((float)uVar14 == in_stack_00000080._4_4_))
    goto LAB_0354c060;
  }
  else {
    if (1 < in_stack_000017ec - 0x2028) {
      if (in_stack_000017ec != 0xd) goto LAB_0354c6e8;
      param_3 = 0;
      *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
      if ((float)uVar14 != in_stack_00000080._4_4_) goto LAB_0354c704;
    }
LAB_0354c060:
    if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
      fVar52 = *(float *)(unaff_x19 + 0x99);
      fVar48 = *(float *)(unaff_x19 + 0x9a);
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      fVar52 = fVar52 - fVar48;
      if (((fStack0000000000000058 < ABS(fVar52)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
         && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
        FUN_0358c860(fVar52);
        *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar52;
        *(float *)(unaff_x19 + 0x9b) = fVar52 + *(float *)(unaff_x19 + 0x9b);
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar21 = *(long *)puVar7;
        }
        lVar27 = *(long *)(lVar21 + 0xb8);
        if (*(int *)(lVar27 + 0x7ac) == (int)unaff_x19[0x95]) {
          if (*(int *)(lVar21 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          FUN_0209b778(lVar27 + 0x11f0,&stack0x000008b0,*(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo
                      );
          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          memcpy((void *)(*(long *)(lVar21 + 0xb8) + 0x788),&stack0x000008b0,0x378);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (*(long *)(lVar21 + 0xb8) + 0x818,0);
          lVar21 = *(long *)(*(long *)puVar7 + 0xb8);
          *(float *)(lVar21 + 0x7bc) = fVar52 + *(float *)(lVar21 + 0x7bc);
          *(float *)(lVar21 + 0x800) = fVar52 + *(float *)(lVar21 + 0x800);
          memcpy(&stack0x000001c0,(void *)(lVar21 + 0x788),0x378);
          FUN_0209b210(lVar21 + 0x11f0,&stack0x000001c0,
                       *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
        }
      }
    }
    fVar45 = *(float *)(unaff_x19 + 0x9b);
    *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
    fVar48 = *(float *)((long)unaff_x19 + 0x4cc) - fVar45;
    fVar52 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar48 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar52 = fVar48;
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar52;
    fVar57 = *(float *)(unaff_x19 + 0x99);
    if (in_stack_000017e4 == '\0') {
      in_stack_000017e8 = fVar52;
    }
    if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
       (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
        ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
      in_stack_000017e4 = '\x01';
    }
    lVar21 = *unaff_x22;
    if ((lVar21 == 0) || (lVar27 = *(long *)(lVar21 + 0x50), lVar27 == 0)) goto LAB_0354fbf4;
    uVar14 = *(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar27 + 0x18) <= uVar14)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar39 = unaff_x19[0x93];
    lVar18 = lVar27 + (long)(int)uVar14 * 0x5c;
    *(int *)(lVar18 + 0x34) = (int)lVar39;
    uVar30 = *(uint *)(unaff_x19 + 0x93);
    if ((int)lVar39 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
      uVar30 = *(uint *)((long)unaff_x19 + 0x49c);
    }
    *(uint *)((long)unaff_x19 + 0x49c) = uVar30;
    *(uint *)(lVar18 + 0x38) = uVar30;
    *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
    *(undefined4 *)(lVar18 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
    iVar11 = *(int *)((long)unaff_x19 + 0x49c);
    if ((int)uVar30 <= *(int *)((long)unaff_x19 + 0x4a4)) {
      iVar11 = *(int *)((long)unaff_x19 + 0x4a4);
    }
    *(int *)((long)unaff_x19 + 0x4a4) = iVar11;
    *(int *)(lVar18 + 0x40) = iVar11;
    *(int *)(lVar18 + 0x24) = (*(int *)(lVar18 + 0x3c) - *(int *)(lVar18 + 0x34)) + 1;
    *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    lVar21 = *(long *)(lVar21 + 0x38);
    if (lVar21 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar21 + 0x18) <= uVar30)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar60 = *(undefined4 *)(lVar21 + (long)(int)uVar30 * (long)iVar13 + 0x11c);
    lVar27 = lVar27 + (long)(int)uVar14 * 0x5c;
    *(float *)(lVar27 + 0x70) = fVar48;
    *(undefined4 *)(lVar27 + 0x6c) = uVar60;
    lVar21 = *unaff_x22;
    if ((lVar21 == 0) || (lVar27 = *(long *)(lVar21 + 0x50), lVar27 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar21 = *(long *)(lVar21 + 0x38);
    if (lVar21 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar21 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    fVar57 = fVar57 - fVar45;
    param_3 = (ulong)(uint)fVar57;
    lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    *(undefined4 *)(lVar27 + 0x74) =
         *(undefined4 *)(lVar21 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128)
    ;
    *(float *)(lVar27 + 0x78) = fVar57;
    lVar21 = *unaff_x22;
    if ((lVar21 == 0) || (lVar39 = *(long *)(lVar21 + 0x50), lVar39 == 0)) goto LAB_0354fbf4;
    lVar18 = (long)(int)*(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar39 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar27 = lVar39 + lVar18 * 0x5c;
    *(float *)(lVar27 + 0x44) = *(float *)(lVar27 + 0x74) - fVar61 * in_stack_00000168._4_4_;
    *(float *)(lVar27 + 0x5c) = in_stack_000000f8._4_4_;
    if (*(int *)(lVar27 + 0x24) == 1) {
      *(int *)(lVar39 + lVar18 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    if ((*in_stack_00000178 == 0) || (lVar27 = *(long *)(lVar21 + 0x38), lVar27 == 0))
    goto LAB_0354fbf4;
    lVar36 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
    uVar30 = (uint)*(undefined8 *)(lVar27 + 0x18);
    if (uVar30 <= *(uint *)((long)unaff_x19 + 0x4a4))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*(char *)(lVar27 + lVar36 * unaff_x24 + 0x194) == '\0') &&
       (lVar36 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar30 <= *(uint *)(unaff_x19 + 0x94)))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar39 = lVar39 + lVar18 * 0x5c;
    fVar40 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fStack00000000000000d4 *
              (fStack00000000000000d0 + fVar40 + *(float *)(*in_stack_00000178 + 0x1ac)) -
             *(float *)((long)unaff_x19 + 0x2ac));
    fVar52 = -fVar40;
    if ((char)unaff_x19[0x1e] != '\0') {
      fVar52 = fVar40;
    }
    *(float *)(lVar39 + 0x58) = *(float *)(lVar27 + lVar36 * unaff_x24 + 0x144) + fVar52;
    *(float *)(lVar39 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
    *(float *)(lVar39 + 0x54) = fVar48;
    *(float *)(lVar39 + 0x48) = fStack000000000000005c + (fVar57 - fVar48);
    *(float *)(lVar39 + 0x4c) = fVar57;
    if ((int)in_stack_000017ec < 0x2d) {
      if (in_stack_000017ec - 10 < 2) {
LAB_0354c4a8:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        lVar21 = unaff_x19[0x6d];
        *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
        iVar13 = (int)unaff_x19[0x95] + 1;
        *(int *)(unaff_x19 + 0x95) = iVar13;
        *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
        if ((lVar21 == 0) || (*(long *)(lVar21 + 0x50) == 0)) goto LAB_0354fbf4;
        if (*(int *)(*(long *)(lVar21 + 0x50) + 0x18) <= iVar13) {
          FUN_0358ca18();
          lVar21 = unaff_x19[0x6d];
          if (lVar21 == 0) goto LAB_0354fbf4;
        }
        lVar21 = *(long *)(lVar21 + 0x38);
        if (lVar21 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar21 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        fVar52 = *(float *)(lVar21 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
        if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
          if ((in_stack_000017ec == 0x2029) || (fVar48 = 0.0, in_stack_000017ec == 10)) {
            fVar48 = *(float *)((long)unaff_x19 + 0x2cc);
          }
          uVar23 = 0;
          fVar48 = fVar52 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   in_stack_00000050 * (in_stack_00000048._4_4_ + *(float *)((long)unaff_x19 + 700))
                   + fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar48) +
                   *(float *)(unaff_x19 + 0x9b);
        }
        else {
          if ((in_stack_000017ec == 0x2029) || (fVar48 = 0.0, in_stack_000017ec == 10)) {
            fVar48 = *(float *)((long)unaff_x19 + 0x2cc);
          }
          uVar23 = 1;
          fVar48 = *(float *)(unaff_x19 + 0x9b) +
                   *(float *)(unaff_x19 + 0x58) +
                   fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar48);
        }
        *(float *)(unaff_x19 + 0x9b) = fVar48;
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar23;
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar21 = *(long *)puVar7;
        }
        uVar16 = *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x9a) = fVar52;
        unaff_d13 = NEON_rev64(uVar16,4);
        unaff_x19[0x99] = unaff_d13;
        *(float *)(unaff_x19 + 200) =
             *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
        FUN_0358c4f0();
        FUN_0358c4f0();
        *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
LAB_0354c6b4:
        bStack0000000000000068 = 1;
        in_stack_00000060 = 1;
        param_3 = unaff_d13;
        unaff_d13 = (ulong)(uint)fVar61;
        goto LAB_03549564;
      }
      if (in_stack_000017ec == 3) {
        if (unaff_x19[0x8f] == 0) goto LAB_0354fbf4;
        in_stack_000017b8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
        uVar33 = 3;
      }
    }
    else if ((in_stack_000017ec - 0x2028 < 2) || (in_stack_000017ec == 0x2d)) goto LAB_0354c4a8;
  }
LAB_0354c704:
  uVar14 = *unaff_x20;
  if (uVar30 <= uVar14) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (*(char *)(lVar27 + (long)(int)uVar14 * unaff_x24 + 0x194) != '\0') {
    lVar27 = lVar27 + (long)(int)uVar14 * unaff_x24;
    uVar50 = *(ulong *)(lVar27 + 0x11c);
    uVar17 = *(ulong *)(in_stack_00000078 + 0x230);
    *(ulong *)(in_stack_00000078 + 0x230) =
         uVar17 ^ (uVar17 ^ uVar50) &
                  ~CONCAT44(-(uint)((float)(uVar17 >> 0x20) < (float)(uVar50 >> 0x20)),
                            -(uint)((float)uVar17 < (float)uVar50));
    uVar17 = *(ulong *)(in_stack_00000078 + 0x238);
    param_3 = *(ulong *)(lVar27 + 0x128);
    *(ulong *)(in_stack_00000078 + 0x238) =
         uVar17 ^ (uVar17 ^ param_3) &
                  ~CONCAT44(-(uint)((float)(param_3 >> 0x20) < (float)(uVar17 >> 0x20)),
                            -(uint)((float)param_3 < (float)uVar17));
  }
  if (((int)unaff_x19[0x5c] == 5) &&
     ((0xd < uVar33 || ((1 << (ulong)(uVar33 & 0x1f) & 0x2c00U) == 0)))) {
    lVar27 = *(long *)(lVar21 + 0x58);
    if (lVar27 == 0) goto LAB_0354fbf4;
    iVar11 = (int)unaff_x19[0x96] + 1;
    if (*(int *)(lVar27 + 0x18) < iVar11) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8((long *)(lVar21 + 0x58),iVar11,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
      lVar21 = *unaff_x22;
      if (lVar21 == 0) goto LAB_0354fbf4;
    }
    lVar27 = *(long *)(lVar21 + 0x58);
    if (lVar27 == 0) goto LAB_0354fbf4;
    uVar30 = *(uint *)(unaff_x19 + 0x96);
    lVar39 = (long)(int)uVar30;
    uVar14 = *(uint *)(lVar27 + 0x18);
    if (uVar14 <= uVar30) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar18 = lVar27 + lVar39 * 0x14;
    fVar48 = *(float *)(lVar18 + 0x30);
    param_3 = (ulong)(uint)fVar48;
    *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
    fVar52 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar48 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar52 = fVar48;
    }
    *(float *)(lVar18 + 0x30) = fVar52;
    uVar33 = *(uint *)((long)unaff_x19 + 0x494);
    if (uVar33 == 0 && uVar30 == 0) {
      *(uint *)(lVar27 + (ulong)uVar30 * 0x14 + 0x20) = uVar33;
    }
    else {
      uVar31 = uVar33 - 1;
      if (0 < (int)uVar33) {
        lVar21 = *(long *)(lVar21 + 0x38);
        if (lVar21 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar21 + 0x18) <= uVar31)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        if (uVar30 != *(uint *)(lVar21 + (ulong)uVar31 * (unaff_x24 & 0xffffffff) + 0x68)) {
          if (uVar14 <= uVar30 - 1) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          *(uint *)(lVar27 + 0x20 + (long)(int)(uVar30 - 1) * 0x14 + 4) = uVar31;
          *(uint *)(lVar27 + 0x20 + lVar39 * 0x14) = uVar33;
          goto LAB_0354c780;
        }
      }
      if ((float)uVar33 == in_stack_00000080._4_4_) {
        *(float *)(lVar27 + lVar39 * 0x14 + 0x24) = in_stack_00000080._4_4_;
      }
    }
  }
LAB_0354c780:
  puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (((char)unaff_x19[0x5b] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5c) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_0354cc90;
  if ((uVar12 == 0) &&
     (((in_stack_000017ec != 0x2d && (in_stack_000017ec != 0x200b)) && (in_stack_000017ec != 0xad)))
     ) {
    if (*(char *)((long)unaff_x19 + 0x2da) != '\0') {
      if ((bStack0000000000000068 & 1) != 0) goto LAB_0354c910;
      goto LAB_0354cc88;
    }
LAB_0354c87c:
    if (((((0x2bfd < in_stack_000017ec - 0xac01) && (0xfd < in_stack_000017ec - 0x1101)) &&
         (0x1d < in_stack_000017ec - 0xa961)) || (uVar17 = FUN_03597a54(0), (uVar17 & 1) != 0)) &&
       ((((0xed < in_stack_000017ec - 0xff01 && (0x1d < in_stack_000017ec - 0xfe31)) &&
         (0x717d < in_stack_000017ec - 0x2e81)) && (0x1fd < in_stack_000017ec - 0xf901))))
    goto LAB_0354c904;
    lVar21 = FUN_035978e8(0);
    if ((lVar21 == 0) || (*(long *)(lVar21 + 0x10) == 0)) goto LAB_0354fbf4;
    uVar14 = FUN_0219c130(*(long *)(lVar21 + 0x10),&stack0x000008b0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((int)in_stack_00000080._4_4_ <= (int)*unaff_x20) {
      in_stack_000008b0 = in_stack_000017ec;
      if ((uVar14 & 1) == 0) {
LAB_0354cc08:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        bStack0000000000000068 = 0;
        goto LAB_0354cc90;
      }
LAB_0354cb6c:
      if (uVar25 != uVar2 || ((bStack0000000000000068 ^ 0xff) & 1) != 0) goto LAB_0354cc90;
      if (uVar12 == 0) goto LAB_0354cbc0;
      goto LAB_0354cb88;
    }
    lVar21 = FUN_035978e8(0);
    if (((lVar21 == 0) || (*unaff_x22 == 0)) || (lVar27 = *(long *)(*unaff_x22 + 0x38), lVar27 == 0)
       ) goto LAB_0354fbf4;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20 + 1)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (*(long *)(lVar21 + 0x18) == 0) goto LAB_0354fbf4;
    in_stack_000008b0 =
         (uint)*(ushort *)(lVar27 + (long)(int)(*unaff_x20 + 1) * (long)iVar13 + 0x20);
    uVar17 = FUN_0219c130(*(long *)(lVar21 + 0x18),&stack0x000008b0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((uVar14 & 1) != 0) goto LAB_0354cb6c;
    if ((uVar17 & 1) == 0) goto LAB_0354cc08;
    if ((bStack0000000000000068 & 1) == 0) goto LAB_0354cc88;
    if (uVar12 != 0) {
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
    if (*(char *)((long)unaff_x19 + 0x2da) != '\x01') {
      if (((0x28 < in_stack_000017ec - 0x2007) ||
          ((1L << ((ulong)(in_stack_000017ec - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
         ((in_stack_000017ec != 0xa0 && (in_stack_000017ec != 0x2060)))) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        bStack0000000000000068 = 0;
        *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xe78) = 0xffffffff;
        goto LAB_0354cc90;
      }
      goto LAB_0354c87c;
    }
LAB_0354c904:
    if ((bStack0000000000000068 & 1) == 0) {
LAB_0354cc88:
      bStack0000000000000068 = 0;
      goto LAB_0354cc90;
    }
    if (uVar12 == 0) {
LAB_0354c910:
      if ((bStack000000000000006c & 1) == 0 && in_stack_000017ec == 0xad) goto LAB_0354cb88;
    }
    else {
LAB_0354cb88:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
    }
LAB_0354cbc0:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0358c4f0();
  }
  bStack0000000000000068 = 1;
LAB_0354cc90:
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0358c4f0();
  *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
  unaff_d13 = (ulong)(uint)fVar61;
  goto LAB_03549564;
switchD_0354b88c_caseD_6:
  lVar21 = unaff_x19[0x5d];
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar17 = FUN_036cee6c(lVar21,0,0);
  if ((uVar17 & 1) != 0) {
    plVar22 = (long *)unaff_x19[0x5d];
    uVar20 = (**(code **)(*unaff_x19 + 0x518))();
    if (plVar22 == (long *)0x0) goto LAB_0354fbf4;
    (**(code **)(*plVar22 + 0x528))(plVar22,uVar20,*(undefined8 *)(*plVar22 + 0x530));
    lVar21 = unaff_x19[0x5d];
    if (lVar21 == 0) goto LAB_0354fbf4;
    *(int *)(lVar21 + 0x400) = (int)unaff_x19[0x80];
    FUN_0357ee30(lVar21,*(undefined4 *)((long)unaff_x19 + 0x494),0);
    plVar22 = (long *)unaff_x19[0x5d];
    if (plVar22 == (long *)0x0) goto LAB_0354fbf4;
    (**(code **)(*plVar22 + 0x7a8))(plVar22,0,0,*(undefined8 *)(*plVar22 + 0x7b0));
    *(undefined1 *)(unaff_x19 + 0x5f) = 1;
  }
  bStack000000000000006c = 0;
  goto LAB_0354b4b4;
LAB_0354d7c0:
  uVar10 = uVar25 - 1;
  if (*(uint *)(lVar21 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*unaff_x22 == 0) || (lVar39 = *(long *)(*unaff_x22 + 0x50), lVar39 == 0)) goto LAB_0354fbf4;
  lVar36 = (long)(int)uVar10;
  lVar18 = lVar21 + lVar36 * 0x178;
  uVar2 = *(uint *)(lVar18 + 100);
  if (*(uint *)(lVar39 + 0x18) <= uVar2)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar34 = *(long *)(lVar18 + 0x38);
  lVar38 = (long)(int)uVar2;
  lVar39 = lVar39 + lVar38 * 0x5c;
  uVar14 = *(uint *)(lVar39 + 0x68);
  uVar31 = (uint)*(ushort *)(lVar18 + 0x20);
  uVar30 = *(uint *)(lVar39 + 0x3c);
  iVar3 = *(int *)(lVar39 + 0x20);
  iVar11 = *(int *)(lVar39 + 0x28);
  iVar15 = *(int *)(lVar39 + 0x2c);
  fVar57 = *(float *)(lVar39 + 0x4c);
  uVar33 = *(uint *)(lVar39 + 0x40);
  fVar43 = *(float *)(lVar39 + 0x54);
  fVar40 = *(float *)(lVar39 + 0x58);
  fVar42 = *(float *)(lVar39 + 0x5c);
  fVar55 = *(float *)(lVar39 + 0x60);
  fVar58 = *(float *)(lVar39 + 0x6c);
  fVar44 = *(float *)(lVar39 + 0x70);
  fVar45 = *(float *)(lVar39 + 0x74);
  fVar41 = *(float *)(lVar39 + 0x78);
  if ((int)uVar14 < 9) {
    switch(uVar14) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar55 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar40;
      }
      break;
    case 2:
LAB_0354d968:
      in_stack_000000f8._4_4_ = (fVar55 + fVar42 * 0.5) - fVar40 * 0.5;
      break;
    default:
      goto switchD_0354d8a4_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar42 + fVar55) - fVar40;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar42 + fVar55;
      }
      break;
    case 8:
      goto switchD_0354d8a4_caseD_8;
    }
LAB_0354d9d8:
    uStack00000000000000f0 = 0;
  }
  else if (uVar14 == 0x10) {
switchD_0354d8a4_caseD_8:
    if (uVar31 < 0xad) {
      if ((uVar31 != 3) && (uVar31 != 10)) goto FUN_0354d8fc;
    }
    else if ((uVar31 != 0xad) && ((uVar31 != 0x200b && (uVar31 != 0x2060)))) {
FUN_0354d8fc:
      if (*(uint *)(lVar21 + 0x18) <= uVar30)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar4 = *(undefined2 *)(lVar21 + (long)(int)uVar30 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_026b8cc4(uVar4,0);
      if ((uVar17 & 1) == 0) {
        bVar1 = (int)uVar2 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar40 <= fVar42) && (!bVar1 && uVar14 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar55;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar42 + fVar55;
        }
        goto LAB_0354d9d8;
      }
      if (((uVar25 == 1) || (uVar2 != uVar12)) || (uVar10 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar55;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar42 + fVar55;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uStack0000000000000030 = FUN_026b97f8(uVar31,0);
        uStack00000000000000f0 = 0;
      }
      else {
        cVar24 = (char)unaff_x19[0x1e];
        fVar55 = -fVar40;
        if (cVar24 != '\0') {
          fVar55 = fVar40;
        }
        if (*(uint *)(lVar21 + 0x18) <= uVar30)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        iVar15 = (int)*(char *)(lVar21 + (long)(int)uVar30 * 0x178 + 0x194) +
                 (-iVar3 - (uStack0000000000000030 & 1)) + iVar15 + -1;
        if (iVar15 < 1) {
          fVar40 = 1.0;
          iVar15 = 1;
        }
        else {
          fVar40 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar31 == 9) {
LAB_0354f76c:
          fVar40 = 1.0 - fVar40;
        }
        else {
          if (uVar31 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar17 = FUN_026b97f8(uVar31,0);
            cVar24 = (char)unaff_x19[0x1e];
            if ((uVar17 & 1) != 0) goto LAB_0354f76c;
          }
          iVar15 = (iVar3 - (~uStack0000000000000030 & 1)) + iVar11;
        }
        fVar40 = ((fVar42 + fVar55) * fVar40) / (float)iVar15;
        if (cVar24 == '\0') {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar40;
          uStack00000000000000f0 =
               CONCAT44((float)((ulong)uStack00000000000000f0 >> 0x20) + 0.0,
                        (float)uStack00000000000000f0 + 0.0);
        }
        else {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar40;
        }
      }
    }
  }
  else if (uVar14 == 0x20) {
    fVar40 = fVar58 + fVar45;
    goto LAB_0354d968;
  }
switchD_0354d8a4_caseD_3:
  uVar14 = (uint)*(undefined8 *)(lVar21 + 0x18);
  if (uVar14 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar39 = lVar21 + lVar36 * 0x178;
  fVar55 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar40 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000f0;
  fVar42 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000f0 >> 0x20);
  if (*(char *)(lVar39 + 0x194) == '\0') goto LAB_0354e1d0;
  iVar11 = *(int *)(lVar21 + lVar36 * 0x178 + 0x2c);
  if (iVar11 != 0) goto LAB_0354e05c;
  fVar61 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar2,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar18 = lVar21 + lVar36 * 0x178;
    *(undefined4 *)(lVar18 + 0x84) = 0;
    *(undefined4 *)(lVar18 + 0xac) = 0;
    *(undefined4 *)(lVar18 + 0xd4) = 0x3f800000;
    fVar61 = 1.0;
    break;
  case 1:
    fVar41 = *(float *)(lVar21 + lVar36 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar18 = lVar21 + lVar36 * 0x178;
      fVar45 = (in_stack_000000f8._4_4_ + fVar41) - *(float *)(in_stack_00000078 + 0x230);
      fVar41 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      goto LAB_0354db24;
    }
    lVar18 = lVar21 + lVar36 * 0x178;
    fVar45 = fVar45 - fVar58;
    *(float *)(lVar18 + 0x84) = fVar61 + (fVar41 - fVar58) / fVar45;
    *(float *)(lVar18 + 0xac) = fVar61 + (*(float *)(lVar18 + 0x98) - fVar58) / fVar45;
    *(float *)(lVar18 + 0xd4) = fVar61 + (*(float *)(lVar18 + 0xc0) - fVar58) / fVar45;
    fVar61 = fVar61 + (*(float *)(lVar18 + 0xe8) - fVar58) / fVar45;
    break;
  case 2:
    lVar18 = lVar21 + lVar36 * 0x178;
    fVar41 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
    fVar45 = (in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0x70)) -
             *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
    *(float *)(lVar18 + 0x84) = fVar61 + fVar45 / fVar41;
    *(float *)(lVar18 + 0xac) =
         fVar61 + ((in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0x98)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    *(float *)(lVar18 + 0xd4) =
         fVar61 + ((in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0xc0)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    fVar61 = fVar61 + ((in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0xe8)) -
                      *(float *)(in_stack_00000078 + 0x230)) /
                      (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar18 = lVar21 + lVar36 * 0x178;
      *(undefined4 *)(lVar18 + 0x88) = 0;
      *(undefined4 *)(lVar18 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar18 + 0xd8) = 0;
      *(undefined4 *)(lVar18 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar18 = lVar21 + lVar36 * 0x178;
      fVar41 = fVar41 - fVar44;
      fVar45 = fVar61 + (*(float *)(lVar18 + 0x74) - fVar44) / fVar41;
      fVar41 = fVar61 + (*(float *)(lVar18 + 0x9c) - fVar44) / fVar41;
      *(float *)(lVar18 + 0x88) = fVar45;
      *(float *)(lVar18 + 0xb0) = fVar41;
      *(float *)(lVar18 + 0xd8) = fVar45;
      *(float *)(lVar18 + 0x100) = fVar41;
      break;
    case 2:
      lVar18 = lVar21 + lVar36 * 0x178;
      fVar45 = fVar61 + (*(float *)(lVar18 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar18 + 0x88) = fVar45;
      fVar41 = *(float *)(unaff_x19 + 0x9c);
      fVar58 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar18 + 0xd8) = fVar45;
      fVar45 = fVar61 + (*(float *)(lVar18 + 0x9c) - fVar41) / (fVar58 - fVar41);
      *(float *)(lVar18 + 0xb0) = fVar45;
      *(float *)(lVar18 + 0x100) = fVar45;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar14 = (uint)*(undefined8 *)(lVar21 + 0x18);
    }
    if (uVar14 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar18 = lVar21 + lVar36 * 0x178;
    fVar45 = *(float *)(lVar18 + 0x15c);
    fVar41 = (1.0 - (*(float *)(lVar18 + 0x88) + *(float *)(lVar18 + 0xb0)) * fVar45) * 0.5;
    fVar58 = fVar61 + *(float *)(lVar18 + 0x88) * fVar45 + fVar41;
    fVar61 = fVar61 + fVar41 + *(float *)(lVar18 + 0xb0) * fVar45;
    *(float *)(lVar18 + 0x84) = fVar58;
    *(float *)(lVar18 + 0xac) = fVar58;
    *(float *)(lVar18 + 0xd4) = fVar61;
    break;
  default:
    goto switchD_0354da88_default;
  }
  *(float *)(lVar21 + lVar36 * 0x178 + 0xfc) = fVar61;
switchD_0354da88_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar14 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar18 = lVar21 + lVar36 * 0x178;
    *(undefined4 *)(lVar18 + 0x88) = 0;
    *(undefined4 *)(lVar18 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar18 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar18 + 0x100) = 0;
    break;
  case 1:
    if (uVar10 < uVar14) {
      lVar18 = lVar21 + lVar36 * 0x178;
      fVar57 = fVar57 - fVar43;
      fVar61 = (*(float *)(lVar18 + 0x74) - fVar43) / fVar57;
      fVar57 = (*(float *)(lVar18 + 0x9c) - fVar43) / fVar57;
      *(float *)(lVar18 + 0x88) = fVar61;
      goto LAB_0354de84;
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  case 2:
    if (uVar14 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar18 = lVar21 + lVar36 * 0x178;
    fVar61 = (*(float *)(lVar18 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar18 + 0x88) = fVar61;
    fVar57 = (*(float *)(lVar18 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
    *(float *)(lVar18 + 0xb0) = fVar57;
    *(float *)(lVar18 + 0xd8) = fVar57;
    *(float *)(lVar18 + 0x100) = fVar61;
    break;
  case 3:
    if (uVar14 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar18 = lVar21 + lVar36 * 0x178;
    fVar57 = *(float *)(lVar18 + 0x15c);
    fVar45 = (1.0 - (*(float *)(lVar18 + 0x84) + *(float *)(lVar18 + 0xd4)) / fVar57) * 0.5;
    fVar61 = *(float *)(lVar18 + 0x84) / fVar57 + fVar45;
    fVar45 = fVar45 + *(float *)(lVar18 + 0xd4) / fVar57;
    *(float *)(lVar18 + 0x88) = fVar61;
    *(float *)(lVar18 + 0xb0) = fVar45;
    *(float *)(lVar18 + 0x100) = fVar61;
    *(float *)(lVar18 + 0xd8) = fVar45;
  }
  if (uVar14 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar18 = lVar21 + lVar36 * 0x178;
  fVar61 = ABS(fVar52) * *(float *)(lVar18 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar18 + 0x5c) == '\0') && ((*(byte *)(lVar21 + lVar36 * 0x178 + 400) & 1) != 0)) {
    fVar61 = -fVar61;
  }
  lVar18 = lVar21 + lVar36 * 0x178;
  fVar57 = *(float *)(lVar18 + 0x88);
  fVar41 = *(float *)(lVar18 + 0x84);
  fVar45 = -2.1474836e+09;
  if (fVar41 != INFINITY) {
    fVar45 = (float)(int)fVar41;
  }
  fVar58 = *(float *)(lVar18 + 0xd4);
  fVar44 = *(float *)(lVar18 + 0xd8);
  fVar43 = -2.1474836e+09;
  if (fVar57 != INFINITY) {
    fVar43 = (float)(int)fVar57;
  }
  uVar49 = FUN_03591d3c(fVar41 - fVar45,fVar57 - fVar43);
  *(undefined4 *)(lVar18 + 0x84) = uVar49;
  if (*(uint *)(lVar21 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar44 = fVar44 - fVar43;
  *(float *)(lVar18 + 0x88) = fVar61;
  uVar49 = FUN_03591d3c(fVar41 - fVar45,fVar44);
  *(undefined4 *)(lVar21 + lVar36 * 0x178 + 0xac) = uVar49;
  if (*(uint *)(lVar21 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar58 = fVar58 - fVar45;
  *(float *)(lVar21 + lVar36 * 0x178 + 0xb0) = fVar61;
  fVar45 = (float)FUN_03591d3c(fVar58,fVar44);
  *(float *)(lVar18 + 0xd4) = fVar45;
  if (*(uint *)(lVar21 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar18 + 0xd8) = fVar61;
  uVar49 = FUN_03591d3c(fVar58,fVar57 - fVar43);
  *(undefined4 *)(lVar21 + lVar36 * 0x178 + 0xfc) = uVar49;
  uVar14 = (uint)*(undefined8 *)(lVar21 + 0x18);
  if (uVar14 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar21 + lVar36 * 0x178 + 0x100) = fVar61;
LAB_0354e05c:
  if (((int)uVar10 < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar14 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
      lVar39 = lVar21 + lVar36 * 0x178;
      *(ulong *)(lVar39 + 0x70) =
           CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar39 + 0x70) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar39 + 0x70));
      *(float *)(lVar39 + 0x78) = fVar42 + *(float *)(lVar39 + 0x78);
      *(ulong *)(lVar39 + 0x98) =
           CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar39 + 0x98) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar39 + 0x98));
      *(float *)(lVar39 + 0xa0) = fVar42 + *(float *)(lVar39 + 0xa0);
      *(ulong *)(lVar39 + 0xc0) =
           CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar39 + 0xc0) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar39 + 0xc0));
      *(float *)(lVar39 + 200) = fVar42 + *(float *)(lVar39 + 200);
      *(ulong *)(lVar39 + 0xe8) =
           CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar39 + 0xe8) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar39 + 0xe8));
      *(float *)(lVar39 + 0xf0) = fVar42 + *(float *)(lVar39 + 0xf0);
      goto LAB_0354e184;
    }
    if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar10 < uVar14) {
        if (*(uint *)(lVar21 + lVar36 * 0x178 + 0x68) == uStack0000000000000034) goto LAB_0354f0d4;
        goto LAB_0354e0cc;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
  }
LAB_0354e0cc:
  if (uVar14 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac();
    DAT_0411f172 = '\x01';
    uVar14 = *(uint *)(lVar21 + 0x18);
  }
  puVar7 = PTR_DAT_03cbded8;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar18 = lVar21 + lVar36 * 0x178;
  *(undefined8 *)(lVar18 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar18 + 0x78) = uVar49;
  if (uVar14 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  lVar18 = lVar21 + lVar36 * 0x178;
  *(undefined8 *)(lVar18 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar18 + 0xa0) = uVar49;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar18 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar18 + 200) = uVar49;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar18 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar18 + 0xf0) = uVar49;
  *(undefined1 *)(lVar39 + 0x194) = 0;
LAB_0354e184:
  if (iVar11 == 0) {
    pcVar29 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
    (*pcVar29)();
  }
  else if (iVar11 == 1) {
    pcVar29 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0354e1b4;
  }
LAB_0354e1d0:
  if ((*unaff_x22 == 0) || (lVar39 = *(long *)(*unaff_x22 + 0x38), lVar39 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar39 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar39 = lVar39 + lVar36 * 0x178;
  uVar20 = *(undefined8 *)(lVar39 + 0x11c);
  *(undefined8 *)(lVar39 + 0x11c) =
       CONCAT44(fVar40 + (float)((ulong)uVar20 >> 0x20),fVar55 + (float)uVar20);
  *(float *)(lVar39 + 0x124) = fVar42 + *(float *)(lVar39 + 0x124);
  if ((*unaff_x22 == 0) || (lVar39 = *(long *)(*unaff_x22 + 0x38), lVar39 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar39 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar39 = lVar39 + lVar36 * 0x178;
  *(ulong *)(lVar39 + 0x110) =
       CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar39 + 0x110) >> 0x20),
                fVar55 + (float)*(undefined8 *)(lVar39 + 0x110));
  *(float *)(lVar39 + 0x118) = fVar42 + *(float *)(lVar39 + 0x118);
  if ((*unaff_x22 == 0) || (lVar39 = *(long *)(*unaff_x22 + 0x38), lVar39 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar39 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar39 = lVar39 + lVar36 * 0x178;
  *(ulong *)(lVar39 + 0x128) =
       CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar39 + 0x128) >> 0x20),
                fVar55 + (float)*(undefined8 *)(lVar39 + 0x128));
  *(float *)(lVar39 + 0x130) = fVar42 + *(float *)(lVar39 + 0x130);
  if ((*unaff_x22 == 0) || (lVar39 = *(long *)(*unaff_x22 + 0x38), lVar39 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar39 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar39 = lVar39 + lVar36 * 0x178;
  *(float *)(lVar39 + 0x134) = fVar55 + *(float *)(lVar39 + 0x134);
  *(ulong *)(lVar39 + 0x138) =
       CONCAT44(fVar42 + (float)((ulong)*(undefined8 *)(lVar39 + 0x138) >> 0x20),
                fVar40 + (float)*(undefined8 *)(lVar39 + 0x138));
  lVar39 = *unaff_x22;
  if ((lVar39 == 0) || (lVar18 = *(long *)(lVar39 + 0x38), lVar18 == 0)) goto LAB_0354fbf4;
  uVar14 = *(uint *)(lVar18 + 0x18);
  if (uVar14 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar35 = lVar18 + lVar36 * 0x178;
  *(float *)(lVar35 + 0x150) = fVar40 + *(float *)(lVar35 + 0x150);
  *(ulong *)(lVar35 + 0x140) =
       CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar35 + 0x140) >> 0x20),
                fVar55 + (float)*(undefined8 *)(lVar35 + 0x140));
  *(ulong *)(lVar35 + 0x148) =
       CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar35 + 0x148) >> 0x20),
                fVar40 + (float)*(undefined8 *)(lVar35 + 0x148));
  if (uVar2 == uVar12) {
    uVar12 = *unaff_x20 - 1;
    if (uVar10 == uVar12) goto LAB_0354e3ec;
  }
  else {
    lVar39 = *(long *)(lVar39 + 0x50);
    if (lVar39 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar39 + 0x18) <= uVar12)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar35 = (long)(int)uVar12;
    lVar37 = lVar39 + lVar35 * 0x5c;
    fVar45 = fVar40 + *(float *)(lVar37 + 0x54);
    *(ulong *)(lVar37 + 0x4c) =
         CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                  fVar40 + (float)*(undefined8 *)(lVar37 + 0x4c));
    *(float *)(lVar37 + 0x54) = fVar45;
    *(float *)(lVar37 + 0x58) = fVar55 + *(float *)(lVar37 + 0x58);
    if (uVar14 <= *(uint *)(lVar37 + 0x34))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar49 = *(undefined4 *)(lVar18 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
    lVar39 = lVar39 + lVar35 * 0x5c;
    *(float *)(lVar39 + 0x70) = fVar45;
    *(undefined4 *)(lVar39 + 0x6c) = uVar49;
    lVar39 = *unaff_x22;
    if ((lVar39 == 0) || (lVar18 = *(long *)(lVar39 + 0x50), lVar18 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar18 + 0x18) <= uVar12)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar39 = *(long *)(lVar39 + 0x38);
    if (lVar39 == 0) goto LAB_0354fbf4;
    uVar12 = *(uint *)(lVar18 + lVar35 * 0x5c + 0x40);
    if (*(uint *)(lVar39 + 0x18) <= uVar12)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar18 = lVar18 + lVar35 * 0x5c;
    *(undefined4 *)(lVar18 + 0x74) = *(undefined4 *)(lVar39 + (long)(int)uVar12 * 0x178 + 0x128);
    *(undefined4 *)(lVar18 + 0x78) = *(undefined4 *)(lVar18 + 0x4c);
    uVar12 = *unaff_x20 - 1;
LAB_0354e3ec:
    if (uVar10 == uVar12) {
      lVar39 = *unaff_x22;
      if ((lVar39 == 0) || (lVar18 = *(long *)(lVar39 + 0x50), lVar18 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar18 + 0x18) <= uVar2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar35 = lVar18 + lVar38 * 0x5c;
      fVar45 = fVar40 + *(float *)(lVar35 + 0x54);
      *(ulong *)(lVar35 + 0x4c) =
           CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar35 + 0x4c) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar35 + 0x4c));
      *(float *)(lVar35 + 0x54) = fVar45;
      *(float *)(lVar35 + 0x58) = fVar55 + *(float *)(lVar35 + 0x58);
      lVar39 = *(long *)(lVar39 + 0x38);
      if (lVar39 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar39 + 0x18) <= *(uint *)(lVar35 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar49 = *(undefined4 *)(lVar39 + (long)(int)*(uint *)(lVar35 + 0x34) * 0x178 + 0x11c);
      lVar18 = lVar18 + lVar38 * 0x5c;
      *(float *)(lVar18 + 0x70) = fVar45;
      *(undefined4 *)(lVar18 + 0x6c) = uVar49;
      lVar39 = *unaff_x22;
      if ((lVar39 == 0) || (lVar18 = *(long *)(lVar39 + 0x50), lVar18 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar18 + 0x18) <= uVar2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar39 = *(long *)(lVar39 + 0x38);
      if (lVar39 == 0) goto LAB_0354fbf4;
      uVar12 = *(uint *)(lVar18 + lVar38 * 0x5c + 0x40);
      if (*(uint *)(lVar39 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar18 = lVar18 + lVar38 * 0x5c;
      *(undefined4 *)(lVar18 + 0x74) = *(undefined4 *)(lVar39 + (long)(int)uVar12 * 0x178 + 0x128);
      *(undefined4 *)(lVar18 + 0x78) = *(undefined4 *)(lVar18 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar17 = FUN_026b82c4(uVar31,0);
  if (((((uVar17 & 1) == 0) && (1 < uVar31 - 0x2010)) && (uVar31 != 0xad)) && (uVar31 != 0x2d)) {
    if (bVar8) {
      if (((uVar25 != 1) && ((int)uVar10 < (int)(*(uint *)(lVar21 + 0x18) - 1))) &&
         (((int)uVar10 < (int)*unaff_x20 && ((uVar31 == 0x2019 || (uVar31 == 0x27)))))) {
        if (*(uint *)(lVar21 + 0x18) <= uVar25 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar4 = *(undefined2 *)(lVar21 + lVar27 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_026b82c4(uVar4,0);
        if ((uVar17 & 1) != 0) {
          if (*(uint *)(lVar21 + 0x18) <= uVar25)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar4 = *(undefined2 *)(lVar21 + lVar27 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_026b82c4(uVar4,0);
          if ((uVar17 & 1) != 0) goto LAB_0354e610;
        }
      }
    }
    else {
      if (uVar25 != 1) {
LAB_0354f144:
        bVar8 = false;
        goto LAB_0354e618;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_026b81f8(uVar31,0);
      if ((uVar17 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_026b63d8(uVar31,0);
        if (((uVar31 != 0x200b) && ((uVar17 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0354f144;
      }
    }
    if (uVar10 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_026b82c4(uVar31,0);
      iVar11 = (int)fStack0000000000000124;
      if ((uVar17 & 1) == 0) goto LAB_0354e93c;
    }
    else {
LAB_0354e93c:
      iVar11 = uVar25 - 2;
    }
    lVar39 = *unaff_x22;
    if (lVar39 == 0) goto LAB_0354fbf4;
    lVar18 = *(long *)(lVar39 + 0x40);
    if (lVar18 == 0) goto LAB_0354fbf4;
    uVar12 = *(uint *)(lVar39 + 0x24);
    iVar15 = *(int *)(lVar18 + 0x18);
    if (iVar15 < (int)(uVar12 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar39 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar39 = *unaff_x22;
      if (lVar39 == 0) goto LAB_0354fbf4;
    }
    lVar39 = *(long *)(lVar39 + 0x40);
    if (lVar39 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar39 + 0x18) <= uVar12)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar39 = lVar39 + (long)(int)uVar12 * 0x18;
    *(long **)(lVar39 + 0x20) = unaff_x19;
    *(float *)(lVar39 + 0x28) = in_stack_00000168._4_4_;
    *(int *)(lVar39 + 0x2c) = iVar11;
    *(int *)(lVar39 + 0x30) = (iVar11 - (int)in_stack_00000168._4_4_) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar39 = unaff_x19[0x6d];
    if (lVar39 == 0) goto LAB_0354fbf4;
    lVar18 = *(long *)(lVar39 + 0x50);
    *(int *)(lVar39 + 0x24) = *(int *)(lVar39 + 0x24) + 1;
    if (lVar18 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar18 + 0x18) <= uVar2)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar18 = lVar18 + lVar38 * 0x5c;
    bVar8 = false;
    iStack00000000000000d8 = iStack00000000000000d8 + 1;
    *(int *)(lVar18 + 0x30) = *(int *)(lVar18 + 0x30) + 1;
  }
  else {
    if (!bVar8) {
      in_stack_00000168._4_4_ = (float)uVar10;
    }
    if (uVar10 == *unaff_x20 - 1) {
      lVar39 = *unaff_x22;
      if (lVar39 == 0) goto LAB_0354fbf4;
      lVar18 = *(long *)(lVar39 + 0x40);
      if (lVar18 == 0) goto LAB_0354fbf4;
      uVar12 = *(uint *)(lVar39 + 0x24);
      iVar11 = *(int *)(lVar18 + 0x18);
      if (iVar11 < (int)(uVar12 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar39 + 0x40),iVar11 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar39 = *unaff_x22;
        if (lVar39 == 0) goto LAB_0354fbf4;
      }
      lVar39 = *(long *)(lVar39 + 0x40);
      if (lVar39 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar39 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar39 = lVar39 + (long)(int)uVar12 * 0x18;
      *(long **)(lVar39 + 0x20) = unaff_x19;
      *(float *)(lVar39 + 0x28) = in_stack_00000168._4_4_;
      *(uint *)(lVar39 + 0x2c) = uVar10;
      *(uint *)(lVar39 + 0x30) = uVar25 - (int)in_stack_00000168._4_4_;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar39 = unaff_x19[0x6d];
      if (lVar39 == 0) goto LAB_0354fbf4;
      lVar18 = *(long *)(lVar39 + 0x50);
      *(int *)(lVar39 + 0x24) = *(int *)(lVar39 + 0x24) + 1;
      if (lVar18 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar18 + 0x18) <= uVar2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar18 = lVar18 + lVar38 * 0x5c;
      iStack00000000000000d8 = iStack00000000000000d8 + 1;
      *(int *)(lVar18 + 0x30) = *(int *)(lVar18 + 0x30) + 1;
    }
LAB_0354e610:
    bVar8 = true;
  }
LAB_0354e618:
  if ((*unaff_x22 == 0) || (lVar39 = *(long *)(*unaff_x22 + 0x38), lVar39 == 0)) goto LAB_0354fbf4;
  uVar12 = *(uint *)(lVar39 + 0x18);
  if (uVar12 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar39 + lVar36 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar9) {
LAB_0354e660:
      if (uVar12 <= uVar25 - 2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar18 = *unaff_x19;
      uVar49 = *(undefined4 *)(lVar39 + lVar27 + -0x330);
      uVar51 = *(undefined4 *)(lVar39 + lVar27 + -0x2f8);
LAB_0354ebc0:
      pcVar29 = *(code **)(lVar18 + 0x8d8);
LAB_0354ebc8:
      (*pcVar29)(fStack0000000000000070,_bStack0000000000000068,_bStack000000000000006c,uVar49,
                 fStack0000000000000104,0,in_stack_00000080._4_4_,uVar51);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar39 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar39 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar39 = *(long *)puVar7;
      }
LAB_0354ec1c:
      fVar48 = 0.0;
      bVar9 = false;
      fStack0000000000000104 = *(float *)(*(long *)(lVar39 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_0354eb28:
      bVar9 = false;
    }
  }
  else {
    lVar39 = lVar39 + lVar36 * 0x178;
    iVar11 = *(int *)(lVar39 + 0x68);
    *(int *)(lVar39 + 0x16c) = iVar13;
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar11 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar17 = FUN_026b63d8(uVar31,0);
    if ((uVar31 != 0x200b) && ((uVar17 & 1) == 0)) {
      lVar39 = *unaff_x22;
      if ((lVar39 == 0) || (lVar18 = *(long *)(lVar39 + 0x38), lVar18 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar18 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar45 = *(float *)(lVar18 + lVar36 * 0x178 + 0x160);
      if (fVar48 <= fVar45) {
        fVar48 = fVar45;
      }
      if (fStack0000000000000100 <= ABS(fVar61)) {
        fStack0000000000000100 = ABS(fVar61);
      }
      if ((float)iVar11 != fStack000000000000005c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar39 = *unaff_x22;
          if (lVar39 == 0) goto LAB_0354fbf4;
          lVar18 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar18 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar18 + 0x15a8);
      }
      lVar39 = *(long *)(lVar39 + 0x38);
      if (lVar39 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar39 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
      fVar57 = *(float *)(lVar39 + lVar36 * 0x178 + 0x14c);
      fVar45 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar57 = fVar57 + fVar48 * fVar45;
      fStack000000000000005c = (float)iVar11;
      if (fVar57 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar57;
      }
    }
    if (!bVar9) {
      bVar9 = false;
      if ((((uVar31 == 0xd) || ((uVar31 & 0xfffe) == 10)) || ((int)uVar33 < (int)uVar10)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
      if (uVar10 == uVar33) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_026b97f8(uVar31,0);
        if ((uVar17 & 1) != 0) goto LAB_0354eb28;
      }
      if ((*unaff_x22 == 0) || (lVar39 = *(long *)(*unaff_x22 + 0x38), lVar39 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar39 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar39 = lVar39 + lVar36 * 0x178;
      in_stack_00000080._4_4_ = *(float *)(lVar39 + 0x160);
      fStack0000000000000070 = *(float *)(lVar39 + 0x11c);
      bVar9 = fVar48 != 0.0;
      fVar45 = in_stack_00000080._4_4_;
      if (bVar9) {
        fVar45 = fVar48;
      }
      fVar48 = fVar45;
      uVar60 = *(undefined4 *)(lVar39 + 0x168);
      _bStack000000000000006c = 0;
      fVar45 = fVar61;
      if (bVar9) {
        fVar45 = fStack0000000000000100;
      }
      _bStack0000000000000068 = fStack0000000000000104;
      fStack0000000000000100 = fVar45;
    }
    if (*unaff_x20 == 1) {
      if ((*unaff_x22 != 0) && (lVar39 = *(long *)(*unaff_x22 + 0x38), lVar39 != 0)) {
        if (uVar10 < *(uint *)(lVar39 + 0x18)) {
          lVar39 = lVar39 + lVar36 * 0x178;
          lVar18 = *unaff_x19;
          uVar49 = *(undefined4 *)(lVar39 + 0x128);
          uVar51 = *(undefined4 *)(lVar39 + 0x160);
          goto LAB_0354ebc0;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((uVar10 == uVar30) || ((int)uVar33 <= (int)uVar10)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_026b63d8(uVar31,0);
      if ((*unaff_x22 != 0) && (lVar39 = *(long *)(*unaff_x22 + 0x38), lVar39 != 0)) {
        lVar18 = lVar36;
        uVar12 = uVar10;
        if (uVar31 == 0x200b || (uVar17 & 1) != 0) {
          lVar18 = (long)(int)uVar33;
          uVar12 = uVar33;
        }
        if (uVar12 < *(uint *)(lVar39 + 0x18)) {
          lVar39 = lVar39 + lVar18 * 0x178;
          uVar49 = *(undefined4 *)(lVar39 + 0x128);
          uVar51 = *(undefined4 *)(lVar39 + 0x160);
          pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354ebc8;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar39 = *(long *)(*unaff_x22 + 0x38), lVar39 != 0)) {
        uVar12 = *(uint *)(lVar39 + 0x18);
        goto LAB_0354e660;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar10 < (int)(*unaff_x20 - 1)) {
      if ((*unaff_x22 == 0) || (lVar39 = *(long *)(*unaff_x22 + 0x38), lVar39 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar39 + 0x18) <= uVar25)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar17 = FUN_03567ad8(uVar60,*(undefined4 *)(lVar39 + lVar27),0);
      if ((uVar17 & 1) == 0) {
        if ((*unaff_x22 != 0) && (lVar39 = *(long *)(*unaff_x22 + 0x38), lVar39 != 0)) {
          if (uVar10 < *(uint *)(lVar39 + 0x18)) {
            lVar39 = lVar39 + lVar36 * 0x178;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000070,_bStack0000000000000068,_bStack000000000000006c,
                       *(undefined4 *)(lVar39 + 0x128),fStack0000000000000104,0,
                       in_stack_00000080._4_4_,*(undefined4 *)(lVar39 + 0x160));
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar39 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar39 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar39 = *(long *)puVar7;
            }
            goto LAB_0354ec1c;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
    }
    bVar9 = true;
  }
LAB_0354ec38:
  if ((*unaff_x22 == 0) || (lVar39 = *(long *)(*unaff_x22 + 0x38), lVar39 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar39 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (lVar34 == 0) goto LAB_0354fbf4;
  uVar12 = *(uint *)(lVar39 + lVar36 * 0x178 + 400);
  fVar45 = (float)FUN_03776a30(lVar34 + 0x50,0);
  if ((uVar12 >> 6 & 1) == 0) {
    if (bVar5) {
      if ((*unaff_x22 == 0) || (lVar39 = *(long *)(*unaff_x22 + 0x38), lVar39 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar39 + 0x18) <= uVar25 - 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar49 = *(undefined4 *)(lVar39 + lVar27 + -0x330);
      fVar40 = *(float *)(lVar39 + lVar27 + -0x30c);
      pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
      (*pcVar29)(fStack00000000000000a0,fStack000000000000009c,fStack0000000000000098,uVar49,
                 fStack00000000000000a8 * fVar45 + fVar40,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_0354f250:
    bVar5 = false;
  }
  else {
    lVar39 = *unaff_x22;
    if ((lVar39 == 0) || (lVar18 = *(long *)(lVar39 + 0x38), lVar18 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar18 + 0x18) <= uVar10)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(int *)(lVar18 + lVar36 * 0x178 + 0x174) = iVar13;
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar18 + lVar36 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar31 == 0xd) || ((uVar31 & 0xfffe) == 10)) || ((int)uVar33 < (int)uVar10)) ||
       (bVar5 || !bVar1)) {
LAB_0354ed84:
      if (!bVar5) goto LAB_0354f250;
    }
    else {
      if (uVar10 == uVar33) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_026b97f8(uVar31,0);
        if ((uVar17 & 1) != 0) goto LAB_0354ed84;
        lVar39 = *unaff_x22;
        if (lVar39 == 0) goto LAB_0354fbf4;
      }
      lVar39 = *(long *)(lVar39 + 0x38);
      if (lVar39 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar39 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar39 = lVar39 + lVar36 * 0x178;
      in_stack_00000048._4_4_ = *(float *)(lVar39 + 0x60);
      fStack0000000000000040 = *(float *)(lVar39 + 0x14c);
      fStack00000000000000a0 = *(float *)(lVar39 + 0x11c);
      fStack00000000000000a8 = *(float *)(lVar39 + 0x160);
      fStack000000000000009c = fVar45 * fStack00000000000000a8 + fStack0000000000000040;
      fStack0000000000000098 = 0.0;
    }
    uVar12 = *unaff_x20;
    if (uVar12 == 1) {
      if ((*unaff_x22 != 0) && (lVar39 = *(long *)(*unaff_x22 + 0x38), lVar39 != 0)) {
        uVar12 = *(uint *)(lVar39 + 0x18);
LAB_0354ef0c:
        if (uVar10 < uVar12) {
          lVar39 = lVar39 + lVar36 * 0x178;
          lVar18 = *unaff_x19;
          uVar49 = *(undefined4 *)(lVar39 + 0x128);
          fVar40 = *(float *)(lVar39 + 0x14c);
LAB_0354ef24:
          pcVar29 = *(code **)(lVar18 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (uVar10 == uVar30) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_026b63d8(uVar31,0);
      if ((*unaff_x22 != 0) && (lVar39 = *(long *)(*unaff_x22 + 0x38), lVar39 != 0)) {
        uVar12 = *(uint *)(lVar39 + 0x18);
        if (uVar31 == 0x200b || (uVar17 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
        lVar18 = lVar36;
        if (uVar10 < uVar12) {
LAB_0354f1f8:
          lVar39 = lVar39 + lVar18 * 0x178;
          fVar40 = *(float *)(lVar39 + 0x14c);
          uVar49 = *(undefined4 *)(lVar39 + 0x128);
          pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar10 < (int)uVar12) {
      lVar39 = *unaff_x22;
      if ((lVar39 != 0) && (lVar18 = *(long *)(lVar39 + 0x38), lVar18 != 0)) {
        if (uVar25 < *(uint *)(lVar18 + 0x18)) {
          if (*(float *)(lVar18 + lVar27 + -0x108) == in_stack_00000048._4_4_) {
            fVar57 = *(float *)(lVar18 + lVar27 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar17 = FUN_03567bac(fVar40 + fVar57,fStack0000000000000040,0);
            if ((uVar17 & 1) != 0) {
              uVar12 = *unaff_x20;
              goto LAB_0354f010;
            }
            lVar39 = *unaff_x22;
            if (lVar39 == 0) goto LAB_0354fbf4;
          }
          lVar39 = *(long *)(lVar39 + 0x38);
          if (lVar39 != 0) {
            uVar12 = *(uint *)(lVar39 + 0x18);
            if ((int)uVar10 <= (int)uVar33) goto LAB_0354f1f0;
LAB_0354f1e0:
            lVar18 = (long)(int)uVar33;
            if (uVar33 < uVar12) goto LAB_0354f1f8;
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          goto LAB_0354fbf4;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
LAB_0354f010:
    if ((int)uVar10 < (int)uVar12) {
      iVar11 = FUN_036d3364(lVar34,0);
      if (*(uint *)(lVar21 + 0x18) <= uVar25)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar39 = *(long *)(lVar21 + lVar27 + -0x130);
      if (lVar39 == 0) goto LAB_0354fbf4;
      iVar15 = FUN_036d3364(lVar39,0);
      if (iVar11 != iVar15) {
        if ((*unaff_x22 != 0) && (lVar39 = *(long *)(*unaff_x22 + 0x38), lVar39 != 0)) {
          uVar12 = *(uint *)(lVar39 + 0x18);
          goto LAB_0354ef0c;
        }
        goto LAB_0354fbf4;
      }
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar39 = *(long *)(*unaff_x22 + 0x38), lVar39 != 0)) {
        if (uVar25 - 2 < *(uint *)(lVar39 + 0x18)) {
          lVar18 = *unaff_x19;
          uVar49 = *(undefined4 *)(lVar39 + lVar27 + -0x330);
          fVar40 = *(float *)(lVar39 + lVar27 + -0x30c);
          goto LAB_0354ef24;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    bVar5 = true;
  }
  if ((*unaff_x22 == 0) || (lVar39 = *(long *)(*unaff_x22 + 0x38), lVar39 == 0)) goto LAB_0354fbf4;
  uVar12 = (uint)*(undefined8 *)(lVar39 + 0x18);
  if (uVar12 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar39 + lVar36 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar6) {
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                 fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
    }
LAB_0354f604:
    bVar6 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar39 + lVar36 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar6) {
LAB_0354f400:
      if (uVar12 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar39 = lVar39 + lVar36 * 0x178;
      fVar45 = *(float *)(lVar39 + 0x128);
      fVar43 = *(float *)(lVar39 + 0x188);
      uVar16 = *(undefined8 *)(lVar39 + 0x17c);
      fVar42 = *(float *)(lVar39 + 0x184);
      uVar20 = *(undefined8 *)(lVar39 + 0x184);
      fVar58 = *(float *)(lVar39 + 0x18c);
      fVar40 = *(float *)(lVar39 + 0x11c);
      fVar57 = *(float *)(lVar39 + 0x148);
      fVar41 = *(float *)(lVar39 + 0x150);
      in_stack_00000188 = uVar16;
      fStack0000000000000190 = fVar42;
      fStack0000000000000194 = fVar43;
      in_stack_00000198 = fVar58;
      in_stack_000001a0 = in_stack_000017c0;
      in_stack_000001a8 = in_stack_000017c8;
      in_stack_000001b0 = in_stack_000017d0;
      uVar17 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
      lVar39 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar17 & 1) == 0) {
        if (*(int *)(lVar39 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar39);
        }
        fVar45 = fVar45 + (float)in_stack_000017c8;
        fVar40 = fVar40 - (float)((ulong)in_stack_000017c0 >> 0x20);
        fVar57 = fVar57 + (float)((ulong)in_stack_000017c8 >> 0x20);
        if (fVar40 <= fStack00000000000000e0) {
          fStack00000000000000e0 = fVar40;
        }
        if (fVar41 - in_stack_000017d0 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar41 - in_stack_000017d0;
        }
        if (fStack00000000000000d0 <= fVar45) {
          fStack00000000000000d0 = fVar45;
        }
        if (fStack00000000000000d4 <= fVar57) {
          fStack00000000000000d4 = fVar57;
        }
      }
      else {
        if (*(int *)(lVar39 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar39);
        }
        fVar40 = (fVar40 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
        if (fVar41 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar41;
        }
        if (fStack00000000000000d4 <= fVar57) {
          fStack00000000000000d4 = fVar57;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,fVar40,
                   fStack00000000000000d4,uStack00000000000000c0);
        fStack00000000000000e4 = fVar41 - fVar58;
        fStack00000000000000d0 = fVar45 + fVar42;
        uStack00000000000000c0 = 0;
        fStack00000000000000d4 = fVar57 + fVar43;
        fStack00000000000000e0 = fVar40;
        in_stack_000017c0 = uVar16;
        in_stack_000017c8 = uVar20;
        in_stack_000017d0 = fVar58;
      }
      if (((*unaff_x20 == 1) || (uVar10 == uVar30)) || (((int)uVar33 <= (int)uVar10 || (!bVar1)))) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
        goto LAB_0354f604;
      }
      bVar6 = true;
    }
    else {
      if ((((uVar31 != 0xd) && ((uVar31 & 0xfffe) != 10)) && ((int)uVar10 <= (int)uVar33)) &&
         (bVar1)) {
        if (uVar10 == uVar33) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_026b97f8(uVar31,0);
          if ((uVar17 & 1) != 0) goto LAB_0354f374;
        }
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar18 = *(long *)puVar7;
        }
        if ((*unaff_x22 != 0) && (lVar39 = *(long *)(*unaff_x22 + 0x38), lVar39 != 0)) {
          uVar12 = (uint)*(undefined8 *)(lVar39 + 0x18);
          if (uVar10 < uVar12) {
            lVar18 = *(long *)(lVar18 + 0xb8);
            lVar34 = lVar39 + lVar36 * 0x178;
            in_stack_000017c8 = *(undefined8 *)(lVar34 + 0x184);
            in_stack_000017c0 = *(undefined8 *)(lVar34 + 0x17c);
            fStack00000000000000e0 = *(float *)(lVar18 + 0x1598);
            fStack00000000000000e4 = *(float *)(lVar18 + 0x159c);
            in_stack_000017d0 = *(float *)(lVar34 + 0x18c);
            fStack00000000000000d0 = *(float *)(lVar18 + 0x15a0);
            fStack00000000000000d4 = *(float *)(lVar18 + 0x15a4);
            uStack00000000000000c0 = 0;
            goto LAB_0354f400;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
LAB_0354f374:
      bVar6 = false;
    }
  }
  uVar10 = *unaff_x20;
  fStack0000000000000124 = (float)((int)fStack0000000000000124 + 1);
  lVar27 = lVar27 + 0x178;
  bVar1 = (int)uVar10 <= (int)uVar25;
  uVar12 = uVar2;
  uVar25 = uVar25 + 1;
  if (bVar1) goto LAB_0354f7d0;
  goto LAB_0354d7c0;
LAB_0354f7d0:
  lVar21 = *unaff_x22;
  if (lVar21 != 0) {
    iVar13 = uVar2 + 1;
    plVar22 = (long *)OVRPlugin_Media_TypeInfo;
LAB_0354f7f4:
    *(uint *)(lVar21 + 0x18) = uVar10;
    lVar27 = unaff_x19[0xd4];
    *(int *)(lVar21 + 0x2c) = iVar13;
    if ((int)uVar10 < 1 || iStack00000000000000d8 == 0) {
      iStack00000000000000d8 = 1;
    }
    *(int *)(lVar21 + 0x1c) = (int)lVar27;
    *(int *)(lVar21 + 0x24) = iStack00000000000000d8;
    *(int *)(lVar21 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar17 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar17 & 1) == 0)) {
LAB_0354d0cc:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar21 = unaff_x19[0xdb];
    if (lVar21 != 0) {
      (**(code **)(lVar21 + 0x18))
                (*(undefined8 *)(lVar21 + 0x40),*unaff_x22,*(undefined8 *)(lVar21 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x60), lVar21 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(*plVar22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar21 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      FUN_03596b20(lVar21 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar21 = *(long *)(unaff_x19[0x6d] + 0x60), lVar21 != 0)) {
        if (*(int *)(lVar21 + 0x18) == 0) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar21 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar21 = *(long *)(unaff_x19[0x6d] + 0x60), lVar21 != 0)) {
            if (*(int *)(lVar21 + 0x18) == 0)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar21 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar21 = *(long *)(unaff_x19[0x6d] + 0x60), lVar21 != 0)) {
                if (*(int *)(lVar21 + 0x18) == 0)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar21 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar21 = *(long *)(unaff_x19[0x6d] + 0x60), lVar21 != 0)) {
                    if (*(int *)(lVar21 + 0x18) == 0)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar21 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        lVar21 = *unaff_x22;
                        if (lVar21 != 0) {
                          lVar39 = 0;
                          lVar27 = 0;
                          do {
                            uVar17 = lVar27 + 1;
                            if ((long)*(int *)(lVar21 + 0x34) <= (long)uVar17) goto LAB_0354d0cc;
                            lVar21 = *(long *)(lVar21 + 0x60);
                            if (lVar21 == 0) break;
                            if (*(int *)(*plVar22 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            if (*(uint *)(lVar21 + 0x18) <= uVar17)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            FUN_03596a20(lVar21 + lVar39 + 0x70,0);
                            lVar21 = unaff_x19[0xe1];
                            if (lVar21 == 0) break;
                            if (*(uint *)(lVar21 + 0x18) <= uVar17)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            uVar20 = *(undefined8 *)(lVar21 + lVar27 * 8 + 0x28);
                            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar50 = FUN_036d35a8(uVar20,0,0);
                            if ((uVar50 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                if ((*unaff_x22 == 0) ||
                                   (lVar21 = *(long *)(*unaff_x22 + 0x60), lVar21 == 0)) break;
                                if (*(int *)(*plVar22 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                if (*(uint *)(lVar21 + 0x18) <= uVar17)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                FUN_03596b20(lVar21 + lVar39 + 0x70,1,0);
                              }
                              lVar21 = unaff_x19[0xe1];
                              if (lVar21 == 0) break;
                              if (*(uint *)(lVar21 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar21 = *(long *)(lVar21 + lVar27 * 8 + 0x28);
                              if (lVar21 == 0) break;
                              lVar21 = FUN_0359d5ac(lVar21,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar18 = *(long *)(*unaff_x22 + 0x60), lVar18 == 0)) break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar21 == 0) break;
                              FUN_036a460c(lVar21,*(undefined8 *)(lVar18 + lVar39 + 0x80),0);
                              lVar21 = unaff_x19[0xe1];
                              if (lVar21 == 0) break;
                              if (*(uint *)(lVar21 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar21 = *(long *)(lVar21 + lVar27 * 8 + 0x28);
                              if (lVar21 == 0) break;
                              lVar21 = FUN_0359d5ac(lVar21,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar18 = *(long *)(*unaff_x22 + 0x60), lVar18 == 0)) break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar21 == 0) break;
                              FUN_036a4810(lVar21,*(undefined8 *)(lVar18 + lVar39 + 0x98),0);
                              lVar21 = unaff_x19[0xe1];
                              if (lVar21 == 0) break;
                              if (*(uint *)(lVar21 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar21 = *(long *)(lVar21 + lVar27 * 8 + 0x28);
                              if (lVar21 == 0) break;
                              lVar21 = FUN_0359d5ac(lVar21,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar18 = *(long *)(*unaff_x22 + 0x60), lVar18 == 0)) break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar21 == 0) break;
                              FUN_036a48bc(lVar21,*(undefined8 *)(lVar18 + lVar39 + 0xa0),0);
                              lVar21 = unaff_x19[0xe1];
                              if (lVar21 == 0) break;
                              if (*(uint *)(lVar21 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar21 = *(long *)(lVar21 + lVar27 * 8 + 0x28);
                              if (lVar21 == 0) break;
                              lVar21 = FUN_0359d5ac(lVar21,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar18 = *(long *)(*unaff_x22 + 0x60), lVar18 == 0)) break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar21 == 0) break;
                              FUN_036a4e24(lVar21,*(undefined8 *)(lVar18 + lVar39 + 0xa8),0);
                              lVar21 = unaff_x19[0xe1];
                              if (lVar21 == 0) break;
                              if (*(uint *)(lVar21 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar21 = *(long *)(lVar21 + lVar27 * 8 + 0x28);
                              if ((lVar21 == 0) || (lVar21 = FUN_0359d5ac(lVar21,0), lVar21 == 0))
                              break;
                              FUN_036aa280(lVar21,0);
                            }
                            lVar21 = *unaff_x22;
                            lVar27 = lVar27 + 1;
                            lVar39 = lVar39 + 0x50;
                          } while (lVar21 != 0);
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


