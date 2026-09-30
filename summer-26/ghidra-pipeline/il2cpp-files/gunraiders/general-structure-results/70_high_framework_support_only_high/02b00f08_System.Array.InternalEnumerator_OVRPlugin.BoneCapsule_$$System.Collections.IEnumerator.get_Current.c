/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BoneCapsule>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02b00f08
PROGRAM: gunraiders-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_5;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


long * System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__System_Collections_IEnumerator_get_Current
                 (void)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x24;
  long *unaff_x25;
  
  FUN_032e04b8();
  uVar3 = FUN_032e935c();
  if ((uVar3 & 1) != 0) {
    lVar4 = (**(code **)(*unaff_x20 + 0x458))();
    if (lVar4 == 0) {
System_Array_InternalEnumerator<OVRPlugin_Fovf>__Dispose:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(int *)(lVar4 + 0x18) == 0) {
System_Array_InternalEnumerator<OVRPlugin_Fovf>__MoveNext:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    plVar8 = *(long **)(lVar4 + 0x20);
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
    plVar5 = (long *)FUN_032e04b8(uVar9,0);
    plVar6 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,1);
    if (plVar6 == (long *)0x0) goto System_Array_InternalEnumerator<OVRPlugin_Fovf>__Dispose;
    if ((plVar8 != (long *)0x0) &&
       (lVar4 = thunk_FUN_01c495e4(plVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
      uVar9 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar9,0);
    }
    if ((int)plVar6[3] == 0) goto System_Array_InternalEnumerator<OVRPlugin_Fovf>__MoveNext;
    plVar6[4] = (long)plVar8;
    if ((plVar5 == (long *)0x0) ||
       (plVar5 = (long *)(**(code **)(*plVar5 + 0x8f8))
                                   (plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x900)),
       plVar5 == (long *)0x0)) goto System_Array_InternalEnumerator<OVRPlugin_Fovf>__Dispose;
    uVar3 = (**(code **)(*plVar5 + 0x298))(plVar5,plVar8,*(undefined8 *)(*plVar5 + 0x2a0));
    if ((uVar3 & 1) != 0) {
      uVar9 = *(undefined8 *)PooledCrystal_TypeInfo;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar9 = FUN_032e04b8(uVar9,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x24);
      }
      goto LAB_02b00e28;
    }
  }
  uVar3 = (**(code **)(*unaff_x20 + 0x588))();
  if ((uVar3 & 1) != 0) {
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
      lVar4 = *unaff_x25;
      puVar7 = (undefined8 *)PooledFireball_TypeInfo;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar4 = *unaff_x25;
      puVar7 = (undefined8 *)UnityEngine_Rendering_Universal_PolyNode_TypeInfo;
      break;
    case 7:
      lVar4 = *unaff_x25;
      puVar7 = (undefined8 *)PooledGrenade_TypeInfo;
      break;
    case 0xb:
    case 0xc:
      lVar4 = *unaff_x25;
      puVar7 = (undefined8 *)PooledBlasterBolt_TypeInfo;
      break;
    default:
      goto switchD_02b010e8_default;
    }
    uVar9 = *puVar7;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar9 = FUN_032e04b8(uVar9,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x24);
    }
LAB_02b00e28:
    plVar8 = (long *)FUN_03312c94(uVar9);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01c72394(lVar4);
    }
    lVar4 = **(long **)(lVar4 + 0xc0);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01c72394(lVar4);
    }
    if (plVar8 != (long *)0x0) {
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar8);
      }
    }
    return plVar8;
  }
switchD_02b010e8_default:
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  plVar8 = (long *)thunk_FUN_01c496e0();
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394(lVar4);
  }
  FUN_02f68024(plVar8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
  return plVar8;
}


