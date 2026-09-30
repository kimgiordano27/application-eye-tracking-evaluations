/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.NavMeshSurface$$ClosestSurfacePoint
ENTRY_POINT: 018e8fe0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x018e90c0) */

void Oculus_Interaction_Surfaces_NavMeshSurface__ClosestSurfacePoint(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  ulong unaff_x29;
  float unaff_s8;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  float in_stack_00000088;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  long in_stack_000000c8;
  
  if (param_2 == 1) {
    plVar6 = (long *)__cxa_begin_catch(param_1);
    lVar10 = *plVar6;
    __cxa_end_catch();
    iVar9 = 0;
    if (unaff_x21 != (long *)0x0) goto code_r0x018e8ec4;
    do {
      do {
        if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00dbe778(lVar10);
        }
        if ((iVar9 != 5) && (iVar9 != 0)) {
LAB_018e9014:
          if (*(long *)(in_stack_00000010 + 0x28) != in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        do {
          unaff_x29 = unaff_x29 + 1;
          if ((long)(int)*(uint *)(in_stack_00000018 + 0x18) <= (long)unaff_x29) {
            FUN_018e8738();
            goto LAB_018e9014;
          }
          if (*(uint *)(in_stack_00000018 + 0x18) <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_018e90c8;
          lVar10 = *(long *)(in_stack_00000018 + unaff_x29 * 8 + 0x20);
          uVar3 = FUN_0129eff4(*(long *)(unaff_x19 + 0x20),lVar10,&stack0x00000020,
                               *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_116__);
        } while ((uVar3 & 1) == 0);
        if ((in_stack_00000020 == 0) || (*(long *)(in_stack_00000020 + 0x10) == 0)) {
LAB_018e90c8:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        unaff_x21 = (long *)FUN_01356554(*(long *)(in_stack_00000020 + 0x10),
                                         *(undefined8 *)
                                          Method_Oculus_Platform_Message<SdkAccountList>_get_Data__)
        ;
        if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
LAB_018e8d14:
        lVar7 = *unaff_x21;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x26) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_018e8d60;
            }
            uVar3 = uVar3 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_00d59724(unaff_x21,*unaff_x26,0);
LAB_018e8d60:
        uVar3 = (*(code *)*puVar4)(unaff_x21,puVar4[1]);
        if ((uVar3 & 1) != 0) {
          lVar7 = *unaff_x21;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *unaff_x27) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_018e8dbc;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_00d59724(unaff_x21,*unaff_x27,0);
LAB_018e8dbc:
          (*(code *)*puVar4)(&stack0x00000038,unaff_x21,puVar4[1]);
          uVar2 = uStack00000000000000a0;
          if (in_stack_00000088 < unaff_s8) {
            if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_0132138c(*(long *)(unaff_x20 + 0x18),uStack00000000000000a4,&stack0x00000028,
                         *(undefined8 *)
                          Method_System_Linq_Enumerable_<IntersectIterator>d__74<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_Reset__
                        );
            if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (*(long *)(lVar10 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar11 = *(undefined8 *)(in_stack_00000028 + 0x10);
            FUN_0132138c(*(long *)(lVar10 + 0xf8),uVar2,(long)&stack0x00000030 + 4,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                        );
            uVar1 = in_stack_00000030._4_4_;
            lVar7 = (long)(int)in_stack_00000030._4_4_;
            uVar13 = *(undefined8 *)(unaff_x19 + 0x28);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar3 = FUN_0268b4e0(uVar11,uVar13,0);
            if (((uVar3 & 1) != 0) && (uVar3 = FUN_018e889c(), (uVar3 & 1) != 0)) {
              lVar12 = *(long *)(unaff_x19 + 0x38);
              lVar5 = FUN_0191fc1c(lVar10,0);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(uint *)(lVar5 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              lVar7 = *(long *)(lVar5 + lVar7 * 8 + 0x20);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_012df150(lVar12,*(undefined8 *)(lVar7 + 0x10),
                           *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmq_f64__);
            }
          }
          goto LAB_018e8d14;
        }
        lVar10 = 0;
        iVar9 = 5;
      } while (unaff_x21 == (long *)0x0);
code_r0x018e8ec4:
      lVar7 = *unaff_x21;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_10310) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto Oculus_Interaction_Surfaces_SurfaceHit__set_Point;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724(unaff_x21,*(long *)StringLiteral_10310,0);
Oculus_Interaction_Surfaces_SurfaceHit__set_Point:
      (*(code *)*puVar4)(unaff_x21,puVar4[1]);
    } while( true );
  }
  if (unaff_x21 != (long *)0x0) {
    lVar10 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_10310) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_018e90a8;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_018e90a8:
    (*(code *)*puVar4)();
  }
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(param_1);
}


