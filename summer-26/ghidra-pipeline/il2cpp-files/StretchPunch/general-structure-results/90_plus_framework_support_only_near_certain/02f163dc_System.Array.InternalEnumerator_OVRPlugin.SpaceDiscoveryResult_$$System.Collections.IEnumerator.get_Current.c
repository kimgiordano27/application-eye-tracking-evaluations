/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02f163dc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f167dc) */

undefined8
System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_get_Current
          (void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  ulong unaff_x24;
  int iVar10;
  undefined1 *__s;
  long unaff_x26;
  long *unaff_x27;
  int iVar11;
  long unaff_x29;
  
  if (in_ZR || in_NG != in_OV) {
    uVar8 = -(unaff_x24 >> 0x1f & 1) & 0xfffffffc00000000 | (unaff_x24 & 0xffffffff) << 2;
    if ((int)unaff_x24 == 0) {
      __s = (undefined1 *)0x0;
    }
    else {
      __s = &stack0x00000000 + -(uVar8 + 0xf & 0xfffffffffffffff0);
    }
    memset(__s,0,uVar8);
    lVar3 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3093);
    FUN_03604ad4(lVar3,__s,unaff_x24 & 0xffffffff,0);
  }
  else {
    uVar2 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,unaff_x24 & 0xffffffff);
    lVar3 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3093);
    FUN_03604b0c(lVar3,uVar2,unaff_x24 & 0xffffffff,0);
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01dde7f8(lVar6);
  }
  lVar7 = *unaff_x20;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar6) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_02f1662c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_01dde8fc();
LAB_02f1662c:
  plVar5 = (long *)(*(code *)*puVar4)();
  iVar11 = 0;
  iVar10 = 0;
LAB_02f16644:
  do {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar6 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02f16694;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01dde8fc(plVar5,*unaff_x27,0);
LAB_02f16694:
    uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar8 & 1) == 0) break;
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8(lVar6);
    }
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02f1670c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01dde8fc(plVar5,lVar6,0);
LAB_02f1670c:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
    iVar1 = FUN_02f15810();
    if (-1 < iVar1) {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar8 = FUN_03604bc4(lVar3,iVar1,0);
      if ((uVar8 & 1) == 0) {
        FUN_03604b48(lVar3,iVar1,0);
        iVar11 = iVar11 + 1;
      }
      goto LAB_02f16644;
    }
    iVar10 = iVar10 + 1;
  } while ((unaff_x21 & 1) == 0);
  if (plVar5 != (long *)0x0) {
    lVar3 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02f167cc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01dde8fc(plVar5,*(long *)
                                  Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads
                          ,0);
LAB_02f167cc:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT44(iVar10,iVar11);
}


