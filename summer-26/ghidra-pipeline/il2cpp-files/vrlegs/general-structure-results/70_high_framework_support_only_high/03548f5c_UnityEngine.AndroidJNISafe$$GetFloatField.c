/*
FUNCTION_NAME: UnityEngine.AndroidJNISafe$$GetFloatField
ENTRY_POINT: 03548f5c
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


void UnityEngine_AndroidJNISafe__GetFloatField(long param_1)

{
  bool bVar1;
  uint *puVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  bool bVar10;
  undefined *puVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  undefined1 uVar26;
  char cVar27;
  uint uVar28;
  undefined4 *puVar29;
  uint uVar30;
  long lVar31;
  float *pfVar32;
  code *pcVar33;
  uint uVar34;
  int iVar35;
  float *pfVar36;
  uint uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long *unaff_x19;
  long *unaff_x20;
  uint uVar42;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  int unaff_w25;
  long *plVar43;
  long *plVar44;
  long lVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined4 uVar60;
  long lVar61;
  float fVar62;
  float fVar63;
  undefined8 uVar64;
  ulong uVar65;
  float fVar66;
  float fVar67;
  undefined4 uVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  long unaff_d8;
  float unaff_s9;
  float fVar72;
  float unaff_s10;
  float fVar73;
  float fVar74;
  float unaff_s11;
  float fVar75;
  float unaff_s13;
  float fVar76;
  float fVar77;
  float unaff_s14;
  undefined4 uVar78;
  float unaff_s15;
  float fVar79;
  float fVar80;
  float fVar81;
  int iStack000000000000002c;
  uint uStack0000000000000030;
  float fStack000000000000004c;
  int iStack000000000000005c;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  float fStack0000000000000084;
  float in_stack_00000098;
  float fStack000000000000009c;
  long *in_stack_000000b8;
  undefined4 in_stack_000000c0;
  float fStack00000000000000c4;
  undefined8 in_stack_000000c8;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  undefined8 uStack00000000000000f0;
  float fStack00000000000000fc;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float fStack0000000000000120;
  float fStack0000000000000124;
  float fStack0000000000000134;
  float fStack000000000000016c;
  long *in_stack_00000170;
  float in_stack_00000178;
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
  uint uVar82;
  undefined8 in_stack_000017c0;
  undefined8 in_stack_000017c8;
  float in_stack_000017d0;
  undefined8 in_stack_000017d8;
  char in_stack_000017e4;
  float fVar83;
  uint in_stack_000017ec;
  
  lVar20 = unaff_x19[0x6d];
  uVar64 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x15a8);
  unaff_x19[0x95] = 0;
  unaff_x19[0x9a] = unaff_d8;
  *(undefined1 *)((long)unaff_x19 + 0x2c4) = 0;
  lVar61 = NEON_rev64(uVar64,4);
  *(undefined4 *)((long)unaff_x19 + 0x2e4) = 0xffffffff;
  unaff_x19[0x99] = lVar61;
  *(undefined4 *)(unaff_x19 + 0x96) = 0;
  if ((lVar20 != 0) && (*(long *)(lVar20 + 0x58) != 0)) {
    uVar30 = (int)unaff_x19[0x67] - 1;
    uVar82 = *(int *)(*(long *)(lVar20 + 0x58) + 0x18) - 1;
    if ((int)uVar30 <= (int)uVar82) {
      uVar82 = uVar30;
    }
    uVar4 = 0;
    if (-1 < (int)uVar30) {
      uVar4 = uVar82;
    }
    FUN_035a02f4(lVar20,0);
    fVar46 = *(float *)(unaff_x19 + 0x68);
    *(undefined4 *)(unaff_x19 + 0x6c) = 0xbf800000;
    fVar62 = *(float *)((long)unaff_x19 + 0x344);
    unaff_x19[0x6a] = 0;
    lVar20 = *unaff_x20;
    fVar47 = *(float *)((long)unaff_x19 + 0x34c);
    fVar79 = *(float *)(unaff_x19 + 0x6b);
    fVar69 = *(float *)((long)unaff_x19 + 0x35c);
    if (*(int *)(lVar20 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar20 = *unaff_x20;
    }
    *(undefined8 *)(unaff_x22 + 0x230) = *(undefined8 *)(*(long *)(lVar20 + 0xb8) + 0x1598);
    *(undefined8 *)(unaff_x22 + 0x238) = *(undefined8 *)(*(long *)(lVar20 + 0xb8) + 0x15a0);
    if (unaff_x19[0x6d] != 0) {
      FUN_035a0164(unaff_x19[0x6d],0);
      *(undefined4 *)((long)unaff_x19 + 0x4bc) = 0;
      *(undefined4 *)((long)unaff_x19 + 0x4c4) = 0;
      *(undefined8 *)(unaff_x22 + 0x208) = 0;
      fVar83 = 0.0;
      *(undefined1 *)(unaff_x24 + 0xf34) = 0;
      *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
      *(undefined1 *)((long)unaff_x19 + 0x2da) = 0;
      FUN_0359f73c(&stack0x000017d8,0xffffffff,0,0);
      FUN_0358c4f0();
      FUN_0358c4f0();
      FUN_0358c4f0();
      FUN_0358c4f0();
      FUN_0358c4f0();
      FUN_0209aa1c(*(long *)(*unaff_x20 + 0xb8) + 0x11f0,
                   *(undefined8 *)OVRPlugin_OVRP_0_1_3_TypeInfo);
      fVar59 = DAT_00d38d28;
      fVar63 = DAT_00d38938;
      uVar82 = 0;
      lVar20 = unaff_x19[0x8f];
      if (lVar20 != 0) {
        puVar2 = (uint *)(unaff_x22 + 0x1e8);
        plVar44 = unaff_x19 + 0xc9;
        uVar30 = unaff_w23 - 1;
        lVar61 = (long)unaff_x19 + 0x434;
        fVar67 = unaff_s9 - (unaff_s10 - unaff_s11);
        fStack000000000000016c = 0.0;
        if (fVar79 <= 0.0) {
          fVar79 = 0.0;
        }
        if (fVar69 <= 0.0) {
          fVar69 = 0.0;
        }
        fVar48 = (unaff_s14 / (float)unaff_w25) * unaff_s15 * unaff_s13;
        uVar24 = (ulong)(uint)fVar48;
        fVar79 = fVar79 + DAT_00d3879c;
        uVar65 = (ulong)(uint)fVar79;
        fVar66 = fVar69 + DAT_00d3879c;
        fVar49 = in_stack_00000178 * DAT_00d38d28 * unaff_s13;
        bVar10 = true;
        iStack000000000000002c = 0;
        bVar13 = false;
        iVar35 = 0;
        plVar3 = unaff_x19 + 0x6d;
        bVar9 = 1;
        fStack00000000000000fc = fVar79;
LAB_03549220:
        fVar70 = (float)uVar24;
        if ((int)*(uint *)(lVar20 + 0x18) <= (int)uVar82) {
LAB_0354cf48:
          fVar79 = (float)uVar65;
          if (((char)unaff_x19[0x47] != '\0') &&
             (fVar79 = DAT_00d389f8,
             DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
            fVar79 = *(float *)((long)unaff_x19 + 0x1e4);
            fVar69 = *(float *)((long)unaff_x19 + 0x254);
            if ((fVar79 < fVar69) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
              if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
                *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
              }
              fVar46 = (*(float *)((long)unaff_x19 + 0x23c) - fVar79) * 0.5;
              if (fVar46 <= DAT_00d38b84) {
                fVar46 = DAT_00d38b84;
              }
              *(float *)(unaff_x19 + 0x48) = fVar79;
              fVar47 = (fVar79 + fVar46) * 20.0 + 0.5;
              fVar46 = DAT_00d38e60;
              if (fVar47 != INFINITY) {
                fVar46 = (float)(int)fVar47 / 20.0;
              }
              if (fVar69 <= fVar46) {
                fVar46 = fVar69;
              }
LAB_0354d004:
              *(float *)((long)unaff_x19 + 0x1e4) = fVar46;
              return;
            }
          }
          *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
          if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
            uVar64 = FUN_0276793c((long)unaff_x19 + 0x244,0);
            uVar21 = FUN_0277fa90((long)unaff_x19 + 0x1e4,0);
            uVar64 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar64,
                                  *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar21,0);
            if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
            }
            FUN_0367a6ec(uVar64,0);
          }
          puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          if ((*puVar2 == 0) || ((*puVar2 == 1 && (in_stack_000017ec == 3)))) {
            (**(code **)(*unaff_x19 + 0x928))();
            goto LAB_0354d0cc;
          }
          lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar20 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar20 = *(long *)puVar11;
          }
          plVar44 = (long *)OVRPlugin_Media_TypeInfo;
          lVar20 = **(long **)(lVar20 + 0xb8);
          if (lVar20 == 0) goto LAB_0354fbf4;
          if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0xd1))
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          iVar35 = *(int *)(lVar20 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
          if ((*plVar3 == 0) || (lVar20 = *(long *)(*plVar3 + 0x60), lVar20 == 0))
          goto LAB_0354fbf4;
          if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (*(int *)(lVar20 + 0x18) == 0)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          FUN_035968e8(lVar20 + 0x20,0,0);
          if (DAT_0411f172 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbded8);
            DAT_0411f172 = '\x01';
          }
          iVar15 = (int)unaff_x19[0x4e];
          fStack00000000000000fc = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
          uStack00000000000000f0 =
               *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
          lVar20 = unaff_x19[0xeb];
          in_stack_000000b8 = (long *)uStack00000000000000f0;
          fStack00000000000000c4 = fStack00000000000000fc;
          if (iVar15 < 0x401) {
            if (iVar15 == 0x100) {
              if (lVar20 == 0) goto LAB_0354fbf4;
              if (*(uint *)(lVar20 + 0x18) < 2)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              uVar64 = *(undefined8 *)(lVar20 + 0x30);
              if ((int)unaff_x19[0x5c] == 5) {
                if ((*plVar3 == 0) || (lVar61 = *(long *)(*plVar3 + 0x58), lVar61 == 0))
                goto LAB_0354fbf4;
                if (*(uint *)(lVar61 + 0x18) <= uVar4)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                fVar47 = *(float *)(lVar61 + (long)(int)uVar4 * 0x14 + 0x28);
              }
              else {
                fVar47 = *(float *)(unaff_x19 + 0x97);
              }
              fStack00000000000000c4 = fVar46 + 0.0 + *(float *)(lVar20 + 0x2c);
              fVar79 = (0.0 - fVar47) - fVar62;
            }
            else if (iVar15 == 0x200) {
              if (lVar20 == 0) goto LAB_0354fbf4;
              if ((*(int *)(lVar20 + 0x18) == 1) || (*(int *)(lVar20 + 0x18) == 0))
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              fStack00000000000000c4 = (*(float *)(lVar20 + 0x20) + *(float *)(lVar20 + 0x2c)) * 0.5
              ;
              uVar64 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar20 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20)) * 0.5,
                                ((float)*(undefined8 *)(lVar20 + 0x24) +
                                (float)*(undefined8 *)(lVar20 + 0x30)) * 0.5);
              if ((int)unaff_x19[0x5c] == 5) {
                if ((*plVar3 == 0) || (lVar20 = *(long *)(*plVar3 + 0x58), lVar20 == 0))
                goto LAB_0354fbf4;
                if (*(uint *)(lVar20 + 0x18) <= uVar4)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                lVar20 = lVar20 + (long)(int)uVar4 * 0x14;
                fStack00000000000000c4 = fVar46 + 0.0 + fStack00000000000000c4;
                fVar79 = ((fVar62 + *(float *)(lVar20 + 0x28) + *(float *)(lVar20 + 0x30)) - fVar47)
                         * -0.5 + 0.0;
              }
              else {
                fStack00000000000000c4 = fVar46 + 0.0 + fStack00000000000000c4;
                fVar79 = ((fVar62 + *(float *)(unaff_x19 + 0x97) + fVar83) - fVar47) * -0.5 + 0.0;
              }
            }
            else {
              if (iVar15 != 0x400) goto LAB_0354d620;
              if (lVar20 == 0) goto LAB_0354fbf4;
              if (*(int *)(lVar20 + 0x18) == 0)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              uVar64 = *(undefined8 *)(lVar20 + 0x24);
              if ((int)unaff_x19[0x5c] == 5) {
                if ((*plVar3 == 0) || (lVar61 = *(long *)(*plVar3 + 0x58), lVar61 == 0))
                goto LAB_0354fbf4;
                if (*(uint *)(lVar61 + 0x18) <= uVar4)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                fVar83 = *(float *)(lVar61 + (long)(int)uVar4 * 0x14 + 0x30);
              }
              fStack00000000000000c4 = fVar46 + 0.0 + *(float *)(lVar20 + 0x20);
              fVar79 = fVar47 + (0.0 - fVar83);
            }
LAB_0354d610:
            in_stack_000000b8 =
                 (long *)CONCAT44((float)((ulong)uVar64 >> 0x20) + 0.0,(float)uVar64 + fVar79);
          }
          else if (iVar15 == 0x800) {
            if (lVar20 == 0) goto LAB_0354fbf4;
            if ((*(int *)(lVar20 + 0x18) == 1) || (*(int *)(lVar20 + 0x18) == 0))
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            fVar79 = fVar46 + 0.0 + (*(float *)(lVar20 + 0x20) + *(float *)(lVar20 + 0x2c)) * 0.5;
            in_stack_000000b8 =
                 (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar20 + 0x24) >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20)) * 0.5 +
                                  0.0,((float)*(undefined8 *)(lVar20 + 0x24) +
                                      (float)*(undefined8 *)(lVar20 + 0x30)) * 0.5 + 0.0);
            fStack00000000000000c4 = fVar79;
          }
          else {
            if (iVar15 == 0x1000) {
              if (lVar20 != 0) {
                if ((*(int *)(lVar20 + 0x18) != 1) && (*(int *)(lVar20 + 0x18) != 0)) {
                  uVar64 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar20 + 0x24) >> 0x20) +
                                    (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20)) * 0.5,
                                    ((float)*(undefined8 *)(lVar20 + 0x24) +
                                    (float)*(undefined8 *)(lVar20 + 0x30)) * 0.5);
                  fStack00000000000000c4 =
                       fVar46 + 0.0 + (*(float *)(lVar20 + 0x20) + *(float *)(lVar20 + 0x2c)) * 0.5;
                  fVar79 = 0.0 - ((fVar62 + *(float *)(unaff_x19 + 0x9d) +
                                  *(float *)(unaff_x19 + 0x9c)) - fVar47) * 0.5;
                  goto LAB_0354d610;
                }
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              }
              goto LAB_0354fbf4;
            }
            if (iVar15 == 0x2000) {
              if (lVar20 == 0) goto LAB_0354fbf4;
              if ((*(int *)(lVar20 + 0x18) == 1) || (*(int *)(lVar20 + 0x18) == 0))
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              fVar79 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fVar62) - fVar47) * 0.5;
              in_stack_000000b8 =
                   (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar20 + 0x24) >> 0x20) +
                                    (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20)) * 0.5 +
                                    0.0,((float)*(undefined8 *)(lVar20 + 0x24) +
                                        (float)*(undefined8 *)(lVar20 + 0x30)) * 0.5 + fVar79);
              fStack00000000000000c4 =
                   fVar46 + 0.0 + (*(float *)(lVar20 + 0x20) + *(float *)(lVar20 + 0x2c)) * 0.5;
            }
          }
LAB_0354d620:
          lVar20 = FUN_03559490();
          if (lVar20 != 0) {
            FUN_036df824(lVar20,0);
            *(float *)((long)unaff_x19 + 0x6e4) = fVar79;
            uVar78 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
            FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
            if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
            }
            if (DAT_0412df1c == '\0') {
              FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
              DAT_0412df1c = '\x01';
            }
            puVar11 = OVRPlugin_Mesh_TypeInfo;
            lVar20 = *(long *)OVRPlugin_Mesh_TypeInfo;
            if (*(int *)(lVar20 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar20 = *(long *)puVar11;
            }
            puVar29 = *(undefined4 **)(lVar20 + 0xb8);
            FUN_035683a4(*puVar29,puVar29[1],puVar29[2],puVar29[3],&stack0x000017c0,0x4000ffff,0);
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            lVar20 = *plVar3;
            if (lVar20 != 0) {
              uVar82 = *puVar2;
              if ((int)uVar82 < 1) {
                iVar15 = 0;
                iVar35 = 0;
                goto LAB_0354f7f4;
              }
              lVar20 = *(long *)(lVar20 + 0x38);
              if (lVar20 != 0) {
                bVar13 = false;
                bVar12 = false;
                bVar10 = false;
                fStack0000000000000124 = 0.0;
                bVar8 = false;
                iVar15 = 0;
                uStack0000000000000030 = 0;
                fStack000000000000016c = 0.0;
                iStack000000000000005c = 0;
                lVar61 = 0x2e0;
                fVar59 = 0.0;
                fVar46 = 0.0;
                fStack00000000000000d0 = fStack00000000000000e0;
                fStack00000000000000d4 = fStack00000000000000e4;
                fStack0000000000000068 = fStack00000000000000e4;
                fStack0000000000000104 =
                     *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
                fStack000000000000009c = fStack00000000000000e4;
                fStack0000000000000100 = 0.0;
                fStack0000000000000084 = 0.0;
                fStack000000000000004c = 0.0;
                fVar69 = 0.0;
                fVar63 = 0.0;
                uStack000000000000006c = in_stack_000000c0;
                in_stack_00000098 = (float)in_stack_000000c0;
                uVar30 = 0;
                uVar14 = 1;
                fVar47 = fStack00000000000000e0;
                fVar62 = fStack00000000000000e0;
                goto LAB_0354d7c0;
              }
            }
          }
          goto LAB_0354fbf4;
        }
        if (*(uint *)(lVar20 + 0x18) <= uVar82)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar14 = *(uint *)(lVar20 + (long)(int)uVar82 * 0xc + 0x20);
        if (uVar14 == 0) goto LAB_0354cf48;
        if (5 < iVar35) {
          uVar64 = FUN_0276793c(&stack0x000017ec,0);
          uVar21 = FUN_0276793c(&stack0x000017b8,0);
          uVar64 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar64,
                                *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar21,0);
          if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
          }
          FUN_0367ae18(uVar64,0);
          in_stack_000017d8 = CONCAT44(3,*puVar2);
        }
        if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (uVar14 != 0x3c)) {
          if ((*plVar3 == 0) || (lVar20 = *(long *)(*plVar3 + 0x38), lVar20 == 0))
          goto LAB_0354fbf4;
          if (*(uint *)(lVar20 + 0x18) <= *puVar2)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          lVar20 = lVar20 + (long)(int)*puVar2 * 0x178;
          *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar20 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar20 + 0x58);
          unaff_x19[0x20] = *(long *)(lVar20 + 0x38);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x21);
LAB_03549378:
          if ((unaff_x19[0x6d] == 0) || (lVar20 = *(long *)(unaff_x19[0x6d] + 0x38), lVar20 == 0))
          goto LAB_0354fbf4;
          uVar16 = *puVar2;
          if (*(uint *)(lVar20 + 0x18) <= uVar16)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          lVar45 = (long)(int)uVar16;
          cVar27 = *(char *)(lVar20 + lVar45 * 0x178 + 0x5c);
          *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
          lVar31 = unaff_x19[0x24];
          if ((uint)in_stack_000017d8 == uVar16) {
            uVar14 = (uint)((ulong)in_stack_000017d8 >> 0x20);
            *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
            if (uVar14 == 0x2026) {
              *(long *)(lVar20 + lVar45 * 0x178 + 0x30) = unaff_x19[0xca];
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if ((unaff_x19[0x6d] == 0) ||
                 (lVar20 = *(long *)(unaff_x19[0x6d] + 0x38), lVar20 == 0)) goto LAB_0354fbf4;
              if (*(uint *)(lVar20 + 0x18) <= *puVar2)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar20 = lVar20 + (long)(int)*puVar2 * 0x178;
              *(undefined4 *)(lVar20 + 0x2c) = 0;
              *(long *)(lVar20 + 0x38) = unaff_x19[0xcb];
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if ((unaff_x19[0x6d] == 0) ||
                 (lVar20 = *(long *)(unaff_x19[0x6d] + 0x38), lVar20 == 0)) goto LAB_0354fbf4;
              if (*(uint *)(lVar20 + 0x18) <= *puVar2)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              *(long *)(lVar20 + (long)(int)*puVar2 * 0x178 + 0x50) = unaff_x19[0xcc];
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if ((*plVar3 == 0) || (lVar20 = *(long *)(*plVar3 + 0x38), lVar20 == 0))
              goto LAB_0354fbf4;
              uVar16 = *puVar2;
              if (*(uint *)(lVar20 + 0x18) <= uVar16)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              bVar8 = true;
              *(int *)(lVar20 + (long)(int)uVar16 * 0x178 + 0x58) = (int)unaff_x19[0xcd];
              *(undefined1 *)(unaff_x19 + 0x5f) = 1;
              in_stack_000017d8 = CONCAT44(3,uVar16 + 1);
            }
            else if (uVar14 == 3) {
              if ((*unaff_x21 == 0) || (lVar23 = FUN_03568ac0(*unaff_x21,0), lVar23 == 0))
              goto LAB_0354fbf4;
              FUN_0219b634(lVar23,&stack0x00000c28,&stack0x000008b0,
                           *(undefined8 *)OVRPlugin_Hand_TypeInfo);
              if (*(uint *)(lVar20 + 0x18) <= uVar16)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              *(ulong *)(lVar20 + lVar45 * 0x178 + 0x30) =
                   CONCAT44(in_stack_000008b4,in_stack_000008b0);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              uVar16 = *(uint *)((long)unaff_x19 + 0x494);
              bVar8 = true;
              *(undefined1 *)(unaff_x19 + 0x5f) = 1;
            }
            else {
              bVar8 = true;
            }
          }
          else {
            bVar8 = false;
          }
          if (((int)uVar16 < *(int *)((long)unaff_x19 + 0x324)) && (uVar14 != 3)) {
            if ((*plVar3 == 0) || (lVar20 = *(long *)(*plVar3 + 0x38), lVar20 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar20 + 0x18) <= uVar16)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar20 = lVar20 + (long)(int)uVar16 * 0x178;
            *(undefined1 *)(lVar20 + 0x194) = 0;
            *(undefined2 *)(lVar20 + 0x20) = 0x200b;
            *(undefined4 *)(lVar20 + 100) = 0;
            *puVar2 = uVar16 + 1;
          }
          else {
            iVar15 = *(int *)((long)unaff_x19 + 0x644);
            if (iVar15 == 0) {
              uVar16 = *(uint *)((long)unaff_x19 + 0x25c);
              if ((uVar16 >> 4 & 1) == 0) {
                if ((uVar16 >> 3 & 1) == 0) {
                  fVar58 = 1.0;
                  if ((uVar16 >> 5 & 1) != 0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar22 = FUN_026b812c(uVar14,0);
                    if ((uVar22 & 1) != 0) {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar14 = FUN_026b8410(uVar14,0);
                      uVar14 = uVar14 & 0xffff;
                      fVar58 = fVar63;
                    }
                  }
                }
                else {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar22 = FUN_026b8070(uVar14,0);
                  fVar58 = 1.0;
                  if ((uVar22 & 1) != 0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar14 = FUN_026b8594(uVar14,0);
                    goto LAB_03549968;
                  }
                }
              }
              else {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar22 = FUN_026b812c(uVar14,0);
                fVar58 = 1.0;
                if ((uVar22 & 1) != 0) {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar14 = FUN_026b8410(uVar14,0);
LAB_03549968:
                  fVar58 = 1.0;
                  uVar14 = uVar14 & 0xffff;
                }
              }
              iVar15 = *(int *)((long)unaff_x19 + 0x644);
              if (iVar15 != 0) goto LAB_03549594;
LAB_03549978:
              if ((*plVar3 == 0) || (lVar20 = *(long *)(*plVar3 + 0x38), lVar20 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar20 + 0x18) <= *puVar2)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              *plVar44 = *(long *)(lVar20 + (long)(int)*puVar2 * 0x178 + 0x30);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar44);
              if (*plVar44 == 0) goto LAB_03549564;
              if ((*plVar3 == 0) || (lVar20 = *(long *)(*plVar3 + 0x38), lVar20 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar20 + 0x18) <= *puVar2)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              *unaff_x21 = *(long *)(lVar20 + (long)(int)*puVar2 * 0x178 + 0x38);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x21);
              if ((*plVar3 == 0) || (lVar20 = *(long *)(*plVar3 + 0x38), lVar20 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar20 + 0x18) <= *puVar2)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              *in_stack_00000170 = *(long *)(lVar20 + (long)(int)*puVar2 * 0x178 + 0x50);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if ((*plVar3 == 0) || (lVar20 = *(long *)(*plVar3 + 0x38), lVar20 == 0))
              goto LAB_0354fbf4;
              uVar42 = *puVar2;
              uVar16 = *(uint *)(lVar20 + 0x18);
              if (uVar16 <= uVar42) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              *(undefined4 *)(unaff_x19 + 0x24) =
                   *(undefined4 *)(lVar20 + (long)(int)uVar42 * 0x178 + 0x58);
              if (bVar8) {
                lVar31 = unaff_x19[0x8f];
                if (lVar31 == 0) goto LAB_0354fbf4;
                if (*(uint *)(lVar31 + 0x18) <= uVar82)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if ((*(int *)(lVar31 + (long)(int)uVar82 * 0xc + 0x20) != 10) ||
                   (uVar42 == *(uint *)(unaff_x19 + 0x93))) goto LAB_03549a88;
                if (uVar16 <= uVar42 - 1)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if (*unaff_x21 == 0) goto LAB_0354fbf4;
                fVar80 = *(float *)(lVar20 + (long)(int)(uVar42 - 1) * 0x178 + 0x60);
                iVar15 = FUN_03776950(*unaff_x21 + 0x50,0);
                lVar20 = *unaff_x21;
              }
              else {
LAB_03549a88:
                if (*unaff_x21 == 0) goto LAB_0354fbf4;
                fVar80 = *(float *)(unaff_x19 + 0x3d);
                iVar15 = FUN_03776950(*unaff_x21 + 0x50,0);
                lVar20 = unaff_x19[0x20];
              }
              if (lVar20 == 0) goto LAB_0354fbf4;
              fVar55 = (float)FUN_03776960(lVar20 + 0x50,0);
              fVar50 = in_stack_00000098;
              if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                fVar50 = 1.0;
              }
              uVar78 = 0;
              fStack0000000000000124 = 0.0;
              if (!(bool)(bVar8 & uVar14 == 0x2026)) {
                if (*unaff_x21 == 0) goto LAB_0354fbf4;
                fStack0000000000000124 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
                if (*unaff_x21 == 0) goto LAB_0354fbf4;
                uVar78 = FUN_037769c0(*unaff_x21 + 0x50,0);
              }
              lVar20 = unaff_x19[0xc9];
              if (lVar20 == 0) goto LAB_0354fbf4;
              _fStack0000000000000120 = CONCAT44(fStack0000000000000124,uVar78);
              if (*(long *)(lVar20 + 0x20) == 0) goto LAB_0354fbf4;
              fVar75 = *(float *)((long)unaff_x19 + 0x404);
              fVar51 = *(float *)(lVar20 + 0x2c);
              fVar70 = (float)FUN_03776ea8(*(long *)(lVar20 + 0x20),0);
              if (*unaff_x21 == 0) goto LAB_0354fbf4;
              fVar53 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
              if (*unaff_x21 == 0) goto LAB_0354fbf4;
              fVar76 = *(float *)((long)unaff_x19 + 0x404);
              fVar54 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
              lVar20 = unaff_x19[0x6d];
              if ((lVar20 == 0) || (lVar31 = *(long *)(lVar20 + 0x38), lVar31 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar31 + 0x18) <= *puVar2)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar31 = lVar31 + (long)(int)*puVar2 * 0x178;
              *(undefined4 *)(lVar31 + 0x2c) = 0;
              fVar50 = ((fVar58 * fVar80) / (float)iVar15) * fVar55 * fVar50;
              fVar70 = fVar50 * fVar75 * fVar51 * fVar70;
              *(float *)(lVar31 + 0x160) = fVar70;
              uVar16 = *(uint *)(unaff_x19 + 0x24);
              fVar54 = fVar50 * fVar53 * fVar76 * fVar54;
              if (uVar16 == 0) {
                fStack000000000000016c = *(float *)(unaff_x19 + 0xc3);
              }
              else {
                lVar31 = unaff_x19[0xe1];
                if (lVar31 == 0) goto LAB_0354fbf4;
                if (*(uint *)(lVar31 + 0x18) <= uVar16)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                lVar31 = *(long *)(lVar31 + (long)(int)uVar16 * 8 + 0x20);
                if (lVar31 == 0) goto LAB_0354fbf4;
                fStack000000000000016c = *(float *)(lVar31 + 0x54);
              }
LAB_03549e30:
              fVar80 = 0.0;
              if (uVar14 != 3 && uVar14 != 0xad) {
                fVar80 = fVar70;
              }
            }
            else {
              fVar58 = 1.0;
              if (iVar15 == 0) goto LAB_03549978;
LAB_03549594:
              if (iVar15 == 1) {
                if ((*plVar3 == 0) || (lVar20 = *(long *)(*plVar3 + 0x38), lVar20 == 0))
                goto LAB_0354fbf4;
                if (*(uint *)(lVar20 + 0x18) <= *puVar2)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                *in_stack_000000b8 = *(long *)(lVar20 + (long)(int)*puVar2 * 0x178 + 0x40);
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                if ((*plVar3 == 0) || (lVar20 = *(long *)(*plVar3 + 0x38), lVar20 == 0))
                goto LAB_0354fbf4;
                if (*(uint *)(lVar20 + 0x18) <= *puVar2)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                *(undefined4 *)((long)unaff_x19 + 0x6a4) =
                     *(undefined4 *)(lVar20 + (long)(int)*puVar2 * 0x178 + 0x48);
                if ((unaff_x19[0xd3] == 0) ||
                   (lVar20 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar20 == 0))
                goto LAB_0354fbf4;
                FUN_02215a88(lVar20,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008b0,
                             *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
                puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                lVar20 = CONCAT44(in_stack_000008b4,in_stack_000008b0);
                if (lVar20 == 0) goto LAB_03549564;
                if (uVar14 == 0x3c) {
                  uVar14 = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
                }
                else {
                  lVar45 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar45 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar45 = *(long *)puVar11;
                  }
                  *(undefined4 *)((long)unaff_x19 + 0x1bc) =
                       *(undefined4 *)(*(long *)(lVar45 + 0xb8) + 0x68);
                }
                if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
                fVar70 = *(float *)(unaff_x19 + 0x3d);
                memmove(&stack0x00001730,(void *)(unaff_x19[0x20] + 0x50),0x60);
                iVar15 = FUN_03776950(&stack0x00001730,0);
                if (*unaff_x21 == 0) goto LAB_0354fbf4;
                memmove(&stack0x00001730,(void *)(*unaff_x21 + 0x50),0x60);
                fVar50 = (float)FUN_03776960(&stack0x00001730,0);
                fVar80 = in_stack_00000098;
                if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                  fVar80 = 1.0;
                }
                if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
                fVar80 = (fVar70 / (float)iVar15) * fVar50 * fVar80;
                iVar15 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
                fVar70 = *(float *)(unaff_x19 + 0x3d);
                if (iVar15 < 1) {
                  if (*unaff_x21 == 0) goto LAB_0354fbf4;
                  iVar15 = FUN_03776950(*unaff_x21 + 0x50,0);
                  if (*unaff_x21 == 0) goto LAB_0354fbf4;
                  fVar55 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
                  fVar50 = in_stack_00000098;
                  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                    fVar50 = 1.0;
                  }
                  if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
                  fVar75 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
                  if (*(long *)(lVar20 + 0x20) == 0) goto LAB_0354fbf4;
                  FUN_03776e6c(&stack0x000008b0,*(long *)(lVar20 + 0x20),0);
                  fVar51 = (float)FUN_03776c9c(&stack0x00001710,0);
                  if (*(long *)(lVar20 + 0x20) == 0) goto LAB_0354fbf4;
                  fVar76 = *(float *)(lVar20 + 0x2c);
                  fVar53 = (float)FUN_03776ea8(*(long *)(lVar20 + 0x20),0);
                  if (*unaff_x21 == 0) goto LAB_0354fbf4;
                  fVar52 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
                  if (*unaff_x21 == 0) goto LAB_0354fbf4;
                  fVar73 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
                  if (*unaff_x21 == 0) goto LAB_0354fbf4;
                  fVar81 = *(float *)((long)unaff_x19 + 0x404);
                  fVar54 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
                  if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
                  fVar54 = fVar80 * fVar73 * fVar81 * fVar54;
                  fVar50 = (fVar70 / (float)iVar15) * fVar55 * fVar50;
                  fVar70 = fVar50 * (fVar75 / fVar51) * fVar76 * fVar53;
                  fVar50 = fVar50 / fVar70;
                  fVar52 = fVar50 * fVar52;
                  fVar80 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
                  fVar50 = fVar50 * fVar80;
                }
                else {
                  if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
                  iVar15 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
                  if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
                  fVar50 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
                  if (*(long *)(lVar20 + 0x20) == 0) goto LAB_0354fbf4;
                  fVar75 = *(float *)(lVar20 + 0x2c);
                  fVar55 = in_stack_00000098;
                  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                    fVar55 = 1.0;
                  }
                  fVar51 = (float)FUN_03776ea8(*(long *)(lVar20 + 0x20),0);
                  if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
                  fVar52 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
                  if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
                  fVar53 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
                  if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
                  fVar76 = *(float *)((long)unaff_x19 + 0x404);
                  fVar54 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
                  if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
                  fVar54 = fVar80 * fVar53 * fVar76 * fVar54;
                  fVar70 = (fVar70 / (float)iVar15) * fVar50 * fVar55 * fVar75 * fVar51;
                  fVar50 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
                }
                *plVar44 = lVar20;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar44,lVar20);
                if ((*plVar3 != 0) && (lVar20 = *(long *)(*plVar3 + 0x38), lVar20 != 0)) {
                  if (*(uint *)(lVar20 + 0x18) <= *puVar2)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar20 = lVar20 + (long)(int)*puVar2 * 0x178;
                  *(undefined4 *)(lVar20 + 0x2c) = 1;
                  *(float *)(lVar20 + 0x160) = fVar70;
                  *(long *)(lVar20 + 0x40) = *in_stack_000000b8;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  if ((*plVar3 != 0) && (lVar20 = *(long *)(*plVar3 + 0x38), lVar20 != 0)) {
                    if (*(uint *)(lVar20 + 0x18) <= *puVar2)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    *(long *)(lVar20 + (long)(int)*puVar2 * 0x178 + 0x38) = *unaff_x21;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    lVar20 = *plVar3;
                    if ((lVar20 != 0) && (lVar45 = *(long *)(lVar20 + 0x38), lVar45 != 0)) {
                      if (*puVar2 < *(uint *)(lVar45 + 0x18)) {
                        _fStack0000000000000120 = CONCAT44(fVar52,fVar50);
                        fStack000000000000016c = 0.0;
                        *(int *)(lVar45 + (long)(int)*puVar2 * 0x178 + 0x58) = (int)unaff_x19[0x24];
                        *(int *)(unaff_x19 + 0x24) = (int)lVar31;
                        goto LAB_03549e30;
                      }
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    }
                  }
                }
                goto LAB_0354fbf4;
              }
              lVar20 = *plVar3;
              fVar54 = 0.0;
              fVar80 = 0.0;
              if (uVar14 != 3 && uVar14 != 0xad) {
                fVar80 = fVar70;
              }
              if (lVar20 == 0) goto LAB_0354fbf4;
              _fStack0000000000000120 = 0;
            }
            lVar20 = *(long *)(lVar20 + 0x38);
            if (lVar20 == 0) goto LAB_0354fbf4;
            if (*(uint *)(lVar20 + 0x18) <= *puVar2)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar20 = lVar20 + (long)(int)*puVar2 * 0x178;
            *(short *)(lVar20 + 0x20) = (short)uVar14;
            *(int *)(lVar20 + 0x60) = (int)unaff_x19[0x3d];
            *(undefined4 *)(lVar20 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
            if ((unaff_x19[0x6d] == 0) || (lVar20 = *(long *)(unaff_x19[0x6d] + 0x38), lVar20 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar20 + 0x18) <= *puVar2)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            *(int *)(lVar20 + (long)(int)*puVar2 * 0x178 + 0x168) = (int)unaff_x19[0x2b];
            if ((unaff_x19[0x6d] == 0) || (lVar20 = *(long *)(unaff_x19[0x6d] + 0x38), lVar20 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar20 + 0x18) <= *puVar2)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            *(undefined4 *)(lVar20 + (long)(int)*puVar2 * 0x178 + 0x170) =
                 *(undefined4 *)((long)unaff_x19 + 0x15c);
            if ((unaff_x19[0x6d] == 0) || (lVar20 = *(long *)(unaff_x19[0x6d] + 0x38), lVar20 == 0))
            goto LAB_0354fbf4;
            uVar16 = *puVar2;
            FUN_0209a6e0(in_stack_000000c8,&stack0x000008b0,
                         *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
            if (*(uint *)(lVar20 + 0x18) <= uVar16)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar20 = lVar20 + (long)(int)uVar16 * 0x178;
            *(undefined4 *)(lVar20 + 0x18c) = in_stack_000008c0;
            *(undefined8 *)(lVar20 + 0x184) = in_stack_000008b8;
            *(ulong *)(lVar20 + 0x17c) = CONCAT44(in_stack_000008b4,in_stack_000008b0);
            if ((*plVar3 == 0) || (lVar20 = *(long *)(*plVar3 + 0x38), lVar20 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar20 + 0x18) <= *puVar2)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            *(undefined4 *)(lVar20 + (long)(int)*puVar2 * 0x178 + 400) =
                 *(undefined4 *)((long)unaff_x19 + 0x25c);
            if ((unaff_x19[0xc9] == 0) || (lVar20 = *(long *)(unaff_x19[0xc9] + 0x20), lVar20 == 0))
            goto LAB_0354fbf4;
            FUN_03776e6c(&stack0x00000c28,lVar20,0);
            if ((int)uVar14 < 0x10000) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar16 = FUN_026b63d8(uVar14,0);
              uVar16 = uVar16 & 1;
            }
            else {
              uVar16 = 0;
            }
            fVar50 = *(float *)(unaff_x19 + 0x55);
            *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
            if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
              fVar55 = 0.0;
              fVar51 = 0.0;
              fVar75 = 0.0;
            }
            else {
              if (*plVar44 == 0) goto LAB_0354fbf4;
              uVar28 = *puVar2;
              uVar42 = *(uint *)(*plVar44 + 0x28);
              if ((int)uVar28 < (int)uVar30) {
                if ((*plVar3 == 0) || (lVar20 = *(long *)(*plVar3 + 0x38), lVar20 == 0))
                goto LAB_0354fbf4;
                if (*(uint *)(lVar20 + 0x18) <= uVar28 + 1)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                lVar20 = *(long *)(lVar20 + (long)(int)(uVar28 + 1) * 0x178 + 0x30);
                if ((((lVar20 == 0) || (*unaff_x21 == 0)) ||
                    (lVar31 = *(long *)(*unaff_x21 + 0x128), lVar31 == 0)) ||
                   (lVar31 = *(long *)(lVar31 + 0x18), lVar31 == 0)) goto LAB_0354fbf4;
                in_stack_000008b0 = uVar42 | *(int *)(lVar20 + 0x28) << 0x10;
                uVar24 = FUN_0219f8b8(lVar31,&stack0x000008b0,&stack0x00001708,
                                      *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                uVar78 = 0;
                if ((uVar24 & 1) == 0) {
                  fVar55 = 0.0;
                  fVar51 = 0.0;
                  fVar75 = 0.0;
                }
                else {
                  if (in_stack_00001708 == 0) goto LAB_0354fbf4;
                  fVar55 = *(float *)(in_stack_00001708 + 0x1c);
                  uVar78 = *(undefined4 *)(in_stack_00001708 + 0x20);
                  fVar75 = *(float *)(in_stack_00001708 + 0x14);
                  fVar51 = *(float *)(in_stack_00001708 + 0x18);
                  if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
                    fVar50 = 0.0;
                  }
                }
                uVar28 = *puVar2;
              }
              else {
                uVar78 = 0;
                fVar55 = 0.0;
                fVar51 = 0.0;
                fVar75 = 0.0;
              }
              if (0 < (int)uVar28) {
                if ((*plVar3 == 0) || (lVar20 = *(long *)(*plVar3 + 0x38), lVar20 == 0))
                goto LAB_0354fbf4;
                if (*(uint *)(lVar20 + 0x18) <= uVar28 - 1)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                lVar20 = *(long *)(lVar20 + (ulong)(uVar28 - 1) * 0x178 + 0x30);
                if (((lVar20 == 0) || (*unaff_x21 == 0)) ||
                   ((lVar31 = *(long *)(*unaff_x21 + 0x128), lVar31 == 0 ||
                    (lVar31 = *(long *)(lVar31 + 0x18), lVar31 == 0)))) goto LAB_0354fbf4;
                in_stack_000008b0 = *(uint *)(lVar20 + 0x28) | uVar42 << 0x10;
                uVar24 = FUN_0219f8b8(lVar31,&stack0x000008b0,&stack0x00001708,
                                      *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                if ((uVar24 & 1) != 0) {
                  if ((in_stack_00001708 == 0) ||
                     (fVar75 = (float)FUN_03571cb4(fVar75,fVar51,fVar55,uVar78,
                                                   *(undefined4 *)(in_stack_00001708 + 0x28),
                                                   *(undefined4 *)(in_stack_00001708 + 0x2c),
                                                   *(undefined4 *)(in_stack_00001708 + 0x30),
                                                   *(undefined4 *)(in_stack_00001708 + 0x34),0),
                     in_stack_00001708 == 0)) goto LAB_0354fbf4;
                  if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
                    fVar50 = 0.0;
                  }
                }
              }
              *(float *)((long)unaff_x19 + 0x2fc) = fVar55;
            }
            if ((char)unaff_x19[0x1e] != '\0') {
              fVar76 = *(float *)(unaff_x19 + 200);
              fVar53 = (float)FUN_03776cb4(&stack0x000017a0,0);
              fVar76 = fVar76 - fVar80 * fVar53 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
              *(float *)(unaff_x19 + 200) = fVar76;
              if ((uVar14 == 0x200b) || (uVar16 != 0)) {
                *(float *)(unaff_x19 + 200) = fVar76 - fVar49 * *(float *)((long)unaff_x19 + 0x2b4);
              }
            }
            fVar76 = *(float *)(unaff_x19 + 0x56);
            fVar53 = 0.0;
            if (fVar76 != 0.0) {
              fVar53 = (float)FUN_03776c94(&stack0x000017a0,0);
              fVar52 = (float)FUN_03776ca4(&stack0x000017a0,0);
              fVar53 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                       (fVar76 * 0.5 - fVar80 * (fVar53 * 0.5 + fVar52));
              *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar53;
            }
            if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar27 == '\0')) &&
               ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
              lVar20 = *in_stack_00000170;
              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar24 = FUN_036cee6c(lVar20,0,0);
              fVar52 = 0.0;
              if ((uVar24 & 1) != 0) {
                lVar20 = *in_stack_00000170;
                if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0
                   ) {
                  thunk_FUN_01a58e78();
                }
                plVar43 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                if (lVar20 == 0) goto LAB_0354fbf4;
                uVar24 = FUN_03699d3c(lVar20,*(undefined4 *)
                                              (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0x54),0);
                fVar52 = 0.0;
                if ((uVar24 & 1) != 0) {
                  lVar20 = *in_stack_00000170;
                  if (*(int *)(*plVar43 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    plVar43 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                  }
                  if (lVar20 == 0) goto LAB_0354fbf4;
                  fVar76 = (float)FUN_0369e060(lVar20,*(undefined4 *)
                                                       (*(long *)(*plVar43 + 0xb8) + 0x54),0);
                  if ((*unaff_x21 == 0) || (*in_stack_00000170 == 0)) goto LAB_0354fbf4;
                  fVar73 = *(float *)(*unaff_x21 + 0x1b0);
                  fVar52 = (float)FUN_0369e060(*in_stack_00000170,
                                               *(undefined4 *)
                                                (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
                  fVar52 = fVar52 * fVar76 * fVar73 * 0.25;
                  if (fVar76 < fStack000000000000016c + fVar52) {
                    fStack000000000000016c = fVar76 - fVar52;
                  }
                }
              }
              if (*unaff_x21 == 0) goto LAB_0354fbf4;
              fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
            }
            else {
              lVar20 = *in_stack_00000170;
              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar24 = FUN_036cee6c(lVar20,0,0);
              fStack00000000000000d0 = 0.0;
              if ((uVar24 & 1) != 0) {
                lVar20 = *in_stack_00000170;
                if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0
                   ) {
                  thunk_FUN_01a58e78();
                }
                plVar43 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                if (lVar20 == 0) goto LAB_0354fbf4;
                uVar24 = FUN_03699d3c(lVar20,*(undefined4 *)
                                              (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0x54),0);
                if ((uVar24 & 1) != 0) {
                  lVar20 = *in_stack_00000170;
                  if (*(int *)(*plVar43 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    plVar43 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                  }
                  if (lVar20 == 0) goto LAB_0354fbf4;
                  uVar24 = FUN_03699d3c(lVar20,*(undefined4 *)(*(long *)(*plVar43 + 0xb8) + 0xcc),0)
                  ;
                  if ((uVar24 & 1) != 0) {
                    lVar20 = *in_stack_00000170;
                    if (*(int *)(*plVar43 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      plVar43 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                    }
                    if (lVar20 != 0) {
                      fVar76 = (float)FUN_0369e060(lVar20,*(undefined4 *)
                                                           (*(long *)(*plVar43 + 0xb8) + 0x54),0);
                      if ((*unaff_x21 != 0) && (*in_stack_00000170 != 0)) {
                        fVar73 = *(float *)(*unaff_x21 + 0x1a8);
                        fVar52 = (float)FUN_0369e060(*in_stack_00000170,
                                                     *(undefined4 *)
                                                      (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
                        fVar52 = fVar52 * fVar76 * fVar73 * 0.25;
                        if (fVar76 < fStack000000000000016c + fVar52) {
                          fStack000000000000016c = fVar76 - fVar52;
                        }
                        goto LAB_0354a568;
                      }
                    }
                    goto LAB_0354fbf4;
                  }
                }
              }
              fVar52 = 0.0;
            }
LAB_0354a568:
            fVar76 = *(float *)(unaff_x19 + 200);
            fVar73 = (float)FUN_03776ca4(&stack0x000017a0,0);
            fVar76 = fVar76 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                              fVar80 * (fVar75 + ((fVar73 - fStack000000000000016c) - fVar52));
            fVar75 = (float)FUN_03776cac(&stack0x000017a0,0);
            fVar73 = *(float *)((long)unaff_x19 + 0x61c) +
                     ((fVar54 + fVar80 * (fVar51 + fStack000000000000016c + fVar75)) -
                     *(float *)(unaff_x19 + 0x9b));
            fVar75 = (float)FUN_03776c9c(&stack0x000017a0,0);
            fStack0000000000000134 =
                 fVar73 - fVar80 * (fStack000000000000016c + fStack000000000000016c + fVar75);
            fVar75 = (float)FUN_03776c94(&stack0x000017a0,0);
            fVar51 = fVar76 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                              fVar80 * (fVar52 + fVar52 +
                                       fStack000000000000016c + fStack000000000000016c + fVar75);
            fStack0000000000000104 = fVar76;
            fVar75 = fVar51;
            if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar27 == '\0')) &&
               ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
              fVar56 = (float)(int)unaff_x19[0xbe] * fVar59;
              fVar75 = (float)FUN_03776cac(&stack0x000017a0,0);
              fVar57 = fVar56 * fVar80 * (fVar52 + fStack000000000000016c + fVar75);
              fVar75 = (float)FUN_03776cac(&stack0x000017a0,0);
              fVar81 = (float)FUN_03776c9c(&stack0x000017a0,0);
              fVar73 = fVar73 + 0.0;
              fStack0000000000000134 = fStack0000000000000134 + 0.0;
              fVar56 = fVar56 * fVar80 * (((fVar75 - fVar81) - fStack000000000000016c) - fVar52);
              fVar81 = fVar76 + fVar57;
              fVar75 = fVar51 + fVar56;
              fVar72 = (fVar57 - fVar56) * 0.5;
              fVar76 = (fVar76 + fVar56) - fVar72;
              fVar51 = (fVar51 + fVar57) - fVar72;
              fStack0000000000000104 = fVar81 - fVar72;
              fVar75 = fVar75 - fVar72;
            }
            if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
              fVar56 = 0.0;
              fVar57 = 0.0;
              fVar71 = 0.0;
              fStack0000000000000100 = 0.0;
              fVar72 = fStack0000000000000134;
              fVar81 = fVar73;
            }
            else {
              thunk_FUN_036bc400(lVar61,0);
              fVar74 = (fVar51 + fVar76) * 0.5;
              fVar77 = (fStack0000000000000134 + fVar73) * 0.5;
              fVar73 = fVar73 - fVar77;
              fStack0000000000000100 = 0.0;
              fVar81 = fVar73;
              fStack0000000000000104 = (float)FUN_036bdd2c(fStack0000000000000104 - fVar74,lVar61,0)
              ;
              fStack0000000000000104 = fVar74 + fStack0000000000000104;
              fStack0000000000000100 = fStack0000000000000100 + 0.0;
              fVar72 = fStack0000000000000134 - fVar77;
              fVar56 = 0.0;
              fStack0000000000000134 = fVar72;
              fVar76 = (float)FUN_036bdd2c(fVar76 - fVar74,lVar61,0);
              fVar76 = fVar74 + fVar76;
              fVar56 = fVar56 + 0.0;
              fStack0000000000000134 = fVar77 + fStack0000000000000134;
              fVar71 = 0.0;
              fVar51 = (float)FUN_036bdd2c(fVar51 - fVar74,lVar61,0);
              fVar51 = fVar74 + fVar51;
              fVar73 = fVar77 + fVar73;
              fVar71 = fVar71 + 0.0;
              fVar57 = 0.0;
              fVar75 = (float)FUN_036bdd2c(fVar75 - fVar74,lVar61,0);
              fVar75 = fVar74 + fVar75;
              fVar57 = fVar57 + 0.0;
              fVar72 = fVar77 + fVar72;
              fVar81 = fVar77 + fVar81;
            }
            if (*plVar3 == 0) goto LAB_0354fbf4;
            lVar20 = *(long *)(*plVar3 + 0x38);
            uVar24 = (ulong)(uint)fVar80;
            if (lVar20 == 0) goto LAB_0354fbf4;
            if (*(uint *)(lVar20 + 0x18) <= *puVar2)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar20 = lVar20 + (long)(int)*puVar2 * 0x178;
            *(float *)(lVar20 + 0x11c) = fVar76;
            *(float *)(lVar20 + 0x120) = fStack0000000000000134;
            *(float *)(lVar20 + 0x124) = fVar56;
            if ((*plVar3 == 0) || (lVar20 = *(long *)(*plVar3 + 0x38), lVar20 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar20 + 0x18) <= *puVar2)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar20 = lVar20 + (long)(int)*puVar2 * 0x178;
            *(float *)(lVar20 + 0x114) = fVar81;
            *(float *)(lVar20 + 0x110) = fStack0000000000000104;
            *(float *)(lVar20 + 0x118) = fStack0000000000000100;
            if ((*plVar3 == 0) || (lVar20 = *(long *)(*plVar3 + 0x38), lVar20 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar20 + 0x18) <= *puVar2)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar20 = lVar20 + (long)(int)*puVar2 * 0x178;
            *(float *)(lVar20 + 0x128) = fVar51;
            *(float *)(lVar20 + 300) = fVar73;
            *(float *)(lVar20 + 0x130) = fVar71;
            if ((*plVar3 == 0) || (lVar20 = *(long *)(*plVar3 + 0x38), lVar20 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar20 + 0x18) <= *puVar2)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar20 = lVar20 + (long)(int)*puVar2 * 0x178;
            *(float *)(lVar20 + 0x134) = fVar75;
            *(float *)(lVar20 + 0x138) = fVar72;
            *(float *)(lVar20 + 0x13c) = fVar57;
            if ((*plVar3 == 0) || (lVar20 = *(long *)(*plVar3 + 0x38), lVar20 == 0))
            goto LAB_0354fbf4;
            uVar42 = *puVar2;
            lVar31 = (long)(int)uVar42;
            if (*(uint *)(lVar20 + 0x18) <= uVar42)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar45 = lVar20 + lVar31 * 0x178;
            *(int *)(lVar45 + 0x140) = (int)unaff_x19[200];
            fVar73 = *(float *)(unaff_x19 + 0x9b);
            uVar65 = (ulong)(uint)fVar73;
            fVar75 = *(float *)((long)unaff_x19 + 0x61c);
            *(float *)(lVar45 + 0x15c) = (fVar51 - fVar76) / (fVar81 - fStack0000000000000134);
            *(float *)(lVar45 + 0x14c) = (fVar54 - fVar73) + fVar75;
            fVar51 = fStack0000000000000124 * fVar80;
            if (*(int *)((long)unaff_x19 + 0x644) == 0) {
              fVar51 = fVar51 / fVar58;
              fStack0000000000000120 = (fStack0000000000000120 * fVar80) / fVar58;
            }
            else {
              fStack0000000000000120 = fStack0000000000000120 * fVar80;
            }
            uVar28 = *(uint *)(unaff_x19 + 0x93);
            if ((uVar16 == 0) || (uVar42 == uVar28)) {
              fStack0000000000000120 = fVar75 + fStack0000000000000120;
              fVar51 = fVar75 + fVar51;
              fVar54 = fStack0000000000000120;
              fVar76 = fVar51;
              if (fVar75 != 0.0) {
                fVar76 = (fVar51 - fVar75) / *(float *)((long)unaff_x19 + 0x404);
                fVar54 = (fStack0000000000000120 - fVar75) / *(float *)((long)unaff_x19 + 0x404);
                if (fVar76 <= fVar51) {
                  fVar76 = fVar51;
                }
                if (fStack0000000000000120 <= fVar54) {
                  fVar54 = fStack0000000000000120;
                }
              }
              lVar20 = lVar20 + lVar31 * 0x178;
              fVar75 = fVar76;
              if (fVar76 <= *(float *)(unaff_x19 + 0x99)) {
                fVar75 = *(float *)(unaff_x19 + 0x99);
              }
              fVar81 = fVar54;
              if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar54) {
                fVar81 = *(float *)((long)unaff_x19 + 0x4cc);
              }
              *(float *)((long)unaff_x19 + 0x4cc) = fVar81;
              *(float *)(unaff_x19 + 0x99) = fVar75;
              *(float *)(lVar20 + 0x154) = fVar76;
              *(float *)(lVar20 + 0x158) = fVar54;
              *(float *)(lVar20 + 0x148) = fVar51 - fVar73;
              *(float *)(unaff_x19 + 0x98) = fVar51 - fVar73;
              *(float *)(lVar20 + 0x150) = fStack0000000000000120 - fVar73;
              *(float *)((long)unaff_x19 + 0x4c4) = fStack0000000000000120 - fVar73;
              if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
                *(float *)(unaff_x19 + 0x97) = fVar75;
                if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
                fVar75 = *(float *)((long)unaff_x19 + 0x4bc);
                fVar76 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
                fVar58 = (fVar80 * fVar76) / fVar58;
                uVar65 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                if (fVar75 <= fVar58) {
                  fVar75 = fVar58;
                }
                *(float *)((long)unaff_x19 + 0x4bc) = fVar75;
              }
              if ((float)uVar65 == 0.0) {
                fVar58 = *(float *)(unaff_x22 + 0x208);
                if (*(float *)(unaff_x22 + 0x208) <= fVar51) {
                  fVar58 = fVar51;
                }
                *(float *)(unaff_x22 + 0x208) = fVar58;
              }
            }
            else {
              fVar58 = *(float *)(unaff_x19 + 0x99);
              lVar20 = lVar20 + lVar31 * 0x178;
              *(float *)(lVar20 + 0x154) = fVar58;
              fVar75 = *(float *)((long)unaff_x19 + 0x4cc);
              fVar58 = fVar58 - fVar73;
              *(float *)(lVar20 + 0x148) = fVar58;
              *(float *)(lVar20 + 0x158) = fVar75;
              *(float *)(unaff_x19 + 0x98) = fVar58;
              fVar75 = fVar75 - fVar73;
              *(float *)(lVar20 + 0x150) = fVar75;
              *(float *)((long)unaff_x19 + 0x4c4) = fVar75;
            }
            lVar20 = *plVar3;
            if ((lVar20 == 0) || (lVar31 = *(long *)(lVar20 + 0x38), lVar31 == 0))
            goto LAB_0354fbf4;
            uVar17 = *puVar2;
            if (*(uint *)(lVar31 + 0x18) <= uVar17)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar31 = lVar31 + (long)(int)uVar17 * 0x178;
            *(undefined1 *)(lVar31 + 0x194) = 0;
            uVar34 = *(uint *)(unaff_x19 + 0x4f);
            if ((uVar14 == 9) ||
               (((((uVar16 == 0 && (uVar14 != 3)) && (uVar14 != 0x200b)) && (uVar14 != 0xad)) ||
                (((bool)(uVar14 == 0xad & (bVar13 ^ 1U)) || (*(int *)((long)unaff_x19 + 0x644) == 1)
                 ))))) {
              *(undefined1 *)(lVar31 + 0x194) = 1;
              pfVar32 = (float *)((long)unaff_x19 + 0x354);
              pfVar36 = (float *)(unaff_x19 + 0x6a);
              if (bVar8) {
                lVar20 = *(long *)(lVar20 + 0x50);
                if (lVar20 == 0) goto LAB_0354fbf4;
                if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                lVar20 = lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                pfVar36 = (float *)(lVar20 + 0x60);
                pfVar32 = (float *)(lVar20 + 100);
              }
              fVar75 = *pfVar36;
              fVar51 = *pfVar32;
              fVar58 = *(float *)(unaff_x19 + 0x6c);
              fVar76 = *(float *)(unaff_x19 + 200);
              fStack00000000000000fc = (fVar79 - fVar75) - fVar51;
              bVar12 = true;
              if ((fVar58 <= fStack00000000000000fc) && (bVar12 = false, !NAN(fVar58))) {
                bVar12 = fVar58 == -1.0;
              }
              if (!bVar12) {
                fStack00000000000000fc = fVar58;
              }
              fVar58 = 0.0;
              if ((char)unaff_x19[0x1e] == '\0') {
                fVar58 = (float)FUN_03776cb4(&stack0x000017a0,0);
                uVar65 = (ulong)*(uint *)(unaff_x19 + 0x9b);
              }
              fVar73 = *(float *)((long)unaff_x19 + 0x2d4);
              fVar54 = *(float *)((long)unaff_x19 + 0x4cc);
              if (uVar14 != 0xad) {
                fVar70 = fVar80;
              }
              fVar56 = (float)uVar65;
              fVar81 = 0.0;
              if ((0.0 < fVar56) && (fVar81 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                fVar81 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
              }
              uVar17 = *puVar2;
              fVar81 = (*(float *)(unaff_x19 + 0x97) - (fVar54 - fVar56)) + fVar81;
              if (fVar66 < fVar81) {
                if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                  *(uint *)((long)unaff_x19 + 0x2e4) = uVar17;
                }
                puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                uVar64 = DAT_00d37868;
                if ((char)unaff_x19[0x47] != '\0') {
                  fVar72 = *(float *)(unaff_x19 + 0x59);
                  if (((fVar72 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar56)) &&
                     (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                    fVar46 = *(float *)((long)unaff_x19 + 700) +
                             ((fVar69 - fVar81) / (float)(int)unaff_x19[0x95]) / fVar48;
                    if (fVar46 <= fVar72) {
                      fVar46 = fVar72;
                    }
                    goto UnityEngine_AndroidJavaObject___ctor;
                  }
                  fVar56 = *(float *)((long)unaff_x19 + 0x1e4);
                  fVar81 = *(float *)(unaff_x19 + 0x4a);
                  uVar65 = (ulong)(uint)fVar81;
                  if ((fVar81 < fVar56) &&
                     (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                    fVar46 = (fVar56 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                    if (fVar46 <= DAT_00d38b84) {
                      fVar46 = DAT_00d38b84;
                    }
                    fVar47 = (fVar56 - fVar46) * 20.0 + 0.5;
                    *(float *)((long)unaff_x19 + 0x23c) = fVar56;
                    fVar46 = DAT_00d38e60;
                    if (fVar47 != INFINITY) {
                      fVar46 = (float)(int)fVar47 / 20.0;
                    }
                    if (fVar46 <= fVar81) {
                      fVar46 = fVar81;
                    }
                    goto LAB_0354d004;
                  }
                }
                switch((int)unaff_x19[0x5c]) {
                case 1:
                  lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar20 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar20 = *(long *)puVar11;
                  }
                  lVar31 = *(long *)(lVar20 + 0xb8);
                  lVar20 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                  if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
                    lVar20 = FUN_01a46ff8(lVar20);
                  }
                  piVar25 = (int *)thunk_FUN_01a59484(lVar31 + 0x11f0,
                                                      *(long *)(*(long *)(*(long *)(lVar20 + 0xc0) +
                                                                         8) + 0x80) + 0xa0);
                  puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*piVar25 == 0) {
LAB_0354cf2c:
                    in_stack_000017d8 = DAT_00d37868;
                    puVar2[0] = 0;
                    puVar2[1] = 0;
                    uVar82 = 0xffffffff;
                  }
                  else {
                    lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if (*(int *)(lVar20 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar20 = *(long *)puVar11;
                    }
                    FUN_0209b778(*(long *)(lVar20 + 0xb8) + 0x11f0,&stack0x000008b0,
                                 *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                    memcpy(&stack0x00001390,&stack0x000008b0,0x378);
LAB_0354b394:
                    iVar15 = FUN_0358c15c();
LAB_0354b3a0:
                    iVar18 = *(int *)((long)unaff_x19 + 0x494) + -1;
                    *(int *)((long)unaff_x19 + 0x494) = iVar18;
                    iVar35 = iVar35 + 1;
                    uVar82 = iVar15 - 1;
                    in_stack_000017d8 = CONCAT44(0x2026,iVar18);
                  }
                  goto LAB_03549564;
                default:
                  goto switchD_0354ad3c_caseD_2;
                case 3:
                  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
LAB_0354af20:
                  uVar82 = FUN_0358c15c();
                  break;
                case 5:
                  if ((uVar17 == 0) || ((int)uVar82 < 0)) {
                    *puVar2 = 0;
                    uVar82 = 0xffffffff;
                    in_stack_000017d8 = uVar64;
                  }
                  else {
                    fVar70 = *(float *)(unaff_x19 + 0x99);
                    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar82 = FUN_0358c15c();
                    if (fVar66 < fVar70 - fVar54) break;
                    *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                    *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
                    uVar65 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) +
                                       0x15a8);
                    *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                    *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                    lVar20 = NEON_rev64(uVar65,4);
                    unaff_x19[0x99] = lVar20;
                    *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                    *(undefined8 *)(unaff_x22 + 0x208) = 0;
                    *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                    *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                  }
                  goto LAB_03549564;
                case 6:
                  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar82 = FUN_0358c15c();
                  lVar20 = unaff_x19[0x5d];
                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                  }
                  uVar22 = FUN_036cee6c(lVar20,0,0);
                  if ((uVar22 & 1) != 0) {
                    plVar43 = (long *)unaff_x19[0x5d];
                    uVar64 = (**(code **)(*unaff_x19 + 0x518))();
                    if (plVar43 == (long *)0x0) goto LAB_0354fbf4;
                    (**(code **)(*plVar43 + 0x528))
                              (plVar43,uVar64,*(undefined8 *)(*plVar43 + 0x530));
                    lVar20 = unaff_x19[0x5d];
                    if (lVar20 == 0) goto LAB_0354fbf4;
                    *(int *)(lVar20 + 0x400) = (int)unaff_x19[0x80];
                    FUN_0357ee30(lVar20,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                    plVar43 = (long *)unaff_x19[0x5d];
                    if (plVar43 == (long *)0x0) goto LAB_0354fbf4;
                    (**(code **)(*plVar43 + 0x7a8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7b0));
                    *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                  }
                }
LAB_0354b0e0:
                in_stack_000017d8 = CONCAT44(3,uVar17);
                goto LAB_03549564;
              }
switchD_0354ad3c_caseD_2:
              puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              fVar58 = ABS(fVar76) + fVar58 * (1.0 - fVar73) * fVar70;
              fVar70 = 1.0;
              if ((uVar34 & 0x18) != 0) {
                fVar70 = DAT_00d38acc;
              }
              fVar76 = fVar70 * fStack00000000000000fc;
              if (fVar76 < fVar58) {
                uVar65 = (ulong)(uint)fVar52;
                if (((char)unaff_x19[0x5b] == '\0') || (uVar17 == *(uint *)(unaff_x19 + 0x93))) {
                  if (((char)unaff_x19[0x47] != '\0') &&
                     (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                    fVar76 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                    if (fVar73 < fVar76) {
                      fVar46 = fVar58 / (1.0 - fVar73);
                      if (fVar73 <= 0.0) {
                        fVar46 = fVar58;
                      }
                      fVar73 = fVar73 + (fVar58 - fVar70 * (fStack00000000000000fc + DAT_00d38cc4))
                                        / fVar46;
                      goto LAB_0354fc24;
                    }
                    fVar73 = *(float *)((long)unaff_x19 + 0x1e4);
                    fVar76 = *(float *)(unaff_x19 + 0x4a);
                    if (fVar76 < fVar73) {
                      fVar46 = (fVar73 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                      if (fVar46 <= DAT_00d38b84) {
                        fVar46 = DAT_00d38b84;
                      }
                      *(float *)((long)unaff_x19 + 0x23c) = fVar73;
                      fVar73 = fVar73 - fVar46;
LAB_0354fc60:
                      fVar47 = fVar73 * 20.0 + 0.5;
                      fVar46 = DAT_00d38e60;
                      if (fVar47 != INFINITY) {
                        fVar46 = (float)(int)fVar47 / 20.0;
                      }
                      if (fVar46 <= fVar76) {
                        fVar46 = fVar76;
                      }
                      goto LAB_0354d004;
                    }
                  }
                  iVar15 = (int)unaff_x19[0x5c];
                  if (iVar15 == 1) {
                    lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if (*(int *)(lVar20 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar20 = *(long *)puVar11;
                    }
                    lVar31 = *(long *)(lVar20 + 0xb8);
                    lVar20 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
                      lVar20 = FUN_01a46ff8(lVar20);
                    }
                    piVar25 = (int *)thunk_FUN_01a59484(lVar31 + 0x11f0,
                                                        *(long *)(*(long *)(*(long *)(lVar20 + 0xc0)
                                                                           + 8) + 0x80) + 0xa0);
                    puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if (*piVar25 == 0) goto LAB_0354cf2c;
                    lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if (*(int *)(lVar20 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar20 = *(long *)puVar11;
                    }
                    FUN_0209b778(*(long *)(lVar20 + 0xb8) + 0x11f0,&stack0x000008b0,
                                 *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                    memcpy(&stack0x00000ca0,&stack0x000008b0,0x378);
                    goto LAB_0354b394;
                  }
                  if (iVar15 != 6) {
                    if (iVar15 == 3) {
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
                  uVar82 = FUN_0358c15c();
                  lVar20 = unaff_x19[0x5d];
                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                  }
                  uVar22 = FUN_036cee6c(lVar20,0,0);
                  if ((uVar22 & 1) != 0) {
                    plVar43 = (long *)unaff_x19[0x5d];
                    uVar64 = (**(code **)(*unaff_x19 + 0x518))();
                    if (plVar43 == (long *)0x0) goto LAB_0354fbf4;
                    (**(code **)(*plVar43 + 0x528))
                              (plVar43,uVar64,*(undefined8 *)(*plVar43 + 0x530));
                    lVar20 = unaff_x19[0x5d];
                    if (lVar20 == 0) goto LAB_0354fbf4;
                    *(int *)(lVar20 + 0x400) = (int)unaff_x19[0x80];
                    FUN_0357ee30(lVar20,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                    plVar43 = (long *)unaff_x19[0x5d];
                    if (plVar43 == (long *)0x0) goto LAB_0354fbf4;
                    (**(code **)(*plVar43 + 0x7a8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7b0));
                    *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                  }
LAB_0354b4b4:
                  in_stack_000017d8 = CONCAT44(3,*puVar2);
                  goto LAB_03549564;
                }
                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar82 = FUN_0358c15c();
                if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                  lVar20 = *plVar3;
                  if ((lVar20 == 0) || (lVar31 = *(long *)(lVar20 + 0x38), lVar31 == 0))
                  goto LAB_0354fbf4;
                  if (*(uint *)(lVar31 + 0x18) <= *puVar2)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  fVar76 = *(float *)(unaff_x19 + 0x9b);
                  fVar73 = 0.0;
                  if ((0.0 < fVar76) && (fVar73 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0'))
                  {
                    fVar73 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                  }
                  fVar73 = fVar49 * *(float *)(unaff_x19 + 0x57) +
                           *(float *)(lVar31 + (long)(int)*puVar2 * 0x178 + 0x154) +
                           (fVar73 - *(float *)((long)unaff_x19 + 0x4cc)) +
                           fVar48 * (fVar67 + *(float *)((long)unaff_x19 + 700));
                }
                else {
                  lVar20 = unaff_x19[0x6d];
                  *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
                  if (lVar20 == 0) goto LAB_0354fbf4;
                  fVar76 = *(float *)(unaff_x19 + 0x9b);
                  fVar73 = *(float *)(unaff_x19 + 0x58) + fVar49 * *(float *)(unaff_x19 + 0x57);
                }
                puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                lVar20 = *(long *)(lVar20 + 0x38);
                if (lVar20 == 0) goto LAB_0354fbf4;
                uVar37 = *(uint *)((long)unaff_x19 + 0x494);
                if ((*(uint *)(lVar20 + 0x18) <= uVar37) ||
                   (uVar7 = uVar37 - 1, *(uint *)(lVar20 + 0x18) <= uVar7))
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                uVar65 = (ulong)(uint)(fVar73 + *(float *)(unaff_x19 + 0x97));
                fVar54 = (fVar73 + *(float *)(unaff_x19 + 0x97) + fVar76) -
                         *(float *)(lVar20 + (long)(int)uVar37 * 0x178 + 0x158);
                if ((!bVar13 && *(short *)(lVar20 + (long)(int)uVar7 * 0x178 + 0x20) == 0xad) &&
                   ((fVar54 < fVar66 || ((int)unaff_x19[0x5c] == 0)))) {
                  bVar13 = false;
                  *puVar2 = uVar7;
                  uVar82 = uVar82 - 1;
                  in_stack_000017d8 = CONCAT44(0x2d,uVar7);
                  goto LAB_03549564;
                }
                if (*(short *)(lVar20 + (long)(int)uVar37 * 0x178 + 0x20) == 0xad) {
                  bVar13 = true;
                  goto LAB_03549564;
                }
                if ((bVar9 & *(byte *)(unaff_x19 + 0x47)) != 0) {
                  fVar73 = *(float *)((long)unaff_x19 + 0x2d4);
                  fVar76 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                  if ((fVar76 <= fVar73) ||
                     ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
                    fVar73 = *(float *)((long)unaff_x19 + 0x1e4);
                    uVar65 = (ulong)(uint)fVar73;
                    fVar76 = *(float *)(unaff_x19 + 0x4a);
                    if ((fVar73 <= fVar76) ||
                       ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
                    goto LAB_0354b6dc;
LAB_0354fcd0:
                    fVar46 = (fVar73 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                    if (fVar46 <= DAT_00d38b84) {
                      fVar46 = DAT_00d38b84;
                    }
                    *(float *)((long)unaff_x19 + 0x23c) = fVar73;
                    fVar73 = fVar73 - fVar46;
                    goto LAB_0354fc60;
                  }
LAB_0354fc94:
                  fVar46 = fVar58;
                  if (0.0 < fVar73) {
                    fVar46 = fVar58 / (1.0 - fVar73);
                  }
                  fVar73 = fVar73 + (fVar58 - fVar70 * (fStack00000000000000fc + DAT_00d38cc4)) /
                                    fVar46;
LAB_0354fc24:
                  if (fVar76 <= fVar73) {
                    fVar73 = fVar76;
                  }
                  *(float *)((long)unaff_x19 + 0x2d4) = fVar73;
                  return;
                }
LAB_0354b6dc:
                lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar20 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar20 = *(long *)puVar11;
                }
                iVar15 = *(int *)(*(long *)(lVar20 + 0xb8) + 0xe78);
                if (((iVar15 != iStack000000000000002c) && (iVar15 != -1)) && (bVar9 == 1)) {
                  if (*(int *)(lVar20 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar82 = FUN_0358c15c();
                  if ((unaff_x19[0x6d] == 0) ||
                     (lVar20 = *(long *)(unaff_x19[0x6d] + 0x38), lVar20 == 0)) goto LAB_0354fbf4;
                  uVar37 = *puVar2 - 1;
                  if (*(uint *)(lVar20 + 0x18) <= uVar37)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  iStack000000000000002c = iVar15;
                  if (*(short *)(lVar20 + (long)(int)uVar37 * 0x178 + 0x20) == 0xad) {
                    bVar13 = false;
                    *puVar2 = uVar37;
                    uVar82 = uVar82 - 1;
                    in_stack_000017d8 = CONCAT44(0x2d,uVar37);
                    goto LAB_03549564;
                  }
                }
                if (fVar54 <= fVar66) {
switchD_0354b88c_caseD_0:
                  FUN_0358cbd4(fVar48,uVar24,fVar49,*(undefined4 *)((long)unaff_x19 + 0x2fc),
                               fStack00000000000000d0,fVar50,fStack00000000000000fc,fVar67);
                }
                else {
                  if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                    *(undefined4 *)((long)unaff_x19 + 0x2e4) =
                         *(undefined4 *)((long)unaff_x19 + 0x494);
                  }
                  fVar76 = fVar66;
                  if ((char)unaff_x19[0x47] != '\0') {
                    fVar76 = *(float *)(unaff_x19 + 0x59);
                    if ((fVar76 < *(float *)((long)unaff_x19 + 700)) &&
                       (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                      fVar46 = *(float *)((long)unaff_x19 + 700) +
                               ((fVar69 - fVar54) / (float)((int)unaff_x19[0x95] + 1)) / fVar48;
                      if (fVar46 <= fVar76) {
                        fVar46 = fVar76;
                      }
UnityEngine_AndroidJavaObject___ctor:
                      *(float *)((long)unaff_x19 + 700) = fVar46;
                      return;
                    }
                    fVar73 = *(float *)((long)unaff_x19 + 0x2d4);
                    fVar76 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                    if ((fVar73 < fVar76) &&
                       (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                    goto LAB_0354fc94;
                    fVar73 = *(float *)((long)unaff_x19 + 0x1e4);
                    uVar65 = (ulong)(uint)fVar73;
                    fVar76 = *(float *)(unaff_x19 + 0x4a);
                    if ((fVar76 < fVar73) &&
                       (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                    goto LAB_0354fcd0;
                  }
                  switch((int)unaff_x19[0x5c]) {
                  case 0:
                  case 2:
                  case 4:
                    goto switchD_0354b88c_caseD_0;
                  case 1:
                    lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if (*(int *)(lVar20 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    }
                    lVar31 = *(long *)(lVar20 + 0xb8);
                    lVar20 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
                      lVar20 = FUN_01a46ff8(lVar20);
                    }
                    piVar25 = (int *)thunk_FUN_01a59484(lVar31 + 0x11f0,
                                                        *(long *)(*(long *)(*(long *)(lVar20 + 0xc0)
                                                                           + 8) + 0x80) + 0xa0);
                    if (*piVar25 == 0) {
                      bVar13 = false;
                      goto LAB_0354cf2c;
                    }
                    lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if (*(int *)(lVar20 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    }
                    FUN_0209b778(*(long *)(lVar20 + 0xb8) + 0x11f0,&stack0x000008b0,
                                 *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                    memcpy(&stack0x00001018,&stack0x000008b0,0x378);
                    iVar15 = FUN_0358c15c();
                    bVar13 = false;
                    goto LAB_0354b3a0;
                  case 3:
                    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar82 = FUN_0358c15c();
                    bVar13 = false;
                    goto LAB_0354b0e0;
                  case 5:
                    *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                    FUN_0358cbd4(fVar48,uVar24,fVar49,*(undefined4 *)((long)unaff_x19 + 0x2fc),
                                 fStack00000000000000d0,fVar50,fStack00000000000000fc,fVar67);
                    *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                    *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                    *(undefined8 *)(unaff_x22 + 0x208) = 0;
                    *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                    break;
                  case 6:
                    lVar20 = unaff_x19[0x5d];
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar22 = FUN_036cee6c(lVar20,0,0);
                    if ((uVar22 & 1) != 0) {
                      plVar43 = (long *)unaff_x19[0x5d];
                      uVar64 = (**(code **)(*unaff_x19 + 0x518))();
                      if (plVar43 == (long *)0x0) goto LAB_0354fbf4;
                      (**(code **)(*plVar43 + 0x528))
                                (plVar43,uVar64,*(undefined8 *)(*plVar43 + 0x530));
                      lVar20 = unaff_x19[0x5d];
                      if (lVar20 == 0) goto LAB_0354fbf4;
                      *(int *)(lVar20 + 0x400) = (int)unaff_x19[0x80];
                      FUN_0357ee30(lVar20,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                      plVar43 = (long *)unaff_x19[0x5d];
                      if (plVar43 == (long *)0x0) goto LAB_0354fbf4;
                      (**(code **)(*plVar43 + 0x7a8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7b0))
                      ;
                      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                    }
                    bVar13 = false;
                    goto LAB_0354b4b4;
                  default:
                    bVar13 = false;
                    goto LAB_0354b8e4;
                  }
                }
                bVar13 = false;
LAB_0354c6b4:
                bVar9 = 1;
                bVar10 = true;
                uVar65 = uVar24;
                uVar24 = (ulong)(uint)fVar80;
                goto LAB_03549564;
              }
LAB_0354b8e4:
              if (uVar14 != 0xad) {
                if (uVar14 == 9) {
                  lVar20 = *plVar3;
                  if ((lVar20 != 0) && (lVar31 = *(long *)(lVar20 + 0x38), lVar31 != 0)) {
                    uVar17 = *puVar2;
                    if (*(uint *)(lVar31 + 0x18) <= uVar17)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    *(undefined1 *)(lVar31 + (long)(int)uVar17 * 0x178 + 0x194) = 0;
                    *(uint *)((long)unaff_x19 + 0x4a4) = uVar17;
                    lVar31 = *(long *)(lVar20 + 0x50);
                    if (lVar31 != 0) {
                      if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar31 + 0x18)) {
                        lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                        *(int *)(lVar31 + 0x2c) = *(int *)(lVar31 + 0x2c) + 1;
                        goto LAB_0354b950;
                      }
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    }
                  }
                }
                else {
                  if (*(int *)((long)unaff_x19 + 0x644) == 1) {
                    (**(code **)(*unaff_x19 + 0x898))(fVar76,fVar52);
                  }
                  else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                    (**(code **)(*unaff_x19 + 0x888))(fStack000000000000016c);
                  }
                  if (bVar10) {
                    *(uint *)(unaff_x22 + 0x1f0) = *puVar2;
                  }
                  *(uint *)((long)unaff_x19 + 0x4a4) = *puVar2;
                  *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar20 = *(long *)(unaff_x19[0x6d] + 0x50), lVar20 != 0)) {
                    if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar20 + 0x18)) {
                      lVar20 = lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                      bVar10 = false;
                      *(float *)(lVar20 + 0x60) = fVar75;
                      *(float *)(lVar20 + 100) = fVar51;
                      goto LAB_0354ba38;
                    }
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  }
                }
                goto LAB_0354fbf4;
              }
              if ((*plVar3 == 0) || (lVar20 = *(long *)(*plVar3 + 0x38), lVar20 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar20 + 0x18) <= *puVar2)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              *(undefined1 *)(lVar20 + (long)(int)*puVar2 * 0x178 + 0x194) = 0;
            }
            else {
              if (((uVar14 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
                fVar58 = (float)uVar65;
                fVar70 = 0.0;
                if ((0.0 < fVar58) && (fVar70 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                  fVar70 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                }
                uVar65 = (ulong)(uint)fVar66;
                if (fVar66 < (*(float *)(unaff_x19 + 0x97) -
                             (*(float *)((long)unaff_x19 + 0x4cc) - fVar58)) + fVar70) {
                  if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                    *(uint *)((long)unaff_x19 + 0x2e4) = uVar17;
                  }
                  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar82 = FUN_0358c15c();
                  lVar20 = unaff_x19[0x5d];
                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                  }
                  uVar22 = FUN_036cee6c(lVar20,0,0);
                  if ((uVar22 & 1) != 0) {
                    plVar43 = (long *)unaff_x19[0x5d];
                    uVar64 = (**(code **)(*unaff_x19 + 0x518))();
                    if (plVar43 != (long *)0x0) {
                      (**(code **)(*plVar43 + 0x528))
                                (plVar43,uVar64,*(undefined8 *)(*plVar43 + 0x530));
                      lVar20 = unaff_x19[0x5d];
                      if (lVar20 != 0) {
                        *(int *)(lVar20 + 0x400) = (int)unaff_x19[0x80];
                        FUN_0357ee30(lVar20,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                        plVar43 = (long *)unaff_x19[0x5d];
                        if (plVar43 != (long *)0x0) {
                          (**(code **)(*plVar43 + 0x7a8))
                                    (plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7b0));
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
              if ((((uVar14 - 0x2007 < 0x23) &&
                   ((1L << ((ulong)(uVar14 - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
                  (uVar14 - 10 < 2)) || (uVar14 == 0xa0)) {
LAB_0354b500:
                if (((uVar14 != 0xad) && (uVar14 != 0x200b)) && (uVar14 != 0x2060)) {
                  lVar20 = *plVar3;
                  if ((lVar20 == 0) || (lVar31 = *(long *)(lVar20 + 0x50), lVar31 == 0))
                  goto LAB_0354fbf4;
                  if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                  *(int *)(lVar31 + 0x2c) = *(int *)(lVar31 + 0x2c) + 1;
                  *(int *)(lVar20 + 0x20) = *(int *)(lVar20 + 0x20) + 1;
                }
              }
              else {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar24 = FUN_026b97f8(uVar14,0);
                if ((uVar24 & 1) != 0) goto LAB_0354b500;
              }
              if (uVar14 == 0xa0) {
                if ((*plVar3 == 0) || (lVar20 = *(long *)(*plVar3 + 0x50), lVar20 == 0))
                goto LAB_0354fbf4;
                if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                lVar20 = lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_0354b950:
                *(int *)(lVar20 + 0x20) = *(int *)(lVar20 + 0x20) + 1;
              }
            }
LAB_0354ba38:
            if (((int)unaff_x19[0x5c] == 1) && ((uVar14 == 0x2d || (!bVar8)))) {
              if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
              fVar70 = *(float *)(unaff_x19 + 0x3d);
              iVar15 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
              if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
              fVar75 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
              lVar20 = unaff_x19[0xca];
              fVar58 = in_stack_00000098;
              if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                fVar58 = 1.0;
              }
              if ((lVar20 == 0) || (*(long *)(lVar20 + 0x20) == 0)) goto LAB_0354fbf4;
              fVar76 = *(float *)((long)unaff_x19 + 0x404);
              fVar73 = *(float *)(lVar20 + 0x2c);
              fVar51 = (float)FUN_03776ea8(*(long *)(lVar20 + 0x20),0);
              fVar52 = *(float *)(unaff_x19 + 0x6a);
              fVar51 = fVar76 * (fVar70 / (float)iVar15) * fVar75 * fVar58 * fVar73 * fVar51;
              fVar70 = *(float *)((long)unaff_x19 + 0x354);
              if ((uVar14 == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
                if ((*plVar3 == 0) || (lVar20 = *(long *)(*plVar3 + 0x38), lVar20 == 0))
                goto LAB_0354fbf4;
                uVar17 = *(int *)((long)unaff_x19 + 0x494) - 1;
                if (*(uint *)(lVar20 + 0x18) <= uVar17)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                fVar58 = *(float *)(lVar20 + (long)(int)uVar17 * 0x178 + 0x60);
                iVar15 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
                if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                fVar76 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
                lVar20 = unaff_x19[0xca];
                fVar75 = in_stack_00000098;
                if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                  fVar75 = 1.0;
                }
                if ((lVar20 == 0) || (*(long *)(lVar20 + 0x20) == 0)) goto LAB_0354fbf4;
                fVar73 = *(float *)((long)unaff_x19 + 0x404);
                fVar54 = *(float *)(lVar20 + 0x2c);
                fVar51 = (float)FUN_03776ea8(*(long *)(lVar20 + 0x20),0);
                if ((*plVar3 == 0) || (lVar20 = *(long *)(*plVar3 + 0x50), lVar20 == 0))
                goto LAB_0354fbf4;
                if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                lVar20 = lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                fVar52 = *(float *)(lVar20 + 0x60);
                fVar70 = *(float *)(lVar20 + 100);
                fVar51 = fVar73 * (fVar58 / (float)iVar15) * fVar76 * fVar75 * fVar54 * fVar51;
              }
              fVar76 = *(float *)(unaff_x19 + 0x9b);
              fVar58 = 0.0;
              fVar75 = 0.0;
              if ((0.0 < fVar76) && (fVar75 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                fVar75 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
              }
              fVar54 = *(float *)(unaff_x19 + 0x97);
              fVar81 = *(float *)((long)unaff_x19 + 0x4cc);
              fVar73 = *(float *)(unaff_x19 + 200);
              if ((char)unaff_x19[0x1e] == '\0') {
                if ((unaff_x19[0xca] == 0) ||
                   (lVar20 = *(long *)(unaff_x19[0xca] + 0x20), lVar20 == 0)) goto LAB_0354fbf4;
                FUN_03776e6c(&stack0x000008b0,lVar20,0);
                fVar58 = (float)FUN_03776cb4(&stack0x00001710,0);
              }
              puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              fVar56 = *(float *)(unaff_x19 + 0x6c);
              fVar70 = (fVar79 - fVar52) - fVar70;
              bVar12 = true;
              if ((fVar56 <= fVar70) && (bVar12 = false, !NAN(fVar56))) {
                bVar12 = fVar56 == -1.0;
              }
              if (!bVar12) {
                fVar70 = fVar56;
              }
              fVar52 = 1.0;
              if ((uVar34 & 0x18) != 0) {
                fVar52 = DAT_00d38acc;
              }
              if (((fVar54 - (fVar81 - fVar76)) + fVar75 < fVar66) &&
                 (ABS(fVar73) + fVar51 * fVar58 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
                  fVar52 * fVar70)) {
                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_0358c4f0();
                lVar20 = *(long *)(*(long *)puVar11 + 0xb8);
                memcpy(&stack0x00000538,(void *)(lVar20 + 0x788),0x378);
                FUN_0209b210(lVar20 + 0x11f0,&stack0x00000538,
                             *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
              }
            }
            lVar20 = *plVar3;
            if (lVar20 == 0) goto LAB_0354fbf4;
            lVar31 = *(long *)(lVar20 + 0x38);
            if (lVar31 == 0) goto LAB_0354fbf4;
            if (*(uint *)(lVar31 + 0x18) <= *puVar2)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            uVar17 = *(uint *)(unaff_x19 + 0x95);
            lVar31 = lVar31 + (long)(int)*puVar2 * 0x178;
            *(uint *)(lVar31 + 100) = uVar17;
            *(int *)(lVar31 + 0x68) = (int)unaff_x19[0x96];
            if ((bVar8) || ((uVar14 < 0xe && ((1 << (ulong)(uVar14 & 0x1f) & 0x2c00U) != 0)))) {
              lVar20 = *(long *)(lVar20 + 0x50);
              if (lVar20 == 0) goto LAB_0354fbf4;
              if (*(uint *)(lVar20 + 0x18) <= uVar17)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              if (*(int *)(lVar20 + (long)(int)uVar17 * 0x5c + 0x24) == 1) goto LAB_0354bde0;
            }
            else {
              lVar20 = *(long *)(lVar20 + 0x50);
              if (lVar20 == 0) goto LAB_0354fbf4;
LAB_0354bde0:
              if (*(uint *)(lVar20 + 0x18) <= uVar17)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              *(int *)(lVar20 + (long)(int)uVar17 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
            }
            if (uVar14 == 9) {
              if (*unaff_x21 == 0) goto LAB_0354fbf4;
              fVar70 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
              if (*unaff_x21 == 0) goto LAB_0354fbf4;
              fVar55 = *(float *)(unaff_x19 + 200);
              fVar58 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
              fVar70 = fVar80 * fVar70 * fVar58;
              fVar58 = fVar70 * (float)(int)(fVar55 / fVar70);
              uVar65 = (ulong)(uint)fVar58;
              if (fVar58 <= fVar55) {
                fVar58 = fVar55 + fVar70;
              }
LAB_0354c000:
              *(float *)(unaff_x19 + 200) = fVar58;
            }
            else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
              if ((char)unaff_x19[0x1e] == '\0') {
                if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                  fVar75 = 1.0;
                }
                else {
                  fVar75 = (float)thunk_FUN_036bc400(lVar61,0);
                }
                fVar58 = *(float *)(unaff_x19 + 200);
                fVar51 = (float)FUN_03776cb4(&stack0x000017a0,0);
                if (unaff_x19[0x20] != 0) {
                  fVar70 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
                  fVar58 = fVar58 + fVar70 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                             fVar80 * (fVar55 + fVar75 * fVar51) +
                                             fVar49 * (fStack00000000000000d0 +
                                                      fVar50 + *(float *)(unaff_x19[0x20] + 0x1ac)))
                  ;
                  *(float *)(unaff_x19 + 200) = fVar58;
                  goto joined_r0x0354bf48;
                }
                goto LAB_0354fbf4;
              }
              if (*unaff_x21 == 0) goto LAB_0354fbf4;
              fVar58 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                       (*(float *)((long)unaff_x19 + 0x2ac) +
                       fVar80 * fVar55 +
                       fVar49 * (fStack00000000000000d0 + fVar50 + *(float *)(*unaff_x21 + 0x1ac)));
              uVar65 = (ulong)(uint)fVar58;
              fVar58 = *(float *)(unaff_x19 + 200) - fVar58;
              *(float *)(unaff_x19 + 200) = fVar58;
              if ((uVar14 == 0x200b) || (uVar16 != 0)) {
                fVar70 = fVar49 * *(float *)((long)unaff_x19 + 0x2b4);
                uVar65 = (ulong)(uint)fVar70;
                fVar58 = fVar58 - fVar70;
                goto LAB_0354c000;
              }
            }
            else {
              if (*unaff_x21 == 0) goto LAB_0354fbf4;
              fVar70 = *(float *)(unaff_x19 + 200);
              fVar58 = fVar70 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                (*(float *)((long)unaff_x19 + 0x2ac) +
                                (*(float *)(unaff_x19 + 0x56) - fVar53) +
                                fVar49 * (fVar50 + *(float *)(*unaff_x21 + 0x1ac)));
              *(float *)(unaff_x19 + 200) = fVar58;
joined_r0x0354bf48:
              if ((uVar14 == 0x200b) || (uVar65 = (ulong)(uint)fVar70, uVar16 != 0)) {
                fVar70 = fVar49 * *(float *)((long)unaff_x19 + 0x2b4);
                uVar65 = (ulong)(uint)fVar70;
                fVar58 = fVar58 + fVar70;
                goto LAB_0354c000;
              }
            }
            lVar20 = *plVar3;
            if ((lVar20 == 0) || (lVar31 = *(long *)(lVar20 + 0x38), lVar31 == 0))
            goto LAB_0354fbf4;
            uVar17 = *puVar2;
            uVar34 = (uint)*(undefined8 *)(lVar31 + 0x18);
            if (uVar34 <= uVar17) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            *(float *)(lVar31 + (long)(int)uVar17 * 0x178 + 0x144) = fVar58;
            uVar37 = uVar14;
            if ((int)uVar14 < 0xd) {
              if ((uVar14 - 10 < 2) || (uVar14 == 3)) goto LAB_0354c060;
LAB_0354c6e8:
              if (((bool)(bVar8 & uVar14 == 0x2d)) || (uVar17 == uVar30)) goto LAB_0354c060;
            }
            else {
              if (1 < uVar14 - 0x2028) {
                if (uVar14 != 0xd) goto LAB_0354c6e8;
                uVar65 = 0;
                *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                if (uVar17 != uVar30) goto LAB_0354c704;
              }
LAB_0354c060:
              if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
                fVar70 = *(float *)(unaff_x19 + 0x99);
                fVar58 = *(float *)(unaff_x19 + 0x9a);
                if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                fVar70 = fVar70 - fVar58;
                if (((fVar59 < ABS(fVar70)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0')) &&
                   (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
                  FUN_0358c860(fVar70);
                  *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar70
                  ;
                  *(float *)(unaff_x19 + 0x9b) = fVar70 + *(float *)(unaff_x19 + 0x9b);
                  puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                  lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar20 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar20 = *(long *)puVar11;
                  }
                  lVar31 = *(long *)(lVar20 + 0xb8);
                  if (*(int *)(lVar31 + 0x7ac) == (int)unaff_x19[0x95]) {
                    if (*(int *)(lVar20 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar31 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                    }
                    FUN_0209b778(lVar31 + 0x11f0,&stack0x000008b0,
                                 *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                    puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                    lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    memcpy((void *)(*(long *)(lVar20 + 0xb8) + 0x788),&stack0x000008b0,0x378);
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (*(long *)(lVar20 + 0xb8) + 0x818,0);
                    lVar20 = *(long *)(*(long *)puVar11 + 0xb8);
                    *(float *)(lVar20 + 0x7bc) = fVar70 + *(float *)(lVar20 + 0x7bc);
                    *(float *)(lVar20 + 0x800) = fVar70 + *(float *)(lVar20 + 0x800);
                    memcpy(&stack0x000001c0,(void *)(lVar20 + 0x788),0x378);
                    FUN_0209b210(lVar20 + 0x11f0,&stack0x000001c0,
                                 *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                  }
                }
              }
              fVar55 = *(float *)(unaff_x19 + 0x9b);
              *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
              fVar58 = *(float *)((long)unaff_x19 + 0x4cc) - fVar55;
              fVar70 = *(float *)((long)unaff_x19 + 0x4c4);
              if (fVar58 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                fVar70 = fVar58;
              }
              *(float *)((long)unaff_x19 + 0x4c4) = fVar70;
              fVar75 = *(float *)(unaff_x19 + 0x99);
              if (in_stack_000017e4 == '\0') {
                fVar83 = fVar70;
              }
              if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
                 (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
                  ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
                in_stack_000017e4 = '\x01';
              }
              lVar20 = *plVar3;
              if ((lVar20 == 0) || (lVar31 = *(long *)(lVar20 + 0x50), lVar31 == 0))
              goto LAB_0354fbf4;
              uVar17 = *(uint *)(unaff_x19 + 0x95);
              if (*(uint *)(lVar31 + 0x18) <= uVar17)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar45 = unaff_x19[0x93];
              lVar23 = lVar31 + (long)(int)uVar17 * 0x5c;
              *(int *)(lVar23 + 0x34) = (int)lVar45;
              uVar34 = *(uint *)(unaff_x19 + 0x93);
              if ((int)lVar45 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
                uVar34 = *(uint *)((long)unaff_x19 + 0x49c);
              }
              *(uint *)((long)unaff_x19 + 0x49c) = uVar34;
              *(uint *)(lVar23 + 0x38) = uVar34;
              *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
              *(undefined4 *)(lVar23 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
              iVar15 = *(int *)((long)unaff_x19 + 0x49c);
              if ((int)uVar34 <= *(int *)((long)unaff_x19 + 0x4a4)) {
                iVar15 = *(int *)((long)unaff_x19 + 0x4a4);
              }
              *(int *)((long)unaff_x19 + 0x4a4) = iVar15;
              *(int *)(lVar23 + 0x40) = iVar15;
              *(int *)(lVar23 + 0x24) = (*(int *)(lVar23 + 0x3c) - *(int *)(lVar23 + 0x34)) + 1;
              *(undefined4 *)(lVar23 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
              lVar20 = *(long *)(lVar20 + 0x38);
              if (lVar20 == 0) goto LAB_0354fbf4;
              if (*(uint *)(lVar20 + 0x18) <= uVar34)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              uVar78 = *(undefined4 *)(lVar20 + (long)(int)uVar34 * 0x178 + 0x11c);
              lVar31 = lVar31 + (long)(int)uVar17 * 0x5c;
              *(float *)(lVar31 + 0x70) = fVar58;
              *(undefined4 *)(lVar31 + 0x6c) = uVar78;
              lVar20 = *plVar3;
              if ((lVar20 == 0) || (lVar31 = *(long *)(lVar20 + 0x50), lVar31 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar20 = *(long *)(lVar20 + 0x38);
              if (lVar20 == 0) goto LAB_0354fbf4;
              if (*(uint *)(lVar20 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4))
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              fVar75 = fVar75 - fVar55;
              uVar65 = (ulong)(uint)fVar75;
              lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
              *(undefined4 *)(lVar31 + 0x74) =
                   *(undefined4 *)
                    (lVar20 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * 0x178 + 0x128);
              *(float *)(lVar31 + 0x78) = fVar75;
              lVar20 = *plVar3;
              if ((lVar20 == 0) || (lVar45 = *(long *)(lVar20 + 0x50), lVar45 == 0))
              goto LAB_0354fbf4;
              lVar23 = (long)(int)*(uint *)(unaff_x19 + 0x95);
              if (*(uint *)(lVar45 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar31 = lVar45 + lVar23 * 0x5c;
              *(float *)(lVar31 + 0x44) =
                   *(float *)(lVar31 + 0x74) - fVar80 * fStack000000000000016c;
              *(float *)(lVar31 + 0x5c) = fStack00000000000000fc;
              if (*(int *)(lVar31 + 0x24) == 1) {
                *(int *)(lVar45 + lVar23 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
              }
              if ((*unaff_x21 == 0) || (lVar31 = *(long *)(lVar20 + 0x38), lVar31 == 0))
              goto LAB_0354fbf4;
              lVar39 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
              uVar34 = (uint)*(undefined8 *)(lVar31 + 0x18);
              if (uVar34 <= *(uint *)((long)unaff_x19 + 0x4a4))
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              if ((*(char *)(lVar31 + lVar39 * 0x178 + 0x194) == '\0') &&
                 (lVar39 = (long)(int)*(uint *)(unaff_x19 + 0x94),
                 uVar34 <= *(uint *)(unaff_x19 + 0x94)))
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar45 = lVar45 + lVar23 * 0x5c;
              fVar50 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                       (fVar49 * (fStack00000000000000d0 + fVar50 + *(float *)(*unaff_x21 + 0x1ac))
                       - *(float *)((long)unaff_x19 + 0x2ac));
              fVar70 = -fVar50;
              if ((char)unaff_x19[0x1e] != '\0') {
                fVar70 = fVar50;
              }
              *(float *)(lVar45 + 0x58) = *(float *)(lVar31 + lVar39 * 0x178 + 0x144) + fVar70;
              *(float *)(lVar45 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
              *(float *)(lVar45 + 0x54) = fVar58;
              *(float *)(lVar45 + 0x48) = fVar48 * fVar67 + (fVar75 - fVar58);
              *(float *)(lVar45 + 0x4c) = fVar75;
              if ((int)uVar14 < 0x2d) {
                if (uVar14 - 10 < 2) {
LAB_0354c4a8:
                  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_0358c4f0();
                  lVar20 = unaff_x19[0x6d];
                  *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
                  iVar15 = (int)unaff_x19[0x95] + 1;
                  *(int *)(unaff_x19 + 0x95) = iVar15;
                  *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
                  if ((lVar20 != 0) && (*(long *)(lVar20 + 0x50) != 0)) {
                    if (*(int *)(*(long *)(lVar20 + 0x50) + 0x18) <= iVar15) {
                      FUN_0358ca18();
                      lVar20 = unaff_x19[0x6d];
                      if (lVar20 == 0) goto LAB_0354fbf4;
                    }
                    lVar20 = *(long *)(lVar20 + 0x38);
                    if (lVar20 != 0) {
                      if (*puVar2 < *(uint *)(lVar20 + 0x18)) {
                        fVar70 = *(float *)(lVar20 + (long)(int)*puVar2 * 0x178 + 0x154);
                        if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                          if ((uVar14 == 0x2029) || (fVar58 = 0.0, uVar14 == 10)) {
                            fVar58 = *(float *)((long)unaff_x19 + 0x2cc);
                          }
                          uVar26 = 0;
                          fVar58 = fVar70 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                                   fVar48 * (fVar67 + *(float *)((long)unaff_x19 + 700)) +
                                   fVar49 * (*(float *)(unaff_x19 + 0x57) + fVar58) +
                                   *(float *)(unaff_x19 + 0x9b);
                        }
                        else {
                          if ((uVar14 == 0x2029) || (fVar58 = 0.0, uVar14 == 10)) {
                            fVar58 = *(float *)((long)unaff_x19 + 0x2cc);
                          }
                          uVar26 = 1;
                          fVar58 = *(float *)(unaff_x19 + 0x9b) +
                                   *(float *)(unaff_x19 + 0x58) +
                                   fVar49 * (*(float *)(unaff_x19 + 0x57) + fVar58);
                        }
                        *(float *)(unaff_x19 + 0x9b) = fVar58;
                        *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar26;
                        puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                        lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                        if (*(int *)(lVar20 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar20 = *(long *)puVar11;
                        }
                        uVar64 = *(undefined8 *)(*(long *)(lVar20 + 0xb8) + 0x15a8);
                        *(float *)(unaff_x19 + 0x9a) = fVar70;
                        uVar24 = NEON_rev64(uVar64,4);
                        unaff_x19[0x99] = uVar24;
                        *(float *)(unaff_x19 + 200) =
                             *(float *)(unaff_x19 + 0x81) + 0.0 +
                             *(float *)((long)unaff_x19 + 0x40c);
                        FUN_0358c4f0();
                        FUN_0358c4f0();
                        *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
                        goto LAB_0354c6b4;
                      }
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    }
                  }
                  goto LAB_0354fbf4;
                }
                if (uVar14 == 3) {
                  if (unaff_x19[0x8f] == 0) goto LAB_0354fbf4;
                  uVar82 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
                  uVar37 = 3;
                }
              }
              else if ((uVar14 - 0x2028 < 2) || (uVar14 == 0x2d)) goto LAB_0354c4a8;
            }
LAB_0354c704:
            uVar17 = *puVar2;
            if (uVar34 <= uVar17) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if (*(char *)(lVar31 + (long)(int)uVar17 * 0x178 + 0x194) != '\0') {
              lVar31 = lVar31 + (long)(int)uVar17 * 0x178;
              uVar65 = *(ulong *)(lVar31 + 0x11c);
              uVar24 = *(ulong *)(unaff_x22 + 0x230);
              *(ulong *)(unaff_x22 + 0x230) =
                   uVar24 ^ (uVar24 ^ uVar65) &
                            ~CONCAT44(-(uint)((float)(uVar24 >> 0x20) < (float)(uVar65 >> 0x20)),
                                      -(uint)((float)uVar24 < (float)uVar65));
              uVar24 = *(ulong *)(unaff_x22 + 0x238);
              uVar65 = *(ulong *)(lVar31 + 0x128);
              *(ulong *)(unaff_x22 + 0x238) =
                   uVar24 ^ (uVar24 ^ uVar65) &
                            ~CONCAT44(-(uint)((float)(uVar65 >> 0x20) < (float)(uVar24 >> 0x20)),
                                      -(uint)((float)uVar65 < (float)uVar24));
            }
            if (((int)unaff_x19[0x5c] == 5) &&
               ((0xd < uVar37 || ((1 << (ulong)(uVar37 & 0x1f) & 0x2c00U) == 0)))) {
              lVar31 = *(long *)(lVar20 + 0x58);
              if (lVar31 == 0) goto LAB_0354fbf4;
              iVar15 = (int)unaff_x19[0x96] + 1;
              if (*(int *)(lVar31 + 0x18) < iVar15) {
                if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_01ff02b8((long *)(lVar20 + 0x58),iVar15,1,
                             *(undefined8 *)OVRPlugin_MeshType_TypeInfo);
                lVar20 = *plVar3;
                if (lVar20 == 0) goto LAB_0354fbf4;
              }
              lVar31 = *(long *)(lVar20 + 0x58);
              if (lVar31 == 0) goto LAB_0354fbf4;
              uVar34 = *(uint *)(unaff_x19 + 0x96);
              lVar45 = (long)(int)uVar34;
              uVar17 = *(uint *)(lVar31 + 0x18);
              if (uVar17 <= uVar34) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar23 = lVar31 + lVar45 * 0x14;
              fVar58 = *(float *)(lVar23 + 0x30);
              uVar65 = (ulong)(uint)fVar58;
              *(undefined4 *)(lVar23 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
              fVar70 = *(float *)((long)unaff_x19 + 0x4c4);
              if (fVar58 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                fVar70 = fVar58;
              }
              *(float *)(lVar23 + 0x30) = fVar70;
              uVar37 = *(uint *)((long)unaff_x19 + 0x494);
              if (uVar37 == 0 && uVar34 == 0) {
                *(uint *)(lVar31 + (ulong)uVar34 * 0x14 + 0x20) = uVar37;
              }
              else {
                uVar7 = uVar37 - 1;
                if (0 < (int)uVar37) {
                  lVar20 = *(long *)(lVar20 + 0x38);
                  if (lVar20 == 0) goto LAB_0354fbf4;
                  if (*(uint *)(lVar20 + 0x18) <= uVar7)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  if (uVar34 != *(uint *)(lVar20 + (ulong)uVar7 * 0x178 + 0x68)) {
                    if (uVar34 - 1 < uVar17) {
                      *(uint *)(lVar31 + 0x20 + (long)(int)(uVar34 - 1) * 0x14 + 4) = uVar7;
                      *(uint *)(lVar31 + 0x20 + lVar45 * 0x14) = uVar37;
                      goto LAB_0354c780;
                    }
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  }
                }
                if (uVar37 == uVar30) {
                  *(uint *)(lVar31 + lVar45 * 0x14 + 0x24) = uVar30;
                }
              }
            }
LAB_0354c780:
            puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (((char)unaff_x19[0x5b] == '\0') &&
               ((6 < *(uint *)(unaff_x19 + 0x5c) ||
                ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0))))
            goto LAB_0354cc90;
            if ((uVar16 == 0) && (((uVar14 != 0x2d && (uVar14 != 0x200b)) && (uVar14 != 0xad)))) {
              if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_0354c87c:
                if (((((0x2bfd < uVar14 - 0xac01) && (0xfd < uVar14 - 0x1101)) &&
                     (0x1d < uVar14 - 0xa961)) || (uVar24 = FUN_03597a54(0), (uVar24 & 1) != 0)) &&
                   ((((0xed < uVar14 - 0xff01 && (0x1d < uVar14 - 0xfe31)) &&
                     (0x717d < uVar14 - 0x2e81)) && (0x1fd < uVar14 - 0xf901)))) goto LAB_0354c904;
                lVar20 = FUN_035978e8(0);
                if ((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) goto LAB_0354fbf4;
                uVar17 = FUN_0219c130(*(long *)(lVar20 + 0x10),&stack0x000008b0,
                                      *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                if ((int)uVar30 <= (int)*puVar2) {
                  in_stack_000008b0 = uVar14;
                  if ((uVar17 & 1) == 0) {
LAB_0354cc08:
                    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    FUN_0358c4f0();
                    bVar9 = 0;
                    goto LAB_0354cc90;
                  }
LAB_0354cb6c:
                  if (uVar42 != uVar28 || ((bVar9 ^ 0xff) & 1) != 0) goto LAB_0354cc90;
                  if (uVar16 != 0) goto LAB_0354cb88;
                  goto LAB_0354cbc0;
                }
                lVar20 = FUN_035978e8(0);
                if (((lVar20 == 0) || (*plVar3 == 0)) ||
                   (lVar31 = *(long *)(*plVar3 + 0x38), lVar31 == 0)) goto LAB_0354fbf4;
                if (*(uint *)(lVar31 + 0x18) <= *puVar2 + 1)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if (*(long *)(lVar20 + 0x18) == 0) goto LAB_0354fbf4;
                in_stack_000008b0 =
                     (uint)*(ushort *)(lVar31 + (long)(int)(*puVar2 + 1) * 0x178 + 0x20);
                uVar24 = FUN_0219c130(*(long *)(lVar20 + 0x18),&stack0x000008b0,
                                      *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                if ((uVar17 & 1) != 0) goto LAB_0354cb6c;
                if ((uVar24 & 1) == 0) goto LAB_0354cc08;
                if (bVar9 == 0) goto LAB_0354cc88;
                if (uVar16 != 0) {
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
                if (bVar9 == 0) goto LAB_0354cc88;
LAB_0354c910:
                if (!bVar13 && uVar14 == 0xad) goto LAB_0354cb88;
LAB_0354cbc0:
                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_0358c4f0();
              }
              bVar9 = 1;
            }
            else if (*(char *)((long)unaff_x19 + 0x2da) == '\x01') {
LAB_0354c904:
              if (bVar9 != 0) {
                if (uVar16 == 0) goto LAB_0354c910;
LAB_0354cb88:
                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_0358c4f0();
                goto LAB_0354cbc0;
              }
LAB_0354cc88:
              bVar9 = 0;
            }
            else {
              if (((uVar14 - 0x2007 < 0x29) &&
                  ((1L << ((ulong)(uVar14 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                 ((uVar14 == 0xa0 || (uVar14 == 0x2060)))) goto LAB_0354c87c;
              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_0358c4f0();
              bVar9 = 0;
              *(undefined4 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0xe78) = 0xffffffff;
            }
LAB_0354cc90:
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0358c4f0();
            *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
            uVar24 = (ulong)(uint)fVar80;
          }
        }
        else {
          *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
          *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
          uVar22 = FUN_03586568();
          if (((uVar22 & 1) == 0) ||
             (uVar82 = in_stack_0000179c, *(int *)((long)unaff_x19 + 0x644) != 0))
          goto LAB_03549378;
        }
LAB_03549564:
        uVar82 = uVar82 + 1;
        lVar20 = unaff_x19[0x8f];
        in_stack_000017ec = uVar14;
        if (lVar20 == 0) goto LAB_0354fbf4;
        goto LAB_03549220;
      }
    }
  }
LAB_0354fbf4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
LAB_0354d7c0:
  uVar82 = uVar14 - 1;
  if (*(uint *)(lVar20 + 0x18) <= uVar82)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*plVar3 == 0) || (lVar31 = *(long *)(*plVar3 + 0x50), lVar31 == 0)) goto LAB_0354fbf4;
  lVar23 = (long)(int)uVar82;
  lVar45 = lVar20 + lVar23 * 0x178;
  uVar16 = *(uint *)(lVar45 + 100);
  if (*(uint *)(lVar31 + 0x18) <= uVar16)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar39 = *(long *)(lVar45 + 0x38);
  lVar41 = (long)(int)uVar16;
  lVar31 = lVar31 + lVar41 * 0x5c;
  uVar42 = *(uint *)(lVar31 + 0x68);
  uVar34 = (uint)*(ushort *)(lVar45 + 0x20);
  uVar28 = *(uint *)(lVar31 + 0x3c);
  iVar5 = *(int *)(lVar31 + 0x20);
  iVar18 = *(int *)(lVar31 + 0x28);
  iVar19 = *(int *)(lVar31 + 0x2c);
  fVar48 = *(float *)(lVar31 + 0x4c);
  uVar17 = *(uint *)(lVar31 + 0x40);
  fVar66 = *(float *)(lVar31 + 0x54);
  fVar83 = *(float *)(lVar31 + 0x58);
  fVar58 = *(float *)(lVar31 + 0x5c);
  fVar80 = *(float *)(lVar31 + 0x60);
  fVar70 = *(float *)(lVar31 + 0x6c);
  fVar50 = *(float *)(lVar31 + 0x70);
  fVar67 = *(float *)(lVar31 + 0x74);
  fVar49 = *(float *)(lVar31 + 0x78);
  if ((int)uVar42 < 9) {
    switch(uVar42) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        fStack00000000000000fc = fVar80 + 0.0;
      }
      else {
        fStack00000000000000fc = 0.0 - fVar83;
      }
      break;
    case 2:
LAB_0354d968:
      fStack00000000000000fc = (fVar80 + fVar58 * 0.5) - fVar83 * 0.5;
      break;
    default:
      goto switchD_0354d8a4_caseD_3;
    case 4:
      fStack00000000000000fc = (fVar58 + fVar80) - fVar83;
      if ((char)unaff_x19[0x1e] != '\0') {
        fStack00000000000000fc = fVar58 + fVar80;
      }
      break;
    case 8:
      goto switchD_0354d8a4_caseD_8;
    }
LAB_0354d9d8:
    uStack00000000000000f0 = 0;
  }
  else if (uVar42 == 0x10) {
switchD_0354d8a4_caseD_8:
    if (uVar34 < 0xad) {
      if ((uVar34 != 3) && (uVar34 != 10)) goto FUN_0354d8fc;
    }
    else if ((uVar34 != 0xad) && ((uVar34 != 0x200b && (uVar34 != 0x2060)))) {
FUN_0354d8fc:
      if (*(uint *)(lVar20 + 0x18) <= uVar28)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar6 = *(undefined2 *)(lVar20 + (long)(int)uVar28 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar24 = FUN_026b8cc4(uVar6,0);
      if ((uVar24 & 1) == 0) {
        bVar1 = (int)uVar16 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar83 <= fVar58) && (!bVar1 && uVar42 >> 4 == 0)) {
        fStack00000000000000fc = fVar80;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar58 + fVar80;
        }
        goto LAB_0354d9d8;
      }
      if (((uVar14 == 1) || (uVar16 != uVar30)) || (uVar82 == *(uint *)((long)unaff_x19 + 0x324))) {
        fStack00000000000000fc = fVar80;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar58 + fVar80;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uStack0000000000000030 = FUN_026b97f8(uVar34,0);
        uStack00000000000000f0 = 0;
      }
      else {
        cVar27 = (char)unaff_x19[0x1e];
        fVar80 = -fVar83;
        if (cVar27 != '\0') {
          fVar80 = fVar83;
        }
        if (*(uint *)(lVar20 + 0x18) <= uVar28)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        iVar19 = (int)*(char *)(lVar20 + (long)(int)uVar28 * 0x178 + 0x194) +
                 (-iVar5 - (uStack0000000000000030 & 1)) + iVar19 + -1;
        if (iVar19 < 1) {
          fVar83 = 1.0;
          iVar19 = 1;
        }
        else {
          fVar83 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar34 == 9) {
LAB_0354f76c:
          fVar83 = 1.0 - fVar83;
        }
        else {
          if (uVar34 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar24 = FUN_026b97f8(uVar34,0);
            cVar27 = (char)unaff_x19[0x1e];
            if ((uVar24 & 1) != 0) goto LAB_0354f76c;
          }
          iVar19 = (iVar5 - (~uStack0000000000000030 & 1)) + iVar18;
        }
        fVar83 = ((fVar58 + fVar80) * fVar83) / (float)iVar19;
        if (cVar27 == '\0') {
          fStack00000000000000fc = fStack00000000000000fc + fVar83;
          uStack00000000000000f0 =
               CONCAT44((float)((ulong)uStack00000000000000f0 >> 0x20) + 0.0,
                        (float)uStack00000000000000f0 + 0.0);
        }
        else {
          fStack00000000000000fc = fStack00000000000000fc - fVar83;
        }
      }
    }
  }
  else if (uVar42 == 0x20) {
    fVar83 = fVar70 + fVar67;
    goto LAB_0354d968;
  }
switchD_0354d8a4_caseD_3:
  uVar42 = (uint)*(undefined8 *)(lVar20 + 0x18);
  if (uVar42 <= uVar82) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar31 = lVar20 + lVar23 * 0x178;
  fVar80 = fStack00000000000000c4 + fStack00000000000000fc;
  fVar83 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000f0;
  fVar58 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000f0 >> 0x20);
  if (*(char *)(lVar31 + 0x194) == '\0') goto LAB_0354e1d0;
  iVar18 = *(int *)(lVar20 + lVar23 * 0x178 + 0x2c);
  if (iVar18 != 0) goto LAB_0354e05c;
  fVar59 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar16,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar45 = lVar20 + lVar23 * 0x178;
    *(undefined4 *)(lVar45 + 0x84) = 0;
    *(undefined4 *)(lVar45 + 0xac) = 0;
    *(undefined4 *)(lVar45 + 0xd4) = 0x3f800000;
    fVar59 = 1.0;
    break;
  case 1:
    fVar49 = *(float *)(lVar20 + lVar23 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar45 = lVar20 + lVar23 * 0x178;
      fVar67 = (fStack00000000000000fc + fVar49) - *(float *)(unaff_x22 + 0x230);
      fVar49 = *(float *)(unaff_x22 + 0x238) - *(float *)(unaff_x22 + 0x230);
      goto LAB_0354db24;
    }
    lVar45 = lVar20 + lVar23 * 0x178;
    fVar67 = fVar67 - fVar70;
    *(float *)(lVar45 + 0x84) = fVar59 + (fVar49 - fVar70) / fVar67;
    *(float *)(lVar45 + 0xac) = fVar59 + (*(float *)(lVar45 + 0x98) - fVar70) / fVar67;
    *(float *)(lVar45 + 0xd4) = fVar59 + (*(float *)(lVar45 + 0xc0) - fVar70) / fVar67;
    fVar59 = fVar59 + (*(float *)(lVar45 + 0xe8) - fVar70) / fVar67;
    break;
  case 2:
    lVar45 = lVar20 + lVar23 * 0x178;
    fVar49 = *(float *)(unaff_x22 + 0x238) - *(float *)(unaff_x22 + 0x230);
    fVar67 = (fStack00000000000000fc + *(float *)(lVar45 + 0x70)) - *(float *)(unaff_x22 + 0x230);
LAB_0354db24:
    *(float *)(lVar45 + 0x84) = fVar59 + fVar67 / fVar49;
    *(float *)(lVar45 + 0xac) =
         fVar59 + ((fStack00000000000000fc + *(float *)(lVar45 + 0x98)) -
                  *(float *)(unaff_x22 + 0x230)) /
                  (*(float *)(unaff_x22 + 0x238) - *(float *)(unaff_x22 + 0x230));
    *(float *)(lVar45 + 0xd4) =
         fVar59 + ((fStack00000000000000fc + *(float *)(lVar45 + 0xc0)) -
                  *(float *)(unaff_x22 + 0x230)) /
                  (*(float *)(unaff_x22 + 0x238) - *(float *)(unaff_x22 + 0x230));
    fVar59 = fVar59 + ((fStack00000000000000fc + *(float *)(lVar45 + 0xe8)) -
                      *(float *)(unaff_x22 + 0x230)) /
                      (*(float *)(unaff_x22 + 0x238) - *(float *)(unaff_x22 + 0x230));
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar45 = lVar20 + lVar23 * 0x178;
      *(undefined4 *)(lVar45 + 0x88) = 0;
      *(undefined4 *)(lVar45 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar45 + 0xd8) = 0;
      *(undefined4 *)(lVar45 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar45 = lVar20 + lVar23 * 0x178;
      fVar49 = fVar49 - fVar50;
      fVar67 = fVar59 + (*(float *)(lVar45 + 0x74) - fVar50) / fVar49;
      fVar49 = fVar59 + (*(float *)(lVar45 + 0x9c) - fVar50) / fVar49;
      *(float *)(lVar45 + 0x88) = fVar67;
      *(float *)(lVar45 + 0xb0) = fVar49;
      *(float *)(lVar45 + 0xd8) = fVar67;
      *(float *)(lVar45 + 0x100) = fVar49;
      break;
    case 2:
      lVar45 = lVar20 + lVar23 * 0x178;
      fVar67 = fVar59 + (*(float *)(lVar45 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar45 + 0x88) = fVar67;
      fVar49 = *(float *)(unaff_x19 + 0x9c);
      fVar70 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar45 + 0xd8) = fVar67;
      fVar67 = fVar59 + (*(float *)(lVar45 + 0x9c) - fVar49) / (fVar70 - fVar49);
      *(float *)(lVar45 + 0xb0) = fVar67;
      *(float *)(lVar45 + 0x100) = fVar67;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar42 = (uint)*(undefined8 *)(lVar20 + 0x18);
    }
    if (uVar42 <= uVar82) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar45 = lVar20 + lVar23 * 0x178;
    fVar67 = *(float *)(lVar45 + 0x15c);
    fVar49 = (1.0 - (*(float *)(lVar45 + 0x88) + *(float *)(lVar45 + 0xb0)) * fVar67) * 0.5;
    fVar70 = fVar59 + *(float *)(lVar45 + 0x88) * fVar67 + fVar49;
    fVar59 = fVar59 + fVar49 + *(float *)(lVar45 + 0xb0) * fVar67;
    *(float *)(lVar45 + 0x84) = fVar70;
    *(float *)(lVar45 + 0xac) = fVar70;
    *(float *)(lVar45 + 0xd4) = fVar59;
    break;
  default:
    goto switchD_0354da88_default;
  }
  *(float *)(lVar20 + lVar23 * 0x178 + 0xfc) = fVar59;
switchD_0354da88_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar42 <= uVar82) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar45 = lVar20 + lVar23 * 0x178;
    *(undefined4 *)(lVar45 + 0x88) = 0;
    *(undefined4 *)(lVar45 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar45 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar45 + 0x100) = 0;
    break;
  case 1:
    if (uVar82 < uVar42) {
      lVar45 = lVar20 + lVar23 * 0x178;
      fVar48 = fVar48 - fVar66;
      fVar59 = (*(float *)(lVar45 + 0x74) - fVar66) / fVar48;
      fVar48 = (*(float *)(lVar45 + 0x9c) - fVar66) / fVar48;
      *(float *)(lVar45 + 0x88) = fVar59;
      goto LAB_0354de84;
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  case 2:
    if (uVar42 <= uVar82) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar45 = lVar20 + lVar23 * 0x178;
    fVar59 = (*(float *)(lVar45 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar45 + 0x88) = fVar59;
    fVar48 = (*(float *)(lVar45 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
    *(float *)(lVar45 + 0xb0) = fVar48;
    *(float *)(lVar45 + 0xd8) = fVar48;
    *(float *)(lVar45 + 0x100) = fVar59;
    break;
  case 3:
    if (uVar42 <= uVar82) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar45 = lVar20 + lVar23 * 0x178;
    fVar48 = *(float *)(lVar45 + 0x15c);
    fVar67 = (1.0 - (*(float *)(lVar45 + 0x84) + *(float *)(lVar45 + 0xd4)) / fVar48) * 0.5;
    fVar59 = *(float *)(lVar45 + 0x84) / fVar48 + fVar67;
    fVar67 = fVar67 + *(float *)(lVar45 + 0xd4) / fVar48;
    *(float *)(lVar45 + 0x88) = fVar59;
    *(float *)(lVar45 + 0xb0) = fVar67;
    *(float *)(lVar45 + 0x100) = fVar59;
    *(float *)(lVar45 + 0xd8) = fVar67;
  }
  if (uVar42 <= uVar82) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar45 = lVar20 + lVar23 * 0x178;
  fVar59 = ABS(fVar79) * *(float *)(lVar45 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar45 + 0x5c) == '\0') && ((*(byte *)(lVar20 + lVar23 * 0x178 + 400) & 1) != 0)) {
    fVar59 = -fVar59;
  }
  lVar45 = lVar20 + lVar23 * 0x178;
  fVar48 = *(float *)(lVar45 + 0x88);
  fVar49 = *(float *)(lVar45 + 0x84);
  fVar67 = -2.1474836e+09;
  if (fVar49 != INFINITY) {
    fVar67 = (float)(int)fVar49;
  }
  fVar70 = *(float *)(lVar45 + 0xd4);
  fVar50 = *(float *)(lVar45 + 0xd8);
  fVar66 = -2.1474836e+09;
  if (fVar48 != INFINITY) {
    fVar66 = (float)(int)fVar48;
  }
  uVar60 = FUN_03591d3c(fVar49 - fVar67,fVar48 - fVar66);
  *(undefined4 *)(lVar45 + 0x84) = uVar60;
  if (*(uint *)(lVar20 + 0x18) <= uVar82)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar50 = fVar50 - fVar66;
  *(float *)(lVar45 + 0x88) = fVar59;
  uVar60 = FUN_03591d3c(fVar49 - fVar67,fVar50);
  *(undefined4 *)(lVar20 + lVar23 * 0x178 + 0xac) = uVar60;
  if (*(uint *)(lVar20 + 0x18) <= uVar82)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar70 = fVar70 - fVar67;
  *(float *)(lVar20 + lVar23 * 0x178 + 0xb0) = fVar59;
  fVar67 = (float)FUN_03591d3c(fVar70,fVar50);
  *(float *)(lVar45 + 0xd4) = fVar67;
  if (*(uint *)(lVar20 + 0x18) <= uVar82)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar45 + 0xd8) = fVar59;
  uVar60 = FUN_03591d3c(fVar70,fVar48 - fVar66);
  *(undefined4 *)(lVar20 + lVar23 * 0x178 + 0xfc) = uVar60;
  uVar42 = (uint)*(undefined8 *)(lVar20 + 0x18);
  if (uVar42 <= uVar82) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar20 + lVar23 * 0x178 + 0x100) = fVar59;
LAB_0354e05c:
  if (((int)uVar82 < (int)unaff_x19[0x65]) && (iVar15 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar16 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar42 <= uVar82) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
      lVar31 = lVar20 + lVar23 * 0x178;
      *(ulong *)(lVar31 + 0x70) =
           CONCAT44(fVar83 + (float)((ulong)*(undefined8 *)(lVar31 + 0x70) >> 0x20),
                    fVar80 + (float)*(undefined8 *)(lVar31 + 0x70));
      *(float *)(lVar31 + 0x78) = fVar58 + *(float *)(lVar31 + 0x78);
      *(ulong *)(lVar31 + 0x98) =
           CONCAT44(fVar83 + (float)((ulong)*(undefined8 *)(lVar31 + 0x98) >> 0x20),
                    fVar80 + (float)*(undefined8 *)(lVar31 + 0x98));
      *(float *)(lVar31 + 0xa0) = fVar58 + *(float *)(lVar31 + 0xa0);
      *(ulong *)(lVar31 + 0xc0) =
           CONCAT44(fVar83 + (float)((ulong)*(undefined8 *)(lVar31 + 0xc0) >> 0x20),
                    fVar80 + (float)*(undefined8 *)(lVar31 + 0xc0));
      *(float *)(lVar31 + 200) = fVar58 + *(float *)(lVar31 + 200);
      *(ulong *)(lVar31 + 0xe8) =
           CONCAT44(fVar83 + (float)((ulong)*(undefined8 *)(lVar31 + 0xe8) >> 0x20),
                    fVar80 + (float)*(undefined8 *)(lVar31 + 0xe8));
      *(float *)(lVar31 + 0xf0) = fVar58 + *(float *)(lVar31 + 0xf0);
      goto LAB_0354e184;
    }
    if (((int)uVar16 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar82 < uVar42) {
        if (*(uint *)(lVar20 + lVar23 * 0x178 + 0x68) == uVar4) goto LAB_0354f0d4;
        goto LAB_0354e0cc;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
  }
LAB_0354e0cc:
  if (uVar42 <= uVar82) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac();
    DAT_0411f172 = '\x01';
    uVar42 = *(uint *)(lVar20 + 0x18);
  }
  puVar11 = PTR_DAT_03cbded8;
  uVar60 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar45 = lVar20 + lVar23 * 0x178;
  *(undefined8 *)(lVar45 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar45 + 0x78) = uVar60;
  if (uVar42 <= uVar82) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar60 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
  lVar45 = lVar20 + lVar23 * 0x178;
  *(undefined8 *)(lVar45 + 0x98) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
  *(undefined4 *)(lVar45 + 0xa0) = uVar60;
  uVar60 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
  *(undefined8 *)(lVar45 + 0xc0) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
  *(undefined4 *)(lVar45 + 200) = uVar60;
  uVar60 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
  *(undefined8 *)(lVar45 + 0xe8) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
  *(undefined4 *)(lVar45 + 0xf0) = uVar60;
  *(undefined1 *)(lVar31 + 0x194) = 0;
LAB_0354e184:
  if (iVar18 == 0) {
    pcVar33 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
    (*pcVar33)();
  }
  else if (iVar18 == 1) {
    pcVar33 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0354e1b4;
  }
LAB_0354e1d0:
  if ((*plVar3 == 0) || (lVar31 = *(long *)(*plVar3 + 0x38), lVar31 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar31 + 0x18) <= uVar82)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar31 = lVar31 + lVar23 * 0x178;
  uVar64 = *(undefined8 *)(lVar31 + 0x11c);
  *(undefined8 *)(lVar31 + 0x11c) =
       CONCAT44(fVar83 + (float)((ulong)uVar64 >> 0x20),fVar80 + (float)uVar64);
  *(float *)(lVar31 + 0x124) = fVar58 + *(float *)(lVar31 + 0x124);
  if ((*plVar3 == 0) || (lVar31 = *(long *)(*plVar3 + 0x38), lVar31 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar31 + 0x18) <= uVar82)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar31 = lVar31 + lVar23 * 0x178;
  *(ulong *)(lVar31 + 0x110) =
       CONCAT44(fVar83 + (float)((ulong)*(undefined8 *)(lVar31 + 0x110) >> 0x20),
                fVar80 + (float)*(undefined8 *)(lVar31 + 0x110));
  *(float *)(lVar31 + 0x118) = fVar58 + *(float *)(lVar31 + 0x118);
  if ((*plVar3 == 0) || (lVar31 = *(long *)(*plVar3 + 0x38), lVar31 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar31 + 0x18) <= uVar82)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar31 = lVar31 + lVar23 * 0x178;
  *(ulong *)(lVar31 + 0x128) =
       CONCAT44(fVar83 + (float)((ulong)*(undefined8 *)(lVar31 + 0x128) >> 0x20),
                fVar80 + (float)*(undefined8 *)(lVar31 + 0x128));
  *(float *)(lVar31 + 0x130) = fVar58 + *(float *)(lVar31 + 0x130);
  if ((*plVar3 == 0) || (lVar31 = *(long *)(*plVar3 + 0x38), lVar31 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar31 + 0x18) <= uVar82)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar31 = lVar31 + lVar23 * 0x178;
  *(float *)(lVar31 + 0x134) = fVar80 + *(float *)(lVar31 + 0x134);
  *(ulong *)(lVar31 + 0x138) =
       CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar31 + 0x138) >> 0x20),
                fVar83 + (float)*(undefined8 *)(lVar31 + 0x138));
  lVar31 = *plVar3;
  if ((lVar31 == 0) || (lVar45 = *(long *)(lVar31 + 0x38), lVar45 == 0)) goto LAB_0354fbf4;
  uVar42 = *(uint *)(lVar45 + 0x18);
  if (uVar42 <= uVar82) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar38 = lVar45 + lVar23 * 0x178;
  *(float *)(lVar38 + 0x150) = fVar83 + *(float *)(lVar38 + 0x150);
  *(ulong *)(lVar38 + 0x140) =
       CONCAT44(fVar80 + (float)((ulong)*(undefined8 *)(lVar38 + 0x140) >> 0x20),
                fVar80 + (float)*(undefined8 *)(lVar38 + 0x140));
  *(ulong *)(lVar38 + 0x148) =
       CONCAT44(fVar83 + (float)((ulong)*(undefined8 *)(lVar38 + 0x148) >> 0x20),
                fVar83 + (float)*(undefined8 *)(lVar38 + 0x148));
  if (uVar16 == uVar30) {
    uVar30 = *puVar2 - 1;
    if (uVar82 == uVar30) goto LAB_0354e3ec;
  }
  else {
    lVar31 = *(long *)(lVar31 + 0x50);
    if (lVar31 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar31 + 0x18) <= uVar30)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar38 = (long)(int)uVar30;
    lVar40 = lVar31 + lVar38 * 0x5c;
    fVar67 = fVar83 + *(float *)(lVar40 + 0x54);
    *(ulong *)(lVar40 + 0x4c) =
         CONCAT44(fVar83 + (float)((ulong)*(undefined8 *)(lVar40 + 0x4c) >> 0x20),
                  fVar83 + (float)*(undefined8 *)(lVar40 + 0x4c));
    *(float *)(lVar40 + 0x54) = fVar67;
    *(float *)(lVar40 + 0x58) = fVar80 + *(float *)(lVar40 + 0x58);
    if (uVar42 <= *(uint *)(lVar40 + 0x34))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar60 = *(undefined4 *)(lVar45 + (long)(int)*(uint *)(lVar40 + 0x34) * 0x178 + 0x11c);
    lVar31 = lVar31 + lVar38 * 0x5c;
    *(float *)(lVar31 + 0x70) = fVar67;
    *(undefined4 *)(lVar31 + 0x6c) = uVar60;
    lVar31 = *plVar3;
    if ((lVar31 == 0) || (lVar45 = *(long *)(lVar31 + 0x50), lVar45 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar45 + 0x18) <= uVar30)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar31 = *(long *)(lVar31 + 0x38);
    if (lVar31 == 0) goto LAB_0354fbf4;
    uVar30 = *(uint *)(lVar45 + lVar38 * 0x5c + 0x40);
    if (*(uint *)(lVar31 + 0x18) <= uVar30)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar45 = lVar45 + lVar38 * 0x5c;
    *(undefined4 *)(lVar45 + 0x74) = *(undefined4 *)(lVar31 + (long)(int)uVar30 * 0x178 + 0x128);
    *(undefined4 *)(lVar45 + 0x78) = *(undefined4 *)(lVar45 + 0x4c);
    uVar30 = *puVar2 - 1;
LAB_0354e3ec:
    if (uVar82 == uVar30) {
      lVar31 = *plVar3;
      if ((lVar31 == 0) || (lVar45 = *(long *)(lVar31 + 0x50), lVar45 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar45 + 0x18) <= uVar16)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar38 = lVar45 + lVar41 * 0x5c;
      fVar67 = fVar83 + *(float *)(lVar38 + 0x54);
      *(ulong *)(lVar38 + 0x4c) =
           CONCAT44(fVar83 + (float)((ulong)*(undefined8 *)(lVar38 + 0x4c) >> 0x20),
                    fVar83 + (float)*(undefined8 *)(lVar38 + 0x4c));
      *(float *)(lVar38 + 0x54) = fVar67;
      *(float *)(lVar38 + 0x58) = fVar80 + *(float *)(lVar38 + 0x58);
      lVar31 = *(long *)(lVar31 + 0x38);
      if (lVar31 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar31 + 0x18) <= *(uint *)(lVar38 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar60 = *(undefined4 *)(lVar31 + (long)(int)*(uint *)(lVar38 + 0x34) * 0x178 + 0x11c);
      lVar45 = lVar45 + lVar41 * 0x5c;
      *(float *)(lVar45 + 0x70) = fVar67;
      *(undefined4 *)(lVar45 + 0x6c) = uVar60;
      lVar31 = *plVar3;
      if ((lVar31 == 0) || (lVar45 = *(long *)(lVar31 + 0x50), lVar45 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar45 + 0x18) <= uVar16)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar31 = *(long *)(lVar31 + 0x38);
      if (lVar31 == 0) goto LAB_0354fbf4;
      uVar30 = *(uint *)(lVar45 + lVar41 * 0x5c + 0x40);
      if (*(uint *)(lVar31 + 0x18) <= uVar30)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar45 = lVar45 + lVar41 * 0x5c;
      *(undefined4 *)(lVar45 + 0x74) = *(undefined4 *)(lVar31 + (long)(int)uVar30 * 0x178 + 0x128);
      *(undefined4 *)(lVar45 + 0x78) = *(undefined4 *)(lVar45 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar24 = FUN_026b82c4(uVar34,0);
  if (((((uVar24 & 1) == 0) && (1 < uVar34 - 0x2010)) && (uVar34 != 0xad)) && (uVar34 != 0x2d)) {
    if (bVar10) {
      if (((uVar14 != 1) && ((int)uVar82 < (int)(*(uint *)(lVar20 + 0x18) - 1))) &&
         (((int)uVar82 < (int)*puVar2 && ((uVar34 == 0x2019 || (uVar34 == 0x27)))))) {
        if (*(uint *)(lVar20 + 0x18) <= uVar14 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar6 = *(undefined2 *)(lVar20 + lVar61 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar24 = FUN_026b82c4(uVar6,0);
        if ((uVar24 & 1) != 0) {
          if (*(uint *)(lVar20 + 0x18) <= uVar14)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar6 = *(undefined2 *)(lVar20 + lVar61 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar24 = FUN_026b82c4(uVar6,0);
          if ((uVar24 & 1) != 0) goto LAB_0354e610;
        }
      }
    }
    else {
      if (uVar14 != 1) {
LAB_0354f144:
        bVar10 = false;
        goto LAB_0354e618;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar24 = FUN_026b81f8(uVar34,0);
      if ((uVar24 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar24 = FUN_026b63d8(uVar34,0);
        if (((uVar34 != 0x200b) && ((uVar24 & 1) == 0)) && (*puVar2 != 1)) goto LAB_0354f144;
      }
    }
    if (uVar82 == *puVar2 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar24 = FUN_026b82c4(uVar34,0);
      iVar18 = (int)fStack0000000000000124;
      if ((uVar24 & 1) == 0) goto LAB_0354e93c;
    }
    else {
LAB_0354e93c:
      iVar18 = uVar14 - 2;
    }
    lVar31 = *plVar3;
    if (lVar31 == 0) goto LAB_0354fbf4;
    lVar45 = *(long *)(lVar31 + 0x40);
    if (lVar45 == 0) goto LAB_0354fbf4;
    uVar30 = *(uint *)(lVar31 + 0x24);
    iVar19 = *(int *)(lVar45 + 0x18);
    if (iVar19 < (int)(uVar30 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar31 + 0x40),iVar19 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar31 = *plVar3;
      if (lVar31 == 0) goto LAB_0354fbf4;
    }
    lVar31 = *(long *)(lVar31 + 0x40);
    if (lVar31 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar31 + 0x18) <= uVar30)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar31 = lVar31 + (long)(int)uVar30 * 0x18;
    *(long **)(lVar31 + 0x20) = unaff_x19;
    *(float *)(lVar31 + 0x28) = fStack000000000000016c;
    *(int *)(lVar31 + 0x2c) = iVar18;
    *(int *)(lVar31 + 0x30) = (iVar18 - (int)fStack000000000000016c) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar31 = unaff_x19[0x6d];
    if (lVar31 == 0) goto LAB_0354fbf4;
    lVar45 = *(long *)(lVar31 + 0x50);
    *(int *)(lVar31 + 0x24) = *(int *)(lVar31 + 0x24) + 1;
    if (lVar45 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar45 + 0x18) <= uVar16)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar45 = lVar45 + lVar41 * 0x5c;
    bVar10 = false;
    iVar15 = iVar15 + 1;
    *(int *)(lVar45 + 0x30) = *(int *)(lVar45 + 0x30) + 1;
  }
  else {
    if (!bVar10) {
      fStack000000000000016c = (float)uVar82;
    }
    if (uVar82 == *puVar2 - 1) {
      lVar31 = *plVar3;
      if (lVar31 == 0) goto LAB_0354fbf4;
      lVar45 = *(long *)(lVar31 + 0x40);
      if (lVar45 == 0) goto LAB_0354fbf4;
      uVar30 = *(uint *)(lVar31 + 0x24);
      iVar18 = *(int *)(lVar45 + 0x18);
      if (iVar18 < (int)(uVar30 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar31 + 0x40),iVar18 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar31 = *plVar3;
        if (lVar31 == 0) goto LAB_0354fbf4;
      }
      lVar31 = *(long *)(lVar31 + 0x40);
      if (lVar31 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar31 + 0x18) <= uVar30)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar31 = lVar31 + (long)(int)uVar30 * 0x18;
      *(long **)(lVar31 + 0x20) = unaff_x19;
      *(float *)(lVar31 + 0x28) = fStack000000000000016c;
      *(uint *)(lVar31 + 0x2c) = uVar82;
      *(uint *)(lVar31 + 0x30) = uVar14 - (int)fStack000000000000016c;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar31 = unaff_x19[0x6d];
      if (lVar31 == 0) goto LAB_0354fbf4;
      lVar45 = *(long *)(lVar31 + 0x50);
      *(int *)(lVar31 + 0x24) = *(int *)(lVar31 + 0x24) + 1;
      if (lVar45 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar45 + 0x18) <= uVar16)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar45 = lVar45 + lVar41 * 0x5c;
      iVar15 = iVar15 + 1;
      *(int *)(lVar45 + 0x30) = *(int *)(lVar45 + 0x30) + 1;
    }
LAB_0354e610:
    bVar10 = true;
  }
LAB_0354e618:
  if ((*plVar3 == 0) || (lVar31 = *(long *)(*plVar3 + 0x38), lVar31 == 0)) goto LAB_0354fbf4;
  uVar30 = *(uint *)(lVar31 + 0x18);
  if (uVar30 <= uVar82) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar31 + lVar23 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar13) {
LAB_0354e660:
      if (uVar30 <= uVar14 - 2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar45 = *unaff_x19;
      uVar60 = *(undefined4 *)(lVar31 + lVar61 + -0x330);
      uVar68 = *(undefined4 *)(lVar31 + lVar61 + -0x2f8);
LAB_0354ebc0:
      pcVar33 = *(code **)(lVar45 + 0x8d8);
LAB_0354ebc8:
      (*pcVar33)(fVar62,fStack0000000000000068,uStack000000000000006c,uVar60,fStack0000000000000104,
                 0,fStack0000000000000084,uVar68);
      puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar31 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar31 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar31 = *(long *)puVar11;
      }
LAB_0354ec1c:
      fVar46 = 0.0;
      bVar13 = false;
      fStack0000000000000104 = *(float *)(*(long *)(lVar31 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_0354eb28:
      bVar13 = false;
    }
  }
  else {
    lVar31 = lVar31 + lVar23 * 0x178;
    iVar18 = *(int *)(lVar31 + 0x68);
    *(int *)(lVar31 + 0x16c) = iVar35;
    if ((((int)unaff_x19[0x65] < (int)uVar82) || ((int)unaff_x19[0x66] < (int)uVar16)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar18 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar24 = FUN_026b63d8(uVar34,0);
    if ((uVar34 != 0x200b) && ((uVar24 & 1) == 0)) {
      lVar31 = *plVar3;
      if ((lVar31 == 0) || (lVar45 = *(long *)(lVar31 + 0x38), lVar45 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar45 + 0x18) <= uVar82)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar67 = *(float *)(lVar45 + lVar23 * 0x178 + 0x160);
      if (fVar46 <= fVar67) {
        fVar46 = fVar67;
      }
      if (fStack0000000000000100 <= ABS(fVar59)) {
        fStack0000000000000100 = ABS(fVar59);
      }
      if (iVar18 != iStack000000000000005c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar31 = *plVar3;
          if (lVar31 == 0) goto LAB_0354fbf4;
          lVar45 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar45 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar45 + 0x15a8);
      }
      lVar31 = *(long *)(lVar31 + 0x38);
      if (lVar31 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar31 + 0x18) <= uVar82)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
      fVar48 = *(float *)(lVar31 + lVar23 * 0x178 + 0x14c);
      fVar67 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar48 = fVar48 + fVar46 * fVar67;
      iStack000000000000005c = iVar18;
      if (fVar48 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar48;
      }
    }
    if (!bVar13) {
      bVar13 = false;
      if ((((uVar34 == 0xd) || ((uVar34 & 0xfffe) == 10)) || ((int)uVar17 < (int)uVar82)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
      if (uVar82 == uVar17) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar24 = FUN_026b97f8(uVar34,0);
        if ((uVar24 & 1) != 0) goto LAB_0354eb28;
      }
      if ((*plVar3 == 0) || (lVar31 = *(long *)(*plVar3 + 0x38), lVar31 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar31 + 0x18) <= uVar82)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar31 = lVar31 + lVar23 * 0x178;
      fStack0000000000000084 = *(float *)(lVar31 + 0x160);
      fVar62 = *(float *)(lVar31 + 0x11c);
      bVar13 = fVar46 != 0.0;
      fVar67 = fStack0000000000000084;
      if (bVar13) {
        fVar67 = fVar46;
      }
      fVar46 = fVar67;
      uVar78 = *(undefined4 *)(lVar31 + 0x168);
      uStack000000000000006c = 0;
      fVar67 = fVar59;
      if (bVar13) {
        fVar67 = fStack0000000000000100;
      }
      fStack0000000000000068 = fStack0000000000000104;
      fStack0000000000000100 = fVar67;
    }
    if (*puVar2 == 1) {
      if ((*plVar3 != 0) && (lVar31 = *(long *)(*plVar3 + 0x38), lVar31 != 0)) {
        if (uVar82 < *(uint *)(lVar31 + 0x18)) {
          lVar31 = lVar31 + lVar23 * 0x178;
          lVar45 = *unaff_x19;
          uVar60 = *(undefined4 *)(lVar31 + 0x128);
          uVar68 = *(undefined4 *)(lVar31 + 0x160);
          goto LAB_0354ebc0;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((uVar82 == uVar28) || ((int)uVar17 <= (int)uVar82)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar24 = FUN_026b63d8(uVar34,0);
      if ((*plVar3 != 0) && (lVar31 = *(long *)(*plVar3 + 0x38), lVar31 != 0)) {
        lVar45 = lVar23;
        uVar30 = uVar82;
        if (uVar34 == 0x200b || (uVar24 & 1) != 0) {
          lVar45 = (long)(int)uVar17;
          uVar30 = uVar17;
        }
        if (uVar30 < *(uint *)(lVar31 + 0x18)) {
          lVar31 = lVar31 + lVar45 * 0x178;
          uVar60 = *(undefined4 *)(lVar31 + 0x128);
          uVar68 = *(undefined4 *)(lVar31 + 0x160);
          pcVar33 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354ebc8;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (!bVar1) {
      if ((*plVar3 != 0) && (lVar31 = *(long *)(*plVar3 + 0x38), lVar31 != 0)) {
        uVar30 = *(uint *)(lVar31 + 0x18);
        goto LAB_0354e660;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar82 < (int)(*puVar2 - 1)) {
      if ((*plVar3 == 0) || (lVar31 = *(long *)(*plVar3 + 0x38), lVar31 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar31 + 0x18) <= uVar14)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar24 = FUN_03567ad8(uVar78,*(undefined4 *)(lVar31 + lVar61),0);
      if ((uVar24 & 1) == 0) {
        if ((*plVar3 != 0) && (lVar31 = *(long *)(*plVar3 + 0x38), lVar31 != 0)) {
          if (uVar82 < *(uint *)(lVar31 + 0x18)) {
            lVar31 = lVar31 + lVar23 * 0x178;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fVar62,fStack0000000000000068,uStack000000000000006c,
                       *(undefined4 *)(lVar31 + 0x128),fStack0000000000000104,0,
                       fStack0000000000000084,*(undefined4 *)(lVar31 + 0x160));
            puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar31 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar31 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar31 = *(long *)puVar11;
            }
            goto LAB_0354ec1c;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
    }
    bVar13 = true;
  }
LAB_0354ec38:
  if ((*plVar3 == 0) || (lVar31 = *(long *)(*plVar3 + 0x38), lVar31 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar31 + 0x18) <= uVar82)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (lVar39 == 0) goto LAB_0354fbf4;
  uVar30 = *(uint *)(lVar31 + lVar23 * 0x178 + 400);
  fVar67 = (float)FUN_03776a30(lVar39 + 0x50,0);
  if ((uVar30 >> 6 & 1) == 0) {
    if (bVar8) {
      if ((*plVar3 == 0) || (lVar31 = *(long *)(*plVar3 + 0x38), lVar31 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar31 + 0x18) <= uVar14 - 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar60 = *(undefined4 *)(lVar31 + lVar61 + -0x330);
      fVar83 = *(float *)(lVar31 + lVar61 + -0x30c);
      pcVar33 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
      (*pcVar33)(fVar47,fStack000000000000009c,in_stack_00000098,uVar60,fVar69 * fVar67 + fVar83,0,
                 fVar69,fVar69);
    }
LAB_0354f250:
    bVar8 = false;
  }
  else {
    lVar31 = *plVar3;
    if ((lVar31 == 0) || (lVar45 = *(long *)(lVar31 + 0x38), lVar45 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar45 + 0x18) <= uVar82)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(int *)(lVar45 + lVar23 * 0x178 + 0x174) = iVar35;
    if ((((int)unaff_x19[0x65] < (int)uVar82) || ((int)unaff_x19[0x66] < (int)uVar16)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar45 + lVar23 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar34 == 0xd) || ((uVar34 & 0xfffe) == 10)) || ((int)uVar17 < (int)uVar82)) ||
       (bVar8 || !bVar1)) {
LAB_0354ed84:
      if (!bVar8) goto LAB_0354f250;
    }
    else {
      if (uVar82 == uVar17) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar24 = FUN_026b97f8(uVar34,0);
        if ((uVar24 & 1) != 0) goto LAB_0354ed84;
        lVar31 = *plVar3;
        if (lVar31 == 0) goto LAB_0354fbf4;
      }
      lVar31 = *(long *)(lVar31 + 0x38);
      if (lVar31 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar31 + 0x18) <= uVar82)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar31 = lVar31 + lVar23 * 0x178;
      fStack000000000000004c = *(float *)(lVar31 + 0x60);
      fVar63 = *(float *)(lVar31 + 0x14c);
      fVar47 = *(float *)(lVar31 + 0x11c);
      fVar69 = *(float *)(lVar31 + 0x160);
      fStack000000000000009c = fVar67 * fVar69 + fVar63;
      in_stack_00000098 = 0.0;
    }
    uVar30 = *puVar2;
    if (uVar30 == 1) {
      if ((*plVar3 != 0) && (lVar31 = *(long *)(*plVar3 + 0x38), lVar31 != 0)) {
        uVar30 = *(uint *)(lVar31 + 0x18);
LAB_0354ef0c:
        if (uVar82 < uVar30) {
          lVar31 = lVar31 + lVar23 * 0x178;
          lVar45 = *unaff_x19;
          uVar60 = *(undefined4 *)(lVar31 + 0x128);
          fVar83 = *(float *)(lVar31 + 0x14c);
LAB_0354ef24:
          pcVar33 = *(code **)(lVar45 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (uVar82 == uVar28) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar24 = FUN_026b63d8(uVar34,0);
      if ((*plVar3 != 0) && (lVar31 = *(long *)(*plVar3 + 0x38), lVar31 != 0)) {
        uVar30 = *(uint *)(lVar31 + 0x18);
        if (uVar34 == 0x200b || (uVar24 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
        lVar45 = lVar23;
        if (uVar82 < uVar30) {
LAB_0354f1f8:
          lVar31 = lVar31 + lVar45 * 0x178;
          fVar83 = *(float *)(lVar31 + 0x14c);
          uVar60 = *(undefined4 *)(lVar31 + 0x128);
          pcVar33 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar82 < (int)uVar30) {
      lVar31 = *plVar3;
      if ((lVar31 != 0) && (lVar45 = *(long *)(lVar31 + 0x38), lVar45 != 0)) {
        if (uVar14 < *(uint *)(lVar45 + 0x18)) {
          if (*(float *)(lVar45 + lVar61 + -0x108) == fStack000000000000004c) {
            fVar48 = *(float *)(lVar45 + lVar61 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar24 = FUN_03567bac(fVar83 + fVar48,fVar63,0);
            if ((uVar24 & 1) != 0) {
              uVar30 = *puVar2;
              goto LAB_0354f010;
            }
            lVar31 = *plVar3;
            if (lVar31 == 0) goto LAB_0354fbf4;
          }
          lVar31 = *(long *)(lVar31 + 0x38);
          if (lVar31 != 0) {
            uVar30 = *(uint *)(lVar31 + 0x18);
            if ((int)uVar82 <= (int)uVar17) goto LAB_0354f1f0;
LAB_0354f1e0:
            lVar45 = (long)(int)uVar17;
            if (uVar17 < uVar30) goto LAB_0354f1f8;
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          goto LAB_0354fbf4;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
LAB_0354f010:
    if ((int)uVar82 < (int)uVar30) {
      iVar18 = FUN_036d3364(lVar39,0);
      if (*(uint *)(lVar20 + 0x18) <= uVar14)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar31 = *(long *)(lVar20 + lVar61 + -0x130);
      if (lVar31 == 0) goto LAB_0354fbf4;
      iVar19 = FUN_036d3364(lVar31,0);
      if (iVar18 != iVar19) {
        if ((*plVar3 != 0) && (lVar31 = *(long *)(*plVar3 + 0x38), lVar31 != 0)) {
          uVar30 = *(uint *)(lVar31 + 0x18);
          goto LAB_0354ef0c;
        }
        goto LAB_0354fbf4;
      }
    }
    if (!bVar1) {
      if ((*plVar3 != 0) && (lVar31 = *(long *)(*plVar3 + 0x38), lVar31 != 0)) {
        if (uVar14 - 2 < *(uint *)(lVar31 + 0x18)) {
          lVar45 = *unaff_x19;
          uVar60 = *(undefined4 *)(lVar31 + lVar61 + -0x330);
          fVar83 = *(float *)(lVar31 + lVar61 + -0x30c);
          goto LAB_0354ef24;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    bVar8 = true;
  }
  if ((*plVar3 == 0) || (lVar31 = *(long *)(*plVar3 + 0x38), lVar31 == 0)) goto LAB_0354fbf4;
  uVar30 = (uint)*(undefined8 *)(lVar31 + 0x18);
  if (uVar30 <= uVar82) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar31 + lVar23 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar12) {
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000e0,fStack00000000000000e4,in_stack_000000c0,
                 fStack00000000000000d0,fStack00000000000000d4,in_stack_000000c0);
    }
LAB_0354f604:
    bVar12 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar82) || ((int)unaff_x19[0x66] < (int)uVar16)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar31 + lVar23 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar12) {
LAB_0354f400:
      if (uVar30 <= uVar82) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar31 = lVar31 + lVar23 * 0x178;
      fVar67 = *(float *)(lVar31 + 0x128);
      fVar66 = *(float *)(lVar31 + 0x188);
      uVar21 = *(undefined8 *)(lVar31 + 0x17c);
      fVar58 = *(float *)(lVar31 + 0x184);
      uVar64 = *(undefined8 *)(lVar31 + 0x184);
      fVar70 = *(float *)(lVar31 + 0x18c);
      fVar83 = *(float *)(lVar31 + 0x11c);
      fVar48 = *(float *)(lVar31 + 0x148);
      fVar49 = *(float *)(lVar31 + 0x150);
      in_stack_00000188 = uVar21;
      fStack0000000000000190 = fVar58;
      fStack0000000000000194 = fVar66;
      in_stack_00000198 = fVar70;
      in_stack_000001a0 = in_stack_000017c0;
      in_stack_000001a8 = in_stack_000017c8;
      in_stack_000001b0 = in_stack_000017d0;
      uVar24 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
      lVar31 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar24 & 1) == 0) {
        if (*(int *)(lVar31 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar31);
        }
        fVar67 = fVar67 + (float)in_stack_000017c8;
        fVar83 = fVar83 - (float)((ulong)in_stack_000017c0 >> 0x20);
        fVar48 = fVar48 + (float)((ulong)in_stack_000017c8 >> 0x20);
        if (fVar83 <= fStack00000000000000e0) {
          fStack00000000000000e0 = fVar83;
        }
        if (fVar49 - in_stack_000017d0 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar49 - in_stack_000017d0;
        }
        if (fStack00000000000000d0 <= fVar67) {
          fStack00000000000000d0 = fVar67;
        }
        if (fStack00000000000000d4 <= fVar48) {
          fStack00000000000000d4 = fVar48;
        }
      }
      else {
        if (*(int *)(lVar31 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar31);
        }
        fVar83 = (fVar83 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
        if (fVar49 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar49;
        }
        if (fStack00000000000000d4 <= fVar48) {
          fStack00000000000000d4 = fVar48;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,in_stack_000000c0,fVar83,
                   fStack00000000000000d4,in_stack_000000c0);
        fStack00000000000000e4 = fVar49 - fVar70;
        fStack00000000000000d0 = fVar67 + fVar58;
        in_stack_000000c0 = 0;
        fStack00000000000000d4 = fVar48 + fVar66;
        fStack00000000000000e0 = fVar83;
        in_stack_000017c0 = uVar21;
        in_stack_000017c8 = uVar64;
        in_stack_000017d0 = fVar70;
      }
      if (((*puVar2 == 1) || (uVar82 == uVar28)) || (((int)uVar17 <= (int)uVar82 || (!bVar1)))) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,in_stack_000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,in_stack_000000c0);
        goto LAB_0354f604;
      }
      bVar12 = true;
    }
    else {
      if ((((uVar34 != 0xd) && ((uVar34 & 0xfffe) != 10)) && ((int)uVar82 <= (int)uVar17)) &&
         (bVar1)) {
        if (uVar82 == uVar17) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar24 = FUN_026b97f8(uVar34,0);
          if ((uVar24 & 1) != 0) goto LAB_0354f374;
        }
        puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar45 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar45 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar45 = *(long *)puVar11;
        }
        if ((*plVar3 != 0) && (lVar31 = *(long *)(*plVar3 + 0x38), lVar31 != 0)) {
          uVar30 = (uint)*(undefined8 *)(lVar31 + 0x18);
          if (uVar82 < uVar30) {
            lVar45 = *(long *)(lVar45 + 0xb8);
            lVar39 = lVar31 + lVar23 * 0x178;
            in_stack_000017c8 = *(undefined8 *)(lVar39 + 0x184);
            in_stack_000017c0 = *(undefined8 *)(lVar39 + 0x17c);
            fStack00000000000000e0 = *(float *)(lVar45 + 0x1598);
            fStack00000000000000e4 = *(float *)(lVar45 + 0x159c);
            in_stack_000017d0 = *(float *)(lVar39 + 0x18c);
            fStack00000000000000d0 = *(float *)(lVar45 + 0x15a0);
            fStack00000000000000d4 = *(float *)(lVar45 + 0x15a4);
            in_stack_000000c0 = 0;
            goto LAB_0354f400;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
LAB_0354f374:
      bVar12 = false;
    }
  }
  uVar82 = *puVar2;
  fStack0000000000000124 = (float)((int)fStack0000000000000124 + 1);
  lVar61 = lVar61 + 0x178;
  bVar1 = (int)uVar82 <= (int)uVar14;
  uVar30 = uVar16;
  uVar14 = uVar14 + 1;
  if (bVar1) goto LAB_0354f7d0;
  goto LAB_0354d7c0;
LAB_0354f7d0:
  lVar20 = *plVar3;
  if (lVar20 == 0) goto LAB_0354fbf4;
  iVar35 = uVar16 + 1;
  plVar44 = (long *)OVRPlugin_Media_TypeInfo;
LAB_0354f7f4:
  *(uint *)(lVar20 + 0x18) = uVar82;
  lVar61 = unaff_x19[0xd4];
  *(int *)(lVar20 + 0x2c) = iVar35;
  if ((int)uVar82 < 1 || iVar15 == 0) {
    iVar15 = 1;
  }
  *(int *)(lVar20 + 0x1c) = (int)lVar61;
  *(int *)(lVar20 + 0x24) = iVar15;
  *(int *)(lVar20 + 0x30) = (int)unaff_x19[0x96] + 1;
  if (((int)unaff_x19[99] != 0xff) ||
     (uVar24 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar24 & 1) == 0)) {
LAB_0354d0cc:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03567630();
    return;
  }
  lVar20 = unaff_x19[0xdb];
  if (lVar20 != 0) {
    (**(code **)(lVar20 + 0x18))
              (*(undefined8 *)(lVar20 + 0x40),*plVar3,*(undefined8 *)(lVar20 + 0x28));
  }
  if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
    if ((*plVar3 == 0) || (lVar20 = *(long *)(*plVar3 + 0x60), lVar20 == 0)) goto LAB_0354fbf4;
    if (*(int *)(*plVar44 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(int *)(lVar20 + 0x18) == 0)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    FUN_03596b20(lVar20 + 0x20,1,0);
  }
  if (unaff_x19[0x74] != 0) {
    FUN_036aa790(unaff_x19[0x74],0);
    if ((unaff_x19[0x6d] != 0) && (lVar20 = *(long *)(unaff_x19[0x6d] + 0x60), lVar20 != 0)) {
      if (*(int *)(lVar20 + 0x18) == 0) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (unaff_x19[0x74] != 0) {
        FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar20 + 0x30),0);
        if ((unaff_x19[0x6d] != 0) && (lVar20 = *(long *)(unaff_x19[0x6d] + 0x60), lVar20 != 0)) {
          if (*(int *)(lVar20 + 0x18) == 0)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if (unaff_x19[0x74] != 0) {
            FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar20 + 0x48),0);
            if ((unaff_x19[0x6d] != 0) && (lVar20 = *(long *)(unaff_x19[0x6d] + 0x60), lVar20 != 0))
            {
              if (*(int *)(lVar20 + 0x18) == 0)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              if (unaff_x19[0x74] != 0) {
                FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar20 + 0x50),0);
                if ((unaff_x19[0x6d] != 0) &&
                   (lVar20 = *(long *)(unaff_x19[0x6d] + 0x60), lVar20 != 0)) {
                  if (*(int *)(lVar20 + 0x18) == 0)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  if (unaff_x19[0x74] != 0) {
                    FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar20 + 0x58),0);
                    if (unaff_x19[0x74] != 0) {
                      FUN_036aa280(unaff_x19[0x74],0);
                      lVar20 = *plVar3;
                      if (lVar20 != 0) {
                        lVar31 = 0;
                        lVar61 = 0;
                        do {
                          uVar24 = lVar61 + 1;
                          if ((long)*(int *)(lVar20 + 0x34) <= (long)uVar24) goto LAB_0354d0cc;
                          lVar20 = *(long *)(lVar20 + 0x60);
                          if (lVar20 == 0) break;
                          if (*(int *)(*plVar44 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          if (*(uint *)(lVar20 + 0x18) <= uVar24)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          FUN_03596a20(lVar20 + lVar31 + 0x70,0);
                          lVar20 = unaff_x19[0xe1];
                          if (lVar20 == 0) break;
                          if (*(uint *)(lVar20 + 0x18) <= uVar24)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          uVar64 = *(undefined8 *)(lVar20 + lVar61 * 8 + 0x28);
                          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar65 = FUN_036d35a8(uVar64,0,0);
                          if ((uVar65 & 1) == 0) {
                            if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                              if ((*plVar3 == 0) ||
                                 (lVar20 = *(long *)(*plVar3 + 0x60), lVar20 == 0)) break;
                              if (*(int *)(*plVar44 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              if (*(uint *)(lVar20 + 0x18) <= uVar24)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              FUN_03596b20(lVar20 + lVar31 + 0x70,1,0);
                            }
                            lVar20 = unaff_x19[0xe1];
                            if (lVar20 == 0) break;
                            if (*(uint *)(lVar20 + 0x18) <= uVar24)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar20 = *(long *)(lVar20 + lVar61 * 8 + 0x28);
                            if (lVar20 == 0) break;
                            lVar20 = FUN_0359d5ac(lVar20,0);
                            if ((*plVar3 == 0) || (lVar45 = *(long *)(*plVar3 + 0x60), lVar45 == 0))
                            break;
                            if (*(uint *)(lVar45 + 0x18) <= uVar24)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar20 == 0) break;
                            FUN_036a460c(lVar20,*(undefined8 *)(lVar45 + lVar31 + 0x80),0);
                            lVar20 = unaff_x19[0xe1];
                            if (lVar20 == 0) break;
                            if (*(uint *)(lVar20 + 0x18) <= uVar24)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar20 = *(long *)(lVar20 + lVar61 * 8 + 0x28);
                            if (lVar20 == 0) break;
                            lVar20 = FUN_0359d5ac(lVar20,0);
                            if ((*plVar3 == 0) || (lVar45 = *(long *)(*plVar3 + 0x60), lVar45 == 0))
                            break;
                            if (*(uint *)(lVar45 + 0x18) <= uVar24)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar20 == 0) break;
                            FUN_036a4810(lVar20,*(undefined8 *)(lVar45 + lVar31 + 0x98),0);
                            lVar20 = unaff_x19[0xe1];
                            if (lVar20 == 0) break;
                            if (*(uint *)(lVar20 + 0x18) <= uVar24)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar20 = *(long *)(lVar20 + lVar61 * 8 + 0x28);
                            if (lVar20 == 0) break;
                            lVar20 = FUN_0359d5ac(lVar20,0);
                            if ((*plVar3 == 0) || (lVar45 = *(long *)(*plVar3 + 0x60), lVar45 == 0))
                            break;
                            if (*(uint *)(lVar45 + 0x18) <= uVar24)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar20 == 0) break;
                            FUN_036a48bc(lVar20,*(undefined8 *)(lVar45 + lVar31 + 0xa0),0);
                            lVar20 = unaff_x19[0xe1];
                            if (lVar20 == 0) break;
                            if (*(uint *)(lVar20 + 0x18) <= uVar24)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar20 = *(long *)(lVar20 + lVar61 * 8 + 0x28);
                            if (lVar20 == 0) break;
                            lVar20 = FUN_0359d5ac(lVar20,0);
                            if ((*plVar3 == 0) || (lVar45 = *(long *)(*plVar3 + 0x60), lVar45 == 0))
                            break;
                            if (*(uint *)(lVar45 + 0x18) <= uVar24)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar20 == 0) break;
                            FUN_036a4e24(lVar20,*(undefined8 *)(lVar45 + lVar31 + 0xa8),0);
                            lVar20 = unaff_x19[0xe1];
                            if (lVar20 == 0) break;
                            if (*(uint *)(lVar20 + 0x18) <= uVar24)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar20 = *(long *)(lVar20 + lVar61 * 8 + 0x28);
                            if ((lVar20 == 0) || (lVar20 = FUN_0359d5ac(lVar20,0), lVar20 == 0))
                            break;
                            FUN_036aa280(lVar20,0);
                          }
                          lVar20 = *plVar3;
                          lVar61 = lVar61 + 1;
                          lVar31 = lVar31 + 0x50;
                        } while (lVar20 != 0);
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
  goto LAB_0354fbf4;
}


