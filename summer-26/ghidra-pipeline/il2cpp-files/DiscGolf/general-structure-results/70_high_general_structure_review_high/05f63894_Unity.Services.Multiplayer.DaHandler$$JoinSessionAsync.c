/*
FUNCTION_NAME: Unity.Services.Multiplayer.DaHandler$$JoinSessionAsync
ENTRY_POINT: 05f63894
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Unity_Services_Multiplayer_DaHandler__JoinSessionAsync(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long in_x9;
  int *piVar10;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar11;
  long unaff_x23;
  long *unaff_x24;
  uint unaff_w25;
  uint uVar12;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  long *in_stack_00000038;
  
code_r0x05f63894:
  puVar5 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
LAB_05f6389c:
  (*(code *)*puVar5)(unaff_x24,puVar5[1]);
LAB_05f638a8:
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(unaff_x23);
  }
  do {
    unaff_w25 = unaff_w25 + 1;
    if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)unaff_w25) {
      if ((*(long *)(unaff_x19 + 0x148) == 0) || (unaff_x21 == 0)) goto LAB_05f63b9c;
      FUN_03c232ec();
      uVar6 = thunk_FUN_0536b75c(*(undefined8 *)(unaff_x19 + 0x1f8));
      if ((uVar6 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1e8) == 0) goto LAB_05f63b9c;
        if (*(int *)(unaff_x21 + 0x20) + 1 == *(int *)(*(long *)(unaff_x19 + 0x1e8) + 0x18)) {
          if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_05f63b9c;
          uVar6 = thunk_FUN_0536b75c(*(undefined8 *)(unaff_x19 + 0x200),
                                     *(undefined8 *)(*(long *)(unaff_x19 + 0x148) + 0x158),0);
          if ((uVar6 & 1) != 0) {
            return;
          }
        }
      }
      puVar3 = Method_UnityEngine_TextCore_Text_TextProcessingStack<float>__ctor__;
      puVar2 = PTR_DAT_06a13240;
      puVar1 = PTR_DAT_06a12228;
                    /* try { // try from 05f63988 to 06063bcf has its CatchHandler @ 05f63988
                       catch() { ... } // from try @ 05f63988 with catch @ 05f63988
                       catch() { ... } // from try @ 05f63c14 with catch @ 05f63988
                       catch() { ... } // from try @ 05f63cf0 with catch @ 05f63988
                       catch() { ... } // from try @ 05f63e30 with catch @ 05f63988
                       catch() { ... } // from try @ 05f63ef4 with catch @ 05f63988
                       catch() { ... } // from try @ 05f640f0 with catch @ 05f63988
                       catch() { ... } // from try @ 05f64108 with catch @ 05f63988
                       catch() { ... } // from try @ 05f64140 with catch @ 05f63988
                       catch() { ... } // from try @ 05f6419c with catch @ 05f63988
                       catch() { ... } // from try @ 05f641e4 with catch @ 05f63988
                       catch() { ... } // from try @ 05f64208 with catch @ 05f63988
                       catch() { ... } // from try @ 05f6422c with catch @ 05f63988
                       catch() { ... } // from try @ 05f64258 with catch @ 05f63988
                       catch() { ... } // from try @ 05f6428c with catch @ 05f63988 */
      FUN_035296a8(unaff_x19 + 0x1e8,*(int *)(unaff_x21 + 0x20) + 1,
                   *(undefined8 *)
                    Method_UnityEngine_TextCore_Text_TextProcessingStack<float>__ctor__);
      FUN_0352962c(unaff_x19 + 0x1f0,*(int *)(unaff_x21 + 0x20) + 1,*(undefined8 *)puVar3);
      plVar11 = *(long **)(unaff_x19 + 0x1e8);
      lVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
      FUN_0639f51c(lVar7,*(undefined8 *)puVar2,0);
      if (plVar11 != (long *)0x0) {
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0)) {
          uVar9 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar9,0);
        }
        if ((int)plVar11[3] == 0) {
LAB_05f63bb0:
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        plVar11[4] = lVar7;
        LeanTween__value(plVar11 + 4,lVar7);
        puVar3 = Method_UnityEngine_TextCore_Text_TextProcessingStack<float>_Clear__;
        puVar2 = Method_System_Span<byte>_GetPinnableReference__;
        lVar7 = *(long *)(unaff_x19 + 0x1f0);
        if (lVar7 != 0) {
          if (*(int *)(lVar7 + 0x18) == 0) goto LAB_05f63bb0;
          *(undefined4 *)(lVar7 + 0x20) = 0;
          puVar4 = Method_UnityEngine_TextCore_Text_TextProcessingStack<float>_Add__;
          FUN_03c23590(&stack0x00000008);
          uVar12 = 1;
          in_stack_00000030 = in_stack_00000018;
          in_stack_00000028 = in_stack_00000010;
          in_stack_00000020 = in_stack_00000008;
          in_stack_00000008 = 0;
          in_stack_00000010 = &stack0x00000020;
          while (uVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<uint,_uint>__Dispose
                                   (&stack0x00000020,*(undefined8 *)puVar3),
                uVar9 = in_stack_00000030, (uVar6 & 1) != 0) {
            plVar11 = *(long **)(unaff_x19 + 0x1e8);
            lVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
            FUN_0639f51c(lVar7,uVar9,0);
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0)) {
              uVar9 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
              FUN_02d96724(uVar9,0);
            }
            if (*(uint *)(plVar11 + 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            plVar11[(long)(int)uVar12 + 4] = lVar7;
            LeanTween__value(plVar11 + (long)(int)uVar12 + 4,lVar7);
            lVar7 = *(long *)(unaff_x19 + 0x1f0);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(uint *)(lVar7 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            *(uint *)(lVar7 + (long)(int)uVar12 * 4 + 0x20) = uVar12;
            uVar12 = uVar12 + 1;
          }
          FUN_05156050(&stack0x00000020,*(undefined8 *)puVar4);
          *(undefined8 *)(unaff_x19 + 0x1f8) = unaff_x20;
          LeanTween__value(unaff_x19 + 0x1f8);
          if (*(long *)(unaff_x19 + 0x148) != 0) {
            *(undefined8 *)(unaff_x19 + 0x200) =
                 *(undefined8 *)(*(long *)(unaff_x19 + 0x148) + 0x158);
            LeanTween__value(unaff_x19 + 0x200);
            if (*(long *)(unaff_x19 + 0x208) != 0) {
              *(undefined8 *)(*(long *)(unaff_x19 + 0x208) + 0x60) =
                   *(undefined8 *)(unaff_x19 + 0x1e8);
              LeanTween__value();
              if (*(long *)(unaff_x19 + 0x208) != 0) {
                FUN_050e465c(*(long *)(unaff_x19 + 0x208),*(undefined8 *)(unaff_x19 + 0x1f0),
                             *(undefined8 *)puVar2);
                lVar7 = *(long *)(unaff_x19 + 0x180);
                if ((lVar7 != 0) && (*(long *)(unaff_x19 + 0x1e8) != 0)) {
                  if (*(int *)(*(long *)(unaff_x19 + 0x1e8) + 0x18) <= *(int *)(lVar7 + 0x54)) {
                    *(undefined4 *)(lVar7 + 0x54) = 0;
                  }
                  return;
                }
              }
            }
          }
        }
      }
      goto LAB_05f63b9c;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w25) goto LAB_05f63bb0;
    lVar7 = *(long *)(unaff_x22 + (long)(int)unaff_w25 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_05f63b9c;
    uVar6 = FUN_035fd530(*(undefined8 *)(lVar7 + 0x50));
  } while ((uVar6 & 1) == 0);
  plVar11 = *(long **)(lVar7 + 0x60);
  if (plVar11 == (long *)0x0) {
LAB_05f63b9c:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar7 = *plVar11;
  uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar6 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06a18c18) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_05f63738;
      }
      uVar6 = uVar6 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_06a18c18,0);
LAB_05f63738:
  plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
  in_stack_00000010 = &stack0x00000038;
  in_stack_00000008 = 0;
  do {
    in_stack_00000038 = plVar11;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar7 = *plVar11;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x29) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05f637a4;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_02dd004c(plVar11,*unaff_x29,0);
LAB_05f637a4:
    uVar6 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    unaff_x24 = in_stack_00000038;
    if ((uVar6 & 1) == 0) break;
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar7 = *in_stack_00000038;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05f63808;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_02dd004c(in_stack_00000038,*unaff_x28,0);
LAB_05f63808:
    uVar9 = (*(code *)*puVar5)(unaff_x24,puVar5[1]);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860(uVar9,uVar9);
    }
    FUN_03c23c0c();
    plVar11 = in_stack_00000038;
  } while( true );
  unaff_x23 = 0;
  if (in_stack_00000038 != (long *)0x0) goto code_r0x05f63848;
  goto LAB_05f638a8;
code_r0x05f63848:
  param_1 = *in_stack_00000038;
  uVar6 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar6 != 0) {
    piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_069fbff0) {
        in_x9 = (long)*piVar10;
        goto code_r0x05f63894;
      }
      uVar6 = uVar6 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)FUN_02dd004c(in_stack_00000038,*(long *)PTR_DAT_069fbff0,0);
  goto LAB_05f6389c;
}


