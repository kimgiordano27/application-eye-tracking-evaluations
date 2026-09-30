/*
FUNCTION_NAME: System.Array.InternalEnumerator<KeyValuePair<OVRSpace,-OVRPlugin.SpaceQueryResult>>$$get_Current
ENTRY_POINT: 02ac9e44
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * System_Array_InternalEnumerator<KeyValuePair<OVRSpace,_OVRPlugin_SpaceQueryResult>>__get_Current
                 (undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long in_x9;
  int in_w10;
  long unaff_x19;
  undefined8 uVar11;
  undefined8 uVar12;
  long *unaff_x25;
  
  uVar11 = *(undefined8 *)(in_x9 + 0x20);
  if (in_w10 == 0) {
    thunk_FUN_01c1d1e8(param_1);
  }
  puVar2 = UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo;
  plVar4 = (long *)FUN_032e04b8(uVar11,0);
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
    goto LAB_02aca34c;
  }
  uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb48,0);
  uVar5 = FUN_032e935c(plVar4,uVar11,0);
  if ((uVar5 & 1) == 0) {
    uVar11 = *(undefined8 *)PTR_DAT_0422fbe0;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar11 = FUN_032e04b8(uVar11,0);
    uVar5 = FUN_032e935c(plVar4,uVar11,0);
    if ((uVar5 & 1) != 0) {
      plVar4 = (long *)thunk_FUN_01c496e0(*(undefined8 *)PooledArrow_TypeInfo);
      FUN_032afa84(plVar4,0);
      goto LAB_02ac9f3c;
    }
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01c72394();
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x25);
    }
    plVar9 = (long *)FUN_032e04b8(uVar11,0);
    if (plVar9 == (long *)0x0) {
LAB_02aca354:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar5 = (**(code **)(*plVar9 + 0x298))(plVar9,plVar4,*(undefined8 *)(*plVar9 + 0x2a0));
    if ((uVar5 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_02aca354;
      uVar5 = (**(code **)(*plVar4 + 0x3b8))(plVar4,*(undefined8 *)(*plVar4 + 0x3c0));
      if ((uVar5 & 1) == 0) {
LAB_02aca230:
        uVar5 = (**(code **)(*plVar4 + 0x588))(plVar4,*(undefined8 *)(*plVar4 + 0x590));
        if ((uVar5 & 1) == 0) {
switchD_02aca2b0_default:
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01c72394();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_01c72394();
          }
          plVar4 = (long *)thunk_FUN_01c496e0();
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01c72394(lVar6);
          }
          FUN_02f558c8(plVar4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
          return plVar4;
        }
        if (*(int *)(*(long *)PTR_DAT_04235e88 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar11 = FUN_0330546c(plVar4,0);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*unaff_x25);
        }
        uVar3 = FUN_032ebe64(uVar11,0);
        switch(uVar3) {
        case 5:
          lVar6 = *unaff_x25;
          puVar10 = (undefined8 *)PooledFireball_TypeInfo;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar6 = *unaff_x25;
          puVar10 = (undefined8 *)UnityEngine_Rendering_Universal_PolyNode_TypeInfo;
          break;
        case 7:
          lVar6 = *unaff_x25;
          puVar10 = (undefined8 *)PooledGrenade_TypeInfo;
          break;
        case 0xb:
        case 0xc:
          lVar6 = *unaff_x25;
          puVar10 = (undefined8 *)PooledBlasterBolt_TypeInfo;
          break;
        default:
          goto switchD_02aca2b0_default;
        }
        goto LAB_02ac9fb4;
      }
      uVar11 = (**(code **)(*plVar4 + 0x438))(plVar4,*(undefined8 *)(*plVar4 + 0x440));
      uVar12 = *(undefined8 *)System_Linq_Expressions_Interpreter_OrInstruction_TypeInfo;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x25);
      }
      uVar12 = FUN_032e04b8(uVar12,0);
      uVar5 = FUN_032e935c(uVar11,uVar12,0);
      if ((uVar5 & 1) == 0) goto LAB_02aca230;
      lVar6 = (**(code **)(*plVar4 + 0x458))(plVar4,*(undefined8 *)(*plVar4 + 0x460));
      if (lVar6 == 0) goto LAB_02aca354;
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_02aca358:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar9 = *(long **)(lVar6 + 0x20);
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar9);
        }
      }
      uVar11 = *(undefined8 *)UnityEngine_ProBuilder_Poly2Tri_PolygonPoint_TypeInfo;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar7 = (long *)FUN_032e04b8(uVar11,0);
      plVar8 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,1);
      if (plVar8 == (long *)0x0) goto LAB_02aca354;
      if ((plVar9 != (long *)0x0) &&
         (lVar6 = thunk_FUN_01c495e4(plVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0)) {
        uVar11 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar11,0);
      }
      if ((int)plVar8[3] == 0) goto LAB_02aca358;
      plVar8[4] = (long)plVar9;
      if ((plVar7 == (long *)0x0) ||
         (plVar7 = (long *)(**(code **)(*plVar7 + 0x8f8))
                                     (plVar7,plVar8,*(undefined8 *)(*plVar7 + 0x900)),
         plVar7 == (long *)0x0)) goto LAB_02aca354;
      uVar5 = (**(code **)(*plVar7 + 0x298))(plVar7,plVar9,*(undefined8 *)(*plVar7 + 0x2a0));
      if ((uVar5 & 1) == 0) goto LAB_02aca230;
      uVar11 = *(undefined8 *)PooledCrystal_TypeInfo;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar11 = FUN_032e04b8(uVar11,0);
      plVar4 = plVar9;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar2);
      }
    }
    else {
      lVar6 = *unaff_x25;
      puVar10 = (undefined8 *)UnityEngine_ProBuilder_Poly2Tri_Polygon_TypeInfo;
LAB_02ac9fb4:
      uVar11 = *puVar10;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar11 = FUN_032e04b8(uVar11,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar2);
      }
    }
    plVar4 = (long *)FUN_03312c94(uVar11,plVar4,0);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01c72394(lVar6);
    }
    plVar9 = *(long **)(lVar6 + 0xc0);
  }
  else {
    plVar4 = (long *)thunk_FUN_01c496e0(*(undefined8 *)
                                         UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_TypeInfo
                                       );
    FUN_032af984(plVar4,0);
LAB_02ac9f3c:
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01c72394();
    }
    plVar9 = *(long **)(lVar6 + 0xc0);
  }
  lVar6 = *plVar9;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01c72394(lVar6);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)) {
LAB_02aca34c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar4);
    }
  }
  return plVar4;
}


