/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRRig$$get_cameraInRigSpacePos
ENTRY_POINT: 05dc3740
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05dc43c0) */
/* WARNING: Removing unreachable block (ram,0x05dc4198) */
/* WARNING: Removing unreachable block (ram,0x05dc3aec) */
/* WARNING: Removing unreachable block (ram,0x05dc43d0) */
/* WARNING: Removing unreachable block (ram,0x05dc43ac) */
/* WARNING: Removing unreachable block (ram,0x05dc453c) */
/* WARNING: Removing unreachable block (ram,0x05dc3bdc) */

void UnityEngine_XR_Interaction_Toolkit_XRRig__get_cameraInRigSpacePos
               (code *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar17;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long *in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  do {
    uVar7 = (*param_1)(unaff_x22,param_3);
    if ((uVar7 & 1) != 0) {
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar14 = *unaff_x22;
      lVar17 = *(long *)(unaff_x19 + 0x18);
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar7 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *unaff_x27) {
            puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
            goto LAB_05dc37a4;
          }
          uVar7 = uVar7 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_02d9a5d4(unaff_x22,*unaff_x27,2);
LAB_05dc37a4:
      uVar9 = (*(code *)*puVar8)(unaff_x22,puVar8[1]);
      if (*(int *)(*(long *)Method_System_Span<VertexAttributeDescriptor>__ctor__ + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar10 = FUN_03959b94(*(undefined8 *)Method_System_Span<Vertex>_get_Length__);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_048956f0(lVar17,uVar9,uVar10,*(undefined8 *)Method_System_Span<Vector2>__ctor__);
      lVar14 = *unaff_x22;
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar7 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *unaff_x27) {
            puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 7) * 0x10 + 0x138);
            goto LAB_05dc384c;
          }
          uVar7 = uVar7 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_02d9a5d4(unaff_x22,*unaff_x27,7);
LAB_05dc384c:
      plVar11 = (long *)(*(code *)*puVar8)(unaff_x22,puVar8[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar14 = *plVar11;
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar7 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)Method_System_Span<Vector3>_get_Length__) {
            puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_05dc38b4;
          }
          uVar7 = uVar7 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_02d9a5d4(plVar11,*(long *)Method_System_Span<Vector3>_get_Length__,0);
LAB_05dc38b4:
      plVar11 = (long *)(*(code *)*puVar8)(plVar11,puVar8[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
LAB_05dc38c8:
      lVar14 = *plVar11;
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar7 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *unaff_x29) {
            puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_05dc3914;
          }
          uVar7 = uVar7 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_02d9a5d4(plVar11,*unaff_x29,0);
LAB_05dc3914:
      uVar7 = (*(code *)*puVar8)(plVar11,puVar8[1]);
      if ((uVar7 & 1) != 0) {
        lVar14 = *plVar11;
        uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar7 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *unaff_x26) {
              puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_05dc3970;
            }
            uVar7 = uVar7 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(plVar11,*unaff_x26,0);
LAB_05dc3970:
        uVar9 = (*(code *)*puVar8)(plVar11,puVar8[1]);
        lVar14 = *unaff_x22;
        lVar17 = *(long *)(unaff_x19 + 0x18);
        uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar7 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *unaff_x27) {
              puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
              goto LAB_05dc39d4;
            }
            uVar7 = uVar7 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(unaff_x22,*unaff_x27,2);
LAB_05dc39d4:
        uVar10 = (*(code *)*puVar8)(unaff_x22,puVar8[1]);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8(uVar10,uVar10);
        }
        lVar14 = FUN_04895670(lVar17,uVar10,*unaff_x20);
        in_stack_00000008 = 0;
        in_stack_00000010 = 0;
        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000353_PostfixBurstDelegate__Invoke
                  (&stack0x00000008,uVar9);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar17 = *(long *)(lVar14 + 0x10);
        lVar15 = *unaff_x28;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar1 = *(uint *)(lVar14 + 0x18);
        if (uVar1 < *(uint *)(lVar17 + 0x18)) {
          lVar17 = lVar17 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar14 + 0x18) = uVar1 + 1;
          puVar8 = (undefined8 *)(lVar17 + 0x20);
          *puVar8 = in_stack_00000008;
          *(undefined8 *)(lVar17 + 0x28) = in_stack_00000010;
          thunk_FUN_02dd37b4(puVar8,0);
        }
        else {
          FUN_03c22488(lVar14,in_stack_00000008,in_stack_00000010,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_05dc38c8;
      }
      if (plVar11 != (long *)0x0) {
        lVar14 = *plVar11;
        uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar7 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0675f3d0) {
              puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_05dc3ad0;
            }
            uVar7 = uVar7 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)PTR_DAT_0675f3d0,0);
LAB_05dc3ad0:
        (*(code *)*puVar8)(plVar11,puVar8[1]);
      }
    }
    lVar14 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar7 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x29) {
          puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05dc3674;
        }
        uVar7 = uVar7 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4();
LAB_05dc3674:
    uVar7 = (*(code *)*puVar8)();
    puVar2 = PTR_DAT_0676b288;
    if ((uVar7 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_05dc3bd0;
      lVar14 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar7 == 0) goto LAB_05dc3ba8;
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      break;
    }
    lVar14 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar7 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)Method_System_Span<Vector4>_get_Length__) {
          puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05dc36d8;
        }
        uVar7 = uVar7 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4();
LAB_05dc36d8:
    unaff_x22 = (long *)(*(code *)*puVar8)();
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar14 = *unaff_x22;
    uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar7 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x27) {
          puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 8) * 0x10 + 0x138);
          goto FUN_05dc373c;
        }
        uVar7 = uVar7 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4(unaff_x22,*unaff_x27,8);
FUN_05dc373c:
    param_1 = (code *)*puVar8;
    param_3 = puVar8[1];
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar16 = piVar16 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_05dc3bc4;
    }
  }
LAB_05dc3ba8:
  puVar8 = (undefined8 *)FUN_02d9a5d4();
LAB_05dc3bc4:
  (*(code *)*puVar8)();
LAB_05dc3bd0:
  lVar14 = *in_stack_00000000;
  uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar7 != 0) {
    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
        puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 0x10) * 0x10 + 0x138);
        goto LAB_05dc3c30;
      }
      uVar7 = uVar7 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar7 != 0);
  }
  puVar8 = (undefined8 *)FUN_02d9a5d4(in_stack_00000000,*(long *)puVar2,0x10);
LAB_05dc3c30:
  plVar11 = (long *)(*(code *)*puVar8)(in_stack_00000000,puVar8[1]);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar14 = *plVar11;
  uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar7 != 0) {
    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)Method_System_Span<Vector4>_GetPinnableReference__) {
        puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_05dc3c98;
      }
      uVar7 = uVar7 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar7 != 0);
  }
  puVar8 = (undefined8 *)
           FUN_02d9a5d4(plVar11,*(long *)Method_System_Span<Vector4>_GetPinnableReference__,0);
LAB_05dc3c98:
  plVar11 = (long *)(*(code *)*puVar8)(plVar11,puVar8[1]);
  puVar6 = Method_System_Span<VertexAttributeDescriptor>_GetPinnableReference__;
  puVar5 = Method_System_Span<Vertex>_GetPinnableReference__;
  puVar4 = Method_System_Span<Vector2>_GetPinnableReference__;
  puVar3 = PTR_DAT_0676b280;
  puVar2 = PTR_DAT_0675f3d8;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  do {
    lVar17 = *plVar11;
    lVar14 = *(long *)puVar2;
    uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar7 != 0) {
      piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar14) {
          puVar8 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05dc3d20;
        }
        uVar7 = uVar7 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4(plVar11,lVar14,0);
LAB_05dc3d20:
    uVar7 = (*(code *)*puVar8)(plVar11,puVar8[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar11 == (long *)0x0) {
        return;
      }
      lVar14 = *plVar11;
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar7 == 0) goto LAB_05dc4244;
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      break;
    }
    lVar14 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar7 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)Method_System_Span<Vertex>__ctor__) {
          puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05dc3d84;
        }
        uVar7 = uVar7 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)Method_System_Span<Vertex>__ctor__,0);
LAB_05dc3d84:
    plVar12 = (long *)(*(code *)*puVar8)(plVar11,puVar8[1]);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar14 = *plVar12;
    uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar7 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 8) * 0x10 + 0x138);
          goto LAB_05dc3de8;
        }
        uVar7 = uVar7 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar3,8);
LAB_05dc3de8:
    uVar7 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    if ((uVar7 & 1) != 0) {
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar14 = *plVar12;
      lVar17 = *(long *)(unaff_x19 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar7 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
            goto LAB_05dc3e50;
          }
          uVar7 = uVar7 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar3,2);
LAB_05dc3e50:
      uVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
      if (*(int *)(*(long *)Method_System_Span<VertexAttributeDescriptor>__ctor__ + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar10 = FUN_03959b94(*(undefined8 *)Method_System_Span<Vertex>_get_Length__);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_048956f0(lVar17,uVar9,uVar10,*(undefined8 *)Method_System_Span<Vector2>__ctor__);
      lVar14 = *plVar12;
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar7 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 7) * 0x10 + 0x138);
            goto LAB_05dc3ef8;
          }
          uVar7 = uVar7 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar3,7);
LAB_05dc3ef8:
      plVar13 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar14 = *plVar13;
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar7 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)Method_System_Span<Vector3>_get_Length__) {
            puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_05dc3f60;
          }
          uVar7 = uVar7 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_02d9a5d4(plVar13,*(long *)Method_System_Span<Vector3>_get_Length__,0);
LAB_05dc3f60:
      plVar13 = (long *)(*(code *)*puVar8)(plVar13,puVar8[1]);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility__EaseOutBounce:
      lVar17 = *plVar13;
      lVar14 = *(long *)puVar2;
      uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar7 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar14) {
            puVar8 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_05dc3fc0;
          }
          uVar7 = uVar7 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_02d9a5d4(plVar13,lVar14,0);
LAB_05dc3fc0:
      uVar7 = (*(code *)*puVar8)(plVar13,puVar8[1]);
      if ((uVar7 & 1) != 0) {
        lVar14 = *plVar13;
        uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar7 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
              puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_05dc401c;
            }
            uVar7 = uVar7 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(plVar13,*(long *)puVar5,0);
LAB_05dc401c:
        uVar9 = (*(code *)*puVar8)(plVar13,puVar8[1]);
        lVar14 = *plVar12;
        lVar17 = *(long *)(unaff_x19 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar7 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
              goto LAB_05dc4080;
            }
            uVar7 = uVar7 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar3,2);
LAB_05dc4080:
        uVar10 = (*(code *)*puVar8)(plVar12,puVar8[1]);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8(uVar10,uVar10);
        }
        lVar14 = FUN_04895670(lVar17,uVar10,*(undefined8 *)puVar4);
        in_stack_00000008 = 0;
        in_stack_00000010 = 0;
        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000353_PostfixBurstDelegate__Invoke
                  (&stack0x00000008,uVar9);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar17 = *(long *)(lVar14 + 0x10);
        lVar15 = *(long *)puVar6;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar1 = *(uint *)(lVar14 + 0x18);
        if (uVar1 < *(uint *)(lVar17 + 0x18)) {
          lVar17 = lVar17 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar14 + 0x18) = uVar1 + 1;
          puVar8 = (undefined8 *)(lVar17 + 0x20);
          *puVar8 = in_stack_00000008;
          *(undefined8 *)(lVar17 + 0x28) = in_stack_00000010;
          thunk_FUN_02dd37b4(puVar8,0);
        }
        else {
          FUN_03c22488(lVar14,in_stack_00000008,in_stack_00000010,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        goto UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility__EaseOutBounce;
      }
      if (plVar13 != (long *)0x0) {
        lVar14 = *plVar13;
        uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar7 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0675f3d0) {
              puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_05dc417c;
            }
            uVar7 = uVar7 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(plVar13,*(long *)PTR_DAT_0675f3d0,0);
LAB_05dc417c:
        (*(code *)*puVar8)(plVar13,puVar8[1]);
      }
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar16 = piVar16 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_05dc4268;
    }
  }
LAB_05dc4244:
  puVar8 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)PTR_DAT_0675f3d0,0);
LAB_05dc4268:
  (*(code *)*puVar8)(plVar11,puVar8[1]);
  return;
}


