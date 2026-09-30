/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.CylinderSurface$$Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint
ENTRY_POINT: 018e8f08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Oculus_Interaction_Surfaces_CylinderSurface__Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint
               (undefined8 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long lVar8;
  long unaff_x23;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
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
  
Oculus_Interaction_Surfaces_SurfaceHit__set_Point:
  do {
    (*(code *)*param_1)(unaff_x21,param_1[1]);
    do {
      if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00dbe778(unaff_x23);
      }
      if ((unaff_w22 != 5) && (unaff_w22 != 0)) {
LAB_018e9014:
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
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
        lVar8 = *(long *)(in_stack_00000018 + unaff_x29 * 8 + 0x20);
        uVar3 = FUN_0129eff4(*(long *)(unaff_x19 + 0x20),lVar8,&stack0x00000020,
                             *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_116__);
      } while ((uVar3 & 1) == 0);
      if ((in_stack_00000020 == 0) || (*(long *)(in_stack_00000020 + 0x10) == 0)) {
LAB_018e90c8:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      unaff_x21 = (long *)FUN_01356554(*(long *)(in_stack_00000020 + 0x10),
                                       *(undefined8 *)
                                        Method_Oculus_Platform_Message<SdkAccountList>_get_Data__);
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
LAB_018e8d14:
      lVar6 = *unaff_x21;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_018e8d60;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724(unaff_x21,*unaff_x26,0);
LAB_018e8d60:
      uVar3 = (*(code *)*puVar4)(unaff_x21,puVar4[1]);
      if ((uVar3 & 1) != 0) {
        lVar6 = *unaff_x21;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x27) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_018e8dbc;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
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
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(long *)(lVar8 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar9 = *(undefined8 *)(in_stack_00000028 + 0x10);
          FUN_0132138c(*(long *)(lVar8 + 0xf8),uVar2,(long)&stack0x00000030 + 4,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                      );
          uVar1 = in_stack_00000030._4_4_;
          lVar6 = (long)(int)in_stack_00000030._4_4_;
          uVar11 = *(undefined8 *)(unaff_x19 + 0x28);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar3 = FUN_0268b4e0(uVar9,uVar11,0);
          if (((uVar3 & 1) != 0) && (uVar3 = FUN_018e889c(), (uVar3 & 1) != 0)) {
            lVar10 = *(long *)(unaff_x19 + 0x38);
            lVar5 = FUN_0191fc1c(lVar8,0);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (*(uint *)(lVar5 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            lVar6 = *(long *)(lVar5 + lVar6 * 8 + 0x20);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_012df150(lVar10,*(undefined8 *)(lVar6 + 0x10),
                         *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmq_f64__);
          }
        }
        goto LAB_018e8d14;
      }
      unaff_x23 = 0;
      unaff_w22 = 5;
    } while (unaff_x21 == (long *)0x0);
    lVar8 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)StringLiteral_10310) {
          param_1 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
          goto Oculus_Interaction_Surfaces_SurfaceHit__set_Point;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    param_1 = (undefined8 *)FUN_00d59724(unaff_x21,*(long *)StringLiteral_10310,0);
  } while( true );
}


