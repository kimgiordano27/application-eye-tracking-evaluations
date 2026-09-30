/*
FUNCTION_NAME: UnityEngine.UIElements.MouseEventDispatchingStrategy$$UpdateElementUnderMouse
ENTRY_POINT: 0378e69c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


void UnityEngine_UIElements_MouseEventDispatchingStrategy__UpdateElementUnderMouse
               (undefined8 *param_1,long param_2,undefined1 *param_3)

{
  int iVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  long *plVar18;
  ulong uVar19;
  undefined1 *puVar20;
  ulong uVar21;
  undefined1 uVar22;
  char cVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  float *pfVar28;
  long lVar29;
  uint uVar30;
  ulong uVar31;
  long *plVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  float *pfVar37;
  uint uVar38;
  long lVar39;
  long unaff_x19;
  char cVar40;
  uint unaff_w20;
  long lVar41;
  uint unaff_w21;
  uint uVar42;
  long *plVar43;
  ulong unaff_x22;
  uint unaff_w23;
  char *unaff_x24;
  uint unaff_w25;
  long *unaff_x26;
  long lVar44;
  ulong unaff_x27;
  int unaff_w28;
  uint unaff_w29;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 uVar51;
  float fVar52;
  undefined8 uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined4 uVar58;
  float fVar59;
  undefined8 uVar60;
  float fVar61;
  float fVar62;
  undefined8 uVar63;
  float fVar64;
  float unaff_s11;
  float fVar65;
  float fVar66;
  float unaff_s13;
  float fVar67;
  float fVar68;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  int iStack0000000000000028;
  float fStack000000000000002c;
  int *in_stack_00000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  long *in_stack_00000050;
  float fStack0000000000000058;
  uint uStack000000000000005c;
  long in_stack_00000060;
  void *in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  float fStack0000000000000088;
  int iStack000000000000008c;
  uint uStack0000000000000090;
  undefined8 in_stack_000000a0;
  float fStack00000000000000a8;
  uint uStack00000000000000ac;
  byte in_stack_000000b8;
  int iStack00000000000000c0;
  float fStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  float fStack00000000000000d0;
  byte bStack00000000000000d8;
  uint uStack00000000000000dc;
  float fStack00000000000000e0;
  float fStack00000000000000ec;
  float fStack00000000000000f0;
  undefined8 *in_stack_000000f8;
  undefined8 *in_stack_00000100;
  float in_stack_00000108;
  long in_stack_00000110;
  undefined8 uStack0000000000000118;
  float fStack0000000000000120;
  undefined4 uStack0000000000000124;
  float fStack0000000000000128;
  float fStack000000000000012c;
  float fStack0000000000000130;
  int iStack0000000000000138;
  undefined8 in_stack_00000140;
  undefined8 uStack0000000000000148;
  float in_stack_00000150;
  float fStack0000000000000158;
  float fStack000000000000015c;
  long *in_stack_00000160;
  uint uStack0000000000000168;
  undefined4 uStack000000000000016c;
  float fStack0000000000000170;
  float fStack0000000000000174;
  int iStack0000000000000178;
  float fStack000000000000017c;
  float in_stack_00000180;
  float in_stack_00000188;
  long *in_stack_00000190;
  float in_stack_000001a0;
  long *in_stack_000001a8;
  float fStack00000000000001bc;
  long in_stack_000001c0;
  long *in_stack_000001c8;
  uint *in_stack_000001d0;
  undefined8 in_stack_000001d8;
  long in_stack_000001e0;
  long *in_stack_000001e8;
  uint in_stack_000015dc;
  uint in_stack_0000160c;
  undefined8 in_stack_00001688;
  char in_stack_00001694;
  float in_stack_00001698;
  uint in_stack_0000169c;
  undefined8 in_stack_000016a0;
  long in_stack_00001a38;
  
code_r0x0378e69c:
  in_stack_000016a0 =
       CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),unaff_w29 | unaff_w28 << 0x10);
  uVar19 = FUN_0219f8b8(param_2,param_3 + 0x6a0,&stack0x00001530,*param_1);
  iVar17 = (int)unaff_x27;
  if ((uVar19 & 1) == 0) goto LAB_0378e604;
  lVar27 = *in_stack_000001e8;
  if (lVar27 != 0) {
    if (unaff_w21 < *(uint *)(lVar27 + 0x18)) {
      fVar52 = *(float *)(unaff_x19 + 0x2e0);
      fVar54 = *(float *)(unaff_x19 + 0x180);
      lVar27 = lVar27 + unaff_w21 * unaff_x27;
      fVar47 = *(float *)(unaff_x19 + 0x2f4);
      fVar55 = *(float *)(lVar27 + 0x148);
      fVar57 = *(float *)(lVar27 + 0x150);
      FUN_037793d0(&stack0x00001530,0);
      fVar48 = (float)FUN_03779388(&stack0x00001550,0);
      FUN_037793e0(&stack0x00001530,0);
      fVar49 = (float)FUN_03779398(&stack0x00001548,0);
      FUN_03778e64(((fVar55 - fVar47) / unaff_s13 + fVar48) - fVar49,&stack0x000015e0,0);
      FUN_037793d0(&stack0x00001530,0);
      fVar47 = (float)FUN_03779390(&stack0x00001550,0);
      FUN_037793e0(&stack0x00001530,0);
      fVar48 = (float)FUN_037793a0(&stack0x00001548,0);
      FUN_03778e74(((fVar57 - ((unaff_s11 - fVar52) + fVar54)) / unaff_s13 + fVar47) - fVar48,
                   &stack0x000015e0,0);
      in_stack_00000188 = 0.0;
LAB_0378dfc4:
      fVar47 = unaff_s13;
      fVar48 = (float)FUN_03778e6c(&stack0x000015e0,0);
      fVar49 = (float)FUN_03778e6c(&stack0x000015e0,0);
      if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
        fVar54 = *(float *)(unaff_x19 + 0x2f4);
        fVar52 = (float)FUN_03776cb4(&stack0x000015f0,0);
        fVar54 = fVar54 - fVar47 * fVar52 * (1.0 - *(float *)(unaff_x19 + 0x1594));
        *(float *)(unaff_x19 + 0x2f4) = fVar54;
        if ((unaff_w25 != 0) || (in_stack_0000169c == 0x200b)) {
          *(float *)(unaff_x19 + 0x2f4) =
               fVar54 - fStack0000000000000158 * *(float *)(in_stack_000001e0 + 0xc4);
        }
      }
      fVar52 = *(float *)(unaff_x19 + 0x2f0);
      if (fVar52 == 0.0) {
        fVar52 = 0.0;
      }
      else {
        fVar54 = (float)FUN_03776c94(&stack0x000015f0,0);
        fVar55 = (float)FUN_03776ca4(&stack0x000015f0,0);
        fVar52 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                 (fVar52 * 0.5 - fVar47 * (fVar54 * 0.5 + fVar55));
        *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2f4) + fVar52;
      }
      uVar13 = 0;
      if ((unaff_w20 == 0) && (*unaff_x24 == '\x01')) {
        uVar13 = *(uint *)(unaff_x19 + 0x124) & 1;
      }
      lVar27 = *in_stack_00000190;
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_036cee6c(lVar27,0,0);
      puVar6 = Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__;
      if (uVar13 == 0) {
        fVar54 = 0.0;
        if ((uVar19 & 1) != 0) {
          lVar27 = *in_stack_00000190;
          if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar27 == 0) goto LAB_03793c9c;
          uVar19 = FUN_03699d3c(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
          if ((uVar19 & 1) != 0) {
            lVar27 = *in_stack_00000190;
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            if (lVar27 == 0) goto LAB_03793c9c;
            uVar19 = FUN_03699d3c(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xe4),0
                                 );
            if ((uVar19 & 1) != 0) {
              lVar27 = *in_stack_00000190;
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              if (lVar27 != 0) {
                fVar55 = (float)FUN_0369e060(lVar27,*(undefined4 *)
                                                     (*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
                plVar43 = (long *)PTR_DAT_03cbe438;
                if ((*unaff_x26 != 0) && (*in_stack_00000190 != 0)) {
                  fVar46 = *(float *)(*unaff_x26 + 0x188);
                  fVar57 = (float)FUN_0369e060(*in_stack_00000190,
                                               *(undefined4 *)
                                                (*(long *)(*(long *)puVar6 + 0xb8) + 0xe4),0);
                  fVar57 = fVar57 * fVar55 * fVar46 * 0.25;
                  if (fVar55 < in_stack_000001a0 + fVar57) {
                    in_stack_000001a0 = fVar55 - fVar57;
                  }
                  goto LAB_0378e344;
                }
              }
              goto LAB_03793c9c;
            }
          }
        }
        fVar57 = 0.0;
        plVar43 = (long *)PTR_DAT_03cbe438;
      }
      else {
        fVar57 = 0.0;
        plVar43 = (long *)PTR_DAT_03cbe438;
        if ((uVar19 & 1) != 0) {
          lVar27 = *in_stack_00000190;
          if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar27 == 0) goto LAB_03793c9c;
          uVar19 = FUN_03699d3c(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
          plVar43 = (long *)PTR_DAT_03cbe438;
          if ((uVar19 & 1) != 0) {
            lVar27 = *in_stack_00000190;
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            if (lVar27 == 0) goto LAB_03793c9c;
            fVar54 = (float)FUN_0369e060(lVar27,*(undefined4 *)
                                                 (*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
            if (*unaff_x26 == 0) goto LAB_03793c9c;
            fVar55 = (float)FUN_03779d1c(*unaff_x26,0);
            plVar43 = (long *)PTR_DAT_03cbe438;
            if (*in_stack_00000190 == 0) goto LAB_03793c9c;
            fVar57 = (float)FUN_0369e060(*in_stack_00000190,
                                         *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xe4),0
                                        );
            fVar57 = fVar54 * fVar55 * 0.25 * fVar57;
            if (fVar54 < in_stack_000001a0 + fVar57) {
              in_stack_000001a0 = fVar54 - fVar57;
            }
          }
        }
        if (*unaff_x26 == 0) goto LAB_03793c9c;
        fVar54 = (float)FUN_03779d2c(*unaff_x26,0);
      }
LAB_0378e344:
      fVar61 = *(float *)(unaff_x19 + 0x2f4);
      fVar55 = (float)FUN_03776ca4(&stack0x000015f0,0);
      fVar64 = *(float *)(unaff_x19 + 0x19a8);
      fVar46 = (float)FUN_03778e5c(&stack0x000015e0,0);
      fVar61 = fVar61 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                        fVar47 * (fVar46 + ((fVar55 * fVar64 - in_stack_000001a0) - fVar57));
      fVar55 = (float)FUN_03776cac(&stack0x000015f0,0);
      fVar46 = (float)FUN_03778e6c(&stack0x000015e0,0);
      fStack00000000000001bc =
           *(float *)(unaff_x19 + 0x180) +
           ((unaff_s11 + fVar47 * (in_stack_000001a0 + fVar55 + fVar46)) -
           *(float *)(unaff_x19 + 0x2e0));
      fVar55 = (float)FUN_03776c9c(&stack0x000015f0,0);
      fVar64 = fStack00000000000001bc - fVar47 * (in_stack_000001a0 + in_stack_000001a0 + fVar55);
      fVar55 = (float)FUN_03776c94(&stack0x000015f0,0);
      fVar56 = fVar61 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                        fVar47 * (fVar57 + fVar57 +
                                 in_stack_000001a0 + in_stack_000001a0 +
                                 fVar55 * *(float *)(unaff_x19 + 0x19a8));
      fVar55 = fVar61;
      fVar46 = fVar56;
      if (((unaff_w20 == 0) && (*unaff_x24 == '\x01')) &&
         ((*(byte *)(unaff_x19 + 0x124) >> 1 & 1) != 0)) {
        if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
        iVar14 = *(int *)(unaff_x19 + 0x19a4);
        fVar55 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
        if (*unaff_x26 == 0) goto LAB_03793c9c;
        fVar46 = (float)FUN_037769b0(*unaff_x26 + 0xb0,0);
        if (*unaff_x26 == 0) goto LAB_03793c9c;
        fVar68 = *(float *)(unaff_x19 + 0xf0);
        fVar50 = *(float *)(unaff_x19 + 0x180);
        fVar62 = (float)iVar14 * fStack00000000000000a8;
        fVar66 = (float)FUN_03776960(*unaff_x26 + 0xb0,0);
        fVar66 = fVar66 * fVar68 * (fVar55 - (fVar46 + fVar50)) * 0.5;
        fVar55 = (float)FUN_03776cac(&stack0x000015f0,0);
        fVar46 = fVar62 * fVar47 * ((fVar57 + in_stack_000001a0 + fVar55) - fVar66);
        fVar68 = (float)FUN_03776cac(&stack0x000015f0,0);
        fVar50 = (float)FUN_03776c9c(&stack0x000015f0,0);
        fStack00000000000001bc = fStack00000000000001bc + 0.0;
        fVar55 = fVar61 + fVar46;
        fVar64 = fVar64 + 0.0;
        fVar46 = fVar56 + fVar46;
        fVar62 = fVar62 * fVar47 * ((((fVar68 - fVar50) - in_stack_000001a0) - fVar57) - fVar66);
        fVar61 = fVar61 + fVar62;
        fVar56 = fVar56 + fVar62;
      }
      uVar60 = *in_stack_000000f8;
      uVar63 = *_fStack00000000000000f0;
      if (DAT_0411f169 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cbdeb8);
        DAT_0411f169 = '\x01';
      }
      uVar51 = **(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8);
      uVar53 = (*(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8))[1];
      fVar57 = 0.0;
      if (DAT_00d38b04 <
          (float)((ulong)uVar63 >> 0x20) * (float)((ulong)uVar53 >> 0x20) +
          (float)uVar63 * (float)uVar53 +
          (float)uVar60 * (float)uVar51 +
          (float)((ulong)uVar60 >> 0x20) * (float)((ulong)uVar51 >> 0x20)) {
        fVar59 = 0.0;
        fVar62 = 0.0;
        fVar50 = 0.0;
        fVar66 = fStack00000000000001bc;
        fVar68 = fVar64;
      }
      else {
        FUN_036be00c(&stack0x000016a0,*(undefined4 *)(unaff_x19 + 0x19b4),
                     *(undefined4 *)(unaff_x19 + 0x19b8),*(undefined4 *)(unaff_x19 + 0x19bc),
                     *(undefined4 *)(unaff_x19 + 0x19c0),0);
        fVar65 = (fVar46 + fVar61) * 0.5;
        fVar67 = (fVar64 + fStack00000000000001bc) * 0.5;
        fStack00000000000001bc = fStack00000000000001bc - fVar67;
        fVar50 = 0.0;
        fVar66 = fStack00000000000001bc;
        fVar55 = (float)FUN_036bdd2c(fVar55 - fVar65,&stack0x000014d0,0);
        fVar55 = fVar65 + fVar55;
        fVar50 = fVar50 + 0.0;
        fVar68 = fVar64 - fVar67;
        fVar62 = 0.0;
        fVar64 = fVar68;
        fVar61 = (float)FUN_036bdd2c(fVar61 - fVar65,&stack0x000014d0,0);
        fVar61 = fVar65 + fVar61;
        fVar64 = fVar67 + fVar64;
        fVar62 = fVar62 + 0.0;
        fVar59 = 0.0;
        fVar46 = (float)FUN_036bdd2c(fVar46 - fVar65,&stack0x000014d0,0);
        fVar46 = fVar65 + fVar46;
        fStack00000000000001bc = fVar67 + fStack00000000000001bc;
        fVar59 = fVar59 + 0.0;
        fVar57 = 0.0;
        fVar56 = (float)FUN_036bdd2c(fVar56 - fVar65,&stack0x000014d0,0);
        fVar56 = fVar65 + fVar56;
        fVar57 = fVar57 + 0.0;
        fVar66 = fVar67 + fVar66;
        fVar68 = fVar67 + fVar68;
      }
      lVar27 = *in_stack_000001e8;
      if (lVar27 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar27 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
      lVar27 = lVar27 + (long)(int)*in_stack_000001d0 * unaff_x27;
      *(float *)(lVar27 + 0x124) = fVar61;
      *(float *)(lVar27 + 0x128) = fVar64;
      *(float *)(lVar27 + 300) = fVar62;
      lVar27 = *in_stack_000001e8;
      if (lVar27 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar27 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
      lVar27 = lVar27 + (long)(int)*in_stack_000001d0 * unaff_x27;
      *(float *)(lVar27 + 0x118) = fVar55;
      *(float *)(lVar27 + 0x11c) = fVar66;
      *(float *)(lVar27 + 0x120) = fVar50;
      lVar27 = *in_stack_000001e8;
      if (lVar27 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar27 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
      lVar27 = lVar27 + (long)(int)*in_stack_000001d0 * unaff_x27;
      *(float *)(lVar27 + 0x138) = fVar59;
      *(float *)(lVar27 + 0x130) = fVar46;
      *(float *)(lVar27 + 0x134) = fStack00000000000001bc;
      lVar27 = *in_stack_000001e8;
      if (lVar27 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar27 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
      lVar27 = lVar27 + (long)(int)*in_stack_000001d0 * unaff_x27;
      *(float *)(lVar27 + 0x13c) = fVar56;
      *(float *)(lVar27 + 0x140) = fVar68;
      *(float *)(lVar27 + 0x144) = fVar57;
      lVar27 = *in_stack_000001e8;
      if (lVar27 == 0) goto LAB_03793c9c;
      uVar13 = *in_stack_000001d0;
      fVar57 = *(float *)(unaff_x19 + 0x2f4);
      fVar55 = (float)FUN_03778e5c(&stack0x000015e0,0);
      if (*(uint *)(lVar27 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
      *(float *)(lVar27 + (long)(int)uVar13 * unaff_x27 + 0x148) = fVar57 + fVar47 * fVar55;
      lVar27 = *in_stack_000001e8;
      if (lVar27 == 0) goto LAB_03793c9c;
      uVar13 = *in_stack_000001d0;
      fVar56 = *(float *)(unaff_x19 + 0x2e0);
      fVar57 = *(float *)(unaff_x19 + 0x180);
      fVar55 = (float)FUN_03778e6c(&stack0x000015e0,0);
      if (*(uint *)(lVar27 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
      *(float *)(lVar27 + (long)(int)uVar13 * unaff_x27 + 0x150) =
           (unaff_s11 - fVar56) + fVar57 + fVar47 * fVar55;
      lVar27 = *in_stack_000001e8;
      if (lVar27 == 0) goto LAB_03793c9c;
      uVar13 = *in_stack_000001d0;
      lVar41 = (long)(int)uVar13;
      if (*(uint *)(lVar27 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
      *(float *)(lVar27 + lVar41 * unaff_x27 + 0x168) = (fVar46 - fVar61) / (fVar66 - fVar64);
      fVar48 = fVar47 * (in_stack_00000180 + fVar48);
      if (*unaff_x24 == '\x01') {
        fVar48 = fVar48 / fStack000000000000017c;
        fVar49 = (fVar47 * (fStack0000000000000170 + fVar49)) / fStack000000000000017c;
      }
      else {
        fVar49 = fVar47 * (fStack0000000000000170 + fVar49);
      }
      uVar30 = *(uint *)(unaff_x19 + 0x328);
      fVar55 = *(float *)(unaff_x19 + 0x180);
      bVar8 = uVar13 == uVar30;
      bVar9 = unaff_w25 == 0;
      fVar48 = fVar55 + fVar48;
      if (bVar9 || bVar8) {
        fVar49 = fVar55 + fVar49;
        fVar57 = fVar48;
        fVar46 = fVar49;
        if (fVar55 != 0.0) {
          fVar57 = (fVar48 - fVar55) / *(float *)(unaff_x19 + 0xf0);
          fVar46 = (fVar49 - fVar55) / *(float *)(unaff_x19 + 0xf0);
          if (fVar57 <= fVar48) {
            fVar57 = fVar48;
          }
          if (fVar49 <= fVar46) {
            fVar46 = fVar49;
          }
        }
        lVar33 = lVar27 + lVar41 * unaff_x27;
        fVar55 = fVar57;
        if (fVar57 <= *(float *)(unaff_x19 + 0x338)) {
          fVar55 = *(float *)(unaff_x19 + 0x338);
        }
        fVar64 = fVar46;
        if (*(float *)(unaff_x19 + 0x33c) <= fVar46) {
          fVar64 = *(float *)(unaff_x19 + 0x33c);
        }
        *(float *)(unaff_x19 + 0x338) = fVar55;
        *(float *)(unaff_x19 + 0x33c) = fVar64;
        *(float *)(lVar33 + 0x158) = fVar57;
        *(float *)(lVar33 + 0x15c) = fVar46;
        fVar57 = *(float *)(unaff_x19 + 0x2e0);
        fVar46 = fVar48 - fVar57;
      }
      else {
        fVar55 = *(float *)(unaff_x19 + 0x338);
        lVar33 = lVar27 + lVar41 * unaff_x27;
        *(float *)(lVar33 + 0x158) = fVar55;
        fVar49 = *(float *)(unaff_x19 + 0x33c);
        *(float *)(lVar33 + 0x15c) = fVar49;
        fVar57 = *(float *)(unaff_x19 + 0x2e0);
        fVar46 = fVar55 - fVar57;
      }
      *(float *)(lVar33 + 0x14c) = fVar46;
      *(float *)(lVar27 + lVar41 * unaff_x27 + 0x154) = fVar49 - fVar57;
      *(float *)(unaff_x19 + 0x378) = fVar49 - fVar57;
      if ((*(int *)(unaff_x19 + 0x340) == 0) || (*(char *)(unaff_x19 + 0x37c) != '\0')) {
        if (bVar9 || bVar8) {
          *(float *)(unaff_x19 + 0x374) = fVar55;
          if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
          fVar49 = *(float *)(unaff_x19 + 0x370);
          fVar55 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
          fVar57 = *(float *)(unaff_x19 + 0x2e0);
          fStack000000000000017c = (fVar47 * fVar55) / fStack000000000000017c;
          if (fVar49 <= fStack000000000000017c) {
            fVar49 = fStack000000000000017c;
          }
          *(float *)(unaff_x19 + 0x370) = fVar49;
          if (fVar57 == 0.0) goto LAB_0378ee0c;
        }
      }
      else if ((bVar9 || bVar8) && fVar57 == 0.0) {
LAB_0378ee0c:
        fVar49 = *(float *)(unaff_x19 + 0x19c8);
        if (*(float *)(unaff_x19 + 0x19c8) <= fVar48) {
          fVar49 = fVar48;
        }
        *(float *)(unaff_x19 + 0x19c8) = fVar49;
      }
      lVar27 = *in_stack_000001e8;
      if (lVar27 == 0) goto LAB_03793c9c;
      uVar24 = *in_stack_000001d0;
      if (*(uint *)(lVar27 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
      lVar27 = lVar27 + (long)(int)uVar24 * unaff_x27;
      *(undefined1 *)(lVar27 + 0x1a0) = 0;
      uVar38 = *(uint *)(unaff_x19 + 0x158) & 0x18;
      if ((in_stack_0000169c == 9) ||
         ((((unaff_w25 == 0 && (in_stack_0000169c != 3)) &&
           ((in_stack_0000169c != 0x200b && (in_stack_0000169c != 0xad)))) ||
          (((in_stack_0000169c == 0xad & (in_stack_000000b8 ^ 0xff)) != 0 || (*unaff_x24 == '\x02'))
          )))) {
        *(undefined1 *)(lVar27 + 0x1a0) = 1;
        pfVar28 = _fStack0000000000000130;
        pfVar37 = _iStack0000000000000138;
        if (unaff_w23 != 0) {
          lVar27 = *(long *)(in_stack_000001c0 + 0x48);
          if (lVar27 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
          lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
          pfVar37 = (float *)(lVar27 + 100);
          pfVar28 = (float *)(lVar27 + 0x68);
        }
        fVar55 = *pfVar37;
        fVar49 = *pfVar28;
        fVar48 = *(float *)(unaff_x19 + 0x35c);
        fVar46 = *(float *)(unaff_x19 + 0x2f4);
        fStack0000000000000174 = (fStack000000000000012c - fVar55) - fVar49;
        bVar8 = true;
        if ((fVar48 <= fStack0000000000000174) && (bVar8 = false, !NAN(fVar48))) {
          bVar8 = fVar48 == -1.0;
        }
        if (!bVar8) {
          fStack0000000000000174 = fVar48;
        }
        fVar48 = 0.0;
        fVar64 = 0.0;
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          fVar64 = (float)FUN_03776cb4(&stack0x000015f0,0);
          fVar57 = *(float *)(unaff_x19 + 0x2e0);
        }
        fVar61 = *(float *)(unaff_x19 + 0x1594);
        fVar56 = *(float *)(unaff_x19 + 0x33c);
        if (in_stack_0000169c != 0xad) {
          fStack000000000000015c = fVar47;
        }
        if ((0.0 < fVar57) && (fVar48 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
          fVar48 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
        }
        uVar24 = *in_stack_000001d0;
        fVar48 = (*(float *)(unaff_x19 + 0x374) - (fVar56 - fVar57)) + fVar48;
        if (fVar48 <= in_stack_00000108) goto switchD_0378f0dc_caseD_2;
        if (*(int *)(unaff_x19 + 0x34c) == -1) {
          *(uint *)(unaff_x19 + 0x34c) = uVar24;
        }
        uVar60 = DAT_00d37868;
        if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
          fVar66 = *(float *)(in_stack_000001e0 + 0xd0);
          if (((*(float *)(unaff_x19 + 0x15b0) <= fVar66) || (fVar57 <= 0.0)) ||
             (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
            fVar57 = *_fStack00000000000000d0;
            fVar48 = *(float *)(in_stack_000001e0 + 0xac);
            if ((fVar57 <= fVar48) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))
               ) goto LAB_0378f0b8;
            fVar47 = (fVar57 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
            if (fVar47 <= DAT_00d38b84) {
              fVar47 = DAT_00d38b84;
            }
            fVar49 = (fVar57 - fVar47) * 20.0 + 0.5;
            fVar47 = DAT_00d38e60;
            if (fVar49 != INFINITY) {
              fVar47 = (float)(int)fVar49 / 20.0;
            }
            if (fVar47 <= fVar48) {
              fVar47 = fVar48;
            }
            *(float *)(unaff_x19 + 0x1598) = fVar57;
LAB_037910ac:
            *(float *)(unaff_x19 + 0xec) = fVar47;
          }
          else {
            fVar47 = *(float *)(unaff_x19 + 0x15b0) +
                     ((in_stack_00000018._4_4_ - fVar48) / (float)*(int *)(unaff_x19 + 0x340)) /
                     fStack0000000000000088;
            if (fVar47 <= fVar66) {
              fVar47 = fVar66;
            }
LAB_03793b50:
            *(float *)(unaff_x19 + 0x15b0) = fVar47;
          }
          goto LAB_0378c81c;
        }
LAB_0378f0b8:
        switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
        case 1:
          if (*(int *)(unaff_x19 + 0x340) < 1) goto switchD_0378f0dc_caseD_2;
          iVar14 = FUN_020aa428(in_stack_00000078,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                               );
          in_stack_00001688 = DAT_00d37868;
          if (iVar14 == 0) {
            in_stack_000001d0[0] = 0;
            in_stack_000001d0[1] = 0;
            in_stack_0000160c = 0xffffffff;
          }
          else {
            FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
            memcpy(&stack0x00001138,&stack0x000016a0,0x398);
            iVar16 = FUN_03797154();
            iVar14 = *(int *)(unaff_x19 + 0x324) + -1;
            *(int *)(unaff_x19 + 0x324) = iVar14;
            in_stack_00001688 = CONCAT44(0x2026,iVar14);
            in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
            in_stack_0000160c = iVar16 - 1;
          }
          break;
        default:
switchD_0378f0dc_caseD_2:
          if ((unaff_x22 & 1) == 0) {
LAB_0378f1e0:
            if (unaff_w25 == 0) {
              if (in_stack_0000169c != 0xad) {
                if (*unaff_x24 == '\x02') {
                  FUN_0379c8ac();
                }
                else if (*unaff_x24 == '\x01') {
                  FUN_0379bd40(in_stack_000001a0);
                }
                uVar24 = *in_stack_000001d0;
                if ((uStack00000000000000ac & 1) != 0) {
                  *(uint *)(unaff_x19 + 0x330) = uVar24;
                }
                *(uint *)(unaff_x19 + 0x334) = uVar24;
                *(int *)(unaff_x19 + 0x344) = *(int *)(unaff_x19 + 0x344) + 1;
                lVar27 = *(long *)(in_stack_000001c0 + 0x48);
                if (lVar27 != 0) {
                  if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar27 + 0x18)) {
                    lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                    uStack00000000000000ac = 0;
                    *(float *)(lVar27 + 100) = fVar55;
                    *(float *)(lVar27 + 0x68) = fVar49;
                    goto LAB_0378f884;
                  }
                  goto thunk_FUN_01ab6c44;
                }
                goto LAB_03793c9c;
              }
              lVar27 = *in_stack_000001e8;
              if (lVar27 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar27 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
              *(undefined1 *)(lVar27 + (long)(int)uVar24 * (long)iVar17 + 0x1a0) = 0;
            }
            else {
              lVar27 = *in_stack_000001e8;
              if (lVar27 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar27 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
              *(undefined1 *)(lVar27 + (long)(int)uVar24 * (long)iVar17 + 0x1a0) = 0;
              *(uint *)(unaff_x19 + 0x334) = uVar24;
              lVar27 = *(long *)(in_stack_000001c0 + 0x48);
              if (lVar27 == 0) goto LAB_03793c9c;
              uVar24 = *(uint *)(lVar27 + 0x18);
              if (uVar24 <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
              lVar41 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
              iVar14 = *(int *)(lVar41 + 0x2c) + 1;
              *(int *)(lVar41 + 0x2c) = iVar14;
              *(int *)(unaff_x19 + 0x348) = iVar14;
              if (uVar24 <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
              lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
              *(float *)(lVar27 + 100) = fVar55;
              *(float *)(lVar27 + 0x68) = fVar49;
              *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
            }
            goto LAB_0378f884;
          }
          fVar57 = ABS(fVar46) + fVar64 * (1.0 - fVar61) * fStack000000000000015c;
          fVar48 = 1.0;
          if (uVar38 != 0) {
            fVar48 = DAT_00d38acc;
          }
          if (fVar57 <= fVar48 * fStack0000000000000174) goto LAB_0378f1e0;
          if ((iStack000000000000008c == 0) || (uVar24 == *(uint *)(unaff_x19 + 0x328))) {
            if ((*(char *)(in_stack_000001e0 + 0xa8) == '\0') ||
               (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
LAB_0378f2f0:
              iVar14 = *(int *)(in_stack_000001e0 + 0x74);
              if (iVar14 == 1) {
                iVar14 = FUN_020aa428(in_stack_00000078,
                                      *(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                                     );
                in_stack_00001688 = DAT_00d37868;
                if (iVar14 == 0) {
                  in_stack_000001d0[0] = 0;
                  in_stack_000001d0[1] = 0;
                  in_stack_0000160c = 0xffffffff;
                }
                else {
                  FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__
                              );
                  memcpy(&stack0x00000a08,&stack0x000016a0,0x398);
                  iVar16 = FUN_03797154();
                  iVar14 = *(int *)(unaff_x19 + 0x324) + -1;
                  *(int *)(unaff_x19 + 0x324) = iVar14;
                  in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
                  in_stack_0000160c = iVar16 - 1;
                  in_stack_00001688 = CONCAT44(0x2026,iVar14);
                }
                break;
              }
              if (iVar14 == 6) {
                in_stack_0000160c = FUN_03797154();
                uVar24 = *(uint *)(unaff_x19 + 0x324);
              }
              else {
                if (iVar14 != 3) goto LAB_0378f1e0;
                in_stack_0000160c = FUN_03797154();
              }
              goto LAB_037909d0;
            }
            fVar46 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
            if (fVar46 <= fVar61) {
              fVar46 = *(float *)(in_stack_000001e0 + 0xac);
              fVar64 = *_fStack00000000000000d0;
              if (fVar64 <= fVar46) goto LAB_0378f2f0;
LAB_03793bbc:
              fVar47 = (fVar64 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
              if (fVar47 <= DAT_00d38b84) {
                fVar47 = DAT_00d38b84;
              }
              *(float *)(unaff_x19 + 0x1598) = fVar64;
              fVar48 = (fVar64 - fVar47) * 20.0 + 0.5;
              fVar47 = DAT_00d38e60;
              if (fVar48 != INFINITY) {
                fVar47 = (float)(int)fVar48 / 20.0;
              }
              if (fVar47 <= fVar46) {
                fVar47 = fVar46;
              }
              goto LAB_037910ac;
            }
            fVar47 = fVar57 / (1.0 - fVar61);
            if (fVar61 <= 0.0) {
              fVar47 = fVar57;
            }
            fVar61 = fVar61 + (fVar57 - fVar48 * (fStack0000000000000174 + DAT_00d38cc4)) / fVar47;
FUN_03793c4c:
            if (fVar46 <= fVar61) {
              fVar61 = fVar46;
            }
            *(float *)(unaff_x19 + 0x1594) = fVar61;
            goto LAB_0378c81c;
          }
          in_stack_0000160c = FUN_03797154();
          if (*(float *)(unaff_x19 + 0x2e4) == DAT_00d38ba4) {
            lVar27 = *in_stack_000001e8;
            if (lVar27 == 0) goto LAB_03793c9c;
            uVar25 = *in_stack_000001d0;
            if (*(uint *)(lVar27 + 0x18) <= uVar25) goto thunk_FUN_01ab6c44;
            fVar64 = *(float *)(unaff_x19 + 0x2e0);
            fVar46 = 0.0;
            if ((0.0 < fVar64) && (fVar46 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
              fVar46 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
            }
            fVar46 = fStack0000000000000158 * *(float *)(in_stack_000001e0 + 200) +
                     *(float *)(lVar27 + (long)(int)uVar25 * unaff_x27 + 0x158) +
                     (fVar46 - *(float *)(unaff_x19 + 0x33c)) +
                     fStack0000000000000088 *
                     (in_stack_00000080._4_4_ + *(float *)(unaff_x19 + 0x15b0));
          }
          else {
            fVar46 = *(float *)(in_stack_000001e0 + 200);
            *(undefined1 *)(unaff_x19 + 0x2e8) = 1;
            lVar27 = *in_stack_000001e8;
            if (lVar27 == 0) goto LAB_03793c9c;
            fVar64 = *(float *)(unaff_x19 + 0x2e0);
            uVar25 = *(uint *)(unaff_x19 + 0x324);
            fVar46 = *(float *)(unaff_x19 + 0x2e4) + fStack0000000000000158 * fVar46;
          }
          if ((*(uint *)(lVar27 + 0x18) <= uVar25) ||
             (uVar42 = uVar25 - 1, *(uint *)(lVar27 + 0x18) <= uVar42)) goto thunk_FUN_01ab6c44;
          fVar56 = (fVar46 + *(float *)(unaff_x19 + 0x374) + fVar64) -
                   *(float *)(lVar27 + (long)(int)uVar25 * (long)iVar17 + 0x15c);
          if (((in_stack_000000b8 & 1) == 0 &&
               *(short *)(lVar27 + (long)(int)uVar42 * (long)iVar17 + 0x20) == 0xad) &&
             ((fVar56 < in_stack_00000108 || (*(int *)(in_stack_000001e0 + 0x74) == 0)))) {
            in_stack_000000b8 = 0;
            *in_stack_000001d0 = uVar42;
            in_stack_0000160c = in_stack_0000160c - 1;
            in_stack_00001688 = CONCAT44(0x2d,uVar42);
            break;
          }
          if (*(short *)(lVar27 + (long)(int)uVar25 * unaff_x27 + 0x20) == 0xad) {
            in_stack_000000b8 = 1;
            break;
          }
          if ((bStack00000000000000d8 & *(byte *)(in_stack_000001e0 + 0xa8) & 1) != 0) {
            fVar61 = *(float *)(unaff_x19 + 0x1594);
            fVar46 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
            if ((fVar46 <= fVar61) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))
               ) {
              fVar64 = *_fStack00000000000000d0;
              fVar46 = *(float *)(in_stack_000001e0 + 0xac);
              if ((fVar46 < fVar64) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))
                 ) goto LAB_03793bbc;
              goto LAB_03790b7c;
            }
LAB_03793c60:
            fVar47 = fVar57;
            if (0.0 < fVar61) {
              fVar47 = fVar57 / (1.0 - fVar61);
            }
            fVar61 = fVar61 + (fVar57 - fVar48 * (fStack0000000000000174 + DAT_00d38cc4)) / fVar47;
            goto FUN_03793c4c;
          }
LAB_03790b7c:
          iVar14 = *in_stack_00000030;
          if ((iVar14 != iStack0000000000000028) && ((bStack00000000000000d8 & iVar14 != -1) != 0))
          {
            in_stack_0000160c = FUN_03797154();
            plVar43 = (long *)PTR_DAT_03cbe438;
            lVar27 = *(long *)(in_stack_000001c0 + 0x30);
            if (lVar27 == 0) goto LAB_03793c9c;
            uVar25 = *in_stack_000001d0;
            uVar42 = uVar25 - 1;
            if (*(uint *)(lVar27 + 0x18) <= uVar42) goto thunk_FUN_01ab6c44;
            iStack0000000000000028 = iVar14;
            if (*(short *)(lVar27 + (long)(int)uVar42 * (long)iVar17 + 0x20) == 0xad) {
              in_stack_000000b8 = 0;
              *in_stack_000001d0 = uVar42;
              in_stack_0000160c = in_stack_0000160c - 1;
              in_stack_00001688 = CONCAT44(0x2d,uVar42);
              break;
            }
          }
          if (fVar56 <= in_stack_00000108) {
            FUN_037a1530(fStack0000000000000088);
            bStack00000000000000d8 = 1;
            in_stack_000000b8 = 0;
            uStack00000000000000ac = 1;
            break;
          }
          if (*(int *)(unaff_x19 + 0x34c) == -1) {
            *(uint *)(unaff_x19 + 0x34c) = uVar25;
          }
          if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
            fVar46 = *(float *)(in_stack_000001e0 + 0xd0);
            if ((fVar46 < *(float *)(unaff_x19 + 0x15b0)) &&
               (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
              fVar47 = *(float *)(unaff_x19 + 0x15b0) +
                       ((in_stack_00000018._4_4_ - fVar56) /
                       (float)(*(int *)(unaff_x19 + 0x340) + 1)) / fStack0000000000000088;
              if (fVar47 <= fVar46) {
                fVar47 = fVar46;
              }
              goto LAB_03793b50;
            }
            fVar61 = *(float *)(unaff_x19 + 0x1594);
            fVar46 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
            if ((fVar61 < fVar46) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
            goto LAB_03793c60;
            fVar64 = *_fStack00000000000000d0;
            fVar46 = *(float *)(in_stack_000001e0 + 0xac);
            if ((fVar46 < fVar64) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
            goto LAB_03793bbc;
          }
          switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
          case 0:
          case 2:
          case 4:
            FUN_037a1530(fStack0000000000000088);
            break;
          case 1:
            iVar14 = FUN_020aa428(in_stack_00000078,
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                                 );
            in_stack_00001688 = DAT_00d37868;
            if (iVar14 == 0) {
              in_stack_000000b8 = 0;
              in_stack_000001d0[0] = 0;
              in_stack_000001d0[1] = 0;
              in_stack_0000160c = 0xffffffff;
            }
            else {
              FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
              memcpy(&stack0x00000da0,&stack0x000016a0,0x398);
              iVar16 = FUN_03797154();
              in_stack_000000b8 = 0;
              iVar14 = *(int *)(unaff_x19 + 0x324) + -1;
              *(int *)(unaff_x19 + 0x324) = iVar14;
              in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
              in_stack_0000160c = iVar16 - 1;
              in_stack_00001688 = CONCAT44(0x2026,iVar14);
            }
            goto LAB_0378d260;
          case 3:
            in_stack_0000160c = FUN_03797154();
            in_stack_000000b8 = 0;
            goto LAB_037909d0;
          case 5:
            *(undefined1 *)(unaff_x19 + 0x37c) = 1;
            FUN_037a1530(fStack0000000000000088);
            *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
            *(undefined4 *)(unaff_x19 + 0x2e0) = 0;
            *(undefined4 *)(unaff_x19 + 0x374) = 0;
            *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
            *(int *)(unaff_x19 + 0x350) = *(int *)(unaff_x19 + 0x350) + 1;
            break;
          case 6:
            in_stack_000000b8 = 0;
            uVar24 = uVar25;
LAB_037909d0:
            in_stack_00001688 = CONCAT44(3,uVar24);
            goto LAB_0378d260;
          default:
            in_stack_000000b8 = 0;
            uVar24 = uVar25;
            goto LAB_0378f1e0;
          }
          in_stack_000000b8 = 0;
LAB_0379053c:
          bStack00000000000000d8 = 1;
          uStack00000000000000ac = 1;
          break;
        case 3:
          in_stack_0000160c = FUN_03797154();
          in_stack_00001688 = CONCAT44((int)((ulong)in_stack_00001688 >> 0x20),uVar24);
          break;
        case 5:
          if (uVar24 == 0 || (int)in_stack_0000160c < 0) {
            *in_stack_000001d0 = 0;
            in_stack_0000160c = 0xffffffff;
            in_stack_00001688 = uVar60;
          }
          else {
            fVar48 = *(float *)(unaff_x19 + 0x338);
            in_stack_0000160c = FUN_03797154();
            if (in_stack_00000108 < fVar48 - fVar56) goto LAB_0378f7e8;
            *(undefined4 *)(unaff_x19 + 0x328) = *(undefined4 *)(unaff_x19 + 0x324);
            *(undefined8 *)(unaff_x19 + 0x338) = _uStack0000000000000090;
            *(int *)(unaff_x19 + 0x340) = *(int *)(unaff_x19 + 0x340) + 1;
            *(undefined1 *)(unaff_x19 + 0x37c) = 1;
            *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
            *(undefined4 *)(unaff_x19 + 0x2e0) = 0;
            *(undefined4 *)(unaff_x19 + 0x374) = 0;
            *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
            *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
            *(int *)(unaff_x19 + 0x350) = *(int *)(unaff_x19 + 0x350) + 1;
          }
          break;
        case 6:
          in_stack_0000160c = FUN_03797154();
          in_stack_00001688 = CONCAT44(3,uVar24);
        }
LAB_0378d260:
        in_stack_0000160c = in_stack_0000160c + 1;
        lVar27 = *(long *)(unaff_x19 + 0x20);
        if (lVar27 == 0) goto LAB_03793c9c;
        if ((int)in_stack_0000160c < (int)*(uint *)(lVar27 + 0x18)) {
          if (*(uint *)(lVar27 + 0x18) <= in_stack_0000160c) goto thunk_FUN_01ab6c44;
          uVar13 = *(uint *)(lVar27 + (long)(int)in_stack_0000160c * 0x10 + 0x24);
          if (uVar13 == 0) goto LAB_03790fec;
          if (5 < in_stack_000001d8._4_4_) {
            uVar60 = FUN_0278d4e8(&stack0x0000169c,0);
            uVar63 = FUN_0276793c(&stack0x0000160c,0);
            uVar60 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar60,
                                  *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar63,0);
            if (*(int *)(*plVar43 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*plVar43);
            }
            FUN_0367ae18(uVar60,0);
            in_stack_00001688 = CONCAT44(3,*in_stack_000001d0);
          }
          in_stack_0000169c = uVar13;
          if (uVar13 == 0x1a) goto LAB_0378d260;
          if ((uVar13 == 0x3c) && (*(char *)(in_stack_000001e0 + 0xb5) != '\0')) {
            unaff_x24[0] = '\x01';
            unaff_x24[1] = '\x01';
            uVar19 = FUN_037974c0();
            if (((uVar19 & 1) != 0) && (in_stack_0000160c = in_stack_000015dc, *unaff_x24 == '\x01')
               ) goto LAB_0378d260;
          }
          else {
            lVar27 = *in_stack_000001e8;
            if (lVar27 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar27 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
            lVar27 = lVar27 + (long)(int)*in_stack_000001d0 * unaff_x27;
            *unaff_x24 = *(char *)(lVar27 + 0x28);
            *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar27 + 0x60);
            *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(lVar27 + 0x40);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001c8);
          }
          lVar27 = *in_stack_000001e8;
          if (lVar27 == 0) goto LAB_03793c9c;
          uVar13 = *(uint *)(unaff_x19 + 0x324);
          if (*(uint *)(lVar27 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
          lVar41 = (long)(int)uVar13;
          uVar45 = *(undefined4 *)(unaff_x19 + 0x78);
          unaff_w20 = (uint)*(byte *)(lVar27 + lVar41 * unaff_x27 + 100);
          unaff_x24[1] = '\0';
          if ((uint)in_stack_00001688 == uVar13) {
            in_stack_0000169c = (uint)((ulong)in_stack_00001688 >> 0x20);
            unaff_w23 = 1;
            *unaff_x24 = '\x01';
            if (in_stack_0000169c == 0x2026) {
              *(undefined8 *)(lVar27 + lVar41 * unaff_x27 + 0x30) =
                   *(undefined8 *)(unaff_x19 + 0x1a00);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar27 = *in_stack_000001e8;
              if (lVar27 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
              lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
              *(undefined1 *)(lVar27 + 0x28) = 1;
              *(undefined8 *)(lVar27 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1a08);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar27 = *in_stack_000001e8;
              if (lVar27 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
              *(undefined8 *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x58) =
                   *(undefined8 *)(unaff_x19 + 0x1a10);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar27 = *in_stack_000001e8;
              if (lVar27 == 0) goto LAB_03793c9c;
              uVar13 = *in_stack_000001d0;
              if (*(uint *)(lVar27 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
              unaff_w23 = 1;
              *(undefined4 *)(lVar27 + (long)(int)uVar13 * unaff_x27 + 0x60) =
                   *(undefined4 *)(unaff_x19 + 0x1a18);
              *(undefined1 *)
               (*(long *)(*(long *)
                           Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__
                         + 0xb8) + 8) = 1;
              in_stack_00001688 = CONCAT44(3,uVar13 + 1);
            }
            else if (in_stack_0000169c == 3) {
              if ((*in_stack_000001c8 == 0) ||
                 (lVar33 = FUN_03779b3c(*in_stack_000001c8,0), lVar33 == 0)) goto LAB_03793c9c;
              FUN_0219b634(lVar33,&stack0x00000978,&stack0x000016a0,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_List<IIdleAutoDespawn>>__ctor__
                          );
              if (*(uint *)(lVar27 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
              *(undefined8 *)(lVar27 + lVar41 * unaff_x27 + 0x30) = in_stack_000016a0;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              unaff_w23 = 1;
              *(undefined1 *)
               (*(long *)(*(long *)
                           Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__
                         + 0xb8) + 8) = 1;
              uVar13 = *in_stack_000001d0;
            }
          }
          else {
            unaff_w23 = 0;
          }
          if (((int)uVar13 < *(int *)(in_stack_000001e0 + 0xe4)) && (in_stack_0000169c != 3)) {
            lVar27 = *in_stack_000001e8;
            if (lVar27 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar27 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
            lVar27 = lVar27 + (long)(int)uVar13 * (long)iVar17;
            *(undefined1 *)(lVar27 + 0x1a0) = 0;
            *(undefined2 *)(lVar27 + 0x20) = 0x200b;
            *(undefined4 *)(lVar27 + 0x6c) = 0;
            *in_stack_000001d0 = uVar13 + 1;
            goto LAB_0378d260;
          }
          cVar23 = *unaff_x24;
          if (cVar23 == '\x01') {
            uVar13 = *(uint *)(unaff_x19 + 0x124);
            if ((uVar13 >> 4 & 1) == 0) {
              if ((uVar13 >> 3 & 1) == 0) {
                fStack000000000000017c = 1.0;
                if ((uVar13 >> 5 & 1) != 0) {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar19 = FUN_026b812c(in_stack_0000169c,0);
                  if ((uVar19 & 1) != 0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar13 = FUN_026b8410(in_stack_0000169c,0);
                    in_stack_0000169c = uVar13 & 0xffff;
                    fStack000000000000017c = fStack000000000000002c;
                  }
                }
              }
              else {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar19 = FUN_026b8070(in_stack_0000169c,0);
                fStack000000000000017c = 1.0;
                if ((uVar19 & 1) != 0) {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar13 = FUN_026b8594(in_stack_0000169c,0);
                  goto LAB_0378d3d0;
                }
              }
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar19 = FUN_026b812c(in_stack_0000169c,0);
              fStack000000000000017c = 1.0;
              if ((uVar19 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar13 = FUN_026b8410(in_stack_0000169c,0);
LAB_0378d3d0:
                fStack000000000000017c = 1.0;
                in_stack_0000169c = uVar13 & 0xffff;
              }
            }
            cVar23 = *unaff_x24;
          }
          else {
            fStack000000000000017c = 1.0;
          }
          if (cVar23 != '\x01') {
            if (cVar23 != '\x02') {
              lVar27 = *in_stack_000001e8;
              unaff_s11 = 0.0;
              unaff_s13 = fVar47;
              if (in_stack_0000169c == 3 || in_stack_0000169c == 0xad) {
                unaff_s13 = unaff_s11;
              }
              if (lVar27 == 0) goto LAB_03793c9c;
              uVar13 = *in_stack_000001d0;
              in_stack_00000180 = 0.0;
              fStack0000000000000170 = 0.0;
              goto LAB_0378dba8;
            }
            lVar27 = *in_stack_000001e8;
            if (lVar27 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar27 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
            plVar43 = *(long **)(lVar27 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x30);
            if (plVar43 == (long *)0x0) goto LAB_03793c9c;
            bVar11 = *(byte *)(*(long *)
                                Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__
                              + 0x130);
            if ((*(byte *)(*plVar43 + 0x130) < bVar11) ||
               (*(long *)(*(long *)(*plVar43 + 200) + (ulong)bVar11 * 8 + -8) !=
                *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__)) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6ee0(plVar43);
            }
            plVar18 = (long *)FUN_03783144(plVar43,0);
            if (plVar18 == (long *)0x0) {
              plVar18 = (long *)0x0;
              *in_stack_00000160 = 0;
            }
            else {
              lVar27 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Material>_Add__;
              bVar11 = *(byte *)(lVar27 + 0x130);
              if (*(byte *)(*plVar18 + 0x130) < bVar11) {
                plVar32 = (long *)0x0;
              }
              else {
                plVar32 = plVar18;
                if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar11 * 8 + -8) != lVar27) {
                  plVar32 = (long *)0x0;
                }
              }
              *in_stack_00000160 = (long)plVar32;
              if (*(byte *)(*plVar18 + 0x130) < bVar11) {
                plVar18 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar11 * 8 + -8) != lVar27) {
                plVar18 = (long *)0x0;
              }
            }
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (in_stack_00000160,plVar18);
            iVar14 = FUN_0377acf0(plVar43,0);
            *(int *)(unaff_x19 + 0x157c) = iVar14;
            if (in_stack_0000169c == 0x3c) {
              in_stack_0000169c = iVar14 + 0xe000;
            }
            else {
              uVar15 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
              *(undefined4 *)(unaff_x19 + 0x1580) = uVar15;
            }
            if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
            fVar47 = *(float *)(unaff_x19 + 0xf4);
            FUN_03779650(&stack0x000016a0,*(long *)(unaff_x19 + 0x68),0);
            memcpy(&stack0x00001610,&stack0x000016a0,0x60);
            iVar14 = FUN_03776950(&stack0x00001610,0);
            if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
            FUN_03779650(&stack0x000016a0,*in_stack_000001c8,0);
            memcpy(&stack0x00001610,&stack0x000016a0,0x60);
            fVar49 = (float)FUN_03776960(&stack0x00001610,0);
            fVar48 = in_stack_00000150;
            if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
              fVar48 = 1.0;
            }
            if (*in_stack_00000160 == 0) goto LAB_03793c9c;
            fVar48 = (fVar47 / (float)iVar14) * fVar49 * fVar48;
            iVar14 = FUN_03776950(*in_stack_00000160 + 0x48,0);
            fVar47 = *(float *)(unaff_x19 + 0xf4);
            if (iVar14 < 1) {
              if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
              iVar14 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
              if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
              fVar49 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
              fStack0000000000000170 = in_stack_00000150;
              if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                fStack0000000000000170 = 1.0;
              }
              if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
              fVar52 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
              if (plVar43[4] == 0) goto LAB_03793c9c;
              FUN_03776e6c(&stack0x000016a0,plVar43[4],0);
              fVar54 = (float)FUN_03776c9c(&stack0x000015c0,0);
              if (plVar43[4] == 0) goto LAB_03793c9c;
              fVar55 = *(float *)((long)plVar43 + 0x2c);
              fVar57 = (float)FUN_03776ea8(plVar43[4],0);
              if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
              in_stack_00000180 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
              if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
              fVar46 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
              if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
              fVar61 = *(float *)(unaff_x19 + 0xf0);
              fVar64 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
              if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
              unaff_s11 = fVar48 * fVar46 * fVar61 * fVar64;
              fStack0000000000000170 = (fVar47 / (float)iVar14) * fVar49 * fStack0000000000000170;
              fVar47 = fStack0000000000000170 * (fVar52 / fVar54) * fVar55 * fVar57;
              fStack0000000000000170 = fStack0000000000000170 / fVar47;
              in_stack_00000180 = fStack0000000000000170 * in_stack_00000180;
              fVar48 = (float)FUN_037769c0(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
              fStack0000000000000170 = fStack0000000000000170 * fVar48;
            }
            else {
              if (*in_stack_00000160 == 0) goto LAB_03793c9c;
              iVar14 = FUN_03776950(*in_stack_00000160 + 0x48,0);
              if (*in_stack_00000160 == 0) goto LAB_03793c9c;
              fVar49 = (float)FUN_03776960(*in_stack_00000160 + 0x48,0);
              if (plVar43[4] == 0) goto LAB_03793c9c;
              fVar54 = *(float *)((long)plVar43 + 0x2c);
              fVar52 = in_stack_00000150;
              if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                fVar52 = 1.0;
              }
              fVar55 = (float)FUN_03776ea8(plVar43[4],0);
              if (*in_stack_00000160 == 0) goto LAB_03793c9c;
              in_stack_00000180 = (float)FUN_03776980(*in_stack_00000160 + 0x48,0);
              if (*in_stack_00000160 == 0) goto LAB_03793c9c;
              fVar57 = (float)FUN_037769b0(*in_stack_00000160 + 0x48,0);
              if (*in_stack_00000160 == 0) goto LAB_03793c9c;
              fVar64 = *(float *)(unaff_x19 + 0xf0);
              fVar46 = (float)FUN_03776960(*in_stack_00000160 + 0x48,0);
              if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03793c9c;
              unaff_s11 = fVar48 * fVar57 * fVar64 * fVar46;
              fVar47 = (fVar47 / (float)iVar14) * fVar49 * fVar52 * fVar54 * fVar55;
              fStack0000000000000170 = (float)FUN_037769c0(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
            }
            *in_stack_000001a8 = (long)plVar43;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (in_stack_000001a8,plVar43);
            lVar27 = *in_stack_000001e8;
            if (lVar27 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar27 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
            lVar27 = lVar27 + (long)(int)*in_stack_000001d0 * unaff_x27;
            *(undefined1 *)(lVar27 + 0x28) = 2;
            *(float *)(lVar27 + 0x16c) = fVar47;
            *(long *)(lVar27 + 0x48) = *in_stack_00000160;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            lVar27 = *in_stack_000001e8;
            if (lVar27 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar27 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
            *(long *)(lVar27 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x40) =
                 *in_stack_000001c8;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            lVar27 = *in_stack_000001e8;
            if (lVar27 == 0) goto LAB_03793c9c;
            uVar13 = *in_stack_000001d0;
            if (*(uint *)(lVar27 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
            *(undefined4 *)(lVar27 + (long)(int)uVar13 * unaff_x27 + 0x60) =
                 *(undefined4 *)(unaff_x19 + 0x78);
            *(undefined4 *)(unaff_x19 + 0x78) = uVar45;
            in_stack_000001a0 = 0.0;
            goto LAB_0378db90;
          }
          lVar27 = *in_stack_000001e8;
          if (lVar27 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar27 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
          *in_stack_000001a8 = *(long *)(lVar27 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x30);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001a8);
          if (*in_stack_000001a8 != 0) goto code_r0x0378d4bc;
          goto LAB_0378d260;
        }
LAB_03790fec:
        if (((*(char *)(in_stack_000001e0 + 0xa8) != '\0') &&
            (DAT_00d389f8 < *(float *)(unaff_x19 + 0x1598) - *(float *)(unaff_x19 + 0x159c))) &&
           ((fVar47 = *_fStack00000000000000d0, fVar47 < *(float *)(in_stack_000001e0 + 0xb0) &&
            (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))))) {
          fVar48 = *(float *)(in_stack_000001e0 + 0x108);
          if (*(float *)(unaff_x19 + 0x1594) < fVar48 / 100.0) {
            *(undefined4 *)(unaff_x19 + 0x1594) = 0;
          }
          fVar49 = (*(float *)(unaff_x19 + 0x1598) - fVar47) * 0.5;
          if (fVar49 <= DAT_00d38b84) {
            fVar49 = DAT_00d38b84;
          }
          *(float *)(unaff_x19 + 0x159c) = fVar47;
          fVar49 = (fVar47 + fVar49) * 20.0 + 0.5;
          fVar47 = DAT_00d38e60;
          if (fVar49 != INFINITY) {
            fVar47 = (float)(int)fVar49 / 20.0;
          }
          if (fVar48 <= fVar47) {
            fVar47 = fVar48;
          }
          goto LAB_037910ac;
        }
        unaff_x24[0x30] = '\x01';
        if (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)) {
          uVar60 = FUN_0276793c(in_stack_00000070,0);
          uVar63 = FUN_0277fa90(_fStack00000000000000d0,0);
          uVar60 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar60,
                                *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar63,0);
          if (*(int *)(*plVar43 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*plVar43);
          }
          FUN_0367a6ec(uVar60,0);
        }
        plVar18 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
        plVar43 = (long *)PTR_DAT_03cbded8;
        if ((*in_stack_000001d0 == 0) || ((*in_stack_000001d0 == 1 && (in_stack_0000169c == 3)))) {
          FUN_0379e288(1,in_stack_000001c0,0);
          goto LAB_0378c81c;
        }
        lVar27 = *(long *)(in_stack_000001c0 + 0x58);
        if (lVar27 == 0) goto LAB_03793c9c;
        uVar13 = *(uint *)(unaff_x19 + 0x78);
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__ + 0xe0)
            == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar27 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        FUN_03785b74(lVar27 + (long)(int)uVar13 * 0x50 + 0x20,0,0);
        if (DAT_0411f172 == '\0') {
          FUN_01ab69ac(PTR_DAT_03cbded8);
          DAT_0411f172 = '\x01';
        }
        iVar17 = *(int *)(in_stack_000001e0 + 0x70);
        fStack0000000000000158 = **(float **)(*plVar43 + 0xb8);
        uStack0000000000000148 = *(undefined8 *)(*(float **)(*plVar43 + 0xb8) + 1);
        lVar27 = *(long *)(unaff_x19 + 0x50);
        uStack0000000000000118 = uStack0000000000000148;
        fStack0000000000000120 = fStack0000000000000158;
        if (iVar17 < 0x421) {
          if (iVar17 < 0x205) {
            if (iVar17 < 0x109) {
              if ((iVar17 - 0x101U < 8) && ((1 << (ulong)(iVar17 - 0x101U & 0x1f) & 0x8bU) != 0)) {
LAB_0379144c:
                if (lVar27 == 0) goto LAB_03793c9c;
                if (*(uint *)(lVar27 + 0x18) < 2) goto thunk_FUN_01ab6c44;
                uVar60 = *(undefined8 *)(lVar27 + 0x30);
                if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
                  lVar41 = *in_stack_00000050;
                  if (lVar41 == 0) goto LAB_03793c9c;
                  if (*(uint *)(lVar41 + 0x18) <= uStack000000000000005c) goto thunk_FUN_01ab6c44;
                  fVar47 = *(float *)(lVar41 + (long)(int)uStack000000000000005c * 0x14 + 0x28);
                }
                else {
                  fVar47 = *(float *)(unaff_x19 + 0x374);
                }
                fStack0000000000000120 = fStack0000000000000058 + 0.0 + *(float *)(lVar27 + 0x2c);
                fStack0000000000000038 = (0.0 - fVar47) - fStack000000000000003c;
                goto LAB_037917ec;
              }
            }
            else if (iVar17 < 0x121) {
              if ((iVar17 == 0x110) || (iVar17 == 0x120)) goto LAB_0379144c;
            }
            else if ((iVar17 - 0x201U < 4) && (iVar17 - 0x201U != 2)) goto LAB_037916dc;
          }
          else {
            if (iVar17 < 0x403) {
              if (iVar17 < 0x211) {
                if ((iVar17 == 0x208) || (iVar17 == 0x210)) goto LAB_037916dc;
                goto LAB_037917fc;
              }
              if (iVar17 != 0x220) {
                if (iVar17 - 0x401U < 2) goto LAB_03791588;
                goto LAB_037917fc;
              }
LAB_037916dc:
              if (lVar27 == 0) goto LAB_03793c9c;
              if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0))
              goto thunk_FUN_01ab6c44;
              fStack0000000000000120 = (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5
              ;
              uVar60 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5,
                                ((float)*(undefined8 *)(lVar27 + 0x24) +
                                (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5);
              if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
                lVar27 = *in_stack_00000050;
                if (lVar27 == 0) goto LAB_03793c9c;
                if (uStack000000000000005c < *(uint *)(lVar27 + 0x18)) {
                  lVar27 = lVar27 + (long)(int)uStack000000000000005c * 0x14;
                  fStack0000000000000120 = fStack0000000000000058 + 0.0 + fStack0000000000000120;
                  fStack0000000000000038 =
                       ((fStack000000000000003c + *(float *)(lVar27 + 0x28) +
                        *(float *)(lVar27 + 0x30)) - fStack0000000000000038) * -0.5 + 0.0;
                  goto LAB_037917ec;
                }
                goto thunk_FUN_01ab6c44;
              }
              fStack0000000000000120 = fStack0000000000000058 + 0.0 + fStack0000000000000120;
              fStack0000000000000038 =
                   ((fStack000000000000003c + *(float *)(unaff_x19 + 0x374) + in_stack_00001698) -
                   fStack0000000000000038) * -0.5 + 0.0;
            }
            else {
              if (iVar17 < 0x409) {
                if (iVar17 != 0x404) {
                  bVar8 = iVar17 == 0x408;
                  goto LAB_03791574;
                }
              }
              else if (iVar17 != 0x410) {
                bVar8 = iVar17 == 0x420;
LAB_03791574:
                if (!bVar8) goto LAB_037917fc;
              }
LAB_03791588:
              if (lVar27 == 0) goto LAB_03793c9c;
              if (*(int *)(lVar27 + 0x18) == 0) goto thunk_FUN_01ab6c44;
              uVar60 = *(undefined8 *)(lVar27 + 0x24);
              if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
                lVar41 = *in_stack_00000050;
                if (lVar41 == 0) goto LAB_03793c9c;
                if (*(uint *)(lVar41 + 0x18) <= uStack000000000000005c) goto thunk_FUN_01ab6c44;
                in_stack_00001698 =
                     *(float *)(lVar41 + (long)(int)uStack000000000000005c * 0x14 + 0x30);
              }
              fStack0000000000000120 = fStack0000000000000058 + 0.0 + *(float *)(lVar27 + 0x20);
              fStack0000000000000038 = fStack0000000000000038 + (0.0 - in_stack_00001698);
            }
LAB_037917ec:
            uStack0000000000000118 =
                 CONCAT44((float)((ulong)uVar60 >> 0x20) + 0.0,
                          (float)uVar60 + fStack0000000000000038);
          }
        }
        else if (iVar17 < 0x1005) {
          if (iVar17 < 0x809) {
            if ((iVar17 - 0x801U < 8) && ((1 << (ulong)(iVar17 - 0x801U & 0x1f) & 0x8bU) != 0)) {
LAB_037913b0:
              if (lVar27 == 0) goto LAB_03793c9c;
              if ((*(int *)(lVar27 + 0x18) != 1) && (*(int *)(lVar27 + 0x18) != 0)) {
                uStack0000000000000118 =
                     CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar27 + 0x24) +
                              (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5 + 0.0);
                fStack0000000000000120 =
                     fStack0000000000000058 + 0.0 +
                     (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
                goto LAB_037917fc;
              }
              goto thunk_FUN_01ab6c44;
            }
          }
          else if (iVar17 < 0x821) {
            if ((iVar17 == 0x810) || (iVar17 == 0x820)) goto LAB_037913b0;
          }
          else if ((iVar17 - 0x1001U < 4) && (iVar17 - 0x1001U != 2)) goto LAB_03791644;
        }
        else if (iVar17 < 0x2003) {
          if (iVar17 < 0x1011) {
            if ((iVar17 == 0x1008) || (iVar17 == 0x1010)) goto LAB_03791644;
          }
          else {
            if (iVar17 == 0x1020) {
LAB_03791644:
              if (lVar27 == 0) goto LAB_03793c9c;
              if ((*(int *)(lVar27 + 0x18) != 1) && (*(int *)(lVar27 + 0x18) != 0)) {
                uVar60 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5,
                                  ((float)*(undefined8 *)(lVar27 + 0x24) +
                                  (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5);
                fStack0000000000000120 =
                     fStack0000000000000058 + 0.0 +
                     (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
                fStack0000000000000038 =
                     0.0 - ((fStack000000000000003c + *(float *)(unaff_x19 + 0x36c) +
                            *(float *)(unaff_x19 + 0x364)) - fStack0000000000000038) * 0.5;
                goto LAB_037917ec;
              }
              goto thunk_FUN_01ab6c44;
            }
            if (iVar17 - 0x2001U < 2) goto LAB_037914ec;
          }
        }
        else {
          if (iVar17 < 0x2009) {
            if (iVar17 != 0x2004) {
              iVar14 = 0x2008;
              goto LAB_037914d4;
            }
          }
          else if (iVar17 != 0x2010) {
            iVar14 = 0x2020;
LAB_037914d4:
            if (iVar17 != iVar14) goto LAB_037917fc;
          }
LAB_037914ec:
          if (lVar27 == 0) goto LAB_03793c9c;
          if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0))
          goto thunk_FUN_01ab6c44;
          uStack0000000000000118 =
               CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5 + 0.0,
                        ((float)*(undefined8 *)(lVar27 + 0x24) +
                        (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5 +
                        (0.0 - ((*(float *)(unaff_x19 + 0x370) - fStack000000000000003c) -
                               fStack0000000000000038) * 0.5));
          fStack0000000000000120 =
               fStack0000000000000058 + 0.0 +
               (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
        }
LAB_037917fc:
        uVar45 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
        FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)
                              Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__);
        }
        FUN_037a1df8(0);
        FUN_037a1fc8(&stack0x00001670,0x4000ffff,0);
        fVar47 = DAT_00d38d70;
        uVar13 = *in_stack_000001d0;
        if ((int)uVar13 < 1) {
          iVar17 = 0;
          iStack0000000000000138 = 0;
          goto LAB_03793a5c;
        }
        lVar27 = *in_stack_000001e8;
        if (lVar27 == 0) goto LAB_03793c9c;
        fStack0000000000000174 = 0.0;
        _bStack00000000000000d8 = 0.0;
        fStack00000000000000a8 = 0.0;
        plVar18 = (long *)(in_stack_000001c0 + 0x38);
        fStack00000000000000ec = fStack0000000000000128;
        fStack00000000000000f0 = 0.0;
        in_stack_000000a0._4_4_ = 0.0;
        uVar31 = (ulong)&stack0x00001670 | 4;
        bVar8 = false;
        fVar49 = 0.0;
        fVar48 = 0.0;
        uVar19 = (ulong)&stack0x000009f0 | 4;
        bVar7 = false;
        bVar9 = false;
        iStack0000000000000138 = 0;
        uStack0000000000000090 = 0;
        _uStack0000000000000168 = 0;
        iStack00000000000000c0 = 0;
        iStack0000000000000178 = 0;
        in_stack_000001a8 = (long *)0x2fc;
        fStack000000000000012c = fStack0000000000000128;
        fStack0000000000000130 = in_stack_00000140._4_4_;
        fStack00000000000000c8 = in_stack_00000140._4_4_;
        uStack00000000000000cc = uStack0000000000000124;
        fStack00000000000000d0 = fStack0000000000000128;
        uStack00000000000000dc = uStack0000000000000124;
        fStack00000000000000e0 = in_stack_00000140._4_4_;
        fStack000000000000015c = DAT_00d38d70;
        uVar30 = 0;
        uVar24 = 1;
        goto LAB_0379194c;
      }
      if (((in_stack_0000169c & 0xfffffffe) == 10) && (*(int *)(in_stack_000001e0 + 0x74) == 6)) {
        fVar48 = 0.0;
        if ((0.0 < fVar57) && (fVar48 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
          fVar48 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
        }
        if (in_stack_00000108 <
            (*(float *)(unaff_x19 + 0x374) - (*(float *)(unaff_x19 + 0x33c) - fVar57)) + fVar48) {
          if (*(int *)(unaff_x19 + 0x34c) == -1) {
            *(uint *)(unaff_x19 + 0x34c) = uVar24;
          }
          in_stack_0000160c = FUN_03797154();
LAB_0378f7e8:
          in_stack_00001688 = CONCAT44(3,uVar24);
          goto LAB_0378d260;
        }
      }
      if ((((in_stack_0000169c - 0x2007 < 0x23) &&
           ((1L << ((ulong)(in_stack_0000169c - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
          (in_stack_0000169c - 10 < 2)) || (in_stack_0000169c == 0xa0)) {
LAB_0378f700:
        if ((in_stack_0000169c == 0xad) || (in_stack_0000169c == 0x200b)) goto LAB_0378f884;
        if (in_stack_0000169c != 0x2060) {
          lVar27 = *(long *)(in_stack_000001c0 + 0x48);
          if (lVar27 != 0) {
            if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar27 + 0x18)) {
              lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
              *(int *)(lVar27 + 0x2c) = *(int *)(lVar27 + 0x2c) + 1;
              *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
              goto LAB_0378f760;
            }
            goto thunk_FUN_01ab6c44;
          }
          goto LAB_03793c9c;
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b97f8(in_stack_0000169c,0);
        if ((uVar19 & 1) != 0) goto LAB_0378f700;
      }
LAB_0378f760:
      if (in_stack_0000169c == 0xa0) {
        lVar27 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar27 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
        lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
        *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
      }
LAB_0378f884:
      bVar8 = *(int *)(in_stack_000001e0 + 0x74) == 1;
      if (bVar8 && unaff_w23 == 1) {
        bVar8 = in_stack_0000169c == 0x2d;
      }
      if (bVar8) {
        if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
        fVar48 = *(float *)(unaff_x19 + 0xf4);
        iVar14 = FUN_03776950(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
        if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
        fVar55 = (float)FUN_03776960(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
        lVar27 = *(long *)(unaff_x19 + 0x1a00);
        fVar49 = in_stack_00000150;
        if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
          fVar49 = 1.0;
        }
        if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_03793c9c;
        fVar46 = *(float *)(unaff_x19 + 0xf0);
        fVar61 = *(float *)(lVar27 + 0x2c);
        fVar57 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
        fVar64 = *_iStack0000000000000138;
        fVar57 = fVar46 * (fVar48 / (float)iVar14) * fVar55 * fVar49 * fVar61 * fVar57;
        fVar48 = *_fStack0000000000000130;
        if ((in_stack_0000169c == 10) &&
           (*(int *)(unaff_x19 + 0x324) != *(int *)(unaff_x19 + 0x328))) {
          lVar27 = *in_stack_000001e8;
          if (lVar27 == 0) goto LAB_03793c9c;
          uVar24 = *(int *)(unaff_x19 + 0x324) - 1;
          if (*(uint *)(lVar27 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
          if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
          fVar49 = *(float *)(lVar27 + (long)(int)uVar24 * (long)iVar17 + 0x68);
          iVar14 = FUN_03776950(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
          if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
          fVar46 = (float)FUN_03776960(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
          lVar27 = *(long *)(unaff_x19 + 0x1a00);
          fVar55 = in_stack_00000150;
          if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
            fVar55 = 1.0;
          }
          if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_03793c9c;
          fVar61 = *(float *)(unaff_x19 + 0xf0);
          fVar56 = *(float *)(lVar27 + 0x2c);
          fVar57 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
          lVar27 = *(long *)(in_stack_000001c0 + 0x48);
          if (lVar27 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
          lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
          fVar64 = *(float *)(lVar27 + 100);
          fVar48 = *(float *)(lVar27 + 0x68);
          fVar57 = fVar61 * (fVar49 / (float)iVar14) * fVar46 * fVar55 * fVar56 * fVar57;
        }
        fVar55 = *(float *)(unaff_x19 + 0x2f4);
        fVar49 = 0.0;
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          if ((*(long *)(unaff_x19 + 0x1a00) == 0) ||
             (lVar27 = *(long *)(*(long *)(unaff_x19 + 0x1a00) + 0x20), lVar27 == 0))
          goto LAB_03793c9c;
          FUN_03776e6c(&stack0x000016a0,lVar27,0);
          fVar49 = (float)FUN_03776cb4(&stack0x000015c0,0);
        }
        fVar46 = *(float *)(unaff_x19 + 0x35c);
        fVar48 = (fStack000000000000012c - fVar64) - fVar48;
        bVar8 = true;
        if ((fVar46 <= fVar48) && (bVar8 = false, !NAN(fVar46))) {
          bVar8 = fVar46 == -1.0;
        }
        if (!bVar8) {
          fVar48 = fVar46;
        }
        fVar46 = 1.0;
        if (uVar38 != 0) {
          fVar46 = DAT_00d38acc;
        }
        if (ABS(fVar55) + fVar57 * fVar49 * (1.0 - *(float *)(unaff_x19 + 0x1594)) < fVar46 * fVar48
           ) {
          FUN_03796df8();
          memcpy(&stack0x000005c8,in_stack_00000068,0x398);
          FUN_020ab0d8(in_stack_00000078,&stack0x000005c8,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__);
        }
      }
      lVar27 = *in_stack_000001e8;
      if (lVar27 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar27 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
      uVar24 = *(uint *)(unaff_x19 + 0x340);
      lVar27 = lVar27 + (long)(int)*in_stack_000001d0 * unaff_x27;
      *(uint *)(lVar27 + 0x6c) = uVar24;
      *(undefined4 *)(lVar27 + 0x70) = *(undefined4 *)(unaff_x19 + 0x350);
      if (((unaff_w23 & 1) == 0) &&
         ((0xd < in_stack_0000169c || ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0x2c00U) == 0)))) {
        lVar27 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar27 == 0) goto LAB_03793c9c;
LAB_0378fbcc:
        if (*(uint *)(lVar27 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
        *(undefined4 *)(lVar27 + (long)(int)uVar24 * 0x60 + 0x6c) =
             *(undefined4 *)(unaff_x19 + 0x158);
      }
      else {
        lVar27 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar27 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar27 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
        if (*(int *)(lVar27 + (long)(int)uVar24 * 0x60 + 0x24) == 1) goto LAB_0378fbcc;
      }
      if (in_stack_0000169c != 0x200b) {
        if (in_stack_0000169c == 9) {
          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
          fVar48 = (float)FUN_03776a48(*in_stack_000001c8 + 0xb0,0);
          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
          bVar11 = FUN_03779d4c(*in_stack_000001c8,0);
          fVar49 = *(float *)(unaff_x19 + 0x2f4);
          fVar52 = fVar47 * fVar48 * (float)bVar11;
          fVar48 = fVar52 * (float)(int)(fVar49 / fVar52);
          if (fVar48 <= fVar49) {
            fVar48 = fVar49 + fVar52;
          }
          *(float *)(unaff_x19 + 0x2f4) = fVar48;
        }
        else {
          fVar48 = *(float *)(unaff_x19 + 0x2f0);
          if (fVar48 == 0.0) {
            fVar49 = *(float *)(unaff_x19 + 0x2f4);
            if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
              fVar48 = (float)FUN_03776cb4(&stack0x000015f0,0);
              fVar55 = *(float *)(unaff_x19 + 0x19a8);
              fVar52 = (float)FUN_03778e7c(&stack0x000015e0,0);
              if (*(long *)(unaff_x19 + 0x68) != 0) {
                fVar57 = (float)FUN_03779d0c(*(long *)(unaff_x19 + 0x68),0);
                fVar49 = fVar49 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                  (*(float *)(unaff_x19 + 0x2ec) +
                                  fVar47 * (fVar48 * fVar55 + fVar52) +
                                  fStack0000000000000158 * (fVar54 + in_stack_00000188 + fVar57));
                goto UnityEngine_UIElements_WheelEvent___ctor;
              }
              goto LAB_03793c9c;
            }
            fVar48 = (float)FUN_03778e7c(&stack0x000015e0,0);
            if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
            fVar52 = (float)FUN_03779d0c(*in_stack_000001c8,0);
            fVar49 = fVar49 - (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                              (*(float *)(unaff_x19 + 0x2ec) +
                              fVar47 * fVar48 +
                              fStack0000000000000158 * (fVar54 + in_stack_00000188 + fVar52));
            *(float *)(unaff_x19 + 0x2f4) = fVar49;
            if ((unaff_w25 == 0) && (in_stack_0000169c != 0x200b)) goto FUN_0378fd94;
            fVar49 = fVar49 - fStack0000000000000158 * *(float *)(in_stack_000001e0 + 0xc4);
          }
          else {
            if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
            fVar49 = *(float *)(unaff_x19 + 0x2f4);
            fVar55 = (float)FUN_03779d0c(*in_stack_000001c8,0);
            fVar49 = fVar49 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                              (*(float *)(unaff_x19 + 0x2ec) +
                              (fVar48 - fVar52) +
                              fStack0000000000000158 * (in_stack_00000188 + fVar55));
UnityEngine_UIElements_WheelEvent___ctor:
            *(float *)(unaff_x19 + 0x2f4) = fVar49;
            if ((unaff_w25 == 0) && (in_stack_0000169c != 0x200b)) goto FUN_0378fd94;
            fVar49 = fVar49 + fStack0000000000000158 * *(float *)(in_stack_000001e0 + 0xc4);
          }
          *(float *)(unaff_x19 + 0x2f4) = fVar49;
        }
      }
FUN_0378fd94:
      lVar27 = *in_stack_000001e8;
      if (lVar27 == 0) goto LAB_03793c9c;
      uVar24 = *in_stack_000001d0;
      if (*(uint *)(lVar27 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
      *(undefined4 *)(lVar27 + (long)(int)uVar24 * unaff_x27 + 0x164) =
           *(undefined4 *)(unaff_x19 + 0x2f4);
      if (in_stack_0000169c == 0xd) {
        *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
      }
      if ((*(int *)(in_stack_000001e0 + 0x74) == 5) &&
         (((0xd < in_stack_0000169c || ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0x2c00U) == 0)) &&
          (1 < in_stack_0000169c - 0x2028)))) {
        lVar27 = *in_stack_00000050;
        if (lVar27 == 0) goto LAB_03793c9c;
        uVar38 = *(uint *)(unaff_x19 + 0x350);
        if (*(int *)(lVar27 + 0x18) < (int)(uVar38 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff3814(in_stack_00000050,uVar38 + 1,1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_GetEnumerator__
                      );
          lVar27 = *in_stack_00000050;
          if (lVar27 == 0) goto LAB_03793c9c;
          uVar38 = *(uint *)(unaff_x19 + 0x350);
        }
        if (*(uint *)(lVar27 + 0x18) <= uVar38) goto thunk_FUN_01ab6c44;
        lVar41 = lVar27 + (long)(int)uVar38 * 0x14;
        *(undefined4 *)(lVar41 + 0x28) = *(undefined4 *)(unaff_x19 + 0x19c8);
        fVar48 = *(float *)(unaff_x19 + 0x378);
        if (*(float *)(lVar41 + 0x30) <= *(float *)(unaff_x19 + 0x378)) {
          fVar48 = *(float *)(lVar41 + 0x30);
        }
        *(float *)(lVar41 + 0x30) = fVar48;
        if (*(char *)(unaff_x19 + 0x37c) != '\0') {
          *(undefined1 *)(unaff_x19 + 0x37c) = 0;
          *(undefined4 *)(lVar27 + (long)(int)uVar38 * 0x14 + 0x20) =
               *(undefined4 *)(unaff_x19 + 0x324);
        }
        uVar24 = *in_stack_000001d0;
        *(uint *)(lVar27 + (long)(int)uVar38 * 0x14 + 0x24) = uVar24;
      }
      if (((in_stack_0000169c < 0xc) && ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0xc08U) != 0)) ||
         ((in_stack_0000169c - 0x2028 < 2 ||
          (((unaff_w23 & in_stack_0000169c == 0x2d) != 0 || (uVar24 == uStack00000000000000dc))))))
      {
        if (0.0 < *(float *)(unaff_x19 + 0x2e0)) {
          fVar48 = *(float *)(unaff_x19 + 0x338);
          fVar49 = *(float *)(unaff_x19 + 0x15ac);
          if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          fVar48 = fVar48 - fVar49;
          if (((fStack00000000000000a8 < ABS(fVar48)) && (*(char *)(unaff_x19 + 0x2e8) == '\0')) &&
             (*(char *)(unaff_x19 + 0x37c) != '\x01')) {
            uVar45 = *(undefined4 *)(unaff_x19 + 0x328);
            uVar15 = *(undefined4 *)(unaff_x19 + 0x324);
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0
                        ) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_037a5574(fVar48,uVar45,uVar15,in_stack_000001c0,0);
            *(float *)(unaff_x19 + 0x378) = *(float *)(unaff_x19 + 0x378) - fVar48;
            *(float *)(unaff_x19 + 0x2e0) = fVar48 + *(float *)(unaff_x19 + 0x2e0);
            plVar43 = (long *)PTR_DAT_03cbe438;
            if (*(int *)(unaff_x19 + 0xad8) == *(int *)(unaff_x19 + 0x340)) {
              FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
              memcpy(in_stack_00000068,&stack0x000016a0,0x398);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000020,0)
              ;
              *(float *)(unaff_x19 + 0xaf0) = fVar48 + *(float *)(unaff_x19 + 0xaf0);
              *(float *)(unaff_x19 + 0xb24) = fVar48 + *(float *)(unaff_x19 + 0xb24);
              memcpy(&stack0x00000230,in_stack_00000068,0x398);
              FUN_020ab0d8(in_stack_00000078,&stack0x00000230,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__);
            }
          }
        }
        fVar49 = *(float *)(unaff_x19 + 0x2e0);
        *(undefined1 *)(unaff_x19 + 0x37c) = 0;
        fVar52 = *(float *)(unaff_x19 + 0x33c) - fVar49;
        fVar48 = *(float *)(unaff_x19 + 0x378);
        if (fVar52 <= *(float *)(unaff_x19 + 0x378)) {
          fVar48 = fVar52;
        }
        *(float *)(unaff_x19 + 0x378) = fVar48;
        fVar55 = *(float *)(unaff_x19 + 0x338);
        if (in_stack_00001694 == '\0') {
          in_stack_00001698 = fVar48;
        }
        if ((*(char *)(in_stack_000001e0 + 0xe8) != '\0') &&
           ((*(int *)(in_stack_000001e0 + 0xd8) <= (int)*in_stack_000001d0 ||
            (*(int *)(in_stack_000001e0 + 0xe0) <= *(int *)(unaff_x19 + 0x340))))) {
          in_stack_00001694 = '\x01';
        }
        lVar27 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar27 == 0) goto LAB_03793c9c;
        uVar24 = *(uint *)(unaff_x19 + 0x340);
        if (*(uint *)(lVar27 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
        iVar14 = *(int *)(unaff_x19 + 0x328);
        lVar41 = lVar27 + (long)(int)uVar24 * 0x60;
        *(int *)(lVar41 + 0x38) = iVar14;
        uVar38 = *(uint *)(unaff_x19 + 0x328);
        if (iVar14 <= (int)*(uint *)(unaff_x19 + 0x330)) {
          uVar38 = *(uint *)(unaff_x19 + 0x330);
        }
        *(uint *)(unaff_x19 + 0x330) = uVar38;
        *(uint *)(lVar41 + 0x3c) = uVar38;
        iVar1 = *(int *)(unaff_x19 + 0x324);
        *(int *)(unaff_x19 + 0x32c) = iVar1;
        *(int *)(lVar41 + 0x40) = iVar1;
        iVar16 = *(int *)(unaff_x19 + 0x330);
        if ((int)uVar38 <= *(int *)(unaff_x19 + 0x334)) {
          iVar16 = *(int *)(unaff_x19 + 0x334);
        }
        *(int *)(unaff_x19 + 0x334) = iVar16;
        *(int *)(lVar41 + 0x44) = iVar16;
        *(int *)(lVar41 + 0x24) = (iVar1 - iVar14) + 1;
        *(undefined4 *)(lVar41 + 0x28) = *(undefined4 *)(unaff_x19 + 0x344);
        *(undefined4 *)(lVar41 + 0x30) = *(undefined4 *)(unaff_x19 + 0x348);
        lVar41 = *in_stack_000001e8;
        if (lVar41 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar41 + 0x18) <= uVar38) goto thunk_FUN_01ab6c44;
        uVar45 = *(undefined4 *)(lVar41 + (long)(int)uVar38 * (long)iVar17 + 0x124);
        lVar27 = lVar27 + (long)(int)uVar24 * 0x60;
        *(float *)(lVar27 + 0x74) = fVar52;
        *(undefined4 *)(lVar27 + 0x70) = uVar45;
        lVar27 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar27 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
        lVar41 = *in_stack_000001e8;
        if (lVar41 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto thunk_FUN_01ab6c44;
        uVar45 = *(undefined4 *)
                  (lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x334) * unaff_x27 + 0x130);
        fVar55 = fVar55 - fVar49;
        lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
        *(float *)(lVar27 + 0x7c) = fVar55;
        *(undefined4 *)(lVar27 + 0x78) = uVar45;
        lVar27 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar27 == 0) goto LAB_03793c9c;
        uVar24 = *(uint *)(unaff_x19 + 0x340);
        if (*(uint *)(lVar27 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
        lVar41 = lVar27 + (long)(int)uVar24 * 0x60;
        *(float *)(lVar41 + 0x48) = *(float *)(lVar41 + 0x78) - fVar47 * in_stack_000001a0;
        *(float *)(lVar41 + 0x60) = fStack0000000000000174;
        if (*(int *)(lVar41 + 0x24) == 1) {
          *(undefined4 *)(lVar27 + (long)(int)uVar24 * 0x60 + 0x6c) =
               *(undefined4 *)(unaff_x19 + 0x158);
        }
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar48 = (float)FUN_03779d0c(*in_stack_000001c8,0);
        lVar27 = *in_stack_000001e8;
        if (lVar27 == 0) goto LAB_03793c9c;
        lVar41 = (long)(int)*(uint *)(unaff_x19 + 0x334);
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto thunk_FUN_01ab6c44;
        lVar33 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar33 == 0) goto LAB_03793c9c;
        uVar24 = *(uint *)(unaff_x19 + 0x340);
        if (((*(char *)(lVar27 + lVar41 * unaff_x27 + 0x1a0) == '\0') &&
            (lVar41 = (long)(int)*(uint *)(unaff_x19 + 0x32c),
            *(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x32c))) ||
           (uVar38 = (uint)*(undefined8 *)(lVar33 + 0x18), uVar38 <= uVar24))
        goto thunk_FUN_01ab6c44;
        fVar49 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                 (*(float *)(unaff_x19 + 0x2ec) +
                 fStack0000000000000158 * (fVar54 + in_stack_00000188 + fVar48));
        fVar48 = -fVar49;
        if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
          fVar48 = fVar49;
        }
        *(float *)(lVar33 + (long)(int)uVar24 * 0x60 + 0x5c) =
             *(float *)(lVar27 + lVar41 * unaff_x27 + 0x164) + fVar48;
        if (uVar38 <= uVar24) goto thunk_FUN_01ab6c44;
        lVar33 = lVar33 + (long)(int)uVar24 * 0x60;
        *(float *)(lVar33 + 0x54) = 0.0 - *(float *)(unaff_x19 + 0x2e0);
        *(float *)(lVar33 + 0x58) = fVar52;
        *(float *)(lVar33 + 0x4c) = in_stack_000000a0._4_4_ + (fVar55 - fVar52);
        *(float *)(lVar33 + 0x50) = fVar55;
        if (0x2c < (int)in_stack_0000169c) {
          if ((in_stack_0000169c - 0x2028 < 2) || (in_stack_0000169c == 0x2d)) goto LAB_03790360;
          goto LAB_03790574;
        }
        if (in_stack_0000169c - 10 < 2) {
LAB_03790360:
          FUN_03796df8();
          uVar13 = *(uint *)(unaff_x19 + 0x324);
          iVar14 = *(int *)(unaff_x19 + 0x340) + 1;
          *(int *)(unaff_x19 + 0x340) = iVar14;
          *(uint *)(unaff_x19 + 0x328) = uVar13 + 1;
          in_stack_000001d0[8] = 0;
          in_stack_000001d0[9] = 0;
          if (*(long *)(in_stack_000001c0 + 0x48) != 0) {
            if (*(int *)(*(long *)(in_stack_000001c0 + 0x48) + 0x18) <= iVar14) {
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                          0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_037a56f4(iVar14,in_stack_000001c0,0);
              uVar13 = *in_stack_000001d0;
            }
            lVar27 = *in_stack_000001e8;
            if (lVar27 != 0) {
              if (uVar13 < *(uint *)(lVar27 + 0x18)) {
                fVar48 = *(float *)(lVar27 + (long)(int)uVar13 * (long)iVar17 + 0x158);
                if (*(float *)(unaff_x19 + 0x2e4) == DAT_00d38ba4) {
                  if ((in_stack_0000169c == 0x2029) || (fVar49 = 0.0, in_stack_0000169c == 10)) {
                    fVar49 = *(float *)(in_stack_000001e0 + 0xcc);
                  }
                  uVar22 = 0;
                  fVar49 = fVar48 + (0.0 - *(float *)(unaff_x19 + 0x33c)) +
                           fStack0000000000000088 *
                           (in_stack_00000080._4_4_ + *(float *)(unaff_x19 + 0x15b0)) +
                           fStack0000000000000158 * (*(float *)(in_stack_000001e0 + 200) + fVar49) +
                           *(float *)(unaff_x19 + 0x2e0);
                }
                else {
                  if ((in_stack_0000169c == 0x2029) || (fVar49 = 0.0, in_stack_0000169c == 10)) {
                    fVar49 = *(float *)(in_stack_000001e0 + 0xcc);
                  }
                  uVar22 = 1;
                  fVar49 = *(float *)(unaff_x19 + 0x2e0) +
                           *(float *)(unaff_x19 + 0x2e4) +
                           fStack0000000000000158 * (*(float *)(in_stack_000001e0 + 200) + fVar49);
                }
                *(float *)(unaff_x19 + 0x2e0) = fVar49;
                *(float *)(unaff_x19 + 0x15ac) = fVar48;
                *(undefined1 *)(unaff_x19 + 0x2e8) = uVar22;
                *(undefined8 *)(unaff_x19 + 0x338) = _uStack0000000000000090;
                *(float *)(unaff_x19 + 0x2f4) =
                     *(float *)(unaff_x19 + 0x2f8) + 0.0 + *(float *)(unaff_x19 + 0x2fc);
                FUN_03796df8();
                FUN_03796df8();
                *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
                goto LAB_0379053c;
              }
              goto thunk_FUN_01ab6c44;
            }
          }
          goto LAB_03793c9c;
        }
        if (in_stack_0000169c == 3) {
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            in_stack_0000160c = (uint)*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
            goto LAB_03790574;
          }
          goto LAB_03793c9c;
        }
      }
      else {
        lVar27 = *in_stack_000001e8;
        if (lVar27 == 0) goto LAB_03793c9c;
      }
LAB_03790574:
      uVar24 = *in_stack_000001d0;
      if (*(uint *)(lVar27 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
      if (*(char *)(lVar27 + (long)(int)uVar24 * unaff_x27 + 0x1a0) != '\0') {
        lVar27 = lVar27 + (long)(int)uVar24 * unaff_x27;
        uVar19 = *(ulong *)(unaff_x19 + 0x360);
        uVar31 = *(ulong *)(lVar27 + 0x124);
        *(ulong *)(unaff_x19 + 0x360) =
             uVar19 ^ (uVar19 ^ uVar31) &
                      ~CONCAT44(-(uint)((float)(uVar19 >> 0x20) < (float)(uVar31 >> 0x20)),
                                -(uint)((float)uVar19 < (float)uVar31));
        uVar19 = *(ulong *)(unaff_x19 + 0x368);
        uVar31 = *(ulong *)(lVar27 + 0x130);
        *(ulong *)(unaff_x19 + 0x368) =
             uVar19 ^ (uVar19 ^ uVar31) &
                      ~CONCAT44(-(uint)((float)(uVar31 >> 0x20) < (float)(uVar19 >> 0x20)),
                                -(uint)((float)uVar31 < (float)uVar19));
      }
      if ((iStack000000000000008c != 0) ||
         ((*(uint *)(in_stack_000001e0 + 0x74) < 7 &&
          ((1 << (ulong)(*(uint *)(in_stack_000001e0 + 0x74) & 0x1f) & 0x4aU) != 0)))) {
        if ((unaff_w25 == 0) &&
           (((in_stack_0000169c != 0x2d && (in_stack_0000169c != 0x200b)) &&
            (in_stack_0000169c != 0xad)))) {
          if (*(char *)(unaff_x19 + 0x37d) == '\0') {
LAB_03790684:
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0
                        ) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar19 = FUN_037a5f20(in_stack_0000169c,0);
            if ((uVar19 & 1) == 0) {
LAB_037906cc:
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                          0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar19 = FUN_037a5f90(in_stack_0000169c,0);
              if ((uVar19 & 1) == 0) goto LAB_037907cc;
              if (in_stack_00000060 == 0) goto LAB_03793c9c;
            }
            else {
              if ((in_stack_00000060 == 0) ||
                 (lVar27 = FUN_037a8a5c(in_stack_00000060,0), lVar27 == 0)) goto LAB_03793c9c;
              if (*(char *)(lVar27 + 0x28) != '\0') goto LAB_037906cc;
            }
            lVar27 = FUN_037a8a5c(in_stack_00000060,0);
            if ((lVar27 == 0) || (lVar27 = FUN_037aad04(lVar27,0), lVar27 == 0)) goto LAB_03793c9c;
            uVar45 = (undefined4)((ulong)in_stack_000016a0 >> 0x20);
            in_stack_000016a0 = CONCAT44(uVar45,in_stack_0000169c);
            uVar19 = FUN_021e4dc4(lVar27,&stack0x000016a0,*(undefined8 *)PTR_DAT_03ccd4e8);
            if ((int)*in_stack_000001d0 < (int)uStack00000000000000dc) {
              lVar27 = FUN_037a8a5c(in_stack_00000060,0);
              if (lVar27 == 0) goto LAB_03793c9c;
              lVar27 = FUN_037aaf28(lVar27,0);
              lVar41 = *in_stack_000001e8;
              if (lVar41 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar41 + 0x18) <= *in_stack_000001d0 + 1) goto thunk_FUN_01ab6c44;
              if (lVar27 == 0) goto LAB_03793c9c;
              in_stack_000016a0 =
                   CONCAT44(uVar45,(uint)*(ushort *)
                                          (lVar41 + (long)(int)(*in_stack_000001d0 + 1) *
                                                    (long)iVar17 + 0x20));
              uVar31 = FUN_021e4dc4(lVar27,&stack0x000016a0,*(undefined8 *)PTR_DAT_03ccd4e8);
              if ((uVar19 & 1) != 0) goto LAB_037909e8;
              if ((uVar31 & 1) == 0) goto LAB_03790cd4;
              if ((bStack00000000000000d8 & 1) == 0) goto LAB_03790854;
            }
            else {
              if ((uVar19 & 1) == 0) {
LAB_03790cd4:
                FUN_03796df8();
                bStack00000000000000d8 = 0;
                goto LAB_03790864;
              }
LAB_037909e8:
              if (uVar13 != uVar30 || ((bStack00000000000000d8 ^ 0xff) & 1) != 0) goto LAB_03790864;
            }
            if (unaff_w25 != 0) {
              FUN_03796df8();
            }
          }
          else {
LAB_037907cc:
            if ((bStack00000000000000d8 & 1) == 0) {
LAB_03790854:
              bStack00000000000000d8 = 0;
              goto LAB_03790864;
            }
            if ((unaff_w25 != 0 && in_stack_0000169c != 0xa0) ||
               ((in_stack_000000b8 & 1) == 0 && in_stack_0000169c == 0xad)) {
              FUN_03796df8();
            }
          }
          FUN_03796df8();
          bStack00000000000000d8 = 1;
        }
        else {
          if (*(char *)(unaff_x19 + 0x37d) == '\x01') goto LAB_037907cc;
          if (((in_stack_0000169c - 0x2007 < 0x29) &&
              ((1L << ((ulong)(in_stack_0000169c - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
             ((in_stack_0000169c == 0xa0 || (in_stack_0000169c == 0x2060)))) goto LAB_03790684;
          FUN_03796df8();
          bStack00000000000000d8 = 0;
          *(undefined4 *)(unaff_x19 + 0x11e0) = 0xffffffff;
        }
      }
LAB_03790864:
      FUN_03796df8();
      *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
      goto LAB_0378d260;
    }
    goto thunk_FUN_01ab6c44;
  }
  goto LAB_03793c9c;
code_r0x0378d4bc:
  lVar27 = *in_stack_000001e8;
  if (lVar27 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
  *in_stack_000001c8 = *(long *)(lVar27 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x40);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001c8);
  lVar27 = *in_stack_000001e8;
  if (lVar27 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
  *in_stack_00000190 = *(long *)(lVar27 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x58);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar27 = *in_stack_000001e8;
  if (lVar27 == 0) goto LAB_03793c9c;
  uVar30 = *in_stack_000001d0;
  uVar13 = *(uint *)(lVar27 + 0x18);
  if (uVar13 <= uVar30) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar27 + (long)(int)uVar30 * unaff_x27 + 0x60)
  ;
  if (unaff_w23 != 0) {
    lVar41 = *(long *)(unaff_x19 + 0x20);
    if (lVar41 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar41 + 0x18) <= in_stack_0000160c) goto thunk_FUN_01ab6c44;
    if ((*(int *)(lVar41 + (long)(int)in_stack_0000160c * 0x10 + 0x24) == 10) &&
       (uVar30 != *(uint *)(unaff_x19 + 0x328))) {
      if (uVar13 <= uVar30 - 1) goto thunk_FUN_01ab6c44;
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      fVar48 = *(float *)(lVar27 + (long)(int)(uVar30 - 1) * (long)iVar17 + 0x68);
      iVar14 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
      lVar27 = *in_stack_000001c8;
      goto joined_r0x0378f81c;
    }
  }
  if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
  fVar48 = *(float *)(unaff_x19 + 0xf4);
  iVar14 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
  lVar27 = *(long *)(unaff_x19 + 0x68);
joined_r0x0378f81c:
  if (lVar27 == 0) goto LAB_03793c9c;
  fVar52 = (float)FUN_03776960(lVar27 + 0xb0,0);
  fVar49 = in_stack_00000150;
  if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
    fVar49 = 1.0;
  }
  fStack0000000000000170 = 0.0;
  in_stack_00000180 = 0.0;
  if ((unaff_w23 & in_stack_0000169c == 0x2026) == 0) {
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    in_stack_00000180 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fStack0000000000000170 = (float)FUN_037769c0(*in_stack_000001c8 + 0xb0,0);
  }
  lVar27 = *(long *)(unaff_x19 + 0x1588);
  if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_03793c9c;
  fVar54 = *(float *)(unaff_x19 + 0xf0);
  fVar55 = *(float *)(lVar27 + 0x2c);
  fVar47 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
  if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
  fVar57 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
  if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
  fVar64 = *(float *)(unaff_x19 + 0xf0);
  fVar46 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
  lVar27 = *in_stack_000001e8;
  if (lVar27 == 0) goto LAB_03793c9c;
  uVar13 = *(uint *)(unaff_x19 + 0x324);
  if (*(uint *)(lVar27 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
  lVar41 = lVar27 + (long)(int)uVar13 * unaff_x27;
  fVar49 = ((fStack000000000000017c * fVar48) / (float)iVar14) * fVar52 * fVar49;
  fVar47 = fVar49 * fVar54 * fVar55 * fVar47;
  *(undefined1 *)(lVar41 + 0x28) = 1;
  *(float *)(lVar41 + 0x16c) = fVar47;
  in_stack_000001a0 = *(float *)(unaff_x19 + 0xd8);
  unaff_s11 = fVar49 * fVar57 * fVar64 * fVar46;
LAB_0378db90:
  unaff_s13 = fVar47;
  if (in_stack_0000169c == 3 || in_stack_0000169c == 0xad) {
    unaff_s13 = 0.0;
  }
LAB_0378dba8:
  if (*(uint *)(lVar27 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
  lVar27 = lVar27 + (long)(int)uVar13 * (long)iVar17;
  *(short *)(lVar27 + 0x20) = (short)in_stack_0000169c;
  *(undefined4 *)(lVar27 + 0x68) = *(undefined4 *)(unaff_x19 + 0xf4);
  *(undefined4 *)(lVar27 + 0x170) = *(undefined4 *)(unaff_x19 + 0x1ac);
  lVar27 = *in_stack_000001e8;
  if (lVar27 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x174) =
       *(undefined4 *)(unaff_x19 + 0x1b0);
  lVar27 = *in_stack_000001e8;
  if (lVar27 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x17c) =
       *(undefined4 *)(unaff_x19 + 0x1b4);
  lVar27 = *in_stack_000001e8;
  if (lVar27 == 0) goto LAB_03793c9c;
  uVar60 = in_stack_00000100[1];
  in_stack_000016a0 = *in_stack_00000100;
  if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
  lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
  *(undefined4 *)(lVar27 + 0x198) = *(undefined4 *)(in_stack_00000100 + 2);
  *(undefined8 *)(lVar27 + 400) = uVar60;
  *(undefined8 *)(lVar27 + 0x188) = in_stack_000016a0;
  lVar27 = *in_stack_000001e8;
  if (lVar27 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
  lVar27 = lVar27 + (long)(int)*in_stack_000001d0 * unaff_x27;
  lVar41 = *(long *)(lVar27 + 0x38);
  *(undefined4 *)(lVar27 + 0x19c) = *(undefined4 *)(unaff_x19 + 0x124);
  if ((lVar41 == 0) &&
     ((*in_stack_000001a8 == 0 || (lVar41 = *(long *)(*in_stack_000001a8 + 0x20), lVar41 == 0))))
  goto LAB_03793c9c;
  FUN_03776e6c(&stack0x000016a0,lVar41,0);
  if (in_stack_0000169c >> 0x10 == 0) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar13 = FUN_026b63d8(in_stack_0000169c,0);
    unaff_w25 = uVar13 & 1;
  }
  else {
    unaff_w25 = 0;
  }
  uVar45 = 0;
  in_stack_00000188 = *(float *)(in_stack_000001e0 + 0xc0);
  if (*(char *)(in_stack_000001e0 + 0xb4) != '\0') {
    if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
    uVar13 = *in_stack_000001d0;
    uVar30 = *(uint *)(*in_stack_000001a8 + 0x28);
    if ((int)uVar13 < (int)uStack00000000000000dc) {
      lVar27 = *in_stack_000001e8;
      if (lVar27 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar27 + 0x18) <= uVar13 + 1) goto thunk_FUN_01ab6c44;
      lVar27 = *(long *)(lVar27 + (long)(int)(uVar13 + 1) * (long)iVar17 + 0x30);
      if ((((lVar27 == 0) || (*in_stack_000001c8 == 0)) ||
          (lVar41 = *(long *)(*in_stack_000001c8 + 0x170), lVar41 == 0)) ||
         (lVar41 = *(long *)(lVar41 + 0x40), lVar41 == 0)) goto LAB_03793c9c;
      in_stack_000016a0 =
           CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),uVar30 | *(int *)(lVar27 + 0x28) << 0x10
                   );
      uVar19 = FUN_0219f8b8(lVar41,&stack0x000016a0,&stack0x00001590,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                           );
      if ((uVar19 & 1) != 0) {
        FUN_037791c8(&stack0x000016a0,&stack0x00001590,0);
        uVar45 = UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent
                           (&stack0x00001570,0);
        uVar19 = FUN_037791f0(&stack0x00001590,0);
        if ((uVar19 & 0x100) != 0) {
          in_stack_00000188 = 0.0;
        }
      }
      uVar13 = *in_stack_000001d0;
    }
    if (0 < (int)uVar13) {
      lVar27 = *in_stack_000001e8;
      if (lVar27 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar27 + 0x18) <= uVar13 - 1) goto thunk_FUN_01ab6c44;
      lVar27 = *(long *)(lVar27 + (ulong)(uVar13 - 1) * (unaff_x27 & 0xffffffff) + 0x30);
      if (((lVar27 == 0) || (*in_stack_000001c8 == 0)) ||
         ((lVar41 = *(long *)(*in_stack_000001c8 + 0x170), lVar41 == 0 ||
          (lVar41 = *(long *)(lVar41 + 0x40), lVar41 == 0)))) goto LAB_03793c9c;
      in_stack_000016a0 =
           CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),
                    *(uint *)(lVar27 + 0x28) | uVar30 << 0x10);
      uVar19 = FUN_0219f8b8(lVar41,&stack0x000016a0,&stack0x00001590,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                           );
      if ((uVar19 & 1) != 0) {
        FUN_037791dc(&stack0x000016a0,&stack0x00001590,0);
        UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent(&stack0x00001570,0);
        FUN_03778e8c(uVar45,0);
        uVar19 = FUN_037791f0(&stack0x00001590,0);
        if ((uVar19 & 0x100) != 0) {
          in_stack_00000188 = 0.0;
        }
      }
    }
  }
  lVar27 = *in_stack_000001e8;
  if (lVar27 == 0) goto LAB_03793c9c;
  uVar13 = *in_stack_000001d0;
  uVar45 = FUN_03778e7c(&stack0x000015e0,0);
  if (*(uint *)(lVar27 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar27 + (long)(int)uVar13 * unaff_x27 + 0x160) = uVar45;
  if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0)
      == 0) {
    thunk_FUN_01a58e78();
  }
  uVar19 = FUN_037a5c04(in_stack_0000169c,0);
  unaff_w21 = *in_stack_000001d0;
  unaff_x22 = uVar19 & 0xffffffff;
  unaff_x26 = in_stack_000001c8;
  fStack000000000000015c = fVar47;
  if ((uVar19 & 1) != 0) {
    *(uint *)(unaff_x19 + 0x19c4) = unaff_w21;
    goto LAB_0378dfc4;
  }
  if ((uVar19 & 1) == 0 && 0 < (int)unaff_w21) {
    uVar13 = *(uint *)(unaff_x19 + 0x19c4);
    if ((uVar13 == 0x80000000) || (uVar13 != unaff_w21 - 1)) {
LAB_0378e604:
      uVar13 = unaff_w21 - 1;
      if ((0 < (int)unaff_w21) && (uVar13 != *(uint *)(unaff_x19 + 0x19c4))) goto code_r0x0378e618;
      uVar13 = *(uint *)(unaff_x19 + 0x19c4);
      if (uVar13 == 0x80000000) goto LAB_0378dfc4;
      lVar27 = *in_stack_000001e8;
      if (lVar27 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar27 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
      lVar27 = *(long *)(lVar27 + (long)(int)uVar13 * unaff_x27 + 0x30);
      if ((lVar27 == 0) || (lVar27 = FUN_03787a68(lVar27,0), lVar27 == 0)) goto LAB_03793c9c;
      uVar13 = FUN_03776e5c(lVar27,0);
      if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
      iVar14 = FUN_0377acf0(*in_stack_000001a8,0);
      if (((*unaff_x26 == 0) || (lVar27 = FUN_03779cb4(*unaff_x26,0), lVar27 == 0)) ||
         (*(long *)(lVar27 + 0x48) == 0)) goto LAB_03793c9c;
      in_stack_000016a0 = CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),uVar13 | iVar14 << 0x10);
      uVar19 = FUN_0219f8b8(*(long *)(lVar27 + 0x48),&stack0x000016a0,&stack0x00001518,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__);
      if ((uVar19 & 1) == 0) goto LAB_0378dfc4;
      lVar27 = *in_stack_000001e8;
      if (lVar27 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto thunk_FUN_01ab6c44;
      fVar47 = *(float *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x27 + 0x148);
      fVar52 = *(float *)(unaff_x19 + 0x2f4);
      FUN_037793b0(&stack0x00001518,0);
      fVar48 = (float)FUN_03779388(&stack0x00001550,0);
      FUN_037793c0(&stack0x00001518,0);
      fVar49 = (float)FUN_03779398(&stack0x00001548,0);
      FUN_03778e64(((fVar47 - fVar52) / unaff_s13 + fVar48) - fVar49,&stack0x000015e0,0);
      FUN_037793b0(&stack0x00001518,0);
      fVar47 = (float)FUN_03779390(&stack0x00001550,0);
      puVar20 = &stack0x00001518;
    }
    else {
      lVar27 = *in_stack_000001e8;
      if (lVar27 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar27 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
      lVar27 = *(long *)(lVar27 + (long)(int)uVar13 * unaff_x27 + 0x30);
      if ((lVar27 == 0) || (lVar27 = FUN_03787a68(lVar27,0), lVar27 == 0)) goto LAB_03793c9c;
      uVar13 = FUN_03776e5c(lVar27,0);
      if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
      iVar14 = FUN_0377acf0(*in_stack_000001a8,0);
      if (((*in_stack_000001c8 == 0) || (lVar27 = FUN_03779cb4(*in_stack_000001c8,0), lVar27 == 0))
         || (*(long *)(lVar27 + 0x48) == 0)) goto LAB_03793c9c;
      in_stack_000016a0 = CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),uVar13 | iVar14 << 0x10);
      uVar19 = FUN_0219f8b8(*(long *)(lVar27 + 0x48),&stack0x000016a0,&stack0x00001558,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__);
      if ((uVar19 & 1) == 0) goto LAB_0378dfc4;
      lVar27 = *in_stack_000001e8;
      if (lVar27 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto thunk_FUN_01ab6c44;
      fVar47 = *(float *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x27 + 0x148);
      fVar52 = *(float *)(unaff_x19 + 0x2f4);
      FUN_037793b0(&stack0x00001558,0);
      fVar48 = (float)FUN_03779388(&stack0x00001550,0);
      FUN_037793c0(&stack0x00001558,0);
      fVar49 = (float)FUN_03779398(&stack0x00001548,0);
      FUN_03778e64(((fVar47 - fVar52) / unaff_s13 + fVar48) - fVar49,&stack0x000015e0,0);
      FUN_037793b0(&stack0x00001558,0);
      fVar47 = (float)FUN_03779390(&stack0x00001550,0);
      puVar20 = &stack0x00001558;
    }
    FUN_037793c0(puVar20,0);
    fVar48 = (float)FUN_037793a0(&stack0x00001548,0);
    FUN_03778e74(fVar47 - fVar48,&stack0x000015e0,0);
    in_stack_00000188 = 0.0;
  }
  goto LAB_0378dfc4;
code_r0x0378e618:
  lVar27 = *in_stack_000001e8;
  if (lVar27 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar27 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
  lVar27 = *(long *)(lVar27 + (ulong)uVar13 * (unaff_x27 & 0xffffffff) + 0x30);
  if ((lVar27 == 0) || (lVar27 = FUN_03787a68(lVar27,0), lVar27 == 0)) goto LAB_03793c9c;
  unaff_w29 = FUN_03776e5c(lVar27,0);
  if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
  unaff_w28 = FUN_0377acf0(*in_stack_000001a8,0);
  if (((*unaff_x26 == 0) || (lVar27 = FUN_03779cb4(*unaff_x26,0), lVar27 == 0)) ||
     (param_2 = *(long *)(lVar27 + 0x50), param_2 == 0)) goto LAB_03793c9c;
  param_3 = &stack0x00001000;
  param_1 = (undefined8 *)Method_System_Collections_Generic_Dictionary<int,_Task>__ctor__;
  unaff_w21 = uVar13;
  goto code_r0x0378e69c;
LAB_0379194c:
  do {
    uVar13 = uVar24 - 1;
    if (*(uint *)(lVar27 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
    lVar44 = (long)(int)uVar13;
    lVar41 = lVar27 + lVar44 * 0x188;
    lVar33 = *(long *)(lVar41 + 0x40);
    uVar2 = *(ushort *)(lVar41 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    bVar11 = FUN_026b63d8(uVar2,0);
    if (*(uint *)(lVar27 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
    lVar41 = *(long *)(in_stack_000001c0 + 0x48);
    uVar38 = (uint)uVar2;
    if (lVar41 == 0) goto LAB_03793c9c;
    uVar25 = *(uint *)(lVar27 + lVar44 * 0x188 + 0x6c);
    if (*(uint *)(lVar41 + 0x18) <= uVar25) goto thunk_FUN_01ab6c44;
    lVar34 = (long)(int)uVar25;
    lVar41 = lVar41 + lVar34 * 0x60;
    uVar4 = *(uint *)(lVar41 + 0x40);
    uVar42 = *(uint *)(lVar41 + 0x6c);
    iVar16 = *(int *)(lVar41 + 0x20);
    iVar17 = *(int *)(lVar41 + 0x28);
    iVar14 = *(int *)(lVar41 + 0x2c);
    uVar5 = *(uint *)(lVar41 + 0x44);
    lVar35 = (long)(int)uVar5;
    fVar57 = *(float *)(lVar41 + 0x50);
    fVar64 = *(float *)(lVar41 + 0x58);
    fVar52 = *(float *)(lVar41 + 0x5c);
    fVar54 = *(float *)(lVar41 + 0x60);
    fVar56 = *(float *)(lVar41 + 100);
    fVar61 = *(float *)(lVar41 + 0x70);
    fVar66 = *(float *)(lVar41 + 0x74);
    fVar55 = *(float *)(lVar41 + 0x78);
    fVar46 = *(float *)(lVar41 + 0x7c);
    if ((int)uVar42 < 0x421) {
      if ((int)uVar42 < 0x209) {
        if ((int)uVar42 < 0x111) {
          switch(uVar42) {
          case 0x101:
            goto switchD_03791aa4_caseD_1001;
          case 0x102:
            goto switchD_03791aa4_caseD_1002;
          case 0x103:
          case 0x105:
          case 0x106:
          case 0x107:
            break;
          case 0x104:
            goto switchD_03791aa4_caseD_1004;
          case 0x108:
            goto switchD_03791aa4_caseD_1008;
          default:
            if (uVar42 == 0x110) goto switchD_03791aa4_caseD_1008;
          }
        }
        else {
          switch(uVar42) {
          case 0x201:
            goto switchD_03791aa4_caseD_1001;
          case 0x202:
            goto switchD_03791aa4_caseD_1002;
          case 0x203:
          case 0x205:
          case 0x206:
          case 0x207:
            break;
          case 0x204:
            goto switchD_03791aa4_caseD_1004;
          case 0x208:
            goto switchD_03791aa4_caseD_1008;
          default:
            if (uVar42 == 0x120) goto LAB_03791c08;
          }
        }
      }
      else if ((int)uVar42 < 0x405) {
        if ((int)uVar42 < 0x401) {
          if (uVar42 == 0x210) goto switchD_03791aa4_caseD_1008;
          if (uVar42 == 0x220) goto LAB_03791c08;
        }
        else {
          if (uVar42 == 0x401) goto switchD_03791aa4_caseD_1001;
          if (uVar42 == 0x402) goto switchD_03791aa4_caseD_1002;
          if (uVar42 == 0x404) goto switchD_03791aa4_caseD_1004;
        }
      }
      else {
        if ((uVar42 == 0x408) || (uVar42 == 0x410)) goto switchD_03791aa4_caseD_1008;
        if (uVar42 == 0x420) goto LAB_03791c08;
      }
      goto switchD_03791aa4_caseD_1003;
    }
    if (0x1008 < (int)uVar42) {
      if ((int)uVar42 < 0x2005) {
        if (0x2000 < (int)uVar42) {
          if (uVar42 == 0x2001) goto switchD_03791aa4_caseD_1001;
          if (uVar42 == 0x2002) goto switchD_03791aa4_caseD_1002;
          if (uVar42 == 0x2004) goto switchD_03791aa4_caseD_1004;
          goto switchD_03791aa4_caseD_1003;
        }
        if (uVar42 != 0x1010) {
          uVar26 = 0x1020;
          goto LAB_03791bc8;
        }
      }
      else if ((uVar42 != 0x2008) && (uVar42 != 0x2010)) {
        uVar26 = 0x2020;
LAB_03791bc8:
        if (uVar42 != uVar26) goto switchD_03791aa4_caseD_1003;
LAB_03791c08:
        fVar52 = fVar61 + fVar55;
        goto LAB_03791c1c;
      }
      goto switchD_03791aa4_caseD_1008;
    }
    if ((int)uVar42 < 0x811) {
      switch(uVar42) {
      case 0x801:
        goto switchD_03791aa4_caseD_1001;
      case 0x802:
        goto switchD_03791aa4_caseD_1002;
      case 0x803:
      case 0x805:
      case 0x806:
      case 0x807:
        break;
      case 0x804:
        goto switchD_03791aa4_caseD_1004;
      case 0x808:
switchD_03791aa4_caseD_1008:
        if ((int)uVar13 <= (int)uVar5) {
          if (uVar38 < 0xad) {
            if ((uVar38 != 3) && (uVar38 != 10)) goto FUN_03791eb4;
          }
          else if ((uVar38 != 0xad) && ((uVar38 != 0x200b && (uVar38 != 0x2060)))) {
FUN_03791eb4:
            if (*(uint *)(lVar27 + 0x18) <= uVar4) goto thunk_FUN_01ab6c44;
            uVar3 = *(undefined2 *)(lVar27 + (long)(int)uVar4 * 0x188 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              plVar43 = (long *)PTR_DAT_03cbded8;
            }
            uVar21 = FUN_026b8cc4(uVar3,0);
            if ((uVar21 & 1) == 0) {
              bVar10 = (int)uVar25 < *(int *)(unaff_x19 + 0x340);
            }
            else {
              bVar10 = false;
            }
            if ((fVar52 <= fVar54) && (!bVar10 && (uVar42 >> 4 & 1) == 0)) {
              fStack0000000000000158 = fVar56;
              if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
                fStack0000000000000158 = fVar54 + fVar56;
              }
              goto LAB_03791c20;
            }
            if ((uVar24 == 1) || (uVar25 != uVar30)) {
              cVar23 = *(char *)(in_stack_000001e0 + 0xb6);
            }
            else {
              cVar23 = *(char *)(in_stack_000001e0 + 0xb6);
              if (uVar13 != *(uint *)(in_stack_000001e0 + 0xe4)) {
                iVar14 = (iVar14 - iVar16) - (uStack0000000000000090 & 1);
                fVar56 = -fVar52;
                if (cVar23 != '\0') {
                  fVar56 = fVar52;
                }
                if (iVar14 < 1) {
                  fVar52 = 1.0;
                }
                else {
                  fVar52 = *(float *)(in_stack_000001e0 + 0x7c);
                }
                if (iVar14 < 2) {
                  iVar14 = 1;
                }
                fVar54 = fVar54 + fVar56;
                if (uVar38 == 9) {
LAB_037939d0:
                  if (cVar23 != '\0') {
                    fVar54 = fVar54 * (1.0 - fVar52);
                    fVar56 = (float)iVar14;
LAB_03793a0c:
                    fStack0000000000000158 = fStack0000000000000158 - fVar54 / fVar56;
                    break;
                  }
                  fVar56 = (float)iVar14;
                  fVar54 = fVar54 * (1.0 - fVar52);
                }
                else {
                  if (uVar38 != 0xa0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar21 = FUN_026b97f8(uVar38,0);
                    cVar23 = *(char *)(in_stack_000001e0 + 0xb6);
                    if ((uVar21 & 1) != 0) goto LAB_037939d0;
                  }
                  fVar54 = fVar54 * fVar52;
                  fVar56 = (float)(int)((iVar16 - (~uStack0000000000000090 & 1)) + iVar17);
                  if (cVar23 != '\0') goto LAB_03793a0c;
                }
                fStack0000000000000158 = fStack0000000000000158 + fVar54 / fVar56;
                uStack0000000000000148 =
                     CONCAT44((float)((ulong)uStack0000000000000148 >> 0x20) + 0.0,
                              (float)uStack0000000000000148 + 0.0);
                break;
              }
            }
            fStack0000000000000158 = fVar56;
            if (cVar23 != '\0') {
              fStack0000000000000158 = fVar54 + fVar56;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000090 = FUN_026b97f8(uVar38,0);
            uStack0000000000000148 = 0;
          }
        }
        break;
      default:
        if (uVar42 == 0x810) goto switchD_03791aa4_caseD_1008;
      }
    }
    else {
      switch(uVar42) {
      case 0x1001:
switchD_03791aa4_caseD_1001:
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          fStack0000000000000158 = fVar56 + 0.0;
        }
        else {
          fStack0000000000000158 = 0.0 - fVar52;
        }
        break;
      case 0x1002:
switchD_03791aa4_caseD_1002:
LAB_03791c1c:
        fStack0000000000000158 = (fVar56 + fVar54 * 0.5) - fVar52 * 0.5;
        break;
      case 0x1003:
      case 0x1005:
      case 0x1006:
      case 0x1007:
        goto switchD_03791aa4_caseD_1003;
      case 0x1004:
switchD_03791aa4_caseD_1004:
        fStack0000000000000158 = (fVar54 + fVar56) - fVar52;
        if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
          fStack0000000000000158 = fVar54 + fVar56;
        }
        break;
      case 0x1008:
        goto switchD_03791aa4_caseD_1008;
      default:
        if (uVar42 == 0x820) goto LAB_03791c08;
        goto switchD_03791aa4_caseD_1003;
      }
LAB_03791c20:
      uStack0000000000000148 = 0;
    }
switchD_03791aa4_caseD_1003:
    uVar42 = (uint)*(undefined8 *)(lVar27 + 0x18);
    if (uVar42 <= uVar13) goto thunk_FUN_01ab6c44;
    lVar41 = lVar27 + lVar44 * 0x188;
    fVar56 = fStack0000000000000120 + fStack0000000000000158;
    fVar52 = (float)uStack0000000000000118 + (float)uStack0000000000000148;
    fVar54 = (float)((ulong)uStack0000000000000118 >> 0x20) +
             (float)((ulong)uStack0000000000000148 >> 0x20);
    if (*(char *)(lVar41 + 0x1a0) == '\0') goto LAB_037924bc;
    cVar23 = *(char *)(lVar27 + lVar44 * 0x188 + 0x28);
    if (cVar23 != '\x01') goto LAB_0379225c;
    fVar49 = fmodf(*(float *)(in_stack_000001e0 + 0xfc) * (float)(int)uVar25,1.0);
    plVar43 = (long *)PTR_DAT_03cbded8;
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf4)) {
    case 0:
      fVar49 = 1.0;
      lVar29 = lVar27 + lVar44 * 0x188;
      *(undefined4 *)(lVar29 + 0xbc) = 0;
      *(undefined4 *)(lVar29 + 0x94) = 0;
      *(undefined4 *)(lVar29 + 0xe4) = 0x3f800000;
      break;
    case 1:
      fVar46 = *(float *)(lVar27 + lVar44 * 0x188 + 0xa0);
      if (*(int *)(in_stack_000001e0 + 0x70) == 0x208) {
        lVar29 = lVar27 + lVar44 * 0x188;
        fVar55 = (fStack0000000000000158 + fVar46) - *(float *)(unaff_x19 + 0x360);
        fVar46 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
        goto LAB_03791dcc;
      }
      lVar29 = lVar27 + lVar44 * 0x188;
      fVar55 = fVar55 - fVar61;
      *(float *)(lVar29 + 0xbc) = fVar49 + (fVar46 - fVar61) / fVar55;
      *(float *)(lVar29 + 0x94) = fVar49 + (*(float *)(lVar29 + 0x78) - fVar61) / fVar55;
      *(float *)(lVar29 + 0xe4) = fVar49 + (*(float *)(lVar29 + 200) - fVar61) / fVar55;
      fVar49 = fVar49 + (*(float *)(lVar29 + 0xf0) - fVar61) / fVar55;
      break;
    case 2:
      lVar29 = lVar27 + lVar44 * 0x188;
      fVar46 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
      fVar55 = (fStack0000000000000158 + *(float *)(lVar29 + 0xa0)) - *(float *)(unaff_x19 + 0x360);
LAB_03791dcc:
      *(float *)(lVar29 + 0xbc) = fVar49 + fVar55 / fVar46;
      *(float *)(lVar29 + 0x94) =
           fVar49 + ((fStack0000000000000158 + *(float *)(lVar29 + 0x78)) -
                    *(float *)(unaff_x19 + 0x360)) /
                    (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      *(float *)(lVar29 + 0xe4) =
           fVar49 + ((fStack0000000000000158 + *(float *)(lVar29 + 200)) -
                    *(float *)(unaff_x19 + 0x360)) /
                    (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      fVar49 = fVar49 + ((fStack0000000000000158 + *(float *)(lVar29 + 0xf0)) -
                        *(float *)(unaff_x19 + 0x360)) /
                        (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      break;
    case 3:
      switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
      case 0:
        lVar29 = lVar27 + lVar44 * 0x188;
        *(undefined4 *)(lVar29 + 0xc0) = 0;
        *(undefined4 *)(lVar29 + 0x98) = 0x3f800000;
        *(undefined4 *)(lVar29 + 0xe8) = 0;
        *(undefined4 *)(lVar29 + 0x110) = 0x3f800000;
        break;
      case 1:
        fVar46 = fVar46 - fVar66;
        lVar29 = lVar27 + lVar44 * 0x188;
        fVar55 = fVar49 + (*(float *)(lVar29 + 0xa4) - fVar66) / fVar46;
        fVar46 = fVar49 + (*(float *)(lVar29 + 0x7c) - fVar66) / fVar46;
        *(float *)(lVar29 + 0xc0) = fVar55;
        *(float *)(lVar29 + 0x98) = fVar46;
        *(float *)(lVar29 + 0xe8) = fVar55;
        *(float *)(lVar29 + 0x110) = fVar46;
        break;
      case 2:
        lVar29 = lVar27 + lVar44 * 0x188;
        fVar55 = fVar49 + (*(float *)(lVar29 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
                          (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
        *(float *)(lVar29 + 0xc0) = fVar55;
        fVar46 = *(float *)(unaff_x19 + 0x364);
        fVar61 = *(float *)(unaff_x19 + 0x36c);
        *(float *)(lVar29 + 0xe8) = fVar55;
        fVar55 = fVar49 + (*(float *)(lVar29 + 0x7c) - fVar46) / (fVar61 - fVar46);
        *(float *)(lVar29 + 0x98) = fVar55;
        *(float *)(lVar29 + 0x110) = fVar55;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar42 = (uint)*(undefined8 *)(lVar27 + 0x18);
      }
      if (uVar42 <= uVar13) goto thunk_FUN_01ab6c44;
      lVar29 = lVar27 + lVar44 * 0x188;
      fVar55 = *(float *)(lVar29 + 0x168);
      fVar46 = (1.0 - (*(float *)(lVar29 + 0xc0) + *(float *)(lVar29 + 0x98)) * fVar55) * 0.5;
      fVar61 = fVar49 + *(float *)(lVar29 + 0xc0) * fVar55 + fVar46;
      fVar49 = fVar49 + *(float *)(lVar29 + 0x98) * fVar55 + fVar46;
      *(float *)(lVar29 + 0xbc) = fVar61;
      *(float *)(lVar29 + 0x94) = fVar61;
      *(float *)(lVar29 + 0xe4) = fVar49;
      break;
    default:
      goto switchD_03791d04_default;
    }
    *(float *)(lVar27 + lVar44 * 0x188 + 0x10c) = fVar49;
switchD_03791d04_default:
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
    case 0:
      if (uVar42 <= uVar13) goto thunk_FUN_01ab6c44;
      lVar29 = lVar27 + lVar44 * 0x188;
      *(undefined4 *)(lVar29 + 0xc0) = 0;
      *(undefined4 *)(lVar29 + 0x98) = 0x3f800000;
      *(undefined4 *)(lVar29 + 0xe8) = 0x3f800000;
      *(undefined4 *)(lVar29 + 0x110) = 0;
      break;
    case 1:
      if (uVar13 < uVar42) {
        fVar57 = fVar57 - fVar64;
        lVar29 = lVar27 + lVar44 * 0x188;
        fVar49 = (*(float *)(lVar29 + 0xa4) - fVar64) / fVar57;
        fVar57 = (*(float *)(lVar29 + 0x7c) - fVar64) / fVar57;
        *(float *)(lVar29 + 0xc0) = fVar49;
        goto LAB_0379217c;
      }
      goto thunk_FUN_01ab6c44;
    case 2:
      if (uVar42 <= uVar13) goto thunk_FUN_01ab6c44;
      lVar29 = lVar27 + lVar44 * 0x188;
      fVar49 = (*(float *)(lVar29 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
      *(float *)(lVar29 + 0xc0) = fVar49;
      fVar57 = (*(float *)(lVar29 + 0x7c) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
LAB_0379217c:
      *(float *)(lVar29 + 0x98) = fVar57;
      *(float *)(lVar29 + 0xe8) = fVar57;
      *(float *)(lVar29 + 0x110) = fVar49;
      break;
    case 3:
      if (uVar42 <= uVar13) goto thunk_FUN_01ab6c44;
      lVar29 = lVar27 + lVar44 * 0x188;
      fVar57 = *(float *)(lVar29 + 0x168);
      fVar55 = (1.0 - (*(float *)(lVar29 + 0xbc) + *(float *)(lVar29 + 0xe4)) / fVar57) * 0.5;
      fVar49 = *(float *)(lVar29 + 0xbc) / fVar57 + fVar55;
      fVar55 = *(float *)(lVar29 + 0xe4) / fVar57 + fVar55;
      *(float *)(lVar29 + 0xc0) = fVar49;
      *(float *)(lVar29 + 0x98) = fVar55;
      *(float *)(lVar29 + 0x110) = fVar49;
      *(float *)(lVar29 + 0xe8) = fVar55;
    }
    if (uVar42 <= uVar13) goto thunk_FUN_01ab6c44;
    lVar29 = lVar27 + lVar44 * 0x188;
    fVar49 = *(float *)(lVar29 + 0x16c) * (1.0 - *(float *)(unaff_x19 + 0x1594));
    if ((*(char *)(lVar29 + 100) == '\0') && ((*(byte *)(lVar27 + lVar44 * 0x188 + 0x19c) & 1) != 0)
       ) {
      fVar49 = -fVar49;
    }
    lVar29 = lVar27 + lVar44 * 0x188;
    *(float *)(lVar29 + 0xb8) = fVar49;
    *(float *)(lVar29 + 0x90) = fVar49;
    *(float *)(lVar29 + 0xe0) = fVar49;
    *(float *)(lVar29 + 0x108) = fVar49;
    *(undefined4 *)(lVar29 + 0xbc) = 0x3f800000;
    *(float *)(lVar29 + 0xc0) = fVar49;
    *(undefined4 *)(lVar29 + 0x94) = 0x3f800000;
    *(float *)(lVar29 + 0x98) = fVar49;
    *(undefined4 *)(lVar29 + 0xe4) = 0x3f800000;
    *(float *)(lVar29 + 0xe8) = fVar49;
    *(undefined4 *)(lVar29 + 0x10c) = 0x3f800000;
    *(float *)(lVar29 + 0x110) = fVar49;
LAB_0379225c:
    if (((int)uVar13 < *(int *)(in_stack_000001e0 + 0xd8)) &&
       (iStack0000000000000138 < *(int *)(in_stack_000001e0 + 0xdc))) {
      if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar25) ||
         (*(int *)(in_stack_000001e0 + 0x74) == 5)) {
        if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar25) ||
           (*(int *)(in_stack_000001e0 + 0x74) != 5)) goto LAB_037922d4;
        if (uVar13 < uVar42) {
          bVar10 = *(uint *)(lVar27 + lVar44 * 0x188 + 0x70) == uStack000000000000005c;
          goto LAB_037922d8;
        }
        goto thunk_FUN_01ab6c44;
      }
      if (uVar42 <= uVar13) goto thunk_FUN_01ab6c44;
LAB_037922e4:
      lVar41 = lVar27 + lVar44 * 0x188;
      *(ulong *)(lVar41 + 0xa0) =
           CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar41 + 0xa0) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar41 + 0xa0));
      *(float *)(lVar41 + 0xa8) = fVar54 + *(float *)(lVar41 + 0xa8);
      *(ulong *)(lVar41 + 0x78) =
           CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar41 + 0x78) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar41 + 0x78));
      *(float *)(lVar41 + 0x80) = fVar54 + *(float *)(lVar41 + 0x80);
      *(ulong *)(lVar41 + 200) =
           CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar41 + 200) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar41 + 200));
      *(float *)(lVar41 + 0xd0) = fVar54 + *(float *)(lVar41 + 0xd0);
      *(ulong *)(lVar41 + 0xf0) =
           CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar41 + 0xf0) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar41 + 0xf0));
      *(float *)(lVar41 + 0xf8) = fVar54 + *(float *)(lVar41 + 0xf8);
    }
    else {
LAB_037922d4:
      bVar10 = false;
LAB_037922d8:
      if (uVar42 <= uVar13) goto thunk_FUN_01ab6c44;
      if (bVar10) goto LAB_037922e4;
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(plVar43);
        DAT_0411f172 = '\x01';
        uVar42 = *(uint *)(lVar27 + 0x18);
      }
      uVar15 = *(undefined4 *)(*(undefined8 **)(*plVar43 + 0xb8) + 1);
      lVar29 = lVar27 + lVar44 * 0x188;
      *(undefined8 *)(lVar29 + 0xa0) = **(undefined8 **)(*plVar43 + 0xb8);
      *(undefined4 *)(lVar29 + 0xa8) = uVar15;
      if (uVar42 <= uVar13) goto thunk_FUN_01ab6c44;
      uVar15 = *(undefined4 *)(*(undefined8 **)(*plVar43 + 0xb8) + 1);
      lVar29 = lVar27 + lVar44 * 0x188;
      *(undefined8 *)(lVar29 + 0x78) = **(undefined8 **)(*plVar43 + 0xb8);
      *(undefined4 *)(lVar29 + 0x80) = uVar15;
      uVar15 = *(undefined4 *)(*(undefined8 **)(*plVar43 + 0xb8) + 1);
      *(undefined8 *)(lVar29 + 200) = **(undefined8 **)(*plVar43 + 0xb8);
      *(undefined4 *)(lVar29 + 0xd0) = uVar15;
      uVar15 = *(undefined4 *)(*(undefined8 **)(*plVar43 + 0xb8) + 1);
      *(undefined8 *)(lVar29 + 0xf0) = **(undefined8 **)(*plVar43 + 0xb8);
      *(undefined4 *)(lVar29 + 0xf8) = uVar15;
      *(undefined1 *)(lVar41 + 0x1a0) = 0;
    }
    iVar17 = FUN_0368e42c(0);
    if (iVar17 == 1) {
      cVar40 = *(char *)(in_stack_000001e0 + 0xa2);
    }
    else {
      cVar40 = '\0';
    }
    if (cVar23 == '\x01') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a429c(uVar13,cVar40 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
    else if (cVar23 == '\x02') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a4cd4(uVar13,cVar40 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
LAB_037924bc:
    lVar41 = *in_stack_000001e8;
    if (lVar41 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar41 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
    lVar41 = lVar41 + lVar44 * 0x188;
    uVar60 = *(undefined8 *)(lVar41 + 0x124);
    *(undefined8 *)(lVar41 + 0x124) =
         CONCAT44(fVar52 + (float)((ulong)uVar60 >> 0x20),fVar56 + (float)uVar60);
    *(float *)(lVar41 + 300) = fVar54 + *(float *)(lVar41 + 300);
    lVar41 = *in_stack_000001e8;
    if (lVar41 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar41 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
    lVar41 = lVar41 + lVar44 * 0x188;
    *(ulong *)(lVar41 + 0x118) =
         CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar41 + 0x118) >> 0x20),
                  fVar56 + (float)*(undefined8 *)(lVar41 + 0x118));
    *(float *)(lVar41 + 0x120) = fVar54 + *(float *)(lVar41 + 0x120);
    lVar41 = *in_stack_000001e8;
    if (lVar41 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar41 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
    lVar41 = lVar41 + lVar44 * 0x188;
    *(ulong *)(lVar41 + 0x130) =
         CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar41 + 0x130) >> 0x20),
                  fVar56 + (float)*(undefined8 *)(lVar41 + 0x130));
    *(float *)(lVar41 + 0x138) = fVar54 + *(float *)(lVar41 + 0x138);
    lVar41 = *in_stack_000001e8;
    if (lVar41 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar41 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
    lVar41 = lVar41 + lVar44 * 0x188;
    *(float *)(lVar41 + 0x13c) = fVar56 + *(float *)(lVar41 + 0x13c);
    *(ulong *)(lVar41 + 0x140) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar41 + 0x140) >> 0x20),
                  fVar52 + (float)*(undefined8 *)(lVar41 + 0x140));
    lVar41 = *in_stack_000001e8;
    if (lVar41 == 0) goto LAB_03793c9c;
    uVar42 = *(uint *)(lVar41 + 0x18);
    if (uVar42 <= uVar13) goto thunk_FUN_01ab6c44;
    lVar29 = lVar41 + lVar44 * 0x188;
    *(float *)(lVar29 + 0x148) = fVar56 + *(float *)(lVar29 + 0x148);
    *(float *)(lVar29 + 0x164) = fVar56 + *(float *)(lVar29 + 0x164);
    *(float *)(lVar29 + 0x154) = fVar52 + *(float *)(lVar29 + 0x154);
    uVar60 = *(undefined8 *)(lVar29 + 0x14c);
    *(undefined8 *)(lVar29 + 0x14c) =
         CONCAT44(fVar52 + (float)((ulong)uVar60 >> 0x20),fVar52 + (float)uVar60);
    if (uVar25 == uVar30) {
      uVar30 = *in_stack_000001d0 - 1;
      if (uVar13 == uVar30) goto LAB_037926b4;
    }
    else {
      lVar29 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar29 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar29 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
      lVar36 = (long)(int)uVar30;
      lVar39 = lVar29 + lVar36 * 0x60;
      fVar54 = fVar52 + *(float *)(lVar39 + 0x58);
      *(ulong *)(lVar39 + 0x50) =
           CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar39 + 0x50) >> 0x20),
                    fVar52 + (float)*(undefined8 *)(lVar39 + 0x50));
      *(float *)(lVar39 + 0x58) = fVar54;
      *(float *)(lVar39 + 0x5c) = fVar56 + *(float *)(lVar39 + 0x5c);
      if (uVar42 <= *(uint *)(lVar39 + 0x38)) goto thunk_FUN_01ab6c44;
      uVar15 = *(undefined4 *)(lVar41 + (long)(int)*(uint *)(lVar39 + 0x38) * 0x188 + 0x124);
      lVar29 = lVar29 + lVar36 * 0x60;
      *(float *)(lVar29 + 0x74) = fVar54;
      *(undefined4 *)(lVar29 + 0x70) = uVar15;
      lVar41 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar41 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar41 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
      lVar29 = *in_stack_000001e8;
      if (lVar29 == 0) goto LAB_03793c9c;
      uVar30 = *(uint *)(lVar41 + lVar36 * 0x60 + 0x44);
      if (*(uint *)(lVar29 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
      lVar41 = lVar41 + lVar36 * 0x60;
      *(undefined4 *)(lVar41 + 0x78) = *(undefined4 *)(lVar29 + (long)(int)uVar30 * 0x188 + 0x130);
      *(undefined4 *)(lVar41 + 0x7c) = *(undefined4 *)(lVar41 + 0x50);
      uVar30 = *in_stack_000001d0 - 1;
LAB_037926b4:
      if (uVar13 == uVar30) {
        lVar41 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar41 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar41 + 0x18) <= uVar25) goto thunk_FUN_01ab6c44;
        lVar29 = lVar41 + lVar34 * 0x60;
        fVar54 = fVar52 + *(float *)(lVar29 + 0x58);
        *(ulong *)(lVar29 + 0x50) =
             CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar29 + 0x50) >> 0x20),
                      fVar52 + (float)*(undefined8 *)(lVar29 + 0x50));
        *(float *)(lVar29 + 0x58) = fVar54;
        *(float *)(lVar29 + 0x5c) = fVar56 + *(float *)(lVar29 + 0x5c);
        lVar36 = *in_stack_000001e8;
        if (lVar36 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar36 + 0x18) <= *(uint *)(lVar29 + 0x38)) goto thunk_FUN_01ab6c44;
        uVar15 = *(undefined4 *)(lVar36 + (long)(int)*(uint *)(lVar29 + 0x38) * 0x188 + 0x124);
        lVar41 = lVar41 + lVar34 * 0x60;
        *(float *)(lVar41 + 0x74) = fVar54;
        *(undefined4 *)(lVar41 + 0x70) = uVar15;
        lVar41 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar41 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar41 + 0x18) <= uVar25) goto thunk_FUN_01ab6c44;
        lVar29 = *in_stack_000001e8;
        if (lVar29 == 0) goto LAB_03793c9c;
        uVar30 = *(uint *)(lVar41 + lVar34 * 0x60 + 0x44);
        if (*(uint *)(lVar29 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
        lVar41 = lVar41 + lVar34 * 0x60;
        *(undefined4 *)(lVar41 + 0x78) = *(undefined4 *)(lVar29 + (long)(int)uVar30 * 0x188 + 0x130)
        ;
        *(undefined4 *)(lVar41 + 0x7c) = *(undefined4 *)(lVar41 + 0x50);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar21 = FUN_026b82c4(uVar38,0);
    if (((((uVar21 & 1) == 0) && (1 < uVar38 - 0x2010)) && (uVar38 != 0xad)) && (uVar38 != 0x2d)) {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        if (uVar24 == 1) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          bVar12 = FUN_026b81f8(uVar38,0);
          if (((uVar38 == 0x200b) || (((bVar11 | bVar12 ^ 1) & 1) != 0)) ||
             (*in_stack_000001d0 == 1)) goto LAB_037930d8;
        }
        uStack000000000000016c = 0;
      }
      else {
        if (((uVar24 != 1) && ((int)uVar13 < (int)(*(uint *)(lVar27 + 0x18) - 1))) &&
           (((int)uVar13 < (int)*in_stack_000001d0 && ((uVar38 == 0x2019 || (uVar38 == 0x27)))))) {
          if (*(uint *)(lVar27 + 0x18) <= uVar24 - 2) goto thunk_FUN_01ab6c44;
          uVar3 = *(undefined2 *)(lVar27 + (long)in_stack_000001a8 + -0x464);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar21 = FUN_026b82c4(uVar3,0);
          if ((uVar21 & 1) != 0) {
            if (*(uint *)(lVar27 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
            uVar3 = *(undefined2 *)(lVar27 + (long)in_stack_000001a8 + -0x154);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar21 = FUN_026b82c4(uVar3,0);
            if ((uVar21 & 1) != 0) goto LAB_0379289c;
          }
        }
LAB_037930d8:
        if (uVar13 == *in_stack_000001d0 - 1) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar21 = FUN_026b82c4(uVar38,0);
          fStack0000000000000170 = (float)uVar13;
          if ((uVar21 & 1) == 0) goto LAB_03793114;
        }
        else {
LAB_03793114:
          fStack0000000000000170 = (float)(iStack0000000000000178 - 1);
        }
        lVar41 = *plVar18;
        if (lVar41 == 0) goto LAB_03793c9c;
        uVar30 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar17 = *(int *)(lVar41 + 0x18);
        if (iVar17 < (int)(uVar30 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(plVar18,iVar17 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar41 = *plVar18;
          if (lVar41 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar41 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
        lVar41 = lVar41 + (long)(int)uVar30 * 0xc;
        *(uint *)(lVar41 + 0x20) = uStack0000000000000168;
        *(float *)(lVar41 + 0x24) = fStack0000000000000170;
        *(uint *)(lVar41 + 0x28) = ((int)fStack0000000000000170 - uStack0000000000000168) + 1;
        lVar41 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar41 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar41 + 0x18) <= uVar25) goto thunk_FUN_01ab6c44;
        lVar41 = lVar41 + lVar34 * 0x60;
        uStack000000000000016c = 0;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar41 + 0x34) = *(int *)(lVar41 + 0x34) + 1;
      }
    }
    else {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        uStack0000000000000168 = uVar13;
      }
      if (uVar13 == *in_stack_000001d0 - 1) {
        lVar41 = *plVar18;
        if (lVar41 == 0) goto LAB_03793c9c;
        uVar30 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar17 = *(int *)(lVar41 + 0x18);
        if (iVar17 < (int)(uVar30 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(plVar18,iVar17 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar41 = *plVar18;
          if (lVar41 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar41 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
        lVar41 = lVar41 + (long)(int)uVar30 * 0xc;
        *(uint *)(lVar41 + 0x20) = uStack0000000000000168;
        *(uint *)(lVar41 + 0x24) = uVar13;
        *(uint *)(lVar41 + 0x28) = uVar24 - uStack0000000000000168;
        lVar41 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar41 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar41 + 0x18) <= uVar25) goto thunk_FUN_01ab6c44;
        lVar41 = lVar41 + lVar34 * 0x60;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar41 + 0x34) = *(int *)(lVar41 + 0x34) + 1;
      }
LAB_0379289c:
      uStack000000000000016c = 1;
    }
    lVar41 = *in_stack_000001e8;
    if (lVar41 == 0) goto LAB_03793c9c;
    uVar30 = *(uint *)(lVar41 + 0x18);
    if (uVar30 <= uVar13) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar41 + lVar44 * 0x188 + 0x19c) >> 2 & 1) == 0) {
      if (bVar7) {
LAB_037928d0:
        if (uVar24 - 2 < uVar30) {
          uVar15 = *(undefined4 *)(lVar41 + (long)in_stack_000001a8 + -0x354);
          uVar58 = *(undefined4 *)(lVar41 + (long)in_stack_000001a8 + -0x318);
          goto LAB_03792b34;
        }
        goto thunk_FUN_01ab6c44;
      }
LAB_03792a8c:
      bVar7 = false;
    }
    else {
      lVar34 = *(long *)(unaff_x19 + 0x15b8);
      if (lVar34 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) goto thunk_FUN_01ab6c44;
      iVar17 = *(int *)(lVar41 + lVar44 * 0x188 + 0x70);
      *(int *)(lVar41 + lVar44 * 0x188 + 0x178) =
           *(int *)(lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar13) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar25)) {
        bVar10 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar10 = iVar17 + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar10 = false;
      }
      if (uVar38 != 0x200b && (bVar11 & 1) == 0) {
        fVar54 = *(float *)(lVar41 + lVar44 * 0x188 + 0x16c);
        if (fVar48 <= fVar54) {
          fVar48 = fVar54;
        }
        if (iVar17 != iStack00000000000000c0) {
          fStack000000000000015c = fVar47;
        }
        if (lVar33 == 0) goto LAB_03793c9c;
        fVar54 = *(float *)(lVar41 + lVar44 * 0x188 + 0x150);
        if (fStack0000000000000174 <= ABS(fVar49)) {
          fStack0000000000000174 = ABS(fVar49);
        }
        FUN_03779650(&stack0x000016a0,lVar33,0);
        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
        fVar55 = (float)FUN_03776a10(&stack0x00001610,0);
        fVar54 = fVar54 + fVar48 * fVar55;
        iStack00000000000000c0 = iVar17;
        if (fVar54 <= fStack000000000000015c) {
          fStack000000000000015c = fVar54;
        }
      }
      if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar13)) ||
         (bVar7 || bVar10)) {
LAB_03792a80:
        if (!bVar7) goto LAB_03792a8c;
      }
      else {
        if (uVar13 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar21 = FUN_026b97f8(uVar38,0);
          if ((uVar21 & 1) != 0) goto LAB_03792a80;
        }
        lVar41 = *in_stack_000001e8;
        if (lVar41 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar41 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        lVar41 = lVar41 + lVar44 * 0x188;
        _bStack00000000000000d8 = *(float *)(lVar41 + 0x16c);
        fStack00000000000000d0 = *(float *)(lVar41 + 0x124);
        bVar7 = fVar48 != 0.0;
        fVar54 = _bStack00000000000000d8;
        if (bVar7) {
          fVar54 = fVar48;
        }
        fVar48 = fVar54;
        uVar45 = *(undefined4 *)(lVar41 + 0x174);
        uStack00000000000000cc = 0;
        fVar54 = fVar49;
        if (bVar7) {
          fVar54 = fStack0000000000000174;
        }
        fStack00000000000000c8 = fStack000000000000015c;
        fStack0000000000000174 = fVar54;
      }
      if (*in_stack_000001d0 == 1) {
        lVar41 = *in_stack_000001e8;
        if (lVar41 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar41 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        lVar41 = lVar41 + lVar44 * 0x188;
        uVar15 = *(undefined4 *)(lVar41 + 0x130);
        uVar58 = *(undefined4 *)(lVar41 + 0x16c);
LAB_03792b34:
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,uStack00000000000000cc,uVar15,
                     fStack000000000000015c,0,_bStack00000000000000d8,uVar58);
      }
      else {
        if ((uVar13 == uVar4) || ((int)uVar5 <= (int)uVar13)) {
          lVar41 = *in_stack_000001e8;
          if (lVar41 != 0) {
            lVar34 = lVar44;
            uVar30 = uVar13;
            if (uVar38 == 0x200b || (bVar11 & 1) != 0) {
              lVar34 = lVar35;
              uVar30 = uVar5;
            }
            if (uVar30 < *(uint *)(lVar41 + 0x18)) {
              lVar41 = lVar41 + lVar34 * 0x188;
              uVar15 = *(undefined4 *)(lVar41 + 0x130);
              uVar58 = *(undefined4 *)(lVar41 + 0x16c);
              goto LAB_03792b34;
            }
            goto thunk_FUN_01ab6c44;
          }
          goto LAB_03793c9c;
        }
        if (bVar10) {
          lVar41 = *in_stack_000001e8;
          if (lVar41 != 0) {
            uVar30 = *(uint *)(lVar41 + 0x18);
            goto LAB_037928d0;
          }
          goto LAB_03793c9c;
        }
        if ((int)(*in_stack_000001d0 - 1) <= (int)uVar13) {
LAB_03793294:
          bVar7 = true;
          goto LAB_03792b70;
        }
        lVar41 = *in_stack_000001e8;
        if (lVar41 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar41 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
        uVar21 = FUN_03779528(uVar45,*(undefined4 *)(lVar41 + (long)in_stack_000001a8),0);
        if ((uVar21 & 1) != 0) goto LAB_03793294;
        lVar41 = *in_stack_000001e8;
        if (lVar41 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar41 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        lVar41 = lVar41 + lVar44 * 0x188;
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,uStack00000000000000cc,
                     *(undefined4 *)(lVar41 + 0x130),fStack000000000000015c,0,
                     _bStack00000000000000d8,*(undefined4 *)(lVar41 + 0x16c));
      }
      fVar48 = 0.0;
      bVar7 = false;
      fStack000000000000015c = DAT_00d38d70;
      fStack0000000000000174 = 0.0;
    }
LAB_03792b70:
    lVar41 = *in_stack_000001e8;
    if (lVar41 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar41 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
    if (lVar33 == 0) goto LAB_03793c9c;
    uVar30 = *(uint *)(lVar41 + lVar44 * 0x188 + 0x19c);
    FUN_03779650(&stack0x000016a0,lVar33,0);
    memcpy(&stack0x00001610,&stack0x000016a0,0x60);
    fVar54 = (float)FUN_03776a30(&stack0x00001610,0);
    if ((uVar30 >> 6 & 1) == 0) {
      if (bVar9) {
        lVar41 = *in_stack_000001e8;
        if (lVar41 != 0) {
          if (uVar24 - 2 < *(uint *)(lVar41 + 0x18)) {
            fVar52 = *(float *)(lVar41 + (long)in_stack_000001a8 + -0x334);
            uVar15 = *(undefined4 *)(lVar41 + (long)in_stack_000001a8 + -0x354);
            goto LAB_037932fc;
          }
          goto thunk_FUN_01ab6c44;
        }
        goto LAB_03793c9c;
      }
LAB_03792cf8:
      bVar9 = false;
    }
    else {
      lVar41 = *in_stack_000001e8;
      if ((lVar41 == 0) || (lVar34 = *(long *)(unaff_x19 + 0x15b8), lVar34 == 0)) goto LAB_03793c9c;
      if ((*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) ||
         (*(uint *)(lVar41 + 0x18) <= uVar13)) goto thunk_FUN_01ab6c44;
      *(int *)(lVar41 + lVar44 * 0x188 + 0x180) =
           *(int *)(lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar13) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar25)) {
        bVar10 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar10 = *(int *)(lVar41 + lVar44 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar10 = false;
      }
      if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar13)) ||
         (!(bool)(~bVar9 & (bVar10 ^ 1U)))) {
LAB_03792cf0:
        if (!bVar9) goto LAB_03792cf8;
      }
      else {
        if (uVar13 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar21 = FUN_026b97f8(uVar38,0);
          if ((uVar21 & 1) != 0) goto LAB_03792cf0;
          lVar41 = *in_stack_000001e8;
          if (lVar41 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar41 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        lVar41 = lVar41 + lVar44 * 0x188;
        fStack00000000000000f0 = *(float *)(lVar41 + 0x16c);
        fStack00000000000000ec = *(float *)(lVar41 + 0x124);
        fStack00000000000000a8 = *(float *)(lVar41 + 0x68);
        in_stack_000000a0._4_4_ = *(float *)(lVar41 + 0x150);
        fStack00000000000000e0 = fVar54 * fStack00000000000000f0 + in_stack_000000a0._4_4_;
        uStack00000000000000dc = 0;
      }
      uVar30 = *in_stack_000001d0;
      if (uVar30 == 1) {
LAB_03792ef4:
        lVar34 = *in_stack_000001e8;
        if (lVar34 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar34 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        lVar34 = lVar34 + lVar44 * 0x188;
      }
      else {
        lVar41 = lVar44;
        if (uVar13 == uVar4) {
          lVar34 = *in_stack_000001e8;
          if (lVar34 == 0) goto LAB_03793c9c;
          uVar30 = uVar13;
          if ((uVar38 != 0x200b & (bVar11 ^ 1)) == 0) {
            lVar41 = lVar35;
            uVar30 = uVar5;
          }
          if (*(uint *)(lVar34 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
        }
        else {
          if ((int)uVar30 <= (int)uVar13) {
LAB_03792fdc:
            if ((int)uVar13 < (int)uVar30) {
              iVar17 = FUN_036d3364(lVar33,0);
              if (*(uint *)(lVar27 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
              lVar41 = *(long *)(lVar27 + (long)in_stack_000001a8 + -0x134);
              if (lVar41 == 0) goto LAB_03793c9c;
              iVar14 = FUN_036d3364(lVar41,0);
              if (iVar17 != iVar14) goto LAB_03792ef4;
            }
            if (!bVar10) {
              bVar9 = true;
              goto LAB_03793338;
            }
            lVar41 = *in_stack_000001e8;
            if (lVar41 != 0) {
              if (uVar24 - 2 < *(uint *)(lVar41 + 0x18)) {
                fVar52 = *(float *)(lVar41 + (long)in_stack_000001a8 + -0x334);
                uVar15 = *(undefined4 *)(lVar41 + (long)in_stack_000001a8 + -0x354);
                goto LAB_037932fc;
              }
              goto thunk_FUN_01ab6c44;
            }
            goto LAB_03793c9c;
          }
          lVar34 = *in_stack_000001e8;
          if (lVar34 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar34 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
          if (*(float *)(lVar34 + (long)in_stack_000001a8 + -0x10c) == fStack00000000000000a8) {
            fVar55 = *(float *)(lVar34 + (long)in_stack_000001a8 + -0x24);
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0
                        ) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar21 = FUN_037a2200(fVar52 + fVar55,in_stack_000000a0._4_4_,0);
            if ((uVar21 & 1) != 0) {
              uVar30 = *in_stack_000001d0;
              goto LAB_03792fdc;
            }
            lVar34 = *in_stack_000001e8;
            if (lVar34 == 0) goto LAB_03793c9c;
          }
          uVar30 = uVar13;
          if ((int)uVar5 < (int)uVar13) {
            lVar41 = lVar35;
            uVar30 = uVar5;
          }
          if (*(uint *)(lVar34 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
        }
        lVar34 = lVar34 + lVar41 * 0x188;
      }
      fVar52 = *(float *)(lVar34 + 0x150);
      uVar15 = *(undefined4 *)(lVar34 + 0x130);
LAB_037932fc:
      FUN_0379d0d0(fStack00000000000000ec,fStack00000000000000e0,uStack00000000000000dc,uVar15,
                   fStack00000000000000f0 * fVar54 + fVar52,0,fStack00000000000000f0,
                   fStack00000000000000f0);
      bVar9 = false;
    }
LAB_03793338:
    lVar41 = *in_stack_000001e8;
    if (lVar41 == 0) goto LAB_03793c9c;
    uVar30 = (uint)*(undefined8 *)(lVar41 + 0x18);
    if (uVar30 <= uVar13) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar41 + lVar44 * 0x188 + 0x19d) >> 1 & 1) == 0) {
      if (bVar8) {
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
      }
LAB_03793428:
      bVar8 = false;
    }
    else {
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar13) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar25)) {
        bVar10 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar10 = *(int *)(lVar41 + lVar44 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar10 = false;
      }
      if (!bVar8) {
        if (((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) ||
           (((int)uVar5 < (int)uVar13 || (bVar10)))) goto LAB_03793428;
        if (uVar13 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar21 = FUN_026b97f8(uVar38,0);
          if ((uVar21 & 1) != 0) goto LAB_03793428;
        }
        puVar6 = Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        lVar33 = *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        if (*(int *)(lVar33 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar33 = *(long *)puVar6;
        }
        lVar41 = *in_stack_000001e8;
        if (lVar41 == 0) goto LAB_03793c9c;
        uVar30 = (uint)*(undefined8 *)(lVar41 + 0x18);
        if (uVar30 <= uVar13) goto thunk_FUN_01ab6c44;
        pfVar37 = *(float **)(lVar33 + 0xb8);
        fStack0000000000000128 = *pfVar37;
        in_stack_00000140._4_4_ = pfVar37[1];
        fStack000000000000012c = pfVar37[2];
        fStack0000000000000130 = pfVar37[3];
        uStack0000000000000124 = 0;
      }
      if (uVar30 <= uVar13) goto thunk_FUN_01ab6c44;
      lVar41 = lVar41 + lVar44 * 0x188;
      fVar55 = *(float *)(lVar41 + 0x130);
      fVar64 = *(float *)(lVar41 + 0x124);
      fVar52 = *(float *)(lVar41 + 0x148);
      fVar57 = *(float *)(lVar41 + 0x14c);
      fVar46 = *(float *)(lVar41 + 0x154);
      fVar54 = *(float *)(lVar41 + 0x164);
      uVar21 = FUN_037a20cc(&stack0x00000210,&stack0x000001f0,0);
      lVar41 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
      if ((uVar21 & 1) == 0) {
        if (*(int *)(lVar41 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar41);
        }
        fVar61 = (float)FUN_037a1dd8(uVar31,0);
        bVar8 = (bVar11 & 1) == 0;
        if (bVar8) {
          fVar52 = fVar64;
        }
        if (bVar8) {
          fVar54 = fVar55;
        }
        if (fVar52 - fVar61 <= fStack0000000000000128) {
          fStack0000000000000128 = fVar52 - fVar61;
        }
        fVar52 = (float)FUN_037a1de0(uVar31,0);
        if (fStack000000000000012c <= fVar54 + fVar52) {
          fStack000000000000012c = fVar54 + fVar52;
        }
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar52 = (float)FUN_037a1df0(uVar31,0);
        if (fVar46 - fVar52 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar46 - fVar52;
        }
        fVar52 = (float)FUN_037a1de8(uVar31,0);
        if (fStack0000000000000130 <= fVar57 + fVar52) {
          fStack0000000000000130 = fVar57 + fVar52;
        }
      }
      else {
        if (*(int *)(lVar41 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar41);
        }
        fVar61 = (float)FUN_037a1de0(uVar31,0);
        if ((bVar11 & 1) == 0) {
          fVar52 = fVar64;
        }
        if (fVar46 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar46;
        }
        fVar52 = (fVar52 + (fStack000000000000012c - fVar61)) * 0.5;
        if (fStack0000000000000130 <= fVar57) {
          fStack0000000000000130 = fVar57;
        }
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,fVar52,
                     fStack0000000000000130,uStack0000000000000124);
        puVar6 = Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000140._4_4_ = (float)FUN_037a1df0(uVar19,0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000140._4_4_ = fVar46 - in_stack_00000140._4_4_;
        fStack000000000000012c = (float)FUN_037a1de0(uVar19,0);
        fVar46 = (float)FUN_037a1de8(uVar19,0);
        if ((bVar11 & 1) == 0) {
          fVar54 = fVar55;
        }
        fStack000000000000012c = fVar54 + fStack000000000000012c;
        uStack0000000000000124 = 0;
        fStack0000000000000128 = fVar52;
        fStack0000000000000130 = fVar57 + fVar46;
      }
      if ((((*in_stack_000001d0 == 1) || (uVar13 == uVar4)) || ((int)uVar5 <= (int)uVar13)) ||
         (bVar10)) {
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
    }
    uVar13 = *in_stack_000001d0;
    iStack0000000000000178 = iStack0000000000000178 + 1;
    in_stack_000001a8 = (long *)((long)in_stack_000001a8 + 0x188);
    bVar10 = (int)uVar24 < (int)uVar13;
    uVar30 = uVar25;
    uVar24 = uVar24 + 1;
  } while (bVar10);
  iVar17 = uVar25 + 1;
  plVar18 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
LAB_03793a5c:
  *(uint *)(in_stack_000001c0 + 0x10) = uVar13;
  uVar45 = *(undefined4 *)(unaff_x19 + 0x15c0);
  *(int *)(in_stack_000001c0 + 0x24) = iVar17;
  if ((int)uVar13 < 1 || iStack0000000000000138 == 0) {
    iStack0000000000000138 = 1;
  }
  *(int *)(in_stack_000001c0 + 0x1c) = iStack0000000000000138;
  *(undefined4 *)(in_stack_000001c0 + 0x14) = uVar45;
  *(int *)(in_stack_000001c0 + 0x28) = *(int *)(unaff_x19 + 0x350) + 1;
  if (1 < *(int *)(in_stack_000001c0 + 0x2c)) {
    uVar19 = 1;
    lVar27 = 0x70;
    do {
      lVar41 = *(long *)(in_stack_000001c0 + 0x58);
      if (lVar41 == 0) {
LAB_03793c9c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(*plVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(uint *)(lVar41 + 0x18) <= uVar19) goto thunk_FUN_01ab6c44;
      FUN_03785ba0(lVar41 + lVar27,0);
      if (*(int *)(in_stack_000001e0 + 0x100) != 0) {
        lVar41 = *(long *)(in_stack_000001c0 + 0x58);
        if (lVar41 == 0) goto LAB_03793c9c;
        if (*(int *)(*plVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar41 + 0x18) <= uVar19) {
thunk_FUN_01ab6c44:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03785bdc(lVar41 + lVar27,1,0);
      }
      uVar19 = uVar19 + 1;
      lVar27 = lVar27 + 0x50;
    } while ((long)uVar19 < (long)*(int *)(in_stack_000001c0 + 0x2c));
  }
LAB_0378c81c:
  if (*(long *)(in_stack_00000110 + 0x28) == in_stack_00001a38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


