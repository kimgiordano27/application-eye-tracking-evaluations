/*
FUNCTION_NAME: Unity.VisualScripting.LessThanOrEqualHandler.<>c$$.cctor
ENTRY_POINT: 0681a3b8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


float Unity_VisualScripting_LessThanOrEqualHandler_<>c___cctor
                (long param_1,undefined1 param_2 [16],undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  uint *puVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  undefined *puVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  undefined1 uVar27;
  undefined8 *in_x9;
  long unaff_x19;
  float *unaff_x22;
  long *unaff_x23;
  uint unaff_w24;
  uint unaff_w26;
  long *unaff_x27;
  long lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float unaff_s8;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  float fStack0000000000000038;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000074;
  long in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  undefined4 in_stack_00000170;
  uint in_stack_00000bd8;
  uint in_stack_00000bdc;
  
  uVar41 = param_2._8_8_;
  uVar39 = param_2._0_8_;
  FUN_04a0e820(param_1 + 0x10,&stack0x00000be0,*in_x9);
  iVar19 = *(int *)(unaff_x19 + 0x490);
  plVar1 = (long *)(unaff_x19 + 0x488);
  if ((*(long *)(unaff_x19 + 0x488) == 0) ||
     (*(int *)(*(long *)(unaff_x19 + 0x488) + 0x18) < iVar19)) {
    if (iVar19 < 0x401) {
      iVar18 = FUN_06bdf11c(iVar19,0);
    }
    else {
      iVar18 = iVar19 + 0x100;
    }
    lVar23 = FUN_032d5d3c(*(undefined8 *)
                           Method_Nova_InternalNamespace_0_InternalNamespace_2_InternalType_136<InternalType_61>__ctor__
                          ,iVar18);
    *plVar1 = lVar23;
    thunk_FUN_0333a630();
  }
  if (*(long *)(unaff_x19 + 0xf8) != 0) {
    fVar45 = *unaff_x22;
    memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0xf8) + 0x50),0x60);
    iVar18 = FUN_06c5195c(&stack0x00000100,0);
    if (*(long *)(unaff_x19 + 0xf8) != 0) {
      memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0xf8) + 0x50),0x60);
      fVar29 = (float)FUN_06c5196c(&stack0x00000100,0);
      fVar48 = *unaff_x22;
      *(undefined4 *)(unaff_x19 + 0x404) = 0x3f800000;
      *(float *)(unaff_x19 + 0x1e8) = *unaff_x22;
      puVar13 = Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_Add__;
      fVar38 = DAT_013a0014;
      fVar33 = DAT_013a0014;
      if (*(char *)(unaff_x19 + 0x305) != '\0') {
        fVar33 = 1.0;
      }
      FUN_04a0f5c4(unaff_x19 + 0x1f0,
                   *(undefined8 *)
                    Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_Add__);
      *(undefined4 *)(unaff_x19 + 0x25c) = *(undefined4 *)(unaff_x19 + 600);
      *(undefined4 *)(unaff_x19 + 0x278) = *(undefined4 *)(unaff_x19 + 0x26c);
      FUN_04a0e200(unaff_x19 + 0x280,*(undefined4 *)(unaff_x19 + 0x26c),
                   *(undefined8 *)
                    Method_System_Collections_Generic_HashSet<OVRManager_EventListener>__ctor__);
      *(undefined4 *)(unaff_x19 + 0x61c) = 0;
      FUN_04a0f5b8(unaff_x19 + 0x620,
                   *(undefined8 *)
                    Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_Contains__);
      *(undefined4 *)(unaff_x19 + 0x4d8) = 0;
      *(undefined4 *)(unaff_x19 + 0x2c0) = 0xc6fffe00;
      if (*(long *)(unaff_x19 + 0x100) != 0) {
        memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
        fVar30 = (float)FUN_06c5197c(&stack0x00000100,0);
        if (*unaff_x23 != 0) {
          memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
          fVar31 = (float)FUN_06c5198c(&stack0x00000100,0);
          if (*unaff_x23 != 0) {
            memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
            fVar32 = (float)FUN_06c519cc(&stack0x00000100,0);
            *(undefined8 *)(unaff_x19 + 0x2ac) = 0;
            *(undefined4 *)(unaff_x19 + 0x640) = 0;
            *(undefined8 *)(unaff_x19 + 0x408) = 0;
            FUN_04a0f5c4(0,unaff_x19 + 0x410,*(undefined8 *)puVar13);
            *(undefined1 *)(unaff_x19 + 0x430) = 0;
            *(undefined8 *)(unaff_x19 + 0x494) = 0;
            lVar23 = *unaff_x27;
            uStack0000000000000034 = unaff_w26;
            if (*(int *)(lVar23 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar23 = *unaff_x27;
            }
            uVar40 = NEON_rev64(*(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x15a8),4);
            *(undefined4 *)(unaff_x19 + 0x4a8) = 0;
            *(undefined4 *)(unaff_x19 + 0x4d0) = 0;
            *(undefined1 *)(unaff_x19 + 0x2c4) = 0;
            *(undefined8 *)(unaff_x19 + 0x350) = 0;
            *(undefined4 *)(unaff_x19 + 0x360) = 0xbf800000;
            *(undefined1 *)(unaff_x19 + 0x3f5) = 1;
            *(undefined8 *)(unaff_x19 + 0x4b8) = 0;
            *(undefined4 *)(unaff_x19 + 0x4c4) = 0;
            *(undefined8 *)(unaff_x19 + 0x4c8) = uVar40;
            *(undefined1 *)(unaff_x19 + 0x2da) = 0;
            FUN_06838b38(&stack0x00000bd8,0xffffffff,0,0);
            memset(&stack0x00000860,0,0x378);
            memset(&stack0x000004e8,0,0x378);
            memset(&stack0x00000170,0,0x378);
            lVar23 = *(long *)(unaff_x19 + 0x478);
            *(int *)(unaff_x19 + 0x244) = *(int *)(unaff_x19 + 0x244) + 1;
            fVar12 = DAT_013a0604;
            fVar11 = DAT_0139ff50;
            if (lVar23 != 0) {
              plVar2 = (long *)(unaff_x19 + 0x698);
              uVar8 = iVar19 - 1;
              uVar5 = uStack0000000000000034 ^ 1;
              fStack0000000000000064 = 0.0;
              fStack0000000000000048 = 0.0;
              fStack0000000000000044 = 0.0;
              fVar30 = fVar30 - (fVar31 - fVar32);
              fStack000000000000006c = 0.0;
              fStack0000000000000038 = 0.0;
              fVar31 = unaff_s8 + DAT_0139fcd0;
              fStack000000000000005c = 0.0;
              fVar29 = (fVar45 / (float)iVar18) * fVar29 * fVar33;
              bVar10 = false;
              bVar15 = false;
              fVar33 = fVar33 * fVar48 * DAT_013a0604;
              uVar21 = 0;
              puVar3 = (uint *)(unaff_x19 + 0x494);
              plVar4 = (long *)(unaff_x19 + 0x648);
              uStack0000000000000030 = 1;
              fVar45 = fVar29;
LAB_0681a80c:
              if ((int)*(uint *)(lVar23 + 0x18) <= (int)uVar21) {
LAB_0681c11c:
                if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_013a007c
                      ) || ((unaff_w24 & 1) == 0)) ||
                    (fVar45 = *unaff_x22, *(float *)(unaff_x19 + 0x254) <= fVar45)) ||
                   (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
                  fVar45 = *(float *)(unaff_x19 + 0x340);
                  fVar38 = *(float *)(unaff_x19 + 0x348);
                  if (fVar45 <= 0.0) {
                    fVar45 = 0.0;
                  }
                  if (fVar38 <= 0.0) {
                    fVar38 = 0.0;
                  }
                  *(undefined1 *)(unaff_x19 + 0x24c) = 1;
                  fVar38 = (fStack000000000000006c + fVar45 + fVar38) * 100.0 + 1.0;
                  fVar45 = DAT_0139fd80;
                  if (fVar38 != INFINITY) {
                    fVar45 = (float)(int)fVar38 / 100.0;
                  }
                  *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
                  return fVar45;
                }
                if (*(float *)(unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x2d0) / 100.0) {
                  *(undefined4 *)(unaff_x19 + 0x2d4) = 0;
                  fVar45 = *unaff_x22;
                }
                *(float *)(unaff_x19 + 0x240) = fVar45;
                fVar45 = (*(float *)(unaff_x19 + 0x23c) - *unaff_x22) * 0.5;
                if (fVar45 <= DAT_013a0300) {
                  fVar45 = DAT_013a0300;
                }
                fVar45 = *unaff_x22 + fVar45;
                *unaff_x22 = fVar45;
                fVar38 = fVar45 * 20.0 + 0.5;
                fVar45 = DAT_013a07c8;
                if (fVar38 != INFINITY) {
                  fVar45 = (float)(int)fVar38 / 20.0;
                }
                if (*(float *)(unaff_x19 + 0x254) <= fVar45) {
                  fVar45 = *(float *)(unaff_x19 + 0x254);
                }
                *unaff_x22 = fVar45;
                goto LAB_0681c1f0;
              }
              if (*(uint *)(lVar23 + 0x18) <= uVar21) goto LAB_0681c36c;
              uVar22 = *(uint *)(lVar23 + (long)(int)uVar21 * 0xc + 0x20);
              if (uVar22 == 0) goto LAB_0681c11c;
              if ((uVar22 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) {
                *(undefined1 *)(unaff_x19 + 0x431) = 1;
                *(undefined4 *)(unaff_x19 + 0x644) = 0;
                uVar24 = FUN_0681c370();
                if (((uVar24 & 1) == 0) ||
                   (uVar21 = in_stack_000000d8._4_4_, *(int *)(unaff_x19 + 0x644) != 0))
                goto LAB_0681a8b0;
              }
              else {
                if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                   (lVar23 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar23 == 0))
                goto LAB_0681c118;
                if (*(uint *)(lVar23 + 0x18) <= *puVar3) goto LAB_0681c36c;
                lVar23 = lVar23 + (long)(int)*puVar3 * 0x178;
                *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar23 + 0x2c);
                *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar23 + 0x58);
                *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar23 + 0x38);
                thunk_FUN_0333a630();
LAB_0681a8b0:
                if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                   (lVar23 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar23 == 0))
                goto LAB_0681c118;
                uVar20 = *puVar3;
                if (*(uint *)(lVar23 + 0x18) <= uVar20) goto LAB_0681c36c;
                lVar28 = (long)(int)uVar20;
                cVar7 = *(char *)(lVar23 + lVar28 * 0x178 + 0x5c);
                *(undefined1 *)(unaff_x19 + 0x431) = 0;
                uVar47 = *(undefined4 *)(unaff_x19 + 0x120);
                if (in_stack_00000bd8 == uVar20) {
                  *(undefined4 *)(unaff_x19 + 0x644) = 0;
                  if (in_stack_00000bdc == 0x2026) {
                    lVar23 = *plVar1;
                    if (lVar23 != 0) {
                      if (*(uint *)(lVar23 + 0x18) <= uVar20) goto LAB_0681c36c;
                      *(undefined8 *)(lVar23 + lVar28 * 0x178 + 0x30) =
                           *(undefined8 *)(unaff_x19 + 0x650);
                      thunk_FUN_0333a630();
                      lVar23 = *plVar1;
                      if (lVar23 != 0) {
                        if (*(uint *)(lVar23 + 0x18) <= *puVar3) goto LAB_0681c36c;
                        lVar23 = lVar23 + (long)(int)*puVar3 * 0x178;
                        *(undefined4 *)(lVar23 + 0x2c) = 0;
                        *(undefined8 *)(lVar23 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
                        thunk_FUN_0333a630();
                        lVar23 = *(long *)(unaff_x19 + 0x488);
                        if (lVar23 != 0) {
                          if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
                          goto LAB_0681c36c;
                          *(undefined8 *)
                           (lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x494) * 0x178 + 0x50) =
                               *(undefined8 *)(unaff_x19 + 0x660);
                          thunk_FUN_0333a630();
                          lVar23 = *plVar1;
                          if (lVar23 != 0) {
                            uVar20 = *puVar3;
                            if (*(uint *)(lVar23 + 0x18) <= uVar20) goto LAB_0681c36c;
                            bVar16 = true;
                            in_stack_00000bd8 = uVar20 + 1;
                            *(undefined4 *)(lVar23 + (long)(int)uVar20 * 0x178 + 0x58) =
                                 *(undefined4 *)(unaff_x19 + 0x668);
                            uVar22 = 0x2026;
                            *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
                            in_stack_00000bdc = 3;
                            goto LAB_0681aa4c;
                          }
                        }
                      }
                    }
                    goto LAB_0681c118;
                  }
                  if (in_stack_00000bdc != 3) {
                    bVar16 = true;
                    uVar22 = in_stack_00000bdc;
                    goto LAB_0681aa4c;
                  }
                  lVar23 = *plVar1;
                  if (((lVar23 == 0) || (*unaff_x23 == 0)) ||
                     (lVar25 = FUN_067fd3b4(*unaff_x23,0), lVar25 == 0)) goto LAB_0681c118;
                  uVar40 = FUN_0518817c(lVar25,3,*(undefined8 *)
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Add__
                                       );
                  if (*(uint *)(lVar23 + 0x18) <= uVar20) goto LAB_0681c36c;
                  *(undefined8 *)(lVar23 + lVar28 * 0x178 + 0x30) = uVar40;
                  thunk_FUN_0333a630();
                  bVar16 = true;
                  uVar22 = 3;
                  *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
                }
                else {
                  bVar16 = false;
LAB_0681aa4c:
                  if ((uVar22 != 3) && ((int)uVar20 < *(int *)(unaff_x19 + 0x324))) {
                    lVar23 = *plVar1;
                    if (lVar23 != 0) {
                      if (*(uint *)(lVar23 + 0x18) <= uVar20) goto LAB_0681c36c;
                      lVar23 = lVar23 + (long)(int)uVar20 * 0x178;
                      *(undefined1 *)(lVar23 + 0x194) = 0;
                      *(undefined2 *)(lVar23 + 0x20) = 0x200b;
                      *(undefined4 *)(lVar23 + 100) = 0;
                      *puVar3 = uVar20 + 1;
                      goto LAB_0681c108;
                    }
                    goto LAB_0681c118;
                  }
                }
                iVar19 = *(int *)(unaff_x19 + 0x644);
                if (iVar19 == 0) {
                  uVar20 = *(uint *)(unaff_x19 + 0x25c);
                  if ((uVar20 >> 4 & 1) == 0) {
                    if ((uVar20 >> 3 & 1) == 0) {
                      fStack0000000000000068 = 1.0;
                      if ((uVar20 >> 5 & 1) != 0) {
                        if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                          thunk_FUN_032cd7c0();
                        }
                        uVar24 = FUN_058a4af0(uVar22,0);
                        fStack0000000000000068 = 1.0;
                        if ((uVar24 & 1) != 0) {
                          if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                            thunk_FUN_032cd7c0();
                          }
                          uVar22 = FUN_058a4dd0(uVar22,0);
                          fStack0000000000000068 = fVar11;
                          goto LAB_0681adc0;
                        }
                      }
                    }
                    else {
                      if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                      }
                      uVar24 = FUN_058a4a34(uVar22,0);
                      fStack0000000000000068 = 1.0;
                      if ((uVar24 & 1) != 0) {
                        if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                          thunk_FUN_032cd7c0();
                        }
                        uVar22 = FUN_058a4f48(uVar22,0);
                        goto LAB_0681adc0;
                      }
                    }
                  }
                  else {
                    if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                    }
                    uVar24 = FUN_058a4af0(uVar22,0);
                    fStack0000000000000068 = 1.0;
                    if ((uVar24 & 1) != 0) {
                      if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                      }
                      uVar22 = FUN_058a4dd0(uVar22,0);
LAB_0681adc0:
                      uVar22 = uVar22 & 0xffff;
                    }
                  }
                  iVar19 = *(int *)(unaff_x19 + 0x644);
                  if (iVar19 != 0) goto LAB_0681aaac;
LAB_0681adcc:
                  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                     (lVar23 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar23 == 0))
                  goto LAB_0681c118;
                  if (*(uint *)(lVar23 + 0x18) <= *puVar3) goto LAB_0681c36c;
                  *plVar4 = *(long *)(lVar23 + (long)(int)*puVar3 * 0x178 + 0x30);
                  thunk_FUN_0333a630(plVar4);
                  if (*plVar4 == 0) goto LAB_0681c108;
                  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                     (lVar23 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar23 == 0))
                  goto LAB_0681c118;
                  uVar6 = *puVar3;
                  uVar20 = *(uint *)(lVar23 + 0x18);
                  if (uVar20 <= uVar6) goto LAB_0681c36c;
                  *(undefined4 *)(unaff_x19 + 0x120) =
                       *(undefined4 *)(lVar23 + (long)(int)uVar6 * 0x178 + 0x58);
                  if (bVar16) {
                    lVar28 = *(long *)(unaff_x19 + 0x478);
                    if (lVar28 == 0) goto LAB_0681c118;
                    if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_0681c36c;
                    if ((*(int *)(lVar28 + (long)(int)uVar21 * 0xc + 0x20) != 10) ||
                       (uVar6 == *(uint *)(unaff_x19 + 0x498))) goto LAB_0681ae6c;
                    if (uVar20 <= uVar6 - 1) goto LAB_0681c36c;
                    if (*unaff_x23 == 0) goto LAB_0681c118;
                    fVar45 = *(float *)(lVar23 + (long)(int)(uVar6 - 1) * 0x178 + 0x60);
                    iVar19 = FUN_06c5195c(*unaff_x23 + 0x50,0);
                    lVar23 = *unaff_x23;
                  }
                  else {
LAB_0681ae6c:
                    if (*unaff_x23 == 0) goto LAB_0681c118;
                    fVar45 = *(float *)(unaff_x19 + 0x1e8);
                    iVar19 = FUN_06c5195c(*unaff_x23 + 0x50,0);
                    lVar23 = *(long *)(unaff_x19 + 0x100);
                  }
                  if (lVar23 == 0) goto LAB_0681c118;
                  fVar46 = (float)FUN_06c5196c(lVar23 + 0x50,0);
                  fVar32 = fVar38;
                  if (*(char *)(unaff_x19 + 0x305) != '\0') {
                    fVar32 = 1.0;
                  }
                  fVar48 = 0.0;
                  fVar35 = 0.0;
                  if (!(bool)(bVar16 & uVar22 == 0x2026)) {
                    if (*unaff_x23 == 0) goto LAB_0681c118;
                    fVar35 = (float)FUN_06c5198c(*unaff_x23 + 0x50,0);
                    if (*unaff_x23 == 0) goto LAB_0681c118;
                    fVar48 = (float)FUN_06c519cc(*unaff_x23 + 0x50,0);
                  }
                  if ((*plVar4 == 0) || (lVar23 = *(long *)(unaff_x19 + 0x488), lVar23 == 0))
                  goto LAB_0681c118;
                  uVar20 = *(uint *)(unaff_x19 + 0x494);
                  if (*(uint *)(lVar23 + 0x18) <= uVar20) goto LAB_0681c36c;
                  fVar45 = ((fStack0000000000000068 * fVar45) / (float)iVar19) * fVar46 * fVar32 *
                           *(float *)(unaff_x19 + 0x404) * *(float *)(*plVar4 + 0x2c);
                  *(undefined4 *)(lVar23 + (long)(int)uVar20 * 0x178 + 0x2c) = 0;
LAB_0681b0f8:
                  bVar16 = uVar22 == 0xad;
                  fVar32 = 0.0;
                  if (!bVar16 && uVar22 != 3) {
                    fVar32 = fVar45;
                  }
                }
                else {
                  fStack0000000000000068 = 1.0;
                  if (iVar19 == 0) goto LAB_0681adcc;
LAB_0681aaac:
                  if (iVar19 == 1) {
                    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                       (lVar23 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar23 == 0))
                    goto LAB_0681c118;
                    if (*(uint *)(lVar23 + 0x18) <= *puVar3) goto LAB_0681c36c;
                    *(undefined8 *)(unaff_x19 + 0x698) =
                         *(undefined8 *)(lVar23 + (long)(int)*puVar3 * 0x178 + 0x40);
                    thunk_FUN_0333a630(plVar2);
                    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                       (lVar23 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar23 == 0))
                    goto LAB_0681c118;
                    if (*(uint *)(lVar23 + 0x18) <= *puVar3) goto LAB_0681c36c;
                    *(undefined4 *)(unaff_x19 + 0x6a4) =
                         *(undefined4 *)(lVar23 + (long)(int)*puVar3 * 0x178 + 0x48);
                    if ((*(long *)(unaff_x19 + 0x698) == 0) ||
                       (lVar23 = FUN_06833818(*(long *)(unaff_x19 + 0x698),0), lVar23 == 0))
                    goto LAB_0681c118;
                    lVar23 = FUN_041e29a8(lVar23,*(undefined4 *)(unaff_x19 + 0x6a4),
                                          *(undefined8 *)
                                           Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Clear__
                                         );
                    if (lVar23 == 0) goto LAB_0681c108;
                    if (uVar22 == 0x3c) {
                      uVar22 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
                    }
                    if (*plVar2 == 0) goto LAB_0681c118;
                    memmove(&stack0x00000100,(void *)(*plVar2 + 0x48),0x60);
                    iVar19 = FUN_06c5195c(&stack0x00000100,0);
                    fVar45 = *(float *)(unaff_x19 + 0x1e8);
                    if (iVar19 < 1) {
                      if (*unaff_x23 == 0) goto LAB_0681c118;
                      memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
                      iVar19 = FUN_06c5195c(&stack0x00000100,0);
                      if (*unaff_x23 == 0) goto LAB_0681c118;
                      memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
                      fVar32 = (float)FUN_06c5196c(&stack0x00000100,0);
                      fVar48 = fVar38;
                      if (*(char *)(unaff_x19 + 0x305) != '\0') {
                        fVar48 = 1.0;
                      }
                      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_0681c118;
                      memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
                      fVar46 = (float)FUN_06c5198c(&stack0x00000100,0);
                      if (*(long *)(lVar23 + 0x20) == 0) goto LAB_0681c118;
                      FUN_06c51e78(&stack0x00000be0,*(long *)(lVar23 + 0x20),0);
                      in_stack_000000c0 = uVar39;
                      in_stack_000000c8 = uVar41;
                      in_stack_000000d0 = param_3;
                      fVar34 = (float)FUN_06c51ca8(&stack0x000000c0,0);
                      if (*(long *)(lVar23 + 0x20) == 0) goto LAB_0681c118;
                      fVar37 = *(float *)(lVar23 + 0x2c);
                      fVar36 = (float)FUN_06c51eb4(*(long *)(lVar23 + 0x20),0);
                      if (*unaff_x23 == 0) goto LAB_0681c118;
                      memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
                      fVar35 = (float)FUN_06c5198c(&stack0x00000100,0);
                      if (*unaff_x23 == 0) goto LAB_0681c118;
                      fVar48 = (fVar45 / (float)iVar19) * fVar32 * fVar48;
                      fVar45 = fVar48 * (fVar46 / fVar34) * fVar37 * fVar36;
                      fVar48 = fVar48 / fVar45;
                      fVar35 = fVar48 * fVar35;
                      memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
                      fVar32 = (float)FUN_06c519cc(&stack0x00000100,0);
                      fVar48 = fVar48 * fVar32;
                    }
                    else {
                      if (*plVar2 == 0) goto LAB_0681c118;
                      memmove(&stack0x00000100,(void *)(*plVar2 + 0x48),0x60);
                      iVar19 = FUN_06c5195c(&stack0x00000100,0);
                      if (*plVar2 == 0) goto LAB_0681c118;
                      memmove(&stack0x00000100,(void *)(*plVar2 + 0x48),0x60);
                      fVar48 = (float)FUN_06c5196c(&stack0x00000100,0);
                      if (*(long *)(lVar23 + 0x20) == 0) goto LAB_0681c118;
                      fVar46 = *(float *)(lVar23 + 0x2c);
                      fVar32 = fVar38;
                      if (*(char *)(unaff_x19 + 0x305) != '\0') {
                        fVar32 = 1.0;
                      }
                      fVar34 = (float)FUN_06c51eb4(*(long *)(lVar23 + 0x20),0);
                      if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_0681c118;
                      memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
                      fVar35 = (float)FUN_06c5198c(&stack0x00000100,0);
                      if (*plVar2 == 0) goto LAB_0681c118;
                      fVar45 = (fVar45 / (float)iVar19) * fVar48 * fVar32 * fVar46 * fVar34;
                      memmove(&stack0x00000100,(void *)(*plVar2 + 0x48),0x60);
                      fVar48 = (float)FUN_06c519cc(&stack0x00000100,0);
                    }
                    *plVar4 = lVar23;
                    thunk_FUN_0333a630(plVar4,lVar23);
                    lVar23 = *plVar1;
                    if (lVar23 != 0) {
                      uVar20 = *puVar3;
                      if (*(uint *)(lVar23 + 0x18) <= uVar20) goto LAB_0681c36c;
                      lVar28 = lVar23 + (long)(int)uVar20 * 0x178;
                      *(undefined4 *)(lVar28 + 0x2c) = 1;
                      *(float *)(lVar28 + 0x160) = fVar45;
                      *(undefined4 *)(unaff_x19 + 0x120) = uVar47;
                      goto LAB_0681b0f8;
                    }
                    goto LAB_0681c118;
                  }
                  bVar16 = uVar22 == 0xad;
                  lVar23 = *plVar1;
                  fVar35 = 0.0;
                  fVar32 = 0.0;
                  if (!bVar16 && uVar22 != 3) {
                    fVar32 = fVar45;
                  }
                  if (lVar23 == 0) goto LAB_0681c118;
                  uVar20 = *puVar3;
                  fVar48 = 0.0;
                }
                if (*(uint *)(lVar23 + 0x18) <= uVar20) goto LAB_0681c36c;
                *(short *)(lVar23 + (long)(int)uVar20 * 0x178 + 0x20) = (short)uVar22;
                if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x20), lVar23 == 0))
                goto LAB_0681c118;
                FUN_06c51e78(&stack0x00000be0,lVar23,0);
                in_stack_000000e0 = uVar39;
                in_stack_000000e8 = uVar41;
                in_stack_000000f0 = param_3;
                if ((int)uVar22 < 0x10000) {
                  if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                    thunk_FUN_032cd7c0();
                  }
                  uVar20 = FUN_058a1fe4(uVar22,0);
                  uVar20 = uVar20 & 1;
                }
                else {
                  uVar20 = 0;
                }
                fStack0000000000000074 = *(float *)(unaff_x19 + 0x2a8);
                *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
                if (*(char *)(unaff_x19 + 0x2f9) == '\0') {
                  fVar46 = 0.0;
                }
                else {
                  if (*plVar4 == 0) goto LAB_0681c118;
                  uVar26 = *puVar3;
                  uVar6 = *(uint *)(*plVar4 + 0x28);
                  if ((int)uVar26 < (int)uVar8) {
                    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                       (lVar23 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar23 == 0))
                    goto LAB_0681c118;
                    if (*(uint *)(lVar23 + 0x18) <= uVar26 + 1) goto LAB_0681c36c;
                    lVar23 = *(long *)(lVar23 + (long)(int)(uVar26 + 1) * 0x178 + 0x30);
                    if ((((lVar23 == 0) || (*unaff_x23 == 0)) ||
                        (lVar28 = *(long *)(*unaff_x23 + 0x128), lVar28 == 0)) ||
                       (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)) goto LAB_0681c118;
                    uVar24 = FUN_05189ccc(lVar28,uVar6 | *(int *)(lVar23 + 0x28) << 0x10,
                                          &stack0x000000b8,
                                          *(undefined8 *)
                                           Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>__ctor__
                                         );
                    uVar47 = 0;
                    if ((uVar24 & 1) == 0) {
                      uVar49 = 0;
                      fVar46 = 0.0;
                      uVar50 = 0;
                    }
                    else {
                      if (in_stack_000000b8 == 0) goto LAB_0681c118;
                      uVar47 = *(undefined4 *)(in_stack_000000b8 + 0x14);
                      uVar49 = *(undefined4 *)(in_stack_000000b8 + 0x18);
                      fVar46 = *(float *)(in_stack_000000b8 + 0x1c);
                      uVar50 = *(undefined4 *)(in_stack_000000b8 + 0x20);
                      if ((*(byte *)(in_stack_000000b8 + 0x39) & 1) != 0) {
                        fStack0000000000000074 = 0.0;
                      }
                    }
                    uVar26 = *puVar3;
                  }
                  else {
                    uVar47 = 0;
                    uVar49 = 0;
                    fVar46 = 0.0;
                    uVar50 = 0;
                  }
                  if (0 < (int)uVar26) {
                    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                       (lVar23 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar23 == 0))
                    goto LAB_0681c118;
                    if (*(uint *)(lVar23 + 0x18) <= uVar26 - 1) goto LAB_0681c36c;
                    lVar23 = *(long *)(lVar23 + (ulong)(uVar26 - 1) * 0x178 + 0x30);
                    if (((lVar23 == 0) || (*unaff_x23 == 0)) ||
                       ((lVar28 = *(long *)(*unaff_x23 + 0x128), lVar28 == 0 ||
                        (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)))) goto LAB_0681c118;
                    uVar24 = FUN_05189ccc(lVar28,*(uint *)(lVar23 + 0x28) | uVar6 << 0x10,
                                          &stack0x000000b8,
                                          *(undefined8 *)
                                           Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>__ctor__
                                         );
                    if ((uVar24 & 1) != 0) {
                      if ((in_stack_000000b8 == 0) ||
                         (FUN_06807d68(uVar47,uVar49,fVar46,uVar50,
                                       *(undefined4 *)(in_stack_000000b8 + 0x28),
                                       *(undefined4 *)(in_stack_000000b8 + 0x2c),
                                       *(undefined4 *)(in_stack_000000b8 + 0x30),
                                       *(undefined4 *)(in_stack_000000b8 + 0x34),0),
                         in_stack_000000b8 == 0)) goto LAB_0681c118;
                      if ((*(byte *)(in_stack_000000b8 + 0x39) & 1) != 0) {
                        fStack0000000000000074 = 0.0;
                      }
                    }
                  }
                  *(float *)(unaff_x19 + 0x2fc) = fVar46;
                }
                fStack0000000000000060 = 0.0;
                fVar34 = *(float *)(unaff_x19 + 0x2b0);
                if (fVar34 != 0.0) {
                  if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x20), lVar23 == 0))
                  goto LAB_0681c118;
                  FUN_06c51e78(&stack0x00000be0,lVar23,0);
                  in_stack_000000c0 = uVar39;
                  in_stack_000000c8 = uVar41;
                  in_stack_000000d0 = param_3;
                  fVar36 = (float)FUN_06c51ca0(&stack0x000000c0,0);
                  if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x20), lVar23 == 0))
                  goto LAB_0681c118;
                  FUN_06c51e78(&stack0x00000be0,lVar23,0);
                  in_stack_000000c0 = uVar39;
                  in_stack_000000c8 = uVar41;
                  in_stack_000000d0 = param_3;
                  fVar37 = (float)FUN_06c51cb0(&stack0x000000c0,0);
                  fStack0000000000000060 =
                       (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                       (fVar34 * 0.5 - fVar32 * (fVar36 * 0.5 + fVar37));
                  *(float *)(unaff_x19 + 0x640) =
                       *(float *)(unaff_x19 + 0x640) + fStack0000000000000060;
                }
                iVar19 = *(int *)(unaff_x19 + 0x644);
                fVar34 = 0.0;
                if (((cVar7 == '\0') && (fVar34 = 0.0, iVar19 == 0)) &&
                   ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0)) {
                  if (*unaff_x23 == 0) goto LAB_0681c118;
                  fVar34 = *(float *)(*unaff_x23 + 0x1b4);
                }
                lVar23 = *plVar1;
                if (lVar23 == 0) goto LAB_0681c118;
                uVar6 = *puVar3;
                lVar28 = (long)(int)uVar6;
                if (*(uint *)(lVar23 + 0x18) <= uVar6) goto LAB_0681c36c;
                fVar36 = *(float *)(unaff_x19 + 0x4d8);
                fVar37 = *(float *)(unaff_x19 + 0x61c);
                fVar35 = fVar35 * fVar32;
                *(float *)(lVar23 + lVar28 * 0x178 + 0x14c) = (0.0 - fVar36) + fVar37;
                if (iVar19 == 0) {
                  fVar35 = fVar35 / fStack0000000000000068;
                  fVar48 = (fVar48 * fVar32) / fStack0000000000000068;
                }
                else {
                  fVar48 = fVar48 * fVar32;
                }
                fVar35 = fVar37 + fVar35;
                if ((uVar20 == 0) || (uVar6 == *(uint *)(unaff_x19 + 0x498))) {
                  fVar48 = fVar37 + fVar48;
                  fVar43 = fVar35;
                  fVar42 = fVar48;
                  if (fVar37 != 0.0) {
                    fVar43 = (fVar35 - fVar37) / *(float *)(unaff_x19 + 0x404);
                    fVar42 = (fVar48 - fVar37) / *(float *)(unaff_x19 + 0x404);
                    if (fVar43 <= fVar35) {
                      fVar43 = fVar35;
                    }
                    if (fVar48 <= fVar42) {
                      fVar42 = fVar48;
                    }
                  }
                  lVar23 = lVar23 + lVar28 * 0x178;
                  fVar37 = fVar43;
                  if (fVar43 <= *(float *)(unaff_x19 + 0x4c8)) {
                    fVar37 = *(float *)(unaff_x19 + 0x4c8);
                  }
                  fVar44 = fVar42;
                  if (*(float *)(unaff_x19 + 0x4cc) <= fVar42) {
                    fVar44 = *(float *)(unaff_x19 + 0x4cc);
                  }
                  *(float *)(unaff_x19 + 0x4cc) = fVar44;
                  *(float *)(unaff_x19 + 0x4c8) = fVar37;
                  *(float *)(lVar23 + 0x154) = fVar43;
                  *(float *)(lVar23 + 0x158) = fVar42;
                  *(float *)(lVar23 + 0x148) = fVar35 - fVar36;
                  *(float *)(unaff_x19 + 0x4c0) = fVar35 - fVar36;
                  *(float *)(lVar23 + 0x150) = fVar48 - fVar36;
                  *(float *)(unaff_x19 + 0x4c4) = fVar48 - fVar36;
                  if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0'))
                  {
                    *(float *)(unaff_x19 + 0x4b8) = fVar37;
                    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_0681c118;
                    fVar48 = *(float *)(unaff_x19 + 0x4bc);
                    fVar36 = (float)FUN_06c5199c(*(long *)(unaff_x19 + 0x100) + 0x50,0);
                    fStack0000000000000068 = (fVar32 * fVar36) / fStack0000000000000068;
                    fVar36 = *(float *)(unaff_x19 + 0x4d8);
                    if (fVar48 <= fStack0000000000000068) {
                      fVar48 = fStack0000000000000068;
                    }
                    *(float *)(unaff_x19 + 0x4bc) = fVar48;
                  }
                }
                else {
                  fVar48 = *(float *)(unaff_x19 + 0x4c8);
                  lVar23 = lVar23 + lVar28 * 0x178;
                  *(float *)(lVar23 + 0x154) = fVar48;
                  fVar37 = *(float *)(unaff_x19 + 0x4cc);
                  fVar48 = fVar48 - fVar36;
                  *(float *)(lVar23 + 0x148) = fVar48;
                  *(float *)(lVar23 + 0x158) = fVar37;
                  *(float *)(unaff_x19 + 0x4c0) = fVar48;
                  fVar37 = fVar37 - fVar36;
                  *(float *)(lVar23 + 0x150) = fVar37;
                  *(float *)(unaff_x19 + 0x4c4) = fVar37;
                }
                if (fVar36 == 0.0) {
                  if ((uVar20 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498)))
                  {
                    fVar48 = *(float *)(unaff_x19 + 0x4b4);
                    if (*(float *)(unaff_x19 + 0x4b4) <= fVar35) {
                      fVar48 = fVar35;
                    }
                    *(float *)(unaff_x19 + 0x4b4) = fVar48;
                    goto LAB_0681b5c8;
                  }
                  bVar17 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
                  if (uVar22 == 9)
                  goto Unity_VisualScripting_LessThanOrEqualHandler_<>c__<_ctor>b__0_41;
LAB_0681b61c:
                  if ((!(bool)(bVar15 | bVar16 ^ 1U)) || (*(int *)(unaff_x19 + 0x644) == 1))
                  goto LAB_0681b634;
LAB_0681b7b0:
                  fVar45 = *(float *)(unaff_x19 + 0x640);
                  if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
                    fVar48 = (float)FUN_06c51cc0(&stack0x000000e0,0);
                    if (*unaff_x23 == 0) goto LAB_0681c118;
                    fVar48 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                             (*(float *)(unaff_x19 + 0x2ac) +
                             fVar32 * (fVar46 + fVar48) +
                             fVar33 * (fVar34 + fStack0000000000000074 +
                                                *(float *)(*unaff_x23 + 0x1ac)));
                  }
                  else {
                    if (*unaff_x23 == 0) goto LAB_0681c118;
                    fVar48 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                             (*(float *)(unaff_x19 + 0x2ac) +
                             (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
                             fVar33 * (fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
                  }
                  fVar45 = fVar45 + fVar48;
                  *(float *)(unaff_x19 + 0x640) = fVar45;
                  if ((uVar22 == 0x200b) || (uVar20 != 0)) {
                    fVar45 = fVar45 + fVar33 * *(float *)(unaff_x19 + 0x2b4);
                    *(float *)(unaff_x19 + 0x640) = fVar45;
                  }
                  if (uVar22 == 0xd) {
                    if (fStack0000000000000064 <= fStack000000000000006c + fVar45) {
                      fStack0000000000000064 = fStack000000000000006c + fVar45;
                    }
                    fStack000000000000006c = 0.0;
                    fVar45 = *(float *)(unaff_x19 + 0x40c) + 0.0;
                    goto LAB_0681b8b4;
                  }
                  bVar17 = uVar22 == 10;
                  if (((0xb < uVar22) || ((1 << (ulong)(uVar22 & 0x1f) & 0xc08U) == 0)) &&
                     (1 < uVar22 - 0x2028)) goto LAB_0681b8bc;
LAB_0681b978:
                  if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
                    fVar45 = *(float *)(unaff_x19 + 0x4c8);
                    fVar48 = *(float *)(unaff_x19 + 0x4d0);
                    if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                    }
                    fVar45 = fVar45 - fVar48;
                    if (((fVar12 < ABS(fVar45)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
                       (*(char *)(unaff_x19 + 0x33c) == '\0')) {
                      *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar45;
                      *(float *)(unaff_x19 + 0x4d8) = fVar45 + *(float *)(unaff_x19 + 0x4d8);
                    }
                  }
                  fVar45 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
                  fStack0000000000000038 = *(float *)(unaff_x19 + 0x4c4);
                  if (fVar45 <= *(float *)(unaff_x19 + 0x4c4)) {
                    fStack0000000000000038 = fVar45;
                  }
                  fVar48 = fStack0000000000000044 +
                           fStack0000000000000048 + fStack000000000000006c + fStack000000000000005c;
                  fVar45 = fStack0000000000000064;
                  if (fStack0000000000000064 <= fVar48) {
                    fVar45 = fVar48;
                  }
                  *(float *)(unaff_x19 + 0x4c4) = fStack0000000000000038;
                  fStack000000000000006c = fVar45;
                  if (*(uint *)(unaff_x19 + 0x494) != uVar8) {
                    fStack000000000000006c = 0.0;
                    fStack0000000000000064 = fVar45;
                  }
                  fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
                  *(undefined1 *)(unaff_x19 + 0x33c) = 0;
                  if (bVar17) {
LAB_0681bc94:
                    FUN_0682230c();
                    FUN_0682230c();
                    uVar20 = *(uint *)(unaff_x19 + 0x494);
                    lVar23 = *(long *)(unaff_x19 + 0x488);
                    iVar19 = uVar20 + 1;
                    *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
                    *(int *)(unaff_x19 + 0x498) = iVar19;
                    if (lVar23 != 0) {
                      if (*(uint *)(lVar23 + 0x18) <= uVar20) goto LAB_0681c36c;
                      fVar45 = *(float *)(lVar23 + (long)(int)uVar20 * 0x178 + 0x154);
                      if (*(float *)(unaff_x19 + 0x2c0) == DAT_013a0308) {
                        fVar48 = 0.0;
                        if (!(bool)(uVar22 != 0x2029 & (bVar17 ^ 1U))) {
                          fVar48 = *(float *)(unaff_x19 + 0x2cc);
                        }
                        uVar27 = 0;
                        fVar48 = fVar45 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                                 fVar29 * (fVar30 + *(float *)(unaff_x19 + 700)) +
                                 fVar33 * (*(float *)(unaff_x19 + 0x2b8) + fVar48) +
                                 *(float *)(unaff_x19 + 0x4d8);
                      }
                      else {
                        fVar48 = 0.0;
                        if (!(bool)(uVar22 != 0x2029 & (bVar17 ^ 1U))) {
                          fVar48 = *(float *)(unaff_x19 + 0x2cc);
                        }
                        uVar27 = 1;
                        fVar48 = *(float *)(unaff_x19 + 0x4d8) +
                                 *(float *)(unaff_x19 + 0x2c0) +
                                 fVar33 * (*(float *)(unaff_x19 + 0x2b8) + fVar48);
                      }
                      *(float *)(unaff_x19 + 0x4d8) = fVar48;
                      *(undefined1 *)(unaff_x19 + 0x2c4) = uVar27;
                      puVar13 = 
                      Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                      ;
                      lVar23 = *(long *)
                                Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                      ;
                      if (*(int *)(lVar23 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                        lVar23 = *(long *)puVar13;
                        iVar19 = *puVar3 + 1;
                      }
                      uVar40 = *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
                      *(float *)(unaff_x19 + 0x640) =
                           *(float *)(unaff_x19 + 0x408) + 0.0 + *(float *)(unaff_x19 + 0x40c);
                      uVar40 = NEON_rev64(uVar40,4);
                      *(float *)(unaff_x19 + 0x4d0) = fVar45;
                      *(undefined8 *)(unaff_x19 + 0x4c8) = uVar40;
                      *(int *)(unaff_x19 + 0x494) = iVar19;
                      fVar45 = fVar32;
                      goto LAB_0681c108;
                    }
                    goto LAB_0681c118;
                  }
                  if ((int)uVar22 < 0x2028) {
                    if (uVar22 == 3) {
                      if (*(long *)(unaff_x19 + 0x478) == 0) goto LAB_0681c118;
                      uVar21 = *(uint *)(*(long *)(unaff_x19 + 0x478) + 0x18);
                      uVar22 = 3;
                    }
                    else if ((uVar22 == 0xb) || (uVar22 == 0x2d)) goto LAB_0681bc94;
                  }
                  else if (uVar22 - 0x2028 < 2) goto LAB_0681bc94;
                }
                else {
LAB_0681b5c8:
                  bVar17 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
                  if (uVar22 == 9) {
Unity_VisualScripting_LessThanOrEqualHandler_<>c__<_ctor>b__0_41:
                    bVar9 = true;
                  }
                  else {
                    if ((((uVar20 != 0) || (uVar22 == 3)) || (uVar22 == 0x200b)) || (uVar22 == 0xad)
                       ) goto LAB_0681b61c;
LAB_0681b634:
                    bVar9 = false;
                  }
                  fVar36 = *(float *)(unaff_x19 + 0x360);
                  fVar37 = *(float *)(unaff_x19 + 0x640);
                  fVar48 = (fVar31 - *(float *)(unaff_x19 + 0x350)) - *(float *)(unaff_x19 + 0x354);
                  bVar14 = true;
                  if ((fVar36 <= fVar48) && (bVar14 = false, !NAN(fVar36))) {
                    bVar14 = fVar36 == -1.0;
                  }
                  if (!bVar14) {
                    fVar48 = fVar36;
                  }
                  fVar36 = (float)FUN_06c51cc0(&stack0x000000e0,0);
                  if (!bVar16) {
                    fVar45 = fVar32;
                  }
                  fVar35 = 1.0;
                  if (!bVar17) {
                    fVar35 = DAT_013a01c4;
                  }
                  fStack000000000000005c =
                       ABS(fVar37) + fVar45 * fVar36 * (1.0 - *(float *)(unaff_x19 + 0x2d4));
                  if ((fVar35 * fVar48 < fStack000000000000005c && (uVar5 & 1) == 0) &&
                     (*(int *)(unaff_x19 + 0x494) != *(int *)(unaff_x19 + 0x498))) {
                    uVar21 = FUN_06821f78();
                    lVar23 = *(long *)(unaff_x19 + 0x488);
                    if (lVar23 == 0) goto LAB_0681c118;
                    uVar22 = *(uint *)(unaff_x19 + 0x494);
                    uVar20 = uVar22 - 1;
                    if (*(uint *)(lVar23 + 0x18) <= uVar20) goto LAB_0681c36c;
                    if ((!bVar15 && *(short *)(lVar23 + (long)(int)uVar20 * 0x178 + 0x20) == 0xad)
                       && (*(int *)(unaff_x19 + 0x2e0) == 0)) {
                      bVar15 = false;
                      in_stack_00000bdc = 0x2d;
                      *puVar3 = uVar20;
                      fVar45 = fVar32;
                      uVar21 = uVar21 - 1;
                      in_stack_00000bd8 = uVar20;
                      goto LAB_0681c108;
                    }
                    if (*(uint *)(lVar23 + 0x18) <= uVar22) goto LAB_0681c36c;
                    if (*(short *)(lVar23 + (long)(int)uVar22 * 0x178 + 0x20) == 0xad) {
                      bVar15 = true;
                      fVar45 = fVar32;
                    }
                    else {
                      if ((uStack0000000000000030 & unaff_w24) != 0) {
                        fVar45 = *(float *)(unaff_x19 + 0x2d4);
                        fVar46 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
                        if ((fVar45 < fVar46) &&
                           (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
                          fVar38 = fStack000000000000005c;
                          if (0.0 < fVar45) {
                            fVar38 = fStack000000000000005c / (1.0 - fVar45);
                          }
                          fVar45 = fVar45 + (fStack000000000000005c -
                                            fVar35 * (fVar48 + DAT_013a055c)) / fVar38;
                          if (fVar46 <= fVar45) {
                            fVar45 = fVar46;
                          }
                          *(float *)(unaff_x19 + 0x2d4) = fVar45;
LAB_0681c1f0:
                          if (DAT_076ce198 == '\0') {
                            thunk_FUN_032e1da0(PTR_DAT_07279af0);
                            DAT_076ce198 = '\x01';
                          }
                          return **(float **)(*(long *)PTR_DAT_07279af0 + 0xb8);
                        }
                        if ((*(float *)(unaff_x19 + 0x250) < *unaff_x22) &&
                           (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
                          *(float *)(unaff_x19 + 0x23c) = *unaff_x22;
                          fVar45 = (*unaff_x22 - *(float *)(unaff_x19 + 0x240)) * 0.5;
                          if (fVar45 <= DAT_013a0300) {
                            fVar45 = DAT_013a0300;
                          }
                          fVar45 = *unaff_x22 - fVar45;
                          *unaff_x22 = fVar45;
                          fVar38 = fVar45 * 20.0 + 0.5;
                          fVar45 = DAT_013a07c8;
                          if (fVar38 != INFINITY) {
                            fVar45 = (float)(int)fVar38 / 20.0;
                          }
                          if (fVar45 <= *(float *)(unaff_x19 + 0x250)) {
                            fVar45 = *(float *)(unaff_x19 + 0x250);
                          }
                          *unaff_x22 = fVar45;
                          goto LAB_0681c1f0;
                        }
                      }
                      if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
                        fVar45 = *(float *)(unaff_x19 + 0x4c8);
                        fVar48 = *(float *)(unaff_x19 + 0x4d0);
                        if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
                          thunk_FUN_032cd7c0();
                        }
                        fVar45 = fVar45 - fVar48;
                        if (((fVar12 < ABS(fVar45)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
                           (*(char *)(unaff_x19 + 0x33c) == '\0')) {
                          *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar45;
                          *(float *)(unaff_x19 + 0x4d8) = fVar45 + *(float *)(unaff_x19 + 0x4d8);
                        }
                      }
                      fVar46 = *(float *)(unaff_x19 + 0x640);
                      fVar48 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
                      fVar45 = *(float *)(unaff_x19 + 0x4c4);
                      if (fVar48 <= *(float *)(unaff_x19 + 0x4c4)) {
                        fVar45 = fVar48;
                      }
                      *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
                      *(float *)(unaff_x19 + 0x4c4) = fVar45;
                      *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
                      if ((uStack0000000000000034 & 1) == 0) {
                        fVar48 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) -
                                 fVar48;
                        if (fStack0000000000000038 <= fVar48) {
                          fStack0000000000000038 = fVar48;
                        }
                      }
                      else {
                        fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar45;
                      }
                      FUN_0682230c();
                      lVar23 = *(long *)(unaff_x19 + 0x488);
                      *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
                      if (lVar23 == 0) goto LAB_0681c118;
                      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
                      goto LAB_0681c36c;
                      fVar45 = *(float *)(unaff_x19 + 0x2c0);
                      fVar48 = *(float *)(lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x494) * 0x178 +
                                         0x154);
                      bVar15 = fVar45 != DAT_013a0308;
                      if (bVar15) {
                        fVar34 = fVar33 * *(float *)(unaff_x19 + 0x2b8);
                      }
                      else {
                        fVar34 = fVar48 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                                 fVar29 * (fVar30 + *(float *)(unaff_x19 + 700));
                        fVar45 = fVar33 * *(float *)(unaff_x19 + 0x2b8);
                      }
                      *(bool *)(unaff_x19 + 0x2c4) = bVar15;
                      *(float *)(unaff_x19 + 0x4d8) =
                           *(float *)(unaff_x19 + 0x4d8) + fVar45 + fVar34;
                      puVar13 = 
                      Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                      ;
                      lVar23 = *(long *)
                                Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                      ;
                      if (*(int *)(lVar23 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                        lVar23 = *(long *)puVar13;
                      }
                      bVar15 = false;
                      fStack000000000000006c = fStack000000000000006c + fVar46;
                      uVar40 = *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
                      *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + 0.0;
                      uVar40 = NEON_rev64(uVar40,4);
                      *(float *)(unaff_x19 + 0x4d0) = fVar48;
                      *(undefined8 *)(unaff_x19 + 0x4c8) = uVar40;
                      uStack0000000000000030 = 1;
                      fVar45 = fVar32;
                    }
                    goto LAB_0681c108;
                  }
                  fStack0000000000000048 = *(float *)(unaff_x19 + 0x350);
                  fStack0000000000000044 = *(float *)(unaff_x19 + 0x354);
                  if (!bVar9) goto LAB_0681b7b0;
                  if (*unaff_x23 == 0) goto LAB_0681c118;
                  memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
                  fVar45 = (float)FUN_06c51a54(&stack0x00000100,0);
                  if (*unaff_x23 == 0) goto LAB_0681c118;
                  fVar46 = *(float *)(unaff_x19 + 0x640);
                  fVar48 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x23 + 0x1b9));
                  fVar48 = fVar32 * fVar45 * fVar48;
                  fVar45 = fVar48 * (float)(int)(fVar46 / fVar48);
                  if (fVar45 <= fVar46) {
                    fVar45 = fVar46 + fVar48;
                  }
LAB_0681b8b4:
                  bVar17 = false;
                  *(float *)(unaff_x19 + 0x640) = fVar45;
LAB_0681b8bc:
                  if (*puVar3 == uVar8) goto LAB_0681b978;
                }
                if (((uStack0000000000000034 & 1) != 0) || ((*(uint *)(unaff_x19 + 0x2e0) | 2) == 3)
                   ) {
                  if ((uVar20 == 0) &&
                     (((uVar22 != 0x2d && (uVar22 != 0x200b)) && (uVar22 != 0xad)))) {
                    if (*(char *)(unaff_x19 + 0x2da) == '\0') {
LAB_0681bb28:
                      if (((((0x2bfd < uVar22 - 0xac01) && (0xfd < uVar22 - 0x1101)) &&
                           (0x1d < uVar22 - 0xa961)) ||
                          (uVar24 = FUN_06830d40(0), (uVar24 & 1) != 0)) &&
                         ((((0xed < uVar22 - 0xff01 && (0x1d < uVar22 - 0xfe31)) &&
                           (0x717d < uVar22 - 0x2e81)) && (0x1fd < uVar22 - 0xf901))))
                      goto LAB_0681b8f4;
                      lVar23 = FUN_06830bd4(0);
                      if ((lVar23 == 0) || (*(long *)(lVar23 + 0x10) == 0)) goto LAB_0681c118;
                      uVar22 = FUN_0502cedc(*(long *)(lVar23 + 0x10),uVar22,
                                            *(undefined8 *)
                                             Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>__ctor__
                                           );
                      if ((int)uVar8 <= (int)*puVar3) {
                        if (uStack0000000000000030 != 0 || ((uVar22 ^ 0xffffffff) & 1) != 0) {
LAB_0681c0b8:
                          FUN_0682230c();
                        }
LAB_0681c0cc:
                        uStack0000000000000030 = 0;
                        bVar10 = true;
                        goto LAB_0681c0fc;
                      }
                      lVar23 = FUN_06830bd4(0);
                      if ((lVar23 == 0) || (lVar28 = *plVar1, lVar28 == 0)) goto LAB_0681c118;
                      if (*(uint *)(lVar28 + 0x18) <= *puVar3 + 1) {
LAB_0681c36c:
                    /* WARNING: Subroutine does not return */
                        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality
                                  ();
                      }
                      if (*(long *)(lVar23 + 0x18) == 0) goto LAB_0681c118;
                      uVar24 = FUN_0502cedc(*(long *)(lVar23 + 0x18),
                                            *(undefined2 *)
                                             (lVar28 + (long)(int)(*puVar3 + 1) * 0x178 + 0x20),
                                            *(undefined8 *)
                                             Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>__ctor__
                                           );
                      if (uStack0000000000000030 == 0 && ((uVar22 ^ 0xffffffff) & 1) == 0)
                      goto LAB_0681c0cc;
                      if ((uVar24 & 1) == 0) goto LAB_0681c0b8;
                      if (uStack0000000000000030 == 0) goto LAB_0681c0cc;
                      if (uVar20 != 0) {
                        FUN_0682230c();
                      }
                      FUN_0682230c();
                      bVar10 = true;
LAB_0681bae0:
                      uStack0000000000000030 = 1;
                    }
                    else {
LAB_0681b8f4:
                      if (bVar10) {
                        lVar23 = FUN_06830bd4(0);
                        if ((lVar23 == 0) || (*(long *)(lVar23 + 0x10) == 0)) goto LAB_0681c118;
                        uVar24 = FUN_0502cedc(*(long *)(lVar23 + 0x10),uVar22,
                                              *(undefined8 *)
                                               Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>__ctor__
                                             );
                        if ((uVar24 & 1) == 0) {
                          FUN_0682230c();
                        }
                        bVar10 = false;
                      }
                      else {
                        if (uStack0000000000000030 != 0) {
                          if ((!bVar15 && bVar16) || (uVar20 != 0)) {
                            FUN_0682230c();
                          }
                          FUN_0682230c();
                          bVar10 = false;
                          goto LAB_0681bae0;
                        }
                        bVar10 = false;
                        uStack0000000000000030 = 0;
                      }
                    }
                  }
                  else {
                    if (*(char *)(unaff_x19 + 0x2da) != '\0') goto LAB_0681b8f4;
                    if (((uVar22 - 0x2007 < 0x29) &&
                        ((1L << ((ulong)(uVar22 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                       ((uVar22 == 0xa0 || (uVar22 == 0x2060)))) goto LAB_0681bb28;
                    FUN_0682230c();
                    bVar10 = false;
                    uStack0000000000000030 = 0;
                    in_stack_00000170 = 0xffffffff;
                  }
                }
LAB_0681c0fc:
                *puVar3 = *puVar3 + 1;
                fVar45 = fVar32;
              }
LAB_0681c108:
              lVar23 = *(long *)(unaff_x19 + 0x478);
              uVar21 = uVar21 + 1;
              if (lVar23 == 0) goto LAB_0681c118;
              goto LAB_0681a80c;
            }
          }
        }
      }
    }
  }
LAB_0681c118:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


