/*
FUNCTION_NAME: FUN_01e984f0
ENTRY_POINT: 01e984f0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x01e99d64) */
/* WARNING: Removing unreachable block (ram,0x01e98d54) */
/* WARNING: Removing unreachable block (ram,0x01e99174) */
/* WARNING: Removing unreachable block (ram,0x01e988fc) */
/* WARNING: Removing unreachable block (ram,0x01e99f74) */
/* WARNING: Removing unreachable block (ram,0x01e99384) */
/* WARNING: Removing unreachable block (ram,0x01e99388) */
/* WARNING: Removing unreachable block (ram,0x01e98f64) */
/* WARNING: Removing unreachable block (ram,0x01e99af0) */
/* WARNING: Removing unreachable block (ram,0x01e9a184) */
/* WARNING: Removing unreachable block (ram,0x01e9a1d8) */

uint FUN_01e984f0(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  
  puVar4 = Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__;
  if ((DAT_0377fe57 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__
                      );
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_CIELabColor>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<WeakReference>_Clear__);
    thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
    thunk_FUN_00d48444(StringLiteral_13941);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>__ctor__
                      );
    thunk_FUN_00d48444(Method_System_Convert_FromBase64_ComputeResultLength__);
    thunk_FUN_00d48444(PTR_DAT_033f19d8);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
                      );
    DAT_0377fe57 = 1;
  }
  puVar5 = Method_OVRPassthroughLayer_SetColorMapMonochromatic__;
  lVar11 = *(long *)puVar4;
  lVar17 = *(long *)(param_1 + 0x60);
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar11 = *(long *)puVar4;
  }
  uVar19 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x50);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar5);
  }
  if (DAT_0377fd9c == '\0') {
    thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
    DAT_0377fd9c = '\x01';
  }
  lVar11 = *(long *)puVar5;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar11 = *(long *)puVar5;
  }
  if (lVar17 != 0) {
    FUN_01ec1088(lVar17,uVar19,**(undefined8 **)(lVar11 + 0xb8),0);
    if (*(long *)(param_1 + 0xa0) != 0) {
      lVar11 = FUN_01eb80b0(*(long *)(param_1 + 0xa0),0);
      lVar17 = *(long *)puVar4;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar17);
        lVar17 = *(long *)puVar4;
      }
      uVar19 = *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x50);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_0377fd9c == '\0') {
        thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
        DAT_0377fd9c = '\x01';
      }
      lVar17 = *(long *)puVar5;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar17 = *(long *)puVar5;
      }
      if (lVar11 == 0) goto LAB_01e9a1b8;
      FUN_01ec1230(lVar11,uVar19,**(undefined8 **)(lVar17 + 0xb8),0);
      FUN_01e9d394(param_1);
    }
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (plVar12 = (long *)FUN_01ec15c8(*(long *)(param_1 + 0x68),0),
       puVar4 = Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__,
       plVar12 != (long *)0x0)) {
      lVar11 = *plVar12;
      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01e98754;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)
                FUN_00d59724(plVar12,*(long *)
                                      Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__
                             ,0);
LAB_01e98754:
      puVar8 = StringLiteral_10310;
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
        lVar17 = *plVar12;
        lVar11 = *(long *)puVar6;
        uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar11) {
              puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_01e987cc;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,0);
LAB_01e987cc:
        uVar15 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if ((uVar15 & 1) == 0) {
          plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)puVar8);
          if (plVar12 == (long *)0x0) goto LAB_01e988f0;
          lVar11 = *plVar12;
          uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar15 == 0) goto LAB_01e988c8;
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_01e988b0;
        }
        lVar17 = *plVar12;
        lVar11 = *(long *)puVar6;
        uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar11) {
              puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_01e9882c;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,1);
LAB_01e9882c:
        plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
        if (plVar14 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar3 + 300);
          if ((*(byte *)(*plVar14 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar14);
          }
        }
        FUN_01e9d5ec(param_1,plVar14);
      } while( true );
    }
  }
  goto LAB_01e9a1b8;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_01e988b0:
    if (*(long *)(piVar16 + -2) == *(long *)puVar8) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01e988e4;
    }
  }
LAB_01e988c8:
  puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar8,0);
LAB_01e988e4:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_01e988f0:
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (plVar12 = (long *)FUN_01ec15c8(*(long *)(param_1 + 0x50),0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01e98964;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar4,0);
LAB_01e98964:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar3 = Method_System_Collections_Generic_Dictionary<string,_CIELabColor>__ctor__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar6;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01e989d4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,0);
LAB_01e989d4:
      uVar15 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar15 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)puVar8);
        if (plVar12 == (long *)0x0) goto LAB_01e98af4;
        lVar11 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar15 == 0) goto LAB_01e98acc;
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_01e98ab4;
      }
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar6;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01e98a34;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,1);
LAB_01e98a34:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar3 + 300);
        if ((*(byte *)(*plVar14 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar14);
        }
      }
      FUN_01e9d6b4(param_1,plVar14);
    } while( true );
  }
  goto LAB_01e9a1b8;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_01e98ab4:
    if (*(long *)(piVar16 + -2) == *(long *)puVar8) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01e98ae8;
    }
  }
LAB_01e98acc:
  puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar8,0);
LAB_01e98ae8:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_01e98af4:
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (plVar12 = (long *)FUN_01ec15c8(*(long *)(param_1 + 0x60),0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01e98b5c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar4,0);
LAB_01e98b5c:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar7 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar6 = 
    Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
    ;
    puVar3 = PTR_DAT_033f19d8;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar7;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01e98bd4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,0);
LAB_01e98bd4:
      uVar15 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar15 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)puVar8);
        if (plVar12 == (long *)0x0) goto LAB_01e98d48;
        lVar11 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar15 == 0) goto LAB_01e98d20;
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_01e98d08;
      }
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar7;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01e98c34;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,1);
LAB_01e98c34:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 == (long *)0x0) {
LAB_01e98cb4:
        FUN_01e9e9f0(param_1,plVar14);
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
        bVar2 = *(byte *)(*(long *)puVar5 + 300);
        if ((bVar1 < bVar2) || (*(long *)(lVar11 + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
          bVar2 = *(byte *)(*(long *)puVar3 + 300);
          if ((bVar1 < bVar2) || (*(long *)(lVar11 + (ulong)bVar2 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar14);
          }
          goto LAB_01e98cb4;
        }
        FUN_01e9df38(param_1,plVar14);
      }
    } while( true );
  }
  goto LAB_01e9a1b8;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_01e98d08:
    if (*(long *)(piVar16 + -2) == *(long *)puVar8) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01e98d3c;
    }
  }
LAB_01e98d20:
  puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar8,0);
LAB_01e98d3c:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_01e98d48:
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (plVar12 = (long *)FUN_01ec15c8(*(long *)(param_1 + 0x58),0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01e98dbc;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar4,0);
LAB_01e98dbc:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar6 = StringLiteral_13941;
    puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar3;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01e98e2c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,0);
LAB_01e98e2c:
      uVar15 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar15 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)puVar8);
        if (plVar12 == (long *)0x0) goto LAB_01e98f58;
        lVar11 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar15 == 0) goto LAB_01e98f30;
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_01e98f18;
      }
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar3;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01e98e8c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,1);
LAB_01e98e8c:
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
        FUN_01e9f2ec(param_1,plVar14);
      }
    } while( true );
  }
  goto LAB_01e9a1b8;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_01e98f18:
    if (*(long *)(piVar16 + -2) == *(long *)puVar8) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01e98f4c;
    }
  }
LAB_01e98f30:
  puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar8,0);
LAB_01e98f4c:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_01e98f58:
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (plVar12 = (long *)FUN_01ec15c8(*(long *)(param_1 + 0x48),0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01e98fcc;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar4,0);
LAB_01e98fcc:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar3 = Method_System_Collections_Generic_List<WeakReference>_Clear__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar6;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01e9903c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,0);
LAB_01e9903c:
      uVar15 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar15 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)puVar8);
        if (plVar12 == (long *)0x0) goto LAB_01e99168;
        lVar11 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar15 == 0) goto LAB_01e99140;
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_01e99128;
      }
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar6;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01e9909c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,1);
LAB_01e9909c:
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
        FUN_01ea01d0(param_1,plVar14);
      }
    } while( true );
  }
  goto LAB_01e9a1b8;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_01e99128:
    if (*(long *)(piVar16 + -2) == *(long *)puVar8) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01e9915c;
    }
  }
LAB_01e99140:
  puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar8,0);
LAB_01e9915c:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_01e99168:
  if ((*(long *)(param_1 + 0x80) != 0) &&
     (plVar12 = (long *)FUN_01ec15c8(*(long *)(param_1 + 0x80),0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto FUN_01e991dc;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar4,0);
FUN_01e991dc:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar3 = Method_System_Convert_FromBase64_ComputeResultLength__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar6;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01e9924c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,0);
LAB_01e9924c:
      uVar15 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar15 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)puVar8);
        if (plVar12 == (long *)0x0) goto LAB_01e998a8;
        lVar11 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar15 == 0) goto LAB_01e99350;
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_01e99338;
      }
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar6;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01e992ac;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,1);
LAB_01e992ac:
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
        FUN_01ea0afc(param_1,plVar14);
      }
    } while( true );
  }
  goto LAB_01e9a1b8;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_01e99338:
    if (*(long *)(piVar16 + -2) == *(long *)puVar8) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01e9936c;
    }
  }
LAB_01e99350:
  puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar8,0);
LAB_01e9936c:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_01e998a8:
  do {
    plVar12 = *(long **)(param_1 + 0x88);
    if (plVar12 == (long *)0x0) goto LAB_01e9a1b8;
    iVar9 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
    if (iVar9 < 1) {
      FUN_01ea12b8(param_1);
      if ((*(long *)(param_1 + 0x60) != 0) &&
         (plVar12 = (long *)FUN_01ec15c8(*(long *)(param_1 + 0x60),0), plVar12 != (long *)0x0)) {
        lVar11 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar15 == 0) goto LAB_01e99914;
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        break;
      }
      goto LAB_01e9a1b8;
    }
    plVar12 = *(long **)(param_1 + 0x88);
    if (plVar12 == (long *)0x0) goto LAB_01e9a1b8;
    plVar12 = (long *)(**(code **)(*plVar12 + 600))(plVar12,*(undefined8 *)(*plVar12 + 0x260));
    if (plVar12 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar5 + 300);
      if ((*(byte *)(*plVar12 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar12);
      }
    }
    FUN_01ea119c(param_1,plVar12);
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01e99930;
    }
  }
LAB_01e99914:
  puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar4,0);
LAB_01e99930:
  plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
  puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar3 = 
  Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar17 = *plVar12;
    lVar11 = *(long *)puVar6;
    uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar11) {
          puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01e999a0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,0);
LAB_01e999a0:
    uVar15 = (*(code *)*puVar13)(plVar12,puVar13[1]);
    if ((uVar15 & 1) == 0) {
      plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)puVar8);
      if (plVar12 == (long *)0x0) goto LAB_01e99ae4;
      lVar11 = *plVar12;
      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar15 == 0) goto LAB_01e99abc;
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar17 = *plVar12;
    lVar11 = *(long *)puVar6;
    uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar11) {
          puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_01e99a00;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,1);
LAB_01e99a00:
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
      bVar2 = *(byte *)(*(long *)puVar5 + 300);
      if ((bVar2 <= bVar1) && (*(long *)(lVar11 + (ulong)bVar2 * 8 + -8) == *(long *)puVar5)) {
        FUN_01ea1b28(param_1,plVar14);
      }
    }
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)puVar8) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01e99ad8;
    }
  }
LAB_01e99abc:
  puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar8,0);
LAB_01e99ad8:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_01e99ae4:
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (plVar12 = (long *)FUN_01ec15c8(*(long *)(param_1 + 0x58),0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01e99b58;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar4,0);
LAB_01e99b58:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar7 = StringLiteral_13941;
    puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar3 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar6;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01e99bd0;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,0);
LAB_01e99bd0:
      uVar15 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar15 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)puVar8);
        if (plVar12 == (long *)0x0) goto LAB_01e99d58;
        lVar11 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar15 == 0) goto LAB_01e99d30;
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_01e99d18;
      }
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar6;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01e99c30;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,1);
LAB_01e99c30:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      bVar1 = *(byte *)(*(long *)puVar7 + 300);
      if ((*(byte *)(*plVar14 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      plVar18 = (long *)plVar14[0x19];
      if (plVar18 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar5 + 300);
        if ((bVar1 <= *(byte *)(*plVar18 + 300)) &&
           (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar5)) {
          lVar11 = *(long *)puVar3;
          lVar17 = plVar14[0x16];
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar11);
            lVar11 = *(long *)puVar3;
          }
          uVar15 = FUN_01f76298(lVar17,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
          if ((uVar15 & 1) != 0) {
            FUN_01ea1b28(param_1,plVar18);
          }
        }
      }
    } while( true );
  }
  goto LAB_01e9a1b8;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_01e99d18:
    if (*(long *)(piVar16 + -2) == *(long *)puVar8) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01e99d4c;
    }
  }
LAB_01e99d30:
  puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar8,0);
LAB_01e99d4c:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_01e99d58:
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (plVar12 = (long *)FUN_01ec15c8(*(long *)(param_1 + 0x68),0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01e99dcc;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar4,0);
LAB_01e99dcc:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar5 = 
    Method_System_Collections_Generic_Dictionary<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>__ctor__
    ;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar3;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01e99e3c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,0);
LAB_01e99e3c:
      uVar15 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar15 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)puVar8);
        if (plVar12 == (long *)0x0) goto LAB_01e99f68;
        lVar11 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar15 == 0) goto LAB_01e99f40;
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_01e99f28;
      }
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar3;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01e99e9c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,1);
LAB_01e99e9c:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      bVar1 = *(byte *)(*(long *)puVar5 + 300);
      if ((*(byte *)(*plVar14 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar14);
      }
      if (plVar14[0xe] != 0) {
        FUN_01ea2110(param_1,plVar14);
      }
    } while( true );
  }
  goto LAB_01e9a1b8;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_01e9a138:
    if (*(long *)(piVar16 + -2) == *(long *)puVar8) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01e9a16c;
    }
  }
LAB_01e9a150:
  puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar8,0);
LAB_01e9a16c:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_01e9a178:
  uVar10 = FUN_01fac888(param_1,0);
  return (uVar10 ^ 1) & 1;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_01e99f28:
    if (*(long *)(piVar16 + -2) == *(long *)puVar8) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01e99f5c;
    }
  }
LAB_01e99f40:
  puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar8,0);
LAB_01e99f5c:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_01e99f68:
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (plVar12 = (long *)FUN_01ec15c8(*(long *)(param_1 + 0x50),0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01e99fdc;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar4,0);
LAB_01e99fdc:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar5 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar4 = Method_System_Collections_Generic_Dictionary<string,_CIELabColor>__ctor__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar5;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01e9a04c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,0);
LAB_01e9a04c:
      uVar15 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar15 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)puVar8);
        if (plVar12 == (long *)0x0) goto LAB_01e9a178;
        lVar11 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar15 == 0) goto LAB_01e9a150;
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_01e9a138;
      }
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar5;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01e9a0ac;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,lVar11,1);
LAB_01e9a0ac:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      bVar1 = *(byte *)(*(long *)puVar4 + 300);
      if ((*(byte *)(*plVar14 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar14);
      }
      if (plVar14[0xe] != 0) {
        FUN_01ea21c0(param_1,plVar14);
      }
    } while( true );
  }
LAB_01e9a1b8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


