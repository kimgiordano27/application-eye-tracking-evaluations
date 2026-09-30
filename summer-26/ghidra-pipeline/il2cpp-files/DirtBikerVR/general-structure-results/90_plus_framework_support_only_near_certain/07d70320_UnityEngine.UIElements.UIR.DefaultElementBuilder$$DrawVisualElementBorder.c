/*
FUNCTION_NAME: UnityEngine.UIElements.UIR.DefaultElementBuilder$$DrawVisualElementBorder
ENTRY_POINT: 07d70320
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 96
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_7;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_7
*/


void UnityEngine_UIElements_UIR_DefaultElementBuilder__DrawVisualElementBorder
               (undefined **param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  char cVar16;
  undefined1 uVar17;
  uint uVar18;
  uint uVar19;
  float *pfVar20;
  float *pfVar21;
  int *piVar22;
  uint uVar23;
  long *plVar24;
  long lVar25;
  long unaff_x19;
  uint unaff_w20;
  long *plVar26;
  uint *unaff_x21;
  long unaff_x22;
  ulong uVar27;
  uint unaff_w24;
  uint uVar28;
  uint *unaff_x25;
  uint unaff_w26;
  uint unaff_w27;
  long lVar29;
  long *unaff_x29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined8 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  float unaff_s12;
  undefined8 uVar46;
  float unaff_s13;
  float fVar47;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  int iStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  float *in_stack_00000040;
  float fStack0000000000000048;
  uint uStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  uint uStack0000000000000058;
  int iStack000000000000005c;
  ulong in_stack_00000060;
  long in_stack_00000068;
  long *in_stack_00000090;
  float *in_stack_000000a0;
  float fStack00000000000000a8;
  int iStack00000000000000b0;
  float fStack00000000000000b4;
  float *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  uint uStack00000000000000d8;
  float fStack00000000000000dc;
  long *in_stack_000000e0;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  float fStack00000000000000f0;
  float fStack00000000000000f4;
  float fStack00000000000000f8;
  float fStack00000000000000fc;
  float fStack0000000000000100;
  uint uStack0000000000000104;
  int iStack0000000000000108;
  float fStack000000000000010c;
  float in_stack_00000120;
  undefined8 in_stack_00000138;
  long in_stack_00000140;
  long *in_stack_00000148;
  float fStack0000000000000150;
  undefined8 in_stack_00000160;
  char *in_stack_00000168;
  uint in_stack_000010fc;
  uint in_stack_0000112c;
  undefined8 in_stack_00001190;
  char in_stack_0000119c;
  
  uVar2 = in_stack_00000060;
code_r0x07d70320:
  uVar13 = thunk_FUN_07c662cc(param_2,*(undefined4 *)
                                       (*(long *)(*(long *)param_1[0x125] + 0xb8) + 0x6c),param_4);
  if ((uVar13 & 1) == 0) goto LAB_07d70594;
  lVar29 = *in_stack_00000090;
  if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo + 0xe4)
      == 0) {
    thunk_FUN_03ae8be4();
  }
  if (lVar29 != 0) {
    fVar32 = (float)thunk_FUN_07c69050(lVar29,*(undefined4 *)
                                               (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
LAB_07d705ac:
    if (*unaff_x29 != 0) {
      fVar33 = (float)FUN_07d617a8(*unaff_x29,0);
      fVar33 = fVar32 * fVar33 * 0.25;
      if (fVar32 < in_stack_00000138._4_4_ + fVar33) {
        in_stack_00000138._4_4_ = fVar32 - fVar33;
      }
LAB_07d705e8:
      if (*unaff_x29 != 0) {
        fStack00000000000000d0 = (float)FUN_07d617b8(*unaff_x29,0);
LAB_07d705fc:
        fVar42 = *(float *)(unaff_x22 + 0x300);
        fVar32 = (float)FUN_07d53588(&stack0x00001110,0);
        fVar43 = *(float *)(unaff_x22 + 0x19b0);
        fVar34 = (float)FUN_07d57ab0(&stack0x00001100,0);
        fVar42 = fVar42 + (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
                          fStack000000000000010c *
                          (fVar34 + ((fVar32 * fVar43 - in_stack_00000138._4_4_) - fVar33));
        fVar32 = (float)FUN_07d53590(&stack0x00001110,0);
        fVar34 = (float)FUN_07d57ac0(&stack0x00001100,0);
        fVar32 = fStack000000000000010c * (in_stack_00000138._4_4_ + fVar32 + fVar34);
        if (*(char *)(unaff_x22 + 0xf4) != '\0') {
          fVar32 = (float)(int)(fVar32 + unaff_s15);
        }
        fStack0000000000000150 =
             *(float *)(unaff_x22 + 0x188) +
             ((in_stack_00000120 + fVar32) - *(float *)(unaff_x22 + 0x2e8));
        fVar32 = (float)FUN_07d53580(&stack0x00001110,0);
        fVar43 = fStack0000000000000150 -
                 fStack000000000000010c *
                 (in_stack_00000138._4_4_ + in_stack_00000138._4_4_ + fVar32);
        fVar32 = (float)FUN_07d53578(&stack0x00001110,0);
        fVar32 = fVar42 + (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
                          fStack000000000000010c *
                          (fVar33 + fVar33 +
                          in_stack_00000138._4_4_ + in_stack_00000138._4_4_ +
                          fVar32 * *(float *)(unaff_x22 + 0x19b0));
        fVar44 = fVar32;
        fVar34 = fVar42;
        if (((unaff_w20 == 0) && (*in_stack_00000168 == '\x01')) &&
           ((*(byte *)(unaff_x22 + 300) >> 1 & 1) != 0)) {
          if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
          iVar6 = *(int *)(unaff_x22 + 0x19ac);
          fVar34 = (float)FUN_07d532c4(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
          if (*unaff_x29 == 0) goto LAB_07d72adc;
          fVar30 = (float)FUN_07d532e4(*unaff_x29 + 0xb0,0);
          if (*unaff_x29 == 0) goto LAB_07d72adc;
          fVar41 = *(float *)(unaff_x22 + 0xf0);
          fVar47 = *(float *)(unaff_x22 + 0x188);
          fVar44 = (float)iVar6 * fStack0000000000000054;
          fVar40 = (float)FUN_07d53294(*unaff_x29 + 0xb0,0);
          fVar40 = fVar40 * fVar41 * (fVar34 - (fVar30 + fVar47)) * 0.5;
          fVar34 = (float)FUN_07d53590(&stack0x00001110,0);
          fVar47 = fVar44 * fStack000000000000010c *
                            ((fVar33 + in_stack_00000138._4_4_ + fVar34) - fVar40);
          fVar30 = (float)FUN_07d53590(&stack0x00001110,0);
          fVar41 = (float)FUN_07d53580(&stack0x00001110,0);
          fStack0000000000000150 = fStack0000000000000150 + 0.0;
          fVar34 = fVar42 + fVar47;
          fVar43 = fVar43 + 0.0;
          fVar44 = fVar44 * fStack000000000000010c *
                            ((((fVar30 - fVar41) - in_stack_00000138._4_4_) - fVar33) - fVar40);
          fVar42 = fVar42 + fVar44;
          fVar44 = fVar32 + fVar44;
          unaff_s15 = in_stack_000000c0._4_4_;
          fVar32 = fVar32 + fVar47;
        }
        uVar46 = *in_stack_000000c8;
        uVar45 = in_stack_000000c8[1];
        if (DAT_08974d8a == '\0') {
          FUN_03a8a718(PTR_DAT_08486860);
          DAT_08974d8a = '\x01';
        }
        uVar35 = **(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8);
        uVar37 = (*(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8))[1];
        if (DAT_015c5bb4 <
            (float)((ulong)uVar45 >> 0x20) * (float)((ulong)uVar37 >> 0x20) +
            (float)uVar45 * (float)uVar37 +
            (float)uVar46 * (float)uVar35 +
            (float)((ulong)uVar46 >> 0x20) * (float)((ulong)uVar35 >> 0x20)) {
          fVar33 = 0.0;
          auVar36._4_12_ = SUB1612(ZEXT816(0),4);
          auVar36._0_4_ = fVar43;
                    /* try { // try from 07d70a04 to 07e70a47 has its CatchHandler @ 07d70968 */
          uVar46 = auVar36._0_8_;
          uVar13 = (ulong)(uint)fStack0000000000000150;
          uVar45 = uVar46;
        }
        else {
          FUN_07c889bc(&stack0x000011a0,*(undefined4 *)(unaff_x22 + 0x19bc),
                       *(undefined4 *)(unaff_x22 + 0x19c0),*(undefined4 *)(unaff_x22 + 0x19c4),
                       *(undefined4 *)(unaff_x22 + 0x19c8),0);
          fVar44 = (fVar32 + fVar42) * 0.5;
          fVar40 = (fVar43 + fStack0000000000000150) * 0.5;
          fVar32 = 0.0;
          auVar36 = ZEXT416((uint)(fStack0000000000000150 - fVar40));
          fVar34 = (float)FUN_07c888bc(&stack0x00000ff0,0);
          fVar34 = fVar44 + fVar34;
          fVar30 = 0.0;
          uVar13 = CONCAT44(fVar32 + 0.0,fVar40 + auVar36._0_4_);
                    /* try { // try from 07d70968 to 07e709c3 has its CatchHandler @ 07d70968
                       catch() { ... } // from try @ 07d70968 with catch @ 07d70968
                       catch() { ... } // from try @ 07d70a04 with catch @ 07d70968
                       catch() { ... } // from try @ 07d70a4c with catch @ 07d70968
                       catch() { ... } // from try @ 07d70a94 with catch @ 07d70968 */
          auVar36 = ZEXT416((uint)(fVar43 - fVar40));
          fVar42 = (float)FUN_07c888bc(&stack0x00000ff0,0);
          fVar42 = fVar44 + fVar42;
          fVar33 = 0.0;
          uVar46 = CONCAT44(fVar30 + 0.0,fVar40 + auVar36._0_4_);
          auVar36 = ZEXT416((uint)(fStack0000000000000150 - fVar40));
          fVar32 = (float)FUN_07c888bc(&stack0x00000ff0,0);
          fVar32 = fVar44 + fVar32;
          fVar30 = 0.0;
          fStack0000000000000150 = fVar40 + auVar36._0_4_;
          fVar33 = fVar33 + 0.0;
                    /* try { // try from 07d709c4 to 07e709cf has its CatchHandler @ 07d70a54 */
          auVar36 = ZEXT416((uint)(fVar43 - fVar40));
          fVar43 = (float)FUN_07c888bc(&stack0x00000ff0,0);
          fVar44 = fVar44 + fVar43;
                    /* try { // try from 07d709dc to 07e70a03 has its CatchHandler @ 07d70a5c */
          unaff_s15 = in_stack_000000c0._4_4_;
          uVar45 = CONCAT44(fVar30 + 0.0,fVar40 + auVar36._0_4_);
        }
        lVar29 = *(long *)(unaff_x19 + 0x30);
        if (lVar29 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
        lVar29 = lVar29 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
        *(float *)(lVar29 + 0x118) = fVar42;
        *(undefined8 *)(lVar29 + 0x11c) = uVar46;
        lVar29 = *(long *)(unaff_x19 + 0x30);
        if (lVar29 == 0) goto LAB_07d72adc;
                    /* try { // try from 07d70a48 to 07e70a4b has its CatchHandler @ 07d70a58 */
                    /* try { // try from 07d70a4c to 07e70a77 has its CatchHandler @ 07d70968 */
        if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07d709c4 with catch @ 07d70a54
                        */
        lVar29 = lVar29 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07d70a48 with catch @ 07d70a58
                        */
        *(float *)(lVar29 + 0x10c) = fVar34;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07d709dc with catch @ 07d70a5c
                        */
        *(ulong *)(lVar29 + 0x110) = uVar13;
        lVar29 = *(long *)(unaff_x19 + 0x30);
        if (lVar29 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
                    /* try { // try from 07d70a78 to 07e70a7b has its CatchHandler @ 07d70a88 */
        lVar29 = lVar29 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
        *(float *)(lVar29 + 0x124) = fVar32;
        *(ulong *)(lVar29 + 0x128) = CONCAT44(fVar33,fStack0000000000000150);
        lVar29 = *(long *)(unaff_x19 + 0x30);
                    /* catch() { ... } // from try @ 07d70a78 with catch @ 07d70a88 */
        if (lVar29 == 0) goto LAB_07d72adc;
                    /* try { // try from 07d70a8c to 07e70a93 has its CatchHandler @ 07d70a9c */
                    /* try { // try from 07d70a94 to 07e70a9f has its CatchHandler @ 07d70968 */
        if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07d70a8c with catch @ 07d70a9c
                        */
        lVar29 = lVar29 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
        *(float *)(lVar29 + 0x130) = fVar44;
        *(undefined8 *)(lVar29 + 0x134) = uVar45;
        lVar29 = *(long *)(unaff_x19 + 0x30);
        if (lVar29 == 0) goto LAB_07d72adc;
        uVar5 = *(uint *)(unaff_x22 + 0x334);
        fVar33 = *(float *)(unaff_x22 + 0x300);
        fVar34 = (float)FUN_07d57ab0(&stack0x00001100,0);
        if (*(uint *)(lVar29 + 0x18) <= uVar5) goto LAB_07d72b20;
        fVar33 = fVar33 + fStack000000000000010c * fVar34;
        if (*(char *)(unaff_x22 + 0xf4) != '\0') {
          fVar33 = (float)(int)(fVar33 + unaff_s15);
        }
        *(float *)(lVar29 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x13c) = fVar33;
        lVar29 = *(long *)(unaff_x19 + 0x30);
        if (lVar29 == 0) goto LAB_07d72adc;
        uVar5 = *(uint *)(unaff_x22 + 0x334);
        fVar34 = *(float *)(unaff_x22 + 0x2e8);
        fVar43 = *(float *)(unaff_x22 + 0x188);
        fVar33 = (float)FUN_07d57ac0(&stack0x00001100,0);
        if (*(uint *)(lVar29 + 0x18) <= uVar5) goto LAB_07d72b20;
        fVar33 = (in_stack_00000120 - fVar34) + fVar43 + fStack000000000000010c * fVar33;
        if (*(char *)(unaff_x22 + 0xf4) != '\0') {
          fVar33 = (float)(int)(fVar33 + unaff_s15);
        }
        *(float *)(lVar29 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x144) = fVar33;
        lVar29 = *(long *)(unaff_x19 + 0x30);
        if (lVar29 == 0) goto LAB_07d72adc;
        uVar5 = *(uint *)(unaff_x22 + 0x334);
        if (*(uint *)(lVar29 + 0x18) <= uVar5) goto LAB_07d72b20;
        lVar29 = lVar29 + 0x20;
        *(float *)(lVar29 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x13c) =
             (fVar32 - fVar42) / ((float)uVar13 - (float)uVar46);
        fVar32 = fStack000000000000010c * (fStack00000000000000f8 + fStack00000000000000ec);
        if (*in_stack_00000168 == '\x01') {
          fVar32 = fVar32 / fStack00000000000000fc;
          fVar33 = (fStack000000000000010c * (fStack00000000000000f4 + fStack00000000000000f0)) /
                   fStack00000000000000fc;
        }
        else {
          fVar33 = fStack000000000000010c * (fStack00000000000000f4 + fStack00000000000000f0);
        }
        uVar8 = *(uint *)(unaff_x22 + 0x338);
        if ((uVar5 != uVar8 & unaff_w24) == 0) {
          fVar43 = *(float *)(unaff_x22 + 0x188);
          fVar32 = fVar32 + fVar43;
          fVar33 = fVar33 + fVar43;
          fVar34 = fVar32;
          fVar42 = fVar33;
          if (fVar43 != 0.0) {
            fVar34 = (fVar32 - fVar43) / *(float *)(unaff_x22 + 0xf0);
            fVar42 = (fVar33 - fVar43) / *(float *)(unaff_x22 + 0xf0);
            if (fVar34 <= fVar32) {
              fVar34 = fVar32;
            }
            if (fVar33 <= fVar42) {
              fVar42 = fVar33;
            }
          }
          lVar29 = lVar29 + (long)(int)uVar5 * (long)(int)unaff_w27;
          fVar43 = fVar34;
          if (fVar34 <= *(float *)(unaff_x22 + 0x348)) {
            fVar43 = *(float *)(unaff_x22 + 0x348);
          }
          fVar44 = fVar42;
          if (*(float *)(unaff_x22 + 0x34c) <= fVar42) {
            fVar44 = *(float *)(unaff_x22 + 0x34c);
          }
          *(float *)(unaff_x22 + 0x348) = fVar43;
          *(float *)(unaff_x22 + 0x34c) = fVar44;
          *(float *)(lVar29 + 300) = fVar34;
          *(float *)(lVar29 + 0x130) = fVar42;
          fVar34 = *(float *)(unaff_x22 + 0x2e8);
          *(float *)(lVar29 + 0x120) = fVar32 - fVar34;
          *(float *)(lVar29 + 0x128) = fVar33 - fVar34;
          *(float *)(unaff_x22 + 900) = fVar33 - fVar34;
          if (*(int *)(unaff_x22 + 0x350) == 0) {
            *(float *)(unaff_x22 + 0x380) = fVar43;
            if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
            fVar33 = *(float *)(unaff_x22 + 0x37c);
            fVar34 = (float)FUN_07d532c4(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
            fStack00000000000000fc = (fStack000000000000010c * fVar34) / fStack00000000000000fc;
            if (fVar33 <= fStack00000000000000fc) {
              fVar33 = fStack00000000000000fc;
            }
            fVar34 = *(float *)(unaff_x22 + 0x2e8);
            *(float *)(unaff_x22 + 0x37c) = fVar33;
          }
          if (fVar34 == 0.0) {
            fVar33 = *(float *)(unaff_x22 + 0x19d0);
            if (*(float *)(unaff_x22 + 0x19d0) <= fVar32) {
              fVar33 = fVar32;
            }
            *(float *)(unaff_x22 + 0x19d0) = fVar33;
          }
        }
        else {
          lVar29 = lVar29 + (long)(int)uVar5 * (long)(int)unaff_w27;
          uVar45 = *(undefined8 *)(unaff_x22 + 0x348);
          *(undefined8 *)(lVar29 + 300) = uVar45;
          fVar34 = *(float *)(unaff_x22 + 0x2e8);
          fVar32 = (float)((ulong)uVar45 >> 0x20) - fVar34;
          *(float *)(lVar29 + 0x120) = (float)uVar45 - fVar34;
          *(float *)(lVar29 + 0x128) = fVar32;
          *(float *)(unaff_x22 + 900) = fVar32;
        }
        lVar29 = *(long *)(unaff_x19 + 0x30);
        if (lVar29 == 0) goto LAB_07d72adc;
        uVar10 = *unaff_x25;
        if (*(uint *)(lVar29 + 0x18) <= uVar10) goto LAB_07d72b20;
        lVar29 = lVar29 + (long)(int)uVar10 * (long)(int)unaff_w27;
        *(undefined1 *)(lVar29 + 0x194) = 0;
        uVar18 = *unaff_x21;
        if (uVar18 == 9) {
LAB_07d70d34:
          *(undefined1 *)(lVar29 + 0x194) = 1;
          pfVar20 = in_stack_000000a0;
          pfVar21 = in_stack_000000b8;
          if (in_stack_00000160._4_4_ == unaff_w26) {
            lVar29 = *(long *)(unaff_x19 + 0x48);
            if (lVar29 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
            lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
            pfVar21 = (float *)(lVar29 + 100);
            pfVar20 = (float *)(lVar29 + 0x68);
          }
          fVar33 = *pfVar21;
          fVar34 = *pfVar20;
          fVar32 = *(float *)(unaff_x22 + 0x368);
          fVar43 = 0.0;
          fVar42 = *(float *)(unaff_x22 + 0x300);
          fStack0000000000000100 = (fStack00000000000000b4 - fVar33) - fVar34;
          bVar3 = true;
          if ((fVar32 <= fStack0000000000000100) && (bVar3 = false, !NAN(fVar32))) {
            bVar3 = fVar32 == -1.0;
          }
          if (!bVar3) {
            fStack0000000000000100 = fVar32;
          }
          fVar32 = 0.0;
          if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
            fVar32 = (float)FUN_07d53598(&stack0x00001110,0);
            uVar18 = *unaff_x21;
          }
          if (uVar18 != 0xad) {
            fStack00000000000000e8 = fStack000000000000010c;
          }
          if ((0.0 < *(float *)(unaff_x22 + 0x2e8)) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
            fVar43 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
          }
          uVar10 = *unaff_x25;
          if (fStack00000000000000a8 <
              (*(float *)(unaff_x22 + 0x380) -
              (*(float *)(unaff_x22 + 0x34c) - *(float *)(unaff_x22 + 0x2e8))) + fVar43) {
            if (*(int *)(unaff_x22 + 0x35c) == -1) {
              *(uint *)(unaff_x22 + 0x35c) = uVar10;
            }
            iVar6 = *(int *)(in_stack_00000140 + 100);
            if (iVar6 != 1) {
              if ((iVar6 != 6) && (iVar6 != 3)) goto LAB_07d70fbc;
LAB_07d7102c:
              in_stack_0000112c = FUN_07d79b5c();
              goto LAB_07d71040;
            }
            if (*(int *)(unaff_x22 + 0x350) < 1) goto LAB_07d70fbc;
            iVar6 = FUN_059137dc(unaff_x22 + 0x15f0,
                                 *(undefined8 *)
                                  Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo);
            if (iVar6 == 0) {
              unaff_x25[0] = 0;
              unaff_x25[1] = 0;
              in_stack_0000112c = 0xffffffff;
              in_stack_00001190 = DAT_015c3d00;
              goto LAB_07d72ac8;
            }
            Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                      (&stack0x000011a0,unaff_x22 + 0x15f0,
                       *(undefined8 *)
                        Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                      );
            memcpy(&stack0x00000c58,&stack0x000011a0,0x398);
            iVar9 = FUN_07d79b5c();
            iVar6 = *(int *)(unaff_x22 + 0x334);
LAB_07d712d0:
            iStack0000000000000108 = iStack0000000000000108 + 1;
            *(int *)(unaff_x22 + 0x334) = iVar6 + -1;
            in_stack_0000112c = iVar9 - 1;
            in_stack_00001190 = CONCAT44(0x2026,iVar6 + -1);
            goto LAB_07d72ac8;
          }
LAB_07d70fbc:
          uVar18 = uVar10;
          if ((uStack00000000000000d8 &
              fStack0000000000000100 <
              ABS(fVar42) + fVar32 * (1.0 - *(float *)(unaff_x22 + 0x15a4)) * fStack00000000000000e8
              ) == 1) {
            if (((iStack00000000000000b0 == 0) || (iStack00000000000000b0 == 3)) ||
               (uVar10 == *(uint *)(unaff_x22 + 0x338))) {
              iVar6 = *(int *)(in_stack_00000140 + 100);
              if (iVar6 == 1) {
                iVar6 = FUN_059137dc(unaff_x22 + 0x15f0,
                                     *(undefined8 *)
                                      Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo
                                    );
                if (iVar6 != 0) {
                  Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                            (&stack0x000011a0,unaff_x22 + 0x15f0,
                             *(undefined8 *)
                              Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                            );
                  memcpy(&stack0x00000528,&stack0x000011a0,0x398);
                  iVar9 = FUN_07d79b5c();
LAB_07d712c4:
                  iVar6 = *(int *)(unaff_x22 + 0x334);
                  goto LAB_07d712d0;
                }
LAB_07d72aac:
                unaff_x25[0] = 0;
                unaff_x25[1] = 0;
                in_stack_0000112c = 0xffffffff;
                in_stack_00001190 = DAT_015c3d00;
                goto LAB_07d72ac8;
              }
              if (iVar6 == 6) {
                in_stack_0000112c = FUN_07d79b5c();
                uVar10 = *(uint *)(unaff_x22 + 0x334);
                goto LAB_07d71040;
              }
              if (iVar6 == 3) goto LAB_07d7102c;
              goto LAB_07d7166c;
            }
            in_stack_0000112c = FUN_07d79b5c();
            fVar32 = *(float *)(unaff_x22 + 0x2ec);
            if (fVar32 == DAT_015c55ac) {
              lVar29 = *(long *)(unaff_x19 + 0x30);
              if (lVar29 == 0) goto LAB_07d72adc;
              uVar18 = *unaff_x25;
              if (*(uint *)(lVar29 + 0x18) <= uVar18) goto LAB_07d72b20;
              fVar42 = *(float *)(unaff_x22 + 0x2e8);
              fVar32 = 0.0;
              if ((0.0 < fVar42) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
                fVar32 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
              }
              fVar32 = *(float *)(lVar29 + (long)(int)uVar18 * (long)(int)unaff_w27 + 0x14c) +
                       (fVar32 - *(float *)(unaff_x22 + 0x34c)) +
                       in_stack_00000020._4_4_ *
                       (fStack0000000000000050 + *(float *)(unaff_x22 + 0x15bc));
            }
            else {
              *(undefined1 *)(unaff_x22 + 0x2f0) = 1;
              lVar29 = *(long *)(unaff_x19 + 0x30);
              if (lVar29 == 0) goto LAB_07d72adc;
              fVar42 = *(float *)(unaff_x22 + 0x2e8);
              uVar18 = *(uint *)(unaff_x22 + 0x334);
            }
            if ((*(uint *)(lVar29 + 0x18) <= uVar18) ||
               (uVar28 = uVar18 - 1, *(uint *)(lVar29 + 0x18) <= uVar28)) goto LAB_07d72b20;
            piVar22 = (int *)(lVar29 + 0x20 + (long)(int)uVar18 * (long)(int)unaff_w27);
            fVar32 = (fStack0000000000000014 + fVar32 + *(float *)(unaff_x22 + 0x380) + fVar42) -
                     (float)piVar22[0x4c];
            if ((*(int *)(lVar29 + 0x20 + (long)(int)uVar28 * (long)(int)unaff_w27) != 0xad ||
                 (in_stack_00000038._4_4_ & 1) != 0) ||
               ((*(int *)(in_stack_00000140 + 100) != 0 && (fStack00000000000000a8 <= fVar32)))) {
              if (*piVar22 == 0xad) {
                in_stack_00000038._4_4_ = 1;
              }
              else {
                if ((((in_stack_00000060._4_4_ & 1) != 0) &&
                    (iVar6 = *(int *)(unaff_x22 + 0x11f0), iVar6 != -1)) &&
                   (iVar6 != in_stack_00000008._4_4_)) {
                  in_stack_0000112c = FUN_07d79b5c();
                  lVar29 = *(long *)(unaff_x19 + 0x30);
                  if (lVar29 == 0) goto LAB_07d72adc;
                  uVar18 = *unaff_x25;
                  uVar28 = uVar18 - 1;
                  if (*(uint *)(lVar29 + 0x18) <= uVar28) goto LAB_07d72b20;
                  in_stack_00000008._4_4_ = iVar6;
                  if (*(int *)(lVar29 + (long)(int)uVar28 * (long)(int)unaff_w27 + 0x20) == 0xad) {
                    in_stack_00000038._4_4_ = 0;
                    *unaff_x25 = uVar28;
                    in_stack_0000112c = in_stack_0000112c - 1;
                    in_stack_00001190 = CONCAT44(0x2d,uVar28);
                    goto LAB_07d72ac8;
                  }
                }
                if (fStack00000000000000a8 < fVar32) {
                  if (*(int *)(unaff_x22 + 0x35c) == -1) {
                    *(uint *)(unaff_x22 + 0x35c) = uVar18;
                  }
                  iVar6 = *(int *)(in_stack_00000140 + 100);
                  in_stack_00000038._4_4_ = 0;
                  if (iVar6 < 3) {
                    if (iVar6 != 0) {
                      if (iVar6 == 1) {
                        iVar6 = FUN_059137dc(unaff_x22 + 0x15f0,
                                             *(undefined8 *)
                                              Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo
                                            );
                        if (iVar6 == 0) {
                          in_stack_00000038._4_4_ = 0;
                          goto LAB_07d72aac;
                        }
                        Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                                  (&stack0x000011a0,unaff_x22 + 0x15f0,
                                   *(undefined8 *)
                                    Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                                  );
                        memcpy(&stack0x000008c0,&stack0x000011a0,0x398);
                        iVar9 = FUN_07d79b5c();
                        in_stack_00000038._4_4_ = 0;
                        goto LAB_07d712c4;
                      }
                      if (iVar6 != 2) goto LAB_07d7166c;
                    }
LAB_07d729d0:
                    FUN_07d7bce4();
                    in_stack_00000038._4_4_ = 0;
                    in_stack_00000060._4_4_ = 1;
                    uStack0000000000000058 = 1;
                  }
                  else {
                    if (iVar6 == 3) {
                      in_stack_0000112c = FUN_07d79b5c();
                      in_stack_00000038._4_4_ = 0;
                    }
                    else {
                      if (iVar6 != 6) {
                        if (iVar6 != 4) goto LAB_07d7166c;
                        goto LAB_07d729d0;
                      }
                      in_stack_00000038._4_4_ = 0;
                      uVar10 = uVar18;
                    }
LAB_07d71040:
                    in_stack_00001190 = CONCAT44(3,uVar10);
                  }
                }
                else {
                  FUN_07d7bce4();
                  in_stack_00000038._4_4_ = 0;
                  in_stack_00000060._4_4_ = 1;
                  uStack0000000000000058 = 1;
                }
              }
            }
            else {
              in_stack_00000038._4_4_ = 0;
              *unaff_x25 = uVar28;
              in_stack_0000112c = in_stack_0000112c - 1;
              in_stack_00001190 = CONCAT44(0x2d,uVar28);
            }
            goto LAB_07d72ac8;
          }
LAB_07d7166c:
          if ((unaff_w24 & 1) == 0) {
            if (*unaff_x21 == 0xad) {
              lVar29 = *(long *)(unaff_x19 + 0x30);
              if (lVar29 != 0) {
                if (*(uint *)(lVar29 + 0x18) <= uVar18) goto LAB_07d72b20;
                *(undefined1 *)(lVar29 + (long)(int)uVar18 * (long)(int)unaff_w27 + 0x194) = 0;
                goto LAB_07d717bc;
              }
              goto LAB_07d72adc;
            }
            if (*in_stack_00000168 == '\x02') {
              FUN_07d7a738();
            }
            else if (*in_stack_00000168 == '\x01') {
              FUN_07d79ee4();
            }
            uVar10 = *unaff_x25;
            if ((uStack0000000000000058 & 1) != 0) {
              *(uint *)(unaff_x22 + 0x340) = uVar10;
            }
            *(uint *)(unaff_x22 + 0x344) = uVar10;
            *(int *)(unaff_x22 + 0x354) = *(int *)(unaff_x22 + 0x354) + 1;
            lVar29 = *(long *)(unaff_x19 + 0x48);
            if (lVar29 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
            uStack0000000000000058 = 0;
            lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
            *(float *)(lVar29 + 100) = fVar33;
            *(float *)(lVar29 + 0x68) = fVar34;
          }
          else {
            lVar29 = *(long *)(unaff_x19 + 0x30);
            if (lVar29 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar29 + 0x18) <= uVar18) goto LAB_07d72b20;
            *(undefined1 *)(lVar29 + (long)(int)uVar18 * (long)(int)unaff_w27 + 0x194) = 0;
            lVar29 = *(long *)(unaff_x19 + 0x48);
            if (lVar29 == 0) goto LAB_07d72adc;
            uVar10 = *(uint *)(lVar29 + 0x18);
            if (uVar10 <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
            lVar29 = lVar29 + 0x20;
            lVar25 = lVar29 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
            iVar6 = *(int *)(lVar25 + 0x10) + 1;
            *(int *)(lVar25 + 0x10) = iVar6;
            uVar18 = *(uint *)(unaff_x22 + 0x350);
            *(int *)(unaff_x22 + 0x358) = iVar6;
            if (uVar10 <= uVar18) goto LAB_07d72b20;
            lVar25 = lVar29 + (long)(int)uVar18 * 0x60;
            *(float *)(lVar25 + 0x44) = fVar33;
            *(float *)(lVar25 + 0x48) = fVar34;
            *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
            if (*unaff_x21 == 0xa0) {
              *(int *)(lVar29 + (long)(int)uVar18 * 0x60) =
                   *(int *)(lVar29 + (long)(int)uVar18 * 0x60) + 1;
            }
          }
        }
        else {
          if (iStack000000000000005c == 2) {
            if ((unaff_w24 & 1) == 0 && uVar18 != 0x200b) goto LAB_07d70e7c;
            goto LAB_07d70d34;
          }
          if ((unaff_w24 & 1) == 0) {
LAB_07d70e7c:
            if ((uVar18 != 3) && (uVar18 != 0x200b)) {
              if (uVar18 != 0xad) goto LAB_07d70d34;
              goto LAB_07d70e98;
            }
          }
          else {
LAB_07d70e98:
            if (uVar18 == 0xad && (in_stack_00000038._4_4_ & 1) == 0) goto LAB_07d70d34;
          }
          if (*in_stack_00000168 == '\x02') goto LAB_07d70d34;
          if (*(int *)(in_stack_00000140 + 100) == 6) {
            if ((uVar18 & 0xfffffffe) != 10) {
              if ((0x22 < uVar18 - 0x2007) ||
                 ((1L << ((ulong)(uVar18 - 0x2007) & 0x3f) & 0x600000001U) == 0)) goto LAB_07d713e4;
              goto LAB_07d71420;
            }
            fVar32 = 0.0;
            if ((0.0 < fVar34) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
              fVar32 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
            }
            if ((*(float *)(unaff_x22 + 0x380) - (*(float *)(unaff_x22 + 0x34c) - fVar34)) + fVar32
                <= fStack00000000000000a8) goto LAB_07d71228;
            if (*(int *)(unaff_x22 + 0x35c) == -1) {
              *(uint *)(unaff_x22 + 0x35c) = uVar10;
            }
            in_stack_0000112c = FUN_07d79b5c();
            goto LAB_07d71040;
          }
LAB_07d71228:
          if ((int)uVar18 < 0x2007) {
            if (uVar18 != 10) {
LAB_07d713e4:
              if ((uVar18 != 0xb) && (uVar18 != 0xa0)) goto LAB_07d713f4;
              goto LAB_07d71420;
            }
LAB_07d71440:
            lVar29 = *(long *)(unaff_x19 + 0x48);
            if (lVar29 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
            lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
            *(int *)(lVar29 + 0x30) = *(int *)(lVar29 + 0x30) + 1;
            *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
            uVar18 = *unaff_x21;
LAB_07d7147c:
            if (uVar18 == 0xa0) {
              lVar29 = *(long *)(unaff_x19 + 0x48);
              if (lVar29 == 0) goto LAB_07d72adc;
              if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
              lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
              *(int *)(lVar29 + 0x20) = *(int *)(lVar29 + 0x20) + 1;
            }
          }
          else {
            if ((0x22 < uVar18 - 0x2007) ||
               ((1L << ((ulong)(uVar18 - 0x2007) & 0x3f) & 0x600000001U) == 0)) {
LAB_07d713f4:
              if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar13 = FUN_066bcb80(uVar18,0);
              uVar18 = *unaff_x21;
              if ((uVar13 & 1) != 0) goto LAB_07d71420;
              goto LAB_07d7147c;
            }
LAB_07d71420:
            if (((uVar18 != 0xad) && (uVar18 != 0x200b)) && (uVar18 != 0x2060)) goto LAB_07d71440;
          }
        }
LAB_07d717bc:
        if ((in_stack_00000160._4_4_ == unaff_w26) && (*(int *)(in_stack_00000140 + 100) == 1)) {
          if (*unaff_x21 == 0x2d) {
LAB_07d717ec:
            if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
            fVar33 = *(float *)(unaff_x22 + 0xf8);
            fVar32 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
            if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
            fVar34 = (float)FUN_07d53294(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
            lVar29 = *(long *)(unaff_x22 + 0x19f8);
            if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto LAB_07d72adc;
            fVar43 = *(float *)(unaff_x22 + 0xf0);
            fVar44 = *(float *)(lVar29 + 0x2c);
            fVar42 = (float)FUN_07d5378c(*(long *)(lVar29 + 0x20),0);
            uVar45 = *(undefined8 *)in_stack_000000b8;
            fVar42 = (fVar33 / fVar32) * fVar34 * fVar43 * fVar44 * fVar42;
            if ((*unaff_x21 == 10) && (*(int *)(unaff_x22 + 0x334) != *(int *)(unaff_x22 + 0x338)))
            {
              lVar29 = *(long *)(unaff_x19 + 0x30);
              if (lVar29 == 0) goto LAB_07d72adc;
              uVar10 = *(int *)(unaff_x22 + 0x334) - 1;
              if (*(uint *)(lVar29 + 0x18) <= uVar10) goto LAB_07d72b20;
              if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
              fVar33 = *(float *)(lVar29 + (long)(int)uVar10 * (long)(int)unaff_w27 + 0x60);
              fVar32 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
              if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
              fVar34 = (float)FUN_07d53294(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
              lVar29 = *(long *)(unaff_x22 + 0x19f8);
              if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto LAB_07d72adc;
              fVar43 = *(float *)(unaff_x22 + 0xf0);
              fVar44 = *(float *)(lVar29 + 0x2c);
              fVar42 = (float)FUN_07d5378c(*(long *)(lVar29 + 0x20),0);
              lVar29 = *(long *)(unaff_x19 + 0x48);
              if (lVar29 == 0) goto LAB_07d72adc;
              if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
              uVar45 = *(undefined8 *)
                        (lVar29 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60 + 100);
              fVar42 = (fVar33 / fVar32) * fVar34 * fVar43 * fVar44 * fVar42;
            }
            fVar32 = 0.0;
            fVar33 = *(float *)(unaff_x22 + 0x300);
            if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
              if ((*(long *)(unaff_x22 + 0x19f8) == 0) ||
                 (lVar29 = *(long *)(*(long *)(unaff_x22 + 0x19f8) + 0x20), lVar29 == 0))
              goto LAB_07d72adc;
              FUN_07d53750(&stack0x000011a0,lVar29,0);
              fVar32 = (float)FUN_07d53598(&stack0x000010e0,0);
            }
            fVar34 = (fStack00000000000000b4 - (float)uVar45) - (float)((ulong)uVar45 >> 0x20);
            fVar43 = *(float *)(unaff_x22 + 0x368);
            bVar3 = true;
            if ((fVar43 <= fVar34) && (bVar3 = false, !NAN(fVar43))) {
              bVar3 = fVar43 == -1.0;
            }
            if (!bVar3) {
              fVar34 = fVar43;
            }
            if (ABS(fVar33) + fVar42 * fVar32 * (1.0 - *(float *)(unaff_x22 + 0x15a4)) < fVar34) {
              FUN_07d79804();
              memcpy(&stack0x000011a0,(void *)(unaff_x22 + 0xac0),0x398);
              FUN_05913b64(unaff_x22 + 0x15f0,&stack0x000011a0,
                           *(undefined8 *)
                            Unity_Services_CloudSave_Internal_Data_GetProtectedItemsRequest_<>c_TypeInfo
                          );
            }
          }
        }
        else if (*(int *)(in_stack_00000140 + 100) == 1) goto LAB_07d717ec;
        lVar29 = *(long *)(unaff_x19 + 0x30);
        if (lVar29 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x22 + 0x334)) goto LAB_07d72b20;
        uVar10 = *(uint *)(unaff_x22 + 0x350);
        *(uint *)(lVar29 + (long)(int)*(uint *)(unaff_x22 + 0x334) * (long)(int)unaff_w27 + 100) =
             uVar10;
        if ((in_stack_00000160._4_4_ == unaff_w26) ||
           ((*unaff_x21 < 0xe && ((1 << (ulong)(*unaff_x21 & 0x1f) & 0x2c00U) != 0)))) {
          lVar29 = *(long *)(unaff_x19 + 0x48);
          if (lVar29 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar29 + 0x18) <= uVar10) goto LAB_07d72b20;
          if (*(int *)(lVar29 + (long)(int)uVar10 * 0x60 + 0x24) == 1) goto LAB_07d71a94;
        }
        else {
          lVar29 = *(long *)(unaff_x19 + 0x48);
          if (lVar29 == 0) goto LAB_07d72adc;
LAB_07d71a94:
          if (*(uint *)(lVar29 + 0x18) <= uVar10) goto LAB_07d72b20;
          *(undefined4 *)(lVar29 + (long)(int)uVar10 * 0x60 + 0x6c) =
               *(undefined4 *)(unaff_x22 + 0x160);
        }
        uVar10 = *unaff_x21;
        if (uVar10 != 0x200b) {
          if (uVar10 == 9) {
            if (*in_stack_00000148 == 0) goto LAB_07d72adc;
            fVar32 = (float)FUN_07d53334(*in_stack_00000148 + 0xb0,0);
            if (*in_stack_00000148 == 0) goto LAB_07d72adc;
            bVar4 = FUN_07d617d8(*in_stack_00000148,0);
            fVar34 = *(float *)(unaff_x22 + 0x300);
            cVar16 = *(char *)(unaff_x22 + 0xf4);
            fVar33 = fStack000000000000010c * fVar32 * (float)bVar4;
            fVar32 = fVar33 * (float)(int)(fVar34 / fVar33);
            if (fVar32 <= fVar34) {
              fVar32 = fVar34 + fVar33;
            }
          }
          else {
            fVar32 = *(float *)(unaff_x22 + 0x2f8);
            if (fVar32 == 0.0) {
              fVar33 = *(float *)(unaff_x22 + 0x300);
              if (*(char *)(in_stack_00000140 + 0x82) != '\0') {
                fVar32 = (float)FUN_07d57ad0(&stack0x00001100,0);
                if (*in_stack_00000148 != 0) {
                  fVar34 = (float)FUN_07d61798(*in_stack_00000148,0);
                  cVar16 = *(char *)(unaff_x22 + 0xf4);
                  fVar33 = fVar33 - (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                                    (*(float *)(unaff_x22 + 0x2f4) +
                                    fStack000000000000010c * fVar32 +
                                    fStack00000000000000dc *
                                    (fStack00000000000000d0 + fStack00000000000000d4 + fVar34));
                  if (cVar16 != '\0') {
                    fVar33 = (float)(int)(fVar33 + unaff_s15);
                  }
                  *(float *)(unaff_x22 + 0x300) = fVar33;
                  if (((unaff_w24 & 1) == 0) && (*unaff_x21 != 0x200b)) goto LAB_07d71ca8;
                  fVar32 = fVar33 - fStack00000000000000dc * *(float *)(in_stack_00000140 + 0x90);
                  goto FUN_07d71c94;
                }
                goto LAB_07d72adc;
              }
              fVar32 = (float)FUN_07d53598(&stack0x00001110,0);
              fVar42 = *(float *)(unaff_x22 + 0x19b0);
              fVar34 = (float)FUN_07d57ad0(&stack0x00001100,0);
              if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
              fVar43 = (float)FUN_07d61798(*(long *)(unaff_x22 + 0x68),0);
              fVar33 = fVar33 + (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                                (*(float *)(unaff_x22 + 0x2f4) +
                                fStack000000000000010c * (fVar32 * fVar42 + fVar34) +
                                fStack00000000000000dc *
                                (fStack00000000000000d0 + fStack00000000000000d4 + fVar43));
            }
            else {
              if (((*(char *)(unaff_x22 + 0x2fc) != '\0') && (uVar10 < 0x3b)) &&
                 ((1L << ((ulong)uVar10 & 0x3f) & 0x400500000000000U) != 0)) {
                fVar32 = fVar32 * 0.5;
              }
              if (*in_stack_00000148 == 0) goto LAB_07d72adc;
              fVar33 = *(float *)(unaff_x22 + 0x300);
              fVar34 = (float)FUN_07d61798(*in_stack_00000148,0);
              fVar33 = fVar33 + (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                                (*(float *)(unaff_x22 + 0x2f4) +
                                (fVar32 - unaff_s13) +
                                fStack00000000000000dc * (fStack00000000000000d4 + fVar34));
            }
            cVar16 = *(char *)(unaff_x22 + 0xf4);
            if (cVar16 != '\0') {
              fVar33 = (float)(int)(fVar33 + unaff_s15);
            }
            *(float *)(unaff_x22 + 0x300) = fVar33;
            if (((unaff_w24 & 1) == 0) && (*unaff_x21 != 0x200b)) goto LAB_07d71ca8;
            fVar32 = fVar33 + fStack00000000000000dc * *(float *)(in_stack_00000140 + 0x90);
          }
FUN_07d71c94:
          if (cVar16 != '\0') {
            fVar32 = (float)(int)(fVar32 + unaff_s15);
          }
          *(float *)(unaff_x22 + 0x300) = fVar32;
        }
LAB_07d71ca8:
        lVar29 = *(long *)(unaff_x19 + 0x30);
        if (lVar29 == 0) goto LAB_07d72adc;
        uVar10 = *unaff_x25;
        uVar18 = (uint)*(undefined8 *)(lVar29 + 0x18);
        if (uVar18 <= uVar10) goto LAB_07d72b20;
        *(undefined4 *)(lVar29 + (long)(int)uVar10 * (long)(int)unaff_w27 + 0x158) =
             *(undefined4 *)(unaff_x22 + 0x300);
        uVar28 = *unaff_x21;
        if ((int)uVar28 < 0xd) {
          if ((uVar28 - 10 < 2) || (uVar28 == 3)) goto LAB_07d71d54;
LAB_07d71d38:
          if ((uVar28 == 0x2d && in_stack_00000160._4_4_ == unaff_w26) ||
             (uVar10 == uStack000000000000004c)) goto LAB_07d71d54;
          goto LAB_07d72314;
        }
        if (uVar28 != 0x2028) {
          if (uVar28 != 0xd) goto LAB_07d71d38;
          fVar32 = *(float *)(unaff_x22 + 0x308) + 0.0;
          if (*(char *)(unaff_x22 + 0xf4) != '\0') {
            fVar32 = (float)(int)(fVar32 + unaff_s15);
          }
          *(float *)(unaff_x22 + 0x300) = fVar32;
          if (uVar10 != uStack000000000000004c) {
            uVar28 = 0xd;
            goto LAB_07d72314;
          }
        }
LAB_07d71d54:
        if (0.0 < *(float *)(unaff_x22 + 0x2e8)) {
          fVar32 = *(float *)(unaff_x22 + 0x348);
          fVar33 = *(float *)(unaff_x22 + 0x15b8);
          if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          fVar32 = fVar32 - fVar33;
          if ((fStack0000000000000054 < ABS(fVar32)) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
            uVar31 = *(undefined4 *)(unaff_x22 + 0x338);
            uVar7 = *(undefined4 *)(unaff_x22 + 0x334);
            if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4)
                == 0) {
              thunk_FUN_03ae8be4();
            }
            FUN_07d8f610(uVar31,uVar7);
            fVar33 = fVar32 + *(float *)(unaff_x22 + 0x2e8);
            *(float *)(unaff_x22 + 900) = *(float *)(unaff_x22 + 900) - fVar32;
            if (*(char *)(unaff_x22 + 0xf4) != '\0') {
              fVar33 = (float)(int)(fVar33 + unaff_s15);
            }
            *(float *)(unaff_x22 + 0x2e8) = fVar33;
            if (*(int *)(unaff_x22 + 0xae8) == *(int *)(unaff_x22 + 0x350)) {
              Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                        (&stack0x00000170,unaff_x22 + 0x15f0,
                         *(undefined8 *)
                          Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                        );
              memcpy((void *)(unaff_x22 + 0xac0),&stack0x00000170,0x398);
              thunk_FUN_03afed3c(unaff_x22 + 0xb38,0);
              *(float *)(unaff_x22 + 0xb00) = fVar32 + *(float *)(unaff_x22 + 0xb00);
              *(float *)(unaff_x22 + 0xb34) = fVar32 + *(float *)(unaff_x22 + 0xb34);
              memcpy(&stack0x000011a0,(void *)(unaff_x22 + 0xac0),0x398);
              FUN_05913b64(unaff_x22 + 0x15f0,&stack0x000011a0,
                           *(undefined8 *)
                            Unity_Services_CloudSave_Internal_Data_GetProtectedItemsRequest_<>c_TypeInfo
                          );
            }
          }
        }
        fVar33 = *(float *)(unaff_x22 + 0x2e8);
        fVar34 = *(float *)(unaff_x22 + 0x34c) - fVar33;
        fVar32 = *(float *)(unaff_x22 + 900);
        if (fVar34 <= *(float *)(unaff_x22 + 900)) {
          fVar32 = fVar34;
        }
        fVar42 = *(float *)(unaff_x22 + 0x348);
        *(float *)(unaff_x22 + 900) = fVar32;
        if (in_stack_0000119c == '\0') {
          *in_stack_00000040 = fVar32;
        }
        lVar29 = *(long *)(unaff_x19 + 0x48);
        if (lVar29 == 0) goto LAB_07d72adc;
        uVar10 = *(uint *)(unaff_x22 + 0x350);
        if (*(uint *)(lVar29 + 0x18) <= uVar10) goto LAB_07d72b20;
        lVar11 = lVar29 + 0x20 + (long)(int)uVar10 * 0x60;
        uVar18 = *(uint *)(unaff_x22 + 0x338);
        *(uint *)(lVar11 + 0x18) = uVar18;
        lVar25 = 0x338;
        if ((int)uVar18 <= *(int *)(unaff_x22 + 0x340)) {
          lVar25 = 0x340;
        }
        uVar23 = *(uint *)(unaff_x22 + lVar25);
        *(uint *)(unaff_x22 + 0x340) = uVar23;
        *(uint *)(lVar11 + 0x1c) = uVar23;
        uVar1 = *(uint *)(unaff_x22 + 0x334);
        *(uint *)(unaff_x22 + 0x33c) = uVar1;
        *(uint *)(lVar11 + 0x20) = uVar1;
        uVar28 = *(uint *)(unaff_x22 + 0x340);
        if ((int)uVar23 <= (int)*(uint *)(unaff_x22 + 0x344)) {
          uVar28 = *(uint *)(unaff_x22 + 0x344);
        }
        *(uint *)(unaff_x22 + 0x344) = uVar28;
        *(uint *)(lVar11 + 0x24) = uVar28;
        lVar25 = *(long *)(unaff_x19 + 0x30);
        uVar19 = uVar28;
        if ((*(uint *)(in_stack_00000140 + 0x98) & 0xfffffffe) == 2) {
          if (lVar25 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar25 + 0x18) <= uVar1) goto LAB_07d72b20;
          if (*(float *)(lVar25 + (long)(int)uVar1 * (long)(int)unaff_w27 + 0x158) != 0.0) {
            uVar23 = uVar18;
            uVar19 = uVar1;
          }
        }
        lVar29 = lVar29 + 0x20 + (long)(int)uVar10 * 0x60;
        *(uint *)(lVar29 + 4) = (uVar1 - uVar18) + 1;
        iVar6 = *(int *)(in_stack_00000068 + 0x60);
        *(int *)(lVar29 + 8) = iVar6;
        *(uint *)(lVar29 + 0xc) = (uVar28 - (uVar18 + iVar6)) + 1;
        if (lVar25 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar25 + 0x18) <= uVar23) goto LAB_07d72b20;
        *(undefined4 *)(lVar29 + 0x50) =
             *(undefined4 *)(lVar25 + (long)(int)uVar23 * (long)(int)unaff_w27 + 0x118);
        *(float *)(lVar29 + 0x54) = fVar34;
        lVar29 = *(long *)(unaff_x19 + 0x48);
        if (lVar29 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        lVar25 = *(long *)(unaff_x19 + 0x30);
        if (lVar25 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar25 + 0x18) <= uVar19) goto LAB_07d72b20;
        fVar42 = fVar42 - fVar33;
        lVar29 = lVar29 + 0x20 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
        uVar31 = *(undefined4 *)(lVar25 + (long)(int)uVar19 * (long)(int)unaff_w27 + 0x124);
        *(float *)(lVar29 + 0x5c) = fVar42;
        *(undefined4 *)(lVar29 + 0x58) = uVar31;
        lVar29 = *(long *)(unaff_x19 + 0x48);
        if (lVar29 == 0) goto LAB_07d72adc;
        uVar18 = *(uint *)(unaff_x22 + 0x350);
        uVar10 = *(uint *)(lVar29 + 0x18);
        if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
          if (uVar10 <= uVar18) goto LAB_07d72b20;
          lVar25 = lVar29 + (long)(int)uVar18 * 0x60;
          fVar32 = *(float *)(lVar25 + 0x78) - fStack000000000000010c * in_stack_00000138._4_4_;
        }
        else {
          if (uVar10 <= uVar18) goto LAB_07d72b20;
          lVar11 = *(long *)(unaff_x19 + 0x30);
          if (lVar11 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar11 + 0x18) <= uVar19) goto LAB_07d72b20;
          lVar25 = lVar29 + (long)(int)uVar18 * 0x60;
          fVar32 = *(float *)(lVar11 + (long)(int)uVar19 * (long)(int)unaff_w27 + 0x158);
        }
        *(float *)(lVar25 + 0x48) = fVar32;
        if (uVar10 <= uVar18) goto LAB_07d72b20;
        lVar25 = lVar29 + 0x20 + (long)(int)uVar18 * 0x60;
        *(float *)(lVar25 + 0x40) = fStack0000000000000100;
        if (*(int *)(lVar25 + 4) == 1) {
          *(undefined4 *)(lVar29 + 0x20 + (long)(int)uVar18 * 0x60 + 0x4c) =
               *(undefined4 *)(unaff_x22 + 0x160);
        }
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fVar32 = (float)FUN_07d61798(*in_stack_00000148,0);
        lVar29 = *(long *)(unaff_x19 + 0x30);
        if (lVar29 == 0) goto LAB_07d72adc;
        uVar10 = *(uint *)(unaff_x22 + 0x344);
        uVar18 = (uint)*(undefined8 *)(lVar29 + 0x18);
        if (uVar18 <= uVar10) goto LAB_07d72b20;
        uVar28 = *(uint *)(unaff_x22 + 0x350);
        lVar25 = *(long *)(unaff_x19 + 0x48);
        fVar32 = (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                 (*(float *)(unaff_x22 + 0x2f4) +
                 fStack00000000000000dc * (fStack00000000000000d0 + fStack00000000000000d4 + fVar32)
                 );
        if (*(char *)(lVar29 + 0x20 + (long)(int)uVar10 * (long)(int)unaff_w27 + 0x174) == '\0') {
          if (lVar25 == 0) goto LAB_07d72adc;
          uVar10 = *(uint *)(unaff_x22 + 0x33c);
          if (uVar18 <= uVar10) goto LAB_07d72b20;
        }
        else if (lVar25 == 0) goto LAB_07d72adc;
        bVar3 = *(uint *)(lVar25 + 0x18) <= uVar28;
        if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
          if (bVar3) goto LAB_07d72b20;
          fVar32 = -fVar32;
        }
        else if (bVar3) goto LAB_07d72b20;
        *(float *)(lVar25 + (long)(int)uVar28 * 0x60 + 0x5c) =
             *(float *)(lVar29 + 0x20 + (long)(int)uVar10 * (long)(int)unaff_w27 + 0x138) + fVar32;
        if (*(uint *)(lVar25 + 0x18) <= uVar28) goto LAB_07d72b20;
        lVar25 = lVar25 + (long)(int)uVar28 * 0x60;
        *(float *)(lVar25 + 0x54) = 0.0 - *(float *)(unaff_x22 + 0x2e8);
        *(float *)(lVar25 + 0x58) = fVar34;
        *(float *)(lVar25 + 0x4c) = fStack0000000000000048 + (fVar42 - fVar34);
        *(float *)(lVar25 + 0x50) = fVar42;
        uVar28 = *unaff_x21;
        if ((int)uVar28 < 0x2d) {
          if (uVar28 - 10 < 2) {
LAB_07d72208:
            FUN_07d79804();
            uVar5 = *(uint *)(unaff_x22 + 0x334);
            iVar6 = *(int *)(unaff_x22 + 0x350) + 1;
            *(uint *)(unaff_x22 + 0x338) = uVar5 + 1;
            *(int *)(unaff_x22 + 0x350) = iVar6;
            *(undefined8 *)(in_stack_00000068 + 0x60) = 0;
            if (*(long *)(unaff_x19 + 0x48) != 0) {
              if (*(int *)(*(long *)(unaff_x19 + 0x48) + 0x18) <= iVar6) {
                if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo +
                            0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                FUN_07d8f790(iVar6);
                uVar5 = *unaff_x25;
              }
              lVar29 = *(long *)(unaff_x19 + 0x30);
              if (lVar29 != 0) {
                if (*(uint *)(lVar29 + 0x18) <= uVar5) goto LAB_07d72b20;
                fVar33 = *(float *)(unaff_x22 + 0x2ec);
                fVar32 = *(float *)(lVar29 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x14c);
                if (fVar33 == DAT_015c55ac) {
                  if ((*unaff_x21 == 0x2029) || (fVar34 = 0.0, *unaff_x21 == 10)) {
                    fVar34 = *(float *)(in_stack_00000140 + 0x94);
                  }
                  uVar17 = 0;
                  fVar33 = fVar32 + (0.0 - *(float *)(unaff_x22 + 0x34c)) +
                           in_stack_00000020._4_4_ *
                           (fStack0000000000000050 + *(float *)(unaff_x22 + 0x15bc));
                }
                else {
                  if ((*unaff_x21 == 0x2029) || (fVar34 = 0.0, *unaff_x21 == 10)) {
                    fVar34 = *(float *)(in_stack_00000140 + 0x94);
                  }
                  uVar17 = 1;
                }
                fVar33 = *(float *)(unaff_x22 + 0x2e8) +
                         fVar33 + fStack00000000000000dc * (fVar34 + 0.0);
                bVar3 = *(char *)(unaff_x22 + 0xf4) != '\0';
                *(undefined1 *)(unaff_x22 + 0x2f0) = uVar17;
                *(float *)(unaff_x22 + 0x15b8) = fVar32;
                fVar32 = *(float *)(unaff_x22 + 0x304) + 0.0 + *(float *)(unaff_x22 + 0x308);
                if (bVar3) {
                  fVar33 = (float)(int)(fVar33 + unaff_s15);
                }
                *(float *)(unaff_x22 + 0x2e8) = fVar33;
                if (bVar3) {
                  fVar32 = (float)(int)(fVar32 + unaff_s15);
                }
                *(undefined8 *)(unaff_x22 + 0x348) = in_stack_00000030;
                *(float *)(unaff_x22 + 0x300) = fVar32;
                FUN_07d79804();
                FUN_07d79804();
                *(int *)(unaff_x22 + 0x334) = *(int *)(unaff_x22 + 0x334) + 1;
                in_stack_00000060._4_4_ = 1;
                uStack0000000000000058 = 1;
                goto LAB_07d72ac8;
              }
            }
            goto LAB_07d72adc;
          }
          if (uVar28 == 3) {
            if (*(long *)(unaff_x22 + 0x20) == 0) goto LAB_07d72adc;
            uVar28 = 3;
            in_stack_0000112c = (uint)*(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x18);
          }
        }
        else if ((uVar28 - 0x2028 < 2) || (uVar28 == 0x2d)) goto LAB_07d72208;
LAB_07d72314:
        uVar10 = *unaff_x25;
        if (uVar18 <= uVar10) goto LAB_07d72b20;
        lVar29 = lVar29 + 0x20;
        if (*(char *)(lVar29 + (long)(int)uVar10 * (long)(int)unaff_w27 + 0x174) != '\0') {
          lVar25 = lVar29 + (long)(int)uVar10 * (long)(int)unaff_w27;
          auVar36 = *(undefined1 (*) [16])(in_stack_00000068 + 0x78);
          uVar45 = *(undefined8 *)(lVar25 + 0xf8);
          auVar38 = NEON_ext(auVar36,auVar36,8,1);
          uVar46 = *(undefined8 *)(lVar25 + 0x104);
          auVar39._0_4_ = -(uint)(auVar36._0_4_ < (float)uVar45);
          auVar39._4_4_ = -(uint)(auVar36._4_4_ < (float)((ulong)uVar45 >> 0x20));
          auVar39._8_4_ = -(uint)((float)uVar46 < auVar38._0_4_);
          auVar39._12_4_ = -(uint)((float)((ulong)uVar46 >> 0x20) < auVar38._4_4_);
          auVar38._8_8_ = uVar46;
          auVar38._0_8_ = uVar45;
          auVar36 = auVar36 ^ (auVar36 ^ auVar38) & ~auVar39;
          *(long *)(in_stack_00000068 + 0x80) = auVar36._8_8_;
          *(long *)(in_stack_00000068 + 0x78) = auVar36._0_8_;
        }
        if (((iStack00000000000000b0 != 3) && (iStack00000000000000b0 != 0)) ||
           ((*(uint *)(in_stack_00000140 + 100) < 7 &&
            ((1 << (ulong)(*(uint *)(in_stack_00000140 + 100) & 0x1f) & 0x4aU) != 0)))) {
          if (((uStack0000000000000104 & 1) == 0) && (uVar28 != 0x200b)) {
            if (uVar28 == 0x2d) {
              if (0 < (int)uVar10) {
                if (uVar18 <= uVar10 - 1) goto LAB_07d72b20;
                uVar31 = *(undefined4 *)(lVar29 + (ulong)(uVar10 - 1) * (ulong)unaff_w27);
                if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                uVar13 = FUN_066b9610(uVar31,0);
                if ((uVar13 & 1) != 0) {
                  uVar28 = *unaff_x21;
                  goto LAB_07d72408;
                }
              }
              goto LAB_07d72410;
            }
LAB_07d72408:
            if (uVar28 == 0xad) goto LAB_07d72410;
            if (*(char *)(unaff_x22 + 0x388) == '\0') goto LAB_07d72644;
            if ((in_stack_00000060._4_4_ & 1) == 0) {
UnityEngine_UIElements_UIR_EntryProcessor__set_lastHeadCommand:
              in_stack_00000060._4_4_ = 0;
              goto LAB_07d72940;
            }
LAB_07d72618:
            if ((in_stack_00000038._4_4_ & 1) == 0 && *unaff_x21 == 0xad) {
LAB_07d72434:
              FUN_07d79804();
              in_stack_00000060._4_4_ = 1;
            }
            else {
LAB_07d72630:
              in_stack_00000060._4_4_ = 1;
            }
          }
          else {
LAB_07d72410:
            if (*(char *)(unaff_x22 + 0x388) != '\0') goto LAB_07d72418;
            uVar28 = *unaff_x21;
            if ((int)uVar28 < 0x2007) {
              if (uVar28 == 0x2d) {
                uVar5 = *unaff_x25 - 1;
                if (0 < (int)*unaff_x25) {
                  lVar29 = *(long *)(unaff_x19 + 0x30);
                  if (lVar29 == 0) goto LAB_07d72adc;
                  if (*(uint *)(lVar29 + 0x18) <= uVar5) goto LAB_07d72b20;
                  uVar31 = *(undefined4 *)(lVar29 + (ulong)uVar5 * (ulong)unaff_w27 + 0x20);
                  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
                    thunk_FUN_03ae8be4();
                  }
                  uVar13 = FUN_066b9610(uVar31,0);
                  if ((uVar13 & 1) != 0) goto LAB_07d72940;
                }
              }
              else if (uVar28 == 0xa0) goto LAB_07d72644;
            }
            else if (((uVar28 - 0x2007 < 0x29) &&
                     ((1L << ((ulong)(uVar28 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                    (uVar28 == 0x2060)) {
LAB_07d72644:
              if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo +
                          0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar13 = FUN_07d90128(uVar28,0);
              if ((uVar13 & 1) == 0) {
LAB_07d7268c:
                uVar10 = *unaff_x21;
                if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo +
                            0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                uVar13 = FUN_07d901bc(uVar10,0);
                if ((uVar13 & 1) == 0) {
                  if ((*(char *)(unaff_x22 + 0x388) != '\0') ||
                     (uVar5 = *unaff_x25 + 1, iStack0000000000000028 <= (int)uVar5)) {
LAB_07d72418:
                    if ((in_stack_00000060._4_4_ & 1) != 0) {
                      if ((uStack0000000000000104 & 1) == 0) goto LAB_07d72618;
                      if (*unaff_x21 != 0xa0) goto LAB_07d72434;
                      goto LAB_07d72630;
                    }
                    goto UnityEngine_UIElements_UIR_EntryProcessor__set_lastHeadCommand;
                  }
                  lVar29 = *(long *)(unaff_x19 + 0x30);
                  if (lVar29 != 0) {
                    if (*(uint *)(lVar29 + 0x18) <= uVar5) goto LAB_07d72b20;
                    uVar31 = *(undefined4 *)
                              (lVar29 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x20);
                    if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo
                                + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                    }
                    uVar13 = FUN_07d901bc(uVar31,0);
                    if ((uVar13 & 1) == 0) goto LAB_07d72418;
                    lVar29 = *(long *)(unaff_x19 + 0x30);
                    if (lVar29 != 0) {
                      if (*(uint *)(lVar29 + 0x18) <= *unaff_x25 + 1) goto LAB_07d72b20;
                      if (in_stack_00000018 != 0) {
                        uVar31 = *(undefined4 *)
                                  (lVar29 + (long)(int)(*unaff_x25 + 1) * (long)(int)unaff_w27 +
                                  0x20);
                        lVar29 = FUN_07d86e90(in_stack_00000018,0);
                        if ((lVar29 != 0) && (lVar29 = FUN_07d98b58(lVar29,0), lVar29 != 0)) {
                          uVar5 = FUN_049ddf40(lVar29,*unaff_x21,*(undefined8 *)PTR_DAT_084b5110);
                          lVar29 = FUN_07d86e90(in_stack_00000018,0);
                          if ((lVar29 != 0) && (lVar29 = FUN_07d98b58(lVar29,0), lVar29 != 0)) {
                            uVar8 = FUN_049ddf40(lVar29,uVar31,*(undefined8 *)PTR_DAT_084b5110);
                            if (((uVar5 | uVar8) & 1) != 0) goto LAB_07d72940;
                            goto LAB_07d72934;
                          }
                        }
                      }
                    }
                  }
                  goto LAB_07d72adc;
                }
                if (in_stack_00000018 == 0) goto LAB_07d72adc;
              }
              else {
                if ((in_stack_00000018 == 0) ||
                   (lVar29 = FUN_07d86e90(in_stack_00000018,0), lVar29 == 0)) goto LAB_07d72adc;
                if (*(char *)(lVar29 + 0x28) != '\0') goto LAB_07d7268c;
              }
              lVar29 = FUN_07d86e90(in_stack_00000018,0);
              if ((lVar29 == 0) || (lVar29 = FUN_07d98b58(lVar29,0), lVar29 == 0))
              goto LAB_07d72adc;
              uVar13 = FUN_049ddf40(lVar29,*unaff_x21,*(undefined8 *)PTR_DAT_084b5110);
              if ((int)*unaff_x25 < (int)uStack000000000000004c) {
                lVar29 = FUN_07d86e90(in_stack_00000018,0);
                if (lVar29 == 0) goto LAB_07d72adc;
                lVar29 = FUN_07d98da0(lVar29,0);
                lVar25 = *(long *)(unaff_x19 + 0x30);
                if (lVar25 == 0) goto LAB_07d72adc;
                if (*(uint *)(lVar25 + 0x18) <= *unaff_x25 + 1) goto LAB_07d72b20;
                if (lVar29 == 0) goto LAB_07d72adc;
                uVar10 = FUN_049ddf40(lVar29,*(undefined4 *)
                                              (lVar25 + (long)(int)(*unaff_x25 + 1) *
                                                        (long)(int)unaff_w27 + 0x20),
                                      *(undefined8 *)PTR_DAT_084b5110);
                if ((uVar13 & 1) != 0) goto LAB_07d72884;
LAB_07d72758:
                in_stack_00000060._4_4_ = uVar10 & in_stack_00000060._4_4_;
                uStack0000000000000104 = in_stack_00000060._4_4_ & uStack0000000000000104;
                if (((in_stack_00000060._4_4_ & 1) != 0) || (((uVar10 ^ 1) & 1) != 0))
                goto LAB_07d728a8;
                in_stack_00000060._4_4_ = 0;
              }
              else {
                uVar10 = 0;
                if ((uVar13 & 1) == 0) goto LAB_07d72758;
LAB_07d72884:
                if ((in_stack_00000060._4_4_ & uVar5 == uVar8) == 0) goto LAB_07d72940;
                in_stack_00000060._4_4_ = 1;
LAB_07d728a8:
                FUN_07d79804();
              }
              if ((uStack0000000000000104 & 1) == 0) goto LAB_07d72940;
              goto LAB_07d72934;
            }
            in_stack_00000060._4_4_ = 0;
            *(undefined4 *)(unaff_x22 + 0x11f0) = 0xffffffff;
          }
LAB_07d72934:
          FUN_07d79804();
        }
LAB_07d72940:
        FUN_07d79804();
        *(int *)(unaff_x22 + 0x334) = *(int *)(unaff_x22 + 0x334) + 1;
LAB_07d72ac8:
        do {
          lVar29 = *(long *)(unaff_x22 + 0x20);
          in_stack_0000112c = in_stack_0000112c + 1;
          if (lVar29 == 0) goto LAB_07d72adc;
          if ((int)*(uint *)(lVar29 + 0x18) <= (int)in_stack_0000112c) {
LAB_07d72ae0:
            FUN_07d797b8();
            return;
          }
          if (*(uint *)(lVar29 + 0x18) <= in_stack_0000112c) goto LAB_07d72b20;
          uVar5 = *(uint *)(lVar29 + (long)(int)in_stack_0000112c * 0x10 + 0x24);
          if (uVar5 == 0) goto LAB_07d72ae0;
          *unaff_x21 = uVar5;
          if (5 < iStack0000000000000108) {
            uVar45 = FUN_0676d8dc();
            uVar46 = FUN_0674e2a4(&stack0x0000112c,0);
            uVar45 = FUN_065ce354(*(undefined8 *)Unity_Hierarchy_HierarchyFlattenedNode_TypeInfo,
                                  uVar45,*(undefined8 *)Unity_Hierarchy_HierarchyNode_TypeInfo,
                                  uVar46,0);
            if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
            }
            FUN_07c4fb40(uVar45,0);
            uVar5 = *unaff_x21;
            in_stack_00001190 = CONCAT44(3,*unaff_x25);
          }
        } while (uVar5 == 0x1a);
        if ((uVar5 == 0x3c) && (*(char *)(in_stack_00000140 + 0x81) != '\0')) {
          in_stack_00000168[0] = '\x01';
          in_stack_00000168[1] = '\x01';
          uVar13 = FUN_07d74ca8();
          if (((uVar13 & 1) != 0) &&
             (in_stack_0000112c = in_stack_000010fc, *in_stack_00000168 == '\x01'))
          goto LAB_07d72ac8;
        }
        else {
          lVar29 = *(long *)(unaff_x19 + 0x30);
          if (lVar29 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
          lVar29 = lVar29 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
          *in_stack_00000168 = *(char *)(lVar29 + 0x28);
          *(undefined4 *)(unaff_x22 + 0x78) = *(undefined4 *)(lVar29 + 0x58);
          *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(lVar29 + 0x40);
          thunk_FUN_03afed3c(in_stack_00000148);
        }
        lVar29 = *(long *)(unaff_x19 + 0x30);
        if (lVar29 == 0) goto LAB_07d72adc;
        unaff_w26 = *(uint *)(unaff_x22 + 0x334);
        uVar5 = *(uint *)(lVar29 + 0x18);
        if (uVar5 <= unaff_w26) goto LAB_07d72b20;
        lVar25 = lVar29 + 0x20;
        in_stack_00000160._4_4_ = (uint)in_stack_00001190;
        uVar31 = *(undefined4 *)(unaff_x22 + 0x78);
        bVar4 = *(byte *)(lVar25 + (long)(int)unaff_w26 * (long)(int)unaff_w27 + 0x3c);
        in_stack_00000168[1] = '\0';
        unaff_w20 = (uint)bVar4;
        if (in_stack_00000160._4_4_ == unaff_w26) {
          uVar8 = (uint)((ulong)in_stack_00001190 >> 0x20);
          *unaff_x21 = uVar8;
          *in_stack_00000168 = '\x01';
          if (uVar8 == 0x2026) {
            if (uVar5 <= *unaff_x25) goto LAB_07d72b20;
            *(undefined8 *)(lVar25 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x10) =
                 *(undefined8 *)(unaff_x22 + 0x19f8);
            thunk_FUN_03afed3c();
            lVar29 = *(long *)(unaff_x19 + 0x30);
            if (lVar29 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
            lVar29 = lVar29 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
            *(undefined8 *)(lVar29 + 0x40) = *(undefined8 *)(unaff_x22 + 0x1a00);
            *(undefined1 *)(lVar29 + 0x28) = 1;
            thunk_FUN_03afed3c();
            lVar29 = *(long *)(unaff_x19 + 0x30);
            if (lVar29 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
            *(undefined8 *)(lVar29 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x50) =
                 *(undefined8 *)(unaff_x22 + 0x1a08);
            thunk_FUN_03afed3c();
            lVar29 = *(long *)(unaff_x19 + 0x30);
            if (lVar29 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
            *(undefined4 *)(lVar29 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x58) =
                 *(undefined4 *)(unaff_x22 + 0x1a10);
            lVar29 = *(long *)(unaff_x22 + 0x15c0);
            if (lVar29 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x22 + 0x1a30)) goto LAB_07d72b20;
            lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x22 + 0x1a30) * 0x38;
            *(int *)(lVar29 + 0x54) = *(int *)(lVar29 + 0x54) + 1;
            uVar5 = *(uint *)(unaff_x22 + 0x334);
            *(undefined1 *)(unaff_x22 + 0x4d) = 1;
            in_stack_00001190 = CONCAT44(3,uVar5 + 1);
            goto joined_r0x07d6f120;
          }
          if (uVar8 == 3) {
            if (*in_stack_00000148 != 0) {
              uVar5 = *unaff_x25;
              lVar11 = FUN_07d61598(*in_stack_00000148,0);
              if (lVar11 != 0) {
                uVar45 = FUN_060344a4(lVar11,3,*(undefined8 *)
                                                System_Runtime_Serialization_GenericParameterDataContract_GenericParameterDataContractCriticalHelper_TypeInfo
                                     );
                if (uVar5 < *(uint *)(lVar29 + 0x18)) {
                  *(undefined8 *)(lVar25 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x10) = uVar45;
                  thunk_FUN_03afed3c();
                  *(undefined1 *)(unaff_x22 + 0x4d) = 1;
                  goto LAB_07d6efec;
                }
                goto LAB_07d72b20;
              }
            }
            goto LAB_07d72adc;
          }
        }
LAB_07d6efec:
        uVar5 = *unaff_x25;
joined_r0x07d6f120:
        if (((int)uVar5 < 0) && (*unaff_x21 != 3)) {
          lVar29 = *(long *)(unaff_x19 + 0x30);
          if (lVar29 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar29 + 0x18) <= uVar5) goto LAB_07d72b20;
          lVar29 = lVar29 + (long)(int)uVar5 * (long)(int)unaff_w27;
          *(undefined1 *)(lVar29 + 0x194) = 0;
          *(undefined4 *)(lVar29 + 0x20) = 0x200b;
          *(undefined4 *)(lVar29 + 100) = 0;
          *unaff_x25 = uVar5 + 1;
          goto LAB_07d72ac8;
        }
        cVar16 = *in_stack_00000168;
        if (cVar16 == '\x01') {
          uVar5 = *(uint *)(unaff_x22 + 300);
          if ((uVar5 >> 4 & 1) == 0) {
            if ((uVar5 >> 3 & 1) == 0) {
              fStack00000000000000fc = 1.0;
              if ((uVar5 >> 5 & 1) != 0) {
                uVar5 = *unaff_x21;
                if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                uVar13 = FUN_066bbc7c(uVar5,0);
                fStack00000000000000fc = 1.0;
                if ((uVar13 & 1) != 0) {
                  uVar5 = *unaff_x21;
                  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
                    thunk_FUN_03ae8be4();
                  }
                  uVar5 = FUN_066bbf04(uVar5,0);
                  fStack00000000000000fc = fStack0000000000000010;
                  goto LAB_07d6f260;
                }
              }
            }
            else {
              uVar5 = *unaff_x21;
              if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar13 = FUN_066bbbdc(uVar5,0);
              fStack00000000000000fc = 1.0;
              if ((uVar13 & 1) != 0) {
                uVar5 = *unaff_x21;
                if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                uVar5 = FUN_066bc07c(uVar5,0);
                goto LAB_07d6f25c;
              }
            }
          }
          else {
            uVar5 = *unaff_x21;
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar13 = FUN_066bbc7c(uVar5,0);
            fStack00000000000000fc = 1.0;
            if ((uVar13 & 1) != 0) {
              uVar5 = *unaff_x21;
              if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar5 = FUN_066bbf04(uVar5,0);
LAB_07d6f25c:
              fStack00000000000000fc = 1.0;
LAB_07d6f260:
              *unaff_x21 = uVar5 & 0xffff;
            }
          }
          cVar16 = *in_stack_00000168;
        }
        else {
          fStack00000000000000fc = 1.0;
        }
        lVar29 = *(long *)(unaff_x19 + 0x30);
        if (cVar16 != '\x01') {
          if (cVar16 != '\x02') {
            uVar5 = *unaff_x21;
            fStack00000000000000e8 = fStack000000000000010c;
            fVar32 = 0.0;
            if (uVar5 != 3 && uVar5 != 0xad) {
              fVar32 = fStack000000000000010c;
            }
            in_stack_00000120 = 0.0;
            fStack00000000000000f4 = 0.0;
            fStack00000000000000f8 = 0.0;
            if (lVar29 == 0) goto LAB_07d72adc;
            goto LAB_07d6fa24;
          }
          if (lVar29 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
          plVar26 = *(long **)(lVar29 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x30);
          if (plVar26 == (long *)0x0) goto LAB_07d72adc;
          bVar4 = *(byte *)(*(long *)
                             Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo
                           + 0x130);
          if ((*(byte *)(*plVar26 + 0x130) < bVar4) ||
             (*(long *)(*(long *)(*plVar26 + 200) + (ulong)bVar4 * 8 + -8) !=
              *(long *)Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo)
             ) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8ad40(plVar26);
          }
          plVar12 = (long *)FUN_07d8466c(plVar26,0);
          if (plVar12 == (long *)0x0) {
            plVar12 = (long *)0x0;
            *in_stack_000000e0 = 0;
          }
          else {
            lVar29 = *(long *)
                      Unity_Services_CloudSave_Internal_Data_GetCustomItemsRequest_<>c_TypeInfo;
            bVar4 = *(byte *)(lVar29 + 0x130);
            if (*(byte *)(*plVar12 + 0x130) < bVar4) {
              plVar24 = (long *)0x0;
            }
            else {
              plVar24 = plVar12;
              if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) != lVar29) {
                plVar24 = (long *)0x0;
              }
            }
            *in_stack_000000e0 = (long)plVar24;
            if (*(byte *)(*plVar12 + 0x130) < bVar4) {
              plVar12 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) != lVar29) {
              plVar12 = (long *)0x0;
            }
          }
          thunk_FUN_03afed3c(in_stack_000000e0,plVar12);
          iVar6 = FUN_07d85970(plVar26,0);
          *(int *)(unaff_x22 + 0x158c) = iVar6;
          if (*unaff_x21 == 0x3c) {
            *unaff_x21 = iVar6 + 0xe000;
          }
          else {
            uVar7 = FUN_03c4ea74(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
            *(undefined4 *)(unaff_x22 + 0x1590) = uVar7;
          }
          if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
          fVar33 = *(float *)(unaff_x22 + 0xf8);
          FUN_07d60d20(&stack0x000011a0,*(long *)(unaff_x22 + 0x68),0);
          memcpy(&stack0x00001130,&stack0x000011a0,0x60);
          fVar32 = (float)FUN_07d5328c(&stack0x00001130,0);
          if (*in_stack_00000148 == 0) goto LAB_07d72adc;
          FUN_07d60d20(&stack0x00000170,*in_stack_00000148,0);
          memcpy(&stack0x00001130,&stack0x00000170,0x60);
          fVar34 = (float)FUN_07d53294(&stack0x00001130,0);
          if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
          fVar34 = (fVar33 / fVar32) * fVar34;
          fVar32 = (float)FUN_07d5328c(*in_stack_000000e0 + 0x48,0);
          fVar33 = *(float *)(unaff_x22 + 0xf8);
          if (fVar32 <= 0.0) {
            if (*in_stack_00000148 == 0) goto LAB_07d72adc;
            fVar32 = (float)FUN_07d5328c(*in_stack_00000148 + 0xb0,0);
            if (*in_stack_00000148 == 0) goto LAB_07d72adc;
            fStack00000000000000f4 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
            if (*in_stack_00000148 == 0) goto LAB_07d72adc;
            fVar42 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
            if (plVar26[4] == 0) goto LAB_07d72adc;
            FUN_07d53750(&stack0x000011a0,plVar26[4],0);
            fVar43 = (float)FUN_07d53580(&stack0x000010e0,0);
            if (plVar26[4] == 0) goto LAB_07d72adc;
            fVar44 = *(float *)((long)plVar26 + 0x2c);
            fVar30 = (float)FUN_07d5378c(plVar26[4],0);
            if (*in_stack_00000148 == 0) goto LAB_07d72adc;
            fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
            if (*in_stack_00000148 == 0) goto LAB_07d72adc;
            fVar40 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
            if (*in_stack_00000148 == 0) goto LAB_07d72adc;
            fVar41 = *(float *)(unaff_x22 + 0xf0);
            in_stack_00000120 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
            if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
            fStack00000000000000f4 = (fVar33 / fVar32) * fStack00000000000000f4;
            fStack00000000000000e8 = fStack00000000000000f4 * (fVar42 / fVar43) * fVar44 * fVar30;
            fStack00000000000000f4 = fStack00000000000000f4 / fStack00000000000000e8;
            in_stack_00000120 = fVar34 * fVar40 * fVar41 * in_stack_00000120;
            fStack00000000000000f8 = fStack00000000000000f4 * fStack00000000000000f8;
            fVar32 = (float)FUN_07d532ec(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
            fStack00000000000000f4 = fStack00000000000000f4 * fVar32;
          }
          else {
            if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
            fVar32 = (float)FUN_07d5328c(*in_stack_000000e0 + 0x48,0);
            if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
            fVar42 = (float)FUN_07d53294(*in_stack_000000e0 + 0x48,0);
            if (plVar26[4] == 0) goto LAB_07d72adc;
            fVar44 = *(float *)((long)plVar26 + 0x2c);
            fVar43 = (float)FUN_07d5378c(plVar26[4],0);
            if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
            fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_000000e0 + 0x48,0);
            if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
            fVar30 = (float)FUN_07d532e4(*in_stack_000000e0 + 0x48,0);
            if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
            fVar40 = *(float *)(unaff_x22 + 0xf0);
            in_stack_00000120 = (float)FUN_07d53294(*in_stack_000000e0 + 0x48,0);
            if (*(long *)(unaff_x22 + 0xe0) == 0) goto LAB_07d72adc;
            in_stack_00000120 = fVar34 * fVar30 * fVar40 * in_stack_00000120;
            fStack00000000000000e8 = (fVar33 / fVar32) * fVar42 * fVar44 * fVar43;
            fStack00000000000000f4 = (float)FUN_07d532ec(*(long *)(unaff_x22 + 0xe0) + 0x48,0);
          }
          *(long **)(unaff_x22 + 0x1598) = plVar26;
          thunk_FUN_03afed3c(unaff_x22 + 0x1598,plVar26);
          lVar29 = *(long *)(unaff_x19 + 0x30);
          if (lVar29 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
          lVar29 = lVar29 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
          *(long *)(lVar29 + 0x48) = *in_stack_000000e0;
          *(undefined1 *)(lVar29 + 0x28) = 2;
          *(float *)(lVar29 + 0x160) = fStack00000000000000e8;
          thunk_FUN_03afed3c();
          lVar29 = *(long *)(unaff_x19 + 0x30);
          if (lVar29 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
          *(long *)(lVar29 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x40) =
               *in_stack_00000148;
          thunk_FUN_03afed3c();
          lVar29 = *(long *)(unaff_x19 + 0x30);
          if (lVar29 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
          *(undefined4 *)(lVar29 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x58) =
               *(undefined4 *)(unaff_x22 + 0x78);
          in_stack_00000138._4_4_ = 0.0;
          *(undefined4 *)(unaff_x22 + 0x78) = uVar31;
          unaff_s15 = in_stack_000000c0._4_4_;
          goto LAB_07d6fa0c;
        }
        if (lVar29 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
        *(undefined8 *)(unaff_x22 + 0x1598) =
             *(undefined8 *)(lVar29 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x30);
        thunk_FUN_03afed3c(unaff_x22 + 0x1598);
        if (*(long *)(unaff_x22 + 0x1598) != 0) goto LAB_07d6f348;
        goto LAB_07d72ac8;
      }
    }
  }
LAB_07d72adc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
LAB_07d6f348:
  lVar29 = *(long *)(unaff_x19 + 0x30);
  if (lVar29 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  *in_stack_00000148 = *(long *)(lVar29 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x40);
  thunk_FUN_03afed3c(in_stack_00000148);
  lVar29 = *(long *)(unaff_x19 + 0x30);
  if (lVar29 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  *in_stack_00000090 = *(long *)(lVar29 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x50);
  thunk_FUN_03afed3c();
  lVar29 = *(long *)(unaff_x19 + 0x30);
  if (lVar29 == 0) goto LAB_07d72adc;
  uVar8 = *unaff_x25;
  uVar5 = *(uint *)(lVar29 + 0x18);
  if (uVar5 <= uVar8) goto LAB_07d72b20;
  *(undefined4 *)(unaff_x22 + 0x78) =
       *(undefined4 *)(lVar29 + 0x20 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x38);
  if (in_stack_00000160._4_4_ == unaff_w26) {
    lVar25 = *(long *)(unaff_x22 + 0x20);
    if (lVar25 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar25 + 0x18) <= in_stack_0000112c) goto LAB_07d72b20;
    if ((*(int *)(lVar25 + (long)(int)in_stack_0000112c * 0x10 + 0x24) != 10) ||
       (uVar8 == *(uint *)(unaff_x22 + 0x338))) goto LAB_07d6f408;
    if (uVar5 <= uVar8 - 1) goto LAB_07d72b20;
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar33 = *(float *)(lVar29 + 0x20 + (long)(int)(uVar8 - 1) * (long)(int)unaff_w27 + 0x40);
    fVar32 = (float)FUN_07d5328c(*in_stack_00000148 + 0xb0,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar34 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
    fVar34 = ((fStack00000000000000fc * fVar33) / fVar32) * fVar34;
LAB_07d6f900:
    fStack00000000000000f4 = 0.0;
    fStack00000000000000f8 = 0.0;
    if (*unaff_x21 != 0x2026) goto LAB_07d6f918;
  }
  else {
LAB_07d6f408:
    if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
    fVar33 = *(float *)(unaff_x22 + 0xf8);
    fVar32 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar34 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
    fVar34 = ((fStack00000000000000fc * fVar33) / fVar32) * fVar34;
    if (in_stack_00000160._4_4_ == unaff_w26) goto LAB_07d6f900;
LAB_07d6f918:
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fStack00000000000000f4 = (float)FUN_07d532ec(*in_stack_00000148 + 0xb0,0);
  }
  lVar29 = *(long *)(unaff_x22 + 0x1598);
  if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto LAB_07d72adc;
  fVar32 = *(float *)(unaff_x22 + 0xf0);
  fVar33 = *(float *)(lVar29 + 0x2c);
  fStack00000000000000e8 = (float)FUN_07d5378c(*(long *)(lVar29 + 0x20),0);
  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
  fVar42 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
  fVar43 = *(float *)(unaff_x22 + 0xf0);
  in_stack_00000120 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
  lVar29 = *(long *)(unaff_x19 + 0x30);
  in_stack_00000120 = fVar34 * fVar42 * fVar43 * in_stack_00000120;
  if (*(char *)(unaff_x22 + 0xf4) != '\0') {
    in_stack_00000120 = (float)(int)(in_stack_00000120 + unaff_s15);
  }
  if (lVar29 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar25 = lVar29 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(undefined1 *)(lVar25 + 0x28) = 1;
  fStack00000000000000e8 = fVar34 * fVar32 * fVar33 * fStack00000000000000e8;
  *(float *)(lVar25 + 0x160) = fStack00000000000000e8;
  in_stack_00000138._4_4_ = *(float *)(unaff_x22 + 0xd8);
LAB_07d6fa0c:
  uVar5 = *unaff_x21;
  fVar32 = 0.0;
  if (uVar5 != 3 && uVar5 != 0xad) {
    fVar32 = fStack00000000000000e8;
  }
LAB_07d6fa24:
  unaff_s12 = 1.0;
  if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar29 = lVar29 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(uint *)(lVar29 + 0x20) = uVar5;
  *(undefined4 *)(lVar29 + 0x60) = *(undefined4 *)(unaff_x22 + 0xf8);
  *(undefined4 *)(lVar29 + 0x164) = *(undefined4 *)(unaff_x22 + 0x1b4);
  lVar29 = *(long *)(unaff_x19 + 0x30);
  if (lVar29 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  *(undefined4 *)(lVar29 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x168) =
       *(undefined4 *)(unaff_x22 + 0x1b8);
  lVar29 = *(long *)(unaff_x19 + 0x30);
  if (lVar29 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  *(undefined4 *)(lVar29 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x170) =
       *(undefined4 *)(unaff_x22 + 0x1bc);
  lVar29 = *(long *)(unaff_x19 + 0x30);
  if (lVar29 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar29 = lVar29 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  auVar36 = *(undefined1 (*) [16])(unaff_x22 + 0x38);
  *(undefined4 *)(lVar29 + 0x18c) = *(undefined4 *)(unaff_x22 + 0x48);
  *(long *)(lVar29 + 0x184) = auVar36._8_8_;
  *(long *)(lVar29 + 0x17c) = auVar36._0_8_;
  lVar29 = *(long *)(unaff_x19 + 0x30);
  if (lVar29 == 0) goto LAB_07d72adc;
  uVar5 = *(uint *)(unaff_x22 + 0x334);
  uVar8 = *(uint *)(lVar29 + 0x18);
  if (uVar8 <= uVar5) goto LAB_07d72b20;
  lVar25 = lVar29 + 0x20 + (long)(int)uVar5 * (long)(int)unaff_w27;
  uVar10 = *(uint *)(unaff_x22 + 300);
  *(uint *)(lVar25 + 0x170) = uVar10;
  if (*(int *)(unaff_x22 + 0x13c) == 700) {
    *(uint *)(lVar25 + 0x170) = uVar10 | 1;
    uVar5 = *unaff_x25;
  }
  if (uVar8 <= uVar5) goto LAB_07d72b20;
  lVar29 = *(long *)(lVar29 + 0x20 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x18);
  if (lVar29 == 0) {
    if ((*(long *)(unaff_x22 + 0x1598) == 0) ||
       (lVar29 = *(long *)(*(long *)(unaff_x22 + 0x1598) + 0x20), lVar29 == 0)) goto LAB_07d72adc;
    FUN_07d53750(&stack0x000011a0,lVar29,0);
  }
  else {
    FUN_07d53750(&stack0x00000510,lVar29,0);
  }
  uVar5 = *unaff_x21;
  if (uVar5 >> 0x10 == 0) {
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    unaff_w24 = FUN_066b9610(uVar5,0);
  }
  else {
    unaff_w24 = 0;
  }
  fStack00000000000000d4 = *(float *)(in_stack_00000140 + 0x8c);
  if (((_fStack00000000000000a8 & 0x100000000) != 0) && (*in_stack_00000168 == '\x01')) {
    if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
    uVar5 = *unaff_x25;
    uVar8 = *(uint *)(*(long *)(unaff_x22 + 0x1598) + 0x28);
    if ((int)uVar5 < (int)uStack000000000000004c) {
      lVar29 = *(long *)(unaff_x19 + 0x30);
      if (lVar29 == 0) goto LAB_07d72adc;
      uVar5 = uVar5 + 1;
      if (*(uint *)(lVar29 + 0x18) <= uVar5) goto LAB_07d72b20;
      if (*(char *)(lVar29 + 0x20 + (long)(int)uVar5 * (long)(int)unaff_w27 + 8) == '\x01') {
        lVar29 = *(long *)(lVar29 + 0x20 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x10);
        if ((((lVar29 == 0) || (*in_stack_00000148 == 0)) ||
            (lVar25 = *(long *)(*in_stack_00000148 + 0x170), lVar25 == 0)) ||
           (lVar25 = *(long *)(lVar25 + 0x40), lVar25 == 0)) goto LAB_07d72adc;
        uVar13 = FUN_05ffa6e0(lVar25,uVar8 | *(int *)(lVar29 + 0x28) << 0x10,&stack0x000010b0,
                              *(undefined8 *)Unity_Netcode_HandlerNotRegisteredException_TypeInfo);
        if ((uVar13 & 1) != 0) {
          FUN_07d57e40(&stack0x000011a0,&stack0x000010b0,0);
          FUN_07d57c94(&stack0x00001090,0);
          uVar13 = FUN_07d57e7c(&stack0x000010b0,0);
          if ((uVar13 & 0x100) != 0) {
            fStack00000000000000d4 = 0.0;
          }
        }
      }
      uVar5 = *unaff_x25;
    }
    uVar10 = uVar5 - 1;
    if (0 < (int)uVar5) {
      lVar29 = *(long *)(unaff_x19 + 0x30);
      if (lVar29 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar29 + 0x18) <= uVar10) goto LAB_07d72b20;
      lVar25 = *(long *)(lVar29 + 0x20 + (ulong)uVar10 * (ulong)unaff_w27 + 0x10);
      if (lVar25 == 0) goto LAB_07d72adc;
      if (*(char *)(lVar29 + 0x20 + (ulong)uVar10 * (ulong)unaff_w27 + 8) == '\x01') {
        if (((*in_stack_00000148 == 0) ||
            (lVar29 = *(long *)(*in_stack_00000148 + 0x170), lVar29 == 0)) ||
           (lVar29 = *(long *)(lVar29 + 0x40), lVar29 == 0)) goto LAB_07d72adc;
        uVar13 = FUN_05ffa6e0(lVar29,*(uint *)(lVar25 + 0x28) | uVar8 << 0x10,&stack0x000010b0,
                              *(undefined8 *)Unity_Netcode_HandlerNotRegisteredException_TypeInfo);
        if ((uVar13 & 1) != 0) {
          FUN_07d57e68(&stack0x000011a0,&stack0x000010b0,0);
          FUN_07d57c94(&stack0x00001090,0);
          FUN_07d57af4(0);
          uVar13 = FUN_07d57e7c(&stack0x000010b0,0);
          unaff_s15 = in_stack_000000c0._4_4_;
          if ((uVar13 & 0x100) != 0) {
            fStack00000000000000d4 = 0.0;
          }
        }
      }
    }
    lVar29 = *(long *)(unaff_x19 + 0x30);
    if (lVar29 == 0) goto LAB_07d72adc;
    uVar5 = *unaff_x25;
    uVar31 = FUN_07d57ad0(&stack0x00001100,0);
    if (*(uint *)(lVar29 + 0x18) <= uVar5) goto LAB_07d72b20;
    *(undefined4 *)(lVar29 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x154) = uVar31;
  }
  uVar5 = *unaff_x21;
  if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uStack00000000000000d8 = FUN_07d8fcc4(uVar5,0);
  uVar5 = *unaff_x25;
  uVar13 = (ulong)uVar5;
  if ((uStack00000000000000d8 & 1) == 0) {
    if (0 < (int)uVar5) {
      if ((((uVar2 & 1) == 0) || (uVar8 = *(uint *)(unaff_x22 + 0x19cc), uVar8 == 0x80000000)) ||
         (uVar8 != uVar5 - 1)) {
        if ((_iStack0000000000000028 & 0x100000000) == 0) {
          bVar3 = false;
        }
        else {
          lVar29 = uVar13 * unaff_w27 + 0x144;
          uVar27 = uVar13;
          do {
            uVar27 = uVar27 - 1;
            iVar6 = (int)uVar13;
            uVar5 = iVar6 - 1;
            uVar13 = (ulong)uVar5;
            if ((iVar6 < 1) || (uVar27 == *(uint *)(unaff_x22 + 0x19cc))) {
              bVar3 = false;
              goto LAB_07d71064;
            }
            lVar25 = *(long *)(unaff_x19 + 0x30);
            if (lVar25 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar25 + 0x18) <= uVar27) goto LAB_07d72b20;
            lVar25 = *(long *)(lVar25 + lVar29 + -0x28c);
            if ((lVar25 == 0) || (lVar25 = FUN_07d88988(lVar25,0), lVar25 == 0)) goto LAB_07d72adc;
            uVar8 = FUN_07d53740(lVar25,0);
            if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
            iVar6 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
            if (((*in_stack_00000148 == 0) ||
                (lVar25 = FUN_07d61740(*in_stack_00000148,0), lVar25 == 0)) ||
               (*(long *)(lVar25 + 0x50) == 0)) goto LAB_07d72adc;
            uVar14 = System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__MoveNext
                               (*(long *)(lVar25 + 0x50),uVar8 | iVar6 << 0x10,&stack0x00001050,
                                *(undefined8 *)UnityEngine_GUILayoutUtility_LayoutCache_TypeInfo);
            lVar29 = lVar29 + -0x178;
          } while ((uVar14 & 1) == 0);
          if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_07d72adc;
          if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= uVar5) goto LAB_07d72b20;
          FUN_07d580c8(&stack0x00001050,0);
          UnityEngine_UIElements_VisualElementAsset__get_stylesheetPaths(&stack0x00001070,0);
          FUN_07d580e8(&stack0x00001050,0);
          FUN_07d58058(&stack0x00001068,0);
          FUN_07d57ab8(&stack0x00001100,0);
          FUN_07d580c8(&stack0x00001050,0);
          FUN_07d58048(&stack0x00001070,0);
          FUN_07d580e8(&stack0x00001050,0);
          FUN_07d58068(&stack0x00001068,0);
          FUN_07d57ac8(&stack0x00001100,0);
          fStack00000000000000d4 = 0.0;
          bVar3 = true;
        }
LAB_07d71064:
        if ((uVar2 & 1) != 0) {
          uVar5 = *(uint *)(unaff_x22 + 0x19cc);
          if (uVar5 == 0x80000000) {
            bVar3 = true;
          }
          if (!bVar3) {
            lVar29 = *(long *)(unaff_x19 + 0x30);
            if (lVar29 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar29 + 0x18) <= uVar5) goto LAB_07d72b20;
            lVar29 = *(long *)(lVar29 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x30);
            if ((lVar29 == 0) || (lVar29 = FUN_07d88988(lVar29,0), lVar29 == 0)) goto LAB_07d72adc;
            uVar5 = FUN_07d53740(lVar29,0);
            if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
            iVar6 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
            if (((*in_stack_00000148 == 0) ||
                (lVar29 = FUN_07d61740(*in_stack_00000148,0), lVar29 == 0)) ||
               (*(long *)(lVar29 + 0x48) == 0)) goto LAB_07d72adc;
            uVar13 = FUN_06008730(*(long *)(lVar29 + 0x48),uVar5 | iVar6 << 0x10,&stack0x00001038,
                                  *(undefined8 *)
                                   UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo);
            if ((uVar13 & 1) != 0) {
              if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_07d72adc;
              if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= *(uint *)(unaff_x22 + 0x19cc))
              goto LAB_07d72b20;
              FUN_07d58088(&stack0x00001038,0);
              UnityEngine_UIElements_VisualElementAsset__get_stylesheetPaths(&stack0x00001070,0);
              FUN_07d580a8(&stack0x00001038,0);
              FUN_07d58058(&stack0x00001068,0);
              FUN_07d57ab8(&stack0x00001100,0);
              FUN_07d58088(&stack0x00001038,0);
              FUN_07d58048(&stack0x00001070,0);
              puVar15 = &stack0x00001038;
              goto LAB_07d711ec;
            }
          }
        }
      }
      else {
        lVar29 = *(long *)(unaff_x19 + 0x30);
        if (lVar29 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar29 + 0x18) <= uVar8) goto LAB_07d72b20;
        lVar29 = *(long *)(lVar29 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x30);
        if ((lVar29 == 0) || (lVar29 = FUN_07d88988(lVar29,0), lVar29 == 0)) goto LAB_07d72adc;
        uVar5 = FUN_07d53740(lVar29,0);
        if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
        iVar6 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
        if (((*in_stack_00000148 == 0) || (lVar29 = FUN_07d61740(*in_stack_00000148,0), lVar29 == 0)
            ) || (*(long *)(lVar29 + 0x48) == 0)) goto LAB_07d72adc;
        uVar13 = FUN_06008730(*(long *)(lVar29 + 0x48),uVar5 | iVar6 << 0x10,&stack0x00001078,
                              *(undefined8 *)
                               UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo);
        if ((uVar13 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_07d72adc;
          if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= *(uint *)(unaff_x22 + 0x19cc))
          goto LAB_07d72b20;
          FUN_07d58088(&stack0x00001078,0);
          UnityEngine_UIElements_VisualElementAsset__get_stylesheetPaths(&stack0x00001070,0);
          FUN_07d580a8(&stack0x00001078,0);
          FUN_07d58058(&stack0x00001068,0);
          FUN_07d57ab8(&stack0x00001100,0);
          FUN_07d58088(&stack0x00001078,0);
          FUN_07d58048(&stack0x00001070,0);
          puVar15 = &stack0x00001078;
LAB_07d711ec:
          FUN_07d580a8(puVar15,0);
          FUN_07d58068(&stack0x00001068,0);
          FUN_07d57ac8(&stack0x00001100,0);
          fStack00000000000000d4 = 0.0;
        }
      }
    }
  }
  else {
    *(uint *)(unaff_x22 + 0x19cc) = uVar5;
  }
  fStack00000000000000ec = (float)FUN_07d57ac0(&stack0x00001100,0);
  fStack00000000000000f0 = (float)FUN_07d57ac0(&stack0x00001100,0);
  if (*(char *)(in_stack_00000140 + 0x82) != '\0') {
    fVar33 = *(float *)(unaff_x22 + 0x300);
    fVar34 = (float)FUN_07d53598(&stack0x00001110,0);
    fVar33 = fVar33 - fVar32 * fVar34 * (1.0 - *(float *)(unaff_x22 + 0x15a4));
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar33 = (float)(int)(fVar33 + unaff_s15);
    }
    *(float *)(unaff_x22 + 0x300) = fVar33;
    if (((unaff_w24 & 1) != 0) || (*unaff_x21 == 0x200b)) {
      fVar33 = fVar33 - fStack00000000000000dc * *(float *)(in_stack_00000140 + 0x90);
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar33 = (float)(int)(fVar33 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar33;
    }
  }
  fVar33 = *(float *)(unaff_x22 + 0x2f8);
  unaff_s13 = 0.0;
  if (fVar33 != 0.0) {
    uVar5 = *unaff_x21;
    if (uVar5 != 0x200b) {
      if (((*(char *)(unaff_x22 + 0x2fc) == '\0') || (0x3a < uVar5)) ||
         (fVar34 = 0.25, (1L << ((ulong)uVar5 & 0x3f) & 0x400500000000000U) == 0)) {
        fVar34 = 0.5;
      }
      fVar42 = (float)FUN_07d53578(&stack0x00001110,0);
      fVar43 = (float)FUN_07d53588(&stack0x00001110,0);
      unaff_s13 = (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                  (fVar33 * fVar34 - fVar32 * (fVar42 * 0.5 + fVar43));
      fVar33 = unaff_s13 + *(float *)(unaff_x22 + 0x300);
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar33 = (float)(int)(fVar33 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar33;
    }
  }
  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
  iVar6 = FUN_07d616d4(*in_stack_00000148,0);
  if (iVar6 == 0x1015) {
    bVar3 = false;
  }
  else {
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    iVar6 = FUN_07d616d4(*in_stack_00000148,0);
    bVar3 = iVar6 != 0x11014;
  }
  unaff_x29 = in_stack_00000148;
  uStack0000000000000104 = unaff_w24;
  fStack000000000000010c = fVar32;
  if ((unaff_w20 == 0) && (*in_stack_00000168 == '\x01')) {
    lVar29 = *(long *)(unaff_x19 + 0x30);
    if (lVar29 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) {
LAB_07d72b20:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    if ((*(byte *)(lVar29 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 400) & 1) != 0)
    goto LAB_07d702e4;
  }
  fStack00000000000000d0 = 0.0;
  if (!bVar3) {
    fVar33 = 0.0;
    goto LAB_07d705fc;
  }
  if (*(char *)(in_stack_00000140 + 0xa0) != '\0') {
    lVar29 = *in_stack_00000090;
    if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if (lVar29 == 0) goto LAB_07d72adc;
    uVar13 = thunk_FUN_07c662cc(lVar29,*(undefined4 *)
                                        (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
    if ((uVar13 & 1) != 0) {
      lVar29 = *in_stack_00000090;
      if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                  0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if (lVar29 == 0) goto LAB_07d72adc;
      fVar32 = (float)thunk_FUN_07c69050(lVar29,*(undefined4 *)
                                                 (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
      goto LAB_07d702a8;
    }
  }
  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
  iVar6 = FUN_07d616c4(*in_stack_00000148,0);
  fVar32 = (float)(iVar6 + 1);
LAB_07d702a8:
  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
  fVar33 = fVar32 * *(float *)(*in_stack_00000148 + 400) * 0.25;
  if (fVar32 < in_stack_00000138._4_4_ + fVar33) {
    in_stack_00000138._4_4_ = fVar32 - fVar33;
  }
  goto LAB_07d705fc;
LAB_07d702e4:
  if (bVar3) goto code_r0x07d702e8;
  fVar33 = 0.0;
  goto LAB_07d705e8;
code_r0x07d702e8:
  if (*(char *)(in_stack_00000140 + 0xa0) != '\0') goto code_r0x07d702f0;
LAB_07d70594:
  if (*unaff_x29 == 0) goto LAB_07d72adc;
  iVar6 = FUN_07d616c4(*unaff_x29,0);
  fVar32 = (float)(iVar6 + 1);
  goto LAB_07d705ac;
code_r0x07d702f0:
  param_2 = *in_stack_00000090;
  if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo + 0xe4)
      == 0) {
    thunk_FUN_03ae8be4();
  }
  if (param_2 == 0) goto LAB_07d72adc;
  param_1 = &System_Console_WindowsConsole_TypeInfo;
  param_4 = 0;
  goto code_r0x07d70320;
}


