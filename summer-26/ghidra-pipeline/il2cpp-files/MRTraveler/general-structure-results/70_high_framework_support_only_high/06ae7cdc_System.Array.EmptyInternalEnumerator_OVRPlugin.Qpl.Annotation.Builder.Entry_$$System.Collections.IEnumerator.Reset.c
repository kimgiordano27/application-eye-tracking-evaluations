/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 06ae7cdc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__System_Collections_IEnumerator_Reset
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long in_x9;
  int *in_x10;
  int *piVar13;
  undefined4 *unaff_x19;
  long unaff_x20;
  code *pcVar14;
  undefined8 *unaff_x21;
  long *plVar15;
  long *plVar16;
  long unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  double dVar17;
  undefined1 auVar18 [16];
  
  do {
    in_x9 = in_x9 + -1;
    piVar13 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar7 = (undefined8 *)FUN_03cf1348();
      goto LAB_06ae7d08;
    }
    plVar16 = (long *)(in_x10 + 2);
    in_x10 = piVar13;
  } while (*plVar16 != param_3);
  puVar7 = (undefined8 *)(param_1 + (long)(*piVar13 + 1) * 0x10 + 0x138);
LAB_06ae7d08:
  auVar18 = (*(code *)*puVar7)();
  if ((*(byte *)(*(long *)(*unaff_x27 + 0x20) + 0x135) & 1) == 0) {
    FUN_03cf1244();
  }
  *(undefined1 (*) [16])(unaff_x29 + -0x38) = auVar18;
  thunk_FUN_03d233cc(unaff_x29 + -0x38,0);
  uVar10 = *unaff_x28;
  *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x38);
  *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x30);
  uVar8 = FUN_036f7d54(unaff_x29 + -0x50,uVar10);
  if ((uVar8 & 1) != 0) {
    plVar16 = *(long **)(unaff_x29 + -0x50);
    if (plVar16 == (long *)0x0) {
      if (*(char *)(unaff_x29 + -0x48) == '\0') goto LAB_06ae7dd8;
    }
    else {
      uVar3 = *(undefined2 *)(unaff_x29 + -0x46);
      lVar9 = *(long *)(*unaff_x26 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03cf1244();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03cf1244(lVar9);
      }
      lVar11 = *plVar16;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar9) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto 
            Cysharp_Threading_Tasks_Internal_EmptyObserver<__Il2CppFullySharedGenericType>__OnNext;
          }
          uVar8 = uVar8 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348(plVar16,lVar9,0);
Cysharp_Threading_Tasks_Internal_EmptyObserver<__Il2CppFullySharedGenericType>__OnNext:
      uVar8 = (*(code *)*puVar7)(plVar16,uVar3,puVar7[1]);
      if ((uVar8 & 1) == 0) {
LAB_06ae7dd8:
        if (DAT_09411c9e == '\0') {
          FUN_03c8f898(PTR_DAT_08e71970);
          FUN_03c8f898(PTR_DAT_08e82ff8);
          DAT_09411c9e = '\x01';
        }
        uVar10 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e71970);
        FUN_07100530(uVar10,*(undefined8 *)PTR_DAT_08e82ff8,0);
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar10);
      }
    }
    plVar16 = *(long **)(unaff_x19 + 0x10);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar9 = *(long *)(unaff_x20 + 0x20);
    lVar11 = *(long *)(unaff_x19 + 0xc);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03cf1244();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x18);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03cf1244(lVar9);
    }
    lVar12 = *plVar16;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar9) {
          lVar9 = lVar12 + (long)*piVar13 * 0x10 + 0x138;
          goto LAB_06ae7f18;
        }
        uVar8 = uVar8 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar8 != 0);
    }
    lVar9 = FUN_03cf1348(plVar16,lVar9,0);
LAB_06ae7f18:
    *(undefined8 **)(unaff_x29 + -0x40) = unaff_x21;
    lVar9 = *(long *)(lVar9 + 8);
    (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar16,unaff_x29 + -0x40);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar12 = *(long *)(unaff_x20 + 0x20);
    uVar2 = *(ushort *)(lVar12 + 0x135);
    lVar9 = lVar12;
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_03cf1244();
      lVar12 = *(long *)(unaff_x20 + 0x20);
      uVar2 = *(ushort *)(lVar12 + 0x135);
    }
    uVar10 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x38);
    lVar9 = lVar12;
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_03cf1244();
      lVar12 = *(long *)(unaff_x20 + 0x20);
      uVar2 = *(ushort *)(lVar12 + 0x135);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x38);
    if ((uVar2 & 1) == 0) {
      lVar12 = FUN_03cf1244();
    }
    puVar7 = unaff_x21;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x30) + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x21;
    }
    *(undefined8 **)(unaff_x29 + -0x40) = puVar7;
    (**(code **)(lVar9 + 0x10))(uVar10,lVar9,lVar11,unaff_x29 + -0x40,unaff_x29 + -0x38);
    dVar17 = *(double *)(unaff_x29 + -0x38);
    do {
      *(double *)(unaff_x19 + 0xe) = dVar17;
      do {
        plVar16 = *(long **)(unaff_x19 + 0x10);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar9 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_03cf1244();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x18);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_03cf1244(lVar9);
        }
        lVar11 = *plVar16;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar9) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_06ae8228;
            }
            uVar8 = uVar8 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_03cf1348(plVar16,lVar9,1);
LAB_06ae8228:
        auVar18 = (*(code *)*puVar7)(plVar16,puVar7[1]);
        if ((*(byte *)(*(long *)(*unaff_x27 + 0x20) + 0x135) & 1) == 0) {
          FUN_03cf1244();
        }
        *(undefined1 (*) [16])(unaff_x29 + -0x38) = auVar18;
        thunk_FUN_03d233cc(unaff_x29 + -0x38,0);
        uVar10 = *unaff_x28;
        *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x38);
        *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x30);
        uVar8 = FUN_036f7d54(unaff_x29 + -0x50,uVar10);
        if ((uVar8 & 1) == 0) {
          *unaff_x19 = 1;
          uVar10 = *(undefined8 *)(unaff_x29 + -0x50);
          *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x29 + -0x48);
          *(undefined8 *)(unaff_x19 + 0x16) = uVar10;
          thunk_FUN_03d233cc(unaff_x19 + 0x16,0);
          lVar9 = *(long *)(unaff_x20 + 0x20);
          uVar2 = *(ushort *)(lVar9 + 0x135);
          if ((uVar2 & 1) == 0) {
            lVar9 = FUN_03cf1244();
            uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
          }
          pcVar14 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x48);
          if ((uVar2 & 1) == 0) {
            FUN_03cf1244();
          }
          (*pcVar14)(unaff_x19 + 2,unaff_x29 + -0x50);
          goto FUN_06ae86b0;
        }
        plVar16 = *(long **)(unaff_x29 + -0x50);
        if (plVar16 == (long *)0x0) {
          if (*(char *)(unaff_x29 + -0x48) == '\0') goto LAB_06ae831c;
        }
        else {
          uVar3 = *(undefined2 *)(unaff_x29 + -0x46);
          lVar9 = *(long *)(*unaff_x26 + 0x20);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_03cf1244();
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_03cf1244(lVar9);
          }
          lVar11 = *plVar16;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar9) {
                puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_06ae8308;
              }
              uVar8 = uVar8 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 != 0);
          }
          puVar7 = (undefined8 *)FUN_03cf1348(plVar16,lVar9,0);
LAB_06ae8308:
          uVar8 = (*(code *)*puVar7)(plVar16,uVar3,puVar7[1]);
          if ((uVar8 & 1) == 0) {
LAB_06ae831c:
            plVar16 = *(long **)(unaff_x19 + 0x10);
            if (plVar16 == (long *)0x0) goto LAB_06ae858c;
            lVar9 = *plVar16;
            uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar8 == 0) goto LAB_06ae835c;
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto LAB_06ae8344;
          }
        }
        plVar16 = *(long **)(unaff_x19 + 0x10);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar9 = *(long *)(unaff_x20 + 0x20);
        lVar11 = *(long *)(unaff_x19 + 0xc);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_03cf1244();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x18);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_03cf1244(lVar9);
        }
        lVar12 = *plVar16;
        uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar8 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar9) {
              lVar9 = lVar12 + (long)*piVar13 * 0x10 + 0x138;
              goto LAB_06ae80d4;
            }
            uVar8 = uVar8 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar8 != 0);
        }
        lVar9 = FUN_03cf1348(plVar16,lVar9,0);
LAB_06ae80d4:
        *(undefined8 **)(unaff_x29 + -0x40) = unaff_x21;
        lVar9 = *(long *)(lVar9 + 8);
        (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar16,unaff_x29 + -0x40);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar12 = *(long *)(unaff_x20 + 0x20);
        uVar2 = *(ushort *)(lVar12 + 0x135);
        lVar9 = lVar12;
        if ((uVar2 & 1) == 0) {
          lVar9 = FUN_03cf1244();
          lVar12 = *(long *)(unaff_x20 + 0x20);
          uVar2 = *(ushort *)(lVar12 + 0x135);
        }
        uVar10 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x38);
        lVar9 = lVar12;
        if ((uVar2 & 1) == 0) {
          lVar9 = FUN_03cf1244();
          lVar12 = *(long *)(unaff_x20 + 0x20);
          uVar2 = *(ushort *)(lVar12 + 0x135);
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x38);
        if ((uVar2 & 1) == 0) {
          lVar12 = FUN_03cf1244();
        }
        puVar7 = unaff_x21;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x30) + 0x28)) {
          puVar7 = (undefined8 *)*unaff_x21;
        }
        *(undefined8 **)(unaff_x29 + -0x40) = puVar7;
        (**(code **)(lVar9 + 0x10))(uVar10,lVar9,lVar11,unaff_x29 + -0x40,unaff_x29 + -0x38);
        dVar17 = *(double *)(unaff_x29 + -0x38);
      } while (*(double *)(unaff_x19 + 0xe) <= dVar17);
    } while( true );
  }
  *unaff_x19 = 0;
  uVar10 = *(undefined8 *)(unaff_x29 + -0x50);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x29 + -0x48);
  *(undefined8 *)(unaff_x19 + 0x16) = uVar10;
  thunk_FUN_03d233cc(unaff_x19 + 0x16,0);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(ushort *)(lVar9 + 0x135);
  if ((uVar2 & 1) == 0) {
    lVar9 = FUN_03cf1244();
    uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
  }
  pcVar14 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x48);
  if ((uVar2 & 1) == 0) {
    FUN_03cf1244();
  }
  (*pcVar14)(unaff_x19 + 2,unaff_x29 + -0x50);
  goto FUN_06ae86b0;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar13 = piVar13 + 4;
    if (uVar8 == 0) break;
LAB_06ae8344:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08e82fe8) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_06ae83f0;
    }
  }
LAB_06ae835c:
  puVar7 = (undefined8 *)FUN_03cf1348(plVar16,*(long *)PTR_DAT_08e82fe8,0);
LAB_06ae83f0:
  auVar18 = (*(code *)*puVar7)(plVar16,puVar7[1]);
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
  plVar16 = *(long **)(unaff_x29 + -0x60);
  if (plVar16 != (long *)0x0) {
    lVar9 = *plVar16;
    uVar3 = *(undefined2 *)(unaff_x29 + -0x58);
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar8 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08e69648) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06ae84e4;
        }
        uVar8 = uVar8 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar16,*(long *)PTR_DAT_08e69648,0);
LAB_06ae84e4:
    iVar6 = (*(code *)*puVar7)(plVar16,uVar3,puVar7[1]);
    if (iVar6 == 0) {
      *unaff_x19 = 2;
      uVar10 = *(undefined8 *)(unaff_x29 + -0x60);
      *(undefined8 *)(unaff_x19 + 0x1c) = *(undefined8 *)(unaff_x29 + -0x58);
      *(undefined8 *)(unaff_x19 + 0x1a) = uVar10;
      thunk_FUN_03d233cc(unaff_x19 + 0x1a,0);
      lVar9 = *(long *)(unaff_x20 + 0x20);
      uVar2 = *(ushort *)(lVar9 + 0x135);
      if ((uVar2 & 1) == 0) {
        lVar9 = FUN_03cf1244();
        uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      }
      pcVar14 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x58);
      if ((uVar2 & 1) == 0) {
        FUN_03cf1244();
      }
      (*pcVar14)(unaff_x19 + 2,unaff_x29 + -0x60);
      goto FUN_06ae86b0;
    }
  }
  if (DAT_0940ffef == '\0') {
    FUN_03c8f898(PTR_DAT_08e69648);
    DAT_0940ffef = '\x01';
  }
  plVar16 = *(long **)(unaff_x29 + -0x60);
  if (plVar16 != (long *)0x0) {
    lVar9 = *plVar16;
    uVar3 = *(undefined2 *)(unaff_x29 + -0x58);
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar8 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08e69648) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_06ae857c;
        }
        uVar8 = uVar8 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar16,*(long *)PTR_DAT_08e69648,2);
LAB_06ae857c:
    (*(code *)*puVar7)(plVar16,uVar3,puVar7[1]);
  }
LAB_06ae858c:
  plVar15 = (long *)(unaff_x19 + 0x12);
  plVar16 = (long *)*plVar15;
  if (plVar16 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_08e695a0 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar16 + 0x130)) &&
       (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_08e695a0))
    {
      lVar9 = FUN_0701b8d8(plVar16,0);
      if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0701b998(lVar9,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc();
  }
  *plVar15 = 0;
  thunk_FUN_03d233cc(plVar15,0);
  uVar10 = *(undefined8 *)(unaff_x19 + 0xe);
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  thunk_FUN_03d233cc(unaff_x19 + 0x10,0);
  plVar16 = *(long **)(unaff_x19 + 2);
  if (plVar16 == (long *)0x0) {
    *(undefined8 *)(unaff_x19 + 6) = uVar10;
  }
  else {
    lVar9 = *(long *)(*(long *)PTR_DAT_08e83010 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03cf1244();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03cf1244(lVar9);
    }
    lVar11 = *plVar16;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar9) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_06ae86a0;
        }
        uVar8 = uVar8 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar16,lVar9,2);
LAB_06ae86a0:
    (*(code *)*puVar7)(uVar10,plVar16,puVar7[1]);
  }
FUN_06ae86b0:
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


