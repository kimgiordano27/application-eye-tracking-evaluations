/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Transformers.XRGeneralGrabTransformer$$set_permittedDisplacementAxes
ENTRY_POINT: 087d9648
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Type propagation algorithm not settling */

void UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer__set_permittedDisplacementAxes
               (long param_1,undefined1 *param_2,undefined8 param_3,size_t param_4)

{
  bool bVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined *puVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  ulong extraout_x1_07;
  ulong extraout_x1_08;
  ulong extraout_x1_09;
  ulong extraout_x1_10;
  ulong extraout_x1_11;
  ulong extraout_x1_12;
  ulong extraout_x1_13;
  undefined1 uVar25;
  char cVar26;
  long *plVar27;
  long lVar28;
  undefined8 *puVar29;
  uint uVar30;
  float *pfVar31;
  code *pcVar32;
  long lVar33;
  float *pfVar34;
  long *plVar35;
  long lVar36;
  long lVar37;
  long *unaff_x19;
  uint unaff_w20;
  int iVar38;
  uint unaff_w21;
  long lVar39;
  undefined8 *unaff_x23;
  int *piVar40;
  long *unaff_x25;
  uint unaff_w26;
  ulong uVar41;
  uint uVar42;
  long *plVar43;
  long *unaff_x28;
  uint unaff_w29;
  uint uVar44;
  ushort uVar45;
  float fVar46;
  undefined4 uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  float fVar55;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar56;
  float fVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float unaff_s13;
  float unaff_s15;
  undefined1 auVar70 [16];
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
  uint uStack0000000000000058;
  int iStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  undefined4 uStack000000000000008c;
  float fStack0000000000000090;
  undefined8 in_stack_00000098;
  float fStack00000000000000a0;
  ulong in_stack_000000a8;
  undefined1 (*in_stack_000000b0) [16];
  undefined8 in_stack_000000b8;
  float fStack00000000000000c0;
  undefined8 in_stack_000000d8;
  float in_stack_000000e0;
  float fStack00000000000000e8;
  undefined8 in_stack_000000f0;
  float fStack00000000000000f8;
  float fStack00000000000000fc;
  float in_stack_00000100;
  float fStack000000000000011c;
  float in_stack_00000120;
  undefined8 in_stack_00000128;
  float fStack0000000000000130;
  float fStack0000000000000134;
  float fStack000000000000014c;
  float fStack0000000000000150;
  float fStack0000000000000154;
  float in_stack_00000158;
  float fStack000000000000016c;
  undefined8 in_stack_00000180;
  long *in_stack_00000188;
  float in_stack_000001a0;
  uint uStack00000000000001b0;
  int in_stack_000001c0;
  undefined8 *in_stack_000001d0;
  undefined8 in_stack_000001d8;
  float fStack00000000000001e0;
  float fStack00000000000001e4;
  float in_stack_000001e8;
  float in_stack_0000115c;
  float in_stack_00001168;
  float in_stack_00001174;
  float in_stack_00001180;
  float in_stack_0000118c;
  float in_stack_00001198;
  uint in_stack_0000127c;
  uint in_stack_00001318;
  float in_stack_00001324;
  float in_stack_00001328;
  float in_stack_0000132c;
  float in_stack_00001330;
  ulong in_stack_00001338;
  char in_stack_00001344;
  float in_stack_00001348;
  uint in_stack_0000134c;
  
  uVar24 = _fStack0000000000000068;
  do {
    lVar39 = *(long *)(param_1 + 0xb8);
    memcpy(param_2 + 0x350,(void *)(lVar39 + 0x810),param_4);
    FUN_065eb410(lVar39 + 0x1338,&stack0x00001350,*(undefined8 *)PTR_DAT_09337620);
    uVar20 = extraout_x1_08;
    do {
      do {
        lVar39 = unaff_x19[0x74];
        if ((lVar39 == 0) || (lVar28 = *(long *)(lVar39 + 0x38), lVar28 == 0)) goto LAB_087ddb5c;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_087ddd1c;
        lVar28 = lVar28 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * (long)(int)unaff_w29;
        uVar13 = *(uint *)(unaff_x19 + 0x97);
        *(uint *)(lVar28 + 0x5c) = uVar13;
        *(undefined4 *)(lVar28 + 0x60) = *(undefined4 *)((long)unaff_x19 + 0x4c4);
        if ((uStack00000000000001b0 == unaff_w21) ||
           ((in_stack_0000134c < 0xe && ((1 << (ulong)(in_stack_0000134c & 0x1f) & 0x2c00U) != 0))))
        {
          lVar39 = *(long *)(lVar39 + 0x50);
          if (lVar39 == 0) goto LAB_087ddb5c;
          if (*(uint *)(lVar39 + 0x18) <= uVar13) goto LAB_087ddd1c;
          if (*(int *)(lVar39 + (long)(int)uVar13 * 0x60 + 0x24) == 1) goto LAB_087d971c;
        }
        else {
          lVar39 = *(long *)(lVar39 + 0x50);
          if (lVar39 == 0) goto LAB_087ddb5c;
LAB_087d971c:
          if (*(uint *)(lVar39 + 0x18) <= uVar13) goto LAB_087ddd1c;
          *(int *)(lVar39 + (long)(int)uVar13 * 0x60 + 0x6c) = (int)unaff_x19[0x54];
        }
        if (in_stack_0000134c == 9) {
          if (unaff_x19[0x20] == 0) goto LAB_087ddb5c;
          fVar50 = (float)FUN_08a73bec(unaff_x19[0x20] + 0x28,0);
          if (unaff_x19[0x20] == 0) goto LAB_087ddb5c;
          fVar56 = (float)NEON_ucvtf((uint)*(byte *)(unaff_x19[0x20] + 0x1b1));
          fVar57 = *(float *)(unaff_x19 + 0xcb);
          auVar70 = ZEXT416((uint)fVar57);
          fVar56 = in_stack_00000180._4_4_ * fVar50 * fVar56;
          uVar20 = extraout_x1_09;
          if ((char)unaff_x19[0x1e] == '\0') {
            fStack000000000000011c = fVar56 * (float)(int)(fVar57 / fVar56);
            fVar50 = fStack000000000000011c;
            if (fStack000000000000011c <= fVar57) {
              fVar50 = fVar56 + fVar57;
            }
          }
          else {
            fStack000000000000011c = fVar56 * (float)(int)(fVar57 / fVar56);
            fVar50 = fStack000000000000011c;
            if (fVar57 <= fStack000000000000011c) {
              fVar50 = fVar57 - fVar56;
            }
          }
LAB_087d9958:
          *(float *)(unaff_x19 + 0xcb) = fVar50;
        }
        else {
          fVar50 = *(float *)(unaff_x19 + 0x5b);
          if (fVar50 == 0.0) {
            fVar50 = *(float *)(unaff_x19 + 0xcb);
            if ((char)unaff_x19[0x1e] == '\0') {
              fVar57 = (float)FUN_08a73e50(&stack0x00001290,0);
              fVar46 = *(float *)(unaff_x23 + 2);
              fVar63 = (float)FUN_08a78388(&stack0x00001280,0);
              if (unaff_x19[0x20] != 0) {
                fStack000000000000011c = *(float *)(unaff_x19 + 0x60);
                fVar56 = unaff_s15 - fStack000000000000011c;
                fVar50 = fVar50 + fVar56 * (*(float *)((long)unaff_x19 + 0x2d4) +
                                           in_stack_00000180._4_4_ * (fVar57 * fVar46 + fVar63) +
                                           in_stack_00000100 *
                                           (fStack00000000000000fc +
                                           in_stack_000000e0 + *(float *)(unaff_x19[0x20] + 0x1a4)))
                ;
                *(float *)(unaff_x19 + 0xcb) = fVar50;
                uVar20 = extraout_x1_11;
                goto joined_r0x087d989c;
              }
              goto LAB_087ddb5c;
            }
            fVar56 = (float)FUN_08a78388(&stack0x00001280,0);
            if (unaff_x19[0x20] == 0) goto LAB_087ddb5c;
            fStack000000000000011c = *(float *)(unaff_x19 + 0x60);
            auVar70 = ZEXT416((uint)(unaff_s15 - fStack000000000000011c));
            fVar50 = fVar50 - (unaff_s15 - fStack000000000000011c) *
                              (*(float *)((long)unaff_x19 + 0x2d4) +
                              in_stack_00000180._4_4_ * fVar56 +
                              in_stack_00000100 *
                              (fStack00000000000000fc +
                              in_stack_000000e0 + *(float *)(unaff_x19[0x20] + 0x1a4)));
            *(float *)(unaff_x19 + 0xcb) = fVar50;
            uVar20 = extraout_x1_10;
            if ((unaff_w26 != 0) || (in_stack_0000134c == 0x200b)) {
              auVar70 = ZEXT416((uint)(in_stack_00000100 * *(float *)(unaff_x19 + 0x5c)));
              fStack000000000000011c = in_stack_00000100;
              fVar50 = fVar50 - in_stack_00000100 * *(float *)(unaff_x19 + 0x5c);
              goto LAB_087d9958;
            }
          }
          else {
            if (((*(char *)((long)unaff_x19 + 0x2dc) != '\0') && (in_stack_0000134c < 0x3b)) &&
               ((1L << ((ulong)in_stack_0000134c & 0x3f) & 0x400500000000000U) != 0)) {
              fVar50 = fVar50 * 0.5;
            }
            if (unaff_x19[0x20] == 0) goto LAB_087ddb5c;
            fStack000000000000011c = *(float *)(unaff_x19 + 0x60);
            fVar56 = *(float *)(unaff_x19 + 0xcb);
            fVar50 = fVar56 + (unaff_s15 - fStack000000000000011c) *
                              (*(float *)((long)unaff_x19 + 0x2d4) +
                              (fVar50 - in_stack_00000098._4_4_) +
                              in_stack_00000100 *
                              (in_stack_000000e0 + *(float *)(unaff_x19[0x20] + 0x1a4)));
            *(float *)(unaff_x19 + 0xcb) = fVar50;
joined_r0x087d989c:
            if ((unaff_w26 != 0) || (auVar70 = ZEXT416((uint)fVar56), in_stack_0000134c == 0x200b))
            {
              auVar70 = ZEXT416((uint)(in_stack_00000100 * *(float *)(unaff_x19 + 0x5c)));
              fStack000000000000011c = in_stack_00000100;
              fVar50 = fVar50 + in_stack_00000100 * *(float *)(unaff_x19 + 0x5c);
              goto LAB_087d9958;
            }
          }
        }
        lVar39 = unaff_x19[0x74];
        if ((lVar39 == 0) || (lVar28 = *(long *)(lVar39 + 0x38), lVar28 == 0)) goto LAB_087ddb5c;
        uVar13 = *(uint *)(unaff_x23 + 7);
        if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_087ddd1c;
        *(float *)(lVar28 + (long)(int)uVar13 * (long)(int)unaff_w29 + 0x13c) = fVar50;
        if (in_stack_0000134c == 0xd) {
          auVar70 = ZEXT816(0);
          *(float *)(unaff_x19 + 0xcb) = *(float *)((long)unaff_x19 + 0x444) + 0.0;
        }
        if (((int)unaff_x19[0x62] == 5) &&
           (((0xd < in_stack_0000134c || ((1 << (ulong)(in_stack_0000134c & 0x1f) & 0x2c00U) == 0))
            && (1 < in_stack_0000134c - 0x2028)))) {
          lVar28 = *(long *)(lVar39 + 0x58);
          if (lVar28 == 0) goto LAB_087ddb5c;
          iVar15 = *(int *)((long)unaff_x19 + 0x4c4) + 1;
          if (*(int *)(lVar28 + 0x18) < iVar15) {
            if (*(int *)(*(long *)PTR_DAT_093375f0 + 0xe4) == 0) {
              thunk_FUN_040d65a8(*(long *)PTR_DAT_093375f0,uVar20);
            }
            FUN_05202560((long *)(lVar39 + 0x58),iVar15,1,*(undefined8 *)PTR_DAT_093375e0);
            lVar39 = unaff_x19[0x74];
            if (lVar39 == 0) goto LAB_087ddb5c;
          }
          unaff_x28 = (long *)PTR_DAT_09285bb0;
          lVar28 = *(long *)(lVar39 + 0x58);
          if (lVar28 == 0) goto LAB_087ddb5c;
          uVar14 = *(uint *)((long)unaff_x19 + 0x4c4);
          if (*(uint *)(lVar28 + 0x18) <= uVar14) goto LAB_087ddd1c;
          lVar28 = lVar28 + 0x20;
          lVar36 = lVar28 + (long)(int)uVar14 * 0x14;
          *(int *)(lVar36 + 8) = (int)unaff_x19[0x99];
          fVar56 = *(float *)(lVar36 + 0x10);
          auVar70 = ZEXT416((uint)fVar56);
          fVar50 = *(float *)(unaff_x19 + 0x9b);
          if (fVar56 <= *(float *)(unaff_x19 + 0x9b)) {
            fVar50 = fVar56;
          }
          *(float *)(lVar36 + 0x10) = fVar50;
          if (*(char *)((long)unaff_x19 + 0x374) != '\0') {
            *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
            *(undefined4 *)(lVar28 + (long)(int)uVar14 * 0x14) =
                 *(undefined4 *)((long)unaff_x19 + 0x4a4);
          }
          uVar13 = *(uint *)(unaff_x23 + 7);
          *(uint *)(lVar28 + (long)(int)uVar14 * 0x14 + 4) = uVar13;
        }
        uVar14 = in_stack_0000134c;
        if (((in_stack_0000134c < 0xc) && ((1 << (ulong)(in_stack_0000134c & 0x1f) & 0xc08U) != 0))
           || ((in_stack_0000134c - 0x2028 < 2 ||
               ((in_stack_0000134c == 0x2d && uStack00000000000001b0 == unaff_w21 ||
                ((float)uVar13 == fStack0000000000000050)))))) {
          if (0.0 < *(float *)((long)unaff_x19 + 0x4ec)) {
            fVar50 = *(float *)((long)unaff_x19 + 0x4dc);
            fVar56 = *(float *)((long)unaff_x19 + 0x4e4);
            if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            fVar50 = fVar50 - fVar56;
            if (((fStack0000000000000054 < ABS(fVar50)) && ((char)unaff_x19[0x5e] == '\0')) &&
               (*(char *)((long)unaff_x19 + 0x374) == '\0')) {
              FUN_08822d60();
              puVar9 = PTR_DAT_09337670;
              lVar39 = *(long *)PTR_DAT_09337670;
              *(float *)(unaff_x19 + 0x9b) = *(float *)(unaff_x19 + 0x9b) - fVar50;
              *(float *)((long)unaff_x19 + 0x4ec) = fVar50 + *(float *)((long)unaff_x19 + 0x4ec);
              if (*(int *)(lVar39 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar39 = *(long *)puVar9;
              }
              lVar28 = *(long *)(lVar39 + 0xb8);
              if (*(int *)(lVar28 + 0x838) == (int)unaff_x19[0x97]) {
                if (*(int *)(lVar39 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar28 = *(long *)(*(long *)PTR_DAT_09337670 + 0xb8);
                }
                FUN_065eb4fc(&stack0x00000210,lVar28 + 0x1338,*(undefined8 *)PTR_DAT_09337618);
                puVar9 = PTR_DAT_09337670;
                lVar39 = *(long *)PTR_DAT_09337670;
                memcpy((void *)(*(long *)(lVar39 + 0xb8) + 0x810),&stack0x00000210,0x3b8);
                thunk_FUN_040ec700(*(long *)(lVar39 + 0xb8) + 0x8a8,0);
                lVar39 = *(long *)(*(long *)puVar9 + 0xb8);
                *(float *)(lVar39 + 0x848) = fVar50 + *(float *)(lVar39 + 0x848);
                *(float *)(lVar39 + 0x894) = fVar50 + *(float *)(lVar39 + 0x894);
                memcpy(&stack0x00001350,(void *)(lVar39 + 0x810),0x3b8);
                FUN_065eb410(lVar39 + 0x1338,&stack0x00001350,*(undefined8 *)PTR_DAT_09337620);
                unaff_x23 = in_stack_000001d0;
              }
            }
          }
          fVar57 = *(float *)((long)unaff_x19 + 0x4ec);
          *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
          fVar56 = *(float *)(unaff_x19 + 0x9c) - fVar57;
          fVar50 = *(float *)(unaff_x19 + 0x9b);
          if (fVar56 <= *(float *)(unaff_x19 + 0x9b)) {
            fVar50 = fVar56;
          }
          fVar63 = *(float *)((long)unaff_x19 + 0x4dc);
          *(float *)(unaff_x19 + 0x9b) = fVar50;
          if (in_stack_00001344 == '\0') {
            in_stack_00001348 = fVar50;
          }
          if ((*(char *)((long)unaff_x19 + 0x36c) != '\0') &&
             (((int)unaff_x19[0x6c] <= *(int *)((long)unaff_x19 + 0x4a4) ||
              ((int)unaff_x19[0x6d] <= (int)unaff_x19[0x97])))) {
            in_stack_00001344 = '\x01';
          }
          lVar39 = unaff_x19[0x74];
          if ((lVar39 == 0) || (lVar28 = *(long *)(lVar39 + 0x50), lVar28 == 0)) goto LAB_087ddb5c;
          if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_087ddd1c;
          lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
          iVar16 = (int)unaff_x19[0x95];
          *(int *)(lVar28 + 0x38) = iVar16;
          iVar15 = iVar16;
          if (iVar16 <= *(int *)((long)unaff_x19 + 0x4ac)) {
            iVar15 = *(int *)((long)unaff_x19 + 0x4ac);
          }
          *(int *)((long)unaff_x19 + 0x4ac) = iVar15;
          *(int *)(lVar28 + 0x3c) = iVar15;
          iVar18 = *(int *)((long)unaff_x19 + 0x4a4);
          *(int *)(unaff_x19 + 0x96) = iVar18;
          *(int *)(lVar28 + 0x40) = iVar18;
          iVar17 = *(int *)((long)unaff_x19 + 0x4ac);
          if (iVar15 <= *(int *)((long)unaff_x19 + 0x4b4)) {
            iVar17 = *(int *)((long)unaff_x19 + 0x4b4);
          }
          *(int *)((long)unaff_x19 + 0x4b4) = iVar17;
          *(int *)(lVar28 + 0x44) = iVar17;
          *(int *)(lVar28 + 0x24) = (iVar18 - iVar16) + 1;
          iVar15 = *(int *)((long)unaff_x19 + 0x4bc);
          *(int *)(lVar28 + 0x28) = iVar15;
          *(int *)(lVar28 + 0x30) = (iVar17 - (iVar16 + iVar15)) + 1;
          lVar39 = *(long *)(lVar39 + 0x38);
          if (lVar39 == 0) goto LAB_087ddb5c;
          if (*(uint *)(lVar39 + 0x18) <= *(uint *)(unaff_x23 + 8)) goto LAB_087ddd1c;
          *(undefined4 *)(lVar28 + 0x70) =
               *(undefined4 *)
                (lVar39 + (long)(int)*(uint *)(unaff_x23 + 8) * (long)(int)unaff_w29 + 0x114);
          *(float *)(lVar28 + 0x74) = fVar56;
          lVar39 = unaff_x19[0x74];
          if ((lVar39 == 0) || (lVar28 = *(long *)(lVar39 + 0x50), lVar28 == 0)) goto LAB_087ddb5c;
          if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_087ddd1c;
          lVar39 = *(long *)(lVar39 + 0x38);
          if (lVar39 == 0) goto LAB_087ddb5c;
          if (*(uint *)(lVar39 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4b4)) goto LAB_087ddd1c;
          fVar63 = fVar63 - fVar57;
          auVar70 = ZEXT416((uint)fVar63);
          lVar28 = lVar28 + 0x20 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
          *(undefined4 *)(lVar28 + 0x58) =
               *(undefined4 *)
                (lVar39 + (long)(int)*(uint *)((long)unaff_x19 + 0x4b4) * (long)(int)unaff_w29 +
                0x120);
          *(float *)(lVar28 + 0x5c) = fVar63;
          lVar39 = unaff_x19[0x74];
          if ((lVar39 == 0) || (lVar28 = *(long *)(lVar39 + 0x50), lVar28 == 0)) goto LAB_087ddb5c;
          uVar13 = *(uint *)(unaff_x19 + 0x97);
          if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_087ddd1c;
          lVar28 = lVar28 + 0x20;
          lVar36 = lVar28 + (long)(int)uVar13 * 0x60;
          *(float *)(lVar36 + 0x28) =
               *(float *)(lVar36 + 0x58) - in_stack_00000180._4_4_ * unaff_s13;
          *(float *)(lVar36 + 0x40) = in_stack_00000158;
          if (*(int *)(lVar36 + 4) == 1) {
            *(int *)(lVar28 + (long)(int)uVar13 * 0x60 + 0x4c) = (int)unaff_x19[0x54];
          }
          if ((unaff_x19[0x20] == 0) || (lVar36 = *(long *)(lVar39 + 0x38), lVar36 == 0))
          goto LAB_087ddb5c;
          uVar30 = *(uint *)((long)unaff_x19 + 0x4b4);
          if (*(uint *)(lVar36 + 0x18) <= uVar30) goto LAB_087ddd1c;
          if ((*(char *)(lVar36 + 0x20 + (long)(int)uVar30 * (long)(int)unaff_w29 + 0x170) == '\0')
             && (uVar30 = *(uint *)(unaff_x19 + 0x96), *(uint *)(lVar36 + 0x18) <= uVar30))
          goto LAB_087ddd1c;
          fVar57 = (unaff_s15 - *(float *)(unaff_x19 + 0x60)) *
                   (*(float *)((long)unaff_x19 + 0x2d4) +
                   in_stack_00000100 *
                   (fStack00000000000000fc + in_stack_000000e0 + *(float *)(unaff_x19[0x20] + 0x1a4)
                   ));
          fVar50 = -fVar57;
          if ((char)unaff_x19[0x1e] != '\0') {
            fVar50 = fVar57;
          }
          lVar28 = lVar28 + (long)(int)uVar13 * 0x60;
          *(float *)(lVar28 + 0x3c) =
               *(float *)(lVar36 + 0x20 + (long)(int)uVar30 * (long)(int)unaff_w29 + 0x11c) + fVar50
          ;
          fStack000000000000011c = 0.0 - *(float *)((long)unaff_x19 + 0x4ec);
          *(float *)(lVar28 + 0x34) = fStack000000000000011c;
          *(float *)(lVar28 + 0x38) = fVar56;
          *(float *)(lVar28 + 0x2c) = fStack0000000000000060 + (fVar63 - fVar56);
          *(float *)(lVar28 + 0x30) = fVar63;
          if ((((in_stack_0000134c & 0xfffffffe) == 10) ||
              (uStack00000000000001b0 == unaff_w21 && in_stack_0000134c == 0x2d)) ||
             (in_stack_0000134c - 0x2028 < 2)) {
            if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            FUN_088229a4();
            lVar39 = unaff_x19[0x97];
            iVar16 = *(int *)((long)unaff_x19 + 0x4a4);
            unaff_x23[10] = 0;
            iVar15 = (int)lVar39 + 1;
            lVar39 = unaff_x19[0x74];
            *(int *)(unaff_x19 + 0x97) = iVar15;
            *(int *)(unaff_x19 + 0x95) = iVar16 + 1;
            if ((lVar39 == 0) || (*(long *)(lVar39 + 0x50) == 0)) goto LAB_087ddb5c;
            if (*(int *)(*(long *)(lVar39 + 0x50) + 0x18) <= iVar15) {
              FUN_08822f1c();
              lVar39 = unaff_x19[0x74];
              if (lVar39 == 0) goto LAB_087ddb5c;
            }
            lVar39 = *(long *)(lVar39 + 0x38);
            if (lVar39 == 0) goto LAB_087ddb5c;
            if (*(uint *)(unaff_x23 + 7) < *(uint *)(lVar39 + 0x18)) {
              fVar50 = *(float *)(lVar39 + (long)(int)*(uint *)(unaff_x23 + 7) *
                                           (long)(int)unaff_w29 + 0x14c);
              if (*(float *)((long)unaff_x19 + 0x2ec) == DAT_01aeb5f8) {
                if ((in_stack_0000134c == 0x2029) || (fVar56 = 0.0, in_stack_0000134c == 10)) {
                  fVar56 = *(float *)(unaff_x19 + 0x5f);
                }
                uVar25 = 0;
                fVar56 = fVar50 + (0.0 - *(float *)(unaff_x19 + 0x9c)) +
                         in_stack_00000048._4_4_ *
                         (fStack0000000000000044 + *(float *)(unaff_x19 + 0x5d)) +
                         in_stack_00000100 * (*(float *)((long)unaff_x19 + 0x2e4) + fVar56) +
                         *(float *)((long)unaff_x19 + 0x4ec);
              }
              else {
                if ((in_stack_0000134c == 0x2029) || (fVar56 = 0.0, in_stack_0000134c == 10)) {
                  fVar56 = *(float *)(unaff_x19 + 0x5f);
                }
                uVar25 = 1;
                fVar56 = *(float *)((long)unaff_x19 + 0x4ec) +
                         *(float *)((long)unaff_x19 + 0x2ec) +
                         in_stack_00000100 * (*(float *)((long)unaff_x19 + 0x2e4) + fVar56);
              }
              *(float *)((long)unaff_x19 + 0x4ec) = fVar56;
              puVar9 = PTR_DAT_09337670;
              *(undefined1 *)(unaff_x19 + 0x5e) = uVar25;
              lVar39 = *(long *)puVar9;
              if (*(int *)(lVar39 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar39 = *(long *)puVar9;
              }
              fVar56 = *(float *)(unaff_x19 + 0x88);
              uVar59 = *(undefined8 *)(*(long *)(lVar39 + 0xb8) + 0x1730);
              *(float *)((long)unaff_x19 + 0x4e4) = fVar50;
              fStack000000000000011c = *(float *)((long)unaff_x19 + 0x444);
              auVar70._0_8_ = NEON_rev64(uVar59,4);
              auVar70._8_8_ = 0;
              unaff_x23[0xe] = auVar70._0_8_;
              *(float *)(unaff_x19 + 0xcb) = fVar56 + 0.0 + fStack000000000000011c;
              FUN_088229a4();
              FUN_088229a4();
              *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
              goto LAB_087da124;
            }
            goto LAB_087ddd1c;
          }
          if (in_stack_0000134c == 3) {
            if (unaff_x19[0x91] == 0) goto LAB_087ddb5c;
            in_stack_00001318 = (uint)*(undefined8 *)(unaff_x19[0x91] + 0x18);
            uVar14 = 3;
          }
        }
        lVar39 = *(long *)(lVar39 + 0x38);
        if (lVar39 == 0) goto LAB_087ddb5c;
        uVar30 = *(uint *)(unaff_x23 + 7);
        uVar13 = *(uint *)(lVar39 + 0x18);
        if (uVar13 <= uVar30) goto LAB_087ddd1c;
        lVar39 = lVar39 + 0x20;
        if (*(char *)(lVar39 + (long)(int)uVar30 * (long)(int)unaff_w29 + 0x170) != '\0') {
          lVar28 = lVar39 + (long)(int)uVar30 * (long)(int)unaff_w29;
          auVar54 = *(undefined1 (*) [16])(unaff_x19 + 0x9e);
          auVar60 = NEON_ext(auVar54,auVar54,8,1);
          uVar59 = *(undefined8 *)(lVar28 + 0xf4);
          fStack000000000000011c = (float)uVar59;
          uVar19 = *(undefined8 *)(lVar28 + 0x100);
          fVar50 = (float)uVar19;
          fVar56 = (float)((ulong)uVar19 >> 0x20);
          auVar70._0_4_ = (float)-(uint)(auVar54._0_4_ < fStack000000000000011c);
          auVar70._4_4_ = (float)-(uint)(auVar54._4_4_ < (float)((ulong)uVar59 >> 0x20));
          auVar70._8_4_ = -(uint)(fVar50 < auVar60._0_4_);
          auVar70._12_4_ = -(uint)(fVar56 < auVar60._4_4_);
          auVar60._8_4_ = fVar50;
          auVar60._0_8_ = uVar59;
          auVar60._12_4_ = fVar56;
          auVar54 = auVar54 ^ (auVar54 ^ auVar60) & ~auVar70;
          unaff_x19[0x9f] = auVar54._8_8_;
          unaff_x19[0x9e] = auVar54._0_8_;
        }
        if (((*(int *)((long)unaff_x19 + 0x304) != 3) && (*(int *)((long)unaff_x19 + 0x304) != 0))
           || ((*(uint *)(unaff_x19 + 0x62) < 7 &&
               ((1 << (ulong)(*(uint *)(unaff_x19 + 0x62) & 0x1f) & 0x4aU) != 0)))) {
          if ((((unaff_w26 == 0) && (uVar14 != 0x2d)) && (uVar14 != 0x200b)) && (uVar14 != 0xad)) {
            if (*(char *)((long)unaff_x19 + 0x309) == '\0') goto LAB_087da390;
LAB_087da20c:
            if (((uint)fStack000000000000006c & 1) == 0) {
              fStack000000000000006c = 0.0;
            }
            else {
              uVar13 = (uint)(unaff_w26 == 0 || in_stack_0000134c == 0xa0) &
                       (in_stack_0000134c != 0xad | uStack0000000000000058) ^ 1;
LAB_087da240:
              fStack000000000000006c = 1.4013e-45;
LAB_087da248:
              if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              FUN_088229a4();
              if (uVar13 != 0) goto LAB_087da284;
            }
          }
          else {
            if (*(char *)((long)unaff_x19 + 0x309) != '\0') goto LAB_087da20c;
            if ((int)uVar14 < 0x2007) {
              if (uVar14 == 0x2d) {
                if (0 < (int)uVar30) {
                  if (uVar13 <= uVar30 - 1) goto LAB_087ddd1c;
                  uVar3 = *(undefined2 *)(lVar39 + (ulong)(uVar30 - 1) * (ulong)unaff_w29 + 4);
                  if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  uVar20 = FUN_075d81a8(uVar3,0);
                  if ((uVar20 & 1) != 0) {
                    if ((unaff_x19[0x74] == 0) ||
                       (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0)) goto LAB_087ddb5c;
                    if (*(uint *)(lVar39 + 0x18) <= *(int *)(unaff_x23 + 7) - 1U) goto LAB_087ddd1c;
                    if (*(int *)(lVar39 + (long)(int)(*(int *)(unaff_x23 + 7) - 1U) *
                                          (long)(int)unaff_w29 + 0x5c) == (int)unaff_x19[0x97])
                    goto LAB_087da2ec;
                  }
                }
              }
              else if (uVar14 == 0xa0) goto LAB_087da390;
LAB_087da920:
              puVar9 = PTR_DAT_09337670;
              lVar39 = *(long *)PTR_DAT_09337670;
              if (*(int *)(lVar39 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar39 = *(long *)puVar9;
              }
              fStack000000000000006c = 0.0;
              uVar13 = 0;
              *(undefined4 *)(*(long *)(lVar39 + 0xb8) + 0xf80) = 0xffffffff;
              goto LAB_087da248;
            }
            if (((0x28 < uVar14 - 0x2007) ||
                ((1L << ((ulong)(uVar14 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
               (uVar14 != 0x2060)) goto LAB_087da920;
LAB_087da390:
            if (*(int *)(*(long *)PTR_DAT_093375f8 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar20 = FUN_08847e38(uVar14,0);
            if ((uVar20 & 1) == 0) {
LAB_087da3dc:
              if (*(int *)(*(long *)PTR_DAT_093375f8 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              uVar20 = FUN_08847e94(in_stack_0000134c,0);
              if ((uVar20 & 1) != 0) goto LAB_087da408;
              if ((*(char *)((long)unaff_x19 + 0x309) != '\0') ||
                 (uVar13 = *(int *)(unaff_x23 + 7) + 1, iStack000000000000005c <= (int)uVar13))
              goto LAB_087da20c;
              if ((unaff_x19[0x74] == 0) ||
                 (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0)) goto LAB_087ddb5c;
              if (*(uint *)(lVar39 + 0x18) <= uVar13) goto LAB_087ddd1c;
              uVar3 = *(undefined2 *)(lVar39 + (long)(int)uVar13 * (long)(int)unaff_w29 + 0x24);
              if (*(int *)(*(long *)PTR_DAT_093375f8 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              uVar20 = FUN_08847e94(uVar3,0);
              if ((uVar20 & 1) == 0) goto LAB_087da20c;
              if ((unaff_x19[0x74] == 0) ||
                 (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0)) goto LAB_087ddb5c;
              if (*(int *)(unaff_x23 + 7) + 1U < *(uint *)(lVar39 + 0x18)) {
                uVar3 = *(undefined2 *)
                         (lVar39 + (long)(int)(*(int *)(unaff_x23 + 7) + 1U) * (long)(int)unaff_w29
                         + 0x24);
                if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                lVar39 = FUN_0883e090(0);
                if ((lVar39 != 0) && (*(long *)(lVar39 + 0x10) != 0)) {
                  uVar13 = FUN_057cfb98(*(long *)(lVar39 + 0x10),in_stack_0000134c,
                                        *(undefined8 *)PTR_DAT_09337598);
                  lVar39 = FUN_0883e090(0);
                  if ((lVar39 != 0) && (*(long *)(lVar39 + 0x18) != 0)) {
                    uVar14 = FUN_057cfb98(*(long *)(lVar39 + 0x18),uVar3,
                                          *(undefined8 *)PTR_DAT_09337598);
                    unaff_x28 = (long *)PTR_DAT_09285bb0;
                    if (((uVar13 | uVar14) & 1) != 0) goto LAB_087da2ec;
                    uVar13 = 0;
                    goto LAB_087da248;
                  }
                }
                goto LAB_087ddb5c;
              }
              goto LAB_087ddd1c;
            }
            if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar20 = FUN_0883e2a4(0);
            if ((uVar20 & 1) != 0) goto LAB_087da3dc;
LAB_087da408:
            if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            lVar39 = FUN_0883e090(0);
            if ((lVar39 == 0) || (*(long *)(lVar39 + 0x10) == 0)) goto LAB_087ddb5c;
            uVar20 = FUN_057cfb98(*(long *)(lVar39 + 0x10),in_stack_0000134c,
                                  *(undefined8 *)PTR_DAT_09337598);
            if ((int)fStack0000000000000050 <= *(int *)(unaff_x23 + 7)) {
              if ((uVar20 & 1) != 0) goto LAB_087da610;
              fStack000000000000006c = 0.0;
              uVar13 = 0;
              goto LAB_087da248;
            }
            if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            lVar39 = FUN_0883e090(0);
            if (((lVar39 == 0) || (unaff_x19[0x74] == 0)) ||
               (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0)) goto LAB_087ddb5c;
            if (*(uint *)(lVar28 + 0x18) <= *(int *)(unaff_x23 + 7) + 1U) goto LAB_087ddd1c;
            if (*(long *)(lVar39 + 0x18) == 0) goto LAB_087ddb5c;
            uVar14 = FUN_057cfb98(*(long *)(lVar39 + 0x18),
                                  *(undefined2 *)
                                   (lVar28 + (long)(int)(*(int *)(unaff_x23 + 7) + 1U) *
                                             (long)(int)unaff_w29 + 0x24),
                                  *(undefined8 *)PTR_DAT_09337598);
            if ((uVar20 & 1) != 0) {
LAB_087da610:
              uVar13 = (uint)(unaff_w26 != 0);
              if (((uint)fStack000000000000006c & (uint)((float)unaff_w20 == in_stack_000001a0)) ==
                  0) goto LAB_087da2ec;
              goto LAB_087da240;
            }
            fStack000000000000006c = (float)(uVar14 & (uint)fStack000000000000006c);
            uVar13 = (uint)fStack000000000000006c & (uint)(unaff_w26 != 0);
            if ((((uint)fStack000000000000006c & 1) != 0) || (((uVar14 ^ 1) & 1) != 0))
            goto LAB_087da248;
            fStack000000000000006c = 0.0;
            if (uVar13 == 0) goto LAB_087da2ec;
LAB_087da284:
            if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            FUN_088229a4();
          }
        }
LAB_087da2ec:
        if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_088229a4();
        *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
        fVar50 = in_stack_00000180._4_4_;
LAB_087d7090:
        do {
          lVar39 = unaff_x19[0x91];
          in_stack_00001318 = in_stack_00001318 + 1;
          if (lVar39 == 0) goto LAB_087ddb5c;
          if ((int)*(uint *)(lVar39 + 0x18) <= (int)in_stack_00001318) {
LAB_087dadf8:
            if ((char)unaff_x19[0x4c] == '\0') {
LAB_087daebc:
              iVar15 = *(int *)((long)unaff_x19 + 0x26c);
              iVar16 = (int)unaff_x19[0x4e];
            }
            else {
              fStack000000000000011c = *(float *)((long)unaff_x19 + 0x264);
              auVar70 = ZEXT416((uint)DAT_01aec8ec);
              if (fStack000000000000011c - *(float *)(unaff_x19 + 0x4d) <= DAT_01aec8ec)
              goto LAB_087daebc;
              fVar50 = *(float *)((long)unaff_x19 + 0x20c);
              fVar56 = *(float *)((long)unaff_x19 + 0x27c);
              auVar70 = ZEXT416((uint)fVar56);
              iVar15 = *(int *)((long)unaff_x19 + 0x26c);
              iVar16 = (int)unaff_x19[0x4e];
              if ((fVar50 < fVar56) && (iVar15 < iVar16)) {
                if (*(float *)(unaff_x19 + 0x60) < *(float *)((long)unaff_x19 + 0x2fc) / 100.0) {
                  *(undefined4 *)(unaff_x19 + 0x60) = 0;
                }
                fVar57 = DAT_01aec3c4;
                *(float *)(unaff_x19 + 0x4d) = fVar50;
                fVar63 = (fStack000000000000011c - fVar50) * 0.5;
                if (fVar63 <= fVar57) {
                  fVar63 = fVar57;
                }
                fVar57 = (fVar50 + fVar63) * 20.0 + 0.5;
                fVar50 = DAT_01aec808;
                if (fVar57 != INFINITY) {
                  fVar50 = (float)(int)fVar57 / 20.0;
                }
                if (fVar56 <= fVar50) {
                  fVar50 = fVar56;
                }
                goto LAB_087daeb4;
              }
            }
            *(undefined1 *)((long)unaff_x19 + 0x274) = 1;
            if (iVar16 <= iVar15) {
              uVar59 = FUN_07676bc4((long)unaff_x19 + 0x26c,0);
              uVar19 = FUN_0768c8ac((long)unaff_x19 + 0x20c,0);
              uVar59 = FUN_074e70a4(*(undefined8 *)PTR_DAT_093376a8,uVar59,
                                    *(undefined8 *)PTR_DAT_09337690,uVar19,0);
              if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                thunk_FUN_040d65a8(*unaff_x25);
              }
              FUN_0897e2a8(uVar59,0);
            }
            puVar9 = PTR_DAT_09337670;
            if ((*(int *)(unaff_x23 + 7) == 0) ||
               ((*(int *)(unaff_x23 + 7) == 1 && (in_stack_0000134c == 3)))) {
              pcVar32 = *(code **)(*unaff_x19 + 0x948);
              goto LAB_087ddb74;
            }
            lVar39 = *(long *)PTR_DAT_09337670;
            if (*(int *)(lVar39 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              lVar39 = *(long *)puVar9;
            }
            plVar43 = (long *)PTR_DAT_093375b8;
            lVar39 = **(long **)(lVar39 + 0xb8);
            if (lVar39 == 0) goto LAB_087ddb5c;
            if (*(uint *)(lVar39 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_087ddd1c;
            iVar15 = *(int *)(lVar39 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x38 + 0x54) << 2;
            if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x60), lVar39 == 0))
            goto LAB_087ddb5c;
            if (*(int *)(*(long *)PTR_DAT_093375b8 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            if (*(int *)(lVar39 + 0x18) == 0) goto LAB_087ddd1c;
            FUN_0883b114(lVar39 + 0x20,0,0);
            fStack00000000000000c0 = (float)FUN_041ee300(0);
            iVar16 = (int)unaff_x19[0x53];
            lVar39 = unaff_x19[0xe6];
            in_stack_000000b8._4_4_ = fStack000000000000011c;
            if (iVar16 < 0x401) {
              if (iVar16 == 0x100) {
                if ((int)unaff_x19[0x62] == 5) {
                  if (lVar39 == 0) goto LAB_087ddb5c;
                  if ((*(uint *)(lVar39 + 0x18) & 0xfffffffe) == 0) goto LAB_087ddd1c;
                  if ((unaff_x19[0x74] == 0) ||
                     (lVar28 = *(long *)(unaff_x19[0x74] + 0x58), lVar28 == 0)) goto LAB_087ddb5c;
                  if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000040) goto LAB_087ddd1c;
                  fVar50 = *(float *)(lVar28 + (long)(int)uStack0000000000000040 * 0x14 + 0x28);
                }
                else {
                  if (lVar39 == 0) goto LAB_087ddb5c;
                  if ((*(uint *)(lVar39 + 0x18) & 0xfffffffe) == 0) goto LAB_087ddd1c;
                  fVar50 = *(float *)((long)unaff_x19 + 0x4cc);
                }
                in_stack_000000b8._4_4_ = *(float *)(lVar39 + 0x34);
                fStack000000000000002c = (0.0 - fVar50) - fStack0000000000000028;
                fStack000000000000011c = *(float *)(lVar39 + 0x2c);
                fVar50 = *(float *)(lVar39 + 0x30);
LAB_087db34c:
                fStack000000000000011c = in_stack_00000030 + 0.0 + fStack000000000000011c;
                fVar50 = fVar50 + fStack000000000000002c;
              }
              else {
                if (iVar16 != 0x200) {
                  if (iVar16 != 0x400) goto LAB_087db360;
                  if ((int)unaff_x19[0x62] == 5) {
                    if (lVar39 == 0) goto LAB_087ddb5c;
                    if (*(int *)(lVar39 + 0x18) == 0) goto LAB_087ddd1c;
                    if ((unaff_x19[0x74] == 0) ||
                       (lVar28 = *(long *)(unaff_x19[0x74] + 0x58), lVar28 == 0)) goto LAB_087ddb5c;
                    if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000040) goto LAB_087ddd1c;
                    in_stack_00001348 =
                         *(float *)(lVar28 + (long)(int)uStack0000000000000040 * 0x14 + 0x30);
                  }
                  else {
                    if (lVar39 == 0) goto LAB_087ddb5c;
                    if (*(int *)(lVar39 + 0x18) == 0) goto LAB_087ddd1c;
                  }
                  in_stack_000000b8._4_4_ = *(float *)(lVar39 + 0x28);
                  fStack000000000000002c = fStack000000000000002c + (0.0 - in_stack_00001348);
                  fStack000000000000011c = *(float *)(lVar39 + 0x20);
                  fVar50 = *(float *)(lVar39 + 0x24);
                  goto LAB_087db34c;
                }
                if ((int)unaff_x19[0x62] != 5) {
                  if (lVar39 == 0) goto LAB_087ddb5c;
                  if ((*(int *)(lVar39 + 0x18) != 1) && (*(int *)(lVar39 + 0x18) != 0)) {
                    fVar50 = *(float *)((long)unaff_x19 + 0x4cc);
                    goto LAB_087db280;
                  }
                  goto LAB_087ddd1c;
                }
                if (lVar39 == 0) goto LAB_087ddb5c;
                if ((*(int *)(lVar39 + 0x18) == 1) || (*(int *)(lVar39 + 0x18) == 0))
                goto LAB_087ddd1c;
                if ((unaff_x19[0x74] == 0) ||
                   (lVar28 = *(long *)(unaff_x19[0x74] + 0x58), lVar28 == 0)) goto LAB_087ddb5c;
                if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000040) goto LAB_087ddd1c;
                lVar28 = lVar28 + (long)(int)uStack0000000000000040 * 0x14;
                in_stack_000000b8._4_4_ =
                     (*(float *)(lVar39 + 0x28) + *(float *)(lVar39 + 0x34)) * 0.5;
                fStack000000000000011c =
                     in_stack_00000030 + 0.0 +
                     ((float)*(undefined8 *)(lVar39 + 0x20) + (float)*(undefined8 *)(lVar39 + 0x2c))
                     * 0.5;
                fVar50 = (0.0 - ((fStack0000000000000028 + *(float *)(lVar28 + 0x28) +
                                 *(float *)(lVar28 + 0x30)) - fStack000000000000002c) * 0.5) +
                         ((float)((ulong)*(undefined8 *)(lVar39 + 0x20) >> 0x20) +
                         (float)((ulong)*(undefined8 *)(lVar39 + 0x2c) >> 0x20)) * 0.5;
              }
              in_stack_000000b8._4_4_ = in_stack_000000b8._4_4_ + 0.0;
              auVar70 = ZEXT416((uint)fVar50);
              fStack00000000000000c0 = fStack000000000000011c;
            }
            else if (iVar16 == 0x800) {
              if (lVar39 == 0) goto LAB_087ddb5c;
              if ((*(int *)(lVar39 + 0x18) == 1) || (*(int *)(lVar39 + 0x18) == 0))
              goto LAB_087ddd1c;
              fStack000000000000011c = (*(float *)(lVar39 + 0x28) + *(float *)(lVar39 + 0x34)) * 0.5
              ;
              fStack00000000000000c0 =
                   ((float)*(undefined8 *)(lVar39 + 0x20) + (float)*(undefined8 *)(lVar39 + 0x2c)) *
                   0.5 + in_stack_00000030 + 0.0;
              in_stack_000000b8._4_4_ = fStack000000000000011c + 0.0;
              auVar70 = ZEXT416((uint)(((float)((ulong)*(undefined8 *)(lVar39 + 0x20) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(lVar39 + 0x2c) >> 0x20)) * 0.5
                                      + 0.0));
            }
            else {
              if (iVar16 == 0x1000) {
                if (lVar39 == 0) goto LAB_087ddb5c;
                if ((*(int *)(lVar39 + 0x18) == 1) || (*(int *)(lVar39 + 0x18) == 0))
                goto LAB_087ddd1c;
                fVar50 = *(float *)((long)unaff_x19 + 0x4fc);
                in_stack_00001348 = *(float *)((long)unaff_x19 + 0x4f4);
LAB_087db280:
                fStack0000000000000028 = fStack0000000000000028 + fVar50 + in_stack_00001348;
              }
              else {
                if (iVar16 != 0x2000) goto LAB_087db360;
                if (lVar39 == 0) goto LAB_087ddb5c;
                if ((*(int *)(lVar39 + 0x18) == 1) || (*(int *)(lVar39 + 0x18) == 0))
                goto LAB_087ddd1c;
                fStack0000000000000028 = *(float *)(unaff_x19 + 0x9a) - fStack0000000000000028;
              }
              fStack000000000000011c = in_stack_00000030 + 0.0;
              auVar70._0_4_ =
                   ((float)*(undefined8 *)(lVar39 + 0x24) + (float)*(undefined8 *)(lVar39 + 0x30)) *
                   0.5 + (0.0 - (fStack0000000000000028 - fStack000000000000002c) * 0.5);
              auVar70._4_4_ =
                   ((float)((ulong)*(undefined8 *)(lVar39 + 0x24) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar39 + 0x30) >> 0x20)) * 0.5 + 0.0;
              auVar70._8_8_ = 0;
              fStack00000000000000c0 =
                   fStack000000000000011c +
                   (*(float *)(lVar39 + 0x20) + *(float *)(lVar39 + 0x2c)) * 0.5;
              in_stack_000000b8._4_4_ = auVar70._4_4_;
            }
LAB_087db360:
            auVar60 = auVar70;
            fStack0000000000000130 = (float)FUN_041ee300(0);
            auVar54 = auVar60;
            FUN_041ee300(0);
            if (unaff_x19[0xe8] == 0) goto LAB_087ddb5c;
            uVar59 = FUN_08c8ed2c(unaff_x19[0xe8],0);
            if (*(int *)(*unaff_x28 + 0xe4) == 0) {
              thunk_FUN_040d65a8(*unaff_x28);
            }
            uVar24 = FUN_089cc398(uVar59,0,0);
            lVar39 = FUN_08816288();
            if (lVar39 == 0) goto LAB_087ddb5c;
            FUN_089de258(lVar39,0);
            *(float *)(unaff_x19 + 0xe5) = auVar54._0_4_;
            if (unaff_x19[0xe8] == 0) goto LAB_087ddb5c;
            iVar16 = FUN_08c8d3a4(unaff_x19[0xe8],0);
            if (unaff_x19[0xe8] == 0) goto LAB_087ddb5c;
            fVar57 = (float)FUN_08c8d6a8(unaff_x19[0xe8],0);
            uStack000000000000008c =
                 FUN_0421d10c(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
            auVar61 = ZEXT816(0x3f800000);
            fVar50 = 1.0;
            fVar56 = 1.0;
            FUN_0421d10c(ZEXT816(0x3f800000),auVar61,0x3f800000,0x3f800000,0);
            if (*(int *)(*(long *)PTR_DAT_093375c0 + 0xe4) == 0) {
              thunk_FUN_040d65a8(*(long *)PTR_DAT_093375c0);
            }
            FUN_087d5b70(0);
            FUN_087f1664(&stack0x00001320,0x4000ffff,0);
            if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            lVar39 = unaff_x19[0x74];
            if (lVar39 == 0) goto LAB_087ddb5c;
            iVar17 = *(int *)(unaff_x23 + 7);
            if (iVar17 < 1) {
              fStack00000000000000fc = 0.0;
              iVar16 = 0;
              goto LAB_087dd578;
            }
            fVar46 = ABS(auVar54._0_4_);
            lVar39 = *(long *)(lVar39 + 0x38);
            fVar63 = 1.0;
            if ((uVar24 & 1) == 0) {
              fVar63 = fVar46;
            }
            if (lVar39 == 0) goto LAB_087ddb5c;
            bVar10 = false;
            fVar48 = 0.0;
            bVar6 = false;
            bVar7 = false;
            fStack00000000000000fc = 0.0;
            uVar14 = 0;
            uVar13 = 0;
            fStack0000000000000044 = 0.0;
            lVar28 = lVar39 + 0x20;
            bVar8 = false;
            fStack0000000000000060 = 0.0;
            fStack0000000000000134 = auVar60._0_4_;
            fStack0000000000000150 =
                 *(float *)(*(long *)(*(long *)PTR_DAT_09337670 + 0xb8) + 0x1730);
            fStack00000000000000e8 = fStack00000000000000f8;
            fStack000000000000014c = 0.0;
            in_stack_00000180._4_4_ = 0.0;
            fStack0000000000000054 = 0.0;
            in_stack_000000a8._4_4_ = 0.0;
            fStack0000000000000050 = 0.0;
            fStack000000000000006c = fStack00000000000000f8;
            fVar67 = 0.0;
            in_stack_000000f0._4_4_ = in_stack_00000128._4_4_;
            fStack0000000000000064 = in_stack_00000128._4_4_;
            fStack0000000000000068 = in_stack_000000d8._4_4_;
            in_stack_00000098._4_4_ = fStack00000000000000f8;
            fStack00000000000000a0 = in_stack_00000128._4_4_;
            fStack0000000000000090 = in_stack_000000d8._4_4_;
            uVar30 = 0;
            goto LAB_087db574;
          }
          if (*(uint *)(lVar39 + 0x18) <= in_stack_00001318) goto LAB_087ddd1c;
          uVar13 = *(uint *)(lVar39 + (long)(int)in_stack_00001318 * 0x10 + 0x24);
          if (uVar13 == 0) goto LAB_087dadf8;
          if (5 < in_stack_000001c0) {
            uVar59 = FUN_0769683c(&stack0x0000134c,0);
            uVar19 = FUN_07676bc4(&stack0x00001318,0);
            uVar59 = FUN_074e70a4(*(undefined8 *)PTR_DAT_09337688,uVar59,
                                  *(undefined8 *)PTR_DAT_09337698,uVar19,0);
            if (*(int *)(*unaff_x25 + 0xe4) == 0) {
              thunk_FUN_040d65a8(*unaff_x25);
            }
            FUN_0897e8f4(uVar59,0);
            in_stack_00001338 = CONCAT44(3,*(undefined4 *)(unaff_x23 + 7));
          }
          in_stack_0000134c = uVar13;
        } while (uVar13 == 0x1a);
        if ((uVar13 == 0x3c) && (*(char *)((long)unaff_x19 + 0x33a) != '\0')) {
          *(undefined1 *)((long)unaff_x19 + 0x469) = 1;
          *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
          uVar20 = FUN_0881d354();
          if (((uVar20 & 1) != 0) &&
             (in_stack_00001318 = in_stack_0000127c, *(int *)((long)unaff_x19 + 0x65c) == 0))
          goto LAB_087d7090;
        }
        else {
          if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
          goto LAB_087ddb5c;
          if (*(uint *)(lVar39 + 0x18) <= *(uint *)(unaff_x23 + 7)) goto LAB_087ddd1c;
          lVar39 = lVar39 + (long)(int)*(uint *)(unaff_x23 + 7) * (long)(int)unaff_w29;
          *(undefined4 *)((long)unaff_x19 + 0x65c) = *(undefined4 *)(lVar39 + 0x20);
          *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar39 + 0x50);
          unaff_x19[0x20] = *(long *)(lVar39 + 0x40);
          thunk_FUN_040ec700(unaff_x19 + 0x20);
        }
        if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
        goto LAB_087ddb5c;
        unaff_w21 = *(uint *)(in_stack_000001d0 + 7);
        if (*(uint *)(lVar39 + 0x18) <= unaff_w21) goto LAB_087ddd1c;
        lVar28 = lVar39 + 0x20;
        uVar30 = (uint)in_stack_00001338;
        lVar36 = unaff_x19[0x24];
        _uStack00000000000001b0 = in_stack_00001338 & 0xffffffff;
        cVar26 = *(char *)(lVar28 + (long)(int)unaff_w21 * (long)(int)unaff_w29 + 0x34);
        *(undefined1 *)((long)unaff_x19 + 0x469) = 0;
        uVar14 = unaff_w21;
        if (uVar30 == unaff_w21) {
          uVar13 = (uint)(in_stack_00001338 >> 0x20);
          *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
          if (uVar13 == 0x2026) {
            *(long *)(lVar28 + (long)(int)unaff_w21 * (long)(int)unaff_w29 + 0x10) = unaff_x19[0xcd]
            ;
            thunk_FUN_040ec700();
            if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
            goto LAB_087ddb5c;
            if (*(uint *)(lVar39 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
            lVar39 = lVar39 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29;
            *(long *)(lVar39 + 0x40) = unaff_x19[0xce];
            *(undefined4 *)(lVar39 + 0x20) = 0;
            thunk_FUN_040ec700();
            if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
            goto LAB_087ddb5c;
            if (*(uint *)(lVar39 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
            *(long *)(lVar39 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29 +
                     0x48) = unaff_x19[0xcf];
            thunk_FUN_040ec700();
            if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
            goto LAB_087ddb5c;
            if (*(uint *)(lVar39 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
            *(int *)(lVar39 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29 +
                    0x50) = (int)unaff_x19[0xd0];
            puVar9 = PTR_DAT_09337670;
            lVar39 = *(long *)PTR_DAT_09337670;
            if (*(int *)(lVar39 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              lVar39 = *(long *)puVar9;
            }
            lVar39 = **(long **)(lVar39 + 0xb8);
            if (lVar39 == 0) goto LAB_087ddb5c;
            if (*(uint *)(lVar39 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_087ddd1c;
            lVar39 = lVar39 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x38;
            *(int *)(lVar39 + 0x54) = *(int *)(lVar39 + 0x54) + 1;
            *(undefined1 *)(unaff_x19 + 0x65) = 1;
            in_stack_00001338 = CONCAT44(3,*(uint *)((long)unaff_x19 + 0x4a4) + 1);
            uVar14 = *(uint *)((long)unaff_x19 + 0x4a4);
          }
          else if (uVar13 == 3) {
            if ((unaff_x19[0x20] == 0) || (lVar21 = FUN_087f97a8(unaff_x19[0x20],0), lVar21 == 0))
            goto LAB_087ddb5c;
            uVar59 = System_Array_EmptyInternalEnumerator<MeshGenerator_BackgroundRepeatInstance>__MoveNext
                               (lVar21,3,*(undefined8 *)PTR_DAT_09337590);
            if (*(uint *)(lVar39 + 0x18) <= unaff_w21) goto LAB_087ddd1c;
            *(undefined8 *)(lVar28 + (long)(int)unaff_w21 * (long)(int)unaff_w29 + 0x10) = uVar59;
            thunk_FUN_040ec700();
            *(undefined1 *)(unaff_x19 + 0x65) = 1;
            uVar14 = *(uint *)((long)unaff_x19 + 0x4a4);
          }
        }
        in_stack_0000134c = uVar13;
        if (((int)uVar14 < *(int *)((long)unaff_x19 + 0x35c)) && (uVar13 != 3)) {
          if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
          goto LAB_087ddb5c;
          if (*(uint *)(lVar39 + 0x18) <= uVar14) goto LAB_087ddd1c;
          lVar39 = lVar39 + (long)(int)uVar14 * (long)(int)unaff_w29;
          *(undefined1 *)(lVar39 + 400) = 0;
          *(undefined2 *)(lVar39 + 0x24) = 0x200b;
          *(undefined4 *)(lVar39 + 0x5c) = 0;
          *(uint *)(in_stack_000001d0 + 7) = uVar14 + 1;
          unaff_x23 = in_stack_000001d0;
          goto LAB_087d7090;
        }
        fStack000000000000016c = 1.0;
        if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
          uVar14 = *(uint *)((long)unaff_x19 + 0x284);
          if ((uVar14 >> 4 & 1) == 0) {
            if ((uVar14 >> 3 & 1) == 0) {
              if ((uVar14 >> 5 & 1) != 0) {
                if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                uVar20 = FUN_075da814(uVar13,0);
                if ((uVar20 & 1) != 0) {
                  if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  uVar13 = FUN_075daa9c(uVar13,0);
                  fStack000000000000016c = fStack0000000000000024;
                  goto LAB_087d6cec;
                }
              }
            }
            else {
              if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              uVar20 = FUN_075da774(uVar13,0);
              if ((uVar20 & 1) != 0) {
                if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                uVar13 = FUN_075dac14(uVar13,0);
                goto LAB_087d6cec;
              }
            }
          }
          else {
            if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar20 = FUN_075da814(uVar13,0);
            if ((uVar20 & 1) != 0) {
              if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              uVar13 = FUN_075daa9c(uVar13,0);
LAB_087d6cec:
              in_stack_0000134c = uVar13 & 0xffff;
            }
          }
        }
        if (unaff_x19[0x20] == 0) goto LAB_087ddb5c;
        memmove(&stack0x000012b0,(void *)(unaff_x19[0x20] + 0x28),0x60);
        if (*(int *)((long)unaff_x19 + 0x65c) == 1) {
          lVar39 = FUN_088161d4();
          if ((lVar39 == 0) || (lVar39 = *(long *)(lVar39 + 0x38), lVar39 == 0)) goto LAB_087ddb5c;
          if (*(uint *)(lVar39 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
          plVar43 = *(long **)(lVar39 + (long)(int)*(uint *)(in_stack_000001d0 + 7) *
                                        (long)(int)unaff_w29 + 0x30);
          unaff_x23 = in_stack_000001d0;
          if (plVar43 == (long *)0x0) goto LAB_087d7090;
          bVar11 = *(byte *)(*(long *)PTR_DAT_093375d8 + 0x130);
          if ((*(byte *)(*plVar43 + 0x130) < bVar11) ||
             (*(long *)(*(long *)(*plVar43 + 200) + (ulong)bVar11 * 8 + -8) !=
              *(long *)PTR_DAT_093375d8)) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0(plVar43);
          }
          plVar27 = (long *)plVar43[3];
          if (plVar27 == (long *)0x0) {
            plVar27 = (long *)0x0;
            *_fStack00000000000000e8 = 0;
          }
          else {
            lVar39 = *(long *)PTR_DAT_093375d0;
            bVar11 = *(byte *)(lVar39 + 0x130);
            if (*(byte *)(*plVar27 + 0x130) < bVar11) {
              plVar35 = (long *)0x0;
            }
            else {
              plVar35 = plVar27;
              if (*(long *)(*(long *)(*plVar27 + 200) + (ulong)bVar11 * 8 + -8) != lVar39) {
                plVar35 = (long *)0x0;
              }
            }
            *_fStack00000000000000e8 = (long)plVar35;
            if (*(byte *)(*plVar27 + 0x130) < bVar11) {
              plVar27 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar27 + 200) + (ulong)bVar11 * 8 + -8) != lVar39) {
              plVar27 = (long *)0x0;
            }
          }
          thunk_FUN_040ec700(_fStack00000000000000e8,plVar27);
          lVar39 = plVar43[5];
          *(int *)((long)unaff_x19 + 0x6bc) = (int)lVar39;
          puVar9 = PTR_DAT_09337670;
          if (in_stack_0000134c == 0x3c) {
            in_stack_0000134c = (int)lVar39 + 0xe000;
          }
          else {
            lVar39 = *(long *)PTR_DAT_09337670;
            if (*(int *)(lVar39 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              lVar39 = *(long *)puVar9;
            }
            *(undefined4 *)((long)unaff_x19 + 0x1d4) =
                 *(undefined4 *)(*(long *)(lVar39 + 0xb8) + 0x68);
          }
          fVar57 = *_fStack0000000000000090;
          fVar50 = (float)FUN_08a73b44(&stack0x000012b0,0);
          fVar56 = (float)FUN_08a73b4c(&stack0x000012b0,0);
          if (*_fStack00000000000000e8 == 0) goto LAB_087ddb5c;
          fVar56 = in_stack_00000120 * (fVar57 / fVar50) * fVar56;
          memmove(&stack0x00001210,(void *)(*_fStack00000000000000e8 + 0x28),0x60);
          fVar50 = (float)FUN_08a73b44(&stack0x00001210,0);
          fVar57 = *_fStack0000000000000090;
          if (fVar50 <= 0.0) {
            fVar50 = (float)FUN_08a73b44(&stack0x000012b0,0);
            fVar63 = (float)FUN_08a73b4c(&stack0x000012b0,0);
            fVar46 = (float)FUN_08a73b74(&stack0x000012b0,0);
            if (plVar43[4] == 0) goto LAB_087ddb5c;
            FUN_08a74008(&stack0x00001350,plVar43[4],0);
            fVar67 = (float)FUN_08a73e38(&stack0x000011f0,0);
            if (plVar43[4] == 0) goto LAB_087ddb5c;
            fVar48 = *(float *)((long)plVar43 + 0x2c);
            fVar57 = in_stack_00000120 * (fVar57 / fVar50) * fVar63;
            fVar50 = (float)FUN_08a74044(plVar43[4],0);
            fVar50 = fVar57 * (fVar46 / fVar67) * fVar48 * fVar50;
            fStack0000000000000150 = 0.0;
            if (fVar50 != 0.0) {
              fStack0000000000000150 = fVar57 / fVar50;
            }
            fStack0000000000000154 = (float)FUN_08a73b74(&stack0x000012b0,0);
            fStack0000000000000154 = fStack0000000000000154 * fStack0000000000000150;
            fVar57 = (float)FUN_08a73b9c(&stack0x000012b0,0);
            fVar63 = *(float *)((long)unaff_x19 + 0x43c);
            fVar46 = (float)FUN_08a73b4c(&stack0x000012b0,0);
            fVar46 = fVar56 * fVar57 * fVar63 * fVar46;
            fVar56 = (float)FUN_08a73ba4(&stack0x000012b0,0);
            fStack0000000000000150 = fStack0000000000000150 * fVar56;
          }
          else {
            fVar50 = (float)FUN_08a73b44(&stack0x00001210,0);
            fVar63 = (float)FUN_08a73b4c(&stack0x00001210,0);
            if (plVar43[4] == 0) goto LAB_087ddb5c;
            fVar67 = *(float *)((long)plVar43 + 0x2c);
            fVar46 = (float)FUN_08a74044(plVar43[4],0);
            fVar50 = in_stack_00000120 * (fVar57 / fVar50) * fVar63 * fVar67 * fVar46;
            fStack0000000000000154 = (float)FUN_08a73b74(&stack0x00001210,0);
            fVar57 = (float)FUN_08a73b9c(&stack0x00001210,0);
            fVar63 = *(float *)((long)unaff_x19 + 0x43c);
            fVar46 = (float)FUN_08a73b4c(&stack0x00001210,0);
            fVar46 = fVar56 * fVar57 * fVar63 * fVar46;
            fStack0000000000000150 = (float)FUN_08a73ba4(&stack0x00001210,0);
          }
          unaff_x19[0xcc] = (long)plVar43;
          thunk_FUN_040ec700(in_stack_00000188,plVar43);
          if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
          goto LAB_087ddb5c;
          if (*(uint *)(lVar39 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
          lVar39 = lVar39 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29;
          *(long *)(lVar39 + 0x40) = unaff_x19[0x20];
          *(undefined4 *)(lVar39 + 0x20) = 1;
          *(float *)(lVar39 + 0x15c) = fVar50;
          thunk_FUN_040ec700();
          lVar39 = unaff_x19[0x74];
          if ((lVar39 == 0) || (lVar28 = *(long *)(lVar39 + 0x38), lVar28 == 0)) goto LAB_087ddb5c;
          if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
          unaff_s13 = 0.0;
          *(int *)(lVar28 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29 +
                  0x50) = (int)unaff_x19[0x24];
          *(int *)(unaff_x19 + 0x24) = (int)lVar36;
LAB_087d742c:
          in_stack_00000180._4_4_ = 0.0;
          if (in_stack_0000134c != 3 && in_stack_0000134c != 0xad) {
            in_stack_00000180._4_4_ = fVar50;
          }
        }
        else {
          lVar39 = unaff_x19[0x74];
          if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
            if ((lVar39 == 0) || (lVar39 = *(long *)(lVar39 + 0x38), lVar39 == 0))
            goto LAB_087ddb5c;
            if (*(uint *)(lVar39 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
            *in_stack_00000188 =
                 *(long *)(lVar39 + (long)(int)*(uint *)(in_stack_000001d0 + 7) *
                                    (long)(int)unaff_w29 + 0x30);
            thunk_FUN_040ec700(in_stack_00000188);
            unaff_x23 = in_stack_000001d0;
            if (*in_stack_00000188 == 0) goto LAB_087d7090;
            if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
            goto LAB_087ddb5c;
            if (*(uint *)(lVar39 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
            unaff_x19[0x20] =
                 *(long *)(lVar39 + (long)(int)*(uint *)(in_stack_000001d0 + 7) *
                                    (long)(int)unaff_w29 + 0x40);
            thunk_FUN_040ec700(unaff_x19 + 0x20);
            if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
            goto LAB_087ddb5c;
            if (*(uint *)(lVar39 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
            unaff_x19[0x23] =
                 *(long *)(lVar39 + (long)(int)*(uint *)(in_stack_000001d0 + 7) *
                                    (long)(int)unaff_w29 + 0x48);
            thunk_FUN_040ec700(unaff_x19 + 0x23);
            if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
            goto LAB_087ddb5c;
            uVar14 = *(uint *)(in_stack_000001d0 + 7);
            uVar13 = *(uint *)(lVar39 + 0x18);
            if (uVar13 <= uVar14) goto LAB_087ddd1c;
            *(undefined4 *)(unaff_x19 + 0x24) =
                 *(undefined4 *)(lVar39 + 0x20 + (long)(int)uVar14 * (long)(int)unaff_w29 + 0x30);
            pfVar34 = _fStack0000000000000090;
            if (uVar30 == unaff_w21) {
              lVar28 = unaff_x19[0x91];
              if (lVar28 == 0) goto LAB_087ddb5c;
              if (*(uint *)(lVar28 + 0x18) <= in_stack_00001318) goto LAB_087ddd1c;
              if ((*(int *)(lVar28 + (long)(int)in_stack_00001318 * 0x10 + 0x24) == 10) &&
                 (uVar14 != *(uint *)(unaff_x19 + 0x95))) {
                if (uVar13 <= uVar14 - 1) goto LAB_087ddd1c;
                pfVar34 = (float *)(lVar39 + 0x20 + (long)(int)(uVar14 - 1) * (long)(int)unaff_w29 +
                                   0x38);
              }
            }
            fVar63 = *pfVar34;
            fVar56 = (float)FUN_08a73b44(&stack0x000012b0,0);
            fVar57 = (float)FUN_08a73b4c(&stack0x000012b0,0);
            if (uVar30 == unaff_w21) {
              fStack0000000000000150 = 0.0;
              fStack0000000000000154 = 0.0;
              if (in_stack_0000134c != 0x2026) goto LAB_087d6f78;
            }
            else {
LAB_087d6f78:
              fStack0000000000000154 = (float)FUN_08a73b74(&stack0x000012b0,0);
              fStack0000000000000150 = (float)FUN_08a73ba4(&stack0x000012b0,0);
            }
            lVar39 = unaff_x19[0xcc];
            if ((lVar39 == 0) || (*(long *)(lVar39 + 0x20) == 0)) goto LAB_087ddb5c;
            fVar48 = *(float *)((long)unaff_x19 + 0x43c);
            fVar49 = *(float *)(lVar39 + 0x2c);
            fVar50 = (float)FUN_08a74044(*(long *)(lVar39 + 0x20),0);
            fVar67 = (float)FUN_08a73b9c(&stack0x000012b0,0);
            fVar66 = *(float *)((long)unaff_x19 + 0x43c);
            fVar46 = (float)FUN_08a73b4c(&stack0x000012b0,0);
            lVar39 = unaff_x19[0x74];
            if ((lVar39 == 0) || (lVar28 = *(long *)(lVar39 + 0x38), lVar28 == 0))
            goto LAB_087ddb5c;
            if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
            lVar28 = lVar28 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29;
            *(undefined4 *)(lVar28 + 0x20) = 0;
            fVar56 = in_stack_00000120 * ((fStack000000000000016c * fVar63) / fVar56) * fVar57;
            fVar50 = fVar56 * fVar48 * fVar49 * fVar50;
            fVar46 = fVar56 * fVar67 * fVar66 * fVar46;
            *(float *)(lVar28 + 0x15c) = fVar50;
            uVar13 = *(uint *)(unaff_x19 + 0x24);
            if (uVar13 == 0) {
              unaff_s15 = 1.0;
              unaff_s13 = *(float *)(unaff_x19 + 0xc6);
              goto LAB_087d742c;
            }
            unaff_s15 = 1.0;
            lVar28 = unaff_x19[0xe4];
            if (lVar28 == 0) goto LAB_087ddb5c;
            if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_087ddd1c;
            lVar28 = *(long *)(lVar28 + (long)(int)uVar13 * 8 + 0x20);
            if (lVar28 == 0) goto LAB_087ddb5c;
            unaff_s13 = *(float *)(lVar28 + 0x10c);
            goto LAB_087d742c;
          }
          in_stack_00000180._4_4_ = 0.0;
          if (in_stack_0000134c != 3 && in_stack_0000134c != 0xad) {
            in_stack_00000180._4_4_ = fVar50;
          }
          fVar46 = 0.0;
          fStack0000000000000154 = 0.0;
          fStack0000000000000150 = 0.0;
          if (lVar39 == 0) goto LAB_087ddb5c;
        }
        lVar39 = *(long *)(lVar39 + 0x38);
        if (lVar39 == 0) goto LAB_087ddb5c;
        if (*(uint *)(lVar39 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
        lVar39 = lVar39 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29;
        *(short *)(lVar39 + 0x24) = (short)in_stack_0000134c;
        *(int *)(lVar39 + 0x58) = (int)unaff_x19[0x42];
        *(int *)(lVar39 + 0x160) = (int)unaff_x19[0xa0];
        if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
        goto LAB_087ddb5c;
        if (*(uint *)(lVar39 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
        *(int *)(lVar39 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29 + 0x164
                ) = (int)unaff_x19[0x2b];
        if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
        goto LAB_087ddb5c;
        if (*(uint *)(lVar39 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
        *(undefined4 *)
         (lVar39 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29 + 0x16c) =
             *(undefined4 *)((long)unaff_x19 + 0x15c);
        if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
        goto LAB_087ddb5c;
        if (*(uint *)(lVar39 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
        lVar39 = lVar39 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29;
        auVar70 = *in_stack_000000b0;
        *(undefined4 *)(lVar39 + 0x188) = *(undefined4 *)in_stack_000000b0[1];
        *(long *)(lVar39 + 0x180) = auVar70._8_8_;
        *(long *)(lVar39 + 0x178) = auVar70._0_8_;
        if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
        goto LAB_087ddb5c;
        if (*(uint *)(lVar39 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
        lVar39 = lVar39 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29;
        lVar28 = *(long *)(lVar39 + 0x38);
        *(undefined4 *)(lVar39 + 0x18c) = *(undefined4 *)((long)unaff_x19 + 0x284);
        if (lVar28 == 0) {
          if ((*in_stack_00000188 == 0) ||
             (lVar39 = *(long *)(*in_stack_00000188 + 0x20), lVar39 == 0)) goto LAB_087ddb5c;
          FUN_08a74008(&stack0x00001350,lVar39,0);
        }
        else {
          FUN_08a74008(&stack0x000005d0,lVar28,0);
        }
        if (in_stack_0000134c >> 0x10 == 0) {
          if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar13 = FUN_075d81a8(in_stack_0000134c,0);
          unaff_w26 = uVar13 & 1;
        }
        else {
          unaff_w26 = 0;
        }
        in_stack_000000e0 = *(float *)(unaff_x19 + 0x5a);
        if (((in_stack_000000a8 & 0x100000000) != 0) && (*(int *)((long)unaff_x19 + 0x65c) == 0)) {
          if (*in_stack_00000188 == 0) goto LAB_087ddb5c;
          iVar15 = *(int *)(in_stack_000001d0 + 7);
          uVar13 = *(uint *)(*in_stack_00000188 + 0x28);
          if (iVar15 < (int)fStack0000000000000050) {
            if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
            goto LAB_087ddb5c;
            uVar14 = iVar15 + 1;
            if (*(uint *)(lVar39 + 0x18) <= uVar14) goto LAB_087ddd1c;
            if (*(int *)(lVar39 + 0x20 + (long)(int)uVar14 * (long)(int)unaff_w29) == 0) {
              lVar39 = *(long *)(lVar39 + 0x20 + (long)(int)uVar14 * (long)(int)unaff_w29 + 0x10);
              if ((((lVar39 == 0) || (unaff_x19[0x20] == 0)) ||
                  (lVar28 = *(long *)(unaff_x19[0x20] + 0x178), lVar28 == 0)) ||
                 (lVar28 = *(long *)(lVar28 + 0x40), lVar28 == 0)) goto LAB_087ddb5c;
              uVar20 = FUN_06fba39c(lVar28,uVar13 | *(int *)(lVar39 + 0x28) << 0x10,&stack0x000011c0
                                    ,*(undefined8 *)PTR_DAT_09337578);
              if ((uVar20 & 1) != 0) {
                FUN_08a786f8(&stack0x00001350,&stack0x000011c0,0);
                UnityEngine_UIElements_UIR_DetachedAllocator___ctor(&stack0x000011a0,0);
                uVar20 = FUN_08a78734(&stack0x000011c0,0);
                if ((uVar20 & 0x100) != 0) {
                  in_stack_000000e0 = 0.0;
                }
              }
            }
            iVar15 = *(int *)(in_stack_000001d0 + 7);
          }
          if (0 < iVar15) {
            if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
            goto LAB_087ddb5c;
            if (*(uint *)(lVar39 + 0x18) <= iVar15 - 1U) goto LAB_087ddd1c;
            lVar39 = *(long *)(lVar39 + (ulong)(iVar15 - 1U) * (ulong)unaff_w29 + 0x30);
            if (lVar39 == 0) goto LAB_087ddb5c;
            uVar14 = *(uint *)(lVar39 + 0x28);
            lVar39 = FUN_088161d4();
            if ((lVar39 == 0) || (lVar39 = *(long *)(lVar39 + 0x38), lVar39 == 0))
            goto LAB_087ddb5c;
            if (*(uint *)(lVar39 + 0x18) <= *(int *)(in_stack_000001d0 + 7) - 1U) goto LAB_087ddd1c;
            if (*(int *)(lVar39 + (long)(int)(*(int *)(in_stack_000001d0 + 7) - 1U) *
                                  (long)(int)unaff_w29 + 0x20) == 0) {
              if (((unaff_x19[0x20] == 0) ||
                  (lVar39 = *(long *)(unaff_x19[0x20] + 0x178), lVar39 == 0)) ||
                 (lVar39 = *(long *)(lVar39 + 0x40), lVar39 == 0)) goto LAB_087ddb5c;
              uVar20 = FUN_06fba39c(lVar39,uVar14 | uVar13 << 0x10,&stack0x000011c0,
                                    *(undefined8 *)PTR_DAT_09337578);
              if ((uVar20 & 1) != 0) {
                FUN_08a78720(&stack0x00001350,&stack0x000011c0,0);
                UnityEngine_UIElements_UIR_DetachedAllocator___ctor(&stack0x000011a0,0);
                FUN_08a783ac(0);
                uVar20 = FUN_08a78734(&stack0x000011c0,0);
                if ((uVar20 & 0x100) != 0) {
                  in_stack_000000e0 = 0.0;
                }
              }
            }
          }
        }
        if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
        goto LAB_087ddb5c;
        uVar13 = *(uint *)(in_stack_000001d0 + 7);
        uVar47 = FUN_08a78388(&stack0x00001280,0);
        if (*(uint *)(lVar39 + 0x18) <= uVar13) goto LAB_087ddd1c;
        *(undefined4 *)(lVar39 + (long)(int)uVar13 * (long)(int)unaff_w29 + 0x154) = uVar47;
        if (*(int *)(*(long *)PTR_DAT_093375f8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar22 = FUN_08847bd4(in_stack_0000134c,0);
        uVar13 = *(uint *)(in_stack_000001d0 + 7);
        uVar20 = (ulong)uVar13;
        if ((uVar22 & 1) == 0) {
          if (0 < (int)uVar13) {
            if ((((uVar24 & 1) == 0) ||
                (uVar14 = *(uint *)((long)unaff_x19 + 0x32c), uVar14 == 0x80000000)) ||
               (uVar14 != uVar13 - 1)) {
              if ((in_stack_00000048 & 1) == 0) {
                bVar10 = false;
              }
              else {
                lVar39 = uVar20 * unaff_w29 + 0x144;
                uVar41 = uVar20;
                do {
                  uVar41 = uVar41 - 1;
                  iVar15 = (int)uVar20;
                  uVar13 = iVar15 - 1;
                  uVar20 = (ulong)uVar13;
                  if ((iVar15 < 1) || (uVar41 == *(uint *)((long)unaff_x19 + 0x32c))) {
                    bVar10 = false;
                    goto LAB_087d7b64;
                  }
                  if ((unaff_x19[0x74] == 0) ||
                     (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0)) goto LAB_087ddb5c;
                  if (*(uint *)(lVar28 + 0x18) <= uVar41) goto LAB_087ddd1c;
                  lVar28 = *(long *)(lVar28 + lVar39 + -0x28c);
                  if ((lVar28 == 0) || (lVar28 = *(long *)(lVar28 + 0x20), lVar28 == 0))
                  goto LAB_087ddb5c;
                  uVar14 = FUN_08a73ff8(lVar28,0);
                  if ((*in_stack_00000188 == 0) ||
                     (((unaff_x19[0x20] == 0 ||
                       (lVar28 = *(long *)(unaff_x19[0x20] + 0x178), lVar28 == 0)) ||
                      (lVar28 = *(long *)(lVar28 + 0x50), lVar28 == 0)))) goto LAB_087ddb5c;
                  uVar23 = FUN_06fcaab8(lVar28,uVar14 | *(int *)(*in_stack_00000188 + 0x28) << 0x10,
                                        &stack0x00001170,*(undefined8 *)PTR_DAT_09337588);
                  lVar39 = lVar39 + -0x178;
                } while ((uVar23 & 1) == 0);
                if ((unaff_x19[0x74] == 0) ||
                   (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0)) goto LAB_087ddb5c;
                if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_087ddd1c;
                FUN_08a78370(((*(float *)(lVar28 + lVar39 + -0xc) - *(float *)(unaff_x19 + 0xcb)) /
                              in_stack_00000180._4_4_ + in_stack_00001174) - in_stack_00001180,
                             in_stack_00001174,in_stack_00001180,&stack0x00001280,0);
                FUN_08a78380(&stack0x00001280,0);
                in_stack_000000e0 = 0.0;
                bVar10 = true;
              }
LAB_087d7b64:
              if ((uVar24 & 1) != 0) {
                uVar13 = *(uint *)((long)unaff_x19 + 0x32c);
                if (uVar13 == 0x80000000) {
                  bVar10 = true;
                }
                if (!bVar10) {
                  if ((unaff_x19[0x74] == 0) ||
                     (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0)) goto LAB_087ddb5c;
                  if (*(uint *)(lVar39 + 0x18) <= uVar13) goto LAB_087ddd1c;
                  lVar39 = *(long *)(lVar39 + (long)(int)uVar13 * (long)(int)unaff_w29 + 0x30);
                  if ((lVar39 == 0) || (lVar39 = *(long *)(lVar39 + 0x20), lVar39 == 0))
                  goto LAB_087ddb5c;
                  uVar13 = FUN_08a73ff8(lVar39,0);
                  if ((*in_stack_00000188 == 0) ||
                     (((unaff_x19[0x20] == 0 ||
                       (lVar39 = *(long *)(unaff_x19[0x20] + 0x178), lVar39 == 0)) ||
                      (lVar39 = *(long *)(lVar39 + 0x48), lVar39 == 0)))) goto LAB_087ddb5c;
                  uVar20 = FUN_06fc3f48(lVar39,uVar13 | *(int *)(*in_stack_00000188 + 0x28) << 0x10,
                                        &stack0x00001158,*(undefined8 *)PTR_DAT_09337580);
                  if ((uVar20 & 1) != 0) {
                    if ((unaff_x19[0x74] != 0) &&
                       (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 != 0)) {
                      if (*(uint *)((long)unaff_x19 + 0x32c) < *(uint *)(lVar39 + 0x18)) {
                        FUN_08a78370((in_stack_0000115c +
                                     (*(float *)(lVar39 + (long)(int)*(uint *)((long)unaff_x19 +
                                                                              0x32c) *
                                                          (long)(int)unaff_w29 + 0x138) -
                                     *(float *)(unaff_x19 + 0xcb)) / in_stack_00000180._4_4_) -
                                     in_stack_00001168,in_stack_0000115c,in_stack_00001168,
                                     &stack0x00001280,0);
                        goto LAB_087d7c60;
                      }
                      goto LAB_087ddd1c;
                    }
                    goto LAB_087ddb5c;
                  }
                }
              }
            }
            else {
              if ((unaff_x19[0x74] == 0) ||
                 (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0)) goto LAB_087ddb5c;
              if (*(uint *)(lVar39 + 0x18) <= uVar14) goto LAB_087ddd1c;
              lVar39 = *(long *)(lVar39 + (long)(int)uVar14 * (long)(int)unaff_w29 + 0x30);
              if ((lVar39 == 0) || (lVar39 = *(long *)(lVar39 + 0x20), lVar39 == 0))
              goto LAB_087ddb5c;
              uVar13 = FUN_08a73ff8(lVar39,0);
              if ((*in_stack_00000188 == 0) ||
                 (((unaff_x19[0x20] == 0 ||
                   (lVar39 = *(long *)(unaff_x19[0x20] + 0x178), lVar39 == 0)) ||
                  (lVar39 = *(long *)(lVar39 + 0x48), lVar39 == 0)))) goto LAB_087ddb5c;
              uVar20 = FUN_06fc3f48(lVar39,uVar13 | *(int *)(*in_stack_00000188 + 0x28) << 0x10,
                                    &stack0x00001188,*(undefined8 *)PTR_DAT_09337580);
              if ((uVar20 & 1) != 0) {
                if ((unaff_x19[0x74] == 0) ||
                   (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0)) goto LAB_087ddb5c;
                if (*(uint *)(lVar39 + 0x18) <= *(uint *)((long)unaff_x19 + 0x32c))
                goto LAB_087ddd1c;
                FUN_08a78370((in_stack_0000118c +
                             (*(float *)(lVar39 + (long)(int)*(uint *)((long)unaff_x19 + 0x32c) *
                                                  (long)(int)unaff_w29 + 0x138) -
                             *(float *)(unaff_x19 + 0xcb)) / in_stack_00000180._4_4_) -
                             in_stack_00001198,in_stack_0000118c,in_stack_00001198,&stack0x00001280,
                             0);
LAB_087d7c60:
                FUN_08a78380(&stack0x00001280,0);
                in_stack_000000e0 = 0.0;
              }
            }
          }
        }
        else {
          *(uint *)((long)unaff_x19 + 0x32c) = uVar13;
        }
        fVar56 = (float)FUN_08a78378(&stack0x00001280,0);
        fVar57 = (float)FUN_08a78378(&stack0x00001280,0);
        if ((char)unaff_x19[0x1e] != '\0') {
          fVar67 = *(float *)(unaff_x19 + 0xcb);
          fVar63 = (float)FUN_08a73e50(&stack0x00001290,0);
          fVar67 = fVar67 - in_stack_00000180._4_4_ *
                            fVar63 * (unaff_s15 - *(float *)(unaff_x19 + 0x60));
          *(float *)(unaff_x19 + 0xcb) = fVar67;
          if ((unaff_w26 != 0) || (in_stack_0000134c == 0x200b)) {
            *(float *)(unaff_x19 + 0xcb) = fVar67 - in_stack_00000100 * *(float *)(unaff_x19 + 0x5c)
            ;
          }
        }
        fVar63 = *(float *)(unaff_x19 + 0x5b);
        in_stack_00000098._4_4_ = 0.0;
        if (fVar63 != 0.0) {
          if (((*(char *)((long)unaff_x19 + 0x2dc) == '\0') || (0x3a < in_stack_0000134c)) ||
             (fVar67 = 0.25, (1L << ((ulong)in_stack_0000134c & 0x3f) & 0x400500000000000U) == 0)) {
            fVar67 = 0.5;
          }
          fVar48 = (float)FUN_08a73e30(&stack0x00001290,0);
          fVar49 = (float)FUN_08a73e40(&stack0x00001290,0);
          in_stack_00000098._4_4_ =
               (unaff_s15 - *(float *)(unaff_x19 + 0x60)) *
               (fVar63 * fVar67 - in_stack_00000180._4_4_ * (fVar48 * 0.5 + fVar49));
          *(float *)(unaff_x19 + 0xcb) = in_stack_00000098._4_4_ + *(float *)(unaff_x19 + 0xcb);
        }
        if (((cVar26 == '\0') && (*(int *)((long)unaff_x19 + 0x65c) == 0)) &&
           ((*(byte *)((long)unaff_x19 + 0x284) & 1) != 0)) {
          lVar39 = unaff_x19[0x23];
          if (*(int *)(*unaff_x28 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar20 = FUN_089ca704(lVar39,0,0);
          fVar67 = 0.0;
          if ((uVar20 & 1) != 0) {
            lVar39 = unaff_x19[0x23];
            if (*(int *)(*(long *)PTR_DAT_093375a8 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            plVar43 = (long *)PTR_DAT_093375a8;
            if (lVar39 == 0) goto LAB_087ddb5c;
            uVar20 = FUN_08995264(lVar39,*(undefined4 *)
                                          (*(long *)(*(long *)PTR_DAT_093375a8 + 0xb8) + 0x6c),0);
            if ((uVar20 & 1) != 0) {
              lVar39 = unaff_x19[0x23];
              if (*(int *)(*plVar43 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                plVar43 = (long *)PTR_DAT_093375a8;
              }
              if (lVar39 == 0) goto LAB_087ddb5c;
              fVar63 = (float)thunk_FUN_08997afc(lVar39,*(undefined4 *)
                                                         (*(long *)(*plVar43 + 0xb8) + 0x6c),0);
              if ((unaff_x19[0x20] == 0) || (unaff_x19[0x23] == 0)) goto LAB_087ddb5c;
              fVar48 = *(float *)(unaff_x19[0x20] + 0x1a8);
              fVar67 = (float)thunk_FUN_08997afc(unaff_x19[0x23],
                                                 *(undefined4 *)
                                                  (*(long *)(*(long *)PTR_DAT_093375a8 + 0xb8) +
                                                  0xe4),0);
              fVar67 = fVar67 * fVar63 * fVar48 * 0.25;
              if (fVar63 < unaff_s13 + fVar67) {
                unaff_s13 = fVar63 - fVar67;
              }
            }
          }
          if (unaff_x19[0x20] == 0) goto LAB_087ddb5c;
          fStack00000000000000fc = *(float *)(unaff_x19[0x20] + 0x1ac);
        }
        else {
          lVar39 = unaff_x19[0x23];
          if (*(int *)(*unaff_x28 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar20 = FUN_089ca704(lVar39,0,0);
          fStack00000000000000fc = 0.0;
          if ((uVar20 & 1) != 0) {
            lVar39 = unaff_x19[0x23];
            if (*(int *)(*(long *)PTR_DAT_093375a8 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            plVar43 = (long *)PTR_DAT_093375a8;
            if (lVar39 == 0) goto LAB_087ddb5c;
            uVar20 = FUN_08995264(lVar39,*(undefined4 *)
                                          (*(long *)(*(long *)PTR_DAT_093375a8 + 0xb8) + 0x6c),0);
            if ((uVar20 & 1) != 0) {
              lVar39 = unaff_x19[0x23];
              if (*(int *)(*plVar43 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                plVar43 = (long *)PTR_DAT_093375a8;
              }
              if (lVar39 == 0) goto LAB_087ddb5c;
              uVar20 = FUN_08995264(lVar39,*(undefined4 *)(*(long *)(*plVar43 + 0xb8) + 0xe4),0);
              if ((uVar20 & 1) != 0) {
                lVar39 = unaff_x19[0x23];
                if (*(int *)(*plVar43 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  plVar43 = (long *)PTR_DAT_093375a8;
                }
                if (lVar39 != 0) {
                  fVar63 = (float)thunk_FUN_08997afc(lVar39,*(undefined4 *)
                                                             (*(long *)(*plVar43 + 0xb8) + 0x6c),0);
                  if ((unaff_x19[0x20] != 0) && (unaff_x19[0x23] != 0)) {
                    fVar48 = *(float *)(unaff_x19[0x20] + 0x1a0);
                    fVar67 = (float)thunk_FUN_08997afc(unaff_x19[0x23],
                                                       *(undefined4 *)
                                                        (*(long *)(*(long *)PTR_DAT_093375a8 + 0xb8)
                                                        + 0xe4),0);
                    fVar67 = fVar67 * fVar63 * fVar48 * 0.25;
                    if (fVar63 < unaff_s13 + fVar67) {
                      unaff_s13 = fVar63 - fVar67;
                    }
                    goto LAB_087d8014;
                  }
                }
                goto LAB_087ddb5c;
              }
            }
          }
          fVar67 = 0.0;
        }
LAB_087d8014:
        fVar65 = *(float *)(unaff_x19 + 0xcb);
        fVar63 = (float)FUN_08a73e40(&stack0x00001290,0);
        fVar49 = *(float *)((long)unaff_x19 + 0x47c);
        fVar48 = (float)FUN_08a78368(&stack0x00001280,0);
        fVar65 = fVar65 + (unaff_s15 - *(float *)(unaff_x19 + 0x60)) *
                          in_stack_00000180._4_4_ *
                          (fVar48 + ((fVar63 * fVar49 - unaff_s13) - fVar67));
        fVar63 = (float)FUN_08a73e48(&stack0x00001290,0);
        fVar48 = (float)FUN_08a78378(&stack0x00001280,0);
        in_stack_000001a0 =
             *(float *)((long)unaff_x19 + 0x634) +
             ((fVar46 + in_stack_00000180._4_4_ * (unaff_s13 + fVar63 + fVar48)) -
             *(float *)((long)unaff_x19 + 0x4ec));
        fVar63 = (float)FUN_08a73e38(&stack0x00001290,0);
        fVar63 = in_stack_000001a0 - in_stack_00000180._4_4_ * (unaff_s13 + unaff_s13 + fVar63);
        fVar48 = (float)FUN_08a73e30(&stack0x00001290,0);
        fVar48 = fVar65 + (unaff_s15 - *(float *)(unaff_x19 + 0x60)) *
                          in_stack_00000180._4_4_ *
                          (fVar67 + fVar67 +
                          unaff_s13 + unaff_s13 + fVar48 * *(float *)((long)unaff_x19 + 0x47c));
        fVar49 = fVar65;
        fVar66 = fVar48;
        if (((*(int *)((long)unaff_x19 + 0x65c) == 0) && (cVar26 == '\0')) &&
           ((*(byte *)((long)unaff_x19 + 0x284) >> 1 & 1) != 0)) {
          if (unaff_x19[0x20] == 0) goto LAB_087ddb5c;
          lVar39 = unaff_x19[0xc1];
          fVar49 = (float)UnityEngine_UIElements_BaseVisualTreeUpdater__UnityEngine_UIElements_IVisualTreeUpdater_get_FrameCount
                                    (unaff_x19[0x20] + 0x28,0);
          if (unaff_x19[0x20] == 0) goto LAB_087ddb5c;
          fVar55 = (float)FUN_08a73b9c(unaff_x19[0x20] + 0x28,0);
          if (unaff_x19[0x20] == 0) goto LAB_087ddb5c;
          fVar68 = *(float *)((long)unaff_x19 + 0x43c);
          fVar69 = *(float *)((long)unaff_x19 + 0x634);
          fVar66 = (float)(int)lVar39 * fStack0000000000000054;
          fVar62 = (float)FUN_08a73b4c(unaff_x19[0x20] + 0x28,0);
          fVar62 = fVar62 * fVar68 * (fVar49 - (fVar55 + fVar69)) * 0.5;
          fVar49 = (float)FUN_08a73e48(&stack0x00001290,0);
          fVar69 = fVar66 * in_stack_00000180._4_4_ * ((fVar67 + unaff_s13 + fVar49) - fVar62);
          fVar55 = (float)FUN_08a73e48(&stack0x00001290,0);
          fVar68 = (float)FUN_08a73e38(&stack0x00001290,0);
          in_stack_000001a0 = in_stack_000001a0 + 0.0;
          unaff_s15 = 1.0;
          fVar63 = fVar63 + 0.0;
          fVar49 = fVar65 + fVar69;
          fVar66 = fVar66 * in_stack_00000180._4_4_ *
                            ((((fVar55 - fVar68) - unaff_s13) - fVar67) - fVar62);
          fVar65 = fVar65 + fVar66;
          fVar66 = fVar48 + fVar66;
          fVar48 = fVar48 + fVar69;
        }
        uVar19 = *in_stack_000001d0;
        uVar59 = in_stack_000001d0[1];
        if (DAT_09885626 == '\0') {
          FUN_04077588(PTR_DAT_09286df8);
          DAT_09885626 = '\x01';
        }
        uVar52 = **(undefined8 **)(*(long *)PTR_DAT_09286df8 + 0xb8);
        uVar58 = (*(undefined8 **)(*(long *)PTR_DAT_09286df8 + 0xb8))[1];
        if (DAT_01aecb98 <
            (float)((ulong)uVar59 >> 0x20) * (float)((ulong)uVar58 >> 0x20) +
            (float)uVar59 * (float)uVar58 +
            (float)uVar19 * (float)uVar52 +
            (float)((ulong)uVar19 >> 0x20) * (float)((ulong)uVar52 >> 0x20)) {
          fVar55 = 0.0;
          auVar53._4_12_ = SUB1612(ZEXT816(0),4);
          auVar53._0_4_ = fVar63;
          uVar19 = auVar53._0_8_;
          uVar20 = (ulong)(uint)in_stack_000001a0;
          uVar59 = uVar19;
        }
        else {
          FUN_089b6dfc(&stack0x00001350,*(undefined4 *)((long)unaff_x19 + 0x46c),
                       (int)unaff_x19[0x8e],*(undefined4 *)((long)unaff_x19 + 0x474),
                       (int)unaff_x19[0x8f],0);
          fVar66 = (fVar48 + fVar65) * 0.5;
          fVar62 = (fVar63 + in_stack_000001a0) * 0.5;
          fVar48 = 0.0;
          auVar70 = ZEXT416((uint)(in_stack_000001a0 - fVar62));
          fVar49 = (float)FUN_089b6cfc(&stack0x00001110,0);
          fVar49 = fVar66 + fVar49;
          fVar68 = 0.0;
          uVar20 = CONCAT44(fVar48 + 0.0,fVar62 + auVar70._0_4_);
          auVar70 = ZEXT416((uint)(fVar63 - fVar62));
          fVar65 = (float)FUN_089b6cfc(&stack0x00001110,0);
          fVar65 = fVar66 + fVar65;
          fVar55 = 0.0;
          uVar19 = CONCAT44(fVar68 + 0.0,fVar62 + auVar70._0_4_);
          auVar70 = ZEXT416((uint)(in_stack_000001a0 - fVar62));
          fVar48 = (float)FUN_089b6cfc(&stack0x00001110,0);
          fVar48 = fVar66 + fVar48;
          fVar68 = 0.0;
          in_stack_000001a0 = fVar62 + auVar70._0_4_;
          fVar55 = fVar55 + 0.0;
          auVar70 = ZEXT416((uint)(fVar63 - fVar62));
          unaff_s15 = 1.0;
          fVar63 = (float)FUN_089b6cfc(&stack0x00001110,0);
          fVar66 = fVar66 + fVar63;
          uVar59 = CONCAT44(fVar68 + 0.0,fVar62 + auVar70._0_4_);
        }
        if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
        goto LAB_087ddb5c;
        if (*(uint *)(lVar39 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
        lVar39 = lVar39 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29;
        *(float *)(lVar39 + 0x114) = fVar65;
        *(undefined8 *)(lVar39 + 0x118) = uVar19;
        if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
        goto LAB_087ddb5c;
        if (*(uint *)(lVar39 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
        lVar39 = lVar39 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29;
        *(float *)(lVar39 + 0x108) = fVar49;
        *(ulong *)(lVar39 + 0x10c) = uVar20;
        if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
        goto LAB_087ddb5c;
        if (*(uint *)(lVar39 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
        lVar39 = lVar39 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29;
        *(float *)(lVar39 + 0x120) = fVar48;
        *(ulong *)(lVar39 + 0x124) = CONCAT44(fVar55,in_stack_000001a0);
        if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
        goto LAB_087ddb5c;
        if (*(uint *)(lVar39 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
        lVar39 = lVar39 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29;
        *(float *)(lVar39 + 300) = fVar66;
        *(undefined8 *)(lVar39 + 0x130) = uVar59;
        if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
        goto LAB_087ddb5c;
        uVar13 = *(uint *)((long)unaff_x19 + 0x4a4);
        fVar49 = *(float *)(unaff_x19 + 0xcb);
        fVar63 = (float)FUN_08a78368(&stack0x00001280,0);
        if (*(uint *)(lVar39 + 0x18) <= uVar13) goto LAB_087ddd1c;
        *(float *)(lVar39 + (long)(int)uVar13 * (long)(int)unaff_w29 + 0x138) =
             fVar49 + in_stack_00000180._4_4_ * fVar63;
        if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
        goto LAB_087ddb5c;
        uVar13 = *(uint *)((long)unaff_x19 + 0x4a4);
        fVar49 = *(float *)((long)unaff_x19 + 0x4ec);
        fVar66 = *(float *)((long)unaff_x19 + 0x634);
        fVar63 = (float)FUN_08a78378(&stack0x00001280,0);
        if (*(uint *)(lVar39 + 0x18) <= uVar13) goto LAB_087ddd1c;
        *(float *)(lVar39 + (long)(int)uVar13 * (long)(int)unaff_w29 + 0x144) =
             (fVar46 - fVar49) + fVar66 + in_stack_00000180._4_4_ * fVar63;
        if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
        goto LAB_087ddb5c;
        unaff_w20 = *(uint *)(in_stack_000001d0 + 7);
        if (*(uint *)(lVar39 + 0x18) <= unaff_w20) goto LAB_087ddd1c;
        lVar39 = lVar39 + 0x20;
        *(float *)(lVar39 + (long)(int)unaff_w20 * (long)(int)unaff_w29 + 0x138) =
             (fVar48 - fVar65) / ((float)uVar20 - (float)uVar19);
        fVar56 = in_stack_00000180._4_4_ * (fStack0000000000000154 + fVar56);
        if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
          fVar56 = fVar56 / fStack000000000000016c;
          fVar57 = (in_stack_00000180._4_4_ * (fStack0000000000000150 + fVar57)) /
                   fStack000000000000016c;
        }
        else {
          fVar57 = in_stack_00000180._4_4_ * (fStack0000000000000150 + fVar57);
        }
        fVar63 = *(float *)((long)unaff_x19 + 0x634);
        in_stack_000001a0 = *(float *)(unaff_x19 + 0x95);
        uVar20 = extraout_x1;
        if ((unaff_w26 == 0) || ((float)unaff_w20 == in_stack_000001a0)) {
          fVar56 = fVar56 + fVar63;
          fVar57 = fVar57 + fVar63;
          fVar46 = fVar56;
          fVar48 = fVar57;
          if (fVar63 != 0.0) {
            fVar46 = (fVar56 - fVar63) / *(float *)((long)unaff_x19 + 0x43c);
            fVar48 = (fVar57 - fVar63) / *(float *)((long)unaff_x19 + 0x43c);
            if (fVar46 <= fVar56) {
              fVar46 = fVar56;
            }
            if (fVar57 <= fVar48) {
              fVar48 = fVar57;
            }
          }
          lVar39 = lVar39 + (long)(int)unaff_w20 * (long)(int)unaff_w29;
          fVar63 = fVar46;
          if (fVar46 <= *(float *)((long)unaff_x19 + 0x4dc)) {
            fVar63 = *(float *)((long)unaff_x19 + 0x4dc);
          }
          fVar49 = fVar48;
          if (*(float *)(unaff_x19 + 0x9c) <= fVar48) {
            fVar49 = *(float *)(unaff_x19 + 0x9c);
          }
          *(float *)((long)unaff_x19 + 0x4dc) = fVar63;
          *(float *)(unaff_x19 + 0x9c) = fVar49;
          *(float *)(lVar39 + 300) = fVar46;
          *(float *)(lVar39 + 0x130) = fVar48;
          fVar46 = *(float *)((long)unaff_x19 + 0x4ec);
          *(float *)(lVar39 + 0x120) = fVar56 - fVar46;
          *(float *)((long)unaff_x19 + 0x4d4) = fVar56 - fVar46;
          *(float *)(lVar39 + 0x128) = fVar57 - fVar46;
          *(float *)(unaff_x19 + 0x9b) = fVar57 - fVar46;
          if (((int)unaff_x19[0x97] == 0) || (*(char *)((long)unaff_x19 + 0x374) != '\0')) {
            *(float *)((long)unaff_x19 + 0x4cc) = fVar63;
            if (unaff_x19[0x20] == 0) goto LAB_087ddb5c;
            fVar57 = *(float *)(unaff_x19 + 0x9a);
            fVar63 = (float)UnityEngine_UIElements_BaseVisualTreeUpdater__UnityEngine_UIElements_IVisualTreeUpdater_get_FrameCount
                                      (unaff_x19[0x20] + 0x28,0);
            fStack000000000000016c = (in_stack_00000180._4_4_ * fVar63) / fStack000000000000016c;
            if (fVar57 <= fStack000000000000016c) {
              fVar57 = fStack000000000000016c;
            }
            fVar46 = *(float *)((long)unaff_x19 + 0x4ec);
            *(float *)(unaff_x19 + 0x9a) = fVar57;
            uVar20 = extraout_x1_00;
          }
          if (fVar46 == 0.0) {
            fVar57 = *(float *)(unaff_x19 + 0x99);
            if (*(float *)(unaff_x19 + 0x99) <= fVar56) {
              fVar57 = fVar56;
            }
            *(float *)(unaff_x19 + 0x99) = fVar57;
          }
        }
        else {
          lVar39 = lVar39 + (long)(int)unaff_w20 * (long)(int)unaff_w29;
          uVar59 = in_stack_000001d0[0xe];
          *(undefined8 *)(lVar39 + 300) = uVar59;
          fVar46 = *(float *)((long)unaff_x19 + 0x4ec);
          fVar56 = (float)uVar59 - fVar46;
          fVar57 = (float)((ulong)uVar59 >> 0x20) - fVar46;
          *(float *)(lVar39 + 0x120) = fVar56;
          *(float *)(lVar39 + 0x128) = fVar57;
          in_stack_000001d0[0xd] = CONCAT44(fVar57,fVar56);
        }
        lVar39 = unaff_x19[0x74];
        if ((lVar39 == 0) || (lVar28 = *(long *)(lVar39 + 0x38), lVar28 == 0)) goto LAB_087ddb5c;
        uVar13 = *(uint *)(in_stack_000001d0 + 7);
        if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_087ddd1c;
        lVar28 = lVar28 + (long)(int)uVar13 * (long)(int)unaff_w29;
        *(undefined1 *)(lVar28 + 400) = 0;
        uVar14 = *(uint *)(unaff_x19 + 0x54);
        if ((((in_stack_0000134c != 9) &&
             ((in_stack_0000134c != 0x200b && unaff_w26 == 0 ||
              ((*(uint *)((long)unaff_x19 + 0x304) & 0xfffffffe) != 2)))) &&
            ((unaff_w26 != 0 ||
             (((in_stack_0000134c == 3 || (in_stack_0000134c == 0x200b)) ||
              (in_stack_0000134c == 0xad)))))) &&
           ((in_stack_0000134c != 0xad || (uStack0000000000000058 & 1) != 0 &&
            (*(int *)((long)unaff_x19 + 0x65c) != 1)))) {
          if (((in_stack_0000134c & 0xfffffffe) == 10) && ((int)unaff_x19[0x62] == 6)) {
            fVar50 = 0.0;
            if ((0.0 < fVar46) && ((char)unaff_x19[0x5e] == '\0')) {
              fVar50 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
            }
            fStack000000000000011c = *(float *)((long)unaff_x19 + 0x4cc);
            auVar70 = ZEXT416((uint)in_stack_000000f0._4_4_);
            if (in_stack_000000f0._4_4_ <
                (fStack000000000000011c - (*(float *)(unaff_x19 + 0x9c) - fVar46)) + fVar50) {
              if (*(int *)((long)unaff_x19 + 0x314) == -1) {
                *(uint *)((long)unaff_x19 + 0x314) = uVar13;
              }
              unaff_x28 = (long *)PTR_DAT_09285bb0;
              if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              in_stack_00001318 = FUN_08822600();
              lVar39 = unaff_x19[99];
              if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              uVar20 = FUN_089ca704(lVar39,0,0);
              if ((uVar20 & 1) != 0) {
                plVar43 = (long *)unaff_x19[99];
                uVar59 = (**(code **)(*unaff_x19 + 0x548))();
                if (plVar43 == (long *)0x0) goto LAB_087ddb5c;
                (**(code **)(*plVar43 + 0x558))(plVar43,uVar59,*(undefined8 *)(*plVar43 + 0x560));
                lVar39 = unaff_x19[99];
                if (lVar39 == 0) goto LAB_087ddb5c;
                *(int *)(lVar39 + 0x438) = (int)unaff_x19[0x87];
                FUN_08815fe0(lVar39,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
                plVar43 = (long *)unaff_x19[99];
                if (plVar43 == (long *)0x0) goto LAB_087ddb5c;
                (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
                *(undefined1 *)(unaff_x19 + 0x65) = 1;
              }
LAB_087d9064:
              uVar47 = 3;
LAB_087d9124:
              unaff_x23 = in_stack_000001d0;
              fVar50 = in_stack_00000180._4_4_;
              in_stack_00001338 = CONCAT44(uVar47,uVar13);
              goto LAB_087d7090;
            }
          }
          if ((((in_stack_0000134c - 0x2007 < 0x23) &&
               ((1L << ((ulong)(in_stack_0000134c - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
              (in_stack_0000134c - 10 < 2)) || (in_stack_0000134c == 0xa0)) {
            unaff_x28 = (long *)PTR_DAT_09285bb0;
            if (in_stack_0000134c == 0xad) goto LAB_087d9374;
LAB_087d92c8:
            unaff_x28 = (long *)PTR_DAT_09285bb0;
            if ((in_stack_0000134c == 0x200b) || (in_stack_0000134c == 0x2060)) goto LAB_087d9374;
            lVar39 = unaff_x19[0x74];
            if ((lVar39 == 0) || (lVar28 = *(long *)(lVar39 + 0x50), lVar28 == 0))
            goto LAB_087ddb5c;
            if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_087ddd1c;
            lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
            *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
            *(int *)(lVar39 + 0x20) = *(int *)(lVar39 + 0x20) + 1;
          }
          else {
            if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            auVar70 = FUN_075db9d4(in_stack_0000134c,0);
            uVar20 = auVar70._8_8_;
            if (((auVar70._0_8_ & 1) != 0) && (in_stack_0000134c != 0xad)) goto LAB_087d92c8;
          }
          unaff_x28 = (long *)PTR_DAT_09285bb0;
          if (in_stack_0000134c != 0xa0) goto LAB_087d9374;
          if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x50), lVar39 == 0))
          goto LAB_087ddb5c;
          if (*(uint *)(lVar39 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_087ddd1c;
          lVar39 = lVar39 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
          *(int *)(lVar39 + 0x20) = *(int *)(lVar39 + 0x20) + 1;
          goto LAB_087d9374;
        }
        *(undefined1 *)(lVar28 + 400) = 1;
        pfVar31 = _fStack00000000000000a0;
        pfVar34 = _fStack00000000000000c0;
        if (uVar30 == unaff_w21) {
          lVar39 = *(long *)(lVar39 + 0x50);
          if (lVar39 == 0) goto LAB_087ddb5c;
          if (*(uint *)(lVar39 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_087ddd1c;
          lVar39 = lVar39 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
          pfVar34 = (float *)(lVar39 + 100);
          pfVar31 = (float *)(lVar39 + 0x68);
        }
        fVar63 = *pfVar34;
        fVar46 = *pfVar31;
        fVar56 = *(float *)(unaff_x19 + 0x73);
        fVar57 = 0.0;
        fVar48 = *(float *)(unaff_x19 + 0xcb);
        in_stack_00000158 = (in_stack_000000b8._4_4_ - fVar63) - fVar46;
        bVar10 = true;
        if ((fVar56 <= in_stack_00000158) && (bVar10 = false, !NAN(fVar56))) {
          bVar10 = fVar56 == -1.0;
        }
        if (!bVar10) {
          in_stack_00000158 = fVar56;
        }
        fVar56 = 0.0;
        if ((char)unaff_x19[0x1e] == '\0') {
          fVar56 = (float)FUN_08a73e50(&stack0x00001290,0);
          uVar20 = extraout_x1_01;
        }
        fVar66 = *(float *)((long)unaff_x19 + 0x4ec);
        fVar49 = *(float *)(unaff_x19 + 0x60);
        fStack000000000000011c = fVar50;
        if (in_stack_0000134c != 0xad) {
          fStack000000000000011c = in_stack_00000180._4_4_;
        }
        if ((0.0 < fVar66) && ((char)unaff_x19[0x5e] == '\0')) {
          fVar57 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
        }
        iVar15 = *(int *)(in_stack_000001d0 + 7);
        auVar70 = ZEXT416((uint)fVar67);
        fVar57 = (*(float *)((long)unaff_x19 + 0x4cc) - (*(float *)(unaff_x19 + 0x9c) - fVar66)) +
                 fVar57;
        if (in_stack_000000f0._4_4_ < fVar57) {
          if (*(int *)((long)unaff_x19 + 0x314) == -1) {
            *(int *)((long)unaff_x19 + 0x314) = iVar15;
          }
          puVar9 = PTR_DAT_09337670;
          fVar50 = DAT_01aec3c4;
          if ((char)unaff_x19[0x4c] != '\0') {
            if (0.0 < fVar66) {
              fVar67 = *(float *)((long)unaff_x19 + 0x2f4);
              if ((fVar67 < *(float *)(unaff_x19 + 0x5d)) &&
                 (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
                fVar50 = *(float *)(unaff_x19 + 0x5d) +
                         ((in_stack_00000018._4_4_ - fVar57) / (float)(int)unaff_x19[0x97]) /
                         in_stack_00000048._4_4_;
                if (fVar50 <= fVar67) {
                  fVar50 = fVar67;
                }
                goto LAB_087ddbcc;
              }
            }
            fVar57 = *(float *)((long)unaff_x19 + 0x20c);
            fVar67 = *(float *)(unaff_x19 + 0x4f);
            if ((fVar67 < fVar57) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
              *(float *)((long)unaff_x19 + 0x264) = fVar57;
              fVar56 = (fVar57 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
              if (fVar56 <= fVar50) {
                fVar56 = fVar50;
              }
              fVar56 = (fVar57 - fVar56) * 20.0 + 0.5;
              fVar50 = DAT_01aec808;
              if (fVar56 != INFINITY) {
                fVar50 = (float)(int)fVar56 / 20.0;
              }
              if (fVar50 <= fVar67) {
                fVar50 = fVar67;
              }
              *(float *)((long)unaff_x19 + 0x20c) = fVar50;
              return;
            }
          }
          iVar16 = (int)unaff_x19[0x62];
          if (iVar16 < 5) {
            if (iVar16 == 1) {
              lVar39 = *(long *)PTR_DAT_09337670;
              if (*(int *)(lVar39 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar39 = *(long *)puVar9;
              }
              unaff_x28 = (long *)PTR_DAT_09285bb0;
              lVar28 = *(long *)(lVar39 + 0xb8);
              if (*(int *)(lVar28 + 0x1708) != 0) {
                if (*(int *)(lVar39 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar28 = *(long *)(*(long *)PTR_DAT_09337670 + 0xb8);
                }
                FUN_065eb4fc(&stack0x00001350,lVar28 + 0x1338,*(undefined8 *)PTR_DAT_09337618);
                memcpy(&stack0x00000d58,&stack0x00001350,0x3b8);
LAB_087d90f8:
                iVar15 = FUN_08822600();
                in_stack_00001318 = iVar15 - 1;
                in_stack_000001c0 = in_stack_000001c0 + 1;
                uVar13 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
                *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
                uVar47 = 0x2026;
                goto LAB_087d9124;
              }
LAB_087d912c:
              unaff_x28 = (long *)PTR_DAT_09285bb0;
              in_stack_000001d0[7] = 0;
              unaff_x23 = in_stack_000001d0;
              fVar50 = in_stack_00000180._4_4_;
              in_stack_00001318 = 0xffffffff;
              in_stack_00001338 = DAT_01aed6d8;
              goto LAB_087d7090;
            }
            if (iVar16 != 3) goto LAB_087d8a98;
            if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
LAB_087d8d50:
            in_stack_00001318 = FUN_08822600();
          }
          else {
            if (iVar16 == 5) {
              if (((int)in_stack_00001318 < 0) || (iVar15 == 0)) {
                *(undefined4 *)(in_stack_000001d0 + 7) = 0;
                in_stack_00001318 = 0xffffffff;
                unaff_x23 = in_stack_000001d0;
                unaff_x28 = (long *)PTR_DAT_09285bb0;
                fVar50 = in_stack_00000180._4_4_;
                in_stack_00001338 = DAT_01aed6d8;
              }
              else {
                auVar70 = ZEXT416((uint)in_stack_000000f0._4_4_);
                if (in_stack_000000f0._4_4_ <
                    *(float *)(in_stack_000001d0 + 0xe) - *(float *)(unaff_x19 + 0x9c)) {
                  if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  goto LAB_087d8d50;
                }
                if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                puVar9 = PTR_DAT_09337670;
                unaff_x28 = (long *)PTR_DAT_09285bb0;
                in_stack_00001318 = FUN_08822600();
                *(undefined4 *)(unaff_x19 + 0x95) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
                lVar39 = *(long *)puVar9;
                *(undefined1 *)((long)unaff_x19 + 0x374) = 1;
                uVar59 = *(undefined8 *)(*(long *)(lVar39 + 0xb8) + 0x1730);
                *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
                *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
                *(float *)(unaff_x19 + 0xcb) = *(float *)((long)unaff_x19 + 0x444) + 0.0;
                uVar59 = NEON_rev64(uVar59,4);
                auVar70 = ZEXT816(0);
                *(int *)(unaff_x19 + 0x97) = (int)unaff_x19[0x97] + 1;
                iVar15 = *(int *)((long)unaff_x19 + 0x4c4);
                in_stack_000001d0[0xe] = uVar59;
                unaff_x19[0x99] = 0;
                *(int *)((long)unaff_x19 + 0x4c4) = iVar15 + 1;
                unaff_x23 = in_stack_000001d0;
                fVar50 = in_stack_00000180._4_4_;
              }
              goto LAB_087d7090;
            }
            if (iVar16 != 6) goto LAB_087d8a98;
            if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            in_stack_00001318 = FUN_08822600();
            lVar39 = unaff_x19[99];
            if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar20 = FUN_089ca704(lVar39,0,0);
            if ((uVar20 & 1) != 0) {
              plVar43 = (long *)unaff_x19[99];
              uVar59 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar43 == (long *)0x0) goto LAB_087ddb5c;
              (**(code **)(*plVar43 + 0x558))(plVar43,uVar59,*(undefined8 *)(*plVar43 + 0x560));
              lVar39 = unaff_x19[99];
              if (lVar39 == 0) goto LAB_087ddb5c;
              *(int *)(lVar39 + 0x438) = (int)unaff_x19[0x87];
              FUN_08815fe0(lVar39,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
              plVar43 = (long *)unaff_x19[99];
              if (plVar43 == (long *)0x0) goto LAB_087ddb5c;
              (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x65) = 1;
            }
          }
          unaff_x23 = in_stack_000001d0;
          unaff_x28 = (long *)PTR_DAT_09285bb0;
          fVar50 = in_stack_00000180._4_4_;
          in_stack_00001338 = CONCAT44(3,iVar15);
          goto LAB_087d7090;
        }
LAB_087d8a98:
        puVar9 = PTR_DAT_09337670;
        unaff_x28 = (long *)PTR_DAT_09285bb0;
        if ((uVar22 & 1) == 0) goto joined_r0x087d8b80;
        fVar50 = unaff_s15;
        if ((uVar14 & 0x18) != 0) {
          fVar50 = DAT_01aed150;
        }
        fVar56 = ABS(fVar48) + fVar56 * (unaff_s15 - fVar49) * fStack000000000000011c;
        if (fVar56 <= fVar50 * in_stack_00000158) goto joined_r0x087d8b80;
        if (((*(int *)((long)unaff_x19 + 0x304) == 0) || (*(int *)((long)unaff_x19 + 0x304) == 3))
           || (iVar15 == (int)unaff_x19[0x95])) {
          if (((char)unaff_x19[0x4c] != '\0') &&
             (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
            fStack000000000000011c = 100.0;
            fVar57 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
            if (fVar49 < fVar57) {
              fVar63 = fVar56;
              if (0.0 < fVar49) {
                fVar63 = fVar56 / (1.0 - fVar49);
              }
              fVar49 = fVar49 + (fVar56 - fVar50 * (in_stack_00000158 + DAT_01aec4cc)) / fVar63;
              goto FUN_087ddcd0;
            }
            fVar57 = *(float *)((long)unaff_x19 + 0x20c);
            fVar67 = *(float *)(unaff_x19 + 0x4f);
            auVar70 = ZEXT416((uint)fVar67);
            if (fVar57 <= fVar67) goto LAB_087d8b2c;
LAB_087ddc38:
            fVar50 = DAT_01aec3c4;
            *(float *)((long)unaff_x19 + 0x264) = fVar57;
            fVar56 = (fVar57 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
            if (fVar56 <= fVar50) {
              fVar56 = fVar50;
            }
            fVar56 = (fVar57 - fVar56) * 20.0 + 0.5;
            fVar50 = DAT_01aec808;
            if (fVar56 != INFINITY) {
              fVar50 = (float)(int)fVar56 / 20.0;
            }
            if (fVar50 <= fVar67) {
              fVar50 = fVar67;
            }
LAB_087daeb4:
            *(float *)((long)unaff_x19 + 0x20c) = fVar50;
            return;
          }
LAB_087d8b2c:
          iVar16 = (int)unaff_x19[0x62];
          if (iVar16 == 1) {
            lVar39 = *(long *)PTR_DAT_09337670;
            if (*(int *)(lVar39 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              lVar39 = *(long *)puVar9;
            }
            unaff_x28 = (long *)PTR_DAT_09285bb0;
            lVar28 = *(long *)(lVar39 + 0xb8);
            if (*(int *)(lVar28 + 0x1708) == 0) goto LAB_087d912c;
            if (*(int *)(lVar39 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              lVar28 = *(long *)(*(long *)PTR_DAT_09337670 + 0xb8);
            }
            FUN_065eb4fc(&stack0x00001350,lVar28 + 0x1338,*(undefined8 *)PTR_DAT_09337618);
            memcpy(&stack0x000005e8,&stack0x00001350,0x3b8);
            goto LAB_087d90f8;
          }
          if (iVar16 == 6) {
            if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            unaff_x28 = (long *)PTR_DAT_09285bb0;
            in_stack_00001318 = FUN_08822600();
            lVar39 = unaff_x19[99];
            if (*(int *)(*unaff_x28 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar20 = FUN_089ca704(lVar39,0,0);
            if ((uVar20 & 1) != 0) {
              plVar43 = (long *)unaff_x19[99];
              uVar59 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar43 == (long *)0x0) goto LAB_087ddb5c;
              (**(code **)(*plVar43 + 0x558))(plVar43,uVar59,*(undefined8 *)(*plVar43 + 0x560));
              lVar39 = unaff_x19[99];
              if (lVar39 == 0) goto LAB_087ddb5c;
              *(int *)(lVar39 + 0x438) = (int)unaff_x19[0x87];
              FUN_08815fe0(lVar39,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
              plVar43 = (long *)unaff_x19[99];
              if (plVar43 == (long *)0x0) goto LAB_087ddb5c;
              (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x65) = 1;
            }
            uVar13 = *(uint *)(in_stack_000001d0 + 7);
            goto LAB_087d9064;
          }
          if (iVar16 == 3) {
            if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            goto LAB_087d8d50;
          }
          goto joined_r0x087d8b80;
        }
        if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        in_stack_00001318 = FUN_08822600();
        if (*(float *)((long)unaff_x19 + 0x2ec) == DAT_01aeb5f8) {
          lVar39 = unaff_x19[0x74];
          if ((lVar39 == 0) || (lVar28 = *(long *)(lVar39 + 0x38), lVar28 == 0)) goto LAB_087ddb5c;
          if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
          fVar57 = *(float *)((long)unaff_x19 + 0x4ec);
          fVar67 = 0.0;
          if ((0.0 < fVar57) && ((char)unaff_x19[0x5e] == '\0')) {
            fVar67 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
          }
          fVar67 = in_stack_00000100 * *(float *)((long)unaff_x19 + 0x2e4) +
                   *(float *)(lVar28 + (long)(int)*(uint *)(in_stack_000001d0 + 7) *
                                       (long)(int)unaff_w29 + 0x14c) +
                   (fVar67 - *(float *)(unaff_x19 + 0x9c)) +
                   in_stack_00000048._4_4_ * (fStack0000000000000044 + *(float *)(unaff_x19 + 0x5d))
          ;
        }
        else {
          lVar39 = unaff_x19[0x74];
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          if (lVar39 == 0) goto LAB_087ddb5c;
          fVar67 = *(float *)((long)unaff_x19 + 0x2ec) +
                   in_stack_00000100 * *(float *)((long)unaff_x19 + 0x2e4);
          fVar57 = *(float *)((long)unaff_x19 + 0x4ec);
        }
        puVar9 = PTR_DAT_09337670;
        lVar39 = *(long *)(lVar39 + 0x38);
        if (lVar39 == 0) goto LAB_087ddb5c;
        uVar13 = *(uint *)((long)unaff_x19 + 0x4a4);
        if ((*(uint *)(lVar39 + 0x18) <= uVar13) ||
           (uVar44 = uVar13 - 1, *(uint *)(lVar39 + 0x18) <= uVar44)) goto LAB_087ddd1c;
        fStack000000000000011c = *(float *)((long)unaff_x19 + 0x4cc);
        lVar39 = lVar39 + 0x20;
        fVar48 = *(float *)(lVar39 + (long)(int)uVar13 * (long)(int)unaff_w29 + 0x130);
        auVar70 = ZEXT416((uint)fVar48);
        fVar48 = (fVar67 + fStack000000000000011c + fVar57) - fVar48;
        if ((*(short *)(lVar39 + (long)(int)uVar44 * (long)(int)unaff_w29 + 4) == 0xad &&
             (uStack0000000000000058 & 1) == 0) &&
           (((int)unaff_x19[0x62] == 0 || (fVar48 < in_stack_000000f0._4_4_)))) {
          uStack0000000000000058 = 0;
          in_stack_00001318 = in_stack_00001318 - 1;
          in_stack_00001338 = CONCAT44(0x2d,uVar44);
          *(uint *)(in_stack_000001d0 + 7) = uVar44;
          unaff_x23 = in_stack_000001d0;
          unaff_x28 = (long *)PTR_DAT_09285bb0;
          fVar50 = in_stack_00000180._4_4_;
          goto LAB_087d7090;
        }
        if (*(short *)(lVar39 + (long)(int)uVar13 * (long)(int)unaff_w29 + 4) == 0xad) {
          uStack0000000000000058 = 1;
          unaff_x23 = in_stack_000001d0;
          unaff_x28 = (long *)PTR_DAT_09285bb0;
          fVar50 = in_stack_00000180._4_4_;
          goto LAB_087d7090;
        }
        if ((char)unaff_x19[0x4c] != '\0' && (((uint)fStack000000000000006c ^ 0xffffffff) & 1) == 0)
        {
          fVar57 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
          fVar49 = *(float *)(unaff_x19 + 0x60);
          if ((fVar57 <= fVar49) || ((int)unaff_x19[0x4e] <= *(int *)((long)unaff_x19 + 0x26c))) {
            fVar57 = *(float *)((long)unaff_x19 + 0x20c);
            fVar67 = *(float *)(unaff_x19 + 0x4f);
            auVar70 = ZEXT416((uint)fVar67);
            if ((fVar67 < fVar57) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
            goto LAB_087ddc38;
            goto LAB_087da748;
          }
LAB_087ddce0:
          fVar63 = fVar56;
          if (0.0 < fVar49) {
            fVar63 = fVar56 / (1.0 - fVar49);
          }
          fVar49 = fVar49 + (fVar56 - fVar50 * (in_stack_00000158 + DAT_01aec4cc)) / fVar63;
FUN_087ddcd0:
          if (fVar57 <= fVar49) {
            fVar49 = fVar57;
          }
          *(float *)(unaff_x19 + 0x60) = fVar49;
          return;
        }
LAB_087da748:
        lVar39 = *(long *)PTR_DAT_09337670;
        uVar20 = extraout_x1_04;
        if (*(int *)(lVar39 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar39 = *(long *)puVar9;
          uVar20 = extraout_x1_12;
        }
        if (((((uint)fStack000000000000006c & 1) != 0) &&
            (iVar16 = *(int *)(*(long *)(lVar39 + 0xb8) + 0xf80), iVar16 != -1)) &&
           (iVar16 != iStack0000000000000020)) {
          if (*(int *)(lVar39 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          in_stack_00001318 = FUN_08822600();
          if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
          goto LAB_087ddb5c;
          uVar13 = *(int *)(in_stack_000001d0 + 7) - 1;
          if (*(uint *)(lVar39 + 0x18) <= uVar13) goto LAB_087ddd1c;
          uVar20 = extraout_x1_13;
          iStack0000000000000020 = iVar16;
          if (*(short *)(lVar39 + (long)(int)uVar13 * (long)(int)unaff_w29 + 0x24) == 0xad) {
            uStack0000000000000058 = 0;
            in_stack_00001318 = in_stack_00001318 - 1;
            in_stack_00001338 = CONCAT44(0x2d,uVar13);
            *(uint *)(in_stack_000001d0 + 7) = uVar13;
            unaff_x23 = in_stack_000001d0;
            unaff_x28 = (long *)PTR_DAT_09285bb0;
            fVar50 = in_stack_00000180._4_4_;
            goto LAB_087d7090;
          }
        }
        if (fVar48 <= in_stack_000000f0._4_4_) {
          auVar70 = ZEXT416((uint)in_stack_00000180._4_4_);
          fStack000000000000011c = in_stack_00000100;
          FUN_088230cc();
LAB_087daaac:
          fStack000000000000006c = 1.4013e-45;
          uStack0000000000000058 = 0;
          fStack0000000000000064 = 1.4013e-45;
          unaff_x23 = in_stack_000001d0;
          unaff_x28 = (long *)PTR_DAT_09285bb0;
          fVar50 = in_stack_00000180._4_4_;
          goto LAB_087d7090;
        }
        if (*(int *)((long)unaff_x19 + 0x314) == -1) {
          *(undefined4 *)((long)unaff_x19 + 0x314) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
        }
        unaff_x28 = (long *)PTR_DAT_09285bb0;
        if ((char)unaff_x19[0x4c] != '\0') {
          fVar57 = *(float *)((long)unaff_x19 + 0x2f4);
          if ((fVar57 < *(float *)(unaff_x19 + 0x5d)) &&
             (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
            fVar50 = *(float *)(unaff_x19 + 0x5d) +
                     ((in_stack_00000018._4_4_ - fVar48) / (float)((int)unaff_x19[0x97] + 1)) /
                     in_stack_00000048._4_4_;
            if (fVar50 <= fVar57) {
              fVar50 = fVar57;
            }
LAB_087ddbcc:
            *(float *)(unaff_x19 + 0x5d) = fVar50;
            return;
          }
          fVar57 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
          fVar49 = *(float *)(unaff_x19 + 0x60);
          if ((fVar49 < fVar57) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
          goto LAB_087ddce0;
          fVar57 = *(float *)((long)unaff_x19 + 0x20c);
          fVar67 = *(float *)(unaff_x19 + 0x4f);
          auVar70 = ZEXT416((uint)fVar67);
          if ((fVar67 < fVar57) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
          goto LAB_087ddc38;
        }
        iVar16 = (int)unaff_x19[0x62];
        uStack0000000000000058 = 0;
        if (iVar16 < 3) {
          if (iVar16 != 0) {
            if (iVar16 == 1) {
              lVar39 = *(long *)PTR_DAT_09337670;
              if (*(int *)(lVar39 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar39 = *(long *)PTR_DAT_09337670;
              }
              in_stack_00001338 = DAT_01aed6d8;
              lVar28 = *(long *)(lVar39 + 0xb8);
              if (*(int *)(lVar28 + 0x1708) == 0) {
                in_stack_00001318 = 0xffffffff;
                in_stack_000001d0[7] = 0;
              }
              else {
                if (*(int *)(lVar39 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar28 = *(long *)(*(long *)PTR_DAT_09337670 + 0xb8);
                }
                FUN_065eb4fc(&stack0x00001350,lVar28 + 0x1338,*(undefined8 *)PTR_DAT_09337618);
                memcpy(&stack0x000009a0,&stack0x00001350,0x3b8);
                iVar15 = FUN_08822600();
                in_stack_00001318 = iVar15 - 1;
                iVar15 = *(int *)((long)unaff_x19 + 0x4a4) + -1;
                *(int *)((long)unaff_x19 + 0x4a4) = iVar15;
                in_stack_000001c0 = in_stack_000001c0 + 1;
                in_stack_00001338 = CONCAT44(0x2026,iVar15);
              }
              goto LAB_087dadc0;
            }
            if (iVar16 != 2) goto joined_r0x087d8b80;
          }
LAB_087daae0:
          auVar70 = ZEXT416((uint)in_stack_00000180._4_4_);
          fStack000000000000011c = in_stack_00000100;
          FUN_088230cc();
          uStack0000000000000058 = 0;
          unaff_x23 = in_stack_000001d0;
LAB_087da124:
          fStack000000000000006c = 1.4013e-45;
          fStack0000000000000064 = 1.4013e-45;
          fVar50 = in_stack_00000180._4_4_;
          goto LAB_087d7090;
        }
        if (iVar16 < 5) {
          if (iVar16 != 3) {
            if (iVar16 == 4) goto LAB_087daae0;
            goto joined_r0x087d8b80;
          }
          if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          in_stack_00001318 = FUN_08822600();
          in_stack_00001338 = CONCAT44(3,iVar15);
LAB_087dadc0:
          uStack0000000000000058 = 0;
          unaff_s15 = 1.0;
          unaff_x23 = in_stack_000001d0;
          unaff_x28 = (long *)PTR_DAT_09285bb0;
          fVar50 = in_stack_00000180._4_4_;
          goto LAB_087d7090;
        }
        if (iVar16 == 5) {
          auVar70 = ZEXT416((uint)in_stack_00000180._4_4_);
          *(undefined1 *)((long)unaff_x19 + 0x374) = 1;
          fStack000000000000011c = in_stack_00000100;
          FUN_088230cc();
          *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
          *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
          *(int *)((long)unaff_x19 + 0x4c4) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
          unaff_x19[0x99] = 0;
          goto LAB_087daaac;
        }
        if (iVar16 == 6) {
          lVar39 = unaff_x19[99];
          if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar20 = FUN_089ca704(lVar39,0,0);
          if ((uVar20 & 1) != 0) {
            plVar43 = (long *)unaff_x19[99];
            uVar59 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar43 == (long *)0x0) goto LAB_087ddb5c;
            (**(code **)(*plVar43 + 0x558))(plVar43,uVar59,*(undefined8 *)(*plVar43 + 0x560));
            lVar39 = unaff_x19[99];
            if (lVar39 == 0) goto LAB_087ddb5c;
            *(int *)(lVar39 + 0x438) = (int)unaff_x19[0x87];
            FUN_08815fe0(lVar39,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
            plVar43 = (long *)unaff_x19[99];
            if (plVar43 == (long *)0x0) goto LAB_087ddb5c;
            (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x65) = 1;
          }
          in_stack_00001338 = CONCAT44(3,*(undefined4 *)(in_stack_000001d0 + 7));
          goto LAB_087dadc0;
        }
        unaff_s15 = 1.0;
joined_r0x087d8b80:
        PTR_DAT_09285bb0 = (undefined *)unaff_x28;
        if (unaff_w26 == 0) {
          if (in_stack_0000134c == 0xad) {
            if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
            goto LAB_087ddb5c;
            if (*(uint *)(lVar39 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
            *(undefined1 *)
             (lVar39 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29 + 400) = 0
            ;
          }
          else {
            lVar39 = 0x500;
            if (*(char *)((long)unaff_x19 + 0x1ec) != '\0') {
              lVar39 = 0x144;
            }
            uVar20 = (ulong)*(uint *)((long)unaff_x19 + lVar39);
            if (*(int *)((long)unaff_x19 + 0x65c) == 1) {
              (**(code **)(*unaff_x19 + 0x8c8))();
              uVar20 = extraout_x1_03;
            }
            else if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
              (**(code **)(*unaff_x19 + 0x8b8))();
              uVar20 = extraout_x1_02;
            }
            if (((uint)fStack0000000000000064 & 1) != 0) {
              *(undefined4 *)(in_stack_000001d0 + 8) = *(undefined4 *)(in_stack_000001d0 + 7);
            }
            *(undefined4 *)((long)unaff_x19 + 0x4b4) = *(undefined4 *)(in_stack_000001d0 + 7);
            *(int *)((long)unaff_x19 + 0x4bc) = *(int *)((long)unaff_x19 + 0x4bc) + 1;
            if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x50), lVar39 == 0))
            goto LAB_087ddb5c;
            if (*(uint *)(lVar39 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_087ddd1c;
            fStack0000000000000064 = 0.0;
            lVar39 = lVar39 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
            *(float *)(lVar39 + 100) = fVar63;
            *(float *)(lVar39 + 0x68) = fVar46;
          }
        }
        else {
          lVar39 = unaff_x19[0x74];
          if ((lVar39 == 0) || (lVar28 = *(long *)(lVar39 + 0x38), lVar28 == 0)) goto LAB_087ddb5c;
          uVar13 = *(uint *)(in_stack_000001d0 + 7);
          if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_087ddd1c;
          *(undefined1 *)(lVar28 + (long)(int)uVar13 * (long)(int)unaff_w29 + 400) = 0;
          *(uint *)((long)unaff_x19 + 0x4b4) = uVar13;
          lVar28 = *(long *)(lVar39 + 0x50);
          if (lVar28 == 0) goto LAB_087ddb5c;
          uVar13 = *(uint *)(lVar28 + 0x18);
          if (uVar13 <= *(uint *)(unaff_x19 + 0x97)) goto LAB_087ddd1c;
          lVar28 = lVar28 + 0x20;
          lVar36 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
          iVar15 = *(int *)(lVar36 + 0xc) + 1;
          *(int *)(lVar36 + 0xc) = iVar15;
          uVar44 = *(uint *)(unaff_x19 + 0x97);
          *(int *)(unaff_x19 + 0x98) = iVar15;
          if (uVar13 <= uVar44) goto LAB_087ddd1c;
          lVar36 = lVar28 + (long)(int)uVar44 * 0x60;
          *(float *)(lVar36 + 0x44) = fVar63;
          *(float *)(lVar36 + 0x48) = fVar46;
          *(int *)(lVar39 + 0x20) = *(int *)(lVar39 + 0x20) + 1;
          if (in_stack_0000134c == 0xa0) {
            *(int *)(lVar28 + (long)(int)uVar44 * 0x60) =
                 *(int *)(lVar28 + (long)(int)uVar44 * 0x60) + 1;
          }
        }
LAB_087d9374:
        unaff_x23 = in_stack_000001d0;
      } while (((int)unaff_x19[0x62] != 1) || ((uVar30 == unaff_w21 && (in_stack_0000134c != 0x2d)))
              );
      if (unaff_x19[0xce] == 0) goto LAB_087ddb5c;
      fVar56 = *(float *)(unaff_x19 + 0x42);
      fVar50 = (float)FUN_08a73b44(unaff_x19[0xce] + 0x28,0);
      if (unaff_x19[0xce] == 0) goto LAB_087ddb5c;
      fVar57 = (float)FUN_08a73b4c(unaff_x19[0xce] + 0x28,0);
      lVar39 = unaff_x19[0xcd];
      if ((lVar39 == 0) || (*(long *)(lVar39 + 0x20) == 0)) goto LAB_087ddb5c;
      fVar46 = *(float *)((long)unaff_x19 + 0x43c);
      fVar67 = *(float *)(lVar39 + 0x2c);
      fVar63 = (float)FUN_08a74044(*(long *)(lVar39 + 0x20),0);
      uVar59 = *(undefined8 *)_fStack00000000000000c0;
      fVar63 = fVar46 * in_stack_00000120 * (fVar56 / fVar50) * fVar57 * fVar67 * fVar63;
      uVar20 = extraout_x1_05;
      if ((in_stack_0000134c == 10) && (*(int *)((long)unaff_x19 + 0x4a4) != (int)unaff_x19[0x95]))
      {
        if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
        goto LAB_087ddb5c;
        uVar13 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
        if (*(uint *)(lVar39 + 0x18) <= uVar13) goto LAB_087ddd1c;
        if (unaff_x19[0xce] == 0) goto LAB_087ddb5c;
        fVar56 = *(float *)(lVar39 + (long)(int)uVar13 * (long)(int)unaff_w29 + 0x58);
        fVar50 = (float)FUN_08a73b44(unaff_x19[0xce] + 0x28,0);
        if (unaff_x19[0xce] == 0) goto LAB_087ddb5c;
        fVar57 = (float)FUN_08a73b4c(unaff_x19[0xce] + 0x28,0);
        lVar39 = unaff_x19[0xcd];
        if ((lVar39 == 0) || (*(long *)(lVar39 + 0x20) == 0)) goto LAB_087ddb5c;
        fVar46 = *(float *)((long)unaff_x19 + 0x43c);
        fVar67 = *(float *)(lVar39 + 0x2c);
        fVar63 = (float)FUN_08a74044(*(long *)(lVar39 + 0x20),0);
        if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x50), lVar39 == 0))
        goto LAB_087ddb5c;
        if (*(uint *)(lVar39 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_087ddd1c;
        uVar59 = *(undefined8 *)(lVar39 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60 + 100);
        fVar63 = fVar46 * in_stack_00000120 * (fVar56 / fVar50) * fVar57 * fVar67 * fVar63;
        uVar20 = extraout_x1_06;
      }
      fVar56 = *(float *)((long)unaff_x19 + 0x4ec);
      fVar50 = 0.0;
      fVar57 = 0.0;
      if ((0.0 < fVar56) && ((char)unaff_x19[0x5e] == '\0')) {
        fVar57 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
      }
      fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
      fVar67 = *(float *)(unaff_x19 + 0x9c);
      fVar48 = *(float *)(unaff_x19 + 0xcb);
      if ((char)unaff_x19[0x1e] == '\0') {
        if ((unaff_x19[0xcd] == 0) || (lVar39 = *(long *)(unaff_x19[0xcd] + 0x20), lVar39 == 0))
        goto LAB_087ddb5c;
        FUN_08a74008(&stack0x00001350,lVar39,0);
        fVar50 = (float)FUN_08a73e50(&stack0x000011f0,0);
        uVar20 = extraout_x1_07;
      }
      puVar9 = PTR_DAT_09337670;
      fVar66 = *(float *)(unaff_x19 + 0x73);
      fVar49 = (in_stack_000000b8._4_4_ - (float)uVar59) - (float)((ulong)uVar59 >> 0x20);
      bVar10 = true;
      if ((fVar66 <= fVar49) && (bVar10 = false, !NAN(fVar66))) {
        bVar10 = fVar66 == -1.0;
      }
      if (!bVar10) {
        fVar49 = fVar66;
      }
      fVar66 = unaff_s15;
      if ((uVar14 & 0x18) != 0) {
        fVar66 = DAT_01aed150;
      }
    } while ((fVar66 * fVar49 <=
              ABS(fVar48) + fVar63 * fVar50 * (unaff_s15 - *(float *)(unaff_x19 + 0x60))) ||
            (in_stack_000000f0._4_4_ <= (fVar46 - (fVar67 - fVar56)) + fVar57));
    if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_088229a4();
    param_1 = *(long *)puVar9;
    param_2 = &stack0x00001000;
    param_4 = 0x3b8;
  } while( true );
LAB_087db574:
  if (*(uint *)(lVar39 + 0x18) <= uVar13) goto LAB_087ddd1c;
  uVar24 = (ulong)uVar13;
  piVar40 = (int *)(lVar28 + uVar24 * 0x178);
  lVar36 = *(long *)(piVar40 + 8);
  uVar45 = *(ushort *)(piVar40 + 1);
  if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar44 = (uint)uVar45;
  bVar11 = FUN_075d81a8(uVar45,0);
  if (*(uint *)(lVar39 + 0x18) <= uVar13) goto LAB_087ddd1c;
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x50), lVar21 == 0))
  goto LAB_087ddb5c;
  uVar2 = *(uint *)(lVar28 + uVar24 * 0x178 + 0x3c);
  if (*(uint *)(lVar21 + 0x18) <= uVar2) goto LAB_087ddd1c;
  lVar21 = lVar21 + (long)(int)uVar2 * 0x60;
  uVar4 = *(uint *)(lVar21 + 0x40);
  fVar56 = *(float *)(lVar21 + 0x58);
  fVar50 = *(float *)(lVar21 + 0x5c);
  uVar42 = *(uint *)(lVar21 + 0x6c);
  fVar55 = *(float *)(lVar21 + 0x60);
  fVar69 = *(float *)(lVar21 + 100);
  fVar68 = *(float *)(lVar21 + 0x70);
  fVar62 = *(float *)(lVar21 + 0x74);
  iVar17 = *(int *)(lVar21 + 0x20);
  fVar66 = *(float *)(lVar21 + 0x78);
  fVar49 = *(float *)(lVar21 + 0x7c);
  iVar18 = *(int *)(lVar21 + 0x28);
  iVar38 = *(int *)(lVar21 + 0x30);
  uVar5 = *(uint *)(lVar21 + 0x44);
  fVar65 = *(float *)(lVar21 + 0x50);
  if ((int)uVar42 < 9) {
    if ((int)uVar42 < 3) {
      if (uVar42 == 1) {
        if ((char)unaff_x19[0x1e] == '\0') {
          fStack0000000000000130 = fVar69 + 0.0;
        }
        else {
          fStack0000000000000130 = 0.0 - fVar50;
        }
        fStack000000000000011c = 0.0;
        fStack0000000000000134 = 0.0;
      }
      else if (uVar42 == 2) {
        fStack0000000000000130 = (fVar69 + fVar55 * 0.5) - fVar50 * 0.5;
LAB_087db86c:
        fStack0000000000000134 = 0.0;
        fStack000000000000011c = 0.0;
      }
      else {
LAB_087db744:
        uVar45 = NEON_umaxv(CONCAT26(-(ushort)(uVar45 == (ushort)((ulong)DAT_01aee7a8 >> 0x30)),
                                     CONCAT24(-(ushort)(uVar45 ==
                                                       (ushort)((ulong)DAT_01aee7a8 >> 0x20)),
                                              CONCAT22(-(ushort)(uVar45 ==
                                                                (ushort)((ulong)DAT_01aee7a8 >> 0x10
                                                                        )),
                                                       -(ushort)(uVar45 == (ushort)DAT_01aee7a8)))),
                            2);
        if (((((uVar45 & 1) == 0) && (uVar44 != 3)) && (uVar42 == 8)) && ((int)uVar13 <= (int)uVar5)
           ) goto LAB_087db784;
      }
    }
    else if (uVar42 != 3) {
      if (uVar42 != 4) goto LAB_087db744;
      fStack000000000000011c = 0.0;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar50 = 0.0;
      }
      fStack0000000000000130 = (fVar55 + fVar69) - fVar50;
      fStack0000000000000134 = 0.0;
    }
  }
  else if (uVar42 == 0x10) {
    if ((int)uVar13 <= (int)uVar5) {
      if (uVar44 < 0xad) {
        if ((uVar44 != 3) && (uVar44 != 10)) {
LAB_087db784:
          if (*(uint *)(lVar39 + 0x18) <= uVar4) goto LAB_087ddd1c;
          uVar3 = *(undefined2 *)(lVar28 + (long)(int)uVar4 * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar20 = FUN_075db454(uVar3,0);
          if ((uVar20 & 1) == 0) {
            bVar1 = (int)uVar2 < (int)unaff_x19[0x97];
          }
          else {
            bVar1 = false;
          }
          if ((!bVar1 && (uVar42 >> 4 & 1) == 0) && (fVar50 <= fVar55)) {
            fStack0000000000000130 = -0.0;
            if ((char)unaff_x19[0x1e] != '\0') {
              fStack0000000000000130 = fVar55;
            }
            fStack0000000000000130 = fVar69 + fStack0000000000000130;
            goto LAB_087db86c;
          }
          if (((uVar13 == 0) || (uVar2 != uVar30)) || (uVar13 == *(uint *)((long)unaff_x19 + 0x35c))
             ) {
            fStack0000000000000130 = -0.0;
            if ((char)unaff_x19[0x1e] != '\0') {
              fStack0000000000000130 = fVar55;
            }
            if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            fStack0000000000000130 = fVar69 + fStack0000000000000130;
            fStack0000000000000044 = (float)FUN_075db9d4(uVar44,0);
            fStack0000000000000134 = 0.0;
            fStack000000000000011c = 0.0;
          }
          else {
            cVar26 = (char)unaff_x19[0x1e];
            iVar38 = (iVar38 - iVar17) - ((uint)fStack0000000000000044 & 1);
            fVar69 = -fVar50;
            if (cVar26 != '\0') {
              fVar69 = fVar50;
            }
            if (iVar38 < 1) {
              fVar50 = 1.0;
              iVar38 = 1;
            }
            else {
              fVar50 = *(float *)((long)unaff_x19 + 0x30c);
            }
            if (uVar44 == 9) {
LAB_087dd4b0:
              fVar50 = ((fVar55 + fVar69) * (1.0 - fVar50)) / (float)iVar38;
              if (cVar26 == '\0') {
                fStack0000000000000130 = fStack0000000000000130 + fVar50;
                fStack0000000000000134 = fStack0000000000000134 + 0.0;
                fStack000000000000011c = fStack000000000000011c + 0.0;
              }
              else {
                fStack0000000000000130 = fStack0000000000000130 - fVar50;
              }
            }
            else {
              if (uVar44 != 0xa0) {
                if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                uVar20 = FUN_075db9d4(uVar44,0);
                cVar26 = (char)unaff_x19[0x1e];
                if ((uVar20 & 1) != 0) goto LAB_087dd4b0;
              }
              fVar50 = ((fVar55 + fVar69) * fVar50) /
                       (float)(int)((iVar17 - (((uint)fStack0000000000000044 ^ 0xffffffff) & 1)) +
                                   iVar18);
              if (cVar26 == '\0') {
                fStack0000000000000130 = fStack0000000000000130 + fVar50;
                fStack0000000000000134 = fStack0000000000000134 + 0.0;
                fStack000000000000011c = fStack000000000000011c + 0.0;
              }
              else {
                fStack0000000000000130 = fStack0000000000000130 - fVar50;
              }
            }
          }
        }
      }
      else if (((uVar44 != 0xad) && (uVar44 != 0x200b)) && (uVar44 != 0x2060)) goto LAB_087db784;
    }
  }
  else if (uVar42 == 0x20) {
    fStack0000000000000130 = (fVar69 + fVar55 * 0.5) - (fVar68 + fVar66) * 0.5;
    fStack000000000000011c = 0.0;
    fStack0000000000000134 = 0.0;
  }
  uVar42 = (uint)*(undefined8 *)(lVar39 + 0x18);
  if (uVar42 <= uVar13) goto LAB_087ddd1c;
  lVar21 = lVar28 + uVar24 * 0x178;
  fVar69 = fStack00000000000000c0 + fStack0000000000000130;
  fVar55 = auVar70._0_4_ + fStack0000000000000134;
  fVar50 = in_stack_000000b8._4_4_ + fStack000000000000011c;
  if (*(char *)(lVar21 + 0x170) == '\0') goto LAB_087dc030;
  iVar17 = *piVar40;
  if (iVar17 == 0) {
    fVar48 = fVar56;
    fVar51 = fmodf(*(float *)((long)unaff_x19 + 0x34c) * (float)(int)uVar2,1.0);
    iVar18 = *(int *)((long)unaff_x19 + 0x344);
    if (iVar18 < 2) {
      if (iVar18 == 0) {
        lVar33 = lVar28 + uVar24 * 0x178;
        *(undefined4 *)(lVar33 + 100) = 0;
        *(undefined4 *)(lVar33 + 0x8c) = 0;
        *(undefined4 *)(lVar33 + 0xb4) = 0x3f800000;
        *(undefined4 *)(lVar33 + 0xdc) = 0x3f800000;
      }
      else if (iVar18 == 1) {
        lVar33 = lVar28 + uVar24 * 0x178;
        fVar48 = *(float *)(lVar33 + 0x48);
        pfVar34 = (float *)(lVar33 + 100);
        if (*(int *)((long)unaff_x19 + 0x29c) == 0x208) {
          lVar33 = lVar28 + uVar24 * 0x178;
          fVar49 = *(float *)(lVar33 + 0x70);
          *pfVar34 = fVar51 + ((fStack0000000000000130 + fVar48) - *(float *)(unaff_x19 + 0x9e)) /
                              (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar33 + 0x8c) =
               fVar51 + ((fStack0000000000000130 + fVar49) - *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar33 + 0xb4) =
               fVar51 + ((fStack0000000000000130 + *(float *)(lVar33 + 0x98)) -
                        *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar33 + 0xdc) =
               fVar51 + ((fStack0000000000000130 + *(float *)(lVar33 + 0xc0)) -
                        *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          fVar48 = fStack0000000000000130;
        }
        else {
          lVar33 = lVar28 + uVar24 * 0x178;
          fVar66 = fVar66 - fVar68;
          fVar49 = *(float *)(lVar33 + 0x70);
          fVar62 = *(float *)(lVar33 + 0x98);
          fVar64 = *(float *)(lVar33 + 0xc0);
          *pfVar34 = fVar51 + (fVar48 - fVar68) / fVar66;
          *(float *)(lVar33 + 0x8c) = fVar51 + (fVar49 - fVar68) / fVar66;
          fVar48 = fVar51 + (fVar62 - fVar68) / fVar66;
          *(float *)(lVar33 + 0xb4) = fVar48;
          *(float *)(lVar33 + 0xdc) = fVar51 + (fVar64 - fVar68) / fVar66;
        }
      }
    }
    else if (iVar18 == 2) {
      lVar33 = lVar28 + uVar24 * 0x178;
      *(float *)(lVar33 + 100) =
           fVar51 + ((fStack0000000000000130 + *(float *)(lVar33 + 0x48)) -
                    *(float *)(unaff_x19 + 0x9e)) /
                    (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar33 + 0x8c) =
           fVar51 + ((fStack0000000000000130 + *(float *)(lVar33 + 0x70)) -
                    *(float *)(unaff_x19 + 0x9e)) /
                    (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar33 + 0xb4) =
           fVar51 + ((fStack0000000000000130 + *(float *)(lVar33 + 0x98)) -
                    *(float *)(unaff_x19 + 0x9e)) /
                    (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar33 + 0xdc) =
           fVar51 + ((fStack0000000000000130 + *(float *)(lVar33 + 0xc0)) -
                    *(float *)(unaff_x19 + 0x9e)) /
                    (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      fVar48 = fStack0000000000000130;
    }
    else if (iVar18 == 3) {
      iVar18 = (int)unaff_x19[0x69];
      if (iVar18 < 2) {
        if (iVar18 == 0) {
          lVar33 = lVar28 + uVar24 * 0x178;
          *(undefined4 *)(lVar33 + 0x68) = 0;
          *(undefined4 *)(lVar33 + 0x90) = 0x3f800000;
          *(undefined4 *)(lVar33 + 0xb8) = 0;
          *(undefined4 *)(lVar33 + 0xe0) = 0x3f800000;
        }
        else if (iVar18 == 1) {
          lVar33 = lVar28 + uVar24 * 0x178;
          fVar49 = fVar49 - fVar62;
          fVar48 = (*(float *)(lVar33 + 0x74) - fVar62) / fVar49;
          fVar49 = fVar51 + (*(float *)(lVar33 + 0x4c) - fVar62) / fVar49;
          *(float *)(lVar33 + 0x68) = fVar49;
          *(float *)(lVar33 + 0xb8) = fVar49;
          goto LAB_087dbc90;
        }
      }
      else if (iVar18 == 2) {
        lVar33 = lVar28 + uVar24 * 0x178;
        fVar48 = fVar51 + (*(float *)(lVar33 + 0x4c) - *(float *)((long)unaff_x19 + 0x4f4)) /
                          (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4)
                          );
        *(float *)(lVar33 + 0x68) = fVar48;
        fVar49 = *(float *)((long)unaff_x19 + 0x4f4);
        fVar66 = *(float *)((long)unaff_x19 + 0x4fc);
        *(float *)(lVar33 + 0xb8) = fVar48;
        fVar48 = (*(float *)(lVar33 + 0x74) - fVar49) / (fVar66 - fVar49);
LAB_087dbc90:
        *(float *)(lVar33 + 0x90) = fVar51 + fVar48;
        *(float *)(lVar33 + 0xe0) = fVar51 + fVar48;
      }
      else if (iVar18 == 3) {
        if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_0897e2a8(*(undefined8 *)PTR_DAT_093376a0,0);
        uVar42 = (uint)*(undefined8 *)(lVar39 + 0x18);
      }
      if (uVar42 <= uVar13) goto LAB_087ddd1c;
      lVar33 = lVar28 + uVar24 * 0x178;
      fVar48 = *(float *)(lVar33 + 0x138);
      fVar66 = (1.0 - (*(float *)(lVar33 + 0x68) + *(float *)(lVar33 + 0x90)) * fVar48) * 0.5;
      fVar49 = fVar51 + *(float *)(lVar33 + 0x68) * fVar48 + fVar66;
      fVar51 = fVar51 + fVar66 + *(float *)(lVar33 + 0x90) * fVar48;
      *(float *)(lVar33 + 100) = fVar49;
      *(float *)(lVar33 + 0x8c) = fVar49;
      *(float *)(lVar33 + 0xb4) = fVar51;
      *(float *)(lVar33 + 0xdc) = fVar51;
    }
    iVar18 = (int)unaff_x19[0x69];
    if (iVar18 < 2) {
      if (iVar18 == 0) {
        if (uVar42 <= uVar13) goto LAB_087ddd1c;
        lVar33 = lVar28 + uVar24 * 0x178;
        *(undefined4 *)(lVar33 + 0x68) = 0;
        *(undefined4 *)(lVar33 + 0x90) = 0x3f800000;
        *(undefined4 *)(lVar33 + 0xb8) = 0x3f800000;
        *(undefined4 *)(lVar33 + 0xe0) = 0;
      }
      else if (iVar18 == 1) {
        if (uVar13 < uVar42) {
          lVar33 = lVar28 + uVar24 * 0x178;
          fVar65 = fVar65 - fVar56;
          fVar49 = (*(float *)(lVar33 + 0x4c) - fVar56) / fVar65;
          fVar65 = (*(float *)(lVar33 + 0x74) - fVar56) / fVar65;
          *(float *)(lVar33 + 0x68) = fVar49;
          goto LAB_087dbe08;
        }
        goto LAB_087ddd1c;
      }
    }
    else if (iVar18 == 2) {
      if (uVar42 <= uVar13) goto LAB_087ddd1c;
      lVar33 = lVar28 + uVar24 * 0x178;
      fVar49 = (*(float *)(lVar33 + 0x4c) - *(float *)((long)unaff_x19 + 0x4f4)) /
               (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
      *(float *)(lVar33 + 0x68) = fVar49;
      fVar48 = *(float *)((long)unaff_x19 + 0x4fc);
      fVar65 = (*(float *)(lVar33 + 0x74) - *(float *)((long)unaff_x19 + 0x4f4)) /
               (fVar48 - *(float *)((long)unaff_x19 + 0x4f4));
LAB_087dbe08:
      *(float *)(lVar33 + 0x90) = fVar65;
      *(float *)(lVar33 + 0xb8) = fVar65;
      *(float *)(lVar33 + 0xe0) = fVar49;
    }
    else if (iVar18 == 3) {
      if (uVar42 <= uVar13) goto LAB_087ddd1c;
      lVar33 = lVar28 + uVar24 * 0x178;
      fVar49 = *(float *)(lVar33 + 0x138);
      fVar48 = (1.0 - (*(float *)(lVar33 + 100) + *(float *)(lVar33 + 0xb4)) / fVar49) * 0.5;
      fVar56 = *(float *)(lVar33 + 100) / fVar49 + fVar48;
      fVar48 = fVar48 + *(float *)(lVar33 + 0xb4) / fVar49;
      *(float *)(lVar33 + 0x68) = fVar56;
      *(float *)(lVar33 + 0xe0) = fVar56;
      *(float *)(lVar33 + 0x90) = fVar48;
      *(float *)(lVar33 + 0xb8) = fVar48;
      fVar48 = 0.5;
    }
    fVar56 = fVar48;
    if (uVar42 <= uVar13) goto LAB_087ddd1c;
    lVar33 = lVar28 + uVar24 * 0x178;
    fVar48 = *(float *)(lVar33 + 0x13c) * (1.0 - *(float *)(unaff_x19 + 0x60));
    if ((*(char *)(lVar33 + 0x34) == '\0') &&
       ((*(byte *)(lVar28 + uVar24 * 0x178 + 0x16c) & 1) != 0)) {
      fVar48 = -fVar48;
    }
    fVar49 = fVar46;
    if (((iVar16 == 2) || (fVar49 = fVar63, iVar16 == 1)) || (fVar49 = fVar46 / fVar57, iVar16 == 0)
       ) {
      fVar48 = fVar49 * fVar48;
    }
    lVar33 = lVar28 + uVar24 * 0x178;
    *(float *)(lVar33 + 0x60) = fVar48;
    *(float *)(lVar33 + 0x88) = fVar48;
    *(float *)(lVar33 + 0xb0) = fVar48;
    *(float *)(lVar33 + 0xd8) = fVar48;
  }
  if (((int)uVar13 < (int)unaff_x19[0x6c]) &&
     ((int)fStack00000000000000fc < *(int *)((long)unaff_x19 + 0x364))) {
    if (((int)unaff_x19[0x6d] <= (int)uVar2) || ((int)unaff_x19[0x62] == 5)) {
      if (((int)uVar2 < (int)unaff_x19[0x6d]) && ((int)unaff_x19[0x62] == 5)) {
        if (uVar13 < uVar42) {
          if (*(uint *)(lVar28 + uVar24 * 0x178 + 0x40) == uStack0000000000000040)
          goto LAB_087dcd00;
          goto LAB_087dbf10;
        }
        goto LAB_087ddd1c;
      }
      goto LAB_087dbf10;
    }
    if (uVar42 <= uVar13) goto LAB_087ddd1c;
LAB_087dcd00:
    lVar21 = lVar28 + uVar24 * 0x178;
    fVar56 = fVar50 + *(float *)(lVar21 + 0x78);
    *(ulong *)(lVar21 + 0x48) =
         CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar21 + 0x48) >> 0x20),
                  fVar69 + (float)*(undefined8 *)(lVar21 + 0x48));
    *(float *)(lVar21 + 0x50) = fVar50 + *(float *)(lVar21 + 0x50);
    *(ulong *)(lVar21 + 0x70) =
         CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar21 + 0x70) >> 0x20),
                  fVar69 + (float)*(undefined8 *)(lVar21 + 0x70));
    *(float *)(lVar21 + 0x78) = fVar56;
    *(ulong *)(lVar21 + 0x98) =
         CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar21 + 0x98) >> 0x20),
                  fVar69 + (float)*(undefined8 *)(lVar21 + 0x98));
    *(float *)(lVar21 + 0xa0) = fVar50 + *(float *)(lVar21 + 0xa0);
    *(ulong *)(lVar21 + 0xc0) =
         CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar21 + 0xc0) >> 0x20),
                  fVar69 + (float)*(undefined8 *)(lVar21 + 0xc0));
    *(float *)(lVar21 + 200) = fVar50 + *(float *)(lVar21 + 200);
  }
  else {
LAB_087dbf10:
    if (uVar42 <= uVar13) goto LAB_087ddd1c;
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      uVar42 = *(uint *)(lVar39 + 0x18);
      DAT_098854f1 = '\x01';
    }
    puVar9 = PTR_DAT_09285d60;
    uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8) + 1);
    *(undefined8 *)(lVar28 + uVar24 * 0x178 + 0x48) =
         **(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8);
    *(undefined4 *)(lVar28 + uVar24 * 0x178 + 0x50) = uVar47;
    if (uVar42 <= uVar13) goto LAB_087ddd1c;
    lVar33 = lVar28 + uVar24 * 0x178;
    uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
    *(undefined8 *)(lVar33 + 0x70) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
    *(undefined4 *)(lVar33 + 0x78) = uVar47;
    uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
    *(undefined8 *)(lVar33 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
    *(undefined4 *)(lVar33 + 0xa0) = uVar47;
    uVar59 = **(undefined8 **)(*(long *)puVar9 + 0xb8);
    uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
    *(undefined1 *)(lVar21 + 0x170) = 0;
    *(undefined8 *)(lVar33 + 0xc0) = uVar59;
    *(undefined4 *)(lVar33 + 200) = uVar47;
  }
  if (iVar17 == 0) {
    puVar29 = (undefined8 *)(*unaff_x19 + 0x8d8);
  }
  else {
    if (iVar17 != 1) goto LAB_087dc030;
    puVar29 = (undefined8 *)(*unaff_x19 + 0x8f8);
  }
  (*(code *)*puVar29)();
LAB_087dc030:
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
  goto LAB_087ddb5c;
  if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_087ddd1c;
  lVar21 = lVar21 + uVar24 * 0x178;
  uVar59 = *(undefined8 *)(lVar21 + 0x114);
  *(float *)(lVar21 + 0x11c) = fVar50 + *(float *)(lVar21 + 0x11c);
  *(undefined8 *)(lVar21 + 0x114) =
       CONCAT44(fVar55 + (float)((ulong)uVar59 >> 0x20),fVar69 + (float)uVar59);
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
  goto LAB_087ddb5c;
  if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_087ddd1c;
  lVar21 = lVar21 + uVar24 * 0x178;
  *(ulong *)(lVar21 + 0x108) =
       CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar21 + 0x108) >> 0x20),
                fVar69 + (float)*(undefined8 *)(lVar21 + 0x108));
  *(float *)(lVar21 + 0x110) = fVar50 + *(float *)(lVar21 + 0x110);
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
  goto LAB_087ddb5c;
  if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_087ddd1c;
  lVar21 = lVar21 + uVar24 * 0x178;
  *(ulong *)(lVar21 + 0x120) =
       CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar21 + 0x120) >> 0x20),
                fVar69 + (float)*(undefined8 *)(lVar21 + 0x120));
  *(float *)(lVar21 + 0x128) = fVar50 + *(float *)(lVar21 + 0x128);
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
  goto LAB_087ddb5c;
  if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_087ddd1c;
  lVar21 = lVar21 + uVar24 * 0x178;
  uVar59 = *(undefined8 *)(lVar21 + 300);
  *(float *)(lVar21 + 0x134) = fVar50 + *(float *)(lVar21 + 0x134);
  *(undefined8 *)(lVar21 + 300) =
       CONCAT44(fVar55 + (float)((ulong)uVar59 >> 0x20),fVar69 + (float)uVar59);
  lVar21 = unaff_x19[0x74];
  if ((lVar21 == 0) || (lVar33 = *(long *)(lVar21 + 0x38), lVar33 == 0)) goto LAB_087ddb5c;
  uVar42 = *(uint *)(lVar33 + 0x18);
  if (uVar42 <= uVar13) goto LAB_087ddd1c;
  lVar37 = lVar33 + 0x20 + uVar24 * 0x178;
  uVar59 = *(undefined8 *)(lVar37 + 0x118);
  fVar50 = (float)uVar59;
  fVar49 = fVar55 + *(float *)(lVar37 + 0x128);
  auVar61 = ZEXT416((uint)fVar49);
  auVar54._0_8_ = CONCAT44(fVar69 + (float)((ulong)uVar59 >> 0x20),fVar69 + fVar50);
  auVar54._8_4_ = fVar55 + (float)*(undefined8 *)(lVar37 + 0x120);
  auVar54._12_4_ = fVar55 + (float)((ulong)*(undefined8 *)(lVar37 + 0x120) >> 0x20);
  *(float *)(lVar37 + 0x128) = fVar49;
  *(long *)(lVar37 + 0x120) = auVar54._8_8_;
  *(undefined8 *)(lVar37 + 0x118) = auVar54._0_8_;
  if (uVar2 == uVar30) {
    uVar30 = *(int *)(in_stack_000001d0 + 7) - 1;
    if (uVar13 == uVar30) goto LAB_087dc238;
  }
  else {
    lVar21 = *(long *)(lVar21 + 0x50);
    if (lVar21 == 0) goto LAB_087ddb5c;
    if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_087ddd1c;
    lVar37 = lVar21 + 0x20 + (long)(int)uVar30 * 0x60;
    fVar56 = *(float *)(lVar37 + 0x3c);
    auVar61._0_8_ =
         CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar37 + 0x30) >> 0x20),
                  fVar55 + (float)*(undefined8 *)(lVar37 + 0x30));
    auVar61._8_8_ = 0;
    fVar49 = fVar55 + *(float *)(lVar37 + 0x38);
    fVar50 = fVar69 + fVar56;
    *(ulong *)(lVar37 + 0x30) = auVar61._0_8_;
    *(float *)(lVar37 + 0x38) = fVar49;
    *(float *)(lVar37 + 0x3c) = fVar50;
    if (uVar42 <= *(uint *)(lVar37 + 0x18)) goto LAB_087ddd1c;
    lVar21 = lVar21 + 0x20 + (long)(int)uVar30 * 0x60;
    uVar47 = *(undefined4 *)(lVar33 + 0x20 + (long)(int)*(uint *)(lVar37 + 0x18) * 0x178 + 0xf4);
    *(float *)(lVar21 + 0x54) = fVar49;
    *(undefined4 *)(lVar21 + 0x50) = uVar47;
    lVar21 = unaff_x19[0x74];
    if ((lVar21 == 0) || (lVar33 = *(long *)(lVar21 + 0x50), lVar33 == 0)) goto LAB_087ddb5c;
    if (*(uint *)(lVar33 + 0x18) <= uVar30) goto LAB_087ddd1c;
    lVar21 = *(long *)(lVar21 + 0x38);
    if (lVar21 == 0) goto LAB_087ddb5c;
    uVar42 = *(uint *)(lVar33 + 0x20 + (long)(int)uVar30 * 0x60 + 0x24);
    if (*(uint *)(lVar21 + 0x18) <= uVar42) goto LAB_087ddd1c;
    lVar33 = lVar33 + 0x20 + (long)(int)uVar30 * 0x60;
    *(undefined4 *)(lVar33 + 0x58) = *(undefined4 *)(lVar21 + (long)(int)uVar42 * 0x178 + 0x120);
    *(undefined4 *)(lVar33 + 0x5c) = *(undefined4 *)(lVar33 + 0x30);
    uVar30 = *(int *)(in_stack_000001d0 + 7) - 1;
LAB_087dc238:
    if (uVar13 == uVar30) {
      lVar21 = unaff_x19[0x74];
      if ((lVar21 == 0) || (lVar33 = *(long *)(lVar21 + 0x50), lVar33 == 0)) goto LAB_087ddb5c;
      if (*(uint *)(lVar33 + 0x18) <= uVar2) goto LAB_087ddd1c;
      lVar37 = lVar33 + 0x20 + (long)(int)uVar2 * 0x60;
      fVar56 = *(float *)(lVar37 + 0x3c);
      auVar61._0_8_ =
           CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar37 + 0x30) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar37 + 0x30));
      auVar61._8_8_ = 0;
      fVar55 = fVar55 + *(float *)(lVar37 + 0x38);
      fVar50 = fVar69 + fVar56;
      *(ulong *)(lVar37 + 0x30) = auVar61._0_8_;
      *(float *)(lVar37 + 0x38) = fVar55;
      *(float *)(lVar37 + 0x3c) = fVar50;
      lVar21 = *(long *)(lVar21 + 0x38);
      if (lVar21 == 0) goto LAB_087ddb5c;
      uVar30 = *(uint *)(lVar33 + 0x20 + (long)(int)uVar2 * 0x60 + 0x18);
      if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_087ddd1c;
      *(undefined4 *)(lVar37 + 0x50) = *(undefined4 *)(lVar21 + (long)(int)uVar30 * 0x178 + 0x114);
      *(float *)(lVar37 + 0x54) = fVar55;
      lVar21 = unaff_x19[0x74];
      if ((lVar21 == 0) || (lVar33 = *(long *)(lVar21 + 0x50), lVar33 == 0)) goto LAB_087ddb5c;
      if (*(uint *)(lVar33 + 0x18) <= uVar2) goto LAB_087ddd1c;
      lVar21 = *(long *)(lVar21 + 0x38);
      if (lVar21 == 0) goto LAB_087ddb5c;
      uVar30 = *(uint *)(lVar33 + 0x20 + (long)(int)uVar2 * 0x60 + 0x24);
      if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_087ddd1c;
      lVar33 = lVar33 + 0x20 + (long)(int)uVar2 * 0x60;
      *(undefined4 *)(lVar33 + 0x58) = *(undefined4 *)(lVar21 + (long)(int)uVar30 * 0x178 + 0x120);
      *(undefined4 *)(lVar33 + 0x5c) = *(undefined4 *)(lVar33 + 0x30);
    }
  }
  if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar20 = FUN_075da96c(uVar44,0);
  if (((((uVar20 & 1) == 0) && (1 < uVar44 - 0x2010)) && (uVar44 != 0xad)) && (uVar44 != 0x2d)) {
    if (bVar8) {
      if (((uVar13 != 0) && ((int)uVar13 < (int)(*(uint *)(lVar39 + 0x18) - 1))) &&
         (((int)uVar13 < *(int *)(in_stack_000001d0 + 7) && ((uVar44 == 0x2019 || (uVar44 == 0x27)))
          ))) {
        if (*(uint *)(lVar39 + 0x18) <= uVar13 - 1) goto LAB_087ddd1c;
        uVar3 = *(undefined2 *)(lVar28 + (ulong)(uVar13 - 1) * 0x178 + 4);
        if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar20 = FUN_075da96c(uVar3,0);
        if ((uVar20 & 1) != 0) {
          if (*(uint *)(lVar39 + 0x18) <= uVar13 + 1) goto LAB_087ddd1c;
          uVar3 = *(undefined2 *)(lVar28 + (ulong)(uVar13 + 1) * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar20 = FUN_075da96c(uVar3,0);
          if ((uVar20 & 1) != 0) goto LAB_087dc550;
        }
      }
LAB_087dd290:
      if (uVar13 == *(int *)(in_stack_000001d0 + 7) - 1U) {
        if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar20 = FUN_075da96c(uVar44,0);
        uVar30 = uVar13;
        if ((uVar20 & 1) == 0) goto LAB_087dd2d0;
      }
      else {
LAB_087dd2d0:
        uVar30 = uVar13 - 1;
      }
      lVar21 = unaff_x19[0x74];
      if (lVar21 != 0) {
        lVar33 = *(long *)(lVar21 + 0x40);
        if (lVar33 != 0) {
          uVar42 = *(uint *)(lVar21 + 0x24);
          iVar17 = *(int *)(lVar33 + 0x18);
          if (iVar17 < (int)(uVar42 + 1)) {
            if (*(int *)(*(long *)PTR_DAT_093375f0 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            FUN_05202298((long *)(lVar21 + 0x40),iVar17 + 1,*(undefined8 *)PTR_DAT_093375e8);
            lVar21 = unaff_x19[0x74];
            if (lVar21 == 0) goto LAB_087ddb5c;
          }
          lVar21 = *(long *)(lVar21 + 0x40);
          if (lVar21 != 0) {
            if (uVar42 < *(uint *)(lVar21 + 0x18)) {
              lVar21 = lVar21 + (long)(int)uVar42 * 0x18;
              *(long **)(lVar21 + 0x20) = unaff_x19;
              *(uint *)(lVar21 + 0x28) = uVar14;
              *(uint *)(lVar21 + 0x2c) = uVar30;
              *(uint *)(lVar21 + 0x30) = (uVar30 - uVar14) + 1;
              thunk_FUN_040ec700();
              lVar21 = unaff_x19[0x74];
              if (lVar21 != 0) {
                lVar33 = *(long *)(lVar21 + 0x50);
                *(int *)(lVar21 + 0x24) = *(int *)(lVar21 + 0x24) + 1;
                if (lVar33 != 0) {
                  if (uVar2 < *(uint *)(lVar33 + 0x18)) {
                    bVar8 = false;
                    goto LAB_087dc464;
                  }
                  goto LAB_087ddd1c;
                }
              }
              goto LAB_087ddb5c;
            }
            goto LAB_087ddd1c;
          }
        }
      }
      goto LAB_087ddb5c;
    }
    if (uVar13 == 0) {
      if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      bVar12 = FUN_075da8c4(uVar44,0);
      if ((((uVar44 == 0x200b | bVar12 ^ 0xff | bVar11) & 1) != 0) ||
         (*(int *)(in_stack_000001d0 + 7) == 1)) goto LAB_087dd290;
    }
    bVar8 = false;
  }
  else {
    if (!bVar8) {
      uVar14 = uVar13;
    }
    if (uVar13 != *(int *)(in_stack_000001d0 + 7) - 1U) {
LAB_087dc550:
      bVar8 = true;
      goto LAB_087dc558;
    }
    lVar21 = unaff_x19[0x74];
    if (lVar21 == 0) goto LAB_087ddb5c;
    lVar33 = *(long *)(lVar21 + 0x40);
    if (lVar33 == 0) goto LAB_087ddb5c;
    uVar30 = *(uint *)(lVar21 + 0x24);
    iVar17 = *(int *)(lVar33 + 0x18);
    if (iVar17 < (int)(uVar30 + 1)) {
      if (*(int *)(*(long *)PTR_DAT_093375f0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_05202298((long *)(lVar21 + 0x40),iVar17 + 1,*(undefined8 *)PTR_DAT_093375e8);
      lVar21 = unaff_x19[0x74];
      if (lVar21 == 0) goto LAB_087ddb5c;
    }
    lVar21 = *(long *)(lVar21 + 0x40);
    if (lVar21 == 0) goto LAB_087ddb5c;
    if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_087ddd1c;
    lVar21 = lVar21 + (long)(int)uVar30 * 0x18;
    *(long **)(lVar21 + 0x20) = unaff_x19;
    *(uint *)(lVar21 + 0x28) = uVar14;
    *(uint *)(lVar21 + 0x2c) = uVar13;
    *(uint *)(lVar21 + 0x30) = (uVar13 - uVar14) + 1;
    thunk_FUN_040ec700();
    lVar21 = unaff_x19[0x74];
    if (lVar21 == 0) goto LAB_087ddb5c;
    lVar33 = *(long *)(lVar21 + 0x50);
    *(int *)(lVar21 + 0x24) = *(int *)(lVar21 + 0x24) + 1;
    if (lVar33 == 0) goto LAB_087ddb5c;
    if (*(uint *)(lVar33 + 0x18) <= uVar2) goto LAB_087ddd1c;
    bVar8 = true;
LAB_087dc464:
    lVar33 = lVar33 + (long)(int)uVar2 * 0x60;
    fStack00000000000000fc = (float)((int)fStack00000000000000fc + 1);
    *(int *)(lVar33 + 0x34) = *(int *)(lVar33 + 0x34) + 1;
  }
LAB_087dc558:
  lVar21 = unaff_x19[0x74];
  if ((lVar21 == 0) || (lVar33 = *(long *)(lVar21 + 0x38), lVar33 == 0)) goto LAB_087ddb5c;
  if (*(uint *)(lVar33 + 0x18) <= uVar13) goto LAB_087ddd1c;
  lVar37 = lVar33 + 0x20;
  if ((*(byte *)(lVar37 + uVar24 * 0x178 + 0x16c) >> 2 & 1) == 0) {
    if (bVar10) {
      if (*(uint *)(lVar33 + 0x18) <= (uint)((long)(int)uVar13 + -1)) goto LAB_087ddd1c;
      lVar37 = lVar37 + ((long)(int)uVar13 + -1) * 0x178;
      lVar33 = *unaff_x19;
      fVar56 = *(float *)(lVar37 + 0x100);
      uVar47 = *(undefined4 *)(lVar37 + 0x13c);
LAB_087dc824:
      pcVar32 = *(code **)(lVar33 + 0x908);
LAB_087dc85c:
      auVar61 = ZEXT416((uint)fStack0000000000000064);
      fVar50 = fStack0000000000000068;
      (*pcVar32)(fStack000000000000006c,auVar61,fStack0000000000000068,fVar56,fStack0000000000000150
                 ,0,fVar67,uVar47);
      lVar21 = *(long *)PTR_DAT_09337670;
      if (*(int *)(lVar21 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar21 = *(long *)PTR_DAT_09337670;
      }
      in_stack_00000180._4_4_ = 0.0;
      fStack000000000000014c = 0.0;
      fStack0000000000000150 = *(float *)(*(long *)(lVar21 + 0xb8) + 0x1730);
    }
    bVar10 = false;
  }
  else {
    lVar33 = lVar37 + uVar24 * 0x178;
    *(int *)(lVar33 + 0x148) = iVar15;
    iVar17 = *(int *)(lVar33 + 0x40);
    if ((((int)unaff_x19[0x6c] < (int)uVar13) || ((int)unaff_x19[0x6d] < (int)uVar2)) ||
       (((int)unaff_x19[0x62] == 5 && (iVar17 + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar11 & 1) == 0 && uVar44 != 0x200b) {
      fVar50 = *(float *)(lVar37 + uVar24 * 0x178 + 0x13c);
      if (in_stack_00000180._4_4_ <= fVar50) {
        in_stack_00000180._4_4_ = fVar50;
      }
      if (fStack000000000000014c <= ABS(fVar48)) {
        fStack000000000000014c = ABS(fVar48);
      }
      fVar50 = in_stack_00000180._4_4_;
      if ((float)iVar17 != fStack0000000000000060) {
        if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar21 = unaff_x19[0x74];
          if (lVar21 == 0) goto LAB_087ddb5c;
          lVar33 = *(long *)(*(long *)PTR_DAT_09337670 + 0xb8);
        }
        else {
          lVar33 = *(long *)(*(long *)PTR_DAT_09337670 + 0xb8);
        }
        fStack0000000000000150 = *(float *)(lVar33 + 0x1730);
      }
      lVar21 = *(long *)(lVar21 + 0x38);
      if (lVar21 == 0) goto LAB_087ddb5c;
      if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_087ddd1c;
      if (unaff_x19[0x1f] == 0) goto LAB_087ddb5c;
      fVar66 = *(float *)(lVar21 + uVar24 * 0x178 + 0x144);
      fVar49 = (float)FUN_08a73bcc(unaff_x19[0x1f] + 0x28,0);
      fVar66 = fVar66 + in_stack_00000180._4_4_ * fVar49;
      if (fVar66 <= fStack0000000000000150) {
        fStack0000000000000150 = fVar66;
      }
      auVar61 = ZEXT416((uint)fStack0000000000000150);
      fStack0000000000000060 = (float)iVar17;
    }
    if (bVar10) {
LAB_087dc7e4:
      if (*(int *)(in_stack_000001d0 + 7) != 1) {
        if ((uVar13 != uVar4) && ((int)uVar13 < (int)uVar5)) {
          if (bVar1) {
            if ((int)uVar13 < *(int *)(in_stack_000001d0 + 7) + -1) {
              if ((unaff_x19[0x74] == 0) ||
                 (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0)) goto LAB_087ddb5c;
              if (*(uint *)(lVar21 + 0x18) <= uVar13 + 1) goto LAB_087ddd1c;
              uVar20 = UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator__get_restingHandAxis2DAction
                                 (uStack000000000000008c,
                                  *(undefined4 *)(lVar21 + (ulong)(uVar13 + 1) * 0x178 + 0x164),0);
              if ((uVar20 & 1) == 0) {
                if ((unaff_x19[0x74] != 0) &&
                   (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 != 0)) {
                  if (uVar13 < *(uint *)(lVar21 + 0x18)) {
                    lVar21 = lVar21 + uVar24 * 0x178;
                    fVar56 = *(float *)(lVar21 + 0x120);
                    uVar47 = *(undefined4 *)(lVar21 + 0x15c);
                    pcVar32 = *(code **)(*unaff_x19 + 0x908);
                    goto LAB_087dc85c;
                  }
                  goto LAB_087ddd1c;
                }
                goto LAB_087ddb5c;
              }
            }
            bVar10 = true;
            goto LAB_087dc8a8;
          }
          if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
          goto LAB_087ddb5c;
          if ((uint)((long)(int)uVar13 + -1) < *(uint *)(lVar21 + 0x18)) {
            lVar21 = lVar21 + ((long)(int)uVar13 + -1) * 0x178;
            goto LAB_087dc818;
          }
          goto LAB_087ddd1c;
        }
        lVar21 = unaff_x19[0x74];
        if ((bVar11 & 1) == 0 && uVar44 != 0x200b) {
          if ((lVar21 == 0) || (lVar21 = *(long *)(lVar21 + 0x38), lVar21 == 0)) goto LAB_087ddb5c;
          if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_087ddd1c;
          lVar21 = lVar21 + uVar24 * 0x178;
        }
        else {
          if ((lVar21 == 0) || (lVar21 = *(long *)(lVar21 + 0x38), lVar21 == 0)) goto LAB_087ddb5c;
          if (*(uint *)(lVar21 + 0x18) <= uVar5) goto LAB_087ddd1c;
          lVar21 = lVar21 + (long)(int)uVar5 * 0x178;
        }
        fVar56 = *(float *)(lVar21 + 0x120);
        uVar47 = *(undefined4 *)(lVar21 + 0x15c);
        pcVar32 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_087dc85c;
      }
      if ((unaff_x19[0x74] != 0) && (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 != 0)) {
        if (uVar13 < *(uint *)(lVar21 + 0x18)) {
          lVar21 = lVar21 + uVar24 * 0x178;
LAB_087dc818:
          lVar33 = *unaff_x19;
          fVar56 = *(float *)(lVar21 + 0x120);
          uVar47 = *(undefined4 *)(lVar21 + 0x15c);
          goto LAB_087dc824;
        }
        goto LAB_087ddd1c;
      }
      goto LAB_087ddb5c;
    }
    if ((((bVar1) && ((int)uVar13 <= (int)uVar5)) && ((uVar44 & 0xfffe) != 10)) && (uVar44 != 0xd))
    {
      if (uVar13 == uVar5) {
        if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar20 = FUN_075db9d4(uVar44,0);
        if ((uVar20 & 1) != 0) goto LAB_087dc774;
      }
      if ((unaff_x19[0x74] != 0) && (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 != 0)) {
        if (uVar13 < *(uint *)(lVar21 + 0x18)) {
          lVar21 = lVar21 + uVar24 * 0x178;
          fVar67 = *(float *)(lVar21 + 0x15c);
          fVar49 = fVar67;
          if (in_stack_00000180._4_4_ != 0.0) {
            fVar49 = in_stack_00000180._4_4_;
          }
          auVar61 = ZEXT416((uint)fVar49);
          fVar66 = fVar48;
          if (in_stack_00000180._4_4_ != 0.0) {
            fVar66 = fStack000000000000014c;
          }
          fStack0000000000000068 = 0.0;
          fStack000000000000006c = *(float *)(lVar21 + 0x114);
          uStack000000000000008c = *(undefined4 *)(lVar21 + 0x164);
          fStack0000000000000064 = fStack0000000000000150;
          fStack000000000000014c = fVar66;
          in_stack_00000180._4_4_ = fVar49;
          goto LAB_087dc7e4;
        }
        goto LAB_087ddd1c;
      }
      goto LAB_087ddb5c;
    }
LAB_087dc774:
    bVar10 = false;
  }
LAB_087dc8a8:
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
  goto LAB_087ddb5c;
  if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_087ddd1c;
  if (lVar36 == 0) goto LAB_087ddb5c;
  uVar30 = *(uint *)(lVar21 + uVar24 * 0x178 + 0x18c);
  fVar49 = (float)FUN_08a73bdc(lVar36 + 0x28,0);
  if ((uVar30 >> 6 & 1) == 0) {
    if (bVar6) {
      if ((unaff_x19[0x74] == 0) || (lVar36 = *(long *)(unaff_x19[0x74] + 0x38), lVar36 == 0))
      goto LAB_087ddb5c;
      if (*(uint *)(lVar36 + 0x18) <= (uint)((long)(int)uVar13 + -1)) goto LAB_087ddd1c;
      lVar36 = lVar36 + ((long)(int)uVar13 + -1) * 0x178;
LAB_087dcb5c:
      fVar66 = *(float *)(lVar36 + 0x144);
      lVar21 = *unaff_x19;
      fVar56 = *(float *)(lVar36 + 0x120);
LAB_087dcdb8:
      auVar61 = ZEXT416((uint)fStack00000000000000a0);
      fVar50 = fStack0000000000000090;
      (**(code **)(lVar21 + 0x908))
                (in_stack_00000098._4_4_,auVar61,fStack0000000000000090,fVar56,
                 in_stack_000000a8._4_4_ * fVar49 + fVar66,0,in_stack_000000a8._4_4_,
                 in_stack_000000a8._4_4_);
    }
LAB_087dcdf4:
    bVar6 = false;
  }
  else {
    lVar21 = unaff_x19[0x74];
    if ((lVar21 == 0) || (lVar33 = *(long *)(lVar21 + 0x38), lVar33 == 0)) goto LAB_087ddb5c;
    if (*(uint *)(lVar33 + 0x18) <= uVar13) goto LAB_087ddd1c;
    *(int *)(lVar33 + 0x20 + uVar24 * 0x178 + 0x150) = iVar15;
    if ((((int)unaff_x19[0x6c] < (int)uVar13) || ((int)unaff_x19[0x6d] < (int)uVar2)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar33 + 0x20 + uVar24 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((((bool)(bVar6 | bVar1 ^ 1U)) || ((int)uVar5 < (int)uVar13)) || ((uVar44 & 0xfffe) == 10))
       || (uVar44 == 0xd)) {
LAB_087dc9f4:
      if (!bVar6) goto LAB_087dcdf4;
    }
    else {
      if (uVar13 == uVar5) {
        if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar20 = FUN_075db9d4(uVar44,0);
        if ((uVar20 & 1) != 0) goto LAB_087dc9f4;
        lVar21 = unaff_x19[0x74];
        if (lVar21 == 0) goto LAB_087ddb5c;
      }
      lVar21 = *(long *)(lVar21 + 0x38);
      if (lVar21 == 0) goto LAB_087ddb5c;
      if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_087ddd1c;
      lVar21 = lVar21 + uVar24 * 0x178;
      in_stack_000000a8._4_4_ = *(float *)(lVar21 + 0x15c);
      fStack0000000000000050 = *(float *)(lVar21 + 0x144);
      auVar61 = ZEXT416((uint)fStack0000000000000050);
      fVar50 = fVar49 * in_stack_000000a8._4_4_ + fStack0000000000000050;
      fStack0000000000000090 = 0.0;
      fStack0000000000000054 = *(float *)(lVar21 + 0x58);
      in_stack_00000098._4_4_ = *(float *)(lVar21 + 0x114);
      fStack00000000000000a0 = fVar50;
    }
    iVar17 = *(int *)(in_stack_000001d0 + 7);
    if (iVar17 == 1) {
LAB_087dcb34:
      if ((unaff_x19[0x74] != 0) && (lVar36 = *(long *)(unaff_x19[0x74] + 0x38), lVar36 != 0)) {
        if (uVar13 < *(uint *)(lVar36 + 0x18)) {
          lVar36 = lVar36 + uVar24 * 0x178;
          goto LAB_087dcb5c;
        }
        goto LAB_087ddd1c;
      }
      goto LAB_087ddb5c;
    }
    if (uVar13 == uVar4) {
      lVar36 = unaff_x19[0x74];
      if ((uVar44 != 0x200b & (bVar11 ^ 0xff)) == 0) goto LAB_087dcb98;
LAB_087dcd80:
      if ((lVar36 != 0) && (lVar36 = *(long *)(lVar36 + 0x38), lVar36 != 0)) {
        if (uVar13 < *(uint *)(lVar36 + 0x18)) {
          lVar36 = lVar36 + uVar24 * 0x178;

          UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewOneHandedScale_00000C68_BurstDirectCall__Invoke
          :
          fVar66 = *(float *)(lVar36 + 0x144);
          lVar21 = *unaff_x19;
          fVar56 = *(float *)(lVar36 + 0x120);
          goto LAB_087dcdb8;
        }
        goto LAB_087ddd1c;
      }
      goto LAB_087ddb5c;
    }
    if ((int)uVar13 < iVar17) {
      if ((unaff_x19[0x74] != 0) && (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 != 0)) {
        if (uVar13 + 1 < *(uint *)(lVar21 + 0x18)) {
          if (*(float *)(lVar21 + (ulong)(uVar13 + 1) * 0x178 + 0x58) == fStack0000000000000054) {
            if (*(int *)(*(long *)PTR_DAT_093375b0 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            auVar61 = ZEXT416((uint)fStack0000000000000050);
            uVar20 = FUN_087f05f0(0);
            if ((uVar20 & 1) != 0) {
              iVar17 = *(int *)(in_stack_000001d0 + 7);
              goto LAB_087dcc34;
            }
          }
          lVar36 = unaff_x19[0x74];
          if ((int)uVar13 <= (int)uVar5) goto LAB_087dcd80;
LAB_087dcb98:
          if ((lVar36 != 0) && (lVar36 = *(long *)(lVar36 + 0x38), lVar36 != 0)) {
            if (uVar5 < *(uint *)(lVar36 + 0x18)) {
              lVar36 = lVar36 + (long)(int)uVar5 * 0x178;
              goto 
              UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewOneHandedScale_00000C68_BurstDirectCall__Invoke
              ;
            }
            goto LAB_087ddd1c;
          }
          goto LAB_087ddb5c;
        }
        goto LAB_087ddd1c;
      }
      goto LAB_087ddb5c;
    }
LAB_087dcc34:
    if ((int)uVar13 < iVar17) {
      iVar17 = FUN_089d0058(lVar36,0);
      if (*(uint *)(lVar39 + 0x18) <= uVar13 + 1) goto LAB_087ddd1c;
      lVar36 = *(long *)(lVar28 + (ulong)(uVar13 + 1) * 0x178 + 0x20);
      if (lVar36 == 0) goto LAB_087ddb5c;
      iVar18 = FUN_089d0058(lVar36,0);
      if (iVar17 != iVar18) goto LAB_087dcb34;
    }
    if (!bVar1) {
      if ((unaff_x19[0x74] != 0) && (lVar36 = *(long *)(unaff_x19[0x74] + 0x38), lVar36 != 0)) {
        if ((uint)((long)(int)uVar13 + -1) < *(uint *)(lVar36 + 0x18)) {
          lVar36 = lVar36 + ((long)(int)uVar13 + -1) * 0x178;
          goto LAB_087dcb5c;
        }
        goto LAB_087ddd1c;
      }
      goto LAB_087ddb5c;
    }
    bVar6 = true;
  }
  if ((unaff_x19[0x74] == 0) || (lVar36 = *(long *)(unaff_x19[0x74] + 0x38), lVar36 == 0))
  goto LAB_087ddb5c;
  uVar30 = (uint)*(undefined8 *)(lVar36 + 0x18);
  if (uVar30 <= uVar13) goto LAB_087ddd1c;
  if ((*(byte *)(lVar36 + 0x20 + uVar24 * 0x178 + 0x16d) >> 1 & 1) == 0) {
    if (bVar7) {
LAB_087dd170:
      auVar61 = ZEXT416((uint)in_stack_00000128._4_4_);
      fVar50 = in_stack_000000d8._4_4_;
      fVar56 = fStack00000000000000e8;
      (**(code **)(*unaff_x19 + 0x918))();
    }
LAB_087dd1a4:
    bVar7 = false;
  }
  else {
    if ((((int)unaff_x19[0x6c] < (int)uVar13) || ((int)unaff_x19[0x6d] < (int)uVar2)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar36 + 0x20 + uVar24 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar7) {
LAB_087dcf54:
      if (uVar30 <= uVar13) goto LAB_087ddd1c;
      lVar36 = lVar36 + uVar24 * 0x178;
      lVar21 = 0x118;
      if ((bVar11 & 1) == 0) {
        lVar21 = 0xf4;
      }
      fVar55 = *(float *)(lVar36 + 0x180);
      fVar62 = *(float *)(lVar36 + 0x184);
      fVar68 = *(float *)(lVar36 + 0x188);
      uVar59 = *(undefined8 *)(lVar36 + 0x178);
      fVar69 = *(float *)(lVar36 + 0x120);
      fVar49 = *(float *)(lVar36 + 0x13c);
      fVar66 = *(float *)(lVar36 + 0x140);
      fVar65 = *(float *)(lVar36 + 0x148);
      fVar50 = *(float *)(lVar36 + lVar21 + 0x20);
      in_stack_000001d8 = uVar59;
      fStack00000000000001e0 = fVar55;
      fStack00000000000001e4 = fVar62;
      in_stack_000001e8 = fVar68;
      uVar24 = FUN_087f1714(&stack0x000001f0,&stack0x000001d8,0);
      if ((uVar24 & 1) == 0) {
        if ((bVar11 & 1) == 0) {
          fVar49 = fVar69;
        }
        if (*(int *)(*(long *)PTR_DAT_093375c0 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        fVar50 = fVar50 - in_stack_00001324;
        if (fVar50 <= fStack00000000000000f8) {
          fStack00000000000000f8 = fVar50;
        }
        if (fStack00000000000000e8 <= fVar49 + in_stack_00001328) {
          fStack00000000000000e8 = fVar49 + in_stack_00001328;
        }
        if (*(int *)(*(long *)PTR_DAT_093375c0 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        fVar66 = fVar66 + in_stack_0000132c;
        auVar61 = ZEXT416((uint)fVar66);
        fVar50 = in_stack_00000128._4_4_;
        if (fVar65 - in_stack_00001330 <= in_stack_00000128._4_4_) {
          fVar50 = fVar65 - in_stack_00001330;
        }
        in_stack_00000128._4_4_ = fVar50;
        if (in_stack_000000f0._4_4_ <= fVar66) {
          in_stack_000000f0._4_4_ = fVar66;
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_093375c0 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if (fVar65 <= in_stack_00000128._4_4_) {
          in_stack_00000128._4_4_ = fVar65;
        }
        auVar61 = ZEXT416((uint)in_stack_00000128._4_4_);
        fStack00000000000000f8 = (fVar50 + (fStack00000000000000e8 - in_stack_00001328)) * 0.5;
        fVar56 = fStack00000000000000f8;
        (**(code **)(*unaff_x19 + 0x918))();
        puVar9 = PTR_DAT_093375c0;
        fVar50 = in_stack_000000d8._4_4_;
        if (*(int *)(*(long *)PTR_DAT_093375c0 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          fVar50 = in_stack_000000d8._4_4_;
        }
        if ((bVar11 & 1) == 0) {
          fVar49 = fVar69;
        }
        if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        in_stack_00001324 = (float)((ulong)uVar59 >> 0x20);
        fStack00000000000000e8 = fVar55 + fVar49;
        in_stack_000000d8._4_4_ = 0.0;
        in_stack_000000f0._4_4_ = fVar66 + fVar62;
        in_stack_00000128._4_4_ = fVar65 - fVar68;
        in_stack_00001328 = fVar55;
        in_stack_0000132c = fVar62;
        in_stack_00001330 = fVar68;
      }
      if (((*(int *)(in_stack_000001d0 + 7) == 1) || (uVar13 == uVar4)) ||
         (((int)uVar5 <= (int)uVar13 || (!bVar1)))) goto LAB_087dd170;
      bVar7 = true;
    }
    else {
      bVar7 = false;
      if ((((bVar1) && ((int)uVar13 <= (int)uVar5)) && ((uVar44 & 0xfffe) != 10)) && (uVar44 != 0xd)
         ) {
        if (uVar13 == uVar5) {
          if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar20 = FUN_075db9d4(uVar44,0);
          if ((uVar20 & 1) != 0) goto LAB_087dd1a4;
        }
        puVar9 = PTR_DAT_09337670;
        lVar21 = *(long *)PTR_DAT_09337670;
        if (*(int *)(lVar21 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar21 = *(long *)puVar9;
        }
        if ((unaff_x19[0x74] != 0) && (lVar36 = *(long *)(unaff_x19[0x74] + 0x38), lVar36 != 0)) {
          uVar30 = (uint)*(undefined8 *)(lVar36 + 0x18);
          if (uVar13 < uVar30) {
            lVar33 = *(long *)(lVar21 + 0xb8);
            lVar21 = lVar36 + uVar24 * 0x178;
            fStack00000000000000e8 = *(float *)(lVar33 + 0x1728);
            in_stack_00001330 = *(float *)(lVar21 + 0x188);
            in_stack_000000d8._4_4_ = 0.0;
            fStack00000000000000f8 = *(float *)(lVar33 + 0x1720);
            in_stack_000000f0._4_4_ = *(float *)(lVar33 + 0x172c);
            in_stack_00000128._4_4_ = *(float *)(lVar33 + 0x1724);
            in_stack_00001328 = (float)*(undefined8 *)(lVar21 + 0x180);
            in_stack_0000132c = (float)((ulong)*(undefined8 *)(lVar21 + 0x180) >> 0x20);
            in_stack_00001324 = (float)((ulong)*(undefined8 *)(lVar21 + 0x178) >> 0x20);
            goto LAB_087dcf54;
          }
          goto LAB_087ddd1c;
        }
        goto LAB_087ddb5c;
      }
    }
  }
  iVar17 = *(int *)(in_stack_000001d0 + 7);
  uVar13 = uVar13 + 1;
  uVar30 = uVar2;
  if (iVar17 <= (int)uVar13) goto LAB_087dd54c;
  goto LAB_087db574;
LAB_087dd54c:
  lVar39 = unaff_x19[0x74];
  if (lVar39 != 0) {
    iVar16 = uVar2 + 1;
    plVar43 = (long *)PTR_DAT_093375b8;
    unaff_x28 = (long *)PTR_DAT_09285bb0;
LAB_087dd578:
    lVar28 = *(long *)(lVar39 + 0x60);
    if (lVar28 != 0) {
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_087ddd1c;
      *(int *)(lVar28 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x50 + 0x28) = iVar15;
      *(int *)(lVar39 + 0x18) = iVar17;
      lVar28 = unaff_x19[0xd7];
      *(int *)(lVar39 + 0x2c) = iVar16;
      if (iVar17 < 1 || fStack00000000000000fc == 0.0) {
        fStack00000000000000fc = 1.4013e-45;
      }
      *(int *)(lVar39 + 0x1c) = (int)lVar28;
      *(float *)(lVar39 + 0x24) = fStack00000000000000fc;
      *(int *)(lVar39 + 0x30) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
      if (((int)unaff_x19[0x6a] != 0xff) ||
         (uVar24 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar24 & 1) == 0)) {
LAB_087ddb60:
        if ((char)unaff_x19[0xdf] != '\0') {
          pcVar32 = *(code **)(*unaff_x19 + 0x798);
LAB_087ddb74:
          (*pcVar32)();
        }
        if (*(int *)(*(long *)PTR_DAT_09337678 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_087ef644();
        return;
      }
      lVar39 = unaff_x19[0xe2];
      if (lVar39 != 0) {
        (**(code **)(lVar39 + 0x18))
                  (*(undefined8 *)(lVar39 + 0x40),unaff_x19[0x74],*(undefined8 *)(lVar39 + 0x28));
      }
      if (unaff_x19[0xe8] != 0) {
        iVar15 = FUN_08c8e4c4(unaff_x19[0xe8],0);
        if (iVar15 != 0x19) {
          lVar39 = unaff_x19[0xe8];
          if (lVar39 == 0) goto LAB_087ddb5c;
          uVar13 = FUN_08c8e4c4(lVar39,0);
          FUN_08c8e578(lVar39,uVar13 | 0x19,0);
        }
        if (*(int *)((long)unaff_x19 + 0x354) != 0) {
          if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x60), lVar39 == 0))
          goto LAB_087ddb5c;
          if (*(int *)(*plVar43 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          if (*(int *)(lVar39 + 0x18) == 0) goto LAB_087ddd1c;
          FUN_0883b360(lVar39 + 0x20,1,0);
        }
        if (unaff_x19[0x7b] != 0) {
          FUN_089a2d68(unaff_x19[0x7b],0);
          if ((unaff_x19[0x74] != 0) && (lVar39 = *(long *)(unaff_x19[0x74] + 0x60), lVar39 != 0)) {
            if (*(int *)(lVar39 + 0x18) == 0) {
LAB_087ddd1c:
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            if (unaff_x19[0x7b] != 0) {
              FUN_0899fffc(unaff_x19[0x7b],*(undefined8 *)(lVar39 + 0x30),0);
              if ((unaff_x19[0x74] != 0) &&
                 (lVar39 = *(long *)(unaff_x19[0x74] + 0x60), lVar39 != 0)) {
                if (*(int *)(lVar39 + 0x18) == 0) goto LAB_087ddd1c;
                if (unaff_x19[0x7b] != 0) {
                  FUN_089a13cc(unaff_x19[0x7b],0,*(undefined8 *)(lVar39 + 0x48),0);
                  if ((unaff_x19[0x74] != 0) &&
                     (lVar39 = *(long *)(unaff_x19[0x74] + 0x60), lVar39 != 0)) {
                    if (*(int *)(lVar39 + 0x18) == 0) goto LAB_087ddd1c;
                    if (unaff_x19[0x7b] != 0) {
                      FUN_089a02ac(unaff_x19[0x7b],*(undefined8 *)(lVar39 + 0x50),0);
                      if ((unaff_x19[0x74] != 0) &&
                         (lVar39 = *(long *)(unaff_x19[0x74] + 0x60), lVar39 != 0)) {
                        if (*(int *)(lVar39 + 0x18) == 0) goto LAB_087ddd1c;
                        if (unaff_x19[0x7b] != 0) {
                          FUN_089a064c(unaff_x19[0x7b],*(undefined8 *)(lVar39 + 0x58),0);
                          if (unaff_x19[0x7b] != 0) {
                            FUN_089a2b28(unaff_x19[0x7b],0);
                            if (unaff_x19[0xe7] != 0) {
                              FUN_08c8b77c(unaff_x19[0xe7],unaff_x19[0x7b],0);
                              if (unaff_x19[0xe7] != 0) {
                                uVar47 = FUN_08c8af5c(unaff_x19[0xe7],0);
                                if (unaff_x19[0xe7] != 0) {
                                  uVar13 = FUN_08c8ab98(unaff_x19[0xe7],0);
                                  lVar39 = unaff_x19[0x74];
                                  if (lVar39 != 0) {
                                    lVar36 = 0;
                                    lVar28 = 0;
                                    do {
                                      uVar24 = lVar28 + 1;
                                      if ((long)*(int *)(lVar39 + 0x34) <= (long)uVar24)
                                      goto LAB_087ddb60;
                                      lVar39 = *(long *)(lVar39 + 0x60);
                                      if (lVar39 == 0) break;
                                      if (*(int *)(*plVar43 + 0xe4) == 0) {
                                        thunk_FUN_040d65a8();
                                      }
                                      if (*(uint *)(lVar39 + 0x18) <= uVar24) goto LAB_087ddd1c;
                                      FUN_0883b23c(lVar39 + lVar36 + 0x70,0);
                                      lVar39 = unaff_x19[0xe4];
                                      if (lVar39 == 0) break;
                                      if (*(uint *)(lVar39 + 0x18) <= uVar24) goto LAB_087ddd1c;
                                      uVar59 = *(undefined8 *)(lVar39 + lVar28 * 8 + 0x28);
                                      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                                        thunk_FUN_040d65a8();
                                      }
                                      uVar20 = FUN_089cc398(uVar59,0,0);
                                      if ((uVar20 & 1) == 0) {
                                        if (*(int *)((long)unaff_x19 + 0x354) != 0) {
                                          if ((unaff_x19[0x74] == 0) ||
                                             (lVar39 = *(long *)(unaff_x19[0x74] + 0x60),
                                             lVar39 == 0)) break;
                                          if (*(int *)(*plVar43 + 0xe4) == 0) {
                                            thunk_FUN_040d65a8();
                                          }
                                          if (*(uint *)(lVar39 + 0x18) <= uVar24) goto LAB_087ddd1c;
                                          FUN_0883b360(lVar39 + lVar36 + 0x70,1,0);
                                        }
                                        lVar39 = unaff_x19[0xe4];
                                        if (lVar39 == 0) break;
                                        if (*(uint *)(lVar39 + 0x18) <= uVar24) goto LAB_087ddd1c;
                                        lVar39 = *(long *)(lVar39 + lVar28 * 8 + 0x28);
                                        if (lVar39 == 0) break;
                                        lVar39 = FUN_08845594(lVar39,0);
                                        if ((unaff_x19[0x74] == 0) ||
                                           (lVar21 = *(long *)(unaff_x19[0x74] + 0x60), lVar21 == 0)
                                           ) break;
                                        if (*(uint *)(lVar21 + 0x18) <= uVar24) goto LAB_087ddd1c;
                                        if (lVar39 == 0) break;
                                        FUN_0899fffc(lVar39,*(undefined8 *)(lVar21 + lVar36 + 0x80),
                                                     0);
                                        lVar39 = unaff_x19[0xe4];
                                        if (lVar39 == 0) break;
                                        if (*(uint *)(lVar39 + 0x18) <= uVar24) goto LAB_087ddd1c;
                                        lVar39 = *(long *)(lVar39 + lVar28 * 8 + 0x28);
                                        if (lVar39 == 0) break;
                                        lVar39 = FUN_08845594(lVar39,0);
                                        if ((unaff_x19[0x74] == 0) ||
                                           (lVar21 = *(long *)(unaff_x19[0x74] + 0x60), lVar21 == 0)
                                           ) break;
                                        if (*(uint *)(lVar21 + 0x18) <= uVar24) goto LAB_087ddd1c;
                                        if (lVar39 == 0) break;
                                        FUN_089a13cc(lVar39,0,*(undefined8 *)
                                                               (lVar21 + lVar36 + 0x98),0);
                                        lVar39 = unaff_x19[0xe4];
                                        if (lVar39 == 0) break;
                                        if (*(uint *)(lVar39 + 0x18) <= uVar24) goto LAB_087ddd1c;
                                        lVar39 = *(long *)(lVar39 + lVar28 * 8 + 0x28);
                                        if (lVar39 == 0) break;
                                        lVar39 = FUN_08845594(lVar39,0);
                                        if ((unaff_x19[0x74] == 0) ||
                                           (lVar21 = *(long *)(unaff_x19[0x74] + 0x60), lVar21 == 0)
                                           ) break;
                                        if (*(uint *)(lVar21 + 0x18) <= uVar24) goto LAB_087ddd1c;
                                        if (lVar39 == 0) break;
                                        FUN_089a02ac(lVar39,*(undefined8 *)(lVar21 + lVar36 + 0xa0),
                                                     0);
                                        lVar39 = unaff_x19[0xe4];
                                        if (lVar39 == 0) break;
                                        if (*(uint *)(lVar39 + 0x18) <= uVar24) goto LAB_087ddd1c;
                                        lVar39 = *(long *)(lVar39 + lVar28 * 8 + 0x28);
                                        if (lVar39 == 0) break;
                                        lVar39 = FUN_08845594(lVar39,0);
                                        if ((unaff_x19[0x74] == 0) ||
                                           (lVar21 = *(long *)(unaff_x19[0x74] + 0x60), lVar21 == 0)
                                           ) break;
                                        if (*(uint *)(lVar21 + 0x18) <= uVar24) goto LAB_087ddd1c;
                                        if (lVar39 == 0) break;
                                        FUN_089a064c(lVar39,*(undefined8 *)(lVar21 + lVar36 + 0xa8),
                                                     0);
                                        lVar39 = unaff_x19[0xe4];
                                        if (lVar39 == 0) break;
                                        if (*(uint *)(lVar39 + 0x18) <= uVar24) goto LAB_087ddd1c;
                                        lVar39 = *(long *)(lVar39 + lVar28 * 8 + 0x28);
                                        if ((lVar39 == 0) ||
                                           (lVar39 = FUN_08845594(lVar39,0), lVar39 == 0)) break;
                                        FUN_089a2b28(lVar39,0);
                                        lVar39 = unaff_x19[0xe4];
                                        if (lVar39 == 0) break;
                                        if (*(uint *)(lVar39 + 0x18) <= uVar24) goto LAB_087ddd1c;
                                        lVar39 = *(long *)(lVar39 + lVar28 * 8 + 0x28);
                                        if (lVar39 == 0) break;
                                        lVar39 = FUN_08ac6f84(lVar39,0);
                                        lVar21 = unaff_x19[0xe4];
                                        if (lVar21 == 0) break;
                                        if (*(uint *)(lVar21 + 0x18) <= uVar24) goto LAB_087ddd1c;
                                        lVar21 = *(long *)(lVar21 + lVar28 * 8 + 0x28);
                                        if ((lVar21 == 0) ||
                                           (uVar59 = FUN_08845594(lVar21,0), lVar39 == 0)) break;
                                        FUN_08c8b77c(lVar39,uVar59,0);
                                        lVar39 = unaff_x19[0xe4];
                                        if (lVar39 == 0) break;
                                        if (*(uint *)(lVar39 + 0x18) <= uVar24) goto LAB_087ddd1c;
                                        lVar39 = *(long *)(lVar39 + lVar28 * 8 + 0x28);
                                        if ((lVar39 == 0) ||
                                           (lVar39 = FUN_08ac6f84(lVar39,0), lVar39 == 0)) break;
                                        FUN_08c8ae88(uVar47,auVar61._0_4_,fVar50,fVar56,lVar39,0);
                                        lVar39 = unaff_x19[0xe4];
                                        if (lVar39 == 0) break;
                                        if (*(uint *)(lVar39 + 0x18) <= uVar24) goto LAB_087ddd1c;
                                        lVar39 = *(long *)(lVar39 + lVar28 * 8 + 0x28);
                                        if ((lVar39 == 0) ||
                                           (lVar39 = FUN_08ac6f84(lVar39,0), lVar39 == 0)) break;
                                        FUN_08c8ac4c(lVar39,uVar13 & 1,0);
                                        lVar39 = unaff_x19[0xe4];
                                        if (lVar39 == 0) break;
                                        if (*(uint *)(lVar39 + 0x18) <= uVar24) goto LAB_087ddd1c;
                                        plVar27 = *(long **)(lVar39 + lVar28 * 8 + 0x28);
                                        uVar14 = (**(code **)(*unaff_x19 + 0x2b8))();
                                        if (plVar27 == (long *)0x0) break;
                                        (**(code **)(*plVar27 + 0x2c8))
                                                  (plVar27,uVar14 & 1,
                                                   *(undefined8 *)(*plVar27 + 0x2d0));
                                      }
                                      lVar39 = unaff_x19[0x74];
                                      lVar28 = lVar28 + 1;
                                      lVar36 = lVar36 + 0x50;
                                    } while (lVar39 != 0);
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
LAB_087ddb5c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


