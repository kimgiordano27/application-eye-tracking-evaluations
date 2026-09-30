/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ValueTuple<bool,-ValueTuple<bool,-ValueTuple<bool,-ValueTuple<bool,-PlayerProfileData>>>>>$$Dispose
ENTRY_POINT: 07057f60
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_5;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_PlayerProfileData>>>>>__Dispose
               (void)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  undefined2 uVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  long lVar14;
  undefined4 uVar15;
  code *pcVar16;
  int *piVar17;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long *plVar18;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined8 uVar19;
  long unaff_x26;
  long lVar20;
  long *unaff_x27;
  undefined4 *unaff_x28;
  undefined4 *puVar21;
  long unaff_x29;
  long lVar22;
  undefined1 auVar23 [16];
  
  do {
    puVar9 = (undefined8 *)*unaff_x22;
    do {
      pcVar16 = *(code **)(unaff_x25 + 0x10);
      unaff_x19[0xf] = unaff_x26;
      *(undefined8 **)(unaff_x29 + -0x30) = puVar9;
      *(long **)(unaff_x29 + -0x28) = unaff_x19 + 0xf;
      (*pcVar16)(unaff_x24,unaff_x25,unaff_x23,unaff_x29 + -0x30,unaff_x19 + 0x10);
      lVar11 = unaff_x19[0x10];
      lVar22 = unaff_x19[0x13];
      lVar20 = unaff_x19[0x12];
      lVar14 = unaff_x19[0x14];
      lVar10 = *(long *)PTR_DAT_08f8d238;
      unaff_x27[1] = unaff_x19[0x11];
      *unaff_x27 = lVar11;
      unaff_x27[3] = lVar22;
      unaff_x27[2] = lVar20;
      lVar10 = *(long *)(lVar10 + 0x20);
      unaff_x19[0x1a] = lVar14;
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      lVar10 = unaff_x19[0x1a];
      unaff_x27[7] = unaff_x27[1];
      unaff_x27[6] = *unaff_x27;
      puVar5 = PTR_DAT_08f8d230;
      unaff_x27[9] = unaff_x27[3];
      unaff_x27[8] = unaff_x27[2];
      *(long *)(unaff_x29 + -0x60) = lVar10;
      uVar8 = FUN_05069620(unaff_x29 + -0x80,*(undefined8 *)puVar5);
      if ((uVar8 & 1) == 0) {
        lVar11 = unaff_x27[7];
        lVar14 = unaff_x27[6];
        lVar22 = unaff_x27[9];
        lVar20 = unaff_x27[8];
        uVar12 = *(undefined8 *)(unaff_x29 + -0x60);
        *unaff_x28 = 0;
        *(undefined8 *)(unaff_x28 + 0x2c) = uVar12;
        lVar10 = unaff_x19[4];
        *(long *)(unaff_x28 + 0x26) = lVar11;
        *(long *)(unaff_x28 + 0x24) = lVar14;
        *(long *)(unaff_x28 + 0x2a) = lVar22;
        *(long *)(unaff_x28 + 0x28) = lVar20;
        lVar10 = *(long *)(lVar10 + 0x20);
        uVar1 = *(ushort *)(lVar10 + 0x135);
        if ((uVar1 & 1) == 0) {
          lVar10 = FUN_0406aaec();
          uVar1 = *(ushort *)(*(long *)(unaff_x19[4] + 0x20) + 0x135);
        }
        pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x40);
        if ((uVar1 & 1) == 0) {
          FUN_0406aaec();
        }
        (*pcVar16)(unaff_x28 + 2,unaff_x29 + -0x80);
        goto 
        System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_AsyncGPUReadbackRequest>>>>___cctor
        ;
      }
      plVar18 = *(long **)(unaff_x29 + -0x80);
      if (plVar18 == (long *)0x0) {
        uVar13 = *(undefined4 *)((long)unaff_x27 + 0x39);
        uVar15 = *(undefined4 *)(unaff_x29 + -0x74);
        cVar2 = *(char *)(unaff_x29 + -0x78);
        lVar14 = unaff_x27[9];
        lVar10 = unaff_x27[8];
      }
      else {
        uVar4 = *(undefined2 *)(unaff_x29 + -0x60);
        lVar10 = *(long *)(*unaff_x21 + 0x20);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_0406aaec();
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_0406aaec(lVar10);
        }
        lVar14 = *plVar18;
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar10) {
              puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_07058088;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_0406ae20(plVar18,lVar10,0);
LAB_07058088:
        (*(code *)*puVar9)(unaff_x29 + -0x30,plVar18,uVar4,puVar9[1]);
        uVar13 = *(undefined4 *)((long)unaff_x27 + 0x81);
        uVar15 = *(undefined4 *)(unaff_x29 + -0x2c);
        cVar2 = *(char *)(unaff_x29 + -0x30);
        lVar14 = unaff_x27[0x12];
        lVar10 = unaff_x27[0x11];
      }
      *(undefined4 *)(unaff_x19 + 0x10) = uVar13;
      *(undefined4 *)((long)unaff_x19 + 0x83) = uVar15;
      lVar11 = unaff_x19[0x10];
      *(char *)(unaff_x28 + 0x12) = cVar2;
      *(long *)(unaff_x28 + 0x16) = lVar14;
      *(long *)(unaff_x28 + 0x14) = lVar10;
      *(int *)(unaff_x19 + 0xe) = (int)lVar11;
      *(undefined4 *)((long)unaff_x19 + 0x73) = uVar15;
      *(int *)((long)unaff_x28 + 0x49) = (int)unaff_x19[0xe];
      unaff_x28[0x13] = uVar15;
      puVar21 = unaff_x28;
      if (cVar2 != '\0') goto LAB_07058730;
      plVar18 = *(long **)(unaff_x28 + 0x18);
      if (plVar18 == (long *)0x0) {
        if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        goto LAB_07058e9c;
      }
      lVar10 = *(long *)(unaff_x19[4] + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0406aaec();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x18);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0406aaec(lVar10);
      }
      lVar14 = *plVar18;
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar10) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0705816c;
          }
          uVar8 = uVar8 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_0406ae20(plVar18,lVar10,1);
LAB_0705816c:
      auVar23 = (*(code *)*puVar9)(plVar18,puVar9[1]);
      if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_08f6db00 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      puVar5 = PTR_DAT_08f6dac0;
      *(undefined1 (*) [16])(unaff_x19 + 0xc) = auVar23;
      uVar8 = FUN_0425a2e4(unaff_x19 + 0xc,*(undefined8 *)puVar5);
      if ((uVar8 & 1) == 0) {
        lVar11 = unaff_x19[0xd];
        lVar14 = unaff_x19[0xc];
        *unaff_x28 = 1;
        lVar10 = unaff_x19[4];
        *(long *)(unaff_x28 + 0x30) = lVar11;
        *(long *)(unaff_x28 + 0x2e) = lVar14;
        lVar10 = *(long *)(lVar10 + 0x20);
        uVar1 = *(ushort *)(lVar10 + 0x135);
        if ((uVar1 & 1) == 0) {
          lVar10 = FUN_0406aaec();
          uVar1 = *(ushort *)(*(long *)(unaff_x19[4] + 0x20) + 0x135);
        }
        pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x58);
        if ((uVar1 & 1) == 0) {
          FUN_0406aaec();
        }
        (*pcVar16)(unaff_x28 + 2,unaff_x19 + 0xc);
        goto 
        System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_AsyncGPUReadbackRequest>>>>___cctor
        ;
      }
      plVar18 = (long *)unaff_x19[0xc];
      if (plVar18 == (long *)0x0) {
        if ((char)unaff_x19[0xd] == '\0') goto LAB_07057d94;
      }
      else {
        uVar4 = *(undefined2 *)((long)unaff_x19 + 0x6a);
        lVar10 = *(long *)(*(long *)PTR_DAT_08f6dab8 + 0x20);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_0406aaec();
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_0406aaec(lVar10);
        }
        lVar14 = *plVar18;
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar10) {
              puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto 
              System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_ParticleSystemJobData>>>>>__Dispose
              ;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_0406ae20(plVar18,lVar10,0);

        System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_ParticleSystemJobData>>>>>__Dispose
        :
        uVar8 = (*(code *)*puVar9)(plVar18,uVar4,puVar9[1]);
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
      plVar18 = *(long **)(unaff_x28 + 0x18);
      if (plVar18 == (long *)0x0) {
        if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        goto LAB_07058e9c;
      }
      unaff_x23 = *(long *)(unaff_x28 + 0x10);
      lVar10 = *(long *)(unaff_x19[4] + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0406aaec();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x18);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0406aaec(lVar10);
      }
      lVar14 = *plVar18;
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar10) {
            lVar10 = lVar14 + (long)*piVar17 * 0x10 + 0x138;
            goto LAB_07057eb4;
          }
          uVar8 = uVar8 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar8 != 0);
      }
      lVar10 = FUN_0406ae20(plVar18,lVar10,0);
LAB_07057eb4:
      lVar10 = *(long *)(lVar10 + 8);
      *(undefined8 **)(unaff_x29 + -0x30) = unaff_x22;
      (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,plVar18,unaff_x29 + -0x30);
      if (unaff_x23 == 0) {
        if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        goto LAB_07058e9c;
      }
      unaff_x26 = *(long *)(unaff_x28 + 0xe);
      lVar14 = *(long *)(unaff_x19[4] + 0x20);
      uVar1 = *(ushort *)(lVar14 + 0x135);
      lVar10 = lVar14;
      if ((uVar1 & 1) == 0) {
        lVar10 = FUN_0406aaec();
        lVar14 = *(long *)(unaff_x19[4] + 0x20);
        uVar1 = *(ushort *)(lVar14 + 0x135);
      }
      unaff_x24 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x38);
      lVar10 = lVar14;
      if ((uVar1 & 1) == 0) {
        lVar10 = FUN_0406aaec();
        lVar14 = *(long *)(unaff_x19[4] + 0x20);
        uVar1 = *(ushort *)(lVar14 + 0x135);
      }
      unaff_x25 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x38);
      if ((uVar1 & 1) == 0) {
        lVar14 = FUN_0406aaec();
      }
      puVar9 = unaff_x22;
    } while (*(int *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x30) + 0x28) < 0);
  } while( true );
LAB_07058730:
  unaff_x28 = puVar21;
  plVar18 = *(long **)(unaff_x28 + 0x18);
  if (plVar18 != (long *)0x0) {
    lVar10 = *(long *)(unaff_x19[4] + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0406aaec();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0406aaec(lVar10);
    }
    lVar14 = *plVar18;
    uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar8 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar10) {
          puVar9 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_070587bc;
        }
        uVar8 = uVar8 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_0406ae20(plVar18,lVar10,1);
LAB_070587bc:
    auVar23 = (*(code *)*puVar9)(plVar18,puVar9[1]);
    if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_08f6db00 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    puVar5 = PTR_DAT_08f6dac0;
    *(undefined1 (*) [16])(unaff_x19 + 0xc) = auVar23;
    uVar8 = FUN_0425a2e4(unaff_x19 + 0xc,*(undefined8 *)puVar5);
    if ((uVar8 & 1) == 0) {
      lVar11 = unaff_x19[0xd];
      lVar14 = unaff_x19[0xc];
      *unaff_x28 = 3;
      lVar10 = unaff_x19[4];
      *(long *)(unaff_x28 + 0x30) = lVar11;
      *(long *)(unaff_x28 + 0x2e) = lVar14;
      lVar14 = *(long *)(lVar10 + 0x20);
      uVar1 = *(ushort *)(lVar14 + 0x135);
      lVar10 = lVar14;
      if ((uVar1 & 1) == 0) {
        lVar10 = FUN_0406aaec();
        lVar14 = *(long *)(unaff_x19[4] + 0x20);
        uVar1 = *(ushort *)(lVar14 + 0x135);
      }
      pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x58);
      if ((uVar1 & 1) == 0) {
        lVar14 = FUN_0406aaec();
      }
      (*pcVar16)(unaff_x28 + 2,unaff_x19 + 0xc,unaff_x28,
                 *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x58));
      goto 
      System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_AsyncGPUReadbackRequest>>>>___cctor
      ;
    }
    plVar18 = (long *)unaff_x19[0xc];
    if (plVar18 == (long *)0x0) {
      if ((char)unaff_x19[0xd] == '\0') goto LAB_070589d8;
    }
    else {
      uVar4 = *(undefined2 *)((long)unaff_x19 + 0x6a);
      lVar10 = *(long *)(*(long *)PTR_DAT_08f6dab8 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0406aaec();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0406aaec(lVar10);
      }
      lVar14 = *plVar18;
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar10) {
            puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_070583d4;
          }
          uVar8 = uVar8 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_0406ae20(plVar18,lVar10,0);
LAB_070583d4:
      uVar8 = (*(code *)*puVar9)(plVar18,uVar4,puVar9[1]);
      if ((uVar8 & 1) == 0) goto LAB_070589d8;
    }
    plVar18 = *(long **)(unaff_x28 + 0x18);
    if (plVar18 == (long *)0x0) {
      if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07058e9c;
    }
    lVar14 = *(long *)(unaff_x28 + 0x10);
    lVar10 = *(long *)(unaff_x19[4] + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0406aaec();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0406aaec(lVar10);
    }
    lVar11 = *plVar18;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar10) {
          lVar10 = lVar11 + (long)*piVar17 * 0x10 + 0x138;
          goto LAB_07058474;
        }
        uVar8 = uVar8 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar8 != 0);
    }
    lVar10 = FUN_0406ae20(plVar18,lVar10,0);
LAB_07058474:
    lVar10 = *(long *)(lVar10 + 8);
    *(undefined8 **)(unaff_x29 + -0x30) = unaff_x22;
    (**(code **)(lVar10 + 0x10))
              (*(undefined8 *)(lVar10 + 8),lVar10,plVar18,unaff_x29 + -0x30,unaff_x22);
    if (lVar14 == 0) {
      if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07058e9c;
    }
    lVar20 = *(long *)(unaff_x28 + 0xe);
    lVar11 = *(long *)(unaff_x19[4] + 0x20);
    uVar1 = *(ushort *)(lVar11 + 0x135);
    lVar10 = lVar11;
    if ((uVar1 & 1) == 0) {
      lVar10 = FUN_0406aaec();
      lVar11 = *(long *)(unaff_x19[4] + 0x20);
      uVar1 = *(ushort *)(lVar11 + 0x135);
    }
    uVar12 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x38);
    lVar10 = lVar11;
    if ((uVar1 & 1) == 0) {
      lVar10 = FUN_0406aaec();
      lVar11 = *(long *)(unaff_x19[4] + 0x20);
      uVar1 = *(ushort *)(lVar11 + 0x135);
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x38);
    if ((uVar1 & 1) == 0) {
      lVar11 = FUN_0406aaec();
    }
    puVar9 = unaff_x22;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x30) + 0x28)) {
      puVar9 = (undefined8 *)*unaff_x22;
    }
    pcVar16 = *(code **)(lVar10 + 0x10);
    unaff_x19[0xf] = lVar20;
    *(undefined8 **)(unaff_x29 + -0x30) = puVar9;
    *(long **)(unaff_x29 + -0x28) = unaff_x19 + 0xf;
    (*pcVar16)(uVar12,lVar10,lVar14,unaff_x29 + -0x30,unaff_x19 + 0x10);
    lVar10 = *(long *)PTR_DAT_08f8d238;
    unaff_x19[0x17] = unaff_x19[0x11];
    unaff_x19[0x16] = unaff_x19[0x10];
    unaff_x19[0x19] = unaff_x19[0x13];
    unaff_x19[0x18] = unaff_x19[0x12];
    lVar10 = *(long *)(lVar10 + 0x20);
    unaff_x19[0x1a] = unaff_x19[0x14];
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
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
      lVar11 = unaff_x19[0x1d];
      lVar14 = unaff_x19[0x1c];
      lVar22 = unaff_x19[0x1f];
      lVar20 = unaff_x19[0x1e];
      *unaff_x28 = 2;
      *(undefined8 *)(unaff_x28 + 0x2c) = *(undefined8 *)(unaff_x29 + -0x60);
      lVar10 = unaff_x19[4];
      *(long *)(unaff_x28 + 0x26) = lVar11;
      *(long *)(unaff_x28 + 0x24) = lVar14;
      *(long *)(unaff_x28 + 0x2a) = lVar22;
      *(long *)(unaff_x28 + 0x28) = lVar20;
      lVar14 = *(long *)(lVar10 + 0x20);
      uVar1 = *(ushort *)(lVar14 + 0x135);
      lVar10 = lVar14;
      if ((uVar1 & 1) == 0) {
        lVar10 = FUN_0406aaec();
        lVar14 = *(long *)(unaff_x19[4] + 0x20);
        uVar1 = *(ushort *)(lVar14 + 0x135);
      }
      pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x40);
      if ((uVar1 & 1) == 0) {
        lVar14 = FUN_0406aaec();
      }
      (*pcVar16)(unaff_x28 + 2,unaff_x29 + -0x80,unaff_x28,
                 *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x40));
      goto 
      System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_AsyncGPUReadbackRequest>>>>___cctor
      ;
    }
    plVar18 = *(long **)(unaff_x29 + -0x80);
    if (plVar18 == (long *)0x0) {
      uVar13 = *(undefined4 *)((long)unaff_x19 + 0xe9);
      uVar15 = *(undefined4 *)(unaff_x29 + -0x74);
      cVar2 = *(char *)(unaff_x29 + -0x78);
      lVar14 = unaff_x19[0x1f];
      lVar10 = unaff_x19[0x1e];
    }
    else {
      uVar4 = *(undefined2 *)(unaff_x29 + -0x60);
      lVar10 = *(long *)(*unaff_x21 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0406aaec();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0406aaec(lVar10);
      }
      lVar14 = *plVar18;
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar10) {
            puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0705864c;
          }
          uVar8 = uVar8 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_0406ae20(plVar18,lVar10,0);
LAB_0705864c:
      (*(code *)*puVar9)(unaff_x29 + -0x30,plVar18,uVar4,puVar9[1]);
      uVar13 = *(undefined4 *)((long)unaff_x19 + 0x131);
      uVar15 = *(undefined4 *)(unaff_x29 + -0x2c);
      cVar2 = *(char *)(unaff_x29 + -0x30);
      lVar14 = unaff_x19[0x28];
      lVar10 = unaff_x19[0x27];
    }
    *(undefined4 *)(unaff_x19 + 0x10) = uVar13;
    *(undefined4 *)((long)unaff_x19 + 0x83) = uVar15;
    unaff_x19[3] = lVar14;
    unaff_x19[2] = lVar10;
    *(int *)(unaff_x19 + 0xb) = (int)unaff_x19[0x10];
    *(undefined4 *)((long)unaff_x19 + 0x5b) = uVar15;
    puVar21 = unaff_x28;
    if (cVar2 != '\0') {
      lVar14 = unaff_x19[3];
      lVar10 = unaff_x19[2];
      cVar3 = *(char *)(unaff_x28 + 0x12);
      uVar13 = unaff_x28[0x13];
      iVar7 = *(int *)(*(long *)PTR_DAT_08f6fad0 + 0xe4);
      uVar12 = *(undefined8 *)(unaff_x28 + 0x14);
      uVar19 = *(undefined8 *)(unaff_x28 + 0x16);
      *(undefined4 *)(unaff_x19 + 0xe) = *(undefined4 *)((long)unaff_x28 + 0x49);
      *(undefined4 *)((long)unaff_x19 + 0x73) = uVar13;
      if (iVar7 == 0) {
        thunk_FUN_0408f364();
      }
      bVar6 = FUN_07544208(uVar12,uVar19,lVar10,lVar14,0);
      puVar21 = (undefined4 *)unaff_x19[1];
      if ((cVar3 != '\0' & bVar6) != 0) {
        lVar10 = unaff_x19[0xb];
        uVar13 = *(undefined4 *)((long)unaff_x19 + 0x5b);
        lVar11 = unaff_x19[3];
        lVar14 = unaff_x19[2];
        *(char *)(puVar21 + 0x12) = cVar2;
        *(undefined4 *)((long)unaff_x28 + 0x49) = (int)lVar10;
        unaff_x28[0x13] = uVar13;
        *(long *)(puVar21 + 0x16) = lVar11;
        *(long *)(puVar21 + 0x14) = lVar14;
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
  plVar18 = *(long **)(unaff_x28 + 0x18);
  if (plVar18 == (long *)0x0) {

    System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_ValueTuple<object,_int,_int>>>>>__System_Collections_IEnumerator_Reset
    :
    plVar18 = *(long **)(unaff_x28 + 0x1a);
    if (plVar18 != (long *)0x0) {
      bVar6 = *(byte *)(*(long *)PTR_DAT_08f65af8 + 0x130);
      if ((*(byte *)(*plVar18 + 0x130) < bVar6) ||
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar6 * 8 + -8) != *(long *)PTR_DAT_08f65af8)
         ) {
        unaff_x19[1] = (long)unaff_x28;
        if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
          FUN_04031750(plVar18,unaff_x19[4]);
        }
        goto LAB_07058e9c;
      }
      lVar10 = FUN_07408528(plVar18,0);
      if (lVar10 == 0) {
        if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        goto LAB_07058e9c;
      }
      FUN_074085e8(lVar10,0);
    }
    plVar18 = (long *)(unaff_x28 + 0x1e);
    if (unaff_x28[0x1c] != 1) {
      *(undefined8 *)(unaff_x28 + 0x20) = 0;
      *(undefined8 *)(unaff_x28 + 0x22) = 0;
      *plVar18 = 0;
      plVar18 = (long *)(unaff_x28 + 0x12);
      *(undefined8 *)(unaff_x28 + 0x1a) = 0;
    }
    lVar11 = plVar18[1];
    lVar14 = *plVar18;
    lVar10 = plVar18[2];
    plVar18 = *(long **)(unaff_x28 + 2);
    *unaff_x28 = 0xfffffffe;
    unaff_x19[0x23] = lVar11;
    unaff_x19[0x22] = lVar14;
    *(long *)(unaff_x29 + -0x40) = lVar10;
    *(undefined8 *)(unaff_x28 + 0x18) = 0;
    if (plVar18 == (long *)0x0) {
      lVar10 = unaff_x19[0x22];
      uVar12 = *(undefined8 *)(unaff_x29 + -0x40);
      *(long *)(unaff_x28 + 8) = unaff_x19[0x23];
      *(long *)(unaff_x28 + 6) = lVar10;
      *(undefined8 *)(unaff_x28 + 10) = uVar12;
    }
    else {
      lVar10 = *(long *)(*(long *)PTR_DAT_08f8d138 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0406aaec();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0406aaec(lVar10);
      }
      lVar14 = *plVar18;
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar10) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar17 + 2) * 0x10 + 0x138);
            goto LAB_07058b5c;
          }
          uVar8 = uVar8 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_0406ae20(plVar18,lVar10,2);
LAB_07058b5c:
      lVar10 = *(long *)(unaff_x29 + -0x40);
      pcVar16 = (code *)*puVar9;
      unaff_x19[0x11] = unaff_x19[0x23];
      unaff_x19[0x10] = unaff_x19[0x22];
      unaff_x19[0x12] = lVar10;
      (*pcVar16)(plVar18,unaff_x19 + 0x10,puVar9[1]);
    }
  }
  else {
    lVar10 = *plVar18;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08f8cf80) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_07058bc0;
        }
        uVar8 = uVar8 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_0406ae20(plVar18,*(long *)PTR_DAT_08f8cf80,0);
LAB_07058bc0:
    auVar23 = (*(code *)*puVar9)(plVar18,puVar9[1]);
    puVar5 = PTR_DAT_08f67a58;
    plVar18 = auVar23._0_8_;
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
    if (plVar18 == (long *)0x0) {
LAB_07057b38:
      if (DAT_09539e0e == '\0') {
        FUN_0403162c(PTR_DAT_08f67c08);
        DAT_09539e0e = '\x01';
      }
      plVar18 = (long *)unaff_x19[8];
      if (plVar18 != (long *)0x0) {
        lVar14 = *plVar18;
        lVar10 = unaff_x19[9];
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08f67c08) {
              puVar9 = (undefined8 *)(lVar14 + (long)(*piVar17 + 2) * 0x10 + 0x138);
              goto LAB_07057d18;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_0406ae20(plVar18,*(long *)PTR_DAT_08f67c08,2);
LAB_07057d18:
        (*(code *)*puVar9)(plVar18,(short)lVar10,puVar9[1]);
      }
      goto 
      System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_ValueTuple<object,_int,_int>>>>>__System_Collections_IEnumerator_Reset
      ;
    }
    lVar10 = *plVar18;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08f67c08) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_07058c98;
        }
        uVar8 = uVar8 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_0406ae20(plVar18,*(long *)PTR_DAT_08f67c08,0);
LAB_07058c98:
    iVar7 = (*(code *)*puVar9)(plVar18,auVar23._8_8_ & 0xffffffff,puVar9[1]);
    if (iVar7 != 0) goto LAB_07057b38;
    lVar11 = unaff_x19[9];
    lVar14 = unaff_x19[8];
    *unaff_x28 = 4;
    lVar10 = unaff_x19[4];
    *(long *)(unaff_x28 + 0x34) = lVar11;
    *(long *)(unaff_x28 + 0x32) = lVar14;
    lVar14 = *(long *)(lVar10 + 0x20);
    uVar1 = *(ushort *)(lVar14 + 0x135);
    lVar10 = lVar14;
    if ((uVar1 & 1) == 0) {
      lVar10 = FUN_0406aaec();
      lVar14 = *(long *)(unaff_x19[4] + 0x20);
      uVar1 = *(ushort *)(lVar14 + 0x135);
    }
    pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x60);
    if ((uVar1 & 1) == 0) {
      lVar14 = FUN_0406aaec();
    }
    (*pcVar16)(unaff_x28 + 2,unaff_x19 + 8,unaff_x28,
               *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x60));
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


