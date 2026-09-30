/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<bool>$$get_NumberOfDisplayStrings
ENTRY_POINT: 07dfd2a4
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<bool>__get_NumberOfDisplayStrings(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  undefined1 uVar9;
  ushort uVar10;
  bool bVar11;
  bool bVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
  float fVar20;
  double unaff_x20;
  float fVar21;
  double unaff_x21;
  float fVar22;
  double unaff_x22;
  float fVar23;
  double unaff_x23;
  undefined8 uVar24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auVar30 [16];
  
  FUN_08d895f0(param_1 + 0x20);
  uVar13 = FUN_08d93fbc();
  fVar23 = SUB84(unaff_x23,0);
  fVar20 = SUB84(unaff_x20,0);
  fVar22 = SUB84(unaff_x22,0);
  fVar21 = SUB84(unaff_x21,0);
  if ((uVar13 & 1) == 0) {
    lVar14 = *unaff_x26;
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_04980b34();
    }
    uVar24 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x18);
    if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_049a583c(*(long *)(unaff_x27 + 0xe0));
    }
    uVar24 = FUN_08d895f0(uVar24,0);
    uVar15 = FUN_08d895f0(*(long *)(unaff_x27 + 0x40) + 0x20,0);
    uVar13 = FUN_08d93fbc(uVar24,uVar15,0);
    uVar10 = (ushort)((ulong)unaff_x21 >> 0x30);
    if ((uVar13 & 1) == 0) {
      lVar14 = *unaff_x26;
      if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_04980b34();
      }
      lVar18 = *(long *)(unaff_x27 + 0xe0);
      lVar14 = *(long *)(lVar14 + 0xc0);
      *(long *)(unaff_x29 + -0x68) = unaff_x25;
      uVar24 = *(undefined8 *)(lVar14 + 0x18);
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_049a583c(lVar18);
      }
      uVar24 = FUN_08d895f0(uVar24,0);
      uVar15 = FUN_08d895f0(*(long *)(unaff_x27 + 0x38) + 0x20,0);
      uVar13 = FUN_08d93fbc(uVar24,uVar15,0);
      if ((uVar13 & 1) == 0) {
        lVar14 = *unaff_x26;
        *(ulong *)(unaff_x29 + -0x60) = (ulong)unaff_x20 >> 0x20;
        if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = FUN_04980b34();
        }
        lVar18 = *(long *)(unaff_x27 + 0xe0);
        lVar14 = *(long *)(lVar14 + 0xc0);
        *(ulong *)(unaff_x29 + -0x70) = (ulong)unaff_x21 >> 0x20;
        uVar24 = *(undefined8 *)(lVar14 + 0x18);
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_049a583c(lVar18);
        }
        uVar24 = FUN_08d895f0(uVar24,0);
        uVar15 = FUN_08d895f0(*(long *)(unaff_x27 + 0x50) + 0x20,0);
        uVar13 = FUN_08d93fbc(uVar24,uVar15,0);
        if ((uVar13 & 1) == 0) {
          lVar14 = *unaff_x26;
          *(ulong *)(unaff_x29 + -0x80) = (ulong)unaff_x22 >> 0x20;
          *(ulong *)(unaff_x29 + -0x78) = (ulong)unaff_x23 >> 0x20;
          if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_04980b34();
          }
          unaff_x25 = *(long *)(unaff_x29 + -0x68);
          uVar24 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x18);
          if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_049a583c(*(long *)(unaff_x27 + 0xe0));
          }
          uVar24 = FUN_08d895f0(uVar24,0);
          uVar15 = FUN_08d895f0(*(long *)(unaff_x27 + 0x48) + 0x20,0);
          uVar13 = FUN_08d93fbc(uVar24,uVar15,0);
          if ((uVar13 & 1) == 0) {
            lVar14 = *unaff_x26;
            if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_04980b34();
            }
            uVar24 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x18);
            if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_049a583c(*(long *)(unaff_x27 + 0xe0));
            }
            uVar24 = FUN_08d895f0(uVar24,0);
            uVar15 = FUN_08d895f0(*(long *)(unaff_x27 + 0x70) + 0x20,0);
            uVar13 = FUN_08d93fbc(uVar24,uVar15,0);
            if ((uVar13 & 1) == 0) {
              lVar14 = *unaff_x26;
              if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
                lVar14 = FUN_04980b34();
              }
              uVar24 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x18);
              if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_049a583c(*(long *)(unaff_x27 + 0xe0));
              }
              uVar24 = FUN_08d895f0(uVar24,0);
              uVar15 = FUN_08d895f0(*(long *)(unaff_x27 + 0x68) + 0x20,0);
              uVar13 = FUN_08d93fbc(uVar24,uVar15,0);
              if ((uVar13 & 1) == 0) {
                lVar14 = *unaff_x26;
                if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
                  lVar14 = FUN_04980b34();
                }
                uVar24 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x18);
                if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_049a583c(*(long *)(unaff_x27 + 0xe0));
                }
                uVar24 = FUN_08d895f0(uVar24,0);
                uVar15 = FUN_08d895f0(*(long *)(unaff_x27 + 0x78) + 0x20,0);
                uVar13 = FUN_08d93fbc(uVar24,uVar15,0);
                if ((uVar13 & 1) == 0) {
                  lVar14 = *unaff_x26;
                  if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
                    lVar14 = FUN_04980b34();
                  }
                  uVar24 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x18);
                  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_049a583c(*(long *)(unaff_x27 + 0xe0));
                  }
                  uVar24 = FUN_08d895f0(uVar24,0);
                  uVar15 = FUN_08d895f0(*(long *)(unaff_x27 + 0x80) + 0x20,0);
                  uVar13 = FUN_08d93fbc(uVar24,uVar15,0);
                  if ((uVar13 & 1) == 0) {
                    thunk_FUN_049ae08c(&DAT_0ae9e180);
                    FUN_0433a0d0();
                    uVar24 = FUN_092f292c(0);
                    thunk_FUN_049ae08c(&DAT_0ae9ae40);
                    auVar30 = thunk_FUN_04983f60();
                    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                      FUN_08d74c44(auVar30._0_8_,uVar24,0);
                    /* WARNING: Subroutine does not return */
                      FUN_04948050(auVar30._0_8_);
                    }
                    goto LAB_07dff404;
                  }
                  lVar14 = *unaff_x26;
                  *(undefined8 *)(unaff_x29 + -0x28) = 0;
                  *(undefined8 *)(unaff_x29 + -0x20) = 0;
                  uVar24 = 0xffffffffffffffff;
                  if (unaff_x21 <= unaff_x22) {
                    uVar24 = 0;
                  }
                  uVar15 = 0xffffffffffffffff;
                  if (unaff_x20 <= unaff_x23) {
                    uVar15 = 0;
                  }
                  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                    FUN_04980b34();
                  }
                  *(char *)(unaff_x29 + -0x28) = (char)uVar24;
                  *(int *)(unaff_x29 + -0x24) = (int)((ulong)uVar24 >> 0x20);
                  *(char *)(unaff_x29 + -0x27) = (char)((ulong)uVar24 >> 8);
                  *(short *)(unaff_x29 + -0x26) = (short)((ulong)uVar24 >> 0x10);
                  goto Meta_XR_ImmersiveDebugger_Manager_Watch<bool>__get_NumberOfValues;
                }
                lVar14 = *unaff_x26;
                uVar27 = 0xffffffff;
                *(undefined8 *)(unaff_x29 + -0x28) = 0;
                *(undefined8 *)(unaff_x29 + -0x20) = 0;
                uVar26 = uVar27;
                if (fVar21 <= fVar22) {
                  uVar26 = 0;
                }
                uVar28 = uVar27;
                if ((float)*(undefined8 *)(unaff_x29 + -0x70) <=
                    (float)*(undefined8 *)(unaff_x29 + -0x80)) {
                  uVar28 = 0;
                }
                uVar29 = uVar27;
                if (fVar20 <= fVar23) {
                  uVar29 = 0;
                }
                if ((float)*(undefined8 *)(unaff_x29 + -0x60) <=
                    (float)*(undefined8 *)(unaff_x29 + -0x78)) {
                  uVar27 = 0;
                }
                uVar24 = CONCAT44(uVar27,uVar29);
                if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                  *(undefined8 *)(unaff_x29 + -0x58) = 0;
                  *(undefined8 *)(unaff_x29 + -0x60) = uVar24;
                  FUN_04980b34();
                  uVar24 = *(undefined8 *)(unaff_x29 + -0x60);
                }
                *(char *)(unaff_x29 + -0x28) = (char)uVar26;
                *(undefined4 *)(unaff_x29 + -0x24) = uVar28;
                *(char *)(unaff_x29 + -0x27) = (char)((uint)uVar26 >> 8);
                *(short *)(unaff_x29 + -0x26) = (short)((uint)uVar26 >> 0x10);
                *(undefined8 *)(unaff_x29 + -0x20) = uVar24;
                goto LAB_07dff374;
              }
              lVar14 = *unaff_x26;
              *(undefined8 *)(unaff_x29 + -0x20) = 0;
              bVar11 = (long)unaff_x22 < (long)unaff_x21;
              bVar1 = *(byte *)(lVar14 + 0x135);
              bVar12 = (long)unaff_x23 < (long)unaff_x20;
            }
            else {
              lVar14 = *unaff_x26;
              bVar11 = (ulong)unaff_x22 < (ulong)unaff_x21;
              *(undefined8 *)(unaff_x29 + -0x20) = 0;
              bVar12 = (ulong)unaff_x23 < (ulong)unaff_x20;
              bVar1 = *(byte *)(lVar14 + 0x135);
            }
            iVar19 = -(uint)bVar11;
            *(undefined8 *)(unaff_x29 + -0x28) = 0;
            if ((bVar1 & 1) == 0) {
              FUN_04980b34();
            }
            *(char *)(unaff_x29 + -0x28) = (char)iVar19;
            *(char *)(unaff_x29 + -0x27) = (char)iVar19;
            *(short *)(unaff_x29 + -0x26) = (short)iVar19;
            *(int *)(unaff_x29 + -0x24) = iVar19;
            *(ulong *)(unaff_x29 + -0x20) = -(ulong)bVar12;
            goto LAB_07dff374;
          }
          uVar24 = *(undefined8 *)(unaff_x29 + -0x80);
          uVar15 = *(undefined8 *)(unaff_x29 + -0x70);
          lVar14 = *unaff_x26;
          *(undefined8 *)(unaff_x29 + -0x28) = 0;
          *(undefined8 *)(unaff_x29 + -0x20) = 0;
          uVar25 = CONCAT44(-(uint)((int)*(undefined8 *)(unaff_x29 + -0x78) <
                                   (int)*(undefined8 *)(unaff_x29 + -0x60)),
                            -(uint)((int)fVar23 < (int)fVar20));
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            *(undefined8 *)(unaff_x29 + -0x58) = 0;
            *(undefined8 *)(unaff_x29 + -0x60) = uVar25;
            FUN_04980b34();
            uVar25 = *(undefined8 *)(unaff_x29 + -0x60);
          }
          uVar9 = (undefined1)-(ushort)((int)fVar22 < (int)fVar21);
          *(undefined1 *)(unaff_x29 + -0x28) = uVar9;
          *(undefined1 *)(unaff_x29 + -0x27) = uVar9;
          *(ushort *)(unaff_x29 + -0x26) = -(ushort)((int)fVar22 < (int)fVar21);
          *(uint *)(unaff_x29 + -0x24) = -(uint)((int)uVar24 < (int)uVar15);
          goto Meta_XR_ImmersiveDebugger_Manager_Watch<object>__get_ToDisplayStringsDelegate;
        }
        uVar13 = *(ulong *)(unaff_x29 + -0x70);
        lVar14 = *unaff_x26;
        *(undefined8 *)(unaff_x29 + -0x28) = 0;
        *(undefined8 *)(unaff_x29 + -0x20) = 0;
        uVar25 = CONCAT44(-(uint)((ulong)unaff_x23 >> 0x20 < *(ulong *)(unaff_x29 + -0x60)),
                          -(uint)((uint)fVar23 < (uint)fVar20));
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          *(undefined8 *)(unaff_x29 + -0x58) = 0;
          *(undefined8 *)(unaff_x29 + -0x60) = uVar25;
          FUN_04980b34();
          uVar25 = *(undefined8 *)(unaff_x29 + -0x60);
        }
        uVar9 = (undefined1)-(ushort)((uint)fVar22 < (uint)fVar21);
        *(undefined1 *)(unaff_x29 + -0x28) = uVar9;
        *(undefined1 *)(unaff_x29 + -0x27) = uVar9;
        *(ushort *)(unaff_x29 + -0x26) = -(ushort)((uint)fVar22 < (uint)fVar21);
        *(uint *)(unaff_x29 + -0x24) = -(uint)((ulong)unaff_x22 >> 0x20 < uVar13);
      }
      else {
        lVar14 = *unaff_x26;
        *(undefined8 *)(unaff_x29 + -0x28) = 0;
        *(undefined8 *)(unaff_x29 + -0x20) = 0;
        cVar8 = -(SUB82(unaff_x22,0) < SUB82(unaff_x21,0));
        bVar11 = (int)fVar22 >> 0x10 < (int)fVar21 >> 0x10;
        uVar17 = 0xffff;
        if ((short)((ulong)unaff_x21 >> 0x20) <= (short)((ulong)unaff_x22 >> 0x20)) {
          uVar17 = 0;
        }
        uVar16 = 0xffff0000;
        if ((short)uVar10 <= (short)((ulong)unaff_x22 >> 0x30)) {
          uVar16 = 0;
        }
        uVar25 = CONCAT26(-(ushort)((short)((ulong)unaff_x23 >> 0x30) <
                                   (short)((ulong)unaff_x20 >> 0x30)),
                          CONCAT24(-(ushort)((short)((ulong)unaff_x23 >> 0x20) <
                                            (short)((ulong)unaff_x20 >> 0x20)),
                                   CONCAT22(-(ushort)((int)fVar23 >> 0x10 < (int)fVar20 >> 0x10),
                                            -(ushort)(SUB82(unaff_x23,0) < SUB82(unaff_x20,0)))));
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          *(undefined8 *)(unaff_x29 + -0x58) = 0;
          *(undefined8 *)(unaff_x29 + -0x60) = uVar25;
          FUN_04980b34();
          uVar25 = *(undefined8 *)(unaff_x29 + -0x60);
        }
        *(char *)(unaff_x29 + -0x28) = cVar8;
        *(char *)(unaff_x29 + -0x27) = cVar8;
        *(ushort *)(unaff_x29 + -0x26) = -(ushort)bVar11 & 0xff | (ushort)bVar11 * -0x100;
        *(uint *)(unaff_x29 + -0x24) = uVar17 | uVar16;
      }
      unaff_x25 = *(long *)(unaff_x29 + -0x68);
    }
    else {
      cVar8 = -(((uint)fVar22 & 0xffff) < ((uint)fVar21 & 0xffff));
      bVar11 = ((uint)((ulong)unaff_x22 >> 0x10) & 0xffff) < (uint)fVar21 >> 0x10;
      uVar17 = 0xffff;
      if (((uint)((ulong)unaff_x21 >> 0x20) & 0xffff) <= (uint)*(ushort *)(unaff_x29 + -0x34)) {
        uVar17 = 0;
      }
      uVar16 = 0xffff0000;
      if (uVar10 <= *(ushort *)(unaff_x29 + -0x32)) {
        uVar16 = 0;
      }
      lVar14 = *unaff_x26;
      *(undefined8 *)(unaff_x29 + -0x28) = 0;
      *(undefined8 *)(unaff_x29 + -0x20) = 0;
      uVar25 = CONCAT26(-(ushort)(*(ushort *)(unaff_x29 + -0x2a) < *(ushort *)(unaff_x29 + -0x3a)),
                        CONCAT24(-(ushort)(*(ushort *)(unaff_x29 + -0x2c) <
                                          *(ushort *)(unaff_x29 + -0x3c)),
                                 CONCAT22(-(ushort)((uint)*(ushort *)(unaff_x29 + -0x2e) <
                                                   (uint)fVar20 >> 0x10),
                                          -(ushort)(((uint)fVar23 & 0xffff) <
                                                   ((uint)fVar20 & 0xffff)))));
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        *(undefined8 *)(unaff_x29 + -0x58) = 0;
        *(undefined8 *)(unaff_x29 + -0x60) = uVar25;
        FUN_04980b34();
        uVar25 = *(undefined8 *)(unaff_x29 + -0x60);
      }
      *(char *)(unaff_x29 + -0x28) = cVar8;
      *(char *)(unaff_x29 + -0x27) = cVar8;
      *(ushort *)(unaff_x29 + -0x26) = -(ushort)bVar11 & 0xff | (ushort)bVar11 * -0x100;
      *(uint *)(unaff_x29 + -0x24) = uVar17 | uVar16;
    }
Meta_XR_ImmersiveDebugger_Manager_Watch<object>__get_ToDisplayStringsDelegate:
    *(undefined8 *)(unaff_x29 + -0x20) = uVar25;
  }
  else {
    uVar28 = *(undefined4 *)(unaff_x29 + -0x2c);
    uVar29 = *(undefined4 *)(unaff_x29 + -0x3c);
    uVar26 = *(undefined4 *)(unaff_x29 + -0x44);
    uVar27 = *(undefined4 *)(unaff_x29 + -0x34);
    bVar2 = *(byte *)(unaff_x29 + -0x47);
    bVar3 = *(byte *)(unaff_x29 + -0x36);
    bVar4 = *(byte *)(unaff_x29 + -0x46);
    bVar5 = *(byte *)(unaff_x29 + -0x35);
    bVar6 = *(byte *)(unaff_x29 + -0x45);
    uVar24 = CONCAT26(-(ushort)((char)((uint)uVar27 >> 0x18) < (char)((uint)uVar26 >> 0x18)),
                      CONCAT24(-(ushort)((char)((uint)uVar27 >> 0x10) < (char)((uint)uVar26 >> 0x10)
                                        ),
                               CONCAT22(-(ushort)((char)((uint)uVar27 >> 8) <
                                                 (char)((uint)uVar26 >> 8)),
                                        -(ushort)((char)uVar27 < (char)uVar26))));
    bVar7 = *(byte *)(unaff_x29 + -0x37);
    bVar1 = *(byte *)(*unaff_x26 + 0x135);
    uVar15 = CONCAT17(-((char)((uint)uVar28 >> 0x18) < (char)((uint)uVar29 >> 0x18)),
                      CONCAT16(-((char)((uint)uVar28 >> 0x10) < (char)((uint)uVar29 >> 0x10)),
                               CONCAT15(-((char)((uint)uVar28 >> 8) < (char)((uint)uVar29 >> 8)),
                                        CONCAT14(-((char)uVar28 < (char)uVar29),
                                                 CONCAT13(-(*(char *)(unaff_x29 + -0x2d) <
                                                           *(char *)(unaff_x29 + -0x3d)),
                                                          CONCAT12(-(*(char *)(unaff_x29 + -0x2e) <
                                                                    *(char *)(unaff_x29 + -0x3e)),
                                                                   CONCAT11(-(*(char *)(unaff_x29 +
                                                                                       -0x2f) <
                                                                             *(char *)(unaff_x29 +
                                                                                      -0x3f)),
                                                                            -(SUB81(unaff_x23,0) <
                                                                             SUB81(unaff_x20,0))))))
                                       )));
    *(undefined8 *)(unaff_x29 + -0x28) = 0;
    *(undefined8 *)(unaff_x29 + -0x20) = 0;
    if ((bVar1 & 1) == 0) {
      *(undefined8 *)(unaff_x29 + -0x58) = 0;
      *(undefined8 *)(unaff_x29 + -0x60) = uVar24;
      FUN_04980b34();
      uVar24 = *(undefined8 *)(unaff_x29 + -0x60);
    }
    *(char *)(unaff_x29 + -0x28) = -(SUB81(unaff_x22,0) < SUB81(unaff_x21,0));
    *(char *)(unaff_x29 + -0x27) = -(bVar7 < bVar2);
    *(ushort *)(unaff_x29 + -0x26) =
         -(ushort)(bVar3 < bVar4) & 0xff | (ushort)(bVar5 < bVar6) * -0x100;
    *(uint *)(unaff_x29 + -0x24) =
         CONCAT13((char)((ulong)uVar24 >> 0x30),
                  CONCAT12((char)((ulong)uVar24 >> 0x20),
                           CONCAT11((char)((ulong)uVar24 >> 0x10),(char)uVar24)));
Meta_XR_ImmersiveDebugger_Manager_Watch<bool>__get_NumberOfValues:
    *(undefined8 *)(unaff_x29 + -0x20) = uVar15;
  }
LAB_07dff374:
  auVar30 = *(undefined1 (*) [16])(unaff_x29 + -0x28);
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return;
  }
LAB_07dff404:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar30._0_8_,auVar30._8_8_);
}


