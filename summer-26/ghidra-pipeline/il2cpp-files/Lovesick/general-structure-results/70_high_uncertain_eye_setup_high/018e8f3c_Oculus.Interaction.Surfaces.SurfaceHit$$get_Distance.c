/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.SurfaceHit$$get_Distance
ENTRY_POINT: 018e8f3c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_16;weak_vector_component_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x018e8f34) */
/* WARNING: Removing unreachable block (ram,0x018e90d0) */

void Oculus_Interaction_Surfaces_SurfaceHit__get_Distance(void)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  uint in_w8;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
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
  
  while( true ) {
    unaff_x29 = unaff_x29 + 1;
    if ((long)(int)in_w8 <= (long)unaff_x29) {
      FUN_018e8738();
      if (*(long *)(in_stack_00000010 + 0x28) != in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if (in_w8 <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    if (*(long *)(unaff_x19 + 0x20) == 0) break;
    lVar9 = *(long *)(unaff_x21 + unaff_x29 * 8 + 0x20);
    uVar3 = FUN_0129eff4(*(long *)(unaff_x19 + 0x20),lVar9,&stack0x00000020,
                         *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_116__);
    if ((uVar3 & 1) != 0) {
      if ((in_stack_00000020 == 0) || (*(long *)(in_stack_00000020 + 0x10) == 0)) break;
      plVar4 = (long *)FUN_01356554(*(long *)(in_stack_00000020 + 0x10),
                                    *(undefined8 *)
                                     Method_Oculus_Platform_Message<SdkAccountList>_get_Data__);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
LAB_018e8d14:
      lVar7 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_018e8d60;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724(plVar4,*unaff_x26,0);
LAB_018e8d60:
      uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar3 & 1) != 0) {
        lVar7 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x27) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_018e8dbc;
            }
            uVar3 = uVar3 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724(plVar4,*unaff_x27,0);
LAB_018e8dbc:
        (*(code *)*puVar5)(&stack0x00000038,plVar4,puVar5[1]);
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
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(long *)(lVar9 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar10 = *(undefined8 *)(in_stack_00000028 + 0x10);
          FUN_0132138c(*(long *)(lVar9 + 0xf8),uVar2,(long)&stack0x00000030 + 4,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                      );
          uVar1 = in_stack_00000030._4_4_;
          lVar7 = (long)(int)in_stack_00000030._4_4_;
          uVar12 = *(undefined8 *)(unaff_x19 + 0x28);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar3 = FUN_0268b4e0(uVar10,uVar12,0);
          if (((uVar3 & 1) != 0) && (uVar3 = FUN_018e889c(), (uVar3 & 1) != 0)) {
            lVar11 = *(long *)(unaff_x19 + 0x38);
            lVar6 = FUN_0191fc1c(lVar9,0);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            lVar7 = *(long *)(lVar6 + lVar7 * 8 + 0x20);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_012df150(lVar11,*(undefined8 *)(lVar7 + 0x10),
                         *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmq_f64__);
          }
        }
        goto LAB_018e8d14;
      }
      unaff_x21 = in_stack_00000018;
      if (plVar4 != (long *)0x0) {
        lVar9 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_10310) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
              goto Oculus_Interaction_Surfaces_SurfaceHit__set_Point;
            }
            uVar3 = uVar3 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724(plVar4,*(long *)StringLiteral_10310,0);
Oculus_Interaction_Surfaces_SurfaceHit__set_Point:
        (*(code *)*puVar5)(plVar4,puVar5[1]);
      }
    }
    in_w8 = *(uint *)(unaff_x21 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


