/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vdup_laneq_u64
ENTRY_POINT: 01ffb268
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_7;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x01ffbbb4) */
/* WARNING: Removing unreachable block (ram,0x01ffc11c) */
/* WARNING: Removing unreachable block (ram,0x01ffc110) */

long * Unity_Burst_Intrinsics_Arm_Neon__vdup_laneq_u64(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long in_x9;
  ulong uVar19;
  int *in_x10;
  int *piVar20;
  long in_x11;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar12 = (undefined8 *)FUN_00d59724();
      goto LAB_01ffb29c;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar12 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
LAB_01ffb29c:
  iVar8 = (*(code *)*puVar12)();
  puVar1 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  puVar2 = Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__;
  if (iVar8 == 0) {
    return unaff_x23;
  }
  if (unaff_x19 != (long *)0x0) {
    lVar13 = *(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar13 = *(long *)puVar1;
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x38);
    if (lVar13 == 0) goto LAB_01ffc104;
    if (*(uint *)(lVar13 + 0x18) <= unaff_w20) goto LAB_01ffc108;
    lVar13 = lVar13 + (long)(int)unaff_w20 * 0x10;
    in_stack_00000020 = *(undefined8 *)(lVar13 + 0x20);
    in_stack_00000028 = *(undefined8 *)(lVar13 + 0x28);
    thunk_FUN_00d61fa0(*(undefined8 *)
                        UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo,
                       &stack0x00000020);
    lVar13 = *unaff_x19;
    uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) ==
            *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
          puVar12 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_01ffb390;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffb390:
    uVar14 = (*(code *)*puVar12)();
    plVar15 = (long *)thunk_FUN_00d6225c(uVar14,*unaff_x28);
    if (plVar15 != (long *)0x0) {
      lVar13 = *plVar15;
      uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x28) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_01ffb400;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724(plVar15,*unaff_x28,1);
LAB_01ffb400:
      iVar8 = (*(code *)*puVar12)(plVar15,puVar12[1]);
      if (unaff_x23 == (long *)0x0) goto LAB_01ffc104;
      lVar13 = *unaff_x23;
      uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x28) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_01ffb464;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffb464:
      iVar9 = (*(code *)*puVar12)();
      lVar13 = *unaff_x22;
      uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x28) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_01ffb4c4;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffb4c4:
      iVar10 = (*(code *)*puVar12)();
      if (iVar8 == iVar10 + iVar9) {
        lVar13 = *plVar15;
        uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
              puVar12 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_01ffb528;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724(plVar15,*(long *)puVar2,0);
LAB_01ffb528:
        plVar16 = (long *)(*(code *)*puVar12)(plVar15,puVar12[1]);
        lVar13 = *unaff_x23;
        uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
              puVar12 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_01ffb584;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffb584:
        plVar17 = (long *)(*(code *)*puVar12)();
        puVar1 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
        if (plVar17 == (long *)0x0) goto LAB_01ffc104;
        do {
          lVar13 = *plVar17;
          uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
                puVar12 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_01ffb5ec;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_00d59724(plVar17,*(long *)puVar1,0);
LAB_01ffb5ec:
          uVar19 = (*(code *)*puVar12)(plVar17,puVar12[1]);
          if ((uVar19 & 1) == 0) {
LAB_01ffb724:
            lVar13 = *unaff_x22;
            uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar19 == 0) goto LAB_01ffb754;
            piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            goto LAB_01ffb73c;
          }
          if (plVar16 == (long *)0x0) goto LAB_01ffc104;
          lVar13 = *plVar16;
          uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
                puVar12 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_01ffb64c;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_00d59724(plVar16,*(long *)puVar1,0);
LAB_01ffb64c:
          uVar19 = (*(code *)*puVar12)(plVar16,puVar12[1]);
          if ((uVar19 & 1) == 0) goto LAB_01ffb724;
          lVar13 = *plVar17;
          uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
                puVar12 = (undefined8 *)(lVar13 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_01ffb6ac;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_00d59724(plVar17,*(long *)puVar1,1);
LAB_01ffb6ac:
          lVar13 = (*(code *)*puVar12)(plVar17,puVar12[1]);
          lVar18 = *plVar16;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
                puVar12 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto FUN_01ffb70c;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_00d59724(plVar16,*(long *)puVar1,1);
FUN_01ffb70c:
          lVar18 = (*(code *)*puVar12)(plVar16,puVar12[1]);
        } while (lVar13 == lVar18);
      }
    }
  }
  goto LAB_01ffb904;
LAB_01ffbb34:
  plVar16 = (long *)thunk_FUN_00d6225c(plVar16,*(undefined8 *)puVar3);
  if (plVar16 != (long *)0x0) {
    lVar13 = *plVar16;
    uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
          puVar12 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_01ffbb9c;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar16,*(long *)puVar3,0);
LAB_01ffbb9c:
    (*(code *)*puVar12)(plVar16,puVar12[1]);
  }
  puVar1 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  lVar13 = *unaff_x22;
  uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
  if (uVar19 != 0) {
    piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
        puVar12 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_01ffbc0c;
      }
      uVar19 = uVar19 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar19 != 0);
  }
  puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffbc0c:
  plVar16 = (long *)(*(code *)*puVar12)();
  puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar18 = *plVar16;
    lVar13 = *(long *)puVar2;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar13) {
          puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_01ffbc74;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar16,lVar13,0);
LAB_01ffbc74:
    uVar19 = (*(code *)*puVar12)(plVar16,puVar12[1]);
    if ((uVar19 & 1) == 0) break;
    lVar18 = *plVar16;
    lVar13 = *(long *)puVar2;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar13) {
          puVar12 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_01ffbcd4;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar16,lVar13,1);
LAB_01ffbcd4:
    uVar14 = (*(code *)*puVar12)(plVar16,puVar12[1]);
    (**(code **)(*plVar15 + 0x308))(plVar15,uVar14,*(undefined8 *)(*plVar15 + 0x310));
  } while( true );
  plVar16 = (long *)thunk_FUN_00d6225c(plVar16,*(undefined8 *)puVar3);
  if (plVar16 != (long *)0x0) {
    lVar13 = *plVar16;
    uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
          puVar12 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_01ffbd60;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar16,*(long *)puVar3,0);
LAB_01ffbd60:
    (*(code *)*puVar12)(plVar16,puVar12[1]);
  }
  puVar7 = StringLiteral_3724;
  puVar6 = Method_System_Runtime_Serialization_Formatters_Binary_BinaryAssemblyInfo_GetAssembly__;
  puVar5 = Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__;
  puVar4 = System_Xml_QueryOutputWriter_TypeInfo;
  puVar3 = System_IndexOutOfRangeException_TypeInfo;
  puVar2 = System_Data_SqlTypes_SqlByte___TypeInfo;
  if (unaff_x19 == (long *)0x0) {
    return plVar15;
  }
  if (unaff_w20 == 2) {
    uVar11 = (**(code **)(*plVar15 + 0x298))(plVar15,*(undefined8 *)(*plVar15 + 0x2a0));
    uVar14 = FUN_00da4fb8(*(undefined8 *)puVar3,uVar11);
    (**(code **)(*plVar15 + 0x368))(plVar15,uVar14,0,*(undefined8 *)(*plVar15 + 0x370));
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar13 == 0) goto LAB_01ffc104;
    FUN_01fd8fec(lVar13,uVar14,1,0);
  }
  else if (unaff_w20 == 1) {
    uVar11 = (**(code **)(*plVar15 + 0x298))(plVar15,*(undefined8 *)(*plVar15 + 0x2a0));
    uVar14 = FUN_00da4fb8(*(undefined8 *)puVar5,uVar11);
    (**(code **)(*plVar15 + 0x368))(plVar15,uVar14,0,*(undefined8 *)(*plVar15 + 0x370));
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
    if (lVar13 == 0) goto LAB_01ffc104;
    FUN_01fdf08c(lVar13,uVar14,1,0);
  }
  else if (unaff_w20 == 0) {
    uVar11 = (**(code **)(*plVar15 + 0x298))(plVar15,*(undefined8 *)(*plVar15 + 0x2a0));
    uVar14 = FUN_00da4fb8(*(undefined8 *)puVar4,uVar11);
    (**(code **)(*plVar15 + 0x368))(plVar15,uVar14,0,*(undefined8 *)(*plVar15 + 0x370));
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
    if (lVar13 == 0) goto LAB_01ffc104;
    FUN_020cc648(lVar13,uVar14,0);
  }
  lVar13 = *(long *)puVar1;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar13 = *(long *)puVar1;
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x38);
  if (lVar13 != 0) {
    if (unaff_w20 < *(uint *)(lVar13 + 0x18)) {
      lVar13 = lVar13 + (long)(int)unaff_w20 * 0x10;
      in_stack_00000020 = *(undefined8 *)(lVar13 + 0x20);
      in_stack_00000028 = *(undefined8 *)(lVar13 + 0x28);
      thunk_FUN_00d61fa0(*(undefined8 *)
                          UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo,
                         &stack0x00000020);
      lVar13 = *unaff_x19;
      uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) ==
              *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_01ffbf9c;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffbf9c:
      (*(code *)*puVar12)();
      lVar13 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
      if (lVar13 == 0) goto LAB_01ffc104;
      if (unaff_w20 < *(uint *)(lVar13 + 0x18)) {
        lVar13 = lVar13 + (long)(int)unaff_w20 * 0x10;
        in_stack_00000010 = *(undefined8 *)(lVar13 + 0x20);
        in_stack_00000018 = *(undefined8 *)(lVar13 + 0x28);
        thunk_FUN_00d61fa0(*(undefined8 *)
                            UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                           ,&stack0x00000010);
        lVar13 = *unaff_x19;
        uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) ==
                *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
              puVar12 = (undefined8 *)(lVar13 + (long)(*piVar20 + 10) * 0x10 + 0x138);
              goto LAB_01ffc048;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffc048:
        (*(code *)*puVar12)();
        lVar13 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48);
        if (lVar13 == 0) goto LAB_01ffc104;
        if (unaff_w20 < *(uint *)(lVar13 + 0x18)) {
          thunk_FUN_00d61fa0(*(undefined8 *)
                              UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                            );
          lVar13 = *unaff_x19;
          uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) ==
                  *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
                puVar12 = (undefined8 *)(lVar13 + (long)(*piVar20 + 10) * 0x10 + 0x138);
                goto LAB_01ffc0f0;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffc0f0:
          (*(code *)*puVar12)();
          return plVar15;
        }
      }
    }
LAB_01ffc108:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  goto LAB_01ffc104;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_01ffb73c:
    if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
      puVar12 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_01ffb770;
    }
  }
LAB_01ffb754:
  puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffb770:
  plVar17 = (long *)(*(code *)*puVar12)();
  if (plVar17 == (long *)0x0) goto LAB_01ffc104;
  do {
    lVar13 = *plVar17;
    uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
          puVar12 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_01ffb7d0;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar17,*(long *)puVar1,0);
LAB_01ffb7d0:
    uVar19 = (*(code *)*puVar12)(plVar17,puVar12[1]);
    if ((uVar19 & 1) == 0) {
      return plVar15;
    }
    if (plVar16 == (long *)0x0) goto LAB_01ffc104;
    lVar13 = *plVar16;
    uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
          puVar12 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_01ffb830;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar16,*(long *)puVar1,0);
LAB_01ffb830:
    uVar19 = (*(code *)*puVar12)(plVar16,puVar12[1]);
    if ((uVar19 & 1) == 0) {
      return plVar15;
    }
    lVar13 = *plVar17;
    uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
          puVar12 = (undefined8 *)(lVar13 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_01ffb890;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar17,*(long *)puVar1,1);
LAB_01ffb890:
    lVar13 = (*(code *)*puVar12)(plVar17,puVar12[1]);
    lVar18 = *plVar16;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
          puVar12 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_01ffb8f0;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar16,*(long *)puVar1,1);
LAB_01ffb8f0:
    lVar18 = (*(code *)*puVar12)(plVar16,puVar12[1]);
  } while (lVar13 == lVar18);
LAB_01ffb904:
  if (unaff_x23 != (long *)0x0) {
    lVar13 = *unaff_x23;
    uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x28) {
          puVar12 = (undefined8 *)(lVar13 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto Unity_Burst_Intrinsics_Arm_Neon__vpaddq_f32;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724();
Unity_Burst_Intrinsics_Arm_Neon__vpaddq_f32:
    puVar1 = PTR_DAT_033ee168;
    iVar8 = (*(code *)*puVar12)();
    lVar13 = *unaff_x22;
    uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x28) {
          puVar12 = (undefined8 *)(lVar13 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_01ffb9c0;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffb9c0:
    iVar9 = (*(code *)*puVar12)();
    plVar15 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (plVar15 != (long *)0x0) {
      FUN_01743cd4(plVar15,iVar9 + iVar8,0);
      lVar13 = *unaff_x23;
      uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
            puVar12 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_01ffba3c;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffba3c:
      puVar3 = StringLiteral_10310;
      plVar16 = (long *)(*(code *)*puVar12)();
      puVar1 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar18 = *plVar16;
        lVar13 = *(long *)puVar1;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar13) {
              puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_01ffbaac;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724(plVar16,lVar13,0);
LAB_01ffbaac:
        uVar19 = (*(code *)*puVar12)(plVar16,puVar12[1]);
        if ((uVar19 & 1) == 0) goto LAB_01ffbb34;
        lVar18 = *plVar16;
        lVar13 = *(long *)puVar1;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar13) {
              puVar12 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_01ffbb0c;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724(plVar16,lVar13,1);
LAB_01ffbb0c:
        uVar14 = (*(code *)*puVar12)(plVar16,puVar12[1]);
        (**(code **)(*plVar15 + 0x308))(plVar15,uVar14,*(undefined8 *)(*plVar15 + 0x310));
      } while( true );
    }
  }
LAB_01ffc104:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


