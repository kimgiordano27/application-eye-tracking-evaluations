/*
FUNCTION_NAME: UnityEngine.UIElements.StylePropertyNameCollection.Enumerator$$Dispose
ENTRY_POINT: 0398240c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_12;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_UIElements_StylePropertyNameCollection_Enumerator__Dispose(void)

{
  int iVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  char in_NG;
  bool bVar7;
  char in_OV;
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
  undefined8 uVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 *puVar22;
  ulong uVar23;
  undefined1 uVar24;
  char cVar25;
  uint in_w8;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  float *pfVar29;
  long lVar30;
  uint uVar31;
  long lVar32;
  long lVar33;
  long *plVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  float *pfVar39;
  uint uVar40;
  long lVar41;
  long unaff_x19;
  char cVar42;
  uint unaff_w20;
  uint unaff_w21;
  uint uVar43;
  long *plVar44;
  long *unaff_x22;
  uint unaff_w23;
  char *unaff_x24;
  uint unaff_w25;
  long *unaff_x26;
  long lVar45;
  ulong unaff_x27;
  uint *unaff_x29;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  float fVar58;
  undefined4 uVar59;
  float fVar60;
  float fVar61;
  ulong unaff_d8;
  undefined8 uVar62;
  float fVar63;
  float fVar64;
  undefined8 uVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  ulong unaff_d13;
  float fVar69;
  float fVar70;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  int iStack0000000000000030;
  float fStack0000000000000034;
  int *in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  long *in_stack_00000058;
  float fStack0000000000000060;
  uint uStack0000000000000064;
  long in_stack_00000068;
  void *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  float fStack0000000000000090;
  uint uStack0000000000000094;
  undefined8 in_stack_00000098;
  float fStack00000000000000a0;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  ulong in_stack_000000b0;
  undefined8 in_stack_000000c0;
  float fStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000d8;
  byte bStack00000000000000e0;
  float fStack00000000000000e4;
  float fStack00000000000000e8;
  float fStack00000000000000f4;
  undefined8 *in_stack_000000f8;
  undefined8 *in_stack_00000100;
  undefined8 *in_stack_00000108;
  long in_stack_00000110;
  float in_stack_00000118;
  float fStack0000000000000120;
  undefined4 uStack0000000000000124;
  float fStack0000000000000128;
  float fStack000000000000012c;
  float fStack0000000000000130;
  int iStack0000000000000138;
  undefined8 in_stack_00000140;
  undefined8 uStack0000000000000148;
  float in_stack_00000150;
  float in_stack_00000158;
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
  float in_stack_000001a8;
  long *in_stack_000001b0;
  float fStack00000000000001bc;
  long in_stack_000001c0;
  long *in_stack_000001c8;
  uint *in_stack_000001d0;
  undefined8 in_stack_000001d8;
  long in_stack_000001e0;
  long *in_stack_000001e8;
  uint in_stack_000011dc;
  undefined4 in_stack_000011e0;
  uint in_stack_0000120c;
  undefined8 in_stack_00001288;
  char in_stack_00001294;
  float in_stack_00001298;
  uint in_stack_0000129c;
  long in_stack_00001638;
  
code_r0x0398240c:
  iVar17 = (int)unaff_x27;
  uVar18 = in_stack_00001288;
  if (in_NG == in_OV) {
    lVar32 = *unaff_x22;
    if (lVar32 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar32 + 0x18) <= in_w8) goto LAB_03988250;
    lVar32 = *(long *)(lVar32 + (ulong)in_w8 * (unaff_x27 & 0xffffffff) + 0x30);
    if ((((lVar32 == 0) || (*unaff_x26 == 0)) ||
        (lVar33 = *(long *)(*unaff_x26 + 0x170), lVar33 == 0)) ||
       (lVar33 = *(long *)(lVar33 + 0x40), lVar33 == 0)) goto thunk_FUN_01b48178;
    uVar20 = FUN_02624ae4(lVar33,*(uint *)(lVar32 + 0x28) | unaff_w21 << 0x10,&stack0x00001190,
                          *(undefined8 *)PTR_DAT_03dad2d0);
    if ((uVar20 & 1) != 0) {
      FUN_0396d464(&stack0x000012a0,&stack0x00001190,0);
      FUN_0396d2b4(&stack0x00001170,0);
      FUN_0396d114(in_stack_000011e0,0);
      uVar20 = FUN_0396d478(&stack0x00001190,0);
      if ((uVar20 & 0x100) != 0) {
        in_stack_00000188 = 0.0;
      }
    }
  }
LAB_03982518:
  lVar32 = *unaff_x22;
  if (lVar32 == 0) goto thunk_FUN_01b48178;
  uVar13 = *unaff_x29;
  uVar46 = FUN_0396d104(&stack0x000011e0,0);
  if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_03988250;
  *(undefined4 *)(lVar32 + (long)(int)uVar13 * unaff_x27 + 0x160) = uVar46;
  if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar20 = FUN_0399a2ec(in_stack_0000129c,0);
  uVar13 = *unaff_x29;
  fVar55 = (float)unaff_d8;
  fVar54 = (float)unaff_d13;
  if ((uVar20 & 1) == 0) {
    if ((uVar20 & 1) == 0 && 0 < (int)uVar13) {
      uVar31 = *(uint *)(unaff_x19 + 0x19c4);
      if ((uVar31 == 0x80000000) || (uVar31 != uVar13 - 1)) {
        do {
          uVar31 = uVar13 - 1;
          if (((int)uVar13 < 1) || (uVar31 == *(uint *)(unaff_x19 + 0x19c4))) {
            uVar13 = *(uint *)(unaff_x19 + 0x19c4);
            if (uVar13 == 0x80000000) goto LAB_0398259c;
            lVar32 = *in_stack_000001e8;
            if (lVar32 == 0) goto thunk_FUN_01b48178;
            if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_03988250;
            lVar32 = *(long *)(lVar32 + (long)(int)uVar13 * unaff_x27 + 0x30);
            if ((lVar32 == 0) || (lVar32 = FUN_0397c204(lVar32,0), lVar32 == 0))
            goto thunk_FUN_01b48178;
            uVar13 = FUN_0396b130(lVar32,0);
            if (*in_stack_000001b0 == 0) goto thunk_FUN_01b48178;
            iVar14 = FUN_0396ef70(*in_stack_000001b0,0);
            if (((*unaff_x26 == 0) || (lVar32 = FUN_0396def4(*unaff_x26,0), lVar32 == 0)) ||
               (*(long *)(lVar32 + 0x48) == 0)) goto thunk_FUN_01b48178;
            uVar21 = FUN_0262abc4(*(long *)(lVar32 + 0x48),uVar13 | iVar14 << 0x10,&stack0x00001118,
                                  *(undefined8 *)PTR_DAT_03dad2e0);
            unaff_x29 = in_stack_000001d0;
            if ((uVar21 & 1) == 0) goto LAB_0398259c;
            lVar32 = *in_stack_000001e8;
            if (lVar32 == 0) goto thunk_FUN_01b48178;
            if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto LAB_03988250;
            fVar47 = *(float *)(lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x27 +
                               0x148);
            fVar60 = *(float *)(unaff_x19 + 0x2f4);
            FUN_0396d638(&stack0x00001118,0);
            fVar48 = (float)FUN_0396d610(&stack0x00001150,0);
            FUN_0396d648(&stack0x00001118,0);
            fVar49 = (float)FUN_0396d620(&stack0x00001148,0);
            FUN_0396d0ec(((fVar47 - fVar60) / fVar54 + fVar48) - fVar49,&stack0x000011e0,0);
            FUN_0396d638(&stack0x00001118,0);
            fVar47 = (float)FUN_0396d618(&stack0x00001150,0);
            puVar22 = &stack0x00001118;
            goto LAB_03983b34;
          }
          lVar32 = *in_stack_000001e8;
          if (lVar32 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar32 + 0x18) <= uVar31) goto LAB_03988250;
          lVar32 = *(long *)(lVar32 + (ulong)uVar31 * (unaff_x27 & 0xffffffff) + 0x30);
          if ((lVar32 == 0) || (lVar32 = FUN_0397c204(lVar32,0), lVar32 == 0))
          goto thunk_FUN_01b48178;
          uVar13 = FUN_0396b130(lVar32,0);
          if (*in_stack_000001b0 == 0) goto thunk_FUN_01b48178;
          iVar14 = FUN_0396ef70(*in_stack_000001b0,0);
          if (((*unaff_x26 == 0) || (lVar32 = FUN_0396def4(*unaff_x26,0), lVar32 == 0)) ||
             (*(long *)(lVar32 + 0x50) == 0)) goto thunk_FUN_01b48178;
          uVar21 = FUN_0262dcc8(*(long *)(lVar32 + 0x50),uVar13 | iVar14 << 0x10,&stack0x00001130,
                                *(undefined8 *)PTR_DAT_03dad2d8);
          unaff_x29 = in_stack_000001d0;
          uVar13 = uVar31;
        } while ((uVar21 & 1) == 0);
        lVar32 = *in_stack_000001e8;
        if (lVar32 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar32 + 0x18) <= uVar31) goto LAB_03988250;
        fVar60 = *(float *)(unaff_x19 + 0x2e0);
        fVar50 = *(float *)(unaff_x19 + 0x180);
        lVar32 = lVar32 + uVar31 * unaff_x27;
        fVar47 = *(float *)(unaff_x19 + 0x2f4);
        fVar51 = *(float *)(lVar32 + 0x148);
        fVar63 = *(float *)(lVar32 + 0x150);
        FUN_0396d658(&stack0x00001130,0);
        fVar48 = (float)FUN_0396d610(&stack0x00001150,0);
        FUN_0396d668(&stack0x00001130,0);
        fVar49 = (float)FUN_0396d620(&stack0x00001148,0);
        FUN_0396d0ec(((fVar51 - fVar47) / fVar54 + fVar48) - fVar49,&stack0x000011e0,0);
        FUN_0396d658(&stack0x00001130,0);
        fVar47 = (float)FUN_0396d618(&stack0x00001150,0);
        FUN_0396d668(&stack0x00001130,0);
        fVar48 = (float)FUN_0396d628(&stack0x00001148,0);
        FUN_0396d0fc(((fVar63 - ((in_stack_000001a0 - fVar60) + fVar50)) / fVar54 + fVar47) - fVar48
                     ,&stack0x000011e0,0);
        in_stack_00000188 = 0.0;
      }
      else {
        lVar32 = *in_stack_000001e8;
        if (lVar32 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar32 + 0x18) <= uVar31) goto LAB_03988250;
        lVar32 = *(long *)(lVar32 + (long)(int)uVar31 * unaff_x27 + 0x30);
        if ((lVar32 == 0) || (lVar32 = FUN_0397c204(lVar32,0), lVar32 == 0))
        goto thunk_FUN_01b48178;
        uVar13 = FUN_0396b130(lVar32,0);
        if (*in_stack_000001b0 == 0) goto thunk_FUN_01b48178;
        iVar14 = FUN_0396ef70(*in_stack_000001b0,0);
        if (((*unaff_x26 == 0) || (lVar32 = FUN_0396def4(*unaff_x26,0), lVar32 == 0)) ||
           (*(long *)(lVar32 + 0x48) == 0)) goto thunk_FUN_01b48178;
        uVar21 = FUN_0262abc4(*(long *)(lVar32 + 0x48),uVar13 | iVar14 << 0x10,&stack0x00001158,
                              *(undefined8 *)PTR_DAT_03dad2e0);
        unaff_x29 = in_stack_000001d0;
        if ((uVar21 & 1) != 0) {
          lVar32 = *in_stack_000001e8;
          if (lVar32 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto LAB_03988250;
          fVar47 = *(float *)(lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x27 + 0x148)
          ;
          fVar60 = *(float *)(unaff_x19 + 0x2f4);
          FUN_0396d638(&stack0x00001158,0);
          fVar48 = (float)FUN_0396d610(&stack0x00001150,0);
          FUN_0396d648(&stack0x00001158,0);
          fVar49 = (float)FUN_0396d620(&stack0x00001148,0);
          FUN_0396d0ec(((fVar47 - fVar60) / fVar54 + fVar48) - fVar49,&stack0x000011e0,0);
          FUN_0396d638(&stack0x00001158,0);
          fVar47 = (float)FUN_0396d618(&stack0x00001150,0);
          puVar22 = &stack0x00001158;
LAB_03983b34:
          FUN_0396d648(puVar22,0);
          fVar48 = (float)FUN_0396d628(&stack0x00001148,0);
          FUN_0396d0fc(fVar47 - fVar48,&stack0x000011e0,0);
          in_stack_00000188 = 0.0;
          unaff_x29 = in_stack_000001d0;
        }
      }
    }
  }
  else {
    *(uint *)(unaff_x19 + 0x19c4) = uVar13;
  }
LAB_0398259c:
  fVar47 = (float)FUN_0396d0f4(&stack0x000011e0,0);
  fVar48 = (float)FUN_0396d0f4(&stack0x000011e0,0);
  if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
    fVar60 = *(float *)(unaff_x19 + 0x2f4);
    fVar49 = (float)FUN_0396af88(&stack0x000011f0,0);
    fVar60 = fVar60 - fVar54 * fVar49 * (1.0 - *(float *)(unaff_x19 + 0x1594));
    *(float *)(unaff_x19 + 0x2f4) = fVar60;
    if ((unaff_w25 != 0) || (in_stack_0000129c == 0x200b)) {
      *(float *)(unaff_x19 + 0x2f4) =
           fVar60 - in_stack_00000158 * *(float *)(in_stack_000001e0 + 0xc4);
    }
  }
  fVar49 = *(float *)(unaff_x19 + 0x2f0);
  if (fVar49 == 0.0) {
    fVar49 = 0.0;
  }
  else {
    fVar60 = (float)FUN_0396af68(&stack0x000011f0,0);
    fVar50 = (float)FUN_0396af78(&stack0x000011f0,0);
    fVar49 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
             (fVar49 * 0.5 - fVar54 * (fVar60 * 0.5 + fVar50));
    *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2f4) + fVar49;
  }
  uVar13 = 0;
  if ((unaff_w20 == 0) && (*unaff_x24 == '\x01')) {
    uVar13 = *(uint *)(unaff_x19 + 0x124) & 1;
  }
  lVar32 = *in_stack_00000190;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar21 = FUN_0391f968(lVar32,0,0);
  puVar6 = PTR_DAT_03daca38;
  if (uVar13 == 0) {
    fVar60 = 0.0;
    if ((uVar21 & 1) != 0) {
      lVar32 = *in_stack_00000190;
      if (*(int *)(*(long *)PTR_DAT_03daca38 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (lVar32 == 0) goto thunk_FUN_01b48178;
      uVar21 = FUN_038ffa04(lVar32,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
      if ((uVar21 & 1) != 0) {
        lVar32 = *in_stack_00000190;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (lVar32 == 0) goto thunk_FUN_01b48178;
        uVar21 = FUN_038ffa04(lVar32,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xe4),0);
        if ((uVar21 & 1) != 0) {
          lVar32 = *in_stack_00000190;
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (lVar32 != 0) {
            fVar50 = (float)FUN_03900954(lVar32,*(undefined4 *)
                                                 (*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
            plVar44 = (long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
            ;
            if ((*unaff_x26 != 0) && (*in_stack_00000190 != 0)) {
              fVar63 = *(float *)(*unaff_x26 + 0x188);
              fVar51 = (float)FUN_03900954(*in_stack_00000190,
                                           *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xe4)
                                           ,0);
              fVar51 = fVar51 * fVar50 * fVar63 * 0.25;
              if (fVar50 < in_stack_000001a8 + fVar51) {
                in_stack_000001a8 = fVar50 - fVar51;
              }
              goto LAB_0398291c;
            }
          }
          goto thunk_FUN_01b48178;
        }
      }
    }
    fVar51 = 0.0;
    plVar44 = (long *)
              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
  }
  else {
    fVar51 = 0.0;
    plVar44 = (long *)
              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
    if ((uVar21 & 1) != 0) {
      lVar32 = *in_stack_00000190;
      if (*(int *)(*(long *)PTR_DAT_03daca38 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (lVar32 == 0) goto thunk_FUN_01b48178;
      uVar21 = FUN_038ffa04(lVar32,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
      plVar44 = (long *)
                Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
      if ((uVar21 & 1) != 0) {
        lVar32 = *in_stack_00000190;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (lVar32 == 0) goto thunk_FUN_01b48178;
        fVar60 = (float)FUN_03900954(lVar32,*(undefined4 *)
                                             (*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
        if (*unaff_x26 == 0) goto thunk_FUN_01b48178;
        fVar50 = (float)FUN_0396df5c(*unaff_x26,0);
        plVar44 = (long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
        if (*in_stack_00000190 == 0) goto thunk_FUN_01b48178;
        fVar51 = (float)FUN_03900954(*in_stack_00000190,
                                     *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xe4),0);
        fVar51 = fVar60 * fVar50 * 0.25 * fVar51;
        if (fVar60 < in_stack_000001a8 + fVar51) {
          in_stack_000001a8 = fVar60 - fVar51;
        }
      }
    }
    if (*unaff_x26 == 0) goto thunk_FUN_01b48178;
    fVar60 = (float)FUN_0396df6c(*unaff_x26,0);
  }
LAB_0398291c:
  fVar63 = *(float *)(unaff_x19 + 0x2f4);
  fVar50 = (float)FUN_0396af78(&stack0x000011f0,0);
  fVar66 = *(float *)(unaff_x19 + 0x19a8);
  fVar52 = (float)FUN_0396d0e4(&stack0x000011e0,0);
  fVar63 = fVar63 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                    fVar54 * (fVar52 + ((fVar50 * fVar66 - in_stack_000001a8) - fVar51));
  fVar50 = (float)FUN_0396af80(&stack0x000011f0,0);
  fVar52 = (float)FUN_0396d0f4(&stack0x000011e0,0);
  fVar67 = *(float *)(unaff_x19 + 0x180) +
           ((in_stack_000001a0 + fVar54 * (in_stack_000001a8 + fVar50 + fVar52)) -
           *(float *)(unaff_x19 + 0x2e0));
  fVar50 = (float)FUN_0396af70(&stack0x000011f0,0);
  fVar50 = fVar67 - fVar54 * (in_stack_000001a8 + in_stack_000001a8 + fVar50);
  fVar52 = (float)FUN_0396af68(&stack0x000011f0,0);
  fVar52 = fVar63 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                    fVar54 * (fVar51 + fVar51 +
                             in_stack_000001a8 + in_stack_000001a8 +
                             fVar52 * *(float *)(unaff_x19 + 0x19a8));
  fStack00000000000001bc = fVar63;
  fVar66 = fVar52;
  if (((unaff_w20 == 0) && (*unaff_x24 == '\x01')) && ((*(byte *)(unaff_x19 + 0x124) >> 1 & 1) != 0)
     ) {
    if (*(long *)(unaff_x19 + 0x68) == 0) goto thunk_FUN_01b48178;
    iVar14 = *(int *)(unaff_x19 + 0x19a4);
    fVar58 = (float)FUN_0396ac64(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
    if (*unaff_x26 == 0) goto thunk_FUN_01b48178;
    fVar70 = (float)FUN_0396ac84(*unaff_x26 + 0xb0,0);
    if (*unaff_x26 == 0) goto thunk_FUN_01b48178;
    fVar64 = *(float *)(unaff_x19 + 0xf0);
    fVar61 = *(float *)(unaff_x19 + 0x180);
    fVar66 = (float)iVar14 * fStack00000000000000ac;
    fVar53 = (float)FUN_0396ac34(*unaff_x26 + 0xb0,0);
    fVar53 = fVar53 * fVar64 * (fVar58 - (fVar70 + fVar61)) * 0.5;
    fVar58 = (float)FUN_0396af80(&stack0x000011f0,0);
    fVar64 = fVar66 * fVar54 * ((fVar51 + in_stack_000001a8 + fVar58) - fVar53);
    fVar58 = (float)FUN_0396af80(&stack0x000011f0,0);
    fVar70 = (float)FUN_0396af70(&stack0x000011f0,0);
    fVar67 = fVar67 + 0.0;
    fVar50 = fVar50 + 0.0;
    fVar66 = fVar66 * fVar54 * ((((fVar58 - fVar70) - in_stack_000001a8) - fVar51) - fVar53);
    fStack00000000000001bc = fVar63 + fVar66;
    fVar66 = fVar52 + fVar66;
    fVar63 = fVar63 + fVar64;
    fVar52 = fVar52 + fVar64;
  }
  uVar62 = *in_stack_00000100;
  uVar65 = *in_stack_000000f8;
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  uVar56 = **(undefined8 **)
             (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8
             );
  uVar57 = (*(undefined8 **)
             (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8
             ))[1];
  fVar54 = 0.0;
  if (DAT_00b553b8 <
      (float)((ulong)uVar65 >> 0x20) * (float)((ulong)uVar57 >> 0x20) +
      (float)uVar65 * (float)uVar57 +
      (float)uVar62 * (float)uVar56 +
      (float)((ulong)uVar62 >> 0x20) * (float)((ulong)uVar56 >> 0x20)) {
    fVar61 = 0.0;
    fVar64 = 0.0;
    fVar53 = 0.0;
    unaff_d8 = unaff_d13;
    fVar58 = fVar67;
    fVar70 = fVar50;
  }
  else {
    FUN_03912088(&stack0x000012a0,*(undefined4 *)(unaff_x19 + 0x19b4),
                 *(undefined4 *)(unaff_x19 + 0x19b8),*(undefined4 *)(unaff_x19 + 0x19bc),
                 *(undefined4 *)(unaff_x19 + 0x19c0),0);
    fVar68 = (fVar52 + fStack00000000000001bc) * 0.5;
    fVar69 = (fVar50 + fVar67) * 0.5;
    fVar67 = fVar67 - fVar69;
    fVar53 = 0.0;
    fVar58 = fVar67;
    fVar63 = (float)FUN_03911ddc(fVar63 - fVar68,&stack0x000010d0,0);
    fVar63 = fVar68 + fVar63;
    fVar53 = fVar53 + 0.0;
    fVar70 = fVar50 - fVar69;
    fVar64 = 0.0;
    fVar50 = fVar70;
    fStack00000000000001bc = (float)FUN_03911ddc(fStack00000000000001bc - fVar68,&stack0x000010d0,0)
    ;
    fStack00000000000001bc = fVar68 + fStack00000000000001bc;
    fVar50 = fVar69 + fVar50;
    fVar64 = fVar64 + 0.0;
    fVar61 = 0.0;
    fVar52 = (float)FUN_03911ddc(fVar52 - fVar68,&stack0x000010d0,0);
    fVar52 = fVar68 + fVar52;
    fVar67 = fVar69 + fVar67;
    fVar61 = fVar61 + 0.0;
    fVar54 = 0.0;
    fVar66 = (float)FUN_03911ddc(fVar66 - fVar68,&stack0x000010d0,0);
    fVar66 = fVar68 + fVar66;
    fVar54 = fVar54 + 0.0;
    unaff_d8 = unaff_d13 & 0xffffffff;
    fVar58 = fVar69 + fVar58;
    fVar70 = fVar69 + fVar70;
  }
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto thunk_FUN_01b48178;
  if (*(uint *)(lVar32 + 0x18) <= *unaff_x29) goto LAB_03988250;
  lVar32 = lVar32 + (long)(int)*unaff_x29 * unaff_x27;
  *(float *)(lVar32 + 0x128) = fVar50;
  *(float *)(lVar32 + 300) = fVar64;
  *(float *)(lVar32 + 0x124) = fStack00000000000001bc;
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto thunk_FUN_01b48178;
  if (*(uint *)(lVar32 + 0x18) <= *unaff_x29) goto LAB_03988250;
  lVar32 = lVar32 + (long)(int)*unaff_x29 * unaff_x27;
  *(float *)(lVar32 + 0x118) = fVar63;
  *(float *)(lVar32 + 0x11c) = fVar58;
  *(float *)(lVar32 + 0x120) = fVar53;
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto thunk_FUN_01b48178;
  if (*(uint *)(lVar32 + 0x18) <= *unaff_x29) goto LAB_03988250;
  lVar32 = lVar32 + (long)(int)*unaff_x29 * unaff_x27;
  *(float *)(lVar32 + 0x130) = fVar52;
  *(float *)(lVar32 + 0x134) = fVar67;
  *(float *)(lVar32 + 0x138) = fVar61;
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto thunk_FUN_01b48178;
  if (*(uint *)(lVar32 + 0x18) <= *unaff_x29) goto LAB_03988250;
  lVar32 = lVar32 + (long)(int)*unaff_x29 * unaff_x27;
  *(float *)(lVar32 + 0x13c) = fVar66;
  *(float *)(lVar32 + 0x140) = fVar70;
  *(float *)(lVar32 + 0x144) = fVar54;
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto thunk_FUN_01b48178;
  uVar13 = *unaff_x29;
  fVar63 = *(float *)(unaff_x19 + 0x2f4);
  fVar54 = (float)FUN_0396d0e4(&stack0x000011e0,0);
  if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_03988250;
  fVar66 = (float)unaff_d8;
  *(float *)(lVar32 + (long)(int)uVar13 * unaff_x27 + 0x148) = fVar63 + fVar66 * fVar54;
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto thunk_FUN_01b48178;
  uVar13 = *unaff_x29;
  fVar67 = *(float *)(unaff_x19 + 0x2e0);
  fVar63 = *(float *)(unaff_x19 + 0x180);
  fVar54 = (float)FUN_0396d0f4(&stack0x000011e0,0);
  if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_03988250;
  *(float *)(lVar32 + (long)(int)uVar13 * unaff_x27 + 0x150) =
       (in_stack_000001a0 - fVar67) + fVar63 + fVar66 * fVar54;
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto thunk_FUN_01b48178;
  uVar13 = *unaff_x29;
  lVar33 = (long)(int)uVar13;
  if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_03988250;
  *(float *)(lVar32 + lVar33 * unaff_x27 + 0x168) =
       (fVar52 - fStack00000000000001bc) / (fVar58 - fVar50);
  fVar54 = fVar66 * (in_stack_00000180 + fVar47);
  if (*unaff_x24 == '\x01') {
    fVar54 = fVar54 / fStack000000000000017c;
    fVar47 = (fVar66 * (fStack0000000000000170 + fVar48)) / fStack000000000000017c;
  }
  else {
    fVar47 = fVar66 * (fStack0000000000000170 + fVar48);
  }
  uVar31 = *(uint *)(unaff_x19 + 0x328);
  fVar48 = *(float *)(unaff_x19 + 0x180);
  bVar8 = uVar13 == uVar31;
  bVar9 = unaff_w25 == 0;
  fVar54 = fVar48 + fVar54;
  if (bVar9 || bVar8) {
    fVar47 = fVar48 + fVar47;
    fVar50 = fVar54;
    fVar63 = fVar47;
    if (fVar48 != 0.0) {
      fVar50 = (fVar54 - fVar48) / *(float *)(unaff_x19 + 0xf0);
      fVar63 = (fVar47 - fVar48) / *(float *)(unaff_x19 + 0xf0);
      if (fVar50 <= fVar54) {
        fVar50 = fVar54;
      }
      if (fVar47 <= fVar63) {
        fVar63 = fVar47;
      }
    }
    lVar35 = lVar32 + lVar33 * unaff_x27;
    fVar48 = fVar50;
    if (fVar50 <= *(float *)(unaff_x19 + 0x338)) {
      fVar48 = *(float *)(unaff_x19 + 0x338);
    }
    fVar52 = fVar63;
    if (*(float *)(unaff_x19 + 0x33c) <= fVar63) {
      fVar52 = *(float *)(unaff_x19 + 0x33c);
    }
    *(float *)(unaff_x19 + 0x338) = fVar48;
    *(float *)(unaff_x19 + 0x33c) = fVar52;
    *(float *)(lVar35 + 0x158) = fVar50;
    *(float *)(lVar35 + 0x15c) = fVar63;
    fVar50 = *(float *)(unaff_x19 + 0x2e0);
    fVar63 = fVar54 - fVar50;
  }
  else {
    fVar48 = *(float *)(unaff_x19 + 0x338);
    lVar35 = lVar32 + lVar33 * unaff_x27;
    *(float *)(lVar35 + 0x158) = fVar48;
    fVar47 = *(float *)(unaff_x19 + 0x33c);
    *(float *)(lVar35 + 0x15c) = fVar47;
    fVar50 = *(float *)(unaff_x19 + 0x2e0);
    fVar63 = fVar48 - fVar50;
  }
  *(float *)(lVar35 + 0x14c) = fVar63;
  *(float *)(lVar32 + lVar33 * unaff_x27 + 0x154) = fVar47 - fVar50;
  *(float *)(unaff_x19 + 0x378) = fVar47 - fVar50;
  if ((*(int *)(unaff_x19 + 0x340) == 0) || (*(char *)(unaff_x19 + 0x37c) != '\0')) {
    if (bVar9 || bVar8) {
      *(float *)(unaff_x19 + 0x374) = fVar48;
      if (*(long *)(unaff_x19 + 0x68) == 0) goto thunk_FUN_01b48178;
      fVar47 = *(float *)(unaff_x19 + 0x370);
      fVar48 = (float)FUN_0396ac64(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
      fVar50 = *(float *)(unaff_x19 + 0x2e0);
      fStack000000000000017c = (fVar66 * fVar48) / fStack000000000000017c;
      if (fVar47 <= fStack000000000000017c) {
        fVar47 = fStack000000000000017c;
      }
      *(float *)(unaff_x19 + 0x370) = fVar47;
      if (fVar50 == 0.0) goto LAB_039833ac;
    }
  }
  else if ((bVar9 || bVar8) && fVar50 == 0.0) {
LAB_039833ac:
    fVar47 = *(float *)(unaff_x19 + 0x19c8);
    if (*(float *)(unaff_x19 + 0x19c8) <= fVar54) {
      fVar47 = fVar54;
    }
    *(float *)(unaff_x19 + 0x19c8) = fVar47;
  }
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto thunk_FUN_01b48178;
  uVar26 = *unaff_x29;
  if (*(uint *)(lVar32 + 0x18) <= uVar26) goto LAB_03988250;
  lVar32 = lVar32 + (long)(int)uVar26 * unaff_x27;
  *(undefined1 *)(lVar32 + 0x1a0) = 0;
  uVar40 = *(uint *)(unaff_x19 + 0x158) & 0x18;
  if ((in_stack_0000129c == 9) ||
     ((((unaff_w25 == 0 && (in_stack_0000129c != 3)) &&
       ((in_stack_0000129c != 0x200b && (in_stack_0000129c != 0xad)))) ||
      (((in_stack_0000129c == 0xad & (in_stack_000000c0._4_1_ ^ 0xff)) != 0 ||
       (*unaff_x24 == '\x02')))))) {
    *(undefined1 *)(lVar32 + 0x1a0) = 1;
    pfVar29 = _fStack0000000000000130;
    pfVar39 = _iStack0000000000000138;
    if (unaff_w23 != 0) {
      lVar32 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar32 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03988250;
      lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
      pfVar39 = (float *)(lVar32 + 100);
      pfVar29 = (float *)(lVar32 + 0x68);
    }
    fVar48 = *pfVar39;
    fVar47 = *pfVar29;
    fVar54 = *(float *)(unaff_x19 + 0x35c);
    fVar63 = *(float *)(unaff_x19 + 0x2f4);
    fStack0000000000000174 = (fStack000000000000012c - fVar48) - fVar47;
    bVar8 = true;
    if ((fVar54 <= fStack0000000000000174) && (bVar8 = false, !NAN(fVar54))) {
      bVar8 = fVar54 == -1.0;
    }
    if (!bVar8) {
      fStack0000000000000174 = fVar54;
    }
    fVar54 = 0.0;
    fVar52 = 0.0;
    if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
      fVar52 = (float)FUN_0396af88(&stack0x000011f0,0);
      fVar50 = *(float *)(unaff_x19 + 0x2e0);
    }
    fVar67 = *(float *)(unaff_x19 + 0x1594);
    fVar58 = *(float *)(unaff_x19 + 0x33c);
    if (in_stack_0000129c != 0xad) {
      fVar55 = fVar66;
    }
    if ((0.0 < fVar50) && (fVar54 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
      fVar54 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
    }
    uVar26 = *in_stack_000001d0;
    fVar54 = (*(float *)(unaff_x19 + 0x374) - (fVar58 - fVar50)) + fVar54;
    if (fVar54 <= in_stack_00000118) goto switchD_0398367c_caseD_2;
    if (*(int *)(unaff_x19 + 0x34c) == -1) {
      *(uint *)(unaff_x19 + 0x34c) = uVar26;
    }
    in_stack_00001288 = DAT_00b92750;
    if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
      fVar70 = *(float *)(in_stack_000001e0 + 0xd0);
      if (((*(float *)(unaff_x19 + 0x15b0) <= fVar70) || (fVar50 <= 0.0)) ||
         (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
        fVar50 = *_fStack00000000000000d8;
        fVar54 = *(float *)(in_stack_000001e0 + 0xac);
        if ((fVar50 <= fVar54) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)))
        goto LAB_03983658;
        fVar55 = (fVar50 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
        if (fVar55 <= DAT_00b55428) {
          fVar55 = DAT_00b55428;
        }
        fVar47 = (fVar50 - fVar55) * 20.0 + 0.5;
        fVar55 = DAT_00b556b4;
        if (fVar47 != INFINITY) {
          fVar55 = (float)(int)fVar47 / 20.0;
        }
        if (fVar55 <= fVar54) {
          fVar55 = fVar54;
        }
        *(float *)(unaff_x19 + 0x1598) = fVar50;
LAB_03985650:
        *(float *)(unaff_x19 + 0xec) = fVar55;
      }
      else {
        fVar55 = *(float *)(unaff_x19 + 0x15b0) +
                 ((in_stack_00000020._4_4_ - fVar54) / (float)*(int *)(unaff_x19 + 0x340)) /
                 fStack0000000000000090;
        if (fVar55 <= fVar70) {
          fVar55 = fVar70;
        }
LAB_03988100:
        *(float *)(unaff_x19 + 0x15b0) = fVar55;
      }
      goto LAB_03980e58;
    }
LAB_03983658:
    switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
    case 1:
      if (*(int *)(unaff_x19 + 0x340) < 1) goto switchD_0398367c_caseD_2;
      iVar14 = FUN_021c2ce4(in_stack_00000080,*(undefined8 *)PTR_DAT_03dad388);
      in_stack_00001288 = DAT_00b92750;
      if (iVar14 == 0) {
        in_stack_000001d0[0] = 0;
        in_stack_000001d0[1] = 0;
        in_stack_0000120c = 0xffffffff;
      }
      else {
        FUN_021c3180(&stack0x000012a0,in_stack_00000080,*(undefined8 *)PTR_DAT_03dad338);
        memcpy(&stack0x00000d38,&stack0x000012a0,0x398);
        iVar16 = FUN_0398b72c();
        iVar14 = *(int *)(unaff_x19 + 0x324) + -1;
        *(int *)(unaff_x19 + 0x324) = iVar14;
        in_stack_00001288 = CONCAT44(0x2026,iVar14);
        in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
        in_stack_0000120c = iVar16 - 1;
      }
      break;
    default:
switchD_0398367c_caseD_2:
      if ((uVar20 & 1) == 0) {
LAB_03983778:
        if (unaff_w25 == 0) {
          if (in_stack_0000129c != 0xad) {
            if (*unaff_x24 == '\x02') {
              FUN_03990ec0();
            }
            else if (*unaff_x24 == '\x01') {
              FUN_03990354(in_stack_000001a8,fVar51);
            }
            uVar26 = *in_stack_000001d0;
            if ((in_stack_000000b0 & 1) != 0) {
              *(uint *)(unaff_x19 + 0x330) = uVar26;
            }
            *(uint *)(unaff_x19 + 0x334) = uVar26;
            *(int *)(unaff_x19 + 0x344) = *(int *)(unaff_x19 + 0x344) + 1;
            lVar32 = *(long *)(in_stack_000001c0 + 0x48);
            if (lVar32 != 0) {
              if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar32 + 0x18)) {
                lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                in_stack_000000b0 = 0;
                *(float *)(lVar32 + 100) = fVar48;
                *(float *)(lVar32 + 0x68) = fVar47;
                goto UnityEngine_UIElements_FocusController__GetRetargetedFocusedElement;
              }
              goto LAB_03988250;
            }
            goto thunk_FUN_01b48178;
          }
          lVar32 = *in_stack_000001e8;
          if (lVar32 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar32 + 0x18) <= uVar26) goto LAB_03988250;
          *(undefined1 *)(lVar32 + (long)(int)uVar26 * (long)iVar17 + 0x1a0) = 0;
        }
        else {
          lVar32 = *in_stack_000001e8;
          if (lVar32 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar32 + 0x18) <= uVar26) goto LAB_03988250;
          *(undefined1 *)(lVar32 + (long)(int)uVar26 * (long)iVar17 + 0x1a0) = 0;
          *(uint *)(unaff_x19 + 0x334) = uVar26;
          lVar32 = *(long *)(in_stack_000001c0 + 0x48);
          if (lVar32 == 0) goto thunk_FUN_01b48178;
          uVar26 = *(uint *)(lVar32 + 0x18);
          if (uVar26 <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03988250;
          lVar33 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
          iVar14 = *(int *)(lVar33 + 0x2c) + 1;
          *(int *)(lVar33 + 0x2c) = iVar14;
          *(int *)(unaff_x19 + 0x348) = iVar14;
          if (uVar26 <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03988250;
          lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
          *(float *)(lVar32 + 100) = fVar48;
          *(float *)(lVar32 + 0x68) = fVar47;
          *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
        }
        goto UnityEngine_UIElements_FocusController__GetRetargetedFocusedElement;
      }
      fVar54 = ABS(fVar63) + fVar52 * (1.0 - fVar67) * fVar55;
      fVar55 = 1.0;
      if (uVar40 != 0) {
        fVar55 = DAT_00b55374;
      }
      if (fVar54 <= fVar55 * fStack0000000000000174) goto LAB_03983778;
      if ((uStack0000000000000094 == 0) || (uVar26 == *(uint *)(unaff_x19 + 0x328))) {
        if ((*(char *)(in_stack_000001e0 + 0xa8) == '\0') ||
           (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
LAB_03983888:
          iVar14 = *(int *)(in_stack_000001e0 + 0x74);
          if (iVar14 == 1) {
            iVar14 = FUN_021c2ce4(in_stack_00000080,*(undefined8 *)PTR_DAT_03dad388);
            in_stack_00001288 = DAT_00b92750;
            if (iVar14 == 0) {
              in_stack_000001d0[0] = 0;
              in_stack_000001d0[1] = 0;
              in_stack_0000120c = 0xffffffff;
            }
            else {
              FUN_021c3180(&stack0x000012a0,in_stack_00000080,*(undefined8 *)PTR_DAT_03dad338);
              memcpy(&stack0x00000608,&stack0x000012a0,0x398);
              iVar16 = FUN_0398b72c();
              iVar14 = *(int *)(unaff_x19 + 0x324) + -1;
              *(int *)(unaff_x19 + 0x324) = iVar14;
              in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
              in_stack_0000120c = iVar16 - 1;
              in_stack_00001288 = CONCAT44(0x2026,iVar14);
            }
            break;
          }
          if (iVar14 == 6) {
            in_stack_0000120c = FUN_0398b72c();
            uVar26 = *(uint *)(unaff_x19 + 0x324);
          }
          else {
            if (iVar14 != 3) goto LAB_03983778;
            in_stack_0000120c = FUN_0398b72c();
          }
          goto LAB_03984f74;
        }
        fVar50 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
        if (fVar50 <= fVar67) {
          fVar50 = *(float *)(in_stack_000001e0 + 0xac);
          fVar63 = *_fStack00000000000000d8;
          if (fVar63 <= fVar50) goto LAB_03983888;
LAB_0398816c:
          fVar55 = (fVar63 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
          if (fVar55 <= DAT_00b55428) {
            fVar55 = DAT_00b55428;
          }
          *(float *)(unaff_x19 + 0x1598) = fVar63;
          fVar54 = (fVar63 - fVar55) * 20.0 + 0.5;
          fVar55 = DAT_00b556b4;
          if (fVar54 != INFINITY) {
            fVar55 = (float)(int)fVar54 / 20.0;
          }
          if (fVar55 <= fVar50) {
            fVar55 = fVar50;
          }
          goto LAB_03985650;
        }
        fVar47 = fVar54 / (1.0 - fVar67);
        if (fVar67 <= 0.0) {
          fVar47 = fVar54;
        }
        fVar67 = fVar67 + (fVar54 - fVar55 * (fStack0000000000000174 + DAT_00b5556c)) / fVar47;
LAB_039881fc:
        if (fVar50 <= fVar67) {
          fVar67 = fVar50;
        }
        *(float *)(unaff_x19 + 0x1594) = fVar67;
        goto LAB_03980e58;
      }
      in_stack_0000120c = FUN_0398b72c();
      if (*(float *)(unaff_x19 + 0x2e4) == DAT_00b55468) {
        lVar32 = *in_stack_000001e8;
        if (lVar32 == 0) goto thunk_FUN_01b48178;
        uVar27 = *in_stack_000001d0;
        if (*(uint *)(lVar32 + 0x18) <= uVar27) goto LAB_03988250;
        fVar63 = *(float *)(unaff_x19 + 0x2e0);
        fVar50 = 0.0;
        if ((0.0 < fVar63) && (fVar50 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
          fVar50 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
        }
        fVar50 = in_stack_00000158 * *(float *)(in_stack_000001e0 + 200) +
                 *(float *)(lVar32 + (long)(int)uVar27 * unaff_x27 + 0x158) +
                 (fVar50 - *(float *)(unaff_x19 + 0x33c)) +
                 fStack0000000000000090 * (in_stack_00000088._4_4_ + *(float *)(unaff_x19 + 0x15b0))
        ;
      }
      else {
        fVar50 = *(float *)(in_stack_000001e0 + 200);
        *(undefined1 *)(unaff_x19 + 0x2e8) = 1;
        lVar32 = *in_stack_000001e8;
        if (lVar32 == 0) goto thunk_FUN_01b48178;
        fVar63 = *(float *)(unaff_x19 + 0x2e0);
        uVar27 = *(uint *)(unaff_x19 + 0x324);
        fVar50 = *(float *)(unaff_x19 + 0x2e4) + in_stack_00000158 * fVar50;
      }
      if ((*(uint *)(lVar32 + 0x18) <= uVar27) ||
         (uVar43 = uVar27 - 1, *(uint *)(lVar32 + 0x18) <= uVar43)) goto LAB_03988250;
      fVar52 = (fVar50 + *(float *)(unaff_x19 + 0x374) + fVar63) -
               *(float *)(lVar32 + (long)(int)uVar27 * (long)iVar17 + 0x15c);
      if (((in_stack_000000c0._4_1_ & 1) == 0 &&
           *(short *)(lVar32 + (long)(int)uVar43 * (long)iVar17 + 0x20) == 0xad) &&
         ((fVar52 < in_stack_00000118 || (*(int *)(in_stack_000001e0 + 0x74) == 0)))) {
        in_stack_000000c0._4_1_ = 0;
        *in_stack_000001d0 = uVar43;
        in_stack_0000120c = in_stack_0000120c - 1;
        in_stack_00001288 = CONCAT44(0x2d,uVar43);
        break;
      }
      if (*(short *)(lVar32 + (long)(int)uVar27 * unaff_x27 + 0x20) == 0xad) {
        in_stack_000000c0._4_1_ = 1;
        in_stack_00001288 = uVar18;
        break;
      }
      if ((bStack00000000000000e0 & *(byte *)(in_stack_000001e0 + 0xa8) & 1) != 0) {
        fVar67 = *(float *)(unaff_x19 + 0x1594);
        fVar50 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
        if ((fVar50 <= fVar67) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
          fVar63 = *_fStack00000000000000d8;
          fVar50 = *(float *)(in_stack_000001e0 + 0xac);
          if ((fVar50 < fVar63) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
          goto LAB_0398816c;
          goto LAB_03985120;
        }
LAB_03988210:
        fVar47 = fVar54;
        if (0.0 < fVar67) {
          fVar47 = fVar54 / (1.0 - fVar67);
        }
        fVar67 = fVar67 + (fVar54 - fVar55 * (fStack0000000000000174 + DAT_00b5556c)) / fVar47;
        goto LAB_039881fc;
      }
LAB_03985120:
      iVar14 = *in_stack_00000038;
      if ((iVar14 != iStack0000000000000030) && ((bStack00000000000000e0 & iVar14 != -1) != 0)) {
        in_stack_0000120c = FUN_0398b72c();
        plVar44 = (long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
        lVar32 = *(long *)(in_stack_000001c0 + 0x30);
        if (lVar32 == 0) goto thunk_FUN_01b48178;
        uVar27 = *in_stack_000001d0;
        uVar43 = uVar27 - 1;
        if (*(uint *)(lVar32 + 0x18) <= uVar43) goto LAB_03988250;
        iStack0000000000000030 = iVar14;
        if (*(short *)(lVar32 + (long)(int)uVar43 * (long)iVar17 + 0x20) == 0xad) {
          in_stack_000000c0._4_1_ = 0;
          *in_stack_000001d0 = uVar43;
          in_stack_0000120c = in_stack_0000120c - 1;
          in_stack_00001288 = CONCAT44(0x2d,uVar43);
          break;
        }
      }
      if (fVar52 <= in_stack_00000118) {
        FUN_03995c64(fStack0000000000000090,unaff_d8,in_stack_00000158,fVar60,in_stack_00000188,
                     fStack0000000000000174,in_stack_00000088._4_4_);
        bStack00000000000000e0 = 1;
        in_stack_000000c0._4_1_ = 0;
        in_stack_000000b0 = 1;
        in_stack_00001288 = uVar18;
        break;
      }
      if (*(int *)(unaff_x19 + 0x34c) == -1) {
        *(uint *)(unaff_x19 + 0x34c) = uVar27;
      }
      if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
        fVar50 = *(float *)(in_stack_000001e0 + 0xd0);
        if ((fVar50 < *(float *)(unaff_x19 + 0x15b0)) &&
           (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
          fVar55 = *(float *)(unaff_x19 + 0x15b0) +
                   ((in_stack_00000020._4_4_ - fVar52) / (float)(*(int *)(unaff_x19 + 0x340) + 1)) /
                   fStack0000000000000090;
          if (fVar55 <= fVar50) {
            fVar55 = fVar50;
          }
          goto LAB_03988100;
        }
        fVar67 = *(float *)(unaff_x19 + 0x1594);
        fVar50 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
        if ((fVar67 < fVar50) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
        goto LAB_03988210;
        fVar63 = *_fStack00000000000000d8;
        fVar50 = *(float *)(in_stack_000001e0 + 0xac);
        if ((fVar50 < fVar63) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
        goto LAB_0398816c;
      }
      switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
      case 0:
      case 2:
      case 4:
        FUN_03995c64(fStack0000000000000090,unaff_d8,in_stack_00000158,fVar60,in_stack_00000188,
                     fStack0000000000000174,in_stack_00000088._4_4_);
        break;
      case 1:
        iVar14 = FUN_021c2ce4(in_stack_00000080,*(undefined8 *)PTR_DAT_03dad388);
        in_stack_00001288 = DAT_00b92750;
        if (iVar14 == 0) {
          in_stack_000000c0._4_1_ = 0;
          in_stack_000001d0[0] = 0;
          in_stack_000001d0[1] = 0;
          in_stack_0000120c = 0xffffffff;
        }
        else {
          FUN_021c3180(&stack0x000012a0,in_stack_00000080,*(undefined8 *)PTR_DAT_03dad338);
          memcpy(&stack0x000009a0,&stack0x000012a0,0x398);
          iVar16 = FUN_0398b72c();
          in_stack_000000c0._4_1_ = 0;
          iVar14 = *(int *)(unaff_x19 + 0x324) + -1;
          *(int *)(unaff_x19 + 0x324) = iVar14;
          in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
          in_stack_0000120c = iVar16 - 1;
          in_stack_00001288 = CONCAT44(0x2026,iVar14);
        }
        goto LAB_0398183c;
      case 3:
        in_stack_0000120c = FUN_0398b72c();
        in_stack_000000c0._4_1_ = 0;
        goto LAB_03984f74;
      case 5:
        *(undefined1 *)(unaff_x19 + 0x37c) = 1;
        FUN_03995c64(fStack0000000000000090,unaff_d8,in_stack_00000158,fVar60,in_stack_00000188,
                     fStack0000000000000174,in_stack_00000088._4_4_);
        *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
        *(undefined4 *)(unaff_x19 + 0x2e0) = 0;
        *(undefined4 *)(unaff_x19 + 0x374) = 0;
        *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
        *(int *)(unaff_x19 + 0x350) = *(int *)(unaff_x19 + 0x350) + 1;
        break;
      case 6:
        in_stack_000000c0._4_1_ = 0;
        uVar26 = uVar27;
LAB_03984f74:
        in_stack_00001288 = CONCAT44(3,uVar26);
        goto LAB_0398183c;
      default:
        in_stack_000000c0._4_1_ = 0;
        uVar26 = uVar27;
        goto LAB_03983778;
      }
      in_stack_000000c0._4_1_ = 0;
LAB_03984af8:
      bStack00000000000000e0 = 1;
      in_stack_000000b0 = 1;
      in_stack_00001288 = uVar18;
      break;
    case 3:
      in_stack_0000120c = FUN_0398b72c();
      in_stack_00001288 = CONCAT44((int)((ulong)uVar18 >> 0x20),uVar26);
      break;
    case 5:
      if (uVar26 == 0 || (int)in_stack_0000120c < 0) {
        *in_stack_000001d0 = 0;
        in_stack_0000120c = 0xffffffff;
      }
      else {
        fVar55 = *(float *)(unaff_x19 + 0x338);
        in_stack_0000120c = FUN_0398b72c();
        if (in_stack_00000118 < fVar55 - fVar58) goto LAB_03983d74;
        *(undefined4 *)(unaff_x19 + 0x328) = *(undefined4 *)(unaff_x19 + 0x324);
        *(undefined8 *)(unaff_x19 + 0x338) = in_stack_00000098;
        *(int *)(unaff_x19 + 0x340) = *(int *)(unaff_x19 + 0x340) + 1;
        *(undefined1 *)(unaff_x19 + 0x37c) = 1;
        *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
        *(undefined4 *)(unaff_x19 + 0x2e0) = 0;
        *(undefined4 *)(unaff_x19 + 0x374) = 0;
        *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
        *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
        *(int *)(unaff_x19 + 0x350) = *(int *)(unaff_x19 + 0x350) + 1;
        in_stack_00001288 = uVar18;
      }
      break;
    case 6:
      in_stack_0000120c = FUN_0398b72c();
      in_stack_00001288 = CONCAT44(3,uVar26);
    }
LAB_0398183c:
    in_stack_0000120c = in_stack_0000120c + 1;
    lVar32 = *(long *)(unaff_x19 + 0x20);
    if (lVar32 == 0) goto thunk_FUN_01b48178;
    if ((int)in_stack_0000120c < (int)*(uint *)(lVar32 + 0x18)) {
      if (*(uint *)(lVar32 + 0x18) <= in_stack_0000120c) goto LAB_03988250;
      uVar13 = *(uint *)(lVar32 + (long)(int)in_stack_0000120c * 0x10 + 0x24);
      if (uVar13 == 0) goto LAB_03985590;
      if (5 < in_stack_000001d8._4_4_) {
        uVar18 = FUN_0305c51c(&stack0x0000129c,0);
        uVar62 = FUN_0303de64(&stack0x0000120c,0);
        uVar18 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c930,uVar18,*(undefined8 *)PTR_DAT_03d9c940
                              ,uVar62,0);
        if (*(int *)(*plVar44 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*plVar44);
        }
        FUN_038f2e04(uVar18,0);
        in_stack_00001288 = CONCAT44(3,*in_stack_000001d0);
      }
      in_stack_0000129c = uVar13;
      if (uVar13 == 0x1a) goto LAB_0398183c;
      if ((uVar13 == 0x3c) && (*(char *)(in_stack_000001e0 + 0xb5) != '\0')) {
        unaff_x24[0] = '\x01';
        unaff_x24[1] = '\x01';
        uVar20 = FUN_0398ba98();
        if (((uVar20 & 1) != 0) && (in_stack_0000120c = in_stack_000011dc, *unaff_x24 == '\x01'))
        goto LAB_0398183c;
      }
      else {
        lVar32 = *in_stack_000001e8;
        if (lVar32 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar32 + 0x18) <= *in_stack_000001d0) goto LAB_03988250;
        lVar32 = lVar32 + (long)(int)*in_stack_000001d0 * unaff_x27;
        *unaff_x24 = *(char *)(lVar32 + 0x28);
        *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar32 + 0x60);
        *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(lVar32 + 0x40);
        thunk_FUN_01b4f09c(in_stack_000001c8);
      }
      lVar32 = *in_stack_000001e8;
      if (lVar32 == 0) goto thunk_FUN_01b48178;
      uVar13 = *(uint *)(unaff_x19 + 0x324);
      if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_03988250;
      lVar33 = (long)(int)uVar13;
      uVar46 = *(undefined4 *)(unaff_x19 + 0x78);
      unaff_w20 = (uint)*(byte *)(lVar32 + lVar33 * unaff_x27 + 100);
      unaff_x24[1] = '\0';
      if ((uint)in_stack_00001288 == uVar13) {
        in_stack_0000129c = (uint)((ulong)in_stack_00001288 >> 0x20);
        unaff_w23 = 1;
        *unaff_x24 = '\x01';
        if (in_stack_0000129c == 0x2026) {
          *(undefined8 *)(lVar32 + lVar33 * unaff_x27 + 0x30) = *(undefined8 *)(unaff_x19 + 0x1a00);
          thunk_FUN_01b4f09c();
          lVar32 = *in_stack_000001e8;
          if (lVar32 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_03988250;
          lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
          *(undefined1 *)(lVar32 + 0x28) = 1;
          *(undefined8 *)(lVar32 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1a08);
          thunk_FUN_01b4f09c();
          lVar32 = *in_stack_000001e8;
          if (lVar32 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_03988250;
          *(undefined8 *)(lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x58) =
               *(undefined8 *)(unaff_x19 + 0x1a10);
          thunk_FUN_01b4f09c();
          lVar32 = *in_stack_000001e8;
          if (lVar32 == 0) goto thunk_FUN_01b48178;
          uVar13 = *in_stack_000001d0;
          if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_03988250;
          unaff_w23 = 1;
          *(undefined4 *)(lVar32 + (long)(int)uVar13 * unaff_x27 + 0x60) =
               *(undefined4 *)(unaff_x19 + 0x1a18);
          *(undefined1 *)(*(long *)(*(long *)PTR_DAT_03dad300 + 0xb8) + 8) = 1;
          in_stack_00001288 = CONCAT44(3,uVar13 + 1);
        }
        else if (in_stack_0000129c == 3) {
          if ((*in_stack_000001c8 == 0) ||
             (lVar35 = FUN_0396dd7c(*in_stack_000001c8,0), lVar35 == 0)) goto thunk_FUN_01b48178;
          uVar18 = FUN_0262f3a4(lVar35,3,*(undefined8 *)PTR_DAT_03daca20);
          if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_03988250;
          *(undefined8 *)(lVar32 + lVar33 * unaff_x27 + 0x30) = uVar18;
          thunk_FUN_01b4f09c();
          unaff_w23 = 1;
          *(undefined1 *)(*(long *)(*(long *)PTR_DAT_03dad300 + 0xb8) + 8) = 1;
          uVar13 = *in_stack_000001d0;
        }
      }
      else {
        unaff_w23 = 0;
      }
      if (((int)uVar13 < *(int *)(in_stack_000001e0 + 0xe4)) && (in_stack_0000129c != 3)) {
        lVar32 = *in_stack_000001e8;
        if (lVar32 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_03988250;
        lVar32 = lVar32 + (long)(int)uVar13 * (long)iVar17;
        *(undefined1 *)(lVar32 + 0x1a0) = 0;
        *(undefined2 *)(lVar32 + 0x20) = 0x200b;
        *(undefined4 *)(lVar32 + 0x6c) = 0;
        *in_stack_000001d0 = uVar13 + 1;
        goto LAB_0398183c;
      }
      cVar25 = *unaff_x24;
      if (cVar25 == '\x01') {
        uVar13 = *(uint *)(unaff_x19 + 0x124);
        if ((uVar13 >> 4 & 1) == 0) {
          if ((uVar13 >> 3 & 1) == 0) {
            fStack000000000000017c = 1.0;
            if ((uVar13 >> 5 & 1) != 0) {
              if (*(int *)(*(long *)
                            Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar20 = FUN_02fdd9e8(in_stack_0000129c,0);
              if ((uVar20 & 1) != 0) {
                if (*(int *)(*(long *)
                              Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar13 = FUN_02fddc48(in_stack_0000129c,0);
                in_stack_0000129c = uVar13 & 0xffff;
                fStack000000000000017c = fStack0000000000000034;
              }
            }
          }
          else {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar20 = FUN_02fdd92c(in_stack_0000129c,0);
            fStack000000000000017c = 1.0;
            if ((uVar20 & 1) != 0) {
              if (*(int *)(*(long *)
                            Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar13 = FUN_02fdddc0(in_stack_0000129c,0);
              goto LAB_039819ac;
            }
          }
        }
        else {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar20 = FUN_02fdd9e8(in_stack_0000129c,0);
          fStack000000000000017c = 1.0;
          if ((uVar20 & 1) != 0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar13 = FUN_02fddc48(in_stack_0000129c,0);
LAB_039819ac:
            fStack000000000000017c = 1.0;
            in_stack_0000129c = uVar13 & 0xffff;
          }
        }
        cVar25 = *unaff_x24;
      }
      else {
        fStack000000000000017c = 1.0;
      }
      if (cVar25 != '\x01') {
        if (cVar25 != '\x02') {
          lVar32 = *in_stack_000001e8;
          if (in_stack_0000129c == 3 || in_stack_0000129c == 0xad) {
            fVar66 = 0.0;
          }
          unaff_d13 = (ulong)(uint)fVar66;
          in_stack_000001a0 = 0.0;
          if (lVar32 == 0) goto thunk_FUN_01b48178;
          uVar13 = *in_stack_000001d0;
          in_stack_00000180 = 0.0;
          fStack0000000000000170 = 0.0;
          goto LAB_03982194;
        }
        lVar32 = *in_stack_000001e8;
        if (lVar32 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar32 + 0x18) <= *in_stack_000001d0) goto LAB_03988250;
        plVar44 = *(long **)(lVar32 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x30);
        if (plVar44 == (long *)0x0) goto thunk_FUN_01b48178;
        bVar11 = *(byte *)(*(long *)PTR_DAT_03dad2f0 + 0x130);
        if ((*(byte *)(*plVar44 + 0x130) < bVar11) ||
           (*(long *)(*(long *)(*plVar44 + 200) + (ulong)bVar11 * 8 + -8) !=
            *(long *)PTR_DAT_03dad2f0)) {
                    /* WARNING: Subroutine does not return */
          FUN_01b4841c(plVar44);
        }
        plVar19 = (long *)FUN_039778ec(plVar44,0);
        if (plVar19 == (long *)0x0) {
          plVar19 = (long *)0x0;
          *in_stack_00000160 = 0;
        }
        else {
          lVar32 = *(long *)PTR_DAT_03dacf18;
          bVar11 = *(byte *)(lVar32 + 0x130);
          if (*(byte *)(*plVar19 + 0x130) < bVar11) {
            plVar34 = (long *)0x0;
          }
          else {
            plVar34 = plVar19;
            if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar11 * 8 + -8) != lVar32) {
              plVar34 = (long *)0x0;
            }
          }
          *in_stack_00000160 = (long)plVar34;
          if (*(byte *)(*plVar19 + 0x130) < bVar11) {
            plVar19 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar11 * 8 + -8) != lVar32) {
            plVar19 = (long *)0x0;
          }
        }
        thunk_FUN_01b4f09c(in_stack_00000160,plVar19);
        iVar14 = FUN_0396ef70(plVar44,0);
        *(int *)(unaff_x19 + 0x157c) = iVar14;
        if (in_stack_0000129c == 0x3c) {
          in_stack_0000129c = iVar14 + 0xe000;
        }
        else {
          uVar15 = FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
          *(undefined4 *)(unaff_x19 + 0x1580) = uVar15;
        }
        if (*(long *)(unaff_x19 + 0x68) == 0) goto thunk_FUN_01b48178;
        fVar55 = *(float *)(unaff_x19 + 0xf4);
        FUN_0396d8d8(&stack0x000012a0,*(long *)(unaff_x19 + 0x68),0);
        memcpy(&stack0x00001210,&stack0x000012a0,0x60);
        iVar14 = FUN_0396ac24(&stack0x00001210,0);
        if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
        FUN_0396d8d8(&stack0x000012a0,*in_stack_000001c8,0);
        memcpy(&stack0x00001210,&stack0x000012a0,0x60);
        fVar47 = (float)FUN_0396ac34(&stack0x00001210,0);
        fVar54 = in_stack_00000150;
        if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
          fVar54 = 1.0;
        }
        if (*in_stack_00000160 == 0) goto thunk_FUN_01b48178;
        fVar54 = (fVar55 / (float)iVar14) * fVar47 * fVar54;
        iVar14 = FUN_0396ac24(*in_stack_00000160 + 0x48,0);
        fVar55 = *(float *)(unaff_x19 + 0xf4);
        if (iVar14 < 1) {
          if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
          iVar14 = FUN_0396ac24(*in_stack_000001c8 + 0xb0,0);
          if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
          fVar47 = (float)FUN_0396ac34(*in_stack_000001c8 + 0xb0,0);
          fStack0000000000000170 = in_stack_00000150;
          if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
            fStack0000000000000170 = 1.0;
          }
          if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
          fVar48 = (float)FUN_0396ac54(*in_stack_000001c8 + 0xb0,0);
          if (plVar44[4] == 0) goto thunk_FUN_01b48178;
          FUN_0396b140(&stack0x000012a0,plVar44[4],0);
          fVar49 = (float)FUN_0396af70(&stack0x000011c0,0);
          if (plVar44[4] == 0) goto thunk_FUN_01b48178;
          fVar60 = *(float *)((long)plVar44 + 0x2c);
          fVar50 = (float)FUN_0396b17c(plVar44[4],0);
          if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
          in_stack_00000180 = (float)FUN_0396ac54(*in_stack_000001c8 + 0xb0,0);
          if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
          fVar51 = (float)FUN_0396ac84(*in_stack_000001c8 + 0xb0,0);
          if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
          fVar63 = *(float *)(unaff_x19 + 0xf0);
          in_stack_000001a0 = (float)FUN_0396ac34(*in_stack_000001c8 + 0xb0,0);
          if (*(long *)(unaff_x19 + 0x68) == 0) goto thunk_FUN_01b48178;
          in_stack_000001a0 = fVar54 * fVar51 * fVar63 * in_stack_000001a0;
          fStack0000000000000170 = (fVar55 / (float)iVar14) * fVar47 * fStack0000000000000170;
          fVar55 = fStack0000000000000170 * (fVar48 / fVar49) * fVar60 * fVar50;
          fStack0000000000000170 = fStack0000000000000170 / fVar55;
          in_stack_00000180 = fStack0000000000000170 * in_stack_00000180;
          fVar54 = (float)FUN_0396ac94(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
          fStack0000000000000170 = fStack0000000000000170 * fVar54;
        }
        else {
          if (*in_stack_00000160 == 0) goto thunk_FUN_01b48178;
          iVar14 = FUN_0396ac24(*in_stack_00000160 + 0x48,0);
          if (*in_stack_00000160 == 0) goto thunk_FUN_01b48178;
          fVar47 = (float)FUN_0396ac34(*in_stack_00000160 + 0x48,0);
          if (plVar44[4] == 0) goto thunk_FUN_01b48178;
          fVar49 = *(float *)((long)plVar44 + 0x2c);
          fVar48 = in_stack_00000150;
          if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
            fVar48 = 1.0;
          }
          fVar60 = (float)FUN_0396b17c(plVar44[4],0);
          if (*in_stack_00000160 == 0) goto thunk_FUN_01b48178;
          in_stack_00000180 = (float)FUN_0396ac54(*in_stack_00000160 + 0x48,0);
          if (*in_stack_00000160 == 0) goto thunk_FUN_01b48178;
          fVar50 = (float)FUN_0396ac84(*in_stack_00000160 + 0x48,0);
          if (*in_stack_00000160 == 0) goto thunk_FUN_01b48178;
          fVar51 = *(float *)(unaff_x19 + 0xf0);
          in_stack_000001a0 = (float)FUN_0396ac34(*in_stack_00000160 + 0x48,0);
          if (*(long *)(unaff_x19 + 0xe0) == 0) goto thunk_FUN_01b48178;
          in_stack_000001a0 = fVar54 * fVar50 * fVar51 * in_stack_000001a0;
          fVar55 = (fVar55 / (float)iVar14) * fVar47 * fVar48 * fVar49 * fVar60;
          fStack0000000000000170 = (float)FUN_0396ac94(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
        }
        *in_stack_000001b0 = (long)plVar44;
        thunk_FUN_01b4f09c(in_stack_000001b0,plVar44);
        lVar32 = *in_stack_000001e8;
        if (lVar32 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar32 + 0x18) <= *in_stack_000001d0) goto LAB_03988250;
        lVar32 = lVar32 + (long)(int)*in_stack_000001d0 * unaff_x27;
        *(undefined1 *)(lVar32 + 0x28) = 2;
        *(float *)(lVar32 + 0x16c) = fVar55;
        *(long *)(lVar32 + 0x48) = *in_stack_00000160;
        thunk_FUN_01b4f09c();
        lVar32 = *in_stack_000001e8;
        if (lVar32 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar32 + 0x18) <= *in_stack_000001d0) goto LAB_03988250;
        *(long *)(lVar32 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x40) = *in_stack_000001c8;
        thunk_FUN_01b4f09c();
        lVar32 = *in_stack_000001e8;
        if (lVar32 == 0) goto thunk_FUN_01b48178;
        uVar13 = *in_stack_000001d0;
        if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_03988250;
        *(undefined4 *)(lVar32 + (long)(int)uVar13 * unaff_x27 + 0x60) =
             *(undefined4 *)(unaff_x19 + 0x78);
        *(undefined4 *)(unaff_x19 + 0x78) = uVar46;
        in_stack_000001a8 = 0.0;
        goto LAB_0398217c;
      }
      lVar32 = *in_stack_000001e8;
      if (lVar32 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar32 + 0x18) <= *in_stack_000001d0) goto LAB_03988250;
      *in_stack_000001b0 = *(long *)(lVar32 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x30);
      thunk_FUN_01b4f09c(in_stack_000001b0);
      if (*in_stack_000001b0 != 0) goto code_r0x03981a98;
      goto LAB_0398183c;
    }
LAB_03985590:
    if (((*(char *)(in_stack_000001e0 + 0xa8) != '\0') &&
        (DAT_00b552b8 < *(float *)(unaff_x19 + 0x1598) - *(float *)(unaff_x19 + 0x159c))) &&
       ((fVar55 = *_fStack00000000000000d8, fVar55 < *(float *)(in_stack_000001e0 + 0xb0) &&
        (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))))) {
      fVar54 = *(float *)(in_stack_000001e0 + 0x108);
      if (*(float *)(unaff_x19 + 0x1594) < fVar54 / 100.0) {
        *(undefined4 *)(unaff_x19 + 0x1594) = 0;
      }
      fVar47 = (*(float *)(unaff_x19 + 0x1598) - fVar55) * 0.5;
      if (fVar47 <= DAT_00b55428) {
        fVar47 = DAT_00b55428;
      }
      *(float *)(unaff_x19 + 0x159c) = fVar55;
      fVar47 = (fVar55 + fVar47) * 20.0 + 0.5;
      fVar55 = DAT_00b556b4;
      if (fVar47 != INFINITY) {
        fVar55 = (float)(int)fVar47 / 20.0;
      }
      if (fVar54 <= fVar55) {
        fVar55 = fVar54;
      }
      goto LAB_03985650;
    }
    unaff_x24[0x30] = '\x01';
    if (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)) {
      uVar18 = FUN_0303de64(in_stack_00000078,0);
      uVar62 = FUN_03052638(_fStack00000000000000d8,0);
      uVar18 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c950,uVar18,*(undefined8 *)PTR_DAT_03d9c938,
                            uVar62,0);
      if (*(int *)(*plVar44 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*plVar44);
      }
      FUN_038f2acc(uVar18,0);
    }
    plVar19 = (long *)PTR_DAT_03dace98;
    plVar44 = (long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    if ((*in_stack_000001d0 == 0) || ((*in_stack_000001d0 == 1 && (in_stack_0000129c == 3)))) {
      FUN_03992ac4(1,in_stack_000001c0,0);
      goto LAB_03980e58;
    }
    lVar32 = *(long *)(in_stack_000001c0 + 0x58);
    if (lVar32 == 0) goto thunk_FUN_01b48178;
    uVar13 = *(uint *)(unaff_x19 + 0x78);
    if (*(int *)(*(long *)PTR_DAT_03dace98 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_03988250;
    FUN_0397a378(lVar32 + (long)(int)uVar13 * 0x58 + 0x20,0,0);
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    iVar17 = *(int *)(in_stack_000001e0 + 0x70);
    in_stack_00000158 = **(float **)(*plVar44 + 0xb8);
    uStack0000000000000148 = *(undefined8 *)(*(float **)(*plVar44 + 0xb8) + 1);
    lVar32 = *(long *)(unaff_x19 + 0x50);
    _in_stack_00000118 = uStack0000000000000148;
    fStack0000000000000120 = in_stack_00000158;
    if (iVar17 < 0x421) {
      if (iVar17 < 0x205) {
        if (iVar17 < 0x109) {
          if ((iVar17 - 0x101U < 8) && ((1 << (ulong)(iVar17 - 0x101U & 0x1f) & 0x8bU) != 0)) {
LAB_039859f0:
            if (lVar32 == 0) goto thunk_FUN_01b48178;
            if (*(uint *)(lVar32 + 0x18) < 2) goto LAB_03988250;
            uVar18 = *(undefined8 *)(lVar32 + 0x30);
            if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
              lVar33 = *in_stack_00000058;
              if (lVar33 == 0) goto thunk_FUN_01b48178;
              if (*(uint *)(lVar33 + 0x18) <= uStack0000000000000064) goto LAB_03988250;
              fVar55 = *(float *)(lVar33 + (long)(int)uStack0000000000000064 * 0x14 + 0x28);
            }
            else {
              fVar55 = *(float *)(unaff_x19 + 0x374);
            }
            fStack0000000000000120 = fStack0000000000000060 + 0.0 + *(float *)(lVar32 + 0x2c);
            fStack0000000000000040 = (0.0 - fVar55) - fStack0000000000000044;
            goto LAB_03985d90;
          }
        }
        else if (iVar17 < 0x121) {
          if ((iVar17 == 0x110) || (iVar17 == 0x120)) goto LAB_039859f0;
        }
        else if ((iVar17 - 0x201U < 4) && (iVar17 - 0x201U != 2)) goto LAB_03985c80;
      }
      else {
        if (iVar17 < 0x403) {
          if (iVar17 < 0x211) {
            if ((iVar17 == 0x208) || (iVar17 == 0x210)) goto LAB_03985c80;
            goto LAB_03985da0;
          }
          if (iVar17 != 0x220) {
            if (iVar17 - 0x401U < 2) goto LAB_03985b2c;
            goto LAB_03985da0;
          }
LAB_03985c80:
          if (lVar32 == 0) goto thunk_FUN_01b48178;
          if ((*(int *)(lVar32 + 0x18) == 1) || (*(int *)(lVar32 + 0x18) == 0)) goto LAB_03988250;
          fStack0000000000000120 = (*(float *)(lVar32 + 0x20) + *(float *)(lVar32 + 0x2c)) * 0.5;
          uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar32 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar32 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar32 + 0x24) +
                            (float)*(undefined8 *)(lVar32 + 0x30)) * 0.5);
          if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
            lVar32 = *in_stack_00000058;
            if (lVar32 == 0) goto thunk_FUN_01b48178;
            if (uStack0000000000000064 < *(uint *)(lVar32 + 0x18)) {
              lVar32 = lVar32 + (long)(int)uStack0000000000000064 * 0x14;
              fStack0000000000000120 = fStack0000000000000060 + 0.0 + fStack0000000000000120;
              fStack0000000000000040 =
                   ((fStack0000000000000044 + *(float *)(lVar32 + 0x28) + *(float *)(lVar32 + 0x30))
                   - fStack0000000000000040) * -0.5 + 0.0;
              goto LAB_03985d90;
            }
            goto LAB_03988250;
          }
          fStack0000000000000120 = fStack0000000000000060 + 0.0 + fStack0000000000000120;
          fStack0000000000000040 =
               ((fStack0000000000000044 + *(float *)(unaff_x19 + 0x374) + in_stack_00001298) -
               fStack0000000000000040) * -0.5 + 0.0;
        }
        else {
          if (iVar17 < 0x409) {
            if (iVar17 != 0x404) {
              bVar8 = iVar17 == 0x408;
              goto LAB_03985b18;
            }
          }
          else if (iVar17 != 0x410) {
            bVar8 = iVar17 == 0x420;
LAB_03985b18:
            if (!bVar8) goto LAB_03985da0;
          }
LAB_03985b2c:
          if (lVar32 == 0) goto thunk_FUN_01b48178;
          if (*(int *)(lVar32 + 0x18) == 0) goto LAB_03988250;
          uVar18 = *(undefined8 *)(lVar32 + 0x24);
          if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
            lVar33 = *in_stack_00000058;
            if (lVar33 == 0) goto thunk_FUN_01b48178;
            if (*(uint *)(lVar33 + 0x18) <= uStack0000000000000064) goto LAB_03988250;
            in_stack_00001298 = *(float *)(lVar33 + (long)(int)uStack0000000000000064 * 0x14 + 0x30)
            ;
          }
          fStack0000000000000120 = fStack0000000000000060 + 0.0 + *(float *)(lVar32 + 0x20);
          fStack0000000000000040 = fStack0000000000000040 + (0.0 - in_stack_00001298);
        }
LAB_03985d90:
        _in_stack_00000118 =
             CONCAT44((float)((ulong)uVar18 >> 0x20) + 0.0,(float)uVar18 + fStack0000000000000040);
      }
    }
    else if (iVar17 < 0x1005) {
      if (iVar17 < 0x809) {
        if ((iVar17 - 0x801U < 8) && ((1 << (ulong)(iVar17 - 0x801U & 0x1f) & 0x8bU) != 0)) {
LAB_03985954:
          if (lVar32 == 0) goto thunk_FUN_01b48178;
          if ((*(int *)(lVar32 + 0x18) != 1) && (*(int *)(lVar32 + 0x18) != 0)) {
            _in_stack_00000118 =
                 CONCAT44(((float)((ulong)*(undefined8 *)(lVar32 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar32 + 0x30) >> 0x20)) * 0.5 + 0.0,
                          ((float)*(undefined8 *)(lVar32 + 0x24) +
                          (float)*(undefined8 *)(lVar32 + 0x30)) * 0.5 + 0.0);
            fStack0000000000000120 =
                 fStack0000000000000060 + 0.0 +
                 (*(float *)(lVar32 + 0x20) + *(float *)(lVar32 + 0x2c)) * 0.5;
            goto LAB_03985da0;
          }
          goto LAB_03988250;
        }
      }
      else if (iVar17 < 0x821) {
        if ((iVar17 == 0x810) || (iVar17 == 0x820)) goto LAB_03985954;
      }
      else if ((iVar17 - 0x1001U < 4) && (iVar17 - 0x1001U != 2)) goto LAB_03985be8;
    }
    else if (iVar17 < 0x2003) {
      if (iVar17 < 0x1011) {
        if ((iVar17 == 0x1008) || (iVar17 == 0x1010)) goto LAB_03985be8;
      }
      else {
        if (iVar17 == 0x1020) {
LAB_03985be8:
          if (lVar32 == 0) goto thunk_FUN_01b48178;
          if ((*(int *)(lVar32 + 0x18) != 1) && (*(int *)(lVar32 + 0x18) != 0)) {
            uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar32 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar32 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar32 + 0x24) +
                              (float)*(undefined8 *)(lVar32 + 0x30)) * 0.5);
            fStack0000000000000120 =
                 fStack0000000000000060 + 0.0 +
                 (*(float *)(lVar32 + 0x20) + *(float *)(lVar32 + 0x2c)) * 0.5;
            fStack0000000000000040 =
                 0.0 - ((fStack0000000000000044 + *(float *)(unaff_x19 + 0x36c) +
                        *(float *)(unaff_x19 + 0x364)) - fStack0000000000000040) * 0.5;
            goto LAB_03985d90;
          }
          goto LAB_03988250;
        }
        if (iVar17 - 0x2001U < 2) goto LAB_03985a90;
      }
    }
    else {
      if (iVar17 < 0x2009) {
        if (iVar17 != 0x2004) {
          iVar14 = 0x2008;
          goto LAB_03985a78;
        }
      }
      else if (iVar17 != 0x2010) {
        iVar14 = 0x2020;
LAB_03985a78:
        if (iVar17 != iVar14) goto LAB_03985da0;
      }
LAB_03985a90:
      if (lVar32 == 0) goto thunk_FUN_01b48178;
      if ((*(int *)(lVar32 + 0x18) == 1) || (*(int *)(lVar32 + 0x18) == 0)) goto LAB_03988250;
      _in_stack_00000118 =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar32 + 0x24) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar32 + 0x30) >> 0x20)) * 0.5 + 0.0,
                    ((float)*(undefined8 *)(lVar32 + 0x24) + (float)*(undefined8 *)(lVar32 + 0x30))
                    * 0.5 + (0.0 - ((*(float *)(unaff_x19 + 0x370) - fStack0000000000000044) -
                                   fStack0000000000000040) * 0.5));
      fStack0000000000000120 =
           fStack0000000000000060 + 0.0 +
           (*(float *)(lVar32 + 0x20) + *(float *)(lVar32 + 0x2c)) * 0.5;
    }
LAB_03985da0:
    uVar46 = FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    if (*(int *)(*(long *)PTR_DAT_03dad2e8 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)PTR_DAT_03dad2e8);
    }
    FUN_0399652c(0);
    FUN_039966fc(&stack0x00001270,0x4000ffff,0);
    fVar55 = DAT_00b555ec;
    uVar13 = *in_stack_000001d0;
    if ((int)uVar13 < 1) {
      iVar17 = 0;
      iStack0000000000000138 = 0;
      goto LAB_0398800c;
    }
    lVar32 = *in_stack_000001e8;
    if (lVar32 == 0) goto thunk_FUN_01b48178;
    fStack0000000000000174 = 0.0;
    fStack00000000000000d8 = 0.0;
    fStack00000000000000a8 = 0.0;
    plVar19 = (long *)(in_stack_000001c0 + 0x38);
    fStack00000000000000f4 = 0.0;
    fStack00000000000000a0 = 0.0;
    uVar21 = (ulong)&stack0x00001270 | 4;
    bVar8 = false;
    fVar47 = 0.0;
    fVar54 = 0.0;
    uVar20 = (ulong)&stack0x000005f0 | 4;
    bVar7 = false;
    bVar9 = false;
    iStack0000000000000138 = 0;
    uStack0000000000000094 = 0;
    _uStack0000000000000168 = 0;
    in_stack_000000c0._4_4_ = 0;
    iStack0000000000000178 = 0;
    _in_stack_000001a8 = 0x2fc;
    fStack000000000000012c = fStack0000000000000128;
    fStack0000000000000130 = in_stack_00000140._4_4_;
    fStack00000000000000cc = in_stack_00000140._4_4_;
    uStack00000000000000d0 = uStack0000000000000124;
    fStack00000000000000d4 = fStack0000000000000128;
    fStack00000000000000e4 = in_stack_00000140._4_4_;
    fStack00000000000000e8 = fStack0000000000000128;
    _bStack00000000000000e0 = uStack0000000000000124;
    fStack000000000000015c = DAT_00b555ec;
    uVar31 = 0;
    uVar26 = 1;
    goto LAB_03985ef4;
  }
  if (((in_stack_0000129c & 0xfffffffe) == 10) && (*(int *)(in_stack_000001e0 + 0x74) == 6)) {
    fVar55 = 0.0;
    if ((0.0 < fVar50) && (fVar55 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
      fVar55 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
    }
    if (in_stack_00000118 <
        (*(float *)(unaff_x19 + 0x374) - (*(float *)(unaff_x19 + 0x33c) - fVar50)) + fVar55) {
      if (*(int *)(unaff_x19 + 0x34c) == -1) {
        *(uint *)(unaff_x19 + 0x34c) = uVar26;
      }
      in_stack_0000120c = FUN_0398b72c();
LAB_03983d74:
      in_stack_00001288 = CONCAT44(3,uVar26);
      goto LAB_0398183c;
    }
  }
  if ((((in_stack_0000129c - 0x2007 < 0x23) &&
       ((1L << ((ulong)(in_stack_0000129c - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
      (in_stack_0000129c - 10 < 2)) || (in_stack_0000129c == 0xa0)) {
LAB_03983c8c:
    if ((in_stack_0000129c == 0xad) || (in_stack_0000129c == 0x200b))
    goto UnityEngine_UIElements_FocusController__GetRetargetedFocusedElement;
    if (in_stack_0000129c != 0x2060) {
      lVar32 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar32 != 0) {
        if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar32 + 0x18)) {
          lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
          *(int *)(lVar32 + 0x2c) = *(int *)(lVar32 + 0x2c) + 1;
          *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
          goto LAB_03983cec;
        }
        goto LAB_03988250;
      }
      goto thunk_FUN_01b48178;
    }
  }
  else {
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar20 = FUN_02fdea78(in_stack_0000129c,0);
    if ((uVar20 & 1) != 0) goto LAB_03983c8c;
  }
LAB_03983cec:
  if (in_stack_0000129c == 0xa0) {
    lVar32 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar32 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03988250;
    lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
    *(int *)(lVar32 + 0x20) = *(int *)(lVar32 + 0x20) + 1;
  }
UnityEngine_UIElements_FocusController__GetRetargetedFocusedElement:
  bVar8 = *(int *)(in_stack_000001e0 + 0x74) == 1;
  if (bVar8 && unaff_w23 == 1) {
    bVar8 = in_stack_0000129c == 0x2d;
  }
  if (bVar8) {
    if (*(long *)(unaff_x19 + 0x1a08) == 0) goto thunk_FUN_01b48178;
    fVar55 = *(float *)(unaff_x19 + 0xf4);
    iVar14 = FUN_0396ac24(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
    if (*(long *)(unaff_x19 + 0x1a08) == 0) goto thunk_FUN_01b48178;
    fVar47 = (float)FUN_0396ac34(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
    lVar32 = *(long *)(unaff_x19 + 0x1a00);
    fVar54 = in_stack_00000150;
    if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
      fVar54 = 1.0;
    }
    if ((lVar32 == 0) || (*(long *)(lVar32 + 0x20) == 0)) goto thunk_FUN_01b48178;
    fVar50 = *(float *)(unaff_x19 + 0xf0);
    fVar63 = *(float *)(lVar32 + 0x2c);
    fVar48 = (float)FUN_0396b17c(*(long *)(lVar32 + 0x20),0);
    fVar51 = *_iStack0000000000000138;
    fVar48 = fVar50 * (fVar55 / (float)iVar14) * fVar47 * fVar54 * fVar63 * fVar48;
    fVar55 = *_fStack0000000000000130;
    if ((in_stack_0000129c == 10) && (*(int *)(unaff_x19 + 0x324) != *(int *)(unaff_x19 + 0x328))) {
      lVar32 = *in_stack_000001e8;
      if (lVar32 == 0) goto thunk_FUN_01b48178;
      uVar26 = *(int *)(unaff_x19 + 0x324) - 1;
      if (*(uint *)(lVar32 + 0x18) <= uVar26) goto LAB_03988250;
      if (*(long *)(unaff_x19 + 0x1a08) == 0) goto thunk_FUN_01b48178;
      fVar54 = *(float *)(lVar32 + (long)(int)uVar26 * (long)iVar17 + 0x68);
      iVar14 = FUN_0396ac24(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
      if (*(long *)(unaff_x19 + 0x1a08) == 0) goto thunk_FUN_01b48178;
      fVar50 = (float)FUN_0396ac34(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
      lVar32 = *(long *)(unaff_x19 + 0x1a00);
      fVar47 = in_stack_00000150;
      if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
        fVar47 = 1.0;
      }
      if ((lVar32 == 0) || (*(long *)(lVar32 + 0x20) == 0)) goto thunk_FUN_01b48178;
      fVar63 = *(float *)(unaff_x19 + 0xf0);
      fVar52 = *(float *)(lVar32 + 0x2c);
      fVar48 = (float)FUN_0396b17c(*(long *)(lVar32 + 0x20),0);
      lVar32 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar32 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03988250;
      lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
      fVar51 = *(float *)(lVar32 + 100);
      fVar55 = *(float *)(lVar32 + 0x68);
      fVar48 = fVar63 * (fVar54 / (float)iVar14) * fVar50 * fVar47 * fVar52 * fVar48;
    }
    fVar47 = *(float *)(unaff_x19 + 0x2f4);
    fVar54 = 0.0;
    if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
      if ((*(long *)(unaff_x19 + 0x1a00) == 0) ||
         (lVar32 = *(long *)(*(long *)(unaff_x19 + 0x1a00) + 0x20), lVar32 == 0))
      goto thunk_FUN_01b48178;
      FUN_0396b140(&stack0x000012a0,lVar32,0);
      fVar54 = (float)FUN_0396af88(&stack0x000011c0,0);
    }
    fVar50 = *(float *)(unaff_x19 + 0x35c);
    fVar55 = (fStack000000000000012c - fVar51) - fVar55;
    bVar8 = true;
    if ((fVar50 <= fVar55) && (bVar8 = false, !NAN(fVar50))) {
      bVar8 = fVar50 == -1.0;
    }
    if (!bVar8) {
      fVar55 = fVar50;
    }
    fVar50 = 1.0;
    if (uVar40 != 0) {
      fVar50 = DAT_00b55374;
    }
    if (ABS(fVar47) + fVar48 * fVar54 * (1.0 - *(float *)(unaff_x19 + 0x1594)) < fVar50 * fVar55) {
      FUN_0398b3d0();
      uVar62 = *(undefined8 *)PTR_DAT_03dad340;
      memcpy(&stack0x000012a0,in_stack_00000070,0x398);
      FUN_021c3068(in_stack_00000080,&stack0x000012a0,uVar62);
    }
  }
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto thunk_FUN_01b48178;
  if (*(uint *)(lVar32 + 0x18) <= *in_stack_000001d0) goto LAB_03988250;
  uVar26 = *(uint *)(unaff_x19 + 0x340);
  lVar32 = lVar32 + (long)(int)*in_stack_000001d0 * unaff_x27;
  *(uint *)(lVar32 + 0x6c) = uVar26;
  *(undefined4 *)(lVar32 + 0x70) = *(undefined4 *)(unaff_x19 + 0x350);
  if (((unaff_w23 & 1) == 0) &&
     ((0xd < in_stack_0000129c || ((1 << (ulong)(in_stack_0000129c & 0x1f) & 0x2c00U) == 0)))) {
    lVar32 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar32 == 0) goto thunk_FUN_01b48178;
LAB_03984168:
    if (*(uint *)(lVar32 + 0x18) <= uVar26) goto LAB_03988250;
    *(undefined4 *)(lVar32 + (long)(int)uVar26 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x158);
  }
  else {
    lVar32 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar32 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar32 + 0x18) <= uVar26) goto LAB_03988250;
    if (*(int *)(lVar32 + (long)(int)uVar26 * 0x60 + 0x24) == 1) goto LAB_03984168;
  }
  if (in_stack_0000129c != 0x200b) {
    if (in_stack_0000129c == 9) {
      if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
      fVar55 = (float)FUN_0396ad1c(*in_stack_000001c8 + 0xb0,0);
      if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
      bVar11 = FUN_0396df8c(*in_stack_000001c8,0);
      fVar54 = *(float *)(unaff_x19 + 0x2f4);
      fVar47 = fVar66 * fVar55 * (float)bVar11;
      fVar55 = fVar47 * (float)(int)(fVar54 / fVar47);
      if (fVar55 <= fVar54) {
        fVar55 = fVar54 + fVar47;
      }
      *(float *)(unaff_x19 + 0x2f4) = fVar55;
    }
    else {
      fVar55 = *(float *)(unaff_x19 + 0x2f0);
      if (fVar55 == 0.0) {
        fVar54 = *(float *)(unaff_x19 + 0x2f4);
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          fVar55 = (float)FUN_0396af88(&stack0x000011f0,0);
          fVar48 = *(float *)(unaff_x19 + 0x19a8);
          fVar47 = (float)FUN_0396d104(&stack0x000011e0,0);
          if (*(long *)(unaff_x19 + 0x68) != 0) {
            fVar49 = (float)FUN_0396df4c(*(long *)(unaff_x19 + 0x68),0);
            fVar54 = fVar54 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                              (*(float *)(unaff_x19 + 0x2ec) +
                              fVar66 * (fVar55 * fVar48 + fVar47) +
                              in_stack_00000158 * (fVar60 + in_stack_00000188 + fVar49));
            goto LAB_03984260;
          }
          goto thunk_FUN_01b48178;
        }
        fVar55 = (float)FUN_0396d104(&stack0x000011e0,0);
        if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
        fVar47 = (float)FUN_0396df4c(*in_stack_000001c8,0);
        fVar54 = fVar54 - (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                          (*(float *)(unaff_x19 + 0x2ec) +
                          fVar66 * fVar55 +
                          in_stack_00000158 * (fVar60 + in_stack_00000188 + fVar47));
        *(float *)(unaff_x19 + 0x2f4) = fVar54;
        if ((unaff_w25 == 0) && (in_stack_0000129c != 0x200b)) goto LAB_03984330;
        fVar54 = fVar54 - in_stack_00000158 * *(float *)(in_stack_000001e0 + 0xc4);
      }
      else {
        if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
        fVar54 = *(float *)(unaff_x19 + 0x2f4);
        fVar47 = (float)FUN_0396df4c(*in_stack_000001c8,0);
        fVar54 = fVar54 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                          (*(float *)(unaff_x19 + 0x2ec) +
                          (fVar55 - fVar49) + in_stack_00000158 * (in_stack_00000188 + fVar47));
LAB_03984260:
        *(float *)(unaff_x19 + 0x2f4) = fVar54;
        if ((unaff_w25 == 0) && (in_stack_0000129c != 0x200b)) goto LAB_03984330;
        fVar54 = fVar54 + in_stack_00000158 * *(float *)(in_stack_000001e0 + 0xc4);
      }
      *(float *)(unaff_x19 + 0x2f4) = fVar54;
    }
  }
LAB_03984330:
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto thunk_FUN_01b48178;
  uVar26 = *in_stack_000001d0;
  if (*(uint *)(lVar32 + 0x18) <= uVar26) goto LAB_03988250;
  *(undefined4 *)(lVar32 + (long)(int)uVar26 * unaff_x27 + 0x164) =
       *(undefined4 *)(unaff_x19 + 0x2f4);
  if (in_stack_0000129c == 0xd) {
    *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
  }
  if ((*(int *)(in_stack_000001e0 + 0x74) == 5) &&
     (((0xd < in_stack_0000129c || ((1 << (ulong)(in_stack_0000129c & 0x1f) & 0x2c00U) == 0)) &&
      (1 < in_stack_0000129c - 0x2028)))) {
    lVar32 = *in_stack_00000058;
    if (lVar32 == 0) goto thunk_FUN_01b48178;
    uVar40 = *(uint *)(unaff_x19 + 0x350);
    if (*(int *)(lVar32 + 0x18) < (int)(uVar40 + 1)) {
      if (*(int *)(*(long *)PTR_DAT_03dad318 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f55658(in_stack_00000058,uVar40 + 1,1,*(undefined8 *)PTR_DAT_03dad308);
      lVar32 = *in_stack_00000058;
      if (lVar32 == 0) goto thunk_FUN_01b48178;
      uVar40 = *(uint *)(unaff_x19 + 0x350);
    }
    if (*(uint *)(lVar32 + 0x18) <= uVar40) goto LAB_03988250;
    lVar33 = lVar32 + (long)(int)uVar40 * 0x14;
    *(undefined4 *)(lVar33 + 0x28) = *(undefined4 *)(unaff_x19 + 0x19c8);
    fVar55 = *(float *)(unaff_x19 + 0x378);
    if (*(float *)(lVar33 + 0x30) <= *(float *)(unaff_x19 + 0x378)) {
      fVar55 = *(float *)(lVar33 + 0x30);
    }
    *(float *)(lVar33 + 0x30) = fVar55;
    if (*(char *)(unaff_x19 + 0x37c) != '\0') {
      *(undefined1 *)(unaff_x19 + 0x37c) = 0;
      *(undefined4 *)(lVar32 + (long)(int)uVar40 * 0x14 + 0x20) = *(undefined4 *)(unaff_x19 + 0x324)
      ;
    }
    uVar26 = *in_stack_000001d0;
    *(uint *)(lVar32 + (long)(int)uVar40 * 0x14 + 0x24) = uVar26;
  }
  if (((in_stack_0000129c < 0xc) && ((1 << (ulong)(in_stack_0000129c & 0x1f) & 0xc08U) != 0)) ||
     ((in_stack_0000129c - 0x2028 < 2 ||
      (((unaff_w23 & in_stack_0000129c == 0x2d) != 0 || ((float)uVar26 == fStack00000000000000e4))))
     )) {
    if (0.0 < *(float *)(unaff_x19 + 0x2e0)) {
      fVar55 = *(float *)(unaff_x19 + 0x338);
      fVar54 = *(float *)(unaff_x19 + 0x15ac);
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar55 = fVar55 - fVar54;
      if (((fStack00000000000000ac < ABS(fVar55)) && (*(char *)(unaff_x19 + 0x2e8) == '\0')) &&
         (*(char *)(unaff_x19 + 0x37c) != '\x01')) {
        uVar46 = *(undefined4 *)(unaff_x19 + 0x328);
        uVar15 = *(undefined4 *)(unaff_x19 + 0x324);
        if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_03999c5c(fVar55,uVar46,uVar15,in_stack_000001c0,0);
        *(float *)(unaff_x19 + 0x378) = *(float *)(unaff_x19 + 0x378) - fVar55;
        *(float *)(unaff_x19 + 0x2e0) = fVar55 + *(float *)(unaff_x19 + 0x2e0);
        plVar44 = (long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
        if (*(int *)(unaff_x19 + 0xad8) == *(int *)(unaff_x19 + 0x340)) {
          FUN_021c3180(&stack0x000012a0,in_stack_00000080,*(undefined8 *)PTR_DAT_03dad338);
          memcpy(&stack0x00000230,&stack0x000012a0,0x398);
          memcpy(in_stack_00000070,&stack0x00000230,0x398);
          thunk_FUN_01b4f09c(in_stack_00000028,0);
          *(float *)(unaff_x19 + 0xaf0) = fVar55 + *(float *)(unaff_x19 + 0xaf0);
          *(float *)(unaff_x19 + 0xb24) = fVar55 + *(float *)(unaff_x19 + 0xb24);
          uVar62 = *(undefined8 *)PTR_DAT_03dad340;
          memcpy(&stack0x000012a0,in_stack_00000070,0x398);
          FUN_021c3068(in_stack_00000080,&stack0x000012a0,uVar62);
        }
      }
    }
    fVar54 = *(float *)(unaff_x19 + 0x2e0);
    *(undefined1 *)(unaff_x19 + 0x37c) = 0;
    fVar47 = *(float *)(unaff_x19 + 0x33c) - fVar54;
    fVar55 = *(float *)(unaff_x19 + 0x378);
    if (fVar47 <= *(float *)(unaff_x19 + 0x378)) {
      fVar55 = fVar47;
    }
    *(float *)(unaff_x19 + 0x378) = fVar55;
    fVar48 = *(float *)(unaff_x19 + 0x338);
    if (in_stack_00001294 == '\0') {
      in_stack_00001298 = fVar55;
    }
    if ((*(char *)(in_stack_000001e0 + 0xe8) != '\0') &&
       ((*(int *)(in_stack_000001e0 + 0xd8) <= (int)*in_stack_000001d0 ||
        (*(int *)(in_stack_000001e0 + 0xe0) <= *(int *)(unaff_x19 + 0x340))))) {
      in_stack_00001294 = '\x01';
    }
    lVar32 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar32 == 0) goto thunk_FUN_01b48178;
    uVar26 = *(uint *)(unaff_x19 + 0x340);
    if (*(uint *)(lVar32 + 0x18) <= uVar26) goto LAB_03988250;
    iVar14 = *(int *)(unaff_x19 + 0x328);
    lVar33 = lVar32 + (long)(int)uVar26 * 0x60;
    *(int *)(lVar33 + 0x38) = iVar14;
    uVar40 = *(uint *)(unaff_x19 + 0x328);
    if (iVar14 <= (int)*(uint *)(unaff_x19 + 0x330)) {
      uVar40 = *(uint *)(unaff_x19 + 0x330);
    }
    *(uint *)(unaff_x19 + 0x330) = uVar40;
    *(uint *)(lVar33 + 0x3c) = uVar40;
    iVar1 = *(int *)(unaff_x19 + 0x324);
    *(int *)(unaff_x19 + 0x32c) = iVar1;
    *(int *)(lVar33 + 0x40) = iVar1;
    iVar16 = *(int *)(unaff_x19 + 0x330);
    if ((int)uVar40 <= *(int *)(unaff_x19 + 0x334)) {
      iVar16 = *(int *)(unaff_x19 + 0x334);
    }
    *(int *)(unaff_x19 + 0x334) = iVar16;
    *(int *)(lVar33 + 0x44) = iVar16;
    *(int *)(lVar33 + 0x24) = (iVar1 - iVar14) + 1;
    *(undefined4 *)(lVar33 + 0x28) = *(undefined4 *)(unaff_x19 + 0x344);
    *(undefined4 *)(lVar33 + 0x30) = *(undefined4 *)(unaff_x19 + 0x348);
    lVar33 = *in_stack_000001e8;
    if (lVar33 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar33 + 0x18) <= uVar40) goto LAB_03988250;
    uVar46 = *(undefined4 *)(lVar33 + (long)(int)uVar40 * (long)iVar17 + 0x124);
    lVar32 = lVar32 + (long)(int)uVar26 * 0x60;
    *(float *)(lVar32 + 0x74) = fVar47;
    *(undefined4 *)(lVar32 + 0x70) = uVar46;
    lVar32 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar32 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03988250;
    lVar33 = *in_stack_000001e8;
    if (lVar33 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto LAB_03988250;
    uVar46 = *(undefined4 *)(lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x334) * unaff_x27 + 0x130);
    fVar48 = fVar48 - fVar54;
    lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
    *(float *)(lVar32 + 0x7c) = fVar48;
    *(undefined4 *)(lVar32 + 0x78) = uVar46;
    lVar32 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar32 == 0) goto thunk_FUN_01b48178;
    uVar26 = *(uint *)(unaff_x19 + 0x340);
    if (*(uint *)(lVar32 + 0x18) <= uVar26) goto LAB_03988250;
    lVar33 = lVar32 + (long)(int)uVar26 * 0x60;
    *(float *)(lVar33 + 0x48) = *(float *)(lVar33 + 0x78) - fVar66 * in_stack_000001a8;
    *(float *)(lVar33 + 0x60) = fStack0000000000000174;
    if (*(int *)(lVar33 + 0x24) == 1) {
      *(undefined4 *)(lVar32 + (long)(int)uVar26 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x158)
      ;
    }
    if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
    fVar55 = (float)FUN_0396df4c(*in_stack_000001c8,0);
    lVar32 = *in_stack_000001e8;
    if (lVar32 == 0) goto thunk_FUN_01b48178;
    lVar33 = (long)(int)*(uint *)(unaff_x19 + 0x334);
    if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto LAB_03988250;
    lVar35 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar35 == 0) goto thunk_FUN_01b48178;
    uVar26 = *(uint *)(unaff_x19 + 0x340);
    if (((*(char *)(lVar32 + lVar33 * unaff_x27 + 0x1a0) == '\0') &&
        (lVar33 = (long)(int)*(uint *)(unaff_x19 + 0x32c),
        *(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x32c))) ||
       (uVar40 = (uint)*(undefined8 *)(lVar35 + 0x18), uVar40 <= uVar26)) goto LAB_03988250;
    fVar54 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
             (*(float *)(unaff_x19 + 0x2ec) +
             in_stack_00000158 * (fVar60 + in_stack_00000188 + fVar55));
    fVar55 = -fVar54;
    if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
      fVar55 = fVar54;
    }
    *(float *)(lVar35 + (long)(int)uVar26 * 0x60 + 0x5c) =
         *(float *)(lVar32 + lVar33 * unaff_x27 + 0x164) + fVar55;
    if (uVar40 <= uVar26) goto LAB_03988250;
    lVar35 = lVar35 + (long)(int)uVar26 * 0x60;
    *(float *)(lVar35 + 0x54) = 0.0 - *(float *)(unaff_x19 + 0x2e0);
    *(float *)(lVar35 + 0x58) = fVar47;
    *(float *)(lVar35 + 0x4c) = fStack00000000000000a8 + (fVar48 - fVar47);
    *(float *)(lVar35 + 0x50) = fVar48;
    if (0x2c < (int)in_stack_0000129c) {
      if ((in_stack_0000129c - 0x2028 < 2) || (in_stack_0000129c == 0x2d)) goto LAB_0398491c;
      goto LAB_03984b30;
    }
    if (in_stack_0000129c - 10 < 2) {
LAB_0398491c:
      FUN_0398b3d0();
      uVar13 = *(uint *)(unaff_x19 + 0x324);
      iVar14 = *(int *)(unaff_x19 + 0x340) + 1;
      *(int *)(unaff_x19 + 0x340) = iVar14;
      *(uint *)(unaff_x19 + 0x328) = uVar13 + 1;
      in_stack_000001d0[8] = 0;
      in_stack_000001d0[9] = 0;
      if (*(long *)(in_stack_000001c0 + 0x48) != 0) {
        if (*(int *)(*(long *)(in_stack_000001c0 + 0x48) + 0x18) <= iVar14) {
          if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_03999ddc(iVar14,in_stack_000001c0,0);
          uVar13 = *in_stack_000001d0;
        }
        lVar32 = *in_stack_000001e8;
        if (lVar32 != 0) {
          if (uVar13 < *(uint *)(lVar32 + 0x18)) {
            fVar55 = *(float *)(lVar32 + (long)(int)uVar13 * (long)iVar17 + 0x158);
            if (*(float *)(unaff_x19 + 0x2e4) == DAT_00b55468) {
              if ((in_stack_0000129c == 0x2029) || (fVar54 = 0.0, in_stack_0000129c == 10)) {
                fVar54 = *(float *)(in_stack_000001e0 + 0xcc);
              }
              uVar24 = 0;
              fVar54 = fVar55 + (0.0 - *(float *)(unaff_x19 + 0x33c)) +
                       fStack0000000000000090 *
                       (in_stack_00000088._4_4_ + *(float *)(unaff_x19 + 0x15b0)) +
                       in_stack_00000158 * (*(float *)(in_stack_000001e0 + 200) + fVar54) +
                       *(float *)(unaff_x19 + 0x2e0);
            }
            else {
              if ((in_stack_0000129c == 0x2029) || (fVar54 = 0.0, in_stack_0000129c == 10)) {
                fVar54 = *(float *)(in_stack_000001e0 + 0xcc);
              }
              uVar24 = 1;
              fVar54 = *(float *)(unaff_x19 + 0x2e0) +
                       *(float *)(unaff_x19 + 0x2e4) +
                       in_stack_00000158 * (*(float *)(in_stack_000001e0 + 200) + fVar54);
            }
            *(float *)(unaff_x19 + 0x2e0) = fVar54;
            *(float *)(unaff_x19 + 0x15ac) = fVar55;
            *(undefined1 *)(unaff_x19 + 0x2e8) = uVar24;
            *(undefined8 *)(unaff_x19 + 0x338) = in_stack_00000098;
            *(float *)(unaff_x19 + 0x2f4) =
                 *(float *)(unaff_x19 + 0x2f8) + 0.0 + *(float *)(unaff_x19 + 0x2fc);
            FUN_0398b3d0();
            FUN_0398b3d0();
            *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
            goto LAB_03984af8;
          }
          goto LAB_03988250;
        }
      }
      goto thunk_FUN_01b48178;
    }
    if (in_stack_0000129c == 3) {
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        in_stack_0000120c = (uint)*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
        goto LAB_03984b30;
      }
      goto thunk_FUN_01b48178;
    }
  }
  else {
    lVar32 = *in_stack_000001e8;
    if (lVar32 == 0) goto thunk_FUN_01b48178;
  }
LAB_03984b30:
  uVar26 = *in_stack_000001d0;
  if (*(uint *)(lVar32 + 0x18) <= uVar26) goto LAB_03988250;
  if (*(char *)(lVar32 + (long)(int)uVar26 * unaff_x27 + 0x1a0) != '\0') {
    lVar32 = lVar32 + (long)(int)uVar26 * unaff_x27;
    uVar20 = *(ulong *)(unaff_x19 + 0x360);
    uVar21 = *(ulong *)(lVar32 + 0x124);
    *(ulong *)(unaff_x19 + 0x360) =
         uVar20 ^ (uVar20 ^ uVar21) &
                  ~CONCAT44(-(uint)((float)(uVar20 >> 0x20) < (float)(uVar21 >> 0x20)),
                            -(uint)((float)uVar20 < (float)uVar21));
    uVar20 = *(ulong *)(unaff_x19 + 0x368);
    uVar21 = *(ulong *)(lVar32 + 0x130);
    *(ulong *)(unaff_x19 + 0x368) =
         uVar20 ^ (uVar20 ^ uVar21) &
                  ~CONCAT44(-(uint)((float)(uVar21 >> 0x20) < (float)(uVar20 >> 0x20)),
                            -(uint)((float)uVar21 < (float)uVar20));
  }
  if ((uStack0000000000000094 != 0) ||
     ((*(uint *)(in_stack_000001e0 + 0x74) < 7 &&
      ((1 << (ulong)(*(uint *)(in_stack_000001e0 + 0x74) & 0x1f) & 0x4aU) != 0)))) {
    if ((unaff_w25 == 0) &&
       (((in_stack_0000129c != 0x2d && (in_stack_0000129c != 0x200b)) && (in_stack_0000129c != 0xad)
        ))) {
      if (*(char *)(unaff_x19 + 0x37d) == '\0') {
LAB_03984c40:
        if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar20 = FUN_0399a608(in_stack_0000129c,0);
        if ((uVar20 & 1) == 0) {
LAB_03984c88:
          if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar20 = FUN_0399a678(in_stack_0000129c,0);
          if ((uVar20 & 1) == 0) goto LAB_03984d70;
          if (in_stack_00000068 == 0) goto thunk_FUN_01b48178;
        }
        else {
          if ((in_stack_00000068 == 0) || (lVar32 = FUN_0399d0fc(in_stack_00000068,0), lVar32 == 0))
          goto thunk_FUN_01b48178;
          if (*(char *)(lVar32 + 0x28) != '\0') goto LAB_03984c88;
        }
        lVar32 = FUN_0399d0fc(in_stack_00000068,0);
        if ((lVar32 == 0) || (lVar32 = FUN_0399f504(lVar32,0), lVar32 == 0))
        goto thunk_FUN_01b48178;
        uVar20 = System_Array_InternalEnumerator<al>__System_Collections_IEnumerator_get_Current
                           (lVar32,in_stack_0000129c,*(undefined8 *)PTR_DAT_03d9d288);
        if ((int)*in_stack_000001d0 < (int)fStack00000000000000e4) {
          lVar32 = FUN_0399d0fc(in_stack_00000068,0);
          if (lVar32 == 0) goto thunk_FUN_01b48178;
          lVar32 = FUN_0399f804(lVar32,0);
          lVar33 = *in_stack_000001e8;
          if (lVar33 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar33 + 0x18) <= *in_stack_000001d0 + 1) goto LAB_03988250;
          if (lVar32 == 0) goto thunk_FUN_01b48178;
          uVar21 = System_Array_InternalEnumerator<al>__System_Collections_IEnumerator_get_Current
                             (lVar32,*(undefined2 *)
                                      (lVar33 + (long)(int)(*in_stack_000001d0 + 1) * (long)iVar17 +
                                      0x20),*(undefined8 *)PTR_DAT_03d9d288);
          if ((uVar20 & 1) != 0) goto LAB_03984f8c;
          if ((uVar21 & 1) == 0) goto LAB_03985278;
          if ((bStack00000000000000e0 & 1) == 0) goto LAB_03984df8;
        }
        else {
          if ((uVar20 & 1) == 0) {
LAB_03985278:
            FUN_0398b3d0();
            bStack00000000000000e0 = 0;
            goto LAB_03984e08;
          }
LAB_03984f8c:
          if (uVar13 != uVar31 || ((bStack00000000000000e0 ^ 0xff) & 1) != 0) goto LAB_03984e08;
        }
        if (unaff_w25 != 0) {
          FUN_0398b3d0();
        }
      }
      else {
LAB_03984d70:
        if ((bStack00000000000000e0 & 1) == 0) {
LAB_03984df8:
          bStack00000000000000e0 = 0;
          goto LAB_03984e08;
        }
        if ((unaff_w25 != 0 && in_stack_0000129c != 0xa0) ||
           ((in_stack_000000c0._4_1_ & 1) == 0 && in_stack_0000129c == 0xad)) {
          FUN_0398b3d0();
        }
      }
      FUN_0398b3d0();
      bStack00000000000000e0 = 1;
    }
    else {
      if (*(char *)(unaff_x19 + 0x37d) == '\x01') goto LAB_03984d70;
      if (((in_stack_0000129c - 0x2007 < 0x29) &&
          ((1L << ((ulong)(in_stack_0000129c - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
         ((in_stack_0000129c == 0xa0 || (in_stack_0000129c == 0x2060)))) goto LAB_03984c40;
      FUN_0398b3d0();
      bStack00000000000000e0 = 0;
      *(undefined4 *)(unaff_x19 + 0x11e0) = 0xffffffff;
    }
  }
LAB_03984e08:
  FUN_0398b3d0();
  *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
  in_stack_00001288 = uVar18;
  goto LAB_0398183c;
code_r0x03981a98:
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto thunk_FUN_01b48178;
  if (*(uint *)(lVar32 + 0x18) <= *in_stack_000001d0) goto LAB_03988250;
  *in_stack_000001c8 = *(long *)(lVar32 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x40);
  thunk_FUN_01b4f09c(in_stack_000001c8);
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto thunk_FUN_01b48178;
  if (*(uint *)(lVar32 + 0x18) <= *in_stack_000001d0) goto LAB_03988250;
  *in_stack_00000190 = *(long *)(lVar32 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x58);
  thunk_FUN_01b4f09c();
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto thunk_FUN_01b48178;
  uVar31 = *in_stack_000001d0;
  uVar13 = *(uint *)(lVar32 + 0x18);
  if (uVar13 <= uVar31) goto LAB_03988250;
  *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar32 + (long)(int)uVar31 * unaff_x27 + 0x60)
  ;
  if (unaff_w23 != 0) {
    lVar33 = *(long *)(unaff_x19 + 0x20);
    if (lVar33 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar33 + 0x18) <= in_stack_0000120c) goto LAB_03988250;
    if ((*(int *)(lVar33 + (long)(int)in_stack_0000120c * 0x10 + 0x24) == 10) &&
       (uVar31 != *(uint *)(unaff_x19 + 0x328))) {
      if (uVar13 <= uVar31 - 1) goto LAB_03988250;
      if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
      fVar54 = *(float *)(lVar32 + (long)(int)(uVar31 - 1) * (long)iVar17 + 0x68);
      iVar14 = FUN_0396ac24(*in_stack_000001c8 + 0xb0,0);
      lVar32 = *in_stack_000001c8;
      goto joined_r0x03983da8;
    }
  }
  if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
  fVar54 = *(float *)(unaff_x19 + 0xf4);
  iVar14 = FUN_0396ac24(*in_stack_000001c8 + 0xb0,0);
  lVar32 = *(long *)(unaff_x19 + 0x68);
joined_r0x03983da8:
  if (lVar32 == 0) goto thunk_FUN_01b48178;
  fVar48 = (float)FUN_0396ac34(lVar32 + 0xb0,0);
  fVar47 = in_stack_00000150;
  if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
    fVar47 = 1.0;
  }
  fStack0000000000000170 = 0.0;
  in_stack_00000180 = 0.0;
  if ((unaff_w23 & in_stack_0000129c == 0x2026) == 0) {
    if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
    in_stack_00000180 = (float)FUN_0396ac54(*in_stack_000001c8 + 0xb0,0);
    if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
    fStack0000000000000170 = (float)FUN_0396ac94(*in_stack_000001c8 + 0xb0,0);
  }
  lVar32 = *(long *)(unaff_x19 + 0x1588);
  if ((lVar32 == 0) || (*(long *)(lVar32 + 0x20) == 0)) goto thunk_FUN_01b48178;
  fVar49 = *(float *)(unaff_x19 + 0xf0);
  fVar60 = *(float *)(lVar32 + 0x2c);
  fVar55 = (float)FUN_0396b17c(*(long *)(lVar32 + 0x20),0);
  if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
  fVar50 = (float)FUN_0396ac84(*in_stack_000001c8 + 0xb0,0);
  if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
  fVar51 = *(float *)(unaff_x19 + 0xf0);
  in_stack_000001a0 = (float)FUN_0396ac34(*in_stack_000001c8 + 0xb0,0);
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto thunk_FUN_01b48178;
  uVar13 = *(uint *)(unaff_x19 + 0x324);
  if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_03988250;
  lVar33 = lVar32 + (long)(int)uVar13 * unaff_x27;
  fVar47 = ((fStack000000000000017c * fVar54) / (float)iVar14) * fVar48 * fVar47;
  fVar55 = fVar47 * fVar49 * fVar60 * fVar55;
  *(undefined1 *)(lVar33 + 0x28) = 1;
  *(float *)(lVar33 + 0x16c) = fVar55;
  in_stack_000001a8 = *(float *)(unaff_x19 + 0xd8);
  in_stack_000001a0 = fVar47 * fVar50 * fVar51 * in_stack_000001a0;
LAB_0398217c:
  unaff_d8 = (ulong)(uint)fVar55;
  unaff_d13 = unaff_d8;
  if (in_stack_0000129c == 3 || in_stack_0000129c == 0xad) {
    unaff_d13 = 0;
  }
LAB_03982194:
  if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_03988250;
  lVar32 = lVar32 + (long)(int)uVar13 * (long)iVar17;
  *(short *)(lVar32 + 0x20) = (short)in_stack_0000129c;
  *(undefined4 *)(lVar32 + 0x68) = *(undefined4 *)(unaff_x19 + 0xf4);
  *(undefined4 *)(lVar32 + 0x170) = *(undefined4 *)(unaff_x19 + 0x1ac);
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto thunk_FUN_01b48178;
  if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_03988250;
  *(undefined4 *)(lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x174) =
       *(undefined4 *)(unaff_x19 + 0x1b0);
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto thunk_FUN_01b48178;
  if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_03988250;
  *(undefined4 *)(lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x17c) =
       *(undefined4 *)(unaff_x19 + 0x1b4);
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto thunk_FUN_01b48178;
  uVar62 = in_stack_00000108[1];
  uVar18 = *in_stack_00000108;
  if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_03988250;
  lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
  *(undefined4 *)(lVar32 + 0x198) = *(undefined4 *)(in_stack_00000108 + 2);
  *(undefined8 *)(lVar32 + 400) = uVar62;
  *(undefined8 *)(lVar32 + 0x188) = uVar18;
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto thunk_FUN_01b48178;
  if (*(uint *)(lVar32 + 0x18) <= *in_stack_000001d0) goto LAB_03988250;
  lVar32 = lVar32 + (long)(int)*in_stack_000001d0 * unaff_x27;
  lVar33 = *(long *)(lVar32 + 0x38);
  *(undefined4 *)(lVar32 + 0x19c) = *(undefined4 *)(unaff_x19 + 0x124);
  if ((lVar33 == 0) &&
     ((*in_stack_000001b0 == 0 || (lVar33 = *(long *)(*in_stack_000001b0 + 0x20), lVar33 == 0))))
  goto thunk_FUN_01b48178;
  FUN_0396b140(&stack0x000012a0,lVar33,0);
  if (in_stack_0000129c >> 0x10 == 0) {
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar13 = FUN_02fdb080(in_stack_0000129c,0);
    unaff_w25 = uVar13 & 1;
  }
  else {
    unaff_w25 = 0;
  }
  in_stack_000011e0 = 0;
  in_stack_00000188 = *(float *)(in_stack_000001e0 + 0xc0);
  unaff_x22 = in_stack_000001e8;
  unaff_x26 = in_stack_000001c8;
  unaff_x29 = in_stack_000001d0;
  uVar18 = in_stack_00001288;
  if (*(char *)(in_stack_000001e0 + 0xb4) != '\0') goto code_r0x03982318;
  goto LAB_03982518;
code_r0x03982318:
  if (*in_stack_000001b0 == 0) goto thunk_FUN_01b48178;
  uVar13 = *in_stack_000001d0;
  unaff_w21 = *(uint *)(*in_stack_000001b0 + 0x28);
  if ((int)uVar13 < (int)fStack00000000000000e4) {
    lVar32 = *in_stack_000001e8;
    if (lVar32 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar32 + 0x18) <= uVar13 + 1) goto LAB_03988250;
    lVar32 = *(long *)(lVar32 + (long)(int)(uVar13 + 1) * (long)iVar17 + 0x30);
    if ((((lVar32 == 0) || (*in_stack_000001c8 == 0)) ||
        (lVar33 = *(long *)(*in_stack_000001c8 + 0x170), lVar33 == 0)) ||
       (lVar33 = *(long *)(lVar33 + 0x40), lVar33 == 0)) goto thunk_FUN_01b48178;
    uVar20 = FUN_02624ae4(lVar33,unaff_w21 | *(int *)(lVar32 + 0x28) << 0x10,&stack0x00001190,
                          *(undefined8 *)PTR_DAT_03dad2d0);
    if ((uVar20 & 1) != 0) {
      FUN_0396d450(&stack0x000012a0,&stack0x00001190,0);
      in_stack_000011e0 = FUN_0396d2b4(&stack0x00001170,0);
      uVar20 = FUN_0396d478(&stack0x00001190,0);
      if ((uVar20 & 0x100) != 0) {
        in_stack_00000188 = 0.0;
      }
    }
    uVar13 = *in_stack_000001d0;
  }
  in_OV = SBORROW4(uVar13,1);
  in_w8 = uVar13 - 1;
  in_NG = (int)in_w8 < 0;
  goto code_r0x0398240c;
LAB_03985ef4:
  do {
    uVar13 = uVar26 - 1;
    if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_03988250;
    lVar45 = (long)(int)uVar13;
    lVar33 = lVar32 + lVar45 * 0x188;
    lVar35 = *(long *)(lVar33 + 0x40);
    uVar2 = *(ushort *)(lVar33 + 0x20);
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    bVar11 = FUN_02fdb080(uVar2,0);
    if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_03988250;
    lVar33 = *(long *)(in_stack_000001c0 + 0x48);
    uVar40 = (uint)uVar2;
    if (lVar33 == 0) goto thunk_FUN_01b48178;
    uVar27 = *(uint *)(lVar32 + lVar45 * 0x188 + 0x6c);
    if (*(uint *)(lVar33 + 0x18) <= uVar27) goto LAB_03988250;
    lVar36 = (long)(int)uVar27;
    lVar33 = lVar33 + lVar36 * 0x60;
    uVar4 = *(uint *)(lVar33 + 0x40);
    uVar43 = *(uint *)(lVar33 + 0x6c);
    iVar16 = *(int *)(lVar33 + 0x20);
    iVar17 = *(int *)(lVar33 + 0x28);
    iVar14 = *(int *)(lVar33 + 0x2c);
    uVar5 = *(uint *)(lVar33 + 0x44);
    lVar37 = (long)(int)uVar5;
    fVar50 = *(float *)(lVar33 + 0x50);
    fVar63 = *(float *)(lVar33 + 0x58);
    fVar48 = *(float *)(lVar33 + 0x5c);
    fVar49 = *(float *)(lVar33 + 0x60);
    fVar66 = *(float *)(lVar33 + 100);
    fVar52 = *(float *)(lVar33 + 0x70);
    fVar67 = *(float *)(lVar33 + 0x74);
    fVar60 = *(float *)(lVar33 + 0x78);
    fVar51 = *(float *)(lVar33 + 0x7c);
    if ((int)uVar43 < 0x421) {
      if ((int)uVar43 < 0x209) {
        if ((int)uVar43 < 0x111) {
          switch(uVar43) {
          case 0x101:
            goto switchD_0398604c_caseD_1001;
          case 0x102:
            goto switchD_0398604c_caseD_1002;
          case 0x103:
          case 0x105:
          case 0x106:
          case 0x107:
            break;
          case 0x104:
            goto switchD_0398604c_caseD_1004;
          case 0x108:
            goto switchD_0398604c_caseD_1008;
          default:
            if (uVar43 == 0x110) goto switchD_0398604c_caseD_1008;
          }
        }
        else {
          switch(uVar43) {
          case 0x201:
            goto switchD_0398604c_caseD_1001;
          case 0x202:
            goto switchD_0398604c_caseD_1002;
          case 0x203:
          case 0x205:
          case 0x206:
          case 0x207:
            break;
          case 0x204:
            goto switchD_0398604c_caseD_1004;
          case 0x208:
            goto switchD_0398604c_caseD_1008;
          default:
            if (uVar43 == 0x120) goto LAB_039861b0;
          }
        }
      }
      else if ((int)uVar43 < 0x405) {
        if ((int)uVar43 < 0x401) {
          if (uVar43 == 0x210) goto switchD_0398604c_caseD_1008;
          if (uVar43 == 0x220) goto LAB_039861b0;
        }
        else {
          if (uVar43 == 0x401) goto switchD_0398604c_caseD_1001;
          if (uVar43 == 0x402) goto switchD_0398604c_caseD_1002;
          if (uVar43 == 0x404) goto switchD_0398604c_caseD_1004;
        }
      }
      else {
        if ((uVar43 == 0x408) || (uVar43 == 0x410)) goto switchD_0398604c_caseD_1008;
        if (uVar43 == 0x420) goto LAB_039861b0;
      }
      goto switchD_0398604c_caseD_1003;
    }
    if (0x1008 < (int)uVar43) {
      if ((int)uVar43 < 0x2005) {
        if (0x2000 < (int)uVar43) {
          if (uVar43 == 0x2001) goto switchD_0398604c_caseD_1001;
          if (uVar43 == 0x2002) goto switchD_0398604c_caseD_1002;
          if (uVar43 == 0x2004) goto switchD_0398604c_caseD_1004;
          goto switchD_0398604c_caseD_1003;
        }
        if (uVar43 != 0x1010) {
          uVar28 = 0x1020;
          goto LAB_03986170;
        }
      }
      else if ((uVar43 != 0x2008) && (uVar43 != 0x2010)) {
        uVar28 = 0x2020;
LAB_03986170:
        if (uVar43 != uVar28) goto switchD_0398604c_caseD_1003;
LAB_039861b0:
        fVar48 = fVar52 + fVar60;
        goto LAB_039861c4;
      }
      goto switchD_0398604c_caseD_1008;
    }
    if ((int)uVar43 < 0x811) {
      switch(uVar43) {
      case 0x801:
        goto switchD_0398604c_caseD_1001;
      case 0x802:
        goto switchD_0398604c_caseD_1002;
      case 0x803:
      case 0x805:
      case 0x806:
      case 0x807:
        break;
      case 0x804:
        goto switchD_0398604c_caseD_1004;
      case 0x808:
switchD_0398604c_caseD_1008:
        if ((int)uVar13 <= (int)uVar5) {
          if (uVar40 < 0xad) {
            if ((uVar40 != 3) && (uVar40 != 10))
            goto UnityEngine_UIElements_NavigateFocusRing_FocusableHierarchyTraversal__StrictOrder;
          }
          else if ((uVar40 != 0xad) && ((uVar40 != 0x200b && (uVar40 != 0x2060)))) {
UnityEngine_UIElements_NavigateFocusRing_FocusableHierarchyTraversal__StrictOrder:
            if (*(uint *)(lVar32 + 0x18) <= uVar4) goto LAB_03988250;
            uVar3 = *(undefined2 *)(lVar32 + (long)(int)uVar4 * 0x188 + 0x20);
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              plVar44 = (long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__;
            }
            uVar23 = FUN_02fde5f4(uVar3,0);
            if ((uVar23 & 1) == 0) {
              bVar10 = (int)uVar27 < *(int *)(unaff_x19 + 0x340);
            }
            else {
              bVar10 = false;
            }
            if ((fVar48 <= fVar49) && (!bVar10 && (uVar43 >> 4 & 1) == 0)) {
              in_stack_00000158 = fVar66;
              if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
                in_stack_00000158 = fVar49 + fVar66;
              }
              goto LAB_039861c8;
            }
            if ((uVar26 == 1) || (uVar27 != uVar31)) {
              cVar25 = *(char *)(in_stack_000001e0 + 0xb6);
            }
            else {
              cVar25 = *(char *)(in_stack_000001e0 + 0xb6);
              if (uVar13 != *(uint *)(in_stack_000001e0 + 0xe4)) {
                iVar14 = (iVar14 - iVar16) - (uStack0000000000000094 & 1);
                fVar66 = -fVar48;
                if (cVar25 != '\0') {
                  fVar66 = fVar48;
                }
                if (iVar14 < 1) {
                  fVar48 = 1.0;
                }
                else {
                  fVar48 = *(float *)(in_stack_000001e0 + 0x7c);
                }
                if (iVar14 < 2) {
                  iVar14 = 1;
                }
                fVar49 = fVar49 + fVar66;
                if (uVar40 == 9) {
LAB_03987f80:
                  if (cVar25 != '\0') {
                    fVar49 = fVar49 * (1.0 - fVar48);
                    fVar66 = (float)iVar14;
LAB_03987fbc:
                    in_stack_00000158 = in_stack_00000158 - fVar49 / fVar66;
                    break;
                  }
                  fVar66 = (float)iVar14;
                  fVar49 = fVar49 * (1.0 - fVar48);
                }
                else {
                  if (uVar40 != 0xa0) {
                    if (*(int *)(*(long *)
                                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar23 = FUN_02fdea78(uVar40,0);
                    cVar25 = *(char *)(in_stack_000001e0 + 0xb6);
                    if ((uVar23 & 1) != 0) goto LAB_03987f80;
                  }
                  fVar49 = fVar49 * fVar48;
                  fVar66 = (float)(int)((iVar16 - (~uStack0000000000000094 & 1)) + iVar17);
                  if (cVar25 != '\0') goto LAB_03987fbc;
                }
                in_stack_00000158 = in_stack_00000158 + fVar49 / fVar66;
                uStack0000000000000148 =
                     CONCAT44((float)((ulong)uStack0000000000000148 >> 0x20) + 0.0,
                              (float)uStack0000000000000148 + 0.0);
                break;
              }
            }
            in_stack_00000158 = fVar66;
            if (cVar25 != '\0') {
              in_stack_00000158 = fVar49 + fVar66;
            }
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uStack0000000000000094 = FUN_02fdea78(uVar40,0);
            uStack0000000000000148 = 0;
          }
        }
        break;
      default:
        if (uVar43 == 0x810) goto switchD_0398604c_caseD_1008;
      }
    }
    else {
      switch(uVar43) {
      case 0x1001:
switchD_0398604c_caseD_1001:
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          in_stack_00000158 = fVar66 + 0.0;
        }
        else {
          in_stack_00000158 = 0.0 - fVar48;
        }
        break;
      case 0x1002:
switchD_0398604c_caseD_1002:
LAB_039861c4:
        in_stack_00000158 = (fVar66 + fVar49 * 0.5) - fVar48 * 0.5;
        break;
      case 0x1003:
      case 0x1005:
      case 0x1006:
      case 0x1007:
        goto switchD_0398604c_caseD_1003;
      case 0x1004:
switchD_0398604c_caseD_1004:
        in_stack_00000158 = (fVar49 + fVar66) - fVar48;
        if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
          in_stack_00000158 = fVar49 + fVar66;
        }
        break;
      case 0x1008:
        goto switchD_0398604c_caseD_1008;
      default:
        if (uVar43 == 0x820) goto LAB_039861b0;
        goto switchD_0398604c_caseD_1003;
      }
LAB_039861c8:
      uStack0000000000000148 = 0;
    }
switchD_0398604c_caseD_1003:
    uVar43 = (uint)*(undefined8 *)(lVar32 + 0x18);
    if (uVar43 <= uVar13) goto LAB_03988250;
    lVar33 = lVar32 + lVar45 * 0x188;
    fVar66 = fStack0000000000000120 + in_stack_00000158;
    fVar48 = (float)_in_stack_00000118 + (float)uStack0000000000000148;
    fVar49 = (float)((ulong)_in_stack_00000118 >> 0x20) +
             (float)((ulong)uStack0000000000000148 >> 0x20);
    if (*(char *)(lVar33 + 0x1a0) == '\0') goto LAB_03986a64;
    cVar25 = *(char *)(lVar32 + lVar45 * 0x188 + 0x28);
    if (cVar25 != '\x01') goto UnityEngine_UIElements_PanelSettings__get_clearColor;
    fVar47 = fmodf(*(float *)(in_stack_000001e0 + 0xfc) * (float)(int)uVar27,1.0);
    plVar44 = (long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf4)) {
    case 0:
      fVar47 = 1.0;
      lVar30 = lVar32 + lVar45 * 0x188;
      *(undefined4 *)(lVar30 + 0xbc) = 0;
      *(undefined4 *)(lVar30 + 0x94) = 0;
      *(undefined4 *)(lVar30 + 0xe4) = 0x3f800000;
      break;
    case 1:
      fVar51 = *(float *)(lVar32 + lVar45 * 0x188 + 0xa0);
      if (*(int *)(in_stack_000001e0 + 0x70) == 0x208) {
        lVar30 = lVar32 + lVar45 * 0x188;
        fVar60 = (in_stack_00000158 + fVar51) - *(float *)(unaff_x19 + 0x360);
        fVar51 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
        goto LAB_03986374;
      }
      lVar30 = lVar32 + lVar45 * 0x188;
      fVar60 = fVar60 - fVar52;
      *(float *)(lVar30 + 0xbc) = fVar47 + (fVar51 - fVar52) / fVar60;
      *(float *)(lVar30 + 0x94) = fVar47 + (*(float *)(lVar30 + 0x78) - fVar52) / fVar60;
      *(float *)(lVar30 + 0xe4) = fVar47 + (*(float *)(lVar30 + 200) - fVar52) / fVar60;
      fVar47 = fVar47 + (*(float *)(lVar30 + 0xf0) - fVar52) / fVar60;
      break;
    case 2:
      lVar30 = lVar32 + lVar45 * 0x188;
      fVar51 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
      fVar60 = (in_stack_00000158 + *(float *)(lVar30 + 0xa0)) - *(float *)(unaff_x19 + 0x360);
LAB_03986374:
      *(float *)(lVar30 + 0xbc) = fVar47 + fVar60 / fVar51;
      *(float *)(lVar30 + 0x94) =
           fVar47 + ((in_stack_00000158 + *(float *)(lVar30 + 0x78)) - *(float *)(unaff_x19 + 0x360)
                    ) / (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      *(float *)(lVar30 + 0xe4) =
           fVar47 + ((in_stack_00000158 + *(float *)(lVar30 + 200)) - *(float *)(unaff_x19 + 0x360))
                    / (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      fVar47 = fVar47 + ((in_stack_00000158 + *(float *)(lVar30 + 0xf0)) -
                        *(float *)(unaff_x19 + 0x360)) /
                        (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      break;
    case 3:
      switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
      case 0:
        lVar30 = lVar32 + lVar45 * 0x188;
        *(undefined4 *)(lVar30 + 0xc0) = 0;
        *(undefined4 *)(lVar30 + 0x98) = 0x3f800000;
        *(undefined4 *)(lVar30 + 0xe8) = 0;
        *(undefined4 *)(lVar30 + 0x110) = 0x3f800000;
        break;
      case 1:
        fVar51 = fVar51 - fVar67;
        lVar30 = lVar32 + lVar45 * 0x188;
        fVar60 = fVar47 + (*(float *)(lVar30 + 0xa4) - fVar67) / fVar51;
        fVar51 = fVar47 + (*(float *)(lVar30 + 0x7c) - fVar67) / fVar51;
        *(float *)(lVar30 + 0xc0) = fVar60;
        *(float *)(lVar30 + 0x98) = fVar51;
        *(float *)(lVar30 + 0xe8) = fVar60;
        *(float *)(lVar30 + 0x110) = fVar51;
        break;
      case 2:
        lVar30 = lVar32 + lVar45 * 0x188;
        fVar60 = fVar47 + (*(float *)(lVar30 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
                          (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
        *(float *)(lVar30 + 0xc0) = fVar60;
        fVar51 = *(float *)(unaff_x19 + 0x364);
        fVar52 = *(float *)(unaff_x19 + 0x36c);
        *(float *)(lVar30 + 0xe8) = fVar60;
        fVar60 = fVar47 + (*(float *)(lVar30 + 0x7c) - fVar51) / (fVar52 - fVar51);
        *(float *)(lVar30 + 0x98) = fVar60;
        *(float *)(lVar30 + 0x110) = fVar60;
        break;
      case 3:
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038f2acc(*(undefined8 *)PTR_DAT_03d9c948,0);
        uVar43 = (uint)*(undefined8 *)(lVar32 + 0x18);
      }
      if (uVar43 <= uVar13) goto LAB_03988250;
      lVar30 = lVar32 + lVar45 * 0x188;
      fVar60 = *(float *)(lVar30 + 0x168);
      fVar51 = (1.0 - (*(float *)(lVar30 + 0xc0) + *(float *)(lVar30 + 0x98)) * fVar60) * 0.5;
      fVar52 = fVar47 + *(float *)(lVar30 + 0xc0) * fVar60 + fVar51;
      fVar47 = fVar47 + *(float *)(lVar30 + 0x98) * fVar60 + fVar51;
      *(float *)(lVar30 + 0xbc) = fVar52;
      *(float *)(lVar30 + 0x94) = fVar52;
      *(float *)(lVar30 + 0xe4) = fVar47;
      break;
    default:
      goto switchD_039862ac_default;
    }
    *(float *)(lVar32 + lVar45 * 0x188 + 0x10c) = fVar47;
switchD_039862ac_default:
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
    case 0:
      if (uVar43 <= uVar13) goto LAB_03988250;
      lVar30 = lVar32 + lVar45 * 0x188;
      *(undefined4 *)(lVar30 + 0xc0) = 0;
      *(undefined4 *)(lVar30 + 0x98) = 0x3f800000;
      *(undefined4 *)(lVar30 + 0xe8) = 0x3f800000;
      *(undefined4 *)(lVar30 + 0x110) = 0;
      break;
    case 1:
      if (uVar13 < uVar43) {
        fVar50 = fVar50 - fVar63;
        lVar30 = lVar32 + lVar45 * 0x188;
        fVar47 = (*(float *)(lVar30 + 0xa4) - fVar63) / fVar50;
        fVar50 = (*(float *)(lVar30 + 0x7c) - fVar63) / fVar50;
        *(float *)(lVar30 + 0xc0) = fVar47;
        goto FUN_03986724;
      }
      goto LAB_03988250;
    case 2:
      if (uVar43 <= uVar13) goto LAB_03988250;
      lVar30 = lVar32 + lVar45 * 0x188;
      fVar47 = (*(float *)(lVar30 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
      *(float *)(lVar30 + 0xc0) = fVar47;
      fVar50 = (*(float *)(lVar30 + 0x7c) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
FUN_03986724:
      *(float *)(lVar30 + 0x98) = fVar50;
      *(float *)(lVar30 + 0xe8) = fVar50;
      *(float *)(lVar30 + 0x110) = fVar47;
      break;
    case 3:
      if (uVar43 <= uVar13) goto LAB_03988250;
      lVar30 = lVar32 + lVar45 * 0x188;
      fVar50 = *(float *)(lVar30 + 0x168);
      fVar60 = (1.0 - (*(float *)(lVar30 + 0xbc) + *(float *)(lVar30 + 0xe4)) / fVar50) * 0.5;
      fVar47 = *(float *)(lVar30 + 0xbc) / fVar50 + fVar60;
      fVar60 = *(float *)(lVar30 + 0xe4) / fVar50 + fVar60;
      *(float *)(lVar30 + 0xc0) = fVar47;
      *(float *)(lVar30 + 0x98) = fVar60;
      *(float *)(lVar30 + 0x110) = fVar47;
      *(float *)(lVar30 + 0xe8) = fVar60;
    }
    if (uVar43 <= uVar13) goto LAB_03988250;
    lVar30 = lVar32 + lVar45 * 0x188;
    fVar47 = *(float *)(lVar30 + 0x16c) * (1.0 - *(float *)(unaff_x19 + 0x1594));
    if ((*(char *)(lVar30 + 100) == '\0') && ((*(byte *)(lVar32 + lVar45 * 0x188 + 0x19c) & 1) != 0)
       ) {
      fVar47 = -fVar47;
    }
    lVar30 = lVar32 + lVar45 * 0x188;
    *(float *)(lVar30 + 0xb8) = fVar47;
    *(float *)(lVar30 + 0x90) = fVar47;
    *(float *)(lVar30 + 0xe0) = fVar47;
    *(float *)(lVar30 + 0x108) = fVar47;
    *(undefined4 *)(lVar30 + 0xbc) = 0x3f800000;
    *(float *)(lVar30 + 0xc0) = fVar47;
    *(undefined4 *)(lVar30 + 0x94) = 0x3f800000;
    *(float *)(lVar30 + 0x98) = fVar47;
    *(undefined4 *)(lVar30 + 0xe4) = 0x3f800000;
    *(float *)(lVar30 + 0xe8) = fVar47;
    *(undefined4 *)(lVar30 + 0x10c) = 0x3f800000;
    *(float *)(lVar30 + 0x110) = fVar47;
UnityEngine_UIElements_PanelSettings__get_clearColor:
    if (((int)uVar13 < *(int *)(in_stack_000001e0 + 0xd8)) &&
       (iStack0000000000000138 < *(int *)(in_stack_000001e0 + 0xdc))) {
      if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar27) ||
         (*(int *)(in_stack_000001e0 + 0x74) == 5)) {
        if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar27) ||
           (*(int *)(in_stack_000001e0 + 0x74) != 5))
        goto UnityEngine_UIElements_PanelSettings__get_dynamicAtlasSettings;
        if (uVar13 < uVar43) {
          bVar10 = *(uint *)(lVar32 + lVar45 * 0x188 + 0x70) == uStack0000000000000064;
          goto LAB_03986880;
        }
        goto LAB_03988250;
      }
      if (uVar43 <= uVar13) goto LAB_03988250;
UnityEngine_UIElements_PanelSettings___ctor:
      lVar33 = lVar32 + lVar45 * 0x188;
      *(ulong *)(lVar33 + 0xa0) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar33 + 0xa0) >> 0x20),
                    fVar66 + (float)*(undefined8 *)(lVar33 + 0xa0));
      *(float *)(lVar33 + 0xa8) = fVar49 + *(float *)(lVar33 + 0xa8);
      *(ulong *)(lVar33 + 0x78) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar33 + 0x78) >> 0x20),
                    fVar66 + (float)*(undefined8 *)(lVar33 + 0x78));
      *(float *)(lVar33 + 0x80) = fVar49 + *(float *)(lVar33 + 0x80);
      *(ulong *)(lVar33 + 200) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar33 + 200) >> 0x20),
                    fVar66 + (float)*(undefined8 *)(lVar33 + 200));
      *(float *)(lVar33 + 0xd0) = fVar49 + *(float *)(lVar33 + 0xd0);
      *(ulong *)(lVar33 + 0xf0) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar33 + 0xf0) >> 0x20),
                    fVar66 + (float)*(undefined8 *)(lVar33 + 0xf0));
      *(float *)(lVar33 + 0xf8) = fVar49 + *(float *)(lVar33 + 0xf8);
    }
    else {
UnityEngine_UIElements_PanelSettings__get_dynamicAtlasSettings:
      bVar10 = false;
LAB_03986880:
      if (uVar43 <= uVar13) goto LAB_03988250;
      if (bVar10) goto UnityEngine_UIElements_PanelSettings___ctor;
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(plVar44);
        DAT_03fed257 = '\x01';
        uVar43 = *(uint *)(lVar32 + 0x18);
      }
      uVar15 = *(undefined4 *)(*(undefined8 **)(*plVar44 + 0xb8) + 1);
      lVar30 = lVar32 + lVar45 * 0x188;
      *(undefined8 *)(lVar30 + 0xa0) = **(undefined8 **)(*plVar44 + 0xb8);
      *(undefined4 *)(lVar30 + 0xa8) = uVar15;
      if (uVar43 <= uVar13) goto LAB_03988250;
      uVar15 = *(undefined4 *)(*(undefined8 **)(*plVar44 + 0xb8) + 1);
      lVar30 = lVar32 + lVar45 * 0x188;
      *(undefined8 *)(lVar30 + 0x78) = **(undefined8 **)(*plVar44 + 0xb8);
      *(undefined4 *)(lVar30 + 0x80) = uVar15;
      uVar15 = *(undefined4 *)(*(undefined8 **)(*plVar44 + 0xb8) + 1);
      *(undefined8 *)(lVar30 + 200) = **(undefined8 **)(*plVar44 + 0xb8);
      *(undefined4 *)(lVar30 + 0xd0) = uVar15;
      uVar15 = *(undefined4 *)(*(undefined8 **)(*plVar44 + 0xb8) + 1);
      *(undefined8 *)(lVar30 + 0xf0) = **(undefined8 **)(*plVar44 + 0xb8);
      *(undefined4 *)(lVar30 + 0xf8) = uVar15;
      *(undefined1 *)(lVar33 + 0x1a0) = 0;
    }
    iVar17 = FUN_038fcab0(0);
    if (iVar17 == 1) {
      cVar42 = *(char *)(in_stack_000001e0 + 0xa2);
    }
    else {
      cVar42 = '\0';
    }
    if (cVar25 == '\x01') {
      if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_03998984(uVar13,cVar42 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
    else if (cVar25 == '\x02') {
      if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_039993bc(uVar13,cVar42 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
LAB_03986a64:
    lVar33 = *in_stack_000001e8;
    if (lVar33 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar33 + 0x18) <= uVar13) goto LAB_03988250;
    lVar33 = lVar33 + lVar45 * 0x188;
    uVar18 = *(undefined8 *)(lVar33 + 0x124);
    *(undefined8 *)(lVar33 + 0x124) =
         CONCAT44(fVar48 + (float)((ulong)uVar18 >> 0x20),fVar66 + (float)uVar18);
    *(float *)(lVar33 + 300) = fVar49 + *(float *)(lVar33 + 300);
    lVar33 = *in_stack_000001e8;
    if (lVar33 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar33 + 0x18) <= uVar13) goto LAB_03988250;
    lVar33 = lVar33 + lVar45 * 0x188;
    *(ulong *)(lVar33 + 0x118) =
         CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar33 + 0x118) >> 0x20),
                  fVar66 + (float)*(undefined8 *)(lVar33 + 0x118));
    *(float *)(lVar33 + 0x120) = fVar49 + *(float *)(lVar33 + 0x120);
    lVar33 = *in_stack_000001e8;
    if (lVar33 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar33 + 0x18) <= uVar13) goto LAB_03988250;
    lVar33 = lVar33 + lVar45 * 0x188;
    *(ulong *)(lVar33 + 0x130) =
         CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar33 + 0x130) >> 0x20),
                  fVar66 + (float)*(undefined8 *)(lVar33 + 0x130));
    *(float *)(lVar33 + 0x138) = fVar49 + *(float *)(lVar33 + 0x138);
    lVar33 = *in_stack_000001e8;
    if (lVar33 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar33 + 0x18) <= uVar13) goto LAB_03988250;
    lVar33 = lVar33 + lVar45 * 0x188;
    *(float *)(lVar33 + 0x13c) = fVar66 + *(float *)(lVar33 + 0x13c);
    *(ulong *)(lVar33 + 0x140) =
         CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar33 + 0x140) >> 0x20),
                  fVar48 + (float)*(undefined8 *)(lVar33 + 0x140));
    lVar33 = *in_stack_000001e8;
    if (lVar33 == 0) goto thunk_FUN_01b48178;
    uVar43 = *(uint *)(lVar33 + 0x18);
    if (uVar43 <= uVar13) goto LAB_03988250;
    lVar30 = lVar33 + lVar45 * 0x188;
    *(float *)(lVar30 + 0x148) = fVar66 + *(float *)(lVar30 + 0x148);
    *(float *)(lVar30 + 0x164) = fVar66 + *(float *)(lVar30 + 0x164);
    *(float *)(lVar30 + 0x154) = fVar48 + *(float *)(lVar30 + 0x154);
    uVar18 = *(undefined8 *)(lVar30 + 0x14c);
    *(undefined8 *)(lVar30 + 0x14c) =
         CONCAT44(fVar48 + (float)((ulong)uVar18 >> 0x20),fVar48 + (float)uVar18);
    if (uVar27 == uVar31) {
      uVar31 = *in_stack_000001d0 - 1;
      if (uVar13 == uVar31) goto LAB_03986c5c;
    }
    else {
      lVar30 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar30 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar30 + 0x18) <= uVar31) goto LAB_03988250;
      lVar38 = (long)(int)uVar31;
      lVar41 = lVar30 + lVar38 * 0x60;
      fVar49 = fVar48 + *(float *)(lVar41 + 0x58);
      *(ulong *)(lVar41 + 0x50) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar41 + 0x50) >> 0x20),
                    fVar48 + (float)*(undefined8 *)(lVar41 + 0x50));
      *(float *)(lVar41 + 0x58) = fVar49;
      *(float *)(lVar41 + 0x5c) = fVar66 + *(float *)(lVar41 + 0x5c);
      if (uVar43 <= *(uint *)(lVar41 + 0x38)) goto LAB_03988250;
      uVar15 = *(undefined4 *)(lVar33 + (long)(int)*(uint *)(lVar41 + 0x38) * 0x188 + 0x124);
      lVar30 = lVar30 + lVar38 * 0x60;
      *(float *)(lVar30 + 0x74) = fVar49;
      *(undefined4 *)(lVar30 + 0x70) = uVar15;
      lVar33 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar33 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar33 + 0x18) <= uVar31) goto LAB_03988250;
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto thunk_FUN_01b48178;
      uVar31 = *(uint *)(lVar33 + lVar38 * 0x60 + 0x44);
      if (*(uint *)(lVar30 + 0x18) <= uVar31) goto LAB_03988250;
      lVar33 = lVar33 + lVar38 * 0x60;
      *(undefined4 *)(lVar33 + 0x78) = *(undefined4 *)(lVar30 + (long)(int)uVar31 * 0x188 + 0x130);
      *(undefined4 *)(lVar33 + 0x7c) = *(undefined4 *)(lVar33 + 0x50);
      uVar31 = *in_stack_000001d0 - 1;
LAB_03986c5c:
      if (uVar13 == uVar31) {
        lVar33 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar33 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar33 + 0x18) <= uVar27) goto LAB_03988250;
        lVar30 = lVar33 + lVar36 * 0x60;
        fVar49 = fVar48 + *(float *)(lVar30 + 0x58);
        *(ulong *)(lVar30 + 0x50) =
             CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar30 + 0x50) >> 0x20),
                      fVar48 + (float)*(undefined8 *)(lVar30 + 0x50));
        *(float *)(lVar30 + 0x58) = fVar49;
        *(float *)(lVar30 + 0x5c) = fVar66 + *(float *)(lVar30 + 0x5c);
        lVar38 = *in_stack_000001e8;
        if (lVar38 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar38 + 0x18) <= *(uint *)(lVar30 + 0x38)) goto LAB_03988250;
        uVar15 = *(undefined4 *)(lVar38 + (long)(int)*(uint *)(lVar30 + 0x38) * 0x188 + 0x124);
        lVar33 = lVar33 + lVar36 * 0x60;
        *(float *)(lVar33 + 0x74) = fVar49;
        *(undefined4 *)(lVar33 + 0x70) = uVar15;
        lVar33 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar33 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar33 + 0x18) <= uVar27) goto LAB_03988250;
        lVar30 = *in_stack_000001e8;
        if (lVar30 == 0) goto thunk_FUN_01b48178;
        uVar31 = *(uint *)(lVar33 + lVar36 * 0x60 + 0x44);
        if (*(uint *)(lVar30 + 0x18) <= uVar31) goto LAB_03988250;
        lVar33 = lVar33 + lVar36 * 0x60;
        *(undefined4 *)(lVar33 + 0x78) = *(undefined4 *)(lVar30 + (long)(int)uVar31 * 0x188 + 0x130)
        ;
        *(undefined4 *)(lVar33 + 0x7c) = *(undefined4 *)(lVar33 + 0x50);
      }
    }
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar23 = FUN_02fddb80(uVar40,0);
    if (((((uVar23 & 1) == 0) && (1 < uVar40 - 0x2010)) && (uVar40 != 0xad)) && (uVar40 != 0x2d)) {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        if (uVar26 == 1) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          bVar12 = FUN_02fddab4(uVar40,0);
          if (((uVar40 == 0x200b) || (((bVar11 | bVar12 ^ 1) & 1) != 0)) ||
             (*in_stack_000001d0 == 1)) goto LAB_03987688;
        }
        uStack000000000000016c = 0;
      }
      else {
        if (((uVar26 != 1) && ((int)uVar13 < (int)(*(uint *)(lVar32 + 0x18) - 1))) &&
           (((int)uVar13 < (int)*in_stack_000001d0 && ((uVar40 == 0x2019 || (uVar40 == 0x27)))))) {
          if (*(uint *)(lVar32 + 0x18) <= uVar26 - 2) goto LAB_03988250;
          uVar3 = *(undefined2 *)(lVar32 + _in_stack_000001a8 + -0x464);
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar23 = FUN_02fddb80(uVar3,0);
          if ((uVar23 & 1) != 0) {
            if (*(uint *)(lVar32 + 0x18) <= uVar26) goto LAB_03988250;
            uVar3 = *(undefined2 *)(lVar32 + _in_stack_000001a8 + -0x154);
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar23 = FUN_02fddb80(uVar3,0);
            if ((uVar23 & 1) != 0) goto LAB_03986e44;
          }
        }
LAB_03987688:
        if (uVar13 == *in_stack_000001d0 - 1) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar23 = FUN_02fddb80(uVar40,0);
          fStack0000000000000170 = (float)uVar13;
          if ((uVar23 & 1) == 0) goto LAB_039876c4;
        }
        else {
LAB_039876c4:
          fStack0000000000000170 = (float)(iStack0000000000000178 - 1);
        }
        lVar33 = *plVar19;
        if (lVar33 == 0) goto thunk_FUN_01b48178;
        uVar31 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar17 = *(int *)(lVar33 + 0x18);
        if (iVar17 < (int)(uVar31 + 1)) {
          if (*(int *)(*(long *)PTR_DAT_03dad318 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_01f554fc(plVar19,iVar17 + 1,*(undefined8 *)PTR_DAT_03dad310);
          lVar33 = *plVar19;
          if (lVar33 == 0) goto thunk_FUN_01b48178;
        }
        if (*(uint *)(lVar33 + 0x18) <= uVar31) goto LAB_03988250;
        lVar33 = lVar33 + (long)(int)uVar31 * 0xc;
        *(uint *)(lVar33 + 0x20) = uStack0000000000000168;
        *(float *)(lVar33 + 0x24) = fStack0000000000000170;
        *(uint *)(lVar33 + 0x28) = ((int)fStack0000000000000170 - uStack0000000000000168) + 1;
        lVar33 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar33 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar33 + 0x18) <= uVar27) goto LAB_03988250;
        lVar33 = lVar33 + lVar36 * 0x60;
        uStack000000000000016c = 0;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar33 + 0x34) = *(int *)(lVar33 + 0x34) + 1;
      }
    }
    else {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        uStack0000000000000168 = uVar13;
      }
      if (uVar13 == *in_stack_000001d0 - 1) {
        lVar33 = *plVar19;
        if (lVar33 == 0) goto thunk_FUN_01b48178;
        uVar31 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar17 = *(int *)(lVar33 + 0x18);
        if (iVar17 < (int)(uVar31 + 1)) {
          if (*(int *)(*(long *)PTR_DAT_03dad318 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_01f554fc(plVar19,iVar17 + 1,*(undefined8 *)PTR_DAT_03dad310);
          lVar33 = *plVar19;
          if (lVar33 == 0) goto thunk_FUN_01b48178;
        }
        if (*(uint *)(lVar33 + 0x18) <= uVar31) goto LAB_03988250;
        lVar33 = lVar33 + (long)(int)uVar31 * 0xc;
        *(uint *)(lVar33 + 0x20) = uStack0000000000000168;
        *(uint *)(lVar33 + 0x24) = uVar13;
        *(uint *)(lVar33 + 0x28) = uVar26 - uStack0000000000000168;
        lVar33 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar33 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar33 + 0x18) <= uVar27) goto LAB_03988250;
        lVar33 = lVar33 + lVar36 * 0x60;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar33 + 0x34) = *(int *)(lVar33 + 0x34) + 1;
      }
LAB_03986e44:
      uStack000000000000016c = 1;
    }
    lVar33 = *in_stack_000001e8;
    if (lVar33 == 0) goto thunk_FUN_01b48178;
    uVar31 = *(uint *)(lVar33 + 0x18);
    if (uVar31 <= uVar13) goto LAB_03988250;
    if ((*(byte *)(lVar33 + lVar45 * 0x188 + 0x19c) >> 2 & 1) == 0) {
      if (bVar7) {
LAB_03986e78:
        if (uVar26 - 2 < uVar31) {
          uVar15 = *(undefined4 *)(lVar33 + _in_stack_000001a8 + -0x354);
          uVar59 = *(undefined4 *)(lVar33 + _in_stack_000001a8 + -0x318);
          goto LAB_039870dc;
        }
        goto LAB_03988250;
      }
LAB_03987034:
      bVar7 = false;
    }
    else {
      lVar36 = *(long *)(unaff_x19 + 0x15b8);
      if (lVar36 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) goto LAB_03988250;
      iVar17 = *(int *)(lVar33 + lVar45 * 0x188 + 0x70);
      *(int *)(lVar33 + lVar45 * 0x188 + 0x178) =
           *(int *)(lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar13) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar27)) {
        bVar10 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar10 = iVar17 + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar10 = false;
      }
      if (uVar40 != 0x200b && (bVar11 & 1) == 0) {
        fVar49 = *(float *)(lVar33 + lVar45 * 0x188 + 0x16c);
        if (fVar54 <= fVar49) {
          fVar54 = fVar49;
        }
        if (iVar17 != in_stack_000000c0._4_4_) {
          fStack000000000000015c = fVar55;
        }
        if (lVar35 == 0) goto thunk_FUN_01b48178;
        fVar49 = *(float *)(lVar33 + lVar45 * 0x188 + 0x150);
        if (fStack0000000000000174 <= ABS(fVar47)) {
          fStack0000000000000174 = ABS(fVar47);
        }
        FUN_0396d8d8(&stack0x000012a0,lVar35,0);
        memcpy(&stack0x00001210,&stack0x000012a0,0x60);
        fVar60 = (float)FUN_0396ace4(&stack0x00001210,0);
        fVar49 = fVar49 + fVar54 * fVar60;
        in_stack_000000c0._4_4_ = iVar17;
        if (fVar49 <= fStack000000000000015c) {
          fStack000000000000015c = fVar49;
        }
      }
      if ((((uVar40 == 0xd) || ((uVar40 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar13)) ||
         (bVar7 || bVar10)) {
LAB_03987028:
        if (!bVar7) goto LAB_03987034;
      }
      else {
        if (uVar13 == uVar5) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar23 = FUN_02fdea78(uVar40,0);
          if ((uVar23 & 1) != 0) goto LAB_03987028;
        }
        lVar33 = *in_stack_000001e8;
        if (lVar33 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar33 + 0x18) <= uVar13) goto LAB_03988250;
        lVar33 = lVar33 + lVar45 * 0x188;
        fStack00000000000000d8 = *(float *)(lVar33 + 0x16c);
        fStack00000000000000d4 = *(float *)(lVar33 + 0x124);
        bVar7 = fVar54 != 0.0;
        uVar46 = *(undefined4 *)(lVar33 + 0x174);
        fVar49 = fStack00000000000000d8;
        if (bVar7) {
          fVar49 = fVar54;
        }
        fVar54 = fVar49;
        uStack00000000000000d0 = 0;
        fVar49 = fVar47;
        if (bVar7) {
          fVar49 = fStack0000000000000174;
        }
        fStack00000000000000cc = fStack000000000000015c;
        fStack0000000000000174 = fVar49;
      }
      if (*in_stack_000001d0 == 1) {
        lVar33 = *in_stack_000001e8;
        if (lVar33 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar33 + 0x18) <= uVar13) goto LAB_03988250;
        lVar33 = lVar33 + lVar45 * 0x188;
        uVar15 = *(undefined4 *)(lVar33 + 0x130);
        uVar59 = *(undefined4 *)(lVar33 + 0x16c);
LAB_039870dc:
        FUN_039916e4(fStack00000000000000d4,fStack00000000000000cc,uStack00000000000000d0,uVar15,
                     fStack000000000000015c,0,fStack00000000000000d8,uVar59);
      }
      else {
        if ((uVar13 == uVar4) || ((int)uVar5 <= (int)uVar13)) {
          lVar33 = *in_stack_000001e8;
          if (lVar33 != 0) {
            lVar36 = lVar45;
            uVar31 = uVar13;
            if (uVar40 == 0x200b || (bVar11 & 1) != 0) {
              lVar36 = lVar37;
              uVar31 = uVar5;
            }
            if (uVar31 < *(uint *)(lVar33 + 0x18)) {
              lVar33 = lVar33 + lVar36 * 0x188;
              uVar15 = *(undefined4 *)(lVar33 + 0x130);
              uVar59 = *(undefined4 *)(lVar33 + 0x16c);
              goto LAB_039870dc;
            }
            goto LAB_03988250;
          }
          goto thunk_FUN_01b48178;
        }
        if (bVar10) {
          lVar33 = *in_stack_000001e8;
          if (lVar33 != 0) {
            uVar31 = *(uint *)(lVar33 + 0x18);
            goto LAB_03986e78;
          }
          goto thunk_FUN_01b48178;
        }
        if ((int)(*in_stack_000001d0 - 1) <= (int)uVar13) {
LAB_03987844:
          bVar7 = true;
          goto LAB_03987118;
        }
        lVar33 = *in_stack_000001e8;
        if (lVar33 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar33 + 0x18) <= uVar26) goto LAB_03988250;
        uVar23 = FUN_0396d7b0(uVar46,*(undefined4 *)(lVar33 + _in_stack_000001a8),0);
        if ((uVar23 & 1) != 0) goto LAB_03987844;
        lVar33 = *in_stack_000001e8;
        if (lVar33 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar33 + 0x18) <= uVar13) goto LAB_03988250;
        lVar33 = lVar33 + lVar45 * 0x188;
        FUN_039916e4(fStack00000000000000d4,fStack00000000000000cc,uStack00000000000000d0,
                     *(undefined4 *)(lVar33 + 0x130),fStack000000000000015c,0,fStack00000000000000d8
                     ,*(undefined4 *)(lVar33 + 0x16c));
      }
      fVar54 = 0.0;
      bVar7 = false;
      fStack000000000000015c = DAT_00b555ec;
      fStack0000000000000174 = 0.0;
    }
LAB_03987118:
    lVar33 = *in_stack_000001e8;
    if (lVar33 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar33 + 0x18) <= uVar13) goto LAB_03988250;
    if (lVar35 == 0) goto thunk_FUN_01b48178;
    uVar31 = *(uint *)(lVar33 + lVar45 * 0x188 + 0x19c);
    FUN_0396d8d8(&stack0x000012a0,lVar35,0);
    memcpy(&stack0x00001210,&stack0x000012a0,0x60);
    fVar49 = (float)FUN_0396ad04(&stack0x00001210,0);
    if ((uVar31 >> 6 & 1) == 0) {
      if (bVar9) {
        lVar33 = *in_stack_000001e8;
        if (lVar33 != 0) {
          if (uVar26 - 2 < *(uint *)(lVar33 + 0x18)) {
            fVar48 = *(float *)(lVar33 + _in_stack_000001a8 + -0x334);
            uVar15 = *(undefined4 *)(lVar33 + _in_stack_000001a8 + -0x354);
            goto LAB_039878ac;
          }
          goto LAB_03988250;
        }
        goto thunk_FUN_01b48178;
      }
LAB_039872a0:
      bVar9 = false;
    }
    else {
      lVar33 = *in_stack_000001e8;
      if ((lVar33 == 0) || (lVar36 = *(long *)(unaff_x19 + 0x15b8), lVar36 == 0))
      goto thunk_FUN_01b48178;
      if ((*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) ||
         (*(uint *)(lVar33 + 0x18) <= uVar13)) goto LAB_03988250;
      *(int *)(lVar33 + lVar45 * 0x188 + 0x180) =
           *(int *)(lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar13) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar27)) {
        bVar10 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar10 = *(int *)(lVar33 + lVar45 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar10 = false;
      }
      if ((((uVar40 == 0xd) || ((uVar40 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar13)) ||
         (!(bool)(~bVar9 & (bVar10 ^ 1U)))) {
LAB_03987298:
        if (!bVar9) goto LAB_039872a0;
      }
      else {
        if (uVar13 == uVar5) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar23 = FUN_02fdea78(uVar40,0);
          if ((uVar23 & 1) != 0) goto LAB_03987298;
          lVar33 = *in_stack_000001e8;
          if (lVar33 == 0) goto thunk_FUN_01b48178;
        }
        if (*(uint *)(lVar33 + 0x18) <= uVar13) goto LAB_03988250;
        lVar33 = lVar33 + lVar45 * 0x188;
        fStack00000000000000a8 = *(float *)(lVar33 + 0x68);
        fStack00000000000000a0 = *(float *)(lVar33 + 0x150);
        fStack00000000000000e8 = *(float *)(lVar33 + 0x124);
        fStack00000000000000f4 = *(float *)(lVar33 + 0x16c);
        fStack00000000000000e4 = fVar49 * fStack00000000000000f4 + fStack00000000000000a0;
        _bStack00000000000000e0 = 0;
      }
      uVar31 = *in_stack_000001d0;
      if (uVar31 == 1) {
LAB_039874a4:
        lVar36 = *in_stack_000001e8;
        if (lVar36 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar36 + 0x18) <= uVar13) goto LAB_03988250;
        lVar36 = lVar36 + lVar45 * 0x188;
      }
      else {
        lVar33 = lVar45;
        if (uVar13 == uVar4) {
          lVar36 = *in_stack_000001e8;
          if (lVar36 == 0) goto thunk_FUN_01b48178;
          uVar31 = uVar13;
          if ((uVar40 != 0x200b & (bVar11 ^ 1)) == 0) {
            lVar33 = lVar37;
            uVar31 = uVar5;
          }
          if (*(uint *)(lVar36 + 0x18) <= uVar31) goto LAB_03988250;
        }
        else {
          if ((int)uVar31 <= (int)uVar13) {
LAB_0398758c:
            if ((int)uVar13 < (int)uVar31) {
              iVar17 = FUN_03922ce0(lVar35,0);
              if (*(uint *)(lVar32 + 0x18) <= uVar26) goto LAB_03988250;
              lVar33 = *(long *)(lVar32 + _in_stack_000001a8 + -0x134);
              if (lVar33 == 0) goto thunk_FUN_01b48178;
              iVar14 = FUN_03922ce0(lVar33,0);
              if (iVar17 != iVar14) goto LAB_039874a4;
            }
            if (!bVar10) {
              bVar9 = true;
              goto LAB_039878e8;
            }
            lVar33 = *in_stack_000001e8;
            if (lVar33 != 0) {
              if (uVar26 - 2 < *(uint *)(lVar33 + 0x18)) {
                fVar48 = *(float *)(lVar33 + _in_stack_000001a8 + -0x334);
                uVar15 = *(undefined4 *)(lVar33 + _in_stack_000001a8 + -0x354);
                goto LAB_039878ac;
              }
              goto LAB_03988250;
            }
            goto thunk_FUN_01b48178;
          }
          lVar36 = *in_stack_000001e8;
          if (lVar36 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar36 + 0x18) <= uVar26) goto LAB_03988250;
          if (*(float *)(lVar36 + _in_stack_000001a8 + -0x10c) == fStack00000000000000a8) {
            fVar60 = *(float *)(lVar36 + _in_stack_000001a8 + -0x24);
            if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar23 = FUN_03996934(fVar48 + fVar60,fStack00000000000000a0,0);
            if ((uVar23 & 1) != 0) {
              uVar31 = *in_stack_000001d0;
              goto LAB_0398758c;
            }
            lVar36 = *in_stack_000001e8;
            if (lVar36 == 0) goto thunk_FUN_01b48178;
          }
          uVar31 = uVar13;
          if ((int)uVar5 < (int)uVar13) {
            lVar33 = lVar37;
            uVar31 = uVar5;
          }
          if (*(uint *)(lVar36 + 0x18) <= uVar31) goto LAB_03988250;
        }
        lVar36 = lVar36 + lVar33 * 0x188;
      }
      fVar48 = *(float *)(lVar36 + 0x150);
      uVar15 = *(undefined4 *)(lVar36 + 0x130);
LAB_039878ac:
      FUN_039916e4(fStack00000000000000e8,fStack00000000000000e4,_bStack00000000000000e0,uVar15,
                   fStack00000000000000f4 * fVar49 + fVar48,0,fStack00000000000000f4,
                   fStack00000000000000f4);
      bVar9 = false;
    }
LAB_039878e8:
    lVar33 = *in_stack_000001e8;
    if (lVar33 == 0) goto thunk_FUN_01b48178;
    uVar31 = (uint)*(undefined8 *)(lVar33 + 0x18);
    if (uVar31 <= uVar13) goto LAB_03988250;
    if ((*(byte *)(lVar33 + lVar45 * 0x188 + 0x19d) >> 1 & 1) == 0) {
      if (bVar8) {
        FUN_03992548(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
      }
UnityEngine_UIElements_PanelSettings_RuntimePanelAccess__SetSortingPriority:
      bVar8 = false;
    }
    else {
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar13) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar27)) {
        bVar10 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar10 = *(int *)(lVar33 + lVar45 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar10 = false;
      }
      if (!bVar8) {
        if (((uVar40 == 0xd) || ((uVar40 & 0xfffe) == 10)) ||
           (((int)uVar5 < (int)uVar13 || (bVar10))))
        goto UnityEngine_UIElements_PanelSettings_RuntimePanelAccess__SetSortingPriority;
        if (uVar13 == uVar5) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar23 = FUN_02fdea78(uVar40,0);
          if ((uVar23 & 1) != 0)
          goto UnityEngine_UIElements_PanelSettings_RuntimePanelAccess__SetSortingPriority;
        }
        puVar6 = PTR_DAT_03dad2f8;
        lVar35 = *(long *)PTR_DAT_03dad2f8;
        if (*(int *)(lVar35 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar35 = *(long *)puVar6;
        }
        lVar33 = *in_stack_000001e8;
        if (lVar33 == 0) goto thunk_FUN_01b48178;
        uVar31 = (uint)*(undefined8 *)(lVar33 + 0x18);
        if (uVar31 <= uVar13) goto LAB_03988250;
        pfVar39 = *(float **)(lVar35 + 0xb8);
        fStack0000000000000128 = *pfVar39;
        in_stack_00000140._4_4_ = pfVar39[1];
        fStack000000000000012c = pfVar39[2];
        fStack0000000000000130 = pfVar39[3];
        uStack0000000000000124 = 0;
      }
      if (uVar31 <= uVar13) goto LAB_03988250;
      lVar33 = lVar33 + lVar45 * 0x188;
      fVar60 = *(float *)(lVar33 + 0x130);
      fVar63 = *(float *)(lVar33 + 0x124);
      fVar48 = *(float *)(lVar33 + 0x148);
      fVar50 = *(float *)(lVar33 + 0x14c);
      fVar51 = *(float *)(lVar33 + 0x154);
      fVar49 = *(float *)(lVar33 + 0x164);
      uVar23 = FUN_03996800(&stack0x00000210,&stack0x000001f0,0);
      lVar33 = *(long *)PTR_DAT_03dad2e8;
      if ((uVar23 & 1) == 0) {
        if (*(int *)(lVar33 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar33);
        }
        fVar52 = (float)FUN_0399650c(uVar21,0);
        bVar8 = (bVar11 & 1) == 0;
        if (bVar8) {
          fVar48 = fVar63;
        }
        if (bVar8) {
          fVar49 = fVar60;
        }
        if (fVar48 - fVar52 <= fStack0000000000000128) {
          fStack0000000000000128 = fVar48 - fVar52;
        }
        fVar48 = (float)FUN_03996514(uVar21,0);
        if (fStack000000000000012c <= fVar49 + fVar48) {
          fStack000000000000012c = fVar49 + fVar48;
        }
        if (*(int *)(*(long *)PTR_DAT_03dad2e8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar48 = (float)FUN_03996524(uVar21,0);
        if (fVar51 - fVar48 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar51 - fVar48;
        }
        fVar48 = (float)FUN_0399651c(uVar21,0);
        if (fStack0000000000000130 <= fVar50 + fVar48) {
          fStack0000000000000130 = fVar50 + fVar48;
        }
      }
      else {
        if (*(int *)(lVar33 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar33);
        }
        fVar52 = (float)FUN_03996514(uVar21,0);
        if ((bVar11 & 1) == 0) {
          fVar48 = fVar63;
        }
        if (fVar51 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar51;
        }
        fVar48 = (fVar48 + (fStack000000000000012c - fVar52)) * 0.5;
        if (fStack0000000000000130 <= fVar50) {
          fStack0000000000000130 = fVar50;
        }
        FUN_03992548(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,fVar48,
                     fStack0000000000000130,uStack0000000000000124);
        puVar6 = PTR_DAT_03dad2e8;
        if (*(int *)(*(long *)PTR_DAT_03dad2e8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00000140._4_4_ = (float)FUN_03996524(uVar20,0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00000140._4_4_ = fVar51 - in_stack_00000140._4_4_;
        fStack000000000000012c = (float)FUN_03996514(uVar20,0);
        fVar51 = (float)FUN_0399651c(uVar20,0);
        if ((bVar11 & 1) == 0) {
          fVar49 = fVar60;
        }
        fStack000000000000012c = fVar49 + fStack000000000000012c;
        uStack0000000000000124 = 0;
        fStack0000000000000128 = fVar48;
        fStack0000000000000130 = fVar50 + fVar51;
      }
      if ((((*in_stack_000001d0 == 1) || (uVar13 == uVar4)) || ((int)uVar5 <= (int)uVar13)) ||
         (bVar10)) {
        FUN_03992548(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
    }
    uVar13 = *in_stack_000001d0;
    iStack0000000000000178 = iStack0000000000000178 + 1;
    _in_stack_000001a8 = _in_stack_000001a8 + 0x188;
    bVar10 = (int)uVar26 < (int)uVar13;
    uVar31 = uVar27;
    uVar26 = uVar26 + 1;
  } while (bVar10);
  iVar17 = uVar27 + 1;
  plVar19 = (long *)PTR_DAT_03dace98;
LAB_0398800c:
  *(uint *)(in_stack_000001c0 + 0x10) = uVar13;
  uVar46 = *(undefined4 *)(unaff_x19 + 0x15c0);
  *(int *)(in_stack_000001c0 + 0x24) = iVar17;
  if ((int)uVar13 < 1 || iStack0000000000000138 == 0) {
    iStack0000000000000138 = 1;
  }
  *(int *)(in_stack_000001c0 + 0x1c) = iStack0000000000000138;
  *(undefined4 *)(in_stack_000001c0 + 0x14) = uVar46;
  *(int *)(in_stack_000001c0 + 0x28) = *(int *)(unaff_x19 + 0x350) + 1;
  if (1 < *(int *)(in_stack_000001c0 + 0x2c)) {
    uVar20 = 1;
    lVar32 = 0x78;
    do {
      lVar33 = *(long *)(in_stack_000001c0 + 0x58);
      if (lVar33 == 0) {
thunk_FUN_01b48178:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(int *)(*plVar19 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (*(uint *)(lVar33 + 0x18) <= uVar20) goto LAB_03988250;
      FUN_0397a3a4(lVar33 + lVar32,0);
      if (*(int *)(in_stack_000001e0 + 0x100) != 0) {
        lVar33 = *(long *)(in_stack_000001c0 + 0x58);
        if (lVar33 == 0) goto thunk_FUN_01b48178;
        if (*(int *)(*plVar19 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (*(uint *)(lVar33 + 0x18) <= uVar20) {
LAB_03988250:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        FUN_0397a3e0(lVar33 + lVar32,1,0);
      }
      uVar20 = uVar20 + 1;
      lVar32 = lVar32 + 0x58;
    } while ((long)uVar20 < (long)*(int *)(in_stack_000001c0 + 0x2c));
  }
LAB_03980e58:
  if (*(long *)(in_stack_00000110 + 0x28) == in_stack_00001638) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


