/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetControllerHapticsState
ENTRY_POINT: 033981c0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_OVRP_1_6_0__ovrp_GetControllerHapticsState
                 (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar11;
  long in_x9;
  int *in_x10;
  int *piVar12;
  undefined8 uVar13;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar14;
  long unaff_x24;
  int unaff_w27;
  undefined *puVar10;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_033981f4;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_01c72498();
LAB_033981f4:
  iVar1 = (*(code *)*puVar3)();
  if (iVar1 < 1) {
    if (unaff_x24 != 0) {
      uVar4 = FUN_0338dd68();
      if (((uVar4 & 1) == 0) && (*(char *)(unaff_x24 + 0xf0) == '\0')) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar13 = FUN_03295500(0);
        FUN_019b2708();
        uVar14 = *(undefined8 *)(unaff_x21 + 0x60);
        puVar10 = Method_System_Collections_Generic_HashSet<Edge>__ctor__;
        goto LAB_03398584;
      }
      if (*(char *)(unaff_x24 + 200) == '\0') {
        FUN_03394440();
        plVar5 = (long *)PTR_DAT_04237768;
        plVar8 = (long *)Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__;
      }
      else {
        FUN_0339b734();
        plVar5 = (long *)PTR_DAT_04237768;
        plVar8 = (long *)Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__;
      }
      PTR_DAT_04237768 = (undefined *)plVar5;
      Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__ = (undefined *)plVar8;
      if (unaff_w27 == 0) {
        plVar5 = (long *)thunk_FUN_01c495e4();
        if (plVar5 != (long *)0x0) {
          lVar11 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar4 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *plVar8) {
                puVar3 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_033983d8;
              }
              uVar4 = uVar4 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)FUN_01c72498(plVar5,*plVar8,0);
LAB_033983d8:
          unaff_x20 = (long *)(*(code *)*puVar3)(plVar5,puVar3[1]);
        }
        return unaff_x20;
      }
      if (*(char *)(unaff_x24 + 200) == '\0') {
        if (*(char *)(unaff_x24 + 0xf0) == '\0') {
          lVar11 = *(long *)(unaff_x24 + 0x108);
          if (lVar11 == 0) {
            lVar11 = FUN_0338dc7c();
          }
          lVar6 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
          if (lVar6 != 0) {
            if ((unaff_x20 != (long *)0x0) && (lVar7 = thunk_FUN_01c495e4(), lVar7 == 0)) {
              uVar13 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar13,0);
            }
            if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4ac();
            }
            *(long **)(lVar6 + 0x20) = unaff_x20;
            if (lVar11 != 0) {
              plVar5 = (long *)(**(code **)(lVar11 + 0x18))
                                         (*(undefined8 *)(lVar11 + 0x40),lVar6,
                                          *(undefined8 *)(lVar11 + 0x28));
              return plVar5;
            }
          }
        }
        else if (unaff_x20 != (long *)0x0) {
          lVar11 = *unaff_x20;
          uVar13 = *(undefined8 *)(unaff_x24 + 0xc0);
          uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar4 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *plVar5) {
                puVar3 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_033983f8;
              }
              uVar4 = uVar4 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)FUN_01c72498();
LAB_033983f8:
          uVar2 = (*(code *)*puVar3)();
          plVar8 = (long *)FUN_032f73c0(uVar13,uVar2,0);
          lVar11 = *unaff_x20;
          uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar4 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *plVar5) {
                puVar3 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_03398464;
              }
              uVar4 = uVar4 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)FUN_01c72498();
LAB_03398464:
          (*(code *)*puVar3)();
          return plVar8;
        }
      }
      else if ((unaff_x21 != 0) && (plVar5 = *(long **)(unaff_x21 + 0x58), plVar5 != (long *)0x0)) {
        (**(code **)(*plVar5 + 0x428))(plVar5,*(undefined8 *)(*plVar5 + 0x430));
        plVar5 = (long *)FUN_0336e4e0();
        return plVar5;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  thunk_FUN_01c273e8(PTR_DAT_042305b0);
  FUN_019b5f60();
  uVar13 = FUN_03295500(0);
  FUN_019b2708();
  uVar14 = *(undefined8 *)(unaff_x21 + 0x60);
  puVar10 = Method_System_Collections_Generic_HashSet<Edge>__ctor__;
LAB_03398584:
  uVar9 = thunk_FUN_01c273e8(puVar10);
  FUN_0336f2b8(uVar9,uVar13,uVar14,0);
  uVar13 = FUN_0335cdc4();
  uVar14 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Edge>_Add__);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar13,uVar14);
}


