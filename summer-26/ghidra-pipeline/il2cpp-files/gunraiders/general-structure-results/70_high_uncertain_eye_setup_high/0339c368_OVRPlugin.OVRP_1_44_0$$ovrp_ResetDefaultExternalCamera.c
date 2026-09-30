/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_ResetDefaultExternalCamera
ENTRY_POINT: 0339c368
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_44_0__ovrp_ResetDefaultExternalCamera(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  byte *unaff_x25;
  long unaff_x26;
  long *plVar13;
  long *unaff_x29;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0x238));
  FUN_01c5d288(Method_System_Collections_Generic_HashSet<Interactable>__ctor__);
  FUN_01c5d288(Method_System_Collections_Generic_HashSet<Interactable>_Add__);
  *(undefined1 *)(unaff_x26 + 0x6be) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  *unaff_x22 = 0;
  *unaff_x25 = 0;
  *unaff_x29 = 0;
  *unaff_x24 = 0;
  *unaff_x23 = 0;
  if (unaff_x19 != 0) {
    if (*(char *)(unaff_x19 + 0x80) != '\0') {
      return 1;
    }
    if (unaff_x20 != (long *)0x0) {
      iVar3 = (**(code **)(*unaff_x20 + 0x188))();
      if (*(long *)(unaff_x19 + 0x48) == 0) {
        uVar6 = FUN_03395dc8();
        *(undefined8 *)(unaff_x19 + 0x48) = uVar6;
      }
      in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0xa0);
      if (*(long *)(unaff_x21 + 0x20) != 0) {
        iVar4 = FUN_02f211a0(&stack0x00000028,*(undefined4 *)(*(long *)(unaff_x21 + 0x20) + 0x24),
                             *(undefined8 *)
                              Method_System_Collections_Generic_HashSet<int>_get_Count__);
        if ((iVar4 != 2) &&
           ((((iVar3 - 1U < 2 || (*in_stack_00000018 != 0)) && (*(char *)(unaff_x19 + 0x81) != '\0')
             ) && ((*(long *)(unaff_x19 + 0x48) == 0 ||
                   (*(int *)(*(long *)(unaff_x19 + 0x48) + 0x24) != 8)))))) {
          plVar13 = *(long **)(unaff_x19 + 0x68);
          if (plVar13 == (long *)0x0) goto LAB_0339c83c;
          lVar10 = *plVar13;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) ==
                  *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_0339c4d0;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_01c72498(plVar13,*(long *)
                                         Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                ,1);
LAB_0339c4d0:
          lVar10 = (*(code *)*puVar7)(plVar13);
          *unaff_x22 = lVar10;
          *unaff_x24 = 1;
          if (*unaff_x22 != 0) {
            thunk_FUN_01c5d21c(*unaff_x22,0);
            lVar10 = FUN_03395e54();
            *unaff_x29 = lVar10;
            if (lVar10 == 0) goto LAB_0339c83c;
            if (*(char *)(lVar10 + 0x28) == '\0') {
              bVar2 = FUN_0337fd4c(*(undefined8 *)(lVar10 + 0x60),0);
              bVar2 = ~bVar2 & 1;
            }
            else {
              bVar2 = 0;
            }
            *unaff_x25 = bVar2;
          }
        }
        puVar1 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
        if ((*(char *)(unaff_x19 + 0x82) == '\0') && (*unaff_x25 == 0)) {
          plVar13 = *(long **)(unaff_x21 + 0x28);
          if (plVar13 == (long *)0x0) {
            return 1;
          }
          lVar10 = *plVar13;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) ==
                  *(long *)
                   Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_0339c710;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_01c72498(plVar13,*(long *)
                                         Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                                ,0);
LAB_0339c710:
          iVar3 = (*(code *)*puVar7)(plVar13,puVar7[1]);
          if (iVar3 < 3) {
            return 1;
          }
          plVar13 = *(long **)(unaff_x21 + 0x28);
          uVar6 = (**(code **)(*unaff_x20 + 0x1c8))();
          if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
          }
          uVar8 = FUN_03295500(0);
          uVar8 = FUN_033704d4(*(undefined8 *)
                                Method_System_Collections_Generic_HashSet<Interactable>_Add__,uVar8,
                               *(undefined8 *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x19 + 0x50),0
                              );
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)
                                Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                              );
          }
          uVar9 = thunk_FUN_01c495e4();
          uVar6 = FUN_03358c64(uVar9,uVar6,uVar8,0);
          if (plVar13 != (long *)0x0) {
            lVar10 = *plVar13;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                  puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                  goto LAB_0339c820;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_01c72498(plVar13,*(long *)puVar1,1);
LAB_0339c820:
            (*(code *)*puVar7)(plVar13,3,uVar6,0,puVar7[1]);
            return 1;
          }
        }
        else {
          if ((iVar3 == 0xb) && (uVar6 = FUN_03393964(), (int)uVar6 == 1)) {
LAB_0339c5f8:
            *unaff_x23 = (char)uVar6;
            return uVar6;
          }
          puVar1 = Method_System_Collections_Generic_HashSet<Interactable>__ctor__;
          in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x90);
          if (*(long *)(unaff_x21 + 0x20) != 0) {
            uVar11 = FUN_02f211a0(&stack0x00000020,
                                  *(undefined4 *)(*(long *)(unaff_x21 + 0x20) + 0x2c),
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_HashSet<Interactable>__ctor__);
            if ((uVar11 & 1) != 0) {
              in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x90);
              if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_0339c83c;
              uVar5 = FUN_02f211a0(&stack0x00000020,
                                   *(undefined4 *)(*(long *)(unaff_x21 + 0x20) + 0x2c),
                                   *(undefined8 *)puVar1);
              if (((uVar5 >> 1 & 1) == 0) && (uVar11 = FUN_0337d8fc(iVar3,0), (uVar11 & 1) != 0)) {
                uVar6 = (**(code **)(*unaff_x20 + 0x198))();
                uVar8 = FUN_033931b0();
                uVar11 = FUN_0337de00(uVar6,uVar8,0);
                if ((uVar11 & 1) != 0) {
                  uVar6 = 1;
                  goto LAB_0339c5f8;
                }
              }
            }
            if (*unaff_x22 == 0) {
              *unaff_x29 = *(long *)(unaff_x19 + 0x48);
              return 0;
            }
            thunk_FUN_01c5d21c(*unaff_x22,0);
            lVar10 = FUN_03395e54();
            *unaff_x29 = lVar10;
            if (lVar10 == *(long *)(unaff_x19 + 0x48)) {
              return 0;
            }
            lVar10 = FUN_03396234();
            *in_stack_00000018 = lVar10;
            return 0;
          }
        }
      }
    }
  }
LAB_0339c83c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


