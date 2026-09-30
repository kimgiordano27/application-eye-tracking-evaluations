/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$.cctor
ENTRY_POINT: 0339c4f8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_44_0___cctor(undefined8 param_1)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *plVar12;
  undefined1 *unaff_x23;
  byte *unaff_x25;
  int unaff_w26;
  long *unaff_x29;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  
  thunk_FUN_01c5d21c(param_1,0);
  lVar5 = FUN_03395e54();
  *unaff_x29 = lVar5;
  if (lVar5 == 0) goto LAB_0339c83c;
  if (*(char *)(lVar5 + 0x28) == '\0') {
    bVar2 = FUN_0337fd4c(*(undefined8 *)(lVar5 + 0x60),0);
    bVar2 = ~bVar2 & 1;
  }
  else {
    bVar2 = 0;
  }
  *unaff_x25 = bVar2;
  puVar1 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
  if ((*(char *)(unaff_x19 + 0x82) == '\0') && (*unaff_x25 == 0)) {
    plVar12 = *(long **)(unaff_x21 + 0x28);
    if (plVar12 != (long *)0x0) {
      lVar5 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__)
          {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0339c710;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01c72498(plVar12,*(long *)
                                     Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                            ,0);
LAB_0339c710:
      iVar4 = (*(code *)*puVar6)(plVar12,puVar6[1]);
      if (2 < iVar4) {
        plVar12 = *(long **)(unaff_x21 + 0x28);
        uVar7 = (**(code **)(*unaff_x20 + 0x1c8))();
        if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
        }
        uVar9 = FUN_03295500(0);
        uVar9 = FUN_033704d4(*(undefined8 *)
                              Method_System_Collections_Generic_HashSet<Interactable>_Add__,uVar9,
                             *(undefined8 *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x19 + 0x50),0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                            );
        }
        uVar10 = thunk_FUN_01c495e4();
        uVar7 = FUN_03358c64(uVar10,uVar7,uVar9,0);
        if (plVar12 == (long *)0x0) goto LAB_0339c83c;
        lVar5 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar5 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_0339c820;
            }
            uVar8 = uVar8 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_01c72498(plVar12,*(long *)puVar1,1);
LAB_0339c820:
        (*(code *)*puVar6)(plVar12,3,uVar7,0,puVar6[1]);
      }
    }
    return 1;
  }
  if ((unaff_w26 == 0xb) && (uVar7 = FUN_03393964(), (int)uVar7 == 1)) {
LAB_0339c5f8:
    *unaff_x23 = (char)uVar7;
  }
  else {
    puVar1 = Method_System_Collections_Generic_HashSet<Interactable>__ctor__;
    in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x90);
    if (*(long *)(unaff_x21 + 0x20) == 0) {
LAB_0339c83c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar8 = FUN_02f211a0(&stack0x00000020,*(undefined4 *)(*(long *)(unaff_x21 + 0x20) + 0x2c),
                         *(undefined8 *)
                          Method_System_Collections_Generic_HashSet<Interactable>__ctor__);
    if ((uVar8 & 1) != 0) {
      in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x90);
      if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_0339c83c;
      uVar3 = FUN_02f211a0(&stack0x00000020,*(undefined4 *)(*(long *)(unaff_x21 + 0x20) + 0x2c),
                           *(undefined8 *)puVar1);
      if (((uVar3 >> 1 & 1) == 0) && (uVar8 = FUN_0337d8fc(unaff_w26,0), (uVar8 & 1) != 0)) {
        uVar7 = (**(code **)(*unaff_x20 + 0x198))();
        uVar9 = FUN_033931b0();
        uVar8 = FUN_0337de00(uVar7,uVar9,0);
        if ((uVar8 & 1) != 0) {
          uVar7 = 1;
          goto LAB_0339c5f8;
        }
      }
    }
    if (*unaff_x22 == 0) {
      *unaff_x29 = *(long *)(unaff_x19 + 0x48);
      uVar7 = 0;
    }
    else {
      thunk_FUN_01c5d21c(*unaff_x22,0);
      lVar5 = FUN_03395e54();
      *unaff_x29 = lVar5;
      if (lVar5 == *(long *)(unaff_x19 + 0x48)) {
        uVar7 = 0;
      }
      else {
        uVar9 = FUN_03396234();
        uVar7 = 0;
        *in_stack_00000018 = uVar9;
      }
    }
  }
  return uVar7;
}


