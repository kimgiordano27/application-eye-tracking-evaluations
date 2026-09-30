/*
FUNCTION_NAME: FUN_01e7c3d0
ENTRY_POINT: 01e7c3d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_20;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01e7cea4) */
/* WARNING: Removing unreachable block (ram,0x01e7ca24) */

void FUN_01e7c3d0(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  char cVar9;
  byte bVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  long *plVar21;
  undefined8 uVar22;
  long lVar23;
  
  if ((DAT_0377fde6 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_lane_s32__);
    thunk_FUN_00d48444(StringLiteral_14387);
    thunk_FUN_00d48444(PTR_DAT_033ed488);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_System_Xml_Linq_XNamespace_Get__);
    thunk_FUN_00d48444(System_Xml_Schema_DtdValidator_TypeInfo);
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<WeakReference>_Clear__);
    thunk_FUN_00d48444(System_UnhandledExceptionEventHandler_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12689);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_Subscriber>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    thunk_FUN_00d48444(StringLiteral_6455);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<OutRec>_MoveNext__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vminq_s8__);
    DAT_0377fde6 = 1;
  }
  if (param_2 == 0) goto LAB_01e7ce94;
  lVar13 = FUN_01ecb830(param_2,0);
  if (lVar13 != 0) {
    return;
  }
  if (*(char *)(param_2 + 0x30) != '\0') {
    FUN_01fad0ec(param_1,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vminq_s8__,param_2,0)
    ;
    return;
  }
  plVar21 = *(long **)(param_2 + 0x98);
  *(undefined1 *)(param_2 + 0x30) = 1;
  puVar3 = Method_OVRPassthroughLayer_SetColorMapMonochromatic__;
  puVar2 = System_UnhandledExceptionEventHandler_TypeInfo;
  if (plVar21 == (long *)0x0) {
    if (*(int *)(*(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_0377fd9c == '\0') {
      thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
      DAT_0377fd9c = '\x01';
    }
    lVar13 = *(long *)puVar3;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      cVar9 = DAT_0377fd9c;
      lVar13 = *(long *)puVar3;
      *(undefined8 *)(param_2 + 0x60) = **(undefined8 **)(lVar13 + 0xb8);
      if (cVar9 == '\0') {
        thunk_FUN_00d48444(puVar3);
        lVar13 = *(long *)puVar3;
        DAT_0377fd9c = '\x01';
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x60) = **(undefined8 **)(lVar13 + 0xb8);
    }
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar13 = *(long *)puVar3;
    }
    uVar22 = **(undefined8 **)(lVar13 + 0xb8);
    uVar17 = FUN_01ebc134(param_2,0);
    FUN_01e813b4(param_1,uVar22,param_2,uVar17,*(undefined8 *)(param_2 + 0xb0),4);
    *(undefined4 *)(param_2 + 0x5c) = 4;
    uVar17 = FUN_01e82870(param_1,*(undefined8 *)(param_2 + 0xa0),1);
    *(undefined8 *)(param_2 + 0xb8) = uVar17;
    uVar11 = FUN_01e829e0(uVar17,param_2,0,uVar17);
    *(undefined4 *)(param_2 + 0x90) = uVar11;
  }
  else {
    lVar13 = *plVar21;
    bVar10 = *(byte *)(*(long *)StringLiteral_6455 + 300);
    if ((*(byte *)(lVar13 + 300) < bVar10) ||
       (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar10 * 8 + -8) != *(long *)StringLiteral_6455))
    {
      bVar10 = *(byte *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_GetEnumerator__
                        + 300);
      if ((*(byte *)(lVar13 + 300) < bVar10) ||
         (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar10 * 8 + -8) !=
          *(long *)
           Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_GetEnumerator__
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar21);
      }
      plVar14 = (long *)(**(code **)(lVar13 + 0x218))(plVar21,*(undefined8 *)(lVar13 + 0x220));
      if (plVar14 == (long *)0x0) {
LAB_01e7c5f8:
        plVar14 = (long *)0x0;
      }
      else {
        lVar13 = *(long *)puVar2;
        bVar10 = *(byte *)(lVar13 + 300);
        if (*(byte *)(*plVar14 + 300) < bVar10) goto LAB_01e7c5f8;
        if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar10 * 8 + -8) != lVar13) {
          plVar14 = (long *)0x0;
        }
      }
      plVar15 = (long *)(**(code **)(*plVar21 + 0x218))(plVar21,*(undefined8 *)(*plVar21 + 0x220));
      if (plVar14 == (long *)0x0) {
        if (plVar15 != (long *)0x0) {
          bVar10 = *(byte *)(*(long *)StringLiteral_12689 + 300);
          if ((*(byte *)(*plVar15 + 300) < bVar10) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar10 * 8 + -8) !=
              *(long *)StringLiteral_12689)) goto LAB_01e7cebc;
        }
        FUN_01e810dc(param_1,param_2,plVar21);
      }
      else {
        if (plVar15 != (long *)0x0) {
          lVar13 = *(long *)puVar2;
          bVar10 = *(byte *)(lVar13 + 300);
          if ((*(byte *)(*plVar15 + 300) < bVar10) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar10 * 8 + -8) != lVar13)) {
LAB_01e7cebc:
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar15);
          }
        }
        FUN_01e80d14(param_1,param_2,plVar21);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x90) = 0;
      puVar2 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_Subscriber>__;
      plVar14 = (long *)(**(code **)(*plVar21 + 0x218))(plVar21,*(undefined8 *)(*plVar21 + 0x220));
      if (plVar14 == (long *)0x0) {
LAB_01e7cdc0:
        plVar14 = (long *)0x0;
      }
      else {
        lVar13 = *(long *)puVar2;
        bVar10 = *(byte *)(lVar13 + 300);
        if (*(byte *)(*plVar14 + 300) < bVar10) goto LAB_01e7cdc0;
        if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar10 * 8 + -8) != lVar13) {
          plVar14 = (long *)0x0;
        }
      }
      plVar21 = (long *)(**(code **)(*plVar21 + 0x218))(plVar21,*(undefined8 *)(*plVar21 + 0x220));
      if (plVar14 == (long *)0x0) {
        if (plVar21 != (long *)0x0) {
          bVar10 = *(byte *)(*(long *)
                              Method_System_Collections_Generic_Dictionary<string,_string>__ctor__ +
                            300);
          if ((*(byte *)(*plVar21 + 300) < bVar10) ||
             (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar10 * 8 + -8) !=
              *(long *)Method_System_Collections_Generic_Dictionary<string,_string>__ctor__))
          goto LAB_01e7cec4;
        }
        FUN_01e808ec(param_1,param_2);
      }
      else {
        if (plVar21 != (long *)0x0) {
          lVar13 = *(long *)puVar2;
          bVar10 = *(byte *)(lVar13 + 300);
          if ((*(byte *)(*plVar21 + 300) < bVar10) ||
             (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar10 * 8 + -8) != lVar13)) {
LAB_01e7cec4:
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar21);
          }
        }
        FUN_01e806ac(param_1,param_2);
      }
    }
  }
  lVar13 = FUN_01ebc1c8(param_2,0);
  if ((lVar13 != 0) &&
     (plVar21 = (long *)FUN_01ec15c8(lVar13,0),
     puVar2 = Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__,
     plVar21 != (long *)0x0)) {
    lVar13 = *plVar21;
    uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) ==
            *(long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__) {
          puVar16 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_01e7c828;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar16 = (undefined8 *)
              FUN_00d59724(plVar21,*(long *)
                                    Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__
                           ,0);
LAB_01e7c828:
    puVar5 = StringLiteral_10310;
    puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar4 = Method_System_Collections_Generic_List<WeakReference>_Clear__;
    plVar21 = (long *)(*(code *)*puVar16)(plVar21,puVar16[1]);
    puVar3 = Method_System_Collections_Generic_List_Enumerator<OutRec>_MoveNext__;
    if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    bVar1 = false;
    do {
      lVar13 = *plVar21;
      uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
            puVar16 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_01e7c8b0;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar16 = (undefined8 *)FUN_00d59724(plVar21,*(long *)puVar6,0);
LAB_01e7c8b0:
      uVar19 = (*(code *)*puVar16)(plVar21,puVar16[1]);
      if ((uVar19 & 1) == 0) {
        plVar21 = (long *)thunk_FUN_00d6225c(plVar21,*(undefined8 *)puVar5);
        if (plVar21 == (long *)0x0) goto LAB_01e7ca18;
        lVar18 = *plVar21;
        lVar13 = *(long *)puVar5;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
        if (uVar19 == 0) goto LAB_01e7c9f0;
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        goto LAB_01e7c9d8;
      }
      lVar13 = *plVar21;
      uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
            puVar16 = (undefined8 *)(lVar13 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_01e7c910;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar16 = (undefined8 *)FUN_00d59724(plVar21,*(long *)puVar6,1);
LAB_01e7c910:
      plVar14 = (long *)(*(code *)*puVar16)(plVar21,puVar16[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar13 = *(long *)puVar4;
      bVar10 = *(byte *)(lVar13 + 300);
      if ((*(byte *)(*plVar14 + 300) < bVar10) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar10 * 8 + -8) != lVar13)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      if ((*(int *)((long)plVar14 + 0x6c) != 2) &&
         (plVar14 = (long *)FUN_01eba29c(plVar14,0), plVar14 != (long *)0x0)) {
        iVar12 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
        if (iVar12 == 1 && bVar1) {
          FUN_01fad0ec(param_1,*(undefined8 *)puVar3,param_2,0);
        }
        else {
          bVar1 = (bool)(bVar1 | iVar12 == 1);
        }
      }
    } while( true );
  }
LAB_01e7ce94:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_01e7c9d8:
    if (*(long *)(piVar20 + -2) == lVar13) {
      puVar16 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_01e7ca0c;
    }
  }
LAB_01e7c9f0:
  puVar16 = (undefined8 *)FUN_00d59724(plVar21,lVar13,0);
LAB_01e7ca0c:
  (*(code *)*puVar16)(plVar21,puVar16[1]);
LAB_01e7ca18:
  lVar13 = thunk_FUN_00d62348(*(undefined8 *)System_Xml_Schema_DtdValidator_TypeInfo);
  if (lVar13 != 0) {
    FUN_01e91264(lVar13,0);
    uVar17 = FUN_01e82a50(param_1,param_2);
    *(undefined8 *)(lVar13 + 0x80) = uVar17;
    *(long *)(lVar13 + 0x28) = param_2;
    bVar10 = FUN_01ebc0b4(param_2,0);
    *(byte *)(lVar13 + 0x72) = bVar10 & 1;
    *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)(param_2 + 0x68);
    *(undefined4 *)(lVar13 + 0x90) = *(undefined4 *)(param_2 + 0xc0);
    *(undefined8 *)(lVar13 + 0x88) = *(undefined8 *)(param_2 + 0xd8);
    lVar18 = FUN_01ebc1c8(param_2,0);
    if ((lVar18 != 0) && (plVar21 = (long *)FUN_01ec15c8(lVar18,0), plVar21 != (long *)0x0)) {
      lVar18 = *plVar21;
      uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
            puVar16 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_01e7caf4;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar16 = (undefined8 *)FUN_00d59724(plVar21,*(long *)puVar2,0);
LAB_01e7caf4:
      plVar21 = (long *)(*(code *)*puVar16)(plVar21,puVar16[1]);
      puVar8 = StringLiteral_14387;
      puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_lane_s32__;
      puVar3 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
      puVar2 = PTR_DAT_033ed488;
      if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar18 = *plVar21;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
              puVar16 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_01e7cb74;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar16 = (undefined8 *)FUN_00d59724(plVar21,*(long *)puVar6,0);
LAB_01e7cb74:
        uVar19 = (*(code *)*puVar16)(plVar21,puVar16[1]);
        puVar7 = StringLiteral_10310;
        if ((uVar19 & 1) == 0) {
          plVar21 = (long *)thunk_FUN_00d6225c(plVar21,*(undefined8 *)StringLiteral_10310);
          if (plVar21 == (long *)0x0) goto System_Xml_Serialization_TypeData__get_SchemaType;
          lVar18 = *plVar21;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar19 == 0) goto LAB_01e7cd40;
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          goto LAB_01e7cd28;
        }
        lVar18 = *plVar21;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
              puVar16 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_01e7cbd4;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar16 = (undefined8 *)FUN_00d59724(plVar21,*(long *)puVar6,1);
LAB_01e7cbd4:
        plVar14 = (long *)(*(code *)*puVar16)(plVar21,puVar16[1]);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar18 = *(long *)puVar4;
        bVar10 = *(byte *)(lVar18 + 300);
        if ((*(byte *)(*plVar14 + 300) < bVar10) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar10 * 8 + -8) != lVar18)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar14);
        }
        if (*(int *)((long)plVar14 + 0x6c) == 2) {
          if (*(long *)(lVar13 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar19 = FUN_0129aa60(*(long *)(lVar13 + 0x78),plVar14[0x10],*(undefined8 *)puVar8);
          if ((uVar19 & 1) == 0) {
            if (*(long *)(lVar13 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_0129a054(*(long *)(lVar13 + 0x78),plVar14[0x10],plVar14[0x10],*(undefined8 *)puVar5)
            ;
          }
        }
        else {
          if (*(long *)(lVar13 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar19 = FUN_0129aa60(*(long *)(lVar13 + 0x60),plVar14[0x10],*(undefined8 *)puVar2);
          if (((uVar19 & 1) == 0) && (plVar14[0x13] != 0)) {
            lVar18 = *(long *)puVar3;
            uVar17 = *(undefined8 *)(plVar14[0x13] + 0x10);
            if (*(int *)(lVar18 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar18 = *(long *)puVar3;
            }
            uVar19 = FUN_01f76228(uVar17,*(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8),0);
            if ((uVar19 & 1) != 0) {
              lVar23 = plVar14[0x13];
              lVar18 = *(long *)Method_System_Xml_Linq_XNamespace_Get__;
              if (*(int *)(lVar18 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar18 = *(long *)Method_System_Xml_Linq_XNamespace_Get__;
              }
              if (lVar23 != **(long **)(lVar18 + 0xb8)) {
                FUN_01e917b4(lVar13,plVar14[0x13],0);
              }
            }
          }
        }
      } while( true );
    }
  }
  goto LAB_01e7ce94;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_01e7cd28:
    if (*(long *)(piVar20 + -2) == *(long *)puVar7) {
      puVar16 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_01e7cd5c;
    }
  }
LAB_01e7cd40:
  puVar16 = (undefined8 *)FUN_00d59724(plVar21,*(long *)puVar7,0);
LAB_01e7cd5c:
  (*(code *)*puVar16)(plVar21,puVar16[1]);
System_Xml_Serialization_TypeData__get_SchemaType:
  FUN_01ecb848(param_2,lVar13,0);
  *(undefined1 *)(param_2 + 0x30) = 0;
  return;
}


