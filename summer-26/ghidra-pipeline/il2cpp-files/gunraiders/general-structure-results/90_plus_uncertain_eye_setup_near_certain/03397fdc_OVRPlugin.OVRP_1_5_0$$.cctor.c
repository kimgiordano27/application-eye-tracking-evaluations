/*
FUNCTION_NAME: OVRPlugin.OVRP_1_5_0$$.cctor
ENTRY_POINT: 03397fdc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_OVRP_1_5_0___cctor(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar17;
  int *piVar18;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar19;
  long unaff_x22;
  long unaff_x25;
  long unaff_x26;
  undefined1 auVar20 [16];
  char cStack000000000000000c;
  undefined *puVar16;
  
  FUN_01c5d288(Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_get_Count__);
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
              );
  FUN_01c5d288(PTR_DAT_04237768);
  FUN_01c5d288(PTR_DAT_04237778);
  FUN_01c5d288(Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__);
  FUN_01c5d288(PTR_DAT_042305b8);
  *(undefined1 *)(unaff_x26 + 0x6ba) = 1;
  cStack000000000000000c = '\0';
  uVar8 = FUN_03399b24();
  if ((uVar8 & 1) == 0) {
    auVar20 = FUN_0339b32c();
    lVar17 = auVar20._0_8_;
    if (unaff_x20 != 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar20._8_8_;
      auVar20 = auVar4 << 0x40;
      if (lVar17 != 0) {
        if (*(char *)(lVar17 + 0xf2) == '\0') {
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar14 = FUN_03295500(0);
          FUN_019b2708();
          uVar19 = *(undefined8 *)(unaff_x21 + 0x58);
          puVar16 = Method_System_Collections_Generic_HashSet<ColliderZone>_Clear__;
          goto LAB_03398584;
        }
        if ((*(char *)(lVar17 + 0xf1) != '\0') || (lVar10 = thunk_FUN_01c495e4(), lVar10 == 0)) {
          lVar10 = FUN_0338eda8(lVar17);
        }
        auVar20._8_8_ = lVar10;
        auVar20._0_8_ = lVar10;
        if (unaff_x25 != 0) {
          plVar9 = (long *)FUN_03394440();
          return plVar9;
        }
      }
      goto LAB_03398480;
    }
    auVar20 = FUN_0339b4ac();
    cVar5 = cStack000000000000000c;
    plVar9 = auVar20._0_8_;
    if (cStack000000000000000c == '\0') {
      if (lVar17 == 0) goto LAB_03398480;
    }
    else {
      if (unaff_x22 != 0) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar14 = FUN_03295500(0);
        FUN_019b2708();
        uVar19 = *(undefined8 *)(unaff_x21 + 0x60);
        puVar16 = Method_System_Collections_Generic_HashSet<ColliderZone>_GetEnumerator__;
        goto LAB_03398584;
      }
      if (unaff_x21 == 0) goto LAB_03398480;
      auVar20 = FUN_0338fba4();
      plVar12 = auVar20._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = auVar20._8_8_;
      auVar20 = auVar1 << 0x40;
      if (plVar12 == (long *)0x0) goto LAB_03398480;
      lVar10 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
             ) {
            puVar11 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0339817c;
          }
          uVar8 = uVar8 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar8 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_01c72498(plVar12,*(long *)
                                      Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
                             ,0);
LAB_0339817c:
      iVar6 = (*(code *)*puVar11)(plVar12,puVar11[1]);
      if (0 < iVar6) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar14 = FUN_03295500(0);
        FUN_019b2708();
        uVar19 = *(undefined8 *)(unaff_x21 + 0x60);
        puVar16 = Method_System_Collections_Generic_HashSet<ColliderZone>_Remove__;
LAB_03398584:
        uVar15 = thunk_FUN_01c273e8(puVar16);
        FUN_0336f2b8(uVar15,uVar14,uVar19,0);
        uVar14 = FUN_0335cdc4();
        uVar19 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Edge>_Add__);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar14,uVar19);
      }
      auVar20 = FUN_0338fc1c();
      plVar12 = auVar20._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = auVar20._8_8_;
      auVar20 = auVar2 << 0x40;
      if (plVar12 == (long *)0x0) goto LAB_03398480;
      lVar10 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_get_Count__)
          {
            puVar11 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_033981f4;
          }
          uVar8 = uVar8 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar8 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_01c72498(plVar12,*(long *)
                                      Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_get_Count__
                             ,0);
LAB_033981f4:
      auVar20 = (*(code *)*puVar11)(plVar12,puVar11[1]);
      if (0 < auVar20._0_4_) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar14 = FUN_03295500(0);
        FUN_019b2708();
        uVar19 = *(undefined8 *)(unaff_x21 + 0x60);
        puVar16 = Method_System_Collections_Generic_HashSet<Edge>__ctor__;
        goto LAB_03398584;
      }
      if (lVar17 == 0) goto LAB_03398480;
      uVar8 = FUN_0338dd68(lVar17);
      if (((uVar8 & 1) == 0) && (*(char *)(lVar17 + 0xf0) == '\0')) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar14 = FUN_03295500(0);
        FUN_019b2708();
        uVar19 = *(undefined8 *)(unaff_x21 + 0x60);
        puVar16 = Method_System_Collections_Generic_HashSet<Edge>__ctor__;
        goto LAB_03398584;
      }
    }
    if (*(char *)(lVar17 + 200) == '\0') {
      auVar20 = FUN_03394440();
      plVar12 = (long *)PTR_DAT_04237768;
      plVar13 = (long *)Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__;
    }
    else {
      auVar20 = FUN_0339b734();
      plVar12 = (long *)PTR_DAT_04237768;
      plVar13 = (long *)Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__;
    }
    PTR_DAT_04237768 = (undefined *)plVar12;
    Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__ = (undefined *)plVar13;
    if (cVar5 != '\0') {
      if (*(char *)(lVar17 + 200) == '\0') {
        if (*(char *)(lVar17 + 0xf0) == '\0') {
          lVar10 = *(long *)(lVar17 + 0x108);
          if (lVar10 == 0) {
            lVar10 = FUN_0338dc7c(lVar17);
          }
          auVar20 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
          plVar12 = auVar20._0_8_;
          if (plVar12 != (long *)0x0) {
            if ((plVar9 != (long *)0x0) &&
               (auVar20 = thunk_FUN_01c495e4(plVar9,*(undefined8 *)(*plVar12 + 0x40)),
               auVar20._0_8_ == 0)) {
              uVar14 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar14,0);
            }
            if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4ac();
            }
            plVar12[4] = (long)plVar9;
            if (lVar10 != 0) {
              plVar9 = (long *)(**(code **)(lVar10 + 0x18))
                                         (*(undefined8 *)(lVar10 + 0x40),plVar12,
                                          *(undefined8 *)(lVar10 + 0x28));
              return plVar9;
            }
          }
        }
        else if (plVar9 != (long *)0x0) {
          lVar10 = *plVar9;
          uVar14 = *(undefined8 *)(lVar17 + 0xc0);
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar12) {
                puVar11 = (undefined8 *)(lVar10 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_033983f8;
              }
              uVar8 = uVar8 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar8 != 0);
          }
          puVar11 = (undefined8 *)FUN_01c72498(plVar9,*plVar12,1);
LAB_033983f8:
          uVar7 = (*(code *)*puVar11)(plVar9,puVar11[1]);
          plVar13 = (long *)FUN_032f73c0(uVar14,uVar7,0);
          lVar17 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar8 != 0) {
            piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar12) {
                puVar11 = (undefined8 *)(lVar17 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_03398464;
              }
              uVar8 = uVar8 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar8 != 0);
          }
          puVar11 = (undefined8 *)FUN_01c72498(plVar9,*plVar12,0);
LAB_03398464:
          (*(code *)*puVar11)(plVar9,plVar13,0,puVar11[1]);
          return plVar13;
        }
      }
      else if (unaff_x21 != 0) {
        plVar12 = *(long **)(unaff_x21 + 0x58);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = auVar20._8_8_;
        auVar20 = auVar3 << 0x40;
        if (plVar12 != (long *)0x0) {
          uVar14 = *(undefined8 *)(lVar17 + 0xc0);
          uVar7 = (**(code **)(*plVar12 + 0x428))(plVar12,*(undefined8 *)(*plVar12 + 0x430));
          plVar9 = (long *)FUN_0336e4e0(plVar9,uVar14,uVar7,0);
          return plVar9;
        }
      }
LAB_03398480:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4(auVar20._0_8_,auVar20._8_8_);
    }
    plVar12 = (long *)thunk_FUN_01c495e4(plVar9,*plVar13);
    if (plVar12 != (long *)0x0) {
      lVar17 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar8 != 0) {
        piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *plVar13) {
            puVar11 = (undefined8 *)(lVar17 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_033983d8;
          }
          uVar8 = uVar8 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar8 != 0);
      }
      puVar11 = (undefined8 *)FUN_01c72498(plVar12,*plVar13,0);
LAB_033983d8:
      plVar9 = (long *)(*(code *)*puVar11)(plVar12,puVar11[1]);
    }
  }
  else {
    plVar9 = (long *)FUN_03396c28();
  }
  return plVar9;
}


