/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRRig$$set_requestedTrackingOriginMode
ENTRY_POINT: 05dc3718
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05dc43c0) */
/* WARNING: Removing unreachable block (ram,0x05dc4198) */
/* WARNING: Removing unreachable block (ram,0x05dc3aec) */
/* WARNING: Removing unreachable block (ram,0x05dc43d0) */
/* WARNING: Removing unreachable block (ram,0x05dc43ac) */
/* WARNING: Removing unreachable block (ram,0x05dc453c) */
/* WARNING: Removing unreachable block (ram,0x05dc3bdc) */

void UnityEngine_XR_Interaction_Toolkit_XRRig__set_requestedTrackingOriginMode
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 in_ZR;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong in_x9;
  long lVar15;
  int *in_x10;
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
  
code_r0x05dc3718:
  if (!(bool)in_ZR) goto UnityEngine_XR_Interaction_Toolkit_XRRig__get_cameraFloorOffsetObject;
UnityEngine_XR_Interaction_Toolkit_XRRig__get_cameraYOffset:
  puVar7 = (undefined8 *)FUN_02d9a5d4(unaff_x22,param_3,8);
  do {
    uVar8 = (*(code *)*puVar7)(unaff_x22,puVar7[1]);
    if ((uVar8 & 1) != 0) {
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar14 = *unaff_x22;
      lVar17 = *(long *)(unaff_x19 + 0x18);
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *unaff_x27) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
            goto LAB_05dc37a4;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d9a5d4(unaff_x22,*unaff_x27,2);
LAB_05dc37a4:
      uVar9 = (*(code *)*puVar7)(unaff_x22,puVar7[1]);
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
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *unaff_x27) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 7) * 0x10 + 0x138);
            goto LAB_05dc384c;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d9a5d4(unaff_x22,*unaff_x27,7);
LAB_05dc384c:
      plVar11 = (long *)(*(code *)*puVar7)(unaff_x22,puVar7[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar14 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)Method_System_Span<Vector3>_get_Length__) {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_05dc38b4;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02d9a5d4(plVar11,*(long *)Method_System_Span<Vector3>_get_Length__,0);
LAB_05dc38b4:
      plVar11 = (long *)(*(code *)*puVar7)(plVar11,puVar7[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
LAB_05dc38c8:
      lVar14 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *unaff_x29) {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_05dc3914;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d9a5d4(plVar11,*unaff_x29,0);
LAB_05dc3914:
      uVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
      if ((uVar8 & 1) != 0) {
        lVar14 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *unaff_x26) {
              puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_05dc3970;
            }
            uVar8 = uVar8 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4(plVar11,*unaff_x26,0);
LAB_05dc3970:
        uVar9 = (*(code *)*puVar7)(plVar11,puVar7[1]);
        lVar14 = *unaff_x22;
        lVar17 = *(long *)(unaff_x19 + 0x18);
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *unaff_x27) {
              puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
              goto LAB_05dc39d4;
            }
            uVar8 = uVar8 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4(unaff_x22,*unaff_x27,2);
LAB_05dc39d4:
        uVar10 = (*(code *)*puVar7)(unaff_x22,puVar7[1]);
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
          puVar7 = (undefined8 *)(lVar17 + 0x20);
          *puVar7 = in_stack_00000008;
          *(undefined8 *)(lVar17 + 0x28) = in_stack_00000010;
          thunk_FUN_02dd37b4(puVar7,0);
        }
        else {
          FUN_03c22488(lVar14,in_stack_00000008,in_stack_00000010,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_05dc38c8;
      }
      if (plVar11 != (long *)0x0) {
        lVar14 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0675f3d0) {
              puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_05dc3ad0;
            }
            uVar8 = uVar8 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)PTR_DAT_0675f3d0,0);
LAB_05dc3ad0:
        (*(code *)*puVar7)(plVar11,puVar7[1]);
      }
    }
    lVar14 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar8 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x29) {
          puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05dc3674;
        }
        uVar8 = uVar8 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4();
LAB_05dc3674:
    uVar8 = (*(code *)*puVar7)();
    puVar2 = PTR_DAT_0676b288;
    if ((uVar8 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_05dc3bd0;
      lVar14 = *unaff_x21;
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 == 0) goto LAB_05dc3ba8;
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      break;
    }
    lVar14 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar8 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)Method_System_Span<Vector4>_get_Length__) {
          puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05dc36d8;
        }
        uVar8 = uVar8 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4();
LAB_05dc36d8:
    unaff_x22 = (long *)(*(code *)*puVar7)();
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    param_1 = *unaff_x22;
    param_3 = *unaff_x27;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto UnityEngine_XR_Interaction_Toolkit_XRRig__get_cameraYOffset;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
UnityEngine_XR_Interaction_Toolkit_XRRig__get_cameraFloorOffsetObject:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x05dc3718;
    }
    puVar7 = (undefined8 *)(param_1 + (long)(*in_x10 + 8) * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar16 = piVar16 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_05dc3bc4;
    }
  }
LAB_05dc3ba8:
  puVar7 = (undefined8 *)FUN_02d9a5d4();
LAB_05dc3bc4:
  (*(code *)*puVar7)();
LAB_05dc3bd0:
  lVar14 = *in_stack_00000000;
  uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar8 != 0) {
    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
        puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 0x10) * 0x10 + 0x138);
        goto LAB_05dc3c30;
      }
      uVar8 = uVar8 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_02d9a5d4(in_stack_00000000,*(long *)puVar2,0x10);
LAB_05dc3c30:
  plVar11 = (long *)(*(code *)*puVar7)(in_stack_00000000,puVar7[1]);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar14 = *plVar11;
  uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar8 != 0) {
    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)Method_System_Span<Vector4>_GetPinnableReference__) {
        puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_05dc3c98;
      }
      uVar8 = uVar8 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_02d9a5d4(plVar11,*(long *)Method_System_Span<Vector4>_GetPinnableReference__,0);
LAB_05dc3c98:
  plVar11 = (long *)(*(code *)*puVar7)(plVar11,puVar7[1]);
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
    uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar8 != 0) {
      piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar14) {
          puVar7 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05dc3d20;
        }
        uVar8 = uVar8 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar11,lVar14,0);
LAB_05dc3d20:
    uVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar11 == (long *)0x0) {
        return;
      }
      lVar14 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 == 0) goto LAB_05dc4244;
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      break;
    }
    lVar14 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar8 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)Method_System_Span<Vertex>__ctor__) {
          puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05dc3d84;
        }
        uVar8 = uVar8 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)Method_System_Span<Vertex>__ctor__,0);
LAB_05dc3d84:
    plVar12 = (long *)(*(code *)*puVar7)(plVar11,puVar7[1]);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar14 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar8 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 8) * 0x10 + 0x138);
          goto LAB_05dc3de8;
        }
        uVar8 = uVar8 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar3,8);
LAB_05dc3de8:
    uVar8 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    if ((uVar8 & 1) != 0) {
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar14 = *plVar12;
      lVar17 = *(long *)(unaff_x19 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
            goto LAB_05dc3e50;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar3,2);
LAB_05dc3e50:
      uVar9 = (*(code *)*puVar7)(plVar12,puVar7[1]);
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
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 7) * 0x10 + 0x138);
            goto LAB_05dc3ef8;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar3,7);
LAB_05dc3ef8:
      plVar13 = (long *)(*(code *)*puVar7)(plVar12,puVar7[1]);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar14 = *plVar13;
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)Method_System_Span<Vector3>_get_Length__) {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_05dc3f60;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02d9a5d4(plVar13,*(long *)Method_System_Span<Vector3>_get_Length__,0);
LAB_05dc3f60:
      plVar13 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility__EaseOutBounce:
      lVar17 = *plVar13;
      lVar14 = *(long *)puVar2;
      uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar14) {
            puVar7 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_05dc3fc0;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d9a5d4(plVar13,lVar14,0);
LAB_05dc3fc0:
      uVar8 = (*(code *)*puVar7)(plVar13,puVar7[1]);
      if ((uVar8 & 1) != 0) {
        lVar14 = *plVar13;
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
              puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_05dc401c;
            }
            uVar8 = uVar8 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4(plVar13,*(long *)puVar5,0);
LAB_05dc401c:
        uVar9 = (*(code *)*puVar7)(plVar13,puVar7[1]);
        lVar14 = *plVar12;
        lVar17 = *(long *)(unaff_x19 + 0x20);
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
              goto LAB_05dc4080;
            }
            uVar8 = uVar8 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar3,2);
LAB_05dc4080:
        uVar10 = (*(code *)*puVar7)(plVar12,puVar7[1]);
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
          puVar7 = (undefined8 *)(lVar17 + 0x20);
          *puVar7 = in_stack_00000008;
          *(undefined8 *)(lVar17 + 0x28) = in_stack_00000010;
          thunk_FUN_02dd37b4(puVar7,0);
        }
        else {
          FUN_03c22488(lVar14,in_stack_00000008,in_stack_00000010,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        goto UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility__EaseOutBounce;
      }
      if (plVar13 != (long *)0x0) {
        lVar14 = *plVar13;
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0675f3d0) {
              puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_05dc417c;
            }
            uVar8 = uVar8 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4(plVar13,*(long *)PTR_DAT_0675f3d0,0);
LAB_05dc417c:
        (*(code *)*puVar7)(plVar13,puVar7[1]);
      }
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar16 = piVar16 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_05dc4268;
    }
  }
LAB_05dc4244:
  puVar7 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)PTR_DAT_0675f3d0,0);
LAB_05dc4268:
  (*(code *)*puVar7)(plVar11,puVar7[1]);
  return;
}


