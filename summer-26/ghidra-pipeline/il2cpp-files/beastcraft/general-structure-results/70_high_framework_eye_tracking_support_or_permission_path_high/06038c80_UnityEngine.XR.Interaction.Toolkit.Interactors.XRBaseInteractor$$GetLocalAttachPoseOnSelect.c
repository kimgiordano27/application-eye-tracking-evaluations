/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor$$GetLocalAttachPoseOnSelect
ENTRY_POINT: 06038c80
PROGRAM: beastcraft-libil2cpp.so
SCORE: 77
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior;keyword_support;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__GetLocalAttachPoseOnSelect
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               long *param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined1 uVar22;
  char cVar23;
  long *plVar24;
  float *pfVar25;
  undefined8 *puVar26;
  code *pcVar27;
  undefined4 in_w9;
  float *pfVar28;
  long lVar29;
  long lVar30;
  uint uVar31;
  long *plVar32;
  long lVar33;
  long lVar34;
  long *unaff_x19;
  ulong uVar35;
  uint unaff_w21;
  int unaff_w22;
  int iVar36;
  long lVar37;
  int *piVar38;
  ulong uVar39;
  uint uVar40;
  ulong uVar41;
  long *plVar42;
  undefined2 uVar43;
  undefined1 *unaff_x28;
  uint uVar44;
  long *unaff_x29;
  ushort uVar45;
  float fVar46;
  undefined8 uVar47;
  float fVar50;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar51;
  float fVar52;
  undefined8 uVar53;
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined4 uVar60;
  float fVar61;
  float fVar62;
  undefined4 uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float unaff_s11;
  float fVar68;
  float fVar69;
  float unaff_s13;
  float fVar70;
  float unaff_s15;
  undefined8 in_stack_00000018;
  int iStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  uint uStack0000000000000040;
  float fStack0000000000000044;
  ulong in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  uint uStack0000000000000060;
  float fStack0000000000000064;
  undefined4 uStack0000000000000068;
  float fStack000000000000006c;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  float fStack0000000000000094;
  float fStack0000000000000098;
  float fStack00000000000000a0;
  ulong in_stack_000000a8;
  undefined1 (*in_stack_000000b0) [16];
  undefined8 in_stack_000000b8;
  float fStack00000000000000c0;
  undefined4 in_stack_000000d8;
  float fStack00000000000000dc;
  float fStack00000000000000e0;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000110;
  float in_stack_00000118;
  float fStack0000000000000120;
  float fStack0000000000000124;
  float fStack0000000000000134;
  float fStack0000000000000138;
  float fStack000000000000013c;
  float in_stack_00000140;
  float fStack000000000000016c;
  long *in_stack_00000170;
  float fStack000000000000017c;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float fStack0000000000000190;
  float *in_stack_000001a8;
  float fStack00000000000001b0;
  undefined8 in_stack_000001c8;
  float fStack00000000000001d0;
  float fStack00000000000001d4;
  float in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  float in_stack_000001f0;
  undefined8 in_stack_000005c0;
  undefined8 in_stack_000005c8;
  float in_stack_0000114c;
  float in_stack_00001158;
  float in_stack_00001164;
  float in_stack_00001170;
  float in_stack_0000117c;
  float in_stack_00001188;
  uint in_stack_0000126c;
  uint in_stack_00001308;
  undefined8 in_stack_00001310;
  float in_stack_00001318;
  float in_stack_0000131c;
  float in_stack_00001320;
  undefined8 in_stack_00001328;
  char in_stack_00001334;
  float in_stack_00001338;
  uint in_stack_0000133c;
  
  uVar39 = _uStack0000000000000068;
code_r0x06038c80:
  *(undefined4 *)((long)unaff_x19 + 0x664) = in_w9;
  *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(param_1 + 0x50);
  unaff_x19[0x20] = *(long *)(param_1 + 0x40);
  thunk_FUN_02ee2be8(param_5);
LAB_06038c98:
  if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
  goto thunk_FUN_02e3ccc4;
  fVar46 = in_stack_000001a8[10];
  if ((uint)*(float *)(lVar37 + 0x18) <= (uint)fVar46) goto LAB_0603fce4;
  lVar34 = lVar37 + 0x20;
  fVar57 = (float)in_stack_00001328;
  lVar29 = unaff_x19[0x24];
  cVar23 = *(char *)(lVar34 + (long)(int)fVar46 * (long)(int)unaff_w21 + 0x34);
  *(undefined1 *)((long)unaff_x19 + 0x471) = 0;
  fVar52 = fVar46;
  if (fVar57 == fVar46) {
    in_stack_0000133c = (uint)((ulong)in_stack_00001328 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x664) = 0;
    if (in_stack_0000133c == 0x2026) {
      *(long *)(lVar34 + (long)(int)fVar46 * (long)(int)unaff_w21 + 0x10) = unaff_x19[0xce];
      thunk_FUN_02ee2be8();
      if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
      goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar37 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
      lVar37 = lVar37 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
      *(long *)(lVar37 + 0x40) = unaff_x19[0xcf];
      *(undefined4 *)(lVar37 + 0x20) = 0;
      thunk_FUN_02ee2be8();
      if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
      goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar37 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
      *(long *)(lVar37 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x48) =
           unaff_x19[0xd0];
      thunk_FUN_02ee2be8();
      if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
      goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar37 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
      *(int *)(lVar37 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x50) =
           (int)unaff_x19[0xd1];
      puVar7 = System_Collections_Generic_List<AudioListener>_TypeInfo;
      lVar37 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if (*(int *)(lVar37 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar37 = *(long *)puVar7;
      }
      lVar37 = **(long **)(lVar37 + 0xb8);
      if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0xd5)) goto LAB_0603fce4;
      lVar37 = lVar37 + (long)(int)*(uint *)(unaff_x19 + 0xd5) * 0x38;
      *(int *)(lVar37 + 0x54) = *(int *)(lVar37 + 0x54) + 1;
      *(undefined1 *)(unaff_x19 + 0x66) = 1;
      in_stack_00001328 = CONCAT44(3,(int)*(float *)((long)unaff_x19 + 0x4ac) + 1);
      fVar52 = *(float *)((long)unaff_x19 + 0x4ac);
    }
    else if (in_stack_0000133c == 3) {
      if ((unaff_x19[0x20] == 0) || (lVar19 = FUN_0606364c(unaff_x19[0x20],0), lVar19 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar20 = FUN_04e87e04(lVar19,3,*(undefined8 *)
                                      System_Collections_Generic_List<ValueTuple<int,_RichTextTagParser_TagType,_string>>_TypeInfo
                           );
      if ((uint)*(float *)(lVar37 + 0x18) <= (uint)fVar46) goto LAB_0603fce4;
      *(undefined8 *)(lVar34 + (long)(int)fVar46 * (long)(int)unaff_w21 + 0x10) = uVar20;
      thunk_FUN_02ee2be8();
      *(undefined1 *)(unaff_x19 + 0x66) = 1;
      fVar52 = *(float *)((long)unaff_x19 + 0x4ac);
    }
  }
  plVar24 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
  if (((int)fVar52 < *(int *)((long)unaff_x19 + 0x364)) && (in_stack_0000133c != 3)) {
    if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
    goto thunk_FUN_02e3ccc4;
    if ((uint)*(float *)(lVar37 + 0x18) <= (uint)fVar52) goto LAB_0603fce4;
    lVar37 = lVar37 + (long)(int)fVar52 * (long)(int)unaff_w21;
    *(undefined1 *)(lVar37 + 400) = 0;
    *(undefined2 *)(lVar37 + 0x24) = 0x200b;
    *(undefined4 *)(lVar37 + 0x5c) = 0;
    in_stack_000001a8[10] = (float)((int)fVar52 + 1);
    uVar11 = in_stack_0000133c;
    goto LAB_06038edc;
  }
  fVar52 = 1.0;
  if (*(int *)((long)unaff_x19 + 0x664) == 0) {
    uVar11 = *(uint *)((long)unaff_x19 + 0x284);
    if ((uVar11 >> 4 & 1) == 0) {
      if ((uVar11 >> 3 & 1) == 0) {
        if ((uVar11 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar18 = FUN_055805c8(in_stack_0000133c,0);
          if ((uVar18 & 1) != 0) {
            if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar11 = FUN_05580850(in_stack_0000133c,0);
            fVar52 = fStack0000000000000024;
            goto LAB_0603901c;
          }
        }
      }
      else {
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar18 = FUN_05580528(in_stack_0000133c,0);
        if ((uVar18 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar11 = FUN_055809c8(in_stack_0000133c,0);
          goto LAB_0603901c;
        }
      }
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar18 = FUN_055805c8(in_stack_0000133c,0);
      if ((uVar18 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar11 = FUN_05580850(in_stack_0000133c,0);
LAB_0603901c:
        in_stack_0000133c = uVar11 & 0xffff;
      }
    }
  }
  if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
  memmove(&stack0x000012a0,(void *)(unaff_x19[0x20] + 0x28),0x60);
  uVar11 = in_stack_0000133c;
  if (*(int *)((long)unaff_x19 + 0x664) == 1) {
    lVar37 = FUN_060800c8();
    if ((lVar37 == 0) || (lVar37 = *(long *)(lVar37 + 0x38), lVar37 == 0)) goto thunk_FUN_02e3ccc4;
    if ((uint)*(float *)(lVar37 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
    plVar42 = *(long **)(lVar37 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x30);
    plVar24 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
    if (plVar42 == (long *)0x0) goto LAB_06038edc;
    bVar9 = *(byte *)(*(long *)System_Collections_Generic_List<uint[]>_TypeInfo + 0x130);
    if ((*(byte *)(*plVar42 + 0x130) < bVar9) ||
       (*(long *)(*(long *)(*plVar42 + 200) + (ulong)bVar9 * 8 + -8) !=
        *(long *)System_Collections_Generic_List<uint[]>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3d044(plVar42);
    }
    plVar24 = (long *)plVar42[3];
    if (plVar24 == (long *)0x0) {
      plVar24 = (long *)0x0;
      *_fStack00000000000000e0 = 0;
    }
    else {
      lVar37 = *(long *)System_Collections_Generic_List<Type[]>_TypeInfo;
      bVar9 = *(byte *)(lVar37 + 0x130);
      if (*(byte *)(*plVar24 + 0x130) < bVar9) {
        plVar32 = (long *)0x0;
      }
      else {
        plVar32 = plVar24;
        if (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar9 * 8 + -8) != lVar37) {
          plVar32 = (long *)0x0;
        }
      }
      *_fStack00000000000000e0 = (long)plVar32;
      if (*(byte *)(*plVar24 + 0x130) < bVar9) {
        plVar24 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar9 * 8 + -8) != lVar37) {
        plVar24 = (long *)0x0;
      }
    }
    thunk_FUN_02ee2be8(_fStack00000000000000e0,plVar24);
    lVar37 = plVar42[5];
    *(int *)((long)unaff_x19 + 0x6c4) = (int)lVar37;
    puVar7 = System_Collections_Generic_List<AudioListener>_TypeInfo;
    if (in_stack_0000133c == 0x3c) {
      in_stack_0000133c = (int)lVar37 + 0xe000;
    }
    else {
      lVar37 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if (*(int *)(lVar37 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar37 = *(long *)puVar7;
      }
      *(undefined4 *)((long)unaff_x19 + 0x1d4) = *(undefined4 *)(*(long *)(lVar37 + 0xb8) + 0x68);
    }
    fVar61 = *_uStack0000000000000088;
    fVar56 = (float)FUN_0630f888(&stack0x000012a0,0);
    fVar70 = (float)FUN_0630f890(&stack0x000012a0,0);
    if (*_fStack00000000000000e0 == 0) goto thunk_FUN_02e3ccc4;
    fVar70 = in_stack_00000118 * (fVar61 / fVar56) * fVar70;
    memmove(&stack0x00001200,(void *)(*_fStack00000000000000e0 + 0x28),0x60);
    fVar56 = (float)FUN_0630f888(&stack0x00001200,0);
    fVar61 = *_uStack0000000000000088;
    if (fVar56 <= 0.0) {
      fVar56 = (float)FUN_0630f888(&stack0x000012a0,0);
      fVar58 = (float)FUN_0630f890(&stack0x000012a0,0);
      fVar65 = (float)FUN_0630f8b8(&stack0x000012a0,0);
      if (plVar42[4] == 0) goto thunk_FUN_02e3ccc4;
      FUN_0630fd4c(&stack0x00001340,plVar42[4],0);
      *(long *)(unaff_x28 + 0x38) = SUB168(*(undefined1 (*) [16])(unaff_x28 + 400),8);
      *(long *)(unaff_x28 + 0x30) = SUB168(*(undefined1 (*) [16])(unaff_x28 + 400),0);
      fVar66 = (float)FUN_0630fb7c(&stack0x000011e0,0);
      if (plVar42[4] == 0) goto thunk_FUN_02e3ccc4;
      fVar68 = *(float *)((long)plVar42 + 0x2c);
      fVar61 = in_stack_00000118 * (fVar61 / fVar56) * fVar58;
      fVar56 = (float)FUN_0630fd88(plVar42[4],0);
      unaff_s11 = fVar61 * (fVar65 / fVar66) * fVar68 * fVar56;
      fStack0000000000000138 = 0.0;
      if (unaff_s11 != 0.0) {
        fStack0000000000000138 = fVar61 / unaff_s11;
      }
      fStack000000000000013c = (float)FUN_0630f8b8(&stack0x000012a0,0);
      fStack000000000000013c = fStack000000000000013c * fStack0000000000000138;
      fVar56 = (float)FUN_0630f8e0(&stack0x000012a0,0);
      fVar61 = *(float *)((long)unaff_x19 + 0x444);
      fStack000000000000017c = (float)FUN_0630f890(&stack0x000012a0,0);
      fStack000000000000017c = fVar70 * fVar56 * fVar61 * fStack000000000000017c;
      fVar56 = (float)FUN_0630f8e8(&stack0x000012a0,0);
      fStack0000000000000138 = fStack0000000000000138 * fVar56;
    }
    else {
      fVar56 = (float)FUN_0630f888(&stack0x00001200,0);
      fVar58 = (float)FUN_0630f890(&stack0x00001200,0);
      if (plVar42[4] == 0) goto thunk_FUN_02e3ccc4;
      fVar66 = *(float *)((long)plVar42 + 0x2c);
      fVar65 = (float)FUN_0630fd88(plVar42[4],0);
      unaff_s11 = in_stack_00000118 * (fVar61 / fVar56) * fVar58 * fVar66 * fVar65;
      fStack000000000000013c = (float)FUN_0630f8b8(&stack0x00001200,0);
      fVar56 = (float)FUN_0630f8e0(&stack0x00001200,0);
      fVar61 = *(float *)((long)unaff_x19 + 0x444);
      fStack000000000000017c = (float)FUN_0630f890(&stack0x00001200,0);
      fStack000000000000017c = fVar70 * fVar56 * fVar61 * fStack000000000000017c;
      fStack0000000000000138 = (float)FUN_0630f8e8(&stack0x00001200,0);
    }
    unaff_x19[0xcd] = (long)plVar42;
    thunk_FUN_02ee2be8(in_stack_00000170,plVar42);
    if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
    goto thunk_FUN_02e3ccc4;
    if ((uint)*(float *)(lVar37 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
    lVar37 = lVar37 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
    *(long *)(lVar37 + 0x40) = unaff_x19[0x20];
    *(undefined4 *)(lVar37 + 0x20) = 1;
    *(float *)(lVar37 + 0x15c) = unaff_s11;
    thunk_FUN_02ee2be8();
    lVar37 = unaff_x19[0x75];
    if ((lVar37 == 0) || (lVar34 = *(long *)(lVar37 + 0x38), lVar34 == 0)) goto thunk_FUN_02e3ccc4;
    if ((uint)*(float *)(lVar34 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
    unaff_s13 = 0.0;
    *(int *)(lVar34 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x50) =
         (int)unaff_x19[0x24];
    *(int *)(unaff_x19 + 0x24) = (int)lVar29;
LAB_06039744:
    fVar56 = 0.0;
    if (in_stack_0000133c != 3 && in_stack_0000133c != 0xad) {
      fVar56 = unaff_s11;
    }
  }
  else {
    lVar37 = unaff_x19[0x75];
    if (*(int *)((long)unaff_x19 + 0x664) == 0) {
      if ((lVar37 == 0) || (lVar37 = *(long *)(lVar37 + 0x38), lVar37 == 0))
      goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar37 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
      *in_stack_00000170 =
           *(long *)(lVar37 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x30);
      thunk_FUN_02ee2be8(in_stack_00000170);
      plVar24 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if (*in_stack_00000170 == 0) goto LAB_06038edc;
      if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
      goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar37 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
      unaff_x19[0x20] =
           *(long *)(lVar37 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x40);
      thunk_FUN_02ee2be8(unaff_x19 + 0x20);
      if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
      goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar37 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
      unaff_x19[0x23] =
           *(long *)(lVar37 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x48);
      thunk_FUN_02ee2be8(unaff_x19 + 0x23);
      if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
      goto thunk_FUN_02e3ccc4;
      fVar70 = in_stack_000001a8[10];
      fVar56 = *(float *)(lVar37 + 0x18);
      if ((uint)fVar56 <= (uint)fVar70) goto LAB_0603fce4;
      *(undefined4 *)(unaff_x19 + 0x24) =
           *(undefined4 *)(lVar37 + 0x20 + (long)(int)fVar70 * (long)(int)unaff_w21 + 0x30);
      pfVar25 = _uStack0000000000000088;
      if (fVar57 == fVar46) {
        lVar34 = unaff_x19[0x92];
        if (lVar34 == 0) goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar34 + 0x18) <= in_stack_00001308) goto LAB_0603fce4;
        if ((*(int *)(lVar34 + (long)(int)in_stack_00001308 * 0x10 + 0x24) == 10) &&
           (fVar70 != *(float *)(unaff_x19 + 0x96))) {
          if ((uint)fVar56 <= (int)fVar70 - 1U) goto LAB_0603fce4;
          pfVar25 = (float *)(lVar37 + 0x20 + (long)(int)((int)fVar70 - 1U) * (long)(int)unaff_w21 +
                             0x38);
        }
      }
      fVar61 = *pfVar25;
      fVar56 = (float)FUN_0630f888(&stack0x000012a0,0);
      fVar70 = (float)FUN_0630f890(&stack0x000012a0,0);
      if (fVar57 == fVar46) {
        fStack0000000000000138 = 0.0;
        fStack000000000000013c = 0.0;
        if (in_stack_0000133c != 0x2026) goto LAB_060392a8;
      }
      else {
LAB_060392a8:
        fStack000000000000013c = (float)FUN_0630f8b8(&stack0x000012a0,0);
        fStack0000000000000138 = (float)FUN_0630f8e8(&stack0x000012a0,0);
      }
      lVar37 = unaff_x19[0xcd];
      if ((lVar37 == 0) || (*(long *)(lVar37 + 0x20) == 0)) goto thunk_FUN_02e3ccc4;
      fVar66 = *(float *)((long)unaff_x19 + 0x444);
      fVar68 = *(float *)(lVar37 + 0x2c);
      fVar58 = (float)FUN_0630fd88(*(long *)(lVar37 + 0x20),0);
      fVar65 = (float)FUN_0630f8e0(&stack0x000012a0,0);
      fVar69 = *(float *)((long)unaff_x19 + 0x444);
      fStack000000000000017c = (float)FUN_0630f890(&stack0x000012a0,0);
      lVar37 = unaff_x19[0x75];
      if ((lVar37 == 0) || (lVar34 = *(long *)(lVar37 + 0x38), lVar34 == 0))
      goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(lVar34 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
      lVar34 = lVar34 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
      *(undefined4 *)(lVar34 + 0x20) = 0;
      fVar56 = in_stack_00000118 * ((fVar52 * fVar61) / fVar56) * fVar70;
      unaff_s11 = fVar56 * fVar66 * fVar68 * fVar58;
      fStack000000000000017c = fVar56 * fVar65 * fVar69 * fStack000000000000017c;
      *(float *)(lVar34 + 0x15c) = unaff_s11;
      uVar11 = *(uint *)(unaff_x19 + 0x24);
      if (uVar11 == 0) {
        unaff_s15 = 1.0;
        unaff_s13 = *(float *)(unaff_x19 + 199);
        goto LAB_06039744;
      }
      unaff_s15 = 1.0;
      lVar34 = unaff_x19[0xe5];
      if (lVar34 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar34 + 0x18) <= uVar11) goto LAB_0603fce4;
      lVar34 = *(long *)(lVar34 + (long)(int)uVar11 * 8 + 0x20);
      if (lVar34 == 0) goto thunk_FUN_02e3ccc4;
      unaff_s13 = *(float *)(lVar34 + 0x54);
      goto LAB_06039744;
    }
    fVar56 = 0.0;
    if (in_stack_0000133c != 3 && in_stack_0000133c != 0xad) {
      fVar56 = unaff_s11;
    }
    fStack000000000000017c = 0.0;
    fStack000000000000013c = 0.0;
    fStack0000000000000138 = 0.0;
    if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
  }
  lVar37 = *(long *)(lVar37 + 0x38);
  if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
  if ((uint)*(float *)(lVar37 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
  lVar37 = lVar37 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
  *(short *)(lVar37 + 0x24) = (short)in_stack_0000133c;
  *(int *)(lVar37 + 0x58) = (int)unaff_x19[0x42];
  *(int *)(lVar37 + 0x160) = (int)unaff_x19[0xa1];
  if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
  goto thunk_FUN_02e3ccc4;
  if ((uint)*(float *)(lVar37 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
  *(int *)(lVar37 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x164) =
       (int)unaff_x19[0x2b];
  if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
  goto thunk_FUN_02e3ccc4;
  if ((uint)*(float *)(lVar37 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
  *(undefined4 *)(lVar37 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 0x16c) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
  goto thunk_FUN_02e3ccc4;
  if ((uint)*(float *)(lVar37 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
  lVar37 = lVar37 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
  auVar48 = *in_stack_000000b0;
  *(undefined4 *)(lVar37 + 0x188) = *(undefined4 *)in_stack_000000b0[1];
  *(long *)(lVar37 + 0x180) = auVar48._8_8_;
  *(long *)(lVar37 + 0x178) = auVar48._0_8_;
  if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
  goto thunk_FUN_02e3ccc4;
  if ((uint)*(float *)(lVar37 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
  lVar37 = lVar37 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
  lVar34 = *(long *)(lVar37 + 0x38);
  *(undefined4 *)(lVar37 + 0x18c) = *(undefined4 *)((long)unaff_x19 + 0x284);
  if (lVar34 == 0) {
    if ((*in_stack_00000170 == 0) || (lVar37 = *(long *)(*in_stack_00000170 + 0x20), lVar37 == 0))
    goto thunk_FUN_02e3ccc4;
    FUN_0630fd4c(&stack0x00001340,lVar37,0);
    in_stack_000005c0 = *(undefined8 *)(unaff_x28 + 400);
    in_stack_000005c8 = *(undefined8 *)(unaff_x28 + 0x198);
  }
  else {
    FUN_0630fd4c(&stack0x000005c0,lVar34,0);
  }
  *(undefined8 *)(unaff_x28 + 0xd8) = in_stack_000005c8;
  *(undefined8 *)(unaff_x28 + 0xd0) = in_stack_000005c0;
  if (in_stack_0000133c >> 0x10 == 0) {
    if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar12 = FUN_0557df5c(in_stack_0000133c,0);
    uVar12 = uVar12 & 1;
  }
  else {
    uVar12 = 0;
  }
  fVar70 = *(float *)(unaff_x19 + 0x5a);
  if (((in_stack_000000a8 & 0x100000000) != 0) && (*(int *)((long)unaff_x19 + 0x664) == 0)) {
    if (*in_stack_00000170 == 0) goto thunk_FUN_02e3ccc4;
    fVar61 = in_stack_000001a8[10];
    uVar11 = *(uint *)(*in_stack_00000170 + 0x28);
    if ((int)fVar61 < (int)fStack0000000000000050) {
      if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar14 = (int)fVar61 + 1;
      if (*(uint *)(lVar37 + 0x18) <= uVar14) goto LAB_0603fce4;
      if (*(int *)(lVar37 + 0x20 + (long)(int)uVar14 * (long)(int)unaff_w21) == 0) {
        lVar37 = *(long *)(lVar37 + 0x20 + (long)(int)uVar14 * (long)(int)unaff_w21 + 0x10);
        if ((((lVar37 == 0) || (unaff_x19[0x20] == 0)) ||
            (lVar34 = *(long *)(unaff_x19[0x20] + 0x178), lVar34 == 0)) ||
           (lVar34 = *(long *)(lVar34 + 0x40), lVar34 == 0)) goto thunk_FUN_02e3ccc4;
        uVar18 = FUN_04e75974(lVar34,uVar11 | *(int *)(lVar37 + 0x28) << 0x10,&stack0x000011b0,
                              *(undefined8 *)
                               System_Collections_Generic_List<ValueTuple<string,_Type>>_TypeInfo);
        if ((uVar18 & 1) != 0) {
          FUN_0631443c(&stack0x00001340,&stack0x000011b0,0);
          FUN_06314290(&stack0x00001190,0);
          uVar18 = FUN_06314478(&stack0x000011b0,0);
          if ((uVar18 & 0x100) != 0) {
            fVar70 = 0.0;
          }
        }
      }
      fVar61 = in_stack_000001a8[10];
    }
    if (0 < (int)fVar61) {
      if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar37 + 0x18) <= (int)fVar61 - 1U) goto LAB_0603fce4;
      lVar37 = *(long *)(lVar37 + (ulong)((int)fVar61 - 1U) * (ulong)unaff_w21 + 0x30);
      if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
      uVar14 = *(uint *)(lVar37 + 0x28);
      lVar37 = FUN_060800c8();
      if ((lVar37 == 0) || (lVar37 = *(long *)(lVar37 + 0x38), lVar37 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar37 + 0x18) <= (int)in_stack_000001a8[10] - 1U) goto LAB_0603fce4;
      if (*(int *)(lVar37 + (long)(int)((int)in_stack_000001a8[10] - 1U) * (long)(int)unaff_w21 +
                  0x20) == 0) {
        if (((unaff_x19[0x20] == 0) || (lVar37 = *(long *)(unaff_x19[0x20] + 0x178), lVar37 == 0))
           || (lVar37 = *(long *)(lVar37 + 0x40), lVar37 == 0)) goto thunk_FUN_02e3ccc4;
        uVar18 = FUN_04e75974(lVar37,uVar14 | uVar11 << 0x10,&stack0x000011b0,
                              *(undefined8 *)
                               System_Collections_Generic_List<ValueTuple<string,_Type>>_TypeInfo);
        if ((uVar18 & 1) != 0) {
          FUN_06314464(&stack0x00001340,&stack0x000011b0,0);
          FUN_06314290(&stack0x00001190,0);
          FUN_063140f0(0);
          uVar18 = FUN_06314478(&stack0x000011b0,0);
          if ((uVar18 & 0x100) != 0) {
            fVar70 = 0.0;
          }
        }
      }
    }
  }
  if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
  goto thunk_FUN_02e3ccc4;
  fVar61 = in_stack_000001a8[10];
  uVar60 = FUN_063140cc(&stack0x00001270,0);
  if ((uint)*(float *)(lVar37 + 0x18) <= (uint)fVar61) goto LAB_0603fce4;
  *(undefined4 *)(lVar37 + (long)(int)fVar61 * (long)(int)unaff_w21 + 0x154) = uVar60;
  if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo + 0xe4) == 0)
  {
    thunk_FUN_02e9a04c();
  }
  uVar18 = FUN_060b1c00(in_stack_0000133c,0);
  fVar61 = in_stack_000001a8[10];
  uVar35 = (ulong)(uint)fVar61;
  if ((uVar18 & 1) == 0) {
    if (0 < (int)fVar61) {
      if ((((uVar39 & 1) == 0) ||
          (uVar11 = *(uint *)((long)unaff_x19 + 0x334), uVar11 == 0x80000000)) ||
         (uVar11 != (int)fVar61 - 1U)) {
        if ((in_stack_00000048 & 1) == 0) {
          bVar8 = false;
        }
        else {
          lVar37 = uVar35 * unaff_w21 + 0x144;
          uVar41 = uVar35;
          do {
            uVar41 = uVar41 - 1;
            iVar13 = (int)uVar35;
            uVar11 = iVar13 - 1;
            uVar35 = (ulong)uVar11;
            if ((iVar13 < 1) || (uVar41 == *(uint *)((long)unaff_x19 + 0x334))) {
              bVar8 = false;
              goto LAB_06039e54;
            }
            if ((unaff_x19[0x75] == 0) || (lVar34 = *(long *)(unaff_x19[0x75] + 0x38), lVar34 == 0))
            goto thunk_FUN_02e3ccc4;
            if (*(uint *)(lVar34 + 0x18) <= uVar41) goto LAB_0603fce4;
            lVar34 = *(long *)(lVar34 + lVar37 + -0x28c);
            if ((lVar34 == 0) || (lVar34 = *(long *)(lVar34 + 0x20), lVar34 == 0))
            goto thunk_FUN_02e3ccc4;
            uVar14 = FUN_0630fd3c(lVar34,0);
            if ((*in_stack_00000170 == 0) ||
               (((unaff_x19[0x20] == 0 || (lVar34 = *(long *)(unaff_x19[0x20] + 0x178), lVar34 == 0)
                 ) || (lVar34 = *(long *)(lVar34 + 0x50), lVar34 == 0)))) goto thunk_FUN_02e3ccc4;
            uVar21 = FUN_04e82f84(lVar34,uVar14 | *(int *)(*in_stack_00000170 + 0x28) << 0x10,
                                  &stack0x00001160,
                                  *(undefined8 *)
                                   System_Collections_Generic_List<ValueTuple<Type,_NetworkInputWeavedAttribute>>_TypeInfo
                                 );
            lVar37 = lVar37 + -0x178;
          } while ((uVar21 & 1) == 0);
          if ((unaff_x19[0x75] == 0) || (lVar34 = *(long *)(unaff_x19[0x75] + 0x38), lVar34 == 0))
          goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar34 + 0x18) <= uVar11) goto LAB_0603fce4;
          FUN_063140b4(((*(float *)(lVar34 + lVar37 + -0xc) - *(float *)(unaff_x19 + 0xcc)) / fVar56
                       + in_stack_00001164) - in_stack_00001170,in_stack_00001164,in_stack_00001170,
                       &stack0x00001270,0);
          FUN_063140c4(&stack0x00001270,0);
          fVar70 = 0.0;
          bVar8 = true;
        }
LAB_06039e54:
        if ((uVar39 & 1) != 0) {
          uVar11 = *(uint *)((long)unaff_x19 + 0x334);
          if (uVar11 == 0x80000000) {
            bVar8 = true;
          }
          if (!bVar8) {
            if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
            goto thunk_FUN_02e3ccc4;
            if (*(uint *)(lVar37 + 0x18) <= uVar11) goto LAB_0603fce4;
            lVar37 = *(long *)(lVar37 + (long)(int)uVar11 * (long)(int)unaff_w21 + 0x30);
            if ((lVar37 == 0) || (lVar37 = *(long *)(lVar37 + 0x20), lVar37 == 0))
            goto thunk_FUN_02e3ccc4;
            uVar11 = FUN_0630fd3c(lVar37,0);
            if ((*in_stack_00000170 == 0) ||
               (((unaff_x19[0x20] == 0 || (lVar37 = *(long *)(unaff_x19[0x20] + 0x178), lVar37 == 0)
                 ) || (lVar37 = *(long *)(lVar37 + 0x48), lVar37 == 0)))) goto thunk_FUN_02e3ccc4;
            uVar35 = FUN_04e7c424(lVar37,uVar11 | *(int *)(*in_stack_00000170 + 0x28) << 0x10,
                                  &stack0x00001148,
                                  *(undefined8 *)
                                   System_Collections_Generic_List<ValueTuple<TextureHandle,_int>>_TypeInfo
                                 );
            if ((uVar35 & 1) != 0) {
              if ((unaff_x19[0x75] != 0) &&
                 (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 != 0)) {
                if (*(uint *)((long)unaff_x19 + 0x334) < *(uint *)(lVar37 + 0x18)) {
                  FUN_063140b4((in_stack_0000114c +
                               (*(float *)(lVar37 + (long)(int)*(uint *)((long)unaff_x19 + 0x334) *
                                                    (long)(int)unaff_w21 + 0x138) -
                               *(float *)(unaff_x19 + 0xcc)) / fVar56) - in_stack_00001158,
                               in_stack_0000114c,in_stack_00001158,&stack0x00001270,0);
                  goto LAB_06039f50;
                }
                goto LAB_0603fce4;
              }
              goto thunk_FUN_02e3ccc4;
            }
          }
        }
      }
      else {
        if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar37 + 0x18) <= uVar11) goto LAB_0603fce4;
        lVar37 = *(long *)(lVar37 + (long)(int)uVar11 * (long)(int)unaff_w21 + 0x30);
        if ((lVar37 == 0) || (lVar37 = *(long *)(lVar37 + 0x20), lVar37 == 0))
        goto thunk_FUN_02e3ccc4;
        uVar11 = FUN_0630fd3c(lVar37,0);
        if ((*in_stack_00000170 == 0) ||
           (((unaff_x19[0x20] == 0 || (lVar37 = *(long *)(unaff_x19[0x20] + 0x178), lVar37 == 0)) ||
            (lVar37 = *(long *)(lVar37 + 0x48), lVar37 == 0)))) goto thunk_FUN_02e3ccc4;
        uVar35 = FUN_04e7c424(lVar37,uVar11 | *(int *)(*in_stack_00000170 + 0x28) << 0x10,
                              &stack0x00001178,
                              *(undefined8 *)
                               System_Collections_Generic_List<ValueTuple<TextureHandle,_int>>_TypeInfo
                             );
        if ((uVar35 & 1) != 0) {
          if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
          goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar37 + 0x18) <= *(uint *)((long)unaff_x19 + 0x334)) goto LAB_0603fce4;
          FUN_063140b4((in_stack_0000117c +
                       (*(float *)(lVar37 + (long)(int)*(uint *)((long)unaff_x19 + 0x334) *
                                            (long)(int)unaff_w21 + 0x138) -
                       *(float *)(unaff_x19 + 0xcc)) / fVar56) - in_stack_00001188,in_stack_0000117c
                       ,in_stack_00001188,&stack0x00001270,0);
LAB_06039f50:
          FUN_063140c4(&stack0x00001270,0);
          fVar70 = 0.0;
        }
      }
    }
  }
  else {
    *(float *)((long)unaff_x19 + 0x334) = fVar61;
  }
  fVar61 = (float)FUN_063140bc(&stack0x00001270,0);
  fVar58 = (float)FUN_063140bc(&stack0x00001270,0);
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar66 = *(float *)(unaff_x19 + 0xcc);
    fVar65 = (float)FUN_0630fb94(&stack0x00001280,0);
    fVar66 = fVar66 - fVar56 * *(float *)(unaff_x19 + 0x5c) *
                               fVar65 * (unaff_s15 - *(float *)((long)unaff_x19 + 0x304));
    *(float *)(unaff_x19 + 0xcc) = fVar66;
    if ((uVar12 != 0) || (in_stack_0000133c == 0x200b)) {
      *(float *)(unaff_x19 + 0xcc) =
           fVar66 - in_stack_00000100._4_4_ * *(float *)((long)unaff_x19 + 0x2e4);
    }
  }
  fVar65 = *(float *)(unaff_x19 + 0x5b);
  fVar66 = 0.0;
  fStack000000000000016c = 0.0;
  if (fVar65 != 0.0) {
    if (((*(char *)((long)unaff_x19 + 0x2dc) == '\0') || (0x3a < in_stack_0000133c)) ||
       (fVar66 = 0.25, (1L << ((ulong)in_stack_0000133c & 0x3f) & 0x400500000000000U) == 0)) {
      fVar66 = 0.5;
    }
    fVar68 = (float)FUN_0630fb74(&stack0x00001280,0);
    fVar69 = (float)FUN_0630fb84(&stack0x00001280,0);
    fVar66 = *(float *)(unaff_x19 + 0x5c) *
             (unaff_s15 - *(float *)((long)unaff_x19 + 0x304)) *
             (fVar65 * fVar66 - fVar56 * (fVar68 * 0.5 + fVar69));
    *(float *)(unaff_x19 + 0xcc) = fVar66 + *(float *)(unaff_x19 + 0xcc);
  }
  if (*(int *)((long)unaff_x19 + 0x664) == 0) {
    fVar65 = 0.0;
    if ((cVar23 == '\0') && ((*(byte *)((long)unaff_x19 + 0x284) & 1) != 0)) {
      if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
      fVar65 = *(float *)(unaff_x19[0x20] + 0x1ac);
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    lVar37 = unaff_x19[0x23];
    if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar35 = FUN_06267b6c(lVar37,0,0);
    fStack000000000000016c = 0.0;
    if ((uVar35 & 1) != 0) {
      lVar37 = unaff_x19[0x23];
      if (*(int *)(*(long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo + 0xe4)
          == 0) {
        thunk_FUN_02e9a04c();
      }
      plVar24 = (long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo;
      if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
      uVar35 = FUN_06238d70(lVar37,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo
                                              + 0xb8) + 0x6c),0);
      if ((uVar35 & 1) != 0) {
        lVar37 = unaff_x19[0x23];
        if (*(int *)(*plVar24 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          plVar24 = (long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo;
        }
        if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
        uVar35 = FUN_06238d70(lVar37,*(undefined4 *)(*(long *)(*plVar24 + 0xb8) + 0xe4),0);
        if ((uVar35 & 1) != 0) {
          lVar37 = unaff_x19[0x23];
          if (*(int *)(*plVar24 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            plVar24 = (long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo;
          }
          if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
          fVar68 = (float)thunk_FUN_0623b08c(lVar37,*(undefined4 *)
                                                     (*(long *)(*plVar24 + 0xb8) + 0x6c),0);
          if (unaff_x19[0x23] == 0) goto thunk_FUN_02e3ccc4;
          fStack000000000000016c =
               (float)thunk_FUN_0623b08c(unaff_x19[0x23],
                                         *(undefined4 *)(*(long *)(*plVar24 + 0xb8) + 0xe4),0);
          lVar37 = unaff_x19[0x20];
          if (bVar8) {
            if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
            pfVar25 = (float *)(lVar37 + 0x1a0);
          }
          else {
            if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
            pfVar25 = (float *)(lVar37 + 0x1a8);
          }
          fStack000000000000016c = fStack000000000000016c * fVar68 * *pfVar25 * 0.25;
          if (fVar68 < unaff_s13 + fStack000000000000016c) {
            unaff_s13 = fVar68 - fStack000000000000016c;
          }
        }
      }
    }
  }
  else {
    fVar65 = 0.0;
  }
  fVar64 = *(float *)(unaff_x19 + 0xcc);
  fVar68 = (float)FUN_0630fb84(&stack0x00001280,0);
  fVar59 = *(float *)((long)unaff_x19 + 0x484);
  fVar69 = (float)FUN_063140ac(&stack0x00001270,0);
  fVar64 = fVar64 + *(float *)(unaff_x19 + 0x5c) *
                    (unaff_s15 - *(float *)((long)unaff_x19 + 0x304)) *
                    fVar56 * (fVar69 + ((fVar68 * fVar59 - unaff_s13) - fStack000000000000016c));
  fVar68 = (float)FUN_0630fb8c(&stack0x00001280,0);
  fVar69 = (float)FUN_063140bc(&stack0x00001270,0);
  fStack0000000000000180 =
       *(float *)((long)unaff_x19 + 0x63c) +
       ((fStack000000000000017c + fVar56 * (unaff_s13 + fVar68 + fVar69)) -
       *(float *)((long)unaff_x19 + 0x4f4));
  fVar68 = (float)FUN_0630fb7c(&stack0x00001280,0);
  fVar68 = fStack0000000000000180 - fVar56 * (unaff_s13 + unaff_s13 + fVar68);
  fVar69 = (float)FUN_0630fb74(&stack0x00001280,0);
  fVar69 = fVar64 + *(float *)(unaff_x19 + 0x5c) *
                    (unaff_s15 - *(float *)((long)unaff_x19 + 0x304)) *
                    fVar56 * (fStack000000000000016c + fStack000000000000016c +
                             unaff_s13 + unaff_s13 + fVar69 * *(float *)((long)unaff_x19 + 0x484));
  fVar59 = fVar64;
  fVar62 = fVar69;
  if (((*(int *)((long)unaff_x19 + 0x664) == 0) && (cVar23 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x284) >> 1 & 1) != 0)) {
    if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
    lVar37 = unaff_x19[0xc2];
    fVar59 = (float)FUN_0630f8c0(unaff_x19[0x20] + 0x28,0);
    if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
    fVar50 = (float)FUN_0630f8e0(unaff_x19[0x20] + 0x28,0);
    if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
    fVar67 = *(float *)((long)unaff_x19 + 0x444);
    fVar51 = *(float *)((long)unaff_x19 + 0x63c);
    fVar62 = (float)(int)lVar37 * fStack0000000000000054;
    fVar55 = (float)FUN_0630f890(unaff_x19[0x20] + 0x28,0);
    fVar55 = fVar55 * fVar67 * (fVar59 - (fVar50 + fVar51)) * 0.5;
    fVar59 = (float)FUN_0630fb8c(&stack0x00001280,0);
    fVar51 = fVar62 * fVar56 * ((fStack000000000000016c + unaff_s13 + fVar59) - fVar55);
    fVar50 = (float)FUN_0630fb8c(&stack0x00001280,0);
    fVar67 = (float)FUN_0630fb7c(&stack0x00001280,0);
    fStack0000000000000180 = fStack0000000000000180 + 0.0;
    unaff_s15 = 1.0;
    fVar68 = fVar68 + 0.0;
    fVar59 = fVar64 + fVar51;
    fVar62 = fVar62 * fVar56 * ((((fVar50 - fVar67) - unaff_s13) - fStack000000000000016c) - fVar55)
    ;
    fVar64 = fVar64 + fVar62;
    fVar62 = fVar69 + fVar62;
    fVar69 = fVar69 + fVar51;
  }
  uVar17 = *(undefined8 *)(_fStack00000000000000a0 + 0x1a0);
  uVar20 = *(undefined8 *)(_fStack00000000000000a0 + 0x1a8);
  if (DAT_06e84e41 == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a2f028);
    DAT_06e84e41 = '\x01';
  }
  uVar47 = **(undefined8 **)(*(long *)PTR_DAT_06a2f028 + 0xb8);
  uVar53 = (*(undefined8 **)(*(long *)PTR_DAT_06a2f028 + 0xb8))[1];
  if (DAT_01317bfc <
      (float)((ulong)uVar20 >> 0x20) * (float)((ulong)uVar53 >> 0x20) +
      (float)uVar20 * (float)uVar53 +
      (float)uVar17 * (float)uVar47 +
      (float)((ulong)uVar17 >> 0x20) * (float)((ulong)uVar47 >> 0x20)) {
    fVar50 = 0.0;
    auVar48._4_12_ = SUB1612(ZEXT816(0),4);
    auVar48._0_4_ = fVar68;
    uVar17 = auVar48._0_8_;
    uVar35 = (ulong)(uint)fStack0000000000000180;
    uVar20 = uVar17;
  }
  else {
    FUN_062541ec(&stack0x00001340,*(undefined4 *)((long)unaff_x19 + 0x474),(int)unaff_x19[0x8f],
                 *(undefined4 *)((long)unaff_x19 + 0x47c),(int)unaff_x19[0x90],0);
    fVar62 = (fVar69 + fVar64) * 0.5;
    fVar55 = (fVar68 + fStack0000000000000180) * 0.5;
    fVar69 = 0.0;
    auVar48 = ZEXT416((uint)(fStack0000000000000180 - fVar55));
    fVar59 = (float)FUN_062540ec(&stack0x00001100,0);
    fVar59 = fVar62 + fVar59;
    fVar67 = 0.0;
    uVar35 = CONCAT44(fVar69 + 0.0,fVar55 + auVar48._0_4_);
    auVar48 = ZEXT416((uint)(fVar68 - fVar55));
    fVar64 = (float)FUN_062540ec(&stack0x00001100,0);
    fVar64 = fVar62 + fVar64;
    fVar50 = 0.0;
    uVar17 = CONCAT44(fVar67 + 0.0,fVar55 + auVar48._0_4_);
    auVar48 = ZEXT416((uint)(fStack0000000000000180 - fVar55));
    fVar69 = (float)FUN_062540ec(&stack0x00001100,0);
    fVar69 = fVar62 + fVar69;
    fVar67 = 0.0;
    fStack0000000000000180 = fVar55 + auVar48._0_4_;
    fVar50 = fVar50 + 0.0;
    auVar48 = ZEXT416((uint)(fVar68 - fVar55));
    unaff_s15 = 1.0;
    fVar68 = (float)FUN_062540ec(&stack0x00001100,0);
    fVar62 = fVar62 + fVar68;
    uVar20 = CONCAT44(fVar67 + 0.0,fVar55 + auVar48._0_4_);
  }
  if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
  goto thunk_FUN_02e3ccc4;
  if ((uint)*(float *)(lVar37 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
  lVar37 = lVar37 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
  *(float *)(lVar37 + 0x114) = fVar64;
  *(undefined8 *)(lVar37 + 0x118) = uVar17;
  if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
  goto thunk_FUN_02e3ccc4;
  if ((uint)*(float *)(lVar37 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
  lVar37 = lVar37 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
  *(float *)(lVar37 + 0x108) = fVar59;
  *(ulong *)(lVar37 + 0x10c) = uVar35;
  if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
  goto thunk_FUN_02e3ccc4;
  if ((uint)*(float *)(lVar37 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
  lVar37 = lVar37 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
  *(float *)(lVar37 + 0x120) = fVar69;
  *(ulong *)(lVar37 + 0x124) = CONCAT44(fVar50,fStack0000000000000180);
  if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
  goto thunk_FUN_02e3ccc4;
  if ((uint)*(float *)(lVar37 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
  lVar37 = lVar37 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
  *(float *)(lVar37 + 300) = fVar62;
  *(undefined8 *)(lVar37 + 0x130) = uVar20;
  if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar11 = *(uint *)((long)unaff_x19 + 0x4ac);
  fVar59 = *(float *)(unaff_x19 + 0xcc);
  fVar68 = (float)FUN_063140ac(&stack0x00001270,0);
  if (*(uint *)(lVar37 + 0x18) <= uVar11) goto LAB_0603fce4;
  *(float *)(lVar37 + (long)(int)uVar11 * (long)(int)unaff_w21 + 0x138) = fVar59 + fVar56 * fVar68;
  if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar11 = *(uint *)((long)unaff_x19 + 0x4ac);
  fVar59 = *(float *)((long)unaff_x19 + 0x4f4);
  fVar62 = *(float *)((long)unaff_x19 + 0x63c);
  fVar68 = (float)FUN_063140bc(&stack0x00001270,0);
  if (*(uint *)(lVar37 + 0x18) <= uVar11) goto LAB_0603fce4;
  *(float *)(lVar37 + (long)(int)uVar11 * (long)(int)unaff_w21 + 0x144) =
       (fStack000000000000017c - fVar59) + fVar62 + fVar56 * fVar68;
  if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
  goto thunk_FUN_02e3ccc4;
  fVar68 = in_stack_000001a8[10];
  if ((uint)*(float *)(lVar37 + 0x18) <= (uint)fVar68) goto LAB_0603fce4;
  lVar37 = lVar37 + 0x20;
  *(float *)(lVar37 + (long)(int)fVar68 * (long)(int)unaff_w21 + 0x138) =
       (fVar69 - fVar64) / ((float)uVar35 - (float)uVar17);
  fVar61 = fVar56 * (fStack000000000000013c + fVar61);
  if (*(int *)((long)unaff_x19 + 0x664) == 0) {
    fVar61 = fVar61 / fVar52;
    fVar58 = (fVar56 * (fStack0000000000000138 + fVar58)) / fVar52;
  }
  else {
    fVar58 = fVar56 * (fStack0000000000000138 + fVar58);
  }
  fVar59 = *(float *)((long)unaff_x19 + 0x63c);
  fVar69 = *(float *)(unaff_x19 + 0x96);
  if ((uVar12 == 0) || (fVar68 == fVar69)) {
    fVar61 = fVar61 + fVar59;
    fVar58 = fVar58 + fVar59;
    fVar62 = fVar61;
    fVar64 = fVar58;
    if (fVar59 != 0.0) {
      fVar62 = (fVar61 - fVar59) / *(float *)((long)unaff_x19 + 0x444);
      fVar64 = (fVar58 - fVar59) / *(float *)((long)unaff_x19 + 0x444);
      if (fVar62 <= fVar61) {
        fVar62 = fVar61;
      }
      if (fVar58 <= fVar64) {
        fVar64 = fVar58;
      }
    }
    lVar37 = lVar37 + (long)(int)fVar68 * (long)(int)unaff_w21;
    fVar59 = fVar62;
    if (fVar62 <= *(float *)((long)unaff_x19 + 0x4e4)) {
      fVar59 = *(float *)((long)unaff_x19 + 0x4e4);
    }
    fVar50 = fVar64;
    if (*(float *)(unaff_x19 + 0x9d) <= fVar64) {
      fVar50 = *(float *)(unaff_x19 + 0x9d);
    }
    *(float *)((long)unaff_x19 + 0x4e4) = fVar59;
    *(float *)(unaff_x19 + 0x9d) = fVar50;
    *(float *)(lVar37 + 300) = fVar62;
    *(float *)(lVar37 + 0x130) = fVar64;
    fVar62 = *(float *)((long)unaff_x19 + 0x4f4);
    *(float *)(lVar37 + 0x120) = fVar61 - fVar62;
    *(float *)((long)unaff_x19 + 0x4dc) = fVar61 - fVar62;
    *(float *)(lVar37 + 0x128) = fVar58 - fVar62;
    *(float *)(unaff_x19 + 0x9c) = fVar58 - fVar62;
    if (((int)unaff_x19[0x98] == 0) || (*(char *)((long)unaff_x19 + 0x37c) != '\0')) {
      *(float *)((long)unaff_x19 + 0x4d4) = fVar59;
      if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
      fVar58 = *(float *)(unaff_x19 + 0x9b);
      fVar59 = (float)FUN_0630f8c0(unaff_x19[0x20] + 0x28,0);
      fVar52 = (fVar56 * fVar59) / fVar52;
      if (fVar58 <= fVar52) {
        fVar58 = fVar52;
      }
      fVar62 = *(float *)((long)unaff_x19 + 0x4f4);
      *(float *)(unaff_x19 + 0x9b) = fVar58;
    }
    if (fVar62 == 0.0) {
      fVar52 = *(float *)(unaff_x19 + 0x9a);
      if (*(float *)(unaff_x19 + 0x9a) <= fVar61) {
        fVar52 = fVar61;
      }
      *(float *)(unaff_x19 + 0x9a) = fVar52;
    }
  }
  else {
    lVar37 = lVar37 + (long)(int)fVar68 * (long)(int)unaff_w21;
    uVar20 = *(undefined8 *)(in_stack_000001a8 + 0x18);
    *(undefined8 *)(lVar37 + 300) = uVar20;
    fVar62 = *(float *)((long)unaff_x19 + 0x4f4);
    fVar52 = (float)uVar20 - fVar62;
    fVar61 = (float)((ulong)uVar20 >> 0x20) - fVar62;
    *(float *)(lVar37 + 0x120) = fVar52;
    *(float *)(lVar37 + 0x128) = fVar61;
    *(ulong *)(in_stack_000001a8 + 0x16) = CONCAT44(fVar61,fVar52);
  }
  lVar37 = unaff_x19[0x75];
  if ((lVar37 == 0) || (lVar34 = *(long *)(lVar37 + 0x38), lVar34 == 0)) goto thunk_FUN_02e3ccc4;
  fVar52 = in_stack_000001a8[10];
  if ((uint)*(float *)(lVar34 + 0x18) <= (uint)fVar52) goto LAB_0603fce4;
  lVar34 = lVar34 + (long)(int)fVar52 * (long)(int)unaff_w21;
  *(undefined1 *)(lVar34 + 400) = 0;
  uVar14 = *(uint *)(unaff_x19 + 0x54);
  uVar11 = in_stack_0000133c;
  if ((((in_stack_0000133c == 9) ||
       ((in_stack_0000133c == 0x200b || uVar12 != 0 &&
        ((*(uint *)(unaff_x19 + 0x61) & 0xfffffffe) == 2)))) ||
      ((uVar12 == 0 &&
       (((in_stack_0000133c != 3 && (in_stack_0000133c != 0x200b)) && (in_stack_0000133c != 0xad))))
      )) || ((in_stack_0000133c == 0xad && ((uint)fStack0000000000000058 & 1) == 0 ||
             (*(int *)((long)unaff_x19 + 0x664) == 1)))) {
    *(undefined1 *)(lVar34 + 400) = 1;
    pfVar28 = _fStack0000000000000098;
    pfVar25 = _fStack00000000000000c0;
    if (fVar57 == fVar46) {
      lVar37 = *(long *)(lVar37 + 0x50);
      if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
      lVar37 = lVar37 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
      pfVar25 = (float *)(lVar37 + 100);
      pfVar28 = (float *)(lVar37 + 0x68);
    }
    fVar58 = *pfVar25;
    fVar59 = *pfVar28;
    fVar52 = *(float *)(unaff_x19 + 0x74);
    fVar61 = 0.0;
    fVar62 = *(float *)(unaff_x19 + 0xcc);
    in_stack_00000140 = (in_stack_000000b8._4_4_ - fVar58) - fVar59;
    bVar8 = true;
    if ((fVar52 <= in_stack_00000140) && (bVar8 = false, !NAN(fVar52))) {
      bVar8 = fVar52 == -1.0;
    }
    if (!bVar8) {
      in_stack_00000140 = fVar52;
    }
    fVar52 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar52 = (float)FUN_0630fb94(&stack0x00001280,0);
    }
    fVar64 = *(float *)((long)unaff_x19 + 0x4f4);
    param_4 = unaff_s11;
    if (in_stack_0000133c != 0xad) {
      param_4 = fVar56;
    }
    fVar50 = *(float *)((long)unaff_x19 + 0x304);
    param_3 = ZEXT416((uint)fVar50);
    if ((0.0 < fVar64) && (*(char *)((long)unaff_x19 + 0x2f4) == '\0')) {
      fVar61 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4ec);
    }
    fVar55 = in_stack_000001a8[10];
    fVar61 = (*(float *)((long)unaff_x19 + 0x4d4) - (*(float *)(unaff_x19 + 0x9d) - fVar64)) +
             fVar61;
    if (fStack00000000000000ec < fVar61) {
      if ((int)unaff_x19[99] == -1) {
        *(float *)(unaff_x19 + 99) = fVar55;
      }
      plVar24 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      fVar67 = DAT_01317af0;
      if ((char)unaff_x19[0x4c] != '\0') {
        if (0.0 < fVar64) {
          fVar64 = *(float *)(unaff_x19 + 0x5f);
          if ((fVar64 < *(float *)((long)unaff_x19 + 0x2ec)) &&
             (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
            fVar46 = *(float *)((long)unaff_x19 + 0x2ec) +
                     ((in_stack_00000018._4_4_ - fVar61) / (float)(int)unaff_x19[0x98]) /
                     in_stack_00000048._4_4_;
            if (fVar46 <= fVar64) {
              fVar46 = fVar64;
            }
            goto LAB_0603fbd0;
          }
        }
        fVar61 = *(float *)((long)unaff_x19 + 0x20c);
        fVar64 = *(float *)(unaff_x19 + 0x4f);
        if ((fVar64 < fVar61) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
          *(float *)((long)unaff_x19 + 0x264) = fVar61;
          fVar46 = (fVar61 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
          if (fVar46 <= fVar67) {
            fVar46 = fVar67;
          }
          fVar52 = (fVar61 - fVar46) * 20.0 + 0.5;
          fVar46 = _UNK_01317b80;
          if (fVar52 != INFINITY) {
            fVar46 = (float)(int)fVar52 / 20.0;
          }
          if (fVar46 <= fVar64) {
            fVar46 = fVar64;
          }
          *(float *)((long)unaff_x19 + 0x20c) = fVar46;
          return;
        }
      }
      iVar13 = *(int *)((long)unaff_x19 + 0x314);
      if (iVar13 < 5) {
        if (iVar13 == 1) {
          lVar37 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          if (*(int *)(lVar37 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar37 = *plVar24;
          }
          lVar34 = *(long *)(lVar37 + 0xb8);
          if (*(int *)(lVar34 + 0x1708) != 0) {
            if (*(int *)(lVar37 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar34 = *(long *)(*plVar24 + 0xb8);
            }
            UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<PlaySequence>d__16<float>__System_Collections_IEnumerator_Reset
                      (&stack0x00001340,lVar34 + 0x1338,
                       *(undefined8 *)
                        System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo);
            memcpy(&stack0x00000d48,&stack0x00001340,0x3b8);
LAB_0603b314:
            iVar13 = FUN_0608c590();
            in_stack_00001308 = iVar13 - 1;
            unaff_w22 = unaff_w22 + 1;
            fVar52 = (float)(*(int *)((long)unaff_x19 + 0x4ac) - 1);
            *(float *)((long)unaff_x19 + 0x4ac) = fVar52;
            uVar60 = 0x2026;
            goto LAB_0603b340;
          }
LAB_0603b348:
          unaff_x28 = &stack0x000011b0;
          in_stack_000001a8[10] = 0.0;
          in_stack_000001a8[0xb] = 0.0;
          unaff_s11 = fVar56;
          in_stack_00001308 = 0xffffffff;
          in_stack_00001328 = DAT_01318128;
          goto LAB_06038edc;
        }
        if (iVar13 != 3) goto LAB_0603acbc;
        if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_02e9a04c();
        }
LAB_0603af60:
        in_stack_00001308 = FUN_0608c590();
      }
      else {
        if (iVar13 == 5) {
          if ((-1 < (int)in_stack_00001308) && (fVar55 != 0.0)) {
            param_3 = ZEXT416((uint)fStack00000000000000ec);
            if (in_stack_000001a8[0x18] - *(float *)(unaff_x19 + 0x9d) <= fStack00000000000000ec) {
              if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4)
                  == 0) {
                thunk_FUN_02e9a04c();
              }
              unaff_x28 = &stack0x000011b0;
              in_stack_00001308 = FUN_0608c590();
              *(undefined4 *)(unaff_x19 + 0x96) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
              lVar37 = *plVar24;
              *(undefined1 *)((long)unaff_x19 + 0x37c) = 1;
              uVar20 = *(undefined8 *)(*(long *)(lVar37 + 0xb8) + 0x1730);
              *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
              *(undefined4 *)((long)unaff_x19 + 0x4f4) = 0;
              *(float *)(unaff_x19 + 0xcc) = *(float *)((long)unaff_x19 + 0x44c) + 0.0;
              uVar20 = NEON_rev64(uVar20,4);
              param_3 = ZEXT816(0);
              *(int *)(unaff_x19 + 0x98) = (int)unaff_x19[0x98] + 1;
              iVar13 = *(int *)((long)unaff_x19 + 0x4cc);
              *(undefined8 *)(in_stack_000001a8 + 0x18) = uVar20;
              unaff_x19[0x9a] = 0;
              *(int *)((long)unaff_x19 + 0x4cc) = iVar13 + 1;
              unaff_s11 = fVar56;
              goto LAB_06038edc;
            }
            if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02e9a04c();
            }
            goto LAB_0603af60;
          }
          in_stack_000001a8[10] = 0.0;
          in_stack_00001308 = 0xffffffff;
          in_stack_00001328 = DAT_01318128;
LAB_0603b124:
          unaff_x28 = &stack0x000011b0;
          plVar24 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          unaff_s11 = fVar56;
          goto LAB_06038edc;
        }
        if (iVar13 != 6) goto LAB_0603acbc;
        if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_02e9a04c();
        }
        in_stack_00001308 = FUN_0608c590();
        lVar37 = unaff_x19[100];
        if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar18 = FUN_06267b6c(lVar37,0,0);
        if ((uVar18 & 1) != 0) {
          plVar42 = (long *)unaff_x19[100];
          uVar20 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar42 == (long *)0x0) goto thunk_FUN_02e3ccc4;
          (**(code **)(*plVar42 + 0x558))(plVar42,uVar20,*(undefined8 *)(*plVar42 + 0x560));
          lVar37 = unaff_x19[100];
          if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
          *(int *)(lVar37 + 0x440) = (int)unaff_x19[0x88];
          FUN_0607fed4(lVar37,*(undefined4 *)((long)unaff_x19 + 0x4ac),0);
          plVar42 = (long *)unaff_x19[100];
          if (plVar42 == (long *)0x0) goto thunk_FUN_02e3ccc4;
          (**(code **)(*plVar42 + 0x7d8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x66) = 1;
        }
      }
      in_stack_00001328 = CONCAT44(3,fVar55);
      goto LAB_0603af80;
    }
LAB_0603acbc:
    plVar24 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
    if ((uVar18 & 1) != 0) {
      fVar61 = unaff_s15;
      if ((uVar14 & 0x18) != 0) {
        fVar61 = _UNK_01317cd8;
      }
      fVar52 = ABS(fVar62) + *(float *)(unaff_x19 + 0x5c) * fVar52 * (unaff_s15 - fVar50) * param_4;
      if (fVar61 * in_stack_00000140 < fVar52) {
        if ((((int)unaff_x19[0x61] == 0) || ((int)unaff_x19[0x61] == 3)) ||
           (fVar55 == *(float *)(unaff_x19 + 0x96))) {
          if (((char)unaff_x19[0x4c] != '\0') &&
             (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
            param_4 = 100.0;
            fVar62 = *(float *)(unaff_x19 + 0x60) / 100.0;
            if (fVar50 < fVar62) goto LAB_0603fc3c;
            fVar62 = *(float *)((long)unaff_x19 + 0x20c);
            fVar64 = *(float *)(unaff_x19 + 0x4f);
            param_3 = ZEXT416((uint)fVar64);
            if (fVar64 < fVar62) goto LAB_0603fc84;
          }
          iVar13 = *(int *)((long)unaff_x19 + 0x314);
          if (iVar13 == 1) {
            lVar37 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            if (*(int *)(lVar37 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar37 = *plVar24;
            }
            lVar34 = *(long *)(lVar37 + 0xb8);
            if (*(int *)(lVar34 + 0x1708) == 0) goto LAB_0603b348;
            if (*(int *)(lVar37 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar34 = *(long *)(*plVar24 + 0xb8);
            }
            UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<PlaySequence>d__16<float>__System_Collections_IEnumerator_Reset
                      (&stack0x00001340,lVar34 + 0x1338,
                       *(undefined8 *)
                        System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo);
            memcpy(&stack0x000005d8,&stack0x00001340,0x3b8);
            goto LAB_0603b314;
          }
          if (iVar13 == 6) {
            if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02e9a04c();
            }
            in_stack_00001308 = FUN_0608c590();
            lVar37 = unaff_x19[100];
            if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar18 = FUN_06267b6c(lVar37,0,0);
            if ((uVar18 & 1) != 0) {
              plVar42 = (long *)unaff_x19[100];
              uVar20 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar42 == (long *)0x0) goto thunk_FUN_02e3ccc4;
              (**(code **)(*plVar42 + 0x558))(plVar42,uVar20,*(undefined8 *)(*plVar42 + 0x560));
              lVar37 = unaff_x19[100];
              if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
              *(int *)(lVar37 + 0x440) = (int)unaff_x19[0x88];
              FUN_0607fed4(lVar37,*(undefined4 *)((long)unaff_x19 + 0x4ac),0);
              plVar42 = (long *)unaff_x19[100];
              if (plVar42 == (long *)0x0) goto thunk_FUN_02e3ccc4;
              (**(code **)(*plVar42 + 0x7d8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x66) = 1;
            }
            fVar52 = in_stack_000001a8[10];
            goto LAB_0603b288;
          }
          if (iVar13 == 3) {
            if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02e9a04c();
            }
            goto LAB_0603af60;
          }
        }
        else {
          if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0
             ) {
            thunk_FUN_02e9a04c();
          }
          in_stack_00001308 = FUN_0608c590();
          if (*(float *)(unaff_x19 + 0x5e) == DAT_01317908) {
            lVar37 = unaff_x19[0x75];
            if ((lVar37 == 0) || (lVar34 = *(long *)(lVar37 + 0x38), lVar34 == 0))
            goto thunk_FUN_02e3ccc4;
            if ((uint)*(float *)(lVar34 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
            fVar62 = *(float *)((long)unaff_x19 + 0x4f4);
            fVar64 = 0.0;
            if ((0.0 < fVar62) && (*(char *)((long)unaff_x19 + 0x2f4) == '\0')) {
              fVar64 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4ec);
            }
            fVar64 = in_stack_00000100._4_4_ * *(float *)(unaff_x19 + 0x5d) +
                     *(float *)(lVar34 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 +
                               0x14c) + (fVar64 - *(float *)(unaff_x19 + 0x9d)) +
                     in_stack_00000048._4_4_ *
                     (fStack0000000000000044 + *(float *)((long)unaff_x19 + 0x2ec));
          }
          else {
            lVar37 = unaff_x19[0x75];
            *(undefined1 *)((long)unaff_x19 + 0x2f4) = 1;
            if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
            fVar64 = *(float *)(unaff_x19 + 0x5e) +
                     in_stack_00000100._4_4_ * *(float *)(unaff_x19 + 0x5d);
            fVar62 = *(float *)((long)unaff_x19 + 0x4f4);
          }
          puVar7 = System_Collections_Generic_List<AudioListener>_TypeInfo;
          lVar37 = *(long *)(lVar37 + 0x38);
          if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
          fVar50 = *(float *)((long)unaff_x19 + 0x4ac);
          if (((uint)*(float *)(lVar37 + 0x18) <= (uint)fVar50) ||
             (fVar67 = (float)((int)fVar50 - 1), (uint)*(float *)(lVar37 + 0x18) <= (uint)fVar67))
          goto LAB_0603fce4;
          param_4 = *(float *)((long)unaff_x19 + 0x4d4);
          lVar37 = lVar37 + 0x20;
          fVar51 = *(float *)(lVar37 + (long)(int)fVar50 * (long)(int)unaff_w21 + 0x130);
          param_3 = ZEXT416((uint)fVar51);
          fVar51 = (fVar64 + param_4 + fVar62) - fVar51;
          if ((*(short *)(lVar37 + (long)(int)fVar67 * (long)(int)unaff_w21 + 4) == 0xad &&
               ((uint)fStack0000000000000058 & 1) == 0) &&
             ((*(int *)((long)unaff_x19 + 0x314) == 0 || (fVar51 < fStack00000000000000ec)))) {
            fStack0000000000000058 = 0.0;
            in_stack_00001308 = in_stack_00001308 - 1;
            in_stack_00001328 = CONCAT44(0x2d,fVar67);
            in_stack_000001a8[10] = fVar67;
            plVar24 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
LAB_0603af80:
            unaff_x28 = &stack0x000011b0;
            unaff_s11 = fVar56;
            goto LAB_06038edc;
          }
          if (*(short *)(lVar37 + (long)(int)fVar50 * (long)(int)unaff_w21 + 4) == 0xad) {
            fStack0000000000000058 = 1.4013e-45;
            plVar24 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            goto LAB_0603af80;
          }
          if ((char)unaff_x19[0x4c] != '\0' &&
              (((uint)fStack000000000000006c ^ 0xffffffff) & 1) == 0) {
            fVar62 = *(float *)(unaff_x19 + 0x60) / 100.0;
            fVar50 = *(float *)((long)unaff_x19 + 0x304);
            if ((fVar50 < fVar62) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
            goto LAB_0603fc3c;
            fVar62 = *(float *)((long)unaff_x19 + 0x20c);
            fVar64 = *(float *)(unaff_x19 + 0x4f);
            param_3 = ZEXT416((uint)fVar64);
            if ((fVar64 < fVar62) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
            goto LAB_0603fc84;
          }
          lVar37 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          if (*(int *)(lVar37 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar37 = *(long *)puVar7;
          }
          if (((((uint)fStack000000000000006c & 1) != 0) &&
              (iVar13 = *(int *)(*(long *)(lVar37 + 0xb8) + 0xf80), iVar13 != -1)) &&
             (iVar13 != iStack0000000000000020)) {
            if (*(int *)(lVar37 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            in_stack_00001308 = FUN_0608c590();
            if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
            goto thunk_FUN_02e3ccc4;
            fVar62 = (float)((int)in_stack_000001a8[10] - 1);
            if ((uint)*(float *)(lVar37 + 0x18) <= (uint)fVar62) goto LAB_0603fce4;
            iStack0000000000000020 = iVar13;
            if (*(short *)(lVar37 + (long)(int)fVar62 * (long)(int)unaff_w21 + 0x24) == 0xad) {
              fStack0000000000000058 = 0.0;
              in_stack_00001308 = in_stack_00001308 - 1;
              in_stack_00001328 = CONCAT44(0x2d,fVar62);
              in_stack_000001a8[10] = fVar62;
              plVar24 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
              goto LAB_0603af80;
            }
          }
          if (fVar51 <= fStack00000000000000ec) {
            param_3 = ZEXT416((uint)fVar56);
            param_4 = in_stack_00000100._4_4_;
            FUN_0608d070();
LAB_0603cc70:
            fStack000000000000006c = 1.4013e-45;
            fStack0000000000000058 = 0.0;
            uStack0000000000000060 = 1;
            goto LAB_0603b124;
          }
          if ((int)unaff_x19[99] == -1) {
            *(undefined4 *)(unaff_x19 + 99) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
          }
          if ((char)unaff_x19[0x4c] != '\0') {
            fVar62 = *(float *)(unaff_x19 + 0x5f);
            if ((fVar62 < *(float *)((long)unaff_x19 + 0x2ec)) &&
               (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
              fVar46 = *(float *)((long)unaff_x19 + 0x2ec) +
                       ((in_stack_00000018._4_4_ - fVar51) / (float)((int)unaff_x19[0x98] + 1)) /
                       in_stack_00000048._4_4_;
              if (fVar46 <= fVar62) {
                fVar46 = fVar62;
              }
LAB_0603fbd0:
              *(float *)((long)unaff_x19 + 0x2ec) = fVar46;
              return;
            }
            fVar62 = *(float *)(unaff_x19 + 0x60) / 100.0;
            fVar50 = *(float *)((long)unaff_x19 + 0x304);
            if ((fVar50 < fVar62) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
LAB_0603fc3c:
              fVar46 = fVar52;
              if (0.0 < fVar50) {
                fVar46 = fVar52 / (1.0 - fVar50);
              }
              fVar50 = fVar50 + (fVar52 - fVar61 * (in_stack_00000140 + _UNK_01317b20)) / fVar46;
              if (fVar62 <= fVar50) {
                fVar50 = fVar62;
              }
              *(float *)((long)unaff_x19 + 0x304) = fVar50;
              return;
            }
            fVar62 = *(float *)((long)unaff_x19 + 0x20c);
            fVar64 = *(float *)(unaff_x19 + 0x4f);
            param_3 = ZEXT416((uint)fVar64);
            if ((fVar64 < fVar62) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
LAB_0603fc84:
              fVar46 = DAT_01317af0;
              *(float *)((long)unaff_x19 + 0x264) = fVar62;
              fVar52 = (fVar62 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
              if (fVar52 <= fVar46) {
                fVar52 = fVar46;
              }
              fVar52 = (fVar62 - fVar52) * 20.0 + 0.5;
              fVar46 = _UNK_01317b80;
              if (fVar52 != INFINITY) {
                fVar46 = (float)(int)fVar52 / 20.0;
              }
              if (fVar46 <= fVar64) {
                fVar46 = fVar64;
              }
UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__CalculateSnapColliderSize:
              *(float *)((long)unaff_x19 + 0x20c) = fVar46;
              return;
            }
          }
          iVar13 = *(int *)((long)unaff_x19 + 0x314);
          fStack0000000000000058 = 0.0;
          if (iVar13 < 3) {
            if (iVar13 != 0) {
              if (iVar13 == 1) {
                lVar37 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                if (*(int *)(lVar37 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                  lVar37 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                }
                in_stack_00001328 = DAT_01318128;
                lVar34 = *(long *)(lVar37 + 0xb8);
                if (*(int *)(lVar34 + 0x1708) == 0) {
                  in_stack_00001308 = 0xffffffff;
                  in_stack_000001a8[10] = 0.0;
                  in_stack_000001a8[0xb] = 0.0;
                }
                else {
                  if (*(int *)(lVar37 + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                    lVar34 = *(long *)(*(long *)
                                        System_Collections_Generic_List<AudioListener>_TypeInfo +
                                      0xb8);
                  }
                  UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<PlaySequence>d__16<float>__System_Collections_IEnumerator_Reset
                            (&stack0x00001340,lVar34 + 0x1338,
                             *(undefined8 *)
                              System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo);
                  memcpy(&stack0x00000990,&stack0x00001340,0x3b8);
                  iVar13 = FUN_0608c590();
                  in_stack_00001308 = iVar13 - 1;
                  iVar13 = *(int *)((long)unaff_x19 + 0x4ac) + -1;
                  unaff_w22 = unaff_w22 + 1;
                  *(int *)((long)unaff_x19 + 0x4ac) = iVar13;
                  in_stack_00001328 = CONCAT44(0x2026,iVar13);
                }
                goto LAB_0603cf9c;
              }
              if (iVar13 != 2) goto LAB_0603ada8;
            }
LAB_0603cca8:
            unaff_x28 = &stack0x000011b0;
            param_3 = ZEXT416((uint)fVar56);
            param_4 = in_stack_00000100._4_4_;
            FUN_0608d070();
            fStack0000000000000058 = 0.0;
            fStack000000000000006c = 1.4013e-45;
            uStack0000000000000060 = 1;
            plVar24 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            unaff_s11 = fVar56;
            goto LAB_06038edc;
          }
          if (4 < iVar13) {
            if (iVar13 == 5) {
              param_3 = ZEXT416((uint)fVar56);
              *(undefined1 *)((long)unaff_x19 + 0x37c) = 1;
              param_4 = in_stack_00000100._4_4_;
              FUN_0608d070();
              *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
              *(undefined4 *)((long)unaff_x19 + 0x4f4) = 0;
              *(int *)((long)unaff_x19 + 0x4cc) = *(int *)((long)unaff_x19 + 0x4cc) + 1;
              unaff_x19[0x9a] = 0;
              goto LAB_0603cc70;
            }
            if (iVar13 != 6) {
              unaff_s15 = 1.0;
              goto LAB_0603ada8;
            }
            lVar37 = unaff_x19[100];
            if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar18 = FUN_06267b6c(lVar37,0,0);
            if ((uVar18 & 1) != 0) {
              plVar24 = (long *)unaff_x19[100];
              uVar20 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar24 == (long *)0x0) goto thunk_FUN_02e3ccc4;
              (**(code **)(*plVar24 + 0x558))(plVar24,uVar20,*(undefined8 *)(*plVar24 + 0x560));
              lVar37 = unaff_x19[100];
              if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
              *(int *)(lVar37 + 0x440) = (int)unaff_x19[0x88];
              FUN_0607fed4(lVar37,*(undefined4 *)((long)unaff_x19 + 0x4ac),0);
              plVar24 = (long *)unaff_x19[100];
              if (plVar24 == (long *)0x0) goto thunk_FUN_02e3ccc4;
              (**(code **)(*plVar24 + 0x7d8))(plVar24,0,0,*(undefined8 *)(*plVar24 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x66) = 1;
            }
            in_stack_00001328 = CONCAT44(3,in_stack_000001a8[10]);
            goto LAB_0603cf9c;
          }
          if (iVar13 == 3) {
            if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02e9a04c();
            }
            in_stack_00001308 = FUN_0608c590();
            in_stack_00001328 = CONCAT44(3,fVar55);
LAB_0603cf9c:
            fStack0000000000000058 = 0.0;
            unaff_x28 = &stack0x000011b0;
            unaff_s15 = 1.0;
            plVar24 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            unaff_s11 = fVar56;
            goto LAB_06038edc;
          }
          if (iVar13 == 4) goto LAB_0603cca8;
        }
      }
    }
LAB_0603ada8:
    if (uVar12 == 0) {
      if (in_stack_0000133c == 0xad) {
        if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
        goto thunk_FUN_02e3ccc4;
        if ((uint)*(float *)(lVar37 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
        *(undefined1 *)(lVar37 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 + 400) = 0;
      }
      else {
        if (*(int *)((long)unaff_x19 + 0x664) == 1) {
          (**(code **)(*unaff_x19 + 0x8c8))();
        }
        else if (*(int *)((long)unaff_x19 + 0x664) == 0) {
          (**(code **)(*unaff_x19 + 0x8b8))();
        }
        if ((uStack0000000000000060 & 1) != 0) {
          in_stack_000001a8[0xc] = in_stack_000001a8[10];
        }
        *(float *)((long)unaff_x19 + 0x4bc) = in_stack_000001a8[10];
        *(int *)((long)unaff_x19 + 0x4c4) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
        if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x50), lVar37 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
        uStack0000000000000060 = 0;
        lVar37 = lVar37 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
        *(float *)(lVar37 + 100) = fVar58;
        *(float *)(lVar37 + 0x68) = fVar59;
      }
    }
    else {
      lVar37 = unaff_x19[0x75];
      if ((lVar37 == 0) || (lVar34 = *(long *)(lVar37 + 0x38), lVar34 == 0))
      goto thunk_FUN_02e3ccc4;
      fVar52 = in_stack_000001a8[10];
      if ((uint)*(float *)(lVar34 + 0x18) <= (uint)fVar52) goto LAB_0603fce4;
      *(undefined1 *)(lVar34 + (long)(int)fVar52 * (long)(int)unaff_w21 + 400) = 0;
      *(float *)((long)unaff_x19 + 0x4bc) = fVar52;
      lVar34 = *(long *)(lVar37 + 0x50);
      if (lVar34 == 0) goto thunk_FUN_02e3ccc4;
      uVar44 = *(uint *)(lVar34 + 0x18);
      if (uVar44 <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
      lVar34 = lVar34 + 0x20;
      lVar29 = lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
      iVar13 = *(int *)(lVar29 + 0xc) + 1;
      *(int *)(lVar29 + 0xc) = iVar13;
      uVar31 = *(uint *)(unaff_x19 + 0x98);
      *(int *)(unaff_x19 + 0x99) = iVar13;
      if (uVar44 <= uVar31) goto LAB_0603fce4;
      lVar29 = lVar34 + (long)(int)uVar31 * 0x60;
      *(float *)(lVar29 + 0x44) = fVar58;
      *(float *)(lVar29 + 0x48) = fVar59;
      *(int *)(lVar37 + 0x20) = *(int *)(lVar37 + 0x20) + 1;
      if (in_stack_0000133c == 0xa0) {
        *(int *)(lVar34 + (long)(int)uVar31 * 0x60) =
             *(int *)(lVar34 + (long)(int)uVar31 * 0x60) + 1;
      }
    }
  }
  else {
    if (((in_stack_0000133c & 0xfffffffe) == 10) && (*(int *)((long)unaff_x19 + 0x314) == 6)) {
      fVar61 = 0.0;
      if ((0.0 < fVar62) && (*(char *)((long)unaff_x19 + 0x2f4) == '\0')) {
        fVar61 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4ec);
      }
      param_4 = *(float *)((long)unaff_x19 + 0x4d4);
      param_3 = ZEXT416((uint)fStack00000000000000ec);
      if (fStack00000000000000ec < (param_4 - (*(float *)(unaff_x19 + 0x9d) - fVar62)) + fVar61) {
        if ((int)unaff_x19[99] == -1) {
          *(float *)(unaff_x19 + 99) = fVar52;
        }
        plVar24 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_02e9a04c();
        }
        in_stack_00001308 = FUN_0608c590();
        lVar37 = unaff_x19[100];
        if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar18 = FUN_06267b6c(lVar37,0,0);
        if ((uVar18 & 1) != 0) {
          plVar42 = (long *)unaff_x19[100];
          uVar20 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar42 == (long *)0x0) goto thunk_FUN_02e3ccc4;
          (**(code **)(*plVar42 + 0x558))(plVar42,uVar20,*(undefined8 *)(*plVar42 + 0x560));
          lVar37 = unaff_x19[100];
          if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
          *(int *)(lVar37 + 0x440) = (int)unaff_x19[0x88];
          FUN_0607fed4(lVar37,*(undefined4 *)((long)unaff_x19 + 0x4ac),0);
          plVar42 = (long *)unaff_x19[100];
          if (plVar42 == (long *)0x0) goto thunk_FUN_02e3ccc4;
          (**(code **)(*plVar42 + 0x7d8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x66) = 1;
        }
LAB_0603b288:
        uVar60 = 3;
LAB_0603b340:
        unaff_x28 = &stack0x000011b0;
        unaff_s11 = fVar56;
        in_stack_00001328 = CONCAT44(uVar60,fVar52);
        goto LAB_06038edc;
      }
    }
    if ((((in_stack_0000133c - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_stack_0000133c - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (in_stack_0000133c - 10 < 2)) || (in_stack_0000133c == 0xa0)) {
      if (in_stack_0000133c != 0xad) goto LAB_0603b58c;
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar18 = FUN_055814cc(in_stack_0000133c,0);
      if (((uVar18 & 1) != 0) && (in_stack_0000133c != 0xad)) {
LAB_0603b58c:
        if ((in_stack_0000133c == 0x200b) || (in_stack_0000133c == 0x2060)) goto LAB_0603b638;
        lVar37 = unaff_x19[0x75];
        if ((lVar37 == 0) || (lVar34 = *(long *)(lVar37 + 0x50), lVar34 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
        lVar34 = lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
        *(int *)(lVar34 + 0x2c) = *(int *)(lVar34 + 0x2c) + 1;
        *(int *)(lVar37 + 0x20) = *(int *)(lVar37 + 0x20) + 1;
      }
      if (in_stack_0000133c == 0xa0) {
        if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x50), lVar37 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
        lVar37 = lVar37 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
        *(int *)(lVar37 + 0x20) = *(int *)(lVar37 + 0x20) + 1;
      }
    }
  }
LAB_0603b638:
  if ((*(int *)((long)unaff_x19 + 0x314) == 1) &&
     ((fVar57 != fVar46 || (in_stack_0000133c == 0x2d)))) {
    if (unaff_x19[0xcf] == 0) goto thunk_FUN_02e3ccc4;
    fVar61 = *(float *)(unaff_x19 + 0x42);
    fVar52 = (float)FUN_0630f888(unaff_x19[0xcf] + 0x28,0);
    if (unaff_x19[0xcf] == 0) goto thunk_FUN_02e3ccc4;
    fVar58 = (float)FUN_0630f890(unaff_x19[0xcf] + 0x28,0);
    lVar37 = unaff_x19[0xce];
    if ((lVar37 == 0) || (*(long *)(lVar37 + 0x20) == 0)) goto thunk_FUN_02e3ccc4;
    fVar62 = *(float *)((long)unaff_x19 + 0x444);
    fVar64 = *(float *)(lVar37 + 0x2c);
    fVar59 = (float)FUN_0630fd88(*(long *)(lVar37 + 0x20),0);
    uVar20 = *(undefined8 *)_fStack00000000000000c0;
    fVar59 = fVar62 * in_stack_00000118 * (fVar61 / fVar52) * fVar58 * fVar64 * fVar59;
    if ((in_stack_0000133c == 10) && (*(int *)((long)unaff_x19 + 0x4ac) != (int)unaff_x19[0x96])) {
      if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar44 = *(int *)((long)unaff_x19 + 0x4ac) - 1;
      if (*(uint *)(lVar37 + 0x18) <= uVar44) goto LAB_0603fce4;
      if (unaff_x19[0xcf] == 0) goto thunk_FUN_02e3ccc4;
      fVar61 = *(float *)(lVar37 + (long)(int)uVar44 * (long)(int)unaff_w21 + 0x58);
      fVar52 = (float)FUN_0630f888(unaff_x19[0xcf] + 0x28,0);
      if (unaff_x19[0xcf] == 0) goto thunk_FUN_02e3ccc4;
      fVar58 = (float)FUN_0630f890(unaff_x19[0xcf] + 0x28,0);
      lVar37 = unaff_x19[0xce];
      if ((lVar37 == 0) || (*(long *)(lVar37 + 0x20) == 0)) goto thunk_FUN_02e3ccc4;
      fVar62 = *(float *)((long)unaff_x19 + 0x444);
      fVar64 = *(float *)(lVar37 + 0x2c);
      fVar59 = (float)FUN_0630fd88(*(long *)(lVar37 + 0x20),0);
      if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x50), lVar37 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
      uVar20 = *(undefined8 *)(lVar37 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60 + 100);
      fVar59 = fVar62 * in_stack_00000118 * (fVar61 / fVar52) * fVar58 * fVar64 * fVar59;
    }
    fVar61 = *(float *)((long)unaff_x19 + 0x4f4);
    fVar52 = 0.0;
    fVar58 = 0.0;
    if ((0.0 < fVar61) && (*(char *)((long)unaff_x19 + 0x2f4) == '\0')) {
      fVar58 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4ec);
    }
    fVar62 = *(float *)((long)unaff_x19 + 0x4d4);
    fVar64 = *(float *)(unaff_x19 + 0x9d);
    fVar50 = *(float *)(unaff_x19 + 0xcc);
    fStack0000000000000180 = (float)uVar20;
    fStack0000000000000184 = (float)((ulong)uVar20 >> 0x20);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xce] == 0) || (lVar37 = *(long *)(unaff_x19[0xce] + 0x20), lVar37 == 0))
      goto thunk_FUN_02e3ccc4;
      FUN_0630fd4c(&stack0x00001340,lVar37,0);
      fVar52 = (float)FUN_0630fb94(&stack0x000011e0,0);
    }
    puVar7 = System_Collections_Generic_List<AudioListener>_TypeInfo;
    fStack0000000000000184 =
         (in_stack_000000b8._4_4_ - fStack0000000000000180) - fStack0000000000000184;
    fVar55 = *(float *)(unaff_x19 + 0x74);
    bVar8 = true;
    if ((fVar55 <= fStack0000000000000184) && (bVar8 = false, !NAN(fVar55))) {
      bVar8 = fVar55 == -1.0;
    }
    if (!bVar8) {
      fStack0000000000000184 = fVar55;
    }
    fVar55 = unaff_s15;
    if ((uVar14 & 0x18) != 0) {
      fVar55 = _UNK_01317cd8;
    }
    if ((ABS(fVar50) +
         fVar59 * *(float *)(unaff_x19 + 0x5c) *
                  fVar52 * (unaff_s15 - *(float *)((long)unaff_x19 + 0x304)) <
         fVar55 * fStack0000000000000184) &&
       ((fVar62 - (fVar64 - fVar61)) + fVar58 < fStack00000000000000ec)) {
      if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_0608c948();
      lVar37 = *(long *)(*(long *)puVar7 + 0xb8);
      memcpy(&stack0x00001340,(void *)(lVar37 + 0x810),0x3b8);
      FUN_046b8738(lVar37 + 0x1338,&stack0x00001340,
                   *(undefined8 *)System_Collections_Generic_List<ApplicationInvite>_TypeInfo);
    }
  }
  lVar37 = unaff_x19[0x75];
  if ((lVar37 == 0) || (lVar34 = *(long *)(lVar37 + 0x38), lVar34 == 0)) goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar34 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
  lVar34 = lVar34 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * (long)(int)unaff_w21;
  uVar14 = *(uint *)(unaff_x19 + 0x98);
  *(uint *)(lVar34 + 0x5c) = uVar14;
  *(undefined4 *)(lVar34 + 0x60) = *(undefined4 *)((long)unaff_x19 + 0x4cc);
  if ((fVar57 == fVar46) ||
     ((in_stack_0000133c < 0xe && ((1 << (ulong)(in_stack_0000133c & 0x1f) & 0x2c00U) != 0)))) {
    lVar37 = *(long *)(lVar37 + 0x50);
    if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar37 + 0x18) <= uVar14) goto LAB_0603fce4;
    if (*(int *)(lVar37 + (long)(int)uVar14 * 0x60 + 0x24) == 1) goto LAB_0603b9e0;
  }
  else {
    lVar37 = *(long *)(lVar37 + 0x50);
    if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
LAB_0603b9e0:
    if (*(uint *)(lVar37 + 0x18) <= uVar14) goto LAB_0603fce4;
    *(int *)(lVar37 + (long)(int)uVar14 * 0x60 + 0x6c) = (int)unaff_x19[0x54];
  }
  if (in_stack_0000133c == 9) {
    if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
    fVar52 = (float)FUN_0630f930(unaff_x19[0x20] + 0x28,0);
    if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
    fVar61 = (float)NEON_ucvtf((uint)*(byte *)(unaff_x19[0x20] + 0x1b1));
    fVar58 = *(float *)(unaff_x19 + 0xcc);
    param_3 = ZEXT416((uint)fVar58);
    fVar61 = fVar56 * fVar52 * fVar61;
    if ((char)unaff_x19[0x1e] == '\0') {
      param_4 = fVar61 * (float)(int)(fVar58 / fVar61);
      fVar52 = param_4;
      if (param_4 <= fVar58) {
        fVar52 = fVar61 + fVar58;
      }
    }
    else {
      param_4 = fVar61 * (float)(int)(fVar58 / fVar61);
      fVar52 = param_4;
      if (fVar58 <= param_4) {
        fVar52 = fVar58 - fVar61;
      }
    }
LAB_0603bc44:
    *(float *)(unaff_x19 + 0xcc) = fVar52;
  }
  else {
    fVar52 = *(float *)(unaff_x19 + 0x5b);
    if (fVar52 == 0.0) {
      fVar52 = *(float *)(unaff_x19 + 0xcc);
      if ((char)unaff_x19[0x1e] == '\0') {
        fVar58 = (float)FUN_0630fb94(&stack0x00001280,0);
        fVar59 = *in_stack_000001a8;
        fVar66 = (float)FUN_063140cc(&stack0x00001270,0);
        if (unaff_x19[0x20] != 0) {
          param_4 = *(float *)((long)unaff_x19 + 0x304);
          fVar61 = *(float *)(unaff_x19 + 0x5c);
          fVar52 = fVar52 + fVar61 * (unaff_s15 - param_4) *
                                     (*(float *)((long)unaff_x19 + 0x2d4) +
                                     fVar56 * (fVar58 * fVar59 + fVar66) +
                                     in_stack_00000100._4_4_ *
                                     (fVar65 + fVar70 + *(float *)(unaff_x19[0x20] + 0x1a4)));
          *(float *)(unaff_x19 + 0xcc) = fVar52;
          goto joined_r0x0603bb78;
        }
        goto thunk_FUN_02e3ccc4;
      }
      fVar61 = (float)FUN_063140cc(&stack0x00001270,0);
      if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
      param_4 = *(float *)((long)unaff_x19 + 0x304);
      param_3 = ZEXT416((uint)*(float *)(unaff_x19 + 0x5c));
      fVar52 = fVar52 - *(float *)(unaff_x19 + 0x5c) *
                        (unaff_s15 - param_4) *
                        (*(float *)((long)unaff_x19 + 0x2d4) +
                        fVar56 * fVar61 +
                        in_stack_00000100._4_4_ *
                        (fVar65 + fVar70 + *(float *)(unaff_x19[0x20] + 0x1a4)));
      *(float *)(unaff_x19 + 0xcc) = fVar52;
      if ((uVar12 != 0) || (in_stack_0000133c == 0x200b)) {
        fVar61 = in_stack_00000100._4_4_ * *(float *)((long)unaff_x19 + 0x2e4);
        param_3 = ZEXT416((uint)fVar61);
        param_4 = in_stack_00000100._4_4_;
        fVar52 = fVar52 - fVar61;
        goto LAB_0603bc44;
      }
    }
    else {
      if (((*(char *)((long)unaff_x19 + 0x2dc) != '\0') && (in_stack_0000133c < 0x3b)) &&
         ((1L << ((ulong)in_stack_0000133c & 0x3f) & 0x400500000000000U) != 0)) {
        fVar52 = fVar52 * 0.5;
      }
      if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
      param_4 = *(float *)((long)unaff_x19 + 0x304);
      fVar61 = *(float *)(unaff_x19 + 0xcc);
      fVar52 = fVar61 + *(float *)(unaff_x19 + 0x5c) *
                        (unaff_s15 - param_4) *
                        (*(float *)((long)unaff_x19 + 0x2d4) +
                        (fVar52 - fVar66) +
                        in_stack_00000100._4_4_ * (fVar70 + *(float *)(unaff_x19[0x20] + 0x1a4)));
      *(float *)(unaff_x19 + 0xcc) = fVar52;
joined_r0x0603bb78:
      if ((uVar12 != 0) || (param_3 = ZEXT416((uint)fVar61), in_stack_0000133c == 0x200b)) {
        fVar61 = in_stack_00000100._4_4_ * *(float *)((long)unaff_x19 + 0x2e4);
        param_3 = ZEXT416((uint)fVar61);
        param_4 = in_stack_00000100._4_4_;
        fVar52 = fVar52 + fVar61;
        goto LAB_0603bc44;
      }
    }
  }
  lVar37 = unaff_x19[0x75];
  if ((lVar37 == 0) || (lVar34 = *(long *)(lVar37 + 0x38), lVar34 == 0)) goto thunk_FUN_02e3ccc4;
  fVar61 = in_stack_000001a8[10];
  if ((uint)*(float *)(lVar34 + 0x18) <= (uint)fVar61) goto LAB_0603fce4;
  *(float *)(lVar34 + (long)(int)fVar61 * (long)(int)unaff_w21 + 0x13c) = fVar52;
  if (in_stack_0000133c == 0xd) {
    param_3 = ZEXT816(0);
    *(float *)(unaff_x19 + 0xcc) = *(float *)((long)unaff_x19 + 0x44c) + 0.0;
  }
  if ((*(int *)((long)unaff_x19 + 0x314) == 5) &&
     (((0xd < in_stack_0000133c || ((1 << (ulong)(in_stack_0000133c & 0x1f) & 0x2c00U) == 0)) &&
      (1 < in_stack_0000133c - 0x2028)))) {
    lVar34 = *(long *)(lVar37 + 0x58);
    if (lVar34 == 0) goto thunk_FUN_02e3ccc4;
    iVar13 = *(int *)((long)unaff_x19 + 0x4cc) + 1;
    if (*(int *)(lVar34 + 0x18) < iVar13) {
      if (*(int *)(*(long *)System_Collections_Generic_List<AchievementDefinition>_TypeInfo + 0xe4)
          == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_03ab3b84((long *)(lVar37 + 0x58),iVar13,1,
                   *(undefined8 *)System_Collections_Generic_List<XmlEventCache_XmlEvent[]>_TypeInfo
                  );
      lVar37 = unaff_x19[0x75];
      if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
    }
    lVar34 = *(long *)(lVar37 + 0x58);
    if (lVar34 == 0) goto thunk_FUN_02e3ccc4;
    uVar14 = *(uint *)((long)unaff_x19 + 0x4cc);
    if (*(uint *)(lVar34 + 0x18) <= uVar14) goto LAB_0603fce4;
    lVar34 = lVar34 + 0x20;
    lVar29 = lVar34 + (long)(int)uVar14 * 0x14;
    *(int *)(lVar29 + 8) = (int)unaff_x19[0x9a];
    fVar61 = *(float *)(lVar29 + 0x10);
    param_3 = ZEXT416((uint)fVar61);
    fVar52 = *(float *)(unaff_x19 + 0x9c);
    if (fVar61 <= *(float *)(unaff_x19 + 0x9c)) {
      fVar52 = fVar61;
    }
    *(float *)(lVar29 + 0x10) = fVar52;
    if (*(char *)((long)unaff_x19 + 0x37c) != '\0') {
      *(undefined1 *)((long)unaff_x19 + 0x37c) = 0;
      *(undefined4 *)(lVar34 + (long)(int)uVar14 * 0x14) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    }
    fVar61 = in_stack_000001a8[10];
    *(float *)(lVar34 + (long)(int)uVar14 * 0x14 + 4) = fVar61;
  }
  unaff_x28 = &stack0x000011b0;
  uVar14 = in_stack_0000133c;
  if (((in_stack_0000133c < 0xc) && ((1 << (ulong)(in_stack_0000133c & 0x1f) & 0xc08U) != 0)) ||
     ((in_stack_0000133c - 0x2028 < 2 ||
      ((in_stack_0000133c == 0x2d && fVar57 == fVar46 || (fVar61 == fStack0000000000000050)))))) {
    if (0.0 < *(float *)((long)unaff_x19 + 0x4f4)) {
      fVar52 = *(float *)((long)unaff_x19 + 0x4e4);
      fVar61 = *(float *)((long)unaff_x19 + 0x4ec);
      if (*(int *)(*(long *)PTR_DAT_06a2ef88 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      fVar52 = fVar52 - fVar61;
      if (((fStack0000000000000054 < ABS(fVar52)) && (*(char *)((long)unaff_x19 + 0x2f4) == '\0'))
         && (*(char *)((long)unaff_x19 + 0x37c) == '\0')) {
        FUN_0608cd04();
        puVar7 = System_Collections_Generic_List<AudioListener>_TypeInfo;
        lVar37 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        *(float *)(unaff_x19 + 0x9c) = *(float *)(unaff_x19 + 0x9c) - fVar52;
        *(float *)((long)unaff_x19 + 0x4f4) = fVar52 + *(float *)((long)unaff_x19 + 0x4f4);
        if (*(int *)(lVar37 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar37 = *(long *)puVar7;
        }
        lVar34 = *(long *)(lVar37 + 0xb8);
        if (*(int *)(lVar34 + 0x838) == (int)unaff_x19[0x98]) {
          if (*(int *)(lVar37 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar34 = *(long *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo +
                              0xb8);
          }
          UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<PlaySequence>d__16<float>__System_Collections_IEnumerator_Reset
                    (&stack0x00000200,lVar34 + 0x1338,
                     *(undefined8 *)System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo)
          ;
          puVar7 = System_Collections_Generic_List<AudioListener>_TypeInfo;
          lVar37 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          memcpy((void *)(*(long *)(lVar37 + 0xb8) + 0x810),&stack0x00000200,0x3b8);
          thunk_FUN_02ee2be8(*(long *)(lVar37 + 0xb8) + 0x8a8,0);
          lVar37 = *(long *)(*(long *)puVar7 + 0xb8);
          *(float *)(lVar37 + 0x848) = fVar52 + *(float *)(lVar37 + 0x848);
          *(float *)(lVar37 + 0x894) = fVar52 + *(float *)(lVar37 + 0x894);
          memcpy(&stack0x00001340,(void *)(lVar37 + 0x810),0x3b8);
          FUN_046b8738(lVar37 + 0x1338,&stack0x00001340,
                       *(undefined8 *)System_Collections_Generic_List<ApplicationInvite>_TypeInfo);
        }
      }
    }
    fVar58 = *(float *)((long)unaff_x19 + 0x4f4);
    *(undefined1 *)((long)unaff_x19 + 0x37c) = 0;
    fVar61 = *(float *)(unaff_x19 + 0x9d) - fVar58;
    fVar52 = *(float *)(unaff_x19 + 0x9c);
    if (fVar61 <= *(float *)(unaff_x19 + 0x9c)) {
      fVar52 = fVar61;
    }
    fVar66 = *(float *)((long)unaff_x19 + 0x4e4);
    *(float *)(unaff_x19 + 0x9c) = fVar52;
    if (in_stack_00001334 == '\0') {
      in_stack_00001338 = fVar52;
    }
    if ((*(char *)((long)unaff_x19 + 0x374) != '\0') &&
       (((int)unaff_x19[0x6d] <= *(int *)((long)unaff_x19 + 0x4ac) ||
        ((int)unaff_x19[0x6e] <= (int)unaff_x19[0x98])))) {
      in_stack_00001334 = '\x01';
    }
    lVar37 = unaff_x19[0x75];
    if ((lVar37 == 0) || (lVar34 = *(long *)(lVar37 + 0x50), lVar34 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
    lVar34 = lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
    iVar16 = (int)unaff_x19[0x96];
    *(int *)(lVar34 + 0x38) = iVar16;
    iVar13 = iVar16;
    if (iVar16 <= *(int *)((long)unaff_x19 + 0x4b4)) {
      iVar13 = *(int *)((long)unaff_x19 + 0x4b4);
    }
    *(int *)((long)unaff_x19 + 0x4b4) = iVar13;
    *(int *)(lVar34 + 0x3c) = iVar13;
    iVar36 = *(int *)((long)unaff_x19 + 0x4ac);
    *(int *)(unaff_x19 + 0x97) = iVar36;
    *(int *)(lVar34 + 0x40) = iVar36;
    iVar15 = *(int *)((long)unaff_x19 + 0x4b4);
    if (iVar13 <= *(int *)((long)unaff_x19 + 0x4bc)) {
      iVar15 = *(int *)((long)unaff_x19 + 0x4bc);
    }
    *(int *)((long)unaff_x19 + 0x4bc) = iVar15;
    *(int *)(lVar34 + 0x44) = iVar15;
    *(int *)(lVar34 + 0x24) = (iVar36 - iVar16) + 1;
    iVar13 = *(int *)((long)unaff_x19 + 0x4c4);
    *(int *)(lVar34 + 0x28) = iVar13;
    *(int *)(lVar34 + 0x30) = (iVar15 - (iVar16 + iVar13)) + 1;
    lVar37 = *(long *)(lVar37 + 0x38);
    if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
    if ((uint)*(float *)(lVar37 + 0x18) <= (uint)in_stack_000001a8[0xc]) goto LAB_0603fce4;
    *(undefined4 *)(lVar34 + 0x70) =
         *(undefined4 *)(lVar37 + (long)(int)in_stack_000001a8[0xc] * (long)(int)unaff_w21 + 0x114);
    *(float *)(lVar34 + 0x74) = fVar61;
    lVar37 = unaff_x19[0x75];
    if ((lVar37 == 0) || (lVar34 = *(long *)(lVar37 + 0x50), lVar34 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
    lVar37 = *(long *)(lVar37 + 0x38);
    if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar37 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4bc)) goto LAB_0603fce4;
    fVar66 = fVar66 - fVar58;
    param_3 = ZEXT416((uint)fVar66);
    lVar34 = lVar34 + 0x20 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
    *(undefined4 *)(lVar34 + 0x58) =
         *(undefined4 *)
          (lVar37 + (long)(int)*(uint *)((long)unaff_x19 + 0x4bc) * (long)(int)unaff_w21 + 0x120);
    *(float *)(lVar34 + 0x5c) = fVar66;
    lVar37 = unaff_x19[0x75];
    if ((lVar37 == 0) || (lVar34 = *(long *)(lVar37 + 0x50), lVar34 == 0)) goto thunk_FUN_02e3ccc4;
    uVar44 = *(uint *)(unaff_x19 + 0x98);
    if (*(uint *)(lVar34 + 0x18) <= uVar44) goto LAB_0603fce4;
    lVar34 = lVar34 + 0x20;
    lVar29 = lVar34 + (long)(int)uVar44 * 0x60;
    *(float *)(lVar29 + 0x28) = *(float *)(lVar29 + 0x58) - fVar56 * unaff_s13;
    *(float *)(lVar29 + 0x40) = in_stack_00000140;
    if (*(int *)(lVar29 + 4) == 1) {
      *(int *)(lVar34 + (long)(int)uVar44 * 0x60 + 0x4c) = (int)unaff_x19[0x54];
    }
    if ((unaff_x19[0x20] == 0) || (lVar29 = *(long *)(lVar37 + 0x38), lVar29 == 0))
    goto thunk_FUN_02e3ccc4;
    uVar31 = *(uint *)((long)unaff_x19 + 0x4bc);
    if (*(uint *)(lVar29 + 0x18) <= uVar31) goto LAB_0603fce4;
    if ((*(char *)(lVar29 + 0x20 + (long)(int)uVar31 * (long)(int)unaff_w21 + 0x170) == '\0') &&
       (uVar31 = *(uint *)(unaff_x19 + 0x97), *(uint *)(lVar29 + 0x18) <= uVar31))
    goto LAB_0603fce4;
    fVar70 = *(float *)(unaff_x19 + 0x5c) *
             (unaff_s15 - *(float *)((long)unaff_x19 + 0x304)) *
             (*(float *)((long)unaff_x19 + 0x2d4) +
             in_stack_00000100._4_4_ * (fVar65 + fVar70 + *(float *)(unaff_x19[0x20] + 0x1a4)));
    fVar52 = -fVar70;
    if ((char)unaff_x19[0x1e] != '\0') {
      fVar52 = fVar70;
    }
    lVar34 = lVar34 + (long)(int)uVar44 * 0x60;
    *(float *)(lVar34 + 0x3c) =
         *(float *)(lVar29 + 0x20 + (long)(int)uVar31 * (long)(int)unaff_w21 + 0x11c) + fVar52;
    param_4 = 0.0 - *(float *)((long)unaff_x19 + 0x4f4);
    *(float *)(lVar34 + 0x34) = param_4;
    *(float *)(lVar34 + 0x38) = fVar61;
    *(float *)(lVar34 + 0x2c) = fStack000000000000005c + (fVar66 - fVar61);
    *(float *)(lVar34 + 0x30) = fVar66;
    plVar24 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
    if ((((in_stack_0000133c & 0xfffffffe) == 10) || (fVar57 == fVar46 && in_stack_0000133c == 0x2d)
        ) || (in_stack_0000133c - 0x2028 < 2)) {
      if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_0608c948();
      lVar37 = unaff_x19[0x98];
      iVar16 = *(int *)((long)unaff_x19 + 0x4ac);
      in_stack_000001a8[0x10] = 0.0;
      in_stack_000001a8[0x11] = 0.0;
      iVar13 = (int)lVar37 + 1;
      lVar37 = unaff_x19[0x75];
      *(int *)(unaff_x19 + 0x98) = iVar13;
      *(int *)(unaff_x19 + 0x96) = iVar16 + 1;
      if ((lVar37 != 0) && (*(long *)(lVar37 + 0x50) != 0)) {
        if (*(int *)(*(long *)(lVar37 + 0x50) + 0x18) <= iVar13) {
          FUN_0608cec0();
          lVar37 = unaff_x19[0x75];
          if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
        }
        lVar37 = *(long *)(lVar37 + 0x38);
        if (lVar37 != 0) {
          if ((uint)in_stack_000001a8[10] < (uint)*(float *)(lVar37 + 0x18)) {
            fVar46 = *(float *)(lVar37 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21 +
                               0x14c);
            if (*(float *)(unaff_x19 + 0x5e) == DAT_01317908) {
              if ((in_stack_0000133c == 0x2029) || (fVar52 = 0.0, in_stack_0000133c == 10)) {
                fVar52 = *(float *)((long)unaff_x19 + 0x2fc);
              }
              uVar22 = 0;
              fVar52 = fVar46 + (0.0 - *(float *)(unaff_x19 + 0x9d)) +
                       in_stack_00000048._4_4_ *
                       (fStack0000000000000044 + *(float *)((long)unaff_x19 + 0x2ec)) +
                       in_stack_00000100._4_4_ * (*(float *)(unaff_x19 + 0x5d) + fVar52) +
                       *(float *)((long)unaff_x19 + 0x4f4);
            }
            else {
              if ((in_stack_0000133c == 0x2029) || (fVar52 = 0.0, in_stack_0000133c == 10)) {
                fVar52 = *(float *)((long)unaff_x19 + 0x2fc);
              }
              uVar22 = 1;
              fVar52 = *(float *)((long)unaff_x19 + 0x4f4) +
                       *(float *)(unaff_x19 + 0x5e) +
                       in_stack_00000100._4_4_ * (*(float *)(unaff_x19 + 0x5d) + fVar52);
            }
            lVar37 = *plVar24;
            *(float *)((long)unaff_x19 + 0x4f4) = fVar52;
            *(undefined1 *)((long)unaff_x19 + 0x2f4) = uVar22;
            if (*(int *)(lVar37 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar37 = *plVar24;
            }
            fVar52 = *(float *)(unaff_x19 + 0x89);
            uVar20 = *(undefined8 *)(*(long *)(lVar37 + 0xb8) + 0x1730);
            *(float *)((long)unaff_x19 + 0x4ec) = fVar46;
            param_4 = *(float *)((long)unaff_x19 + 0x44c);
            param_3._0_8_ = NEON_rev64(uVar20,4);
            param_3._8_8_ = 0;
            *(ulong *)(in_stack_000001a8 + 0x18) = param_3._0_8_;
            *(float *)(unaff_x19 + 0xcc) = fVar52 + 0.0 + param_4;
            FUN_0608c948();
            FUN_0608c948();
            *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
            fStack000000000000006c = 1.4013e-45;
            uStack0000000000000060 = 1;
            unaff_s11 = fVar56;
            goto LAB_06038edc;
          }
          goto LAB_0603fce4;
        }
      }
      goto thunk_FUN_02e3ccc4;
    }
    if (in_stack_0000133c == 3) {
      if (unaff_x19[0x92] == 0) goto thunk_FUN_02e3ccc4;
      in_stack_00001308 = (uint)*(undefined8 *)(unaff_x19[0x92] + 0x18);
      uVar14 = 3;
    }
  }
  lVar37 = *(long *)(lVar37 + 0x38);
  if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
  fVar52 = in_stack_000001a8[10];
  fVar46 = *(float *)(lVar37 + 0x18);
  if ((uint)fVar46 <= (uint)fVar52) goto LAB_0603fce4;
  lVar37 = lVar37 + 0x20;
  if (*(char *)(lVar37 + (long)(int)fVar52 * (long)(int)unaff_w21 + 0x170) != '\0') {
    lVar34 = lVar37 + (long)(int)fVar52 * (long)(int)unaff_w21;
    auVar48 = *(undefined1 (*) [16])(in_stack_000001a8 + 0x1d);
    auVar54 = NEON_ext(auVar48,auVar48,8,1);
    uVar20 = *(undefined8 *)(lVar34 + 0xf4);
    param_4 = (float)uVar20;
    uVar17 = *(undefined8 *)(lVar34 + 0x100);
    fVar57 = (float)uVar17;
    fVar70 = (float)((ulong)uVar17 >> 0x20);
    param_3._0_4_ = (float)-(uint)(auVar48._0_4_ < param_4);
    param_3._4_4_ = (float)-(uint)(auVar48._4_4_ < (float)((ulong)uVar20 >> 0x20));
    param_3._8_4_ = -(uint)(fVar57 < auVar54._0_4_);
    param_3._12_4_ = -(uint)(fVar70 < auVar54._4_4_);
    auVar54._8_4_ = fVar57;
    auVar54._0_8_ = uVar20;
    auVar54._12_4_ = fVar70;
    auVar48 = auVar48 ^ (auVar48 ^ auVar54) & ~param_3;
    *(long *)(in_stack_000001a8 + 0x1f) = auVar48._8_8_;
    *(long *)(in_stack_000001a8 + 0x1d) = auVar48._0_8_;
  }
  if ((((int)unaff_x19[0x61] != 3) && ((int)unaff_x19[0x61] != 0)) ||
     ((*(uint *)((long)unaff_x19 + 0x314) < 7 &&
      ((1 << (ulong)(*(uint *)((long)unaff_x19 + 0x314) & 0x1f) & 0x4aU) != 0)))) {
    fVar57 = (float)((int)fVar52 + 1);
    if ((int)fVar57 < (int)fStack0000000000000064) {
      if ((uint)fVar46 <= (uint)fVar57) goto LAB_0603fce4;
      uVar43 = *(undefined2 *)(lVar37 + (long)(int)fVar57 * (long)(int)unaff_w21 + 4);
    }
    else {
      uVar43 = 0;
    }
    if ((((uVar12 == 0) && (uVar14 != 0x2d)) && (uVar14 != 0x200b)) && (uVar14 != 0xad)) {
      if (*(char *)((long)unaff_x19 + 0x30d) == '\0') goto LAB_0603c69c;
LAB_0603c510:
      if (((uint)fStack000000000000006c & 1) == 0) {
        fStack000000000000006c = 0.0;
      }
      else {
        uVar12 = (uint)(uVar12 == 0 || in_stack_0000133c == 0xa0) &
                 ((uint)(in_stack_0000133c != 0xad) | (uint)fStack0000000000000058) ^ 1;
LAB_0603c548:
        fStack000000000000006c = 1.4013e-45;
        plVar24 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__PreprocessInteractor:
        if (*(int *)(*plVar24 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        FUN_0608c948();
        if (uVar12 != 0) goto LAB_0603c590;
      }
    }
    else {
      if (*(char *)((long)unaff_x19 + 0x30d) != '\0') goto LAB_0603c510;
      if ((int)uVar14 < 0x2007) {
        if (uVar14 == 0x2d) {
          if (0 < (int)fVar52) {
            if ((uint)fVar46 <= (int)fVar52 - 1U) goto LAB_0603fce4;
            uVar43 = *(undefined2 *)(lVar37 + (ulong)((int)fVar52 - 1U) * (ulong)unaff_w21 + 4);
            if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar18 = FUN_0557df5c(uVar43,0);
            if ((uVar18 & 1) != 0) {
              if ((unaff_x19[0x75] == 0) ||
                 (lVar37 = *(long *)(unaff_x19[0x75] + 0x38), lVar37 == 0)) goto thunk_FUN_02e3ccc4;
              if (*(uint *)(lVar37 + 0x18) <= (int)in_stack_000001a8[10] - 1U) goto LAB_0603fce4;
              if (*(int *)(lVar37 + (long)(int)((int)in_stack_000001a8[10] - 1U) *
                                    (long)(int)unaff_w21 + 0x5c) == (int)unaff_x19[0x98])
              goto LAB_0603c5f8;
            }
          }
        }
        else if (uVar14 == 0xa0) goto LAB_0603c69c;
LAB_0603cad8:
        plVar24 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        lVar37 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        if (*(int *)(lVar37 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar37 = *plVar24;
        }
        fStack000000000000006c = 0.0;
        uVar12 = 0;
        *(undefined4 *)(*(long *)(lVar37 + 0xb8) + 0xf80) = 0xffffffff;
        goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__PreprocessInteractor;
      }
      if (((0x28 < uVar14 - 0x2007) ||
          ((1L << ((ulong)(uVar14 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) && (uVar14 != 0x2060))
      goto LAB_0603cad8;
LAB_0603c69c:
      if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo + 0xe4) ==
          0) {
        thunk_FUN_02e9a04c();
      }
      uVar18 = FUN_060b1e64(uVar14,0);
      if ((uVar18 & 1) == 0) {
LAB_0603c6e8:
        if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo + 0xe4)
            == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar18 = FUN_060b1ec0(in_stack_0000133c,0);
        if ((uVar18 & 1) != 0) goto LAB_0603c714;
        if (*(char *)((long)unaff_x19 + 0x30d) != '\0') goto LAB_0603c510;
        if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo + 0xe4)
            == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar18 = FUN_060b1ec0(uVar43,0);
        if ((uVar18 & 1) == 0) goto LAB_0603c510;
        if (*(int *)(*(long *)System_Collections_Generic_List<object[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        lVar37 = FUN_060a80a0(0);
        if ((lVar37 != 0) && (*(long *)(lVar37 + 0x18) != 0)) {
          uVar18 = FUN_052f86ac(*(long *)(lVar37 + 0x18),uVar43,
                                *(undefined8 *)
                                 System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo
                               );
          if ((uVar18 & 1) != 0) goto LAB_0603c510;
LAB_0603cb44:
          uVar12 = 0;
          plVar24 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__PreprocessInteractor;
        }
        goto thunk_FUN_02e3ccc4;
      }
      if (*(int *)(*(long *)System_Collections_Generic_List<object[]>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar18 = FUN_060a82b4(0);
      if ((uVar18 & 1) != 0) goto LAB_0603c6e8;
LAB_0603c714:
      if (*(int *)(*(long *)System_Collections_Generic_List<object[]>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      lVar37 = FUN_060a80a0(0);
      if ((lVar37 == 0) || (*(long *)(lVar37 + 0x10) == 0)) goto thunk_FUN_02e3ccc4;
      uVar18 = FUN_052f86ac(*(long *)(lVar37 + 0x10),in_stack_0000133c,
                            *(undefined8 *)
                             System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo
                           );
      if ((int)fStack0000000000000050 <= (int)in_stack_000001a8[10]) {
        if ((uVar18 & 1) == 0) {
          fStack000000000000006c = 0.0;
          goto LAB_0603cb44;
        }
LAB_0603c85c:
        uVar12 = (uint)(uVar12 != 0);
        if (fVar68 != fVar69 || (((uint)fStack000000000000006c ^ 0xffffffff) & 1) != 0)
        goto LAB_0603c5f8;
        goto LAB_0603c548;
      }
      if (*(int *)(*(long *)System_Collections_Generic_List<object[]>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      lVar37 = FUN_060a80a0(0);
      if ((lVar37 == 0) || (*(long *)(lVar37 + 0x18) == 0)) goto thunk_FUN_02e3ccc4;
      uVar14 = FUN_052f86ac(*(long *)(lVar37 + 0x18),uVar43,
                            *(undefined8 *)
                             System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo
                           );
      if ((uVar18 & 1) != 0) goto LAB_0603c85c;
      fStack000000000000006c = (float)(uVar14 & (uint)fStack000000000000006c);
      uVar12 = (uint)fStack000000000000006c & (uint)(uVar12 != 0);
      plVar24 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if ((((uint)fStack000000000000006c & 1) != 0) || (((uVar14 ^ 1) & 1) != 0))
      goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__PreprocessInteractor;
      fStack000000000000006c = 0.0;
      if (uVar12 == 0) goto LAB_0603c5f8;
LAB_0603c590:
      if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_0608c948();
    }
  }
LAB_0603c5f8:
  plVar24 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
  if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  unaff_x28 = &stack0x000011b0;
  FUN_0608c948();
  *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
  unaff_s11 = fVar56;
LAB_06038edc:
  do {
    do {
      lVar37 = unaff_x19[0x92];
      in_stack_00001308 = in_stack_00001308 + 1;
      if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
      if ((int)*(uint *)(lVar37 + 0x18) <= (int)in_stack_00001308) {
LAB_0603cfc8:
        if ((char)unaff_x19[0x4c] == '\0') {
LAB_0603d08c:
          iVar13 = *(int *)((long)unaff_x19 + 0x26c);
          iVar16 = (int)unaff_x19[0x4e];
        }
        else {
          param_4 = *(float *)((long)unaff_x19 + 0x264);
          param_3 = ZEXT416((uint)_UNK_01317b9c);
          if (param_4 - *(float *)(unaff_x19 + 0x4d) <= _UNK_01317b9c) goto LAB_0603d08c;
          fVar46 = *(float *)((long)unaff_x19 + 0x20c);
          fVar52 = *(float *)((long)unaff_x19 + 0x27c);
          param_3 = ZEXT416((uint)fVar52);
          iVar13 = *(int *)((long)unaff_x19 + 0x26c);
          iVar16 = (int)unaff_x19[0x4e];
          if ((fVar46 < fVar52) && (iVar13 < iVar16)) {
            if (*(float *)((long)unaff_x19 + 0x304) < *(float *)(unaff_x19 + 0x60) / 100.0) {
              *(undefined4 *)((long)unaff_x19 + 0x304) = 0;
            }
            fVar57 = DAT_01317af0;
            *(float *)(unaff_x19 + 0x4d) = fVar46;
            fVar56 = (param_4 - fVar46) * 0.5;
            if (fVar56 <= fVar57) {
              fVar56 = fVar57;
            }
            fVar57 = (fVar46 + fVar56) * 20.0 + 0.5;
            fVar46 = _UNK_01317b80;
            if (fVar57 != INFINITY) {
              fVar46 = (float)(int)fVar57 / 20.0;
            }
            if (fVar52 <= fVar46) {
              fVar46 = fVar52;
            }
            goto 
            UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__CalculateSnapColliderSize
            ;
          }
        }
        *(undefined1 *)((long)unaff_x19 + 0x274) = 1;
        if (iVar16 <= iVar13) {
          uVar20 = FUN_05603500((long)unaff_x19 + 0x26c,0);
          uVar17 = FUN_05618860((long)unaff_x19 + 0x20c,0);
          uVar20 = FUN_0548db04(*(undefined8 *)System_Collections_Generic_List<BigInteger>_TypeInfo,
                                uVar20,*(undefined8 *)
                                        System_Collections_Generic_List<BaseInvokableCall>_TypeInfo,
                                uVar17,0);
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_02e9a04c(*unaff_x29);
          }
          FUN_062244a4(uVar20,0);
        }
        if ((in_stack_000001a8[10] == 0.0) ||
           ((in_stack_000001a8[10] == 1.4013e-45 && (uVar11 == 3)))) {
          (**(code **)(*unaff_x19 + 0x958))();
          goto LAB_0603d144;
        }
        lVar37 = *plVar24;
        if (*(int *)(lVar37 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar37 = *plVar24;
        }
        plVar42 = (long *)System_Collections_Generic_List<byte[]>_TypeInfo;
        lVar37 = **(long **)(lVar37 + 0xb8);
        if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0xd5)) goto LAB_0603fce4;
        iVar13 = *(int *)(lVar37 + (long)(int)*(uint *)(unaff_x19 + 0xd5) * 0x38 + 0x54) << 2;
        if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x60), lVar37 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(int *)(*(long *)System_Collections_Generic_List<byte[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        if (*(int *)(lVar37 + 0x18) == 0) goto LAB_0603fce4;
        FUN_060a5124(lVar37 + 0x20,0,0);
        fStack00000000000000c0 = (float)FUN_031c4efc(0);
        iVar16 = (int)unaff_x19[0x53];
        lVar37 = unaff_x19[0xef];
        in_stack_000000b8._4_4_ = param_4;
        if (iVar16 < 0x401) {
          if (iVar16 == 0x100) {
            if (*(int *)((long)unaff_x19 + 0x314) == 5) {
              if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
              if ((*(uint *)(lVar37 + 0x18) & 0xfffffffe) == 0) goto LAB_0603fce4;
              if ((unaff_x19[0x75] == 0) ||
                 (lVar34 = *(long *)(unaff_x19[0x75] + 0x58), lVar34 == 0)) goto thunk_FUN_02e3ccc4;
              if (*(uint *)(lVar34 + 0x18) <= uStack0000000000000040) goto LAB_0603fce4;
              fVar46 = *(float *)(lVar34 + (long)(int)uStack0000000000000040 * 0x14 + 0x28);
            }
            else {
              if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
              if ((*(uint *)(lVar37 + 0x18) & 0xfffffffe) == 0) goto LAB_0603fce4;
              fVar46 = *(float *)((long)unaff_x19 + 0x4d4);
            }
            in_stack_000000b8._4_4_ = *(float *)(lVar37 + 0x34);
            fStack000000000000002c = (0.0 - fVar46) - fStack0000000000000028;
            param_4 = *(float *)(lVar37 + 0x2c);
            fVar46 = *(float *)(lVar37 + 0x30);
LAB_0603d53c:
            param_4 = in_stack_00000030 + 0.0 + param_4;
            fVar46 = fVar46 + fStack000000000000002c;
          }
          else {
            if (iVar16 != 0x200) {
              if (iVar16 != 0x400) goto LAB_0603d550;
              if (*(int *)((long)unaff_x19 + 0x314) == 5) {
                if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
                if (*(int *)(lVar37 + 0x18) == 0) goto LAB_0603fce4;
                if ((unaff_x19[0x75] == 0) ||
                   (lVar34 = *(long *)(unaff_x19[0x75] + 0x58), lVar34 == 0))
                goto thunk_FUN_02e3ccc4;
                if (*(uint *)(lVar34 + 0x18) <= uStack0000000000000040) goto LAB_0603fce4;
                in_stack_00001338 =
                     *(float *)(lVar34 + (long)(int)uStack0000000000000040 * 0x14 + 0x30);
              }
              else {
                if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
                if (*(int *)(lVar37 + 0x18) == 0) goto LAB_0603fce4;
              }
              in_stack_000000b8._4_4_ = *(float *)(lVar37 + 0x28);
              fStack000000000000002c = fStack000000000000002c + (0.0 - in_stack_00001338);
              param_4 = *(float *)(lVar37 + 0x20);
              fVar46 = *(float *)(lVar37 + 0x24);
              goto LAB_0603d53c;
            }
            if (*(int *)((long)unaff_x19 + 0x314) != 5) {
              if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
              if ((*(int *)(lVar37 + 0x18) != 1) && (*(int *)(lVar37 + 0x18) != 0)) {
                fVar46 = *(float *)((long)unaff_x19 + 0x4d4);
                goto LAB_0603d470;
              }
              goto LAB_0603fce4;
            }
            if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
            if ((*(int *)(lVar37 + 0x18) == 1) || (*(int *)(lVar37 + 0x18) == 0)) goto LAB_0603fce4;
            if ((unaff_x19[0x75] == 0) || (lVar34 = *(long *)(unaff_x19[0x75] + 0x58), lVar34 == 0))
            goto thunk_FUN_02e3ccc4;
            if (*(uint *)(lVar34 + 0x18) <= uStack0000000000000040) goto LAB_0603fce4;
            lVar34 = lVar34 + (long)(int)uStack0000000000000040 * 0x14;
            in_stack_000000b8._4_4_ = (*(float *)(lVar37 + 0x28) + *(float *)(lVar37 + 0x34)) * 0.5;
            param_4 = in_stack_00000030 + 0.0 +
                      ((float)*(undefined8 *)(lVar37 + 0x20) + (float)*(undefined8 *)(lVar37 + 0x2c)
                      ) * 0.5;
            fVar46 = (0.0 - ((fStack0000000000000028 + *(float *)(lVar34 + 0x28) +
                             *(float *)(lVar34 + 0x30)) - fStack000000000000002c) * 0.5) +
                     ((float)((ulong)*(undefined8 *)(lVar37 + 0x20) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(lVar37 + 0x2c) >> 0x20)) * 0.5;
          }
          in_stack_000000b8._4_4_ = in_stack_000000b8._4_4_ + 0.0;
          param_3 = ZEXT416((uint)fVar46);
          fStack00000000000000c0 = param_4;
        }
        else if (iVar16 == 0x800) {
          if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
          if ((*(int *)(lVar37 + 0x18) == 1) || (*(int *)(lVar37 + 0x18) == 0)) goto LAB_0603fce4;
          param_4 = (*(float *)(lVar37 + 0x28) + *(float *)(lVar37 + 0x34)) * 0.5;
          fStack00000000000000c0 =
               ((float)*(undefined8 *)(lVar37 + 0x20) + (float)*(undefined8 *)(lVar37 + 0x2c)) * 0.5
               + in_stack_00000030 + 0.0;
          in_stack_000000b8._4_4_ = param_4 + 0.0;
          param_3 = ZEXT416((uint)(((float)((ulong)*(undefined8 *)(lVar37 + 0x20) >> 0x20) +
                                   (float)((ulong)*(undefined8 *)(lVar37 + 0x2c) >> 0x20)) * 0.5 +
                                  0.0));
        }
        else {
          if (iVar16 == 0x1000) {
            if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
            if ((*(int *)(lVar37 + 0x18) == 1) || (*(int *)(lVar37 + 0x18) == 0)) goto LAB_0603fce4;
            fVar46 = *(float *)((long)unaff_x19 + 0x504);
            in_stack_00001338 = *(float *)((long)unaff_x19 + 0x4fc);
LAB_0603d470:
            fStack0000000000000028 = fStack0000000000000028 + fVar46 + in_stack_00001338;
          }
          else {
            if (iVar16 != 0x2000) goto LAB_0603d550;
            if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
            if ((*(int *)(lVar37 + 0x18) == 1) || (*(int *)(lVar37 + 0x18) == 0)) goto LAB_0603fce4;
            fStack0000000000000028 = *(float *)(unaff_x19 + 0x9b) - fStack0000000000000028;
          }
          param_4 = in_stack_00000030 + 0.0;
          param_3._0_4_ =
               ((float)*(undefined8 *)(lVar37 + 0x24) + (float)*(undefined8 *)(lVar37 + 0x30)) * 0.5
               + (0.0 - (fStack0000000000000028 - fStack000000000000002c) * 0.5);
          param_3._4_4_ =
               ((float)((ulong)*(undefined8 *)(lVar37 + 0x24) >> 0x20) +
               (float)((ulong)*(undefined8 *)(lVar37 + 0x30) >> 0x20)) * 0.5 + 0.0;
          param_3._8_8_ = 0;
          fStack00000000000000c0 =
               param_4 + (*(float *)(lVar37 + 0x20) + *(float *)(lVar37 + 0x2c)) * 0.5;
          in_stack_000000b8._4_4_ = param_3._4_4_;
        }
LAB_0603d550:
        auVar48 = param_3;
        fStack0000000000000120 = (float)FUN_031c4efc(0);
        auVar54 = auVar48;
        FUN_031c4efc(0);
        lVar37 = FUN_0604a24c();
        if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
        FUN_0627938c(lVar37,0);
        *(float *)((long)unaff_x19 + 0x704) = auVar54._0_4_;
        uStack0000000000000084 =
             FUN_031c4f40(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
        FUN_031c4f40(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo);
        }
        FUN_0603fd20(0);
        FUN_0605b508(&stack0x00001310,0x4000ffff,0);
        if (*(int *)(*plVar24 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        lVar37 = unaff_x19[0x75];
        if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
        fVar46 = in_stack_000001a8[10];
        if ((int)fVar46 < 1) {
          fStack00000000000000ec = 0.0;
          iVar16 = 0;
          goto LAB_0603f770;
        }
        lVar37 = *(long *)(lVar37 + 0x38);
        if (lVar37 == 0) goto thunk_FUN_02e3ccc4;
        bVar6 = false;
        bVar4 = false;
        fVar57 = 0.0;
        bVar5 = false;
        fStack00000000000000ec = 0.0;
        uVar12 = 0;
        in_stack_00000048._4_4_ = 0.0;
        uVar11 = 0;
        lVar34 = lVar37 + 0x20;
        bVar8 = false;
        uStack0000000000000060 = 0;
        fStack0000000000000190 = auVar48._0_4_;
        fStack0000000000000138 =
             *(float *)(*(long *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo +
                                 0xb8) + 0x1730);
        fStack0000000000000124 = fStack0000000000000190;
        fStack00000000000001b0 = param_3._0_4_;
        fStack0000000000000058 = 0.0;
        fStack0000000000000134 = 0.0;
        fStack000000000000016c = 0.0;
        fStack00000000000000a0 = 0.0;
        fStack000000000000006c = fStack00000000000000e8;
        fVar52 = 0.0;
        fStack00000000000000dc = fStack00000000000000e8;
        fStack00000000000000e0 = in_stack_00000110._4_4_;
        fStack0000000000000064 = in_stack_00000110._4_4_;
        uStack0000000000000068 = in_stack_000000d8;
        fStack0000000000000094 = fStack00000000000000e8;
        fStack0000000000000098 = in_stack_00000110._4_4_;
        uStack0000000000000088 = in_stack_000000d8;
        in_stack_00000100._4_4_ = param_4;
        uVar14 = 0;
        goto LAB_0603d6e0;
      }
      if (*(uint *)(lVar37 + 0x18) <= in_stack_00001308) goto LAB_0603fce4;
      in_stack_0000133c = *(uint *)(lVar37 + (long)(int)in_stack_00001308 * 0x10 + 0x24);
      if (in_stack_0000133c == 0) goto LAB_0603cfc8;
      if (5 < unaff_w22) {
        uVar20 = Oculus_Platform_CAPI__ovr_DestinationArray_HasNextPage(&stack0x0000133c,0);
        uVar17 = FUN_05603500(&stack0x00001308,0);
        uVar20 = FUN_0548db04(*(undefined8 *)
                               System_Collections_Generic_List<BaseInputModule>_TypeInfo,uVar20,
                              *(undefined8 *)System_Collections_Generic_List<BaseRaycaster>_TypeInfo
                              ,uVar17,0);
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_02e9a04c(*unaff_x29);
        }
        FUN_06224c0c(uVar20,0);
        in_stack_00001328 = CONCAT44(3,in_stack_000001a8[10]);
      }
      uVar11 = in_stack_0000133c;
    } while (in_stack_0000133c == 0x1a);
    if ((in_stack_0000133c != 0x3c) || (*(char *)((long)unaff_x19 + 0x342) == '\0')) {
      if ((unaff_x19[0x75] == 0) || (param_1 = *(long *)(unaff_x19[0x75] + 0x38), param_1 == 0))
      goto thunk_FUN_02e3ccc4;
      if ((uint)*(float *)(param_1 + 0x18) <= (uint)in_stack_000001a8[10]) goto LAB_0603fce4;
      param_1 = param_1 + (long)(int)in_stack_000001a8[10] * (long)(int)unaff_w21;
      param_5 = unaff_x19 + 0x20;
      in_w9 = *(undefined4 *)(param_1 + 0x20);
      goto code_r0x06038c80;
    }
    *(undefined1 *)((long)unaff_x19 + 0x471) = 1;
    *(undefined4 *)((long)unaff_x19 + 0x664) = 0;
    uVar18 = FUN_060872e4();
  } while (((uVar18 & 1) != 0) &&
          (in_stack_00001308 = in_stack_0000126c, *(int *)((long)unaff_x19 + 0x664) == 0));
  goto LAB_06038c98;
LAB_0603d6e0:
  if (*(uint *)(lVar37 + 0x18) <= uVar11) goto LAB_0603fce4;
  uVar39 = (ulong)uVar11;
  piVar38 = (int *)(lVar34 + uVar39 * 0x178);
  lVar29 = *(long *)(piVar38 + 8);
  uVar45 = *(ushort *)(piVar38 + 1);
  if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar44 = (uint)uVar45;
  bVar9 = FUN_0557df5c(uVar45,0);
  if (*(uint *)(lVar37 + 0x18) <= uVar11) goto LAB_0603fce4;
  if ((unaff_x19[0x75] == 0) || (lVar19 = *(long *)(unaff_x19[0x75] + 0x50), lVar19 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar31 = *(uint *)(lVar34 + uVar39 * 0x178 + 0x3c);
  if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_0603fce4;
  lVar19 = lVar19 + (long)(int)uVar31 * 0x60;
  uVar2 = *(uint *)(lVar19 + 0x40);
  uVar3 = *(uint *)(lVar19 + 0x44);
  fVar58 = *(float *)(lVar19 + 0x58);
  fVar46 = *(float *)(lVar19 + 0x5c);
  uVar40 = *(uint *)(lVar19 + 0x6c);
  fVar65 = *(float *)(lVar19 + 0x60);
  fVar69 = *(float *)(lVar19 + 100);
  iVar16 = *(int *)(lVar19 + 0x20);
  fVar68 = *(float *)(lVar19 + 0x70);
  fVar66 = *(float *)(lVar19 + 0x74);
  iVar15 = *(int *)(lVar19 + 0x28);
  fVar70 = *(float *)(lVar19 + 0x78);
  fVar56 = *(float *)(lVar19 + 0x7c);
  iVar36 = *(int *)(lVar19 + 0x30);
  fVar61 = *(float *)(lVar19 + 0x50);
  if ((int)uVar40 < 9) {
    if ((int)uVar40 < 3) {
      if (uVar40 == 1) {
        if ((char)unaff_x19[0x1e] == '\0') {
          fStack0000000000000120 = fVar69 + 0.0;
        }
        else {
          fStack0000000000000120 = 0.0 - fVar46;
        }
        in_stack_00000100._4_4_ = 0.0;
        fStack0000000000000124 = 0.0;
      }
      else if (uVar40 == 2) {
        fStack0000000000000120 = (fVar69 + fVar65 * 0.5) - fVar46 * 0.5;
LAB_0603d9dc:
        fStack0000000000000124 = 0.0;
        in_stack_00000100._4_4_ = 0.0;
      }
      else {
LAB_0603d8ac:
        uVar45 = NEON_umaxv(CONCAT26(-(ushort)(uVar45 == (ushort)((ulong)_UNK_01318f18 >> 0x30)),
                                     CONCAT24(-(ushort)(uVar45 ==
                                                       (ushort)((ulong)_UNK_01318f18 >> 0x20)),
                                              CONCAT22(-(ushort)(uVar45 ==
                                                                (ushort)((ulong)_UNK_01318f18 >>
                                                                        0x10)),
                                                       -(ushort)(uVar45 == (ushort)_UNK_01318f18))))
                            ,2);
        if (((((uVar45 & 1) == 0) && (uVar44 != 3)) && (uVar40 == 8)) && ((int)uVar11 <= (int)uVar3)
           ) goto LAB_0603d8ec;
      }
    }
    else if (uVar40 != 3) {
      if (uVar40 != 4) goto LAB_0603d8ac;
      in_stack_00000100._4_4_ = 0.0;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar46 = 0.0;
      }
      fStack0000000000000120 = (fVar65 + fVar69) - fVar46;
      fStack0000000000000124 = 0.0;
    }
  }
  else if (uVar40 == 0x10) {
    if ((int)uVar11 <= (int)uVar3) {
      if (uVar44 < 0xad) {
        if ((uVar44 != 3) && (uVar44 != 10)) {
LAB_0603d8ec:
          if (*(uint *)(lVar37 + 0x18) <= uVar2) goto LAB_0603fce4;
          uVar43 = *(undefined2 *)(lVar34 + (long)(int)uVar2 * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar18 = FUN_05581208(uVar43,0);
          if ((uVar18 & 1) == 0) {
            bVar1 = (int)uVar31 < (int)unaff_x19[0x98];
          }
          else {
            bVar1 = false;
          }
          unaff_x28 = &stack0x000011b0;
          if ((!bVar1 && (uVar40 >> 4 & 1) == 0) && (fVar46 <= fVar65)) {
            fStack0000000000000120 = -0.0;
            if ((char)unaff_x19[0x1e] != '\0') {
              fStack0000000000000120 = fVar65;
            }
            fStack0000000000000120 = fVar69 + fStack0000000000000120;
            goto LAB_0603d9dc;
          }
          if (((uVar11 == 0) || (uVar31 != uVar14)) ||
             (uVar11 == *(uint *)((long)unaff_x19 + 0x364))) {
            fStack0000000000000120 = -0.0;
            if ((char)unaff_x19[0x1e] != '\0') {
              fStack0000000000000120 = fVar65;
            }
            if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            fStack0000000000000120 = fVar69 + fStack0000000000000120;
            in_stack_00000048._4_4_ = (float)FUN_055814cc(uVar44,0);
            fStack0000000000000124 = 0.0;
            in_stack_00000100._4_4_ = 0.0;
          }
          else {
            cVar23 = (char)unaff_x19[0x1e];
            iVar36 = (iVar36 - iVar16) - ((uint)in_stack_00000048._4_4_ & 1);
            fVar69 = -fVar46;
            if (cVar23 != '\0') {
              fVar69 = fVar46;
            }
            if (iVar36 < 1) {
              fVar46 = 1.0;
              iVar36 = 1;
            }
            else {
              fVar46 = *(float *)(unaff_x19 + 0x62);
            }
            if (uVar44 == 9) {
LAB_0603f69c:
              fVar46 = ((fVar65 + fVar69) * (1.0 - fVar46)) / (float)iVar36;
              if (cVar23 == '\0') {
                fStack0000000000000120 = fStack0000000000000120 + fVar46;
                fStack0000000000000124 = fStack0000000000000124 + 0.0;
                in_stack_00000100._4_4_ = in_stack_00000100._4_4_ + 0.0;
              }
              else {
                fStack0000000000000120 = fStack0000000000000120 - fVar46;
              }
            }
            else {
              if (uVar44 != 0xa0) {
                if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                uVar18 = FUN_055814cc(uVar44,0);
                cVar23 = (char)unaff_x19[0x1e];
                if ((uVar18 & 1) != 0) goto LAB_0603f69c;
              }
              fVar46 = ((fVar65 + fVar69) * fVar46) /
                       (float)(int)((iVar16 - (((uint)in_stack_00000048._4_4_ ^ 0xffffffff) & 1)) +
                                   iVar15);
              if (cVar23 == '\0') {
                fStack0000000000000120 = fStack0000000000000120 + fVar46;
                fStack0000000000000124 = fStack0000000000000124 + 0.0;
                in_stack_00000100._4_4_ = in_stack_00000100._4_4_ + 0.0;
              }
              else {
                fStack0000000000000120 = fStack0000000000000120 - fVar46;
              }
            }
          }
        }
      }
      else if (((uVar44 != 0xad) && (uVar44 != 0x200b)) && (uVar44 != 0x2060)) goto LAB_0603d8ec;
    }
  }
  else if (uVar40 == 0x20) {
    fStack0000000000000120 = (fVar69 + fVar65 * 0.5) - (fVar68 + fVar70) * 0.5;
    in_stack_00000100._4_4_ = 0.0;
    fStack0000000000000124 = 0.0;
  }
  uVar40 = (uint)*(undefined8 *)(lVar37 + 0x18);
  if (uVar40 <= uVar11) goto LAB_0603fce4;
  lVar19 = lVar34 + uVar39 * 0x178;
  fVar46 = fStack00000000000000c0 + fStack0000000000000120;
  fVar65 = fStack00000000000001b0 + fStack0000000000000124;
  fVar69 = in_stack_000000b8._4_4_ + in_stack_00000100._4_4_;
  if (*(char *)(lVar19 + 0x170) == '\0') goto LAB_0603e204;
  iVar16 = *piVar38;
  if (iVar16 == 0) {
    fVar57 = fmodf(*(float *)((long)unaff_x19 + 0x354) * (float)(int)uVar31,1.0);
    iVar15 = *(int *)((long)unaff_x19 + 0x34c);
    if (iVar15 < 2) {
      if (iVar15 == 0) {
        lVar30 = lVar34 + uVar39 * 0x178;
        *(undefined4 *)(lVar30 + 100) = 0;
        *(undefined4 *)(lVar30 + 0x8c) = 0;
        *(undefined4 *)(lVar30 + 0xb4) = 0x3f800000;
        *(undefined4 *)(lVar30 + 0xdc) = 0x3f800000;
      }
      else if (iVar15 == 1) {
        lVar30 = lVar34 + uVar39 * 0x178;
        fVar56 = *(float *)(lVar30 + 0x48);
        pfVar25 = (float *)(lVar30 + 100);
        if (*(int *)((long)unaff_x19 + 0x29c) == 0x208) {
          lVar30 = lVar34 + uVar39 * 0x178;
          fVar70 = *(float *)(lVar30 + 0x70);
          *pfVar25 = fVar57 + ((fStack0000000000000120 + fVar56) - *(float *)(unaff_x19 + 0x9f)) /
                              (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
          *(float *)(lVar30 + 0x8c) =
               fVar57 + ((fStack0000000000000120 + fVar70) - *(float *)(unaff_x19 + 0x9f)) /
                        (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
          *(float *)(lVar30 + 0xb4) =
               fVar57 + ((fStack0000000000000120 + *(float *)(lVar30 + 0x98)) -
                        *(float *)(unaff_x19 + 0x9f)) /
                        (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
          *(float *)(lVar30 + 0xdc) =
               fVar57 + ((fStack0000000000000120 + *(float *)(lVar30 + 0xc0)) -
                        *(float *)(unaff_x19 + 0x9f)) /
                        (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
        }
        else {
          lVar30 = lVar34 + uVar39 * 0x178;
          fVar70 = fVar70 - fVar68;
          fVar66 = *(float *)(lVar30 + 0x70);
          fVar59 = *(float *)(lVar30 + 0x98);
          fVar62 = *(float *)(lVar30 + 0xc0);
          *pfVar25 = fVar57 + (fVar56 - fVar68) / fVar70;
          *(float *)(lVar30 + 0x8c) = fVar57 + (fVar66 - fVar68) / fVar70;
          *(float *)(lVar30 + 0xb4) = fVar57 + (fVar59 - fVar68) / fVar70;
          *(float *)(lVar30 + 0xdc) = fVar57 + (fVar62 - fVar68) / fVar70;
        }
      }
    }
    else if (iVar15 == 2) {
      lVar30 = lVar34 + uVar39 * 0x178;
      *(float *)(lVar30 + 100) =
           fVar57 + ((fStack0000000000000120 + *(float *)(lVar30 + 0x48)) -
                    *(float *)(unaff_x19 + 0x9f)) /
                    (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
      *(float *)(lVar30 + 0x8c) =
           fVar57 + ((fStack0000000000000120 + *(float *)(lVar30 + 0x70)) -
                    *(float *)(unaff_x19 + 0x9f)) /
                    (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
      *(float *)(lVar30 + 0xb4) =
           fVar57 + ((fStack0000000000000120 + *(float *)(lVar30 + 0x98)) -
                    *(float *)(unaff_x19 + 0x9f)) /
                    (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
      *(float *)(lVar30 + 0xdc) =
           fVar57 + ((fStack0000000000000120 + *(float *)(lVar30 + 0xc0)) -
                    *(float *)(unaff_x19 + 0x9f)) /
                    (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
    }
    else if (iVar15 == 3) {
      iVar15 = (int)unaff_x19[0x6a];
      if (iVar15 < 2) {
        if (iVar15 == 0) {
          lVar30 = lVar34 + uVar39 * 0x178;
          *(undefined4 *)(lVar30 + 0x68) = 0;
          *(undefined4 *)(lVar30 + 0x90) = 0x3f800000;
          *(undefined4 *)(lVar30 + 0xb8) = 0;
          *(undefined4 *)(lVar30 + 0xe0) = 0x3f800000;
        }
        else if (iVar15 == 1) {
          lVar30 = lVar34 + uVar39 * 0x178;
          fVar56 = fVar56 - fVar66;
          fVar70 = (*(float *)(lVar30 + 0x74) - fVar66) / fVar56;
          fVar56 = fVar57 + (*(float *)(lVar30 + 0x4c) - fVar66) / fVar56;
          *(float *)(lVar30 + 0x68) = fVar56;
          *(float *)(lVar30 + 0xb8) = fVar56;
          goto LAB_0603ddfc;
        }
      }
      else if (iVar15 == 2) {
        lVar30 = lVar34 + uVar39 * 0x178;
        fVar56 = fVar57 + (*(float *)(lVar30 + 0x4c) - *(float *)((long)unaff_x19 + 0x4fc)) /
                          (*(float *)((long)unaff_x19 + 0x504) - *(float *)((long)unaff_x19 + 0x4fc)
                          );
        *(float *)(lVar30 + 0x68) = fVar56;
        fVar70 = *(float *)((long)unaff_x19 + 0x4fc);
        fVar66 = *(float *)((long)unaff_x19 + 0x504);
        *(float *)(lVar30 + 0xb8) = fVar56;
        fVar70 = (*(float *)(lVar30 + 0x74) - fVar70) / (fVar66 - fVar70);
LAB_0603ddfc:
        *(float *)(lVar30 + 0x90) = fVar57 + fVar70;
        *(float *)(lVar30 + 0xe0) = fVar57 + fVar70;
      }
      else if (iVar15 == 3) {
        if (*(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        FUN_062244a4(*(undefined8 *)System_Collections_Generic_List<BaseVideoBoardScreen>_TypeInfo,0
                    );
        uVar40 = (uint)*(undefined8 *)(lVar37 + 0x18);
      }
      if (uVar40 <= uVar11) goto LAB_0603fce4;
      lVar30 = lVar34 + uVar39 * 0x178;
      fVar66 = *(float *)(lVar30 + 0x138);
      fVar70 = (1.0 - (*(float *)(lVar30 + 0x68) + *(float *)(lVar30 + 0x90)) * fVar66) * 0.5;
      fVar56 = fVar57 + *(float *)(lVar30 + 0x68) * fVar66 + fVar70;
      fVar57 = fVar57 + fVar70 + *(float *)(lVar30 + 0x90) * fVar66;
      *(float *)(lVar30 + 100) = fVar56;
      *(float *)(lVar30 + 0x8c) = fVar56;
      *(float *)(lVar30 + 0xb4) = fVar57;
      *(float *)(lVar30 + 0xdc) = fVar57;
    }
    iVar15 = (int)unaff_x19[0x6a];
    if (iVar15 < 2) {
      if (iVar15 == 0) {
        if (uVar40 <= uVar11) goto LAB_0603fce4;
        lVar30 = lVar34 + uVar39 * 0x178;
        *(undefined4 *)(lVar30 + 0x68) = 0;
        *(undefined4 *)(lVar30 + 0x90) = 0x3f800000;
        *(undefined4 *)(lVar30 + 0xb8) = 0x3f800000;
        *(undefined4 *)(lVar30 + 0xe0) = 0;
      }
      else if (iVar15 == 1) {
        if (uVar11 < uVar40) {
          lVar30 = lVar34 + uVar39 * 0x178;
          fVar61 = fVar61 - fVar58;
          fVar57 = (*(float *)(lVar30 + 0x4c) - fVar58) / fVar61;
          fVar61 = (*(float *)(lVar30 + 0x74) - fVar58) / fVar61;
          *(float *)(lVar30 + 0x68) = fVar57;
          goto LAB_0603df74;
        }
        goto LAB_0603fce4;
      }
    }
    else if (iVar15 == 2) {
      if (uVar40 <= uVar11) goto LAB_0603fce4;
      lVar30 = lVar34 + uVar39 * 0x178;
      fVar57 = (*(float *)(lVar30 + 0x4c) - *(float *)((long)unaff_x19 + 0x4fc)) /
               (*(float *)((long)unaff_x19 + 0x504) - *(float *)((long)unaff_x19 + 0x4fc));
      *(float *)(lVar30 + 0x68) = fVar57;
      fVar61 = (*(float *)(lVar30 + 0x74) - *(float *)((long)unaff_x19 + 0x4fc)) /
               (*(float *)((long)unaff_x19 + 0x504) - *(float *)((long)unaff_x19 + 0x4fc));
LAB_0603df74:
      *(float *)(lVar30 + 0x90) = fVar61;
      *(float *)(lVar30 + 0xb8) = fVar61;
      *(float *)(lVar30 + 0xe0) = fVar57;
    }
    else if (iVar15 == 3) {
      if (uVar40 <= uVar11) goto LAB_0603fce4;
      lVar30 = lVar34 + uVar39 * 0x178;
      fVar70 = *(float *)(lVar30 + 0x138);
      fVar56 = (1.0 - (*(float *)(lVar30 + 100) + *(float *)(lVar30 + 0xb4)) / fVar70) * 0.5;
      fVar57 = *(float *)(lVar30 + 100) / fVar70 + fVar56;
      fVar56 = fVar56 + *(float *)(lVar30 + 0xb4) / fVar70;
      *(float *)(lVar30 + 0x68) = fVar57;
      *(float *)(lVar30 + 0xe0) = fVar57;
      *(float *)(lVar30 + 0x90) = fVar56;
      *(float *)(lVar30 + 0xb8) = fVar56;
    }
    if (uVar40 <= uVar11) goto LAB_0603fce4;
    lVar30 = lVar34 + uVar39 * 0x178;
    fVar57 = *(float *)(unaff_x19 + 0x5c) *
             ABS(auVar54._0_4_) * *(float *)(lVar30 + 0x13c) *
             (1.0 - *(float *)((long)unaff_x19 + 0x304));
    if ((*(char *)(lVar30 + 0x34) == '\0') &&
       ((*(byte *)(lVar34 + uVar39 * 0x178 + 0x16c) & 1) != 0)) {
      fVar57 = -fVar57;
    }
    lVar30 = lVar34 + uVar39 * 0x178;
    *(float *)(lVar30 + 0x60) = fVar57;
    *(float *)(lVar30 + 0x88) = fVar57;
    *(float *)(lVar30 + 0xb0) = fVar57;
    *(float *)(lVar30 + 0xd8) = fVar57;
  }
  if (((int)uVar11 < (int)unaff_x19[0x6d]) &&
     ((int)fStack00000000000000ec < *(int *)((long)unaff_x19 + 0x36c))) {
    if (((int)unaff_x19[0x6e] <= (int)uVar31) || (*(int *)((long)unaff_x19 + 0x314) == 5)) {
      if (((int)uVar31 < (int)unaff_x19[0x6e]) && (*(int *)((long)unaff_x19 + 0x314) == 5)) {
        if (uVar11 < uVar40) {
          if (*(uint *)(lVar34 + uVar39 * 0x178 + 0x40) == uStack0000000000000040) {
            lVar19 = lVar34 + uVar39 * 0x178;
            *(ulong *)(lVar19 + 0x48) =
                 CONCAT44(fVar65 + (float)((ulong)*(undefined8 *)(lVar19 + 0x48) >> 0x20),
                          fVar46 + (float)*(undefined8 *)(lVar19 + 0x48));
            *(float *)(lVar19 + 0x50) = fVar69 + *(float *)(lVar19 + 0x50);
            *(ulong *)(lVar19 + 0x70) =
                 CONCAT44(fVar65 + (float)((ulong)*(undefined8 *)(lVar19 + 0x70) >> 0x20),
                          fVar46 + (float)*(undefined8 *)(lVar19 + 0x70));
            *(float *)(lVar19 + 0x78) = fVar69 + *(float *)(lVar19 + 0x78);
            *(ulong *)(lVar19 + 0x98) =
                 CONCAT44(fVar65 + (float)((ulong)*(undefined8 *)(lVar19 + 0x98) >> 0x20),
                          fVar46 + (float)*(undefined8 *)(lVar19 + 0x98));
            *(float *)(lVar19 + 0xa0) = fVar69 + *(float *)(lVar19 + 0xa0);
            *(ulong *)(lVar19 + 0xc0) =
                 CONCAT44(fVar65 + (float)((ulong)*(undefined8 *)(lVar19 + 0xc0) >> 0x20),
                          fVar46 + (float)*(undefined8 *)(lVar19 + 0xc0));
            *(float *)(lVar19 + 200) = fVar69 + *(float *)(lVar19 + 200);
            goto LAB_0603e188;
          }
          goto LAB_0603e0c4;
        }
        goto LAB_0603fce4;
      }
      goto LAB_0603e0c4;
    }
    if (uVar40 <= uVar11) goto LAB_0603fce4;
    lVar19 = lVar34 + uVar39 * 0x178;
    *(ulong *)(lVar19 + 0x48) =
         CONCAT44(fVar65 + (float)((ulong)*(undefined8 *)(lVar19 + 0x48) >> 0x20),
                  fVar46 + (float)*(undefined8 *)(lVar19 + 0x48));
    *(float *)(lVar19 + 0x50) = fVar69 + *(float *)(lVar19 + 0x50);
    *(ulong *)(lVar19 + 0x70) =
         CONCAT44(fVar65 + (float)((ulong)*(undefined8 *)(lVar19 + 0x70) >> 0x20),
                  fVar46 + (float)*(undefined8 *)(lVar19 + 0x70));
    *(float *)(lVar19 + 0x78) = fVar69 + *(float *)(lVar19 + 0x78);
    *(ulong *)(lVar19 + 0x98) =
         CONCAT44(fVar65 + (float)((ulong)*(undefined8 *)(lVar19 + 0x98) >> 0x20),
                  fVar46 + (float)*(undefined8 *)(lVar19 + 0x98));
    *(float *)(lVar19 + 0xa0) = fVar69 + *(float *)(lVar19 + 0xa0);
    *(ulong *)(lVar19 + 0xc0) =
         CONCAT44(fVar65 + (float)((ulong)*(undefined8 *)(lVar19 + 0xc0) >> 0x20),
                  fVar46 + (float)*(undefined8 *)(lVar19 + 0xc0));
    *(float *)(lVar19 + 200) = fVar69 + *(float *)(lVar19 + 200);
  }
  else {
LAB_0603e0c4:
    if (uVar40 <= uVar11) goto LAB_0603fce4;
    if (DAT_06e84e3e == '\0') {
      FUN_02e3ca1c(PTR_DAT_06a2ef80);
      uVar40 = *(uint *)(lVar37 + 0x18);
      DAT_06e84e3e = '\x01';
    }
    puVar7 = PTR_DAT_06a2ef80;
    uVar60 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_06a2ef80 + 0xb8) + 1);
    *(undefined8 *)(lVar34 + uVar39 * 0x178 + 0x48) =
         **(undefined8 **)(*(long *)PTR_DAT_06a2ef80 + 0xb8);
    *(undefined4 *)(lVar34 + uVar39 * 0x178 + 0x50) = uVar60;
    if (uVar40 <= uVar11) goto LAB_0603fce4;
    lVar30 = lVar34 + uVar39 * 0x178;
    uVar60 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
    *(undefined8 *)(lVar30 + 0x70) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
    *(undefined4 *)(lVar30 + 0x78) = uVar60;
    uVar60 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
    *(undefined8 *)(lVar30 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
    *(undefined4 *)(lVar30 + 0xa0) = uVar60;
    uVar20 = **(undefined8 **)(*(long *)puVar7 + 0xb8);
    uVar60 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
    *(undefined1 *)(lVar19 + 0x170) = 0;
    *(undefined8 *)(lVar30 + 0xc0) = uVar20;
    *(undefined4 *)(lVar30 + 200) = uVar60;
  }
LAB_0603e188:
  iVar15 = FUN_06232690(0);
  *(bool *)((long)unaff_x19 + 0x174) = iVar15 == 1;
  if (iVar16 == 0) {
    puVar26 = (undefined8 *)(*unaff_x19 + 0x8d8);
LAB_0603e1dc:
    (*(code *)*puVar26)();
  }
  else if (iVar16 == 1) {
    puVar26 = (undefined8 *)(*unaff_x19 + 0x8f8);
    goto LAB_0603e1dc;
  }
  unaff_x28 = &stack0x000011b0;
LAB_0603e204:
  if ((unaff_x19[0x75] == 0) || (lVar19 = *(long *)(unaff_x19[0x75] + 0x38), lVar19 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_0603fce4;
  lVar19 = lVar19 + uVar39 * 0x178;
  uVar20 = *(undefined8 *)(lVar19 + 0x114);
  *(float *)(lVar19 + 0x11c) = fVar69 + *(float *)(lVar19 + 0x11c);
  *(undefined8 *)(lVar19 + 0x114) =
       CONCAT44(fVar65 + (float)((ulong)uVar20 >> 0x20),fVar46 + (float)uVar20);
  if ((unaff_x19[0x75] == 0) || (lVar19 = *(long *)(unaff_x19[0x75] + 0x38), lVar19 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_0603fce4;
  lVar19 = lVar19 + uVar39 * 0x178;
  *(ulong *)(lVar19 + 0x108) =
       CONCAT44(fVar65 + (float)((ulong)*(undefined8 *)(lVar19 + 0x108) >> 0x20),
                fVar46 + (float)*(undefined8 *)(lVar19 + 0x108));
  *(float *)(lVar19 + 0x110) = fVar69 + *(float *)(lVar19 + 0x110);
  if ((unaff_x19[0x75] == 0) || (lVar19 = *(long *)(unaff_x19[0x75] + 0x38), lVar19 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_0603fce4;
  lVar19 = lVar19 + uVar39 * 0x178;
  *(ulong *)(lVar19 + 0x120) =
       CONCAT44(fVar65 + (float)((ulong)*(undefined8 *)(lVar19 + 0x120) >> 0x20),
                fVar46 + (float)*(undefined8 *)(lVar19 + 0x120));
  *(float *)(lVar19 + 0x128) = fVar69 + *(float *)(lVar19 + 0x128);
  if ((unaff_x19[0x75] == 0) || (lVar19 = *(long *)(unaff_x19[0x75] + 0x38), lVar19 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_0603fce4;
  lVar19 = lVar19 + uVar39 * 0x178;
  uVar20 = *(undefined8 *)(lVar19 + 300);
  *(float *)(lVar19 + 0x134) = fVar69 + *(float *)(lVar19 + 0x134);
  *(undefined8 *)(lVar19 + 300) =
       CONCAT44(fVar65 + (float)((ulong)uVar20 >> 0x20),fVar46 + (float)uVar20);
  lVar19 = unaff_x19[0x75];
  if ((lVar19 == 0) || (lVar30 = *(long *)(lVar19 + 0x38), lVar30 == 0)) goto thunk_FUN_02e3ccc4;
  uVar40 = *(uint *)(lVar30 + 0x18);
  if (uVar40 <= uVar11) goto LAB_0603fce4;
  lVar33 = lVar30 + 0x20 + uVar39 * 0x178;
  uVar20 = *(undefined8 *)(lVar33 + 0x118);
  auVar49._0_8_ = CONCAT44(fVar46 + (float)((ulong)uVar20 >> 0x20),fVar46 + (float)uVar20);
  auVar49._8_4_ = fVar65 + (float)*(undefined8 *)(lVar33 + 0x120);
  auVar49._12_4_ = fVar65 + (float)((ulong)*(undefined8 *)(lVar33 + 0x120) >> 0x20);
  *(float *)(lVar33 + 0x128) = fVar65 + *(float *)(lVar33 + 0x128);
  *(long *)(lVar33 + 0x120) = auVar49._8_8_;
  *(undefined8 *)(lVar33 + 0x118) = auVar49._0_8_;
  if (uVar31 == uVar14) {
    uVar14 = (int)in_stack_000001a8[10] - 1;
    if (uVar11 == uVar14) goto LAB_0603e414;
  }
  else {
    lVar19 = *(long *)(lVar19 + 0x50);
    if (lVar19 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_0603fce4;
    lVar33 = lVar19 + 0x20 + (long)(int)uVar14 * 0x60;
    fVar56 = fVar65 + *(float *)(lVar33 + 0x38);
    *(ulong *)(lVar33 + 0x30) =
         CONCAT44(fVar65 + (float)((ulong)*(undefined8 *)(lVar33 + 0x30) >> 0x20),
                  fVar65 + (float)*(undefined8 *)(lVar33 + 0x30));
    *(float *)(lVar33 + 0x38) = fVar56;
    *(float *)(lVar33 + 0x3c) = fVar46 + *(float *)(lVar33 + 0x3c);
    if (uVar40 <= *(uint *)(lVar33 + 0x18)) goto LAB_0603fce4;
    lVar19 = lVar19 + 0x20 + (long)(int)uVar14 * 0x60;
    uVar60 = *(undefined4 *)(lVar30 + 0x20 + (long)(int)*(uint *)(lVar33 + 0x18) * 0x178 + 0xf4);
    *(float *)(lVar19 + 0x54) = fVar56;
    *(undefined4 *)(lVar19 + 0x50) = uVar60;
    lVar19 = unaff_x19[0x75];
    if ((lVar19 == 0) || (lVar30 = *(long *)(lVar19 + 0x50), lVar30 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_0603fce4;
    lVar19 = *(long *)(lVar19 + 0x38);
    if (lVar19 == 0) goto thunk_FUN_02e3ccc4;
    uVar40 = *(uint *)(lVar30 + 0x20 + (long)(int)uVar14 * 0x60 + 0x24);
    if (*(uint *)(lVar19 + 0x18) <= uVar40) goto LAB_0603fce4;
    lVar30 = lVar30 + 0x20 + (long)(int)uVar14 * 0x60;
    *(undefined4 *)(lVar30 + 0x58) = *(undefined4 *)(lVar19 + (long)(int)uVar40 * 0x178 + 0x120);
    *(undefined4 *)(lVar30 + 0x5c) = *(undefined4 *)(lVar30 + 0x30);
    uVar14 = (int)in_stack_000001a8[10] - 1;
LAB_0603e414:
    if (uVar11 == uVar14) {
      lVar19 = unaff_x19[0x75];
      if ((lVar19 == 0) || (lVar30 = *(long *)(lVar19 + 0x50), lVar30 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar30 + 0x18) <= uVar31) goto LAB_0603fce4;
      lVar33 = lVar30 + 0x20 + (long)(int)uVar31 * 0x60;
      fVar56 = fVar65 + *(float *)(lVar33 + 0x38);
      *(ulong *)(lVar33 + 0x30) =
           CONCAT44(fVar65 + (float)((ulong)*(undefined8 *)(lVar33 + 0x30) >> 0x20),
                    fVar65 + (float)*(undefined8 *)(lVar33 + 0x30));
      *(float *)(lVar33 + 0x38) = fVar56;
      *(float *)(lVar33 + 0x3c) = fVar46 + *(float *)(lVar33 + 0x3c);
      lVar19 = *(long *)(lVar19 + 0x38);
      if (lVar19 == 0) goto thunk_FUN_02e3ccc4;
      uVar14 = *(uint *)(lVar30 + 0x20 + (long)(int)uVar31 * 0x60 + 0x18);
      if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_0603fce4;
      *(undefined4 *)(lVar33 + 0x50) = *(undefined4 *)(lVar19 + (long)(int)uVar14 * 0x178 + 0x114);
      *(float *)(lVar33 + 0x54) = fVar56;
      lVar19 = unaff_x19[0x75];
      if ((lVar19 == 0) || (lVar30 = *(long *)(lVar19 + 0x50), lVar30 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar30 + 0x18) <= uVar31) goto LAB_0603fce4;
      lVar19 = *(long *)(lVar19 + 0x38);
      if (lVar19 == 0) goto thunk_FUN_02e3ccc4;
      uVar14 = *(uint *)(lVar30 + 0x20 + (long)(int)uVar31 * 0x60 + 0x24);
      if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_0603fce4;
      lVar30 = lVar30 + 0x20 + (long)(int)uVar31 * 0x60;
      *(undefined4 *)(lVar30 + 0x58) = *(undefined4 *)(lVar19 + (long)(int)uVar14 * 0x178 + 0x120);
      *(undefined4 *)(lVar30 + 0x5c) = *(undefined4 *)(lVar30 + 0x30);
    }
  }
  if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar18 = FUN_05580720(uVar44,0);
  if (((((uVar18 & 1) == 0) && (1 < uVar44 - 0x2010)) && (uVar44 != 0xad)) && (uVar44 != 0x2d)) {
    if (bVar8) {
      if (((uVar11 != 0) && ((int)uVar11 < (int)(*(uint *)(lVar37 + 0x18) - 1))) &&
         (((int)uVar11 < (int)in_stack_000001a8[10] && ((uVar44 == 0x2019 || (uVar44 == 0x27)))))) {
        if (*(uint *)(lVar37 + 0x18) <= uVar11 - 1) goto LAB_0603fce4;
        uVar43 = *(undefined2 *)(lVar34 + (ulong)(uVar11 - 1) * 0x178 + 4);
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar18 = FUN_05580720(uVar43,0);
        if ((uVar18 & 1) != 0) {
          if (*(uint *)(lVar37 + 0x18) <= uVar11 + 1) goto LAB_0603fce4;
          uVar43 = *(undefined2 *)(lVar34 + (ulong)(uVar11 + 1) * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar18 = FUN_05580720(uVar43,0);
          unaff_x28 = &stack0x000011b0;
          if ((uVar18 & 1) != 0) goto LAB_0603e714;
        }
      }
LAB_0603f468:
      if (uVar11 == (int)in_stack_000001a8[10] - 1U) {
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar18 = FUN_05580720(uVar44,0);
        uVar14 = uVar11;
        if ((uVar18 & 1) == 0) goto LAB_0603f4a4;
      }
      else {
LAB_0603f4a4:
        uVar14 = uVar11 - 1;
      }
      lVar19 = unaff_x19[0x75];
      if (lVar19 != 0) {
        lVar30 = *(long *)(lVar19 + 0x40);
        if (lVar30 != 0) {
          uVar40 = *(uint *)(lVar19 + 0x24);
          iVar16 = *(int *)(lVar30 + 0x18);
          if (iVar16 < (int)(uVar40 + 1)) {
            if (*(int *)(*(long *)System_Collections_Generic_List<AchievementDefinition>_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            System_Array__InternalArray__ICollection_Add<ValueTuple<int,_Vector2Int>>
                      ((long *)(lVar19 + 0x40),iVar16 + 1,
                       *(undefined8 *)System_Collections_Generic_List<ABSSequentiable>_TypeInfo);
            lVar19 = unaff_x19[0x75];
            if (lVar19 == 0) goto thunk_FUN_02e3ccc4;
          }
          lVar19 = *(long *)(lVar19 + 0x40);
          if (lVar19 != 0) {
            if (uVar40 < *(uint *)(lVar19 + 0x18)) {
              lVar19 = lVar19 + (long)(int)uVar40 * 0x18;
              *(long **)(lVar19 + 0x20) = unaff_x19;
              *(uint *)(lVar19 + 0x28) = uVar12;
              *(uint *)(lVar19 + 0x2c) = uVar14;
              *(uint *)(lVar19 + 0x30) = (uVar14 - uVar12) + 1;
              thunk_FUN_02ee2be8();
              lVar19 = unaff_x19[0x75];
              if (lVar19 != 0) {
                lVar30 = *(long *)(lVar19 + 0x50);
                *(int *)(lVar19 + 0x24) = *(int *)(lVar19 + 0x24) + 1;
                if (lVar30 != 0) {
                  if (uVar31 < *(uint *)(lVar30 + 0x18)) {
                    bVar8 = false;
                    goto LAB_0603e630;
                  }
                  goto LAB_0603fce4;
                }
              }
              goto thunk_FUN_02e3ccc4;
            }
            goto LAB_0603fce4;
          }
        }
      }
      goto thunk_FUN_02e3ccc4;
    }
    if (uVar11 == 0) {
      if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      bVar10 = FUN_05580678(uVar44,0);
      if ((((uVar44 == 0x200b | bVar10 ^ 0xff | bVar9) & 1) != 0) ||
         (in_stack_000001a8[10] == 1.4013e-45)) goto LAB_0603f468;
    }
    bVar8 = false;
  }
  else {
    if (!bVar8) {
      uVar12 = uVar11;
    }
    if (uVar11 != (int)in_stack_000001a8[10] - 1U) {
LAB_0603e714:
      bVar8 = true;
      goto LAB_0603e71c;
    }
    lVar19 = unaff_x19[0x75];
    if (lVar19 == 0) goto thunk_FUN_02e3ccc4;
    lVar30 = *(long *)(lVar19 + 0x40);
    if (lVar30 == 0) goto thunk_FUN_02e3ccc4;
    uVar14 = *(uint *)(lVar19 + 0x24);
    iVar16 = *(int *)(lVar30 + 0x18);
    if (iVar16 < (int)(uVar14 + 1)) {
      if (*(int *)(*(long *)System_Collections_Generic_List<AchievementDefinition>_TypeInfo + 0xe4)
          == 0) {
        thunk_FUN_02e9a04c();
      }
      System_Array__InternalArray__ICollection_Add<ValueTuple<int,_Vector2Int>>
                ((long *)(lVar19 + 0x40),iVar16 + 1,
                 *(undefined8 *)System_Collections_Generic_List<ABSSequentiable>_TypeInfo);
      lVar19 = unaff_x19[0x75];
      if (lVar19 == 0) goto thunk_FUN_02e3ccc4;
    }
    lVar19 = *(long *)(lVar19 + 0x40);
    if (lVar19 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_0603fce4;
    lVar19 = lVar19 + (long)(int)uVar14 * 0x18;
    *(long **)(lVar19 + 0x20) = unaff_x19;
    *(uint *)(lVar19 + 0x28) = uVar12;
    *(uint *)(lVar19 + 0x2c) = uVar11;
    *(uint *)(lVar19 + 0x30) = (uVar11 - uVar12) + 1;
    thunk_FUN_02ee2be8();
    lVar19 = unaff_x19[0x75];
    if (lVar19 == 0) goto thunk_FUN_02e3ccc4;
    lVar30 = *(long *)(lVar19 + 0x50);
    *(int *)(lVar19 + 0x24) = *(int *)(lVar19 + 0x24) + 1;
    if (lVar30 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar30 + 0x18) <= uVar31) goto LAB_0603fce4;
    bVar8 = true;
LAB_0603e630:
    unaff_x28 = &stack0x000011b0;
    lVar30 = lVar30 + (long)(int)uVar31 * 0x60;
    fStack00000000000000ec = (float)((int)fStack00000000000000ec + 1);
    *(int *)(lVar30 + 0x34) = *(int *)(lVar30 + 0x34) + 1;
  }
LAB_0603e71c:
  lVar19 = unaff_x19[0x75];
  if ((lVar19 == 0) || (lVar30 = *(long *)(lVar19 + 0x38), lVar30 == 0)) goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar30 + 0x18) <= uVar11) goto LAB_0603fce4;
  lVar33 = lVar30 + 0x20;
  if ((*(byte *)(lVar33 + uVar39 * 0x178 + 0x16c) >> 2 & 1) == 0) {
    if (bVar6) {
      if (*(uint *)(lVar30 + 0x18) <= (uint)((long)(int)uVar11 + -1)) goto LAB_0603fce4;
      lVar33 = lVar33 + ((long)(int)uVar11 + -1) * 0x178;
      lVar30 = *unaff_x19;
      uVar60 = *(undefined4 *)(lVar33 + 0x100);
      uVar63 = *(undefined4 *)(lVar33 + 0x13c);
LAB_0603e9d8:
      pcVar27 = *(code **)(lVar30 + 0x908);
LAB_0603e9e0:
      (*pcVar27)(fStack000000000000006c,fStack0000000000000064,uStack0000000000000068,uVar60,
                 fStack0000000000000138,0,fVar52,uVar63);
LAB_0603ea24:
      lVar19 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar19 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      }
      fStack000000000000016c = 0.0;
      fStack0000000000000134 = 0.0;
      fStack0000000000000138 = *(float *)(*(long *)(lVar19 + 0xb8) + 0x1730);
    }
    bVar6 = false;
  }
  else {
    lVar30 = lVar33 + uVar39 * 0x178;
    *(int *)(lVar30 + 0x148) = iVar13;
    iVar16 = *(int *)(lVar30 + 0x40);
    if ((((int)unaff_x19[0x6d] < (int)uVar11) || ((int)unaff_x19[0x6e] < (int)uVar31)) ||
       ((*(int *)((long)unaff_x19 + 0x314) == 5 && (iVar16 + 1 != (int)unaff_x19[0x6f])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar9 & 1) == 0 && uVar44 != 0x200b) {
      fVar46 = *(float *)(lVar33 + uVar39 * 0x178 + 0x13c);
      if (fStack000000000000016c <= fVar46) {
        fStack000000000000016c = fVar46;
      }
      if (fStack0000000000000134 <= ABS(fVar57)) {
        fStack0000000000000134 = ABS(fVar57);
      }
      if (iVar16 != uStack0000000000000060) {
        if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_02e9a04c();
          lVar19 = unaff_x19[0x75];
          if (lVar19 == 0) goto thunk_FUN_02e3ccc4;
          lVar30 = *(long *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xb8
                            );
        }
        else {
          lVar30 = *(long *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xb8
                            );
        }
        fStack0000000000000138 = *(float *)(lVar30 + 0x1730);
      }
      lVar19 = *(long *)(lVar19 + 0x38);
      if (lVar19 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_0603fce4;
      if (unaff_x19[0x1f] == 0) goto thunk_FUN_02e3ccc4;
      fVar56 = *(float *)(lVar19 + uVar39 * 0x178 + 0x144);
      fVar46 = (float)FUN_0630f910(unaff_x19[0x1f] + 0x28,0);
      fVar56 = fVar56 + fStack000000000000016c * fVar46;
      uStack0000000000000060 = iVar16;
      if (fVar56 <= fStack0000000000000138) {
        fStack0000000000000138 = fVar56;
      }
    }
    if (!bVar6) {
      bVar6 = false;
      if ((bVar1) && ((int)uVar11 <= (int)uVar3)) {
        if ((uVar44 & 0xfffe) == 10) goto LAB_0603ea5c;
        if (uVar44 != 0xd) {
          if (uVar11 == uVar3) {
            if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar18 = FUN_055814cc(uVar44,0);
            if ((uVar18 & 1) != 0) goto LAB_0603e930;
          }
          if ((unaff_x19[0x75] != 0) && (lVar19 = *(long *)(unaff_x19[0x75] + 0x38), lVar19 != 0)) {
            if (uVar11 < *(uint *)(lVar19 + 0x18)) {
              lVar19 = lVar19 + uVar39 * 0x178;
              fVar52 = *(float *)(lVar19 + 0x15c);
              fVar46 = fVar57;
              fVar56 = fVar52;
              if (fStack000000000000016c != 0.0) {
                fVar46 = fStack0000000000000134;
                fVar56 = fStack000000000000016c;
              }
              fStack000000000000016c = fVar56;
              uStack0000000000000068 = 0;
              fStack000000000000006c = *(float *)(lVar19 + 0x114);
              uStack0000000000000084 = *(undefined4 *)(lVar19 + 0x164);
              fStack0000000000000064 = fStack0000000000000138;
              fStack0000000000000134 = fVar46;
              goto LAB_0603e99c;
            }
            goto LAB_0603fce4;
          }
          goto thunk_FUN_02e3ccc4;
        }
      }
LAB_0603e930:
      bVar6 = false;
      goto LAB_0603ea5c;
    }
LAB_0603e99c:
    if (in_stack_000001a8[10] == 1.4013e-45) {
      if ((unaff_x19[0x75] != 0) && (lVar19 = *(long *)(unaff_x19[0x75] + 0x38), lVar19 != 0)) {
        if (uVar11 < *(uint *)(lVar19 + 0x18)) {
          lVar19 = lVar19 + uVar39 * 0x178;
LAB_0603e9cc:
          lVar30 = *unaff_x19;
          uVar60 = *(undefined4 *)(lVar19 + 0x120);
          uVar63 = *(undefined4 *)(lVar19 + 0x15c);
          goto LAB_0603e9d8;
        }
        goto LAB_0603fce4;
      }
      goto thunk_FUN_02e3ccc4;
    }
    if ((uVar11 == uVar2) || ((int)uVar3 <= (int)uVar11)) {
      lVar19 = unaff_x19[0x75];
      if ((bVar9 & 1) == 0 && uVar44 != 0x200b) {
        if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x38), lVar19 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_0603fce4;
        lVar19 = lVar19 + uVar39 * 0x178;
      }
      else {
        if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x38), lVar19 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar19 + 0x18) <= uVar3) goto LAB_0603fce4;
        lVar19 = lVar19 + (long)(int)uVar3 * 0x178;
      }
      uVar60 = *(undefined4 *)(lVar19 + 0x120);
      uVar63 = *(undefined4 *)(lVar19 + 0x15c);
      pcVar27 = *(code **)(*unaff_x19 + 0x908);
      goto LAB_0603e9e0;
    }
    if (!bVar1) {
      if ((unaff_x19[0x75] != 0) && (lVar19 = *(long *)(unaff_x19[0x75] + 0x38), lVar19 != 0)) {
        if ((uint)((long)(int)uVar11 + -1) < *(uint *)(lVar19 + 0x18)) {
          lVar19 = lVar19 + ((long)(int)uVar11 + -1) * 0x178;
          goto LAB_0603e9cc;
        }
        goto LAB_0603fce4;
      }
      goto thunk_FUN_02e3ccc4;
    }
    if ((int)uVar11 < (int)in_stack_000001a8[10] + -1) {
      if ((unaff_x19[0x75] == 0) || (lVar19 = *(long *)(unaff_x19[0x75] + 0x38), lVar19 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar19 + 0x18) <= uVar11 + 1) goto LAB_0603fce4;
      uVar18 = FUN_06059f90(uStack0000000000000084,
                            *(undefined4 *)(lVar19 + (ulong)(uVar11 + 1) * 0x178 + 0x164),0);
      if ((uVar18 & 1) == 0) {
        if ((unaff_x19[0x75] != 0) && (lVar19 = *(long *)(unaff_x19[0x75] + 0x38), lVar19 != 0)) {
          if (uVar11 < *(uint *)(lVar19 + 0x18)) {
            lVar19 = lVar19 + uVar39 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack000000000000006c,fStack0000000000000064,uStack0000000000000068,
                       *(undefined4 *)(lVar19 + 0x120),fStack0000000000000138,0,fVar52,
                       *(undefined4 *)(lVar19 + 0x15c));
            unaff_x28 = &stack0x000011b0;
            goto LAB_0603ea24;
          }
          goto LAB_0603fce4;
        }
        goto thunk_FUN_02e3ccc4;
      }
      bVar6 = true;
      unaff_x28 = &stack0x000011b0;
    }
    else {
      bVar6 = true;
    }
  }
LAB_0603ea5c:
  if ((unaff_x19[0x75] == 0) || (lVar19 = *(long *)(unaff_x19[0x75] + 0x38), lVar19 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_0603fce4;
  if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
  uVar14 = *(uint *)(lVar19 + uVar39 * 0x178 + 0x18c);
  fVar46 = (float)FUN_0630f920(lVar29 + 0x28,0);
  if ((uVar14 >> 6 & 1) == 0) {
    if (bVar4) {
      if ((unaff_x19[0x75] != 0) && (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 != 0)) {
        if ((uint)((long)(int)uVar11 + -1) < *(uint *)(lVar29 + 0x18)) {
          lVar29 = lVar29 + ((long)(int)uVar11 + -1) * 0x178;
          goto LAB_0603ed10;
        }
        goto LAB_0603fce4;
      }
      goto thunk_FUN_02e3ccc4;
    }
LAB_0603eba4:
    bVar4 = false;
  }
  else {
    lVar19 = unaff_x19[0x75];
    if ((lVar19 == 0) || (lVar30 = *(long *)(lVar19 + 0x38), lVar30 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar30 + 0x18) <= uVar11) goto LAB_0603fce4;
    *(int *)(lVar30 + 0x20 + uVar39 * 0x178 + 0x150) = iVar13;
    if ((((int)unaff_x19[0x6d] < (int)uVar11) || ((int)unaff_x19[0x6e] < (int)uVar31)) ||
       ((*(int *)((long)unaff_x19 + 0x314) == 5 &&
        (*(int *)(lVar30 + 0x20 + uVar39 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6f])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((((bool)(bVar4 | bVar1 ^ 1U)) || ((int)uVar3 < (int)uVar11)) || ((uVar44 & 0xfffe) == 10))
       || (uVar44 == 0xd)) {
LAB_0603eb9c:
      if (!bVar4) goto LAB_0603eba4;
    }
    else {
      if (uVar11 == uVar3) {
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar18 = FUN_055814cc(uVar44,0);
        if ((uVar18 & 1) != 0) goto LAB_0603eb9c;
        lVar19 = unaff_x19[0x75];
        if (lVar19 == 0) goto thunk_FUN_02e3ccc4;
      }
      lVar19 = *(long *)(lVar19 + 0x38);
      if (lVar19 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_0603fce4;
      lVar19 = lVar19 + uVar39 * 0x178;
      fStack00000000000000a0 = *(float *)(lVar19 + 0x15c);
      fStack0000000000000098 = fVar46 * fStack00000000000000a0 + *(float *)(lVar19 + 0x144);
      uStack0000000000000088 = 0;
      fStack0000000000000058 = *(float *)(lVar19 + 0x58);
      fStack0000000000000094 = *(float *)(lVar19 + 0x114);
    }
    fVar56 = in_stack_000001a8[10];
    if (fVar56 == 1.4013e-45) {
LAB_0603ece4:
      if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar29 + 0x18) <= uVar11) goto LAB_0603fce4;
      lVar29 = lVar29 + uVar39 * 0x178;
LAB_0603ed10:
      fVar56 = *(float *)(lVar29 + 0x144);
      lVar19 = *unaff_x19;
      uVar60 = *(undefined4 *)(lVar29 + 0x120);
    }
    else {
      if (uVar11 != uVar2) {
        if ((int)fVar56 <= (int)uVar11) {
LAB_0603ede8:
          if ((int)uVar11 < (int)fVar56) {
            iVar16 = FUN_0626d24c(lVar29,0);
            if (*(uint *)(lVar37 + 0x18) <= uVar11 + 1) goto LAB_0603fce4;
            lVar29 = *(long *)(lVar34 + (ulong)(uVar11 + 1) * 0x178 + 0x20);
            if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
            iVar15 = FUN_0626d24c(lVar29,0);
            if (iVar16 != iVar15) goto LAB_0603ece4;
          }
          if (bVar1) {
            bVar4 = true;
            goto LAB_0603efc0;
          }
          if ((unaff_x19[0x75] != 0) && (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 != 0)) {
            if ((uint)((long)(int)uVar11 + -1) < *(uint *)(lVar29 + 0x18)) {
              lVar29 = lVar29 + ((long)(int)uVar11 + -1) * 0x178;
              goto LAB_0603ed10;
            }
            goto LAB_0603fce4;
          }
          goto thunk_FUN_02e3ccc4;
        }
        if ((unaff_x19[0x75] == 0) || (lVar19 = *(long *)(unaff_x19[0x75] + 0x38), lVar19 == 0))
        goto thunk_FUN_02e3ccc4;
        if (uVar11 + 1 < *(uint *)(lVar19 + 0x18)) {
          if (*(float *)(lVar19 + (ulong)(uVar11 + 1) * 0x178 + 0x58) == fStack0000000000000058) {
            if (*(int *)(*(long *)
                          System_Collections_Generic_List<WeakReference<TMP_FontAsset>>_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar18 = FUN_0605a494(0);
            if ((uVar18 & 1) != 0) {
              fVar56 = in_stack_000001a8[10];
              goto LAB_0603ede8;
            }
          }
          lVar29 = unaff_x19[0x75];
          if ((int)uVar3 < (int)uVar11) goto LAB_0603ed4c;
          goto LAB_0603ef48;
        }
        goto LAB_0603fce4;
      }
      lVar29 = unaff_x19[0x75];
      if ((uVar44 != 0x200b & (bVar9 ^ 0xff)) == 0) {
LAB_0603ed4c:
        if ((lVar29 == 0) || (lVar29 = *(long *)(lVar29 + 0x38), lVar29 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar29 + 0x18) <= uVar3) goto LAB_0603fce4;
        lVar29 = lVar29 + (long)(int)uVar3 * 0x178;
      }
      else {
LAB_0603ef48:
        if ((lVar29 == 0) || (lVar29 = *(long *)(lVar29 + 0x38), lVar29 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar29 + 0x18) <= uVar11) goto LAB_0603fce4;
        lVar29 = lVar29 + uVar39 * 0x178;
      }
      fVar56 = *(float *)(lVar29 + 0x144);
      lVar19 = *unaff_x19;
      uVar60 = *(undefined4 *)(lVar29 + 0x120);
    }
    (**(code **)(lVar19 + 0x908))
              (fStack0000000000000094,fStack0000000000000098,uStack0000000000000088,uVar60,
               fStack00000000000000a0 * fVar46 + fVar56,0,fStack00000000000000a0,
               fStack00000000000000a0);
    bVar4 = false;
  }
LAB_0603efc0:
  if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar14 = (uint)*(undefined8 *)(lVar29 + 0x18);
  if (uVar14 <= uVar11) goto LAB_0603fce4;
  if ((*(byte *)(lVar29 + 0x20 + uVar39 * 0x178 + 0x16d) >> 1 & 1) == 0) {
    if (bVar5) {
      (**(code **)(*unaff_x19 + 0x918))();
    }
    bVar5 = false;
  }
  else {
    if ((((int)unaff_x19[0x6d] < (int)uVar11) || ((int)unaff_x19[0x6e] < (int)uVar31)) ||
       ((*(int *)((long)unaff_x19 + 0x314) == 5 &&
        (*(int *)(lVar29 + 0x20 + uVar39 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6f])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar5) {
LAB_0603f144:
      if (uVar14 <= uVar11) goto LAB_0603fce4;
      lVar29 = lVar29 + uVar39 * 0x178;
      lVar19 = 0x118;
      if ((bVar9 & 1) == 0) {
        lVar19 = 0xf4;
      }
      fVar58 = *(float *)(lVar29 + 0x180);
      fVar65 = *(float *)(lVar29 + 0x184);
      fVar66 = *(float *)(lVar29 + 0x188);
      uVar20 = *(undefined8 *)(lVar29 + 0x178);
      fVar68 = *(float *)(lVar29 + 0x120);
      fVar46 = *(float *)(lVar29 + 0x13c);
      fVar61 = *(float *)(lVar29 + 0x140);
      fVar70 = *(float *)(lVar29 + 0x148);
      fVar56 = *(float *)(lVar29 + lVar19 + 0x20);
      in_stack_000001e8 = SUB168(*(undefined1 (*) [16])(unaff_x28 + 0x160),8);
      in_stack_000001e0 = SUB168(*(undefined1 (*) [16])(unaff_x28 + 0x160),0);
      in_stack_000001c8 = uVar20;
      fStack00000000000001d0 = fVar58;
      fStack00000000000001d4 = fVar65;
      in_stack_000001d8 = fVar66;
      in_stack_000001f0 = in_stack_00001320;
      uVar39 = FUN_0605b5b8(&stack0x000001e0,&stack0x000001c8,0);
      if ((uVar39 & 1) == 0) {
        if ((bVar9 & 1) == 0) {
          fVar46 = fVar68;
        }
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        fVar56 = fVar56 - (float)((ulong)in_stack_00001310 >> 0x20);
        if (fVar56 <= fStack00000000000000e8) {
          fStack00000000000000e8 = fVar56;
        }
        if (fStack00000000000000dc <= fVar46 + in_stack_00001318) {
          fStack00000000000000dc = fVar46 + in_stack_00001318;
        }
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        fVar70 = fVar70 - in_stack_00001320;
        fVar61 = fVar61 + in_stack_0000131c;
        if (fVar70 <= in_stack_00000110._4_4_) {
          in_stack_00000110._4_4_ = fVar70;
        }
        if (fStack00000000000000e0 <= fVar61) {
          fStack00000000000000e0 = fVar61;
        }
      }
      else {
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        fStack00000000000000e8 = (fVar56 + (fStack00000000000000dc - in_stack_00001318)) * 0.5;
        (**(code **)(*unaff_x19 + 0x918))();
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        if ((bVar9 & 1) == 0) {
          fVar46 = fVar68;
        }
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        in_stack_00000110._4_4_ = fVar70 - fVar66;
        fStack00000000000000dc = fVar58 + fVar46;
        fStack00000000000000e0 = fVar61 + fVar65;
        in_stack_00001310 = uVar20;
        in_stack_00001318 = fVar58;
        in_stack_0000131c = fVar65;
        in_stack_00001320 = fVar66;
      }
      if (((in_stack_000001a8[10] != 1.4013e-45) && (uVar11 != uVar2)) &&
         (((int)uVar11 < (int)uVar3 && (bVar1)))) {
        bVar5 = true;
        goto LAB_0603f378;
      }
      (**(code **)(*unaff_x19 + 0x918))();
    }
    else {
      bVar5 = false;
      if ((((!bVar1) || ((int)uVar3 < (int)uVar11)) || ((uVar44 & 0xfffe) == 10)) || (uVar44 == 0xd)
         ) goto LAB_0603f378;
      if (uVar11 != uVar3) {
LAB_0603f0c8:
        puVar7 = System_Collections_Generic_List<AudioListener>_TypeInfo;
        lVar19 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar19 = *(long *)puVar7;
        }
        if ((unaff_x19[0x75] != 0) && (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 != 0)) {
          uVar14 = (uint)*(undefined8 *)(lVar29 + 0x18);
          if (uVar11 < uVar14) {
            lVar30 = *(long *)(lVar19 + 0xb8);
            lVar19 = lVar29 + uVar39 * 0x178;
            fStack00000000000000dc = *(float *)(lVar30 + 0x1728);
            fStack00000000000000e0 = *(float *)(lVar30 + 0x172c);
            in_stack_00001320 = *(float *)(lVar19 + 0x188);
            fStack00000000000000e8 = *(float *)(lVar30 + 0x1720);
            in_stack_00000110._4_4_ = *(float *)(lVar30 + 0x1724);
            uVar20 = *(undefined8 *)(lVar19 + 0x178);
            *(undefined8 *)(unaff_x28 + 0x168) = *(undefined8 *)(lVar19 + 0x180);
            *(undefined8 *)(unaff_x28 + 0x160) = uVar20;
            goto LAB_0603f144;
          }
          goto LAB_0603fce4;
        }
        goto thunk_FUN_02e3ccc4;
      }
      if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar18 = FUN_055814cc(uVar44,0);
      if ((uVar18 & 1) == 0) goto LAB_0603f0c8;
    }
    bVar5 = false;
  }
LAB_0603f378:
  fVar46 = in_stack_000001a8[10];
  uVar11 = uVar11 + 1;
  uVar14 = uVar31;
  if ((int)fVar46 <= (int)uVar11) goto LAB_0603f74c;
  goto LAB_0603d6e0;
LAB_0603f74c:
  lVar37 = unaff_x19[0x75];
  if (lVar37 != 0) {
    iVar16 = uVar31 + 1;
    plVar42 = (long *)System_Collections_Generic_List<byte[]>_TypeInfo;
LAB_0603f770:
    lVar34 = *(long *)(lVar37 + 0x60);
    if (lVar34 != 0) {
      if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0xd5)) {
LAB_0603fce4:
                    /* WARNING: Subroutine does not return */
        FUN_02e3cccc();
      }
      *(int *)(lVar34 + (long)(int)*(uint *)(unaff_x19 + 0xd5) * 0x50 + 0x28) = iVar13;
      *(float *)(lVar37 + 0x18) = fVar46;
      lVar34 = unaff_x19[0xd8];
      *(int *)(lVar37 + 0x2c) = iVar16;
      if ((int)fVar46 < 1 || fStack00000000000000ec == 0.0) {
        fStack00000000000000ec = 1.4013e-45;
      }
      *(int *)(lVar37 + 0x1c) = (int)lVar34;
      *(float *)(lVar37 + 0x24) = fStack00000000000000ec;
      *(int *)(lVar37 + 0x30) = *(int *)((long)unaff_x19 + 0x4cc) + 1;
      if (((int)unaff_x19[0x6b] != 0xff) ||
         (uVar39 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar39 & 1) == 0)) {
LAB_0603d144:
        if (*(int *)(*(long *)PTR_DAT_06a3c3a0 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        FUN_060594e8();
        return;
      }
      lVar37 = unaff_x19[0xdf];
      if (lVar37 != 0) {
        (**(code **)(lVar37 + 0x18))
                  (*(undefined8 *)(lVar37 + 0x40),unaff_x19[0x75],*(undefined8 *)(lVar37 + 0x28));
      }
      if (*(int *)((long)unaff_x19 + 0x35c) != 0) {
        if ((unaff_x19[0x75] == 0) || (lVar37 = *(long *)(unaff_x19[0x75] + 0x60), lVar37 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(int *)(*plVar42 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        if (*(int *)(lVar37 + 0x18) == 0) goto LAB_0603fce4;
        FUN_060a5370(lVar37 + 0x20,1,0);
      }
      if (unaff_x19[0x7c] != 0) {
        FUN_06242810(unaff_x19[0x7c],0);
        if ((unaff_x19[0x75] != 0) && (lVar37 = *(long *)(unaff_x19[0x75] + 0x60), lVar37 != 0)) {
          if (*(int *)(lVar37 + 0x18) == 0) goto LAB_0603fce4;
          if (unaff_x19[0x7c] != 0) {
            FUN_06240928(unaff_x19[0x7c],*(undefined8 *)(lVar37 + 0x30),0);
            if ((unaff_x19[0x75] != 0) && (lVar37 = *(long *)(unaff_x19[0x75] + 0x60), lVar37 != 0))
            {
              if (*(int *)(lVar37 + 0x18) == 0) goto LAB_0603fce4;
              if (unaff_x19[0x7c] != 0) {
                FUN_06241714(unaff_x19[0x7c],0,*(undefined8 *)(lVar37 + 0x48),0);
                if ((unaff_x19[0x75] != 0) &&
                   (lVar37 = *(long *)(unaff_x19[0x75] + 0x60), lVar37 != 0)) {
                  if (*(int *)(lVar37 + 0x18) == 0) goto LAB_0603fce4;
                  if (unaff_x19[0x7c] != 0) {
                    FUN_06240b40(unaff_x19[0x7c],*(undefined8 *)(lVar37 + 0x50),0);
                    if ((unaff_x19[0x75] != 0) &&
                       (lVar37 = *(long *)(unaff_x19[0x75] + 0x60), lVar37 != 0)) {
                      if (*(int *)(lVar37 + 0x18) == 0) goto LAB_0603fce4;
                      if (unaff_x19[0x7c] != 0) {
                        UnityEngine_TextCore_Text_SpriteAsset__UpdateLookupTables
                                  (unaff_x19[0x7c],*(undefined8 *)(lVar37 + 0x58),0);
                        if (unaff_x19[0x7c] != 0) {
                          FUN_062425d0(unaff_x19[0x7c],0);
                          lVar37 = unaff_x19[0x75];
                          if (lVar37 != 0) {
                            lVar29 = 0;
                            lVar34 = 0;
                            do {
                              uVar39 = lVar34 + 1;
                              if ((long)*(int *)(lVar37 + 0x34) <= (long)uVar39) goto LAB_0603d144;
                              lVar37 = *(long *)(lVar37 + 0x60);
                              if (lVar37 == 0) break;
                              if (*(int *)(*plVar42 + 0xe4) == 0) {
                                thunk_FUN_02e9a04c();
                              }
                              if (*(uint *)(lVar37 + 0x18) <= uVar39) goto LAB_0603fce4;
                              FUN_060a524c(lVar37 + lVar29 + 0x70,0);
                              lVar37 = unaff_x19[0xe5];
                              if (lVar37 == 0) break;
                              if (*(uint *)(lVar37 + 0x18) <= uVar39) goto LAB_0603fce4;
                              uVar20 = *(undefined8 *)(lVar37 + lVar34 * 8 + 0x28);
                              if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
                                thunk_FUN_02e9a04c();
                              }
                              uVar18 = FUN_062696b0(uVar20,0,0);
                              if ((uVar18 & 1) == 0) {
                                if (*(int *)((long)unaff_x19 + 0x35c) != 0) {
                                  if ((unaff_x19[0x75] == 0) ||
                                     (lVar37 = *(long *)(unaff_x19[0x75] + 0x60), lVar37 == 0))
                                  break;
                                  if (*(int *)(*plVar42 + 0xe4) == 0) {
                                    thunk_FUN_02e9a04c();
                                  }
                                  if (*(uint *)(lVar37 + 0x18) <= uVar39) goto LAB_0603fce4;
                                  FUN_060a5370(lVar37 + lVar29 + 0x70,1,0);
                                }
                                lVar37 = unaff_x19[0xe5];
                                if (lVar37 == 0) break;
                                if (*(uint *)(lVar37 + 0x18) <= uVar39) goto LAB_0603fce4;
                                lVar37 = *(long *)(lVar37 + lVar34 * 8 + 0x28);
                                if (lVar37 == 0) break;
                                lVar37 = FUN_060ae428(lVar37,0);
                                if ((unaff_x19[0x75] == 0) ||
                                   (lVar19 = *(long *)(unaff_x19[0x75] + 0x60), lVar19 == 0)) break;
                                if (*(uint *)(lVar19 + 0x18) <= uVar39) goto LAB_0603fce4;
                                if (lVar37 == 0) break;
                                FUN_06240928(lVar37,*(undefined8 *)(lVar19 + lVar29 + 0x80),0);
                                lVar37 = unaff_x19[0xe5];
                                if (lVar37 == 0) break;
                                if (*(uint *)(lVar37 + 0x18) <= uVar39) goto LAB_0603fce4;
                                lVar37 = *(long *)(lVar37 + lVar34 * 8 + 0x28);
                                if (lVar37 == 0) break;
                                lVar37 = FUN_060ae428(lVar37,0);
                                if ((unaff_x19[0x75] == 0) ||
                                   (lVar19 = *(long *)(unaff_x19[0x75] + 0x60), lVar19 == 0)) break;
                                if (*(uint *)(lVar19 + 0x18) <= uVar39) goto LAB_0603fce4;
                                if (lVar37 == 0) break;
                                FUN_06241714(lVar37,0,*(undefined8 *)(lVar19 + lVar29 + 0x98),0);
                                lVar37 = unaff_x19[0xe5];
                                if (lVar37 == 0) break;
                                if (*(uint *)(lVar37 + 0x18) <= uVar39) goto LAB_0603fce4;
                                lVar37 = *(long *)(lVar37 + lVar34 * 8 + 0x28);
                                if (lVar37 == 0) break;
                                lVar37 = FUN_060ae428(lVar37,0);
                                if ((unaff_x19[0x75] == 0) ||
                                   (lVar19 = *(long *)(unaff_x19[0x75] + 0x60), lVar19 == 0)) break;
                                if (*(uint *)(lVar19 + 0x18) <= uVar39) goto LAB_0603fce4;
                                if (lVar37 == 0) break;
                                FUN_06240b40(lVar37,*(undefined8 *)(lVar19 + lVar29 + 0xa0),0);
                                lVar37 = unaff_x19[0xe5];
                                if (lVar37 == 0) break;
                                if (*(uint *)(lVar37 + 0x18) <= uVar39) goto LAB_0603fce4;
                                lVar37 = *(long *)(lVar37 + lVar34 * 8 + 0x28);
                                if (lVar37 == 0) break;
                                lVar37 = FUN_060ae428(lVar37,0);
                                if ((unaff_x19[0x75] == 0) ||
                                   (lVar19 = *(long *)(unaff_x19[0x75] + 0x60), lVar19 == 0)) break;
                                if (*(uint *)(lVar19 + 0x18) <= uVar39) goto LAB_0603fce4;
                                if (lVar37 == 0) break;
                                UnityEngine_TextCore_Text_SpriteAsset__UpdateLookupTables
                                          (lVar37,*(undefined8 *)(lVar19 + lVar29 + 0xa8),0);
                                lVar37 = unaff_x19[0xe5];
                                if (lVar37 == 0) break;
                                if (*(uint *)(lVar37 + 0x18) <= uVar39) goto LAB_0603fce4;
                                lVar37 = *(long *)(lVar37 + lVar34 * 8 + 0x28);
                                if ((lVar37 == 0) || (lVar37 = FUN_060ae428(lVar37,0), lVar37 == 0))
                                break;
                                FUN_062425d0(lVar37,0);
                              }
                              lVar37 = unaff_x19[0x75];
                              lVar34 = lVar34 + 1;
                              lVar29 = lVar29 + 0x50;
                            } while (lVar37 != 0);
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
  }
thunk_FUN_02e3ccc4:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


