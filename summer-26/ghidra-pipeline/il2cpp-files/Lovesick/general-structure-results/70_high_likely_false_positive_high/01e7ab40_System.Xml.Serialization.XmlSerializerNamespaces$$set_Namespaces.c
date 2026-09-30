/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializerNamespaces$$set_Namespaces
ENTRY_POINT: 01e7ab40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x01e7a4b8) */
/* WARNING: Removing unreachable block (ram,0x01e7a844) */
/* WARNING: Removing unreachable block (ram,0x01e7a17c) */

void System_Xml_Serialization_XmlSerializerNamespaces__set_Namespaces(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long lVar16;
  long *unaff_x27;
  long unaff_x28;
  long *unaff_x29;
  undefined1 auVar17 [16];
  undefined8 in_stack_00000010;
  undefined1 uStack0000000000000018;
  undefined1 uStack000000000000001c;
  
  plVar12 = (long *)__cxa_begin_catch();
  lVar16 = *plVar12;
  __cxa_end_catch();
  plVar12 = (long *)thunk_FUN_00d6225c();
  if (plVar12 != (long *)0x0) {
    lVar13 = *plVar12;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x27) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01e79f10;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar12,*unaff_x27,0);
LAB_01e79f10:
    (*(code *)*puVar8)(plVar12,puVar8[1]);
  }
  if (lVar16 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00dbe778(lVar16);
  }
  if (((*(long *)(unaff_x28 + 0x58) != 0) &&
      (lVar16 = FUN_01eb7fd8(*(long *)(unaff_x28 + 0x58),0), lVar16 != 0)) &&
     (plVar12 = (long *)FUN_01ec15c8(lVar16,0), plVar12 != (long *)0x0)) {
    lVar16 = *plVar12;
    uVar14 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x29) {
          puVar8 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01e79f90;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar12,*unaff_x29,0);
LAB_01e79f90:
    plVar12 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
    puVar5 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar4 = Method_System_Collections_Generic_List<WeakReference>_Clear__;
    puVar3 = Method_OVRObjectPool_ListScope<OVRAnchor_TrackableType>__ctor__;
    puVar2 = SceneSelect_<ButtonHoldCorourtine>d__26_TypeInfo;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar13 = *plVar12;
      lVar16 = *(long *)puVar5;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar16) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01e7a014;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar12,lVar16,0);
LAB_01e7a014:
      uVar14 = (*(code *)*puVar8)(plVar12,puVar8[1]);
      if ((uVar14 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*unaff_x27);
        if (plVar12 == (long *)0x0) goto LAB_01e7a170;
        lVar16 = *plVar12;
        uVar14 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar14 == 0) goto LAB_01e7a148;
        piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        goto LAB_01e7a130;
      }
      lVar13 = *plVar12;
      lVar16 = *(long *)puVar5;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar16) {
            puVar8 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_01e7a074;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar12,lVar16,1);
LAB_01e7a074:
      plVar9 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar4 + 300);
        if ((*(byte *)(*plVar9 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar9);
        }
      }
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (plVar9[0x10] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      in_stack_00000010._4_1_ = 1;
      FUN_01299e64(*(long *)(unaff_x19 + 0x48),*(undefined8 *)(plVar9[0x10] + 0x18),
                   (long)&stack0x00000010 + 4,*(undefined8 *)puVar3);
      if (*(long *)(unaff_x19 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0129a054(*(long *)(unaff_x19 + 0x50),plVar9[0x10],plVar9[0x13],*(undefined8 *)puVar2);
    } while( true );
  }
  goto LAB_01e7a820;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_01e7a130:
    if (*(long *)(piVar15 + -2) == *unaff_x27) {
      puVar8 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_01e7a164;
    }
  }
LAB_01e7a148:
  puVar8 = (undefined8 *)FUN_00d59724(plVar12,*unaff_x27,0);
LAB_01e7a164:
  (*(code *)*puVar8)(plVar12,puVar8[1]);
LAB_01e7a170:
  if (((*(long *)(unaff_x28 + 0x58) != 0) &&
      (lVar16 = FUN_01eb80b0(*(long *)(unaff_x28 + 0x58),0), lVar16 != 0)) &&
     (plVar12 = (long *)FUN_01ec15c8(lVar16,0), plVar12 != (long *)0x0)) {
    lVar16 = *plVar12;
    uVar14 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x29) {
          puVar8 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01e7a1f0;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar12,*unaff_x29,0);
LAB_01e7a1f0:
    plVar12 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
    puVar6 = StringLiteral_270;
    puVar5 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar4 = 
    Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
    ;
    puVar3 = Method_OVRPassthroughLayer_SetColorMapMonochromatic__;
    puVar2 = Method_OVRObjectPool_ListScope<OVRAnchor_TrackableType>__ctor__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
LAB_01e7a234:
    lVar13 = *plVar12;
    lVar16 = *(long *)puVar5;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar16) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01e7a280;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar12,lVar16,0);
LAB_01e7a280:
    uVar14 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    puVar7 = StringLiteral_10310;
    if ((uVar14 & 1) != 0) {
      lVar13 = *plVar12;
      lVar16 = *(long *)puVar5;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar16) {
            puVar8 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_01e7a2e0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar12,lVar16,1);
LAB_01e7a2e0:
      plVar9 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar4 + 300);
        if ((*(byte *)(*plVar9 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar9);
        }
      }
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar13 = *(long *)(unaff_x19 + 0x48);
      lVar16 = FUN_01eca598(plVar9,0);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uStack0000000000000018 = 1;
      FUN_01299e64(lVar13,*(undefined8 *)(lVar16 + 0x18),&stack0x00000018,*(undefined8 *)puVar2);
      bVar1 = *(byte *)(*(long *)puVar3 + 300);
      if ((bVar1 <= *(byte *)(*plVar9 + 300)) &&
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3))
      goto LAB_01e7a3c0;
      goto LAB_01e7a384;
    }
    plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)StringLiteral_10310);
    puVar2 = Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__;
    if (plVar12 == (long *)0x0) goto LAB_01e7a4ac;
    lVar16 = *plVar12;
    uVar14 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar14 == 0) goto LAB_01e7a484;
    piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    goto LAB_01e7a46c;
  }
  goto LAB_01e7a820;
LAB_01e7a3c0:
  uVar14 = FUN_01ebc0b4(plVar9,0);
  if ((uVar14 & 1) == 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_0377fd9c == '\0') {
      thunk_FUN_00d48444(puVar3);
      DAT_0377fd9c = '\x01';
    }
    lVar16 = *(long *)puVar3;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar16 = *(long *)puVar3;
    }
    if (plVar9 != (long *)**(undefined8 **)(lVar16 + 0xb8)) {
LAB_01e7a384:
      lVar16 = *(long *)(unaff_x19 + 0x60);
      uVar10 = FUN_01eca598(plVar9,0);
      uVar11 = FUN_01ecb830(plVar9,0);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0129a054(lVar16,uVar10,uVar11,*(undefined8 *)puVar6);
    }
  }
  goto LAB_01e7a234;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_01e7a744:
    if (*(long *)(piVar15 + -2) == *(long *)puVar7) {
      puVar8 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_01e7a778;
    }
  }
LAB_01e7a75c:
  puVar8 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar7,0);
LAB_01e7a778:
  (*(code *)*puVar8)(plVar12,puVar8[1]);
  return;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_01e7a46c:
    if (*(long *)(piVar15 + -2) == *(long *)puVar7) {
      puVar8 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_01e7a4a0;
    }
  }
LAB_01e7a484:
  puVar8 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar7,0);
LAB_01e7a4a0:
  (*(code *)*puVar8)(plVar12,puVar8[1]);
LAB_01e7a4ac:
  if (((*(long *)(unaff_x28 + 0x58) != 0) &&
      (lVar16 = *(long *)(*(long *)(unaff_x28 + 0x58) + 0xa8), lVar16 != 0)) &&
     (plVar12 = (long *)FUN_01ec15c8(lVar16,0), plVar12 != (long *)0x0)) {
    lVar16 = *plVar12;
    uVar14 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01e7a528;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar2,0);
LAB_01e7a528:
    plVar12 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
    puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar5 = Method_OVRObjectPool_ListScope<OVRAnchor_TrackableType>__ctor__;
    puVar4 = OVR_OpenVR_IVRChaperone__ReloadInfo_TypeInfo;
    puVar3 = System_Runtime_Serialization_ISerializable_TypeInfo;
    puVar2 = System_Collections_Generic_Dictionary<int,_LogEntry>_TypeInfo;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar13 = *plVar12;
      lVar16 = *(long *)puVar6;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar16) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01e7a5b4;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar12,lVar16,0);
LAB_01e7a5b4:
      uVar14 = (*(code *)*puVar8)(plVar12,puVar8[1]);
      puVar7 = StringLiteral_10310;
      if ((uVar14 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)StringLiteral_10310);
        if (plVar12 == (long *)0x0) {
          return;
        }
        lVar16 = *plVar12;
        uVar14 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar14 == 0) goto LAB_01e7a75c;
        piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        goto LAB_01e7a744;
      }
      lVar13 = *plVar12;
      lVar16 = *(long *)puVar6;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar16) {
            puVar8 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_01e7a614;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar12,lVar16,1);
LAB_01e7a614:
      plVar9 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar4 + 300);
        if ((*(byte *)(*plVar9 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar9);
        }
      }
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (plVar9[0xd] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uStack000000000000001c = 1;
      FUN_01299e64(*(long *)(unaff_x19 + 0x48),*(undefined8 *)(plVar9[0xd] + 0x18),
                   (long)&stack0x00000018 + 4,*(undefined8 *)puVar5);
      lVar13 = plVar9[0xd];
      lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01e98244(lVar16,lVar13,0);
      auVar17 = NEON_ext(*(undefined1 (*) [16])(plVar9 + 0xb),*(undefined1 (*) [16])(plVar9 + 0xb),8
                         ,1);
      *(long *)(lVar16 + 0x20) = auVar17._8_8_;
      *(long *)(lVar16 + 0x18) = auVar17._0_8_;
      lVar13 = FUN_01e9238c();
      if (*(long *)(lVar16 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar14 = FUN_0129aa60(lVar13,*(undefined8 *)(*(long *)(lVar16 + 0x10) + 0x10),
                            *(undefined8 *)puVar2);
      if ((uVar14 & 1) == 0) {
        lVar13 = FUN_01e9238c();
        if (*(long *)(lVar16 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0129a054(lVar13,*(undefined8 *)(*(long *)(lVar16 + 0x10) + 0x10),lVar16,
                     *(undefined8 *)Sirenix_Serialization_IDataReader_TypeInfo);
      }
    } while( true );
  }
LAB_01e7a820:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


