/*
FUNCTION_NAME: System.Array.InternalEnumerator<Dictionary.Entry<OVRSpace,-OVRPlugin.SpaceQueryResult>>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02abd4cc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * System_Array_InternalEnumerator<Dictionary_Entry<OVRSpace,_OVRPlugin_SpaceQueryResult>>__System_Collections_IEnumerator_get_Current
                 (void)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  code *in_x9;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x24;
  long *unaff_x25;
  
  lVar3 = (*in_x9)();
  if (lVar3 == 0) {
LAB_02abd728:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (*(int *)(lVar3 + 0x18) == 0) {
LAB_02abd72c:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  plVar8 = *(long **)(lVar3 + 0x20);
  if (plVar8 != (long *)0x0) {
    bVar1 = *(byte *)(*unaff_x24 + 0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar8);
    }
  }
  uVar9 = *(undefined8 *)UnityEngine_ProBuilder_Poly2Tri_PolygonPoint_TypeInfo;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  plVar4 = (long *)FUN_032e04b8(uVar9,0);
  plVar5 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,1);
  if (plVar5 == (long *)0x0) goto LAB_02abd728;
  if ((plVar8 != (long *)0x0) &&
     (lVar3 = thunk_FUN_01c495e4(plVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0)) {
    uVar9 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar9,0);
  }
  if ((int)plVar5[3] == 0) goto LAB_02abd72c;
  plVar5[4] = (long)plVar8;
  if ((plVar4 == (long *)0x0) ||
     (plVar4 = (long *)(**(code **)(*plVar4 + 0x8f8))
                                 (plVar4,plVar5,*(undefined8 *)(*plVar4 + 0x900)),
     plVar4 == (long *)0x0)) goto LAB_02abd728;
  uVar6 = (**(code **)(*plVar4 + 0x298))(plVar4,plVar8,*(undefined8 *)(*plVar4 + 0x2a0));
  if ((uVar6 & 1) == 0) {
    uVar6 = (**(code **)(*unaff_x20 + 0x588))();
    if ((uVar6 & 1) == 0) {
switchD_02abd684_default:
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01c72394();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_01c72394();
      }
      plVar8 = (long *)thunk_FUN_01c496e0();
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01c72394(lVar3);
      }
      FUN_02f51288(plVar8,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
      return plVar8;
    }
    if (*(int *)(*(long *)PTR_DAT_04235e88 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar9 = FUN_0330546c();
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x25);
    }
    uVar2 = FUN_032ebe64(uVar9,0);
    switch(uVar2) {
    case 5:
      lVar3 = *unaff_x25;
      puVar7 = (undefined8 *)PooledFireball_TypeInfo;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar3 = *unaff_x25;
      puVar7 = (undefined8 *)UnityEngine_Rendering_Universal_PolyNode_TypeInfo;
      break;
    case 7:
      lVar3 = *unaff_x25;
      puVar7 = (undefined8 *)PooledGrenade_TypeInfo;
      break;
    case 0xb:
    case 0xc:
      lVar3 = *unaff_x25;
      puVar7 = (undefined8 *)PooledBlasterBolt_TypeInfo;
      break;
    default:
      goto switchD_02abd684_default;
    }
    uVar9 = *puVar7;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar9 = FUN_032e04b8(uVar9,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x24);
    }
  }
  else {
    uVar9 = *(undefined8 *)PooledCrystal_TypeInfo;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar9 = FUN_032e04b8(uVar9,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x24);
    }
  }
  plVar8 = (long *)FUN_03312c94(uVar9);
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01c72394(lVar3);
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01c72394(lVar3);
  }
  if (plVar8 != (long *)0x0) {
    if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar8);
    }
  }
  return plVar8;
}


