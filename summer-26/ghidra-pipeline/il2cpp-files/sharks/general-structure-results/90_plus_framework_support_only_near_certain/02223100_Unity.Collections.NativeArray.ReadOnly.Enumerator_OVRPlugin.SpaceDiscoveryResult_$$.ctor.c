/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 02223100
PROGRAM: sharks-libil2cpp.so
SCORE: 117
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02223420) */

void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceDiscoveryResult>___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 uVar10;
  
  uVar3 = thunk_FUN_0187f3ac();
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01843fdc(*unaff_x22);
  }
  uVar10 = FUN_02bddb5c(uVar10,0);
  uVar4 = FUN_02be66d0(uVar3,uVar10,0);
  lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((uVar4 & 1) != 0) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0185daa4(lVar7);
    }
    if ((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7))
    {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944();
    }
    uVar1 = *(uint *)(unaff_x21 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar7 = unaff_x21[3];
    if (lVar7 != 0) {
      uVar4 = 0;
      lVar8 = lVar7 + 0x30;
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        if (-1 < *(int *)(lVar8 + -0x10)) {
          FUN_02224208();
        }
        uVar4 = uVar4 + 1;
        lVar8 = lVar8 + 0x18;
      } while (uVar1 != uVar4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  lVar7 = *(long *)(lVar7 + 0x88);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4(lVar7);
  }
  lVar8 = *unaff_x21;
  uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar4 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar7) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
        goto Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>__Dispose;
      }
      uVar4 = uVar4 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)FUN_0185dba8();
Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>__Dispose:
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar2 = PTR_DAT_037f3298;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  do {
    lVar7 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_022232c4;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_0185dba8(plVar6,*(long *)puVar2,0);
LAB_022232c4:
    uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar4 & 1) == 0) break;
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0185daa4(lVar7);
    }
    lVar8 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0222333c;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_0185dba8(plVar6,lVar7,0);
LAB_0222333c:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
    FUN_02224208();
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_037f3288) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_022233dc;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_0185dba8(plVar6,*(long *)PTR_DAT_037f3288,0);
LAB_022233dc:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
  }
  return;
}


