/*
FUNCTION_NAME: FUN_01feb0a4
ENTRY_POINT: 01feb0a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01febaa0) */

void FUN_01feb0a4(long *param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  uint uVar21;
  ulong uVar22;
  
  puVar3 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if ((DAT_03780801 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_GC_CollectionCount__);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKAnchor>_AddListener__);
    thunk_FUN_00d48444(Mono_Security_Cryptography_PKCS1_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(System_Xml_Schema_Datatype_NOTATION_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f65b8);
    thunk_FUN_00d48444(PTR_DAT_033eea80);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_SaveBindingOverridesAsJson__
                      );
    thunk_FUN_00d48444(StringLiteral_3919);
    thunk_FUN_00d48444(Method_SoccerBlocker_HideCrowd__);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_PointerEventData>__ctor__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(System_Xml_Schema_XmlSchemaSimpleTypeList_TypeInfo);
    DAT_03780801 = 1;
  }
  uVar6 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  lVar7 = FUN_01ff5160(uVar6,0);
  puVar2 = StringLiteral_10310;
  puVar3 = System_Xml_Schema_Datatype_NOTATION_TypeInfo;
  if (lVar7 != 0) {
    plVar8 = (long *)FUN_020cd250(lVar7,0);
    puVar5 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar4 = Mono_Security_Cryptography_PKCS1_TypeInfo;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar15 = *plVar8;
      lVar7 = *(long *)puVar5;
      uVar19 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar7) {
            puVar9 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
            goto Unity_Burst_Intrinsics_Arm_Neon__vqdmlsl_n_s32;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar8,lVar7,0);
Unity_Burst_Intrinsics_Arm_Neon__vqdmlsl_n_s32:
      uVar19 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar19 & 1) == 0) {
        uVar21 = 0;
        plVar8 = (long *)thunk_FUN_00d6225c(plVar8,*(undefined8 *)puVar2);
        if (plVar8 == (long *)0x0) goto LAB_01feb3d8;
        lVar15 = *plVar8;
        lVar7 = *(long *)puVar2;
        uVar19 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar19 == 0) goto LAB_01feb3b0;
        piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_01feb398;
      }
      lVar15 = *plVar8;
      lVar7 = *(long *)puVar5;
      uVar19 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar7) {
            puVar9 = (undefined8 *)(lVar15 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_01feb2c0;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar8,lVar7,1);
LAB_01feb2c0:
      plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar4 + 300);
        if ((*(byte *)(*plVar10 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar10);
        }
      }
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar7 = *param_2;
      uVar19 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar20 + 2) * 0x10 + 0x138);
            goto LAB_01feb354;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar3,2);
LAB_01feb354:
      (*(code *)*puVar9)(param_2,plVar10,puVar9[1]);
    } while( true );
  }
  goto LAB_01feba80;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_01feb398:
    if (*(long *)(piVar20 + -2) == lVar7) {
      puVar9 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_01feb3cc;
    }
  }
LAB_01feb3b0:
  puVar9 = (undefined8 *)FUN_00d59724(plVar8,lVar7,0);
LAB_01feb3cc:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_01feb3d8:
  puVar9 = (undefined8 *)Method_SoccerBlocker_HideCrowd__;
  puVar5 = Method_System_GC_CollectionCount__;
  puVar4 = Method_UnityEngine_Events_UnityEvent<MRUKAnchor>_AddListener__;
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  plVar8 = (long *)param_1[0x11];
  do {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar19 = FUN_0178a8c4(plVar8,0,0);
    if ((uVar19 & 1) == 0) {
LAB_01feb47c:
      if ((int)uVar21 < 1) goto LAB_01feb988;
      plVar10 = (long *)param_1[0x11];
      plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar4,uVar21);
      break;
    }
    uVar6 = *puVar9;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_01780344(uVar6,0);
    uVar19 = FUN_0178a8c4(plVar8,uVar6,0);
    if ((uVar19 & 1) == 0) goto LAB_01feb47c;
    if (plVar8 == (long *)0x0) goto LAB_01feba80;
    uVar21 = uVar21 + 1;
    plVar8 = (long *)(**(code **)(*plVar8 + 0x888))(plVar8,*(undefined8 *)(*plVar8 + 0x890));
  } while( true );
LAB_01feb498:
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar19 = FUN_0178a8c4(plVar10,0,0);
  if ((uVar19 & 1) == 0) {
LAB_01feb6a8:
    if (plVar8 == (long *)0x0) goto LAB_01feba80;
    uVar19 = plVar8[3] & 0xffffffff;
    if ((int)plVar8[3] < 1) goto LAB_01feb8b8;
    uVar22 = 0;
    goto LAB_01feb6c0;
  }
  uVar6 = *puVar9;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_01780344(uVar6,0);
  uVar19 = FUN_0178a8c4(plVar10,uVar6,0);
  if ((uVar19 & 1) == 0) goto LAB_01feb6a8;
  uVar19 = FUN_01fea3ac(param_1);
  uVar6 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
  if ((uVar19 & 1) == 0) {
    uVar12 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
    uVar13 = FUN_00da4fb8(*(undefined8 *)
                           Method_System_Collections_Generic_List<PropertyInfo>_get_Item__,0);
    uVar14 = FUN_00da4fb8(*(undefined8 *)PTR_DAT_033f65b8,0);
    if (plVar10 == (long *)0x0) goto LAB_01feba80;
    uVar6 = FUN_0178c774(plVar10,uVar6,0x36,0,uVar12,uVar13,uVar14,0);
  }
  else {
    uVar6 = FUN_015f5b28(*(undefined8 *)System_Xml_Schema_XmlSchemaSimpleTypeList_TypeInfo,uVar6,0);
    plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)
                                    Method_System_Collections_Generic_List<PropertyInfo>_get_Item__,
                                   1);
    if (plVar11 == (long *)0x0) goto LAB_01feba80;
    lVar7 = param_1[0x1b];
    if ((lVar7 != 0) &&
       (lVar15 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
    goto LAB_01feba90;
    if ((int)plVar11[3] == 0) goto LAB_01feba7c;
    plVar11[4] = lVar7;
    if (plVar10 == (long *)0x0) goto LAB_01feba80;
    uVar6 = FUN_0178c440(plVar10,uVar6,0x36,0,plVar11,0,0);
  }
  puVar9 = (undefined8 *)Method_SoccerBlocker_HideCrowd__;
  uVar19 = FUN_0169ad7c(uVar6,0,0);
  if ((uVar19 & 1) != 0) {
    if (*(int *)(*(long *)StringLiteral_3919 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar7 = FUN_01ff4658(uVar6,0);
    if (plVar8 == (long *)0x0) goto LAB_01feba80;
    if ((lVar7 != 0) &&
       (lVar15 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar15 == 0)) {
LAB_01feba90:
      uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar6,0);
    }
    uVar21 = uVar21 - 1;
    if (*(uint *)(plVar8 + 3) <= uVar21) goto LAB_01feba7c;
    plVar8[(long)(int)uVar21 + 4] = lVar7;
  }
  plVar10 = (long *)(**(code **)(*plVar10 + 0x888))(plVar10,*(undefined8 *)(*plVar10 + 0x890));
  goto LAB_01feb498;
LAB_01feb6c0:
  do {
    if (uVar19 <= uVar22) goto LAB_01feba7c;
    lVar7 = plVar8[uVar22 + 4];
    if ((lVar7 != 0) && (0 < (int)*(ulong *)(lVar7 + 0x18))) {
      uVar19 = 0;
      uVar16 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar16 <= uVar19) goto LAB_01feba7c;
        plVar10 = *(long **)(lVar7 + uVar19 * 8 + 0x20);
        if (plVar10 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar5 + 300);
          if ((bVar1 <= *(byte *)(*plVar10 + 300)) &&
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar5)) {
            lVar15 = plVar10[2];
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar15 = FUN_00da52a8(lVar15,*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<int,_PointerEventData>__ctor__
                                  ,*(undefined8 *)
                                    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_SaveBindingOverridesAsJson__
                                 );
            uVar16 = FUN_0178a8c4(lVar15,0,0);
            if ((uVar16 & 1) != 0) {
              uVar16 = FUN_015ff8a0(plVar10[3],0);
              if ((uVar16 & 1) == 0) {
                if ((lVar15 == 0) || (lVar15 = FUN_0178c314(lVar15,plVar10[3],0), lVar15 == 0))
                goto LAB_01feba80;
                if (*(long *)(lVar15 + 0x18) != 0) {
                  if ((int)*(long *)(lVar15 + 0x18) == 0) goto LAB_01feba7c;
                  uVar16 = FUN_0169ad7c(*(undefined8 *)(lVar15 + 0x20),0,0);
                  if ((uVar16 & 1) != 0) {
                    if (*(int *)(lVar15 + 0x18) != 0) {
                      lVar15 = *(long *)(lVar15 + 0x20);
                      goto LAB_01feb7dc;
                    }
                    goto LAB_01feba7c;
                  }
                }
              }
              else {
LAB_01feb7dc:
                if (*(int *)(*(long *)StringLiteral_3919 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar15 = FUN_01ff4658(lVar15,0);
                if ((lVar15 != 0) && (0 < (int)*(ulong *)(lVar15 + 0x18))) {
                  uVar16 = 0;
                  uVar17 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
                  do {
                    if (uVar17 <= uVar16) goto LAB_01feba7c;
                    if (param_2 == (long *)0x0) goto LAB_01feba80;
                    lVar18 = *param_2;
                    uVar6 = *(undefined8 *)(lVar15 + uVar16 * 8 + 0x20);
                    uVar17 = (ulong)*(ushort *)(lVar18 + 0x12a);
                    if (uVar17 != 0) {
                      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
                          puVar9 = (undefined8 *)(lVar18 + (long)(*piVar20 + 2) * 0x10 + 0x138);
                          goto LAB_01feb878;
                        }
                        uVar17 = uVar17 - 1;
                        piVar20 = piVar20 + 4;
                      } while (uVar17 != 0);
                    }
                    puVar9 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar3,2);
LAB_01feb878:
                    (*(code *)*puVar9)(param_2,uVar6,puVar9[1]);
                    uVar17 = (ulong)*(uint *)(lVar15 + 0x18);
                    uVar16 = uVar16 + 1;
                  } while ((long)uVar16 < (long)(int)*(uint *)(lVar15 + 0x18));
                }
              }
            }
          }
        }
        uVar16 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar19 = uVar19 + 1;
      } while ((long)uVar19 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    uVar19 = (ulong)*(uint *)(plVar8 + 3);
    uVar22 = uVar22 + 1;
  } while ((long)uVar22 < (long)(int)*(uint *)(plVar8 + 3));
LAB_01feb8b8:
  if (0 < (int)uVar19) {
    uVar22 = 0;
    do {
      if (uVar19 <= uVar22) {
LAB_01feba7c:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar7 = plVar8[uVar22 + 4];
      if ((lVar7 != 0) && (0 < (int)*(ulong *)(lVar7 + 0x18))) {
        uVar19 = 0;
        uVar16 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        do {
          if (uVar16 <= uVar19) goto LAB_01feba7c;
          if (param_2 == (long *)0x0) goto LAB_01feba80;
          lVar15 = *param_2;
          uVar6 = *(undefined8 *)(lVar7 + uVar19 * 8 + 0x20);
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar16 != 0) {
            piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar15 + (long)(*piVar20 + 2) * 0x10 + 0x138);
                goto LAB_01feb954;
              }
              uVar16 = uVar16 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar3,2);
LAB_01feb954:
          (*(code *)*puVar9)(param_2,uVar6,puVar9[1]);
          uVar16 = (ulong)*(uint *)(lVar7 + 0x18);
          uVar19 = uVar19 + 1;
        } while ((long)uVar19 < (long)(int)*(uint *)(lVar7 + 0x18));
        uVar19 = (ulong)*(uint *)(plVar8 + 3);
      }
      uVar22 = uVar22 + 1;
    } while ((long)uVar22 < (long)(int)uVar19);
  }
LAB_01feb988:
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_01fdeba0(param_1,param_2);
  uVar6 = FUN_01fea50c(param_1);
  uVar19 = FUN_0169f70c(uVar6,0,0);
  puVar2 = PTR_DAT_033eea80;
  if ((uVar19 & 1) == 0) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_033eea80;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar2;
  }
  if (param_2 != (long *)0x0) {
    lVar15 = *param_2;
    uVar6 = **(undefined8 **)(lVar7 + 0xb8);
    uVar19 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar15 + (long)(*piVar20 + 2) * 0x10 + 0x138);
          goto LAB_01feba50;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar3,2);
LAB_01feba50:
                    /* WARNING: Could not recover jumptable at 0x01feba78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar9)(param_2,uVar6,puVar9[1]);
    return;
  }
LAB_01feba80:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


