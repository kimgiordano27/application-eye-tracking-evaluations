/*
FUNCTION_NAME: Unity.VisualScripting.LessThanOrEqualHandler.<>c$$<.ctor>b__0_2
ENTRY_POINT: 0681a4f8
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


float Unity_VisualScripting_LessThanOrEqualHandler_<>c__<_ctor>b__0_2
                (undefined8 param_1,long param_2)

{
  long *plVar1;
  uint *puVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  undefined *puVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  undefined1 uVar25;
  long unaff_x19;
  float *unaff_x22;
  long *unaff_x23;
  uint unaff_w24;
  uint unaff_w26;
  long *unaff_x27;
  int unaff_w28;
  long lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float unaff_s8;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  undefined4 uVar45;
  undefined4 uVar46;
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
  long *in_stack_00000078;
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
  undefined8 in_stack_00000be0;
  undefined8 in_stack_00000be8;
  undefined4 in_stack_00000bf0;
  
  *in_stack_00000078 = param_2;
  thunk_FUN_0333a630();
  if (*(long *)(unaff_x19 + 0xf8) != 0) {
    fVar41 = *unaff_x22;
    memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0xf8) + 0x50),0x60);
    iVar17 = FUN_06c5195c(&stack0x00000100,0);
    if (*(long *)(unaff_x19 + 0xf8) != 0) {
      memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0xf8) + 0x50),0x60);
      fVar27 = (float)FUN_06c5196c(&stack0x00000100,0);
      fVar44 = *unaff_x22;
      *(undefined4 *)(unaff_x19 + 0x404) = 0x3f800000;
      *(float *)(unaff_x19 + 0x1e8) = *unaff_x22;
      puVar12 = Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_Add__;
      fVar36 = DAT_013a0014;
      fVar31 = DAT_013a0014;
      if (*(char *)(unaff_x19 + 0x305) != '\0') {
        fVar31 = 1.0;
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
        fVar28 = (float)FUN_06c5197c(&stack0x00000100,0);
        if (*unaff_x23 != 0) {
          memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
          fVar29 = (float)FUN_06c5198c(&stack0x00000100,0);
          if (*unaff_x23 != 0) {
            memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
            fVar30 = (float)FUN_06c519cc(&stack0x00000100,0);
            *(undefined8 *)(unaff_x19 + 0x2ac) = 0;
            *(undefined4 *)(unaff_x19 + 0x640) = 0;
            *(undefined8 *)(unaff_x19 + 0x408) = 0;
            FUN_04a0f5c4(0,unaff_x19 + 0x410,*(undefined8 *)puVar12);
            *(undefined1 *)(unaff_x19 + 0x430) = 0;
            *(undefined8 *)(unaff_x19 + 0x494) = 0;
            lVar21 = *unaff_x27;
            uStack0000000000000034 = unaff_w26;
            if (*(int *)(lVar21 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar21 = *unaff_x27;
            }
            uVar37 = NEON_rev64(*(undefined8 *)(*(long *)(lVar21 + 0xb8) + 0x15a8),4);
            *(undefined4 *)(unaff_x19 + 0x4a8) = 0;
            *(undefined4 *)(unaff_x19 + 0x4d0) = 0;
            *(undefined1 *)(unaff_x19 + 0x2c4) = 0;
            *(undefined8 *)(unaff_x19 + 0x350) = 0;
            *(undefined4 *)(unaff_x19 + 0x360) = 0xbf800000;
            *(undefined1 *)(unaff_x19 + 0x3f5) = 1;
            *(undefined8 *)(unaff_x19 + 0x4b8) = 0;
            *(undefined4 *)(unaff_x19 + 0x4c4) = 0;
            *(undefined8 *)(unaff_x19 + 0x4c8) = uVar37;
            *(undefined1 *)(unaff_x19 + 0x2da) = 0;
            FUN_06838b38(&stack0x00000bd8,0xffffffff,0,0);
            memset(&stack0x00000860,0,0x378);
            memset(&stack0x000004e8,0,0x378);
            memset(&stack0x00000170,0,0x378);
            lVar21 = *(long *)(unaff_x19 + 0x478);
            *(int *)(unaff_x19 + 0x244) = *(int *)(unaff_x19 + 0x244) + 1;
            fVar11 = DAT_013a0604;
            fVar10 = DAT_0139ff50;
            if (lVar21 != 0) {
              plVar1 = (long *)(unaff_x19 + 0x698);
              uVar7 = unaff_w28 - 1;
              uVar4 = uStack0000000000000034 ^ 1;
              fStack0000000000000064 = 0.0;
              fStack0000000000000048 = 0.0;
              fStack0000000000000044 = 0.0;
              fVar28 = fVar28 - (fVar29 - fVar30);
              fStack000000000000006c = 0.0;
              fStack0000000000000038 = 0.0;
              fVar29 = unaff_s8 + DAT_0139fcd0;
              fStack000000000000005c = 0.0;
              fVar27 = (fVar41 / (float)iVar17) * fVar27 * fVar31;
              bVar9 = false;
              bVar14 = false;
              fVar31 = fVar31 * fVar44 * DAT_013a0604;
              uVar19 = 0;
              puVar2 = (uint *)(unaff_x19 + 0x494);
              plVar3 = (long *)(unaff_x19 + 0x648);
              uStack0000000000000030 = 1;
              fVar41 = fVar27;
LAB_0681a80c:
              if ((int)*(uint *)(lVar21 + 0x18) <= (int)uVar19) {
LAB_0681c11c:
                if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_013a007c
                      ) || ((unaff_w24 & 1) == 0)) ||
                    (fVar41 = *unaff_x22, *(float *)(unaff_x19 + 0x254) <= fVar41)) ||
                   (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
                  fVar41 = *(float *)(unaff_x19 + 0x340);
                  fVar36 = *(float *)(unaff_x19 + 0x348);
                  if (fVar41 <= 0.0) {
                    fVar41 = 0.0;
                  }
                  if (fVar36 <= 0.0) {
                    fVar36 = 0.0;
                  }
                  *(undefined1 *)(unaff_x19 + 0x24c) = 1;
                  fVar36 = (fStack000000000000006c + fVar41 + fVar36) * 100.0 + 1.0;
                  fVar41 = DAT_0139fd80;
                  if (fVar36 != INFINITY) {
                    fVar41 = (float)(int)fVar36 / 100.0;
                  }
                  *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
                  return fVar41;
                }
                if (*(float *)(unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x2d0) / 100.0) {
                  *(undefined4 *)(unaff_x19 + 0x2d4) = 0;
                  fVar41 = *unaff_x22;
                }
                *(float *)(unaff_x19 + 0x240) = fVar41;
                fVar41 = (*(float *)(unaff_x19 + 0x23c) - *unaff_x22) * 0.5;
                if (fVar41 <= DAT_013a0300) {
                  fVar41 = DAT_013a0300;
                }
                fVar41 = *unaff_x22 + fVar41;
                *unaff_x22 = fVar41;
                fVar36 = fVar41 * 20.0 + 0.5;
                fVar41 = DAT_013a07c8;
                if (fVar36 != INFINITY) {
                  fVar41 = (float)(int)fVar36 / 20.0;
                }
                if (*(float *)(unaff_x19 + 0x254) <= fVar41) {
                  fVar41 = *(float *)(unaff_x19 + 0x254);
                }
                *unaff_x22 = fVar41;
                goto LAB_0681c1f0;
              }
              if (*(uint *)(lVar21 + 0x18) <= uVar19) goto LAB_0681c36c;
              uVar20 = *(uint *)(lVar21 + (long)(int)uVar19 * 0xc + 0x20);
              if (uVar20 == 0) goto LAB_0681c11c;
              if ((uVar20 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) {
                *(undefined1 *)(unaff_x19 + 0x431) = 1;
                *(undefined4 *)(unaff_x19 + 0x644) = 0;
                uVar22 = FUN_0681c370();
                if (((uVar22 & 1) == 0) ||
                   (uVar19 = in_stack_000000d8._4_4_, *(int *)(unaff_x19 + 0x644) != 0))
                goto LAB_0681a8b0;
              }
              else {
                if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                   (lVar21 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar21 == 0))
                goto LAB_0681c118;
                if (*(uint *)(lVar21 + 0x18) <= *puVar2) goto LAB_0681c36c;
                lVar21 = lVar21 + (long)(int)*puVar2 * 0x178;
                *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar21 + 0x2c);
                *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar21 + 0x58);
                *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar21 + 0x38);
                thunk_FUN_0333a630();
LAB_0681a8b0:
                if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                   (lVar21 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar21 == 0))
                goto LAB_0681c118;
                uVar18 = *puVar2;
                if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_0681c36c;
                lVar26 = (long)(int)uVar18;
                cVar6 = *(char *)(lVar21 + lVar26 * 0x178 + 0x5c);
                *(undefined1 *)(unaff_x19 + 0x431) = 0;
                uVar43 = *(undefined4 *)(unaff_x19 + 0x120);
                if (in_stack_00000bd8 == uVar18) {
                  *(undefined4 *)(unaff_x19 + 0x644) = 0;
                  if (in_stack_00000bdc == 0x2026) {
                    lVar21 = *in_stack_00000078;
                    if (lVar21 != 0) {
                      if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_0681c36c;
                      *(undefined8 *)(lVar21 + lVar26 * 0x178 + 0x30) =
                           *(undefined8 *)(unaff_x19 + 0x650);
                      thunk_FUN_0333a630();
                      lVar21 = *in_stack_00000078;
                      if (lVar21 != 0) {
                        if (*(uint *)(lVar21 + 0x18) <= *puVar2) goto LAB_0681c36c;
                        lVar21 = lVar21 + (long)(int)*puVar2 * 0x178;
                        *(undefined4 *)(lVar21 + 0x2c) = 0;
                        *(undefined8 *)(lVar21 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
                        thunk_FUN_0333a630();
                        lVar21 = *(long *)(unaff_x19 + 0x488);
                        if (lVar21 != 0) {
                          if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
                          goto LAB_0681c36c;
                          *(undefined8 *)
                           (lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x494) * 0x178 + 0x50) =
                               *(undefined8 *)(unaff_x19 + 0x660);
                          thunk_FUN_0333a630();
                          lVar21 = *in_stack_00000078;
                          if (lVar21 != 0) {
                            uVar18 = *puVar2;
                            if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_0681c36c;
                            bVar15 = true;
                            in_stack_00000bd8 = uVar18 + 1;
                            *(undefined4 *)(lVar21 + (long)(int)uVar18 * 0x178 + 0x58) =
                                 *(undefined4 *)(unaff_x19 + 0x668);
                            uVar20 = 0x2026;
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
                    bVar15 = true;
                    uVar20 = in_stack_00000bdc;
                    goto LAB_0681aa4c;
                  }
                  lVar21 = *in_stack_00000078;
                  if (((lVar21 == 0) || (*unaff_x23 == 0)) ||
                     (lVar23 = FUN_067fd3b4(*unaff_x23,0), lVar23 == 0)) goto LAB_0681c118;
                  uVar37 = FUN_0518817c(lVar23,3,*(undefined8 *)
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Add__
                                       );
                  if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_0681c36c;
                  *(undefined8 *)(lVar21 + lVar26 * 0x178 + 0x30) = uVar37;
                  thunk_FUN_0333a630();
                  bVar15 = true;
                  uVar20 = 3;
                  *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
                }
                else {
                  bVar15 = false;
LAB_0681aa4c:
                  if ((uVar20 != 3) && ((int)uVar18 < *(int *)(unaff_x19 + 0x324))) {
                    lVar21 = *in_stack_00000078;
                    if (lVar21 != 0) {
                      if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_0681c36c;
                      lVar21 = lVar21 + (long)(int)uVar18 * 0x178;
                      *(undefined1 *)(lVar21 + 0x194) = 0;
                      *(undefined2 *)(lVar21 + 0x20) = 0x200b;
                      *(undefined4 *)(lVar21 + 100) = 0;
                      *puVar2 = uVar18 + 1;
                      goto LAB_0681c108;
                    }
                    goto LAB_0681c118;
                  }
                }
                iVar17 = *(int *)(unaff_x19 + 0x644);
                if (iVar17 == 0) {
                  uVar18 = *(uint *)(unaff_x19 + 0x25c);
                  if ((uVar18 >> 4 & 1) == 0) {
                    if ((uVar18 >> 3 & 1) == 0) {
                      fStack0000000000000068 = 1.0;
                      if ((uVar18 >> 5 & 1) != 0) {
                        if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                          thunk_FUN_032cd7c0();
                        }
                        uVar22 = FUN_058a4af0(uVar20,0);
                        fStack0000000000000068 = 1.0;
                        if ((uVar22 & 1) != 0) {
                          if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                            thunk_FUN_032cd7c0();
                          }
                          uVar20 = FUN_058a4dd0(uVar20,0);
                          fStack0000000000000068 = fVar10;
                          goto LAB_0681adc0;
                        }
                      }
                    }
                    else {
                      if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                      }
                      uVar22 = FUN_058a4a34(uVar20,0);
                      fStack0000000000000068 = 1.0;
                      if ((uVar22 & 1) != 0) {
                        if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                          thunk_FUN_032cd7c0();
                        }
                        uVar20 = FUN_058a4f48(uVar20,0);
                        goto LAB_0681adc0;
                      }
                    }
                  }
                  else {
                    if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                    }
                    uVar22 = FUN_058a4af0(uVar20,0);
                    fStack0000000000000068 = 1.0;
                    if ((uVar22 & 1) != 0) {
                      if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                      }
                      uVar20 = FUN_058a4dd0(uVar20,0);
LAB_0681adc0:
                      uVar20 = uVar20 & 0xffff;
                    }
                  }
                  iVar17 = *(int *)(unaff_x19 + 0x644);
                  if (iVar17 != 0) goto LAB_0681aaac;
LAB_0681adcc:
                  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                     (lVar21 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar21 == 0))
                  goto LAB_0681c118;
                  if (*(uint *)(lVar21 + 0x18) <= *puVar2) goto LAB_0681c36c;
                  *plVar3 = *(long *)(lVar21 + (long)(int)*puVar2 * 0x178 + 0x30);
                  thunk_FUN_0333a630(plVar3);
                  if (*plVar3 == 0) goto LAB_0681c108;
                  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                     (lVar21 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar21 == 0))
                  goto LAB_0681c118;
                  uVar5 = *puVar2;
                  uVar18 = *(uint *)(lVar21 + 0x18);
                  if (uVar18 <= uVar5) goto LAB_0681c36c;
                  *(undefined4 *)(unaff_x19 + 0x120) =
                       *(undefined4 *)(lVar21 + (long)(int)uVar5 * 0x178 + 0x58);
                  if (bVar15) {
                    lVar26 = *(long *)(unaff_x19 + 0x478);
                    if (lVar26 == 0) goto LAB_0681c118;
                    if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_0681c36c;
                    if ((*(int *)(lVar26 + (long)(int)uVar19 * 0xc + 0x20) != 10) ||
                       (uVar5 == *(uint *)(unaff_x19 + 0x498))) goto LAB_0681ae6c;
                    if (uVar18 <= uVar5 - 1) goto LAB_0681c36c;
                    if (*unaff_x23 == 0) goto LAB_0681c118;
                    fVar41 = *(float *)(lVar21 + (long)(int)(uVar5 - 1) * 0x178 + 0x60);
                    iVar17 = FUN_06c5195c(*unaff_x23 + 0x50,0);
                    lVar21 = *unaff_x23;
                  }
                  else {
LAB_0681ae6c:
                    if (*unaff_x23 == 0) goto LAB_0681c118;
                    fVar41 = *(float *)(unaff_x19 + 0x1e8);
                    iVar17 = FUN_06c5195c(*unaff_x23 + 0x50,0);
                    lVar21 = *(long *)(unaff_x19 + 0x100);
                  }
                  if (lVar21 == 0) goto LAB_0681c118;
                  fVar42 = (float)FUN_06c5196c(lVar21 + 0x50,0);
                  fVar30 = fVar36;
                  if (*(char *)(unaff_x19 + 0x305) != '\0') {
                    fVar30 = 1.0;
                  }
                  fVar44 = 0.0;
                  fVar33 = 0.0;
                  if (!(bool)(bVar15 & uVar20 == 0x2026)) {
                    if (*unaff_x23 == 0) goto LAB_0681c118;
                    fVar33 = (float)FUN_06c5198c(*unaff_x23 + 0x50,0);
                    if (*unaff_x23 == 0) goto LAB_0681c118;
                    fVar44 = (float)FUN_06c519cc(*unaff_x23 + 0x50,0);
                  }
                  if ((*plVar3 == 0) || (lVar21 = *(long *)(unaff_x19 + 0x488), lVar21 == 0))
                  goto LAB_0681c118;
                  uVar18 = *(uint *)(unaff_x19 + 0x494);
                  if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_0681c36c;
                  fVar41 = ((fStack0000000000000068 * fVar41) / (float)iVar17) * fVar42 * fVar30 *
                           *(float *)(unaff_x19 + 0x404) * *(float *)(*plVar3 + 0x2c);
                  *(undefined4 *)(lVar21 + (long)(int)uVar18 * 0x178 + 0x2c) = 0;
LAB_0681b0f8:
                  bVar15 = uVar20 == 0xad;
                  fVar30 = 0.0;
                  if (!bVar15 && uVar20 != 3) {
                    fVar30 = fVar41;
                  }
                }
                else {
                  fStack0000000000000068 = 1.0;
                  if (iVar17 == 0) goto LAB_0681adcc;
LAB_0681aaac:
                  if (iVar17 == 1) {
                    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                       (lVar21 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar21 == 0))
                    goto LAB_0681c118;
                    if (*(uint *)(lVar21 + 0x18) <= *puVar2) goto LAB_0681c36c;
                    *(undefined8 *)(unaff_x19 + 0x698) =
                         *(undefined8 *)(lVar21 + (long)(int)*puVar2 * 0x178 + 0x40);
                    thunk_FUN_0333a630(plVar1);
                    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                       (lVar21 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar21 == 0))
                    goto LAB_0681c118;
                    if (*(uint *)(lVar21 + 0x18) <= *puVar2) goto LAB_0681c36c;
                    *(undefined4 *)(unaff_x19 + 0x6a4) =
                         *(undefined4 *)(lVar21 + (long)(int)*puVar2 * 0x178 + 0x48);
                    if ((*(long *)(unaff_x19 + 0x698) == 0) ||
                       (lVar21 = FUN_06833818(*(long *)(unaff_x19 + 0x698),0), lVar21 == 0))
                    goto LAB_0681c118;
                    lVar21 = FUN_041e29a8(lVar21,*(undefined4 *)(unaff_x19 + 0x6a4),
                                          *(undefined8 *)
                                           Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Clear__
                                         );
                    if (lVar21 == 0) goto LAB_0681c108;
                    if (uVar20 == 0x3c) {
                      uVar20 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
                    }
                    if (*plVar1 == 0) goto LAB_0681c118;
                    memmove(&stack0x00000100,(void *)(*plVar1 + 0x48),0x60);
                    iVar17 = FUN_06c5195c(&stack0x00000100,0);
                    fVar41 = *(float *)(unaff_x19 + 0x1e8);
                    if (iVar17 < 1) {
                      if (*unaff_x23 == 0) goto LAB_0681c118;
                      memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
                      iVar17 = FUN_06c5195c(&stack0x00000100,0);
                      if (*unaff_x23 == 0) goto LAB_0681c118;
                      memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
                      fVar30 = (float)FUN_06c5196c(&stack0x00000100,0);
                      fVar44 = fVar36;
                      if (*(char *)(unaff_x19 + 0x305) != '\0') {
                        fVar44 = 1.0;
                      }
                      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_0681c118;
                      memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
                      fVar42 = (float)FUN_06c5198c(&stack0x00000100,0);
                      if (*(long *)(lVar21 + 0x20) == 0) goto LAB_0681c118;
                      FUN_06c51e78(&stack0x00000be0,*(long *)(lVar21 + 0x20),0);
                      in_stack_000000c0 = in_stack_00000be0;
                      in_stack_000000c8 = in_stack_00000be8;
                      in_stack_000000d0 = in_stack_00000bf0;
                      fVar32 = (float)FUN_06c51ca8(&stack0x000000c0,0);
                      if (*(long *)(lVar21 + 0x20) == 0) goto LAB_0681c118;
                      fVar35 = *(float *)(lVar21 + 0x2c);
                      fVar34 = (float)FUN_06c51eb4(*(long *)(lVar21 + 0x20),0);
                      if (*unaff_x23 == 0) goto LAB_0681c118;
                      memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
                      fVar33 = (float)FUN_06c5198c(&stack0x00000100,0);
                      if (*unaff_x23 == 0) goto LAB_0681c118;
                      fVar44 = (fVar41 / (float)iVar17) * fVar30 * fVar44;
                      fVar41 = fVar44 * (fVar42 / fVar32) * fVar35 * fVar34;
                      fVar44 = fVar44 / fVar41;
                      fVar33 = fVar44 * fVar33;
                      memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
                      fVar30 = (float)FUN_06c519cc(&stack0x00000100,0);
                      fVar44 = fVar44 * fVar30;
                    }
                    else {
                      if (*plVar1 == 0) goto LAB_0681c118;
                      memmove(&stack0x00000100,(void *)(*plVar1 + 0x48),0x60);
                      iVar17 = FUN_06c5195c(&stack0x00000100,0);
                      if (*plVar1 == 0) goto LAB_0681c118;
                      memmove(&stack0x00000100,(void *)(*plVar1 + 0x48),0x60);
                      fVar44 = (float)FUN_06c5196c(&stack0x00000100,0);
                      if (*(long *)(lVar21 + 0x20) == 0) goto LAB_0681c118;
                      fVar42 = *(float *)(lVar21 + 0x2c);
                      fVar30 = fVar36;
                      if (*(char *)(unaff_x19 + 0x305) != '\0') {
                        fVar30 = 1.0;
                      }
                      fVar32 = (float)FUN_06c51eb4(*(long *)(lVar21 + 0x20),0);
                      if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_0681c118;
                      memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
                      fVar33 = (float)FUN_06c5198c(&stack0x00000100,0);
                      if (*plVar1 == 0) goto LAB_0681c118;
                      fVar41 = (fVar41 / (float)iVar17) * fVar44 * fVar30 * fVar42 * fVar32;
                      memmove(&stack0x00000100,(void *)(*plVar1 + 0x48),0x60);
                      fVar44 = (float)FUN_06c519cc(&stack0x00000100,0);
                    }
                    *plVar3 = lVar21;
                    thunk_FUN_0333a630(plVar3,lVar21);
                    lVar21 = *in_stack_00000078;
                    if (lVar21 != 0) {
                      uVar18 = *puVar2;
                      if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_0681c36c;
                      lVar26 = lVar21 + (long)(int)uVar18 * 0x178;
                      *(undefined4 *)(lVar26 + 0x2c) = 1;
                      *(float *)(lVar26 + 0x160) = fVar41;
                      *(undefined4 *)(unaff_x19 + 0x120) = uVar43;
                      goto LAB_0681b0f8;
                    }
                    goto LAB_0681c118;
                  }
                  bVar15 = uVar20 == 0xad;
                  lVar21 = *in_stack_00000078;
                  fVar33 = 0.0;
                  fVar30 = 0.0;
                  if (!bVar15 && uVar20 != 3) {
                    fVar30 = fVar41;
                  }
                  if (lVar21 == 0) goto LAB_0681c118;
                  uVar18 = *puVar2;
                  fVar44 = 0.0;
                }
                if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_0681c36c;
                *(short *)(lVar21 + (long)(int)uVar18 * 0x178 + 0x20) = (short)uVar20;
                if ((*plVar3 == 0) || (lVar21 = *(long *)(*plVar3 + 0x20), lVar21 == 0))
                goto LAB_0681c118;
                FUN_06c51e78(&stack0x00000be0,lVar21,0);
                in_stack_000000e0 = in_stack_00000be0;
                in_stack_000000e8 = in_stack_00000be8;
                in_stack_000000f0 = in_stack_00000bf0;
                if ((int)uVar20 < 0x10000) {
                  if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                    thunk_FUN_032cd7c0();
                  }
                  uVar18 = FUN_058a1fe4(uVar20,0);
                  uVar18 = uVar18 & 1;
                }
                else {
                  uVar18 = 0;
                }
                fStack0000000000000074 = *(float *)(unaff_x19 + 0x2a8);
                *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
                if (*(char *)(unaff_x19 + 0x2f9) == '\0') {
                  fVar42 = 0.0;
                }
                else {
                  if (*plVar3 == 0) goto LAB_0681c118;
                  uVar24 = *puVar2;
                  uVar5 = *(uint *)(*plVar3 + 0x28);
                  if ((int)uVar24 < (int)uVar7) {
                    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                       (lVar21 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar21 == 0))
                    goto LAB_0681c118;
                    if (*(uint *)(lVar21 + 0x18) <= uVar24 + 1) goto LAB_0681c36c;
                    lVar21 = *(long *)(lVar21 + (long)(int)(uVar24 + 1) * 0x178 + 0x30);
                    if ((((lVar21 == 0) || (*unaff_x23 == 0)) ||
                        (lVar26 = *(long *)(*unaff_x23 + 0x128), lVar26 == 0)) ||
                       (lVar26 = *(long *)(lVar26 + 0x18), lVar26 == 0)) goto LAB_0681c118;
                    uVar22 = FUN_05189ccc(lVar26,uVar5 | *(int *)(lVar21 + 0x28) << 0x10,
                                          &stack0x000000b8,
                                          *(undefined8 *)
                                           Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>__ctor__
                                         );
                    uVar43 = 0;
                    if ((uVar22 & 1) == 0) {
                      uVar45 = 0;
                      fVar42 = 0.0;
                      uVar46 = 0;
                    }
                    else {
                      if (in_stack_000000b8 == 0) goto LAB_0681c118;
                      uVar43 = *(undefined4 *)(in_stack_000000b8 + 0x14);
                      uVar45 = *(undefined4 *)(in_stack_000000b8 + 0x18);
                      fVar42 = *(float *)(in_stack_000000b8 + 0x1c);
                      uVar46 = *(undefined4 *)(in_stack_000000b8 + 0x20);
                      if ((*(byte *)(in_stack_000000b8 + 0x39) & 1) != 0) {
                        fStack0000000000000074 = 0.0;
                      }
                    }
                    uVar24 = *puVar2;
                  }
                  else {
                    uVar43 = 0;
                    uVar45 = 0;
                    fVar42 = 0.0;
                    uVar46 = 0;
                  }
                  if (0 < (int)uVar24) {
                    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                       (lVar21 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar21 == 0))
                    goto LAB_0681c118;
                    if (*(uint *)(lVar21 + 0x18) <= uVar24 - 1) goto LAB_0681c36c;
                    lVar21 = *(long *)(lVar21 + (ulong)(uVar24 - 1) * 0x178 + 0x30);
                    if (((lVar21 == 0) || (*unaff_x23 == 0)) ||
                       ((lVar26 = *(long *)(*unaff_x23 + 0x128), lVar26 == 0 ||
                        (lVar26 = *(long *)(lVar26 + 0x18), lVar26 == 0)))) goto LAB_0681c118;
                    uVar22 = FUN_05189ccc(lVar26,*(uint *)(lVar21 + 0x28) | uVar5 << 0x10,
                                          &stack0x000000b8,
                                          *(undefined8 *)
                                           Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>__ctor__
                                         );
                    if ((uVar22 & 1) != 0) {
                      if ((in_stack_000000b8 == 0) ||
                         (FUN_06807d68(uVar43,uVar45,fVar42,uVar46,
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
                  *(float *)(unaff_x19 + 0x2fc) = fVar42;
                }
                fStack0000000000000060 = 0.0;
                fVar32 = *(float *)(unaff_x19 + 0x2b0);
                if (fVar32 != 0.0) {
                  if ((*plVar3 == 0) || (lVar21 = *(long *)(*plVar3 + 0x20), lVar21 == 0))
                  goto LAB_0681c118;
                  FUN_06c51e78(&stack0x00000be0,lVar21,0);
                  in_stack_000000c0 = in_stack_00000be0;
                  in_stack_000000c8 = in_stack_00000be8;
                  in_stack_000000d0 = in_stack_00000bf0;
                  fVar34 = (float)FUN_06c51ca0(&stack0x000000c0,0);
                  if ((*plVar3 == 0) || (lVar21 = *(long *)(*plVar3 + 0x20), lVar21 == 0))
                  goto LAB_0681c118;
                  FUN_06c51e78(&stack0x00000be0,lVar21,0);
                  in_stack_000000c0 = in_stack_00000be0;
                  in_stack_000000c8 = in_stack_00000be8;
                  in_stack_000000d0 = in_stack_00000bf0;
                  fVar35 = (float)FUN_06c51cb0(&stack0x000000c0,0);
                  fStack0000000000000060 =
                       (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                       (fVar32 * 0.5 - fVar30 * (fVar34 * 0.5 + fVar35));
                  *(float *)(unaff_x19 + 0x640) =
                       *(float *)(unaff_x19 + 0x640) + fStack0000000000000060;
                }
                iVar17 = *(int *)(unaff_x19 + 0x644);
                fVar32 = 0.0;
                if (((cVar6 == '\0') && (fVar32 = 0.0, iVar17 == 0)) &&
                   ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0)) {
                  if (*unaff_x23 == 0) goto LAB_0681c118;
                  fVar32 = *(float *)(*unaff_x23 + 0x1b4);
                }
                lVar21 = *in_stack_00000078;
                if (lVar21 == 0) goto LAB_0681c118;
                uVar5 = *puVar2;
                lVar26 = (long)(int)uVar5;
                if (*(uint *)(lVar21 + 0x18) <= uVar5) goto LAB_0681c36c;
                fVar34 = *(float *)(unaff_x19 + 0x4d8);
                fVar35 = *(float *)(unaff_x19 + 0x61c);
                fVar33 = fVar33 * fVar30;
                *(float *)(lVar21 + lVar26 * 0x178 + 0x14c) = (0.0 - fVar34) + fVar35;
                if (iVar17 == 0) {
                  fVar33 = fVar33 / fStack0000000000000068;
                  fVar44 = (fVar44 * fVar30) / fStack0000000000000068;
                }
                else {
                  fVar44 = fVar44 * fVar30;
                }
                fVar33 = fVar35 + fVar33;
                if ((uVar18 == 0) || (uVar5 == *(uint *)(unaff_x19 + 0x498))) {
                  fVar44 = fVar35 + fVar44;
                  fVar39 = fVar33;
                  fVar38 = fVar44;
                  if (fVar35 != 0.0) {
                    fVar39 = (fVar33 - fVar35) / *(float *)(unaff_x19 + 0x404);
                    fVar38 = (fVar44 - fVar35) / *(float *)(unaff_x19 + 0x404);
                    if (fVar39 <= fVar33) {
                      fVar39 = fVar33;
                    }
                    if (fVar44 <= fVar38) {
                      fVar38 = fVar44;
                    }
                  }
                  lVar21 = lVar21 + lVar26 * 0x178;
                  fVar35 = fVar39;
                  if (fVar39 <= *(float *)(unaff_x19 + 0x4c8)) {
                    fVar35 = *(float *)(unaff_x19 + 0x4c8);
                  }
                  fVar40 = fVar38;
                  if (*(float *)(unaff_x19 + 0x4cc) <= fVar38) {
                    fVar40 = *(float *)(unaff_x19 + 0x4cc);
                  }
                  *(float *)(unaff_x19 + 0x4cc) = fVar40;
                  *(float *)(unaff_x19 + 0x4c8) = fVar35;
                  *(float *)(lVar21 + 0x154) = fVar39;
                  *(float *)(lVar21 + 0x158) = fVar38;
                  *(float *)(lVar21 + 0x148) = fVar33 - fVar34;
                  *(float *)(unaff_x19 + 0x4c0) = fVar33 - fVar34;
                  *(float *)(lVar21 + 0x150) = fVar44 - fVar34;
                  *(float *)(unaff_x19 + 0x4c4) = fVar44 - fVar34;
                  if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0'))
                  {
                    *(float *)(unaff_x19 + 0x4b8) = fVar35;
                    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_0681c118;
                    fVar44 = *(float *)(unaff_x19 + 0x4bc);
                    fVar34 = (float)FUN_06c5199c(*(long *)(unaff_x19 + 0x100) + 0x50,0);
                    fStack0000000000000068 = (fVar30 * fVar34) / fStack0000000000000068;
                    fVar34 = *(float *)(unaff_x19 + 0x4d8);
                    if (fVar44 <= fStack0000000000000068) {
                      fVar44 = fStack0000000000000068;
                    }
                    *(float *)(unaff_x19 + 0x4bc) = fVar44;
                  }
                }
                else {
                  fVar44 = *(float *)(unaff_x19 + 0x4c8);
                  lVar21 = lVar21 + lVar26 * 0x178;
                  *(float *)(lVar21 + 0x154) = fVar44;
                  fVar35 = *(float *)(unaff_x19 + 0x4cc);
                  fVar44 = fVar44 - fVar34;
                  *(float *)(lVar21 + 0x148) = fVar44;
                  *(float *)(lVar21 + 0x158) = fVar35;
                  *(float *)(unaff_x19 + 0x4c0) = fVar44;
                  fVar35 = fVar35 - fVar34;
                  *(float *)(lVar21 + 0x150) = fVar35;
                  *(float *)(unaff_x19 + 0x4c4) = fVar35;
                }
                if (fVar34 == 0.0) {
                  if ((uVar18 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498)))
                  {
                    fVar44 = *(float *)(unaff_x19 + 0x4b4);
                    if (*(float *)(unaff_x19 + 0x4b4) <= fVar33) {
                      fVar44 = fVar33;
                    }
                    *(float *)(unaff_x19 + 0x4b4) = fVar44;
                    goto LAB_0681b5c8;
                  }
                  bVar16 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
                  if (uVar20 == 9)
                  goto Unity_VisualScripting_LessThanOrEqualHandler_<>c__<_ctor>b__0_41;
LAB_0681b61c:
                  if ((!(bool)(bVar14 | bVar15 ^ 1U)) || (*(int *)(unaff_x19 + 0x644) == 1))
                  goto LAB_0681b634;
LAB_0681b7b0:
                  fVar41 = *(float *)(unaff_x19 + 0x640);
                  if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
                    fVar44 = (float)FUN_06c51cc0(&stack0x000000e0,0);
                    if (*unaff_x23 == 0) goto LAB_0681c118;
                    fVar44 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                             (*(float *)(unaff_x19 + 0x2ac) +
                             fVar30 * (fVar42 + fVar44) +
                             fVar31 * (fVar32 + fStack0000000000000074 +
                                                *(float *)(*unaff_x23 + 0x1ac)));
                  }
                  else {
                    if (*unaff_x23 == 0) goto LAB_0681c118;
                    fVar44 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                             (*(float *)(unaff_x19 + 0x2ac) +
                             (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
                             fVar31 * (fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
                  }
                  fVar41 = fVar41 + fVar44;
                  *(float *)(unaff_x19 + 0x640) = fVar41;
                  if ((uVar20 == 0x200b) || (uVar18 != 0)) {
                    fVar41 = fVar41 + fVar31 * *(float *)(unaff_x19 + 0x2b4);
                    *(float *)(unaff_x19 + 0x640) = fVar41;
                  }
                  if (uVar20 == 0xd) {
                    if (fStack0000000000000064 <= fStack000000000000006c + fVar41) {
                      fStack0000000000000064 = fStack000000000000006c + fVar41;
                    }
                    fStack000000000000006c = 0.0;
                    fVar41 = *(float *)(unaff_x19 + 0x40c) + 0.0;
                    goto LAB_0681b8b4;
                  }
                  bVar16 = uVar20 == 10;
                  if (((0xb < uVar20) || ((1 << (ulong)(uVar20 & 0x1f) & 0xc08U) == 0)) &&
                     (1 < uVar20 - 0x2028)) goto LAB_0681b8bc;
LAB_0681b978:
                  if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
                    fVar41 = *(float *)(unaff_x19 + 0x4c8);
                    fVar44 = *(float *)(unaff_x19 + 0x4d0);
                    if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                    }
                    fVar41 = fVar41 - fVar44;
                    if (((fVar11 < ABS(fVar41)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
                       (*(char *)(unaff_x19 + 0x33c) == '\0')) {
                      *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar41;
                      *(float *)(unaff_x19 + 0x4d8) = fVar41 + *(float *)(unaff_x19 + 0x4d8);
                    }
                  }
                  fVar41 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
                  fStack0000000000000038 = *(float *)(unaff_x19 + 0x4c4);
                  if (fVar41 <= *(float *)(unaff_x19 + 0x4c4)) {
                    fStack0000000000000038 = fVar41;
                  }
                  fVar44 = fStack0000000000000044 +
                           fStack0000000000000048 + fStack000000000000006c + fStack000000000000005c;
                  fVar41 = fStack0000000000000064;
                  if (fStack0000000000000064 <= fVar44) {
                    fVar41 = fVar44;
                  }
                  *(float *)(unaff_x19 + 0x4c4) = fStack0000000000000038;
                  fStack000000000000006c = fVar41;
                  if (*(uint *)(unaff_x19 + 0x494) != uVar7) {
                    fStack000000000000006c = 0.0;
                    fStack0000000000000064 = fVar41;
                  }
                  fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
                  *(undefined1 *)(unaff_x19 + 0x33c) = 0;
                  if (bVar16) {
LAB_0681bc94:
                    FUN_0682230c();
                    FUN_0682230c();
                    uVar18 = *(uint *)(unaff_x19 + 0x494);
                    lVar21 = *(long *)(unaff_x19 + 0x488);
                    iVar17 = uVar18 + 1;
                    *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
                    *(int *)(unaff_x19 + 0x498) = iVar17;
                    if (lVar21 != 0) {
                      if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_0681c36c;
                      fVar41 = *(float *)(lVar21 + (long)(int)uVar18 * 0x178 + 0x154);
                      if (*(float *)(unaff_x19 + 0x2c0) == DAT_013a0308) {
                        fVar44 = 0.0;
                        if (!(bool)(uVar20 != 0x2029 & (bVar16 ^ 1U))) {
                          fVar44 = *(float *)(unaff_x19 + 0x2cc);
                        }
                        uVar25 = 0;
                        fVar44 = fVar41 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                                 fVar27 * (fVar28 + *(float *)(unaff_x19 + 700)) +
                                 fVar31 * (*(float *)(unaff_x19 + 0x2b8) + fVar44) +
                                 *(float *)(unaff_x19 + 0x4d8);
                      }
                      else {
                        fVar44 = 0.0;
                        if (!(bool)(uVar20 != 0x2029 & (bVar16 ^ 1U))) {
                          fVar44 = *(float *)(unaff_x19 + 0x2cc);
                        }
                        uVar25 = 1;
                        fVar44 = *(float *)(unaff_x19 + 0x4d8) +
                                 *(float *)(unaff_x19 + 0x2c0) +
                                 fVar31 * (*(float *)(unaff_x19 + 0x2b8) + fVar44);
                      }
                      *(float *)(unaff_x19 + 0x4d8) = fVar44;
                      *(undefined1 *)(unaff_x19 + 0x2c4) = uVar25;
                      puVar12 = 
                      Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                      ;
                      lVar21 = *(long *)
                                Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                      ;
                      if (*(int *)(lVar21 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                        lVar21 = *(long *)puVar12;
                        iVar17 = *puVar2 + 1;
                      }
                      uVar37 = *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 0x15a8);
                      *(float *)(unaff_x19 + 0x640) =
                           *(float *)(unaff_x19 + 0x408) + 0.0 + *(float *)(unaff_x19 + 0x40c);
                      uVar37 = NEON_rev64(uVar37,4);
                      *(float *)(unaff_x19 + 0x4d0) = fVar41;
                      *(undefined8 *)(unaff_x19 + 0x4c8) = uVar37;
                      *(int *)(unaff_x19 + 0x494) = iVar17;
                      fVar41 = fVar30;
                      goto LAB_0681c108;
                    }
                    goto LAB_0681c118;
                  }
                  if ((int)uVar20 < 0x2028) {
                    if (uVar20 == 3) {
                      if (*(long *)(unaff_x19 + 0x478) == 0) goto LAB_0681c118;
                      uVar19 = *(uint *)(*(long *)(unaff_x19 + 0x478) + 0x18);
                      uVar20 = 3;
                    }
                    else if ((uVar20 == 0xb) || (uVar20 == 0x2d)) goto LAB_0681bc94;
                  }
                  else if (uVar20 - 0x2028 < 2) goto LAB_0681bc94;
                }
                else {
LAB_0681b5c8:
                  bVar16 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
                  if (uVar20 == 9) {
Unity_VisualScripting_LessThanOrEqualHandler_<>c__<_ctor>b__0_41:
                    bVar8 = true;
                  }
                  else {
                    if ((((uVar18 != 0) || (uVar20 == 3)) || (uVar20 == 0x200b)) || (uVar20 == 0xad)
                       ) goto LAB_0681b61c;
LAB_0681b634:
                    bVar8 = false;
                  }
                  fVar34 = *(float *)(unaff_x19 + 0x360);
                  fVar35 = *(float *)(unaff_x19 + 0x640);
                  fVar44 = (fVar29 - *(float *)(unaff_x19 + 0x350)) - *(float *)(unaff_x19 + 0x354);
                  bVar13 = true;
                  if ((fVar34 <= fVar44) && (bVar13 = false, !NAN(fVar34))) {
                    bVar13 = fVar34 == -1.0;
                  }
                  if (!bVar13) {
                    fVar44 = fVar34;
                  }
                  fVar34 = (float)FUN_06c51cc0(&stack0x000000e0,0);
                  if (!bVar15) {
                    fVar41 = fVar30;
                  }
                  fVar33 = 1.0;
                  if (!bVar16) {
                    fVar33 = DAT_013a01c4;
                  }
                  fStack000000000000005c =
                       ABS(fVar35) + fVar41 * fVar34 * (1.0 - *(float *)(unaff_x19 + 0x2d4));
                  if ((fVar33 * fVar44 < fStack000000000000005c && (uVar4 & 1) == 0) &&
                     (*(int *)(unaff_x19 + 0x494) != *(int *)(unaff_x19 + 0x498))) {
                    uVar19 = FUN_06821f78();
                    lVar21 = *(long *)(unaff_x19 + 0x488);
                    if (lVar21 == 0) goto LAB_0681c118;
                    uVar20 = *(uint *)(unaff_x19 + 0x494);
                    uVar18 = uVar20 - 1;
                    if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_0681c36c;
                    if ((!bVar14 && *(short *)(lVar21 + (long)(int)uVar18 * 0x178 + 0x20) == 0xad)
                       && (*(int *)(unaff_x19 + 0x2e0) == 0)) {
                      bVar14 = false;
                      in_stack_00000bdc = 0x2d;
                      *puVar2 = uVar18;
                      fVar41 = fVar30;
                      uVar19 = uVar19 - 1;
                      in_stack_00000bd8 = uVar18;
                      goto LAB_0681c108;
                    }
                    if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_0681c36c;
                    if (*(short *)(lVar21 + (long)(int)uVar20 * 0x178 + 0x20) == 0xad) {
                      bVar14 = true;
                      fVar41 = fVar30;
                    }
                    else {
                      if ((uStack0000000000000030 & unaff_w24) != 0) {
                        fVar41 = *(float *)(unaff_x19 + 0x2d4);
                        fVar42 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
                        if ((fVar41 < fVar42) &&
                           (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
                          fVar36 = fStack000000000000005c;
                          if (0.0 < fVar41) {
                            fVar36 = fStack000000000000005c / (1.0 - fVar41);
                          }
                          fVar41 = fVar41 + (fStack000000000000005c -
                                            fVar33 * (fVar44 + DAT_013a055c)) / fVar36;
                          if (fVar42 <= fVar41) {
                            fVar41 = fVar42;
                          }
                          *(float *)(unaff_x19 + 0x2d4) = fVar41;
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
                          fVar41 = (*unaff_x22 - *(float *)(unaff_x19 + 0x240)) * 0.5;
                          if (fVar41 <= DAT_013a0300) {
                            fVar41 = DAT_013a0300;
                          }
                          fVar41 = *unaff_x22 - fVar41;
                          *unaff_x22 = fVar41;
                          fVar36 = fVar41 * 20.0 + 0.5;
                          fVar41 = DAT_013a07c8;
                          if (fVar36 != INFINITY) {
                            fVar41 = (float)(int)fVar36 / 20.0;
                          }
                          if (fVar41 <= *(float *)(unaff_x19 + 0x250)) {
                            fVar41 = *(float *)(unaff_x19 + 0x250);
                          }
                          *unaff_x22 = fVar41;
                          goto LAB_0681c1f0;
                        }
                      }
                      if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
                        fVar41 = *(float *)(unaff_x19 + 0x4c8);
                        fVar44 = *(float *)(unaff_x19 + 0x4d0);
                        if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
                          thunk_FUN_032cd7c0();
                        }
                        fVar41 = fVar41 - fVar44;
                        if (((fVar11 < ABS(fVar41)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
                           (*(char *)(unaff_x19 + 0x33c) == '\0')) {
                          *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar41;
                          *(float *)(unaff_x19 + 0x4d8) = fVar41 + *(float *)(unaff_x19 + 0x4d8);
                        }
                      }
                      fVar42 = *(float *)(unaff_x19 + 0x640);
                      fVar44 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
                      fVar41 = *(float *)(unaff_x19 + 0x4c4);
                      if (fVar44 <= *(float *)(unaff_x19 + 0x4c4)) {
                        fVar41 = fVar44;
                      }
                      *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
                      *(float *)(unaff_x19 + 0x4c4) = fVar41;
                      *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
                      if ((uStack0000000000000034 & 1) == 0) {
                        fVar44 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) -
                                 fVar44;
                        if (fStack0000000000000038 <= fVar44) {
                          fStack0000000000000038 = fVar44;
                        }
                      }
                      else {
                        fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar41;
                      }
                      FUN_0682230c();
                      lVar21 = *(long *)(unaff_x19 + 0x488);
                      *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
                      if (lVar21 == 0) goto LAB_0681c118;
                      if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
                      goto LAB_0681c36c;
                      fVar41 = *(float *)(unaff_x19 + 0x2c0);
                      fVar44 = *(float *)(lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x494) * 0x178 +
                                         0x154);
                      bVar14 = fVar41 != DAT_013a0308;
                      if (bVar14) {
                        fVar32 = fVar31 * *(float *)(unaff_x19 + 0x2b8);
                      }
                      else {
                        fVar32 = fVar44 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                                 fVar27 * (fVar28 + *(float *)(unaff_x19 + 700));
                        fVar41 = fVar31 * *(float *)(unaff_x19 + 0x2b8);
                      }
                      *(bool *)(unaff_x19 + 0x2c4) = bVar14;
                      *(float *)(unaff_x19 + 0x4d8) =
                           *(float *)(unaff_x19 + 0x4d8) + fVar41 + fVar32;
                      puVar12 = 
                      Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                      ;
                      lVar21 = *(long *)
                                Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                      ;
                      if (*(int *)(lVar21 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                        lVar21 = *(long *)puVar12;
                      }
                      bVar14 = false;
                      fStack000000000000006c = fStack000000000000006c + fVar42;
                      uVar37 = *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 0x15a8);
                      *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + 0.0;
                      uVar37 = NEON_rev64(uVar37,4);
                      *(float *)(unaff_x19 + 0x4d0) = fVar44;
                      *(undefined8 *)(unaff_x19 + 0x4c8) = uVar37;
                      uStack0000000000000030 = 1;
                      fVar41 = fVar30;
                    }
                    goto LAB_0681c108;
                  }
                  fStack0000000000000048 = *(float *)(unaff_x19 + 0x350);
                  fStack0000000000000044 = *(float *)(unaff_x19 + 0x354);
                  if (!bVar8) goto LAB_0681b7b0;
                  if (*unaff_x23 == 0) goto LAB_0681c118;
                  memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
                  fVar41 = (float)FUN_06c51a54(&stack0x00000100,0);
                  if (*unaff_x23 == 0) goto LAB_0681c118;
                  fVar42 = *(float *)(unaff_x19 + 0x640);
                  fVar44 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x23 + 0x1b9));
                  fVar44 = fVar30 * fVar41 * fVar44;
                  fVar41 = fVar44 * (float)(int)(fVar42 / fVar44);
                  if (fVar41 <= fVar42) {
                    fVar41 = fVar42 + fVar44;
                  }
LAB_0681b8b4:
                  bVar16 = false;
                  *(float *)(unaff_x19 + 0x640) = fVar41;
LAB_0681b8bc:
                  if (*puVar2 == uVar7) goto LAB_0681b978;
                }
                if (((uStack0000000000000034 & 1) != 0) || ((*(uint *)(unaff_x19 + 0x2e0) | 2) == 3)
                   ) {
                  if ((uVar18 == 0) &&
                     (((uVar20 != 0x2d && (uVar20 != 0x200b)) && (uVar20 != 0xad)))) {
                    if (*(char *)(unaff_x19 + 0x2da) == '\0') {
LAB_0681bb28:
                      if (((((0x2bfd < uVar20 - 0xac01) && (0xfd < uVar20 - 0x1101)) &&
                           (0x1d < uVar20 - 0xa961)) ||
                          (uVar22 = FUN_06830d40(0), (uVar22 & 1) != 0)) &&
                         ((((0xed < uVar20 - 0xff01 && (0x1d < uVar20 - 0xfe31)) &&
                           (0x717d < uVar20 - 0x2e81)) && (0x1fd < uVar20 - 0xf901))))
                      goto LAB_0681b8f4;
                      lVar21 = FUN_06830bd4(0);
                      if ((lVar21 == 0) || (*(long *)(lVar21 + 0x10) == 0)) goto LAB_0681c118;
                      uVar20 = FUN_0502cedc(*(long *)(lVar21 + 0x10),uVar20,
                                            *(undefined8 *)
                                             Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>__ctor__
                                           );
                      if ((int)uVar7 <= (int)*puVar2) {
                        if (uStack0000000000000030 != 0 || ((uVar20 ^ 0xffffffff) & 1) != 0) {
LAB_0681c0b8:
                          FUN_0682230c();
                        }
LAB_0681c0cc:
                        uStack0000000000000030 = 0;
                        bVar9 = true;
                        goto LAB_0681c0fc;
                      }
                      lVar21 = FUN_06830bd4(0);
                      if ((lVar21 == 0) || (lVar26 = *in_stack_00000078, lVar26 == 0))
                      goto LAB_0681c118;
                      if (*(uint *)(lVar26 + 0x18) <= *puVar2 + 1) {
LAB_0681c36c:
                    /* WARNING: Subroutine does not return */
                        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality
                                  ();
                      }
                      if (*(long *)(lVar21 + 0x18) == 0) goto LAB_0681c118;
                      uVar22 = FUN_0502cedc(*(long *)(lVar21 + 0x18),
                                            *(undefined2 *)
                                             (lVar26 + (long)(int)(*puVar2 + 1) * 0x178 + 0x20),
                                            *(undefined8 *)
                                             Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>__ctor__
                                           );
                      if (uStack0000000000000030 == 0 && ((uVar20 ^ 0xffffffff) & 1) == 0)
                      goto LAB_0681c0cc;
                      if ((uVar22 & 1) == 0) goto LAB_0681c0b8;
                      if (uStack0000000000000030 == 0) goto LAB_0681c0cc;
                      if (uVar18 != 0) {
                        FUN_0682230c();
                      }
                      FUN_0682230c();
                      bVar9 = true;
LAB_0681bae0:
                      uStack0000000000000030 = 1;
                    }
                    else {
LAB_0681b8f4:
                      if (bVar9) {
                        lVar21 = FUN_06830bd4(0);
                        if ((lVar21 == 0) || (*(long *)(lVar21 + 0x10) == 0)) goto LAB_0681c118;
                        uVar22 = FUN_0502cedc(*(long *)(lVar21 + 0x10),uVar20,
                                              *(undefined8 *)
                                               Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>__ctor__
                                             );
                        if ((uVar22 & 1) == 0) {
                          FUN_0682230c();
                        }
                        bVar9 = false;
                      }
                      else {
                        if (uStack0000000000000030 != 0) {
                          if ((!bVar14 && bVar15) || (uVar18 != 0)) {
                            FUN_0682230c();
                          }
                          FUN_0682230c();
                          bVar9 = false;
                          goto LAB_0681bae0;
                        }
                        bVar9 = false;
                        uStack0000000000000030 = 0;
                      }
                    }
                  }
                  else {
                    if (*(char *)(unaff_x19 + 0x2da) != '\0') goto LAB_0681b8f4;
                    if (((uVar20 - 0x2007 < 0x29) &&
                        ((1L << ((ulong)(uVar20 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                       ((uVar20 == 0xa0 || (uVar20 == 0x2060)))) goto LAB_0681bb28;
                    FUN_0682230c();
                    bVar9 = false;
                    uStack0000000000000030 = 0;
                    in_stack_00000170 = 0xffffffff;
                  }
                }
LAB_0681c0fc:
                *puVar2 = *puVar2 + 1;
                fVar41 = fVar30;
              }
LAB_0681c108:
              lVar21 = *(long *)(unaff_x19 + 0x478);
              uVar19 = uVar19 + 1;
              if (lVar21 == 0) goto LAB_0681c118;
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


