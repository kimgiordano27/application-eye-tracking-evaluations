/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<MemoryHelpers.BitRegion>$$Dispose
ENTRY_POINT: 00d6f9d4
PROGRAM: LethalApe-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_7;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


undefined8
System_Array_EmptyInternalEnumerator<MemoryHelpers_BitRegion>__Dispose
          (undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  undefined8 unaff_x25;
  long unaff_x26;
  int *piVar13;
  uint unaff_w29;
  int iVar14;
  uint uStack0000000000000004;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  if ((*(byte *)(param_2 + 0x132) & 1) == 0) {
    param_2 = FUN_0099e870(param_2);
  }
  lVar7 = *unaff_x23;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12a);
  if (uVar10 != 0) {
    piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == param_2) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar13 + 1) * 0x10 + 0x138);
        goto LAB_00d6fa4c;
      }
      uVar10 = uVar10 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar10 != 0);
  }
  puVar3 = (undefined8 *)FUN_0099eb60();
LAB_00d6fa4c:
  uVar2 = (*(code *)*puVar3)();
  lVar7 = *(long *)(unaff_x20 + 0x10);
  if (lVar7 == 0) goto LAB_00d6fe00;
  uVar12 = *(uint *)(lVar7 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar14 = 0;
  if (uVar12 != 0) {
    iVar14 = (int)uVar2 / (int)uVar12;
  }
  uVar6 = uVar2 - iVar14 * uVar12;
  if (uVar6 < uVar12) {
    piVar13 = (int *)(lVar7 + (ulong)uVar6 * 4 + 0x20);
    uVar12 = *piVar13 - 1;
    if (unaff_x23 == (long *)0x0) {
      if (unaff_x26 == 0) goto LAB_00d6fe00;
      uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar6 = (uint)uVar8;
      if (uVar12 < uVar6) {
        iVar14 = 0;
        do {
          uVar6 = (uint)uVar8;
          lVar7 = (long)(int)uVar12;
          if (*(uint *)(unaff_x26 + (long)(int)uVar12 * 0x14 + 0x20) == uVar2) {
            plVar4 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) +
                                                   0x10) + 8))();
            if (*(uint *)(unaff_x26 + 0x18) <= uVar12)
            goto System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>___cctor;
            if (plVar4 == (long *)0x0) goto LAB_00d6fe00;
            uVar10 = (**(code **)(*plVar4 + 0x1b8))
                               (plVar4,*(undefined4 *)(unaff_x26 + lVar7 * 0x14 + 0x28),
                                uStack000000000000001c,*(undefined8 *)(*plVar4 + 0x1c0));
            if ((uVar10 & 1) != 0) {
              if ((unaff_w29 & 0xff) != 2) {
                if ((unaff_w29 & 0xff) != 1) {
                  return 0;
                }
                if (uVar12 < *(uint *)(unaff_x26 + 0x18)) {
                  *(undefined8 *)(unaff_x26 + lVar7 * 0x14 + 0x2c) = unaff_x25;
                  return 1;
                }
                goto System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>___cctor;
              }
              uStack0000000000000018 = uStack000000000000001c;
              lVar7 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb0);
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_0099e870();
              }
              puVar3 = (undefined8 *)&stack0x00000018;
              goto LAB_00d6fde8;
            }
            uVar6 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar6 <= uVar12)
          goto System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>___cctor;
          uVar12 = *(uint *)(unaff_x26 + lVar7 * 0x14 + 0x24);
          if ((int)uVar6 <= iVar14) {
            FUN_0173e12c(0);
          }
          uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar14 = iVar14 + 1;
          uVar6 = (uint)uVar8;
        } while (uVar12 < uVar6);
      }
    }
    else {
      if (unaff_x26 == 0) goto LAB_00d6fe00;
      uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar6 = (uint)uVar8;
      if (uVar12 < uVar6) {
        iVar14 = 0;
        uStack0000000000000004 = unaff_w29;
        do {
          uVar6 = (uint)uVar8;
          if (*(uint *)(unaff_x26 + (long)(int)uVar12 * 0x14 + 0x20) == uVar2) {
            lVar7 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x150);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_0099e870(lVar7);
            }
            lVar9 = *unaff_x23;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar7) {
                  puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_00d6fb3c;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar3 = (undefined8 *)FUN_0099eb60();
LAB_00d6fb3c:
            uVar10 = (*(code *)*puVar3)();
            if ((uVar10 & 1) != 0) {
              if ((uStack0000000000000004 & 0xff) == 2) {
                in_stack_00000010._4_4_ = uStack000000000000001c;
                lVar7 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb0);
                if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                  lVar7 = FUN_0099e870();
                }
                puVar3 = (undefined8 *)((long)&stack0x00000010 + 4);
LAB_00d6fde8:
                uVar8 = thunk_FUN_00a058b4(lVar7,puVar3);
                FUN_0173e018(uVar8,0);
                return 0;
              }
              if ((uStack0000000000000004 & 0xff) != 1) {
                return 0;
              }
              if (uVar12 < *(uint *)(unaff_x26 + 0x18)) {
                *(undefined8 *)(unaff_x26 + (long)(int)uVar12 * 0x14 + 0x2c) = unaff_x25;
                return 1;
              }
              goto System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>___cctor;
            }
            uVar6 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar6 <= uVar12)
          goto System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>___cctor;
          uVar12 = *(uint *)(unaff_x26 + (long)(int)uVar12 * 0x14 + 0x24);
          if ((int)uVar6 <= iVar14) {
            FUN_0173e12c(0);
          }
          uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar14 = iVar14 + 1;
          uVar6 = (uint)uVar8;
        } while (uVar12 < uVar6);
      }
    }
    if (*(int *)(unaff_x20 + 0x28) < 1) {
      uVar12 = *(uint *)(unaff_x20 + 0x20);
      if (uVar12 == uVar6) {
        (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x170) + 8))();
        lVar7 = *(long *)(unaff_x20 + 0x10);
        *(uint *)(unaff_x20 + 0x20) = uVar12 + 1;
        if (lVar7 == 0) goto LAB_00d6fe00;
        uVar6 = *(uint *)(lVar7 + 0x18);
        iVar14 = 0;
        if (uVar6 != 0) {
          iVar14 = (int)uVar2 / (int)uVar6;
        }
        uVar1 = uVar2 - iVar14 * uVar6;
        if (uVar6 <= uVar1)
        goto System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>___cctor;
        unaff_x26 = *(long *)(unaff_x20 + 0x18);
        piVar13 = (int *)(lVar7 + (ulong)uVar1 * 4 + 0x20);
      }
      else {
        unaff_x26 = *(long *)(unaff_x20 + 0x18);
        *(uint *)(unaff_x20 + 0x20) = uVar12 + 1;
      }
      if (unaff_x26 == 0) {
LAB_00d6fe00:
                    /* WARNING: Subroutine does not return */
        FUN_00a190f0();
      }
      bVar5 = false;
    }
    else {
      uVar12 = *(uint *)(unaff_x20 + 0x24);
      *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
      bVar5 = true;
    }
    if (uVar12 < *(uint *)(unaff_x26 + 0x18)) {
      if (bVar5) {
        *(undefined4 *)(unaff_x20 + 0x24) =
             *(undefined4 *)(unaff_x26 + (long)(int)uVar12 * 0x14 + 0x24);
      }
      lVar7 = unaff_x26 + (long)(int)uVar12 * 0x14;
      *(uint *)(lVar7 + 0x20) = uVar2;
      *(int *)(lVar7 + 0x24) = *piVar13 + -1;
      *(undefined8 *)(lVar7 + 0x2c) = unaff_x25;
      *(undefined4 *)(lVar7 + 0x28) = uStack000000000000001c;
      *piVar13 = uVar12 + 1;
      return 1;
    }
  }
System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>___cctor:
                    /* WARNING: Subroutine does not return */
  FUN_00a190f8();
}


