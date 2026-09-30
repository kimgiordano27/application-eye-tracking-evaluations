/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 02fb3a58
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (undefined8 param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined8 in_x9;
  ulong uVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  ulong uVar18;
  long *unaff_x19;
  long lVar19;
  long *plVar20;
  long *unaff_x20;
  long unaff_x21;
  byte *pbVar21;
  byte *pbVar22;
  uint uVar23;
  long unaff_x22;
  uint uVar24;
  long lVar25;
  long unaff_x24;
  long *plVar26;
  byte *unaff_x26;
  byte *unaff_x27;
  byte *pbVar27;
  byte *unaff_x28;
  long unaff_x29;
  long *in_stack_00000020;
  
  *(undefined8 *)(unaff_x29 + -0x28) = param_1;
  *(undefined8 *)(unaff_x29 + -8) = in_x9;
  std::__ndk1::__call_once(*(ulong **)(param_2 + 0x770),(void *)(unaff_x29 + -8),FUN_02fd875c);
  puVar4 = StringLiteral_9772;
  uVar14 = (long)*(int *)(unaff_x22 + 8) - 1;
  if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar14) ||
     (plVar26 = *(long **)(*(long *)(unaff_x21 + 0x10) + uVar14 * 8), plVar26 == (long *)0x0)) {
LAB_02fb3ffc:
                    /* WARNING: Subroutine does not return */
    FUN_02fa4ee4();
  }
  lVar19 = *unaff_x19;
  *(undefined **)(unaff_x29 + -0x10) = StringLiteral_9772;
  if (*(long *)puVar4 != -1) {
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x10;
    *(long *)(unaff_x29 + -8) = unaff_x29 + -0x28;
    std::__ndk1::__call_once((ulong *)StringLiteral_9772,(void *)(unaff_x29 + -8),FUN_02fd875c);
  }
  lVar25 = *(long *)(lVar19 + 0x10);
  uVar14 = (long)*(int *)(puVar4 + 8) - 1;
  if (((ulong)(*(long *)(lVar19 + 0x18) - lVar25 >> 3) <= uVar14) ||
     (plVar20 = *(long **)(lVar25 + uVar14 * 8), plVar20 == (long *)0x0)) goto LAB_02fb3ffc;
  (**(code **)(*plVar20 + 0x28))(unaff_x29 + -0x28,plVar20);
  *unaff_x20 = unaff_x24;
  if ((*unaff_x27 == 0x2d) || (pbVar21 = unaff_x27, *unaff_x27 == 0x2b)) {
    uVar5 = (**(code **)(*plVar26 + 0x58))(plVar26);
    puVar8 = (undefined4 *)*unaff_x20;
    pbVar21 = unaff_x27 + 1;
    *puVar8 = uVar5;
    *unaff_x20 = (long)(puVar8 + 1);
  }
  lVar25 = (long)unaff_x26 - (long)pbVar21;
  lVar19 = lVar25 + -2;
  if (((lVar25 < 2) || (*pbVar21 != 0x30)) || ((pbVar21[1] | 0x20) != 0x78)) {
    pbVar22 = pbVar21;
    if (pbVar21 < unaff_x26) {
      lVar19 = 0;
      do {
        bVar2 = pbVar21[lVar19];
        if (((DAT_06de37f8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_06de37f8), iVar6 != 0)) {
          DAT_06de37f0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          __cxa_guard_release(&DAT_06de37f8);
        }
        lVar3 = lVar19;
      } while ((0xfffffff5 < bVar2 - 0x3a) &&
              (lVar19 = lVar19 + 1, lVar3 = lVar25, lVar25 != lVar19));
      pbVar27 = pbVar21 + lVar3;
      goto FUN_02fb3d08;
    }
    pbVar27 = pbVar21;
    uVar14 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
    if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
      uVar14 = *(ulong *)(unaff_x29 + -0x20);
    }
  }
  else {
    uVar5 = (**(code **)(*plVar26 + 0x58))(plVar26,0x30);
    puVar8 = (undefined4 *)*unaff_x20;
    *puVar8 = uVar5;
    *unaff_x20 = (long)(puVar8 + 1);
    uVar5 = (**(code **)(*plVar26 + 0x58))(plVar26,pbVar21[1]);
    puVar8 = (undefined4 *)*unaff_x20;
    pbVar22 = pbVar21 + 2;
    *puVar8 = uVar5;
    *unaff_x20 = (long)(puVar8 + 1);
    if (pbVar22 < unaff_x26) {
      pbVar9 = pbVar22;
      do {
        bVar2 = *pbVar9;
        if (((DAT_06de37f8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_06de37f8), iVar6 != 0)) {
          DAT_06de37f0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          __cxa_guard_release(&DAT_06de37f8);
        }
        if ((bVar2 - 0x3a < 0xfffffff6) &&
           (pbVar27 = pbVar9, (bVar2 & 0xffffffdf) - 0x47 < 0xfffffffa)) break;
        lVar19 = lVar19 + -1;
        pbVar9 = pbVar9 + 1;
        pbVar27 = pbVar21 + lVar25;
      } while (lVar19 != 0);
FUN_02fb3d08:
      uVar14 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
      if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
        uVar14 = *(ulong *)(unaff_x29 + -0x20);
      }
    }
    else {
      pbVar27 = pbVar22;
      uVar14 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
      if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
        uVar14 = *(ulong *)(unaff_x29 + -0x20);
      }
    }
  }
  if (uVar14 == 0) {
    (**(code **)(*plVar26 + 0x60))(plVar26,pbVar22,pbVar27,*unaff_x20);
    puVar8 = (undefined4 *)(*unaff_x20 + ((long)pbVar27 - (long)pbVar22) * 4);
    *unaff_x20 = (long)puVar8;
  }
  else {
    if ((pbVar22 != pbVar27) && (pbVar9 = pbVar27 + -1, pbVar21 = pbVar22, pbVar22 < pbVar9)) {
      do {
        pbVar15 = pbVar21 + 1;
        bVar2 = *pbVar21;
        *pbVar21 = *pbVar9;
        pbVar10 = pbVar9 + -1;
        *pbVar9 = bVar2;
        pbVar9 = pbVar10;
        pbVar21 = pbVar15;
      } while (pbVar15 < pbVar10);
    }
    uVar5 = (**(code **)(*plVar20 + 0x20))(plVar20);
    if (pbVar22 < pbVar27) {
      uVar23 = 0;
      uVar24 = 0;
      uVar14 = unaff_x29 - 0x28U | 1;
      lVar19 = (long)pbVar27 - (long)pbVar22;
      pbVar21 = pbVar22;
      do {
        uVar11 = (ulong)uVar23;
        uVar1 = uVar14;
        if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
          uVar1 = *(ulong *)(unaff_x29 + -0x18);
        }
        if (*(char *)(uVar1 + uVar11) != '\0') {
          uVar1 = uVar14;
          if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
            uVar1 = *(ulong *)(unaff_x29 + -0x18);
          }
          if (uVar24 == *(byte *)(uVar1 + uVar11)) {
            puVar8 = (undefined4 *)*unaff_x20;
            uVar24 = 0;
            *puVar8 = uVar5;
            bVar2 = *(byte *)(unaff_x29 + -0x28);
            uVar18 = *(ulong *)(unaff_x29 + -0x20);
            *unaff_x20 = (long)(puVar8 + 1);
            uVar1 = (ulong)(bVar2 >> 1);
            if ((bVar2 & 1) != 0) {
              uVar1 = uVar18;
            }
            if (uVar11 < uVar1 - 1) {
              uVar23 = uVar23 + 1;
            }
          }
        }
        uVar7 = (**(code **)(*plVar26 + 0x58))(plVar26,*pbVar21);
        puVar8 = (undefined4 *)*unaff_x20;
        lVar19 = lVar19 + -1;
        uVar24 = uVar24 + 1;
        pbVar21 = pbVar21 + 1;
        *puVar8 = uVar7;
        *unaff_x20 = (long)(puVar8 + 1);
      } while (lVar19 != 0);
      puVar8 = puVar8 + 1;
      puVar16 = (undefined4 *)(unaff_x24 + ((long)pbVar22 - (long)unaff_x27) * 4);
      if (puVar16 == puVar8) goto joined_r0x02fb3f04;
    }
    else {
      puVar8 = (undefined4 *)*unaff_x20;
      puVar16 = (undefined4 *)(unaff_x24 + ((long)pbVar22 - (long)unaff_x27) * 4);
      if (puVar16 == puVar8) goto joined_r0x02fb3f04;
    }
    if (puVar16 < puVar8 + -1) {
      puVar12 = puVar8 + -1;
      puVar16 = (undefined4 *)(unaff_x24 + (long)unaff_x27 * -4 + (long)pbVar22 * 4);
      do {
        puVar17 = puVar16 + 1;
        uVar5 = *puVar16;
        *puVar16 = *puVar12;
        puVar13 = puVar12 + -1;
        *puVar12 = uVar5;
        puVar12 = puVar13;
        puVar16 = puVar17;
      } while (puVar17 < puVar13);
    }
  }
joined_r0x02fb3f04:
  if (pbVar27 < unaff_x26) {
    lVar19 = (long)unaff_x26 - (long)pbVar27;
    pbVar21 = pbVar27;
    do {
      pbVar27 = pbVar21 + 1;
      if (*pbVar21 == 0x2e) {
        uVar5 = (**(code **)(*plVar20 + 0x18))(plVar20);
        puVar8 = (undefined4 *)*unaff_x20 + 1;
        *(undefined4 *)*unaff_x20 = uVar5;
        *unaff_x20 = (long)puVar8;
        goto LAB_02fb3f74;
      }
      uVar5 = (**(code **)(*plVar26 + 0x58))(plVar26);
      puVar8 = (undefined4 *)*unaff_x20;
      lVar19 = lVar19 + -1;
      *puVar8 = uVar5;
      *unaff_x20 = (long)(puVar8 + 1);
      pbVar21 = pbVar27;
    } while (lVar19 != 0);
    puVar8 = puVar8 + 1;
    pbVar27 = unaff_x26;
  }
LAB_02fb3f74:
  (**(code **)(*plVar26 + 0x60))(plVar26,pbVar27,unaff_x26,puVar8);
  lVar19 = *unaff_x20 + ((long)unaff_x26 - (long)pbVar27) * 4;
  bVar2 = *(byte *)(unaff_x29 + -0x28);
  *unaff_x20 = lVar19;
  if (unaff_x28 != unaff_x26) {
    lVar19 = unaff_x24 + ((long)unaff_x28 - (long)unaff_x27) * 4;
  }
  *in_stack_00000020 = lVar19;
  if ((bVar2 & 1) != 0) {
    operator_delete(*(void **)(unaff_x29 + -0x18));
  }
  return;
}


