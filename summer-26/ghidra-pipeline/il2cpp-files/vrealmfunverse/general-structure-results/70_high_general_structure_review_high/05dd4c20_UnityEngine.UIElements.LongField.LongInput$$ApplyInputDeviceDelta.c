/*
FUNCTION_NAME: UnityEngine.UIElements.LongField.LongInput$$ApplyInputDeviceDelta
ENTRY_POINT: 05dd4c20
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_9;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_UIElements_LongField_LongInput__ApplyInputDeviceDelta(void)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_000000d0;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined4 uStack0000000000000138;
  undefined4 uStack000000000000013c;
  undefined4 uStack0000000000000140;
  undefined8 uStack0000000000000144;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined4 in_stack_00000160;
  undefined8 in_stack_00000170;
  undefined4 uStack0000000000000178;
  undefined4 uStack000000000000017c;
  undefined4 uStack0000000000000180;
  undefined8 uStack0000000000000184;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined4 in_stack_00000268;
  undefined4 in_stack_0000026c;
  long in_stack_000002a8;
  
  FUN_0383a2fc();
  while (uVar2 = FUN_04745cd4(&stack0x00000280,*unaff_x26), (uVar2 & 1) != 0) {
    FUN_05f58738();
  }
  FUN_04745cd0(&stack0x00000280,*unaff_x22);
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    FUN_0383d0e8(&stack0x00000258,*(long *)(unaff_x20 + 0x18),*unaff_x29);
    while (uVar2 = System_Collections_Generic_EqualityComparer<TreeViewItemData<object>>___ctor
                             (&stack0x00000210,*unaff_x28), (uVar2 & 1) != 0) {
      FUN_05f596b4();
    }
    FUN_04745f1c(&stack0x00000210,
                 *(undefined8 *)Method_System_Runtime_Serialization_XmlObjectSerializer_CheckNull__)
    ;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) {
    lVar5 = *(long *)(unaff_x25 + 0x28);
  }
  else {
    plVar3 = (long *)FUN_05dedea8(*(long *)(unaff_x20 + 0x20),0);
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x27) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0x2e) * 0x10 + 0x138);
            goto LAB_05dd4d5c;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar3,*unaff_x27,0x2e);
LAB_05dd4d5c:
      (*(code *)*puVar4)(&stack0x00000258,plVar3,puVar4[1]);
      iVar1 = FUN_05e0c6c0(&stack0x000001f0,0);
      if (iVar1 != 1) {
        if ((*(long *)(unaff_x20 + 0x20) == 0) ||
           (plVar3 = (long *)FUN_05dedea8(*(long *)(unaff_x20 + 0x20),0), plVar3 == (long *)0x0))
        goto UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition;
        lVar5 = *plVar3;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x27) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0x2e) * 0x10 + 0x138);
              goto LAB_05dd4df0;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_02b7654c(plVar3,*unaff_x27,0x2e);
LAB_05dd4df0:
        (*(code *)*puVar4)(&stack0x00000258,plVar3,puVar4[1]);
        FUN_05e0c650(&stack0x000000d0,&stack0x000001f0,0);
        in_stack_000000f8 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
        in_stack_00000100 = CONCAT44(uStack00000000000000e4,uStack00000000000000e0);
        in_stack_000000f0 = in_stack_000000d0;
        FUN_05f59b08();
      }
      if ((*(long *)(unaff_x20 + 0x20) != 0) &&
         (plVar3 = (long *)FUN_05dedea8(*(long *)(unaff_x20 + 0x20),0), plVar3 != (long *)0x0)) {
        lVar5 = *plVar3;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x27) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0x6c) * 0x10 + 0x138);
              goto LAB_05dd4ea0;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_02b7654c(plVar3,*unaff_x27,0x6c);
LAB_05dd4ea0:
        (*(code *)*puVar4)(&stack0x00000258,plVar3,puVar4[1]);
        in_stack_000001d8 = unaff_x23[1];
        in_stack_000001d0 = *unaff_x23;
        in_stack_000001e8 = unaff_x23[3];
        in_stack_000001e0 = unaff_x23[2];
        iVar1 = FUN_05e0dc38(&stack0x000001d0,0);
        if (iVar1 != 1) {
          if ((*(long *)(unaff_x20 + 0x20) == 0) ||
             (plVar3 = (long *)FUN_05dedea8(*(long *)(unaff_x20 + 0x20),0), plVar3 == (long *)0x0))
          goto UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition;
          lVar5 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x27) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0x6c) * 0x10 + 0x138);
                goto LAB_05dd4f34;
              }
              uVar2 = uVar2 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined8 *)FUN_02b7654c(plVar3,*unaff_x27,0x6c);
LAB_05dd4f34:
          (*(code *)*puVar4)(&stack0x00000258,plVar3,puVar4[1]);
          in_stack_000001d8 = unaff_x23[1];
          in_stack_000001d0 = *unaff_x23;
          in_stack_000001e8 = unaff_x23[3];
          in_stack_000001e0 = unaff_x23[2];
          FUN_05e0dbcc(&stack0x000000d0,&stack0x000001d0,0);
          FUN_05f59b74();
        }
        if ((*(long *)(unaff_x20 + 0x20) != 0) &&
           (plVar3 = (long *)FUN_05dedea8(*(long *)(unaff_x20 + 0x20),0), plVar3 != (long *)0x0)) {
          lVar5 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x27) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0x98) * 0x10 + 0x138);
                goto LAB_05dd4fe4;
              }
              uVar2 = uVar2 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined8 *)FUN_02b7654c(plVar3,*unaff_x27,0x98);
LAB_05dd4fe4:
          (*(code *)*puVar4)(&stack0x00000258,plVar3,puVar4[1]);
          in_stack_000001b8 = unaff_x23[1];
          in_stack_000001b0 = *unaff_x23;
          in_stack_000001c0 = CONCAT44(in_stack_0000026c,in_stack_00000268);
          iVar1 = FUN_05e1b494(&stack0x000001b0,0);
          if (iVar1 != 1) {
            if ((*(long *)(unaff_x20 + 0x20) == 0) ||
               (plVar3 = (long *)FUN_05dedea8(*(long *)(unaff_x20 + 0x20),0), plVar3 == (long *)0x0)
               ) goto UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition;
            lVar5 = *plVar3;
            uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar2 != 0) {
              piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *unaff_x27) {
                  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0x98) * 0x10 + 0x138);
                  goto LAB_05dd5080;
                }
                uVar2 = uVar2 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar2 != 0);
            }
            puVar4 = (undefined8 *)FUN_02b7654c(plVar3,*unaff_x27,0x98);
LAB_05dd5080:
            (*(code *)*puVar4)(&stack0x00000258,plVar3,puVar4[1]);
            in_stack_000001c0 = CONCAT44(in_stack_0000026c,in_stack_00000268);
            in_stack_000001b8 = unaff_x23[1];
            in_stack_000001b0 = *unaff_x23;
            FUN_05e1b438(&stack0x000000d0,&stack0x000001b0,0);
            FUN_05f59be4();
          }
          if (*(char *)(unaff_x20 + 0x90) != '\0') {
            if ((*(long *)(unaff_x20 + 0x20) == 0) ||
               (plVar3 = (long *)FUN_05dedea8(*(long *)(unaff_x20 + 0x20),0), plVar3 == (long *)0x0)
               ) goto UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition;
            lVar5 = *plVar3;
            uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar2 != 0) {
              piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *unaff_x27) {
                  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0x70) * 0x10 + 0x138);
                  goto LAB_05dd5140;
                }
                uVar2 = uVar2 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar2 != 0);
            }
            puVar4 = (undefined8 *)FUN_02b7654c(plVar3,*unaff_x27,0x70);
LAB_05dd5140:
            (*(code *)*puVar4)(&stack0x00000258,plVar3,puVar4[1]);
            in_stack_000001a0 = CONCAT44(in_stack_0000026c,in_stack_00000268);
            in_stack_00000198 = unaff_x23[1];
            in_stack_00000190 = *unaff_x23;
            FUN_05e0de8c(&stack0x000000d0,&stack0x00000190,0);
            FUN_05f68be4();
          }
          if (*(char *)(unaff_x20 + 0xac) != '\0') {
            if ((*(long *)(unaff_x20 + 0x20) == 0) ||
               (plVar3 = (long *)FUN_05dedea8(*(long *)(unaff_x20 + 0x20),0), plVar3 == (long *)0x0)
               ) goto UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition;
            lVar5 = *plVar3;
            uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar2 != 0) {
              piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *unaff_x27) {
                  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0x7a) * 0x10 + 0x138);
                  goto LAB_05dd5200;
                }
                uVar2 = uVar2 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar2 != 0);
            }
            puVar4 = (undefined8 *)FUN_02b7654c(plVar3,*unaff_x27,0x7a);
LAB_05dd5200:
            (*(code *)*puVar4)(&stack0x00000258,plVar3,puVar4[1]);
            in_stack_00000170 = *unaff_x23;
            uStack0000000000000184 = *(undefined8 *)((long)unaff_x23 + 0x14);
            uStack0000000000000178 = (undefined4)unaff_x23[1];
            uStack000000000000017c = (undefined4)*(undefined8 *)((long)unaff_x23 + 0xc);
            uStack0000000000000180 =
                 (undefined4)((ulong)*(undefined8 *)((long)unaff_x23 + 0xc) >> 0x20);
            FUN_05e0e22c(&stack0x000000d0,&stack0x00000170,0);
            FUN_05f68c4c();
          }
          if (*(char *)(unaff_x20 + 0xec) != '\0') {
            if ((*(long *)(unaff_x20 + 0x20) == 0) ||
               (plVar3 = (long *)FUN_05dedea8(*(long *)(unaff_x20 + 0x20),0), plVar3 == (long *)0x0)
               ) goto UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition;
            lVar5 = *plVar3;
            uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar2 != 0) {
              piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *unaff_x27) {
                  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0x68) * 0x10 + 0x138);
                  goto LAB_05dd52c0;
                }
                uVar2 = uVar2 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar2 != 0);
            }
            puVar4 = (undefined8 *)FUN_02b7654c(plVar3,*unaff_x27,0x68);
LAB_05dd52c0:
            (*(code *)*puVar4)(&stack0x00000258,plVar3,puVar4[1]);
            in_stack_00000158 = unaff_x23[1];
            in_stack_00000150 = *unaff_x23;
            in_stack_00000160 = in_stack_00000268;
            FUN_05e0d8b0(&stack0x00000150,0);
            FUN_05f68d1c();
          }
          if (*(char *)(unaff_x20 + 0xcc) != '\0') {
            if ((*(long *)(unaff_x20 + 0x20) == 0) ||
               (plVar3 = (long *)FUN_05dedea8(*(long *)(unaff_x20 + 0x20),0), plVar3 == (long *)0x0)
               ) goto UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition;
            lVar5 = *plVar3;
            uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar2 != 0) {
              piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *unaff_x27) {
                  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0x66) * 0x10 + 0x138);
                  goto LAB_05dd5378;
                }
                uVar2 = uVar2 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar2 != 0);
            }
            puVar4 = (undefined8 *)FUN_02b7654c(plVar3,*unaff_x27,0x66);
LAB_05dd5378:
            (*(code *)*puVar4)(&stack0x00000258,plVar3,puVar4[1]);
            in_stack_00000130 = *unaff_x23;
            uStack0000000000000144 = *(undefined8 *)((long)unaff_x23 + 0x14);
            uStack0000000000000138 = (undefined4)unaff_x23[1];
            uStack000000000000013c = (undefined4)*(undefined8 *)((long)unaff_x23 + 0xc);
            uStack0000000000000140 =
                 (undefined4)((ulong)*(undefined8 *)((long)unaff_x23 + 0xc) >> 0x20);
            FUN_05e0d4e4(&stack0x000000d0,&stack0x00000130,0);
            FUN_05f68cb4();
          }
          if (*(char *)(unaff_x20 + 0x104) != '\0') {
            if ((*(long *)(unaff_x20 + 0x20) == 0) ||
               (plVar3 = (long *)FUN_05dedea8(*(long *)(unaff_x20 + 0x20),0), plVar3 == (long *)0x0)
               ) goto UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition;
            lVar5 = *plVar3;
            uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar2 != 0) {
              piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *unaff_x27) {
                  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0x10) * 0x10 + 0x138);
                  goto FUN_05dd5438;
                }
                uVar2 = uVar2 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar2 != 0);
            }
            puVar4 = (undefined8 *)FUN_02b7654c(plVar3,*unaff_x27,0x10);
FUN_05dd5438:
            (*(code *)*puVar4)(&stack0x00000258,plVar3,puVar4[1]);
            in_stack_00000120 = CONCAT44(in_stack_0000026c,in_stack_00000268);
            in_stack_00000118 = unaff_x23[1];
            in_stack_00000110 = *unaff_x23;
            FUN_05e0c0bc(&stack0x000000d0,&stack0x00000110,0);
            FUN_05f68d7c();
          }
          if (*(long *)(unaff_x25 + 0x28) == in_stack_000002a8) {
            return;
          }
          goto LAB_05dd55b0;
        }
      }
    }
UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition:
    lVar5 = *(long *)(unaff_x25 + 0x28);
  }
  if (lVar5 == in_stack_000002a8) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_05dd55b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


