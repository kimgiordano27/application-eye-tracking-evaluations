/*
FUNCTION_NAME: OVRPlugin$$get_localDimming
ENTRY_POINT: 0574d084
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_localDimming(long param_1)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lStack0000000000000018;
  
  lStack0000000000000018 = param_1;
  if ((DAT_071c3a1b & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d581b0);
    FUN_02f07e70(PTR_DAT_06d3b610);
    FUN_02f07e70(PTR_DAT_06d02048);
    FUN_02f07e70(PTR_DAT_06d586b0);
    FUN_02f07e70(PTR_DAT_06d58778);
    FUN_02f07e70(PTR_DAT_06d0e058);
    FUN_02f07e70(PTR_DAT_06d0e060);
    DAT_071c3a1b = 1;
  }
  puVar5 = PTR_DAT_06d3b610;
  puVar4 = PTR_DAT_06d02048;
  iVar1 = *(int *)(param_1 + 0x10);
  lVar17 = *(long *)(param_1 + 0x38);
  if (iVar1 == 2) goto LAB_0574d1a0;
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    plVar16 = (long *)PTR_DAT_06d58778;
    plVar3 = (long *)PTR_DAT_06d586b0;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    plVar16 = *(long **)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar11 = *plVar16;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06d581b0) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0574d238;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_02eea86c(plVar16,*(long *)PTR_DAT_06d581b0,0);
LAB_0574d238:
    uVar7 = (*(code *)*puVar6)(plVar16,puVar6[1]);
    *(undefined8 *)(lStack0000000000000018 + 0x50) = uVar7;
    thunk_FUN_02f411dc();
    *(undefined4 *)(lStack0000000000000018 + 0x10) = 0xfffffffd;
    plVar16 = (long *)PTR_DAT_06d58778;
    plVar3 = (long *)PTR_DAT_06d586b0;
  }
LAB_0574d274:
  do {
    plVar15 = *(long **)(lStack0000000000000018 + 0x50);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar12 = *plVar15;
    lVar11 = *(long *)puVar4;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0574d2cc;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_02eea86c(plVar15,lVar11,0);
LAB_0574d2cc:
    uVar13 = (*(code *)*puVar6)(plVar15,puVar6[1]);
    if ((uVar13 & 1) == 0) {
      FUN_0574da08();
      *(undefined8 *)(lStack0000000000000018 + 0x50) = 0;
      thunk_FUN_02f411dc((undefined8 *)(lStack0000000000000018 + 0x50),0);
      return 0;
    }
    plVar15 = *(long **)(lStack0000000000000018 + 0x50);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar12 = *plVar15;
    lVar11 = *(long *)puVar5;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0574d338;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_02eea86c(plVar15,lVar11,0);
LAB_0574d338:
    plVar15 = (long *)(*(code *)*puVar6)(plVar15,puVar6[1]);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar13 = *(ulong *)(lVar17 + 0x10);
    if ((uVar13 & 0xff) != 0) {
      lVar11 = FUN_0574d694(plVar15,*(undefined8 *)(lStack0000000000000018 + 0x40),uVar13 >> 0x20);
      if (lVar11 != 0) {
        *(long *)(lStack0000000000000018 + 0x18) = lVar11;
        thunk_FUN_02f411dc();
        *(undefined4 *)(lStack0000000000000018 + 0x10) = 1;
        return 1;
      }
      goto LAB_0574d274;
    }
    if (plVar15 == (long *)0x0) {
LAB_0574d3cc:
      lVar11 = *(long *)(lStack0000000000000018 + 0x40);
      cVar10 = '\0';
      if (lVar11 != 0) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        cVar10 = *(char *)(lVar11 + 0x20);
      }
      if (cVar10 != '\0') {
        lVar17 = thunk_FUN_02f239f0(PTR_DAT_06d06338);
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar7 = FUN_055b5920(0);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        plVar16 = (long *)thunk_FUN_02ebbee0(plVar15,0);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar8 = (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
        uVar9 = thunk_FUN_02f239f0(PTR_DAT_06d59358);
        uVar7 = FUN_056f1630(uVar9,uVar7,uVar8,0);
        thunk_FUN_02f239f0(PTR_DAT_06d55148);
        uVar8 = thunk_FUN_02ef1808();
        FUN_05693110(uVar8,uVar7,0);
        uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d59360);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar8,uVar7);
      }
    }
    else {
      lVar11 = *plVar15;
      bVar2 = *(byte *)(*plVar3 + 0x130);
      if ((*(byte *)(lVar11 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar2 * 8 + -8) != *plVar3)) {
        bVar2 = *(byte *)(*plVar16 + 0x130);
        if ((*(byte *)(lVar11 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar2 * 8 + -8) != *plVar16))
        goto LAB_0574d3cc;
      }
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06d581b0) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0574d534;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_02eea86c(plVar15,*(long *)PTR_DAT_06d581b0,0);
LAB_0574d534:
      uVar7 = (*(code *)*puVar6)(plVar15,puVar6[1]);
      *(undefined8 *)(lStack0000000000000018 + 0x58) = uVar7;
      thunk_FUN_02f411dc();
      param_1 = lStack0000000000000018;
LAB_0574d1a0:
      plVar16 = *(long **)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar12 = *plVar16;
      lVar11 = *(long *)puVar4;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0574d1fc;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_02eea86c(plVar16,lVar11,0);
LAB_0574d1fc:
      uVar13 = (*(code *)*puVar6)(plVar16,puVar6[1]);
      if ((uVar13 & 1) != 0) {
        plVar16 = *(long **)(lStack0000000000000018 + 0x58);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar11 = *plVar16;
        lVar17 = *(long *)puVar5;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 == 0) goto LAB_0574d498;
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        break;
      }
      FUN_0574d958();
      *(undefined8 *)(lStack0000000000000018 + 0x58) = 0;
      thunk_FUN_02f411dc((undefined8 *)(lStack0000000000000018 + 0x58),0);
      plVar16 = (long *)PTR_DAT_06d58778;
      plVar3 = (long *)PTR_DAT_06d586b0;
    }
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
    if (*(long *)(piVar14 + -2) == lVar17) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0574d4b4;
    }
  }
LAB_0574d498:
  puVar6 = (undefined8 *)FUN_02eea86c(plVar16,lVar17,0);
LAB_0574d4b4:
  uVar7 = (*(code *)*puVar6)(plVar16,puVar6[1]);
  *(undefined8 *)(lStack0000000000000018 + 0x18) = uVar7;
  thunk_FUN_02f411dc();
  *(undefined4 *)(lStack0000000000000018 + 0x10) = 2;
  return 1;
}


