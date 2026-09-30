/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04c46b70
PROGRAM: m3ar-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04c47404) */
/* WARNING: Removing unreachable block (ram,0x04c47130) */
/* WARNING: Removing unreachable block (ram,0x04c4748c) */
/* WARNING: Removing unreachable block (ram,0x04c47118) */

void System_Array__Empty<OVRPlugin_SpaceQueryResult>(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x23;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  char cStack00000000000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  long *in_stack_00000178;
  
  plVar5 = (long *)thunk_FUN_0406ddbc();
  if (plVar5 != (long *)0x0) {
    iVar2 = FUN_08629a3c(&stack0x00000150,0);
    lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0406aaec(lVar11);
    }
    lVar12 = *plVar5;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto System_Array__Empty<OVRTriangleMesh_Triangle>;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_0406ae20(plVar5,lVar11,0);
System_Array__Empty<OVRTriangleMesh_Triangle>:
    iVar3 = (*(code *)*puVar6)(plVar5);
    if (iVar2 < iVar3) {
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0406aaec(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_04c47144;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_0406ae20(plVar5,lVar11,2);
LAB_04c47144:
      uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      uVar4 = FUN_08629a3c(&stack0x00000150,0);
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0406aaec(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
            goto LAB_04c471d0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_0406ae20(plVar5,lVar11,3);
LAB_04c471d0:
      (*(code *)*puVar6)(plVar5,uVar4,puVar6[1]);
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0406aaec(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_04c4724c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_0406ae20(plVar5,lVar11,1);
LAB_04c4724c:
      plVar8 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      puVar1 = PTR_DAT_08f8c040;
      plVar9 = (long *)thunk_FUN_0406ddbc(plVar8,*(undefined8 *)PTR_DAT_08f8c040);
      if (plVar9 != (long *)0x0) {
        lVar12 = *(long *)puVar1;
        uVar10 = thunk_FUN_0406ddbc(*(undefined8 *)(unaff_x19 + 0xa8),lVar12);
        lVar11 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar12) {
              puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 4) * 0x10 + 0x138);
              goto LAB_04c472e4;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)FUN_0406ae20(plVar9,lVar12,4);
LAB_04c472e4:
        (*(code *)*puVar6)(plVar9,uVar10,puVar6[1]);
        FUN_05b8d128();
      }
      in_stack_000000b0 = 0;
      in_stack_000000a8 = 0;
      _cStack00000000000000a0 = 0;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0406aaec(lVar11);
      }
      lVar12 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_04c473bc;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_0406ae20(plVar8,lVar11,0);
LAB_04c473bc:
      (*(code *)*puVar6)(plVar8);
      if (cStack00000000000000a0 != '\0') {
        in_stack_00000098 = in_stack_000000b0;
        in_stack_00000090 = in_stack_000000a8;
        FUN_08629918(&stack0x00000090,0);
      }
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0406aaec(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
            goto LAB_04c47474;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_0406ae20(plVar5,lVar11,3);
LAB_04c47474:
      (*(code *)*puVar6)(plVar5,uVar7,puVar6[1]);
      return;
    }
  }
  FUN_08629a3c(&stack0x00000150,0);
  lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_0406aaec(lVar11);
  }
  lVar12 = *unaff_x23;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == lVar11) {
        puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_04c46eb4;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar6 = (undefined8 *)FUN_0406ae20();
LAB_04c46eb4:
  uVar13 = (*(code *)*puVar6)();
  if ((uVar13 & 1) == 0) {
    *(undefined4 *)(unaff_x19 + 0xb4) = 4;
  }
  else {
    lVar11 = thunk_FUN_0406ddbc(in_stack_00000178,DAT_09151d58);
    uVar7 = DAT_09151d58;
    if (lVar11 != 0) {
      uVar10 = thunk_FUN_0406ddbc(*(undefined8 *)(unaff_x19 + 0xa8),DAT_09151d58);
      FUN_03a90f00(4,uVar7,lVar11,uVar10);
      FUN_05b8d128();
    }
    plVar5 = in_stack_00000178;
    if (in_stack_00000178 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0406aaec(lVar11);
    }
    lVar12 = *plVar5;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04c470f4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_0406ae20(plVar5,lVar11,0);
LAB_04c470f4:
    (*(code *)*puVar6)(plVar5);
  }
  return;
}


