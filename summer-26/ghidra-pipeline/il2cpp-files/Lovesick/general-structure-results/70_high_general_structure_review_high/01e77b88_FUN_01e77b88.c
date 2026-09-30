/*
FUNCTION_NAME: FUN_01e77b88
ENTRY_POINT: 01e77b88
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x01e79428) */
/* WARNING: Removing unreachable block (ram,0x01e78338) */
/* WARNING: Removing unreachable block (ram,0x01e787c0) */
/* WARNING: Removing unreachable block (ram,0x01e78124) */
/* WARNING: Removing unreachable block (ram,0x01e796d8) */
/* WARNING: Removing unreachable block (ram,0x01e789dc) */
/* WARNING: Removing unreachable block (ram,0x01e785a4) */
/* WARNING: Removing unreachable block (ram,0x01e798e0) */
/* WARNING: Removing unreachable block (ram,0x01e78bf4) */
/* WARNING: Removing unreachable block (ram,0x01e78bf8) */
/* WARNING: Removing unreachable block (ram,0x01e79940) */
/* WARNING: Removing unreachable block (ram,0x01e79960) */

void FUN_01e77b88(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 uVar18;
  
  if ((DAT_0377fdda & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__
                      );
    thunk_FUN_00d48444(StringLiteral_10310);
                    /* try { // try from 01e77bd0 to 01f77bd7 has its CatchHandler @ 01e77cc4 */
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_CIELabColor>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<WeakReference>_Clear__);
                    /* try { // try from 01e77c0c to 01f77c17 has its CatchHandler @ 01e77cc8 */
    thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
                    /* try { // try from 01e77c18 to 01f77c97 has its CatchHandler @ 01e77ab8 */
    thunk_FUN_00d48444(StringLiteral_13941);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>__ctor__
                      );
    thunk_FUN_00d48444(Method_System_Convert_FromBase64_ComputeResultLength__);
    thunk_FUN_00d48444(PTR_DAT_033f19d8);
    thunk_FUN_00d48444(PTR_DAT_033f2508);
    thunk_FUN_00d48444(
                      Sirenix_Serialization_WeakMultiDimensionalArrayFormatter_<>c__DisplayClass8_0_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
                      );
    DAT_0377fdda = 1;
  }
  puVar7 = Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__;
  puVar4 = Method_OVRPassthroughLayer_SetColorMapMonochromatic__;
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar11 = FUN_01eb80b0(*(long *)(param_1 + 0x58),0);
    lVar15 = *(long *)puVar7;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar15);
      lVar15 = *(long *)puVar7;
    }
    uVar18 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x50);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_0377fd9c == '\0') {
      thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
      DAT_0377fd9c = '\x01';
    }
    lVar15 = *(long *)puVar4;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar15 = *(long *)puVar4;
    }
    if (lVar11 != 0) {
      FUN_01ec1088(lVar11,uVar18,**(undefined8 **)(lVar15 + 0xb8),0);
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (plVar12 = (long *)FUN_01ec15c8(*(long *)(param_1 + 0x48),0),
         puVar5 = Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__,
         plVar12 != (long *)0x0)) {
        lVar11 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) ==
                *(long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__) {
              puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_01e77d7c;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)
                  FUN_00d59724(plVar12,*(long *)
                                        Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__
                               ,0);
LAB_01e77d7c:
        puVar9 = StringLiteral_10310;
        plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
        puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
        puVar3 = PTR_DAT_033f2508;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        do {
          lVar15 = *plVar12;
          lVar11 = *(long *)puVar6;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar11) {
                puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_01e77df4;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,0);
LAB_01e77df4:
          uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
          if ((uVar16 & 1) == 0) {
            plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)puVar9);
            if (plVar12 == (long *)0x0) goto LAB_01e77f14;
            lVar11 = *plVar12;
            uVar16 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar16 == 0) goto LAB_01e77eec;
            piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            goto LAB_01e77ed4;
          }
          lVar15 = *plVar12;
          lVar11 = *(long *)puVar6;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar11) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_01e77e54;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,1);
LAB_01e77e54:
          plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
          if (plVar14 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar3 + 300);
            if ((*(byte *)(*plVar14 + 300) < bVar1) ||
               (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(plVar14);
            }
          }
          FUN_01e7b738(param_1,plVar14);
        } while( true );
      }
    }
  }
  goto LAB_01e7995c;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_01e77ed4:
    if (*(long *)(piVar17 + -2) == *(long *)puVar9) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_01e77f08;
    }
  }
LAB_01e77eec:
  puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar9,0);
LAB_01e77f08:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_01e77f14:
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar11 = *(long *)(*(long *)(param_1 + 0x58) + 0xa0), lVar11 != 0)) &&
     (plVar12 = (long *)FUN_01ec15c8(lVar11,0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_01e77f84;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar5,0);
LAB_01e77f84:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar3 = 
    Method_System_Collections_Generic_Dictionary<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>__ctor__
    ;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar6;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_01e77ff4;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,0);
LAB_01e77ff4:
      uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar16 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)puVar9);
        if (plVar12 == (long *)0x0) goto LAB_01e78118;
        lVar11 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar16 == 0) goto LAB_01e780f0;
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_01e780d8;
      }
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar6;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_01e78054;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,1);
LAB_01e78054:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar3 + 300);
        if ((*(byte *)(*plVar14 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar14);
        }
      }
      FUN_01e7bbb8(param_1,plVar14);
    } while( true );
  }
  goto LAB_01e7995c;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_01e780d8:
    if (*(long *)(piVar17 + -2) == *(long *)puVar9) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_01e7810c;
    }
  }
LAB_01e780f0:
  puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar9,0);
LAB_01e7810c:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_01e78118:
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar11 = FUN_01eb8044(*(long *)(param_1 + 0x58),0), lVar11 != 0)) &&
     (plVar12 = (long *)FUN_01ec15c8(lVar11,0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_01e78198;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar5,0);
LAB_01e78198:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar3 = Method_System_Collections_Generic_Dictionary<string,_CIELabColor>__ctor__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar6;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_01e78208;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,0);
LAB_01e78208:
      uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar16 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)puVar9);
        if (plVar12 == (long *)0x0) goto LAB_01e7832c;
        lVar11 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar16 == 0) goto LAB_01e78304;
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_01e782ec;
      }
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar6;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_01e78268;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,1);
LAB_01e78268:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar3 + 300);
        if ((*(byte *)(*plVar14 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar14);
        }
      }
      FUN_01e7bc84(param_1,plVar14);
    } while( true );
  }
  goto LAB_01e7995c;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_01e782ec:
    if (*(long *)(piVar17 + -2) == *(long *)puVar9) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_01e78320;
    }
  }
LAB_01e78304:
  puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar9,0);
LAB_01e78320:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_01e7832c:
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar11 = FUN_01eb80b0(*(long *)(param_1 + 0x58),0), lVar11 != 0)) &&
     (plVar12 = (long *)FUN_01ec15c8(lVar11,0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_01e783ac;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar5,0);
LAB_01e783ac:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar8 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar6 = 
    Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
    ;
    puVar3 = PTR_DAT_033f19d8;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar8;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_01e78424;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,0);
LAB_01e78424:
      uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar16 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)puVar9);
        if (plVar12 == (long *)0x0) goto LAB_01e78598;
        lVar11 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar16 == 0) goto LAB_01e78570;
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_01e78558;
      }
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar8;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_01e78484;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,1);
LAB_01e78484:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 == (long *)0x0) {
LAB_01e78504:
        FUN_01e7d088(param_1,plVar14);
      }
      else {
        bVar1 = *(byte *)(*plVar14 + 300);
        bVar2 = *(byte *)(*(long *)puVar6 + 300);
        if ((bVar1 < bVar2) ||
           (lVar11 = *(long *)(*plVar14 + 200),
           *(long *)(lVar11 + (ulong)bVar2 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar14);
        }
        bVar2 = *(byte *)(*(long *)puVar4 + 300);
        if ((bVar1 < bVar2) || (*(long *)(lVar11 + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
          bVar2 = *(byte *)(*(long *)puVar3 + 300);
          if ((bVar1 < bVar2) || (*(long *)(lVar11 + (ulong)bVar2 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar14);
          }
          goto LAB_01e78504;
        }
        FUN_01e7c3d0(param_1,plVar14);
      }
    } while( true );
  }
  goto LAB_01e7995c;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_01e78558:
    if (*(long *)(piVar17 + -2) == *(long *)puVar9) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_01e7858c;
    }
  }
LAB_01e78570:
  puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar9,0);
LAB_01e7858c:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_01e78598:
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar11 = FUN_01eb811c(*(long *)(param_1 + 0x58),0), lVar11 != 0)) &&
     (plVar12 = (long *)FUN_01ec15c8(lVar11,0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_01e78618;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar5,0);
LAB_01e78618:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar6 = StringLiteral_13941;
    puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar3;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_01e78688;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,0);
LAB_01e78688:
      uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar16 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)puVar9);
        if (plVar12 == (long *)0x0) goto LAB_01e787b4;
        lVar11 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar16 == 0) goto LAB_01e7878c;
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_01e78774;
      }
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar3;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_01e786e8;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,1);
LAB_01e786e8:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      bVar1 = *(byte *)(*(long *)puVar6 + 300);
      if ((*(byte *)(*plVar14 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar14);
      }
      if (plVar14[0x1c] == 0) {
        FUN_01e7d94c(param_1,plVar14);
      }
    } while( true );
  }
  goto LAB_01e7995c;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_01e78774:
    if (*(long *)(piVar17 + -2) == *(long *)puVar9) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_01e787a8;
    }
  }
LAB_01e7878c:
  puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar9,0);
LAB_01e787a8:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_01e787b4:
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar11 = FUN_01eb7fd8(*(long *)(param_1 + 0x58),0), lVar11 != 0)) &&
     (plVar12 = (long *)FUN_01ec15c8(lVar11,0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_01e78834;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar5,0);
LAB_01e78834:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar3 = Method_System_Collections_Generic_List<WeakReference>_Clear__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar6;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_01e788a4;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,0);
LAB_01e788a4:
      uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar16 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)puVar9);
        if (plVar12 == (long *)0x0) goto System_Xml_XPath_XPathNavigator__get_ValueAsDouble;
        lVar11 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar16 == 0) goto LAB_01e789a8;
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_01e78990;
      }
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar6;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_01e78904;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,1);
LAB_01e78904:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      bVar1 = *(byte *)(*(long *)puVar3 + 300);
      if ((*(byte *)(*plVar14 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar14);
      }
      if (plVar14[0x13] == 0) {
        FUN_01e7e6f0(param_1,plVar14);
      }
    } while( true );
  }
  goto LAB_01e7995c;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_01e78990:
    if (*(long *)(piVar17 + -2) == *(long *)puVar9) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_01e789c4;
    }
  }
LAB_01e789a8:
  puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar9,0);
LAB_01e789c4:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
System_Xml_XPath_XPathNavigator__get_ValueAsDouble:
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar11 = *(long *)(*(long *)(param_1 + 0x58) + 0xb0), lVar11 != 0)) &&
     (plVar12 = (long *)FUN_01ec15c8(lVar11,0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_01e78a4c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar5,0);
LAB_01e78a4c:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar3 = Method_System_Convert_FromBase64_ComputeResultLength__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar6;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_01e78abc;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,0);
LAB_01e78abc:
      uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar16 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)puVar9);
        if (plVar12 == (long *)0x0) goto LAB_01e791dc;
        lVar11 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar16 == 0) goto LAB_01e78bc0;
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_01e78ba8;
      }
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar6;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_01e78b1c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,1);
LAB_01e78b1c:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      bVar1 = *(byte *)(*(long *)puVar3 + 300);
      if ((*(byte *)(*plVar14 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar14);
      }
      if (plVar14[0xe] == 0) {
        FUN_01e7f1ac(param_1,plVar14);
      }
    } while( true );
  }
  goto LAB_01e7995c;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_01e78ba8:
    if (*(long *)(piVar17 + -2) == *(long *)puVar9) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_01e78bdc;
    }
  }
LAB_01e78bc0:
  puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar9,0);
LAB_01e78bdc:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_01e791dc:
  do {
    plVar12 = *(long **)(param_1 + 0x50);
    if (plVar12 == (long *)0x0) goto LAB_01e7995c;
    iVar10 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
    if (iVar10 < 1) {
      if (((*(long *)(param_1 + 0x58) != 0) &&
          (lVar11 = FUN_01eb80b0(*(long *)(param_1 + 0x58),0), lVar11 != 0)) &&
         (plVar12 = (long *)FUN_01ec15c8(lVar11,0), plVar12 != (long *)0x0)) {
        lVar11 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar16 == 0) goto LAB_01e7924c;
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        break;
      }
      goto LAB_01e7995c;
    }
    plVar12 = *(long **)(param_1 + 0x50);
    if (plVar12 == (long *)0x0) goto LAB_01e7995c;
    plVar12 = (long *)(**(code **)(*plVar12 + 600))(plVar12,*(undefined8 *)(*plVar12 + 0x260));
    if (plVar12 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar4 + 300);
      if ((*(byte *)(*plVar12 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar12);
      }
    }
    FUN_01e7f85c(param_1,plVar12);
  } while( true );
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
    if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_01e79268;
    }
  }
LAB_01e7924c:
  puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar5,0);
LAB_01e79268:
  plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
  puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar3 = 
  Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar15 = *plVar12;
    lVar11 = *(long *)puVar6;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar11) {
          puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_01e792d8;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,0);
LAB_01e792d8:
    uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
    if ((uVar16 & 1) == 0) {
      plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)puVar9);
      if (plVar12 == (long *)0x0) goto LAB_01e7941c;
      lVar11 = *plVar12;
      uVar16 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar16 == 0) goto LAB_01e793f4;
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar15 = *plVar12;
    lVar11 = *(long *)puVar6;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar11) {
          puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_01e79338;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,1);
LAB_01e79338:
    plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    if (plVar14 != (long *)0x0) {
      bVar1 = *(byte *)(*plVar14 + 300);
      bVar2 = *(byte *)(*(long *)puVar3 + 300);
      if ((bVar1 < bVar2) ||
         (lVar11 = *(long *)(*plVar14 + 200),
         *(long *)(lVar11 + (ulong)bVar2 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar14);
      }
      bVar2 = *(byte *)(*(long *)puVar4 + 300);
      if ((bVar2 <= bVar1) && (*(long *)(lVar11 + (ulong)bVar2 * 8 + -8) == *(long *)puVar4)) {
        FUN_01e7f930(param_1,plVar14);
      }
    }
  } while( true );
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
    if (*(long *)(piVar17 + -2) == *(long *)puVar9) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_01e79410;
    }
  }
LAB_01e793f4:
  puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar9,0);
LAB_01e79410:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_01e7941c:
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar11 = FUN_01eb811c(*(long *)(param_1 + 0x58),0), lVar11 != 0)) &&
     (plVar12 = (long *)FUN_01ec15c8(lVar11,0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_01e7949c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar5,0);
LAB_01e7949c:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar8 = StringLiteral_13941;
    puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar3 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar6;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_01e79514;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,0);
LAB_01e79514:
      uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar16 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)puVar9);
        if (plVar12 == (long *)0x0) goto LAB_01e796cc;
        lVar11 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar16 == 0) goto LAB_01e796a4;
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_01e7968c;
      }
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar6;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_01e79574;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,1);
LAB_01e79574:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      bVar1 = *(byte *)(*(long *)puVar8 + 300);
      if ((*(byte *)(*plVar14 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar8)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar14);
      }
      if ((long *)plVar14[0x19] != (long *)0x0) {
        lVar11 = *(long *)plVar14[0x19];
        bVar1 = *(byte *)(*(long *)puVar4 + 300);
        if ((bVar1 <= *(byte *)(lVar11 + 300)) &&
           (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)) {
          lVar11 = *(long *)puVar3;
          lVar15 = plVar14[0x16];
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar11 = *(long *)puVar3;
          }
          uVar16 = FUN_01f76298(lVar15,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
          if ((uVar16 & 1) != 0) {
            plVar14 = (long *)plVar14[0x19];
            if (plVar14 != (long *)0x0) {
              lVar11 = *(long *)puVar4;
              if ((*(byte *)(*plVar14 + 300) < *(byte *)(lVar11 + 300)) ||
                 (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(lVar11 + 300) * 8 + -8) !=
                  lVar11)) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c(plVar14,lVar11);
              }
            }
            FUN_01e7f930(param_1);
          }
        }
      }
    } while( true );
  }
  goto LAB_01e7995c;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_01e7968c:
    if (*(long *)(piVar17 + -2) == *(long *)puVar9) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_01e796c0;
    }
  }
LAB_01e796a4:
  puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar9,0);
LAB_01e796c0:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_01e796cc:
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (plVar12 = (long *)FUN_01ec15c8(*(long *)(param_1 + 0x48),0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_01e79740;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar5,0);
LAB_01e79740:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar5 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar4 = Sirenix_Serialization_WeakMultiDimensionalArrayFormatter_<>c__DisplayClass8_0_TypeInfo;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar5;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_01e797b0;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,0);
LAB_01e797b0:
      uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar16 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)puVar9);
        if (plVar12 == (long *)0x0) goto LAB_01e798d4;
        lVar11 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar16 == 0) goto LAB_01e798ac;
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_01e79894;
      }
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar5;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_01e79810;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,1);
LAB_01e79810:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar4 + 300);
        if ((*(byte *)(*plVar14 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar14);
        }
      }
      FUN_01e7fa64(param_1,plVar14);
    } while( true );
  }
  goto LAB_01e7995c;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_01e79894:
    if (*(long *)(piVar17 + -2) == *(long *)puVar9) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_01e798c8;
    }
  }
LAB_01e798ac:
  puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar9,0);
LAB_01e798c8:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_01e798d4:
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar11 = FUN_01eb80b0(*(long *)(param_1 + 0x58),0);
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar7);
    }
    if (lVar11 != 0) {
      FUN_01ec13d8(lVar11,*(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x50),0);
      return;
    }
  }
LAB_01e7995c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


