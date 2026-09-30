/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARTrackable<XRFace,-object>$$get_sessionRelativePose
ENTRY_POINT: 04afdd94
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x04afe75c) */
/* WARNING: Removing unreachable block (ram,0x04afe790) */
/* WARNING: Removing unreachable block (ram,0x04afe764) */
/* WARNING: Removing unreachable block (ram,0x04afe1f8) */
/* WARNING: Removing unreachable block (ram,0x04afdf40) */
/* WARNING: Removing unreachable block (ram,0x04afe788) */
/* WARNING: Removing unreachable block (ram,0x04afe778) */
/* WARNING: Removing unreachable block (ram,0x04afe780) */
/* WARNING: Removing unreachable block (ram,0x04afe76c) */
/* WARNING: Removing unreachable block (ram,0x04afe218) */
/* WARNING: Removing unreachable block (ram,0x04afe4a4) */
/* WARNING: Removing unreachable block (ram,0x04afdf60) */
/* WARNING: Removing unreachable block (ram,0x04afe4d0) */
/* WARNING: Removing unreachable block (ram,0x04afe4c4) */

void UnityEngine_XR_ARFoundation_ARTrackable<XRFace,_object>__get_sessionRelativePose(long param_1)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  char in_NG;
  char in_OV;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  int unaff_w21;
  int iVar12;
  undefined8 uVar13;
  long unaff_x23;
  ulong in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined1 in_stack_00000028;
  undefined8 in_stack_000000a8;
  ulong in_stack_000000b0;
  int iStack00000000000000b8;
  int iStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long in_stack_00000190;
  int in_stack_00000198;
  int iStack00000000000001a0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000238;
  long in_stack_00000258;
  long *in_stack_00000260;
  
  iStack00000000000001a0 = unaff_w21;
  if (in_NG != in_OV) {
    do {
      lVar10 = in_stack_00000190;
      iStack00000000000001a0 = unaff_w21;
      if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x135) & 1) == 0) {
        FUN_02eea768();
        unaff_x20 = in_stack_00000258;
      }
      memmove(&stack0x00000028,(void *)(lVar10 + (long)unaff_w21 * 0x48),0x48);
      memcpy((void *)(unaff_x19 + 0x18),&stack0x00000028,0x48);
      lVar10 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      memcpy(&stack0x00000140,(void *)(unaff_x19 + 0x18),0x48);
      lVar10 = *(long *)(lVar10 + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02eea768();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar7 = *(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0);
      lVar10 = *(long *)(lVar7 + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02eea768();
        lVar7 = *(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0);
      }
      uVar13 = *(undefined8 *)(lVar7 + 0x150);
      lVar10 = **(long **)(lVar10 + 0xb8);
      memcpy(&stack0x00000268,&stack0x00000140,0x48);
      uVar13 = FUN_04aff5d0(in_stack_00000260,&stack0x00000268,uVar13);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar7 = *(long *)(lVar10 + 0x10);
      lVar9 = *(long *)(*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 0x158);
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar3 = *(uint *)(lVar10 + 0x18);
      if (uVar3 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar3 + 1;
        *(undefined8 *)(lVar7 + (long)(int)uVar3 * 8 + 0x20) = uVar13;
        thunk_FUN_02f411dc();
      }
      else {
        FUN_03fd0c9c(lVar10,uVar13,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                    );
      }
      unaff_w21 = iStack00000000000001a0 + 1;
      param_1 = *(long *)(*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 0x160);
      unaff_x20 = in_stack_00000258;
      iStack00000000000001a0 = unaff_w21;
    } while (unaff_w21 < in_stack_00000198);
  }
  in_stack_000001e8 = 0;
  *(undefined8 *)(unaff_x23 + 0x50) = 0;
  *(undefined8 *)(unaff_x23 + 0x48) = 0;
  *(undefined8 *)(unaff_x23 + 0x40) = 0;
  *(undefined8 *)(unaff_x23 + 0x38) = 0;
  *(undefined8 *)(unaff_x23 + 0x30) = 0;
  *(undefined8 *)(unaff_x23 + 0x28) = 0;
  *(undefined8 *)(unaff_x23 + 0x20) = 0;
  *(undefined8 *)(unaff_x23 + 0x18) = 0;
  FUN_04e23334(&stack0x00000190,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x168));
  FUN_06616554(&stack0x00000208,0);
  in_stack_00000028 = 0;
  FUN_0661654c(&stack0x00000028,*(undefined8 *)PTR_DAT_06d3b648,0);
  lVar10 = *(long *)(*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02eea768();
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar7 = *(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0);
  lVar10 = *(long *)(lVar7 + 8);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02eea768();
    lVar7 = *(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0);
  }
  FUN_04afecd8(*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8),in_stack_00000228,
               *(undefined8 *)(lVar7 + 0x120));
  FUN_04258ed4(&stack0x00000028,&stack0x000001f0,
               *(undefined8 *)(*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 0x128));
  memcpy(&stack0x00000190,&stack0x00000028,0x60);
  iVar12 = iStack00000000000001a0 + 1;
  lVar10 = *(long *)(*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 0x160);
  iStack00000000000001a0 = iVar12;
  if (iVar12 < in_stack_00000198) {
    do {
      lVar7 = in_stack_00000190;
      iStack00000000000001a0 = iVar12;
      if ((*(byte *)(*(long *)(lVar10 + 0x20) + 0x135) & 1) == 0) {
        FUN_02eea768();
      }
      memmove(&stack0x00000028,(void *)(lVar7 + (long)iVar12 * 0x48),0x48);
      memcpy(&stack0x000001a8,&stack0x00000028,0x48);
      lVar10 = *(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0);
      memcpy(&stack0x000000f0,&stack0x000001a8,0x48);
      lVar10 = *(long *)(lVar10 + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02eea768();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar7 = *(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0);
      lVar10 = *(long *)(lVar7 + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02eea768();
        lVar7 = *(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0);
      }
      uVar13 = *(undefined8 *)(lVar7 + 0x150);
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      memcpy(&stack0x00000028,&stack0x000000f0,0x48);
      uVar13 = FUN_04aff5d0(in_stack_00000260,&stack0x00000028,uVar13);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar7 = *(long *)(lVar10 + 0x10);
      lVar9 = *(long *)(*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 0x158);
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar3 = *(uint *)(lVar10 + 0x18);
      if (uVar3 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar3 + 1;
        *(undefined8 *)(lVar7 + (long)(int)uVar3 * 8 + 0x20) = uVar13;
        thunk_FUN_02f411dc();
      }
      else {
        FUN_03fd0c9c(lVar10,uVar13,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                    );
      }
      iVar12 = iStack00000000000001a0 + 1;
      lVar10 = *(long *)(*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 0x160);
      iStack00000000000001a0 = iVar12;
    } while (iVar12 < in_stack_00000198);
  }
  in_stack_000001e8 = 0;
  *(undefined8 *)(unaff_x23 + 0x50) = 0;
  *(undefined8 *)(unaff_x23 + 0x48) = 0;
  *(undefined8 *)(unaff_x23 + 0x40) = 0;
  *(undefined8 *)(unaff_x23 + 0x38) = 0;
  *(undefined8 *)(unaff_x23 + 0x30) = 0;
  *(undefined8 *)(unaff_x23 + 0x28) = 0;
  *(undefined8 *)(unaff_x23 + 0x20) = 0;
  *(undefined8 *)(unaff_x23 + 0x18) = 0;
  FUN_04e23334(&stack0x00000190,
               *(undefined8 *)(*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 0x168));
  FUN_06616554(&stack0x00000208,0);
  in_stack_00000000 = in_stack_00000000 & 0xffffffffffffff00;
  FUN_0661654c();
  lVar10 = *(long *)(*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02eea768();
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar7 = *(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0);
  lVar10 = *(long *)(lVar7 + 8);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02eea768();
    lVar7 = *(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0);
  }
  FUN_04afecd8(*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10),in_stack_00000238,
               *(undefined8 *)(lVar7 + 0x120));
  FUN_0421c114(&stack0x000000e0,*(undefined8 *)PTR_DAT_06d3ad60);
  puVar5 = PTR_DAT_06d3ad38;
  puVar4 = PTR_DAT_06d01e20;
  _iStack00000000000000b8 = in_stack_00000008;
  uVar13 = _iStack00000000000000b8;
  in_stack_000000b0 = in_stack_00000000;
  in_stack_000000c8 = in_stack_00000018;
  in_stack_000000d0 = in_stack_00000020;
  iStack00000000000000c0 = (int)in_stack_00000010;
  iStack00000000000000b8 = (int)in_stack_00000008;
  iVar12 = iStack00000000000000c0 + 1;
  lVar10 = *(long *)PTR_DAT_06d3ad38;
  uStack00000000000000c4 = (undefined4)((ulong)in_stack_00000010 >> 0x20);
  _iStack00000000000000c0 = CONCAT44(uStack00000000000000c4,iVar12);
  bVar1 = iVar12 < iStack00000000000000b8;
  _iStack00000000000000b8 = uVar13;
  if (bVar1) {
    do {
      uVar6 = in_stack_000000b0;
      if ((*(byte *)(*(long *)(lVar10 + 0x20) + 0x135) & 1) == 0) {
        FUN_02eea768();
      }
      puVar8 = (undefined8 *)(uVar6 + (long)iVar12 * 0x10);
      uVar13 = *puVar8;
      uVar11 = puVar8[1];
      in_stack_000000c8 = uVar13;
      in_stack_000000d0 = uVar11;
      if (in_stack_00000260[7] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar6 = FUN_04cca450(in_stack_00000260[7],uVar13,uVar11,&stack0x000000a8,
                           *(undefined8 *)
                            (*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 0x180));
      if ((uVar6 & 1) != 0) {
        if (in_stack_00000260[7] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_04cc9dc8(in_stack_00000260[7],uVar13,uVar11,
                     *(undefined8 *)(*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 400));
        uVar13 = in_stack_000000a8;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar6 = FUN_066cd30c(uVar13,0);
        if ((uVar6 & 1) != 0) {
          lVar10 = *(long *)(*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_02eea768();
          }
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          lVar10 = *(long *)(*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_02eea768();
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar7 = *(long *)(lVar10 + 0x10);
          lVar9 = *(long *)(*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 0x158);
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar3 = *(uint *)(lVar10 + 0x18);
          if (uVar3 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar3 + 1;
            puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar3 * 8 + 0x20);
            *puVar8 = in_stack_000000a8;
            thunk_FUN_02f411dc(puVar8);
          }
          else {
            FUN_03fd0c9c(lVar10,in_stack_000000a8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      lVar10 = *(long *)puVar5;
      iVar12 = iStack00000000000000c0 + 1;
      _iStack00000000000000c0 = CONCAT44(uStack00000000000000c4,iVar12);
      bVar1 = iVar12 < iStack00000000000000b8;
    } while (bVar1);
  }
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  FUN_04e1a788(&stack0x000000b0,*(undefined8 *)PTR_DAT_06d3ad30);
  FUN_06616554(&stack0x00000208,0);
  FUN_046ef31c(&stack0x00000210,
               *(undefined8 *)(*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 0x198));
  FUN_06616554(&stack0x00000250,0);
  lVar10 = *(long *)(*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02eea768();
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar10 = *(long *)(*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02eea768();
  }
  if (**(long **)(lVar10 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (*(int *)(**(long **)(lVar10 + 0xb8) + 0x18) < 1) {
    lVar10 = *(long *)(*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02eea768();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar10 = *(long *)(*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02eea768();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(int *)(lVar10 + 0x18) < 1) {
      lVar10 = *(long *)(*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02eea768();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar10 = *(long *)(*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02eea768();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(int *)(lVar10 + 0x18) < 1) goto LAB_04afe710;
    }
  }
  lVar10 = *(long *)(*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02eea768();
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar7 = *(long *)(*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 8);
  uVar2 = *(ushort *)(lVar7 + 0x135);
  lVar10 = lVar7;
  if ((uVar2 & 1) == 0) {
    lVar10 = FUN_02eea768();
    lVar7 = *(long *)(*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 8);
    uVar2 = *(ushort *)(lVar7 + 0x135);
  }
  uVar13 = **(undefined8 **)(lVar10 + 0xb8);
  lVar10 = lVar7;
  if ((uVar2 & 1) == 0) {
    lVar10 = FUN_02eea768();
    lVar7 = *(long *)(*(long *)(*(long *)(in_stack_00000258 + 0x20) + 0xc0) + 8);
    uVar2 = *(ushort *)(lVar7 + 0x135);
  }
  uVar11 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
  if ((uVar2 & 1) == 0) {
    lVar7 = FUN_02eea768();
  }
  (**(code **)(*in_stack_00000260 + 0x208))
            (in_stack_00000260,uVar13,uVar11,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10),
             *(undefined8 *)(*in_stack_00000260 + 0x210));
LAB_04afe710:
  FUN_02b0a7a4();
  return;
}


