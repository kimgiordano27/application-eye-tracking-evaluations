/*
FUNCTION_NAME: FUN_065c7820
ENTRY_POINT: 065c7820
PROGRAM: Untangled-libil2cpp.so
SCORE: 96
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_7;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * FUN_065c7820(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  undefined8 local_68;
  
  puVar2 = ES3Types_ES3Type_longArray_TypeInfo;
  if ((DAT_071ceba4 & 1) == 0) {
    FUN_02f07e70(System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d023f0);
    FUN_02f07e70(PTR_DAT_06d04108);
    FUN_02f07e70(System_Collections_Generic_HashSet<StyleSheet>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<Text>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<TrackableId>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<uint>_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_GuidArray_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_Material_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_longArray_TypeInfo);
    DAT_071ceba4 = 1;
  }
  plVar7 = (long *)thunk_FUN_02ef1808(*(undefined8 *)puVar2);
  UnityEngine_Object__FindObjectFromInstanceID(plVar7,0);
  puVar2 = System_Collections_Generic_HashSet<Text>_TypeInfo;
  plVar15 = (long *)param_1[3];
  if (plVar15 != (long *)0x0) {
    lVar12 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)System_Collections_Generic_HashSet<Text>_TypeInfo) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_065c7944;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_02eea86c(plVar15,*(long *)System_Collections_Generic_HashSet<Text>_TypeInfo,0);
LAB_065c7944:
    uVar9 = (*(code *)*puVar8)(plVar15,1,puVar8[1]);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x188))(plVar7,uVar9,*(undefined8 *)(*plVar7 + 400));
      plVar15 = (long *)param_1[3];
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar12 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)System_Collections_Generic_HashSet<StyleSheet>_TypeInfo) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_065c79cc;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_02eea86c(plVar15,*(long *)System_Collections_Generic_HashSet<StyleSheet>_TypeInfo
                            ,1);
LAB_065c79cc:
      uVar6 = (*(code *)*puVar8)(plVar15,1,puVar8[1]);
      puVar4 = System_Collections_Generic_HashSet<uint>_TypeInfo;
      puVar3 = System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
      switch(uVar6) {
      case 4:
        plVar15 = (long *)param_1[4];
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar12 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)System_Collections_Generic_HashSet<uint>_TypeInfo) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_065c7f00;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_02eea86c(plVar15,*(long *)System_Collections_Generic_HashSet<uint>_TypeInfo,3);
LAB_065c7f00:
        plVar15 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
        puVar5 = ES3Types_ES3Type_GuidArray_TypeInfo;
        if (plVar15 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
                           + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(plVar15);
          }
        }
        lVar16 = param_1[3];
        lVar12 = *(long *)ES3Types_ES3Type_GuidArray_TypeInfo;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar12 = *(long *)puVar5;
        }
        lVar12 = (**(code **)(*param_1 + 0x1b8))
                           (param_1,lVar16,4,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x1e0),
                            *(undefined8 *)(*param_1 + 0x1c0));
        if (lVar12 == 0) {
          plVar17 = (long *)0x0;
        }
        else {
          uVar9 = *(undefined8 *)puVar3;
          plVar17 = (long *)thunk_FUN_02ef170c(lVar12,uVar9);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(lVar12,uVar9);
          }
        }
        plVar18 = (long *)param_1[4];
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar12 = *plVar18;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_065c840c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02eea86c(plVar18,*(long *)puVar4,0);
LAB_065c840c:
        plVar18 = (long *)(*(code *)*puVar8)(plVar18,plVar17,puVar8[1]);
        if (plVar18 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
                           + 0x130);
          if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(plVar18);
          }
        }
        plVar19 = (long *)param_1[4];
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar12 = *plVar19;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 6) * 0x10 + 0x138);
              goto LAB_065c8734;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02eea86c(plVar19,*(long *)puVar4,6);
LAB_065c8734:
        (*(code *)*puVar8)(plVar19,plVar15,plVar18,puVar8[1]);
        if (plVar17 == (long *)0x0) {
          uVar9 = 0;
        }
        else {
          lVar12 = *plVar17;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 10) * 0x10 + 0x138);
                goto LAB_065c89e0;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_02eea86c(plVar17,*(long *)puVar3,10);
LAB_065c89e0:
          uVar9 = (*(code *)*puVar8)(plVar17,puVar8[1]);
        }
        uVar6 = FUN_055ff780(uVar9,0);
        lVar12 = thunk_FUN_02ef1808(*(undefined8 *)ES3Types_ES3Type_Material_TypeInfo);
        FUN_065cf4c8(lVar12,uVar6,0);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        plVar7[4] = lVar12;
        thunk_FUN_02f411dc(plVar7 + 4,lVar12);
        break;
      case 5:
        plVar15 = (long *)param_1[4];
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar12 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)System_Collections_Generic_HashSet<uint>_TypeInfo) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_065c8010;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_02eea86c(plVar15,*(long *)System_Collections_Generic_HashSet<uint>_TypeInfo,3);
LAB_065c8010:
        plVar15 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
        puVar5 = ES3Types_ES3Type_GuidArray_TypeInfo;
        if (plVar15 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
                           + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(plVar15);
          }
        }
        lVar16 = param_1[3];
        lVar12 = *(long *)ES3Types_ES3Type_GuidArray_TypeInfo;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar12 = *(long *)puVar5;
        }
        lVar12 = (**(code **)(*param_1 + 0x1b8))
                           (param_1,lVar16,5,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x1e8),
                            *(undefined8 *)(*param_1 + 0x1c0));
        if (lVar12 == 0) {
          plVar17 = (long *)0x0;
        }
        else {
          uVar9 = *(undefined8 *)puVar3;
          plVar17 = (long *)thunk_FUN_02ef170c(lVar12,uVar9);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(lVar12,uVar9);
          }
        }
        plVar18 = (long *)param_1[4];
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar12 = *plVar18;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_065c84ac;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02eea86c(plVar18,*(long *)puVar4,0);
LAB_065c84ac:
        plVar18 = (long *)(*(code *)*puVar8)(plVar18,plVar17,puVar8[1]);
        if (plVar18 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
                           + 0x130);
          if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(plVar18);
          }
        }
        plVar19 = (long *)param_1[4];
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar12 = *plVar19;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 6) * 0x10 + 0x138);
              goto UnityEngine_EnumDataUtility_<>c__DisplayClass2_0___ctor;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02eea86c(plVar19,*(long *)puVar4,6);
UnityEngine_EnumDataUtility_<>c__DisplayClass2_0___ctor:
        (*(code *)*puVar8)(plVar19,plVar15,plVar18,puVar8[1]);
        if (plVar17 == (long *)0x0) {
          uVar9 = 0;
        }
        else {
          lVar12 = *plVar17;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 10) * 0x10 + 0x138);
                goto LAB_065c8a44;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_02eea86c(plVar17,*(long *)puVar3,10);
LAB_065c8a44:
          uVar9 = (*(code *)*puVar8)(plVar17,puVar8[1]);
        }
        lVar12 = *(long *)puVar5;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar12 = *(long *)puVar5;
        }
        local_68 = FUN_055e9acc(uVar9,0xa7,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),0);
        uVar9 = thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d04108,&local_68);
        lVar12 = thunk_FUN_02ef1808(*(undefined8 *)ES3Types_ES3Type_Material_TypeInfo);
        FUN_065cf364(lVar12,uVar9,0);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        plVar7[4] = lVar12;
        thunk_FUN_02f411dc(plVar7 + 4,lVar12);
        break;
      case 6:
        plVar15 = (long *)param_1[4];
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar12 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)System_Collections_Generic_HashSet<uint>_TypeInfo) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_065c7ce0;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_02eea86c(plVar15,*(long *)System_Collections_Generic_HashSet<uint>_TypeInfo,3);
LAB_065c7ce0:
        plVar15 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
        puVar5 = ES3Types_ES3Type_GuidArray_TypeInfo;
        if (plVar15 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
                           + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(plVar15);
          }
        }
        lVar16 = param_1[3];
        lVar12 = *(long *)ES3Types_ES3Type_GuidArray_TypeInfo;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar12 = *(long *)puVar5;
        }
        lVar12 = (**(code **)(*param_1 + 0x1b8))
                           (param_1,lVar16,6,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x1f0),
                            *(undefined8 *)(*param_1 + 0x1c0));
        if (lVar12 == 0) {
          plVar17 = (long *)0x0;
        }
        else {
          uVar9 = *(undefined8 *)puVar3;
          plVar17 = (long *)thunk_FUN_02ef170c(lVar12,uVar9);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(lVar12,uVar9);
          }
        }
        plVar18 = (long *)param_1[4];
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar12 = *plVar18;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_065c82cc;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02eea86c(plVar18,*(long *)puVar4,0);
LAB_065c82cc:
        plVar18 = (long *)(*(code *)*puVar8)(plVar18,plVar17,puVar8[1]);
        if (plVar18 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
                           + 0x130);
          if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(plVar18);
          }
        }
        plVar19 = (long *)param_1[4];
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar12 = *plVar19;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 6) * 0x10 + 0x138);
              goto LAB_065c8648;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02eea86c(plVar19,*(long *)puVar4,6);
LAB_065c8648:
        uVar9 = (*(code *)*puVar8)(plVar19,plVar15,plVar18,puVar8[1]);
        if (plVar17 == (long *)0x0) {
          uVar11 = 0;
        }
        else {
          lVar12 = *plVar17;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 10) * 0x10 + 0x138);
                goto LAB_065c897c;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_02eea86c(plVar17,*(long *)puVar3,10);
LAB_065c897c:
          uVar9 = (*(code *)*puVar8)(plVar17,puVar8[1]);
          uVar11 = uVar9;
        }
        if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0(uVar9,uVar11);
        }
        uVar9 = FUN_065bb518();
        lVar12 = thunk_FUN_02ef1808(*(undefined8 *)ES3Types_ES3Type_Material_TypeInfo);
        FUN_065cf48c(lVar12,uVar9,0);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        plVar7[4] = lVar12;
        thunk_FUN_02f411dc(plVar7 + 4,lVar12);
        break;
      case 7:
        plVar15 = (long *)param_1[4];
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar12 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)System_Collections_Generic_HashSet<uint>_TypeInfo) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_065c7df0;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_02eea86c(plVar15,*(long *)System_Collections_Generic_HashSet<uint>_TypeInfo,3);
LAB_065c7df0:
        plVar15 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
        puVar5 = ES3Types_ES3Type_GuidArray_TypeInfo;
        if (plVar15 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
                           + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(plVar15);
          }
        }
        lVar16 = param_1[3];
        lVar12 = *(long *)ES3Types_ES3Type_GuidArray_TypeInfo;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar12 = *(long *)puVar5;
        }
        lVar12 = (**(code **)(*param_1 + 0x1b8))
                           (param_1,lVar16,7,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x1f8),
                            *(undefined8 *)(*param_1 + 0x1c0));
        if (lVar12 == 0) {
          plVar17 = (long *)0x0;
        }
        else {
          uVar9 = *(undefined8 *)puVar3;
          plVar17 = (long *)thunk_FUN_02ef170c(lVar12,uVar9);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(lVar12,uVar9);
          }
        }
        plVar18 = (long *)param_1[4];
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar12 = *plVar18;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_065c836c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02eea86c(plVar18,*(long *)puVar4,0);
LAB_065c836c:
        plVar18 = (long *)(*(code *)*puVar8)(plVar18,plVar17,puVar8[1]);
        if (plVar18 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
                           + 0x130);
          if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(plVar18);
          }
        }
        plVar19 = (long *)param_1[4];
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar12 = *plVar19;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 6) * 0x10 + 0x138);
              goto LAB_065c86cc;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02eea86c(plVar19,*(long *)puVar4,6);
LAB_065c86cc:
        (*(code *)*puVar8)(plVar19,plVar15,plVar18,puVar8[1]);
        if (plVar17 != (long *)0x0) {
          lVar12 = *plVar17;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 10) * 0x10 + 0x138);
                goto LAB_065c8880;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_02eea86c(plVar17,*(long *)puVar3,10);
LAB_065c8880:
          lVar12 = (*(code *)*puVar8)(plVar17,puVar8[1]);
          lVar16 = *plVar17;
          uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar16 + (long)(*piVar14 + 10) * 0x10 + 0x138);
                goto LAB_065c88e0;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_02eea86c(plVar17,*(long *)puVar3,10);
LAB_065c88e0:
          lVar16 = (*(code *)*puVar8)(plVar17,puVar8[1]);
          if (lVar16 != 0) {
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            uVar9 = FUN_05466d54(lVar12,1,*(int *)(lVar16 + 0x10) + -2,0);
            if (*(int *)(*(long *)PTR_DAT_06d023f0 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            uVar9 = FUN_055e2cd8(uVar9,0);
            lVar12 = thunk_FUN_02ef1808(*(undefined8 *)ES3Types_ES3Type_Material_TypeInfo);
            FUN_065cf5c4(lVar12,uVar9,0);
            plVar7[4] = lVar12;
            thunk_FUN_02f411dc(plVar7 + 4,lVar12);
            break;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      case 8:
        plVar15 = (long *)param_1[4];
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar12 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)System_Collections_Generic_HashSet<uint>_TypeInfo) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_065c7bd0;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_02eea86c(plVar15,*(long *)System_Collections_Generic_HashSet<uint>_TypeInfo,3);
LAB_065c7bd0:
        plVar15 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
        puVar5 = ES3Types_ES3Type_GuidArray_TypeInfo;
        if (plVar15 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
                           + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(plVar15);
          }
        }
        lVar16 = param_1[3];
        lVar12 = *(long *)ES3Types_ES3Type_GuidArray_TypeInfo;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar12 = *(long *)puVar5;
        }
        lVar12 = (**(code **)(*param_1 + 0x1b8))
                           (param_1,lVar16,8,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x200),
                            *(undefined8 *)(*param_1 + 0x1c0));
        if (lVar12 == 0) {
          lVar16 = 0;
        }
        else {
          uVar9 = *(undefined8 *)puVar3;
          lVar16 = thunk_FUN_02ef170c(lVar12,uVar9);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(lVar12,uVar9);
          }
        }
        plVar17 = (long *)param_1[4];
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar12 = *plVar17;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_065c822c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02eea86c(plVar17,*(long *)puVar4,0);
LAB_065c822c:
        plVar17 = (long *)(*(code *)*puVar8)(plVar17,lVar16,puVar8[1]);
        if (plVar17 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
                           + 0x130);
          if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(plVar17);
          }
        }
        plVar18 = (long *)param_1[4];
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar12 = *plVar18;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 6) * 0x10 + 0x138);
              goto LAB_065c85f0;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02eea86c(plVar18,*(long *)puVar4,6);
LAB_065c85f0:
        (*(code *)*puVar8)(plVar18,plVar15,plVar17,puVar8[1]);
        lVar12 = thunk_FUN_02ef1808(*(undefined8 *)ES3Types_ES3Type_Material_TypeInfo);
        FUN_065cf644(lVar12,1,0);
        plVar7[4] = lVar12;
        thunk_FUN_02f411dc(plVar7 + 4,lVar12);
        break;
      case 9:
        plVar15 = (long *)param_1[4];
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar12 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)System_Collections_Generic_HashSet<uint>_TypeInfo) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_065c8120;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_02eea86c(plVar15,*(long *)System_Collections_Generic_HashSet<uint>_TypeInfo,3);
LAB_065c8120:
        plVar15 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
        puVar5 = ES3Types_ES3Type_GuidArray_TypeInfo;
        if (plVar15 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
                           + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(plVar15);
          }
        }
        lVar16 = param_1[3];
        lVar12 = *(long *)ES3Types_ES3Type_GuidArray_TypeInfo;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar12 = *(long *)puVar5;
        }
        lVar12 = (**(code **)(*param_1 + 0x1b8))
                           (param_1,lVar16,9,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x208),
                            *(undefined8 *)(*param_1 + 0x1c0));
        if (lVar12 == 0) {
          lVar16 = 0;
        }
        else {
          uVar9 = *(undefined8 *)puVar3;
          lVar16 = thunk_FUN_02ef170c(lVar12,uVar9);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(lVar12,uVar9);
          }
        }
        plVar17 = (long *)param_1[4];
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar12 = *plVar17;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_065c854c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02eea86c(plVar17,*(long *)puVar4,0);
LAB_065c854c:
        plVar17 = (long *)(*(code *)*puVar8)(plVar17,lVar16,puVar8[1]);
        if (plVar17 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
                           + 0x130);
          if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(plVar17);
          }
        }
        plVar18 = (long *)param_1[4];
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar12 = *plVar18;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 6) * 0x10 + 0x138);
              goto LAB_065c8828;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02eea86c(plVar18,*(long *)puVar4,6);
LAB_065c8828:
        (*(code *)*puVar8)(plVar18,plVar15,plVar17,puVar8[1]);
        lVar12 = thunk_FUN_02ef1808(*(undefined8 *)ES3Types_ES3Type_Material_TypeInfo);
        FUN_065cf644(lVar12,0,0);
        plVar7[4] = lVar12;
        thunk_FUN_02f411dc(plVar7 + 4,lVar12);
        break;
      default:
        lVar12 = param_1[3];
        thunk_FUN_02f239f0(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
        uVar9 = thunk_FUN_02ef1808();
        uVar11 = thunk_FUN_02f239f0(PTR_DAT_06d02130);
        FUN_064698ac(uVar9,uVar11,0x14,0,lVar12,0);
        uVar11 = thunk_FUN_02f239f0(ES3Types_ES3Type_sbyte_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar9,uVar11);
      }
      plVar17 = (long *)param_1[3];
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar12 = *plVar17;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_065c8b24;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_02eea86c(plVar17,*(long *)puVar2,0);
LAB_065c8b24:
      uVar9 = (*(code *)*puVar8)(plVar17,0xffffffff,puVar8[1]);
      (**(code **)(*plVar7 + 0x1a8))(plVar7,uVar9,*(undefined8 *)(*plVar7 + 0x1b0));
      plVar17 = (long *)param_1[4];
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar12 = *plVar17;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 8) * 0x10 + 0x138);
            goto LAB_065c8ba0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_02eea86c(plVar17,*(long *)puVar4,8);
LAB_065c8ba0:
      plVar15 = (long *)(*(code *)*puVar8)(plVar17,plVar15,puVar8[1]);
      if (plVar15 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo +
                         0x130);
        if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar15);
        }
      }
      (**(code **)(*plVar7 + 0x1c8))(plVar7,plVar15,*(undefined8 *)(*plVar7 + 0x1d0));
      plVar15 = (long *)param_1[4];
      uVar9 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      lVar12 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
      lVar16 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar20 = *(long *)puVar4;
      uVar11 = *(undefined8 *)puVar3;
      if (lVar12 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = thunk_FUN_02ef170c(lVar12,uVar11);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(lVar12,uVar11);
        }
        uVar11 = *(undefined8 *)puVar3;
      }
      if (lVar16 == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = thunk_FUN_02ef170c(lVar16,uVar11);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(lVar16,uVar11);
        }
      }
      lVar16 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar20) {
            puVar8 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x13) * 0x10 + 0x138);
            goto LAB_065c8ce8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_02eea86c(plVar15,lVar20,0x13);
LAB_065c8ce8:
      (*(code *)*puVar8)(plVar15,uVar9,lVar10,lVar12,puVar8[1]);
      return plVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


