/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 0222311c
PROGRAM: sharks-libil2cpp.so
SCORE: 117
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02223420) */

void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceDiscoveryResult>__Dispose
               (undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int in_w10;
  int *piVar8;
  long unaff_x19;
  long *unaff_x21;
  
  if (in_w10 == 0) {
    thunk_FUN_01843fdc(param_1);
  }
  FUN_02bddb5c();
  uVar3 = FUN_02be66d0();
  lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((uVar3 & 1) != 0) {
    lVar6 = *(long *)(lVar6 + 0x30);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0185daa4(lVar6);
    }
    if ((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6))
    {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944();
    }
    uVar1 = *(uint *)(unaff_x21 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar6 = unaff_x21[3];
    if (lVar6 != 0) {
      uVar3 = 0;
      lVar7 = lVar6 + 0x30;
      do {
        if (*(uint *)(lVar6 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        if (-1 < *(int *)(lVar7 + -0x10)) {
          FUN_02224208();
        }
        uVar3 = uVar3 + 1;
        lVar7 = lVar7 + 0x18;
      } while (uVar1 != uVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  lVar6 = *(long *)(lVar6 + 0x88);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4(lVar6);
  }
  lVar7 = *unaff_x21;
  uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar3 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar6) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
        goto Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>__Dispose;
      }
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_0185dba8();
Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>__Dispose:
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar2 = PTR_DAT_037f3298;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  do {
    lVar6 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_022232c4;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0185dba8(plVar5,*(long *)puVar2,0);
LAB_022232c4:
    uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar3 & 1) == 0) break;
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0185daa4(lVar6);
    }
    lVar7 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0222333c;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0185dba8(plVar5,lVar6,0);
LAB_0222333c:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
    FUN_02224208();
  } while( true );
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_037f3288) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_022233dc;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0185dba8(plVar5,*(long *)PTR_DAT_037f3288,0);
LAB_022233dc:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
  return;
}


