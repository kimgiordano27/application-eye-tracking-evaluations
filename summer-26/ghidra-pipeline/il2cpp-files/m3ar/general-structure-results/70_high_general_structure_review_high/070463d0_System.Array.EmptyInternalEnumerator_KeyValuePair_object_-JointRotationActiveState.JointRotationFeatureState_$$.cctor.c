/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<KeyValuePair<object,-JointRotationActiveState.JointRotationFeatureState>>$$.cctor
ENTRY_POINT: 070463d0
PROGRAM: m3ar-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array_EmptyInternalEnumerator<KeyValuePair<object,_JointRotationActiveState_JointRotationFeatureState>>___cctor
               (ushort *param_1,long param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  code *pcVar11;
  undefined8 *puVar12;
  int *piVar13;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar14;
  long unaff_x22;
  long *plVar15;
  long *unaff_x23;
  undefined8 uVar16;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  
  do {
    if ((*param_1 & 1) == 0) {
      param_2 = FUN_0406aaec();
    }
    lVar6 = *(long *)(*(long *)(param_2 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0406aaec(lVar6);
    }
    lVar7 = *unaff_x23;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar6) {
                    /* try { // try from 0704643c to 0714649f has its CatchHandler @ 070465a0 */
          lVar6 = lVar7 + (long)*piVar13 * 0x10 + 0x138;
          goto LAB_07046444;
        }
        uVar10 = uVar10 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar10 != 0);
    }
    lVar6 = FUN_0406ae20(unaff_x23,lVar6,0);
LAB_07046444:
    lVar6 = *(long *)(lVar6 + 8);
    *(undefined8 **)(unaff_x29 + -0xb8) = unaff_x21;
    (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,unaff_x23,unaff_x29 + -0xb8);
    if (unaff_x22 == 0) break;
    lVar7 = *(long *)(unaff_x20 + 0x20);
    uVar2 = *(ushort *)(lVar7 + 0x135);
    lVar6 = lVar7;
    if ((uVar2 & 1) == 0) {
      lVar6 = FUN_0406aaec();
      lVar7 = *(long *)(unaff_x20 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
    }
    uVar16 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x38);
    lVar6 = lVar7;
    if ((uVar2 & 1) == 0) {
      lVar6 = FUN_0406aaec();
      lVar7 = *(long *)(unaff_x20 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x38);
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_0406aaec();
    }
    puVar8 = unaff_x21;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x30) + 0x28)) {
      puVar8 = (undefined8 *)*unaff_x21;
    }
    pcVar11 = *(code **)(lVar6 + 0x10);
    *(undefined8 **)(unaff_x29 + -0x20) = puVar8;
    (*pcVar11)(uVar16,lVar6,unaff_x22,unaff_x29 + -0x20,unaff_x29 + -0xb8);
    lVar6 = *(long *)PTR_DAT_08f8d1f0;
    *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0xb0);
    *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0xb8);
    *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0xa0);
    *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0xa8);
    if ((*(ushort *)(*(long *)(lVar6 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    uVar14 = *(undefined8 *)(unaff_x29 + -0x50);
    uVar16 = *unaff_x27;
    *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0x58);
    *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x60);
    *(undefined8 *)(unaff_x26 + 0x18) = *(undefined8 *)(unaff_x29 + -0x48);
    *(undefined8 *)(unaff_x26 + 0x10) = uVar14;
    uVar10 = FUN_05069368(unaff_x29 + -0x40,uVar16);
    if ((uVar10 & 1) == 0) {
      uVar14 = *(undefined8 *)(unaff_x29 + -0x38);
      uVar16 = *(undefined8 *)(unaff_x29 + -0x40);
      uVar18 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar17 = *(undefined8 *)(unaff_x26 + 0x10);
      *unaff_x19 = 2;
      *(undefined8 *)(unaff_x19 + 0x20) = uVar14;
      *(undefined8 *)(unaff_x19 + 0x1e) = uVar16;
      *(undefined8 *)(unaff_x19 + 0x24) = uVar18;
      *(undefined8 *)(unaff_x19 + 0x22) = uVar17;
      lVar6 = *(long *)(unaff_x20 + 0x20);
      uVar2 = *(ushort *)(lVar6 + 0x135);
      if ((uVar2 & 1) == 0) {
        lVar7 = *(long *)(unaff_x29 + -0xc0);
        lVar6 = FUN_0406aaec();
        uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      }
      else {
        lVar7 = *(long *)(unaff_x29 + -0xc0);
      }
      pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x40);
      if ((uVar2 & 1) == 0) {
        FUN_0406aaec();
      }
      (*pcVar11)(unaff_x19 + 2,unaff_x29 + -0x40);
      goto FUN_07046a10;
    }
    plVar15 = *(long **)(unaff_x29 + -0x40);
    if (plVar15 == (long *)0x0) {
      auVar19 = *(undefined1 (*) [16])(unaff_x29 + -0x38);
    }
    else {
      uVar3 = *(undefined2 *)(unaff_x29 + -0x28);
      lVar6 = *(long *)(*(long *)PTR_DAT_08f8d1e0 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0406aaec();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0406aaec(lVar6);
      }
      lVar7 = *plVar15;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar6) {
            puVar8 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_070465e8;
          }
          uVar10 = uVar10 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_0406ae20(plVar15,lVar6,0);
LAB_070465e8:
      auVar19 = (*(code *)*puVar8)(plVar15,uVar3,puVar8[1]);
    }
    if ((((auVar19._0_8_ & 0xff) != 0) && (*(long *)(unaff_x19 + 0x12) < auVar19._8_8_)) &&
       (*(char *)(unaff_x19 + 0x10) != '\0')) {
      *(undefined1 (*) [16])(unaff_x19 + 0x10) = auVar19;
    }
    plVar15 = *(long **)(unaff_x19 + 0x14);
    if (plVar15 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07046d18;
    }
    lVar6 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0406aaec();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0406aaec(lVar6);
    }
    lVar7 = *plVar15;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar6) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_070466a0;
        }
        uVar10 = uVar10 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_0406ae20(plVar15,lVar6,1);
LAB_070466a0:
    auVar19 = (*(code *)*puVar8)(plVar15,puVar8[1]);
    if ((*(ushort *)(*(long *)(*unaff_x28 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    uVar16 = *unaff_x25;
    *(undefined1 (*) [16])(unaff_x29 + -0x70) = auVar19;
    uVar10 = FUN_0425a2e4(unaff_x29 + -0x70,uVar16);
    if ((uVar10 & 1) == 0) {
      uVar14 = *(undefined8 *)(unaff_x29 + -0x68);
      uVar16 = *(undefined8 *)(unaff_x29 + -0x70);
      *unaff_x19 = 3;
      *(undefined8 *)(unaff_x19 + 0x28) = uVar14;
      *(undefined8 *)(unaff_x19 + 0x26) = uVar16;
      lVar6 = *(long *)(unaff_x20 + 0x20);
      uVar2 = *(ushort *)(lVar6 + 0x135);
      if ((uVar2 & 1) == 0) {
        lVar7 = *(long *)(unaff_x29 + -0xc0);
        lVar6 = FUN_0406aaec();
        uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      }
      else {
        lVar7 = *(long *)(unaff_x29 + -0xc0);
      }
      pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x58);
      if ((uVar2 & 1) == 0) {
        FUN_0406aaec();
      }
      (*pcVar11)(unaff_x19 + 2,unaff_x29 + -0x70);
      goto FUN_07046a10;
    }
    plVar15 = *(long **)(unaff_x29 + -0x70);
    if (plVar15 == (long *)0x0) {
      if (*(char *)(unaff_x29 + -0x68) == '\0') goto LAB_07046880;
    }
    else {
      uVar3 = *(undefined2 *)(unaff_x29 + -0x66);
      lVar6 = *(long *)(*(long *)PTR_DAT_08f6dab8 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0406aaec();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0406aaec(lVar6);
      }
      lVar7 = *plVar15;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar6) {
            puVar8 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_070463a8;
          }
          uVar10 = uVar10 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_0406ae20(plVar15,lVar6,0);
LAB_070463a8:
      uVar10 = (*(code *)*puVar8)(plVar15,uVar3,puVar8[1]);
      if ((uVar10 & 1) == 0) {
LAB_07046880:
        plVar15 = *(long **)(unaff_x19 + 0x14);
        lVar7 = *(long *)(unaff_x29 + -0xc0);
        if (plVar15 == (long *)0x0) goto LAB_070468d4;
        lVar6 = *plVar15;
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar10 == 0) goto LAB_070468c4;
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_070468ac;
      }
    }
    unaff_x23 = *(long **)(unaff_x19 + 0x14);
    if (unaff_x23 == (long *)0x0) break;
    param_2 = *(long *)(unaff_x20 + 0x20);
    unaff_x22 = *(long *)(unaff_x19 + 0xe);
    param_1 = (ushort *)(param_2 + 0x135);
  } while( true );
  if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  goto LAB_07046d18;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar13 = piVar13 + 4;
    if (uVar10 == 0) break;
LAB_070468ac:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08f8cf80) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
      goto 
      System_Array_EmptyInternalEnumerator<KeyValuePair<object,_StyleComplexSelector_PseudoStateData>>___cctor
      ;
    }
  }
LAB_070468c4:
  puVar8 = (undefined8 *)FUN_0406ae20(plVar15,*(long *)PTR_DAT_08f8cf80,0);

  System_Array_EmptyInternalEnumerator<KeyValuePair<object,_StyleComplexSelector_PseudoStateData>>___cctor
  :
  auVar19 = (*(code *)*puVar8)(plVar15,puVar8[1]);
  puVar4 = PTR_DAT_08f67a58;
  plVar15 = auVar19._0_8_;
  if (*(int *)(*(long *)PTR_DAT_08f67a58 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  *(undefined1 (*) [16])(unaff_x29 + -0x80) = auVar19;
  if (DAT_09539e0c == '\0') {
    FUN_0403162c(PTR_DAT_08f67a58);
    DAT_09539e0c = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  if (DAT_09539e0d == '\0') {
    FUN_0403162c(PTR_DAT_08f67c08);
    DAT_09539e0d = '\x01';
  }
  if (plVar15 == (long *)0x0) {
LAB_07045bcc:
    if (DAT_09539e0e == '\0') {
      FUN_0403162c(PTR_DAT_08f67c08);
      DAT_09539e0e = '\x01';
    }
    plVar15 = *(long **)(unaff_x29 + -0x80);
    if (plVar15 != (long *)0x0) {
      lVar6 = *plVar15;
      uVar3 = *(undefined2 *)(unaff_x29 + -0x78);
      uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar10 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08f67c08) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_07045db4;
          }
          uVar10 = uVar10 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_0406ae20(plVar15,*(long *)PTR_DAT_08f67c08,2);
LAB_07045db4:
      (*(code *)*puVar8)(plVar15,uVar3,puVar8[1]);
    }
LAB_070468d4:
    plVar15 = *(long **)(unaff_x19 + 0x16);
    if (plVar15 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_08f65af8 + 0x130);
      if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08f65af8)
         ) {
        *(long *)(unaff_x29 + -0xc0) = lVar7;
        if (*(long *)(lVar7 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
          FUN_04031750();
        }
        goto LAB_07046d18;
      }
      lVar6 = FUN_07408528(plVar15,0);
      if (lVar6 == 0) {
        if (*(long *)(lVar7 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        goto LAB_07046d18;
      }
      FUN_074085e8(lVar6,0);
    }
    if (unaff_x19[0x18] == 1) {
      puVar8 = (undefined8 *)(unaff_x19 + 0x1a);
      puVar12 = (undefined8 *)(unaff_x19 + 0x1c);
    }
    else {
      puVar8 = (undefined8 *)(unaff_x19 + 0x10);
      puVar12 = (undefined8 *)(unaff_x19 + 0x12);
      *(undefined8 *)(unaff_x19 + 0x16) = 0;
      *(undefined8 *)(unaff_x19 + 0x1a) = 0;
      *(undefined8 *)(unaff_x19 + 0x1c) = 0;
    }
    plVar15 = *(long **)(unaff_x19 + 2);
    uVar14 = *puVar8;
    uVar16 = *puVar12;
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0x14) = 0;
    if (plVar15 == (long *)0x0) {
      *(undefined8 *)(unaff_x19 + 6) = uVar14;
      *(undefined8 *)(unaff_x19 + 8) = uVar16;
    }
    else {
      lVar6 = *(long *)(*(long *)PTR_DAT_08f8d0e8 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0406aaec();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0406aaec(lVar6);
      }
      lVar9 = *plVar15;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar6) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_070469fc;
          }
          uVar10 = uVar10 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_0406ae20(plVar15,lVar6,2);
LAB_070469fc:
      (*(code *)*puVar8)(plVar15,uVar14,uVar16,puVar8[1]);
    }
  }
  else {
    lVar6 = *plVar15;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar10 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08f67c08) {
          puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
          goto 
          System_Array_EmptyInternalEnumerator<KeyValuePair<object,_TTSServiceLogging_TTSServiceRequestLog>>__Dispose
          ;
        }
        uVar10 = uVar10 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_0406ae20(plVar15,*(long *)PTR_DAT_08f67c08,0);

    System_Array_EmptyInternalEnumerator<KeyValuePair<object,_TTSServiceLogging_TTSServiceRequestLog>>__Dispose
    :
    iVar5 = (*(code *)*puVar8)(plVar15,auVar19._8_8_ & 0xffffffff,puVar8[1]);
    if (iVar5 != 0) goto LAB_07045bcc;
    uVar14 = *(undefined8 *)(unaff_x29 + -0x78);
    uVar16 = *(undefined8 *)(unaff_x29 + -0x80);
    *unaff_x19 = 4;
    *(undefined8 *)(unaff_x19 + 0x2c) = uVar14;
    *(undefined8 *)(unaff_x19 + 0x2a) = uVar16;
    lVar6 = *(long *)(unaff_x20 + 0x20);
    uVar2 = *(ushort *)(lVar6 + 0x135);
    if ((uVar2 & 1) == 0) {
      lVar6 = FUN_0406aaec();
      uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    }
    pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x60);
    if ((uVar2 & 1) == 0) {
      FUN_0406aaec();
    }
    (*pcVar11)(unaff_x19 + 2,unaff_x29 + -0x80);
  }
FUN_07046a10:
  if (*(long *)(lVar7 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return;
  }
LAB_07046d18:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


