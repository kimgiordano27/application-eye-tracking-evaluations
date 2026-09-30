/*
FUNCTION_NAME: FUN_01ea1b28
ENTRY_POINT: 01ea1b28
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01ea2034) */

void FUN_01ea1b28(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  long *plVar16;
  
  if ((DAT_0377fe68 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
    thunk_FUN_00d48444(StringLiteral_13941);
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_Utilities_DoubleLookupDictionary<ISerializationPolicy,_Type,_Dictionary<string,_MemberInfo>>_AddInner__
                      );
    thunk_FUN_00d48444(StringLiteral_9628);
    DAT_0377fe68 = 1;
  }
  puVar3 = Method_OVRPassthroughLayer_SetColorMapMonochromatic__;
  if (param_2 == 0) goto LAB_01ea202c;
  plVar15 = *(long **)(param_2 + 0x60);
  lVar7 = *(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__;
  if (plVar15 == (long *)0x0) {
LAB_01ea1c00:
    plVar15 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    if ((*(byte *)(*plVar15 + 300) < *(byte *)(lVar7 + 300)) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(lVar7 + 300) * 8 + -8) != lVar7))
    goto LAB_01ea1c00;
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_0377fd9c == '\0') {
      thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
      DAT_0377fd9c = '\x01';
    }
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *(long *)puVar3;
    }
    if ((plVar15 != (long *)**(undefined8 **)(lVar7 + 0xb8)) && (*(int *)(param_2 + 0x5c) == 4)) {
      uVar9 = FUN_01ea6d70(lVar7,*(undefined8 *)(param_2 + 0xb8));
      uVar10 = FUN_01ea6d70(uVar9,plVar15[0x17]);
      uVar13 = FUN_01ea7044(param_1,uVar9,uVar10);
      if ((uVar13 & 1) != 0) {
        return;
      }
      if (*(long *)(param_1 + 0x40) == 0) {
        FUN_01fad0ec(param_1,*(undefined8 *)StringLiteral_9628,param_2,0);
        return;
      }
      FUN_01fad05c(param_1,*(undefined8 *)
                            Method_Sirenix_Serialization_Utilities_DoubleLookupDictionary<ISerializationPolicy,_Type,_Dictionary<string,_MemberInfo>>_AddInner__
                   ,*(long *)(param_1 + 0x40),param_2,0);
      return;
    }
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_0377fd9c == '\0') {
    thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
    DAT_0377fd9c = '\x01';
  }
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar3;
  }
  if (plVar15 != (long *)**(undefined8 **)(lVar7 + 0xb8)) {
    return;
  }
  lVar7 = FUN_01ebc23c(param_2,0);
  if ((lVar7 != 0) && (plVar15 = (long *)FUN_01ec15c8(lVar7,0), plVar15 != (long *)0x0)) {
    lVar7 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_01ea1d88;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_00d59724(plVar15,*(long *)
                                   Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__,
                          0);
LAB_01ea1d88:
    puVar5 = StringLiteral_10310;
    plVar15 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
    puVar6 = StringLiteral_13941;
    puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar2 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar12 = *plVar15;
      lVar7 = *(long *)puVar4;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar7) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_01ea1e0c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar15,lVar7,0);
LAB_01ea1e0c:
      uVar13 = (*(code *)*puVar8)(plVar15,puVar8[1]);
      if ((uVar13 & 1) == 0) {
        plVar15 = (long *)thunk_FUN_00d6225c(plVar15,*(undefined8 *)puVar5);
        if (plVar15 == (long *)0x0) {
          return;
        }
        lVar12 = *plVar15;
        lVar7 = *(long *)puVar5;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar13 == 0) goto LAB_01ea1fa4;
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_01ea1f8c;
      }
      lVar12 = *plVar15;
      lVar7 = *(long *)puVar4;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar7) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_01ea1e6c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar15,lVar7,1);
LAB_01ea1e6c:
      plVar11 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      bVar1 = *(byte *)(*(long *)puVar6 + 300);
      if ((*(byte *)(*plVar11 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar11);
      }
      if (((char)plVar11[0xf] == '\0') && (plVar16 = (long *)plVar11[0x19], plVar16 != (long *)0x0))
      {
        bVar1 = *(byte *)(*(long *)puVar3 + 300);
        if ((bVar1 <= *(byte *)(*plVar16 + 300)) &&
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3)) {
          lVar7 = *(long *)puVar2;
          lVar12 = plVar11[0x16];
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar7 = *(long *)puVar2;
          }
          uVar13 = FUN_01f76298(lVar12,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8),0);
          if ((uVar13 & 1) != 0) {
            lVar7 = *(long *)puVar2;
            lVar12 = plVar11[0x14];
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar7 = *(long *)puVar2;
            }
            uVar13 = FUN_01f76298(lVar12,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8),0);
            if ((uVar13 & 1) != 0) {
              *(undefined1 *)(plVar11 + 0xf) = 1;
              FUN_01ea1b28(param_1,plVar16);
            }
          }
        }
      }
    } while( true );
  }
LAB_01ea202c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_01ea1f8c:
    if (*(long *)(piVar14 + -2) == lVar7) {
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_01ea1fc0;
    }
  }
LAB_01ea1fa4:
  puVar8 = (undefined8 *)FUN_00d59724(plVar15,lVar7,0);
LAB_01ea1fc0:
  (*(code *)*puVar8)(plVar15,puVar8[1]);
  return;
}


