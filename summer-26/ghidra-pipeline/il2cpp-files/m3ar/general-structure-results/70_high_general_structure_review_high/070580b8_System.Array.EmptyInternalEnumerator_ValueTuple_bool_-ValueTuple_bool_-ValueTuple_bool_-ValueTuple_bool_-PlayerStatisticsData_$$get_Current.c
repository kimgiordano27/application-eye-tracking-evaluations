/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ValueTuple<bool,-ValueTuple<bool,-ValueTuple<bool,-ValueTuple<bool,-PlayerStatisticsData>>>>>$$get_Current
ENTRY_POINT: 070580b8
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_5;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_PlayerStatisticsData>>>>>__get_Current
               (undefined1 param_1 [16])

{
  undefined2 uVar1;
  ushort uVar2;
  char cVar3;
  char cVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  uint in_w8;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined4 in_w10;
  int *piVar15;
  long *unaff_x19;
  code *pcVar16;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined4 *unaff_x28;
  undefined4 *puVar21;
  long unaff_x29;
  long lVar22;
  undefined1 auVar23 [16];
  
  lVar11 = param_1._8_8_;
  lVar8 = param_1._0_8_;
  while( true ) {
    lVar10 = unaff_x19[0x10];
    *(char *)(unaff_x28 + 0x12) = (char)in_w8;
    *(long *)(unaff_x28 + 0x16) = lVar11;
    *(long *)(unaff_x28 + 0x14) = lVar8;
    *(int *)(unaff_x19 + 0xe) = (int)lVar10;
    *(undefined4 *)((long)unaff_x19 + 0x73) = in_w10;
    *(int *)((long)unaff_x28 + 0x49) = (int)unaff_x19[0xe];
    unaff_x28[0x13] = in_w10;
    puVar21 = unaff_x28;
    if (in_w8 != 0) break;
    plVar17 = *(long **)(unaff_x28 + 0x18);
    if (plVar17 == (long *)0x0) {
      if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07058e9c;
    }
    lVar8 = *(long *)(unaff_x19[4] + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0406aaec();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0406aaec(lVar8);
    }
    lVar11 = *plVar17;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar8) {
          puVar9 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_0705816c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_0406ae20(plVar17,lVar8,1);
LAB_0705816c:
    auVar23 = (*(code *)*puVar9)(plVar17,puVar9[1]);
    if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_08f6db00 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    puVar5 = PTR_DAT_08f6dac0;
    *(undefined1 (*) [16])(unaff_x19 + 0xc) = auVar23;
    uVar14 = FUN_0425a2e4(unaff_x19 + 0xc,*(undefined8 *)puVar5);
    if ((uVar14 & 1) == 0) {
      lVar10 = unaff_x19[0xd];
      lVar11 = unaff_x19[0xc];
      *unaff_x28 = 1;
      lVar8 = unaff_x19[4];
      *(long *)(unaff_x28 + 0x30) = lVar10;
      *(long *)(unaff_x28 + 0x2e) = lVar11;
      lVar8 = *(long *)(lVar8 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_0406aaec();
        uVar2 = *(ushort *)(*(long *)(unaff_x19[4] + 0x20) + 0x135);
      }
      pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x58);
      if ((uVar2 & 1) == 0) {
        FUN_0406aaec();
      }
      (*pcVar16)(unaff_x28 + 2,unaff_x19 + 0xc);
      goto 
      System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_AsyncGPUReadbackRequest>>>>___cctor
      ;
    }
    plVar17 = (long *)unaff_x19[0xc];
    if (plVar17 == (long *)0x0) {
      if ((char)unaff_x19[0xd] == '\0') goto LAB_07057d94;
    }
    else {
      uVar1 = *(undefined2 *)((long)unaff_x19 + 0x6a);
      lVar8 = *(long *)(*(long *)PTR_DAT_08f6dab8 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0406aaec();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0406aaec(lVar8);
      }
      lVar11 = *plVar17;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar8) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto 
            System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_ParticleSystemJobData>>>>>__Dispose
            ;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_0406ae20(plVar17,lVar8,0);

      System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_ParticleSystemJobData>>>>>__Dispose
      :
      uVar14 = (*(code *)*puVar9)(plVar17,uVar1,puVar9[1]);
      if ((uVar14 & 1) == 0) {
LAB_07057d94:
        *(undefined8 *)(unaff_x28 + 0x1e) = 0;
        *(undefined8 *)(unaff_x28 + 0x20) = 0;
        *(undefined8 *)(unaff_x28 + 0x22) = 0;
        unaff_x28[0x1c] = 1;
        goto LAB_070589d8;
      }
    }
    plVar17 = *(long **)(unaff_x28 + 0x18);
    if (plVar17 == (long *)0x0) {
      if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07058e9c;
    }
    lVar11 = *(long *)(unaff_x28 + 0x10);
    lVar8 = *(long *)(unaff_x19[4] + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0406aaec();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0406aaec(lVar8);
    }
    lVar10 = *plVar17;
    uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar8) {
          lVar8 = lVar10 + (long)*piVar15 * 0x10 + 0x138;
          goto LAB_07057eb4;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    lVar8 = FUN_0406ae20(plVar17,lVar8,0);
LAB_07057eb4:
    lVar8 = *(long *)(lVar8 + 8);
    *(undefined8 **)(unaff_x29 + -0x30) = unaff_x22;
    (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar17,unaff_x29 + -0x30);
    if (lVar11 == 0) {
      if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07058e9c;
    }
    lVar20 = *(long *)(unaff_x28 + 0xe);
    lVar10 = *(long *)(unaff_x19[4] + 0x20);
    uVar2 = *(ushort *)(lVar10 + 0x135);
    lVar8 = lVar10;
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_0406aaec();
      lVar10 = *(long *)(unaff_x19[4] + 0x20);
      uVar2 = *(ushort *)(lVar10 + 0x135);
    }
    uVar18 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x38);
    lVar8 = lVar10;
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_0406aaec();
      lVar10 = *(long *)(unaff_x19[4] + 0x20);
      uVar2 = *(ushort *)(lVar10 + 0x135);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x38);
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_0406aaec();
    }
    puVar9 = unaff_x22;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x30) + 0x28)) {
      puVar9 = (undefined8 *)*unaff_x22;
    }
    pcVar16 = *(code **)(lVar8 + 0x10);
    unaff_x19[0xf] = lVar20;
    *(undefined8 **)(unaff_x29 + -0x30) = puVar9;
    *(long **)(unaff_x29 + -0x28) = unaff_x19 + 0xf;
    (*pcVar16)(uVar18,lVar8,lVar11,unaff_x29 + -0x30,unaff_x19 + 0x10);
    lVar8 = *(long *)PTR_DAT_08f8d238;
    unaff_x19[0x17] = unaff_x19[0x11];
    unaff_x19[0x16] = unaff_x19[0x10];
    unaff_x19[0x19] = unaff_x19[0x13];
    unaff_x19[0x18] = unaff_x19[0x12];
    lVar8 = *(long *)(lVar8 + 0x20);
    unaff_x19[0x1a] = unaff_x19[0x14];
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    unaff_x19[0x1d] = unaff_x19[0x17];
    unaff_x19[0x1c] = unaff_x19[0x16];
    puVar5 = PTR_DAT_08f8d230;
    unaff_x19[0x1f] = unaff_x19[0x19];
    unaff_x19[0x1e] = unaff_x19[0x18];
    *(long *)(unaff_x29 + -0x60) = unaff_x19[0x1a];
    uVar14 = FUN_05069620(unaff_x29 + -0x80,*(undefined8 *)puVar5);
    if ((uVar14 & 1) == 0) {
      lVar10 = unaff_x19[0x1d];
      lVar11 = unaff_x19[0x1c];
      lVar22 = unaff_x19[0x1f];
      lVar20 = unaff_x19[0x1e];
      uVar18 = *(undefined8 *)(unaff_x29 + -0x60);
      *unaff_x28 = 0;
      *(undefined8 *)(unaff_x28 + 0x2c) = uVar18;
      lVar8 = unaff_x19[4];
      *(long *)(unaff_x28 + 0x26) = lVar10;
      *(long *)(unaff_x28 + 0x24) = lVar11;
      *(long *)(unaff_x28 + 0x2a) = lVar22;
      *(long *)(unaff_x28 + 0x28) = lVar20;
      lVar8 = *(long *)(lVar8 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_0406aaec();
        uVar2 = *(ushort *)(*(long *)(unaff_x19[4] + 0x20) + 0x135);
      }
      pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x40);
      if ((uVar2 & 1) == 0) {
        FUN_0406aaec();
      }
      (*pcVar16)(unaff_x28 + 2,unaff_x29 + -0x80);
      goto 
      System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_AsyncGPUReadbackRequest>>>>___cctor
      ;
    }
    plVar17 = *(long **)(unaff_x29 + -0x80);
    if (plVar17 == (long *)0x0) {
      uVar12 = *(undefined4 *)((long)unaff_x19 + 0xe9);
      in_w10 = *(undefined4 *)(unaff_x29 + -0x74);
      bVar6 = *(byte *)(unaff_x29 + -0x78);
      lVar11 = unaff_x19[0x1f];
      lVar8 = unaff_x19[0x1e];
    }
    else {
      uVar1 = *(undefined2 *)(unaff_x29 + -0x60);
      lVar8 = *(long *)(*unaff_x21 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0406aaec();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0406aaec(lVar8);
      }
      lVar11 = *plVar17;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar8) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_07058088;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_0406ae20(plVar17,lVar8,0);
LAB_07058088:
      (*(code *)*puVar9)(unaff_x29 + -0x30,plVar17,uVar1,puVar9[1]);
      uVar12 = *(undefined4 *)((long)unaff_x19 + 0x131);
      in_w10 = *(undefined4 *)(unaff_x29 + -0x2c);
      bVar6 = *(byte *)(unaff_x29 + -0x30);
      lVar11 = unaff_x19[0x28];
      lVar8 = unaff_x19[0x27];
    }
    in_w8 = (uint)bVar6;
    *(undefined4 *)(unaff_x19 + 0x10) = uVar12;
    *(undefined4 *)((long)unaff_x19 + 0x83) = in_w10;
  }
  while (unaff_x28 = puVar21, plVar17 = *(long **)(unaff_x28 + 0x18), plVar17 != (long *)0x0) {
    lVar8 = *(long *)(unaff_x19[4] + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0406aaec();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0406aaec(lVar8);
    }
    lVar11 = *plVar17;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar8) {
          puVar9 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_070587bc;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_0406ae20(plVar17,lVar8,1);
LAB_070587bc:
    auVar23 = (*(code *)*puVar9)(plVar17,puVar9[1]);
    if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_08f6db00 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    puVar5 = PTR_DAT_08f6dac0;
    *(undefined1 (*) [16])(unaff_x19 + 0xc) = auVar23;
    uVar14 = FUN_0425a2e4(unaff_x19 + 0xc,*(undefined8 *)puVar5);
    if ((uVar14 & 1) == 0) {
      lVar10 = unaff_x19[0xd];
      lVar11 = unaff_x19[0xc];
      *unaff_x28 = 3;
      lVar8 = unaff_x19[4];
      *(long *)(unaff_x28 + 0x30) = lVar10;
      *(long *)(unaff_x28 + 0x2e) = lVar11;
      lVar11 = *(long *)(lVar8 + 0x20);
      uVar2 = *(ushort *)(lVar11 + 0x135);
      lVar8 = lVar11;
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_0406aaec();
        lVar11 = *(long *)(unaff_x19[4] + 0x20);
        uVar2 = *(ushort *)(lVar11 + 0x135);
      }
      pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x58);
      if ((uVar2 & 1) == 0) {
        lVar11 = FUN_0406aaec();
      }
      (*pcVar16)(unaff_x28 + 2,unaff_x19 + 0xc,unaff_x28,
                 *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x58));
      goto 
      System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_AsyncGPUReadbackRequest>>>>___cctor
      ;
    }
    plVar17 = (long *)unaff_x19[0xc];
    if (plVar17 == (long *)0x0) {
      if ((char)unaff_x19[0xd] == '\0') goto LAB_070589d8;
    }
    else {
      uVar1 = *(undefined2 *)((long)unaff_x19 + 0x6a);
      lVar8 = *(long *)(*(long *)PTR_DAT_08f6dab8 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0406aaec();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0406aaec(lVar8);
      }
      lVar11 = *plVar17;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar8) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_070583d4;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_0406ae20(plVar17,lVar8,0);
LAB_070583d4:
      uVar14 = (*(code *)*puVar9)(plVar17,uVar1,puVar9[1]);
      if ((uVar14 & 1) == 0) goto LAB_070589d8;
    }
    plVar17 = *(long **)(unaff_x28 + 0x18);
    if (plVar17 == (long *)0x0) {
      if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07058e9c;
    }
    lVar11 = *(long *)(unaff_x28 + 0x10);
    lVar8 = *(long *)(unaff_x19[4] + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0406aaec();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0406aaec(lVar8);
    }
    lVar10 = *plVar17;
    uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar8) {
          lVar8 = lVar10 + (long)*piVar15 * 0x10 + 0x138;
          goto LAB_07058474;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    lVar8 = FUN_0406ae20(plVar17,lVar8,0);
LAB_07058474:
    lVar8 = *(long *)(lVar8 + 8);
    *(undefined8 **)(unaff_x29 + -0x30) = unaff_x22;
    (**(code **)(lVar8 + 0x10))
              (*(undefined8 *)(lVar8 + 8),lVar8,plVar17,unaff_x29 + -0x30,unaff_x22);
    if (lVar11 == 0) {
      if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07058e9c;
    }
    lVar20 = *(long *)(unaff_x28 + 0xe);
    lVar10 = *(long *)(unaff_x19[4] + 0x20);
    uVar2 = *(ushort *)(lVar10 + 0x135);
    lVar8 = lVar10;
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_0406aaec();
      lVar10 = *(long *)(unaff_x19[4] + 0x20);
      uVar2 = *(ushort *)(lVar10 + 0x135);
    }
    uVar18 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x38);
    lVar8 = lVar10;
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_0406aaec();
      lVar10 = *(long *)(unaff_x19[4] + 0x20);
      uVar2 = *(ushort *)(lVar10 + 0x135);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x38);
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_0406aaec();
    }
    puVar9 = unaff_x22;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x30) + 0x28)) {
      puVar9 = (undefined8 *)*unaff_x22;
    }
    pcVar16 = *(code **)(lVar8 + 0x10);
    unaff_x19[0xf] = lVar20;
    *(undefined8 **)(unaff_x29 + -0x30) = puVar9;
    *(long **)(unaff_x29 + -0x28) = unaff_x19 + 0xf;
    (*pcVar16)(uVar18,lVar8,lVar11,unaff_x29 + -0x30,unaff_x19 + 0x10);
    lVar8 = *(long *)PTR_DAT_08f8d238;
    unaff_x19[0x17] = unaff_x19[0x11];
    unaff_x19[0x16] = unaff_x19[0x10];
    unaff_x19[0x19] = unaff_x19[0x13];
    unaff_x19[0x18] = unaff_x19[0x12];
    lVar8 = *(long *)(lVar8 + 0x20);
    unaff_x19[0x1a] = unaff_x19[0x14];
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    unaff_x19[0x1d] = unaff_x19[0x17];
    unaff_x19[0x1c] = unaff_x19[0x16];
    puVar5 = PTR_DAT_08f8d230;
    unaff_x19[0x1f] = unaff_x19[0x19];
    unaff_x19[0x1e] = unaff_x19[0x18];
    *(long *)(unaff_x29 + -0x60) = unaff_x19[0x1a];
    uVar14 = FUN_05069620(unaff_x29 + -0x80,*(undefined8 *)puVar5);
    if ((uVar14 & 1) == 0) {
      lVar10 = unaff_x19[0x1d];
      lVar11 = unaff_x19[0x1c];
      lVar22 = unaff_x19[0x1f];
      lVar20 = unaff_x19[0x1e];
      *unaff_x28 = 2;
      *(undefined8 *)(unaff_x28 + 0x2c) = *(undefined8 *)(unaff_x29 + -0x60);
      lVar8 = unaff_x19[4];
      *(long *)(unaff_x28 + 0x26) = lVar10;
      *(long *)(unaff_x28 + 0x24) = lVar11;
      *(long *)(unaff_x28 + 0x2a) = lVar22;
      *(long *)(unaff_x28 + 0x28) = lVar20;
      lVar11 = *(long *)(lVar8 + 0x20);
      uVar2 = *(ushort *)(lVar11 + 0x135);
      lVar8 = lVar11;
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_0406aaec();
        lVar11 = *(long *)(unaff_x19[4] + 0x20);
        uVar2 = *(ushort *)(lVar11 + 0x135);
      }
      pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x40);
      if ((uVar2 & 1) == 0) {
        lVar11 = FUN_0406aaec();
      }
      (*pcVar16)(unaff_x28 + 2,unaff_x29 + -0x80,unaff_x28,
                 *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x40));
      goto 
      System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_AsyncGPUReadbackRequest>>>>___cctor
      ;
    }
    plVar17 = *(long **)(unaff_x29 + -0x80);
    if (plVar17 == (long *)0x0) {
      uVar12 = *(undefined4 *)((long)unaff_x19 + 0xe9);
      uVar13 = *(undefined4 *)(unaff_x29 + -0x74);
      cVar3 = *(char *)(unaff_x29 + -0x78);
      lVar11 = unaff_x19[0x1f];
      lVar8 = unaff_x19[0x1e];
    }
    else {
      uVar1 = *(undefined2 *)(unaff_x29 + -0x60);
      lVar8 = *(long *)(*unaff_x21 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0406aaec();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0406aaec(lVar8);
      }
      lVar11 = *plVar17;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar8) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0705864c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_0406ae20(plVar17,lVar8,0);
LAB_0705864c:
      (*(code *)*puVar9)(unaff_x29 + -0x30,plVar17,uVar1,puVar9[1]);
      uVar12 = *(undefined4 *)((long)unaff_x19 + 0x131);
      uVar13 = *(undefined4 *)(unaff_x29 + -0x2c);
      cVar3 = *(char *)(unaff_x29 + -0x30);
      lVar11 = unaff_x19[0x28];
      lVar8 = unaff_x19[0x27];
    }
    *(undefined4 *)(unaff_x19 + 0x10) = uVar12;
    *(undefined4 *)((long)unaff_x19 + 0x83) = uVar13;
    unaff_x19[3] = lVar11;
    unaff_x19[2] = lVar8;
    *(int *)(unaff_x19 + 0xb) = (int)unaff_x19[0x10];
    *(undefined4 *)((long)unaff_x19 + 0x5b) = uVar13;
    puVar21 = unaff_x28;
    if (cVar3 != '\0') {
      lVar11 = unaff_x19[3];
      lVar8 = unaff_x19[2];
      cVar4 = *(char *)(unaff_x28 + 0x12);
      uVar12 = unaff_x28[0x13];
      iVar7 = *(int *)(*(long *)PTR_DAT_08f6fad0 + 0xe4);
      uVar18 = *(undefined8 *)(unaff_x28 + 0x14);
      uVar19 = *(undefined8 *)(unaff_x28 + 0x16);
      *(undefined4 *)(unaff_x19 + 0xe) = *(undefined4 *)((long)unaff_x28 + 0x49);
      *(undefined4 *)((long)unaff_x19 + 0x73) = uVar12;
      if (iVar7 == 0) {
        thunk_FUN_0408f364();
      }
      bVar6 = FUN_07544208(uVar18,uVar19,lVar8,lVar11,0);
      puVar21 = (undefined4 *)unaff_x19[1];
      if ((cVar4 != '\0' & bVar6) != 0) {
        lVar8 = unaff_x19[0xb];
        uVar12 = *(undefined4 *)((long)unaff_x19 + 0x5b);
        lVar10 = unaff_x19[3];
        lVar11 = unaff_x19[2];
        *(char *)(puVar21 + 0x12) = cVar3;
        *(undefined4 *)((long)unaff_x28 + 0x49) = (int)lVar8;
        unaff_x28[0x13] = uVar12;
        *(long *)(puVar21 + 0x16) = lVar10;
        *(long *)(puVar21 + 0x14) = lVar11;
      }
    }
  }
  if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  goto LAB_07058e9c;
LAB_070589d8:
  plVar17 = *(long **)(unaff_x28 + 0x18);
  if (plVar17 == (long *)0x0) {

    System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_ValueTuple<object,_int,_int>>>>>__System_Collections_IEnumerator_Reset
    :
    plVar17 = *(long **)(unaff_x28 + 0x1a);
    if (plVar17 != (long *)0x0) {
      bVar6 = *(byte *)(*(long *)PTR_DAT_08f65af8 + 0x130);
      if ((*(byte *)(*plVar17 + 0x130) < bVar6) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar6 * 8 + -8) != *(long *)PTR_DAT_08f65af8)
         ) {
        unaff_x19[1] = (long)unaff_x28;
        if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
          FUN_04031750(plVar17,unaff_x19[4]);
        }
        goto LAB_07058e9c;
      }
      lVar8 = FUN_07408528(plVar17,0);
      if (lVar8 == 0) {
        if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        goto LAB_07058e9c;
      }
      FUN_074085e8(lVar8,0);
    }
    plVar17 = (long *)(unaff_x28 + 0x1e);
    if (unaff_x28[0x1c] != 1) {
      *(undefined8 *)(unaff_x28 + 0x20) = 0;
      *(undefined8 *)(unaff_x28 + 0x22) = 0;
      *plVar17 = 0;
      plVar17 = (long *)(unaff_x28 + 0x12);
      *(undefined8 *)(unaff_x28 + 0x1a) = 0;
    }
    lVar10 = plVar17[1];
    lVar11 = *plVar17;
    lVar8 = plVar17[2];
    plVar17 = *(long **)(unaff_x28 + 2);
    *unaff_x28 = 0xfffffffe;
    unaff_x19[0x23] = lVar10;
    unaff_x19[0x22] = lVar11;
    *(long *)(unaff_x29 + -0x40) = lVar8;
    *(undefined8 *)(unaff_x28 + 0x18) = 0;
    if (plVar17 == (long *)0x0) {
      lVar8 = unaff_x19[0x22];
      uVar18 = *(undefined8 *)(unaff_x29 + -0x40);
      *(long *)(unaff_x28 + 8) = unaff_x19[0x23];
      *(long *)(unaff_x28 + 6) = lVar8;
      *(undefined8 *)(unaff_x28 + 10) = uVar18;
    }
    else {
      lVar8 = *(long *)(*(long *)PTR_DAT_08f8d138 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0406aaec();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0406aaec(lVar8);
      }
      lVar11 = *plVar17;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar8) {
            puVar9 = (undefined8 *)(lVar11 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_07058b5c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_0406ae20(plVar17,lVar8,2);
LAB_07058b5c:
      lVar8 = *(long *)(unaff_x29 + -0x40);
      pcVar16 = (code *)*puVar9;
      unaff_x19[0x11] = unaff_x19[0x23];
      unaff_x19[0x10] = unaff_x19[0x22];
      unaff_x19[0x12] = lVar8;
      (*pcVar16)(plVar17,unaff_x19 + 0x10,puVar9[1]);
    }
  }
  else {
    lVar8 = *plVar17;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08f8cf80) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_07058bc0;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_0406ae20(plVar17,*(long *)PTR_DAT_08f8cf80,0);
LAB_07058bc0:
    auVar23 = (*(code *)*puVar9)(plVar17,puVar9[1]);
    puVar5 = PTR_DAT_08f67a58;
    plVar17 = auVar23._0_8_;
    if (*(int *)(*(long *)PTR_DAT_08f67a58 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    *(undefined1 (*) [16])(unaff_x19 + 8) = auVar23;
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
    if (plVar17 == (long *)0x0) {
LAB_07057b38:
      if (DAT_09539e0e == '\0') {
        FUN_0403162c(PTR_DAT_08f67c08);
        DAT_09539e0e = '\x01';
      }
      plVar17 = (long *)unaff_x19[8];
      if (plVar17 != (long *)0x0) {
        lVar11 = *plVar17;
        lVar8 = unaff_x19[9];
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08f67c08) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar15 + 2) * 0x10 + 0x138);
              goto LAB_07057d18;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_0406ae20(plVar17,*(long *)PTR_DAT_08f67c08,2);
LAB_07057d18:
        (*(code *)*puVar9)(plVar17,(short)lVar8,puVar9[1]);
      }
      goto 
      System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_ValueTuple<object,_int,_int>>>>>__System_Collections_IEnumerator_Reset
      ;
    }
    lVar8 = *plVar17;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08f67c08) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_07058c98;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_0406ae20(plVar17,*(long *)PTR_DAT_08f67c08,0);
LAB_07058c98:
    iVar7 = (*(code *)*puVar9)(plVar17,auVar23._8_8_ & 0xffffffff,puVar9[1]);
    if (iVar7 != 0) goto LAB_07057b38;
    lVar10 = unaff_x19[9];
    lVar11 = unaff_x19[8];
    *unaff_x28 = 4;
    lVar8 = unaff_x19[4];
    *(long *)(unaff_x28 + 0x34) = lVar10;
    *(long *)(unaff_x28 + 0x32) = lVar11;
    lVar11 = *(long *)(lVar8 + 0x20);
    uVar2 = *(ushort *)(lVar11 + 0x135);
    lVar8 = lVar11;
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_0406aaec();
      lVar11 = *(long *)(unaff_x19[4] + 0x20);
      uVar2 = *(ushort *)(lVar11 + 0x135);
    }
    pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x60);
    if ((uVar2 & 1) == 0) {
      lVar11 = FUN_0406aaec();
    }
    (*pcVar16)(unaff_x28 + 2,unaff_x19 + 8,unaff_x28,
               *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x60));
  }

  System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_AsyncGPUReadbackRequest>>>>___cctor
  :
  if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return;
  }
LAB_07058e9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


