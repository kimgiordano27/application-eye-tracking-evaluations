/*
FUNCTION_NAME: UnityEngine.UIElements.GeometryChangedEvent$$set_oldRect
ENTRY_POINT: 0378da34
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


void UnityEngine_UIElements_GeometryChangedEvent__set_oldRect(float param_1,long param_2)

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
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 *puVar23;
  undefined8 uVar24;
  ulong uVar25;
  undefined1 uVar26;
  char cVar27;
  uint uVar28;
  long lVar29;
  float *pfVar30;
  long lVar31;
  uint uVar32;
  long *plVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  float *pfVar38;
  uint uVar39;
  long lVar40;
  long unaff_x19;
  char cVar41;
  uint unaff_w20;
  long unaff_x21;
  uint uVar42;
  long *unaff_x22;
  uint unaff_w23;
  char *unaff_x24;
  undefined4 unaff_w25;
  uint uVar43;
  long *unaff_x26;
  long lVar44;
  ulong unaff_x27;
  int unaff_w29;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined4 uVar60;
  float fVar61;
  undefined4 uVar62;
  float unaff_s8;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined8 uVar66;
  float fVar67;
  float fVar68;
  undefined8 uVar69;
  float unaff_s10;
  float fVar70;
  float fVar71;
  float fVar72;
  float unaff_s13;
  float fVar73;
  float unaff_s15;
  float fVar74;
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
  float in_stack_00000158;
  float fStack000000000000015c;
  long *in_stack_00000160;
  uint uStack0000000000000168;
  undefined4 uStack000000000000016c;
  float fStack0000000000000170;
  float fStack0000000000000174;
  int iStack0000000000000178;
  float fStack000000000000017c;
  long *in_stack_00000190;
  float in_stack_000001a0;
  long *in_stack_000001a8;
  float in_stack_000001b0;
  undefined8 in_stack_000001b8;
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
  long in_stack_00001a38;
  
code_r0x0378da34:
  fVar45 = (float)FUN_03776980(param_2,0);
  if (*unaff_x26 != 0) {
    fVar46 = (float)FUN_037769b0(*unaff_x26 + 0xb0,0);
    if (*unaff_x26 != 0) {
      fVar63 = *(float *)(unaff_x19 + 0xf0);
      fVar47 = (float)FUN_03776960(*unaff_x26 + 0xb0,0);
      if (*(long *)(unaff_x19 + 0x68) != 0) {
        fVar47 = unaff_s13 * fVar46 * fVar63 * fVar47;
        fStack0000000000000170 = (in_stack_000001b8._4_4_ / (float)unaff_w29) * unaff_s8 * unaff_s15
        ;
        fVar46 = fStack0000000000000170 *
                 (unaff_s10 / in_stack_000001a0) * in_stack_000001b0 * param_1;
        fStack0000000000000170 = fStack0000000000000170 / fVar46;
        fVar45 = fStack0000000000000170 * fVar45;
        fVar63 = (float)FUN_037769c0(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
        fStack0000000000000170 = fStack0000000000000170 * fVar63;
LAB_0378dad4:
        *in_stack_000001a8 = (long)unaff_x22;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  (in_stack_000001a8,unaff_x22);
        lVar29 = *in_stack_000001e8;
        if (lVar29 != 0) {
          if (*in_stack_000001d0 < *(uint *)(lVar29 + 0x18)) {
            lVar29 = lVar29 + (long)(int)*in_stack_000001d0 * unaff_x27;
            *(undefined1 *)(lVar29 + 0x28) = 2;
            *(float *)(lVar29 + 0x16c) = fVar46;
            *(long *)(lVar29 + 0x48) = *in_stack_00000160;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            lVar29 = *in_stack_000001e8;
            if (lVar29 != 0) {
              if (*in_stack_000001d0 < *(uint *)(lVar29 + 0x18)) {
                *(long *)(lVar29 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x40) = *unaff_x26;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                lVar29 = *in_stack_000001e8;
                if (lVar29 != 0) {
                  uVar14 = *in_stack_000001d0;
                  if (uVar14 < *(uint *)(lVar29 + 0x18)) {
                    *(undefined4 *)(lVar29 + (long)(int)uVar14 * unaff_x27 + 0x60) =
                         *(undefined4 *)(unaff_x19 + 0x78);
                    *(undefined4 *)(unaff_x19 + 0x78) = unaff_w25;
                    fVar63 = 0.0;
LAB_0378db90:
                    uVar18 = in_stack_00001688;
                    fVar71 = fVar46;
                    if (in_stack_0000169c == 3 || in_stack_0000169c == 0xad) {
                      fVar71 = 0.0;
                    }
LAB_0378dba8:
                    if (*(uint *)(lVar29 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
                    iVar13 = (int)unaff_x27;
                    lVar29 = lVar29 + (long)(int)uVar14 * (long)iVar13;
                    *(short *)(lVar29 + 0x20) = (short)in_stack_0000169c;
                    *(undefined4 *)(lVar29 + 0x68) = *(undefined4 *)(unaff_x19 + 0xf4);
                    *(undefined4 *)(lVar29 + 0x170) = *(undefined4 *)(unaff_x19 + 0x1ac);
                    lVar29 = *in_stack_000001e8;
                    if (lVar29 == 0) goto LAB_03793c9c;
                    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x324))
                    goto thunk_FUN_01ab6c44;
                    *(undefined4 *)
                     (lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x174) =
                         *(undefined4 *)(unaff_x19 + 0x1b0);
                    lVar29 = *in_stack_000001e8;
                    if (lVar29 == 0) goto LAB_03793c9c;
                    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x324))
                    goto thunk_FUN_01ab6c44;
                    *(undefined4 *)
                     (lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x17c) =
                         *(undefined4 *)(unaff_x19 + 0x1b4);
                    lVar29 = *in_stack_000001e8;
                    if (lVar29 == 0) goto LAB_03793c9c;
                    uVar66 = in_stack_00000100[1];
                    uVar24 = *in_stack_00000100;
                    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x324))
                    goto thunk_FUN_01ab6c44;
                    lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
                    *(undefined4 *)(lVar29 + 0x198) = *(undefined4 *)(in_stack_00000100 + 2);
                    *(undefined8 *)(lVar29 + 400) = uVar66;
                    *(undefined8 *)(lVar29 + 0x188) = uVar24;
                    lVar29 = *in_stack_000001e8;
                    if (lVar29 == 0) goto LAB_03793c9c;
                    if (*(uint *)(lVar29 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
                    lVar29 = lVar29 + (long)(int)*in_stack_000001d0 * unaff_x27;
                    lVar20 = *(long *)(lVar29 + 0x38);
                    *(undefined4 *)(lVar29 + 0x19c) = *(undefined4 *)(unaff_x19 + 0x124);
                    if ((lVar20 == 0) &&
                       ((*in_stack_000001a8 == 0 ||
                        (lVar20 = *(long *)(*in_stack_000001a8 + 0x20), lVar20 == 0))))
                    goto LAB_03793c9c;
                    FUN_03776e6c(&stack0x000016a0,lVar20,0);
                    if (in_stack_0000169c >> 0x10 == 0) {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar14 = FUN_026b63d8(in_stack_0000169c,0);
                      uVar14 = uVar14 & 1;
                    }
                    else {
                      uVar14 = 0;
                    }
                    uVar49 = 0;
                    fVar48 = *(float *)(unaff_x21 + 0xc0);
                    if (*(char *)(unaff_x21 + 0xb4) != '\0') {
                      if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
                      uVar15 = *in_stack_000001d0;
                      uVar32 = *(uint *)(*in_stack_000001a8 + 0x28);
                      if ((int)uVar15 < (int)uStack00000000000000dc) {
                        lVar29 = *in_stack_000001e8;
                        if (lVar29 == 0) goto LAB_03793c9c;
                        if (*(uint *)(lVar29 + 0x18) <= uVar15 + 1) goto thunk_FUN_01ab6c44;
                        lVar29 = *(long *)(lVar29 + (long)(int)(uVar15 + 1) * (long)iVar13 + 0x30);
                        if ((((lVar29 == 0) || (*unaff_x26 == 0)) ||
                            (lVar20 = *(long *)(*unaff_x26 + 0x170), lVar20 == 0)) ||
                           (lVar20 = *(long *)(lVar20 + 0x40), lVar20 == 0)) goto LAB_03793c9c;
                        uVar24 = CONCAT44((int)((ulong)uVar24 >> 0x20),
                                          uVar32 | *(int *)(lVar29 + 0x28) << 0x10);
                        uVar21 = FUN_0219f8b8(lVar20,&stack0x000016a0,&stack0x00001590,
                                              *(undefined8 *)
                                               Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                                             );
                        if ((uVar21 & 1) != 0) {
                          FUN_037791c8(&stack0x000016a0,&stack0x00001590,0);
                          uVar49 = UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent
                                             (&stack0x00001570,0);
                          uVar21 = FUN_037791f0(&stack0x00001590,0);
                          if ((uVar21 & 0x100) != 0) {
                            fVar48 = 0.0;
                          }
                        }
                        uVar15 = *in_stack_000001d0;
                      }
                      if (0 < (int)uVar15) {
                        lVar29 = *in_stack_000001e8;
                        if (lVar29 == 0) goto LAB_03793c9c;
                        if (*(uint *)(lVar29 + 0x18) <= uVar15 - 1) goto thunk_FUN_01ab6c44;
                        lVar29 = *(long *)(lVar29 + (ulong)(uVar15 - 1) * (unaff_x27 & 0xffffffff) +
                                          0x30);
                        if (((lVar29 == 0) || (*unaff_x26 == 0)) ||
                           ((lVar20 = *(long *)(*unaff_x26 + 0x170), lVar20 == 0 ||
                            (lVar20 = *(long *)(lVar20 + 0x40), lVar20 == 0)))) goto LAB_03793c9c;
                        uVar24 = CONCAT44((int)((ulong)uVar24 >> 0x20),
                                          *(uint *)(lVar29 + 0x28) | uVar32 << 0x10);
                        uVar21 = FUN_0219f8b8(lVar20,&stack0x000016a0,&stack0x00001590,
                                              *(undefined8 *)
                                               Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                                             );
                        if ((uVar21 & 1) != 0) {
                          FUN_037791dc(&stack0x000016a0,&stack0x00001590,0);
                          UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent
                                    (&stack0x00001570,0);
                          FUN_03778e8c(uVar49,0);
                          uVar21 = FUN_037791f0(&stack0x00001590,0);
                          if ((uVar21 & 0x100) != 0) {
                            fVar48 = 0.0;
                          }
                        }
                      }
                    }
                    lVar29 = *in_stack_000001e8;
                    if (lVar29 == 0) goto LAB_03793c9c;
                    uVar15 = *in_stack_000001d0;
                    uVar49 = FUN_03778e7c(&stack0x000015e0,0);
                    if (*(uint *)(lVar29 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
                    *(undefined4 *)(lVar29 + (long)(int)uVar15 * unaff_x27 + 0x160) = uVar49;
                    if (*(int *)(*(long *)
                                  Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                                + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar21 = FUN_037a5c04(in_stack_0000169c,0);
                    uVar15 = *in_stack_000001d0;
                    if ((uVar21 & 1) == 0) {
                      if ((uVar21 & 1) == 0 && 0 < (int)uVar15) {
                        uVar32 = *(uint *)(unaff_x19 + 0x19c4);
                        if ((uVar32 == 0x80000000) || (uVar32 != uVar15 - 1)) {
                          do {
                            uVar32 = uVar15 - 1;
                            uVar49 = (undefined4)((ulong)uVar24 >> 0x20);
                            if (((int)uVar15 < 1) || (uVar32 == *(uint *)(unaff_x19 + 0x19c4))) {
                              uVar15 = *(uint *)(unaff_x19 + 0x19c4);
                              if (uVar15 == 0x80000000) goto LAB_0378dfc4;
                              lVar29 = *in_stack_000001e8;
                              if (lVar29 == 0) goto LAB_03793c9c;
                              if (*(uint *)(lVar29 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
                              lVar29 = *(long *)(lVar29 + (long)(int)uVar15 * unaff_x27 + 0x30);
                              if ((lVar29 == 0) || (lVar29 = FUN_03787a68(lVar29,0), lVar29 == 0))
                              goto LAB_03793c9c;
                              uVar15 = FUN_03776e5c(lVar29,0);
                              if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
                              iVar17 = FUN_0377acf0(*in_stack_000001a8,0);
                              if (((*unaff_x26 == 0) ||
                                  (lVar29 = FUN_03779cb4(*unaff_x26,0), lVar29 == 0)) ||
                                 (*(long *)(lVar29 + 0x48) == 0)) goto LAB_03793c9c;
                              uVar24 = CONCAT44(uVar49,uVar15 | iVar17 << 0x10);
                              uVar22 = FUN_0219f8b8(*(long *)(lVar29 + 0x48),&stack0x000016a0,
                                                    &stack0x00001518,
                                                    *(undefined8 *)
                                                                                                          
                                                  Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__
                                                  );
                              if ((uVar22 & 1) == 0) goto LAB_0378dfc4;
                              lVar29 = *in_stack_000001e8;
                              if (lVar29 == 0) goto LAB_03793c9c;
                              if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4))
                              goto thunk_FUN_01ab6c44;
                              fVar48 = *(float *)(lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x19c4)
                                                           * unaff_x27 + 0x148);
                              fVar52 = *(float *)(unaff_x19 + 0x2f4);
                              FUN_037793b0(&stack0x00001518,0);
                              fVar50 = (float)FUN_03779388(&stack0x00001550,0);
                              FUN_037793c0(&stack0x00001518,0);
                              fVar51 = (float)FUN_03779398(&stack0x00001548,0);
                              FUN_03778e64(((fVar48 - fVar52) / fVar71 + fVar50) - fVar51,
                                           &stack0x000015e0,0);
                              FUN_037793b0(&stack0x00001518,0);
                              fVar48 = (float)FUN_03779390(&stack0x00001550,0);
                              puVar23 = &stack0x00001518;
                              goto LAB_0378f5a8;
                            }
                            lVar29 = *in_stack_000001e8;
                            if (lVar29 == 0) goto LAB_03793c9c;
                            if (*(uint *)(lVar29 + 0x18) <= uVar32) goto thunk_FUN_01ab6c44;
                            lVar29 = *(long *)(lVar29 + (ulong)uVar32 * (unaff_x27 & 0xffffffff) +
                                              0x30);
                            if ((lVar29 == 0) || (lVar29 = FUN_03787a68(lVar29,0), lVar29 == 0))
                            goto LAB_03793c9c;
                            uVar15 = FUN_03776e5c(lVar29,0);
                            if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
                            iVar17 = FUN_0377acf0(*in_stack_000001a8,0);
                            if (((*unaff_x26 == 0) ||
                                (lVar29 = FUN_03779cb4(*unaff_x26,0), lVar29 == 0)) ||
                               (*(long *)(lVar29 + 0x50) == 0)) goto LAB_03793c9c;
                            uVar24 = CONCAT44(uVar49,uVar15 | iVar17 << 0x10);
                            uVar22 = FUN_0219f8b8(*(long *)(lVar29 + 0x50),&stack0x000016a0,
                                                  &stack0x00001530,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_System_Collections_Generic_Dictionary<int,_Task>__ctor__
                                                 );
                            uVar15 = uVar32;
                          } while ((uVar22 & 1) == 0);
                          lVar29 = *in_stack_000001e8;
                          if (lVar29 == 0) goto LAB_03793c9c;
                          if (*(uint *)(lVar29 + 0x18) <= uVar32) goto thunk_FUN_01ab6c44;
                          fVar52 = *(float *)(unaff_x19 + 0x2e0);
                          fVar64 = *(float *)(unaff_x19 + 0x180);
                          lVar29 = lVar29 + uVar32 * unaff_x27;
                          fVar48 = *(float *)(unaff_x19 + 0x2f4);
                          fVar53 = *(float *)(lVar29 + 0x148);
                          fVar54 = *(float *)(lVar29 + 0x150);
                          FUN_037793d0(&stack0x00001530,0);
                          fVar50 = (float)FUN_03779388(&stack0x00001550,0);
                          FUN_037793e0(&stack0x00001530,0);
                          fVar51 = (float)FUN_03779398(&stack0x00001548,0);
                          FUN_03778e64(((fVar53 - fVar48) / fVar71 + fVar50) - fVar51,
                                       &stack0x000015e0,0);
                          FUN_037793d0(&stack0x00001530,0);
                          fVar48 = (float)FUN_03779390(&stack0x00001550,0);
                          FUN_037793e0(&stack0x00001530,0);
                          fVar50 = (float)FUN_037793a0(&stack0x00001548,0);
                          FUN_03778e74(((fVar54 - ((fVar47 - fVar52) + fVar64)) / fVar71 + fVar48) -
                                       fVar50,&stack0x000015e0,0);
                          fVar48 = 0.0;
                        }
                        else {
                          lVar29 = *in_stack_000001e8;
                          if (lVar29 == 0) goto LAB_03793c9c;
                          if (*(uint *)(lVar29 + 0x18) <= uVar32) goto thunk_FUN_01ab6c44;
                          lVar29 = *(long *)(lVar29 + (long)(int)uVar32 * unaff_x27 + 0x30);
                          if ((lVar29 == 0) || (lVar29 = FUN_03787a68(lVar29,0), lVar29 == 0))
                          goto LAB_03793c9c;
                          uVar15 = FUN_03776e5c(lVar29,0);
                          if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
                          iVar17 = FUN_0377acf0(*in_stack_000001a8,0);
                          if (((*unaff_x26 == 0) ||
                              (lVar29 = FUN_03779cb4(*unaff_x26,0), lVar29 == 0)) ||
                             (*(long *)(lVar29 + 0x48) == 0)) goto LAB_03793c9c;
                          uVar24 = CONCAT44((int)((ulong)uVar24 >> 0x20),uVar15 | iVar17 << 0x10);
                          uVar22 = FUN_0219f8b8(*(long *)(lVar29 + 0x48),&stack0x000016a0,
                                                &stack0x00001558,
                                                *(undefined8 *)
                                                 Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__
                                               );
                          if ((uVar22 & 1) != 0) {
                            lVar29 = *in_stack_000001e8;
                            if (lVar29 == 0) goto LAB_03793c9c;
                            if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4))
                            goto thunk_FUN_01ab6c44;
                            fVar48 = *(float *)(lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) *
                                                         unaff_x27 + 0x148);
                            fVar52 = *(float *)(unaff_x19 + 0x2f4);
                            FUN_037793b0(&stack0x00001558,0);
                            fVar50 = (float)FUN_03779388(&stack0x00001550,0);
                            FUN_037793c0(&stack0x00001558,0);
                            fVar51 = (float)FUN_03779398(&stack0x00001548,0);
                            FUN_03778e64(((fVar48 - fVar52) / fVar71 + fVar50) - fVar51,
                                         &stack0x000015e0,0);
                            FUN_037793b0(&stack0x00001558,0);
                            fVar48 = (float)FUN_03779390(&stack0x00001550,0);
                            puVar23 = &stack0x00001558;
LAB_0378f5a8:
                            FUN_037793c0(puVar23,0);
                            fVar50 = (float)FUN_037793a0(&stack0x00001548,0);
                            FUN_03778e74(fVar48 - fVar50,&stack0x000015e0,0);
                            fVar48 = 0.0;
                          }
                        }
                      }
                    }
                    else {
                      *(uint *)(unaff_x19 + 0x19c4) = uVar15;
                    }
LAB_0378dfc4:
                    fVar50 = (float)FUN_03778e6c(&stack0x000015e0,0);
                    fVar51 = (float)FUN_03778e6c(&stack0x000015e0,0);
                    if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
                      fVar64 = *(float *)(unaff_x19 + 0x2f4);
                      fVar52 = (float)FUN_03776cb4(&stack0x000015f0,0);
                      fVar64 = fVar64 - fVar71 * fVar52 * (1.0 - *(float *)(unaff_x19 + 0x1594));
                      *(float *)(unaff_x19 + 0x2f4) = fVar64;
                      if ((uVar14 != 0) || (in_stack_0000169c == 0x200b)) {
                        *(float *)(unaff_x19 + 0x2f4) =
                             fVar64 - in_stack_00000158 * *(float *)(in_stack_000001e0 + 0xc4);
                      }
                    }
                    fVar52 = *(float *)(unaff_x19 + 0x2f0);
                    if (fVar52 == 0.0) {
                      fVar52 = 0.0;
                    }
                    else {
                      fVar64 = (float)FUN_03776c94(&stack0x000015f0,0);
                      fVar53 = (float)FUN_03776ca4(&stack0x000015f0,0);
                      fVar52 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                               (fVar52 * 0.5 - fVar71 * (fVar64 * 0.5 + fVar53));
                      *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2f4) + fVar52;
                    }
                    uVar15 = 0;
                    if ((unaff_w20 == 0) && (*unaff_x24 == '\x01')) {
                      uVar15 = *(uint *)(unaff_x19 + 0x124) & 1;
                    }
                    lVar29 = *in_stack_00000190;
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar22 = FUN_036cee6c(lVar29,0,0);
                    puVar6 = Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__;
                    if (uVar15 == 0) {
                      fVar64 = 0.0;
                      if ((uVar22 & 1) != 0) {
                        lVar29 = *in_stack_00000190;
                        if (*(int *)(*(long *)
                                      Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__
                                    + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        if (lVar29 == 0) goto LAB_03793c9c;
                        uVar22 = FUN_03699d3c(lVar29,*(undefined4 *)
                                                      (*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
                        if ((uVar22 & 1) != 0) {
                          lVar29 = *in_stack_00000190;
                          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          if (lVar29 == 0) goto LAB_03793c9c;
                          uVar22 = FUN_03699d3c(lVar29,*(undefined4 *)
                                                        (*(long *)(*(long *)puVar6 + 0xb8) + 0xe4),0
                                               );
                          if ((uVar22 & 1) != 0) {
                            lVar29 = *in_stack_00000190;
                            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            if (lVar29 != 0) {
                              fVar53 = (float)FUN_0369e060(lVar29,*(undefined4 *)
                                                                   (*(long *)(*(long *)puVar6 + 0xb8
                                                                             ) + 0x6c),0);
                              plVar19 = (long *)PTR_DAT_03cbe438;
                              if ((*unaff_x26 != 0) && (*in_stack_00000190 != 0)) {
                                fVar55 = *(float *)(*unaff_x26 + 0x188);
                                fVar54 = (float)FUN_0369e060(*in_stack_00000190,
                                                             *(undefined4 *)
                                                              (*(long *)(*(long *)puVar6 + 0xb8) +
                                                              0xe4),0);
                                fVar54 = fVar54 * fVar53 * fVar55 * 0.25;
                                if (fVar53 < fVar63 + fVar54) {
                                  fVar63 = fVar53 - fVar54;
                                }
                                goto LAB_0378e344;
                              }
                            }
                            goto LAB_03793c9c;
                          }
                        }
                      }
                      fVar54 = 0.0;
                      plVar19 = (long *)PTR_DAT_03cbe438;
                    }
                    else {
                      fVar54 = 0.0;
                      plVar19 = (long *)PTR_DAT_03cbe438;
                      if ((uVar22 & 1) != 0) {
                        lVar29 = *in_stack_00000190;
                        if (*(int *)(*(long *)
                                      Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__
                                    + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        if (lVar29 == 0) goto LAB_03793c9c;
                        uVar22 = FUN_03699d3c(lVar29,*(undefined4 *)
                                                      (*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
                        plVar19 = (long *)PTR_DAT_03cbe438;
                        if ((uVar22 & 1) != 0) {
                          lVar29 = *in_stack_00000190;
                          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          if (lVar29 == 0) goto LAB_03793c9c;
                          fVar64 = (float)FUN_0369e060(lVar29,*(undefined4 *)
                                                               (*(long *)(*(long *)puVar6 + 0xb8) +
                                                               0x6c),0);
                          if (*unaff_x26 == 0) goto LAB_03793c9c;
                          fVar53 = (float)FUN_03779d1c(*unaff_x26,0);
                          plVar19 = (long *)PTR_DAT_03cbe438;
                          if (*in_stack_00000190 == 0) goto LAB_03793c9c;
                          fVar54 = (float)FUN_0369e060(*in_stack_00000190,
                                                       *(undefined4 *)
                                                        (*(long *)(*(long *)puVar6 + 0xb8) + 0xe4),0
                                                      );
                          fVar54 = fVar64 * fVar53 * 0.25 * fVar54;
                          if (fVar64 < fVar63 + fVar54) {
                            fVar63 = fVar64 - fVar54;
                          }
                        }
                      }
                      if (*unaff_x26 == 0) goto LAB_03793c9c;
                      fVar64 = (float)FUN_03779d2c(*unaff_x26,0);
                    }
LAB_0378e344:
                    fVar67 = *(float *)(unaff_x19 + 0x2f4);
                    fVar53 = (float)FUN_03776ca4(&stack0x000015f0,0);
                    fVar70 = *(float *)(unaff_x19 + 0x19a8);
                    fVar55 = (float)FUN_03778e5c(&stack0x000015e0,0);
                    fVar67 = fVar67 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                      fVar71 * (fVar55 + ((fVar53 * fVar70 - fVar63) - fVar54));
                    fVar53 = (float)FUN_03776cac(&stack0x000015f0,0);
                    fVar55 = (float)FUN_03778e6c(&stack0x000015e0,0);
                    in_stack_000001b8._4_4_ =
                         *(float *)(unaff_x19 + 0x180) +
                         ((fVar47 + fVar71 * (fVar63 + fVar53 + fVar55)) -
                         *(float *)(unaff_x19 + 0x2e0));
                    fVar53 = (float)FUN_03776c9c(&stack0x000015f0,0);
                    fVar70 = in_stack_000001b8._4_4_ - fVar71 * (fVar63 + fVar63 + fVar53);
                    fVar53 = (float)FUN_03776c94(&stack0x000015f0,0);
                    fVar61 = fVar67 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                      fVar71 * (fVar54 + fVar54 +
                                               fVar63 + fVar63 +
                                               fVar53 * *(float *)(unaff_x19 + 0x19a8));
                    fVar53 = fVar67;
                    fVar55 = fVar61;
                    if (((unaff_w20 == 0) && (*unaff_x24 == '\x01')) &&
                       ((*(byte *)(unaff_x19 + 0x124) >> 1 & 1) != 0)) {
                      if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
                      iVar17 = *(int *)(unaff_x19 + 0x19a4);
                      fVar53 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
                      if (*unaff_x26 == 0) goto LAB_03793c9c;
                      fVar55 = (float)FUN_037769b0(*unaff_x26 + 0xb0,0);
                      if (*unaff_x26 == 0) goto LAB_03793c9c;
                      fVar74 = *(float *)(unaff_x19 + 0xf0);
                      fVar57 = *(float *)(unaff_x19 + 0x180);
                      fVar68 = (float)iVar17 * fStack00000000000000a8;
                      fVar56 = (float)FUN_03776960(*unaff_x26 + 0xb0,0);
                      fVar56 = fVar56 * fVar74 * (fVar53 - (fVar55 + fVar57)) * 0.5;
                      fVar53 = (float)FUN_03776cac(&stack0x000015f0,0);
                      fVar55 = fVar68 * fVar71 * ((fVar54 + fVar63 + fVar53) - fVar56);
                      fVar74 = (float)FUN_03776cac(&stack0x000015f0,0);
                      fVar57 = (float)FUN_03776c9c(&stack0x000015f0,0);
                      in_stack_000001b8._4_4_ = in_stack_000001b8._4_4_ + 0.0;
                      fVar53 = fVar67 + fVar55;
                      fVar70 = fVar70 + 0.0;
                      fVar55 = fVar61 + fVar55;
                      fVar68 = fVar68 * fVar71 * ((((fVar74 - fVar57) - fVar63) - fVar54) - fVar56);
                      fVar67 = fVar67 + fVar68;
                      fVar61 = fVar61 + fVar68;
                    }
                    uVar66 = *in_stack_000000f8;
                    uVar69 = *_fStack00000000000000f0;
                    if (DAT_0411f169 == '\0') {
                      FUN_01ab69ac(PTR_DAT_03cbdeb8);
                      DAT_0411f169 = '\x01';
                    }
                    uVar58 = **(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8);
                    uVar59 = (*(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8))[1];
                    fVar54 = 0.0;
                    if (DAT_00d38b04 <
                        (float)((ulong)uVar69 >> 0x20) * (float)((ulong)uVar59 >> 0x20) +
                        (float)uVar69 * (float)uVar59 +
                        (float)uVar66 * (float)uVar58 +
                        (float)((ulong)uVar66 >> 0x20) * (float)((ulong)uVar58 >> 0x20)) {
                      fVar65 = 0.0;
                      fVar68 = 0.0;
                      fVar57 = 0.0;
                      fVar56 = in_stack_000001b8._4_4_;
                      fVar74 = fVar70;
                    }
                    else {
                      FUN_036be00c(&stack0x000016a0,*(undefined4 *)(unaff_x19 + 0x19b4),
                                   *(undefined4 *)(unaff_x19 + 0x19b8),
                                   *(undefined4 *)(unaff_x19 + 0x19bc),
                                   *(undefined4 *)(unaff_x19 + 0x19c0),0);
                      fVar72 = (fVar55 + fVar67) * 0.5;
                      fVar73 = (fVar70 + in_stack_000001b8._4_4_) * 0.5;
                      in_stack_000001b8._4_4_ = in_stack_000001b8._4_4_ - fVar73;
                      fVar57 = 0.0;
                      fVar56 = in_stack_000001b8._4_4_;
                      fVar53 = (float)FUN_036bdd2c(fVar53 - fVar72,&stack0x000014d0,0);
                      fVar53 = fVar72 + fVar53;
                      fVar57 = fVar57 + 0.0;
                      fVar74 = fVar70 - fVar73;
                      fVar68 = 0.0;
                      fVar70 = fVar74;
                      fVar67 = (float)FUN_036bdd2c(fVar67 - fVar72,&stack0x000014d0,0);
                      fVar67 = fVar72 + fVar67;
                      fVar70 = fVar73 + fVar70;
                      fVar68 = fVar68 + 0.0;
                      fVar65 = 0.0;
                      fVar55 = (float)FUN_036bdd2c(fVar55 - fVar72,&stack0x000014d0,0);
                      fVar55 = fVar72 + fVar55;
                      in_stack_000001b8._4_4_ = fVar73 + in_stack_000001b8._4_4_;
                      fVar65 = fVar65 + 0.0;
                      fVar54 = 0.0;
                      fVar61 = (float)FUN_036bdd2c(fVar61 - fVar72,&stack0x000014d0,0);
                      fVar61 = fVar72 + fVar61;
                      fVar54 = fVar54 + 0.0;
                      fVar56 = fVar73 + fVar56;
                      fVar74 = fVar73 + fVar74;
                    }
                    lVar29 = *in_stack_000001e8;
                    if (lVar29 == 0) goto LAB_03793c9c;
                    if (*(uint *)(lVar29 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
                    lVar29 = lVar29 + (long)(int)*in_stack_000001d0 * unaff_x27;
                    *(float *)(lVar29 + 0x124) = fVar67;
                    *(float *)(lVar29 + 0x128) = fVar70;
                    *(float *)(lVar29 + 300) = fVar68;
                    lVar29 = *in_stack_000001e8;
                    if (lVar29 == 0) goto LAB_03793c9c;
                    if (*(uint *)(lVar29 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
                    lVar29 = lVar29 + (long)(int)*in_stack_000001d0 * unaff_x27;
                    *(float *)(lVar29 + 0x118) = fVar53;
                    *(float *)(lVar29 + 0x11c) = fVar56;
                    *(float *)(lVar29 + 0x120) = fVar57;
                    lVar29 = *in_stack_000001e8;
                    if (lVar29 == 0) goto LAB_03793c9c;
                    if (*(uint *)(lVar29 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
                    lVar29 = lVar29 + (long)(int)*in_stack_000001d0 * unaff_x27;
                    *(float *)(lVar29 + 0x138) = fVar65;
                    *(float *)(lVar29 + 0x130) = fVar55;
                    *(float *)(lVar29 + 0x134) = in_stack_000001b8._4_4_;
                    lVar29 = *in_stack_000001e8;
                    if (lVar29 == 0) goto LAB_03793c9c;
                    if (*(uint *)(lVar29 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
                    lVar29 = lVar29 + (long)(int)*in_stack_000001d0 * unaff_x27;
                    *(float *)(lVar29 + 0x13c) = fVar61;
                    *(float *)(lVar29 + 0x140) = fVar74;
                    *(float *)(lVar29 + 0x144) = fVar54;
                    lVar29 = *in_stack_000001e8;
                    if (lVar29 == 0) goto LAB_03793c9c;
                    uVar15 = *in_stack_000001d0;
                    fVar54 = *(float *)(unaff_x19 + 0x2f4);
                    fVar53 = (float)FUN_03778e5c(&stack0x000015e0,0);
                    if (*(uint *)(lVar29 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
                    *(float *)(lVar29 + (long)(int)uVar15 * unaff_x27 + 0x148) =
                         fVar54 + fVar71 * fVar53;
                    lVar29 = *in_stack_000001e8;
                    if (lVar29 == 0) goto LAB_03793c9c;
                    uVar15 = *in_stack_000001d0;
                    fVar61 = *(float *)(unaff_x19 + 0x2e0);
                    fVar54 = *(float *)(unaff_x19 + 0x180);
                    fVar53 = (float)FUN_03778e6c(&stack0x000015e0,0);
                    if (*(uint *)(lVar29 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
                    *(float *)(lVar29 + (long)(int)uVar15 * unaff_x27 + 0x150) =
                         (fVar47 - fVar61) + fVar54 + fVar71 * fVar53;
                    lVar29 = *in_stack_000001e8;
                    if (lVar29 == 0) goto LAB_03793c9c;
                    uVar15 = *in_stack_000001d0;
                    lVar20 = (long)(int)uVar15;
                    if (*(uint *)(lVar29 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
                    *(float *)(lVar29 + lVar20 * unaff_x27 + 0x168) =
                         (fVar55 - fVar67) / (fVar56 - fVar70);
                    fVar45 = fVar71 * (fVar45 + fVar50);
                    if (*unaff_x24 == '\x01') {
                      fVar45 = fVar45 / fStack000000000000017c;
                      fVar47 = (fVar71 * (fStack0000000000000170 + fVar51)) / fStack000000000000017c
                      ;
                    }
                    else {
                      fVar47 = fVar71 * (fStack0000000000000170 + fVar51);
                    }
                    uVar32 = *(uint *)(unaff_x19 + 0x328);
                    fVar50 = *(float *)(unaff_x19 + 0x180);
                    bVar8 = uVar15 == uVar32;
                    bVar9 = uVar14 == 0;
                    fVar45 = fVar50 + fVar45;
                    if (bVar9 || bVar8) {
                      fVar47 = fVar50 + fVar47;
                      fVar51 = fVar45;
                      fVar53 = fVar47;
                      if (fVar50 != 0.0) {
                        fVar51 = (fVar45 - fVar50) / *(float *)(unaff_x19 + 0xf0);
                        fVar53 = (fVar47 - fVar50) / *(float *)(unaff_x19 + 0xf0);
                        if (fVar51 <= fVar45) {
                          fVar51 = fVar45;
                        }
                        if (fVar47 <= fVar53) {
                          fVar53 = fVar47;
                        }
                      }
                      lVar34 = lVar29 + lVar20 * unaff_x27;
                      fVar50 = fVar51;
                      if (fVar51 <= *(float *)(unaff_x19 + 0x338)) {
                        fVar50 = *(float *)(unaff_x19 + 0x338);
                      }
                      fVar54 = fVar53;
                      if (*(float *)(unaff_x19 + 0x33c) <= fVar53) {
                        fVar54 = *(float *)(unaff_x19 + 0x33c);
                      }
                      *(float *)(unaff_x19 + 0x338) = fVar50;
                      *(float *)(unaff_x19 + 0x33c) = fVar54;
                      *(float *)(lVar34 + 0x158) = fVar51;
                      *(float *)(lVar34 + 0x15c) = fVar53;
                      fVar51 = *(float *)(unaff_x19 + 0x2e0);
                      fVar53 = fVar45 - fVar51;
                    }
                    else {
                      fVar50 = *(float *)(unaff_x19 + 0x338);
                      lVar34 = lVar29 + lVar20 * unaff_x27;
                      *(float *)(lVar34 + 0x158) = fVar50;
                      fVar47 = *(float *)(unaff_x19 + 0x33c);
                      *(float *)(lVar34 + 0x15c) = fVar47;
                      fVar51 = *(float *)(unaff_x19 + 0x2e0);
                      fVar53 = fVar50 - fVar51;
                    }
                    *(float *)(lVar34 + 0x14c) = fVar53;
                    *(float *)(lVar29 + lVar20 * unaff_x27 + 0x154) = fVar47 - fVar51;
                    *(float *)(unaff_x19 + 0x378) = fVar47 - fVar51;
                    if ((*(int *)(unaff_x19 + 0x340) == 0) || (*(char *)(unaff_x19 + 0x37c) != '\0')
                       ) {
                      if (bVar9 || bVar8) {
                        *(float *)(unaff_x19 + 0x374) = fVar50;
                        if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
                        fVar47 = *(float *)(unaff_x19 + 0x370);
                        fVar50 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
                        fVar51 = *(float *)(unaff_x19 + 0x2e0);
                        fStack000000000000017c = (fVar71 * fVar50) / fStack000000000000017c;
                        if (fVar47 <= fStack000000000000017c) {
                          fVar47 = fStack000000000000017c;
                        }
                        *(float *)(unaff_x19 + 0x370) = fVar47;
                        if (fVar51 == 0.0) goto LAB_0378ee0c;
                      }
                    }
                    else if ((bVar9 || bVar8) && fVar51 == 0.0) {
LAB_0378ee0c:
                      fVar47 = *(float *)(unaff_x19 + 0x19c8);
                      if (*(float *)(unaff_x19 + 0x19c8) <= fVar45) {
                        fVar47 = fVar45;
                      }
                      *(float *)(unaff_x19 + 0x19c8) = fVar47;
                    }
                    lVar29 = *in_stack_000001e8;
                    if (lVar29 == 0) goto LAB_03793c9c;
                    uVar43 = *in_stack_000001d0;
                    if (*(uint *)(lVar29 + 0x18) <= uVar43) goto thunk_FUN_01ab6c44;
                    lVar29 = lVar29 + (long)(int)uVar43 * unaff_x27;
                    *(undefined1 *)(lVar29 + 0x1a0) = 0;
                    uVar39 = *(uint *)(unaff_x19 + 0x158) & 0x18;
                    if ((in_stack_0000169c == 9) ||
                       ((((uVar14 == 0 && (in_stack_0000169c != 3)) &&
                         ((in_stack_0000169c != 0x200b && (in_stack_0000169c != 0xad)))) ||
                        (((in_stack_0000169c == 0xad & (in_stack_000000b8 ^ 0xff)) != 0 ||
                         (*unaff_x24 == '\x02')))))) {
                      *(undefined1 *)(lVar29 + 0x1a0) = 1;
                      pfVar30 = _fStack0000000000000130;
                      pfVar38 = _iStack0000000000000138;
                      if (unaff_w23 != 0) {
                        lVar29 = *(long *)(in_stack_000001c0 + 0x48);
                        if (lVar29 == 0) goto LAB_03793c9c;
                        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x340))
                        goto thunk_FUN_01ab6c44;
                        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                        pfVar38 = (float *)(lVar29 + 100);
                        pfVar30 = (float *)(lVar29 + 0x68);
                      }
                      fVar50 = *pfVar38;
                      fVar47 = *pfVar30;
                      fVar45 = *(float *)(unaff_x19 + 0x35c);
                      fVar53 = *(float *)(unaff_x19 + 0x2f4);
                      fStack0000000000000174 = (fStack000000000000012c - fVar50) - fVar47;
                      bVar8 = true;
                      if ((fVar45 <= fStack0000000000000174) && (bVar8 = false, !NAN(fVar45))) {
                        bVar8 = fVar45 == -1.0;
                      }
                      if (!bVar8) {
                        fStack0000000000000174 = fVar45;
                      }
                      fVar45 = 0.0;
                      fVar54 = 0.0;
                      if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
                        fVar54 = (float)FUN_03776cb4(&stack0x000015f0,0);
                        fVar51 = *(float *)(unaff_x19 + 0x2e0);
                      }
                      fVar55 = *(float *)(unaff_x19 + 0x1594);
                      fVar70 = *(float *)(unaff_x19 + 0x33c);
                      if (in_stack_0000169c != 0xad) {
                        fVar46 = fVar71;
                      }
                      if ((0.0 < fVar51) && (fVar45 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
                        fVar45 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
                      }
                      uVar43 = *in_stack_000001d0;
                      fVar45 = (*(float *)(unaff_x19 + 0x374) - (fVar70 - fVar51)) + fVar45;
                      if (fVar45 <= in_stack_00000108) goto switchD_0378f0dc_caseD_2;
                      if (*(int *)(unaff_x19 + 0x34c) == -1) {
                        *(uint *)(unaff_x19 + 0x34c) = uVar43;
                      }
                      in_stack_00001688 = DAT_00d37868;
                      if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
                        fVar67 = *(float *)(in_stack_000001e0 + 0xd0);
                        if (((*(float *)(unaff_x19 + 0x15b0) <= fVar67) || (fVar51 <= 0.0)) ||
                           (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
                          fVar51 = *_fStack00000000000000d0;
                          fVar45 = *(float *)(in_stack_000001e0 + 0xac);
                          if ((fVar51 <= fVar45) ||
                             (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)))
                          goto LAB_0378f0b8;
                          fVar46 = (fVar51 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
                          if (fVar46 <= DAT_00d38b84) {
                            fVar46 = DAT_00d38b84;
                          }
                          fVar47 = (fVar51 - fVar46) * 20.0 + 0.5;
                          fVar46 = DAT_00d38e60;
                          if (fVar47 != INFINITY) {
                            fVar46 = (float)(int)fVar47 / 20.0;
                          }
                          if (fVar46 <= fVar45) {
                            fVar46 = fVar45;
                          }
                          *(float *)(unaff_x19 + 0x1598) = fVar51;
LAB_037910ac:
                          *(float *)(unaff_x19 + 0xec) = fVar46;
                        }
                        else {
                          fVar45 = *(float *)(unaff_x19 + 0x15b0) +
                                   ((in_stack_00000018._4_4_ - fVar45) /
                                   (float)*(int *)(unaff_x19 + 0x340)) / fStack0000000000000088;
                          if (fVar45 <= fVar67) {
                            fVar45 = fVar67;
                          }
LAB_03793b50:
                          *(float *)(unaff_x19 + 0x15b0) = fVar45;
                        }
                        goto LAB_0378c81c;
                      }
LAB_0378f0b8:
                      switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
                      case 1:
                        if (*(int *)(unaff_x19 + 0x340) < 1) goto switchD_0378f0dc_caseD_2;
                        iVar17 = FUN_020aa428(in_stack_00000078,
                                              *(undefined8 *)
                                               Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                                             );
                        in_stack_00001688 = DAT_00d37868;
                        if (iVar17 == 0) {
                          in_stack_000001d0[0] = 0;
                          in_stack_000001d0[1] = 0;
                          in_stack_0000160c = 0xffffffff;
                        }
                        else {
                          FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__
                                      );
                          memcpy(&stack0x00001138,&stack0x000016a0,0x398);
                          iVar16 = FUN_03797154();
                          iVar17 = *(int *)(unaff_x19 + 0x324) + -1;
                          *(int *)(unaff_x19 + 0x324) = iVar17;
                          in_stack_00001688 = CONCAT44(0x2026,iVar17);
                          in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
                          in_stack_0000160c = iVar16 - 1;
                        }
                        break;
                      default:
switchD_0378f0dc_caseD_2:
                        if ((uVar21 & 1) == 0) {
LAB_0378f1e0:
                          if (uVar14 == 0) {
                            if (in_stack_0000169c != 0xad) {
                              if (*unaff_x24 == '\x02') {
                                FUN_0379c8ac();
                              }
                              else if (*unaff_x24 == '\x01') {
                                FUN_0379bd40(fVar63);
                              }
                              uVar43 = *in_stack_000001d0;
                              if ((uStack00000000000000ac & 1) != 0) {
                                *(uint *)(unaff_x19 + 0x330) = uVar43;
                              }
                              *(uint *)(unaff_x19 + 0x334) = uVar43;
                              *(int *)(unaff_x19 + 0x344) = *(int *)(unaff_x19 + 0x344) + 1;
                              lVar29 = *(long *)(in_stack_000001c0 + 0x48);
                              if (lVar29 != 0) {
                                if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar29 + 0x18)) {
                                  lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                                  uStack00000000000000ac = 0;
                                  *(float *)(lVar29 + 100) = fVar50;
                                  *(float *)(lVar29 + 0x68) = fVar47;
                                  goto LAB_0378f884;
                                }
                                goto thunk_FUN_01ab6c44;
                              }
                              goto LAB_03793c9c;
                            }
                            lVar29 = *in_stack_000001e8;
                            if (lVar29 == 0) goto LAB_03793c9c;
                            if (*(uint *)(lVar29 + 0x18) <= uVar43) goto thunk_FUN_01ab6c44;
                            *(undefined1 *)(lVar29 + (long)(int)uVar43 * (long)iVar13 + 0x1a0) = 0;
                          }
                          else {
                            lVar29 = *in_stack_000001e8;
                            if (lVar29 == 0) goto LAB_03793c9c;
                            if (*(uint *)(lVar29 + 0x18) <= uVar43) goto thunk_FUN_01ab6c44;
                            *(undefined1 *)(lVar29 + (long)(int)uVar43 * (long)iVar13 + 0x1a0) = 0;
                            *(uint *)(unaff_x19 + 0x334) = uVar43;
                            lVar29 = *(long *)(in_stack_000001c0 + 0x48);
                            if (lVar29 == 0) goto LAB_03793c9c;
                            uVar43 = *(uint *)(lVar29 + 0x18);
                            if (uVar43 <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
                            lVar20 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                            iVar17 = *(int *)(lVar20 + 0x2c) + 1;
                            *(int *)(lVar20 + 0x2c) = iVar17;
                            *(int *)(unaff_x19 + 0x348) = iVar17;
                            if (uVar43 <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
                            lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                            *(float *)(lVar29 + 100) = fVar50;
                            *(float *)(lVar29 + 0x68) = fVar47;
                            *(int *)(in_stack_000001c0 + 0x18) =
                                 *(int *)(in_stack_000001c0 + 0x18) + 1;
                          }
                          goto LAB_0378f884;
                        }
                        fVar46 = ABS(fVar53) + fVar54 * (1.0 - fVar55) * fVar46;
                        fVar45 = 1.0;
                        if (uVar39 != 0) {
                          fVar45 = DAT_00d38acc;
                        }
                        if (fVar46 <= fVar45 * fStack0000000000000174) goto LAB_0378f1e0;
                        if ((iStack000000000000008c == 0) ||
                           (uVar43 == *(uint *)(unaff_x19 + 0x328))) {
                          if ((*(char *)(in_stack_000001e0 + 0xa8) == '\0') ||
                             (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
LAB_0378f2f0:
                            iVar17 = *(int *)(in_stack_000001e0 + 0x74);
                            if (iVar17 == 1) {
                              iVar17 = FUN_020aa428(in_stack_00000078,
                                                    *(undefined8 *)
                                                                                                          
                                                  Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                                                  );
                              in_stack_00001688 = DAT_00d37868;
                              if (iVar17 == 0) {
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
                                iVar17 = *(int *)(unaff_x19 + 0x324) + -1;
                                *(int *)(unaff_x19 + 0x324) = iVar17;
                                in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
                                in_stack_0000160c = iVar16 - 1;
                                in_stack_00001688 = CONCAT44(0x2026,iVar17);
                              }
                              break;
                            }
                            if (iVar17 == 6) {
                              in_stack_0000160c = FUN_03797154();
                              uVar43 = *(uint *)(unaff_x19 + 0x324);
                            }
                            else {
                              if (iVar17 != 3) goto LAB_0378f1e0;
                              in_stack_0000160c = FUN_03797154();
                            }
                            goto LAB_037909d0;
                          }
                          fVar51 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
                          if (fVar51 <= fVar55) {
                            fVar51 = *(float *)(in_stack_000001e0 + 0xac);
                            fVar53 = *_fStack00000000000000d0;
                            if (fVar53 <= fVar51) goto LAB_0378f2f0;
LAB_03793bbc:
                            fVar45 = (fVar53 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
                            if (fVar45 <= DAT_00d38b84) {
                              fVar45 = DAT_00d38b84;
                            }
                            *(float *)(unaff_x19 + 0x1598) = fVar53;
                            fVar45 = (fVar53 - fVar45) * 20.0 + 0.5;
                            fVar46 = DAT_00d38e60;
                            if (fVar45 != INFINITY) {
                              fVar46 = (float)(int)fVar45 / 20.0;
                            }
                            if (fVar46 <= fVar51) {
                              fVar46 = fVar51;
                            }
                            goto LAB_037910ac;
                          }
                          fVar47 = fVar46 / (1.0 - fVar55);
                          if (fVar55 <= 0.0) {
                            fVar47 = fVar46;
                          }
                          fVar55 = fVar55 + (fVar46 - fVar45 * (fStack0000000000000174 +
                                                               DAT_00d38cc4)) / fVar47;
FUN_03793c4c:
                          if (fVar51 <= fVar55) {
                            fVar55 = fVar51;
                          }
                          *(float *)(unaff_x19 + 0x1594) = fVar55;
                          goto LAB_0378c81c;
                        }
                        in_stack_0000160c = FUN_03797154();
                        if (*(float *)(unaff_x19 + 0x2e4) == DAT_00d38ba4) {
                          lVar29 = *in_stack_000001e8;
                          if (lVar29 == 0) goto LAB_03793c9c;
                          uVar42 = *in_stack_000001d0;
                          if (*(uint *)(lVar29 + 0x18) <= uVar42) goto thunk_FUN_01ab6c44;
                          fVar53 = *(float *)(unaff_x19 + 0x2e0);
                          fVar51 = 0.0;
                          if ((0.0 < fVar53) && (fVar51 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')
                             ) {
                            fVar51 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
                          }
                          fVar51 = in_stack_00000158 * *(float *)(in_stack_000001e0 + 200) +
                                   *(float *)(lVar29 + (long)(int)uVar42 * unaff_x27 + 0x158) +
                                   (fVar51 - *(float *)(unaff_x19 + 0x33c)) +
                                   fStack0000000000000088 *
                                   (in_stack_00000080._4_4_ + *(float *)(unaff_x19 + 0x15b0));
                        }
                        else {
                          fVar51 = *(float *)(in_stack_000001e0 + 200);
                          *(undefined1 *)(unaff_x19 + 0x2e8) = 1;
                          lVar29 = *in_stack_000001e8;
                          if (lVar29 == 0) goto LAB_03793c9c;
                          fVar53 = *(float *)(unaff_x19 + 0x2e0);
                          uVar42 = *(uint *)(unaff_x19 + 0x324);
                          fVar51 = *(float *)(unaff_x19 + 0x2e4) + in_stack_00000158 * fVar51;
                        }
                        if ((*(uint *)(lVar29 + 0x18) <= uVar42) ||
                           (uVar4 = uVar42 - 1, *(uint *)(lVar29 + 0x18) <= uVar4))
                        goto thunk_FUN_01ab6c44;
                        fVar54 = (fVar51 + *(float *)(unaff_x19 + 0x374) + fVar53) -
                                 *(float *)(lVar29 + (long)(int)uVar42 * (long)iVar13 + 0x15c);
                        if (((in_stack_000000b8 & 1) == 0 &&
                             *(short *)(lVar29 + (long)(int)uVar4 * (long)iVar13 + 0x20) == 0xad) &&
                           ((fVar54 < in_stack_00000108 || (*(int *)(in_stack_000001e0 + 0x74) == 0)
                            ))) {
                          in_stack_000000b8 = 0;
                          *in_stack_000001d0 = uVar4;
                          in_stack_0000160c = in_stack_0000160c - 1;
                          in_stack_00001688 = CONCAT44(0x2d,uVar4);
                          break;
                        }
                        if (*(short *)(lVar29 + (long)(int)uVar42 * unaff_x27 + 0x20) == 0xad) {
                          in_stack_000000b8 = 1;
                          in_stack_00001688 = uVar18;
                          break;
                        }
                        if ((bStack00000000000000d8 & *(byte *)(in_stack_000001e0 + 0xa8) & 1) != 0)
                        {
                          fVar55 = *(float *)(unaff_x19 + 0x1594);
                          fVar51 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
                          if ((fVar51 <= fVar55) ||
                             (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
                            fVar53 = *_fStack00000000000000d0;
                            fVar51 = *(float *)(in_stack_000001e0 + 0xac);
                            if ((fVar51 < fVar53) &&
                               (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
                            goto LAB_03793bbc;
                            goto LAB_03790b7c;
                          }
LAB_03793c60:
                          fVar47 = fVar46;
                          if (0.0 < fVar55) {
                            fVar47 = fVar46 / (1.0 - fVar55);
                          }
                          fVar55 = fVar55 + (fVar46 - fVar45 * (fStack0000000000000174 +
                                                               DAT_00d38cc4)) / fVar47;
                          goto FUN_03793c4c;
                        }
LAB_03790b7c:
                        iVar17 = *in_stack_00000030;
                        if ((iVar17 != iStack0000000000000028) &&
                           ((bStack00000000000000d8 & iVar17 != -1) != 0)) {
                          in_stack_0000160c = FUN_03797154();
                          plVar19 = (long *)PTR_DAT_03cbe438;
                          lVar29 = *(long *)(in_stack_000001c0 + 0x30);
                          if (lVar29 == 0) goto LAB_03793c9c;
                          uVar42 = *in_stack_000001d0;
                          uVar4 = uVar42 - 1;
                          if (*(uint *)(lVar29 + 0x18) <= uVar4) goto thunk_FUN_01ab6c44;
                          iStack0000000000000028 = iVar17;
                          if (*(short *)(lVar29 + (long)(int)uVar4 * (long)iVar13 + 0x20) == 0xad) {
                            in_stack_000000b8 = 0;
                            *in_stack_000001d0 = uVar4;
                            in_stack_0000160c = in_stack_0000160c - 1;
                            in_stack_00001688 = CONCAT44(0x2d,uVar4);
                            break;
                          }
                        }
                        if (fVar54 <= in_stack_00000108) {
                          FUN_037a1530(fStack0000000000000088);
                          bStack00000000000000d8 = 1;
                          in_stack_000000b8 = 0;
                          uStack00000000000000ac = 1;
                          in_stack_00001688 = uVar18;
                          break;
                        }
                        if (*(int *)(unaff_x19 + 0x34c) == -1) {
                          *(uint *)(unaff_x19 + 0x34c) = uVar42;
                        }
                        if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
                          fVar51 = *(float *)(in_stack_000001e0 + 0xd0);
                          if ((fVar51 < *(float *)(unaff_x19 + 0x15b0)) &&
                             (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
                            fVar45 = *(float *)(unaff_x19 + 0x15b0) +
                                     ((in_stack_00000018._4_4_ - fVar54) /
                                     (float)(*(int *)(unaff_x19 + 0x340) + 1)) /
                                     fStack0000000000000088;
                            if (fVar45 <= fVar51) {
                              fVar45 = fVar51;
                            }
                            goto LAB_03793b50;
                          }
                          fVar55 = *(float *)(unaff_x19 + 0x1594);
                          fVar51 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
                          if ((fVar55 < fVar51) &&
                             (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
                          goto LAB_03793c60;
                          fVar53 = *_fStack00000000000000d0;
                          fVar51 = *(float *)(in_stack_000001e0 + 0xac);
                          if ((fVar51 < fVar53) &&
                             (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
                          goto LAB_03793bbc;
                        }
                        switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
                        case 0:
                        case 2:
                        case 4:
                          FUN_037a1530(fStack0000000000000088);
                          break;
                        case 1:
                          iVar17 = FUN_020aa428(in_stack_00000078,
                                                *(undefined8 *)
                                                 Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                                               );
                          in_stack_00001688 = DAT_00d37868;
                          if (iVar17 == 0) {
                            in_stack_000000b8 = 0;
                            in_stack_000001d0[0] = 0;
                            in_stack_000001d0[1] = 0;
                            in_stack_0000160c = 0xffffffff;
                          }
                          else {
                            FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__
                                        );
                            memcpy(&stack0x00000da0,&stack0x000016a0,0x398);
                            iVar16 = FUN_03797154();
                            in_stack_000000b8 = 0;
                            iVar17 = *(int *)(unaff_x19 + 0x324) + -1;
                            *(int *)(unaff_x19 + 0x324) = iVar17;
                            in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
                            in_stack_0000160c = iVar16 - 1;
                            in_stack_00001688 = CONCAT44(0x2026,iVar17);
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
                          uVar43 = uVar42;
LAB_037909d0:
                          in_stack_00001688 = CONCAT44(3,uVar43);
                          goto LAB_0378d260;
                        default:
                          in_stack_000000b8 = 0;
                          uVar43 = uVar42;
                          goto LAB_0378f1e0;
                        }
                        in_stack_000000b8 = 0;
LAB_0379053c:
                        bStack00000000000000d8 = 1;
                        uStack00000000000000ac = 1;
                        in_stack_00001688 = uVar18;
                        break;
                      case 3:
                        in_stack_0000160c = FUN_03797154();
                        in_stack_00001688 = CONCAT44((int)((ulong)uVar18 >> 0x20),uVar43);
                        break;
                      case 5:
                        if (uVar43 == 0 || (int)in_stack_0000160c < 0) {
                          *in_stack_000001d0 = 0;
                          in_stack_0000160c = 0xffffffff;
                        }
                        else {
                          fVar45 = *(float *)(unaff_x19 + 0x338);
                          in_stack_0000160c = FUN_03797154();
                          if (in_stack_00000108 < fVar45 - fVar70) goto LAB_0378f7e8;
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
                          in_stack_00001688 = uVar18;
                        }
                        break;
                      case 6:
                        in_stack_0000160c = FUN_03797154();
                        in_stack_00001688 = CONCAT44(3,uVar43);
                      }
LAB_0378d260:
                      in_stack_0000160c = in_stack_0000160c + 1;
                      lVar29 = *(long *)(unaff_x19 + 0x20);
                      if (lVar29 == 0) goto LAB_03793c9c;
                      if ((int)*(uint *)(lVar29 + 0x18) <= (int)in_stack_0000160c) {
LAB_03790fec:
                        if ((((*(char *)(in_stack_000001e0 + 0xa8) != '\0') &&
                             (DAT_00d389f8 <
                              *(float *)(unaff_x19 + 0x1598) - *(float *)(unaff_x19 + 0x159c))) &&
                            (fVar45 = *_fStack00000000000000d0,
                            fVar45 < *(float *)(in_stack_000001e0 + 0xb0))) &&
                           (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
                          fVar47 = *(float *)(in_stack_000001e0 + 0x108);
                          if (*(float *)(unaff_x19 + 0x1594) < fVar47 / 100.0) {
                            *(undefined4 *)(unaff_x19 + 0x1594) = 0;
                          }
                          fVar46 = (*(float *)(unaff_x19 + 0x1598) - fVar45) * 0.5;
                          if (fVar46 <= DAT_00d38b84) {
                            fVar46 = DAT_00d38b84;
                          }
                          *(float *)(unaff_x19 + 0x159c) = fVar45;
                          fVar45 = (fVar45 + fVar46) * 20.0 + 0.5;
                          fVar46 = DAT_00d38e60;
                          if (fVar45 != INFINITY) {
                            fVar46 = (float)(int)fVar45 / 20.0;
                          }
                          if (fVar47 <= fVar46) {
                            fVar46 = fVar47;
                          }
                          goto LAB_037910ac;
                        }
                        unaff_x24[0x30] = '\x01';
                        if (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)) {
                          uVar18 = FUN_0276793c(in_stack_00000070,0);
                          uVar24 = FUN_0277fa90(_fStack00000000000000d0,0);
                          uVar18 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar18
                                                ,*(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar24
                                                ,0);
                          if (*(int *)(*plVar19 + 0xe0) == 0) {
                            thunk_FUN_01a58e78(*plVar19);
                          }
                          FUN_0367a6ec(uVar18,0);
                        }
                        plVar33 = (long *)
                                  Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
                        plVar19 = (long *)PTR_DAT_03cbded8;
                        if ((*in_stack_000001d0 == 0) ||
                           ((*in_stack_000001d0 == 1 && (in_stack_0000169c == 3)))) {
                          FUN_0379e288(1,in_stack_000001c0,0);
                          goto LAB_0378c81c;
                        }
                        lVar29 = *(long *)(in_stack_000001c0 + 0x58);
                        if (lVar29 == 0) goto LAB_03793c9c;
                        uVar14 = *(uint *)(unaff_x19 + 0x78);
                        if (*(int *)(*(long *)
                                      Method_System_Collections_Generic_Dictionary<int,_int>_Clear__
                                    + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        if (*(uint *)(lVar29 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
                        FUN_03785b74(lVar29 + (long)(int)uVar14 * 0x50 + 0x20,0,0);
                        if (DAT_0411f172 == '\0') {
                          FUN_01ab69ac(PTR_DAT_03cbded8);
                          DAT_0411f172 = '\x01';
                        }
                        iVar13 = *(int *)(in_stack_000001e0 + 0x70);
                        in_stack_00000158 = **(float **)(*plVar19 + 0xb8);
                        uStack0000000000000148 = *(undefined8 *)(*(float **)(*plVar19 + 0xb8) + 1);
                        lVar29 = *(long *)(unaff_x19 + 0x50);
                        uStack0000000000000118 = uStack0000000000000148;
                        fStack0000000000000120 = in_stack_00000158;
                        if (iVar13 < 0x421) {
                          if (iVar13 < 0x205) {
                            if (iVar13 < 0x109) {
                              if ((iVar13 - 0x101U < 8) &&
                                 ((1 << (ulong)(iVar13 - 0x101U & 0x1f) & 0x8bU) != 0)) {
LAB_0379144c:
                                if (lVar29 == 0) goto LAB_03793c9c;
                                if (*(uint *)(lVar29 + 0x18) < 2) goto thunk_FUN_01ab6c44;
                                uVar18 = *(undefined8 *)(lVar29 + 0x30);
                                if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
                                  lVar20 = *in_stack_00000050;
                                  if (lVar20 == 0) goto LAB_03793c9c;
                                  if (*(uint *)(lVar20 + 0x18) <= uStack000000000000005c)
                                  goto thunk_FUN_01ab6c44;
                                  fVar45 = *(float *)(lVar20 + (long)(int)uStack000000000000005c *
                                                               0x14 + 0x28);
                                }
                                else {
                                  fVar45 = *(float *)(unaff_x19 + 0x374);
                                }
                                fStack0000000000000120 =
                                     fStack0000000000000058 + 0.0 + *(float *)(lVar29 + 0x2c);
                                fStack0000000000000038 = (0.0 - fVar45) - fStack000000000000003c;
                                goto LAB_037917ec;
                              }
                            }
                            else if (iVar13 < 0x121) {
                              if ((iVar13 == 0x110) || (iVar13 == 0x120)) goto LAB_0379144c;
                            }
                            else if ((iVar13 - 0x201U < 4) && (iVar13 - 0x201U != 2))
                            goto LAB_037916dc;
                          }
                          else {
                            if (iVar13 < 0x403) {
                              if (iVar13 < 0x211) {
                                if ((iVar13 == 0x208) || (iVar13 == 0x210)) goto LAB_037916dc;
                                goto LAB_037917fc;
                              }
                              if (iVar13 != 0x220) {
                                if (iVar13 - 0x401U < 2) goto LAB_03791588;
                                goto LAB_037917fc;
                              }
LAB_037916dc:
                              if (lVar29 == 0) goto LAB_03793c9c;
                              if ((*(int *)(lVar29 + 0x18) == 1) || (*(int *)(lVar29 + 0x18) == 0))
                              goto thunk_FUN_01ab6c44;
                              fStack0000000000000120 =
                                   (*(float *)(lVar29 + 0x20) + *(float *)(lVar29 + 0x2c)) * 0.5;
                              uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar29 + 0x24) >>
                                                        0x20) +
                                                (float)((ulong)*(undefined8 *)(lVar29 + 0x30) >>
                                                       0x20)) * 0.5,
                                                ((float)*(undefined8 *)(lVar29 + 0x24) +
                                                (float)*(undefined8 *)(lVar29 + 0x30)) * 0.5);
                              if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
                                lVar29 = *in_stack_00000050;
                                if (lVar29 == 0) goto LAB_03793c9c;
                                if (uStack000000000000005c < *(uint *)(lVar29 + 0x18)) {
                                  lVar29 = lVar29 + (long)(int)uStack000000000000005c * 0x14;
                                  fStack0000000000000120 =
                                       fStack0000000000000058 + 0.0 + fStack0000000000000120;
                                  fStack0000000000000038 =
                                       ((fStack000000000000003c + *(float *)(lVar29 + 0x28) +
                                        *(float *)(lVar29 + 0x30)) - fStack0000000000000038) * -0.5
                                       + 0.0;
                                  goto LAB_037917ec;
                                }
                                goto thunk_FUN_01ab6c44;
                              }
                              fStack0000000000000120 =
                                   fStack0000000000000058 + 0.0 + fStack0000000000000120;
                              fStack0000000000000038 =
                                   ((fStack000000000000003c + *(float *)(unaff_x19 + 0x374) +
                                    in_stack_00001698) - fStack0000000000000038) * -0.5 + 0.0;
                            }
                            else {
                              if (iVar13 < 0x409) {
                                if (iVar13 != 0x404) {
                                  bVar8 = iVar13 == 0x408;
                                  goto LAB_03791574;
                                }
                              }
                              else if (iVar13 != 0x410) {
                                bVar8 = iVar13 == 0x420;
LAB_03791574:
                                if (!bVar8) goto LAB_037917fc;
                              }
LAB_03791588:
                              if (lVar29 == 0) goto LAB_03793c9c;
                              if (*(int *)(lVar29 + 0x18) == 0) goto thunk_FUN_01ab6c44;
                              uVar18 = *(undefined8 *)(lVar29 + 0x24);
                              if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
                                lVar20 = *in_stack_00000050;
                                if (lVar20 == 0) goto LAB_03793c9c;
                                if (*(uint *)(lVar20 + 0x18) <= uStack000000000000005c)
                                goto thunk_FUN_01ab6c44;
                                in_stack_00001698 =
                                     *(float *)(lVar20 + (long)(int)uStack000000000000005c * 0x14 +
                                               0x30);
                              }
                              fStack0000000000000120 =
                                   fStack0000000000000058 + 0.0 + *(float *)(lVar29 + 0x20);
                              fStack0000000000000038 =
                                   fStack0000000000000038 + (0.0 - in_stack_00001698);
                            }
LAB_037917ec:
                            uStack0000000000000118 =
                                 CONCAT44((float)((ulong)uVar18 >> 0x20) + 0.0,
                                          (float)uVar18 + fStack0000000000000038);
                          }
                        }
                        else if (iVar13 < 0x1005) {
                          if (iVar13 < 0x809) {
                            if ((iVar13 - 0x801U < 8) &&
                               ((1 << (ulong)(iVar13 - 0x801U & 0x1f) & 0x8bU) != 0)) {
LAB_037913b0:
                              if (lVar29 == 0) goto LAB_03793c9c;
                              if ((*(int *)(lVar29 + 0x18) != 1) && (*(int *)(lVar29 + 0x18) != 0))
                              {
                                uStack0000000000000118 =
                                     CONCAT44(((float)((ulong)*(undefined8 *)(lVar29 + 0x24) >> 0x20
                                                      ) +
                                              (float)((ulong)*(undefined8 *)(lVar29 + 0x30) >> 0x20)
                                              ) * 0.5 + 0.0,
                                              ((float)*(undefined8 *)(lVar29 + 0x24) +
                                              (float)*(undefined8 *)(lVar29 + 0x30)) * 0.5 + 0.0);
                                fStack0000000000000120 =
                                     fStack0000000000000058 + 0.0 +
                                     (*(float *)(lVar29 + 0x20) + *(float *)(lVar29 + 0x2c)) * 0.5;
                                goto LAB_037917fc;
                              }
                              goto thunk_FUN_01ab6c44;
                            }
                          }
                          else if (iVar13 < 0x821) {
                            if ((iVar13 == 0x810) || (iVar13 == 0x820)) goto LAB_037913b0;
                          }
                          else if ((iVar13 - 0x1001U < 4) && (iVar13 - 0x1001U != 2))
                          goto LAB_03791644;
                        }
                        else if (iVar13 < 0x2003) {
                          if (iVar13 < 0x1011) {
                            if ((iVar13 == 0x1008) || (iVar13 == 0x1010)) goto LAB_03791644;
                          }
                          else {
                            if (iVar13 == 0x1020) {
LAB_03791644:
                              if (lVar29 == 0) goto LAB_03793c9c;
                              if ((*(int *)(lVar29 + 0x18) != 1) && (*(int *)(lVar29 + 0x18) != 0))
                              {
                                uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar29 + 0x24) >>
                                                          0x20) +
                                                  (float)((ulong)*(undefined8 *)(lVar29 + 0x30) >>
                                                         0x20)) * 0.5,
                                                  ((float)*(undefined8 *)(lVar29 + 0x24) +
                                                  (float)*(undefined8 *)(lVar29 + 0x30)) * 0.5);
                                fStack0000000000000120 =
                                     fStack0000000000000058 + 0.0 +
                                     (*(float *)(lVar29 + 0x20) + *(float *)(lVar29 + 0x2c)) * 0.5;
                                fStack0000000000000038 =
                                     0.0 - ((fStack000000000000003c + *(float *)(unaff_x19 + 0x36c)
                                            + *(float *)(unaff_x19 + 0x364)) -
                                           fStack0000000000000038) * 0.5;
                                goto LAB_037917ec;
                              }
                              goto thunk_FUN_01ab6c44;
                            }
                            if (iVar13 - 0x2001U < 2) goto LAB_037914ec;
                          }
                        }
                        else {
                          if (iVar13 < 0x2009) {
                            if (iVar13 != 0x2004) {
                              iVar17 = 0x2008;
                              goto LAB_037914d4;
                            }
                          }
                          else if (iVar13 != 0x2010) {
                            iVar17 = 0x2020;
LAB_037914d4:
                            if (iVar13 != iVar17) goto LAB_037917fc;
                          }
LAB_037914ec:
                          if (lVar29 == 0) goto LAB_03793c9c;
                          if ((*(int *)(lVar29 + 0x18) == 1) || (*(int *)(lVar29 + 0x18) == 0))
                          goto thunk_FUN_01ab6c44;
                          uStack0000000000000118 =
                               CONCAT44(((float)((ulong)*(undefined8 *)(lVar29 + 0x24) >> 0x20) +
                                        (float)((ulong)*(undefined8 *)(lVar29 + 0x30) >> 0x20)) *
                                        0.5 + 0.0,
                                        ((float)*(undefined8 *)(lVar29 + 0x24) +
                                        (float)*(undefined8 *)(lVar29 + 0x30)) * 0.5 +
                                        (0.0 - ((*(float *)(unaff_x19 + 0x370) -
                                                fStack000000000000003c) - fStack0000000000000038) *
                                               0.5));
                          fStack0000000000000120 =
                               fStack0000000000000058 + 0.0 +
                               (*(float *)(lVar29 + 0x20) + *(float *)(lVar29 + 0x2c)) * 0.5;
                        }
LAB_037917fc:
                        uVar49 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                        FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                        if (*(int *)(*(long *)
                                      Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__
                                    + 0xe0) == 0) {
                          thunk_FUN_01a58e78(*(long *)
                                              Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__
                                            );
                        }
                        FUN_037a1df8(0);
                        FUN_037a1fc8(&stack0x00001670,0x4000ffff,0);
                        fVar45 = DAT_00d38d70;
                        uVar14 = *in_stack_000001d0;
                        if ((int)uVar14 < 1) {
                          iVar13 = 0;
                          iStack0000000000000138 = 0;
                          goto LAB_03793a5c;
                        }
                        lVar29 = *in_stack_000001e8;
                        if (lVar29 == 0) goto LAB_03793c9c;
                        fStack0000000000000174 = 0.0;
                        _bStack00000000000000d8 = 0.0;
                        fStack00000000000000a8 = 0.0;
                        plVar33 = (long *)(in_stack_000001c0 + 0x38);
                        fStack00000000000000ec = fStack0000000000000128;
                        fStack00000000000000f0 = 0.0;
                        in_stack_000000a0._4_4_ = 0.0;
                        uVar22 = (ulong)&stack0x00001670 | 4;
                        bVar8 = false;
                        fVar47 = 0.0;
                        fVar46 = 0.0;
                        uVar21 = (ulong)&stack0x000009f0 | 4;
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
                        uVar15 = 0;
                        uVar32 = 1;
                        goto LAB_0379194c;
                      }
                      if (*(uint *)(lVar29 + 0x18) <= in_stack_0000160c) goto thunk_FUN_01ab6c44;
                      uVar14 = *(uint *)(lVar29 + (long)(int)in_stack_0000160c * 0x10 + 0x24);
                      if (uVar14 == 0) goto LAB_03790fec;
                      if (5 < in_stack_000001d8._4_4_) {
                        uVar18 = FUN_0278d4e8(&stack0x0000169c,0);
                        uVar66 = FUN_0276793c(&stack0x0000160c,0);
                        uVar18 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar18,
                                              *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar66,0
                                             );
                        if (*(int *)(*plVar19 + 0xe0) == 0) {
                          thunk_FUN_01a58e78(*plVar19);
                        }
                        FUN_0367ae18(uVar18,0);
                        in_stack_00001688 = CONCAT44(3,*in_stack_000001d0);
                      }
                      in_stack_0000169c = uVar14;
                      if (uVar14 == 0x1a) goto LAB_0378d260;
                      if ((uVar14 == 0x3c) && (*(char *)(in_stack_000001e0 + 0xb5) != '\0')) {
                        unaff_x24[0] = '\x01';
                        unaff_x24[1] = '\x01';
                        uVar21 = FUN_037974c0();
                        if (((uVar21 & 1) != 0) &&
                           (in_stack_0000160c = in_stack_000015dc, *unaff_x24 == '\x01'))
                        goto LAB_0378d260;
                      }
                      else {
                        lVar29 = *in_stack_000001e8;
                        if (lVar29 == 0) goto LAB_03793c9c;
                        if (*(uint *)(lVar29 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
                        lVar29 = lVar29 + (long)(int)*in_stack_000001d0 * unaff_x27;
                        *unaff_x24 = *(char *)(lVar29 + 0x28);
                        *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar29 + 0x60);
                        *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(lVar29 + 0x40);
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (in_stack_000001c8);
                      }
                      lVar29 = *in_stack_000001e8;
                      if (lVar29 == 0) goto LAB_03793c9c;
                      uVar14 = *(uint *)(unaff_x19 + 0x324);
                      if (*(uint *)(lVar29 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
                      lVar20 = (long)(int)uVar14;
                      unaff_w25 = *(undefined4 *)(unaff_x19 + 0x78);
                      unaff_w20 = (uint)*(byte *)(lVar29 + lVar20 * unaff_x27 + 100);
                      unaff_x24[1] = '\0';
                      if ((uint)in_stack_00001688 == uVar14) {
                        in_stack_0000169c = (uint)((ulong)in_stack_00001688 >> 0x20);
                        unaff_w23 = 1;
                        *unaff_x24 = '\x01';
                        if (in_stack_0000169c == 0x2026) {
                          *(undefined8 *)(lVar29 + lVar20 * unaff_x27 + 0x30) =
                               *(undefined8 *)(unaff_x19 + 0x1a00);
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          lVar29 = *in_stack_000001e8;
                          if (lVar29 == 0) goto LAB_03793c9c;
                          if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x324))
                          goto thunk_FUN_01ab6c44;
                          lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
                          *(undefined1 *)(lVar29 + 0x28) = 1;
                          *(undefined8 *)(lVar29 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1a08);
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          lVar29 = *in_stack_000001e8;
                          if (lVar29 == 0) goto LAB_03793c9c;
                          if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x324))
                          goto thunk_FUN_01ab6c44;
                          *(undefined8 *)
                           (lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x58) =
                               *(undefined8 *)(unaff_x19 + 0x1a10);
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          lVar29 = *in_stack_000001e8;
                          if (lVar29 == 0) goto LAB_03793c9c;
                          uVar14 = *in_stack_000001d0;
                          if (*(uint *)(lVar29 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
                          unaff_w23 = 1;
                          *(undefined4 *)(lVar29 + (long)(int)uVar14 * unaff_x27 + 0x60) =
                               *(undefined4 *)(unaff_x19 + 0x1a18);
                          *(undefined1 *)
                           (*(long *)(*(long *)
                                       Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__
                                     + 0xb8) + 8) = 1;
                          in_stack_00001688 = CONCAT44(3,uVar14 + 1);
                        }
                        else if (in_stack_0000169c == 3) {
                          if ((*in_stack_000001c8 == 0) ||
                             (lVar34 = FUN_03779b3c(*in_stack_000001c8,0), lVar34 == 0))
                          goto LAB_03793c9c;
                          FUN_0219b634(lVar34,&stack0x00000978,&stack0x000016a0,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<int,_List<IIdleAutoDespawn>>__ctor__
                                      );
                          if (*(uint *)(lVar29 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
                          *(undefined8 *)(lVar29 + lVar20 * unaff_x27 + 0x30) = uVar24;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          unaff_w23 = 1;
                          *(undefined1 *)
                           (*(long *)(*(long *)
                                       Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__
                                     + 0xb8) + 8) = 1;
                          uVar14 = *in_stack_000001d0;
                        }
                      }
                      else {
                        unaff_w23 = 0;
                      }
                      if (((int)uVar14 < *(int *)(in_stack_000001e0 + 0xe4)) &&
                         (in_stack_0000169c != 3)) {
                        lVar29 = *in_stack_000001e8;
                        if (lVar29 == 0) goto LAB_03793c9c;
                        if (*(uint *)(lVar29 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
                        lVar29 = lVar29 + (long)(int)uVar14 * (long)iVar13;
                        *(undefined1 *)(lVar29 + 0x1a0) = 0;
                        *(undefined2 *)(lVar29 + 0x20) = 0x200b;
                        *(undefined4 *)(lVar29 + 0x6c) = 0;
                        *in_stack_000001d0 = uVar14 + 1;
                        goto LAB_0378d260;
                      }
                      cVar27 = *unaff_x24;
                      if (cVar27 == '\x01') {
                        uVar14 = *(uint *)(unaff_x19 + 0x124);
                        if ((uVar14 >> 4 & 1) == 0) {
                          if ((uVar14 >> 3 & 1) == 0) {
                            fStack000000000000017c = 1.0;
                            if ((uVar14 >> 5 & 1) != 0) {
                              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              uVar21 = FUN_026b812c(in_stack_0000169c,0);
                              if ((uVar21 & 1) != 0) {
                                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                uVar14 = FUN_026b8410(in_stack_0000169c,0);
                                in_stack_0000169c = uVar14 & 0xffff;
                                fStack000000000000017c = fStack000000000000002c;
                              }
                            }
                          }
                          else {
                            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar21 = FUN_026b8070(in_stack_0000169c,0);
                            fStack000000000000017c = 1.0;
                            if ((uVar21 & 1) != 0) {
                              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              uVar14 = FUN_026b8594(in_stack_0000169c,0);
                              goto LAB_0378d3d0;
                            }
                          }
                        }
                        else {
                          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar21 = FUN_026b812c(in_stack_0000169c,0);
                          fStack000000000000017c = 1.0;
                          if ((uVar21 & 1) != 0) {
                            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar14 = FUN_026b8410(in_stack_0000169c,0);
LAB_0378d3d0:
                            fStack000000000000017c = 1.0;
                            in_stack_0000169c = uVar14 & 0xffff;
                          }
                        }
                        cVar27 = *unaff_x24;
                      }
                      else {
                        fStack000000000000017c = 1.0;
                      }
                      unaff_x21 = in_stack_000001e0;
                      unaff_x26 = in_stack_000001c8;
                      if (cVar27 == '\x01') {
                        lVar29 = *in_stack_000001e8;
                        if (lVar29 == 0) goto LAB_03793c9c;
                        if (*(uint *)(lVar29 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
                        *in_stack_000001a8 =
                             *(long *)(lVar29 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x30);
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (in_stack_000001a8);
                        if (*in_stack_000001a8 != 0) {
                          lVar29 = *in_stack_000001e8;
                          if (lVar29 == 0) goto LAB_03793c9c;
                          if (*(uint *)(lVar29 + 0x18) <= *in_stack_000001d0)
                          goto thunk_FUN_01ab6c44;
                          *in_stack_000001c8 =
                               *(long *)(lVar29 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x40);
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (in_stack_000001c8);
                          lVar29 = *in_stack_000001e8;
                          if (lVar29 == 0) goto LAB_03793c9c;
                          if (*(uint *)(lVar29 + 0x18) <= *in_stack_000001d0)
                          goto thunk_FUN_01ab6c44;
                          *in_stack_00000190 =
                               *(long *)(lVar29 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x58);
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          lVar29 = *in_stack_000001e8;
                          if (lVar29 == 0) goto LAB_03793c9c;
                          uVar15 = *in_stack_000001d0;
                          uVar14 = *(uint *)(lVar29 + 0x18);
                          if (uVar14 <= uVar15) goto thunk_FUN_01ab6c44;
                          *(undefined4 *)(unaff_x19 + 0x78) =
                               *(undefined4 *)(lVar29 + (long)(int)uVar15 * unaff_x27 + 0x60);
                          if (unaff_w23 == 0) {
LAB_0378d570:
                            if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                            fVar63 = *(float *)(unaff_x19 + 0xf4);
                            iVar13 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
                            lVar29 = *(long *)(unaff_x19 + 0x68);
                          }
                          else {
                            lVar20 = *(long *)(unaff_x19 + 0x20);
                            if (lVar20 == 0) goto LAB_03793c9c;
                            if (*(uint *)(lVar20 + 0x18) <= in_stack_0000160c)
                            goto thunk_FUN_01ab6c44;
                            if ((*(int *)(lVar20 + (long)(int)in_stack_0000160c * 0x10 + 0x24) != 10
                                ) || (uVar15 == *(uint *)(unaff_x19 + 0x328))) goto LAB_0378d570;
                            if (uVar14 <= uVar15 - 1) goto thunk_FUN_01ab6c44;
                            if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                            fVar63 = *(float *)(lVar29 + (long)(int)(uVar15 - 1) * (long)iVar13 +
                                               0x68);
                            iVar13 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
                            lVar29 = *in_stack_000001c8;
                          }
                          if (lVar29 == 0) goto LAB_03793c9c;
                          fVar48 = (float)FUN_03776960(lVar29 + 0xb0,0);
                          fVar71 = in_stack_00000150;
                          if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                            fVar71 = 1.0;
                          }
                          fStack0000000000000170 = 0.0;
                          fVar45 = 0.0;
                          if ((unaff_w23 & in_stack_0000169c == 0x2026) == 0) {
                            if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                            fVar45 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
                            if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                            fStack0000000000000170 =
                                 (float)FUN_037769c0(*in_stack_000001c8 + 0xb0,0);
                          }
                          lVar29 = *(long *)(unaff_x19 + 0x1588);
                          if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto LAB_03793c9c;
                          fVar50 = *(float *)(unaff_x19 + 0xf0);
                          fVar51 = *(float *)(lVar29 + 0x2c);
                          fVar46 = (float)FUN_03776ea8(*(long *)(lVar29 + 0x20),0);
                          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                          fVar52 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
                          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                          fVar64 = *(float *)(unaff_x19 + 0xf0);
                          fVar47 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
                          lVar29 = *in_stack_000001e8;
                          if (lVar29 == 0) goto LAB_03793c9c;
                          uVar14 = *(uint *)(unaff_x19 + 0x324);
                          if (*(uint *)(lVar29 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
                          lVar20 = lVar29 + (long)(int)uVar14 * unaff_x27;
                          fVar71 = ((fStack000000000000017c * fVar63) / (float)iVar13) * fVar48 *
                                   fVar71;
                          fVar46 = fVar71 * fVar50 * fVar51 * fVar46;
                          *(undefined1 *)(lVar20 + 0x28) = 1;
                          *(float *)(lVar20 + 0x16c) = fVar46;
                          fVar63 = *(float *)(unaff_x19 + 0xd8);
                          fVar47 = fVar71 * fVar52 * fVar64 * fVar47;
                          goto LAB_0378db90;
                        }
                        goto LAB_0378d260;
                      }
                      if (cVar27 == '\x02') {
                        lVar29 = *in_stack_000001e8;
                        if (lVar29 == 0) goto LAB_03793c9c;
                        if (*(uint *)(lVar29 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
                        unaff_x22 = *(long **)(lVar29 + (long)(int)*in_stack_000001d0 * unaff_x27 +
                                              0x30);
                        if (unaff_x22 == (long *)0x0) goto LAB_03793c9c;
                        bVar11 = *(byte *)(*(long *)
                                            Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__
                                          + 0x130);
                        if ((*(byte *)(*unaff_x22 + 0x130) < bVar11) ||
                           (*(long *)(*(long *)(*unaff_x22 + 200) + (ulong)bVar11 * 8 + -8) !=
                            *(long *)
                             Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__))
                        {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6ee0(unaff_x22);
                        }
                        plVar19 = (long *)FUN_03783144(unaff_x22,0);
                        if (plVar19 == (long *)0x0) {
                          plVar19 = (long *)0x0;
                          *in_stack_00000160 = 0;
                        }
                        else {
                          lVar29 = *(long *)
                                    Method_System_Collections_Generic_Dictionary<int,_Material>_Add__
                          ;
                          bVar11 = *(byte *)(lVar29 + 0x130);
                          if (*(byte *)(*plVar19 + 0x130) < bVar11) {
                            plVar33 = (long *)0x0;
                          }
                          else {
                            plVar33 = plVar19;
                            if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar11 * 8 + -8) !=
                                lVar29) {
                              plVar33 = (long *)0x0;
                            }
                          }
                          *in_stack_00000160 = (long)plVar33;
                          if (*(byte *)(*plVar19 + 0x130) < bVar11) {
                            plVar19 = (long *)0x0;
                          }
                          else if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar11 * 8 + -8) !=
                                   lVar29) {
                            plVar19 = (long *)0x0;
                          }
                        }
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (in_stack_00000160,plVar19);
                        iVar13 = FUN_0377acf0(unaff_x22,0);
                        *(int *)(unaff_x19 + 0x157c) = iVar13;
                        if (in_stack_0000169c == 0x3c) {
                          in_stack_0000169c = iVar13 + 0xe000;
                        }
                        else {
                          uVar49 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                          *(undefined4 *)(unaff_x19 + 0x1580) = uVar49;
                        }
                        if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
                        fVar45 = *(float *)(unaff_x19 + 0xf4);
                        FUN_03779650(&stack0x000016a0,*(long *)(unaff_x19 + 0x68),0);
                        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
                        iVar13 = FUN_03776950(&stack0x00001610,0);
                        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                        FUN_03779650(&stack0x000016a0,*in_stack_000001c8,0);
                        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
                        fVar47 = (float)FUN_03776960(&stack0x00001610,0);
                        fVar46 = in_stack_00000150;
                        if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                          fVar46 = 1.0;
                        }
                        if (*in_stack_00000160 == 0) goto LAB_03793c9c;
                        unaff_s13 = (fVar45 / (float)iVar13) * fVar47 * fVar46;
                        iVar13 = FUN_03776950(*in_stack_00000160 + 0x48,0);
                        in_stack_000001b8._4_4_ = *(float *)(unaff_x19 + 0xf4);
                        if (iVar13 < 1) {
                          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                          unaff_w29 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
                          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                          unaff_s8 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
                          unaff_s15 = in_stack_00000150;
                          if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                            unaff_s15 = 1.0;
                          }
                          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                          unaff_s10 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
                          if (unaff_x22[4] == 0) goto LAB_03793c9c;
                          FUN_03776e6c(&stack0x000016a0,unaff_x22[4],0);
                          in_stack_000001a0 = (float)FUN_03776c9c(&stack0x000015c0,0);
                          if (unaff_x22[4] == 0) goto LAB_03793c9c;
                          in_stack_000001b0 = *(float *)((long)unaff_x22 + 0x2c);
                          param_1 = (float)FUN_03776ea8(unaff_x22[4],0);
                          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                          param_2 = *in_stack_000001c8 + 0xb0;
                          goto code_r0x0378da34;
                        }
                        if (*in_stack_00000160 == 0) goto LAB_03793c9c;
                        iVar13 = FUN_03776950(*in_stack_00000160 + 0x48,0);
                        if (*in_stack_00000160 == 0) goto LAB_03793c9c;
                        fVar46 = (float)FUN_03776960(*in_stack_00000160 + 0x48,0);
                        if (unaff_x22[4] == 0) goto LAB_03793c9c;
                        fVar71 = *(float *)((long)unaff_x22 + 0x2c);
                        fVar63 = in_stack_00000150;
                        if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                          fVar63 = 1.0;
                        }
                        fVar48 = (float)FUN_03776ea8(unaff_x22[4],0);
                        if (*in_stack_00000160 == 0) goto LAB_03793c9c;
                        fVar45 = (float)FUN_03776980(*in_stack_00000160 + 0x48,0);
                        if (*in_stack_00000160 == 0) goto LAB_03793c9c;
                        fVar50 = (float)FUN_037769b0(*in_stack_00000160 + 0x48,0);
                        if (*in_stack_00000160 == 0) goto LAB_03793c9c;
                        fVar51 = *(float *)(unaff_x19 + 0xf0);
                        fVar47 = (float)FUN_03776960(*in_stack_00000160 + 0x48,0);
                        if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03793c9c;
                        fVar47 = unaff_s13 * fVar50 * fVar51 * fVar47;
                        fVar46 = (in_stack_000001b8._4_4_ / (float)iVar13) * fVar46 * fVar63 *
                                 fVar71 * fVar48;
                        fStack0000000000000170 =
                             (float)FUN_037769c0(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
                        goto LAB_0378dad4;
                      }
                      lVar29 = *in_stack_000001e8;
                      fVar47 = 0.0;
                      fVar48 = fVar71;
                      if (in_stack_0000169c == 3 || in_stack_0000169c == 0xad) {
                        fVar48 = 0.0;
                      }
                      if (lVar29 == 0) goto LAB_03793c9c;
                      uVar14 = *in_stack_000001d0;
                      fVar45 = 0.0;
                      fStack0000000000000170 = 0.0;
                      uVar18 = in_stack_00001688;
                      fVar46 = fVar71;
                      fVar71 = fVar48;
                      goto LAB_0378dba8;
                    }
                    if (((in_stack_0000169c & 0xfffffffe) == 10) &&
                       (*(int *)(in_stack_000001e0 + 0x74) == 6)) {
                      fVar45 = 0.0;
                      if ((0.0 < fVar51) && (fVar45 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
                        fVar45 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
                      }
                      if (in_stack_00000108 <
                          (*(float *)(unaff_x19 + 0x374) - (*(float *)(unaff_x19 + 0x33c) - fVar51))
                          + fVar45) {
                        if (*(int *)(unaff_x19 + 0x34c) == -1) {
                          *(uint *)(unaff_x19 + 0x34c) = uVar43;
                        }
                        in_stack_0000160c = FUN_03797154();
LAB_0378f7e8:
                        in_stack_00001688 = CONCAT44(3,uVar43);
                        goto LAB_0378d260;
                      }
                    }
                    if ((((in_stack_0000169c - 0x2007 < 0x23) &&
                         ((1L << ((ulong)(in_stack_0000169c - 0x2007) & 0x3f) & 0x600000001U) != 0))
                        || (in_stack_0000169c - 10 < 2)) || (in_stack_0000169c == 0xa0)) {
LAB_0378f700:
                      if ((in_stack_0000169c == 0xad) || (in_stack_0000169c == 0x200b))
                      goto LAB_0378f884;
                      if (in_stack_0000169c != 0x2060) {
                        lVar29 = *(long *)(in_stack_000001c0 + 0x48);
                        if (lVar29 != 0) {
                          if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar29 + 0x18)) {
                            lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                            *(int *)(lVar29 + 0x2c) = *(int *)(lVar29 + 0x2c) + 1;
                            *(int *)(in_stack_000001c0 + 0x18) =
                                 *(int *)(in_stack_000001c0 + 0x18) + 1;
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
                      uVar21 = FUN_026b97f8(in_stack_0000169c,0);
                      if ((uVar21 & 1) != 0) goto LAB_0378f700;
                    }
LAB_0378f760:
                    if (in_stack_0000169c == 0xa0) {
                      lVar29 = *(long *)(in_stack_000001c0 + 0x48);
                      if (lVar29 == 0) goto LAB_03793c9c;
                      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x340))
                      goto thunk_FUN_01ab6c44;
                      lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                      *(int *)(lVar29 + 0x20) = *(int *)(lVar29 + 0x20) + 1;
                    }
LAB_0378f884:
                    bVar8 = *(int *)(in_stack_000001e0 + 0x74) == 1;
                    if (bVar8 && unaff_w23 == 1) {
                      bVar8 = in_stack_0000169c == 0x2d;
                    }
                    if (bVar8) {
                      if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
                      fVar45 = *(float *)(unaff_x19 + 0xf4);
                      iVar17 = FUN_03776950(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
                      if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
                      fVar47 = (float)FUN_03776960(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
                      lVar29 = *(long *)(unaff_x19 + 0x1a00);
                      fVar46 = in_stack_00000150;
                      if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                        fVar46 = 1.0;
                      }
                      if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto LAB_03793c9c;
                      fVar51 = *(float *)(unaff_x19 + 0xf0);
                      fVar54 = *(float *)(lVar29 + 0x2c);
                      fVar50 = (float)FUN_03776ea8(*(long *)(lVar29 + 0x20),0);
                      fVar53 = *_iStack0000000000000138;
                      fVar50 = fVar51 * (fVar45 / (float)iVar17) * fVar47 * fVar46 * fVar54 * fVar50
                      ;
                      fVar45 = *_fStack0000000000000130;
                      if ((in_stack_0000169c == 10) &&
                         (*(int *)(unaff_x19 + 0x324) != *(int *)(unaff_x19 + 0x328))) {
                        lVar29 = *in_stack_000001e8;
                        if (lVar29 == 0) goto LAB_03793c9c;
                        uVar43 = *(int *)(unaff_x19 + 0x324) - 1;
                        if (*(uint *)(lVar29 + 0x18) <= uVar43) goto thunk_FUN_01ab6c44;
                        if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
                        fVar46 = *(float *)(lVar29 + (long)(int)uVar43 * (long)iVar13 + 0x68);
                        iVar17 = FUN_03776950(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
                        if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
                        fVar51 = (float)FUN_03776960(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
                        lVar29 = *(long *)(unaff_x19 + 0x1a00);
                        fVar47 = in_stack_00000150;
                        if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                          fVar47 = 1.0;
                        }
                        if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto LAB_03793c9c;
                        fVar54 = *(float *)(unaff_x19 + 0xf0);
                        fVar55 = *(float *)(lVar29 + 0x2c);
                        fVar50 = (float)FUN_03776ea8(*(long *)(lVar29 + 0x20),0);
                        lVar29 = *(long *)(in_stack_000001c0 + 0x48);
                        if (lVar29 == 0) goto LAB_03793c9c;
                        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x340))
                        goto thunk_FUN_01ab6c44;
                        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                        fVar53 = *(float *)(lVar29 + 100);
                        fVar45 = *(float *)(lVar29 + 0x68);
                        fVar50 = fVar54 * (fVar46 / (float)iVar17) * fVar51 * fVar47 * fVar55 *
                                 fVar50;
                      }
                      fVar47 = *(float *)(unaff_x19 + 0x2f4);
                      fVar46 = 0.0;
                      if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
                        if ((*(long *)(unaff_x19 + 0x1a00) == 0) ||
                           (lVar29 = *(long *)(*(long *)(unaff_x19 + 0x1a00) + 0x20), lVar29 == 0))
                        goto LAB_03793c9c;
                        FUN_03776e6c(&stack0x000016a0,lVar29,0);
                        fVar46 = (float)FUN_03776cb4(&stack0x000015c0,0);
                      }
                      fVar51 = *(float *)(unaff_x19 + 0x35c);
                      fVar45 = (fStack000000000000012c - fVar53) - fVar45;
                      bVar8 = true;
                      if ((fVar51 <= fVar45) && (bVar8 = false, !NAN(fVar51))) {
                        bVar8 = fVar51 == -1.0;
                      }
                      if (!bVar8) {
                        fVar45 = fVar51;
                      }
                      fVar51 = 1.0;
                      if (uVar39 != 0) {
                        fVar51 = DAT_00d38acc;
                      }
                      if (ABS(fVar47) + fVar50 * fVar46 * (1.0 - *(float *)(unaff_x19 + 0x1594)) <
                          fVar51 * fVar45) {
                        FUN_03796df8();
                        memcpy(&stack0x000005c8,in_stack_00000068,0x398);
                        FUN_020ab0d8(in_stack_00000078,&stack0x000005c8,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__
                                    );
                      }
                    }
                    lVar29 = *in_stack_000001e8;
                    if (lVar29 == 0) goto LAB_03793c9c;
                    if (*(uint *)(lVar29 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
                    uVar43 = *(uint *)(unaff_x19 + 0x340);
                    lVar29 = lVar29 + (long)(int)*in_stack_000001d0 * unaff_x27;
                    *(uint *)(lVar29 + 0x6c) = uVar43;
                    *(undefined4 *)(lVar29 + 0x70) = *(undefined4 *)(unaff_x19 + 0x350);
                    if (((unaff_w23 & 1) == 0) &&
                       ((0xd < in_stack_0000169c ||
                        ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0x2c00U) == 0)))) {
                      lVar29 = *(long *)(in_stack_000001c0 + 0x48);
                      if (lVar29 == 0) goto LAB_03793c9c;
LAB_0378fbcc:
                      if (*(uint *)(lVar29 + 0x18) <= uVar43) goto thunk_FUN_01ab6c44;
                      *(undefined4 *)(lVar29 + (long)(int)uVar43 * 0x60 + 0x6c) =
                           *(undefined4 *)(unaff_x19 + 0x158);
                    }
                    else {
                      lVar29 = *(long *)(in_stack_000001c0 + 0x48);
                      if (lVar29 == 0) goto LAB_03793c9c;
                      if (*(uint *)(lVar29 + 0x18) <= uVar43) goto thunk_FUN_01ab6c44;
                      if (*(int *)(lVar29 + (long)(int)uVar43 * 0x60 + 0x24) == 1)
                      goto LAB_0378fbcc;
                    }
                    if (in_stack_0000169c != 0x200b) {
                      if (in_stack_0000169c == 9) {
                        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                        fVar45 = (float)FUN_03776a48(*in_stack_000001c8 + 0xb0,0);
                        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                        bVar11 = FUN_03779d4c(*in_stack_000001c8,0);
                        fVar46 = *(float *)(unaff_x19 + 0x2f4);
                        fVar47 = fVar71 * fVar45 * (float)bVar11;
                        fVar45 = fVar47 * (float)(int)(fVar46 / fVar47);
                        if (fVar45 <= fVar46) {
                          fVar45 = fVar46 + fVar47;
                        }
                        *(float *)(unaff_x19 + 0x2f4) = fVar45;
                      }
                      else {
                        fVar45 = *(float *)(unaff_x19 + 0x2f0);
                        if (fVar45 == 0.0) {
                          fVar46 = *(float *)(unaff_x19 + 0x2f4);
                          if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
                            fVar45 = (float)FUN_03776cb4(&stack0x000015f0,0);
                            fVar50 = *(float *)(unaff_x19 + 0x19a8);
                            fVar47 = (float)FUN_03778e7c(&stack0x000015e0,0);
                            if (*(long *)(unaff_x19 + 0x68) != 0) {
                              fVar51 = (float)FUN_03779d0c(*(long *)(unaff_x19 + 0x68),0);
                              fVar46 = fVar46 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                                (*(float *)(unaff_x19 + 0x2ec) +
                                                fVar71 * (fVar45 * fVar50 + fVar47) +
                                                in_stack_00000158 * (fVar64 + fVar48 + fVar51));
                              goto UnityEngine_UIElements_WheelEvent___ctor;
                            }
                            goto LAB_03793c9c;
                          }
                          fVar45 = (float)FUN_03778e7c(&stack0x000015e0,0);
                          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                          fVar47 = (float)FUN_03779d0c(*in_stack_000001c8,0);
                          fVar46 = fVar46 - (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                            (*(float *)(unaff_x19 + 0x2ec) +
                                            fVar71 * fVar45 +
                                            in_stack_00000158 * (fVar64 + fVar48 + fVar47));
                          *(float *)(unaff_x19 + 0x2f4) = fVar46;
                          if ((uVar14 == 0) && (in_stack_0000169c != 0x200b)) goto FUN_0378fd94;
                          fVar46 = fVar46 - in_stack_00000158 * *(float *)(in_stack_000001e0 + 0xc4)
                          ;
                        }
                        else {
                          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                          fVar46 = *(float *)(unaff_x19 + 0x2f4);
                          fVar47 = (float)FUN_03779d0c(*in_stack_000001c8,0);
                          fVar46 = fVar46 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                            (*(float *)(unaff_x19 + 0x2ec) +
                                            (fVar45 - fVar52) +
                                            in_stack_00000158 * (fVar48 + fVar47));
UnityEngine_UIElements_WheelEvent___ctor:
                          *(float *)(unaff_x19 + 0x2f4) = fVar46;
                          if ((uVar14 == 0) && (in_stack_0000169c != 0x200b)) goto FUN_0378fd94;
                          fVar46 = fVar46 + in_stack_00000158 * *(float *)(in_stack_000001e0 + 0xc4)
                          ;
                        }
                        *(float *)(unaff_x19 + 0x2f4) = fVar46;
                      }
                    }
FUN_0378fd94:
                    lVar29 = *in_stack_000001e8;
                    if (lVar29 == 0) goto LAB_03793c9c;
                    uVar43 = *in_stack_000001d0;
                    if (*(uint *)(lVar29 + 0x18) <= uVar43) goto thunk_FUN_01ab6c44;
                    *(undefined4 *)(lVar29 + (long)(int)uVar43 * unaff_x27 + 0x164) =
                         *(undefined4 *)(unaff_x19 + 0x2f4);
                    if (in_stack_0000169c == 0xd) {
                      *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
                    }
                    if ((*(int *)(in_stack_000001e0 + 0x74) == 5) &&
                       (((0xd < in_stack_0000169c ||
                         ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0x2c00U) == 0)) &&
                        (1 < in_stack_0000169c - 0x2028)))) {
                      lVar29 = *in_stack_00000050;
                      if (lVar29 == 0) goto LAB_03793c9c;
                      uVar39 = *(uint *)(unaff_x19 + 0x350);
                      if (*(int *)(lVar29 + 0x18) < (int)(uVar39 + 1)) {
                        if (*(int *)(*(long *)
                                      Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                                    + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        FUN_01ff3814(in_stack_00000050,uVar39 + 1,1,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_GetEnumerator__
                                    );
                        lVar29 = *in_stack_00000050;
                        if (lVar29 == 0) goto LAB_03793c9c;
                        uVar39 = *(uint *)(unaff_x19 + 0x350);
                      }
                      if (*(uint *)(lVar29 + 0x18) <= uVar39) goto thunk_FUN_01ab6c44;
                      lVar20 = lVar29 + (long)(int)uVar39 * 0x14;
                      *(undefined4 *)(lVar20 + 0x28) = *(undefined4 *)(unaff_x19 + 0x19c8);
                      fVar45 = *(float *)(unaff_x19 + 0x378);
                      if (*(float *)(lVar20 + 0x30) <= *(float *)(unaff_x19 + 0x378)) {
                        fVar45 = *(float *)(lVar20 + 0x30);
                      }
                      *(float *)(lVar20 + 0x30) = fVar45;
                      if (*(char *)(unaff_x19 + 0x37c) != '\0') {
                        *(undefined1 *)(unaff_x19 + 0x37c) = 0;
                        *(undefined4 *)(lVar29 + (long)(int)uVar39 * 0x14 + 0x20) =
                             *(undefined4 *)(unaff_x19 + 0x324);
                      }
                      uVar43 = *in_stack_000001d0;
                      *(uint *)(lVar29 + (long)(int)uVar39 * 0x14 + 0x24) = uVar43;
                    }
                    if (((in_stack_0000169c < 0xc) &&
                        ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0xc08U) != 0)) ||
                       ((in_stack_0000169c - 0x2028 < 2 ||
                        (((unaff_w23 & in_stack_0000169c == 0x2d) != 0 ||
                         (uVar43 == uStack00000000000000dc)))))) {
                      if (0.0 < *(float *)(unaff_x19 + 0x2e0)) {
                        fVar45 = *(float *)(unaff_x19 + 0x338);
                        fVar46 = *(float *)(unaff_x19 + 0x15ac);
                        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        fVar45 = fVar45 - fVar46;
                        if (((fStack00000000000000a8 < ABS(fVar45)) &&
                            (*(char *)(unaff_x19 + 0x2e8) == '\0')) &&
                           (*(char *)(unaff_x19 + 0x37c) != '\x01')) {
                          uVar49 = *(undefined4 *)(unaff_x19 + 0x328);
                          uVar60 = *(undefined4 *)(unaff_x19 + 0x324);
                          if (*(int *)(*(long *)
                                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                                      + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          FUN_037a5574(fVar45,uVar49,uVar60,in_stack_000001c0,0);
                          *(float *)(unaff_x19 + 0x378) = *(float *)(unaff_x19 + 0x378) - fVar45;
                          *(float *)(unaff_x19 + 0x2e0) = fVar45 + *(float *)(unaff_x19 + 0x2e0);
                          plVar19 = (long *)PTR_DAT_03cbe438;
                          if (*(int *)(unaff_x19 + 0xad8) == *(int *)(unaff_x19 + 0x340)) {
                            FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__
                                        );
                            memcpy(in_stack_00000068,&stack0x000016a0,0x398);
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                      (in_stack_00000020,0);
                            *(float *)(unaff_x19 + 0xaf0) = fVar45 + *(float *)(unaff_x19 + 0xaf0);
                            *(float *)(unaff_x19 + 0xb24) = fVar45 + *(float *)(unaff_x19 + 0xb24);
                            memcpy(&stack0x00000230,in_stack_00000068,0x398);
                            FUN_020ab0d8(in_stack_00000078,&stack0x00000230,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__
                                        );
                          }
                        }
                      }
                      fVar46 = *(float *)(unaff_x19 + 0x2e0);
                      *(undefined1 *)(unaff_x19 + 0x37c) = 0;
                      fVar47 = *(float *)(unaff_x19 + 0x33c) - fVar46;
                      fVar45 = *(float *)(unaff_x19 + 0x378);
                      if (fVar47 <= *(float *)(unaff_x19 + 0x378)) {
                        fVar45 = fVar47;
                      }
                      *(float *)(unaff_x19 + 0x378) = fVar45;
                      fVar50 = *(float *)(unaff_x19 + 0x338);
                      if (in_stack_00001694 == '\0') {
                        in_stack_00001698 = fVar45;
                      }
                      if ((*(char *)(in_stack_000001e0 + 0xe8) != '\0') &&
                         ((*(int *)(in_stack_000001e0 + 0xd8) <= (int)*in_stack_000001d0 ||
                          (*(int *)(in_stack_000001e0 + 0xe0) <= *(int *)(unaff_x19 + 0x340))))) {
                        in_stack_00001694 = '\x01';
                      }
                      lVar29 = *(long *)(in_stack_000001c0 + 0x48);
                      if (lVar29 == 0) goto LAB_03793c9c;
                      uVar43 = *(uint *)(unaff_x19 + 0x340);
                      if (*(uint *)(lVar29 + 0x18) <= uVar43) goto thunk_FUN_01ab6c44;
                      iVar17 = *(int *)(unaff_x19 + 0x328);
                      lVar20 = lVar29 + (long)(int)uVar43 * 0x60;
                      *(int *)(lVar20 + 0x38) = iVar17;
                      uVar39 = *(uint *)(unaff_x19 + 0x328);
                      if (iVar17 <= (int)*(uint *)(unaff_x19 + 0x330)) {
                        uVar39 = *(uint *)(unaff_x19 + 0x330);
                      }
                      *(uint *)(unaff_x19 + 0x330) = uVar39;
                      *(uint *)(lVar20 + 0x3c) = uVar39;
                      iVar1 = *(int *)(unaff_x19 + 0x324);
                      *(int *)(unaff_x19 + 0x32c) = iVar1;
                      *(int *)(lVar20 + 0x40) = iVar1;
                      iVar16 = *(int *)(unaff_x19 + 0x330);
                      if ((int)uVar39 <= *(int *)(unaff_x19 + 0x334)) {
                        iVar16 = *(int *)(unaff_x19 + 0x334);
                      }
                      *(int *)(unaff_x19 + 0x334) = iVar16;
                      *(int *)(lVar20 + 0x44) = iVar16;
                      *(int *)(lVar20 + 0x24) = (iVar1 - iVar17) + 1;
                      *(undefined4 *)(lVar20 + 0x28) = *(undefined4 *)(unaff_x19 + 0x344);
                      *(undefined4 *)(lVar20 + 0x30) = *(undefined4 *)(unaff_x19 + 0x348);
                      lVar20 = *in_stack_000001e8;
                      if (lVar20 == 0) goto LAB_03793c9c;
                      if (*(uint *)(lVar20 + 0x18) <= uVar39) goto thunk_FUN_01ab6c44;
                      uVar49 = *(undefined4 *)(lVar20 + (long)(int)uVar39 * (long)iVar13 + 0x124);
                      lVar29 = lVar29 + (long)(int)uVar43 * 0x60;
                      *(float *)(lVar29 + 0x74) = fVar47;
                      *(undefined4 *)(lVar29 + 0x70) = uVar49;
                      lVar29 = *(long *)(in_stack_000001c0 + 0x48);
                      if (lVar29 == 0) goto LAB_03793c9c;
                      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x340))
                      goto thunk_FUN_01ab6c44;
                      lVar20 = *in_stack_000001e8;
                      if (lVar20 == 0) goto LAB_03793c9c;
                      if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0x334))
                      goto thunk_FUN_01ab6c44;
                      uVar49 = *(undefined4 *)
                                (lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x334) * unaff_x27 +
                                0x130);
                      fVar50 = fVar50 - fVar46;
                      lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                      *(float *)(lVar29 + 0x7c) = fVar50;
                      *(undefined4 *)(lVar29 + 0x78) = uVar49;
                      lVar29 = *(long *)(in_stack_000001c0 + 0x48);
                      if (lVar29 == 0) goto LAB_03793c9c;
                      uVar43 = *(uint *)(unaff_x19 + 0x340);
                      if (*(uint *)(lVar29 + 0x18) <= uVar43) goto thunk_FUN_01ab6c44;
                      lVar20 = lVar29 + (long)(int)uVar43 * 0x60;
                      *(float *)(lVar20 + 0x48) = *(float *)(lVar20 + 0x78) - fVar71 * fVar63;
                      *(float *)(lVar20 + 0x60) = fStack0000000000000174;
                      if (*(int *)(lVar20 + 0x24) == 1) {
                        *(undefined4 *)(lVar29 + (long)(int)uVar43 * 0x60 + 0x6c) =
                             *(undefined4 *)(unaff_x19 + 0x158);
                      }
                      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                      fVar45 = (float)FUN_03779d0c(*in_stack_000001c8,0);
                      lVar29 = *in_stack_000001e8;
                      if (lVar29 == 0) goto LAB_03793c9c;
                      lVar20 = (long)(int)*(uint *)(unaff_x19 + 0x334);
                      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x334))
                      goto thunk_FUN_01ab6c44;
                      lVar34 = *(long *)(in_stack_000001c0 + 0x48);
                      if (lVar34 == 0) goto LAB_03793c9c;
                      uVar43 = *(uint *)(unaff_x19 + 0x340);
                      if (((*(char *)(lVar29 + lVar20 * unaff_x27 + 0x1a0) == '\0') &&
                          (lVar20 = (long)(int)*(uint *)(unaff_x19 + 0x32c),
                          *(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x32c))) ||
                         (uVar39 = (uint)*(undefined8 *)(lVar34 + 0x18), uVar39 <= uVar43))
                      goto thunk_FUN_01ab6c44;
                      fVar46 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                               (*(float *)(unaff_x19 + 0x2ec) +
                               in_stack_00000158 * (fVar64 + fVar48 + fVar45));
                      fVar45 = -fVar46;
                      if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
                        fVar45 = fVar46;
                      }
                      *(float *)(lVar34 + (long)(int)uVar43 * 0x60 + 0x5c) =
                           *(float *)(lVar29 + lVar20 * unaff_x27 + 0x164) + fVar45;
                      if (uVar39 <= uVar43) goto thunk_FUN_01ab6c44;
                      lVar34 = lVar34 + (long)(int)uVar43 * 0x60;
                      *(float *)(lVar34 + 0x54) = 0.0 - *(float *)(unaff_x19 + 0x2e0);
                      *(float *)(lVar34 + 0x58) = fVar47;
                      *(float *)(lVar34 + 0x4c) = in_stack_000000a0._4_4_ + (fVar50 - fVar47);
                      *(float *)(lVar34 + 0x50) = fVar50;
                      if (0x2c < (int)in_stack_0000169c) {
                        if ((in_stack_0000169c - 0x2028 < 2) || (in_stack_0000169c == 0x2d))
                        goto LAB_03790360;
                        goto LAB_03790574;
                      }
                      if (in_stack_0000169c - 10 < 2) {
LAB_03790360:
                        FUN_03796df8();
                        uVar14 = *(uint *)(unaff_x19 + 0x324);
                        iVar17 = *(int *)(unaff_x19 + 0x340) + 1;
                        *(int *)(unaff_x19 + 0x340) = iVar17;
                        *(uint *)(unaff_x19 + 0x328) = uVar14 + 1;
                        in_stack_000001d0[8] = 0;
                        in_stack_000001d0[9] = 0;
                        if (*(long *)(in_stack_000001c0 + 0x48) != 0) {
                          if (*(int *)(*(long *)(in_stack_000001c0 + 0x48) + 0x18) <= iVar17) {
                            if (*(int *)(*(long *)
                                          Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                                        + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            FUN_037a56f4(iVar17,in_stack_000001c0,0);
                            uVar14 = *in_stack_000001d0;
                          }
                          lVar29 = *in_stack_000001e8;
                          if (lVar29 != 0) {
                            if (uVar14 < *(uint *)(lVar29 + 0x18)) {
                              fVar45 = *(float *)(lVar29 + (long)(int)uVar14 * (long)iVar13 + 0x158)
                              ;
                              if (*(float *)(unaff_x19 + 0x2e4) == DAT_00d38ba4) {
                                if ((in_stack_0000169c == 0x2029) ||
                                   (fVar46 = 0.0, in_stack_0000169c == 10)) {
                                  fVar46 = *(float *)(in_stack_000001e0 + 0xcc);
                                }
                                uVar26 = 0;
                                fVar46 = fVar45 + (0.0 - *(float *)(unaff_x19 + 0x33c)) +
                                         fStack0000000000000088 *
                                         (in_stack_00000080._4_4_ + *(float *)(unaff_x19 + 0x15b0))
                                         + in_stack_00000158 *
                                           (*(float *)(in_stack_000001e0 + 200) + fVar46) +
                                         *(float *)(unaff_x19 + 0x2e0);
                              }
                              else {
                                if ((in_stack_0000169c == 0x2029) ||
                                   (fVar46 = 0.0, in_stack_0000169c == 10)) {
                                  fVar46 = *(float *)(in_stack_000001e0 + 0xcc);
                                }
                                uVar26 = 1;
                                fVar46 = *(float *)(unaff_x19 + 0x2e0) +
                                         *(float *)(unaff_x19 + 0x2e4) +
                                         in_stack_00000158 *
                                         (*(float *)(in_stack_000001e0 + 200) + fVar46);
                              }
                              *(float *)(unaff_x19 + 0x2e0) = fVar46;
                              *(float *)(unaff_x19 + 0x15ac) = fVar45;
                              *(undefined1 *)(unaff_x19 + 0x2e8) = uVar26;
                              *(undefined8 *)(unaff_x19 + 0x338) = _uStack0000000000000090;
                              *(float *)(unaff_x19 + 0x2f4) =
                                   *(float *)(unaff_x19 + 0x2f8) + 0.0 +
                                   *(float *)(unaff_x19 + 0x2fc);
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
                          in_stack_0000160c =
                               (uint)*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
                          goto LAB_03790574;
                        }
                        goto LAB_03793c9c;
                      }
                    }
                    else {
                      lVar29 = *in_stack_000001e8;
                      if (lVar29 == 0) goto LAB_03793c9c;
                    }
LAB_03790574:
                    uVar43 = *in_stack_000001d0;
                    if (*(uint *)(lVar29 + 0x18) <= uVar43) goto thunk_FUN_01ab6c44;
                    if (*(char *)(lVar29 + (long)(int)uVar43 * unaff_x27 + 0x1a0) != '\0') {
                      lVar29 = lVar29 + (long)(int)uVar43 * unaff_x27;
                      uVar21 = *(ulong *)(unaff_x19 + 0x360);
                      uVar22 = *(ulong *)(lVar29 + 0x124);
                      *(ulong *)(unaff_x19 + 0x360) =
                           uVar21 ^ (uVar21 ^ uVar22) &
                                    ~CONCAT44(-(uint)((float)(uVar21 >> 0x20) <
                                                     (float)(uVar22 >> 0x20)),
                                              -(uint)((float)uVar21 < (float)uVar22));
                      uVar21 = *(ulong *)(unaff_x19 + 0x368);
                      uVar22 = *(ulong *)(lVar29 + 0x130);
                      *(ulong *)(unaff_x19 + 0x368) =
                           uVar21 ^ (uVar21 ^ uVar22) &
                                    ~CONCAT44(-(uint)((float)(uVar22 >> 0x20) <
                                                     (float)(uVar21 >> 0x20)),
                                              -(uint)((float)uVar22 < (float)uVar21));
                    }
                    if ((iStack000000000000008c != 0) ||
                       ((*(uint *)(in_stack_000001e0 + 0x74) < 7 &&
                        ((1 << (ulong)(*(uint *)(in_stack_000001e0 + 0x74) & 0x1f) & 0x4aU) != 0))))
                    {
                      if ((uVar14 == 0) &&
                         (((in_stack_0000169c != 0x2d && (in_stack_0000169c != 0x200b)) &&
                          (in_stack_0000169c != 0xad)))) {
                        if (*(char *)(unaff_x19 + 0x37d) == '\0') {
LAB_03790684:
                          if (*(int *)(*(long *)
                                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                                      + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar21 = FUN_037a5f20(in_stack_0000169c,0);
                          if ((uVar21 & 1) == 0) {
LAB_037906cc:
                            if (*(int *)(*(long *)
                                          Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                                        + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar21 = FUN_037a5f90(in_stack_0000169c,0);
                            if ((uVar21 & 1) == 0) goto LAB_037907cc;
                            if (in_stack_00000060 == 0) goto LAB_03793c9c;
                          }
                          else {
                            if ((in_stack_00000060 == 0) ||
                               (lVar29 = FUN_037a8a5c(in_stack_00000060,0), lVar29 == 0))
                            goto LAB_03793c9c;
                            if (*(char *)(lVar29 + 0x28) != '\0') goto LAB_037906cc;
                          }
                          lVar29 = FUN_037a8a5c(in_stack_00000060,0);
                          if ((lVar29 == 0) || (lVar29 = FUN_037aad04(lVar29,0), lVar29 == 0))
                          goto LAB_03793c9c;
                          uVar49 = (undefined4)((ulong)uVar24 >> 0x20);
                          uVar24 = CONCAT44(uVar49,in_stack_0000169c);
                          uVar21 = FUN_021e4dc4(lVar29,&stack0x000016a0,
                                                *(undefined8 *)PTR_DAT_03ccd4e8);
                          if ((int)*in_stack_000001d0 < (int)uStack00000000000000dc) {
                            lVar29 = FUN_037a8a5c(in_stack_00000060,0);
                            if (lVar29 == 0) goto LAB_03793c9c;
                            lVar29 = FUN_037aaf28(lVar29,0);
                            lVar20 = *in_stack_000001e8;
                            if (lVar20 == 0) goto LAB_03793c9c;
                            if (*(uint *)(lVar20 + 0x18) <= *in_stack_000001d0 + 1)
                            goto thunk_FUN_01ab6c44;
                            if (lVar29 == 0) goto LAB_03793c9c;
                            uVar24 = CONCAT44(uVar49,(uint)*(ushort *)
                                                            (lVar20 + (long)(int)(*in_stack_000001d0
                                                                                 + 1) * (long)iVar13
                                                            + 0x20));
                            uVar22 = FUN_021e4dc4(lVar29,&stack0x000016a0,
                                                  *(undefined8 *)PTR_DAT_03ccd4e8);
                            if ((uVar21 & 1) != 0) goto LAB_037909e8;
                            if ((uVar22 & 1) == 0) goto LAB_03790cd4;
                            if ((bStack00000000000000d8 & 1) == 0) goto LAB_03790854;
                          }
                          else {
                            if ((uVar21 & 1) == 0) {
LAB_03790cd4:
                              FUN_03796df8();
                              bStack00000000000000d8 = 0;
                              goto LAB_03790864;
                            }
LAB_037909e8:
                            if (uVar15 != uVar32 || ((bStack00000000000000d8 ^ 0xff) & 1) != 0)
                            goto LAB_03790864;
                          }
                          if (uVar14 != 0) {
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
                          if ((uVar14 != 0 && in_stack_0000169c != 0xa0) ||
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
                            ((1L << ((ulong)(in_stack_0000169c - 0x2007) & 0x3f) & 0x10000000401U)
                             != 0)) ||
                           ((in_stack_0000169c == 0xa0 || (in_stack_0000169c == 0x2060))))
                        goto LAB_03790684;
                        FUN_03796df8();
                        bStack00000000000000d8 = 0;
                        *(undefined4 *)(unaff_x19 + 0x11e0) = 0xffffffff;
                      }
                    }
LAB_03790864:
                    FUN_03796df8();
                    *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
                    in_stack_00001688 = uVar18;
                    goto LAB_0378d260;
                  }
                  goto thunk_FUN_01ab6c44;
                }
                goto LAB_03793c9c;
              }
              goto thunk_FUN_01ab6c44;
            }
            goto LAB_03793c9c;
          }
          goto thunk_FUN_01ab6c44;
        }
      }
    }
  }
LAB_03793c9c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
LAB_0379194c:
  do {
    uVar14 = uVar32 - 1;
    if (*(uint *)(lVar29 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    lVar44 = (long)(int)uVar14;
    lVar20 = lVar29 + lVar44 * 0x188;
    lVar34 = *(long *)(lVar20 + 0x40);
    uVar2 = *(ushort *)(lVar20 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    bVar11 = FUN_026b63d8(uVar2,0);
    if (*(uint *)(lVar29 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    lVar20 = *(long *)(in_stack_000001c0 + 0x48);
    uVar43 = (uint)uVar2;
    if (lVar20 == 0) goto LAB_03793c9c;
    uVar39 = *(uint *)(lVar29 + lVar44 * 0x188 + 0x6c);
    if (*(uint *)(lVar20 + 0x18) <= uVar39) goto thunk_FUN_01ab6c44;
    lVar35 = (long)(int)uVar39;
    lVar20 = lVar20 + lVar35 * 0x60;
    uVar4 = *(uint *)(lVar20 + 0x40);
    uVar42 = *(uint *)(lVar20 + 0x6c);
    iVar16 = *(int *)(lVar20 + 0x20);
    iVar13 = *(int *)(lVar20 + 0x28);
    iVar17 = *(int *)(lVar20 + 0x2c);
    uVar5 = *(uint *)(lVar20 + 0x44);
    lVar36 = (long)(int)uVar5;
    fVar50 = *(float *)(lVar20 + 0x50);
    fVar52 = *(float *)(lVar20 + 0x58);
    fVar63 = *(float *)(lVar20 + 0x5c);
    fVar71 = *(float *)(lVar20 + 0x60);
    fVar53 = *(float *)(lVar20 + 100);
    fVar64 = *(float *)(lVar20 + 0x70);
    fVar54 = *(float *)(lVar20 + 0x74);
    fVar48 = *(float *)(lVar20 + 0x78);
    fVar51 = *(float *)(lVar20 + 0x7c);
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
          uVar28 = 0x1020;
          goto LAB_03791bc8;
        }
      }
      else if ((uVar42 != 0x2008) && (uVar42 != 0x2010)) {
        uVar28 = 0x2020;
LAB_03791bc8:
        if (uVar42 != uVar28) goto switchD_03791aa4_caseD_1003;
LAB_03791c08:
        fVar63 = fVar64 + fVar48;
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
        if ((int)uVar14 <= (int)uVar5) {
          if (uVar43 < 0xad) {
            if ((uVar43 != 3) && (uVar43 != 10)) goto FUN_03791eb4;
          }
          else if ((uVar43 != 0xad) && ((uVar43 != 0x200b && (uVar43 != 0x2060)))) {
FUN_03791eb4:
            if (*(uint *)(lVar29 + 0x18) <= uVar4) goto thunk_FUN_01ab6c44;
            uVar3 = *(undefined2 *)(lVar29 + (long)(int)uVar4 * 0x188 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              plVar19 = (long *)PTR_DAT_03cbded8;
            }
            uVar25 = FUN_026b8cc4(uVar3,0);
            if ((uVar25 & 1) == 0) {
              bVar10 = (int)uVar39 < *(int *)(unaff_x19 + 0x340);
            }
            else {
              bVar10 = false;
            }
            if ((fVar63 <= fVar71) && (!bVar10 && (uVar42 >> 4 & 1) == 0)) {
              in_stack_00000158 = fVar53;
              if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
                in_stack_00000158 = fVar71 + fVar53;
              }
              goto LAB_03791c20;
            }
            if ((uVar32 == 1) || (uVar39 != uVar15)) {
              cVar27 = *(char *)(in_stack_000001e0 + 0xb6);
            }
            else {
              cVar27 = *(char *)(in_stack_000001e0 + 0xb6);
              if (uVar14 != *(uint *)(in_stack_000001e0 + 0xe4)) {
                iVar17 = (iVar17 - iVar16) - (uStack0000000000000090 & 1);
                fVar53 = -fVar63;
                if (cVar27 != '\0') {
                  fVar53 = fVar63;
                }
                if (iVar17 < 1) {
                  fVar63 = 1.0;
                }
                else {
                  fVar63 = *(float *)(in_stack_000001e0 + 0x7c);
                }
                if (iVar17 < 2) {
                  iVar17 = 1;
                }
                fVar71 = fVar71 + fVar53;
                if (uVar43 == 9) {
LAB_037939d0:
                  if (cVar27 != '\0') {
                    fVar71 = fVar71 * (1.0 - fVar63);
                    fVar53 = (float)iVar17;
LAB_03793a0c:
                    in_stack_00000158 = in_stack_00000158 - fVar71 / fVar53;
                    break;
                  }
                  fVar53 = (float)iVar17;
                  fVar71 = fVar71 * (1.0 - fVar63);
                }
                else {
                  if (uVar43 != 0xa0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar25 = FUN_026b97f8(uVar43,0);
                    cVar27 = *(char *)(in_stack_000001e0 + 0xb6);
                    if ((uVar25 & 1) != 0) goto LAB_037939d0;
                  }
                  fVar71 = fVar71 * fVar63;
                  fVar53 = (float)(int)((iVar16 - (~uStack0000000000000090 & 1)) + iVar13);
                  if (cVar27 != '\0') goto LAB_03793a0c;
                }
                in_stack_00000158 = in_stack_00000158 + fVar71 / fVar53;
                uStack0000000000000148 =
                     CONCAT44((float)((ulong)uStack0000000000000148 >> 0x20) + 0.0,
                              (float)uStack0000000000000148 + 0.0);
                break;
              }
            }
            in_stack_00000158 = fVar53;
            if (cVar27 != '\0') {
              in_stack_00000158 = fVar71 + fVar53;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000090 = FUN_026b97f8(uVar43,0);
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
          in_stack_00000158 = fVar53 + 0.0;
        }
        else {
          in_stack_00000158 = 0.0 - fVar63;
        }
        break;
      case 0x1002:
switchD_03791aa4_caseD_1002:
LAB_03791c1c:
        in_stack_00000158 = (fVar53 + fVar71 * 0.5) - fVar63 * 0.5;
        break;
      case 0x1003:
      case 0x1005:
      case 0x1006:
      case 0x1007:
        goto switchD_03791aa4_caseD_1003;
      case 0x1004:
switchD_03791aa4_caseD_1004:
        in_stack_00000158 = (fVar71 + fVar53) - fVar63;
        if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
          in_stack_00000158 = fVar71 + fVar53;
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
    uVar42 = (uint)*(undefined8 *)(lVar29 + 0x18);
    if (uVar42 <= uVar14) goto thunk_FUN_01ab6c44;
    lVar20 = lVar29 + lVar44 * 0x188;
    fVar53 = fStack0000000000000120 + in_stack_00000158;
    fVar63 = (float)uStack0000000000000118 + (float)uStack0000000000000148;
    fVar71 = (float)((ulong)uStack0000000000000118 >> 0x20) +
             (float)((ulong)uStack0000000000000148 >> 0x20);
    if (*(char *)(lVar20 + 0x1a0) == '\0') goto LAB_037924bc;
    cVar27 = *(char *)(lVar29 + lVar44 * 0x188 + 0x28);
    if (cVar27 != '\x01') goto LAB_0379225c;
    fVar47 = fmodf(*(float *)(in_stack_000001e0 + 0xfc) * (float)(int)uVar39,1.0);
    plVar19 = (long *)PTR_DAT_03cbded8;
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf4)) {
    case 0:
      fVar47 = 1.0;
      lVar31 = lVar29 + lVar44 * 0x188;
      *(undefined4 *)(lVar31 + 0xbc) = 0;
      *(undefined4 *)(lVar31 + 0x94) = 0;
      *(undefined4 *)(lVar31 + 0xe4) = 0x3f800000;
      break;
    case 1:
      fVar51 = *(float *)(lVar29 + lVar44 * 0x188 + 0xa0);
      if (*(int *)(in_stack_000001e0 + 0x70) == 0x208) {
        lVar31 = lVar29 + lVar44 * 0x188;
        fVar48 = (in_stack_00000158 + fVar51) - *(float *)(unaff_x19 + 0x360);
        fVar51 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
        goto LAB_03791dcc;
      }
      lVar31 = lVar29 + lVar44 * 0x188;
      fVar48 = fVar48 - fVar64;
      *(float *)(lVar31 + 0xbc) = fVar47 + (fVar51 - fVar64) / fVar48;
      *(float *)(lVar31 + 0x94) = fVar47 + (*(float *)(lVar31 + 0x78) - fVar64) / fVar48;
      *(float *)(lVar31 + 0xe4) = fVar47 + (*(float *)(lVar31 + 200) - fVar64) / fVar48;
      fVar47 = fVar47 + (*(float *)(lVar31 + 0xf0) - fVar64) / fVar48;
      break;
    case 2:
      lVar31 = lVar29 + lVar44 * 0x188;
      fVar51 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
      fVar48 = (in_stack_00000158 + *(float *)(lVar31 + 0xa0)) - *(float *)(unaff_x19 + 0x360);
LAB_03791dcc:
      *(float *)(lVar31 + 0xbc) = fVar47 + fVar48 / fVar51;
      *(float *)(lVar31 + 0x94) =
           fVar47 + ((in_stack_00000158 + *(float *)(lVar31 + 0x78)) - *(float *)(unaff_x19 + 0x360)
                    ) / (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      *(float *)(lVar31 + 0xe4) =
           fVar47 + ((in_stack_00000158 + *(float *)(lVar31 + 200)) - *(float *)(unaff_x19 + 0x360))
                    / (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      fVar47 = fVar47 + ((in_stack_00000158 + *(float *)(lVar31 + 0xf0)) -
                        *(float *)(unaff_x19 + 0x360)) /
                        (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      break;
    case 3:
      switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
      case 0:
        lVar31 = lVar29 + lVar44 * 0x188;
        *(undefined4 *)(lVar31 + 0xc0) = 0;
        *(undefined4 *)(lVar31 + 0x98) = 0x3f800000;
        *(undefined4 *)(lVar31 + 0xe8) = 0;
        *(undefined4 *)(lVar31 + 0x110) = 0x3f800000;
        break;
      case 1:
        fVar51 = fVar51 - fVar54;
        lVar31 = lVar29 + lVar44 * 0x188;
        fVar48 = fVar47 + (*(float *)(lVar31 + 0xa4) - fVar54) / fVar51;
        fVar51 = fVar47 + (*(float *)(lVar31 + 0x7c) - fVar54) / fVar51;
        *(float *)(lVar31 + 0xc0) = fVar48;
        *(float *)(lVar31 + 0x98) = fVar51;
        *(float *)(lVar31 + 0xe8) = fVar48;
        *(float *)(lVar31 + 0x110) = fVar51;
        break;
      case 2:
        lVar31 = lVar29 + lVar44 * 0x188;
        fVar48 = fVar47 + (*(float *)(lVar31 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
                          (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
        *(float *)(lVar31 + 0xc0) = fVar48;
        fVar51 = *(float *)(unaff_x19 + 0x364);
        fVar64 = *(float *)(unaff_x19 + 0x36c);
        *(float *)(lVar31 + 0xe8) = fVar48;
        fVar48 = fVar47 + (*(float *)(lVar31 + 0x7c) - fVar51) / (fVar64 - fVar51);
        *(float *)(lVar31 + 0x98) = fVar48;
        *(float *)(lVar31 + 0x110) = fVar48;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar42 = (uint)*(undefined8 *)(lVar29 + 0x18);
      }
      if (uVar42 <= uVar14) goto thunk_FUN_01ab6c44;
      lVar31 = lVar29 + lVar44 * 0x188;
      fVar48 = *(float *)(lVar31 + 0x168);
      fVar51 = (1.0 - (*(float *)(lVar31 + 0xc0) + *(float *)(lVar31 + 0x98)) * fVar48) * 0.5;
      fVar64 = fVar47 + *(float *)(lVar31 + 0xc0) * fVar48 + fVar51;
      fVar47 = fVar47 + *(float *)(lVar31 + 0x98) * fVar48 + fVar51;
      *(float *)(lVar31 + 0xbc) = fVar64;
      *(float *)(lVar31 + 0x94) = fVar64;
      *(float *)(lVar31 + 0xe4) = fVar47;
      break;
    default:
      goto switchD_03791d04_default;
    }
    *(float *)(lVar29 + lVar44 * 0x188 + 0x10c) = fVar47;
switchD_03791d04_default:
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
    case 0:
      if (uVar42 <= uVar14) goto thunk_FUN_01ab6c44;
      lVar31 = lVar29 + lVar44 * 0x188;
      *(undefined4 *)(lVar31 + 0xc0) = 0;
      *(undefined4 *)(lVar31 + 0x98) = 0x3f800000;
      *(undefined4 *)(lVar31 + 0xe8) = 0x3f800000;
      *(undefined4 *)(lVar31 + 0x110) = 0;
      break;
    case 1:
      if (uVar14 < uVar42) {
        fVar50 = fVar50 - fVar52;
        lVar31 = lVar29 + lVar44 * 0x188;
        fVar47 = (*(float *)(lVar31 + 0xa4) - fVar52) / fVar50;
        fVar50 = (*(float *)(lVar31 + 0x7c) - fVar52) / fVar50;
        *(float *)(lVar31 + 0xc0) = fVar47;
        goto LAB_0379217c;
      }
      goto thunk_FUN_01ab6c44;
    case 2:
      if (uVar42 <= uVar14) goto thunk_FUN_01ab6c44;
      lVar31 = lVar29 + lVar44 * 0x188;
      fVar47 = (*(float *)(lVar31 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
      *(float *)(lVar31 + 0xc0) = fVar47;
      fVar50 = (*(float *)(lVar31 + 0x7c) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
LAB_0379217c:
      *(float *)(lVar31 + 0x98) = fVar50;
      *(float *)(lVar31 + 0xe8) = fVar50;
      *(float *)(lVar31 + 0x110) = fVar47;
      break;
    case 3:
      if (uVar42 <= uVar14) goto thunk_FUN_01ab6c44;
      lVar31 = lVar29 + lVar44 * 0x188;
      fVar50 = *(float *)(lVar31 + 0x168);
      fVar48 = (1.0 - (*(float *)(lVar31 + 0xbc) + *(float *)(lVar31 + 0xe4)) / fVar50) * 0.5;
      fVar47 = *(float *)(lVar31 + 0xbc) / fVar50 + fVar48;
      fVar48 = *(float *)(lVar31 + 0xe4) / fVar50 + fVar48;
      *(float *)(lVar31 + 0xc0) = fVar47;
      *(float *)(lVar31 + 0x98) = fVar48;
      *(float *)(lVar31 + 0x110) = fVar47;
      *(float *)(lVar31 + 0xe8) = fVar48;
    }
    if (uVar42 <= uVar14) goto thunk_FUN_01ab6c44;
    lVar31 = lVar29 + lVar44 * 0x188;
    fVar47 = *(float *)(lVar31 + 0x16c) * (1.0 - *(float *)(unaff_x19 + 0x1594));
    if ((*(char *)(lVar31 + 100) == '\0') && ((*(byte *)(lVar29 + lVar44 * 0x188 + 0x19c) & 1) != 0)
       ) {
      fVar47 = -fVar47;
    }
    lVar31 = lVar29 + lVar44 * 0x188;
    *(float *)(lVar31 + 0xb8) = fVar47;
    *(float *)(lVar31 + 0x90) = fVar47;
    *(float *)(lVar31 + 0xe0) = fVar47;
    *(float *)(lVar31 + 0x108) = fVar47;
    *(undefined4 *)(lVar31 + 0xbc) = 0x3f800000;
    *(float *)(lVar31 + 0xc0) = fVar47;
    *(undefined4 *)(lVar31 + 0x94) = 0x3f800000;
    *(float *)(lVar31 + 0x98) = fVar47;
    *(undefined4 *)(lVar31 + 0xe4) = 0x3f800000;
    *(float *)(lVar31 + 0xe8) = fVar47;
    *(undefined4 *)(lVar31 + 0x10c) = 0x3f800000;
    *(float *)(lVar31 + 0x110) = fVar47;
LAB_0379225c:
    if (((int)uVar14 < *(int *)(in_stack_000001e0 + 0xd8)) &&
       (iStack0000000000000138 < *(int *)(in_stack_000001e0 + 0xdc))) {
      if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar39) ||
         (*(int *)(in_stack_000001e0 + 0x74) == 5)) {
        if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar39) ||
           (*(int *)(in_stack_000001e0 + 0x74) != 5)) goto LAB_037922d4;
        if (uVar14 < uVar42) {
          bVar10 = *(uint *)(lVar29 + lVar44 * 0x188 + 0x70) == uStack000000000000005c;
          goto LAB_037922d8;
        }
        goto thunk_FUN_01ab6c44;
      }
      if (uVar42 <= uVar14) goto thunk_FUN_01ab6c44;
LAB_037922e4:
      lVar20 = lVar29 + lVar44 * 0x188;
      *(ulong *)(lVar20 + 0xa0) =
           CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar20 + 0xa0) >> 0x20),
                    fVar53 + (float)*(undefined8 *)(lVar20 + 0xa0));
      *(float *)(lVar20 + 0xa8) = fVar71 + *(float *)(lVar20 + 0xa8);
      *(ulong *)(lVar20 + 0x78) =
           CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar20 + 0x78) >> 0x20),
                    fVar53 + (float)*(undefined8 *)(lVar20 + 0x78));
      *(float *)(lVar20 + 0x80) = fVar71 + *(float *)(lVar20 + 0x80);
      *(ulong *)(lVar20 + 200) =
           CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar20 + 200) >> 0x20),
                    fVar53 + (float)*(undefined8 *)(lVar20 + 200));
      *(float *)(lVar20 + 0xd0) = fVar71 + *(float *)(lVar20 + 0xd0);
      *(ulong *)(lVar20 + 0xf0) =
           CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar20 + 0xf0) >> 0x20),
                    fVar53 + (float)*(undefined8 *)(lVar20 + 0xf0));
      *(float *)(lVar20 + 0xf8) = fVar71 + *(float *)(lVar20 + 0xf8);
    }
    else {
LAB_037922d4:
      bVar10 = false;
LAB_037922d8:
      if (uVar42 <= uVar14) goto thunk_FUN_01ab6c44;
      if (bVar10) goto LAB_037922e4;
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(plVar19);
        DAT_0411f172 = '\x01';
        uVar42 = *(uint *)(lVar29 + 0x18);
      }
      uVar60 = *(undefined4 *)(*(undefined8 **)(*plVar19 + 0xb8) + 1);
      lVar31 = lVar29 + lVar44 * 0x188;
      *(undefined8 *)(lVar31 + 0xa0) = **(undefined8 **)(*plVar19 + 0xb8);
      *(undefined4 *)(lVar31 + 0xa8) = uVar60;
      if (uVar42 <= uVar14) goto thunk_FUN_01ab6c44;
      uVar60 = *(undefined4 *)(*(undefined8 **)(*plVar19 + 0xb8) + 1);
      lVar31 = lVar29 + lVar44 * 0x188;
      *(undefined8 *)(lVar31 + 0x78) = **(undefined8 **)(*plVar19 + 0xb8);
      *(undefined4 *)(lVar31 + 0x80) = uVar60;
      uVar60 = *(undefined4 *)(*(undefined8 **)(*plVar19 + 0xb8) + 1);
      *(undefined8 *)(lVar31 + 200) = **(undefined8 **)(*plVar19 + 0xb8);
      *(undefined4 *)(lVar31 + 0xd0) = uVar60;
      uVar60 = *(undefined4 *)(*(undefined8 **)(*plVar19 + 0xb8) + 1);
      *(undefined8 *)(lVar31 + 0xf0) = **(undefined8 **)(*plVar19 + 0xb8);
      *(undefined4 *)(lVar31 + 0xf8) = uVar60;
      *(undefined1 *)(lVar20 + 0x1a0) = 0;
    }
    iVar13 = FUN_0368e42c(0);
    if (iVar13 == 1) {
      cVar41 = *(char *)(in_stack_000001e0 + 0xa2);
    }
    else {
      cVar41 = '\0';
    }
    if (cVar27 == '\x01') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a429c(uVar14,cVar41 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
    else if (cVar27 == '\x02') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a4cd4(uVar14,cVar41 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
LAB_037924bc:
    lVar20 = *in_stack_000001e8;
    if (lVar20 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar20 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    lVar20 = lVar20 + lVar44 * 0x188;
    uVar18 = *(undefined8 *)(lVar20 + 0x124);
    *(undefined8 *)(lVar20 + 0x124) =
         CONCAT44(fVar63 + (float)((ulong)uVar18 >> 0x20),fVar53 + (float)uVar18);
    *(float *)(lVar20 + 300) = fVar71 + *(float *)(lVar20 + 300);
    lVar20 = *in_stack_000001e8;
    if (lVar20 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar20 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    lVar20 = lVar20 + lVar44 * 0x188;
    *(ulong *)(lVar20 + 0x118) =
         CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar20 + 0x118) >> 0x20),
                  fVar53 + (float)*(undefined8 *)(lVar20 + 0x118));
    *(float *)(lVar20 + 0x120) = fVar71 + *(float *)(lVar20 + 0x120);
    lVar20 = *in_stack_000001e8;
    if (lVar20 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar20 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    lVar20 = lVar20 + lVar44 * 0x188;
    *(ulong *)(lVar20 + 0x130) =
         CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar20 + 0x130) >> 0x20),
                  fVar53 + (float)*(undefined8 *)(lVar20 + 0x130));
    *(float *)(lVar20 + 0x138) = fVar71 + *(float *)(lVar20 + 0x138);
    lVar20 = *in_stack_000001e8;
    if (lVar20 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar20 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    lVar20 = lVar20 + lVar44 * 0x188;
    *(float *)(lVar20 + 0x13c) = fVar53 + *(float *)(lVar20 + 0x13c);
    *(ulong *)(lVar20 + 0x140) =
         CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar20 + 0x140) >> 0x20),
                  fVar63 + (float)*(undefined8 *)(lVar20 + 0x140));
    lVar20 = *in_stack_000001e8;
    if (lVar20 == 0) goto LAB_03793c9c;
    uVar42 = *(uint *)(lVar20 + 0x18);
    if (uVar42 <= uVar14) goto thunk_FUN_01ab6c44;
    lVar31 = lVar20 + lVar44 * 0x188;
    *(float *)(lVar31 + 0x148) = fVar53 + *(float *)(lVar31 + 0x148);
    *(float *)(lVar31 + 0x164) = fVar53 + *(float *)(lVar31 + 0x164);
    *(float *)(lVar31 + 0x154) = fVar63 + *(float *)(lVar31 + 0x154);
    uVar18 = *(undefined8 *)(lVar31 + 0x14c);
    *(undefined8 *)(lVar31 + 0x14c) =
         CONCAT44(fVar63 + (float)((ulong)uVar18 >> 0x20),fVar63 + (float)uVar18);
    if (uVar39 == uVar15) {
      uVar15 = *in_stack_000001d0 - 1;
      if (uVar14 == uVar15) goto LAB_037926b4;
    }
    else {
      lVar31 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar31 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar31 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
      lVar37 = (long)(int)uVar15;
      lVar40 = lVar31 + lVar37 * 0x60;
      fVar71 = fVar63 + *(float *)(lVar40 + 0x58);
      *(ulong *)(lVar40 + 0x50) =
           CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar40 + 0x50) >> 0x20),
                    fVar63 + (float)*(undefined8 *)(lVar40 + 0x50));
      *(float *)(lVar40 + 0x58) = fVar71;
      *(float *)(lVar40 + 0x5c) = fVar53 + *(float *)(lVar40 + 0x5c);
      if (uVar42 <= *(uint *)(lVar40 + 0x38)) goto thunk_FUN_01ab6c44;
      uVar60 = *(undefined4 *)(lVar20 + (long)(int)*(uint *)(lVar40 + 0x38) * 0x188 + 0x124);
      lVar31 = lVar31 + lVar37 * 0x60;
      *(float *)(lVar31 + 0x74) = fVar71;
      *(undefined4 *)(lVar31 + 0x70) = uVar60;
      lVar20 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar20 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar20 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
      lVar31 = *in_stack_000001e8;
      if (lVar31 == 0) goto LAB_03793c9c;
      uVar15 = *(uint *)(lVar20 + lVar37 * 0x60 + 0x44);
      if (*(uint *)(lVar31 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
      lVar20 = lVar20 + lVar37 * 0x60;
      *(undefined4 *)(lVar20 + 0x78) = *(undefined4 *)(lVar31 + (long)(int)uVar15 * 0x188 + 0x130);
      *(undefined4 *)(lVar20 + 0x7c) = *(undefined4 *)(lVar20 + 0x50);
      uVar15 = *in_stack_000001d0 - 1;
LAB_037926b4:
      if (uVar14 == uVar15) {
        lVar20 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar20 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar20 + 0x18) <= uVar39) goto thunk_FUN_01ab6c44;
        lVar31 = lVar20 + lVar35 * 0x60;
        fVar71 = fVar63 + *(float *)(lVar31 + 0x58);
        *(ulong *)(lVar31 + 0x50) =
             CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar31 + 0x50) >> 0x20),
                      fVar63 + (float)*(undefined8 *)(lVar31 + 0x50));
        *(float *)(lVar31 + 0x58) = fVar71;
        *(float *)(lVar31 + 0x5c) = fVar53 + *(float *)(lVar31 + 0x5c);
        lVar37 = *in_stack_000001e8;
        if (lVar37 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar37 + 0x18) <= *(uint *)(lVar31 + 0x38)) goto thunk_FUN_01ab6c44;
        uVar60 = *(undefined4 *)(lVar37 + (long)(int)*(uint *)(lVar31 + 0x38) * 0x188 + 0x124);
        lVar20 = lVar20 + lVar35 * 0x60;
        *(float *)(lVar20 + 0x74) = fVar71;
        *(undefined4 *)(lVar20 + 0x70) = uVar60;
        lVar20 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar20 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar20 + 0x18) <= uVar39) goto thunk_FUN_01ab6c44;
        lVar31 = *in_stack_000001e8;
        if (lVar31 == 0) goto LAB_03793c9c;
        uVar15 = *(uint *)(lVar20 + lVar35 * 0x60 + 0x44);
        if (*(uint *)(lVar31 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
        lVar20 = lVar20 + lVar35 * 0x60;
        *(undefined4 *)(lVar20 + 0x78) = *(undefined4 *)(lVar31 + (long)(int)uVar15 * 0x188 + 0x130)
        ;
        *(undefined4 *)(lVar20 + 0x7c) = *(undefined4 *)(lVar20 + 0x50);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar25 = FUN_026b82c4(uVar43,0);
    if (((((uVar25 & 1) == 0) && (1 < uVar43 - 0x2010)) && (uVar43 != 0xad)) && (uVar43 != 0x2d)) {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        if (uVar32 == 1) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          bVar12 = FUN_026b81f8(uVar43,0);
          if (((uVar43 == 0x200b) || (((bVar11 | bVar12 ^ 1) & 1) != 0)) ||
             (*in_stack_000001d0 == 1)) goto LAB_037930d8;
        }
        uStack000000000000016c = 0;
      }
      else {
        if (((uVar32 != 1) && ((int)uVar14 < (int)(*(uint *)(lVar29 + 0x18) - 1))) &&
           (((int)uVar14 < (int)*in_stack_000001d0 && ((uVar43 == 0x2019 || (uVar43 == 0x27)))))) {
          if (*(uint *)(lVar29 + 0x18) <= uVar32 - 2) goto thunk_FUN_01ab6c44;
          uVar3 = *(undefined2 *)(lVar29 + (long)in_stack_000001a8 + -0x464);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar25 = FUN_026b82c4(uVar3,0);
          if ((uVar25 & 1) != 0) {
            if (*(uint *)(lVar29 + 0x18) <= uVar32) goto thunk_FUN_01ab6c44;
            uVar3 = *(undefined2 *)(lVar29 + (long)in_stack_000001a8 + -0x154);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar25 = FUN_026b82c4(uVar3,0);
            if ((uVar25 & 1) != 0) goto LAB_0379289c;
          }
        }
LAB_037930d8:
        if (uVar14 == *in_stack_000001d0 - 1) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar25 = FUN_026b82c4(uVar43,0);
          fStack0000000000000170 = (float)uVar14;
          if ((uVar25 & 1) == 0) goto LAB_03793114;
        }
        else {
LAB_03793114:
          fStack0000000000000170 = (float)(iStack0000000000000178 - 1);
        }
        lVar20 = *plVar33;
        if (lVar20 == 0) goto LAB_03793c9c;
        uVar15 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar13 = *(int *)(lVar20 + 0x18);
        if (iVar13 < (int)(uVar15 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(plVar33,iVar13 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar20 = *plVar33;
          if (lVar20 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar20 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
        lVar20 = lVar20 + (long)(int)uVar15 * 0xc;
        *(uint *)(lVar20 + 0x20) = uStack0000000000000168;
        *(float *)(lVar20 + 0x24) = fStack0000000000000170;
        *(uint *)(lVar20 + 0x28) = ((int)fStack0000000000000170 - uStack0000000000000168) + 1;
        lVar20 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar20 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar20 + 0x18) <= uVar39) goto thunk_FUN_01ab6c44;
        lVar20 = lVar20 + lVar35 * 0x60;
        uStack000000000000016c = 0;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar20 + 0x34) = *(int *)(lVar20 + 0x34) + 1;
      }
    }
    else {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        uStack0000000000000168 = uVar14;
      }
      if (uVar14 == *in_stack_000001d0 - 1) {
        lVar20 = *plVar33;
        if (lVar20 == 0) goto LAB_03793c9c;
        uVar15 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar13 = *(int *)(lVar20 + 0x18);
        if (iVar13 < (int)(uVar15 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(plVar33,iVar13 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar20 = *plVar33;
          if (lVar20 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar20 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
        lVar20 = lVar20 + (long)(int)uVar15 * 0xc;
        *(uint *)(lVar20 + 0x20) = uStack0000000000000168;
        *(uint *)(lVar20 + 0x24) = uVar14;
        *(uint *)(lVar20 + 0x28) = uVar32 - uStack0000000000000168;
        lVar20 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar20 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar20 + 0x18) <= uVar39) goto thunk_FUN_01ab6c44;
        lVar20 = lVar20 + lVar35 * 0x60;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar20 + 0x34) = *(int *)(lVar20 + 0x34) + 1;
      }
LAB_0379289c:
      uStack000000000000016c = 1;
    }
    lVar20 = *in_stack_000001e8;
    if (lVar20 == 0) goto LAB_03793c9c;
    uVar15 = *(uint *)(lVar20 + 0x18);
    if (uVar15 <= uVar14) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar20 + lVar44 * 0x188 + 0x19c) >> 2 & 1) == 0) {
      if (bVar7) {
LAB_037928d0:
        if (uVar32 - 2 < uVar15) {
          uVar60 = *(undefined4 *)(lVar20 + (long)in_stack_000001a8 + -0x354);
          uVar62 = *(undefined4 *)(lVar20 + (long)in_stack_000001a8 + -0x318);
          goto LAB_03792b34;
        }
        goto thunk_FUN_01ab6c44;
      }
LAB_03792a8c:
      bVar7 = false;
    }
    else {
      lVar35 = *(long *)(unaff_x19 + 0x15b8);
      if (lVar35 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar35 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) goto thunk_FUN_01ab6c44;
      iVar13 = *(int *)(lVar20 + lVar44 * 0x188 + 0x70);
      *(int *)(lVar20 + lVar44 * 0x188 + 0x178) =
           *(int *)(lVar35 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar14) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar39)) {
        bVar10 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar10 = iVar13 + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar10 = false;
      }
      if (uVar43 != 0x200b && (bVar11 & 1) == 0) {
        fVar71 = *(float *)(lVar20 + lVar44 * 0x188 + 0x16c);
        if (fVar46 <= fVar71) {
          fVar46 = fVar71;
        }
        if (iVar13 != iStack00000000000000c0) {
          fStack000000000000015c = fVar45;
        }
        if (lVar34 == 0) goto LAB_03793c9c;
        fVar71 = *(float *)(lVar20 + lVar44 * 0x188 + 0x150);
        if (fStack0000000000000174 <= ABS(fVar47)) {
          fStack0000000000000174 = ABS(fVar47);
        }
        FUN_03779650(&stack0x000016a0,lVar34,0);
        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
        fVar48 = (float)FUN_03776a10(&stack0x00001610,0);
        fVar71 = fVar71 + fVar46 * fVar48;
        iStack00000000000000c0 = iVar13;
        if (fVar71 <= fStack000000000000015c) {
          fStack000000000000015c = fVar71;
        }
      }
      if ((((uVar43 == 0xd) || ((uVar43 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar14)) ||
         (bVar7 || bVar10)) {
LAB_03792a80:
        if (!bVar7) goto LAB_03792a8c;
      }
      else {
        if (uVar14 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar25 = FUN_026b97f8(uVar43,0);
          if ((uVar25 & 1) != 0) goto LAB_03792a80;
        }
        lVar20 = *in_stack_000001e8;
        if (lVar20 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar20 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        lVar20 = lVar20 + lVar44 * 0x188;
        _bStack00000000000000d8 = *(float *)(lVar20 + 0x16c);
        fStack00000000000000d0 = *(float *)(lVar20 + 0x124);
        bVar7 = fVar46 != 0.0;
        fVar71 = _bStack00000000000000d8;
        if (bVar7) {
          fVar71 = fVar46;
        }
        fVar46 = fVar71;
        uVar49 = *(undefined4 *)(lVar20 + 0x174);
        uStack00000000000000cc = 0;
        fVar71 = fVar47;
        if (bVar7) {
          fVar71 = fStack0000000000000174;
        }
        fStack00000000000000c8 = fStack000000000000015c;
        fStack0000000000000174 = fVar71;
      }
      if (*in_stack_000001d0 == 1) {
        lVar20 = *in_stack_000001e8;
        if (lVar20 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar20 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        lVar20 = lVar20 + lVar44 * 0x188;
        uVar60 = *(undefined4 *)(lVar20 + 0x130);
        uVar62 = *(undefined4 *)(lVar20 + 0x16c);
LAB_03792b34:
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,uStack00000000000000cc,uVar60,
                     fStack000000000000015c,0,_bStack00000000000000d8,uVar62);
      }
      else {
        if ((uVar14 == uVar4) || ((int)uVar5 <= (int)uVar14)) {
          lVar20 = *in_stack_000001e8;
          if (lVar20 != 0) {
            lVar35 = lVar44;
            uVar15 = uVar14;
            if (uVar43 == 0x200b || (bVar11 & 1) != 0) {
              lVar35 = lVar36;
              uVar15 = uVar5;
            }
            if (uVar15 < *(uint *)(lVar20 + 0x18)) {
              lVar20 = lVar20 + lVar35 * 0x188;
              uVar60 = *(undefined4 *)(lVar20 + 0x130);
              uVar62 = *(undefined4 *)(lVar20 + 0x16c);
              goto LAB_03792b34;
            }
            goto thunk_FUN_01ab6c44;
          }
          goto LAB_03793c9c;
        }
        if (bVar10) {
          lVar20 = *in_stack_000001e8;
          if (lVar20 != 0) {
            uVar15 = *(uint *)(lVar20 + 0x18);
            goto LAB_037928d0;
          }
          goto LAB_03793c9c;
        }
        if ((int)(*in_stack_000001d0 - 1) <= (int)uVar14) {
LAB_03793294:
          bVar7 = true;
          goto LAB_03792b70;
        }
        lVar20 = *in_stack_000001e8;
        if (lVar20 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar20 + 0x18) <= uVar32) goto thunk_FUN_01ab6c44;
        uVar25 = FUN_03779528(uVar49,*(undefined4 *)(lVar20 + (long)in_stack_000001a8),0);
        if ((uVar25 & 1) != 0) goto LAB_03793294;
        lVar20 = *in_stack_000001e8;
        if (lVar20 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar20 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        lVar20 = lVar20 + lVar44 * 0x188;
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,uStack00000000000000cc,
                     *(undefined4 *)(lVar20 + 0x130),fStack000000000000015c,0,
                     _bStack00000000000000d8,*(undefined4 *)(lVar20 + 0x16c));
      }
      fVar46 = 0.0;
      bVar7 = false;
      fStack000000000000015c = DAT_00d38d70;
      fStack0000000000000174 = 0.0;
    }
LAB_03792b70:
    lVar20 = *in_stack_000001e8;
    if (lVar20 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar20 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    if (lVar34 == 0) goto LAB_03793c9c;
    uVar15 = *(uint *)(lVar20 + lVar44 * 0x188 + 0x19c);
    FUN_03779650(&stack0x000016a0,lVar34,0);
    memcpy(&stack0x00001610,&stack0x000016a0,0x60);
    fVar71 = (float)FUN_03776a30(&stack0x00001610,0);
    if ((uVar15 >> 6 & 1) == 0) {
      if (bVar9) {
        lVar20 = *in_stack_000001e8;
        if (lVar20 != 0) {
          if (uVar32 - 2 < *(uint *)(lVar20 + 0x18)) {
            fVar63 = *(float *)(lVar20 + (long)in_stack_000001a8 + -0x334);
            uVar60 = *(undefined4 *)(lVar20 + (long)in_stack_000001a8 + -0x354);
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
      lVar20 = *in_stack_000001e8;
      if ((lVar20 == 0) || (lVar35 = *(long *)(unaff_x19 + 0x15b8), lVar35 == 0)) goto LAB_03793c9c;
      if ((*(uint *)(lVar35 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) ||
         (*(uint *)(lVar20 + 0x18) <= uVar14)) goto thunk_FUN_01ab6c44;
      *(int *)(lVar20 + lVar44 * 0x188 + 0x180) =
           *(int *)(lVar35 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar14) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar39)) {
        bVar10 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar10 = *(int *)(lVar20 + lVar44 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar10 = false;
      }
      if ((((uVar43 == 0xd) || ((uVar43 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar14)) ||
         (!(bool)(~bVar9 & (bVar10 ^ 1U)))) {
LAB_03792cf0:
        if (!bVar9) goto LAB_03792cf8;
      }
      else {
        if (uVar14 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar25 = FUN_026b97f8(uVar43,0);
          if ((uVar25 & 1) != 0) goto LAB_03792cf0;
          lVar20 = *in_stack_000001e8;
          if (lVar20 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar20 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        lVar20 = lVar20 + lVar44 * 0x188;
        fStack00000000000000f0 = *(float *)(lVar20 + 0x16c);
        fStack00000000000000ec = *(float *)(lVar20 + 0x124);
        fStack00000000000000a8 = *(float *)(lVar20 + 0x68);
        in_stack_000000a0._4_4_ = *(float *)(lVar20 + 0x150);
        fStack00000000000000e0 = fVar71 * fStack00000000000000f0 + in_stack_000000a0._4_4_;
        uStack00000000000000dc = 0;
      }
      uVar15 = *in_stack_000001d0;
      if (uVar15 == 1) {
LAB_03792ef4:
        lVar35 = *in_stack_000001e8;
        if (lVar35 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar35 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        lVar35 = lVar35 + lVar44 * 0x188;
      }
      else {
        lVar20 = lVar44;
        if (uVar14 == uVar4) {
          lVar35 = *in_stack_000001e8;
          if (lVar35 == 0) goto LAB_03793c9c;
          uVar15 = uVar14;
          if ((uVar43 != 0x200b & (bVar11 ^ 1)) == 0) {
            lVar20 = lVar36;
            uVar15 = uVar5;
          }
          if (*(uint *)(lVar35 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
        }
        else {
          if ((int)uVar15 <= (int)uVar14) {
LAB_03792fdc:
            if ((int)uVar14 < (int)uVar15) {
              iVar13 = FUN_036d3364(lVar34,0);
              if (*(uint *)(lVar29 + 0x18) <= uVar32) goto thunk_FUN_01ab6c44;
              lVar20 = *(long *)(lVar29 + (long)in_stack_000001a8 + -0x134);
              if (lVar20 == 0) goto LAB_03793c9c;
              iVar17 = FUN_036d3364(lVar20,0);
              if (iVar13 != iVar17) goto LAB_03792ef4;
            }
            if (!bVar10) {
              bVar9 = true;
              goto LAB_03793338;
            }
            lVar20 = *in_stack_000001e8;
            if (lVar20 != 0) {
              if (uVar32 - 2 < *(uint *)(lVar20 + 0x18)) {
                fVar63 = *(float *)(lVar20 + (long)in_stack_000001a8 + -0x334);
                uVar60 = *(undefined4 *)(lVar20 + (long)in_stack_000001a8 + -0x354);
                goto LAB_037932fc;
              }
              goto thunk_FUN_01ab6c44;
            }
            goto LAB_03793c9c;
          }
          lVar35 = *in_stack_000001e8;
          if (lVar35 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar35 + 0x18) <= uVar32) goto thunk_FUN_01ab6c44;
          if (*(float *)(lVar35 + (long)in_stack_000001a8 + -0x10c) == fStack00000000000000a8) {
            fVar48 = *(float *)(lVar35 + (long)in_stack_000001a8 + -0x24);
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0
                        ) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar25 = FUN_037a2200(fVar63 + fVar48,in_stack_000000a0._4_4_,0);
            if ((uVar25 & 1) != 0) {
              uVar15 = *in_stack_000001d0;
              goto LAB_03792fdc;
            }
            lVar35 = *in_stack_000001e8;
            if (lVar35 == 0) goto LAB_03793c9c;
          }
          uVar15 = uVar14;
          if ((int)uVar5 < (int)uVar14) {
            lVar20 = lVar36;
            uVar15 = uVar5;
          }
          if (*(uint *)(lVar35 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
        }
        lVar35 = lVar35 + lVar20 * 0x188;
      }
      fVar63 = *(float *)(lVar35 + 0x150);
      uVar60 = *(undefined4 *)(lVar35 + 0x130);
LAB_037932fc:
      FUN_0379d0d0(fStack00000000000000ec,fStack00000000000000e0,uStack00000000000000dc,uVar60,
                   fStack00000000000000f0 * fVar71 + fVar63,0,fStack00000000000000f0,
                   fStack00000000000000f0);
      bVar9 = false;
    }
LAB_03793338:
    lVar20 = *in_stack_000001e8;
    if (lVar20 == 0) goto LAB_03793c9c;
    uVar15 = (uint)*(undefined8 *)(lVar20 + 0x18);
    if (uVar15 <= uVar14) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar20 + lVar44 * 0x188 + 0x19d) >> 1 & 1) == 0) {
      if (bVar8) {
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
      }
LAB_03793428:
      bVar8 = false;
    }
    else {
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar14) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar39)) {
        bVar10 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar10 = *(int *)(lVar20 + lVar44 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar10 = false;
      }
      if (!bVar8) {
        if (((uVar43 == 0xd) || ((uVar43 & 0xfffe) == 10)) ||
           (((int)uVar5 < (int)uVar14 || (bVar10)))) goto LAB_03793428;
        if (uVar14 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar25 = FUN_026b97f8(uVar43,0);
          if ((uVar25 & 1) != 0) goto LAB_03793428;
        }
        puVar6 = Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        lVar34 = *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        if (*(int *)(lVar34 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar34 = *(long *)puVar6;
        }
        lVar20 = *in_stack_000001e8;
        if (lVar20 == 0) goto LAB_03793c9c;
        uVar15 = (uint)*(undefined8 *)(lVar20 + 0x18);
        if (uVar15 <= uVar14) goto thunk_FUN_01ab6c44;
        pfVar38 = *(float **)(lVar34 + 0xb8);
        fStack0000000000000128 = *pfVar38;
        in_stack_00000140._4_4_ = pfVar38[1];
        fStack000000000000012c = pfVar38[2];
        fStack0000000000000130 = pfVar38[3];
        uStack0000000000000124 = 0;
      }
      if (uVar15 <= uVar14) goto thunk_FUN_01ab6c44;
      lVar20 = lVar20 + lVar44 * 0x188;
      fVar48 = *(float *)(lVar20 + 0x130);
      fVar52 = *(float *)(lVar20 + 0x124);
      fVar63 = *(float *)(lVar20 + 0x148);
      fVar50 = *(float *)(lVar20 + 0x14c);
      fVar51 = *(float *)(lVar20 + 0x154);
      fVar71 = *(float *)(lVar20 + 0x164);
      uVar25 = FUN_037a20cc(&stack0x00000210,&stack0x000001f0,0);
      lVar20 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
      if ((uVar25 & 1) == 0) {
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar20);
        }
        fVar64 = (float)FUN_037a1dd8(uVar22,0);
        bVar8 = (bVar11 & 1) == 0;
        if (bVar8) {
          fVar63 = fVar52;
        }
        if (bVar8) {
          fVar71 = fVar48;
        }
        if (fVar63 - fVar64 <= fStack0000000000000128) {
          fStack0000000000000128 = fVar63 - fVar64;
        }
        fVar63 = (float)FUN_037a1de0(uVar22,0);
        if (fStack000000000000012c <= fVar71 + fVar63) {
          fStack000000000000012c = fVar71 + fVar63;
        }
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar63 = (float)FUN_037a1df0(uVar22,0);
        if (fVar51 - fVar63 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar51 - fVar63;
        }
        fVar63 = (float)FUN_037a1de8(uVar22,0);
        if (fStack0000000000000130 <= fVar50 + fVar63) {
          fStack0000000000000130 = fVar50 + fVar63;
        }
      }
      else {
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar20);
        }
        fVar64 = (float)FUN_037a1de0(uVar22,0);
        if ((bVar11 & 1) == 0) {
          fVar63 = fVar52;
        }
        if (fVar51 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar51;
        }
        fVar63 = (fVar63 + (fStack000000000000012c - fVar64)) * 0.5;
        if (fStack0000000000000130 <= fVar50) {
          fStack0000000000000130 = fVar50;
        }
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,fVar63,
                     fStack0000000000000130,uStack0000000000000124);
        puVar6 = Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000140._4_4_ = (float)FUN_037a1df0(uVar21,0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000140._4_4_ = fVar51 - in_stack_00000140._4_4_;
        fStack000000000000012c = (float)FUN_037a1de0(uVar21,0);
        fVar51 = (float)FUN_037a1de8(uVar21,0);
        if ((bVar11 & 1) == 0) {
          fVar71 = fVar48;
        }
        fStack000000000000012c = fVar71 + fStack000000000000012c;
        uStack0000000000000124 = 0;
        fStack0000000000000128 = fVar63;
        fStack0000000000000130 = fVar50 + fVar51;
      }
      if ((((*in_stack_000001d0 == 1) || (uVar14 == uVar4)) || ((int)uVar5 <= (int)uVar14)) ||
         (bVar10)) {
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
    }
    uVar14 = *in_stack_000001d0;
    iStack0000000000000178 = iStack0000000000000178 + 1;
    in_stack_000001a8 = (long *)((long)in_stack_000001a8 + 0x188);
    bVar10 = (int)uVar32 < (int)uVar14;
    uVar15 = uVar39;
    uVar32 = uVar32 + 1;
  } while (bVar10);
  iVar13 = uVar39 + 1;
  plVar33 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
LAB_03793a5c:
  *(uint *)(in_stack_000001c0 + 0x10) = uVar14;
  uVar49 = *(undefined4 *)(unaff_x19 + 0x15c0);
  *(int *)(in_stack_000001c0 + 0x24) = iVar13;
  if ((int)uVar14 < 1 || iStack0000000000000138 == 0) {
    iStack0000000000000138 = 1;
  }
  *(int *)(in_stack_000001c0 + 0x1c) = iStack0000000000000138;
  *(undefined4 *)(in_stack_000001c0 + 0x14) = uVar49;
  *(int *)(in_stack_000001c0 + 0x28) = *(int *)(unaff_x19 + 0x350) + 1;
  if (1 < *(int *)(in_stack_000001c0 + 0x2c)) {
    uVar21 = 1;
    lVar29 = 0x70;
    do {
      lVar20 = *(long *)(in_stack_000001c0 + 0x58);
      if (lVar20 == 0) goto LAB_03793c9c;
      if (*(int *)(*plVar33 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(uint *)(lVar20 + 0x18) <= uVar21) goto thunk_FUN_01ab6c44;
      FUN_03785ba0(lVar20 + lVar29,0);
      if (*(int *)(in_stack_000001e0 + 0x100) != 0) {
        lVar20 = *(long *)(in_stack_000001c0 + 0x58);
        if (lVar20 == 0) goto LAB_03793c9c;
        if (*(int *)(*plVar33 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar20 + 0x18) <= uVar21) {
thunk_FUN_01ab6c44:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03785bdc(lVar20 + lVar29,1,0);
      }
      uVar21 = uVar21 + 1;
      lVar29 = lVar29 + 0x50;
    } while ((long)uVar21 < (long)*(int *)(in_stack_000001c0 + 0x2c));
  }
LAB_0378c81c:
  if (*(long *)(in_stack_00000110 + 0x28) == in_stack_00001a38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


