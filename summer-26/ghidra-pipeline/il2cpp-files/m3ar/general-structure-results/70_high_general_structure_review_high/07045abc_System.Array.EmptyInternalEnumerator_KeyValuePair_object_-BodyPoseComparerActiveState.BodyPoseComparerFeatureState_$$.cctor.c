/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<KeyValuePair<object,-BodyPoseComparerActiveState.BodyPoseComparerFeatureState>>$$.cctor
ENTRY_POINT: 07045abc
PROGRAM: m3ar-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array_EmptyInternalEnumerator<KeyValuePair<object,_BodyPoseComparerActiveState_BodyPoseComparerFeatureState>>___cctor
               (void)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  uint *puVar17;
  int *piVar18;
  uint *unaff_x19;
  long unaff_x20;
  undefined8 uVar19;
  long unaff_x21;
  long *plVar20;
  undefined8 uVar21;
  long unaff_x25;
  long unaff_x29;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  
                    /* try { // try from 07045ac0 to 07145adb has its CatchHandler @ 07045f70 */
  FUN_0403162c(PTR_DAT_08f8d0e8);
  FUN_0403162c(PTR_DAT_08f6dab8);
  FUN_0403162c(PTR_DAT_08f8d1e0);
  FUN_0403162c(PTR_DAT_08f8d1e8);
  FUN_0403162c(PTR_DAT_08f6dac0);
                    /* try { // try from 07045afc to 07145b17 has its CatchHandler @ 07045f84 */
  FUN_0403162c(PTR_DAT_08f65af8);
  FUN_0403162c(PTR_DAT_08f8cf80);
                    /* try { // try from 07045b18 to 07145b43 has its CatchHandler @ 07044a40 */
  FUN_0403162c(PTR_DAT_08f8d0f0);
  FUN_0403162c(PTR_DAT_08f8b8f0);
  FUN_0403162c(PTR_DAT_08f6db00);
  FUN_0403162c(PTR_DAT_08f8d1f0);
                    /* try { // try from 07045b44 to 07145b9b has its CatchHandler @ 07045f84 */
  FUN_0403162c(PTR_DAT_08f67a58);
  *(undefined1 *)(unaff_x21 + 0x349) = 1;
  lVar9 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0406aaec();
  }
  puVar10 = (undefined8 *)
            (&stack0x00000000 +
            -((ulong)*(uint *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x30) + 0xfc) + 0xf & 0x1fffffff0
             ));
  uVar1 = *unaff_x19;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  *(undefined4 *)(unaff_x29 + -0x88) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  if (3 < uVar1) {
    if (uVar1 == 4) {
      uVar21 = *(undefined8 *)(unaff_x19 + 0x2c);
      uVar19 = *(undefined8 *)(unaff_x19 + 0x2a);
      unaff_x19[0x2a] = 0;
      unaff_x19[0x2b] = 0;
      unaff_x19[0x2c] = 0;
      unaff_x19[0x2d] = 0;
      *unaff_x19 = 0xffffffff;
      *(undefined8 *)(unaff_x29 + -0x78) = uVar21;
      *(undefined8 *)(unaff_x29 + -0x80) = uVar19;
      goto LAB_07045bcc;
    }
    plVar20 = *(long **)(unaff_x19 + 10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    if (plVar20 == (long *)0x0) {
      *(long *)(unaff_x29 + -0xc0) = unaff_x25;
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07046d18;
    }
    lVar9 = *(long *)(unaff_x20 + 0x20);
    uVar19 = *(undefined8 *)(unaff_x19 + 0xc);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec(lVar9);
    }
    lVar14 = *plVar20;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar9) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_07045ccc;
        }
        uVar15 = uVar15 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_0406ae20(plVar20,lVar9,0);
LAB_07045ccc:
    uVar19 = (*(code *)*puVar11)(plVar20,uVar19,puVar11[1]);
    *(undefined8 *)(unaff_x19 + 0x14) = uVar19;
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    unaff_x19[0x18] = 0;
  }
  *(long *)(unaff_x29 + -0xc0) = unaff_x25;
  puVar7 = PTR_DAT_08f8d1e8;
  puVar6 = PTR_DAT_08f6db00;
  puVar5 = PTR_DAT_08f6dac0;
  if (1 < (int)uVar1) {
    if (uVar1 == 2) {
      uVar19 = *(undefined8 *)(unaff_x19 + 0x1e);
      uVar22 = *(undefined8 *)(unaff_x19 + 0x24);
      uVar21 = *(undefined8 *)(unaff_x19 + 0x22);
      *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x19 + 0x20);
      *(undefined8 *)(unaff_x29 + -0x40) = uVar19;
      *(undefined8 *)(unaff_x29 + -0x28) = uVar22;
      *(undefined8 *)(unaff_x29 + -0x30) = uVar21;
      unaff_x19[0x20] = 0;
      unaff_x19[0x21] = 0;
      unaff_x19[0x1e] = 0;
      unaff_x19[0x1f] = 0;
      unaff_x19[0x24] = 0;
      unaff_x19[0x25] = 0;
      unaff_x19[0x22] = 0;
      unaff_x19[0x23] = 0;
      *unaff_x19 = 0xffffffff;
      goto LAB_0704654c;
    }
    if (uVar1 != 3) goto LAB_070460f4;
    uVar21 = *(undefined8 *)(unaff_x19 + 0x28);
    uVar19 = *(undefined8 *)(unaff_x19 + 0x26);
    unaff_x19[0x26] = 0;
    unaff_x19[0x27] = 0;
    unaff_x19[0x28] = 0;
    unaff_x19[0x29] = 0;
    *unaff_x19 = 0xffffffff;
    *(undefined8 *)(unaff_x29 + -0x68) = uVar21;
    *(undefined8 *)(unaff_x29 + -0x70) = uVar19;
    goto LAB_07046308;
  }
  if (uVar1 == 0) {
    uVar19 = *(undefined8 *)(unaff_x19 + 0x1e);
    uVar22 = *(undefined8 *)(unaff_x19 + 0x24);
    uVar21 = *(undefined8 *)(unaff_x19 + 0x22);
    *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x19 + 0x20);
    *(undefined8 *)(unaff_x29 + -0x40) = uVar19;
    *(undefined8 *)(unaff_x29 + -0x28) = uVar22;
    *(undefined8 *)(unaff_x29 + -0x30) = uVar21;
    unaff_x19[0x20] = 0;
    unaff_x19[0x21] = 0;
    unaff_x19[0x1e] = 0;
    unaff_x19[0x1f] = 0;
    unaff_x19[0x24] = 0;
    unaff_x19[0x25] = 0;
    unaff_x19[0x22] = 0;
    unaff_x19[0x23] = 0;
    *unaff_x19 = 0xffffffff;
    goto LAB_0704603c;
  }
  if (uVar1 != 1) goto LAB_070460f4;
  uVar21 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x26);
  unaff_x19[0x26] = 0;
  unaff_x19[0x27] = 0;
  unaff_x19[0x28] = 0;
  unaff_x19[0x29] = 0;
  *unaff_x19 = 0xffffffff;
  *(undefined8 *)(unaff_x29 + -0x68) = uVar21;
  *(undefined8 *)(unaff_x29 + -0x70) = uVar19;
  do {
    plVar20 = *(long **)(unaff_x29 + -0x70);
    if (plVar20 == (long *)0x0) {
      if (*(char *)(unaff_x29 + -0x68) == '\0') goto LAB_07045e7c;
    }
    else {
      uVar4 = *(undefined2 *)(unaff_x29 + -0x66);
      lVar9 = *(long *)(*(long *)PTR_DAT_08f6dab8 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec(lVar9);
      }
      lVar14 = *plVar20;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar9) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
            goto 
            System_Array_EmptyInternalEnumerator<KeyValuePair<object,_EventInterestReflectionUtils_DefaultEventInterests>>___ctor
            ;
          }
          uVar15 = uVar15 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_0406ae20(plVar20,lVar9,0);

      System_Array_EmptyInternalEnumerator<KeyValuePair<object,_EventInterestReflectionUtils_DefaultEventInterests>>___ctor
      :
      uVar15 = (*(code *)*puVar11)(plVar20,uVar4,puVar11[1]);
      if ((uVar15 & 1) == 0) {
LAB_07045e7c:
        unaff_x19[0x1a] = 0;
        unaff_x19[0x1b] = 0;
        unaff_x19[0x1c] = 0;
        unaff_x19[0x1d] = 0;
        unaff_x19[0x18] = 1;
        goto LAB_07046880;
      }
    }
    plVar20 = *(long **)(unaff_x19 + 0x14);
    if (plVar20 == (long *)0x0) {
LAB_070462a8:
      if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07046d18;
    }
    lVar9 = *(long *)(unaff_x20 + 0x20);
    lVar14 = *(long *)(unaff_x19 + 0xe);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec(lVar9);
    }
    lVar12 = *plVar20;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar9) {
          lVar9 = lVar12 + (long)*piVar18 * 0x10 + 0x138;
          goto LAB_07045f34;
        }
        uVar15 = uVar15 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar15 != 0);
    }
    lVar9 = FUN_0406ae20(plVar20,lVar9,0);
LAB_07045f34:
    lVar9 = *(long *)(lVar9 + 8);
    *(undefined8 **)(unaff_x29 + -0xb8) = puVar10;
    (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar20,unaff_x29 + -0xb8,puVar10);
    if (lVar14 == 0) goto LAB_070462a8;
    lVar12 = *(long *)(unaff_x20 + 0x20);
    uVar3 = *(ushort *)(lVar12 + 0x135);
    lVar9 = lVar12;
    if ((uVar3 & 1) == 0) {
      lVar9 = FUN_0406aaec();
      lVar12 = *(long *)(unaff_x20 + 0x20);
      uVar3 = *(ushort *)(lVar12 + 0x135);
    }
    uVar19 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x38);
    lVar9 = lVar12;
    if ((uVar3 & 1) == 0) {
      lVar9 = FUN_0406aaec();
      lVar12 = *(long *)(unaff_x20 + 0x20);
      uVar3 = *(ushort *)(lVar12 + 0x135);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x38);
    if ((uVar3 & 1) == 0) {
      lVar12 = FUN_0406aaec();
    }
    puVar11 = puVar10;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x30) + 0x28)) {
      puVar11 = (undefined8 *)*puVar10;
    }
    pcVar16 = *(code **)(lVar9 + 0x10);
    *(undefined8 **)(unaff_x29 + -0x20) = puVar11;
    (*pcVar16)(uVar19,lVar9,lVar14,unaff_x29 + -0x20,unaff_x29 + -0xb8);
    lVar9 = *(long *)PTR_DAT_08f8d1f0;
    *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0xb0);
    *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0xb8);
    *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0xa0);
    *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0xa8);
    if ((*(ushort *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    uVar19 = *(undefined8 *)puVar7;
    *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0x58);
    *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x60);
    *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x48);
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x50);
    uVar15 = FUN_05069368(unaff_x29 + -0x40,uVar19);
    if ((uVar15 & 1) == 0) {
      uVar21 = *(undefined8 *)(unaff_x29 + -0x38);
      uVar19 = *(undefined8 *)(unaff_x29 + -0x40);
      uVar23 = *(undefined8 *)(unaff_x29 + -0x28);
      uVar22 = *(undefined8 *)(unaff_x29 + -0x30);
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = uVar21;
      *(undefined8 *)(unaff_x19 + 0x1e) = uVar19;
      *(undefined8 *)(unaff_x19 + 0x24) = uVar23;
      *(undefined8 *)(unaff_x19 + 0x22) = uVar22;
      lVar9 = *(long *)(unaff_x20 + 0x20);
      uVar3 = *(ushort *)(lVar9 + 0x135);
      if ((uVar3 & 1) == 0) {
        unaff_x25 = *(long *)(unaff_x29 + -0xc0);
        lVar9 = FUN_0406aaec();
        uVar3 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      }
      else {
        unaff_x25 = *(long *)(unaff_x29 + -0xc0);
      }
      pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x40);
      if ((uVar3 & 1) == 0) {
        FUN_0406aaec();
      }
      (*pcVar16)(unaff_x19 + 2,unaff_x29 + -0x40);
      goto FUN_07046a10;
    }
LAB_0704603c:
    plVar20 = *(long **)(unaff_x29 + -0x40);
    if (plVar20 == (long *)0x0) {
      auVar24 = *(undefined1 (*) [16])(unaff_x29 + -0x38);
    }
    else {
      uVar4 = *(undefined2 *)(unaff_x29 + -0x28);
      lVar9 = *(long *)(*(long *)PTR_DAT_08f8d1e0 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec(lVar9);
      }
      lVar14 = *plVar20;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar9) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_070460d8;
          }
          uVar15 = uVar15 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_0406ae20(plVar20,lVar9,0);
LAB_070460d8:
      auVar24 = (*(code *)*puVar11)(plVar20,uVar4,puVar11[1]);
    }
    *(undefined1 (*) [16])(unaff_x19 + 0x10) = auVar24;
    if ((auVar24._0_8_ & 0xff) != 0) goto LAB_07046618;
LAB_070460f4:
    plVar20 = *(long **)(unaff_x19 + 0x14);
    if (plVar20 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07046d18;
    }
    lVar9 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec(lVar9);
    }
    lVar14 = *plVar20;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar9) {
          puVar11 = (undefined8 *)(lVar14 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_0704617c;
        }
        uVar15 = uVar15 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_0406ae20(plVar20,lVar9,1);
LAB_0704617c:
    auVar24 = (*(code *)*puVar11)(plVar20,puVar11[1]);
    if ((*(ushort *)(*(long *)(*(long *)puVar6 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    uVar19 = *(undefined8 *)puVar5;
    *(undefined1 (*) [16])(unaff_x29 + -0x70) = auVar24;
    uVar15 = FUN_0425a2e4(unaff_x29 + -0x70,uVar19);
  } while ((uVar15 & 1) != 0);
  uVar21 = *(undefined8 *)(unaff_x29 + -0x68);
  uVar19 = *(undefined8 *)(unaff_x29 + -0x70);
  *unaff_x19 = 1;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar21;
  *(undefined8 *)(unaff_x19 + 0x26) = uVar19;
  lVar9 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(ushort *)(lVar9 + 0x135);
  if ((uVar3 & 1) == 0) {
    unaff_x25 = *(long *)(unaff_x29 + -0xc0);
    lVar9 = FUN_0406aaec();
    uVar3 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
  }
  else {
    unaff_x25 = *(long *)(unaff_x29 + -0xc0);
  }
  pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x58);
  if ((uVar3 & 1) == 0) {
    FUN_0406aaec();
  }
  (*pcVar16)(unaff_x19 + 2,unaff_x29 + -0x70);
FUN_07046a10:
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return;
  }
LAB_07046d18:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_07046618:
  plVar20 = *(long **)(unaff_x19 + 0x14);
  if (plVar20 != (long *)0x0) {
    lVar9 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec(lVar9);
    }
    lVar14 = *plVar20;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar9) {
          puVar11 = (undefined8 *)(lVar14 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_070466a0;
        }
        uVar15 = uVar15 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_0406ae20(plVar20,lVar9,1);
LAB_070466a0:
    auVar24 = (*(code *)*puVar11)(plVar20,puVar11[1]);
    if ((*(ushort *)(*(long *)(*(long *)puVar6 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    uVar19 = *(undefined8 *)puVar5;
    *(undefined1 (*) [16])(unaff_x29 + -0x70) = auVar24;
    uVar15 = FUN_0425a2e4(unaff_x29 + -0x70,uVar19);
    if ((uVar15 & 1) == 0) {
      uVar21 = *(undefined8 *)(unaff_x29 + -0x68);
      uVar19 = *(undefined8 *)(unaff_x29 + -0x70);
      *unaff_x19 = 3;
      *(undefined8 *)(unaff_x19 + 0x28) = uVar21;
      *(undefined8 *)(unaff_x19 + 0x26) = uVar19;
      lVar9 = *(long *)(unaff_x20 + 0x20);
      uVar3 = *(ushort *)(lVar9 + 0x135);
      if ((uVar3 & 1) == 0) {
        unaff_x25 = *(long *)(unaff_x29 + -0xc0);
        lVar9 = FUN_0406aaec();
        uVar3 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      }
      else {
        unaff_x25 = *(long *)(unaff_x29 + -0xc0);
      }
      pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x58);
      if ((uVar3 & 1) == 0) {
        FUN_0406aaec();
      }
      (*pcVar16)(unaff_x19 + 2,unaff_x29 + -0x70);
      goto FUN_07046a10;
    }
LAB_07046308:
    plVar20 = *(long **)(unaff_x29 + -0x70);
    if (plVar20 == (long *)0x0) {
      if (*(char *)(unaff_x29 + -0x68) == '\0') goto LAB_07046880;
    }
    else {
      uVar4 = *(undefined2 *)(unaff_x29 + -0x66);
      lVar9 = *(long *)(*(long *)PTR_DAT_08f6dab8 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec(lVar9);
      }
      lVar14 = *plVar20;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar9) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_070463a8;
          }
          uVar15 = uVar15 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_0406ae20(plVar20,lVar9,0);
LAB_070463a8:
      uVar15 = (*(code *)*puVar11)(plVar20,uVar4,puVar11[1]);
      if ((uVar15 & 1) == 0) goto LAB_07046880;
    }
    plVar20 = *(long **)(unaff_x19 + 0x14);
    if (plVar20 == (long *)0x0) {
LAB_070467d0:
      if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07046d18;
    }
    lVar9 = *(long *)(unaff_x20 + 0x20);
    lVar14 = *(long *)(unaff_x19 + 0xe);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec(lVar9);
    }
    lVar12 = *plVar20;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar9) {
          lVar9 = lVar12 + (long)*piVar18 * 0x10 + 0x138;
          goto LAB_07046444;
        }
        uVar15 = uVar15 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar15 != 0);
    }
    lVar9 = FUN_0406ae20(plVar20,lVar9,0);
LAB_07046444:
    lVar9 = *(long *)(lVar9 + 8);
    *(undefined8 **)(unaff_x29 + -0xb8) = puVar10;
    (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar20,unaff_x29 + -0xb8,puVar10);
    if (lVar14 == 0) goto LAB_070467d0;
    lVar12 = *(long *)(unaff_x20 + 0x20);
    uVar3 = *(ushort *)(lVar12 + 0x135);
    lVar9 = lVar12;
    if ((uVar3 & 1) == 0) {
      lVar9 = FUN_0406aaec();
      lVar12 = *(long *)(unaff_x20 + 0x20);
      uVar3 = *(ushort *)(lVar12 + 0x135);
    }
    uVar19 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x38);
    lVar9 = lVar12;
    if ((uVar3 & 1) == 0) {
      lVar9 = FUN_0406aaec();
      lVar12 = *(long *)(unaff_x20 + 0x20);
      uVar3 = *(ushort *)(lVar12 + 0x135);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x38);
    if ((uVar3 & 1) == 0) {
      lVar12 = FUN_0406aaec();
    }
    puVar11 = puVar10;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x30) + 0x28)) {
      puVar11 = (undefined8 *)*puVar10;
    }
    pcVar16 = *(code **)(lVar9 + 0x10);
    *(undefined8 **)(unaff_x29 + -0x20) = puVar11;
    (*pcVar16)(uVar19,lVar9,lVar14,unaff_x29 + -0x20,unaff_x29 + -0xb8);
    lVar9 = *(long *)PTR_DAT_08f8d1f0;
    *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0xb0);
    *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0xb8);
    *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0xa0);
    *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0xa8);
    if ((*(ushort *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    uVar19 = *(undefined8 *)puVar7;
    *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0x58);
    *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x60);
    *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x48);
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x50);
    uVar15 = FUN_05069368(unaff_x29 + -0x40,uVar19);
    if ((uVar15 & 1) == 0) {
      uVar21 = *(undefined8 *)(unaff_x29 + -0x38);
      uVar19 = *(undefined8 *)(unaff_x29 + -0x40);
      uVar23 = *(undefined8 *)(unaff_x29 + -0x28);
      uVar22 = *(undefined8 *)(unaff_x29 + -0x30);
      *unaff_x19 = 2;
      *(undefined8 *)(unaff_x19 + 0x20) = uVar21;
      *(undefined8 *)(unaff_x19 + 0x1e) = uVar19;
      *(undefined8 *)(unaff_x19 + 0x24) = uVar23;
      *(undefined8 *)(unaff_x19 + 0x22) = uVar22;
      lVar9 = *(long *)(unaff_x20 + 0x20);
      uVar3 = *(ushort *)(lVar9 + 0x135);
      if ((uVar3 & 1) == 0) {
        unaff_x25 = *(long *)(unaff_x29 + -0xc0);
        lVar9 = FUN_0406aaec();
        uVar3 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      }
      else {
        unaff_x25 = *(long *)(unaff_x29 + -0xc0);
      }
      pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x40);
      if ((uVar3 & 1) == 0) {
        FUN_0406aaec();
      }
      (*pcVar16)(unaff_x19 + 2,unaff_x29 + -0x40);
      goto FUN_07046a10;
    }
LAB_0704654c:
    plVar20 = *(long **)(unaff_x29 + -0x40);
    if (plVar20 == (long *)0x0) {
      auVar24 = *(undefined1 (*) [16])(unaff_x29 + -0x38);
    }
    else {
      uVar4 = *(undefined2 *)(unaff_x29 + -0x28);
      lVar9 = *(long *)(*(long *)PTR_DAT_08f8d1e0 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec(lVar9);
      }
      lVar14 = *plVar20;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar9) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_070465e8;
          }
          uVar15 = uVar15 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_0406ae20(plVar20,lVar9,0);
LAB_070465e8:
      auVar24 = (*(code *)*puVar11)(plVar20,uVar4,puVar11[1]);
    }
    if ((((auVar24._0_8_ & 0xff) != 0) && (*(long *)(unaff_x19 + 0x12) < auVar24._8_8_)) &&
       ((char)unaff_x19[0x10] != '\0')) {
      *(undefined1 (*) [16])(unaff_x19 + 0x10) = auVar24;
    }
    goto LAB_07046618;
  }
  if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  goto LAB_07046d18;
LAB_07046880:
  plVar20 = *(long **)(unaff_x19 + 0x14);
  unaff_x25 = *(long *)(unaff_x29 + -0xc0);
  if (plVar20 != (long *)0x0) {
    lVar9 = *plVar20;
    uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar15 != 0) {
      piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_08f8cf80) {
          puVar10 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
          goto 
          System_Array_EmptyInternalEnumerator<KeyValuePair<object,_StyleComplexSelector_PseudoStateData>>___cctor
          ;
        }
        uVar15 = uVar15 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_0406ae20(plVar20,*(long *)PTR_DAT_08f8cf80,0);

    System_Array_EmptyInternalEnumerator<KeyValuePair<object,_StyleComplexSelector_PseudoStateData>>___cctor
    :
    auVar24 = (*(code *)*puVar10)(plVar20,puVar10[1]);
    puVar5 = PTR_DAT_08f67a58;
    plVar20 = auVar24._0_8_;
    if (*(int *)(*(long *)PTR_DAT_08f67a58 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    *(undefined1 (*) [16])(unaff_x29 + -0x80) = auVar24;
    if (DAT_09539e0c == '\0') {
      FUN_0403162c(PTR_DAT_08f67a58);
      DAT_09539e0c = '\x01';
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if (DAT_09539e0d == '\0') {
      FUN_0403162c(PTR_DAT_08f67c08);
      DAT_09539e0d = '\x01';
    }
    if (plVar20 != (long *)0x0) {
      lVar9 = *plVar20;
      uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar15 != 0) {
        piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_08f67c08) {
            puVar10 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
            goto 
            System_Array_EmptyInternalEnumerator<KeyValuePair<object,_TTSServiceLogging_TTSServiceRequestLog>>__Dispose
            ;
          }
          uVar15 = uVar15 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_0406ae20(plVar20,*(long *)PTR_DAT_08f67c08,0);

      System_Array_EmptyInternalEnumerator<KeyValuePair<object,_TTSServiceLogging_TTSServiceRequestLog>>__Dispose
      :
      iVar8 = (*(code *)*puVar10)(plVar20,auVar24._8_8_ & 0xffffffff,puVar10[1]);
      if (iVar8 == 0) {
        uVar21 = *(undefined8 *)(unaff_x29 + -0x78);
        uVar19 = *(undefined8 *)(unaff_x29 + -0x80);
        *unaff_x19 = 4;
        *(undefined8 *)(unaff_x19 + 0x2c) = uVar21;
        *(undefined8 *)(unaff_x19 + 0x2a) = uVar19;
        lVar9 = *(long *)(unaff_x20 + 0x20);
        uVar3 = *(ushort *)(lVar9 + 0x135);
        if ((uVar3 & 1) == 0) {
          lVar9 = FUN_0406aaec();
          uVar3 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        }
        pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x60);
        if ((uVar3 & 1) == 0) {
          FUN_0406aaec();
        }
        (*pcVar16)(unaff_x19 + 2,unaff_x29 + -0x80);
        goto FUN_07046a10;
      }
    }
LAB_07045bcc:
    if (DAT_09539e0e == '\0') {
      FUN_0403162c(PTR_DAT_08f67c08);
      DAT_09539e0e = '\x01';
    }
    plVar20 = *(long **)(unaff_x29 + -0x80);
    if (plVar20 != (long *)0x0) {
      lVar9 = *plVar20;
      uVar4 = *(undefined2 *)(unaff_x29 + -0x78);
      uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar15 != 0) {
        piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_08f67c08) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_07045db4;
          }
          uVar15 = uVar15 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_0406ae20(plVar20,*(long *)PTR_DAT_08f67c08,2);
LAB_07045db4:
      (*(code *)*puVar10)(plVar20,uVar4,puVar10[1]);
    }
  }
  plVar20 = *(long **)(unaff_x19 + 0x16);
  if (plVar20 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_08f65af8 + 0x130);
    if ((*(byte *)(*plVar20 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_08f65af8))
    {
      *(long *)(unaff_x29 + -0xc0) = unaff_x25;
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_04031750();
      }
      goto LAB_07046d18;
    }
    lVar9 = FUN_07408528(plVar20,0);
    if (lVar9 == 0) {
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07046d18;
    }
    FUN_074085e8(lVar9,0);
  }
  if (unaff_x19[0x18] == 1) {
    puVar13 = unaff_x19 + 0x1a;
    puVar17 = unaff_x19 + 0x1c;
  }
  else {
    puVar13 = unaff_x19 + 0x10;
    puVar17 = unaff_x19 + 0x12;
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    unaff_x19[0x1a] = 0;
    unaff_x19[0x1b] = 0;
    unaff_x19[0x1c] = 0;
    unaff_x19[0x1d] = 0;
  }
  plVar20 = *(long **)(unaff_x19 + 2);
  uVar21 = *(undefined8 *)puVar13;
  uVar19 = *(undefined8 *)puVar17;
  *unaff_x19 = 0xfffffffe;
  unaff_x19[0x14] = 0;
  unaff_x19[0x15] = 0;
  if (plVar20 == (long *)0x0) {
    *(undefined8 *)(unaff_x19 + 6) = uVar21;
    *(undefined8 *)(unaff_x19 + 8) = uVar19;
  }
  else {
    lVar9 = *(long *)(*(long *)PTR_DAT_08f8d0e8 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec(lVar9);
    }
    lVar14 = *plVar20;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar9) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar18 + 2) * 0x10 + 0x138);
          goto LAB_070469fc;
        }
        uVar15 = uVar15 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_0406ae20(plVar20,lVar9,2);
LAB_070469fc:
    (*(code *)*puVar10)(plVar20,uVar21,uVar19,puVar10[1]);
  }
  goto FUN_07046a10;
}


