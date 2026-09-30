/*
FUNCTION_NAME: FUN_01e79be0
ENTRY_POINT: 01e79be0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01e7a4b8) */
/* WARNING: Removing unreachable block (ram,0x01e7a82c) */
/* WARNING: Removing unreachable block (ram,0x01e7a17c) */
/* WARNING: Removing unreachable block (ram,0x01e7a844) */

void FUN_01e79be0(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined1 auVar17 [16];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  
  if ((DAT_0377fddb & 1) == 0) {
    thunk_FUN_00d48444(Sirenix_Serialization_IDataReader_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_270);
    thunk_FUN_00d48444(SceneSelect_<ButtonHoldCorourtine>d__26_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<int,_LogEntry>_TypeInfo);
    thunk_FUN_00d48444(Method_OVRObjectPool_ListScope<OVRAnchor_TrackableType>__ctor__);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(System_Runtime_Serialization_ISerializable_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<WeakReference>_Clear__);
    thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
    thunk_FUN_00d48444(StringLiteral_13941);
    thunk_FUN_00d48444(OVR_OpenVR_IVRChaperone__ReloadInfo_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
                      );
    DAT_0377fddb = 1;
  }
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar8 = FUN_01eb811c(*(long *)(param_1 + 0x58),0), lVar8 != 0)) &&
     (plVar9 = (long *)FUN_01ec15c8(lVar8,0),
     puVar2 = Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__,
     plVar9 != (long *)0x0)) {
    lVar8 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01e79d38;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_00d59724(plVar9,*(long *)
                                   Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__,
                           0);
LAB_01e79d38:
    puVar7 = StringLiteral_10310;
    plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    puVar6 = StringLiteral_13941;
    puVar5 = StringLiteral_270;
    puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar3 = Method_OVRObjectPool_ListScope<OVRAnchor_TrackableType>__ctor__;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar14 = *plVar9;
      lVar8 = *(long *)puVar4;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01e79dc4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar9,lVar8,0);
LAB_01e79dc4:
      uVar15 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((uVar15 & 1) == 0) {
        plVar9 = (long *)thunk_FUN_00d6225c(plVar9,*(undefined8 *)puVar7);
        if (plVar9 == (long *)0x0) goto LAB_01e79f1c;
        lVar8 = *plVar9;
        uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar15 == 0) goto LAB_01e79ef4;
        piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_01e79edc;
      }
      lVar14 = *plVar9;
      lVar8 = *(long *)puVar4;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto 
            System_Xml_XPath_XPathNavigatorKeyComparer__System_Collections_IEqualityComparer_GetHashCode
            ;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar9,lVar8,1);
System_Xml_XPath_XPathNavigatorKeyComparer__System_Collections_IEqualityComparer_GetHashCode:
      plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (plVar11 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar6 + 300);
        if ((*(byte *)(*plVar11 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar11);
        }
      }
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (plVar11[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(param_2 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      local_70[0] = 1;
      FUN_01299e64(*(long *)(param_2 + 0x48),*(undefined8 *)(plVar11[0x18] + 0x18),local_70,
                   *(undefined8 *)puVar3);
      if (*(long *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0129a054(*(long *)(param_2 + 0x10),plVar11[0x18],plVar11[0x1c],*(undefined8 *)puVar5);
    } while( true );
  }
  goto LAB_01e7a820;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_01e79edc:
    if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
      puVar10 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01e79f10;
    }
  }
LAB_01e79ef4:
  puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar7,0);
LAB_01e79f10:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_01e79f1c:
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar8 = FUN_01eb7fd8(*(long *)(param_1 + 0x58),0), lVar8 != 0)) &&
     (plVar9 = (long *)FUN_01ec15c8(lVar8,0), plVar9 != (long *)0x0)) {
    lVar14 = *plVar9;
    lVar8 = *(long *)puVar2;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar8) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01e79f90;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar9,lVar8,0);
LAB_01e79f90:
    plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar5 = Method_System_Collections_Generic_List<WeakReference>_Clear__;
    puVar4 = Method_OVRObjectPool_ListScope<OVRAnchor_TrackableType>__ctor__;
    puVar3 = SceneSelect_<ButtonHoldCorourtine>d__26_TypeInfo;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar14 = *plVar9;
      lVar8 = *(long *)puVar6;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01e7a014;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar9,lVar8,0);
LAB_01e7a014:
      uVar15 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((uVar15 & 1) == 0) {
        plVar9 = (long *)thunk_FUN_00d6225c(plVar9,*(undefined8 *)puVar7);
        if (plVar9 == (long *)0x0) goto LAB_01e7a170;
        lVar8 = *plVar9;
        uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar15 == 0) goto LAB_01e7a148;
        piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_01e7a130;
      }
      lVar14 = *plVar9;
      lVar8 = *(long *)puVar6;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01e7a074;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar9,lVar8,1);
LAB_01e7a074:
      plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (plVar11 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar5 + 300);
        if ((*(byte *)(*plVar11 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar11);
        }
      }
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (plVar11[0x10] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(param_2 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      local_6c[0] = 1;
      FUN_01299e64(*(long *)(param_2 + 0x48),*(undefined8 *)(plVar11[0x10] + 0x18),local_6c,
                   *(undefined8 *)puVar4);
      if (*(long *)(param_2 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0129a054(*(long *)(param_2 + 0x50),plVar11[0x10],plVar11[0x13],*(undefined8 *)puVar3);
    } while( true );
  }
  goto LAB_01e7a820;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_01e7a130:
    if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
      puVar10 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01e7a164;
    }
  }
LAB_01e7a148:
  puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar7,0);
LAB_01e7a164:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_01e7a170:
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar8 = FUN_01eb80b0(*(long *)(param_1 + 0x58),0), lVar8 != 0)) &&
     (plVar9 = (long *)FUN_01ec15c8(lVar8,0), plVar9 != (long *)0x0)) {
    lVar14 = *plVar9;
    lVar8 = *(long *)puVar2;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar8) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01e7a1f0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar9,lVar8,0);
LAB_01e7a1f0:
    plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    puVar7 = StringLiteral_270;
    puVar5 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar4 = 
    Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
    ;
    puVar3 = Method_OVRPassthroughLayer_SetColorMapMonochromatic__;
    puVar2 = Method_OVRObjectPool_ListScope<OVRAnchor_TrackableType>__ctor__;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
LAB_01e7a234:
    lVar14 = *plVar9;
    lVar8 = *(long *)puVar5;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar8) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01e7a280;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar9,lVar8,0);
LAB_01e7a280:
    uVar15 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    puVar6 = StringLiteral_10310;
    if ((uVar15 & 1) != 0) {
      lVar14 = *plVar9;
      lVar8 = *(long *)puVar5;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01e7a2e0;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar9,lVar8,1);
LAB_01e7a2e0:
      plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (plVar11 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar4 + 300);
        if ((*(byte *)(*plVar11 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar11);
        }
      }
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar14 = *(long *)(param_2 + 0x48);
      lVar8 = FUN_01eca598(plVar11,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      local_68[0] = 1;
      FUN_01299e64(lVar14,*(undefined8 *)(lVar8 + 0x18),local_68,*(undefined8 *)puVar2);
      bVar1 = *(byte *)(*(long *)puVar3 + 300);
      if ((bVar1 <= *(byte *)(*plVar11 + 300)) &&
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3))
      goto LAB_01e7a3c0;
      goto LAB_01e7a384;
    }
    plVar9 = (long *)thunk_FUN_00d6225c(plVar9,*(undefined8 *)StringLiteral_10310);
    puVar2 = Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__;
    if (plVar9 == (long *)0x0) goto LAB_01e7a4ac;
    lVar8 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar15 == 0) goto LAB_01e7a484;
    piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    goto LAB_01e7a46c;
  }
  goto LAB_01e7a820;
LAB_01e7a3c0:
  uVar15 = FUN_01ebc0b4(plVar11,0);
  if ((uVar15 & 1) == 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_0377fd9c == '\0') {
      thunk_FUN_00d48444(puVar3);
      DAT_0377fd9c = '\x01';
    }
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar8 = *(long *)puVar3;
    }
    if (plVar11 != (long *)**(undefined8 **)(lVar8 + 0xb8)) {
LAB_01e7a384:
      lVar8 = *(long *)(param_2 + 0x60);
      uVar12 = FUN_01eca598(plVar11,0);
      uVar13 = FUN_01ecb830(plVar11,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0129a054(lVar8,uVar12,uVar13,*(undefined8 *)puVar7);
    }
  }
  goto LAB_01e7a234;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_01e7a744:
    if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
      puVar10 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01e7a778;
    }
  }
LAB_01e7a75c:
  puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar6,0);
LAB_01e7a778:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_01e7a46c:
    if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
      puVar10 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01e7a4a0;
    }
  }
LAB_01e7a484:
  puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar6,0);
LAB_01e7a4a0:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_01e7a4ac:
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar8 = *(long *)(*(long *)(param_1 + 0x58) + 0xa8), lVar8 != 0)) &&
     (plVar9 = (long *)FUN_01ec15c8(lVar8,0), plVar9 != (long *)0x0)) {
    lVar8 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01e7a528;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar2,0);
LAB_01e7a528:
    plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    puVar7 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar5 = Method_OVRObjectPool_ListScope<OVRAnchor_TrackableType>__ctor__;
    puVar4 = OVR_OpenVR_IVRChaperone__ReloadInfo_TypeInfo;
    puVar3 = System_Runtime_Serialization_ISerializable_TypeInfo;
    puVar2 = System_Collections_Generic_Dictionary<int,_LogEntry>_TypeInfo;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar14 = *plVar9;
      lVar8 = *(long *)puVar7;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01e7a5b4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar9,lVar8,0);
LAB_01e7a5b4:
      uVar15 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      puVar6 = StringLiteral_10310;
      if ((uVar15 & 1) == 0) {
        plVar9 = (long *)thunk_FUN_00d6225c(plVar9,*(undefined8 *)StringLiteral_10310);
        if (plVar9 == (long *)0x0) {
          return;
        }
        lVar8 = *plVar9;
        uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar15 == 0) goto LAB_01e7a75c;
        piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_01e7a744;
      }
      lVar14 = *plVar9;
      lVar8 = *(long *)puVar7;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01e7a614;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar9,lVar8,1);
LAB_01e7a614:
      plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (plVar11 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar4 + 300);
        if ((*(byte *)(*plVar11 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar11);
        }
      }
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (plVar11[0xd] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(param_2 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      local_64[0] = 1;
      FUN_01299e64(*(long *)(param_2 + 0x48),*(undefined8 *)(plVar11[0xd] + 0x18),local_64,
                   *(undefined8 *)puVar5);
      lVar14 = plVar11[0xd];
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01e98244(lVar8,lVar14,0);
      auVar17 = NEON_ext(*(undefined1 (*) [16])(plVar11 + 0xb),*(undefined1 (*) [16])(plVar11 + 0xb)
                         ,8,1);
      *(long *)(lVar8 + 0x20) = auVar17._8_8_;
      *(long *)(lVar8 + 0x18) = auVar17._0_8_;
      lVar14 = FUN_01e9238c(param_2,0);
      if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar15 = FUN_0129aa60(lVar14,*(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10),
                            *(undefined8 *)puVar2);
      if ((uVar15 & 1) == 0) {
        lVar14 = FUN_01e9238c(param_2,0);
        if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0129a054(lVar14,*(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10),lVar8,
                     *(undefined8 *)Sirenix_Serialization_IDataReader_TypeInfo);
      }
    } while( true );
  }
LAB_01e7a820:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


