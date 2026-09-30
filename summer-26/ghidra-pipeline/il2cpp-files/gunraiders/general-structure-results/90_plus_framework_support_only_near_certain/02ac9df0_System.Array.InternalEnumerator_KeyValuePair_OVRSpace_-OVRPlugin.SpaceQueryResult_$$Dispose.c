/*
FUNCTION_NAME: System.Array.InternalEnumerator<KeyValuePair<OVRSpace,-OVRPlugin.SpaceQueryResult>>$$Dispose
ENTRY_POINT: 02ac9df0
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


long * System_Array_InternalEnumerator<KeyValuePair<OVRSpace,_OVRPlugin_SpaceQueryResult>>__Dispose
                 (void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  
  FUN_01c5d288();
  FUN_01c5d288(PTR_DAT_0422fbe0);
  FUN_01c5d288(PTR_DAT_04230910);
  FUN_01c5d288(PTR_DAT_0422fb28);
  *(undefined1 *)(unaff_x20 + 0x24a) = 1;
  puVar2 = PTR_DAT_0422fb28;
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01c72394();
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)puVar2);
  }
  puVar3 = UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo;
  plVar6 = (long *)FUN_032e04b8(uVar12,0);
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
    goto LAB_02aca34c;
  }
  uVar12 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb48,0);
  uVar7 = FUN_032e935c(plVar6,uVar12,0);
  if ((uVar7 & 1) == 0) {
    uVar12 = *(undefined8 *)PTR_DAT_0422fbe0;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar12 = FUN_032e04b8(uVar12,0);
    uVar7 = FUN_032e935c(plVar6,uVar12,0);
    if ((uVar7 & 1) != 0) {
      plVar6 = (long *)thunk_FUN_01c496e0(*(undefined8 *)PooledArrow_TypeInfo);
      FUN_032afa84(plVar6,0);
      goto LAB_02ac9f3c;
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01c72394();
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar2);
    }
    plVar10 = (long *)FUN_032e04b8(uVar12,0);
    if (plVar10 == (long *)0x0) {
LAB_02aca354:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar7 = (**(code **)(*plVar10 + 0x298))(plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x2a0));
    if ((uVar7 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_02aca354;
      uVar7 = (**(code **)(*plVar6 + 0x3b8))(plVar6,*(undefined8 *)(*plVar6 + 0x3c0));
      if ((uVar7 & 1) == 0) {
LAB_02aca230:
        uVar7 = (**(code **)(*plVar6 + 0x588))(plVar6,*(undefined8 *)(*plVar6 + 0x590));
        if ((uVar7 & 1) == 0) {
switchD_02aca2b0_default:
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01c72394();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_01c72394();
          }
          plVar6 = (long *)thunk_FUN_01c496e0();
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01c72394(lVar5);
          }
          FUN_02f558c8(plVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
          return plVar6;
        }
        if (*(int *)(*(long *)PTR_DAT_04235e88 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar12 = FUN_0330546c(plVar6,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar2);
        }
        uVar4 = FUN_032ebe64(uVar12,0);
        switch(uVar4) {
        case 5:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)PooledFireball_TypeInfo;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)UnityEngine_Rendering_Universal_PolyNode_TypeInfo;
          break;
        case 7:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)PooledGrenade_TypeInfo;
          break;
        case 0xb:
        case 0xc:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)PooledBlasterBolt_TypeInfo;
          break;
        default:
          goto switchD_02aca2b0_default;
        }
        goto LAB_02ac9fb4;
      }
      uVar12 = (**(code **)(*plVar6 + 0x438))(plVar6,*(undefined8 *)(*plVar6 + 0x440));
      uVar13 = *(undefined8 *)System_Linq_Expressions_Interpreter_OrInstruction_TypeInfo;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar2);
      }
      uVar13 = FUN_032e04b8(uVar13,0);
      uVar7 = FUN_032e935c(uVar12,uVar13,0);
      if ((uVar7 & 1) == 0) goto LAB_02aca230;
      lVar5 = (**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
      if (lVar5 == 0) goto LAB_02aca354;
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_02aca358:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar10 = *(long **)(lVar5 + 0x20);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar10);
        }
      }
      uVar12 = *(undefined8 *)UnityEngine_ProBuilder_Poly2Tri_PolygonPoint_TypeInfo;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar8 = (long *)FUN_032e04b8(uVar12,0);
      plVar9 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,1);
      if (plVar9 == (long *)0x0) goto LAB_02aca354;
      if ((plVar10 != (long *)0x0) &&
         (lVar5 = thunk_FUN_01c495e4(plVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
        uVar12 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar12,0);
      }
      if ((int)plVar9[3] == 0) goto LAB_02aca358;
      plVar9[4] = (long)plVar10;
      if ((plVar8 == (long *)0x0) ||
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x8f8))
                                     (plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x900)),
         plVar8 == (long *)0x0)) goto LAB_02aca354;
      uVar7 = (**(code **)(*plVar8 + 0x298))(plVar8,plVar10,*(undefined8 *)(*plVar8 + 0x2a0));
      if ((uVar7 & 1) == 0) goto LAB_02aca230;
      uVar12 = *(undefined8 *)PooledCrystal_TypeInfo;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar12 = FUN_032e04b8(uVar12,0);
      plVar6 = plVar10;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar3);
      }
    }
    else {
      lVar5 = *(long *)puVar2;
      puVar11 = (undefined8 *)UnityEngine_ProBuilder_Poly2Tri_Polygon_TypeInfo;
LAB_02ac9fb4:
      uVar12 = *puVar11;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar12 = FUN_032e04b8(uVar12,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar3);
      }
    }
    plVar6 = (long *)FUN_03312c94(uVar12,plVar6,0);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01c72394(lVar5);
    }
    plVar10 = *(long **)(lVar5 + 0xc0);
  }
  else {
    plVar6 = (long *)thunk_FUN_01c496e0(*(undefined8 *)
                                         UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_TypeInfo
                                       );
    FUN_032af984(plVar6,0);
LAB_02ac9f3c:
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01c72394();
    }
    plVar10 = *(long **)(lVar5 + 0xc0);
  }
  lVar5 = *plVar10;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01c72394(lVar5);
  }
  if (plVar6 != (long *)0x0) {
    if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
LAB_02aca34c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar6);
    }
  }
  return plVar6;
}


