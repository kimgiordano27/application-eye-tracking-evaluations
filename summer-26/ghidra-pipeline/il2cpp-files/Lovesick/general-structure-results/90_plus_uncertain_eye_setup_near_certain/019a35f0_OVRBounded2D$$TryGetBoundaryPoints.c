/*
FUNCTION_NAME: OVRBounded2D$$TryGetBoundaryPoints
ENTRY_POINT: 019a35f0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRBounded2D__TryGetBoundaryPoints(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  ulong in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  ulong in_stack_00000050;
  undefined4 in_stack_00000058;
  long in_stack_00000078;
  
  if ((DAT_0377a523 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_6481);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_get_Count__
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_0377a523 = 1;
  }
  in_stack_00000078 = 0;
  _uStack0000000000000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  FUN_019a2f00(param_1);
  puVar4 = StringLiteral_6481;
  plVar10 = *(long **)(param_1 + 0x20);
  if (plVar10 == (long *)0x0) goto LAB_019a3b9c;
  lVar6 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_6481) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x11) * 0x10 + 0x138);
        goto LAB_019a36b0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_00d59724(plVar10,*(long *)StringLiteral_6481,0x11);
LAB_019a36b0:
  uVar7 = (*(code *)*puVar5)(plVar10,puVar5[1]);
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((uVar7 & 1) != 0) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      uVar11 = *(undefined8 *)(param_1 + 0x58);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar7 = FUN_02681b9c(uVar11,0,0);
      if ((uVar7 & 1) != 0) {
        plVar10 = *(long **)(param_1 + 0x20);
        if (plVar10 == (long *)0x0) goto LAB_019a3b9c;
        lVar6 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar4) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x12) * 0x10 + 0x138);
              goto LAB_019a3750;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar4,0x12);
LAB_019a3750:
        uVar7 = (*(code *)*puVar5)(plVar10,&stack0x00000040,puVar5[1]);
        if ((uVar7 & 1) != 0) {
          if (*(long *)(param_1 + 0x58) == 0) goto LAB_019a3b9c;
          FUN_0269f618(in_stack_00000040 & 0xffffffff,in_stack_00000040._4_4_,uStack0000000000000048
                       ,*(long *)(param_1 + 0x58),0);
          if (*(long *)(param_1 + 0x58) == 0) goto LAB_019a3b9c;
          FUN_0269f894(uStack000000000000004c,in_stack_00000050 & 0xffffffff,in_stack_00000050._4_4_
                       ,in_stack_00000058,*(long *)(param_1 + 0x58),0);
        }
      }
    }
    if (*(char *)(param_1 + 0x29) != '\0') {
      uVar11 = *(undefined8 *)(param_1 + 0x58);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar7 = FUN_02681b9c(uVar11,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_019a3b9c;
        uVar11 = FUN_0269fe30(*(long *)(param_1 + 0x58),0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar2);
        }
        uVar7 = FUN_02681b9c(uVar11,0,0);
        if ((uVar7 & 1) == 0) {
          fVar13 = 1.0;
        }
        else {
          if ((*(long *)(param_1 + 0x58) == 0) ||
             (lVar6 = FUN_0269fe30(*(long *)(param_1 + 0x58),0), lVar6 == 0)) goto LAB_019a3b9c;
          fVar13 = (float)FUN_026a125c(lVar6,0);
        }
        plVar10 = *(long **)(param_1 + 0x20);
        if (plVar10 == (long *)0x0) goto LAB_019a3b9c;
        lVar6 = *plVar10;
        lVar12 = *(long *)(param_1 + 0x58);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar4) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
              goto LAB_019a3884;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar4,4);
LAB_019a3884:
        fVar14 = (float)(*(code *)*puVar5)(plVar10,puVar5[1]);
        if (DAT_03774e1c == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774e1c = '\x01';
        }
        if (lVar12 == 0) goto LAB_019a3b9c;
        fVar14 = fVar14 / fVar13;
        lVar6 = *(long *)(*(long *)
                           Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                         + 0xb8);
        FUN_0269fd98(fVar14 * *(float *)(lVar6 + 0xc),fVar14 * *(float *)(lVar6 + 0x10),
                     fVar14 * *(float *)(lVar6 + 0x14),lVar12,0);
      }
    }
    plVar10 = *(long **)(param_1 + 0x20);
    if (plVar10 == (long *)0x0) goto LAB_019a3b9c;
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar4) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xb) * 0x10 + 0x138);
          goto LAB_019a3944;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar4,0xb);
LAB_019a3944:
    uVar7 = (*(code *)*puVar5)(plVar10,&stack0x00000078,puVar5[1]);
    puVar3 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_get_Count__;
    if ((uVar7 & 1) == 0) {
      return;
    }
    iVar9 = 0;
    do {
      plVar10 = *(long **)(param_1 + 0x68);
      if (plVar10 == (long *)0x0) goto LAB_019a3b9c;
      lVar12 = *plVar10;
      lVar6 = *(long *)puVar3;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar12 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_019a39b8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724(plVar10,lVar6,0);
LAB_019a39b8:
      uVar11 = (*(code *)*puVar5)(plVar10,iVar9,puVar5[1]);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      uVar7 = FUN_0268b4e0(uVar11,0,0);
      if ((uVar7 & 1) == 0) {
        plVar10 = *(long **)(param_1 + 0x68);
        if (plVar10 == (long *)0x0) goto LAB_019a3b9c;
        lVar12 = *plVar10;
        lVar6 = *(long *)puVar3;
        uVar7 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar12 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_019a3a48;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724(plVar10,lVar6,0);
LAB_019a3a48:
        uVar11 = (*(code *)*puVar5)(plVar10,iVar9,puVar5[1]);
        if (in_stack_00000078 == 0) goto LAB_019a3b9c;
        OVRPlugin__EraseSpace(in_stack_00000078,iVar9,0);
        in_stack_00000028 = uStack0000000000000008;
        in_stack_00000020 = in_stack_00000000;
        uStack0000000000000034 = uStack0000000000000010._4_4_;
        in_stack_00000038 = uStack0000000000000010._8_4_;
        uStack000000000000002c = uStack000000000000000c;
        in_stack_00000030 = uStack0000000000000010;
        FUN_019ac4bc(uVar11,&stack0x00000020,1,0);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x1a);
    uVar11 = *(undefined8 *)(param_1 + 0x60);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_02681b9c(uVar11,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) goto LAB_019a3b9c;
      lVar6 = FUN_01991930();
      plVar10 = *(long **)(param_1 + 0x20);
      if (plVar10 == (long *)0x0) goto LAB_019a3b9c;
      lVar12 = *plVar10;
      uVar1 = *(undefined4 *)(param_1 + 0x78);
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar4) {
            puVar5 = (undefined8 *)(lVar12 + (long)(*piVar8 + 4) * 0x10 + 0x138);
            goto LAB_019a3b3c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar4,4);
LAB_019a3b3c:
      (*(code *)*puVar5)(plVar10,puVar5[1]);
      if ((lVar6 == 0) || (FUN_0267be98(lVar6,uVar1,0), *(long *)(param_1 + 0x60) == 0))
      goto LAB_019a3b9c;
      FUN_019a1c58();
    }
  }
  lVar6 = *(long *)(param_1 + 0x70);
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
    return;
  }
LAB_019a3b9c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


