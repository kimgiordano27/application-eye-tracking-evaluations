/*
FUNCTION_NAME: OVRBounded3D$$IOVRAnchorComponent<OVRBounded3D>.FromAnchor
ENTRY_POINT: 019a3814
PROGRAM: Lovesick-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRBounded3D__IOVRAnchorComponent<OVRBounded3D>_FromAnchor(undefined8 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  int iVar8;
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
  long in_stack_00000078;
  
  fVar11 = (float)FUN_026a125c(param_1,0);
  plVar10 = *(long **)(unaff_x19 + 0x20);
  if (plVar10 != (long *)0x0) {
    lVar5 = *plVar10;
    lVar9 = *(long *)(unaff_x19 + 0x58);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
          goto LAB_019a3884;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724(plVar10,*unaff_x23,4);
LAB_019a3884:
    fVar12 = (float)(*(code *)*puVar3)(plVar10,puVar3[1]);
    if (DAT_03774e1c == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774e1c = '\x01';
    }
    if (lVar9 != 0) {
      fVar12 = fVar12 / fVar11;
      lVar5 = *(long *)(*(long *)
                         Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                       + 0xb8);
      FUN_0269fd98(fVar12 * *(float *)(lVar5 + 0xc),fVar12 * *(float *)(lVar5 + 0x10),
                   fVar12 * *(float *)(lVar5 + 0x14),lVar9,0);
      plVar10 = *(long **)(unaff_x19 + 0x20);
      if (plVar10 != (long *)0x0) {
        lVar5 = *plVar10;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x23) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
              goto LAB_019a3944;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_00d59724(plVar10,*unaff_x23,0xb);
LAB_019a3944:
        uVar6 = (*(code *)*puVar3)(plVar10,&stack0x00000078,puVar3[1]);
        puVar2 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_get_Count__;
        if ((uVar6 & 1) != 0) {
          iVar8 = 0;
          do {
            plVar10 = *(long **)(unaff_x19 + 0x68);
            if (plVar10 == (long *)0x0) goto LAB_019a3b9c;
            lVar9 = *plVar10;
            lVar5 = *(long *)puVar2;
            uVar6 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == lVar5) {
                  puVar3 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_019a39b8;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined8 *)FUN_00d59724(plVar10,lVar5,0);
LAB_019a39b8:
            uVar4 = (*(code *)*puVar3)(plVar10,iVar8,puVar3[1]);
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_00d32864(*unaff_x22);
            }
            uVar6 = FUN_0268b4e0(uVar4,0,0);
            if ((uVar6 & 1) == 0) {
              plVar10 = *(long **)(unaff_x19 + 0x68);
              if (plVar10 == (long *)0x0) goto LAB_019a3b9c;
              lVar9 = *plVar10;
              lVar5 = *(long *)puVar2;
              uVar6 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == lVar5) {
                    puVar3 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_019a3a48;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar3 = (undefined8 *)FUN_00d59724(plVar10,lVar5,0);
LAB_019a3a48:
              uVar4 = (*(code *)*puVar3)(plVar10,iVar8,puVar3[1]);
              if (in_stack_00000078 == 0) goto LAB_019a3b9c;
              OVRPlugin__EraseSpace(in_stack_00000078,iVar8,0);
              in_stack_00000028 = in_stack_00000008;
              in_stack_00000020 = in_stack_00000000;
              in_stack_00000030 = in_stack_00000010;
              FUN_019ac4bc(uVar4,&stack0x00000020,1,0);
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 != 0x1a);
          uVar4 = *(undefined8 *)(unaff_x19 + 0x60);
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar6 = FUN_02681b9c(uVar4,0,0);
          if ((uVar6 & 1) != 0) {
            if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_019a3b9c;
            lVar5 = FUN_01991930();
            plVar10 = *(long **)(unaff_x19 + 0x20);
            if (plVar10 == (long *)0x0) goto LAB_019a3b9c;
            lVar9 = *plVar10;
            uVar1 = *(undefined4 *)(unaff_x19 + 0x78);
            uVar6 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *unaff_x23) {
                  puVar3 = (undefined8 *)(lVar9 + (long)(*piVar7 + 4) * 0x10 + 0x138);
                  goto LAB_019a3b3c;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined8 *)FUN_00d59724(plVar10,*unaff_x23,4);
LAB_019a3b3c:
            (*(code *)*puVar3)(plVar10,puVar3[1]);
            if (lVar5 == 0) goto LAB_019a3b9c;
            FUN_0267be98(lVar5,uVar1,0);
            if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_019a3b9c;
            FUN_019a1c58();
          }
          lVar5 = *(long *)(unaff_x19 + 0x70);
          if (lVar5 == 0) goto LAB_019a3b9c;
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        }
        return;
      }
    }
  }
LAB_019a3b9c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


