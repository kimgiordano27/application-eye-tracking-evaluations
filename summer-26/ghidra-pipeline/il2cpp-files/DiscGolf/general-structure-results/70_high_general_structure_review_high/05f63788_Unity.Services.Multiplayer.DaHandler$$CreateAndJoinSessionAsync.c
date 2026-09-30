/*
FUNCTION_NAME: Unity.Services.Multiplayer.DaHandler$$CreateAndJoinSessionAsync
ENTRY_POINT: 05f63788
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


/* WARNING: Removing unreachable block (ram,0x05f63bc0) */

void Unity_Services_Multiplayer_DaHandler__CreateAndJoinSessionAsync
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar11;
  long *unaff_x23;
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
  
code_r0x05f63788:
  puVar5 = (undefined8 *)FUN_02dd004c(unaff_x23,param_2,0);
  do {
    uVar6 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
    plVar11 = in_stack_00000038;
    if ((uVar6 & 1) == 0) {
      if (in_stack_00000038 != (long *)0x0) {
        lVar9 = *in_stack_00000038;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_069fbff0) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_05f6389c;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_02dd004c(in_stack_00000038,*(long *)PTR_DAT_069fbff0,0);
LAB_05f6389c:
        (*(code *)*puVar5)(plVar11,puVar5[1]);
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
          FUN_035296a8(unaff_x19 + 0x1e8,*(int *)(unaff_x21 + 0x20) + 1,
                       *(undefined8 *)
                        Method_UnityEngine_TextCore_Text_TextProcessingStack<float>__ctor__);
          FUN_0352962c(unaff_x19 + 0x1f0,*(int *)(unaff_x21 + 0x20) + 1,*(undefined8 *)puVar3);
          plVar11 = *(long **)(unaff_x19 + 0x1e8);
          lVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
          FUN_0639f51c(lVar9,*(undefined8 *)puVar2,0);
          if (plVar11 != (long *)0x0) {
            if ((lVar9 != 0) &&
               (lVar8 = thunk_FUN_02dd3048(lVar9,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0)) {
              uVar7 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
              FUN_02d96724(uVar7,0);
            }
            if ((int)plVar11[3] == 0) {
LAB_05f63bb0:
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            plVar11[4] = lVar9;
            LeanTween__value(plVar11 + 4,lVar9);
            puVar3 = Method_UnityEngine_TextCore_Text_TextProcessingStack<float>_Clear__;
            puVar2 = Method_System_Span<byte>_GetPinnableReference__;
            lVar9 = *(long *)(unaff_x19 + 0x1f0);
            if (lVar9 != 0) {
              if (*(int *)(lVar9 + 0x18) == 0) goto LAB_05f63bb0;
              *(undefined4 *)(lVar9 + 0x20) = 0;
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
                    uVar7 = in_stack_00000030, (uVar6 & 1) != 0) {
                plVar11 = *(long **)(unaff_x19 + 0x1e8);
                lVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
                FUN_0639f51c(lVar9,uVar7,0);
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if ((lVar9 != 0) &&
                   (lVar8 = thunk_FUN_02dd3048(lVar9,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0))
                {
                  uVar7 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
                  FUN_02d96724(uVar7,0);
                }
                if (*(uint *)(plVar11 + 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                plVar11[(long)(int)uVar12 + 4] = lVar9;
                LeanTween__value(plVar11 + (long)(int)uVar12 + 4,lVar9);
                lVar9 = *(long *)(unaff_x19 + 0x1f0);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if (*(uint *)(lVar9 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                *(uint *)(lVar9 + (long)(int)uVar12 * 4 + 0x20) = uVar12;
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
                    lVar9 = *(long *)(unaff_x19 + 0x180);
                    if ((lVar9 != 0) && (*(long *)(unaff_x19 + 0x1e8) != 0)) {
                      if (*(int *)(*(long *)(unaff_x19 + 0x1e8) + 0x18) <= *(int *)(lVar9 + 0x54)) {
                        *(undefined4 *)(lVar9 + 0x54) = 0;
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
        lVar9 = *(long *)(unaff_x22 + (long)(int)unaff_w25 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_05f63b9c;
        uVar6 = FUN_035fd530(*(undefined8 *)(lVar9 + 0x50));
      } while ((uVar6 & 1) == 0);
      plVar11 = *(long **)(lVar9 + 0x60);
      if (plVar11 == (long *)0x0) {
LAB_05f63b9c:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar9 = *plVar11;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06a18c18) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05f63738;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_06a18c18,0);
LAB_05f63738:
      unaff_x23 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
      in_stack_00000010 = &stack0x00000038;
      in_stack_00000008 = 0;
    }
    else {
      if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar9 = *in_stack_00000038;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x28) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05f63808;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_02dd004c(in_stack_00000038,*unaff_x28,0);
LAB_05f63808:
      uVar7 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(uVar7,uVar7);
      }
      FUN_03c23c0c();
      unaff_x23 = in_stack_00000038;
    }
    in_stack_00000038 = unaff_x23;
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar9 = *unaff_x23;
    param_2 = *unaff_x29;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 == 0) goto code_r0x05f63788;
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    while (*(long *)(piVar10 + -2) != param_2) {
      uVar6 = uVar6 - 1;
      piVar10 = piVar10 + 4;
      if (uVar6 == 0) goto code_r0x05f63788;
    }
    puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
  } while( true );
}


