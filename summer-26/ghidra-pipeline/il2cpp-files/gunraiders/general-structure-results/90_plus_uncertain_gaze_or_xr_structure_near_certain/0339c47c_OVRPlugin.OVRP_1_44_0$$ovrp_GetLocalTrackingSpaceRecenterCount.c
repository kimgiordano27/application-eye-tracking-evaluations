/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetLocalTrackingSpaceRecenterCount
ENTRY_POINT: 0339c47c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_44_0__ovrp_GetLocalTrackingSpaceRecenterCount(void)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long in_x10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *plVar12;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  byte *unaff_x25;
  long *unaff_x26;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  
  lVar9 = *unaff_x26;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == **(long **)(in_x10 + 0x228)) {
        puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_0339c4d0;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_01c72498();
LAB_0339c4d0:
  lVar9 = (*(code *)*puVar5)();
  *unaff_x22 = lVar9;
  *unaff_x24 = 1;
  if (*unaff_x22 != 0) {
    thunk_FUN_01c5d21c(*unaff_x22,0);
    lVar9 = FUN_03395e54();
    *unaff_x29 = lVar9;
    if (lVar9 == 0) goto LAB_0339c83c;
    if (*(char *)(lVar9 + 0x28) == '\0') {
      bVar2 = FUN_0337fd4c(*(undefined8 *)(lVar9 + 0x60),0);
      bVar2 = ~bVar2 & 1;
    }
    else {
      bVar2 = 0;
    }
    *unaff_x25 = bVar2;
  }
  puVar1 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
  if ((*(char *)(unaff_x19 + 0x82) == '\0') && (*unaff_x25 == 0)) {
    plVar12 = *(long **)(unaff_x21 + 0x28);
    if (plVar12 != (long *)0x0) {
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__)
          {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0339c710;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01c72498(plVar12,*(long *)
                                     Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                            ,0);
LAB_0339c710:
      iVar4 = (*(code *)*puVar5)(plVar12,puVar5[1]);
      if (2 < iVar4) {
        plVar12 = *(long **)(unaff_x21 + 0x28);
        uVar6 = (**(code **)(*unaff_x20 + 0x1c8))();
        if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
        }
        uVar7 = FUN_03295500(0);
        uVar7 = FUN_033704d4(*(undefined8 *)
                              Method_System_Collections_Generic_HashSet<Interactable>_Add__,uVar7,
                             *(undefined8 *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x19 + 0x50),0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                            );
        }
        uVar8 = thunk_FUN_01c495e4();
        uVar6 = FUN_03358c64(uVar8,uVar6,uVar7,0);
        if (plVar12 == (long *)0x0) goto LAB_0339c83c;
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_0339c820;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_01c72498(plVar12,*(long *)puVar1,1);
LAB_0339c820:
        (*(code *)*puVar5)(plVar12,3,uVar6,0,puVar5[1]);
      }
    }
    return 1;
  }
  if ((in_stack_00000008._4_4_ == 0xb) && (uVar6 = FUN_03393964(), (int)uVar6 == 1)) {
LAB_0339c5f8:
    *unaff_x23 = (char)uVar6;
  }
  else {
    puVar1 = Method_System_Collections_Generic_HashSet<Interactable>__ctor__;
    in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x90);
    if (*(long *)(unaff_x21 + 0x20) == 0) {
LAB_0339c83c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar10 = FUN_02f211a0(&stack0x00000020,*(undefined4 *)(*(long *)(unaff_x21 + 0x20) + 0x2c),
                          *(undefined8 *)
                           Method_System_Collections_Generic_HashSet<Interactable>__ctor__);
    if ((uVar10 & 1) != 0) {
      in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x90);
      if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_0339c83c;
      uVar3 = FUN_02f211a0(&stack0x00000020,*(undefined4 *)(*(long *)(unaff_x21 + 0x20) + 0x2c),
                           *(undefined8 *)puVar1);
      if (((uVar3 >> 1 & 1) == 0) &&
         (uVar10 = FUN_0337d8fc(in_stack_00000008._4_4_,0), (uVar10 & 1) != 0)) {
        uVar6 = (**(code **)(*unaff_x20 + 0x198))();
        uVar7 = FUN_033931b0();
        uVar10 = FUN_0337de00(uVar6,uVar7,0);
        if ((uVar10 & 1) != 0) {
          uVar6 = 1;
          goto LAB_0339c5f8;
        }
      }
    }
    if (*unaff_x22 == 0) {
      *unaff_x29 = *(long *)(unaff_x19 + 0x48);
      uVar6 = 0;
    }
    else {
      thunk_FUN_01c5d21c(*unaff_x22,0);
      lVar9 = FUN_03395e54();
      *unaff_x29 = lVar9;
      if (lVar9 == *(long *)(unaff_x19 + 0x48)) {
        uVar6 = 0;
      }
      else {
        uVar7 = FUN_03396234();
        uVar6 = 0;
        *in_stack_00000018 = uVar7;
      }
    }
  }
  return uVar6;
}


