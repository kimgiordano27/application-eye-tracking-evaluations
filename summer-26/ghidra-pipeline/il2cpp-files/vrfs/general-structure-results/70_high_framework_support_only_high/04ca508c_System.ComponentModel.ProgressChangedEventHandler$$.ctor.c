/*
FUNCTION_NAME: System.ComponentModel.ProgressChangedEventHandler$$.ctor
ENTRY_POINT: 04ca508c
PROGRAM: vrfs-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_ComponentModel_ProgressChangedEventHandler___ctor
               (undefined1 param_1 [16],ulong param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  undefined2 uVar7;
  ushort uVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined1 uVar31;
  char cVar32;
  uint uVar33;
  long *plVar34;
  undefined4 *puVar35;
  long lVar36;
  float *pfVar37;
  code *pcVar38;
  float *pfVar39;
  long *plVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long *unaff_x19;
  int unaff_w21;
  uint unaff_w22;
  int iVar46;
  double *unaff_x23;
  long unaff_x24;
  uint uVar47;
  long *unaff_x26;
  long lVar48;
  long *plVar49;
  uint uVar50;
  long lVar51;
  uint *unaff_x28;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined4 uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined8 uVar61;
  double dVar62;
  double dVar63;
  float fVar64;
  undefined8 uVar65;
  ulong uVar66;
  undefined4 uVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined8 uVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  ulong unaff_d14;
  float fVar80;
  float unaff_s15;
  undefined8 in_stack_00000020;
  int iStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  uint uStack000000000000003c;
  uint uStack0000000000000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000058;
  float fStack0000000000000060;
  uint uStack0000000000000064;
  int iStack0000000000000068;
  float fStack000000000000006c;
  uint uStack0000000000000070;
  float fStack0000000000000074;
  uint uStack0000000000000078;
  undefined8 in_stack_00000080;
  float in_stack_00000088;
  uint uStack000000000000008c;
  uint uStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  float fStack00000000000000a0;
  ulong in_stack_000000a8;
  float fStack00000000000000b0;
  undefined8 in_stack_000000b8;
  float fStack00000000000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  undefined8 uStack00000000000000e0;
  float fStack00000000000000ec;
  float in_stack_000000f0;
  float fStack00000000000000f4;
  float fStack00000000000000fc;
  float fStack000000000000011c;
  float fStack0000000000000120;
  float fStack0000000000000124;
  long *in_stack_00000130;
  long in_stack_00000140;
  float in_stack_00000158;
  long *in_stack_00000160;
  long *in_stack_00000170;
  uint *in_stack_00000178;
  long *in_stack_00000180;
  undefined8 in_stack_00000188;
  float fStack0000000000000190;
  float fStack0000000000000194;
  float in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  float in_stack_000001b0;
  float in_stack_0000110c;
  float in_stack_00001110;
  float in_stack_00001118;
  float in_stack_0000111c;
  float in_stack_00001124;
  float in_stack_00001128;
  float in_stack_00001130;
  float in_stack_00001134;
  float in_stack_0000113c;
  float in_stack_00001140;
  float in_stack_00001148;
  float in_stack_0000114c;
  uint in_stack_0000122c;
  undefined8 in_stack_00001260;
  undefined8 in_stack_00001268;
  float in_stack_00001270;
  char in_stack_00001284;
  float in_stack_00001288;
  uint in_stack_0000128c;
  double in_stack_00001290;
  undefined4 in_stack_000012a4;
  double in_stack_000012a8;
  double in_stack_000012b0;
  double in_stack_000012b8;
  double in_stack_000012c0;
  double in_stack_000012c8;
  
  uVar29 = _uStack0000000000000070;
code_r0x04ca508c:
  lVar48 = unaff_x19[0x62];
  if (*(int *)(*(long *)PTR_DAT_06d9fd78 + 0xe0) == 0) {
    thunk_FUN_016466fc(*(long *)PTR_DAT_06d9fd78);
  }
  uVar27 = FUN_051d2ac0(lVar48,0,0);
  if ((uVar27 & 1) != 0) {
    plVar49 = (long *)unaff_x19[0x62];
    uVar28 = (**(code **)(*unaff_x19 + 0x548))();
    if (plVar49 == (long *)0x0) goto LAB_04caa2e0;
    (**(code **)(*plVar49 + 0x558))(plVar49,uVar28,*(undefined8 *)(*plVar49 + 0x560));
    lVar48 = unaff_x19[0x62];
    if (lVar48 == 0) goto LAB_04caa2e0;
    *(int *)(lVar48 + 0x430) = (int)unaff_x19[0x86];
    FUN_04ec8ce4(lVar48,*(undefined4 *)((long)unaff_x19 + 0x49c),0);
    plVar49 = (long *)unaff_x19[0x62];
    if (plVar49 == (long *)0x0) goto LAB_04caa2e0;
    (**(code **)(*plVar49 + 0x7d8))(plVar49,0,0,*(undefined8 *)(*plVar49 + 0x7e0));
    *(undefined1 *)(unaff_x19 + 100) = 1;
  }
LAB_04ca5148:
  fVar53 = unaff_s15;
  uVar28 = CONCAT44(3,unaff_w22);
LAB_04ca2d40:
  do {
    fVar68 = (float)unaff_d14;
    param_3 = param_3 + 1;
    lVar48 = unaff_x19[0x90];
    if (lVar48 == 0) goto LAB_04caa2e0;
    if ((int)*(uint *)(lVar48 + 0x18) <= (int)param_3) {
LAB_04ca70c0:
      fVar53 = (float)param_2;
      if (((char)unaff_x19[0x4b] != '\0') &&
         (fVar53 = DAT_0537e714,
         DAT_0537e714 < *(float *)((long)unaff_x19 + 0x25c) - *(float *)(unaff_x19 + 0x4c))) {
        fVar53 = *(float *)((long)unaff_x19 + 0x204);
        fVar68 = *(float *)((long)unaff_x19 + 0x274);
        if ((fVar53 < fVar68) && (*(int *)((long)unaff_x19 + 0x264) < (int)unaff_x19[0x4d])) {
          if (*(float *)(unaff_x19 + 0x5f) < *(float *)((long)unaff_x19 + 0x2f4) / 100.0) {
            *(undefined4 *)(unaff_x19 + 0x5f) = 0;
          }
          fVar77 = (*(float *)((long)unaff_x19 + 0x25c) - fVar53) * 0.5;
          if (fVar77 <= DAT_0534c364) {
            fVar77 = DAT_0534c364;
          }
          *(float *)(unaff_x19 + 0x4c) = fVar53;
          fVar77 = (fVar53 + fVar77) * 20.0 + 0.5;
          fVar53 = DAT_0537e710;
          if (fVar77 != INFINITY) {
            fVar53 = (float)(int)fVar77 / 20.0;
          }
          if (fVar68 <= fVar53) {
            fVar53 = fVar68;
          }
          goto LAB_04ca717c;
        }
      }
      *(undefined1 *)((long)unaff_x19 + 0x26c) = 1;
      puVar10 = PTR_DAT_06d9fd78;
      if ((int)unaff_x19[0x4d] <= *(int *)((long)unaff_x19 + 0x264)) {
        uVar28 = FUN_032194f0(_uStack0000000000000040,0);
        uVar23 = FUN_031cc64c(in_stack_00000048,0);
        uVar28 = FUN_02526f2c(*(undefined8 *)PTR_DAT_06e4b7d0,uVar28,*(undefined8 *)PTR_DAT_06e3cf20
                              ,uVar23,0);
        if (*(int *)(*(long *)PTR_DAT_06e52cd8 + 0xe0) == 0) {
          thunk_FUN_016466fc(*(long *)PTR_DAT_06e52cd8);
        }
        FUN_048662d8(uVar28,0);
      }
      if ((*unaff_x28 == 0) || ((*unaff_x28 == 1 && (in_stack_0000128c == 3)))) {
        pcVar38 = *(code **)(*unaff_x19 + 0x948);
        goto LAB_04caa2f8;
      }
      lVar48 = *unaff_x26;
      if (*(int *)(lVar48 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar48 = *unaff_x26;
      }
      puVar11 = PTR_DAT_06e50440;
      lVar48 = **(long **)(lVar48 + 0xb8);
      if (lVar48 == 0) goto LAB_04caa2e0;
      if (*(uint *)(lVar48 + 0x18) <= *(uint *)(unaff_x19 + 0xd3)) goto LAB_04caa4c0;
      iVar18 = *(int *)(lVar48 + (long)(int)*(uint *)(unaff_x19 + 0xd3) * 0x38 + 0x54) << 2;
      if ((*in_stack_00000180 == 0) || (lVar48 = *(long *)(*in_stack_00000180 + 0x60), lVar48 == 0))
      goto LAB_04caa2e0;
      if (*(int *)(lVar48 + 0x18) == 0) goto LAB_04caa4c0;
      FUN_051ef01c(lVar48 + 0x20,0,0);
      if (DAT_0722a13e == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e50440);
        DAT_0722a13e = '\x01';
      }
      iVar15 = (int)unaff_x19[0x52];
      fStack00000000000000ec = **(float **)(*(long *)puVar11 + 0xb8);
      uStack00000000000000e0 = *(undefined8 *)(*(float **)(*(long *)puVar11 + 0xb8) + 1);
      lVar48 = unaff_x19[0xe5];
      in_stack_000000a8 = uStack00000000000000e0;
      fStack00000000000000b0 = fStack00000000000000ec;
      if (iVar15 < 0x401) {
        if (iVar15 == 0x100) {
          if (lVar48 == 0) goto LAB_04caa2e0;
          if (*(uint *)(lVar48 + 0x18) < 2) goto LAB_04caa4c0;
          uVar28 = *(undefined8 *)(lVar48 + 0x30);
          if ((int)unaff_x19[0x61] == 5) {
            if ((*in_stack_00000180 == 0) ||
               (lVar25 = *(long *)(*in_stack_00000180 + 0x58), lVar25 == 0)) goto LAB_04caa2e0;
            if (*(uint *)(lVar25 + 0x18) <= uStack000000000000003c) goto LAB_04caa4c0;
            fVar53 = *(float *)(lVar25 + (long)(int)uStack000000000000003c * 0x14 + 0x28);
          }
          else {
            fVar53 = *(float *)((long)unaff_x19 + 0x4c4);
          }
          fStack00000000000000b0 = fStack0000000000000038 + 0.0 + *(float *)(lVar48 + 0x2c);
          fVar53 = (0.0 - fVar53) - fStack0000000000000030;
        }
        else if (iVar15 == 0x200) {
          if (lVar48 == 0) goto LAB_04caa2e0;
          if ((*(int *)(lVar48 + 0x18) == 1) || (*(int *)(lVar48 + 0x18) == 0)) goto LAB_04caa4c0;
          fStack00000000000000b0 = (*(float *)(lVar48 + 0x20) + *(float *)(lVar48 + 0x2c)) * 0.5;
          uVar28 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar48 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar48 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar48 + 0x24) +
                            (float)*(undefined8 *)(lVar48 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x61] == 5) {
            if ((*in_stack_00000180 == 0) ||
               (lVar48 = *(long *)(*in_stack_00000180 + 0x58), lVar48 == 0)) goto LAB_04caa2e0;
            if (*(uint *)(lVar48 + 0x18) <= uStack000000000000003c) goto LAB_04caa4c0;
            lVar48 = lVar48 + (long)(int)uStack000000000000003c * 0x14;
            fStack00000000000000b0 = fStack0000000000000038 + 0.0 + fStack00000000000000b0;
            fVar53 = ((fStack0000000000000030 + *(float *)(lVar48 + 0x28) +
                      *(float *)(lVar48 + 0x30)) - fStack0000000000000034) * -0.5 + 0.0;
          }
          else {
            fStack00000000000000b0 = fStack0000000000000038 + 0.0 + fStack00000000000000b0;
            fVar53 = ((fStack0000000000000030 + *(float *)((long)unaff_x19 + 0x4c4) +
                      in_stack_00001288) - fStack0000000000000034) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar15 != 0x400) goto LAB_04ca76a0;
          if (lVar48 == 0) goto LAB_04caa2e0;
          if (*(int *)(lVar48 + 0x18) == 0) goto LAB_04caa4c0;
          uVar28 = *(undefined8 *)(lVar48 + 0x24);
          if ((int)unaff_x19[0x61] == 5) {
            if ((*in_stack_00000180 == 0) ||
               (lVar25 = *(long *)(*in_stack_00000180 + 0x58), lVar25 == 0)) goto LAB_04caa2e0;
            if (*(uint *)(lVar25 + 0x18) <= uStack000000000000003c) goto LAB_04caa4c0;
            in_stack_00001288 = *(float *)(lVar25 + (long)(int)uStack000000000000003c * 0x14 + 0x30)
            ;
          }
          fStack00000000000000b0 = fStack0000000000000038 + 0.0 + *(float *)(lVar48 + 0x20);
          fVar53 = fStack0000000000000034 + (0.0 - in_stack_00001288);
        }
        in_stack_000000a8 = CONCAT44((float)((ulong)uVar28 >> 0x20) + 0.0,(float)uVar28 + fVar53);
      }
      else if (iVar15 == 0x800) {
        if (lVar48 == 0) goto LAB_04caa2e0;
        if ((*(int *)(lVar48 + 0x18) == 1) || (*(int *)(lVar48 + 0x18) == 0)) goto LAB_04caa4c0;
        fVar53 = ((float)*(undefined8 *)(lVar48 + 0x24) + (float)*(undefined8 *)(lVar48 + 0x30)) *
                 0.5;
        fStack00000000000000b0 =
             fStack0000000000000038 + 0.0 +
             (*(float *)(lVar48 + 0x20) + *(float *)(lVar48 + 0x2c)) * 0.5;
        in_stack_000000a8 =
             CONCAT44(((float)((ulong)*(undefined8 *)(lVar48 + 0x24) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar48 + 0x30) >> 0x20)) * 0.5 + 0.0,
                      fVar53 + 0.0);
      }
      else if (iVar15 == 0x1000) {
        if (lVar48 == 0) goto LAB_04caa2e0;
        if ((*(int *)(lVar48 + 0x18) == 1) || (*(int *)(lVar48 + 0x18) == 0)) goto LAB_04caa4c0;
        fVar53 = ((float)*(undefined8 *)(lVar48 + 0x24) + (float)*(undefined8 *)(lVar48 + 0x30)) *
                 0.5;
        fStack00000000000000b0 =
             fStack0000000000000038 + 0.0 +
             (*(float *)(lVar48 + 0x20) + *(float *)(lVar48 + 0x2c)) * 0.5;
        in_stack_000000a8 =
             CONCAT44(((float)((ulong)*(undefined8 *)(lVar48 + 0x24) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar48 + 0x30) >> 0x20)) * 0.5 + 0.0,
                      fVar53 + (0.0 - ((fStack0000000000000030 + *(float *)((long)unaff_x19 + 0x4f4)
                                       + *(float *)((long)unaff_x19 + 0x4ec)) -
                                      fStack0000000000000034) * 0.5));
      }
      else if (iVar15 == 0x2000) {
        if (lVar48 == 0) goto LAB_04caa2e0;
        if ((*(int *)(lVar48 + 0x18) == 1) || (*(int *)(lVar48 + 0x18) == 0)) goto LAB_04caa4c0;
        fStack00000000000000b0 =
             fStack0000000000000038 + 0.0 +
             (*(float *)(lVar48 + 0x20) + *(float *)(lVar48 + 0x2c)) * 0.5;
        fVar53 = 0.0 - ((*(float *)(unaff_x19 + 0x99) - fStack0000000000000030) -
                       fStack0000000000000034) * 0.5;
        in_stack_000000a8 =
             CONCAT44(((float)((ulong)*(undefined8 *)(lVar48 + 0x24) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar48 + 0x30) >> 0x20)) * 0.5 + 0.0,
                      ((float)*(undefined8 *)(lVar48 + 0x24) + (float)*(undefined8 *)(lVar48 + 0x30)
                      ) * 0.5 + fVar53);
      }
LAB_04ca76a0:
      if (unaff_x19[0xe7] == 0) goto LAB_04caa2e0;
      uVar28 = FUN_036e1620(unaff_x19[0xe7],0);
      puVar11 = PTR_DAT_06e124b8;
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_016466fc(*(long *)puVar10);
      }
      uVar29 = FUN_051d94d4(uVar28,0,0);
      lVar48 = FUN_04ec8f8c();
      if (lVar48 == 0) goto LAB_04caa2e0;
      FUN_04f1cc5c(lVar48,0);
      *(float *)(unaff_x19 + 0xe4) = fVar53;
      if (unaff_x19[0xe7] == 0) goto LAB_04caa2e0;
      iVar15 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(unaff_x19[0xe7],0);
      if (unaff_x19[0xe7] == 0) goto LAB_04caa2e0;
      fVar68 = (float)FUN_036e0f48(unaff_x19[0xe7],0);
      dVar63 = DAT_0534bb48;
      dVar62 = modf(DAT_0534bb48,(double *)&stack0x00001290);
      if (dVar62 == 0.5) {
        fVar77 = (float)in_stack_00001290;
        if (((long)in_stack_00001290 & 1U) != 0) {
          fVar77 = (float)in_stack_00001290 + 1.0;
        }
      }
      else {
        fVar77 = 255.0;
      }
      dVar62 = modf(dVar63,(double *)&stack0x00001290);
      if (dVar62 == 0.5) {
        fVar52 = (float)in_stack_00001290;
        if (((long)in_stack_00001290 & 1U) != 0) {
          fVar52 = (float)in_stack_00001290 + 1.0;
        }
      }
      else {
        fVar52 = 255.0;
      }
      dVar62 = modf(dVar63,(double *)&stack0x00001290);
      if (dVar62 == 0.5) {
        fVar57 = (float)in_stack_00001290;
        if (((long)in_stack_00001290 & 1U) != 0) {
          fVar57 = (float)in_stack_00001290 + 1.0;
        }
      }
      else {
        fVar57 = 255.0;
      }
      dVar62 = modf(dVar63,(double *)&stack0x00001290);
      if (dVar62 == 0.5) {
        fVar74 = (float)in_stack_00001290;
        if (((long)in_stack_00001290 & 1U) != 0) {
          fVar74 = (float)in_stack_00001290 + 1.0;
        }
      }
      else {
        fVar74 = 255.0;
      }
      modf(dVar63,(double *)&stack0x00001290);
      modf(dVar63,(double *)&stack0x00001290);
      modf(dVar63,(double *)&stack0x00001290);
      modf(dVar63,(double *)&stack0x00001290);
      if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      if (DAT_07236d0f == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e124b8);
        DAT_07236d0f = '\x01';
      }
      puVar10 = PTR_DAT_06e124b8;
      lVar48 = *(long *)PTR_DAT_06e124b8;
      if (*(int *)(lVar48 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar48 = *(long *)puVar10;
      }
      puVar35 = *(undefined4 **)(lVar48 + 0xb8);
      uVar27 = (ulong)(uint)puVar35[1];
      uVar26 = (ulong)(uint)puVar35[2];
      uVar66 = (ulong)(uint)puVar35[3];
      FUN_0480b01c(*puVar35,uVar27,uVar26,uVar66,&stack0x00001260,0x4000ffff,0);
      if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      lVar48 = *in_stack_00000180;
      if (lVar48 == 0) goto LAB_04caa2e0;
      uVar16 = *in_stack_00000178;
      if ((int)uVar16 < 1) {
        fStack00000000000000cc = 0.0;
        iVar15 = 0;
        goto LAB_04ca9d20;
      }
      lVar48 = *(long *)(lVar48 + 0x38);
      fVar53 = ABS(fVar53);
      fVar54 = 1.0;
      if ((uVar29 & 1) == 0) {
        fVar54 = fVar53;
      }
      if (lVar48 == 0) goto LAB_04caa2e0;
      bVar9 = false;
      bVar12 = false;
      bVar14 = false;
      bVar13 = false;
      fStack00000000000000cc = 0.0;
      uStack0000000000000040 = 0;
      uStack0000000000000070 = 0;
      in_stack_000000f0 = 0.0;
      fStack00000000000000f4 = *(float *)(*(long *)(*(long *)PTR_DAT_06e12318 + 0xb8) + 0x1730);
      uStack000000000000008c =
           (int)fVar77 & 0xffU | ((int)fVar52 & 0xffU) << 8 | ((int)fVar57 & 0xffU) << 0x10 |
           (int)fVar74 << 0x18;
      in_stack_00000080._4_4_ = fStack00000000000000d8;
      in_stack_00000088 = 0.0;
      fStack0000000000000120 = 0.0;
      fStack0000000000000060 = 0.0;
      fStack00000000000000a0 = 0.0;
      in_stack_00000058._4_4_ = 0.0;
      iVar46 = 0;
      lVar25 = 0x2dc;
      uVar17 = 0;
      fVar77 = 0.0;
      fStack00000000000000c8 = fStack00000000000000d8;
      fStack00000000000000c0 = fStack00000000000000dc;
      fStack0000000000000074 = fStack00000000000000dc;
      uStack0000000000000078 = in_stack_000000b8._4_4_;
      fStack0000000000000094 = fStack00000000000000dc;
      fStack0000000000000098 = fStack00000000000000d8;
      uStack0000000000000090 = in_stack_000000b8._4_4_;
      uVar50 = 1;
      uVar19 = 0;
      goto LAB_04ca7b5c;
    }
    if (*(uint *)(lVar48 + 0x18) <= param_3) goto LAB_04caa4c0;
    uVar16 = *(uint *)(lVar48 + (long)(int)param_3 * 0x10 + 0x24);
    if (uVar16 == 0) goto LAB_04ca70c0;
    if (5 < unaff_w21) {
      uVar28 = FUN_031d7010(&stack0x0000128c,0);
      uVar23 = FUN_032194f0(&stack0x00001258,0);
      uVar28 = FUN_02526f2c(*(undefined8 *)PTR_DAT_06d94380,uVar28,*(undefined8 *)PTR_DAT_06dbf898,
                            uVar23,0);
      if (*(int *)(*(long *)PTR_DAT_06e52cd8 + 0xe0) == 0) {
        thunk_FUN_016466fc(*(long *)PTR_DAT_06e52cd8);
      }
      FUN_0486672c(uVar28,0);
      uVar28 = CONCAT44(3,*unaff_x28);
    }
    in_stack_0000128c = uVar16;
  } while (uVar16 == 0x1a);
  if ((uVar16 == 0x3c) && (*(char *)((long)unaff_x19 + 0x332) != '\0')) {
    *(undefined1 *)((long)unaff_x19 + 0x461) = 1;
    *(undefined4 *)((long)unaff_x19 + 0x654) = 0;
    uVar27 = FUN_04ed0048();
    if (((uVar27 & 1) != 0) && (param_3 = in_stack_0000122c, *(int *)((long)unaff_x19 + 0x654) == 0)
       ) goto LAB_04ca2d40;
  }
  else {
    if ((*in_stack_00000180 == 0) || (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 == 0))
    goto LAB_04caa2e0;
    if (*(uint *)(lVar48 + 0x18) <= *unaff_x28) goto LAB_04caa4c0;
    lVar48 = lVar48 + (int)*unaff_x28 * unaff_x24;
    *(undefined4 *)((long)unaff_x19 + 0x654) = *(undefined4 *)(lVar48 + 0x20);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar48 + 0x50);
    unaff_x19[0x1f] = *(long *)(lVar48 + 0x40);
    thunk_FUN_01656ef8(in_stack_00000170);
  }
  if ((unaff_x19[0x73] == 0) || (lVar48 = *(long *)(unaff_x19[0x73] + 0x38), lVar48 == 0))
  goto LAB_04caa2e0;
  uVar17 = *unaff_x28;
  if (*(uint *)(lVar48 + 0x18) <= uVar17) goto LAB_04caa4c0;
  lVar51 = (long)(int)uVar17;
  cVar32 = *(char *)(lVar48 + lVar51 * unaff_x24 + 0x54);
  *(undefined1 *)((long)unaff_x19 + 0x461) = 0;
  lVar25 = unaff_x19[0x23];
  if ((uint)uVar28 == uVar17) {
    uVar16 = (uint)((ulong)uVar28 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x654) = 0;
    if (uVar16 == 0x2026) {
      *(long *)(lVar48 + lVar51 * unaff_x24 + 0x30) = unaff_x19[0xcc];
      thunk_FUN_01656ef8();
      puVar10 = PTR_DAT_06e12318;
      if ((unaff_x19[0x73] == 0) || (lVar48 = *(long *)(unaff_x19[0x73] + 0x38), lVar48 == 0))
      goto LAB_04caa2e0;
      if (*(uint *)(lVar48 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
      lVar48 = lVar48 + (int)*in_stack_00000178 * unaff_x24;
      *(undefined4 *)(lVar48 + 0x20) = 0;
      *(long *)(lVar48 + 0x40) = unaff_x19[0xcd];
      thunk_FUN_01656ef8();
      if ((unaff_x19[0x73] == 0) || (lVar48 = *(long *)(unaff_x19[0x73] + 0x38), lVar48 == 0))
      goto LAB_04caa2e0;
      if (*(uint *)(lVar48 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
      *(long *)(lVar48 + (int)*in_stack_00000178 * unaff_x24 + 0x48) = unaff_x19[0xce];
      thunk_FUN_01656ef8();
      if ((*in_stack_00000180 == 0) || (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 == 0))
      goto LAB_04caa2e0;
      if (*(uint *)(lVar48 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
      *(int *)(lVar48 + (int)*in_stack_00000178 * unaff_x24 + 0x50) = (int)unaff_x19[0xcf];
      lVar48 = *(long *)puVar10;
      if (*(int *)(lVar48 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar48 = *(long *)puVar10;
      }
      lVar48 = **(long **)(lVar48 + 0xb8);
      if (lVar48 == 0) goto LAB_04caa2e0;
      if (*(uint *)(lVar48 + 0x18) <= *(uint *)(unaff_x19 + 0xd3)) goto LAB_04caa4c0;
      lVar48 = lVar48 + (long)(int)*(uint *)(unaff_x19 + 0xd3) * 0x38;
      bVar9 = true;
      *(int *)(lVar48 + 0x54) = *(int *)(lVar48 + 0x54) + 1;
      uVar17 = *(uint *)((long)unaff_x19 + 0x49c);
      *(undefined1 *)(unaff_x19 + 100) = 1;
      uVar28 = CONCAT44(3,uVar17 + 1);
    }
    else if (uVar16 == 3) {
      if ((*in_stack_00000170 == 0) || (lVar24 = FUN_04813434(*in_stack_00000170,0), lVar24 == 0))
      goto LAB_04caa2e0;
      uVar23 = FUN_03468e18(lVar24,3,*(undefined8 *)PTR_DAT_06dfe0a0);
      if (*(uint *)(lVar48 + 0x18) <= uVar17) goto LAB_04caa4c0;
      *(undefined8 *)(lVar48 + lVar51 * unaff_x24 + 0x30) = uVar23;
      thunk_FUN_01656ef8();
      uVar17 = *(uint *)((long)unaff_x19 + 0x49c);
      bVar9 = true;
      *(undefined1 *)(unaff_x19 + 100) = 1;
    }
    else {
      bVar9 = true;
    }
  }
  else {
    bVar9 = false;
  }
  unaff_x26 = (long *)PTR_DAT_06e12318;
  iVar18 = (int)unaff_x24;
  unaff_x28 = in_stack_00000178;
  in_stack_0000128c = uVar16;
  if (((int)uVar17 < *(int *)((long)unaff_x19 + 0x354)) && (uVar16 != 3)) {
    if ((*in_stack_00000180 == 0) || (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 == 0))
    goto LAB_04caa2e0;
    if (*(uint *)(lVar48 + 0x18) <= uVar17) goto LAB_04caa4c0;
    lVar48 = lVar48 + (long)(int)uVar17 * (long)iVar18;
    *(undefined1 *)(lVar48 + 400) = 0;
    *(undefined2 *)(lVar48 + 0x24) = 0x200b;
    *(undefined4 *)(lVar48 + 0x5c) = 0;
    *in_stack_00000178 = uVar17 + 1;
    goto LAB_04ca2d40;
  }
  iVar15 = *(int *)((long)unaff_x19 + 0x654);
  fStack00000000000000fc = fVar53;
  if (iVar15 == 0) {
    uVar17 = *(uint *)((long)unaff_x19 + 0x27c);
    if ((uVar17 >> 4 & 1) == 0) {
      if ((uVar17 >> 3 & 1) == 0) {
        if ((uVar17 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar27 = FUN_028ff674(uVar16,0);
          if ((uVar27 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar16 = FUN_028ff948(uVar16,0);
            uVar16 = uVar16 & 0xffff;
            fStack00000000000000fc = fStack000000000000002c;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar27 = FUN_028ff5b8(uVar16,0);
        if ((uVar27 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar16 = FUN_028ffac4(uVar16,0);
          goto LAB_04ca33c4;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar27 = FUN_028ff674(uVar16,0);
      if ((uVar27 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar16 = FUN_028ff948(uVar16,0);
LAB_04ca33c4:
        uVar16 = uVar16 & 0xffff;
      }
    }
    iVar15 = *(int *)((long)unaff_x19 + 0x654);
    in_stack_0000128c = uVar16;
    if (iVar15 != 0) goto LAB_04ca2d6c;
LAB_04ca33d8:
    if ((*in_stack_00000180 == 0) || (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 == 0))
    goto LAB_04caa2e0;
    if (*(uint *)(lVar48 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
    *in_stack_00000160 = *(long *)(lVar48 + (int)*in_stack_00000178 * unaff_x24 + 0x30);
    thunk_FUN_01656ef8(in_stack_00000160);
    unaff_x26 = (long *)PTR_DAT_06e12318;
    if (*in_stack_00000160 == 0) goto LAB_04ca2d40;
    if ((*in_stack_00000180 == 0) || (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 == 0))
    goto LAB_04caa2e0;
    if (*(uint *)(lVar48 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
    *in_stack_00000170 = *(long *)(lVar48 + (int)*in_stack_00000178 * unaff_x24 + 0x40);
    thunk_FUN_01656ef8();
    if ((*in_stack_00000180 == 0) || (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 == 0))
    goto LAB_04caa2e0;
    if (*(uint *)(lVar48 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
    *in_stack_00000130 = *(long *)(lVar48 + (int)*in_stack_00000178 * unaff_x24 + 0x48);
    thunk_FUN_01656ef8();
    if ((*in_stack_00000180 == 0) || (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 == 0))
    goto LAB_04caa2e0;
    uVar17 = *in_stack_00000178;
    uVar16 = *(uint *)(lVar48 + 0x18);
    if (uVar16 <= uVar17) goto LAB_04caa4c0;
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar48 + (int)uVar17 * unaff_x24 + 0x50);
    if (bVar9) {
      lVar25 = unaff_x19[0x90];
      if (lVar25 == 0) goto LAB_04caa2e0;
      if (*(uint *)(lVar25 + 0x18) <= param_3) goto LAB_04caa4c0;
      if ((*(int *)(lVar25 + (long)(int)param_3 * 0x10 + 0x24) != 10) ||
         (uVar17 == *(uint *)(unaff_x19 + 0x94))) goto LAB_04ca34e8;
      if (uVar16 <= uVar17 - 1) goto LAB_04caa4c0;
      if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
      fVar77 = *(float *)(lVar48 + (long)(int)(uVar17 - 1) * (long)iVar18 + 0x58);
      iVar15 = FUN_04ab1930(*in_stack_00000170 + 0x28,0);
      lVar48 = *in_stack_00000170;
    }
    else {
LAB_04ca34e8:
      if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
      fVar77 = *(float *)(unaff_x19 + 0x41);
      iVar15 = FUN_04ab1930(*in_stack_00000170 + 0x28,0);
      lVar48 = unaff_x19[0x1f];
    }
    if (lVar48 == 0) goto LAB_04caa2e0;
    fVar74 = (float)FUN_04ab1938(lVar48 + 0x28,0);
    fVar52 = 0.0;
    fVar57 = fStack00000000000000cc;
    if (*(char *)((long)unaff_x19 + 0x336) != '\0') {
      fVar57 = fVar53;
    }
    fStack0000000000000120 = 0.0;
    if (!(bool)(bVar9 & in_stack_0000128c == 0x2026)) {
      if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
      fStack0000000000000120 = (float)FUN_04ab1960(*in_stack_00000170 + 0x28,0);
      if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
      fVar52 = (float)FUN_04ab1990(*in_stack_00000170 + 0x28,0);
    }
    lVar48 = unaff_x19[0xcb];
    if ((lVar48 == 0) || (*(long *)(lVar48 + 0x20) == 0)) goto LAB_04caa2e0;
    fVar53 = *(float *)((long)unaff_x19 + 0x434);
    fVar54 = *(float *)(lVar48 + 0x2c);
    fVar68 = (float)FUN_04ab1e30(*(long *)(lVar48 + 0x20),0);
    if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
    fVar75 = (float)FUN_04ab1988(*in_stack_00000170 + 0x28,0);
    if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
    fVar58 = *(float *)((long)unaff_x19 + 0x434);
    fVar55 = (float)FUN_04ab1938(*in_stack_00000170 + 0x28,0);
    lVar48 = unaff_x19[0x73];
    if ((lVar48 == 0) || (lVar25 = *(long *)(lVar48 + 0x38), lVar25 == 0)) goto LAB_04caa2e0;
    if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
    lVar25 = lVar25 + (int)*in_stack_00000178 * unaff_x24;
    *(undefined4 *)(lVar25 + 0x20) = 0;
    fVar57 = ((fStack00000000000000fc * fVar77) / (float)iVar15) * fVar74 * fVar57;
    fVar68 = fVar57 * fVar53 * fVar54 * fVar68;
    *(float *)(lVar25 + 0x15c) = fVar68;
    uVar16 = *(uint *)(unaff_x19 + 0x23);
    fVar55 = fVar57 * fVar75 * fVar58 * fVar55;
    if (uVar16 == 0) {
      in_stack_00000158 = *(float *)(unaff_x19 + 0xc5);
    }
    else {
      lVar25 = unaff_x19[0xe3];
      if (lVar25 == 0) goto LAB_04caa2e0;
      if (*(uint *)(lVar25 + 0x18) <= uVar16) goto LAB_04caa4c0;
      lVar25 = *(long *)(lVar25 + (long)(int)uVar16 * 8 + 0x20);
      if (lVar25 == 0) goto LAB_04caa2e0;
      in_stack_00000158 = *(float *)(lVar25 + 0x104);
    }
LAB_04ca3698:
    fVar53 = 1.0;
    fVar77 = 0.0;
    fStack000000000000011c = fVar52;
    if (in_stack_0000128c != 3 && in_stack_0000128c != 0xad) {
      fVar77 = fVar68;
    }
  }
  else {
    if (iVar15 == 0) goto LAB_04ca33d8;
LAB_04ca2d6c:
    if (iVar15 == 1) {
      lVar48 = FUN_04ec8ec8();
      if ((lVar48 != 0) && (lVar48 = *(long *)(lVar48 + 0x38), lVar48 != 0)) {
        if (*in_stack_00000178 < *(uint *)(lVar48 + 0x18)) {
          plVar49 = *(long **)(lVar48 + (int)*in_stack_00000178 * unaff_x24 + 0x30);
          if (plVar49 != (long *)0x0) {
            bVar6 = *(byte *)(*(long *)PTR_DAT_06e1b450 + 300);
            if ((*(byte *)(*plVar49 + 300) < bVar6) ||
               (*(long *)(*(long *)(*plVar49 + 200) + (ulong)bVar6 * 8 + -8) !=
                *(long *)PTR_DAT_06e1b450)) {
                    /* WARNING: Subroutine does not return */
              FUN_0160f170(plVar49);
            }
            plVar34 = (long *)plVar49[3];
            if (plVar34 == (long *)0x0) {
              plVar34 = (long *)0x0;
              *_uStack0000000000000078 = 0;
            }
            else {
              lVar48 = *(long *)PTR_DAT_06df4c20;
              bVar6 = *(byte *)(lVar48 + 300);
              if (*(byte *)(*plVar34 + 300) < bVar6) {
                plVar40 = (long *)0x0;
              }
              else {
                plVar40 = plVar34;
                if (*(long *)(*(long *)(*plVar34 + 200) + (ulong)bVar6 * 8 + -8) != lVar48) {
                  plVar40 = (long *)0x0;
                }
              }
              *_uStack0000000000000078 = (long)plVar40;
              if (*(byte *)(*plVar34 + 300) < bVar6) {
                plVar34 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar34 + 200) + (ulong)bVar6 * 8 + -8) != lVar48) {
                plVar34 = (long *)0x0;
              }
            }
            thunk_FUN_01656ef8(_uStack0000000000000078,plVar34);
            lVar48 = plVar49[5];
            *(int *)((long)unaff_x19 + 0x6b4) = (int)lVar48;
            puVar10 = PTR_DAT_06e12318;
            if (in_stack_0000128c == 0x3c) {
              in_stack_0000128c = (int)lVar48 + 0xe000;
            }
            else {
              lVar48 = *(long *)PTR_DAT_06e12318;
              if (*(int *)(lVar48 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar48 = *(long *)puVar10;
              }
              *(undefined4 *)((long)unaff_x19 + 0x1cc) =
                   *(undefined4 *)(*(long *)(lVar48 + 0xb8) + 0x68);
            }
            if (unaff_x19[0x1f] != 0) {
              fVar68 = *(float *)(unaff_x19 + 0x41);
              memmove(&stack0x000011c0,(void *)(unaff_x19[0x1f] + 0x28),0x60);
              iVar15 = FUN_04ab1930(&stack0x000011c0,0);
              if (*in_stack_00000170 != 0) {
                memmove(&stack0x000011c0,(void *)(*in_stack_00000170 + 0x28),0x60);
                fVar52 = (float)FUN_04ab1938(&stack0x000011c0,0);
                fVar77 = fStack00000000000000cc;
                if (*(char *)((long)unaff_x19 + 0x336) != '\0') {
                  fVar77 = fVar53;
                }
                if (unaff_x19[0xd5] == 0) goto LAB_04caa2e0;
                fVar77 = (fVar68 / (float)iVar15) * fVar52 * fVar77;
                iVar15 = FUN_04ab1930(unaff_x19[0xd5] + 0x28,0);
                fVar68 = *(float *)(unaff_x19 + 0x41);
                if (iVar15 < 1) {
                  if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
                  iVar15 = FUN_04ab1930(*in_stack_00000170 + 0x28,0);
                  if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
                  fVar57 = (float)FUN_04ab1938(*in_stack_00000170 + 0x28,0);
                  fVar52 = fStack00000000000000cc;
                  if (*(char *)((long)unaff_x19 + 0x336) != '\0') {
                    fVar52 = fVar53;
                  }
                  if (unaff_x19[0x1f] == 0) goto LAB_04caa2e0;
                  fVar53 = (float)FUN_04ab1960(unaff_x19[0x1f] + 0x28,0);
                  if (plVar49[4] == 0) goto LAB_04caa2e0;
                  FUN_04ab1df4(&stack0x00001290,plVar49[4],0);
                  fVar74 = (float)FUN_04ab1c24(&stack0x000011a0,0);
                  if (plVar49[4] == 0) goto LAB_04caa2e0;
                  fVar54 = *(float *)((long)plVar49 + 0x2c);
                  fVar75 = (float)FUN_04ab1e30(plVar49[4],0);
                  if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
                  fStack0000000000000120 = (float)FUN_04ab1960(*in_stack_00000170 + 0x28,0);
                  if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
                  fVar58 = (float)FUN_04ab1988(*in_stack_00000170 + 0x28,0);
                  if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
                  fVar69 = *(float *)((long)unaff_x19 + 0x434);
                  fVar55 = (float)FUN_04ab1938(*in_stack_00000170 + 0x28,0);
                  if (unaff_x19[0x1f] == 0) goto LAB_04caa2e0;
                  fVar55 = fVar77 * fVar58 * fVar69 * fVar55;
                  fVar52 = (fVar68 / (float)iVar15) * fVar57 * fVar52;
                  fVar68 = fVar52 * (fVar53 / fVar74) * fVar54 * fVar75;
                  fVar52 = fVar52 / fVar68;
                  fStack0000000000000120 = fVar52 * fStack0000000000000120;
                  fVar53 = (float)FUN_04ab1990(unaff_x19[0x1f] + 0x28,0);
                  fVar52 = fVar52 * fVar53;
                }
                else {
                  if (*_uStack0000000000000078 == 0) goto LAB_04caa2e0;
                  iVar15 = FUN_04ab1930(*_uStack0000000000000078 + 0x28,0);
                  if (*_uStack0000000000000078 == 0) goto LAB_04caa2e0;
                  fVar52 = (float)FUN_04ab1938(*_uStack0000000000000078 + 0x28,0);
                  if (plVar49[4] == 0) goto LAB_04caa2e0;
                  fVar74 = *(float *)((long)plVar49 + 0x2c);
                  fVar57 = fStack00000000000000cc;
                  if (*(char *)((long)unaff_x19 + 0x336) != '\0') {
                    fVar57 = fVar53;
                  }
                  fVar53 = (float)FUN_04ab1e30(plVar49[4],0);
                  if (unaff_x19[0xd5] == 0) goto LAB_04caa2e0;
                  fStack0000000000000120 = (float)FUN_04ab1960(unaff_x19[0xd5] + 0x28,0);
                  if (*_uStack0000000000000078 == 0) goto LAB_04caa2e0;
                  fVar54 = (float)FUN_04ab1988(*_uStack0000000000000078 + 0x28,0);
                  if (*_uStack0000000000000078 == 0) goto LAB_04caa2e0;
                  fVar75 = *(float *)((long)unaff_x19 + 0x434);
                  fVar55 = (float)FUN_04ab1938(*_uStack0000000000000078 + 0x28,0);
                  if (unaff_x19[0xd5] == 0) goto LAB_04caa2e0;
                  fVar55 = fVar77 * fVar54 * fVar75 * fVar55;
                  fVar68 = (fVar68 / (float)iVar15) * fVar52 * fVar57 * fVar74 * fVar53;
                  fVar52 = (float)FUN_04ab1990(unaff_x19[0xd5] + 0x28,0);
                }
                *in_stack_00000160 = (long)plVar49;
                thunk_FUN_01656ef8(in_stack_00000160,plVar49);
                if ((*in_stack_00000180 != 0) &&
                   (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 != 0)) {
                  if (*in_stack_00000178 < *(uint *)(lVar48 + 0x18)) {
                    lVar48 = lVar48 + (int)*in_stack_00000178 * unaff_x24;
                    *(undefined4 *)(lVar48 + 0x20) = 1;
                    *(float *)(lVar48 + 0x15c) = fVar68;
                    *(long *)(lVar48 + 0x40) = *in_stack_00000170;
                    thunk_FUN_01656ef8();
                    lVar48 = *in_stack_00000180;
                    if ((lVar48 != 0) && (lVar51 = *(long *)(lVar48 + 0x38), lVar51 != 0)) {
                      if (*in_stack_00000178 < *(uint *)(lVar51 + 0x18)) {
                        in_stack_00000158 = 0.0;
                        *(int *)(lVar51 + (int)*in_stack_00000178 * unaff_x24 + 0x50) =
                             (int)unaff_x19[0x23];
                        *(int *)(unaff_x19 + 0x23) = (int)lVar25;
                        goto LAB_04ca3698;
                      }
                      goto LAB_04caa4c0;
                    }
                    goto LAB_04caa2e0;
                  }
                  goto LAB_04caa4c0;
                }
              }
            }
          }
          goto LAB_04caa2e0;
        }
        goto LAB_04caa4c0;
      }
      goto LAB_04caa2e0;
    }
    lVar48 = *in_stack_00000180;
    fVar55 = 0.0;
    fVar77 = 0.0;
    if (in_stack_0000128c != 3 && in_stack_0000128c != 0xad) {
      fVar77 = fVar68;
    }
    if (lVar48 == 0) goto LAB_04caa2e0;
    fStack0000000000000120 = 0.0;
    fStack000000000000011c = 0.0;
  }
  lVar48 = *(long *)(lVar48 + 0x38);
  if (lVar48 == 0) goto LAB_04caa2e0;
  if (*(uint *)(lVar48 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
  lVar48 = lVar48 + (int)*in_stack_00000178 * unaff_x24;
  *(short *)(lVar48 + 0x24) = (short)in_stack_0000128c;
  *(int *)(lVar48 + 0x58) = (int)unaff_x19[0x41];
  *(int *)(lVar48 + 0x160) = (int)unaff_x19[0x9f];
  if ((unaff_x19[0x73] == 0) || (lVar48 = *(long *)(unaff_x19[0x73] + 0x38), lVar48 == 0))
  goto LAB_04caa2e0;
  if (*(uint *)(lVar48 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
  *(int *)(lVar48 + (int)*in_stack_00000178 * unaff_x24 + 0x164) = (int)unaff_x19[0x2a];
  if ((unaff_x19[0x73] == 0) || (lVar48 = *(long *)(unaff_x19[0x73] + 0x38), lVar48 == 0))
  goto LAB_04caa2e0;
  if (*(uint *)(lVar48 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
  *(undefined4 *)(lVar48 + (int)*in_stack_00000178 * unaff_x24 + 0x16c) =
       *(undefined4 *)((long)unaff_x19 + 0x154);
  if ((unaff_x19[0x73] == 0) || (lVar48 = *(long *)(unaff_x19[0x73] + 0x38), lVar48 == 0))
  goto LAB_04caa2e0;
  uVar67 = *(undefined4 *)(_fStack00000000000000a0 + 2);
  dVar63 = _fStack00000000000000a0[1];
  in_stack_00001290 = *_fStack00000000000000a0;
  if (*(uint *)(lVar48 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
  lVar48 = lVar48 + (int)*in_stack_00000178 * unaff_x24;
  *(undefined4 *)(lVar48 + 0x188) = uVar67;
  *(double *)(lVar48 + 0x180) = dVar63;
  *(double *)(lVar48 + 0x178) = in_stack_00001290;
  if ((*in_stack_00000180 == 0) || (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 == 0))
  goto LAB_04caa2e0;
  if (*(uint *)(lVar48 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
  lVar48 = lVar48 + (int)*in_stack_00000178 * unaff_x24;
  lVar25 = *(long *)(lVar48 + 0x38);
  *(undefined4 *)(lVar48 + 0x18c) = *(undefined4 *)((long)unaff_x19 + 0x27c);
  if ((lVar25 == 0) &&
     ((*in_stack_00000160 == 0 || (lVar25 = *(long *)(*in_stack_00000160 + 0x20), lVar25 == 0))))
  goto LAB_04caa2e0;
  FUN_04ab1df4(&stack0x00001290,lVar25,0);
  unaff_x23[1] = dVar63;
  *unaff_x23 = in_stack_00001290;
  if (in_stack_0000128c >> 0x10 == 0) {
    if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar16 = FUN_028fcbcc(in_stack_0000128c,0);
    uVar16 = uVar16 & 1;
  }
  else {
    uVar16 = 0;
  }
  uVar56 = 0;
  fStack00000000000000f4 = *(float *)(unaff_x19 + 0x59);
  if (((in_stack_000000a8 & 1) != 0) && (*(int *)((long)unaff_x19 + 0x654) == 0)) {
    if (*in_stack_00000160 == 0) goto LAB_04caa2e0;
    uVar17 = *in_stack_00000178;
    uVar50 = *(uint *)(*in_stack_00000160 + 0x28);
    if ((int)uVar17 < (int)in_stack_00000058._4_4_) {
      lVar48 = FUN_04ec8ec8();
      if ((lVar48 == 0) || (lVar48 = *(long *)(lVar48 + 0x38), lVar48 == 0)) goto LAB_04caa2e0;
      uVar17 = *in_stack_00000178 + 1;
      if (*(uint *)(lVar48 + 0x18) <= uVar17) goto LAB_04caa4c0;
      if (*(int *)(lVar48 + (int)uVar17 * unaff_x24 + 0x20) == 0) {
        if ((*in_stack_00000180 == 0) ||
           (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 == 0)) goto LAB_04caa2e0;
        if (*(uint *)(lVar48 + 0x18) <= uVar17) goto LAB_04caa4c0;
        lVar48 = *(long *)(lVar48 + (int)uVar17 * unaff_x24 + 0x30);
        if ((((lVar48 == 0) || (*in_stack_00000170 == 0)) ||
            (lVar25 = *(long *)(*in_stack_00000170 + 0x178), lVar25 == 0)) ||
           (lVar25 = *(long *)(lVar25 + 0x40), lVar25 == 0)) goto LAB_04caa2e0;
        uVar27 = FUN_02fc4850(lVar25,uVar50 | *(int *)(lVar48 + 0x28) << 0x10,&stack0x00001170,
                              *(undefined8 *)PTR_DAT_06e62e58);
        if ((uVar27 & 1) != 0) {
          FUN_04ab4d7c(&stack0x00001290,&stack0x00001170,0);
          unaff_x23[0x17b] = dVar63;
          unaff_x23[0x17a] = in_stack_00001290;
          uVar56 = FUN_04ab4bd0(&stack0x00001150,0);
          uVar27 = FUN_04ab4db8(&stack0x00001170,0);
          if ((uVar27 & 0x100) != 0) {
            fStack00000000000000f4 = 0.0;
          }
        }
      }
      uVar17 = *in_stack_00000178;
    }
    if (0 < (int)uVar17) {
      if ((*in_stack_00000180 == 0) || (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 == 0))
      goto LAB_04caa2e0;
      if (*(uint *)(lVar48 + 0x18) <= (uint)((long)(int)uVar17 + -1)) goto LAB_04caa4c0;
      lVar48 = *(long *)(lVar48 + ((long)(int)uVar17 + -1) * unaff_x24 + 0x30);
      if (lVar48 == 0) goto LAB_04caa2e0;
      uVar17 = *(uint *)(lVar48 + 0x28);
      lVar48 = FUN_04ec8ec8();
      if ((lVar48 == 0) || (lVar48 = *(long *)(lVar48 + 0x38), lVar48 == 0)) goto LAB_04caa2e0;
      if (*(uint *)(lVar48 + 0x18) <= *in_stack_00000178 - 1) goto LAB_04caa4c0;
      if (*(int *)(lVar48 + (long)(int)(*in_stack_00000178 - 1) * (long)iVar18 + 0x20) == 0) {
        if (((*in_stack_00000170 == 0) ||
            (lVar48 = *(long *)(*in_stack_00000170 + 0x178), lVar48 == 0)) ||
           (lVar48 = *(long *)(lVar48 + 0x40), lVar48 == 0)) goto LAB_04caa2e0;
        uVar27 = FUN_02fc4850(lVar48,uVar17 | uVar50 << 0x10,&stack0x00001170,
                              *(undefined8 *)PTR_DAT_06e62e58);
        if ((uVar27 & 1) != 0) {
          FUN_04ab4da4(&stack0x00001290,&stack0x00001170,0);
          unaff_x23[0x17b] = dVar63;
          unaff_x23[0x17a] = in_stack_00001290;
          FUN_04ab4bd0(&stack0x00001150,0);
          FUN_04ab4a30(uVar56,0);
          uVar27 = FUN_04ab4db8(&stack0x00001170,0);
          if ((uVar27 & 0x100) != 0) {
            fStack00000000000000f4 = 0.0;
          }
        }
      }
    }
  }
  if ((*in_stack_00000180 == 0) || (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 == 0))
  goto LAB_04caa2e0;
  uVar17 = *in_stack_00000178;
  uVar56 = FUN_04ab4a0c(&stack0x00001230,0);
  if (*(uint *)(lVar48 + 0x18) <= uVar17) goto LAB_04caa4c0;
  *(undefined4 *)(lVar48 + (int)uVar17 * unaff_x24 + 0x154) = uVar56;
  if (*(int *)(*(long *)PTR_DAT_06e23ec0 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar27 = FUN_051fbaac(in_stack_0000128c,0);
  uVar17 = *in_stack_00000178;
  if ((uVar27 & 1) == 0) {
    if (0 < (int)uVar17) {
      if ((((uVar29 & 0x100000000) == 0) ||
          (uVar50 = *(uint *)((long)unaff_x19 + 0x324), uVar50 == 0x80000000)) ||
         (uVar50 != uVar17 - 1)) {
        if ((in_stack_00000058 & 1) == 0) {
          bVar12 = false;
        }
        else {
          lVar48 = (int)uVar17 * unaff_x24 + 0x144;
          lVar25 = (long)(int)uVar17;
          do {
            lVar51 = lVar25 + -1;
            if ((lVar25 < 1) ||
               (uVar17 = (int)lVar25 - 1, uVar17 == *(uint *)((long)unaff_x19 + 0x324))) {
              bVar12 = false;
              goto LAB_04ca3e04;
            }
            if ((*in_stack_00000180 == 0) ||
               (lVar25 = *(long *)(*in_stack_00000180 + 0x38), lVar25 == 0)) goto LAB_04caa2e0;
            if (*(uint *)(lVar25 + 0x18) <= uVar17) goto LAB_04caa4c0;
            lVar25 = *(long *)(lVar25 + lVar48 + -0x28c);
            if ((lVar25 == 0) || (lVar25 = *(long *)(lVar25 + 0x20), lVar25 == 0))
            goto LAB_04caa2e0;
            uVar17 = FUN_04ab1de4(lVar25,0);
            if ((*in_stack_00000160 == 0) ||
               (((*in_stack_00000170 == 0 ||
                 (lVar25 = *(long *)(*in_stack_00000170 + 0x178), lVar25 == 0)) ||
                (lVar25 = *(long *)(lVar25 + 0x50), lVar25 == 0)))) goto LAB_04caa2e0;
            uVar26 = System_Collections_Generic_List<bool>__Exists
                               (lVar25,uVar17 | *(int *)(*in_stack_00000160 + 0x28) << 0x10,
                                &stack0x00001120,*(undefined8 *)PTR_DAT_06e0b230);
            lVar48 = lVar48 + -0x178;
            lVar25 = lVar51;
          } while ((uVar26 & 1) == 0);
          if ((*in_stack_00000180 == 0) ||
             (lVar25 = *(long *)(*in_stack_00000180 + 0x38), lVar25 == 0)) goto LAB_04caa2e0;
          if (*(uint *)(lVar25 + 0x18) <= (uint)lVar51) goto LAB_04caa4c0;
          fVar52 = *(float *)((long)unaff_x19 + 0x4e4);
          fVar57 = *(float *)((long)unaff_x19 + 0x62c);
          fVar74 = *(float *)(lVar25 + lVar48);
          FUN_04ab49f4(((((float *)(lVar25 + lVar48))[-3] - *(float *)(unaff_x19 + 0xca)) / fVar77 +
                       in_stack_00001124) - in_stack_00001130,&stack0x00001230,0);
          FUN_04ab4a04(((fVar74 - ((fVar55 - fVar52) + fVar57)) / fVar77 + in_stack_00001128) -
                       in_stack_00001134,&stack0x00001230,0);
          fStack00000000000000f4 = 0.0;
          bVar12 = true;
        }
LAB_04ca3e04:
        if ((uVar29 & 0x100000000) != 0) {
          uVar17 = *(uint *)((long)unaff_x19 + 0x324);
          if (!bVar12 && (long)(int)uVar17 != -0x80000000) {
            if ((*in_stack_00000180 == 0) ||
               (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 == 0)) goto LAB_04caa2e0;
            if (*(uint *)(lVar48 + 0x18) <= uVar17) goto LAB_04caa4c0;
            lVar48 = *(long *)(lVar48 + (int)uVar17 * unaff_x24 + 0x30);
            if ((lVar48 == 0) || (lVar48 = *(long *)(lVar48 + 0x20), lVar48 == 0))
            goto LAB_04caa2e0;
            uVar17 = FUN_04ab1de4(lVar48,0);
            if ((*in_stack_00000160 == 0) ||
               (((*in_stack_00000170 == 0 ||
                 (lVar48 = *(long *)(*in_stack_00000170 + 0x178), lVar48 == 0)) ||
                (lVar48 = *(long *)(lVar48 + 0x48), lVar48 == 0)))) goto LAB_04caa2e0;
            uVar26 = FUN_034635a8(lVar48,uVar17 | *(int *)(*in_stack_00000160 + 0x28) << 0x10,
                                  &stack0x00001108,*(undefined8 *)PTR_DAT_06e61380);
            if ((uVar26 & 1) != 0) {
              if ((*in_stack_00000180 != 0) &&
                 (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 != 0)) {
                if (*(uint *)((long)unaff_x19 + 0x324) < *(uint *)(lVar48 + 0x18)) {
                  FUN_04ab49f4((in_stack_0000110c +
                               (*(float *)(lVar48 + (int)*(uint *)((long)unaff_x19 + 0x324) *
                                                    unaff_x24 + 0x138) -
                               *(float *)(unaff_x19 + 0xca)) / fVar77) - in_stack_00001118,
                               &stack0x00001230,0);
                  fVar52 = in_stack_0000111c;
                  fVar57 = in_stack_00001110;
                  goto LAB_04ca3f08;
                }
                goto LAB_04caa4c0;
              }
              goto LAB_04caa2e0;
            }
          }
        }
      }
      else {
        if ((*in_stack_00000180 == 0) ||
           (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 == 0)) goto LAB_04caa2e0;
        if (*(uint *)(lVar48 + 0x18) <= uVar50) goto LAB_04caa4c0;
        lVar48 = *(long *)(lVar48 + (int)uVar50 * unaff_x24 + 0x30);
        if ((lVar48 == 0) || (lVar48 = *(long *)(lVar48 + 0x20), lVar48 == 0)) goto LAB_04caa2e0;
        uVar17 = FUN_04ab1de4(lVar48,0);
        if ((*in_stack_00000160 == 0) ||
           (((*in_stack_00000170 == 0 ||
             (lVar48 = *(long *)(*in_stack_00000170 + 0x178), lVar48 == 0)) ||
            (lVar48 = *(long *)(lVar48 + 0x48), lVar48 == 0)))) goto LAB_04caa2e0;
        uVar26 = FUN_034635a8(lVar48,uVar17 | *(int *)(*in_stack_00000160 + 0x28) << 0x10,
                              &stack0x00001138,*(undefined8 *)PTR_DAT_06e61380);
        if ((uVar26 & 1) != 0) {
          if ((*in_stack_00000180 == 0) ||
             (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 == 0)) goto LAB_04caa2e0;
          if (*(uint *)(lVar48 + 0x18) <= *(uint *)((long)unaff_x19 + 0x324)) goto LAB_04caa4c0;
          FUN_04ab49f4((in_stack_0000113c +
                       (*(float *)(lVar48 + (int)*(uint *)((long)unaff_x19 + 0x324) * unaff_x24 +
                                  0x138) - *(float *)(unaff_x19 + 0xca)) / fVar77) -
                       in_stack_00001148,&stack0x00001230,0);
          fVar52 = in_stack_0000114c;
          fVar57 = in_stack_00001140;
LAB_04ca3f08:
          FUN_04ab4a04(fVar57 - fVar52,&stack0x00001230,0);
          fStack00000000000000f4 = 0.0;
        }
      }
    }
  }
  else {
    *(uint *)((long)unaff_x19 + 0x324) = uVar17;
  }
  fVar52 = (float)FUN_04ab49fc(&stack0x00001230,0);
  fVar57 = (float)FUN_04ab49fc(&stack0x00001230,0);
  if ((char)unaff_x19[0x1d] != '\0') {
    fVar54 = *(float *)(unaff_x19 + 0xca);
    fVar74 = (float)FUN_04ab1c3c(&stack0x00001240,0);
    fVar54 = fVar54 - fVar77 * fVar74 * (fVar53 - *(float *)(unaff_x19 + 0x5f));
    *(float *)(unaff_x19 + 0xca) = fVar54;
    if ((uVar16 != 0) || (in_stack_0000128c == 0x200b)) {
      *(float *)(unaff_x19 + 0xca) = fVar54 - in_stack_000000f0 * *(float *)(unaff_x19 + 0x5b);
    }
  }
  fVar54 = *(float *)(unaff_x19 + 0x5a);
  fVar74 = 0.0;
  if (fVar54 != 0.0) {
    if (((*(char *)((long)unaff_x19 + 0x2d4) == '\0') || (0x3a < in_stack_0000128c)) ||
       (fVar74 = 0.25, (1L << ((ulong)in_stack_0000128c & 0x3f) & 0x400500000000000U) == 0)) {
      fVar74 = 0.5;
    }
    fVar75 = (float)FUN_04ab1c1c(&stack0x00001240,0);
    fVar58 = (float)FUN_04ab1c2c(&stack0x00001240,0);
    fVar74 = (fVar53 - *(float *)(unaff_x19 + 0x5f)) *
             (fVar54 * fVar74 - fVar77 * (fVar75 * 0.5 + fVar58));
    *(float *)(unaff_x19 + 0xca) = fVar74 + *(float *)(unaff_x19 + 0xca);
  }
  if (((cVar32 == '\0') && (*(int *)((long)unaff_x19 + 0x654) == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x27c) & 1) != 0)) {
    lVar48 = *in_stack_00000130;
    if (*(int *)(*(long *)PTR_DAT_06d9fd78 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar26 = FUN_051d2ac0(lVar48,0,0);
    fVar75 = 0.0;
    if ((uVar26 & 1) != 0) {
      lVar48 = *in_stack_00000130;
      if (*(int *)(*(long *)PTR_DAT_06db55e8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      plVar49 = (long *)PTR_DAT_06db55e8;
      if (lVar48 == 0) goto LAB_04caa2e0;
      uVar26 = FUN_04887e40(lVar48,*(undefined4 *)
                                    (*(long *)(*(long *)PTR_DAT_06db55e8 + 0xb8) + 0x6c),0);
      if ((uVar26 & 1) != 0) {
        lVar48 = *in_stack_00000130;
        if (*(int *)(*plVar49 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          plVar49 = (long *)PTR_DAT_06db55e8;
        }
        if (lVar48 == 0) goto LAB_04caa2e0;
        fVar54 = (float)FUN_0488be70(lVar48,*(undefined4 *)(*(long *)(*plVar49 + 0xb8) + 0x6c),0);
        if ((*in_stack_00000170 == 0) || (*in_stack_00000130 == 0)) goto LAB_04caa2e0;
        fVar58 = *(float *)(*in_stack_00000170 + 0x1a8);
        fVar75 = (float)FUN_0488be70(*in_stack_00000130,
                                     *(undefined4 *)
                                      (*(long *)(*(long *)PTR_DAT_06db55e8 + 0xb8) + 0xe4),0);
        fVar75 = fVar75 * fVar54 * fVar58 * 0.25;
        if (fVar54 < in_stack_00000158 + fVar75) {
          in_stack_00000158 = fVar54 - fVar75;
        }
      }
    }
    if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
    fStack00000000000000ec = *(float *)(*in_stack_00000170 + 0x1ac);
  }
  else {
    lVar48 = *in_stack_00000130;
    if (*(int *)(*(long *)PTR_DAT_06d9fd78 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar26 = FUN_051d2ac0(lVar48,0,0);
    fStack00000000000000ec = 0.0;
    if ((uVar26 & 1) != 0) {
      lVar48 = *in_stack_00000130;
      if (*(int *)(*(long *)PTR_DAT_06db55e8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      plVar49 = (long *)PTR_DAT_06db55e8;
      if (lVar48 == 0) goto LAB_04caa2e0;
      uVar26 = FUN_04887e40(lVar48,*(undefined4 *)
                                    (*(long *)(*(long *)PTR_DAT_06db55e8 + 0xb8) + 0x6c),0);
      if ((uVar26 & 1) != 0) {
        lVar48 = *in_stack_00000130;
        if (*(int *)(*plVar49 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          plVar49 = (long *)PTR_DAT_06db55e8;
        }
        if (lVar48 == 0) goto LAB_04caa2e0;
        uVar26 = FUN_04887e40(lVar48,*(undefined4 *)(*(long *)(*plVar49 + 0xb8) + 0xe4),0);
        if ((uVar26 & 1) != 0) {
          lVar48 = *in_stack_00000130;
          if (*(int *)(*plVar49 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            plVar49 = (long *)PTR_DAT_06db55e8;
          }
          if (lVar48 != 0) {
            fVar54 = (float)FUN_0488be70(lVar48,*(undefined4 *)(*(long *)(*plVar49 + 0xb8) + 0x6c),0
                                        );
            if ((*in_stack_00000170 != 0) && (*in_stack_00000130 != 0)) {
              fVar58 = *(float *)(*in_stack_00000170 + 0x1a0);
              fVar75 = (float)FUN_0488be70(*in_stack_00000130,
                                           *(undefined4 *)
                                            (*(long *)(*(long *)PTR_DAT_06db55e8 + 0xb8) + 0xe4),0);
              fVar75 = fVar75 * fVar54 * fVar58 * 0.25;
              if (fVar54 < in_stack_00000158 + fVar75) {
                in_stack_00000158 = fVar54 - fVar75;
              }
              goto LAB_04ca432c;
            }
          }
          goto LAB_04caa2e0;
        }
      }
    }
    fVar75 = 0.0;
  }
LAB_04ca432c:
  fVar69 = *(float *)(unaff_x19 + 0xca);
  fVar54 = (float)FUN_04ab1c2c(&stack0x00001240,0);
  fVar71 = *(float *)((long)unaff_x19 + 0x474);
  fVar58 = (float)FUN_04ab49ec(&stack0x00001230,0);
  fVar69 = fVar69 + (fVar53 - *(float *)(unaff_x19 + 0x5f)) *
                    fVar77 * (fVar58 + ((fVar54 * fVar71 - in_stack_00000158) - fVar75));
  fVar54 = (float)FUN_04ab1c34(&stack0x00001240,0);
  fVar58 = (float)FUN_04ab49fc(&stack0x00001230,0);
  fVar71 = *(float *)((long)unaff_x19 + 0x62c) +
           ((fVar55 + fVar77 * (in_stack_00000158 + fVar54 + fVar58)) -
           *(float *)((long)unaff_x19 + 0x4e4));
  fVar54 = (float)FUN_04ab1c24(&stack0x00001240,0);
  fVar80 = fVar71 - fVar77 * (in_stack_00000158 + in_stack_00000158 + fVar54);
  fVar54 = (float)FUN_04ab1c1c(&stack0x00001240,0);
  fVar58 = fVar69 + (fVar53 - *(float *)(unaff_x19 + 0x5f)) *
                    fVar77 * (fVar75 + fVar75 +
                             in_stack_00000158 + in_stack_00000158 +
                             fVar54 * *(float *)((long)unaff_x19 + 0x474));
  fVar53 = fVar69;
  fVar54 = fVar58;
  if (((*(int *)((long)unaff_x19 + 0x654) == 0) && (cVar32 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x27c) >> 1 & 1) != 0)) {
    if (unaff_x19[0x1f] == 0) goto LAB_04caa2e0;
    lVar48 = unaff_x19[0xc0];
    fVar53 = (float)FUN_04ab1968(unaff_x19[0x1f] + 0x28,0);
    if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
    fVar54 = (float)FUN_04ab1988(*in_stack_00000170 + 0x28,0);
    if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
    fVar59 = *(float *)((long)unaff_x19 + 0x434);
    fVar79 = *(float *)((long)unaff_x19 + 0x62c);
    fVar64 = (float)(int)lVar48 * fStack0000000000000060;
    fVar60 = (float)FUN_04ab1938(*in_stack_00000170 + 0x28,0);
    fVar60 = fVar60 * fVar59 * (fVar53 - (fVar54 + fVar79)) * 0.5;
    fVar53 = (float)FUN_04ab1c34(&stack0x00001240,0);
    fVar53 = fVar64 * fVar77 * ((fVar75 + in_stack_00000158 + fVar53) - fVar60);
    fVar59 = (float)FUN_04ab1c34(&stack0x00001240,0);
    fVar79 = (float)FUN_04ab1c24(&stack0x00001240,0);
    fVar71 = fVar71 + 0.0;
    fVar80 = fVar80 + 0.0;
    fVar54 = fVar58 + fVar53;
    fVar53 = fVar69 + fVar53;
    fVar64 = fVar64 * fVar77 * ((((fVar59 - fVar79) - in_stack_00000158) - fVar75) - fVar60);
    fVar69 = fVar69 + fVar64;
    fVar58 = fVar58 + fVar64;
  }
  uVar23 = *(undefined8 *)(in_stack_00000140 + 0x198);
  uVar73 = *(undefined8 *)(in_stack_00000140 + 0x1a0);
  if (DAT_0722a13f == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06e3d060);
    DAT_0722a13f = '\x01';
  }
  uVar61 = **(undefined8 **)(*(long *)PTR_DAT_06e3d060 + 0xb8);
  uVar65 = (*(undefined8 **)(*(long *)PTR_DAT_06e3d060 + 0xb8))[1];
  fVar59 = 0.0;
  if (DAT_0534c368 <
      (float)((ulong)uVar73 >> 0x20) * (float)((ulong)uVar65 >> 0x20) +
      (float)uVar73 * (float)uVar65 +
      (float)uVar23 * (float)uVar61 +
      (float)((ulong)uVar23 >> 0x20) * (float)((ulong)uVar61 >> 0x20)) {
    fVar72 = 0.0;
    fVar76 = 0.0;
    fVar64 = 0.0;
    fVar60 = fVar80;
    fVar79 = fVar71;
  }
  else {
    FUN_051e8150(&stack0x00001290,*(undefined4 *)((long)unaff_x19 + 0x464),(int)unaff_x19[0x8d],
                 *(undefined4 *)((long)unaff_x19 + 0x46c),(int)unaff_x19[0x8e],0);
    fVar78 = (fVar80 + fVar71) * 0.5;
    fVar70 = (fVar54 + fVar69) * 0.5;
    fVar71 = fVar71 - fVar78;
    unaff_x23[0x169] = dVar63;
    unaff_x23[0x168] = in_stack_00001290;
    unaff_x23[0x16b] = in_stack_000012a8;
    unaff_x23[0x16a] = (double)CONCAT44(in_stack_000012a4,uVar67);
    fVar64 = 0.0;
    unaff_x23[0x16d] = in_stack_000012b8;
    unaff_x23[0x16c] = in_stack_000012b0;
    unaff_x23[0x16f] = in_stack_000012c8;
    unaff_x23[0x16e] = in_stack_000012c0;
    fVar79 = fVar71;
    fVar53 = (float)FUN_051e8050(fVar53 - fVar70,&stack0x000010c0,0);
    fVar53 = fVar70 + fVar53;
    fVar64 = fVar64 + 0.0;
    fVar80 = fVar80 - fVar78;
    fVar76 = 0.0;
    fVar60 = fVar80;
    fVar69 = (float)FUN_051e8050(fVar69 - fVar70,&stack0x000010c0,0);
    fVar69 = fVar70 + fVar69;
    fVar76 = fVar76 + 0.0;
    fVar72 = 0.0;
    fVar54 = (float)FUN_051e8050(fVar54 - fVar70,&stack0x000010c0,0);
    fVar54 = fVar70 + fVar54;
    fVar71 = fVar78 + fVar71;
    fVar72 = fVar72 + 0.0;
    fVar59 = 0.0;
    fVar58 = (float)FUN_051e8050(fVar58 - fVar70,&stack0x000010c0,0);
    fVar58 = fVar70 + fVar58;
    fVar59 = fVar59 + 0.0;
    fVar80 = fVar78 + fVar80;
    fVar60 = fVar78 + fVar60;
    fVar79 = fVar78 + fVar79;
  }
  if ((*in_stack_00000180 == 0) || (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 == 0))
  goto LAB_04caa2e0;
  if (*(uint *)(lVar48 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
  lVar48 = lVar48 + (int)*in_stack_00000178 * unaff_x24;
  *(float *)(lVar48 + 0x114) = fVar69;
  *(float *)(lVar48 + 0x118) = fVar60;
  *(float *)(lVar48 + 0x11c) = fVar76;
  if (*in_stack_00000180 == 0) goto LAB_04caa2e0;
  lVar48 = *(long *)(*in_stack_00000180 + 0x38);
  unaff_d14 = (ulong)(uint)fVar77;
  if (lVar48 == 0) goto LAB_04caa2e0;
  if (*(uint *)(lVar48 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
  lVar48 = lVar48 + (int)*in_stack_00000178 * unaff_x24;
  *(float *)(lVar48 + 0x108) = fVar53;
  *(float *)(lVar48 + 0x10c) = fVar79;
  *(float *)(lVar48 + 0x110) = fVar64;
  if ((*in_stack_00000180 == 0) || (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 == 0))
  goto LAB_04caa2e0;
  if (*(uint *)(lVar48 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
  lVar48 = lVar48 + (int)*in_stack_00000178 * unaff_x24;
  *(float *)(lVar48 + 0x124) = fVar71;
  *(float *)(lVar48 + 0x128) = fVar72;
  *(float *)(lVar48 + 0x120) = fVar54;
  if ((*in_stack_00000180 == 0) || (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 == 0))
  goto LAB_04caa2e0;
  if (*(uint *)(lVar48 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
  lVar48 = lVar48 + (int)*in_stack_00000178 * unaff_x24;
  *(float *)(lVar48 + 300) = fVar58;
  *(float *)(lVar48 + 0x130) = fVar80;
  *(float *)(lVar48 + 0x134) = fVar59;
  if (*in_stack_00000180 == 0) goto LAB_04caa2e0;
  lVar48 = *(long *)(*in_stack_00000180 + 0x38);
  unaff_s15 = 1.0;
  fVar53 = 1.0;
  if (lVar48 == 0) goto LAB_04caa2e0;
  uVar17 = *in_stack_00000178;
  fVar71 = *(float *)(unaff_x19 + 0xca);
  fVar58 = (float)FUN_04ab49ec(&stack0x00001230,0);
  if (*(uint *)(lVar48 + 0x18) <= uVar17) goto LAB_04caa4c0;
  *(float *)(lVar48 + (int)uVar17 * unaff_x24 + 0x138) = fVar71 + fVar77 * fVar58;
  if ((*in_stack_00000180 == 0) || (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 == 0))
  goto LAB_04caa2e0;
  uVar17 = *in_stack_00000178;
  fVar80 = *(float *)((long)unaff_x19 + 0x4e4);
  fVar71 = *(float *)((long)unaff_x19 + 0x62c);
  fVar58 = (float)FUN_04ab49fc(&stack0x00001230,0);
  if (*(uint *)(lVar48 + 0x18) <= uVar17) goto LAB_04caa4c0;
  *(float *)(lVar48 + (int)uVar17 * unaff_x24 + 0x144) =
       (fVar55 - fVar80) + fVar71 + fVar77 * fVar58;
  if ((*in_stack_00000180 == 0) || (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 == 0))
  goto LAB_04caa2e0;
  uVar17 = *in_stack_00000178;
  lVar25 = (long)(int)uVar17;
  if (*(uint *)(lVar48 + 0x18) <= uVar17) goto LAB_04caa4c0;
  *(float *)(lVar48 + lVar25 * unaff_x24 + 0x158) = (fVar54 - fVar69) / (fVar79 - fVar60);
  fVar54 = *(float *)((long)unaff_x19 + 0x62c);
  fVar52 = fVar77 * (fStack0000000000000120 + fVar52);
  if (*(int *)((long)unaff_x19 + 0x654) == 0) {
    fVar52 = fVar52 / fStack00000000000000fc;
    fVar57 = (fVar77 * (fStack000000000000011c + fVar57)) / fStack00000000000000fc;
  }
  else {
    fVar57 = fVar77 * (fStack000000000000011c + fVar57);
  }
  uVar50 = *(uint *)(unaff_x19 + 0x94);
  bVar12 = uVar16 == 0;
  fVar52 = fVar54 + fVar52;
  bVar13 = uVar17 != uVar50;
  if (bVar13 && !bVar12) {
    fVar54 = *(float *)((long)unaff_x19 + 0x4d4);
    lVar48 = lVar48 + lVar25 * unaff_x24;
    *(float *)(lVar48 + 0x14c) = fVar54;
    fVar57 = *(float *)(unaff_x19 + 0x9b);
    *(float *)(lVar48 + 0x150) = fVar57;
    fVar58 = *(float *)((long)unaff_x19 + 0x4e4);
    fVar55 = fVar54 - fVar58;
  }
  else {
    fVar57 = fVar54 + fVar57;
    fVar58 = fVar52;
    fVar55 = fVar57;
    if (fVar54 != 0.0) {
      fVar58 = (fVar52 - fVar54) / *(float *)((long)unaff_x19 + 0x434);
      fVar55 = (fVar57 - fVar54) / *(float *)((long)unaff_x19 + 0x434);
      if (fVar58 <= fVar52) {
        fVar58 = fVar52;
      }
      if (fVar57 <= fVar55) {
        fVar55 = fVar57;
      }
    }
    lVar48 = lVar48 + lVar25 * unaff_x24;
    fVar54 = fVar58;
    if (fVar58 <= *(float *)((long)unaff_x19 + 0x4d4)) {
      fVar54 = *(float *)((long)unaff_x19 + 0x4d4);
    }
    fVar69 = fVar55;
    if (*(float *)(unaff_x19 + 0x9b) <= fVar55) {
      fVar69 = *(float *)(unaff_x19 + 0x9b);
    }
    *(float *)((long)unaff_x19 + 0x4d4) = fVar54;
    *(float *)(unaff_x19 + 0x9b) = fVar69;
    *(float *)(lVar48 + 0x14c) = fVar58;
    *(float *)(lVar48 + 0x150) = fVar55;
    fVar58 = *(float *)((long)unaff_x19 + 0x4e4);
    fVar55 = fVar52 - fVar58;
  }
  param_2 = (ulong)(uint)fVar58;
  *(float *)(lVar48 + 0x140) = fVar55;
  *(float *)((long)unaff_x19 + 0x4cc) = fVar55;
  *(float *)(lVar48 + 0x148) = fVar57 - fVar58;
  *(float *)(unaff_x19 + 0x9a) = fVar57 - fVar58;
  if (((int)unaff_x19[0x96] == 0) || (*(char *)((long)unaff_x19 + 0x36c) != '\0')) {
    if (!bVar13 || bVar12) {
      *(float *)((long)unaff_x19 + 0x4c4) = fVar54;
      if (unaff_x19[0x1f] != 0) {
        fVar57 = *(float *)(unaff_x19 + 0x99);
        fVar54 = (float)FUN_04ab1968(unaff_x19[0x1f] + 0x28,0);
        fStack00000000000000fc = (fVar77 * fVar54) / fStack00000000000000fc;
        param_2 = (ulong)*(uint *)((long)unaff_x19 + 0x4e4);
        if (fVar57 <= fStack00000000000000fc) {
          fVar57 = fStack00000000000000fc;
        }
        *(float *)(unaff_x19 + 0x99) = fVar57;
        goto LAB_04ca4930;
      }
      goto LAB_04caa2e0;
    }
  }
  else {
LAB_04ca4930:
    if ((!bVar13 || bVar12) && (float)param_2 == 0.0) {
      fVar57 = *(float *)(unaff_x19 + 0x98);
      if (*(float *)(unaff_x19 + 0x98) <= fVar52) {
        fVar57 = fVar52;
      }
      *(float *)(unaff_x19 + 0x98) = fVar57;
    }
  }
  lVar48 = *in_stack_00000180;
  if ((lVar48 == 0) || (lVar25 = *(long *)(lVar48 + 0x38), lVar25 == 0)) goto LAB_04caa2e0;
  uVar19 = *in_stack_00000178;
  if (*(uint *)(lVar25 + 0x18) <= uVar19) goto LAB_04caa4c0;
  lVar25 = lVar25 + (int)uVar19 * unaff_x24;
  *(undefined1 *)(lVar25 + 400) = 0;
  uVar33 = *(uint *)(unaff_x19 + 0x53);
  if ((((in_stack_0000128c == 9) ||
       ((uVar16 != 0 || in_stack_0000128c == 0x200b &&
        ((*(uint *)((long)unaff_x19 + 0x2fc) & 0xfffffffe) == 2)))) ||
      ((uVar16 == 0 &&
       (((in_stack_0000128c != 3 && (in_stack_0000128c != 0x200b)) && (in_stack_0000128c != 0xad))))
      )) || ((((uint)(in_stack_0000128c == 0xad) & (uStack0000000000000064 ^ 0xffffffff)) != 0 ||
             (*(int *)((long)unaff_x19 + 0x654) == 1)))) {
    *(undefined1 *)(lVar25 + 400) = 1;
    pfVar37 = _fStack00000000000000b0;
    pfVar39 = _fStack00000000000000c0;
    if (bVar9) {
      lVar48 = *(long *)(lVar48 + 0x50);
      if (lVar48 == 0) goto LAB_04caa2e0;
      if (*(uint *)(lVar48 + 0x18) <= *(uint *)(unaff_x19 + 0x96)) goto LAB_04caa4c0;
      lVar48 = lVar48 + (long)(int)*(uint *)(unaff_x19 + 0x96) * 0x60;
      pfVar39 = (float *)(lVar48 + 100);
      pfVar37 = (float *)(lVar48 + 0x68);
    }
    fVar54 = *pfVar39;
    fVar57 = *pfVar37;
    fVar52 = *(float *)(unaff_x19 + 0x72);
    fVar58 = *(float *)(unaff_x19 + 0xca);
    fStack0000000000000124 = (fStack00000000000000c8 - fVar54) - fVar57;
    bVar13 = true;
    if ((fVar52 <= fStack0000000000000124) && (bVar13 = false, !NAN(fVar52))) {
      bVar13 = fVar52 == -1.0;
    }
    if (!bVar13) {
      fStack0000000000000124 = fVar52;
    }
    fVar52 = 0.0;
    uVar26 = 0;
    if ((char)unaff_x19[0x1d] == '\0') {
      uVar26 = FUN_04ab1c3c(&stack0x00001240,0);
      param_2 = (ulong)*(uint *)((long)unaff_x19 + 0x4e4);
    }
    fVar71 = *(float *)(unaff_x19 + 0x9b);
    fVar55 = *(float *)(unaff_x19 + 0x5f);
    fVar69 = (float)param_2;
    if (in_stack_0000128c != 0xad) {
      fVar68 = fVar77;
    }
    if ((0.0 < fVar69) && (fVar52 = 0.0, (char)unaff_x19[0x5d] == '\0')) {
      fVar52 = *(float *)(in_stack_00000140 + 0x208) - *(float *)(in_stack_00000140 + 0x210);
    }
    fVar52 = (*(float *)((long)unaff_x19 + 0x4c4) - (fVar71 - fVar69)) + fVar52;
    unaff_w22 = *in_stack_00000178;
    if (fStack00000000000000d0 < fVar52) {
      if (*(int *)((long)unaff_x19 + 0x30c) == -1) {
        *(uint *)((long)unaff_x19 + 0x30c) = unaff_w22;
      }
      unaff_x26 = (long *)PTR_DAT_06e12318;
      uVar23 = DAT_053d9ff0;
      if ((char)unaff_x19[0x4b] != '\0') {
        fVar80 = *(float *)((long)unaff_x19 + 0x2ec);
        if (((fVar80 < *(float *)(unaff_x19 + 0x5c)) && (0.0 < fVar69)) &&
           (*(int *)((long)unaff_x19 + 0x264) < (int)unaff_x19[0x4d])) {
          fVar53 = *(float *)(unaff_x19 + 0x5c) +
                   ((in_stack_00000020._4_4_ - fVar52) / (float)(int)unaff_x19[0x96]) /
                   in_stack_00000080._4_4_;
          if (fVar53 <= fVar80) {
            fVar53 = fVar80;
          }
          goto LAB_04caa350;
        }
        fVar69 = *(float *)((long)unaff_x19 + 0x204);
        fVar52 = *(float *)(unaff_x19 + 0x4e);
        param_2 = (ulong)(uint)fVar52;
        if ((fVar52 < fVar69) && (*(int *)((long)unaff_x19 + 0x264) < (int)unaff_x19[0x4d])) {
          fVar53 = (fVar69 - *(float *)(unaff_x19 + 0x4c)) * 0.5;
          if (fVar53 <= DAT_0534c364) {
            fVar53 = DAT_0534c364;
          }
          fVar68 = (fVar69 - fVar53) * 20.0 + 0.5;
          fVar53 = DAT_0537e710;
          if (fVar68 != INFINITY) {
            fVar53 = (float)(int)fVar68 / 20.0;
          }
          if (fVar53 <= fVar52) {
            fVar53 = fVar52;
          }
          *(float *)((long)unaff_x19 + 0x25c) = fVar69;
          goto LAB_04ca717c;
        }
      }
      switch((int)unaff_x19[0x61]) {
      case 1:
        lVar48 = *(long *)PTR_DAT_06e12318;
        if (*(int *)(lVar48 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar48 = *unaff_x26;
        }
        lVar25 = *(long *)(lVar48 + 0xb8);
        if (*(int *)(lVar25 + 0x1708) == 0) {
LAB_04ca5438:
          uVar28 = DAT_053d9ff0;
          in_stack_00000178[0] = 0;
          in_stack_00000178[1] = 0;
          param_3 = 0xffffffff;
        }
        else {
          if (*(int *)(lVar48 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar25 = *(long *)(*unaff_x26 + 0xb8);
          }
          FUN_023a2be0(&stack0x00001290,lVar25 + 0x1338,*(undefined8 *)PTR_DAT_06dc3038);
          memcpy(&stack0x00000d08,&stack0x00001290,0x3b8);
LAB_04ca540c:
          iVar18 = FUN_04ed5dfc();
          param_3 = iVar18 - 1;
          uVar67 = 0x2026;
          unaff_w21 = unaff_w21 + 1;
          uVar16 = *(int *)((long)unaff_x19 + 0x49c) - 1;
          *(uint *)((long)unaff_x19 + 0x49c) = uVar16;
LAB_04ca5544:
          uVar28 = CONCAT44(uVar67,uVar16);
        }
        goto LAB_04ca2d40;
      default:
        goto switchD_04ca4cec_caseD_2;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
LAB_04ca5044:
        param_3 = FUN_04ed5dfc();
        break;
      case 5:
        if ((unaff_w22 == 0) || ((int)param_3 < 0)) {
          *in_stack_00000178 = 0;
          unaff_x26 = (long *)PTR_DAT_06e12318;
          param_3 = 0xffffffff;
          uVar28 = uVar23;
        }
        else {
          fVar68 = *(float *)(in_stack_00000140 + 0x208);
          if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          param_3 = FUN_04ed5dfc();
          unaff_s15 = fVar53;
          if (fStack00000000000000d0 < fVar68 - fVar71) break;
          *(undefined1 *)((long)unaff_x19 + 0x36c) = 1;
          *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x49c);
          uVar23 = NEON_rev64(*(undefined8 *)(*(long *)(*unaff_x26 + 0xb8) + 0x1730),4);
          *(undefined8 *)(in_stack_00000140 + 0x208) = uVar23;
          unaff_x19[0x98] = 0;
          param_2 = 0;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          *(undefined4 *)((long)unaff_x19 + 0x4dc) = 0;
          *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
          *(float *)(unaff_x19 + 0xca) = *(float *)((long)unaff_x19 + 0x43c) + 0.0;
          *(int *)((long)unaff_x19 + 0x4bc) = *(int *)((long)unaff_x19 + 0x4bc) + 1;
        }
        goto LAB_04ca2d40;
      case 6:
        if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        param_3 = FUN_04ed5dfc();
        goto code_r0x04ca508c;
      }
      goto LAB_04ca5148;
    }
switchD_04ca4cec_caseD_2:
    unaff_x26 = (long *)PTR_DAT_06e12318;
    if ((uVar27 & 1) != 0) {
      fVar52 = 1.0 - fVar55;
      param_2 = (ulong)(uint)fVar52;
      fVar58 = ABS(fVar58) + (float)uVar26 * fVar52 * fVar68;
      fVar68 = DAT_0537e70c;
      if ((uVar33 & 0x18) == 0) {
        fVar68 = 1.0;
      }
      uVar26 = (ulong)(uint)(fVar68 * fStack0000000000000124);
      if (fVar58 <= fVar68 * fStack0000000000000124) goto LAB_04ca4e60;
      if (((*(int *)((long)unaff_x19 + 0x2fc) == 0) || (*(int *)((long)unaff_x19 + 0x2fc) == 3)) ||
         (unaff_w22 == *(uint *)(unaff_x19 + 0x94))) {
        if (((char)unaff_x19[0x4b] != '\0') &&
           (*(int *)((long)unaff_x19 + 0x264) < (int)unaff_x19[0x4d])) {
          fVar69 = *(float *)((long)unaff_x19 + 0x2f4) / 100.0;
          if (fVar55 < fVar69) {
            fVar53 = fVar58 / fVar52;
            if (fVar55 <= 0.0) {
              fVar53 = fVar58;
            }
            fVar55 = fVar55 + (fVar58 - fVar68 * (fStack0000000000000124 + DAT_0537e708)) / fVar53;
            goto LAB_04caa444;
          }
          fVar55 = *(float *)((long)unaff_x19 + 0x204);
          param_2 = (ulong)(uint)fVar55;
          fVar52 = *(float *)(unaff_x19 + 0x4e);
          uVar26 = (ulong)(uint)fVar52;
          if (fVar55 <= fVar52) goto LAB_04ca4e10;
LAB_04caa3b8:
          fVar53 = (fVar55 - *(float *)(unaff_x19 + 0x4c)) * 0.5;
          if (fVar53 <= DAT_0534c364) {
            fVar53 = DAT_0534c364;
          }
          *(float *)((long)unaff_x19 + 0x25c) = fVar55;
          fVar68 = (fVar55 - fVar53) * 20.0 + 0.5;
          fVar53 = DAT_0537e710;
          if (fVar68 != INFINITY) {
            fVar53 = (float)(int)fVar68 / 20.0;
          }
          if (fVar53 <= fVar52) {
            fVar53 = fVar52;
          }
LAB_04ca717c:
          *(float *)((long)unaff_x19 + 0x204) = fVar53;
          return;
        }
LAB_04ca4e10:
        iVar15 = (int)unaff_x19[0x61];
        if (iVar15 == 1) {
          lVar48 = *(long *)PTR_DAT_06e12318;
          if (*(int *)(lVar48 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar48 = *unaff_x26;
          }
          lVar25 = *(long *)(lVar48 + 0xb8);
          if (*(int *)(lVar25 + 0x1708) == 0) goto LAB_04ca5438;
          if (*(int *)(lVar48 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar25 = *(long *)(*unaff_x26 + 0xb8);
          }
          FUN_023a2be0(&stack0x00001290,lVar25 + 0x1338,*(undefined8 *)PTR_DAT_06dc3038);
          memcpy(&stack0x00000598,&stack0x00001290,0x3b8);
          goto LAB_04ca540c;
        }
        if (iVar15 != 6) {
          if (iVar15 == 3) {
            if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            goto LAB_04ca5044;
          }
          goto LAB_04ca4e60;
        }
        if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        param_3 = FUN_04ed5dfc();
        lVar48 = unaff_x19[0x62];
        if (*(int *)(*(long *)PTR_DAT_06d9fd78 + 0xe0) == 0) {
          thunk_FUN_016466fc(*(long *)PTR_DAT_06d9fd78);
        }
        uVar27 = FUN_051d2ac0(lVar48,0,0);
        if ((uVar27 & 1) != 0) {
          plVar49 = (long *)unaff_x19[0x62];
          uVar28 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar49 == (long *)0x0) goto LAB_04caa2e0;
          (**(code **)(*plVar49 + 0x558))(plVar49,uVar28,*(undefined8 *)(*plVar49 + 0x560));
          lVar48 = unaff_x19[0x62];
          if (lVar48 == 0) goto LAB_04caa2e0;
          *(int *)(lVar48 + 0x430) = (int)unaff_x19[0x86];
          FUN_04ec8ce4(lVar48,*(undefined4 *)((long)unaff_x19 + 0x49c),0);
          plVar49 = (long *)unaff_x19[0x62];
          if (plVar49 == (long *)0x0) goto LAB_04caa2e0;
          (**(code **)(*plVar49 + 0x7d8))(plVar49,0,0,*(undefined8 *)(*plVar49 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 100) = 1;
        }
        uVar16 = *in_stack_00000178;
        uVar67 = 3;
        goto LAB_04ca5544;
      }
      if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      param_3 = FUN_04ed5dfc();
      if (*(float *)((long)unaff_x19 + 0x2e4) == DAT_0537e704) {
        lVar48 = *in_stack_00000180;
        if ((lVar48 == 0) || (lVar25 = *(long *)(lVar48 + 0x38), lVar25 == 0)) goto LAB_04caa2e0;
        if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
        fVar52 = *(float *)((long)unaff_x19 + 0x4e4);
        fVar55 = 0.0;
        if ((0.0 < fVar52) && (fVar55 = 0.0, (char)unaff_x19[0x5d] == '\0')) {
          fVar55 = *(float *)(in_stack_00000140 + 0x208) - *(float *)(in_stack_00000140 + 0x210);
        }
        fVar55 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2dc) +
                 *(float *)(lVar25 + (int)*in_stack_00000178 * unaff_x24 + 0x14c) +
                 (fVar55 - *(float *)(unaff_x19 + 0x9b)) +
                 in_stack_00000080._4_4_ * (in_stack_00000050._4_4_ + *(float *)(unaff_x19 + 0x5c));
      }
      else {
        lVar48 = unaff_x19[0x73];
        *(undefined1 *)(unaff_x19 + 0x5d) = 1;
        if (lVar48 == 0) goto LAB_04caa2e0;
        fVar52 = *(float *)((long)unaff_x19 + 0x4e4);
        fVar55 = *(float *)((long)unaff_x19 + 0x2e4) +
                 in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2dc);
      }
      puVar10 = PTR_DAT_06e12318;
      lVar48 = *(long *)(lVar48 + 0x38);
      if (lVar48 == 0) goto LAB_04caa2e0;
      uVar19 = *(uint *)((long)unaff_x19 + 0x49c);
      if ((*(uint *)(lVar48 + 0x18) <= uVar19) ||
         (uVar20 = uVar19 - 1, *(uint *)(lVar48 + 0x18) <= uVar20)) goto LAB_04caa4c0;
      fVar55 = fVar55 + *(float *)((long)unaff_x19 + 0x4c4);
      param_2 = (ulong)(uint)fVar55;
      fVar71 = (fVar55 + fVar52) - *(float *)(lVar48 + (int)uVar19 * unaff_x24 + 0x150);
      if (((uStack0000000000000064 & 1) != 0 ||
           *(short *)(lVar48 + (long)(int)uVar20 * (long)iVar18 + 0x24) != 0xad) ||
         ((fStack00000000000000d0 <= fVar71 && ((int)unaff_x19[0x61] != 0)))) {
        if (*(short *)(lVar48 + (int)uVar19 * unaff_x24 + 0x24) != 0xad) {
          if (((uint)in_stack_00000088 & (uint)*(byte *)(unaff_x19 + 0x4b) & 1) != 0) {
            fVar55 = *(float *)(unaff_x19 + 0x5f);
            fVar69 = *(float *)((long)unaff_x19 + 0x2f4) / 100.0;
            if ((fVar69 <= fVar55) || ((int)unaff_x19[0x4d] <= *(int *)((long)unaff_x19 + 0x264))) {
              fVar55 = *(float *)((long)unaff_x19 + 0x204);
              param_2 = (ulong)(uint)fVar55;
              fVar52 = *(float *)(unaff_x19 + 0x4e);
              if ((fVar52 < fVar55) && (*(int *)((long)unaff_x19 + 0x264) < (int)unaff_x19[0x4d]))
              goto LAB_04caa3b8;
              goto LAB_04ca6a40;
            }
LAB_04caa454:
            fVar53 = fVar58;
            if (0.0 < fVar55) {
              fVar53 = fVar58 / (1.0 - fVar55);
            }
            fVar55 = fVar55 + (fVar58 - fVar68 * (fStack0000000000000124 + DAT_0537e708)) / fVar53;
LAB_04caa444:
            if (fVar69 <= fVar55) {
              fVar55 = fVar69;
            }
            *(float *)(unaff_x19 + 0x5f) = fVar55;
            return;
          }
LAB_04ca6a40:
          lVar48 = *(long *)PTR_DAT_06e12318;
          if (*(int *)(lVar48 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar48 = *(long *)puVar10;
          }
          iVar15 = *(int *)(*(long *)(lVar48 + 0xb8) + 0xf80);
          if (((iVar15 != iStack0000000000000028) && (iVar15 != -1)) &&
             ((((uint)in_stack_00000088 ^ 1) & 1) == 0)) {
            if (*(int *)(lVar48 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            param_3 = FUN_04ed5dfc();
            if ((unaff_x19[0x73] == 0) || (lVar48 = *(long *)(unaff_x19[0x73] + 0x38), lVar48 == 0))
            goto LAB_04caa2e0;
            uVar19 = *in_stack_00000178 - 1;
            if (*(uint *)(lVar48 + 0x18) <= uVar19) goto LAB_04caa4c0;
            iStack0000000000000028 = iVar15;
            if (*(short *)(lVar48 + (long)(int)uVar19 * (long)iVar18 + 0x24) == 0xad) {
              uStack0000000000000064 = 0;
              *in_stack_00000178 = uVar19;
              unaff_x26 = (long *)PTR_DAT_06e12318;
              param_3 = param_3 - 1;
              uVar28 = CONCAT44(0x2d,uVar19);
              goto LAB_04ca2d40;
            }
          }
          uVar26 = _fStack00000000000000d0 & 0xffffffff;
          if (fVar71 <= fStack00000000000000d0) {
            param_2 = unaff_d14;
            FUN_04ed690c(in_stack_00000080._4_4_);
            in_stack_00000088 = 1.4013e-45;
            uStack0000000000000064 = 0;
            uStack0000000000000070 = 1;
            unaff_x26 = (long *)PTR_DAT_06e12318;
          }
          else {
            if (*(int *)((long)unaff_x19 + 0x30c) == -1) {
              *(undefined4 *)((long)unaff_x19 + 0x30c) = *(undefined4 *)((long)unaff_x19 + 0x49c);
            }
            if ((char)unaff_x19[0x4b] != '\0') {
              fVar52 = *(float *)((long)unaff_x19 + 0x2ec);
              if ((fVar52 < *(float *)(unaff_x19 + 0x5c)) &&
                 (*(int *)((long)unaff_x19 + 0x264) < (int)unaff_x19[0x4d])) {
                fVar53 = *(float *)(unaff_x19 + 0x5c) +
                         ((in_stack_00000020._4_4_ - fVar71) / (float)((int)unaff_x19[0x96] + 1)) /
                         in_stack_00000080._4_4_;
                if (fVar53 <= fVar52) {
                  fVar53 = fVar52;
                }
LAB_04caa350:
                *(float *)(unaff_x19 + 0x5c) = fVar53;
                return;
              }
              fVar55 = *(float *)(unaff_x19 + 0x5f);
              fVar69 = *(float *)((long)unaff_x19 + 0x2f4) / 100.0;
              if ((fVar55 < fVar69) && (*(int *)((long)unaff_x19 + 0x264) < (int)unaff_x19[0x4d]))
              goto LAB_04caa454;
              fVar55 = *(float *)((long)unaff_x19 + 0x204);
              param_2 = (ulong)(uint)fVar55;
              fVar52 = *(float *)(unaff_x19 + 0x4e);
              uVar26 = (ulong)(uint)fVar52;
              if ((fVar52 < fVar55) && (*(int *)((long)unaff_x19 + 0x264) < (int)unaff_x19[0x4d]))
              goto LAB_04caa3b8;
            }
            switch((int)unaff_x19[0x61]) {
            case 0:
            case 2:
            case 4:
              param_2 = unaff_d14;
              FUN_04ed690c(in_stack_00000080._4_4_);
              goto LAB_04ca6fb0;
            case 1:
              lVar48 = *(long *)PTR_DAT_06e12318;
              if (*(int *)(lVar48 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar48 = *(long *)PTR_DAT_06e12318;
              }
              uVar28 = DAT_053d9ff0;
              lVar25 = *(long *)(lVar48 + 0xb8);
              if (*(int *)(lVar25 + 0x1708) == 0) {
                param_3 = 0xffffffff;
                in_stack_00000178[0] = 0;
                in_stack_00000178[1] = 0;
              }
              else {
                if (*(int *)(lVar48 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                  lVar25 = *(long *)(*(long *)PTR_DAT_06e12318 + 0xb8);
                }
                FUN_023a2be0(&stack0x00001290,lVar25 + 0x1338,*(undefined8 *)PTR_DAT_06dc3038);
                memcpy(&stack0x00000950,&stack0x00001290,0x3b8);
                iVar18 = FUN_04ed5dfc();
                param_3 = iVar18 - 1;
                unaff_w21 = unaff_w21 + 1;
                iVar18 = *(int *)((long)unaff_x19 + 0x49c) + -1;
                *(int *)((long)unaff_x19 + 0x49c) = iVar18;
                uVar28 = CONCAT44(0x2026,iVar18);
              }
              break;
            case 3:
              if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
              param_3 = FUN_04ed5dfc();
              uVar28 = CONCAT44(3,unaff_w22);
              break;
            case 5:
              *(undefined1 *)((long)unaff_x19 + 0x36c) = 1;
              param_2 = unaff_d14;
              FUN_04ed690c(in_stack_00000080._4_4_);
              *(undefined4 *)((long)unaff_x19 + 0x4dc) = 0;
              *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
              unaff_x19[0x98] = 0;
              *(int *)((long)unaff_x19 + 0x4bc) = *(int *)((long)unaff_x19 + 0x4bc) + 1;
LAB_04ca6fb0:
              in_stack_00000088 = 1.4013e-45;
              uStack0000000000000064 = 0;
              uStack0000000000000070 = 1;
              unaff_x26 = (long *)PTR_DAT_06e12318;
              goto LAB_04ca2d40;
            case 6:
              lVar48 = unaff_x19[0x62];
              if (*(int *)(*(long *)PTR_DAT_06d9fd78 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
              uVar27 = FUN_051d2ac0(lVar48,0,0);
              if ((uVar27 & 1) != 0) {
                plVar49 = (long *)unaff_x19[0x62];
                uVar28 = (**(code **)(*unaff_x19 + 0x548))();
                if (plVar49 == (long *)0x0) goto LAB_04caa2e0;
                (**(code **)(*plVar49 + 0x558))(plVar49,uVar28,*(undefined8 *)(*plVar49 + 0x560));
                lVar48 = unaff_x19[0x62];
                if (lVar48 == 0) goto LAB_04caa2e0;
                *(int *)(lVar48 + 0x430) = (int)unaff_x19[0x86];
                FUN_04ec8ce4(lVar48,*(undefined4 *)((long)unaff_x19 + 0x49c),0);
                plVar49 = (long *)unaff_x19[0x62];
                if (plVar49 == (long *)0x0) goto LAB_04caa2e0;
                (**(code **)(*plVar49 + 0x7d8))(plVar49,0,0,*(undefined8 *)(*plVar49 + 0x7e0));
                *(undefined1 *)(unaff_x19 + 100) = 1;
              }
              uVar28 = CONCAT44(3,*in_stack_00000178);
              break;
            default:
              uStack0000000000000064 = 0;
              goto LAB_04ca4e60;
            }
            uStack0000000000000064 = 0;
            unaff_d14 = (ulong)(uint)fVar77;
            fVar53 = 1.0;
            unaff_x26 = (long *)PTR_DAT_06e12318;
          }
          goto LAB_04ca2d40;
        }
        uStack0000000000000064 = 1;
        unaff_x26 = (long *)PTR_DAT_06e12318;
      }
      else {
        uStack0000000000000064 = 0;
        *in_stack_00000178 = uVar20;
        unaff_x26 = (long *)PTR_DAT_06e12318;
        param_3 = param_3 - 1;
        uVar28 = CONCAT44(0x2d,uVar20);
      }
      goto LAB_04ca2d40;
    }
LAB_04ca4e60:
    if (uVar16 == 0) {
      if (in_stack_0000128c != 0xad) {
        if (*(int *)((long)unaff_x19 + 0x654) == 1) {
          (**(code **)(*unaff_x19 + 0x8c8))(uVar26,fVar75);
        }
        else if (*(int *)((long)unaff_x19 + 0x654) == 0) {
          (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000158);
        }
        uVar19 = *in_stack_00000178;
        if ((uStack0000000000000070 & 1) != 0) {
          *(uint *)(in_stack_00000140 + 0x1d8) = uVar19;
        }
        *(uint *)((long)unaff_x19 + 0x4ac) = uVar19;
        *(int *)((long)unaff_x19 + 0x4b4) = *(int *)((long)unaff_x19 + 0x4b4) + 1;
        if ((unaff_x19[0x73] != 0) && (lVar48 = *(long *)(unaff_x19[0x73] + 0x50), lVar48 != 0)) {
          if (*(uint *)(unaff_x19 + 0x96) < *(uint *)(lVar48 + 0x18)) {
            lVar48 = lVar48 + (long)(int)*(uint *)(unaff_x19 + 0x96) * 0x60;
            uStack0000000000000070 = 0;
            *(float *)(lVar48 + 100) = fVar54;
            *(float *)(lVar48 + 0x68) = fVar57;
            goto LAB_04ca5760;
          }
          goto LAB_04caa4c0;
        }
        goto LAB_04caa2e0;
      }
      if ((*in_stack_00000180 == 0) || (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 == 0))
      goto LAB_04caa2e0;
      if (*(uint *)(lVar48 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
      *(undefined1 *)(lVar48 + (int)*in_stack_00000178 * unaff_x24 + 400) = 0;
    }
    else {
      lVar25 = *in_stack_00000180;
      if ((lVar25 == 0) || (lVar48 = *(long *)(lVar25 + 0x38), lVar48 == 0)) goto LAB_04caa2e0;
      uVar19 = *in_stack_00000178;
      if (*(uint *)(lVar48 + 0x18) <= uVar19) goto LAB_04caa4c0;
      *(undefined1 *)(lVar48 + (int)uVar19 * unaff_x24 + 400) = 0;
      *(uint *)((long)unaff_x19 + 0x4ac) = uVar19;
      lVar48 = *(long *)(lVar25 + 0x50);
      if (lVar48 == 0) goto LAB_04caa2e0;
      uVar19 = *(uint *)(lVar48 + 0x18);
      if (uVar19 <= *(uint *)(unaff_x19 + 0x96)) goto LAB_04caa4c0;
      lVar51 = lVar48 + (long)(int)*(uint *)(unaff_x19 + 0x96) * 0x60;
      iVar15 = *(int *)(lVar51 + 0x2c) + 1;
      *(int *)(lVar51 + 0x2c) = iVar15;
      uVar20 = *(uint *)(unaff_x19 + 0x96);
      *(int *)(unaff_x19 + 0x97) = iVar15;
      if (uVar19 <= uVar20) goto LAB_04caa4c0;
      lVar51 = lVar48 + (long)(int)uVar20 * 0x60;
      *(float *)(lVar51 + 100) = fVar54;
      *(float *)(lVar51 + 0x68) = fVar57;
      *(int *)(lVar25 + 0x20) = *(int *)(lVar25 + 0x20) + 1;
      if (in_stack_0000128c == 0xa0) {
        lVar48 = lVar48 + (long)(int)uVar20 * 0x60;
        goto LAB_04ca4f00;
      }
    }
  }
  else {
    if (((in_stack_0000128c & 0xfffffffe) == 10) && ((int)unaff_x19[0x61] == 6)) {
      fVar68 = (float)param_2;
      fVar53 = 0.0;
      if ((0.0 < fVar68) && (fVar53 = 0.0, (char)unaff_x19[0x5d] == '\0')) {
        fVar53 = *(float *)(in_stack_00000140 + 0x208) - *(float *)(in_stack_00000140 + 0x210);
      }
      param_2 = _fStack00000000000000d0 & 0xffffffff;
      if (fStack00000000000000d0 <
          (*(float *)((long)unaff_x19 + 0x4c4) - (*(float *)(unaff_x19 + 0x9b) - fVar68)) + fVar53)
      {
        if (*(int *)((long)unaff_x19 + 0x30c) == -1) {
          *(uint *)((long)unaff_x19 + 0x30c) = uVar19;
        }
        unaff_x26 = (long *)PTR_DAT_06e12318;
        if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        param_3 = FUN_04ed5dfc();
        lVar48 = unaff_x19[0x62];
        if (*(int *)(*(long *)PTR_DAT_06d9fd78 + 0xe0) == 0) {
          thunk_FUN_016466fc(*(long *)PTR_DAT_06d9fd78);
        }
        uVar27 = FUN_051d2ac0(lVar48,0,0);
        if ((uVar27 & 1) != 0) {
          plVar49 = (long *)unaff_x19[0x62];
          uVar28 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar49 == (long *)0x0) goto LAB_04caa2e0;
          (**(code **)(*plVar49 + 0x558))(plVar49,uVar28,*(undefined8 *)(*plVar49 + 0x560));
          lVar48 = unaff_x19[0x62];
          if (lVar48 == 0) goto LAB_04caa2e0;
          *(int *)(lVar48 + 0x430) = (int)unaff_x19[0x86];
          FUN_04ec8ce4(lVar48,*(undefined4 *)((long)unaff_x19 + 0x49c),0);
          plVar49 = (long *)unaff_x19[0x62];
          if (plVar49 == (long *)0x0) goto LAB_04caa2e0;
          (**(code **)(*plVar49 + 0x7d8))(plVar49,0,0,*(undefined8 *)(*plVar49 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 100) = 1;
        }
        fVar53 = unaff_s15;
        uVar28 = CONCAT44(3,uVar19);
        goto LAB_04ca2d40;
      }
    }
    if ((((in_stack_0000128c - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_stack_0000128c - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (in_stack_0000128c - 10 < 2)) || (in_stack_0000128c == 0xa0)) {
LAB_04ca56bc:
      if (((in_stack_0000128c != 0xad) && (in_stack_0000128c != 0x200b)) &&
         (in_stack_0000128c != 0x2060)) {
        lVar48 = *in_stack_00000180;
        if ((lVar48 == 0) || (lVar25 = *(long *)(lVar48 + 0x50), lVar25 == 0)) goto LAB_04caa2e0;
        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x96)) goto LAB_04caa4c0;
        lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x96) * 0x60;
        *(int *)(lVar25 + 0x2c) = *(int *)(lVar25 + 0x2c) + 1;
        *(int *)(lVar48 + 0x20) = *(int *)(lVar48 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar27 = FUN_029007b8(in_stack_0000128c,0);
      if ((uVar27 & 1) != 0) goto LAB_04ca56bc;
    }
    if (in_stack_0000128c == 0xa0) {
      if ((*in_stack_00000180 == 0) || (lVar48 = *(long *)(*in_stack_00000180 + 0x50), lVar48 == 0))
      goto LAB_04caa2e0;
      if (*(uint *)(lVar48 + 0x18) <= *(uint *)(unaff_x19 + 0x96)) goto LAB_04caa4c0;
      lVar48 = lVar48 + (long)(int)*(uint *)(unaff_x19 + 0x96) * 0x60;
LAB_04ca4f00:
      *(int *)(lVar48 + 0x20) = *(int *)(lVar48 + 0x20) + 1;
    }
  }
LAB_04ca5760:
  if (((int)unaff_x19[0x61] == 1) && ((in_stack_0000128c == 0x2d || (!bVar9)))) {
    if (unaff_x19[0xcd] == 0) goto LAB_04caa2e0;
    fVar53 = *(float *)(unaff_x19 + 0x41);
    iVar15 = FUN_04ab1930(unaff_x19[0xcd] + 0x28,0);
    if (unaff_x19[0xcd] == 0) goto LAB_04caa2e0;
    fVar52 = (float)FUN_04ab1938(unaff_x19[0xcd] + 0x28,0);
    lVar48 = unaff_x19[0xcc];
    fVar68 = fStack00000000000000cc;
    if (*(char *)((long)unaff_x19 + 0x336) != '\0') {
      fVar68 = 1.0;
    }
    if ((lVar48 == 0) || (*(long *)(lVar48 + 0x20) == 0)) goto LAB_04caa2e0;
    fVar54 = *(float *)((long)unaff_x19 + 0x434);
    fVar58 = *(float *)(lVar48 + 0x2c);
    fVar57 = (float)FUN_04ab1e30(*(long *)(lVar48 + 0x20),0);
    fVar75 = *_fStack00000000000000c0;
    fVar57 = fVar54 * (fVar53 / (float)iVar15) * fVar52 * fVar68 * fVar58 * fVar57;
    fVar53 = *_fStack00000000000000b0;
    if ((in_stack_0000128c == 10) && (*(int *)((long)unaff_x19 + 0x49c) != (int)unaff_x19[0x94])) {
      if ((*in_stack_00000180 == 0) || (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 == 0))
      goto LAB_04caa2e0;
      uVar19 = *(int *)((long)unaff_x19 + 0x49c) - 1;
      if (*(uint *)(lVar48 + 0x18) <= uVar19) goto LAB_04caa4c0;
      if (unaff_x19[0xcd] == 0) goto LAB_04caa2e0;
      fVar68 = *(float *)(lVar48 + (long)(int)uVar19 * (long)iVar18 + 0x58);
      iVar15 = FUN_04ab1930(unaff_x19[0xcd] + 0x28,0);
      if (unaff_x19[0xcd] == 0) goto LAB_04caa2e0;
      fVar54 = (float)FUN_04ab1938(unaff_x19[0xcd] + 0x28,0);
      lVar48 = unaff_x19[0xcc];
      fVar52 = fStack00000000000000cc;
      if (*(char *)((long)unaff_x19 + 0x336) != '\0') {
        fVar52 = 1.0;
      }
      if ((lVar48 == 0) || (*(long *)(lVar48 + 0x20) == 0)) goto LAB_04caa2e0;
      fVar58 = *(float *)((long)unaff_x19 + 0x434);
      fVar55 = *(float *)(lVar48 + 0x2c);
      fVar57 = (float)FUN_04ab1e30(*(long *)(lVar48 + 0x20),0);
      if ((*in_stack_00000180 == 0) || (lVar48 = *(long *)(*in_stack_00000180 + 0x50), lVar48 == 0))
      goto LAB_04caa2e0;
      if (*(uint *)(lVar48 + 0x18) <= *(uint *)(unaff_x19 + 0x96)) goto LAB_04caa4c0;
      lVar48 = lVar48 + (long)(int)*(uint *)(unaff_x19 + 0x96) * 0x60;
      fVar75 = *(float *)(lVar48 + 100);
      fVar53 = *(float *)(lVar48 + 0x68);
      fVar57 = fVar58 * (fVar68 / (float)iVar15) * fVar54 * fVar52 * fVar55 * fVar57;
    }
    fVar58 = *(float *)((long)unaff_x19 + 0x4e4);
    fVar52 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar55 = *(float *)(unaff_x19 + 0x9b);
    fVar68 = 0.0;
    fVar54 = 0.0;
    if ((0.0 < fVar58) && (fVar54 = 0.0, (char)unaff_x19[0x5d] == '\0')) {
      fVar54 = *(float *)(in_stack_00000140 + 0x208) - *(float *)(in_stack_00000140 + 0x210);
    }
    fVar69 = *(float *)(unaff_x19 + 0xca);
    if ((char)unaff_x19[0x1d] == '\0') {
      if ((unaff_x19[0xcc] == 0) || (lVar48 = *(long *)(unaff_x19[0xcc] + 0x20), lVar48 == 0))
      goto LAB_04caa2e0;
      FUN_04ab1df4(&stack0x00001290,lVar48,0);
      fVar68 = (float)FUN_04ab1c3c(&stack0x000011a0,0);
    }
    puVar10 = PTR_DAT_06e12318;
    fVar71 = *(float *)(unaff_x19 + 0x72);
    fVar53 = (fStack00000000000000c8 - fVar75) - fVar53;
    bVar13 = true;
    if ((fVar71 <= fVar53) && (bVar13 = false, !NAN(fVar71))) {
      bVar13 = fVar71 == -1.0;
    }
    if (!bVar13) {
      fVar53 = fVar71;
    }
    fVar75 = DAT_0537e70c;
    if ((uVar33 & 0x18) == 0) {
      fVar75 = 1.0;
    }
    if (((fVar52 - (fVar55 - fVar58)) + fVar54 < fStack00000000000000d0) &&
       (ABS(fVar69) + fVar57 * fVar68 * (1.0 - *(float *)(unaff_x19 + 0x5f)) < fVar75 * fVar53)) {
      if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      Photon_Chat_Demo_ChatGui__OnUserSubscribed();
      lVar48 = *(long *)(*(long *)puVar10 + 0xb8);
      uVar23 = *(undefined8 *)PTR_DAT_06e2bb40;
      memcpy(&stack0x00001290,(void *)(lVar48 + 0x810),0x3b8);
      FUN_023a2a94(lVar48 + 0x1338,&stack0x00001290,uVar23);
    }
  }
  unaff_d14 = (ulong)(uint)fVar77;
  lVar48 = *in_stack_00000180;
  if (lVar48 == 0) goto LAB_04caa2e0;
  lVar25 = *(long *)(lVar48 + 0x38);
  fVar53 = 1.0;
  if (lVar25 == 0) goto LAB_04caa2e0;
  if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
  uVar19 = *(uint *)(unaff_x19 + 0x96);
  lVar25 = lVar25 + (int)*in_stack_00000178 * unaff_x24;
  *(uint *)(lVar25 + 0x5c) = uVar19;
  *(undefined4 *)(lVar25 + 0x60) = *(undefined4 *)((long)unaff_x19 + 0x4bc);
  if ((bVar9) ||
     ((in_stack_0000128c < 0xe && ((1 << (ulong)(in_stack_0000128c & 0x1f) & 0x2c00U) != 0)))) {
    lVar48 = *(long *)(lVar48 + 0x50);
    if (lVar48 == 0) goto LAB_04caa2e0;
    if (*(uint *)(lVar48 + 0x18) <= uVar19) goto LAB_04caa4c0;
    if (*(int *)(lVar48 + (long)(int)uVar19 * 0x60 + 0x24) == 1) goto LAB_04ca5b20;
  }
  else {
    lVar48 = *(long *)(lVar48 + 0x50);
    if (lVar48 == 0) goto LAB_04caa2e0;
LAB_04ca5b20:
    if (*(uint *)(lVar48 + 0x18) <= uVar19) goto LAB_04caa4c0;
    *(int *)(lVar48 + (long)(int)uVar19 * 0x60 + 0x6c) = (int)unaff_x19[0x53];
  }
  if (in_stack_0000128c == 9) {
    if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
    fVar68 = (float)FUN_04ab19d8(*in_stack_00000170 + 0x28,0);
    if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
    fVar57 = *(float *)(unaff_x19 + 0xca);
    param_2 = (ulong)(uint)fVar57;
    fVar52 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000170 + 0x1b1));
    fVar52 = fVar77 * fVar68 * fVar52;
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar68 = fVar52 * (float)(int)(fVar57 / fVar52);
      if (fVar68 <= fVar57) {
        fVar68 = fVar57 + fVar52;
      }
    }
    else {
      fVar68 = fVar52 * (float)(int)(fVar57 / fVar52);
      if (fVar57 <= fVar68) {
        fVar68 = fVar57 - fVar52;
      }
    }
LAB_04ca5d7c:
    *(float *)(unaff_x19 + 0xca) = fVar68;
  }
  else {
    fVar68 = *(float *)(unaff_x19 + 0x5a);
    if (fVar68 == 0.0) {
      fVar68 = *(float *)(unaff_x19 + 0xca);
      if ((char)unaff_x19[0x1d] == '\0') {
        fVar57 = (float)FUN_04ab1c3c(&stack0x00001240,0);
        fVar54 = *(float *)(in_stack_00000140 + 0x1a8);
        fVar74 = (float)FUN_04ab4a0c(&stack0x00001230,0);
        if (*in_stack_00000170 != 0) {
          fVar52 = 1.0 - *(float *)(unaff_x19 + 0x5f);
          fVar68 = fVar68 + fVar52 * (*(float *)((long)unaff_x19 + 0x2cc) +
                                     fVar77 * (fVar57 * fVar54 + fVar74) +
                                     in_stack_000000f0 *
                                     (fStack00000000000000ec +
                                     fStack00000000000000f4 + *(float *)(*in_stack_00000170 + 0x1a4)
                                     ));
          *(float *)(unaff_x19 + 0xca) = fVar68;
          goto joined_r0x04ca5cbc;
        }
        goto LAB_04caa2e0;
      }
      fVar52 = (float)FUN_04ab4a0c(&stack0x00001230,0);
      if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
      param_2 = (ulong)(uint)(1.0 - *(float *)(unaff_x19 + 0x5f));
      fVar68 = fVar68 - (1.0 - *(float *)(unaff_x19 + 0x5f)) *
                        (*(float *)((long)unaff_x19 + 0x2cc) +
                        fVar77 * fVar52 +
                        in_stack_000000f0 *
                        (fStack00000000000000ec +
                        fStack00000000000000f4 + *(float *)(*in_stack_00000170 + 0x1a4)));
      *(float *)(unaff_x19 + 0xca) = fVar68;
      if ((uVar16 != 0) || (in_stack_0000128c == 0x200b)) {
        param_2 = (ulong)(uint)(in_stack_000000f0 * *(float *)(unaff_x19 + 0x5b));
        fVar68 = fVar68 - in_stack_000000f0 * *(float *)(unaff_x19 + 0x5b);
        goto LAB_04ca5d7c;
      }
    }
    else {
      if (((*(char *)((long)unaff_x19 + 0x2d4) != '\0') && (in_stack_0000128c < 0x3b)) &&
         ((1L << ((ulong)in_stack_0000128c & 0x3f) & 0x400500000000000U) != 0)) {
        fVar68 = fVar68 * 0.5;
      }
      if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
      fVar52 = *(float *)(unaff_x19 + 0xca);
      fVar68 = fVar52 + (1.0 - *(float *)(unaff_x19 + 0x5f)) *
                        (*(float *)((long)unaff_x19 + 0x2cc) +
                        (fVar68 - fVar74) +
                        in_stack_000000f0 *
                        (fStack00000000000000f4 + *(float *)(*in_stack_00000170 + 0x1a4)));
      *(float *)(unaff_x19 + 0xca) = fVar68;
joined_r0x04ca5cbc:
      if ((uVar16 != 0) || (param_2 = (ulong)(uint)fVar52, in_stack_0000128c == 0x200b)) {
        param_2 = (ulong)(uint)(in_stack_000000f0 * *(float *)(unaff_x19 + 0x5b));
        fVar68 = fVar68 + in_stack_000000f0 * *(float *)(unaff_x19 + 0x5b);
        goto LAB_04ca5d7c;
      }
    }
  }
  lVar48 = *in_stack_00000180;
  if ((lVar48 == 0) || (lVar25 = *(long *)(lVar48 + 0x38), lVar25 == 0)) goto LAB_04caa2e0;
  uVar19 = *in_stack_00000178;
  if (*(uint *)(lVar25 + 0x18) <= uVar19) goto LAB_04caa4c0;
  *(float *)(lVar25 + (int)uVar19 * unaff_x24 + 0x13c) = fVar68;
  if (in_stack_0000128c == 0xd) {
    param_2 = 0;
    *(float *)(unaff_x19 + 0xca) = *(float *)((long)unaff_x19 + 0x43c) + 0.0;
  }
  if (((int)unaff_x19[0x61] == 5) &&
     (((0xd < in_stack_0000128c || ((1 << (ulong)(in_stack_0000128c & 0x1f) & 0x2c00U) == 0)) &&
      (1 < in_stack_0000128c - 0x2028)))) {
    lVar25 = *(long *)(lVar48 + 0x58);
    if (lVar25 == 0) goto LAB_04caa2e0;
    iVar15 = *(int *)((long)unaff_x19 + 0x4bc) + 1;
    if (*(int *)(lVar25 + 0x18) < iVar15) {
      if (*(int *)(*(long *)PTR_DAT_06d9b5f8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_022de88c((long *)(lVar48 + 0x58),iVar15,1,*(undefined8 *)PTR_DAT_06dc6880);
      lVar48 = *in_stack_00000180;
      if (lVar48 == 0) goto LAB_04caa2e0;
    }
    lVar25 = *(long *)(lVar48 + 0x58);
    if (lVar25 == 0) goto LAB_04caa2e0;
    lVar51 = (long)(int)*(uint *)((long)unaff_x19 + 0x4bc);
    if (*(uint *)(lVar25 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4bc)) goto LAB_04caa4c0;
    lVar24 = lVar25 + lVar51 * 0x14;
    fVar52 = *(float *)(lVar24 + 0x30);
    param_2 = (ulong)(uint)fVar52;
    *(int *)(lVar24 + 0x28) = (int)unaff_x19[0x98];
    fVar68 = *(float *)(unaff_x19 + 0x9a);
    if (fVar52 <= *(float *)(unaff_x19 + 0x9a)) {
      fVar68 = fVar52;
    }
    *(float *)(lVar24 + 0x30) = fVar68;
    if (*(char *)((long)unaff_x19 + 0x36c) != '\0') {
      *(undefined1 *)((long)unaff_x19 + 0x36c) = 0;
      *(undefined4 *)(lVar25 + lVar51 * 0x14 + 0x20) = *(undefined4 *)((long)unaff_x19 + 0x49c);
    }
    uVar19 = *in_stack_00000178;
    *(uint *)(lVar25 + lVar51 * 0x14 + 0x24) = uVar19;
  }
  uVar33 = in_stack_0000128c;
  if (((in_stack_0000128c < 0xc) && ((1 << (ulong)(in_stack_0000128c & 0x1f) & 0xc08U) != 0)) ||
     ((in_stack_0000128c - 0x2028 < 2 ||
      (((bool)(bVar9 & in_stack_0000128c == 0x2d) || ((float)uVar19 == in_stack_00000058._4_4_))))))
  {
    if (0.0 < *(float *)((long)unaff_x19 + 0x4e4)) {
      fVar68 = *(float *)((long)unaff_x19 + 0x4d4) - *(float *)((long)unaff_x19 + 0x4dc);
      if (*(int *)(*(long *)PTR_DAT_06e1a840 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      if (((fStack0000000000000060 < ABS(fVar68)) && ((char)unaff_x19[0x5d] == '\0')) &&
         (*(char *)((long)unaff_x19 + 0x36c) == '\0')) {
        Photon_Chat_Demo_ChatGui__OnUserPropertiesChanged(fVar68);
        *(float *)(unaff_x19 + 0x9a) = *(float *)(unaff_x19 + 0x9a) - fVar68;
        *(float *)((long)unaff_x19 + 0x4e4) = fVar68 + *(float *)((long)unaff_x19 + 0x4e4);
        puVar10 = PTR_DAT_06e12318;
        lVar48 = *(long *)PTR_DAT_06e12318;
        if (*(int *)(lVar48 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar48 = *(long *)puVar10;
        }
        lVar25 = *(long *)(lVar48 + 0xb8);
        if (*(int *)(lVar25 + 0x838) == (int)unaff_x19[0x96]) {
          if (*(int *)(lVar48 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar25 = *(long *)(*(long *)PTR_DAT_06e12318 + 0xb8);
          }
          FUN_023a2be0(&stack0x00001290,lVar25 + 0x1338,*(undefined8 *)PTR_DAT_06dc3038);
          memcpy(&stack0x000001c0,&stack0x00001290,0x3b8);
          puVar10 = PTR_DAT_06e12318;
          lVar48 = *(long *)PTR_DAT_06e12318;
          memcpy((void *)(*(long *)(lVar48 + 0xb8) + 0x810),&stack0x000001c0,0x3b8);
          thunk_FUN_01656ef8(*(long *)(lVar48 + 0xb8) + 0x8a8,0);
          lVar48 = *(long *)(*(long *)puVar10 + 0xb8);
          *(float *)(lVar48 + 0x848) = fVar68 + *(float *)(lVar48 + 0x848);
          *(float *)(lVar48 + 0x894) = fVar68 + *(float *)(lVar48 + 0x894);
          uVar23 = *(undefined8 *)PTR_DAT_06e2bb40;
          memcpy(&stack0x00001290,(void *)(lVar48 + 0x810),0x3b8);
          FUN_023a2a94(lVar48 + 0x1338,&stack0x00001290,uVar23);
        }
      }
    }
    fVar57 = *(float *)((long)unaff_x19 + 0x4e4);
    *(undefined1 *)((long)unaff_x19 + 0x36c) = 0;
    fVar52 = *(float *)(unaff_x19 + 0x9b) - fVar57;
    fVar68 = *(float *)(unaff_x19 + 0x9a);
    if (fVar52 <= *(float *)(unaff_x19 + 0x9a)) {
      fVar68 = fVar52;
    }
    *(float *)(unaff_x19 + 0x9a) = fVar68;
    fVar74 = *(float *)((long)unaff_x19 + 0x4d4);
    if (in_stack_00001284 == '\0') {
      in_stack_00001288 = fVar68;
    }
    if ((*(char *)((long)unaff_x19 + 0x364) != '\0') &&
       (((int)unaff_x19[0x6b] <= *(int *)((long)unaff_x19 + 0x49c) ||
        ((int)unaff_x19[0x6c] <= (int)unaff_x19[0x96])))) {
      in_stack_00001284 = '\x01';
    }
    lVar48 = *in_stack_00000180;
    if ((lVar48 == 0) || (lVar25 = *(long *)(lVar48 + 0x50), lVar25 == 0)) goto LAB_04caa2e0;
    uVar19 = *(uint *)(unaff_x19 + 0x96);
    if (*(uint *)(lVar25 + 0x18) <= uVar19) goto LAB_04caa4c0;
    lVar51 = lVar25 + (long)(int)uVar19 * 0x60;
    *(int *)(lVar51 + 0x38) = (int)unaff_x19[0x94];
    iVar15 = (int)unaff_x19[0x94];
    if ((int)unaff_x19[0x94] <= *(int *)((long)unaff_x19 + 0x4a4)) {
      iVar15 = *(int *)((long)unaff_x19 + 0x4a4);
    }
    *(int *)((long)unaff_x19 + 0x4a4) = iVar15;
    *(int *)(lVar51 + 0x3c) = iVar15;
    *(undefined4 *)(unaff_x19 + 0x95) = *(undefined4 *)((long)unaff_x19 + 0x49c);
    *(undefined4 *)(lVar51 + 0x40) = *(undefined4 *)((long)unaff_x19 + 0x49c);
    iVar15 = *(int *)((long)unaff_x19 + 0x4a4);
    if (*(int *)((long)unaff_x19 + 0x4a4) <= *(int *)((long)unaff_x19 + 0x4ac)) {
      iVar15 = *(int *)((long)unaff_x19 + 0x4ac);
    }
    *(int *)((long)unaff_x19 + 0x4ac) = iVar15;
    *(int *)(lVar51 + 0x44) = iVar15;
    *(int *)(lVar51 + 0x24) = (*(int *)(lVar51 + 0x40) - *(int *)(lVar51 + 0x38)) + 1;
    iVar46 = *(int *)((long)unaff_x19 + 0x4b4);
    *(int *)(lVar51 + 0x28) = iVar46;
    *(int *)(lVar51 + 0x30) = ((iVar15 - *(int *)(lVar51 + 0x38)) - iVar46) + 1;
    lVar48 = *(long *)(lVar48 + 0x38);
    if (lVar48 == 0) goto LAB_04caa2e0;
    if (*(uint *)(lVar48 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_04caa4c0;
    uVar67 = *(undefined4 *)(lVar48 + (int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x114);
    lVar25 = lVar25 + (long)(int)uVar19 * 0x60;
    *(float *)(lVar25 + 0x74) = fVar52;
    *(undefined4 *)(lVar25 + 0x70) = uVar67;
    lVar48 = *in_stack_00000180;
    if ((lVar48 == 0) || (lVar25 = *(long *)(lVar48 + 0x50), lVar25 == 0)) goto LAB_04caa2e0;
    if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x96)) goto LAB_04caa4c0;
    lVar48 = *(long *)(lVar48 + 0x38);
    if (lVar48 == 0) goto LAB_04caa2e0;
    if (*(uint *)(lVar48 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_04caa4c0;
    uVar67 = *(undefined4 *)(lVar48 + (int)*(uint *)((long)unaff_x19 + 0x4ac) * unaff_x24 + 0x120);
    fVar74 = fVar74 - fVar57;
    lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x96) * 0x60;
    *(float *)(lVar25 + 0x7c) = fVar74;
    *(undefined4 *)(lVar25 + 0x78) = uVar67;
    lVar48 = *in_stack_00000180;
    if ((lVar48 == 0) || (lVar25 = *(long *)(lVar48 + 0x50), lVar25 == 0)) goto LAB_04caa2e0;
    lVar51 = (long)(int)*(uint *)(unaff_x19 + 0x96);
    if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x96)) goto LAB_04caa4c0;
    lVar24 = lVar25 + lVar51 * 0x60;
    *(float *)(lVar24 + 0x48) = *(float *)(lVar24 + 0x78) - fVar77 * in_stack_00000158;
    *(float *)(lVar24 + 0x60) = fStack0000000000000124;
    if (*(int *)(lVar24 + 0x24) == 1) {
      *(int *)(lVar25 + lVar51 * 0x60 + 0x6c) = (int)unaff_x19[0x53];
    }
    if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(lVar48 + 0x38), lVar24 == 0))
    goto LAB_04caa2e0;
    lVar43 = (long)(int)*(uint *)((long)unaff_x19 + 0x4ac);
    if (*(uint *)(lVar24 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_04caa4c0;
    if ((*(char *)(lVar24 + lVar43 * unaff_x24 + 400) == '\0') &&
       (lVar43 = (long)(int)*(uint *)(unaff_x19 + 0x95),
       *(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95))) goto LAB_04caa4c0;
    fVar77 = (1.0 - *(float *)(unaff_x19 + 0x5f)) *
             (*(float *)((long)unaff_x19 + 0x2cc) +
             in_stack_000000f0 *
             (fStack00000000000000ec +
             fStack00000000000000f4 + *(float *)(*in_stack_00000170 + 0x1a4)));
    fVar68 = -fVar77;
    if ((char)unaff_x19[0x1d] != '\0') {
      fVar68 = fVar77;
    }
    lVar25 = lVar25 + lVar51 * 0x60;
    *(float *)(lVar25 + 0x5c) = *(float *)(lVar24 + lVar43 * unaff_x24 + 0x13c) + fVar68;
    fVar68 = *(float *)((long)unaff_x19 + 0x4e4);
    *(float *)(lVar25 + 0x4c) = fStack000000000000006c + (fVar74 - fVar52);
    *(float *)(lVar25 + 0x50) = fVar74;
    fVar68 = 0.0 - fVar68;
    param_2 = (ulong)(uint)fVar68;
    *(float *)(lVar25 + 0x54) = fVar68;
    *(float *)(lVar25 + 0x58) = fVar52;
    unaff_x26 = (long *)PTR_DAT_06e12318;
    if ((((in_stack_0000128c & 0xfffffffe) == 10) || ((bool)(bVar9 & in_stack_0000128c == 0x2d))) ||
       (in_stack_0000128c - 0x2028 < 2)) {
      if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      Photon_Chat_Demo_ChatGui__OnUserSubscribed();
      iVar18 = (int)unaff_x19[0x96] + 1;
      *(int *)(unaff_x19 + 0x94) = *(int *)((long)unaff_x19 + 0x49c) + 1;
      *(int *)(unaff_x19 + 0x96) = iVar18;
      *(undefined8 *)(in_stack_00000140 + 0x1e8) = 0;
      lVar48 = unaff_x19[0x73];
      if ((lVar48 == 0) || (*(long *)(lVar48 + 0x50) == 0)) goto LAB_04caa2e0;
      if (*(int *)(*(long *)(lVar48 + 0x50) + 0x18) <= iVar18) {
        FUN_04ed6750();
        lVar48 = unaff_x19[0x73];
        if (lVar48 == 0) goto LAB_04caa2e0;
      }
      lVar48 = *(long *)(lVar48 + 0x38);
      if (lVar48 == 0) goto LAB_04caa2e0;
      if (*(uint *)(lVar48 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
      fVar68 = *(float *)(lVar48 + (int)*in_stack_00000178 * unaff_x24 + 0x14c);
      if (*(float *)((long)unaff_x19 + 0x2e4) == DAT_0537e704) {
        fVar77 = 0.0;
        if ((in_stack_0000128c == 0x2029) || (in_stack_0000128c == 10)) {
          fVar77 = *(float *)(unaff_x19 + 0x5e);
        }
        uVar31 = 0;
        fVar77 = *(float *)((long)unaff_x19 + 0x4e4) +
                 fVar68 + (0.0 - *(float *)(unaff_x19 + 0x9b)) +
                 in_stack_00000080._4_4_ * (in_stack_00000050._4_4_ + *(float *)(unaff_x19 + 0x5c))
                 + in_stack_000000f0 * (*(float *)((long)unaff_x19 + 0x2dc) + fVar77);
      }
      else {
        if ((in_stack_0000128c == 0x2029) || (fVar77 = 0.0, in_stack_0000128c == 10)) {
          fVar77 = *(float *)(unaff_x19 + 0x5e);
        }
        uVar31 = 1;
        fVar77 = *(float *)((long)unaff_x19 + 0x4e4) +
                 *(float *)((long)unaff_x19 + 0x2e4) +
                 in_stack_000000f0 * (*(float *)((long)unaff_x19 + 0x2dc) + fVar77);
      }
      *(float *)((long)unaff_x19 + 0x4e4) = fVar77;
      *(undefined1 *)(unaff_x19 + 0x5d) = uVar31;
      lVar48 = *unaff_x26;
      if (*(int *)(lVar48 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar48 = *unaff_x26;
      }
      uVar23 = NEON_rev64(*(undefined8 *)(*(long *)(lVar48 + 0xb8) + 0x1730),4);
      *(undefined8 *)(in_stack_00000140 + 0x208) = uVar23;
      param_2 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x43c);
      *(float *)((long)unaff_x19 + 0x4dc) = fVar68;
      *(float *)(unaff_x19 + 0xca) =
           *(float *)(unaff_x19 + 0x87) + 0.0 + *(float *)((long)unaff_x19 + 0x43c);
      Photon_Chat_Demo_ChatGui__OnUserSubscribed();
      Photon_Chat_Demo_ChatGui__OnUserSubscribed();
      in_stack_00000088 = 1.4013e-45;
      *(int *)((long)unaff_x19 + 0x49c) = *(int *)((long)unaff_x19 + 0x49c) + 1;
      uStack0000000000000070 = 1;
      goto LAB_04ca2d40;
    }
    if (in_stack_0000128c == 3) {
      if (unaff_x19[0x90] == 0) goto LAB_04caa2e0;
      param_3 = (uint)*(undefined8 *)(unaff_x19[0x90] + 0x18);
      uVar33 = 3;
    }
  }
  unaff_x26 = (long *)PTR_DAT_06e12318;
  lVar48 = *(long *)(lVar48 + 0x38);
  if (lVar48 == 0) goto LAB_04caa2e0;
  uVar20 = *in_stack_00000178;
  lVar25 = (long)(int)uVar20;
  uVar19 = *(uint *)(lVar48 + 0x18);
  if (uVar19 <= uVar20) goto LAB_04caa4c0;
  if (*(char *)(lVar48 + lVar25 * unaff_x24 + 400) != '\0') {
    lVar51 = lVar48 + lVar25 * unaff_x24;
    uVar27 = unaff_x19[0x9d];
    uVar26 = *(ulong *)(lVar51 + 0x114);
    unaff_x19[0x9d] =
         uVar26 ^ (uVar26 ^ uVar27) &
                  CONCAT44(-(uint)((float)(uVar27 >> 0x20) < (float)(uVar26 >> 0x20)),
                           -(uint)((float)uVar27 < (float)uVar26));
    uVar27 = unaff_x19[0x9e];
    param_2 = *(ulong *)(lVar51 + 0x120);
    unaff_x19[0x9e] =
         param_2 ^ (param_2 ^ uVar27) &
                   CONCAT44(-(uint)((float)(param_2 >> 0x20) < (float)(uVar27 >> 0x20)),
                            -(uint)((float)param_2 < (float)uVar27));
  }
  if (((*(int *)((long)unaff_x19 + 0x2fc) != 3) && (*(int *)((long)unaff_x19 + 0x2fc) != 0)) ||
     ((*(uint *)(unaff_x19 + 0x61) < 7 &&
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x61) & 0x1f) & 0x4aU) != 0)))) {
    if ((((uVar16 == 0) && (uVar33 != 0x2d)) && (uVar33 != 0x200b)) && (uVar33 != 0xad)) {
      if (*(char *)((long)unaff_x19 + 0x301) == '\0') goto LAB_04ca671c;
LAB_04ca6658:
      if (((uint)in_stack_00000088 & 1) == 0) {
        in_stack_00000088 = 0.0;
        goto LAB_04ca6c40;
      }
      uVar16 = (uint)(in_stack_0000128c == 0xa0 || bVar12) &
               (uStack0000000000000064 | in_stack_0000128c != 0xad) ^ 1;
LAB_04ca668c:
      in_stack_00000088 = (float)1;
LAB_04ca6bdc:
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      Photon_Chat_Demo_ChatGui__OnUserSubscribed();
    }
    else {
      if (*(char *)((long)unaff_x19 + 0x301) == '\x01') goto LAB_04ca6658;
      if ((int)uVar33 < 0x2007) {
        if (uVar33 == 0x2d) {
          if (0 < (int)uVar20) {
            if (uVar19 <= (uint)(lVar25 + -1)) goto LAB_04caa4c0;
            uVar7 = *(undefined2 *)(lVar48 + (lVar25 + -1) * unaff_x24 + 0x24);
            if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar27 = FUN_028fcbcc(uVar7,0);
            if ((uVar27 & 1) != 0) {
              if ((*in_stack_00000180 == 0) ||
                 (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 == 0)) goto LAB_04caa2e0;
              if (*(uint *)(lVar48 + 0x18) <= *in_stack_00000178 - 1) goto LAB_04caa4c0;
              if (*(int *)(lVar48 + (long)(int)(*in_stack_00000178 - 1) * (long)iVar18 + 0x5c) ==
                  (int)unaff_x19[0x96]) goto LAB_04ca6c40;
            }
          }
        }
        else if (uVar33 == 0xa0) goto LAB_04ca671c;
LAB_04ca6ba4:
        lVar48 = *unaff_x26;
        if (*(int *)(lVar48 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar48 = *unaff_x26;
        }
        in_stack_00000088 = 0.0;
        uVar16 = 0;
        *(undefined4 *)(*(long *)(lVar48 + 0xb8) + 0xf80) = 0xffffffff;
        goto LAB_04ca6bdc;
      }
      if (((0x28 < uVar33 - 0x2007) ||
          ((1L << ((ulong)(uVar33 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) && (uVar33 != 0x2060))
      goto LAB_04ca6ba4;
LAB_04ca671c:
      if (*(int *)(*(long *)PTR_DAT_06e23ec0 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar27 = FUN_051fbcd0(uVar33,0);
      if ((uVar27 & 1) == 0) {
LAB_04ca6768:
        if (*(int *)(*(long *)PTR_DAT_06e23ec0 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar27 = FUN_051fbd3c(in_stack_0000128c,0);
        if ((uVar27 & 1) != 0) goto LAB_04ca6798;
        if ((*(char *)((long)unaff_x19 + 0x301) != '\0') ||
           (uVar16 = *in_stack_00000178 + 1, iStack0000000000000068 <= (int)uVar16))
        goto LAB_04ca6658;
        if ((*in_stack_00000180 != 0) &&
           (lVar48 = *(long *)(*in_stack_00000180 + 0x38), lVar48 != 0)) {
          if (uVar16 < *(uint *)(lVar48 + 0x18)) {
            uVar7 = *(undefined2 *)(lVar48 + (long)(int)uVar16 * (long)iVar18 + 0x24);
            if (*(int *)(*(long *)PTR_DAT_06e23ec0 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar27 = FUN_051fbd3c(uVar7,0);
            if ((uVar27 & 1) == 0) goto LAB_04ca6658;
LAB_04ca6bd8:
            uVar16 = 0;
            goto LAB_04ca6bdc;
          }
          goto LAB_04caa4c0;
        }
        goto LAB_04caa2e0;
      }
      if (*(int *)(*(long *)PTR_DAT_06e238a8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar27 = FUN_051f2178(0);
      if ((uVar27 & 1) != 0) goto LAB_04ca6768;
LAB_04ca6798:
      if (*(int *)(*(long *)PTR_DAT_06e238a8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      lVar48 = FUN_051f1f60(0);
      if ((lVar48 == 0) || (*(long *)(lVar48 + 0x10) == 0)) goto LAB_04caa2e0;
      uVar27 = FUN_04c47858(*(long *)(lVar48 + 0x10),in_stack_0000128c,
                            *(undefined8 *)PTR_DAT_06e4cb50);
      if ((int)in_stack_00000058._4_4_ <= (int)*in_stack_00000178) {
        if ((uVar27 & 1) == 0) {
          in_stack_00000088 = 0.0;
          goto LAB_04ca6bd8;
        }
LAB_04ca68f8:
        if (((uint)in_stack_00000088 & (uint)(uVar17 == uVar50)) != 1) goto LAB_04ca6c40;
        uVar16 = (uint)(uVar16 != 0);
        goto LAB_04ca668c;
      }
      if (*(int *)(*(long *)PTR_DAT_06e238a8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      lVar48 = FUN_051f1f60(0);
      if (((lVar48 == 0) || (*in_stack_00000180 == 0)) ||
         (lVar25 = *(long *)(*in_stack_00000180 + 0x38), lVar25 == 0)) goto LAB_04caa2e0;
      if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000178 + 1) goto LAB_04caa4c0;
      if (*(long *)(lVar48 + 0x18) == 0) goto LAB_04caa2e0;
      uVar19 = FUN_04c47858(*(long *)(lVar48 + 0x18),
                            *(undefined2 *)
                             (lVar25 + (long)(int)(*in_stack_00000178 + 1) * (long)iVar18 + 0x24),
                            *(undefined8 *)PTR_DAT_06e4cb50);
      if ((uVar27 & 1) != 0) goto LAB_04ca68f8;
      uVar17 = (uint)in_stack_00000088 & uVar19;
      uVar50 = (uint)in_stack_00000088 | uVar19 ^ 0xffffffff;
      uVar16 = uVar16 != 0 & uVar17;
      in_stack_00000088 = (float)uVar17;
      if ((uVar50 & 1) != 0) goto LAB_04ca6bdc;
    }
    if (uVar16 != 0) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      Photon_Chat_Demo_ChatGui__OnUserSubscribed();
    }
  }
LAB_04ca6c40:
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  Photon_Chat_Demo_ChatGui__OnUserSubscribed();
  *(int *)((long)unaff_x19 + 0x49c) = *(int *)((long)unaff_x19 + 0x49c) + 1;
  goto LAB_04ca2d40;
LAB_04ca7b5c:
  uVar16 = uVar50 - 1;
  if (*(uint *)(lVar48 + 0x18) <= uVar16) goto LAB_04caa4c0;
  lVar43 = (long)(int)uVar16;
  lVar51 = lVar48 + lVar43 * 0x178;
  lVar24 = *(long *)(lVar51 + 0x40);
  uVar8 = *(ushort *)(lVar51 + 0x24);
  uVar33 = (uint)uVar8;
  if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar20 = FUN_028fcbcc(uVar8,0);
  if (*(uint *)(lVar48 + 0x18) <= uVar16) goto LAB_04caa4c0;
  if ((*in_stack_00000180 == 0) || (lVar51 = *(long *)(*in_stack_00000180 + 0x50), lVar51 == 0))
  goto LAB_04caa2e0;
  uVar4 = *(uint *)(lVar48 + lVar43 * 0x178 + 0x5c);
  if (*(uint *)(lVar51 + 0x18) <= uVar4) goto LAB_04caa4c0;
  lVar45 = (long)(int)uVar4;
  lVar51 = lVar51 + lVar45 * 0x60;
  fVar80 = *(float *)(lVar51 + 0x60);
  fVar71 = *(float *)(lVar51 + 100);
  uVar47 = *(uint *)(lVar51 + 0x6c);
  iVar21 = *(int *)(lVar51 + 0x20);
  iVar22 = *(int *)(lVar51 + 0x28);
  iVar5 = *(int *)(lVar51 + 0x30);
  uVar2 = *(uint *)(lVar51 + 0x40);
  uVar3 = *(uint *)(lVar51 + 0x44);
  lVar42 = (long)(int)uVar3;
  fVar57 = *(float *)(lVar51 + 0x50);
  fVar75 = *(float *)(lVar51 + 0x58);
  fVar59 = *(float *)(lVar51 + 0x5c);
  fVar58 = *(float *)(lVar51 + 0x70);
  fVar69 = *(float *)(lVar51 + 0x74);
  fVar52 = *(float *)(lVar51 + 0x78);
  fVar74 = *(float *)(lVar51 + 0x7c);
  fVar55 = fVar80 + fVar71;
  plVar49 = (long *)PTR_DAT_06e50440;
  if ((int)uVar47 < 9) {
    switch(uVar47) {
    case 1:
      if ((char)unaff_x19[0x1d] == '\0') {
        fStack00000000000000ec = fVar71 + 0.0;
      }
      else {
        fStack00000000000000ec = 0.0 - fVar59;
      }
      break;
    case 2:
      fStack00000000000000ec = (fVar71 + fVar80 * 0.5) - fVar59 * 0.5;
      break;
    case 3:
      goto switchD_04ca7cb8_caseD_3;
    case 4:
      fStack00000000000000ec = fVar55 - fVar59;
      if ((char)unaff_x19[0x1d] != '\0') {
        fStack00000000000000ec = fVar55;
      }
      break;
    default:
      if ((((uVar33 != 3) && (uVar33 != 0x2060)) && (uVar33 != 0x200b)) &&
         (((uVar33 != 0xad && (uVar33 != 10)) && (((int)uVar16 <= (int)uVar3 && (uVar47 == 8))))))
      goto LAB_04ca7d74;
      goto switchD_04ca7cb8_caseD_3;
    }
    uStack00000000000000e0 = 0;
  }
  else if (uVar47 == 0x10) {
    if ((int)uVar16 <= (int)uVar3) {
      if (uVar33 < 0xad) {
        if ((uVar33 != 3) && (uVar33 != 10)) goto LAB_04ca7d74;
      }
      else if ((uVar33 != 0xad) && ((uVar33 != 0x200b && (uVar33 != 0x2060)))) {
LAB_04ca7d74:
        if (uVar2 < *(uint *)(lVar48 + 0x18)) {
          uVar7 = *(undefined2 *)(lVar48 + (long)(int)uVar2 * 0x178 + 0x24);
          if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar29 = FUN_02900324(uVar7,0);
          plVar49 = (long *)PTR_DAT_06e50440;
          if ((uVar29 & 1) == 0) {
            bVar1 = (int)uVar4 < (int)unaff_x19[0x96];
          }
          else {
            bVar1 = false;
          }
          if ((fVar80 < fVar59) || (bVar1 || (uVar47 >> 4 & 1) != 0)) {
            if ((uVar50 == 1) ||
               ((uVar4 != uVar19 || (uVar16 == *(uint *)((long)unaff_x19 + 0x354))))) {
              fStack00000000000000ec = fVar71;
              if ((char)unaff_x19[0x1d] != '\0') {
                fStack00000000000000ec = fVar55;
              }
              if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
              uStack0000000000000040 = FUN_029007b8(uVar33,0);
              uStack00000000000000e0 = 0;
            }
            else {
              cVar32 = (char)unaff_x19[0x1d];
              iVar5 = (iVar5 - iVar21) - (uStack0000000000000040 & 1);
              fVar55 = -fVar59;
              if (cVar32 != '\0') {
                fVar55 = fVar59;
              }
              fVar71 = 1.0;
              if (0 < iVar5) {
                fVar71 = *(float *)((long)unaff_x19 + 0x304);
              }
              if (iVar5 < 1) {
                iVar5 = 1;
              }
              uVar28 = CONCAT44((float)((ulong)uStack00000000000000e0 >> 0x20) + 0.0,
                                (float)uStack00000000000000e0 + 0.0);
              if (uVar33 == 9) {
LAB_04ca9ca8:
                fVar55 = ((fVar80 + fVar55) * (1.0 - fVar71)) / (float)iVar5;
                plVar49 = (long *)PTR_DAT_06e50440;
                if (cVar32 == '\0') {
                  fStack00000000000000ec = fStack00000000000000ec + fVar55;
                  uStack00000000000000e0 = uVar28;
                }
                else {
                  fStack00000000000000ec = fStack00000000000000ec - fVar55;
                }
              }
              else {
                if (uVar33 != 0xa0) {
                  if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
                    thunk_FUN_016466fc();
                  }
                  uVar29 = FUN_029007b8(uVar33,0);
                  cVar32 = (char)unaff_x19[0x1d];
                  if ((uVar29 & 1) != 0) goto LAB_04ca9ca8;
                }
                fVar55 = ((fVar80 + fVar55) * fVar71) /
                         (float)(int)((iVar21 - (~uStack0000000000000040 & 1)) + iVar22);
                plVar49 = (long *)PTR_DAT_06e50440;
                if (cVar32 == '\0') {
                  fStack00000000000000ec = fStack00000000000000ec + fVar55;
                  uStack00000000000000e0 = uVar28;
                }
                else {
                  fStack00000000000000ec = fStack00000000000000ec - fVar55;
                }
              }
            }
          }
          else {
            fStack00000000000000ec = fVar71;
            if ((char)unaff_x19[0x1d] != '\0') {
              fStack00000000000000ec = fVar55;
            }
            uStack00000000000000e0 = 0;
          }
          goto switchD_04ca7cb8_caseD_3;
        }
        goto LAB_04caa4c0;
      }
    }
  }
  else if (uVar47 == 0x20) {
    fStack00000000000000ec = (fVar71 + fVar80 * 0.5) - (fVar58 + fVar52) * 0.5;
    uStack00000000000000e0 = 0;
  }
switchD_04ca7cb8_caseD_3:
  uVar47 = (uint)*(undefined8 *)(lVar48 + 0x18);
  if (uVar47 <= uVar16) goto LAB_04caa4c0;
  lVar51 = lVar48 + lVar43 * 0x178;
  fVar55 = fStack00000000000000b0 + fStack00000000000000ec;
  fVar71 = (float)in_stack_000000a8 + (float)uStack00000000000000e0;
  fVar80 = (float)(in_stack_000000a8 >> 0x20) + (float)((ulong)uStack00000000000000e0 >> 0x20);
  if (*(char *)(lVar51 + 400) == '\0') goto LAB_04ca8744;
  iVar21 = *(int *)(lVar48 + lVar43 * 0x178 + 0x20);
  if (iVar21 != 0) goto LAB_04ca8414;
  fVar77 = fmodf(*(float *)((long)unaff_x19 + 0x344) * (float)(int)uVar4,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x33c)) {
  case 0:
    lVar36 = lVar48 + lVar43 * 0x178;
    *(undefined4 *)(lVar36 + 0x84) = 0;
    *(undefined4 *)(lVar36 + 0xac) = 0;
    *(undefined4 *)(lVar36 + 0xd4) = 0x3f800000;
    fVar77 = 1.0;
    break;
  case 1:
    fVar74 = *(float *)(lVar48 + lVar43 * 0x178 + 0x68);
    if (*(int *)((long)unaff_x19 + 0x294) == 0x208) {
      lVar36 = lVar48 + lVar43 * 0x178;
      fVar52 = (fStack00000000000000ec + fVar74) - *(float *)(unaff_x19 + 0x9d);
      fVar74 = *(float *)(unaff_x19 + 0x9e) - *(float *)(unaff_x19 + 0x9d);
      goto LAB_04ca7fd8;
    }
    lVar36 = lVar48 + lVar43 * 0x178;
    fVar52 = fVar52 - fVar58;
    *(float *)(lVar36 + 0x84) = fVar77 + (fVar74 - fVar58) / fVar52;
    *(float *)(lVar36 + 0xac) = fVar77 + (*(float *)(lVar36 + 0x90) - fVar58) / fVar52;
    *(float *)(lVar36 + 0xd4) = fVar77 + (*(float *)(lVar36 + 0xb8) - fVar58) / fVar52;
    fVar77 = fVar77 + (*(float *)(lVar36 + 0xe0) - fVar58) / fVar52;
    break;
  case 2:
    lVar36 = lVar48 + lVar43 * 0x178;
    fVar74 = *(float *)(unaff_x19 + 0x9e) - *(float *)(unaff_x19 + 0x9d);
    fVar52 = (fStack00000000000000ec + *(float *)(lVar36 + 0x68)) - *(float *)(unaff_x19 + 0x9d);
LAB_04ca7fd8:
    *(float *)(lVar36 + 0x84) = fVar77 + fVar52 / fVar74;
    *(float *)(lVar36 + 0xac) =
         fVar77 + ((fStack00000000000000ec + *(float *)(lVar36 + 0x90)) -
                  *(float *)(unaff_x19 + 0x9d)) /
                  (*(float *)(unaff_x19 + 0x9e) - *(float *)(unaff_x19 + 0x9d));
    *(float *)(lVar36 + 0xd4) =
         fVar77 + ((fStack00000000000000ec + *(float *)(lVar36 + 0xb8)) -
                  *(float *)(unaff_x19 + 0x9d)) /
                  (*(float *)(unaff_x19 + 0x9e) - *(float *)(unaff_x19 + 0x9d));
    fVar77 = fVar77 + ((fStack00000000000000ec + *(float *)(lVar36 + 0xe0)) -
                      *(float *)(unaff_x19 + 0x9d)) /
                      (*(float *)(unaff_x19 + 0x9e) - *(float *)(unaff_x19 + 0x9d));
    break;
  case 3:
    switch((int)unaff_x19[0x68]) {
    case 0:
      lVar36 = lVar48 + lVar43 * 0x178;
      *(undefined4 *)(lVar36 + 0x88) = 0;
      *(undefined4 *)(lVar36 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar36 + 0xd8) = 0;
      *(undefined4 *)(lVar36 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar36 = lVar48 + lVar43 * 0x178;
      fVar74 = fVar74 - fVar69;
      fVar52 = fVar77 + (*(float *)(lVar36 + 0x6c) - fVar69) / fVar74;
      fVar74 = fVar77 + (*(float *)(lVar36 + 0x94) - fVar69) / fVar74;
      *(float *)(lVar36 + 0x88) = fVar52;
      *(float *)(lVar36 + 0xb0) = fVar74;
      *(float *)(lVar36 + 0xd8) = fVar52;
      *(float *)(lVar36 + 0x100) = fVar74;
      break;
    case 2:
      lVar36 = lVar48 + lVar43 * 0x178;
      fVar52 = fVar77 + (*(float *)(lVar36 + 0x6c) - *(float *)((long)unaff_x19 + 0x4ec)) /
                        (*(float *)((long)unaff_x19 + 0x4f4) - *(float *)((long)unaff_x19 + 0x4ec));
      *(float *)(lVar36 + 0x88) = fVar52;
      fVar74 = *(float *)((long)unaff_x19 + 0x4ec);
      fVar58 = *(float *)((long)unaff_x19 + 0x4f4);
      *(float *)(lVar36 + 0xd8) = fVar52;
      fVar52 = fVar77 + (*(float *)(lVar36 + 0x94) - fVar74) / (fVar58 - fVar74);
      *(float *)(lVar36 + 0xb0) = fVar52;
      *(float *)(lVar36 + 0x100) = fVar52;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_06e52cd8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_048662d8(*(undefined8 *)PTR_DAT_06da50d0,0);
      uVar47 = (uint)*(undefined8 *)(lVar48 + 0x18);
    }
    if (uVar47 <= uVar16) goto LAB_04caa4c0;
    lVar36 = lVar48 + lVar43 * 0x178;
    fVar52 = *(float *)(lVar36 + 0x158);
    fVar74 = (1.0 - (*(float *)(lVar36 + 0x88) + *(float *)(lVar36 + 0xb0)) * fVar52) * 0.5;
    fVar58 = fVar77 + *(float *)(lVar36 + 0x88) * fVar52 + fVar74;
    fVar77 = fVar77 + fVar74 + *(float *)(lVar36 + 0xb0) * fVar52;
    *(float *)(lVar36 + 0x84) = fVar58;
    *(float *)(lVar36 + 0xac) = fVar58;
    *(float *)(lVar36 + 0xd4) = fVar77;
    break;
  default:
    goto switchD_04ca7ef8_default;
  }
  *(float *)(lVar48 + lVar43 * 0x178 + 0xfc) = fVar77;
switchD_04ca7ef8_default:
  switch((int)unaff_x19[0x68]) {
  case 0:
    if (uVar47 <= uVar16) goto LAB_04caa4c0;
    lVar36 = lVar48 + lVar43 * 0x178;
    *(undefined4 *)(lVar36 + 0x88) = 0;
    *(undefined4 *)(lVar36 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar36 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar36 + 0x100) = 0;
    break;
  case 1:
    if (uVar16 < uVar47) {
      lVar36 = lVar48 + lVar43 * 0x178;
      fVar57 = fVar57 - fVar75;
      fVar77 = (*(float *)(lVar36 + 0x6c) - fVar75) / fVar57;
      fVar57 = (*(float *)(lVar36 + 0x94) - fVar75) / fVar57;
      *(float *)(lVar36 + 0x88) = fVar77;
      goto LAB_04ca8338;
    }
    goto LAB_04caa4c0;
  case 2:
    if (uVar47 <= uVar16) goto LAB_04caa4c0;
    lVar36 = lVar48 + lVar43 * 0x178;
    fVar77 = (*(float *)(lVar36 + 0x6c) - *(float *)((long)unaff_x19 + 0x4ec)) /
             (*(float *)((long)unaff_x19 + 0x4f4) - *(float *)((long)unaff_x19 + 0x4ec));
    *(float *)(lVar36 + 0x88) = fVar77;
    fVar57 = (*(float *)(lVar36 + 0x94) - *(float *)((long)unaff_x19 + 0x4ec)) /
             (*(float *)((long)unaff_x19 + 0x4f4) - *(float *)((long)unaff_x19 + 0x4ec));
LAB_04ca8338:
    *(float *)(lVar36 + 0xb0) = fVar57;
    *(float *)(lVar36 + 0xd8) = fVar57;
    *(float *)(lVar36 + 0x100) = fVar77;
    break;
  case 3:
    if (uVar47 <= uVar16) goto LAB_04caa4c0;
    lVar36 = lVar48 + lVar43 * 0x178;
    fVar57 = *(float *)(lVar36 + 0x158);
    fVar52 = (1.0 - (*(float *)(lVar36 + 0x84) + *(float *)(lVar36 + 0xd4)) / fVar57) * 0.5;
    fVar77 = *(float *)(lVar36 + 0x84) / fVar57 + fVar52;
    fVar52 = fVar52 + *(float *)(lVar36 + 0xd4) / fVar57;
    *(float *)(lVar36 + 0x88) = fVar77;
    *(float *)(lVar36 + 0xb0) = fVar52;
    *(float *)(lVar36 + 0x100) = fVar77;
    *(float *)(lVar36 + 0xd8) = fVar52;
  }
  if (uVar47 <= uVar16) goto LAB_04caa4c0;
  lVar36 = lVar48 + lVar43 * 0x178;
  fVar77 = *(float *)(lVar36 + 0x15c) * (1.0 - *(float *)(unaff_x19 + 0x5f));
  if ((*(char *)(lVar36 + 0x54) == '\0') && ((*(byte *)(lVar48 + lVar43 * 0x178 + 0x18c) & 1) != 0))
  {
    fVar77 = -fVar77;
  }
  fVar52 = fVar53;
  if (((iVar15 == 2) || (fVar52 = fVar54, iVar15 == 1)) || (fVar52 = fVar53 / fVar68, iVar15 == 0))
  {
    fVar77 = fVar52 * fVar77;
  }
  lVar36 = lVar48 + lVar43 * 0x178;
  *(float *)(lVar36 + 0x80) = fVar77;
  *(float *)(lVar36 + 0xa8) = fVar77;
  *(float *)(lVar36 + 0xd0) = fVar77;
  *(float *)(lVar36 + 0xf8) = fVar77;
LAB_04ca8414:
  if (((int)uVar16 < (int)unaff_x19[0x6b]) &&
     ((int)fStack00000000000000cc < *(int *)((long)unaff_x19 + 0x35c))) {
    if (((int)uVar4 < (int)unaff_x19[0x6c]) && ((int)unaff_x19[0x61] != 5)) {
      if (uVar47 <= uVar16) goto LAB_04caa4c0;
      lVar51 = lVar48 + lVar43 * 0x178;
      *(ulong *)(lVar51 + 0x68) =
           CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar51 + 0x68) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar51 + 0x68));
      *(float *)(lVar51 + 0x70) = fVar80 + *(float *)(lVar51 + 0x70);
      if (*(uint *)(lVar48 + 0x18) <= uVar16) goto LAB_04caa4c0;
      lVar51 = lVar48 + lVar43 * 0x178;
      *(ulong *)(lVar51 + 0x90) =
           CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar51 + 0x90) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar51 + 0x90));
      *(float *)(lVar51 + 0x98) = fVar80 + *(float *)(lVar51 + 0x98);
      if (*(uint *)(lVar48 + 0x18) <= uVar16) goto LAB_04caa4c0;
      lVar51 = lVar48 + lVar43 * 0x178;
      *(ulong *)(lVar51 + 0xb8) =
           CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar51 + 0xb8) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar51 + 0xb8));
      *(float *)(lVar51 + 0xc0) = fVar80 + *(float *)(lVar51 + 0xc0);
      if (*(uint *)(lVar48 + 0x18) <= uVar16) goto LAB_04caa4c0;
      lVar51 = lVar48 + lVar43 * 0x178;
      uVar28 = *(undefined8 *)(lVar51 + 0xe0);
      fVar52 = *(float *)(lVar51 + 0xe8);
LAB_04ca870c:
      *(ulong *)(lVar51 + 0xe0) =
           CONCAT44(fVar71 + (float)((ulong)uVar28 >> 0x20),fVar55 + (float)uVar28);
      *(float *)(lVar51 + 0xe8) = fVar80 + fVar52;
      if (iVar21 == 0) goto LAB_04ca8720;
LAB_04ca8648:
      if (iVar21 == 1) {
        pcVar38 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_04ca872c;
      }
      goto LAB_04ca8744;
    }
    if (((int)uVar4 < (int)unaff_x19[0x6c]) && ((int)unaff_x19[0x61] == 5)) {
      if (uVar16 < uVar47) {
        if (*(uint *)(lVar48 + lVar43 * 0x178 + 0x60) != uStack000000000000003c) goto LAB_04ca852c;
        lVar51 = lVar48 + lVar43 * 0x178;
        *(ulong *)(lVar51 + 0x68) =
             CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar51 + 0x68) >> 0x20),
                      fVar55 + (float)*(undefined8 *)(lVar51 + 0x68));
        *(float *)(lVar51 + 0x70) = fVar80 + *(float *)(lVar51 + 0x70);
        if (uVar16 < *(uint *)(lVar48 + 0x18)) {
          lVar51 = lVar48 + lVar43 * 0x178;
          *(ulong *)(lVar51 + 0x90) =
               CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar51 + 0x90) >> 0x20),
                        fVar55 + (float)*(undefined8 *)(lVar51 + 0x90));
          *(float *)(lVar51 + 0x98) = fVar80 + *(float *)(lVar51 + 0x98);
          if (uVar16 < *(uint *)(lVar48 + 0x18)) {
            lVar51 = lVar48 + lVar43 * 0x178;
            *(ulong *)(lVar51 + 0xb8) =
                 CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar51 + 0xb8) >> 0x20),
                          fVar55 + (float)*(undefined8 *)(lVar51 + 0xb8));
            *(float *)(lVar51 + 0xc0) = fVar80 + *(float *)(lVar51 + 0xc0);
            if (uVar16 < *(uint *)(lVar48 + 0x18)) {
              lVar51 = lVar48 + lVar43 * 0x178;
              uVar28 = *(undefined8 *)(lVar51 + 0xe0);
              fVar52 = *(float *)(lVar51 + 0xe8);
              goto LAB_04ca870c;
            }
          }
        }
      }
      goto LAB_04caa4c0;
    }
  }
LAB_04ca852c:
  if (uVar47 <= uVar16) goto LAB_04caa4c0;
  if (DAT_0722a13e == '\0') {
    thunk_FUN_0159f088(plVar49);
    DAT_0722a13e = '\x01';
  }
  lVar36 = lVar48 + lVar43 * 0x178;
  uVar67 = *(undefined4 *)(*(undefined8 **)(*plVar49 + 0xb8) + 1);
  *(undefined8 *)(lVar36 + 0x68) = **(undefined8 **)(*plVar49 + 0xb8);
  *(undefined4 *)(lVar36 + 0x70) = uVar67;
  if (*(uint *)(lVar48 + 0x18) <= uVar16) goto LAB_04caa4c0;
  lVar36 = lVar48 + lVar43 * 0x178;
  uVar67 = *(undefined4 *)(*(undefined8 **)(*plVar49 + 0xb8) + 1);
  *(undefined8 *)(lVar36 + 0x90) = **(undefined8 **)(*plVar49 + 0xb8);
  *(undefined4 *)(lVar36 + 0x98) = uVar67;
  if (*(uint *)(lVar48 + 0x18) <= uVar16) goto LAB_04caa4c0;
  lVar36 = lVar48 + lVar43 * 0x178;
  uVar67 = *(undefined4 *)(*(undefined8 **)(*plVar49 + 0xb8) + 1);
  *(undefined8 *)(lVar36 + 0xb8) = **(undefined8 **)(*plVar49 + 0xb8);
  *(undefined4 *)(lVar36 + 0xc0) = uVar67;
  if (*(uint *)(lVar48 + 0x18) <= uVar16) goto LAB_04caa4c0;
  lVar36 = lVar48 + lVar43 * 0x178;
  uVar67 = *(undefined4 *)(*(undefined8 **)(*plVar49 + 0xb8) + 1);
  *(undefined8 *)(lVar36 + 0xe0) = **(undefined8 **)(*plVar49 + 0xb8);
  *(undefined4 *)(lVar36 + 0xe8) = uVar67;
  if (*(uint *)(lVar48 + 0x18) <= uVar16) goto LAB_04caa4c0;
  *(undefined1 *)(lVar51 + 400) = 0;
  if (iVar21 != 0) goto LAB_04ca8648;
LAB_04ca8720:
  pcVar38 = *(code **)(*unaff_x19 + 0x8d8);
LAB_04ca872c:
  (*pcVar38)();
LAB_04ca8744:
  if ((*in_stack_00000180 == 0) || (lVar51 = *(long *)(*in_stack_00000180 + 0x38), lVar51 == 0))
  goto LAB_04caa2e0;
  if (*(uint *)(lVar51 + 0x18) <= uVar16) goto LAB_04caa4c0;
  lVar51 = lVar51 + lVar43 * 0x178;
  uVar28 = *(undefined8 *)(lVar51 + 0x114);
  *(undefined8 *)(lVar51 + 0x114) =
       CONCAT44(fVar71 + (float)((ulong)uVar28 >> 0x20),fVar55 + (float)uVar28);
  *(float *)(lVar51 + 0x11c) = fVar80 + *(float *)(lVar51 + 0x11c);
  if ((*in_stack_00000180 == 0) || (lVar51 = *(long *)(*in_stack_00000180 + 0x38), lVar51 == 0))
  goto LAB_04caa2e0;
  if (*(uint *)(lVar51 + 0x18) <= uVar16) goto LAB_04caa4c0;
  lVar51 = lVar51 + lVar43 * 0x178;
  *(ulong *)(lVar51 + 0x108) =
       CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar51 + 0x108) >> 0x20),
                fVar55 + (float)*(undefined8 *)(lVar51 + 0x108));
  *(float *)(lVar51 + 0x110) = fVar80 + *(float *)(lVar51 + 0x110);
  if ((*in_stack_00000180 == 0) || (lVar51 = *(long *)(*in_stack_00000180 + 0x38), lVar51 == 0))
  goto LAB_04caa2e0;
  if (*(uint *)(lVar51 + 0x18) <= uVar16) goto LAB_04caa4c0;
  lVar51 = lVar51 + lVar43 * 0x178;
  *(ulong *)(lVar51 + 0x120) =
       CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar51 + 0x120) >> 0x20),
                fVar55 + (float)*(undefined8 *)(lVar51 + 0x120));
  *(float *)(lVar51 + 0x128) = fVar80 + *(float *)(lVar51 + 0x128);
  if ((*in_stack_00000180 == 0) || (lVar51 = *(long *)(*in_stack_00000180 + 0x38), lVar51 == 0))
  goto LAB_04caa2e0;
  if (*(uint *)(lVar51 + 0x18) <= uVar16) goto LAB_04caa4c0;
  lVar51 = lVar51 + lVar43 * 0x178;
  *(float *)(lVar51 + 300) = fVar55 + *(float *)(lVar51 + 300);
  *(ulong *)(lVar51 + 0x130) =
       CONCAT44(fVar80 + (float)((ulong)*(undefined8 *)(lVar51 + 0x130) >> 0x20),
                fVar71 + (float)*(undefined8 *)(lVar51 + 0x130));
  lVar51 = *in_stack_00000180;
  if ((lVar51 == 0) || (lVar36 = *(long *)(lVar51 + 0x38), lVar36 == 0)) goto LAB_04caa2e0;
  uVar47 = *(uint *)(lVar36 + 0x18);
  if (uVar47 <= uVar16) goto LAB_04caa4c0;
  lVar41 = lVar36 + lVar43 * 0x178;
  uVar27 = CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar41 + 0x138) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar41 + 0x138));
  fVar52 = fVar71 + *(float *)(lVar41 + 0x148);
  uVar26 = (ulong)(uint)fVar52;
  uVar66 = CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar41 + 0x140) >> 0x20),
                    fVar71 + (float)*(undefined8 *)(lVar41 + 0x140));
  *(ulong *)(lVar41 + 0x138) = uVar27;
  *(ulong *)(lVar41 + 0x140) = uVar66;
  *(float *)(lVar41 + 0x148) = fVar52;
  if (uVar4 == uVar19) {
    uVar19 = *in_stack_00000178 - 1;
    if (uVar16 == uVar19) goto LAB_04ca8950;
  }
  else {
    lVar51 = *(long *)(lVar51 + 0x50);
    if (lVar51 == 0) goto LAB_04caa2e0;
    if (*(uint *)(lVar51 + 0x18) <= uVar19) goto LAB_04caa4c0;
    lVar41 = (long)(int)uVar19;
    lVar44 = lVar51 + lVar41 * 0x60;
    uVar66 = (ulong)(uint)*(float *)(lVar44 + 0x5c);
    fVar52 = fVar71 + *(float *)(lVar44 + 0x58);
    uVar27 = (ulong)(uint)fVar52;
    fVar57 = fVar55 + *(float *)(lVar44 + 0x5c);
    uVar26 = (ulong)(uint)fVar57;
    *(ulong *)(lVar44 + 0x50) =
         CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar44 + 0x50) >> 0x20),
                  fVar71 + (float)*(undefined8 *)(lVar44 + 0x50));
    *(float *)(lVar44 + 0x58) = fVar52;
    *(float *)(lVar44 + 0x5c) = fVar57;
    if (uVar47 <= *(uint *)(lVar44 + 0x38)) goto LAB_04caa4c0;
    uVar67 = *(undefined4 *)(lVar36 + (long)(int)*(uint *)(lVar44 + 0x38) * 0x178 + 0x114);
    lVar51 = lVar51 + lVar41 * 0x60;
    *(float *)(lVar51 + 0x74) = fVar52;
    *(undefined4 *)(lVar51 + 0x70) = uVar67;
    lVar51 = *in_stack_00000180;
    if ((lVar51 == 0) || (lVar36 = *(long *)(lVar51 + 0x50), lVar36 == 0)) goto LAB_04caa2e0;
    if (*(uint *)(lVar36 + 0x18) <= uVar19) goto LAB_04caa4c0;
    lVar51 = *(long *)(lVar51 + 0x38);
    if (lVar51 == 0) goto LAB_04caa2e0;
    uVar19 = *(uint *)(lVar36 + lVar41 * 0x60 + 0x44);
    if (*(uint *)(lVar51 + 0x18) <= uVar19) goto LAB_04caa4c0;
    lVar36 = lVar36 + lVar41 * 0x60;
    *(undefined4 *)(lVar36 + 0x78) = *(undefined4 *)(lVar51 + (long)(int)uVar19 * 0x178 + 0x120);
    *(undefined4 *)(lVar36 + 0x7c) = *(undefined4 *)(lVar36 + 0x50);
    uVar19 = *in_stack_00000178 - 1;
LAB_04ca8950:
    if (uVar16 == uVar19) {
      lVar51 = *in_stack_00000180;
      if ((lVar51 == 0) || (lVar36 = *(long *)(lVar51 + 0x50), lVar36 == 0)) goto LAB_04caa2e0;
      if (*(uint *)(lVar36 + 0x18) <= uVar4) goto LAB_04caa4c0;
      lVar41 = lVar36 + lVar45 * 0x60;
      uVar66 = (ulong)(uint)*(float *)(lVar41 + 0x5c);
      uVar27 = CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar41 + 0x50) >> 0x20),
                        fVar71 + (float)*(undefined8 *)(lVar41 + 0x50));
      fVar52 = fVar71 + *(float *)(lVar41 + 0x58);
      fVar55 = fVar55 + *(float *)(lVar41 + 0x5c);
      uVar26 = (ulong)(uint)fVar55;
      *(ulong *)(lVar41 + 0x50) = uVar27;
      *(float *)(lVar41 + 0x58) = fVar52;
      *(float *)(lVar41 + 0x5c) = fVar55;
      lVar51 = *(long *)(lVar51 + 0x38);
      if (lVar51 == 0) goto LAB_04caa2e0;
      if (*(uint *)(lVar51 + 0x18) <= *(uint *)(lVar41 + 0x38)) goto LAB_04caa4c0;
      uVar67 = *(undefined4 *)(lVar51 + (long)(int)*(uint *)(lVar41 + 0x38) * 0x178 + 0x114);
      lVar36 = lVar36 + lVar45 * 0x60;
      *(float *)(lVar36 + 0x74) = fVar52;
      *(undefined4 *)(lVar36 + 0x70) = uVar67;
      lVar51 = *in_stack_00000180;
      if ((lVar51 == 0) || (lVar36 = *(long *)(lVar51 + 0x50), lVar36 == 0)) goto LAB_04caa2e0;
      if (*(uint *)(lVar36 + 0x18) <= uVar4) goto LAB_04caa4c0;
      lVar51 = *(long *)(lVar51 + 0x38);
      if (lVar51 == 0) goto LAB_04caa2e0;
      uVar19 = *(uint *)(lVar36 + lVar45 * 0x60 + 0x44);
      if (*(uint *)(lVar51 + 0x18) <= uVar19) goto LAB_04caa4c0;
      lVar36 = lVar36 + lVar45 * 0x60;
      *(undefined4 *)(lVar36 + 0x78) = *(undefined4 *)(lVar51 + (long)(int)uVar19 * 0x178 + 0x120);
      *(undefined4 *)(lVar36 + 0x7c) = *(undefined4 *)(lVar36 + 0x50);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar29 = FUN_028ff808(uVar33,0);
  if (((((uVar29 & 1) == 0) && (1 < uVar33 - 0x2010)) && (uVar33 != 0xad)) && (uVar33 != 0x2d)) {
    if (bVar13) {
      if (((uVar50 != 1) && ((int)uVar16 < (int)(*(uint *)(lVar48 + 0x18) - 1))) &&
         (((int)uVar16 < (int)*in_stack_00000178 && ((uVar33 == 0x2019 || (uVar33 == 0x27)))))) {
        if (*(uint *)(lVar48 + 0x18) <= uVar50 - 2) goto LAB_04caa4c0;
        uVar7 = *(undefined2 *)(lVar48 + lVar25 + -0x430);
        if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar29 = FUN_028ff808(uVar7,0);
        if ((uVar29 & 1) != 0) {
          if (*(uint *)(lVar48 + 0x18) <= uVar50) goto LAB_04caa4c0;
          uVar7 = *(undefined2 *)(lVar48 + lVar25 + -0x140);
          if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar29 = FUN_028ff808(uVar7,0);
          if ((uVar29 & 1) != 0) goto LAB_04ca8b6c;
        }
      }
LAB_04ca8e0c:
      if (uVar16 == *in_stack_00000178 - 1) {
        if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar29 = FUN_028ff808(uVar33,0);
        iVar21 = iVar46;
        if ((uVar29 & 1) == 0) goto LAB_04ca8e4c;
      }
      else {
LAB_04ca8e4c:
        iVar21 = uVar50 - 2;
      }
      lVar51 = *in_stack_00000180;
      if (lVar51 == 0) goto LAB_04caa2e0;
      lVar36 = *(long *)(lVar51 + 0x40);
      if (lVar36 == 0) goto LAB_04caa2e0;
      uVar19 = *(uint *)(lVar51 + 0x24);
      iVar22 = *(int *)(lVar36 + 0x18);
      if (iVar22 < (int)(uVar19 + 1)) {
        if (*(int *)(*(long *)PTR_DAT_06d9b5f8 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        FUN_022de6e4((long *)(lVar51 + 0x40),iVar22 + 1,*(undefined8 *)PTR_DAT_06da6d78);
        lVar51 = *in_stack_00000180;
        if (lVar51 == 0) goto LAB_04caa2e0;
      }
      lVar51 = *(long *)(lVar51 + 0x40);
      if (lVar51 == 0) goto LAB_04caa2e0;
      if (*(uint *)(lVar51 + 0x18) <= uVar19) goto LAB_04caa4c0;
      lVar51 = lVar51 + (long)(int)uVar19 * 0x18;
      *(long **)(lVar51 + 0x20) = unaff_x19;
      *(uint *)(lVar51 + 0x28) = uVar17;
      *(int *)(lVar51 + 0x2c) = iVar21;
      *(uint *)(lVar51 + 0x30) = (iVar21 - uVar17) + 1;
      thunk_FUN_01656ef8();
      lVar51 = unaff_x19[0x73];
      if (lVar51 == 0) goto LAB_04caa2e0;
      lVar36 = *(long *)(lVar51 + 0x50);
      *(int *)(lVar51 + 0x24) = *(int *)(lVar51 + 0x24) + 1;
      if (lVar36 == 0) goto LAB_04caa2e0;
      if (*(uint *)(lVar36 + 0x18) <= uVar4) goto LAB_04caa4c0;
      lVar36 = lVar36 + lVar45 * 0x60;
      bVar13 = false;
      fStack00000000000000cc = (float)((int)fStack00000000000000cc + 1);
      *(int *)(lVar36 + 0x34) = *(int *)(lVar36 + 0x34) + 1;
    }
    else {
      if (uVar50 == 1) {
        if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar19 = FUN_028ff740(uVar33,0);
        if (((uVar33 == 0x200b) || (((uVar20 | uVar19 ^ 1) & 1) != 0)) || (*in_stack_00000178 == 1))
        goto LAB_04ca8e0c;
      }
      bVar13 = false;
    }
  }
  else {
    if (!bVar13) {
      uVar17 = uVar16;
    }
    if (uVar16 == *in_stack_00000178 - 1) {
      lVar51 = *in_stack_00000180;
      if (lVar51 == 0) goto LAB_04caa2e0;
      lVar36 = *(long *)(lVar51 + 0x40);
      if (lVar36 == 0) goto LAB_04caa2e0;
      uVar19 = *(uint *)(lVar51 + 0x24);
      iVar21 = *(int *)(lVar36 + 0x18);
      if (iVar21 < (int)(uVar19 + 1)) {
        if (*(int *)(*(long *)PTR_DAT_06d9b5f8 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        FUN_022de6e4((long *)(lVar51 + 0x40),iVar21 + 1,*(undefined8 *)PTR_DAT_06da6d78);
        lVar51 = *in_stack_00000180;
        if (lVar51 == 0) goto LAB_04caa2e0;
      }
      lVar51 = *(long *)(lVar51 + 0x40);
      if (lVar51 == 0) goto LAB_04caa2e0;
      if (*(uint *)(lVar51 + 0x18) <= uVar19) goto LAB_04caa4c0;
      lVar51 = lVar51 + (long)(int)uVar19 * 0x18;
      *(long **)(lVar51 + 0x20) = unaff_x19;
      *(uint *)(lVar51 + 0x28) = uVar17;
      *(uint *)(lVar51 + 0x2c) = uVar16;
      *(uint *)(lVar51 + 0x30) = uVar50 - uVar17;
      thunk_FUN_01656ef8();
      lVar51 = unaff_x19[0x73];
      if (lVar51 == 0) goto LAB_04caa2e0;
      lVar36 = *(long *)(lVar51 + 0x50);
      *(int *)(lVar51 + 0x24) = *(int *)(lVar51 + 0x24) + 1;
      if (lVar36 == 0) goto LAB_04caa2e0;
      if (*(uint *)(lVar36 + 0x18) <= uVar4) goto LAB_04caa4c0;
      lVar36 = lVar36 + lVar45 * 0x60;
      fStack00000000000000cc = (float)((int)fStack00000000000000cc + 1);
      *(int *)(lVar36 + 0x34) = *(int *)(lVar36 + 0x34) + 1;
LAB_04ca8b6c:
      bVar13 = true;
    }
    else {
      bVar13 = true;
    }
  }
  lVar51 = *in_stack_00000180;
  if ((lVar51 == 0) || (lVar45 = *(long *)(lVar51 + 0x38), lVar45 == 0)) goto LAB_04caa2e0;
  if (*(uint *)(lVar45 + 0x18) <= uVar16) goto LAB_04caa4c0;
  if ((*(byte *)(lVar45 + lVar43 * 0x178 + 0x18c) >> 2 & 1) == 0) {
    plVar49 = (long *)PTR_DAT_06e12318;
    if (!bVar9) {
      bVar9 = false;
      goto LAB_04ca9160;
    }
    if (*(uint *)(lVar45 + 0x18) <= uVar50 - 2) goto LAB_04caa4c0;
LAB_04ca8bcc:
    lVar36 = *unaff_x19;
    uVar19 = *(uint *)(lVar45 + lVar25 + -0x334);
    uVar67 = *(undefined4 *)(lVar45 + lVar25 + -0x2f8);
LAB_04ca90ec:
    uVar66 = (ulong)uVar19;
    uVar27 = (ulong)(uint)fStack0000000000000074;
    uVar26 = (ulong)uStack0000000000000078;
    (**(code **)(lVar36 + 0x908))
              (in_stack_00000080._4_4_,uVar27,uVar26,uVar66,fStack00000000000000f4,0,
               in_stack_00000088,uVar67);
    lVar51 = *plVar49;
LAB_04ca912c:
    if (*(int *)(lVar51 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar51 = *plVar49;
    }
LAB_04ca913c:
    bVar9 = false;
    fStack00000000000000f4 = *(float *)(*(long *)(lVar51 + 0xb8) + 0x1730);
    fStack0000000000000120 = 0.0;
    in_stack_000000f0 = 0.0;
  }
  else {
    lVar36 = lVar45 + lVar43 * 0x178;
    iVar21 = *(int *)(lVar36 + 0x60);
    *(int *)(lVar36 + 0x168) = iVar18;
    if ((((int)unaff_x19[0x6b] < (int)uVar16) || ((int)unaff_x19[0x6c] < (int)uVar4)) ||
       (((int)unaff_x19[0x61] == 5 && (iVar21 + 1 != (int)unaff_x19[0x6d])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (uVar33 != 0x200b && (uVar20 & 1) == 0) {
      fVar52 = *(float *)(lVar45 + lVar43 * 0x178 + 0x15c);
      if (fStack0000000000000120 <= fVar52) {
        fStack0000000000000120 = fVar52;
      }
      uVar26 = (ulong)(uint)fStack0000000000000120;
      if (in_stack_000000f0 <= ABS(fVar77)) {
        in_stack_000000f0 = ABS(fVar77);
      }
      if (iVar21 != uStack0000000000000070) {
        if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar51 = *in_stack_00000180;
          if (lVar51 == 0) goto LAB_04caa2e0;
          lVar45 = *(long *)(*(long *)PTR_DAT_06e12318 + 0xb8);
        }
        else {
          lVar45 = *(long *)(*(long *)PTR_DAT_06e12318 + 0xb8);
        }
        fStack00000000000000f4 = *(float *)(lVar45 + 0x1730);
      }
      lVar51 = *(long *)(lVar51 + 0x38);
      if (lVar51 == 0) goto LAB_04caa2e0;
      if (*(uint *)(lVar51 + 0x18) <= uVar16) goto LAB_04caa4c0;
      if (unaff_x19[0x1e] == 0) goto LAB_04caa2e0;
      fVar57 = *(float *)(lVar51 + lVar43 * 0x178 + 0x144);
      fVar52 = (float)FUN_04ab19b8(unaff_x19[0x1e] + 0x28,0);
      fVar57 = fVar57 + fStack0000000000000120 * fVar52;
      if (fVar57 <= fStack00000000000000f4) {
        fStack00000000000000f4 = fVar57;
      }
      uVar27 = (ulong)(uint)fStack00000000000000f4;
      uStack0000000000000070 = iVar21;
    }
    plVar49 = (long *)PTR_DAT_06e12318;
    if (!bVar9) {
      if ((((uVar33 == 0xd) || ((uVar33 | 1) == 0xb)) || ((int)uVar3 < (int)uVar16)) || (!bVar1)) {
LAB_04ca9044:
        bVar9 = false;
        goto LAB_04ca9160;
      }
      if (uVar16 == uVar3) {
        if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar29 = FUN_029007b8(uVar33,0);
        if ((uVar29 & 1) != 0) goto LAB_04ca9044;
      }
      if ((*in_stack_00000180 == 0) || (lVar51 = *(long *)(*in_stack_00000180 + 0x38), lVar51 == 0))
      goto LAB_04caa2e0;
      if (*(uint *)(lVar51 + 0x18) <= uVar16) goto LAB_04caa4c0;
      lVar51 = lVar51 + lVar43 * 0x178;
      in_stack_00000088 = *(float *)(lVar51 + 0x15c);
      in_stack_00000080._4_4_ = *(float *)(lVar51 + 0x114);
      fVar52 = in_stack_00000088;
      if (fStack0000000000000120 != 0.0) {
        fVar52 = fStack0000000000000120;
      }
      uVar26 = (ulong)(uint)fVar52;
      uStack000000000000008c = *(uint *)(lVar51 + 0x164);
      uStack0000000000000078 = 0;
      fVar57 = fVar77;
      if (fStack0000000000000120 != 0.0) {
        fVar57 = in_stack_000000f0;
      }
      uVar27 = (ulong)(uint)fVar57;
      fStack0000000000000074 = fStack00000000000000f4;
      in_stack_000000f0 = fVar57;
      fStack0000000000000120 = fVar52;
    }
    if (*in_stack_00000178 == 1) {
      if ((*in_stack_00000180 != 0) && (lVar51 = *(long *)(*in_stack_00000180 + 0x38), lVar51 != 0))
      {
        if (uVar16 < *(uint *)(lVar51 + 0x18)) {
          lVar51 = lVar51 + lVar43 * 0x178;
          lVar36 = *unaff_x19;
          uVar19 = *(uint *)(lVar51 + 0x120);
          uVar67 = *(undefined4 *)(lVar51 + 0x15c);
          goto LAB_04ca90ec;
        }
        goto LAB_04caa4c0;
      }
      goto LAB_04caa2e0;
    }
    if ((uVar16 == uVar2) || ((int)uVar3 <= (int)uVar16)) {
      if ((*in_stack_00000180 != 0) && (lVar51 = *(long *)(*in_stack_00000180 + 0x38), lVar51 != 0))
      {
        if (uVar33 != 0x200b && (uVar20 & 1) == 0) {
          lVar45 = lVar43;
          if (*(uint *)(lVar51 + 0x18) <= uVar16) goto LAB_04caa4c0;
        }
        else {
          lVar45 = lVar42;
          if (*(uint *)(lVar51 + 0x18) <= uVar3) goto LAB_04caa4c0;
        }
        lVar51 = lVar51 + lVar45 * 0x178;
        uVar66 = (ulong)*(uint *)(lVar51 + 0x120);
        uVar27 = (ulong)(uint)fStack0000000000000074;
        uVar26 = (ulong)uStack0000000000000078;
        (**(code **)(*unaff_x19 + 0x908))
                  (in_stack_00000080._4_4_,uVar27,uVar26,uVar66,fStack00000000000000f4,0,
                   in_stack_00000088,*(undefined4 *)(lVar51 + 0x15c));
        lVar51 = *plVar49;
        goto LAB_04ca912c;
      }
      goto LAB_04caa2e0;
    }
    if (!bVar1) {
      if ((*in_stack_00000180 != 0) && (lVar45 = *(long *)(*in_stack_00000180 + 0x38), lVar45 != 0))
      {
        if (uVar50 - 2 < *(uint *)(lVar45 + 0x18)) goto LAB_04ca8bcc;
        goto LAB_04caa4c0;
      }
      goto LAB_04caa2e0;
    }
    if ((int)uVar16 < (int)(*in_stack_00000178 - 1)) {
      if ((*in_stack_00000180 != 0) && (lVar51 = *(long *)(*in_stack_00000180 + 0x38), lVar51 != 0))
      {
        if (*(uint *)(lVar51 + 0x18) <= uVar50) goto LAB_04caa4c0;
        uVar29 = FUN_048097c4(uStack000000000000008c,*(undefined4 *)(lVar51 + lVar25),0);
        if ((uVar29 & 1) != 0) {
          bVar9 = true;
          goto LAB_04ca9160;
        }
        if ((*in_stack_00000180 != 0) &&
           (lVar51 = *(long *)(*in_stack_00000180 + 0x38), lVar51 != 0)) {
          if (uVar16 < *(uint *)(lVar51 + 0x18)) {
            lVar51 = lVar51 + lVar43 * 0x178;
            uVar66 = (ulong)*(uint *)(lVar51 + 0x120);
            uVar27 = (ulong)(uint)fStack0000000000000074;
            uVar26 = (ulong)uStack0000000000000078;
            (**(code **)(*unaff_x19 + 0x908))
                      (in_stack_00000080._4_4_,uVar27,uVar26,uVar66,fStack00000000000000f4,0,
                       in_stack_00000088,*(undefined4 *)(lVar51 + 0x15c));
            lVar51 = *plVar49;
            if (*(int *)(lVar51 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar51 = *plVar49;
            }
            goto LAB_04ca913c;
          }
          goto LAB_04caa4c0;
        }
      }
      goto LAB_04caa2e0;
    }
    bVar9 = true;
  }
LAB_04ca9160:
  if ((*in_stack_00000180 == 0) || (lVar51 = *(long *)(*in_stack_00000180 + 0x38), lVar51 == 0))
  goto LAB_04caa2e0;
  if (*(uint *)(lVar51 + 0x18) <= uVar16) goto LAB_04caa4c0;
  if (lVar24 == 0) goto LAB_04caa2e0;
  uVar19 = *(uint *)(lVar51 + lVar43 * 0x178 + 0x18c);
  fVar52 = (float)FUN_04ab19c8(lVar24 + 0x28,0);
  if ((uVar19 >> 6 & 1) == 0) {
    if (bVar12) {
      if ((*in_stack_00000180 == 0) || (lVar51 = *(long *)(*in_stack_00000180 + 0x38), lVar51 == 0))
      goto LAB_04caa2e0;
      if (*(uint *)(lVar51 + 0x18) <= uVar50 - 2) goto LAB_04caa4c0;
      uVar19 = *(uint *)(lVar51 + lVar25 + -0x334);
      pcVar38 = *(code **)(*unaff_x19 + 0x908);
      fVar57 = fStack00000000000000a0 * fVar52 + *(float *)(lVar51 + lVar25 + -0x310);
LAB_04ca9710:
      uVar66 = (ulong)uVar19;
      uVar27 = (ulong)(uint)fStack0000000000000094;
      uVar26 = (ulong)uStack0000000000000090;
      (*pcVar38)(fStack0000000000000098,uVar27,uVar26,uVar66,fVar57,0,fStack00000000000000a0,
                 fStack00000000000000a0);
    }
LAB_04ca9740:
    bVar12 = false;
  }
  else {
    lVar51 = *in_stack_00000180;
    if ((lVar51 == 0) || (lVar45 = *(long *)(lVar51 + 0x38), lVar45 == 0)) goto LAB_04caa2e0;
    if (*(uint *)(lVar45 + 0x18) <= uVar16) goto LAB_04caa4c0;
    *(int *)(lVar45 + lVar43 * 0x178 + 0x170) = iVar18;
    if ((((int)unaff_x19[0x6b] < (int)uVar16) || ((int)unaff_x19[0x6c] < (int)uVar4)) ||
       (((int)unaff_x19[0x61] == 5 &&
        (*(int *)(lVar45 + lVar43 * 0x178 + 0x60) + 1 != (int)unaff_x19[0x6d])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar33 == 0xd) || ((uVar33 | 1) == 0xb)) || ((int)uVar3 < (int)uVar16)) ||
       (bVar12 || !bVar1)) {
LAB_04ca92bc:
      if (!bVar12) goto LAB_04ca9740;
    }
    else {
      if (uVar16 == uVar3) {
        if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar29 = FUN_029007b8(uVar33,0);
        if ((uVar29 & 1) != 0) goto LAB_04ca92bc;
        lVar51 = *in_stack_00000180;
        if (lVar51 == 0) goto LAB_04caa2e0;
      }
      lVar51 = *(long *)(lVar51 + 0x38);
      if (lVar51 == 0) goto LAB_04caa2e0;
      if (*(uint *)(lVar51 + 0x18) <= uVar16) goto LAB_04caa4c0;
      lVar51 = lVar51 + lVar43 * 0x178;
      fStack0000000000000060 = *(float *)(lVar51 + 0x58);
      fStack00000000000000a0 = *(float *)(lVar51 + 0x15c);
      in_stack_00000058._4_4_ = *(float *)(lVar51 + 0x144);
      uVar27 = (ulong)(uint)in_stack_00000058._4_4_;
      fStack0000000000000098 = *(float *)(lVar51 + 0x114);
      fStack0000000000000094 = fVar52 * fStack00000000000000a0 + in_stack_00000058._4_4_;
      uStack0000000000000090 = 0;
    }
    uVar19 = *in_stack_00000178;
    if (uVar19 == 1) {
      if ((*in_stack_00000180 != 0) && (lVar51 = *(long *)(*in_stack_00000180 + 0x38), lVar51 != 0))
      {
        if (uVar16 < *(uint *)(lVar51 + 0x18)) {
          lVar24 = *unaff_x19;
          lVar51 = lVar51 + lVar43 * 0x178;
LAB_04ca942c:
          uVar19 = *(uint *)(lVar51 + 0x120);
          fVar57 = *(float *)(lVar51 + 0x144);
LAB_04ca9434:
          pcVar38 = *(code **)(lVar24 + 0x908);
LAB_04ca970c:
          fVar57 = fVar52 * fStack00000000000000a0 + fVar57;
          goto LAB_04ca9710;
        }
        goto LAB_04caa4c0;
      }
      goto LAB_04caa2e0;
    }
    if (uVar16 == uVar2) {
      if ((*in_stack_00000180 != 0) && (lVar51 = *(long *)(*in_stack_00000180 + 0x38), lVar51 != 0))
      {
        uVar19 = *(uint *)(lVar51 + 0x18);
        if (uVar33 == 0x200b || (uVar20 & 1) != 0) {
          if (uVar19 <= uVar3) goto LAB_04caa4c0;
        }
        else {
LAB_04ca96e8:
          lVar42 = lVar43;
          if (uVar19 <= uVar16) goto LAB_04caa4c0;
        }
LAB_04ca96f0:
        lVar51 = lVar51 + lVar42 * 0x178;
        fVar57 = *(float *)(lVar51 + 0x144);
        uVar19 = *(uint *)(lVar51 + 0x120);
        pcVar38 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_04ca970c;
      }
      goto LAB_04caa2e0;
    }
    if ((int)uVar16 < (int)uVar19) {
      lVar51 = *in_stack_00000180;
      if ((lVar51 != 0) && (lVar45 = *(long *)(lVar51 + 0x38), lVar45 != 0)) {
        if (uVar50 < *(uint *)(lVar45 + 0x18)) {
          if (*(float *)(lVar45 + lVar25 + -0x10c) == fStack0000000000000060) {
            fVar57 = *(float *)(lVar45 + lVar25 + -0x20);
            if (*(int *)(*(long *)PTR_DAT_06e5ce10 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar27 = (ulong)(uint)in_stack_00000058._4_4_;
            uVar29 = FUN_04809d04(fVar71 + fVar57,uVar27,0);
            if ((uVar29 & 1) != 0) {
              uVar19 = *in_stack_00000178;
              goto LAB_04ca9510;
            }
            lVar51 = *in_stack_00000180;
            if (lVar51 == 0) goto LAB_04caa2e0;
          }
          lVar51 = *(long *)(lVar51 + 0x38);
          if (lVar51 != 0) {
            uVar19 = *(uint *)(lVar51 + 0x18);
            if ((int)uVar16 <= (int)uVar3) goto LAB_04ca96e8;
            if (uVar3 < uVar19) goto LAB_04ca96f0;
            goto LAB_04caa4c0;
          }
          goto LAB_04caa2e0;
        }
        goto LAB_04caa4c0;
      }
      goto LAB_04caa2e0;
    }
LAB_04ca9510:
    if ((int)uVar16 < (int)uVar19) {
      iVar21 = FUN_051d2b30(lVar24,0);
      if (*(uint *)(lVar48 + 0x18) <= uVar50) goto LAB_04caa4c0;
      lVar51 = *(long *)(lVar48 + lVar25 + -0x124);
      if (lVar51 == 0) goto LAB_04caa2e0;
      iVar22 = FUN_051d2b30(lVar51,0);
      if (iVar21 != iVar22) {
        if ((*in_stack_00000180 != 0) &&
           (lVar51 = *(long *)(*in_stack_00000180 + 0x38), lVar51 != 0)) {
          if (uVar16 < *(uint *)(lVar51 + 0x18)) {
            lVar24 = *unaff_x19;
            lVar51 = lVar51 + lVar43 * 0x178;
            plVar49 = (long *)PTR_DAT_06e12318;
            goto LAB_04ca942c;
          }
          goto LAB_04caa4c0;
        }
        goto LAB_04caa2e0;
      }
    }
    plVar49 = (long *)PTR_DAT_06e12318;
    if (!bVar1) {
      if ((*in_stack_00000180 != 0) && (lVar51 = *(long *)(*in_stack_00000180 + 0x38), lVar51 != 0))
      {
        if (uVar50 - 2 < *(uint *)(lVar51 + 0x18)) {
          lVar24 = *unaff_x19;
          uVar19 = *(uint *)(lVar51 + lVar25 + -0x334);
          fVar57 = *(float *)(lVar51 + lVar25 + -0x310);
          goto LAB_04ca9434;
        }
        goto LAB_04caa4c0;
      }
      goto LAB_04caa2e0;
    }
    bVar12 = true;
  }
  if ((*in_stack_00000180 == 0) || (lVar51 = *(long *)(*in_stack_00000180 + 0x38), lVar51 == 0))
  goto LAB_04caa2e0;
  uVar19 = (uint)*(undefined8 *)(lVar51 + 0x18);
  if (uVar19 <= uVar16) goto LAB_04caa4c0;
  if ((*(byte *)(lVar51 + lVar43 * 0x178 + 0x18d) >> 1 & 1) == 0) {
    if (bVar14) {
      uVar26 = (ulong)in_stack_000000b8._4_4_;
      uVar27 = (ulong)(uint)fStack00000000000000dc;
      uVar66 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000d8,uVar27,uVar26,uVar66,fStack00000000000000c0,uVar26);
    }
LAB_04ca97b0:
    bVar14 = false;
  }
  else {
    if ((((int)unaff_x19[0x6b] < (int)uVar16) || ((int)unaff_x19[0x6c] < (int)uVar4)) ||
       (((int)unaff_x19[0x61] == 5 &&
        (*(int *)(lVar51 + lVar43 * 0x178 + 0x60) + 1 != (int)unaff_x19[0x6d])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar14) {
      if ((((uVar33 == 0xd) || ((uVar33 | 1) == 0xb)) || ((int)uVar3 < (int)uVar16)) || (!bVar1))
      goto LAB_04ca97b0;
      if (uVar16 == uVar3) {
        if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar29 = FUN_029007b8(uVar33,0);
        if ((uVar29 & 1) != 0) goto LAB_04ca97b0;
      }
      lVar24 = *plVar49;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar24 = *plVar49;
      }
      if ((*in_stack_00000180 == 0) || (lVar51 = *(long *)(*in_stack_00000180 + 0x38), lVar51 == 0))
      goto LAB_04caa2e0;
      uVar19 = (uint)*(undefined8 *)(lVar51 + 0x18);
      if (uVar19 <= uVar16) goto LAB_04caa4c0;
      lVar24 = *(long *)(lVar24 + 0xb8);
      lVar42 = lVar51 + lVar43 * 0x178;
      in_stack_00001268 = *(undefined8 *)(lVar42 + 0x180);
      in_stack_00001260 = *(undefined8 *)(lVar42 + 0x178);
      fStack00000000000000d8 = *(float *)(lVar24 + 0x1720);
      in_stack_00001270 = *(float *)(lVar42 + 0x188);
      fStack00000000000000dc = *(float *)(lVar24 + 0x1724);
      fStack00000000000000c8 = *(float *)(lVar24 + 0x1728);
      fStack00000000000000c0 = *(float *)(lVar24 + 0x172c);
      in_stack_000000b8._4_4_ = 0;
    }
    if (uVar19 <= uVar16) goto LAB_04caa4c0;
    lVar51 = lVar51 + lVar43 * 0x178;
    fVar74 = *(float *)(lVar51 + 0x120);
    fVar55 = *(float *)(lVar51 + 0x180);
    fVar71 = *(float *)(lVar51 + 0x188);
    uVar23 = *(undefined8 *)(lVar51 + 0x178);
    fVar80 = *(float *)(lVar51 + 0x184);
    uVar28 = *(undefined8 *)(lVar51 + 0x180);
    fVar69 = *(float *)(lVar51 + 0x114);
    fVar52 = *(float *)(lVar51 + 0x138);
    fVar57 = *(float *)(lVar51 + 0x13c);
    fVar58 = *(float *)(lVar51 + 0x140);
    fVar75 = *(float *)(lVar51 + 0x148);
    in_stack_00000188 = uVar23;
    fStack0000000000000190 = fVar55;
    fStack0000000000000194 = fVar80;
    in_stack_00000198 = fVar71;
    in_stack_000001a0 = in_stack_00001260;
    in_stack_000001a8 = in_stack_00001268;
    in_stack_000001b0 = in_stack_00001270;
    uVar29 = FUN_0480b0f0(&stack0x000001a0,&stack0x00000188,0);
    if ((uVar29 & 1) == 0) {
      bVar14 = (uVar20 & 1) == 0;
      if (bVar14) {
        fVar57 = fVar74;
      }
      fVar57 = fVar57 + (float)in_stack_00001268;
      fVar75 = fVar75 - in_stack_00001270;
      uVar26 = (ulong)(uint)fVar75;
      fVar58 = fVar58 + (float)((ulong)in_stack_00001268 >> 0x20);
      uVar66 = (ulong)(uint)fVar58;
      if (bVar14) {
        fVar52 = fVar69;
      }
      fVar52 = fVar52 - (float)((ulong)in_stack_00001260 >> 0x20);
      if (fVar52 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar52;
      }
      if (fStack00000000000000c8 <= fVar57) {
        fStack00000000000000c8 = fVar57;
      }
      uVar27 = (ulong)(uint)fStack00000000000000c8;
      if (fVar75 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar75;
      }
      if (fStack00000000000000c0 <= fVar58) {
        fStack00000000000000c0 = fVar58;
      }
    }
    else {
      if (fVar75 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar75;
      }
      uVar27 = (ulong)(uint)fStack00000000000000dc;
      if (fStack00000000000000c0 <= fVar58) {
        fStack00000000000000c0 = fVar58;
      }
      bVar14 = (uVar20 & 1) == 0;
      if (bVar14) {
        fVar52 = fVar69;
      }
      fVar52 = (fVar52 + (fStack00000000000000c8 - (float)in_stack_00001268)) * 0.5;
      uVar66 = (ulong)(uint)fVar52;
      fStack00000000000000dc = fVar75 - fVar71;
      uVar26 = (ulong)in_stack_000000b8._4_4_;
      if (bVar14) {
        fVar57 = fVar74;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000d8,uVar27,uVar26,uVar66,fStack00000000000000c0,uVar26);
      fStack00000000000000c8 = fVar57 + fVar55;
      in_stack_000000b8._4_4_ = 0;
      fStack00000000000000c0 = fVar58 + fVar80;
      fStack00000000000000d8 = fVar52;
      in_stack_00001260 = uVar23;
      in_stack_00001268 = uVar28;
      in_stack_00001270 = fVar71;
    }
    if (((*in_stack_00000178 == 1) || (uVar16 == uVar2)) ||
       (((int)uVar3 <= (int)uVar16 || (!bVar1)))) {
      uVar26 = (ulong)in_stack_000000b8._4_4_;
      uVar27 = (ulong)(uint)fStack00000000000000dc;
      uVar66 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000d8,uVar27,uVar26,uVar66,fStack00000000000000c0,uVar26);
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
  }
  uVar16 = *in_stack_00000178;
  iVar46 = iVar46 + 1;
  lVar25 = lVar25 + 0x178;
  bVar1 = (int)uVar16 <= (int)uVar50;
  uVar50 = uVar50 + 1;
  uVar19 = uVar4;
  if (bVar1) goto LAB_04ca9d00;
  goto LAB_04ca7b5c;
LAB_04ca9d00:
  lVar48 = *in_stack_00000180;
  if (lVar48 != 0) {
    iVar15 = uVar4 + 1;
LAB_04ca9d20:
    lVar25 = *(long *)(lVar48 + 0x60);
    if (lVar25 != 0) {
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0xd3)) goto LAB_04caa4c0;
      *(int *)(lVar25 + (long)(int)*(uint *)(unaff_x19 + 0xd3) * 0x50 + 0x28) = iVar18;
      *(uint *)(lVar48 + 0x18) = uVar16;
      lVar25 = unaff_x19[0xd6];
      iVar18 = (int)fStack00000000000000cc;
      if ((int)uVar16 < 1) {
        iVar18 = 1;
      }
      if (fStack00000000000000cc == 0.0) {
        iVar18 = 1;
      }
      *(int *)(lVar48 + 0x2c) = iVar15;
      *(int *)(lVar48 + 0x1c) = (int)lVar25;
      *(int *)(lVar48 + 0x24) = iVar18;
      *(int *)(lVar48 + 0x30) = *(int *)((long)unaff_x19 + 0x4bc) + 1;
      if (((int)unaff_x19[0x69] != 0xff) ||
         (uVar29 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar29 & 1) == 0)) {
LAB_04caa2e4:
        if ((char)unaff_x19[0xde] != '\0') {
          pcVar38 = *(code **)(*unaff_x19 + 0x798);
LAB_04caa2f8:
          (*pcVar38)();
        }
        if (*(int *)(*(long *)PTR_DAT_06dc37e8 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        FUN_04808ce4();
        return;
      }
      lVar48 = unaff_x19[0xe1];
      if (lVar48 != 0) {
        (**(code **)(lVar48 + 0x18))
                  (*(undefined8 *)(lVar48 + 0x40),*in_stack_00000180,*(undefined8 *)(lVar48 + 0x28))
        ;
      }
      if (unaff_x19[0xe7] != 0) {
        iVar18 = FUN_036e12d0(unaff_x19[0xe7],0);
        if (iVar18 != 0x19) {
          lVar48 = unaff_x19[0xe7];
          if (lVar48 == 0) goto LAB_04caa2e0;
          uVar16 = FUN_036e12d0(lVar48,0);
          FUN_036e130c(lVar48,uVar16 | 0x19,0);
        }
        if (*(int *)((long)unaff_x19 + 0x34c) != 0) {
          if ((*in_stack_00000180 == 0) ||
             (lVar48 = *(long *)(*in_stack_00000180 + 0x60), lVar48 == 0)) goto LAB_04caa2e0;
          if (*(int *)(lVar48 + 0x18) == 0) goto LAB_04caa4c0;
          FUN_051ef288(lVar48 + 0x20,1,0);
        }
        if (unaff_x19[0x7a] != 0) {
          FUN_04874e78(unaff_x19[0x7a],0);
          if ((unaff_x19[0x73] != 0) && (lVar48 = *(long *)(unaff_x19[0x73] + 0x60), lVar48 != 0)) {
            if (*(int *)(lVar48 + 0x18) == 0) {
LAB_04caa4c0:
                    /* WARNING: Subroutine does not return */
              FUN_0160eebc();
            }
            if (unaff_x19[0x7a] != 0) {
              FUN_0486f29c(unaff_x19[0x7a],*(undefined8 *)(lVar48 + 0x30),0);
              if ((unaff_x19[0x73] != 0) &&
                 (lVar48 = *(long *)(unaff_x19[0x73] + 0x60), lVar48 != 0)) {
                if (*(int *)(lVar48 + 0x18) == 0) goto LAB_04caa4c0;
                if (unaff_x19[0x7a] != 0) {
                  FUN_04870fa8(unaff_x19[0x7a],0,*(undefined8 *)(lVar48 + 0x48),0);
                  if ((unaff_x19[0x73] != 0) &&
                     (lVar48 = *(long *)(unaff_x19[0x73] + 0x60), lVar48 != 0)) {
                    if (*(int *)(lVar48 + 0x18) == 0) goto LAB_04caa4c0;
                    if (unaff_x19[0x7a] != 0) {
                      FUN_0486f54c(unaff_x19[0x7a],*(undefined8 *)(lVar48 + 0x50),0);
                      if ((unaff_x19[0x73] != 0) &&
                         (lVar48 = *(long *)(unaff_x19[0x73] + 0x60), lVar48 != 0)) {
                        if (*(int *)(lVar48 + 0x18) == 0) goto LAB_04caa4c0;
                        if (unaff_x19[0x7a] != 0) {
                          FUN_0486fab4(unaff_x19[0x7a],*(undefined8 *)(lVar48 + 0x58),0);
                          if (unaff_x19[0x7a] != 0) {
                            FUN_0487497c(unaff_x19[0x7a],0);
                            if (unaff_x19[0xe6] != 0) {
                              FUN_036e059c(unaff_x19[0xe6],unaff_x19[0x7a],0);
                              if (unaff_x19[0xe6] != 0) {
                                uVar28 = FUN_036e022c(unaff_x19[0xe6],0);
                                if (unaff_x19[0xe6] != 0) {
                                  uVar16 = FUN_036e0094(unaff_x19[0xe6],0);
                                  lVar48 = *in_stack_00000180;
                                  if (lVar48 != 0) {
                                    lVar51 = 0;
                                    lVar25 = 0;
                                    do {
                                      uVar29 = lVar25 + 1;
                                      if ((long)*(int *)(lVar48 + 0x34) <= (long)uVar29)
                                      goto LAB_04caa2e4;
                                      lVar48 = *(long *)(lVar48 + 0x60);
                                      if (lVar48 == 0) break;
                                      if (*(uint *)(lVar48 + 0x18) <= uVar29) goto LAB_04caa4c0;
                                      FUN_051ef154(lVar48 + lVar51 + 0x70,0);
                                      lVar48 = unaff_x19[0xe3];
                                      if (lVar48 == 0) break;
                                      if (*(uint *)(lVar48 + 0x18) <= uVar29) goto LAB_04caa4c0;
                                      uVar23 = *(undefined8 *)(lVar48 + lVar25 * 8 + 0x28);
                                      if (*(int *)(*(long *)PTR_DAT_06d9fd78 + 0xe0) == 0) {
                                        thunk_FUN_016466fc();
                                      }
                                      uVar30 = FUN_051d94d4(uVar23,0,0);
                                      if ((uVar30 & 1) == 0) {
                                        if (*(int *)((long)unaff_x19 + 0x34c) != 0) {
                                          if ((*in_stack_00000180 == 0) ||
                                             (lVar48 = *(long *)(*in_stack_00000180 + 0x60),
                                             lVar48 == 0)) break;
                                          if (*(uint *)(lVar48 + 0x18) <= uVar29) goto LAB_04caa4c0;
                                          FUN_051ef288(lVar48 + lVar51 + 0x70,1,0);
                                        }
                                        lVar48 = unaff_x19[0xe3];
                                        if (lVar48 == 0) break;
                                        if (*(uint *)(lVar48 + 0x18) <= uVar29) goto LAB_04caa4c0;
                                        lVar48 = *(long *)(lVar48 + lVar25 * 8 + 0x28);
                                        if (lVar48 == 0) break;
                                        lVar48 = FUN_051f9514(lVar48,0);
                                        if ((*in_stack_00000180 == 0) ||
                                           (lVar24 = *(long *)(*in_stack_00000180 + 0x60),
                                           lVar24 == 0)) break;
                                        if (*(uint *)(lVar24 + 0x18) <= uVar29) goto LAB_04caa4c0;
                                        if (lVar48 == 0) break;
                                        FUN_0486f29c(lVar48,*(undefined8 *)(lVar24 + lVar51 + 0x80),
                                                     0);
                                        lVar48 = unaff_x19[0xe3];
                                        if (lVar48 == 0) break;
                                        if (*(uint *)(lVar48 + 0x18) <= uVar29) goto LAB_04caa4c0;
                                        lVar48 = *(long *)(lVar48 + lVar25 * 8 + 0x28);
                                        if (lVar48 == 0) break;
                                        lVar48 = FUN_051f9514(lVar48,0);
                                        if ((*in_stack_00000180 == 0) ||
                                           (lVar24 = *(long *)(*in_stack_00000180 + 0x60),
                                           lVar24 == 0)) break;
                                        if (*(uint *)(lVar24 + 0x18) <= uVar29) goto LAB_04caa4c0;
                                        if (lVar48 == 0) break;
                                        FUN_04870fa8(lVar48,0,*(undefined8 *)
                                                               (lVar24 + lVar51 + 0x98),0);
                                        lVar48 = unaff_x19[0xe3];
                                        if (lVar48 == 0) break;
                                        if (*(uint *)(lVar48 + 0x18) <= uVar29) goto LAB_04caa4c0;
                                        lVar48 = *(long *)(lVar48 + lVar25 * 8 + 0x28);
                                        if (lVar48 == 0) break;
                                        lVar48 = FUN_051f9514(lVar48,0);
                                        if ((*in_stack_00000180 == 0) ||
                                           (lVar24 = *(long *)(*in_stack_00000180 + 0x60),
                                           lVar24 == 0)) break;
                                        if (*(uint *)(lVar24 + 0x18) <= uVar29) goto LAB_04caa4c0;
                                        if (lVar48 == 0) break;
                                        FUN_0486f54c(lVar48,*(undefined8 *)(lVar24 + lVar51 + 0xa0),
                                                     0);
                                        lVar48 = unaff_x19[0xe3];
                                        if (lVar48 == 0) break;
                                        if (*(uint *)(lVar48 + 0x18) <= uVar29) goto LAB_04caa4c0;
                                        lVar48 = *(long *)(lVar48 + lVar25 * 8 + 0x28);
                                        if (lVar48 == 0) break;
                                        lVar48 = FUN_051f9514(lVar48,0);
                                        if ((*in_stack_00000180 == 0) ||
                                           (lVar24 = *(long *)(*in_stack_00000180 + 0x60),
                                           lVar24 == 0)) break;
                                        if (*(uint *)(lVar24 + 0x18) <= uVar29) goto LAB_04caa4c0;
                                        if (lVar48 == 0) break;
                                        FUN_0486fab4(lVar48,*(undefined8 *)(lVar24 + lVar51 + 0xa8),
                                                     0);
                                        lVar48 = unaff_x19[0xe3];
                                        if (lVar48 == 0) break;
                                        if (*(uint *)(lVar48 + 0x18) <= uVar29) goto LAB_04caa4c0;
                                        lVar48 = *(long *)(lVar48 + lVar25 * 8 + 0x28);
                                        if ((lVar48 == 0) ||
                                           (lVar48 = FUN_051f9514(lVar48,0), lVar48 == 0)) break;
                                        FUN_0487497c(lVar48,0);
                                        lVar48 = unaff_x19[0xe3];
                                        if (lVar48 == 0) break;
                                        if (*(uint *)(lVar48 + 0x18) <= uVar29) goto LAB_04caa4c0;
                                        lVar48 = *(long *)(lVar48 + lVar25 * 8 + 0x28);
                                        if (lVar48 == 0) break;
                                        lVar48 = FUN_03663ff0(lVar48,0);
                                        lVar24 = unaff_x19[0xe3];
                                        if (lVar24 == 0) break;
                                        if (*(uint *)(lVar24 + 0x18) <= uVar29) goto LAB_04caa4c0;
                                        lVar24 = *(long *)(lVar24 + lVar25 * 8 + 0x28);
                                        if ((lVar24 == 0) ||
                                           (uVar23 = FUN_051f9514(lVar24,0), lVar48 == 0)) break;
                                        FUN_036e059c(lVar48,uVar23,0);
                                        lVar48 = unaff_x19[0xe3];
                                        if (lVar48 == 0) break;
                                        if (*(uint *)(lVar48 + 0x18) <= uVar29) goto LAB_04caa4c0;
                                        lVar48 = *(long *)(lVar48 + lVar25 * 8 + 0x28);
                                        if ((lVar48 == 0) ||
                                           (lVar48 = FUN_03663ff0(lVar48,0), lVar48 == 0)) break;
                                        FUN_036e0194(uVar28,uVar27,uVar26,uVar66,lVar48,0);
                                        lVar48 = unaff_x19[0xe3];
                                        if (lVar48 == 0) break;
                                        if (*(uint *)(lVar48 + 0x18) <= uVar29) goto LAB_04caa4c0;
                                        lVar48 = *(long *)(lVar48 + lVar25 * 8 + 0x28);
                                        if ((lVar48 == 0) ||
                                           (lVar48 = FUN_03663ff0(lVar48,0), lVar48 == 0)) break;
                                        FUN_036e00d0(lVar48,uVar16 & 1,0);
                                        lVar48 = unaff_x19[0xe3];
                                        if (lVar48 == 0) break;
                                        if (*(uint *)(lVar48 + 0x18) <= uVar29) goto LAB_04caa4c0;
                                        plVar49 = *(long **)(lVar48 + lVar25 * 8 + 0x28);
                                        uVar17 = (**(code **)(*unaff_x19 + 0x2b8))();
                                        if (plVar49 == (long *)0x0) break;
                                        (**(code **)(*plVar49 + 0x2c8))
                                                  (plVar49,uVar17 & 1,
                                                   *(undefined8 *)(*plVar49 + 0x2d0));
                                      }
                                      lVar48 = *in_stack_00000180;
                                      lVar25 = lVar25 + 1;
                                      lVar51 = lVar51 + 0x50;
                                    } while (lVar48 != 0);
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
        }
      }
    }
  }
LAB_04caa2e0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


