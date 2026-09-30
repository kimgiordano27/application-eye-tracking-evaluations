/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_SetTrackingIPDEnabled
ENTRY_POINT: 033980c0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_OVRP_1_6_0__ovrp_SetTrackingIPDEnabled(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar14;
  long unaff_x24;
  int unaff_w27;
  undefined *puVar9;
  
  lVar10 = *param_1;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)
           Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
         ) {
        puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0339817c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01c72498(param_1,*(long *)
                                 Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
                        ,0);
LAB_0339817c:
  iVar1 = (*(code *)*puVar3)(param_1,puVar3[1]);
  if (0 < iVar1) {
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar13 = FUN_03295500(0);
    FUN_019b2708();
    uVar14 = *(undefined8 *)(unaff_x21 + 0x60);
    puVar9 = Method_System_Collections_Generic_HashSet<ColliderZone>_Remove__;
LAB_03398584:
    uVar8 = thunk_FUN_01c273e8(puVar9);
    FUN_0336f2b8(uVar8,uVar13,uVar14,0);
    uVar13 = FUN_0335cdc4();
    uVar14 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Edge>_Add__);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar13,uVar14);
  }
  plVar4 = (long *)FUN_0338fc1c();
  if (plVar4 != (long *)0x0) {
    lVar10 = *plVar4;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_get_Count__) {
          puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_033981f4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01c72498(plVar4,*(long *)
                                  Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_get_Count__
                          ,0);
LAB_033981f4:
    iVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if (0 < iVar1) {
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar13 = FUN_03295500(0);
      FUN_019b2708();
      uVar14 = *(undefined8 *)(unaff_x21 + 0x60);
      puVar9 = Method_System_Collections_Generic_HashSet<Edge>__ctor__;
      goto LAB_03398584;
    }
    if (unaff_x24 != 0) {
      uVar11 = FUN_0338dd68();
      if (((uVar11 & 1) == 0) && (*(char *)(unaff_x24 + 0xf0) == '\0')) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar13 = FUN_03295500(0);
        FUN_019b2708();
        uVar14 = *(undefined8 *)(unaff_x21 + 0x60);
        puVar9 = Method_System_Collections_Generic_HashSet<Edge>__ctor__;
        goto LAB_03398584;
      }
      if (*(char *)(unaff_x24 + 200) == '\0') {
        FUN_03394440();
        plVar4 = (long *)PTR_DAT_04237768;
        plVar7 = (long *)Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__;
      }
      else {
        FUN_0339b734();
        plVar4 = (long *)PTR_DAT_04237768;
        plVar7 = (long *)Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__;
      }
      PTR_DAT_04237768 = (undefined *)plVar4;
      Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__ = (undefined *)plVar7;
      if (unaff_w27 == 0) {
        plVar4 = (long *)thunk_FUN_01c495e4();
        if (plVar4 != (long *)0x0) {
          lVar10 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *plVar7) {
                puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_033983d8;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar3 = (undefined8 *)FUN_01c72498(plVar4,*plVar7,0);
LAB_033983d8:
          unaff_x20 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
        }
        return unaff_x20;
      }
      if (*(char *)(unaff_x24 + 200) == '\0') {
        if (*(char *)(unaff_x24 + 0xf0) == '\0') {
          lVar10 = *(long *)(unaff_x24 + 0x108);
          if (lVar10 == 0) {
            lVar10 = FUN_0338dc7c();
          }
          lVar5 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
          if (lVar5 != 0) {
            if ((unaff_x20 != (long *)0x0) && (lVar6 = thunk_FUN_01c495e4(), lVar6 == 0)) {
              uVar13 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar13,0);
            }
            if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4ac();
            }
            *(long **)(lVar5 + 0x20) = unaff_x20;
            if (lVar10 != 0) {
              plVar4 = (long *)(**(code **)(lVar10 + 0x18))
                                         (*(undefined8 *)(lVar10 + 0x40),lVar5,
                                          *(undefined8 *)(lVar10 + 0x28));
              return plVar4;
            }
          }
        }
        else if (unaff_x20 != (long *)0x0) {
          lVar10 = *unaff_x20;
          uVar13 = *(undefined8 *)(unaff_x24 + 0xc0);
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *plVar4) {
                puVar3 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_033983f8;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar3 = (undefined8 *)FUN_01c72498();
LAB_033983f8:
          uVar2 = (*(code *)*puVar3)();
          plVar7 = (long *)FUN_032f73c0(uVar13,uVar2,0);
          lVar10 = *unaff_x20;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *plVar4) {
                puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_03398464;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar3 = (undefined8 *)FUN_01c72498();
LAB_03398464:
          (*(code *)*puVar3)();
          return plVar7;
        }
      }
      else if ((unaff_x21 != 0) && (plVar4 = *(long **)(unaff_x21 + 0x58), plVar4 != (long *)0x0)) {
        (**(code **)(*plVar4 + 0x428))(plVar4,*(undefined8 *)(*plVar4 + 0x430));
        plVar4 = (long *)FUN_0336e4e0();
        return plVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


