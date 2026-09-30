/*
FUNCTION_NAME: OVRBounded2D$$.cctor
ENTRY_POINT: 019a3764
PROGRAM: Lovesick-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRBounded2D___cctor(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  long unaff_x19;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *unaff_x22;
  long *unaff_x23;
  float fVar11;
  float fVar12;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  long in_stack_00000078;
  
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    FUN_0269f618(uStack0000000000000040,uStack0000000000000044,uStack0000000000000048,
                 *(long *)(unaff_x19 + 0x58),0);
    if (*(long *)(unaff_x19 + 0x58) != 0) {
      FUN_0269f894(uStack000000000000004c,uStack0000000000000050,uStack0000000000000054,
                   in_stack_00000058,*(long *)(unaff_x19 + 0x58),0);
      if (*(char *)(unaff_x19 + 0x29) != '\0') {
        uVar8 = *(undefined8 *)(unaff_x19 + 0x58);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar3 = FUN_02681b9c(uVar8,0,0);
        if ((uVar3 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_019a3b9c;
          uVar8 = FUN_0269fe30(*(long *)(unaff_x19 + 0x58),0);
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_00d32864(*unaff_x22);
          }
          uVar3 = FUN_02681b9c(uVar8,0,0);
          if ((uVar3 & 1) == 0) {
            fVar11 = 1.0;
          }
          else {
            if ((*(long *)(unaff_x19 + 0x58) == 0) ||
               (lVar4 = FUN_0269fe30(*(long *)(unaff_x19 + 0x58),0), lVar4 == 0)) goto LAB_019a3b9c;
            fVar11 = (float)FUN_026a125c(lVar4,0);
          }
          plVar10 = *(long **)(unaff_x19 + 0x20);
          if (plVar10 == (long *)0x0) goto LAB_019a3b9c;
          lVar4 = *plVar10;
          lVar9 = *(long *)(unaff_x19 + 0x58);
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x23) {
                puVar5 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
                goto LAB_019a3884;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_00d59724(plVar10,*unaff_x23,4);
LAB_019a3884:
          fVar12 = (float)(*(code *)*puVar5)(plVar10,puVar5[1]);
          if (DAT_03774e1c == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774e1c = '\x01';
          }
          if (lVar9 == 0) goto LAB_019a3b9c;
          fVar12 = fVar12 / fVar11;
          lVar4 = *(long *)(*(long *)
                             Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                           + 0xb8);
          FUN_0269fd98(fVar12 * *(float *)(lVar4 + 0xc),fVar12 * *(float *)(lVar4 + 0x10),
                       fVar12 * *(float *)(lVar4 + 0x14),lVar9,0);
        }
      }
      plVar10 = *(long **)(unaff_x19 + 0x20);
      if (plVar10 != (long *)0x0) {
        lVar4 = *plVar10;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x23) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xb) * 0x10 + 0x138);
              goto LAB_019a3944;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724(plVar10,*unaff_x23,0xb);
LAB_019a3944:
        uVar3 = (*(code *)*puVar5)(plVar10,&stack0x00000078,puVar5[1]);
        puVar2 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_get_Count__;
        if ((uVar3 & 1) != 0) {
          iVar7 = 0;
          do {
            plVar10 = *(long **)(unaff_x19 + 0x68);
            if (plVar10 == (long *)0x0) goto LAB_019a3b9c;
            lVar9 = *plVar10;
            lVar4 = *(long *)puVar2;
            uVar3 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar3 != 0) {
              piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == lVar4) {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar6 * 0x10 + 0x138);
                  goto LAB_019a39b8;
                }
                uVar3 = uVar3 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar3 != 0);
            }
            puVar5 = (undefined8 *)FUN_00d59724(plVar10,lVar4,0);
LAB_019a39b8:
            uVar8 = (*(code *)*puVar5)(plVar10,iVar7,puVar5[1]);
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_00d32864(*unaff_x22);
            }
            uVar3 = FUN_0268b4e0(uVar8,0,0);
            if ((uVar3 & 1) == 0) {
              plVar10 = *(long **)(unaff_x19 + 0x68);
              if (plVar10 == (long *)0x0) goto LAB_019a3b9c;
              lVar9 = *plVar10;
              lVar4 = *(long *)puVar2;
              uVar3 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar3 != 0) {
                piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == lVar4) {
                    puVar5 = (undefined8 *)(lVar9 + (long)*piVar6 * 0x10 + 0x138);
                    goto LAB_019a3a48;
                  }
                  uVar3 = uVar3 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar3 != 0);
              }
              puVar5 = (undefined8 *)FUN_00d59724(plVar10,lVar4,0);
LAB_019a3a48:
              uVar8 = (*(code *)*puVar5)(plVar10,iVar7,puVar5[1]);
              if (in_stack_00000078 == 0) goto LAB_019a3b9c;
              OVRPlugin__EraseSpace(in_stack_00000078,iVar7,0);
              in_stack_00000028 = in_stack_00000008;
              in_stack_00000020 = in_stack_00000000;
              in_stack_00000030 = in_stack_00000010;
              FUN_019ac4bc(uVar8,&stack0x00000020,1,0);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 != 0x1a);
          uVar8 = *(undefined8 *)(unaff_x19 + 0x60);
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar3 = FUN_02681b9c(uVar8,0,0);
          if ((uVar3 & 1) != 0) {
            if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_019a3b9c;
            lVar4 = FUN_01991930();
            plVar10 = *(long **)(unaff_x19 + 0x20);
            if (plVar10 == (long *)0x0) goto LAB_019a3b9c;
            lVar9 = *plVar10;
            uVar1 = *(undefined4 *)(unaff_x19 + 0x78);
            uVar3 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar3 != 0) {
              piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *unaff_x23) {
                  puVar5 = (undefined8 *)(lVar9 + (long)(*piVar6 + 4) * 0x10 + 0x138);
                  goto LAB_019a3b3c;
                }
                uVar3 = uVar3 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar3 != 0);
            }
            puVar5 = (undefined8 *)FUN_00d59724(plVar10,*unaff_x23,4);
LAB_019a3b3c:
            (*(code *)*puVar5)(plVar10,puVar5[1]);
            if (lVar4 == 0) goto LAB_019a3b9c;
            FUN_0267be98(lVar4,uVar1,0);
            if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_019a3b9c;
            FUN_019a1c58();
          }
          lVar4 = *(long *)(unaff_x19 + 0x70);
          if (lVar4 == 0) goto LAB_019a3b9c;
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        }
        return;
      }
    }
  }
LAB_019a3b9c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


