/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 02f163d0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f167dc) */

undefined8
System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_Reset
          (void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  ulong uVar10;
  int iVar11;
  undefined1 *__s;
  long unaff_x26;
  long *unaff_x27;
  int iVar12;
  long unaff_x29;
  
  uVar1 = FUN_03604c48();
  uVar10 = (ulong)uVar1;
  if ((int)uVar1 < 0x65) {
    uVar10 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2;
    if (uVar1 == 0) {
      __s = (undefined1 *)0x0;
    }
    else {
      __s = &stack0x00000000 + -(uVar10 + 0xf & 0xfffffffffffffff0);
    }
    memset(__s,0,uVar10);
    lVar4 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3093);
    FUN_03604ad4(lVar4,__s,uVar1,0);
  }
  else {
    uVar3 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,uVar10);
    lVar4 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3093);
    FUN_03604b0c(lVar4,uVar3,uVar10,0);
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8(lVar7);
  }
  lVar8 = *unaff_x20;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar7) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_02f1662c;
      }
      uVar10 = uVar10 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_01dde8fc();
LAB_02f1662c:
  plVar6 = (long *)(*(code *)*puVar5)();
  iVar12 = 0;
  iVar11 = 0;
LAB_02f16644:
  do {
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar7 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02f16694;
        }
        uVar10 = uVar10 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01dde8fc(plVar6,*unaff_x27,0);
LAB_02f16694:
    uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar10 & 1) == 0) break;
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01dde7f8(lVar7);
    }
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02f1670c;
        }
        uVar10 = uVar10 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01dde8fc(plVar6,lVar7,0);
LAB_02f1670c:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
    iVar2 = FUN_02f15810();
    if (-1 < iVar2) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar10 = FUN_03604bc4(lVar4,iVar2,0);
      if ((uVar10 & 1) == 0) {
        FUN_03604b48(lVar4,iVar2,0);
        iVar12 = iVar12 + 1;
      }
      goto LAB_02f16644;
    }
    iVar11 = iVar11 + 1;
  } while ((unaff_x21 & 1) == 0);
  if (plVar6 != (long *)0x0) {
    lVar4 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02f167cc;
        }
        uVar10 = uVar10 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01dde8fc(plVar6,*(long *)
                                  Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads
                          ,0);
LAB_02f167cc:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
  }
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT44(iVar11,iVar12);
}


