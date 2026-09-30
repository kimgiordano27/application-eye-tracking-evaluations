/*
FUNCTION_NAME: UnityEngine.UIElements.LongField.LongInput$$get_allowedCharacters
ENTRY_POINT: 05dd4bc8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_9;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_UIElements_LongField_LongInput__get_allowedCharacters
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  long unaff_x20;
  long unaff_x24;
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
  undefined1 *in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined4 uStack0000000000000138;
  undefined4 uStack000000000000013c;
  undefined4 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined1 *in_stack_00000158;
  undefined4 in_stack_00000160;
  undefined8 in_stack_00000170;
  undefined4 uStack0000000000000178;
  undefined4 uStack000000000000017c;
  undefined4 in_stack_00000180;
  undefined8 in_stack_00000190;
  undefined1 *in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001b0;
  undefined1 *in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001d0;
  undefined1 *in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 uVar13;
  undefined4 in_stack_00000268;
  undefined4 in_stack_0000026c;
  undefined4 in_stack_00000270;
  undefined4 in_stack_00000274;
  long in_stack_000002a8;
  
  FUN_05f570c0(param_2,**(undefined8 **)(param_1 + 0xb8),param_4,0);
  puVar6 = 
  Method_System_Runtime_Serialization_XmlObjectSerializer_WriteObjectContentHandleExceptions__;
  puVar5 = Method_System_Runtime_Serialization_XmlObjectSerializer_InternalWriteEndObject__;
  puVar4 = Method_System_Runtime_Serialization_XmlObjectSerializer_InternalIsStartObject__;
  puVar3 = Method_System_Xml_Schema_XmlNumeric2Converter_ToString__;
  puVar2 = PTR_DAT_0631fa60;
  if (*(long *)(unaff_x20 + 0x10) == 0) {
LAB_05dd54d4:
    lVar11 = *(long *)(unaff_x24 + 0x28);
  }
  else {
    FUN_0383a2fc(&stack0x00000258,*(long *)(unaff_x20 + 0x10),
                 *(undefined8 *)
                  Method_System_Runtime_Serialization_XmlObjectSerializer_WriteObjectHandleExceptions__
                );
    puVar1 = &stack0x00000280;
    while (uVar8 = FUN_04745cd4(&stack0x00000280,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
      FUN_05f58738();
    }
    FUN_04745cd0(&stack0x00000280,*(undefined8 *)puVar3);
    if (*(long *)(unaff_x20 + 0x18) != 0) {
      FUN_0383d0e8(&stack0x00000258,*(long *)(unaff_x20 + 0x18),*(undefined8 *)puVar6);
      puVar1 = &stack0x00000210;
      while (uVar8 = System_Collections_Generic_EqualityComparer<TreeViewItemData<object>>___ctor
                               (&stack0x00000210,*(undefined8 *)puVar5), (uVar8 & 1) != 0) {
        FUN_05f596b4();
      }
      FUN_04745f1c(&stack0x00000210,
                   *(undefined8 *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_CheckNull__);
    }
    uVar13 = 0;
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_05dd54d4;
    plVar9 = (long *)FUN_05dedea8(*(long *)(unaff_x20 + 0x20),0);
    if (plVar9 != (long *)0x0) {
      lVar11 = *plVar9;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 0x2e) * 0x10 + 0x138);
            goto LAB_05dd4d5c;
          }
          uVar8 = uVar8 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)puVar2,0x2e);
LAB_05dd4d5c:
      (*(code *)*puVar10)(&stack0x00000258,plVar9,puVar10[1]);
      iVar7 = FUN_05e0c6c0(&stack0x000001f0,0);
      if (iVar7 != 1) {
        if ((*(long *)(unaff_x20 + 0x20) == 0) ||
           (plVar9 = (long *)FUN_05dedea8(*(long *)(unaff_x20 + 0x20),0), plVar9 == (long *)0x0))
        goto UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition;
        lVar11 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 0x2e) * 0x10 + 0x138);
              goto LAB_05dd4df0;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)puVar2,0x2e);
LAB_05dd4df0:
        (*(code *)*puVar10)(&stack0x00000258,plVar9,puVar10[1]);
        FUN_05e0c650(&stack0x000000d0,&stack0x000001f0,0);
        in_stack_000000f8 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
        in_stack_00000100 = CONCAT44(uStack00000000000000e4,uStack00000000000000e0);
        in_stack_000000f0 = in_stack_000000d0;
        FUN_05f59b08();
      }
      if ((*(long *)(unaff_x20 + 0x20) != 0) &&
         (plVar9 = (long *)FUN_05dedea8(*(long *)(unaff_x20 + 0x20),0), plVar9 != (long *)0x0)) {
        lVar11 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 0x6c) * 0x10 + 0x138);
              goto LAB_05dd4ea0;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)puVar2,0x6c);
LAB_05dd4ea0:
        (*(code *)*puVar10)(&stack0x00000258,plVar9,puVar10[1]);
        in_stack_000001e8 = CONCAT44(in_stack_00000274,in_stack_00000270);
        in_stack_000001e0 = CONCAT44(in_stack_0000026c,in_stack_00000268);
        in_stack_000001d0 = uVar13;
        in_stack_000001d8 = puVar1;
        iVar7 = FUN_05e0dc38(&stack0x000001d0,0);
        if (iVar7 != 1) {
          if ((*(long *)(unaff_x20 + 0x20) == 0) ||
             (plVar9 = (long *)FUN_05dedea8(*(long *)(unaff_x20 + 0x20),0), plVar9 == (long *)0x0))
          goto UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition;
          lVar11 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 0x6c) * 0x10 + 0x138);
                goto LAB_05dd4f34;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)puVar2,0x6c);
LAB_05dd4f34:
          (*(code *)*puVar10)(&stack0x00000258,plVar9,puVar10[1]);
          in_stack_000001e8 = CONCAT44(in_stack_00000274,in_stack_00000270);
          in_stack_000001e0 = CONCAT44(in_stack_0000026c,in_stack_00000268);
          in_stack_000001d0 = uVar13;
          in_stack_000001d8 = puVar1;
          FUN_05e0dbcc(&stack0x000000d0,&stack0x000001d0,0);
          FUN_05f59b74();
        }
        if ((*(long *)(unaff_x20 + 0x20) != 0) &&
           (plVar9 = (long *)FUN_05dedea8(*(long *)(unaff_x20 + 0x20),0), plVar9 != (long *)0x0)) {
          lVar11 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 0x98) * 0x10 + 0x138);
                goto LAB_05dd4fe4;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)puVar2,0x98);
LAB_05dd4fe4:
          (*(code *)*puVar10)(&stack0x00000258,plVar9,puVar10[1]);
          in_stack_000001c0 = CONCAT44(in_stack_0000026c,in_stack_00000268);
          in_stack_000001b0 = uVar13;
          in_stack_000001b8 = puVar1;
          iVar7 = FUN_05e1b494(&stack0x000001b0,0);
          if (iVar7 != 1) {
            if ((*(long *)(unaff_x20 + 0x20) == 0) ||
               (plVar9 = (long *)FUN_05dedea8(*(long *)(unaff_x20 + 0x20),0), plVar9 == (long *)0x0)
               ) goto UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition;
            lVar11 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 0x98) * 0x10 + 0x138);
                  goto LAB_05dd5080;
                }
                uVar8 = uVar8 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)puVar2,0x98);
LAB_05dd5080:
            (*(code *)*puVar10)(&stack0x00000258,plVar9,puVar10[1]);
            in_stack_000001c0 = CONCAT44(in_stack_0000026c,in_stack_00000268);
            in_stack_000001b0 = uVar13;
            in_stack_000001b8 = puVar1;
            FUN_05e1b438(&stack0x000000d0,&stack0x000001b0,0);
            FUN_05f59be4();
          }
          if (*(char *)(unaff_x20 + 0x90) != '\0') {
            if ((*(long *)(unaff_x20 + 0x20) == 0) ||
               (plVar9 = (long *)FUN_05dedea8(*(long *)(unaff_x20 + 0x20),0), plVar9 == (long *)0x0)
               ) goto UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition;
            lVar11 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 0x70) * 0x10 + 0x138);
                  goto LAB_05dd5140;
                }
                uVar8 = uVar8 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)puVar2,0x70);
LAB_05dd5140:
            (*(code *)*puVar10)(&stack0x00000258,plVar9,puVar10[1]);
            in_stack_000001a0 = CONCAT44(in_stack_0000026c,in_stack_00000268);
            in_stack_00000190 = uVar13;
            in_stack_00000198 = puVar1;
            FUN_05e0de8c(&stack0x000000d0,&stack0x00000190,0);
            FUN_05f68be4();
          }
          if (*(char *)(unaff_x20 + 0xac) != '\0') {
            if ((*(long *)(unaff_x20 + 0x20) == 0) ||
               (plVar9 = (long *)FUN_05dedea8(*(long *)(unaff_x20 + 0x20),0), plVar9 == (long *)0x0)
               ) goto UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition;
            lVar11 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 0x7a) * 0x10 + 0x138);
                  goto LAB_05dd5200;
                }
                uVar8 = uVar8 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)puVar2,0x7a);
LAB_05dd5200:
            (*(code *)*puVar10)(&stack0x00000258,plVar9,puVar10[1]);
            in_stack_00000170 = uVar13;
            in_stack_00000180 = in_stack_00000268;
            _uStack0000000000000178 = puVar1;
            FUN_05e0e22c(&stack0x000000d0,&stack0x00000170,0);
            FUN_05f68c4c();
          }
          if (*(char *)(unaff_x20 + 0xec) != '\0') {
            if ((*(long *)(unaff_x20 + 0x20) == 0) ||
               (plVar9 = (long *)FUN_05dedea8(*(long *)(unaff_x20 + 0x20),0), plVar9 == (long *)0x0)
               ) goto UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition;
            lVar11 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 0x68) * 0x10 + 0x138);
                  goto LAB_05dd52c0;
                }
                uVar8 = uVar8 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)puVar2,0x68);
LAB_05dd52c0:
            (*(code *)*puVar10)(&stack0x00000258,plVar9,puVar10[1]);
            in_stack_00000150 = uVar13;
            in_stack_00000158 = puVar1;
            in_stack_00000160 = in_stack_00000268;
            FUN_05e0d8b0(&stack0x00000150,0);
            FUN_05f68d1c();
          }
          if (*(char *)(unaff_x20 + 0xcc) != '\0') {
            if ((*(long *)(unaff_x20 + 0x20) == 0) ||
               (plVar9 = (long *)FUN_05dedea8(*(long *)(unaff_x20 + 0x20),0), plVar9 == (long *)0x0)
               ) goto UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition;
            lVar11 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 0x66) * 0x10 + 0x138);
                  goto LAB_05dd5378;
                }
                uVar8 = uVar8 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)puVar2,0x66);
LAB_05dd5378:
            (*(code *)*puVar10)(&stack0x00000258,plVar9,puVar10[1]);
            in_stack_00000130 = uVar13;
            in_stack_00000140 = in_stack_00000268;
            _uStack0000000000000138 = puVar1;
            FUN_05e0d4e4(&stack0x000000d0,&stack0x00000130,0);
            FUN_05f68cb4();
          }
          if (*(char *)(unaff_x20 + 0x104) != '\0') {
            if ((*(long *)(unaff_x20 + 0x20) == 0) ||
               (plVar9 = (long *)FUN_05dedea8(*(long *)(unaff_x20 + 0x20),0), plVar9 == (long *)0x0)
               ) goto UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition;
            lVar11 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 0x10) * 0x10 + 0x138);
                  goto FUN_05dd5438;
                }
                uVar8 = uVar8 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)puVar2,0x10);
FUN_05dd5438:
            (*(code *)*puVar10)(&stack0x00000258,plVar9,puVar10[1]);
            in_stack_00000120 = CONCAT44(in_stack_0000026c,in_stack_00000268);
            in_stack_00000110 = uVar13;
            in_stack_00000118 = puVar1;
            FUN_05e0c0bc(&stack0x000000d0,&stack0x00000110,0);
            FUN_05f68d7c();
          }
          if (*(long *)(unaff_x24 + 0x28) == in_stack_000002a8) {
            return;
          }
          goto LAB_05dd55b0;
        }
      }
    }
UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition:
    lVar11 = *(long *)(unaff_x24 + 0x28);
  }
  if (lVar11 == in_stack_000002a8) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_05dd55b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


