/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$MoveNext
ENTRY_POINT: 06ae7c78
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__MoveNext
               (undefined1 param_1 [16])

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 in_w8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 *unaff_x19;
  long unaff_x20;
  code *pcVar13;
  undefined8 *unaff_x21;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  double dVar17;
  undefined1 auVar18 [16];
  
  *(long *)(unaff_x29 + -0x48) = param_1._8_8_;
  *(long *)(unaff_x29 + -0x50) = param_1._0_8_;
  *(undefined8 *)(unaff_x19 + 0x16) = 0;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  *unaff_x19 = in_w8;
  plVar15 = *(long **)(unaff_x29 + -0x50);
  if (plVar15 == (long *)0x0) {
    if (*(char *)(unaff_x29 + -0x48) == '\0') goto LAB_06ae7dd8;
  }
  else {
    uVar3 = *(undefined2 *)(unaff_x29 + -0x46);
    lVar7 = *(long *)(*unaff_x26 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03cf1244();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03cf1244(lVar7);
    }
    lVar9 = *plVar15;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar7) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto 
          Cysharp_Threading_Tasks_Internal_EmptyObserver<__Il2CppFullySharedGenericType>__OnNext;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar15,lVar7,0);
Cysharp_Threading_Tasks_Internal_EmptyObserver<__Il2CppFullySharedGenericType>__OnNext:
    uVar11 = (*(code *)*puVar8)(plVar15,uVar3,puVar8[1]);
    if ((uVar11 & 1) == 0) {
LAB_06ae7dd8:
      if (DAT_09411c9e == '\0') {
        FUN_03c8f898(PTR_DAT_08e71970);
        FUN_03c8f898(PTR_DAT_08e82ff8);
        DAT_09411c9e = '\x01';
      }
      uVar16 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e71970);
      FUN_07100530(uVar16,*(undefined8 *)PTR_DAT_08e82ff8,0);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar16);
    }
  }
  plVar15 = *(long **)(unaff_x19 + 0x10);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar9 = *(long *)(unaff_x19 + 0xc);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03cf1244();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x18);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03cf1244(lVar7);
  }
  lVar10 = *plVar15;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar7) {
        lVar7 = lVar10 + (long)*piVar12 * 0x10 + 0x138;
        goto LAB_06ae7f18;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  lVar7 = FUN_03cf1348(plVar15,lVar7,0);
LAB_06ae7f18:
  *(undefined8 **)(unaff_x29 + -0x40) = unaff_x21;
  lVar7 = *(long *)(lVar7 + 8);
  (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar15,unaff_x29 + -0x40);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar10 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(ushort *)(lVar10 + 0x135);
  lVar7 = lVar10;
  if ((uVar2 & 1) == 0) {
    lVar7 = FUN_03cf1244();
    lVar10 = *(long *)(unaff_x20 + 0x20);
    uVar2 = *(ushort *)(lVar10 + 0x135);
  }
  uVar16 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x38);
  lVar7 = lVar10;
  if ((uVar2 & 1) == 0) {
    lVar7 = FUN_03cf1244();
    lVar10 = *(long *)(unaff_x20 + 0x20);
    uVar2 = *(ushort *)(lVar10 + 0x135);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x38);
  if ((uVar2 & 1) == 0) {
    lVar10 = FUN_03cf1244();
  }
  puVar8 = unaff_x21;
  if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x30) + 0x28)) {
    puVar8 = (undefined8 *)*unaff_x21;
  }
  *(undefined8 **)(unaff_x29 + -0x40) = puVar8;
  (**(code **)(lVar7 + 0x10))(uVar16,lVar7,lVar9,unaff_x29 + -0x40,unaff_x29 + -0x38);
  dVar17 = *(double *)(unaff_x29 + -0x38);
  do {
    *(double *)(unaff_x19 + 0xe) = dVar17;
    do {
      plVar15 = *(long **)(unaff_x19 + 0x10);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar7 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03cf1244();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x18);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03cf1244(lVar7);
      }
      lVar9 = *plVar15;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar7) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_06ae8228;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348(plVar15,lVar7,1);
LAB_06ae8228:
      auVar18 = (*(code *)*puVar8)(plVar15,puVar8[1]);
      if ((*(byte *)(*(long *)(*unaff_x27 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      *(undefined1 (*) [16])(unaff_x29 + -0x38) = auVar18;
      thunk_FUN_03d233cc(unaff_x29 + -0x38,0);
      uVar16 = *unaff_x28;
      *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x38);
      *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x30);
      uVar11 = FUN_036f7d54(unaff_x29 + -0x50,uVar16);
      if ((uVar11 & 1) == 0) {
        *unaff_x19 = 1;
        uVar16 = *(undefined8 *)(unaff_x29 + -0x50);
        *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x29 + -0x48);
        *(undefined8 *)(unaff_x19 + 0x16) = uVar16;
        thunk_FUN_03d233cc(unaff_x19 + 0x16,0);
        lVar7 = *(long *)(unaff_x20 + 0x20);
        uVar2 = *(ushort *)(lVar7 + 0x135);
        if ((uVar2 & 1) == 0) {
          lVar7 = FUN_03cf1244();
          uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        }
        pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x48);
        if ((uVar2 & 1) == 0) {
          FUN_03cf1244();
        }
        (*pcVar13)(unaff_x19 + 2,unaff_x29 + -0x50);
        goto FUN_06ae86b0;
      }
      plVar15 = *(long **)(unaff_x29 + -0x50);
      if (plVar15 == (long *)0x0) {
        if (*(char *)(unaff_x29 + -0x48) == '\0') goto LAB_06ae831c;
      }
      else {
        uVar3 = *(undefined2 *)(unaff_x29 + -0x46);
        lVar7 = *(long *)(*unaff_x26 + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03cf1244();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03cf1244(lVar7);
        }
        lVar9 = *plVar15;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar7) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_06ae8308;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_03cf1348(plVar15,lVar7,0);
LAB_06ae8308:
        uVar11 = (*(code *)*puVar8)(plVar15,uVar3,puVar8[1]);
        if ((uVar11 & 1) == 0) {
LAB_06ae831c:
          plVar15 = *(long **)(unaff_x19 + 0x10);
          if (plVar15 == (long *)0x0) goto LAB_06ae858c;
          lVar7 = *plVar15;
          uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar11 == 0) goto LAB_06ae835c;
          piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_06ae8344;
        }
      }
      plVar15 = *(long **)(unaff_x19 + 0x10);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar7 = *(long *)(unaff_x20 + 0x20);
      lVar9 = *(long *)(unaff_x19 + 0xc);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03cf1244();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x18);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03cf1244(lVar7);
      }
      lVar10 = *plVar15;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar7) {
            lVar7 = lVar10 + (long)*piVar12 * 0x10 + 0x138;
            goto LAB_06ae80d4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      lVar7 = FUN_03cf1348(plVar15,lVar7,0);
LAB_06ae80d4:
      *(undefined8 **)(unaff_x29 + -0x40) = unaff_x21;
      lVar7 = *(long *)(lVar7 + 8);
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar15,unaff_x29 + -0x40);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar10 = *(long *)(unaff_x20 + 0x20);
      uVar2 = *(ushort *)(lVar10 + 0x135);
      lVar7 = lVar10;
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_03cf1244();
        lVar10 = *(long *)(unaff_x20 + 0x20);
        uVar2 = *(ushort *)(lVar10 + 0x135);
      }
      uVar16 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x38);
      lVar7 = lVar10;
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_03cf1244();
        lVar10 = *(long *)(unaff_x20 + 0x20);
        uVar2 = *(ushort *)(lVar10 + 0x135);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x38);
      if ((uVar2 & 1) == 0) {
        lVar10 = FUN_03cf1244();
      }
      puVar8 = unaff_x21;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x30) + 0x28)) {
        puVar8 = (undefined8 *)*unaff_x21;
      }
      *(undefined8 **)(unaff_x29 + -0x40) = puVar8;
      (**(code **)(lVar7 + 0x10))(uVar16,lVar7,lVar9,unaff_x29 + -0x40,unaff_x29 + -0x38);
      dVar17 = *(double *)(unaff_x29 + -0x38);
    } while (*(double *)(unaff_x19 + 0xe) <= dVar17);
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_06ae8344:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e82fe8) {
      puVar8 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_06ae83f0;
    }
  }
LAB_06ae835c:
  puVar8 = (undefined8 *)FUN_03cf1348(plVar15,*(long *)PTR_DAT_08e82fe8,0);
LAB_06ae83f0:
  auVar18 = (*(code *)*puVar8)(plVar15,puVar8[1]);
  puVar4 = PTR_DAT_08e69640;
  if (*(int *)(*(long *)PTR_DAT_08e69640 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  *(undefined1 (*) [16])(unaff_x29 + -0x28) = auVar18;
  thunk_FUN_03d233cc(unaff_x29 + -0x28,0);
  cVar5 = DAT_0940ffed;
  *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x28);
  *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0x20);
  if (cVar5 == '\0') {
    FUN_03c8f898(PTR_DAT_08e69640);
    DAT_0940ffed = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if (DAT_0940ffee == '\0') {
    FUN_03c8f898(PTR_DAT_08e69648);
    DAT_0940ffee = '\x01';
  }
  plVar15 = *(long **)(unaff_x29 + -0x60);
  if (plVar15 != (long *)0x0) {
    lVar7 = *plVar15;
    uVar3 = *(undefined2 *)(unaff_x29 + -0x58);
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e69648) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06ae84e4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar15,*(long *)PTR_DAT_08e69648,0);
LAB_06ae84e4:
    iVar6 = (*(code *)*puVar8)(plVar15,uVar3,puVar8[1]);
    if (iVar6 == 0) {
      *unaff_x19 = 2;
      uVar16 = *(undefined8 *)(unaff_x29 + -0x60);
      *(undefined8 *)(unaff_x19 + 0x1c) = *(undefined8 *)(unaff_x29 + -0x58);
      *(undefined8 *)(unaff_x19 + 0x1a) = uVar16;
      thunk_FUN_03d233cc(unaff_x19 + 0x1a,0);
      lVar7 = *(long *)(unaff_x20 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_03cf1244();
        uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      }
      pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x58);
      if ((uVar2 & 1) == 0) {
        FUN_03cf1244();
      }
      (*pcVar13)(unaff_x19 + 2,unaff_x29 + -0x60);
      goto FUN_06ae86b0;
    }
  }
  if (DAT_0940ffef == '\0') {
    FUN_03c8f898(PTR_DAT_08e69648);
    DAT_0940ffef = '\x01';
  }
  plVar15 = *(long **)(unaff_x29 + -0x60);
  if (plVar15 != (long *)0x0) {
    lVar7 = *plVar15;
    uVar3 = *(undefined2 *)(unaff_x29 + -0x58);
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e69648) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_06ae857c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar15,*(long *)PTR_DAT_08e69648,2);
LAB_06ae857c:
    (*(code *)*puVar8)(plVar15,uVar3,puVar8[1]);
  }
LAB_06ae858c:
  plVar14 = (long *)(unaff_x19 + 0x12);
  plVar15 = (long *)*plVar14;
  if (plVar15 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_08e695a0 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar15 + 0x130)) &&
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_08e695a0))
    {
      lVar7 = FUN_0701b8d8(plVar15,0);
      if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0701b998(lVar7,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc();
  }
  *plVar14 = 0;
  thunk_FUN_03d233cc(plVar14,0);
  uVar16 = *(undefined8 *)(unaff_x19 + 0xe);
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  thunk_FUN_03d233cc(unaff_x19 + 0x10,0);
  plVar15 = *(long **)(unaff_x19 + 2);
  if (plVar15 == (long *)0x0) {
    *(undefined8 *)(unaff_x19 + 6) = uVar16;
  }
  else {
    lVar7 = *(long *)(*(long *)PTR_DAT_08e83010 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03cf1244();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03cf1244(lVar7);
    }
    lVar9 = *plVar15;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar7) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_06ae86a0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar15,lVar7,2);
LAB_06ae86a0:
    (*(code *)*puVar8)(uVar16,plVar15,puVar8[1]);
  }
FUN_06ae86b0:
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


