/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetTrackingIPDEnabled
ENTRY_POINT: 03398058
PROGRAM: gunraiders-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_17;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_OVRP_1_6_0__ovrp_GetTrackingIPDEnabled(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar18;
  long unaff_x22;
  long unaff_x25;
  undefined1 auVar19 [16];
  undefined8 in_stack_00000008;
  undefined *puVar14;
  
  auVar19 = FUN_0339b32c();
  lVar15 = auVar19._0_8_;
  if (unaff_x20 == 0) {
    auVar19 = FUN_0339b4ac();
    plVar9 = auVar19._0_8_;
    if (in_stack_00000008._4_1_ == '\0') {
      if (lVar15 == 0) goto LAB_03398480;
    }
    else {
      if (unaff_x22 != 0) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar12 = FUN_03295500(0);
        FUN_019b2708();
        uVar18 = *(undefined8 *)(unaff_x21 + 0x60);
        puVar14 = Method_System_Collections_Generic_HashSet<ColliderZone>_GetEnumerator__;
        goto LAB_03398584;
      }
      if (unaff_x21 == 0) goto LAB_03398480;
      auVar19 = FUN_0338fba4();
      plVar10 = auVar19._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = auVar19._8_8_;
      auVar19 = auVar1 << 0x40;
      if (plVar10 == (long *)0x0) goto LAB_03398480;
      lVar7 = *plVar10;
      uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
             ) {
            puVar8 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0339817c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01c72498(plVar10,*(long *)
                                     Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
                            ,0);
LAB_0339817c:
      iVar5 = (*(code *)*puVar8)(plVar10,puVar8[1]);
      if (0 < iVar5) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar12 = FUN_03295500(0);
        FUN_019b2708();
        uVar18 = *(undefined8 *)(unaff_x21 + 0x60);
        puVar14 = Method_System_Collections_Generic_HashSet<ColliderZone>_Remove__;
LAB_03398584:
        uVar13 = thunk_FUN_01c273e8(puVar14);
        FUN_0336f2b8(uVar13,uVar12,uVar18,0);
        uVar12 = FUN_0335cdc4();
        uVar18 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Edge>_Add__);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar12,uVar18);
      }
      auVar19 = FUN_0338fc1c();
      plVar10 = auVar19._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = auVar19._8_8_;
      auVar19 = auVar2 << 0x40;
      if (plVar10 == (long *)0x0) goto LAB_03398480;
      lVar7 = *plVar10;
      uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_get_Count__)
          {
            puVar8 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_033981f4;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01c72498(plVar10,*(long *)
                                     Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_get_Count__
                            ,0);
LAB_033981f4:
      auVar19 = (*(code *)*puVar8)(plVar10,puVar8[1]);
      if (0 < auVar19._0_4_) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar12 = FUN_03295500(0);
        FUN_019b2708();
        uVar18 = *(undefined8 *)(unaff_x21 + 0x60);
        puVar14 = Method_System_Collections_Generic_HashSet<Edge>__ctor__;
        goto LAB_03398584;
      }
      if (lVar15 == 0) goto LAB_03398480;
      uVar16 = FUN_0338dd68(lVar15);
      if (((uVar16 & 1) == 0) && (*(char *)(lVar15 + 0xf0) == '\0')) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar12 = FUN_03295500(0);
        FUN_019b2708();
        uVar18 = *(undefined8 *)(unaff_x21 + 0x60);
        puVar14 = Method_System_Collections_Generic_HashSet<Edge>__ctor__;
        goto LAB_03398584;
      }
    }
    if (*(char *)(lVar15 + 200) == '\0') {
      auVar19 = FUN_03394440();
      plVar10 = (long *)PTR_DAT_04237768;
      plVar11 = (long *)Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__;
    }
    else {
      auVar19 = FUN_0339b734();
      plVar10 = (long *)PTR_DAT_04237768;
      plVar11 = (long *)Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__;
    }
    PTR_DAT_04237768 = (undefined *)plVar10;
    Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__ = (undefined *)plVar11;
    if (in_stack_00000008._4_1_ != '\0') {
      if (*(char *)(lVar15 + 200) == '\0') {
        if (*(char *)(lVar15 + 0xf0) == '\0') {
          lVar7 = *(long *)(lVar15 + 0x108);
          if (lVar7 == 0) {
            lVar7 = FUN_0338dc7c(lVar15);
          }
          auVar19 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
          plVar10 = auVar19._0_8_;
          if (plVar10 != (long *)0x0) {
            if ((plVar9 != (long *)0x0) &&
               (auVar19 = thunk_FUN_01c495e4(plVar9,*(undefined8 *)(*plVar10 + 0x40)),
               auVar19._0_8_ == 0)) {
              uVar12 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar12,0);
            }
            if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4ac();
            }
            plVar10[4] = (long)plVar9;
            if (lVar7 != 0) {
              plVar9 = (long *)(**(code **)(lVar7 + 0x18))
                                         (*(undefined8 *)(lVar7 + 0x40),plVar10,
                                          *(undefined8 *)(lVar7 + 0x28));
              return plVar9;
            }
          }
        }
        else if (plVar9 != (long *)0x0) {
          lVar7 = *plVar9;
          uVar12 = *(undefined8 *)(lVar15 + 0xc0);
          uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *plVar10) {
                puVar8 = (undefined8 *)(lVar7 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_033983f8;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar8 = (undefined8 *)FUN_01c72498(plVar9,*plVar10,1);
LAB_033983f8:
          uVar6 = (*(code *)*puVar8)(plVar9,puVar8[1]);
          plVar11 = (long *)FUN_032f73c0(uVar12,uVar6,0);
          lVar15 = *plVar9;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *plVar10) {
                puVar8 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_03398464;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar8 = (undefined8 *)FUN_01c72498(plVar9,*plVar10,0);
LAB_03398464:
          (*(code *)*puVar8)(plVar9,plVar11,0,puVar8[1]);
          return plVar11;
        }
      }
      else if (unaff_x21 != 0) {
        plVar10 = *(long **)(unaff_x21 + 0x58);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = auVar19._8_8_;
        auVar19 = auVar3 << 0x40;
        if (plVar10 != (long *)0x0) {
          uVar12 = *(undefined8 *)(lVar15 + 0xc0);
          uVar6 = (**(code **)(*plVar10 + 0x428))(plVar10,*(undefined8 *)(*plVar10 + 0x430));
          plVar9 = (long *)FUN_0336e4e0(plVar9,uVar12,uVar6,0);
          return plVar9;
        }
      }
LAB_03398480:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4(auVar19._0_8_,auVar19._8_8_);
    }
    plVar10 = (long *)thunk_FUN_01c495e4(plVar9,*plVar11);
    if (plVar10 != (long *)0x0) {
      lVar15 = *plVar10;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *plVar11) {
            puVar8 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_033983d8;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar8 = (undefined8 *)FUN_01c72498(plVar10,*plVar11,0);
LAB_033983d8:
      plVar9 = (long *)(*(code *)*puVar8)(plVar10,puVar8[1]);
    }
  }
  else {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = auVar19._8_8_;
    auVar19 = auVar4 << 0x40;
    if (lVar15 == 0) goto LAB_03398480;
    if (*(char *)(lVar15 + 0xf2) == '\0') {
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar12 = FUN_03295500(0);
      FUN_019b2708();
      uVar18 = *(undefined8 *)(unaff_x21 + 0x58);
      puVar14 = Method_System_Collections_Generic_HashSet<ColliderZone>_Clear__;
      goto LAB_03398584;
    }
    if ((*(char *)(lVar15 + 0xf1) != '\0') || (lVar7 = thunk_FUN_01c495e4(), lVar7 == 0)) {
      lVar7 = FUN_0338eda8(lVar15);
    }
    auVar19._8_8_ = lVar7;
    auVar19._0_8_ = lVar7;
    if (unaff_x25 == 0) goto LAB_03398480;
    plVar9 = (long *)FUN_03394440();
  }
  return plVar9;
}


