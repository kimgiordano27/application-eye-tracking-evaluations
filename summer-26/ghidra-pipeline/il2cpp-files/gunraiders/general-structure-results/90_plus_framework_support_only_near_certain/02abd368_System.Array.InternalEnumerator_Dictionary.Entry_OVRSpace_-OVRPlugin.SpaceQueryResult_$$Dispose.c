/*
FUNCTION_NAME: System.Array.InternalEnumerator<Dictionary.Entry<OVRSpace,-OVRPlugin.SpaceQueryResult>>$$Dispose
ENTRY_POINT: 02abd368
PROGRAM: gunraiders-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * System_Array_InternalEnumerator<Dictionary_Entry<OVRSpace,_OVRPlugin_SpaceQueryResult>>__Dispose
                 (long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long *unaff_x25;
  
  uVar3 = (**(code **)(param_1 + 0x298))();
  if ((uVar3 & 1) == 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_02abd728;
    uVar3 = (**(code **)(*unaff_x20 + 0x3b8))();
    if ((uVar3 & 1) != 0) {
      uVar9 = (**(code **)(*unaff_x20 + 0x438))();
      uVar10 = *(undefined8 *)System_Linq_Expressions_Interpreter_OrInstruction_TypeInfo;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x25);
      }
      uVar10 = FUN_032e04b8(uVar10,0);
      uVar3 = FUN_032e935c(uVar9,uVar10,0);
      if ((uVar3 & 1) != 0) {
        lVar4 = (**(code **)(*unaff_x20 + 0x458))();
        if (lVar4 == 0) {
LAB_02abd728:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(int *)(lVar4 + 0x18) == 0) {
LAB_02abd72c:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        plVar5 = *(long **)(lVar4 + 0x20);
        if (plVar5 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x24 + 0x130);
          if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(plVar5);
          }
        }
        uVar9 = *(undefined8 *)UnityEngine_ProBuilder_Poly2Tri_PolygonPoint_TypeInfo;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        plVar6 = (long *)FUN_032e04b8(uVar9,0);
        plVar7 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,1);
        if (plVar7 == (long *)0x0) goto LAB_02abd728;
        if ((plVar5 != (long *)0x0) &&
           (lVar4 = thunk_FUN_01c495e4(plVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0)) {
          uVar9 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar9,0);
        }
        if ((int)plVar7[3] == 0) goto LAB_02abd72c;
        plVar7[4] = (long)plVar5;
        if ((plVar6 == (long *)0x0) ||
           (plVar6 = (long *)(**(code **)(*plVar6 + 0x8f8))
                                       (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x900)),
           plVar6 == (long *)0x0)) goto LAB_02abd728;
        uVar3 = (**(code **)(*plVar6 + 0x298))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x2a0));
        if ((uVar3 & 1) != 0) {
          uVar9 = *(undefined8 *)PooledCrystal_TypeInfo;
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar9 = FUN_032e04b8(uVar9,0);
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*unaff_x24);
          }
          goto LAB_02abd3c4;
        }
      }
    }
    uVar3 = (**(code **)(*unaff_x20 + 0x588))();
    if ((uVar3 & 1) == 0) {
switchD_02abd684_default:
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01c72394();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_01c72394();
      }
      plVar5 = (long *)thunk_FUN_01c496e0();
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01c72394(lVar4);
      }
      FUN_02f51288(plVar5,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
      return plVar5;
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
      lVar4 = *unaff_x25;
      puVar8 = (undefined8 *)PooledFireball_TypeInfo;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar4 = *unaff_x25;
      puVar8 = (undefined8 *)UnityEngine_Rendering_Universal_PolyNode_TypeInfo;
      break;
    case 7:
      lVar4 = *unaff_x25;
      puVar8 = (undefined8 *)PooledGrenade_TypeInfo;
      break;
    case 0xb:
    case 0xc:
      lVar4 = *unaff_x25;
      puVar8 = (undefined8 *)PooledBlasterBolt_TypeInfo;
      break;
    default:
      goto switchD_02abd684_default;
    }
  }
  else {
    lVar4 = *unaff_x25;
    puVar8 = (undefined8 *)UnityEngine_ProBuilder_Poly2Tri_Polygon_TypeInfo;
  }
  uVar9 = *puVar8;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar9 = FUN_032e04b8(uVar9,0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*unaff_x24);
  }
LAB_02abd3c4:
  plVar5 = (long *)FUN_03312c94(uVar9);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394(lVar4);
  }
  lVar4 = **(long **)(lVar4 + 0xc0);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394(lVar4);
  }
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar5);
    }
  }
  return plVar5;
}


