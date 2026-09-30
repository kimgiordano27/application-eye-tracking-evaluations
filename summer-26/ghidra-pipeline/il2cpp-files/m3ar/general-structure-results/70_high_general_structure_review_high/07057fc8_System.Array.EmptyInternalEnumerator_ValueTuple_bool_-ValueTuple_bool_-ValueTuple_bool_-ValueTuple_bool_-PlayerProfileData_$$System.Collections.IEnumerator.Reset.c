/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ValueTuple<bool,-ValueTuple<bool,-ValueTuple<bool,-ValueTuple<bool,-PlayerProfileData>>>>>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 07057fc8
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_PlayerProfileData>>>>>__System_Collections_IEnumerator_Reset
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  undefined2 uVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined **in_x9;
  undefined8 *puVar13;
  undefined4 uVar14;
  int *piVar15;
  long *unaff_x19;
  code *pcVar16;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long *unaff_x27;
  undefined4 *unaff_x28;
  undefined4 *puVar21;
  long unaff_x29;
  long lVar22;
  undefined1 auVar23 [16];
  
  lVar20 = param_3._8_8_;
  lVar10 = param_3._0_8_;
  lVar11 = param_2._8_8_;
  lVar9 = param_2._0_8_;
  while( true ) {
    unaff_x27[7] = lVar11;
    unaff_x27[6] = lVar9;
    puVar13 = (undefined8 *)in_x9[0x46];
    unaff_x27[9] = lVar20;
    unaff_x27[8] = lVar10;
    *(long *)(unaff_x29 + -0x60) = param_1;
    uVar8 = FUN_05069620(unaff_x29 + -0x80,*puVar13);
    if ((uVar8 & 1) == 0) break;
    plVar17 = *(long **)(unaff_x29 + -0x80);
    if (plVar17 == (long *)0x0) {
      uVar12 = *(undefined4 *)((long)unaff_x27 + 0x39);
      uVar14 = *(undefined4 *)(unaff_x29 + -0x74);
      cVar2 = *(char *)(unaff_x29 + -0x78);
      lVar11 = unaff_x27[9];
      lVar9 = unaff_x27[8];
    }
    else {
      uVar4 = *(undefined2 *)(unaff_x29 + -0x60);
      lVar9 = *(long *)(*unaff_x21 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec(lVar9);
      }
      lVar11 = *plVar17;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar9) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_07058088;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar13 = (undefined8 *)FUN_0406ae20(plVar17,lVar9,0);
LAB_07058088:
      (*(code *)*puVar13)(unaff_x29 + -0x30,plVar17,uVar4,puVar13[1]);
      uVar12 = *(undefined4 *)((long)unaff_x27 + 0x81);
      uVar14 = *(undefined4 *)(unaff_x29 + -0x2c);
      cVar2 = *(char *)(unaff_x29 + -0x30);
      lVar11 = unaff_x27[0x12];
      lVar9 = unaff_x27[0x11];
    }
    *(undefined4 *)(unaff_x19 + 0x10) = uVar12;
    *(undefined4 *)((long)unaff_x19 + 0x83) = uVar14;
    lVar10 = unaff_x19[0x10];
    *(char *)(unaff_x28 + 0x12) = cVar2;
    *(long *)(unaff_x28 + 0x16) = lVar11;
    *(long *)(unaff_x28 + 0x14) = lVar9;
    *(int *)(unaff_x19 + 0xe) = (int)lVar10;
    *(undefined4 *)((long)unaff_x19 + 0x73) = uVar14;
    *(int *)((long)unaff_x28 + 0x49) = (int)unaff_x19[0xe];
    unaff_x28[0x13] = uVar14;
    puVar21 = unaff_x28;
    if (cVar2 != '\0') goto LAB_07058730;
    plVar17 = *(long **)(unaff_x28 + 0x18);
    if (plVar17 == (long *)0x0) {
      if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07058e9c;
    }
    lVar9 = *(long *)(unaff_x19[4] + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec(lVar9);
    }
    lVar11 = *plVar17;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar9) {
          puVar13 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_0705816c;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar13 = (undefined8 *)FUN_0406ae20(plVar17,lVar9,1);
LAB_0705816c:
    auVar23 = (*(code *)*puVar13)(plVar17,puVar13[1]);
    if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_08f6db00 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    puVar5 = PTR_DAT_08f6dac0;
    *(undefined1 (*) [16])(unaff_x19 + 0xc) = auVar23;
    uVar8 = FUN_0425a2e4(unaff_x19 + 0xc,*(undefined8 *)puVar5);
    if ((uVar8 & 1) == 0) {
      lVar10 = unaff_x19[0xd];
      lVar11 = unaff_x19[0xc];
      *unaff_x28 = 1;
      lVar9 = unaff_x19[4];
      *(long *)(unaff_x28 + 0x30) = lVar10;
      *(long *)(unaff_x28 + 0x2e) = lVar11;
      lVar9 = *(long *)(lVar9 + 0x20);
      uVar1 = *(ushort *)(lVar9 + 0x135);
      if ((uVar1 & 1) == 0) {
        lVar9 = FUN_0406aaec();
        uVar1 = *(ushort *)(*(long *)(unaff_x19[4] + 0x20) + 0x135);
      }
      pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x58);
      if ((uVar1 & 1) == 0) {
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
      uVar4 = *(undefined2 *)((long)unaff_x19 + 0x6a);
      lVar9 = *(long *)(*(long *)PTR_DAT_08f6dab8 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec(lVar9);
      }
      lVar11 = *plVar17;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar9) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto 
            System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_ParticleSystemJobData>>>>>__Dispose
            ;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar13 = (undefined8 *)FUN_0406ae20(plVar17,lVar9,0);

      System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_ParticleSystemJobData>>>>>__Dispose
      :
      uVar8 = (*(code *)*puVar13)(plVar17,uVar4,puVar13[1]);
      if ((uVar8 & 1) == 0) {
LAB_07057d94:
        *(undefined8 *)(unaff_x28 + 0x1e) = 0;
        *(undefined8 *)(unaff_x28 + 0x20) = 0;
        *(undefined8 *)(unaff_x28 + 0x22) = 0;
        unaff_x28[0x1c] = 1;
        goto LAB_070589d8;
      }
    }
    unaff_x27 = unaff_x19 + 0x16;
    plVar17 = *(long **)(unaff_x28 + 0x18);
    if (plVar17 == (long *)0x0) {
      if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07058e9c;
    }
    lVar11 = *(long *)(unaff_x28 + 0x10);
    lVar9 = *(long *)(unaff_x19[4] + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec(lVar9);
    }
    lVar10 = *plVar17;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar9) {
          lVar9 = lVar10 + (long)*piVar15 * 0x10 + 0x138;
          goto LAB_07057eb4;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    lVar9 = FUN_0406ae20(plVar17,lVar9,0);
LAB_07057eb4:
    lVar9 = *(long *)(lVar9 + 8);
    *(undefined8 **)(unaff_x29 + -0x30) = unaff_x22;
    (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar17,unaff_x29 + -0x30);
    if (lVar11 == 0) {
      if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07058e9c;
    }
    lVar20 = *(long *)(unaff_x28 + 0xe);
    lVar10 = *(long *)(unaff_x19[4] + 0x20);
    uVar1 = *(ushort *)(lVar10 + 0x135);
    lVar9 = lVar10;
    if ((uVar1 & 1) == 0) {
      lVar9 = FUN_0406aaec();
      lVar10 = *(long *)(unaff_x19[4] + 0x20);
      uVar1 = *(ushort *)(lVar10 + 0x135);
    }
    uVar18 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x38);
    lVar9 = lVar10;
    if ((uVar1 & 1) == 0) {
      lVar9 = FUN_0406aaec();
      lVar10 = *(long *)(unaff_x19[4] + 0x20);
      uVar1 = *(ushort *)(lVar10 + 0x135);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x38);
    if ((uVar1 & 1) == 0) {
      lVar10 = FUN_0406aaec();
    }
    puVar13 = unaff_x22;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x30) + 0x28)) {
      puVar13 = (undefined8 *)*unaff_x22;
    }
    pcVar16 = *(code **)(lVar9 + 0x10);
    unaff_x19[0xf] = lVar20;
    *(undefined8 **)(unaff_x29 + -0x30) = puVar13;
    *(long **)(unaff_x29 + -0x28) = unaff_x19 + 0xf;
    (*pcVar16)(uVar18,lVar9,lVar11,unaff_x29 + -0x30,unaff_x19 + 0x10);
    lVar9 = *(long *)PTR_DAT_08f8d238;
    unaff_x19[0x17] = unaff_x19[0x11];
    *unaff_x27 = unaff_x19[0x10];
    unaff_x19[0x19] = unaff_x19[0x13];
    unaff_x19[0x18] = unaff_x19[0x12];
    lVar9 = *(long *)(lVar9 + 0x20);
    unaff_x19[0x1a] = unaff_x19[0x14];
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    lVar11 = unaff_x19[0x17];
    lVar9 = *unaff_x27;
    lVar20 = unaff_x19[0x19];
    lVar10 = unaff_x19[0x18];
    in_x9 = &PTR_DAT_08f8d000;
    param_1 = unaff_x19[0x1a];
  }
  lVar10 = unaff_x27[7];
  lVar11 = unaff_x27[6];
  lVar22 = unaff_x27[9];
  lVar20 = unaff_x27[8];
  uVar18 = *(undefined8 *)(unaff_x29 + -0x60);
  *unaff_x28 = 0;
  *(undefined8 *)(unaff_x28 + 0x2c) = uVar18;
  lVar9 = unaff_x19[4];
  *(long *)(unaff_x28 + 0x26) = lVar10;
  *(long *)(unaff_x28 + 0x24) = lVar11;
  *(long *)(unaff_x28 + 0x2a) = lVar22;
  *(long *)(unaff_x28 + 0x28) = lVar20;
  lVar9 = *(long *)(lVar9 + 0x20);
  uVar1 = *(ushort *)(lVar9 + 0x135);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_0406aaec();
    uVar1 = *(ushort *)(*(long *)(unaff_x19[4] + 0x20) + 0x135);
  }
  pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x40);
  if ((uVar1 & 1) == 0) {
    FUN_0406aaec();
  }
  (*pcVar16)(unaff_x28 + 2,unaff_x29 + -0x80);

  System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_AsyncGPUReadbackRequest>>>>___cctor
  :
  if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return;
  }
LAB_07058e9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_07058730:
  unaff_x28 = puVar21;
  plVar17 = *(long **)(unaff_x28 + 0x18);
  if (plVar17 != (long *)0x0) {
    lVar9 = *(long *)(unaff_x19[4] + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec(lVar9);
    }
    lVar11 = *plVar17;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar9) {
          puVar13 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_070587bc;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar13 = (undefined8 *)FUN_0406ae20(plVar17,lVar9,1);
LAB_070587bc:
    auVar23 = (*(code *)*puVar13)(plVar17,puVar13[1]);
    if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_08f6db00 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    puVar5 = PTR_DAT_08f6dac0;
    *(undefined1 (*) [16])(unaff_x19 + 0xc) = auVar23;
    uVar8 = FUN_0425a2e4(unaff_x19 + 0xc,*(undefined8 *)puVar5);
    if ((uVar8 & 1) == 0) {
      lVar10 = unaff_x19[0xd];
      lVar11 = unaff_x19[0xc];
      *unaff_x28 = 3;
      lVar9 = unaff_x19[4];
      *(long *)(unaff_x28 + 0x30) = lVar10;
      *(long *)(unaff_x28 + 0x2e) = lVar11;
      lVar11 = *(long *)(lVar9 + 0x20);
      uVar1 = *(ushort *)(lVar11 + 0x135);
      lVar9 = lVar11;
      if ((uVar1 & 1) == 0) {
        lVar9 = FUN_0406aaec();
        lVar11 = *(long *)(unaff_x19[4] + 0x20);
        uVar1 = *(ushort *)(lVar11 + 0x135);
      }
      pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x58);
      if ((uVar1 & 1) == 0) {
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
      uVar4 = *(undefined2 *)((long)unaff_x19 + 0x6a);
      lVar9 = *(long *)(*(long *)PTR_DAT_08f6dab8 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec(lVar9);
      }
      lVar11 = *plVar17;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar9) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_070583d4;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar13 = (undefined8 *)FUN_0406ae20(plVar17,lVar9,0);
LAB_070583d4:
      uVar8 = (*(code *)*puVar13)(plVar17,uVar4,puVar13[1]);
      if ((uVar8 & 1) == 0) goto LAB_070589d8;
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
    lVar9 = *(long *)(unaff_x19[4] + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec(lVar9);
    }
    lVar10 = *plVar17;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar9) {
          lVar9 = lVar10 + (long)*piVar15 * 0x10 + 0x138;
          goto LAB_07058474;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    lVar9 = FUN_0406ae20(plVar17,lVar9,0);
LAB_07058474:
    lVar9 = *(long *)(lVar9 + 8);
    *(undefined8 **)(unaff_x29 + -0x30) = unaff_x22;
    (**(code **)(lVar9 + 0x10))
              (*(undefined8 *)(lVar9 + 8),lVar9,plVar17,unaff_x29 + -0x30,unaff_x22);
    if (lVar11 == 0) {
      if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07058e9c;
    }
    lVar20 = *(long *)(unaff_x28 + 0xe);
    lVar10 = *(long *)(unaff_x19[4] + 0x20);
    uVar1 = *(ushort *)(lVar10 + 0x135);
    lVar9 = lVar10;
    if ((uVar1 & 1) == 0) {
      lVar9 = FUN_0406aaec();
      lVar10 = *(long *)(unaff_x19[4] + 0x20);
      uVar1 = *(ushort *)(lVar10 + 0x135);
    }
    uVar18 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x38);
    lVar9 = lVar10;
    if ((uVar1 & 1) == 0) {
      lVar9 = FUN_0406aaec();
      lVar10 = *(long *)(unaff_x19[4] + 0x20);
      uVar1 = *(ushort *)(lVar10 + 0x135);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x38);
    if ((uVar1 & 1) == 0) {
      lVar10 = FUN_0406aaec();
    }
    puVar13 = unaff_x22;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x30) + 0x28)) {
      puVar13 = (undefined8 *)*unaff_x22;
    }
    pcVar16 = *(code **)(lVar9 + 0x10);
    unaff_x19[0xf] = lVar20;
    *(undefined8 **)(unaff_x29 + -0x30) = puVar13;
    *(long **)(unaff_x29 + -0x28) = unaff_x19 + 0xf;
    (*pcVar16)(uVar18,lVar9,lVar11,unaff_x29 + -0x30,unaff_x19 + 0x10);
    lVar9 = *(long *)PTR_DAT_08f8d238;
    unaff_x19[0x17] = unaff_x19[0x11];
    unaff_x19[0x16] = unaff_x19[0x10];
    unaff_x19[0x19] = unaff_x19[0x13];
    unaff_x19[0x18] = unaff_x19[0x12];
    lVar9 = *(long *)(lVar9 + 0x20);
    unaff_x19[0x1a] = unaff_x19[0x14];
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    unaff_x19[0x1d] = unaff_x19[0x17];
    unaff_x19[0x1c] = unaff_x19[0x16];
    puVar5 = PTR_DAT_08f8d230;
    unaff_x19[0x1f] = unaff_x19[0x19];
    unaff_x19[0x1e] = unaff_x19[0x18];
    *(long *)(unaff_x29 + -0x60) = unaff_x19[0x1a];
    uVar8 = FUN_05069620(unaff_x29 + -0x80,*(undefined8 *)puVar5);
    if ((uVar8 & 1) == 0) {
      lVar10 = unaff_x19[0x1d];
      lVar11 = unaff_x19[0x1c];
      lVar22 = unaff_x19[0x1f];
      lVar20 = unaff_x19[0x1e];
      *unaff_x28 = 2;
      *(undefined8 *)(unaff_x28 + 0x2c) = *(undefined8 *)(unaff_x29 + -0x60);
      lVar9 = unaff_x19[4];
      *(long *)(unaff_x28 + 0x26) = lVar10;
      *(long *)(unaff_x28 + 0x24) = lVar11;
      *(long *)(unaff_x28 + 0x2a) = lVar22;
      *(long *)(unaff_x28 + 0x28) = lVar20;
      lVar11 = *(long *)(lVar9 + 0x20);
      uVar1 = *(ushort *)(lVar11 + 0x135);
      lVar9 = lVar11;
      if ((uVar1 & 1) == 0) {
        lVar9 = FUN_0406aaec();
        lVar11 = *(long *)(unaff_x19[4] + 0x20);
        uVar1 = *(ushort *)(lVar11 + 0x135);
      }
      pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x40);
      if ((uVar1 & 1) == 0) {
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
      uVar14 = *(undefined4 *)(unaff_x29 + -0x74);
      cVar2 = *(char *)(unaff_x29 + -0x78);
      lVar11 = unaff_x19[0x1f];
      lVar9 = unaff_x19[0x1e];
    }
    else {
      uVar4 = *(undefined2 *)(unaff_x29 + -0x60);
      lVar9 = *(long *)(*unaff_x21 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec(lVar9);
      }
      lVar11 = *plVar17;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar9) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0705864c;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar13 = (undefined8 *)FUN_0406ae20(plVar17,lVar9,0);
LAB_0705864c:
      (*(code *)*puVar13)(unaff_x29 + -0x30,plVar17,uVar4,puVar13[1]);
      uVar12 = *(undefined4 *)((long)unaff_x19 + 0x131);
      uVar14 = *(undefined4 *)(unaff_x29 + -0x2c);
      cVar2 = *(char *)(unaff_x29 + -0x30);
      lVar11 = unaff_x19[0x28];
      lVar9 = unaff_x19[0x27];
    }
    *(undefined4 *)(unaff_x19 + 0x10) = uVar12;
    *(undefined4 *)((long)unaff_x19 + 0x83) = uVar14;
    unaff_x19[3] = lVar11;
    unaff_x19[2] = lVar9;
    *(int *)(unaff_x19 + 0xb) = (int)unaff_x19[0x10];
    *(undefined4 *)((long)unaff_x19 + 0x5b) = uVar14;
    puVar21 = unaff_x28;
    if (cVar2 != '\0') {
      lVar11 = unaff_x19[3];
      lVar9 = unaff_x19[2];
      cVar3 = *(char *)(unaff_x28 + 0x12);
      uVar12 = unaff_x28[0x13];
      iVar7 = *(int *)(*(long *)PTR_DAT_08f6fad0 + 0xe4);
      uVar18 = *(undefined8 *)(unaff_x28 + 0x14);
      uVar19 = *(undefined8 *)(unaff_x28 + 0x16);
      *(undefined4 *)(unaff_x19 + 0xe) = *(undefined4 *)((long)unaff_x28 + 0x49);
      *(undefined4 *)((long)unaff_x19 + 0x73) = uVar12;
      if (iVar7 == 0) {
        thunk_FUN_0408f364();
      }
      bVar6 = FUN_07544208(uVar18,uVar19,lVar9,lVar11,0);
      puVar21 = (undefined4 *)unaff_x19[1];
      if ((cVar3 != '\0' & bVar6) != 0) {
        lVar9 = unaff_x19[0xb];
        uVar12 = *(undefined4 *)((long)unaff_x19 + 0x5b);
        lVar10 = unaff_x19[3];
        lVar11 = unaff_x19[2];
        *(char *)(puVar21 + 0x12) = cVar2;
        *(undefined4 *)((long)unaff_x28 + 0x49) = (int)lVar9;
        unaff_x28[0x13] = uVar12;
        *(long *)(puVar21 + 0x16) = lVar10;
        *(long *)(puVar21 + 0x14) = lVar11;
      }
    }
    goto LAB_07058730;
  }
  if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  goto LAB_07058e9c;
LAB_070589d8:
  plVar17 = *(long **)(unaff_x28 + 0x18);
  if (plVar17 != (long *)0x0) {
    lVar9 = *plVar17;
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08f8cf80) {
          puVar13 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_07058bc0;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar13 = (undefined8 *)FUN_0406ae20(plVar17,*(long *)PTR_DAT_08f8cf80,0);
LAB_07058bc0:
    auVar23 = (*(code *)*puVar13)(plVar17,puVar13[1]);
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
    if (plVar17 != (long *)0x0) {
      lVar9 = *plVar17;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08f67c08) {
            puVar13 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_07058c98;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar13 = (undefined8 *)FUN_0406ae20(plVar17,*(long *)PTR_DAT_08f67c08,0);
LAB_07058c98:
      iVar7 = (*(code *)*puVar13)(plVar17,auVar23._8_8_ & 0xffffffff,puVar13[1]);
      if (iVar7 == 0) {
        lVar10 = unaff_x19[9];
        lVar11 = unaff_x19[8];
        *unaff_x28 = 4;
        lVar9 = unaff_x19[4];
        *(long *)(unaff_x28 + 0x34) = lVar10;
        *(long *)(unaff_x28 + 0x32) = lVar11;
        lVar11 = *(long *)(lVar9 + 0x20);
        uVar1 = *(ushort *)(lVar11 + 0x135);
        lVar9 = lVar11;
        if ((uVar1 & 1) == 0) {
          lVar9 = FUN_0406aaec();
          lVar11 = *(long *)(unaff_x19[4] + 0x20);
          uVar1 = *(ushort *)(lVar11 + 0x135);
        }
        pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x60);
        if ((uVar1 & 1) == 0) {
          lVar11 = FUN_0406aaec();
        }
        (*pcVar16)(unaff_x28 + 2,unaff_x19 + 8,unaff_x28,
                   *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x60));
        goto 
        System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_AsyncGPUReadbackRequest>>>>___cctor
        ;
      }
    }
    if (DAT_09539e0e == '\0') {
      FUN_0403162c(PTR_DAT_08f67c08);
      DAT_09539e0e = '\x01';
    }
    plVar17 = (long *)unaff_x19[8];
    if (plVar17 != (long *)0x0) {
      lVar11 = *plVar17;
      lVar9 = unaff_x19[9];
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08f67c08) {
            puVar13 = (undefined8 *)(lVar11 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_07057d18;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar13 = (undefined8 *)FUN_0406ae20(plVar17,*(long *)PTR_DAT_08f67c08,2);
LAB_07057d18:
      (*(code *)*puVar13)(plVar17,(short)lVar9,puVar13[1]);
    }
  }
  plVar17 = *(long **)(unaff_x28 + 0x1a);
  if (plVar17 != (long *)0x0) {
    bVar6 = *(byte *)(*(long *)PTR_DAT_08f65af8 + 0x130);
    if ((*(byte *)(*plVar17 + 0x130) < bVar6) ||
       (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar6 * 8 + -8) != *(long *)PTR_DAT_08f65af8))
    {
      unaff_x19[1] = (long)unaff_x28;
      if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_04031750(plVar17,unaff_x19[4]);
      }
      goto LAB_07058e9c;
    }
    lVar9 = FUN_07408528(plVar17,0);
    if (lVar9 == 0) {
      if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07058e9c;
    }
    FUN_074085e8(lVar9,0);
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
  lVar9 = plVar17[2];
  plVar17 = *(long **)(unaff_x28 + 2);
  *unaff_x28 = 0xfffffffe;
  unaff_x19[0x23] = lVar10;
  unaff_x19[0x22] = lVar11;
  *(long *)(unaff_x29 + -0x40) = lVar9;
  *(undefined8 *)(unaff_x28 + 0x18) = 0;
  if (plVar17 == (long *)0x0) {
    lVar9 = unaff_x19[0x22];
    uVar18 = *(undefined8 *)(unaff_x29 + -0x40);
    *(long *)(unaff_x28 + 8) = unaff_x19[0x23];
    *(long *)(unaff_x28 + 6) = lVar9;
    *(undefined8 *)(unaff_x28 + 10) = uVar18;
  }
  else {
    lVar9 = *(long *)(*(long *)PTR_DAT_08f8d138 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec(lVar9);
    }
    lVar11 = *plVar17;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar9) {
          puVar13 = (undefined8 *)(lVar11 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_07058b5c;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar13 = (undefined8 *)FUN_0406ae20(plVar17,lVar9,2);
LAB_07058b5c:
    lVar9 = *(long *)(unaff_x29 + -0x40);
    pcVar16 = (code *)*puVar13;
    unaff_x19[0x11] = unaff_x19[0x23];
    unaff_x19[0x10] = unaff_x19[0x22];
    unaff_x19[0x12] = lVar9;
    (*pcVar16)(plVar17,unaff_x19 + 0x10,puVar13[1]);
  }
  goto 
  System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_AsyncGPUReadbackRequest>>>>___cctor
  ;
}


