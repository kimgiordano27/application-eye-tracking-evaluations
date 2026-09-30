/*
FUNCTION_NAME: FUN_03455da4
ENTRY_POINT: 03455da4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x03456478) */
/* WARNING: Removing unreachable block (ram,0x03456408) */
/* WARNING: Removing unreachable block (ram,0x0345640c) */
/* WARNING: Removing unreachable block (ram,0x0345648c) */
/* WARNING: Removing unreachable block (ram,0x0345605c) */

void FUN_03455da4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
  if ((DAT_04832932 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<BezierKnot>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Runtime_CompilerServices_RuntimeWrappedException__ctor__);
    DAT_04832932 = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    if (param_2 == 0) goto LAB_03456474;
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
    thunk_FUN_01f51358();
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    if (param_2 == 0) goto LAB_03456474;
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
    thunk_FUN_01f51358();
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    if (param_2 == 0) goto LAB_03456474;
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
    thunk_FUN_01f51358();
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    if (param_2 == 0) goto LAB_03456474;
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
    thunk_FUN_01f51358();
  }
  else if (param_2 == 0) {
LAB_03456474:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar6 = *(long **)(param_2 + 0x40);
  if (plVar6 != (long *)0x0) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x328))(plVar6,*(undefined8 *)(*plVar6 + 0x330));
    puVar5 = Method_System_Linq_Enumerable_ToList<BezierKnot>__;
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar10 = *plVar6;
      lVar9 = *(long *)puVar4;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03455f00;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,0);
LAB_03455f00:
      uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar11 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_01f116d0(plVar6,*(undefined8 *)puVar3);
        if (plVar6 == (long *)0x0) break;
        lVar9 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 == 0) goto LAB_03456028;
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_03456010;
      }
      lVar10 = *plVar6;
      lVar9 = *(long *)puVar4;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_03455f60;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,1);
LAB_03455f60:
      plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      puVar7 = (undefined8 *)thunk_FUN_01f11920();
      uVar1 = *puVar7;
      uVar2 = puVar7[1];
      plVar8 = (long *)FUN_0345b850(param_1);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar11 = (**(code **)(*plVar8 + 0x2e8))(plVar8,uVar1,*(undefined8 *)(*plVar8 + 0x2f0));
      if ((uVar11 & 1) == 0) {
        plVar8 = (long *)FUN_0345b850(param_1);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar8 + 0x318))(plVar8,uVar1,uVar2,*(undefined8 *)(*plVar8 + 800));
      }
    } while( true );
  }
  goto LAB_03456060;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_03456010:
    if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03456044;
    }
  }
LAB_03456028:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_03456044:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_03456060:
  if ((*(long *)(param_1 + 0x30) == 0) &&
     (plVar6 = *(long **)(param_2 + 0x30), plVar6 != (long *)0x0)) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
    puVar5 = Method_System_Runtime_CompilerServices_RuntimeWrappedException__ctor__;
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar10 = *plVar6;
      lVar9 = *(long *)puVar4;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0345624c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,0);
LAB_0345624c:
      uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar11 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_01f116d0(plVar6,*(undefined8 *)puVar3);
        if (plVar6 == (long *)0x0) break;
        lVar9 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 == 0) goto LAB_0345637c;
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_03456364;
      }
      lVar10 = *plVar6;
      lVar9 = *(long *)puVar4;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_034562ac;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,1);
LAB_034562ac:
      plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      lVar9 = *(long *)puVar5;
      if (plVar8 != (long *)0x0) {
        if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar9 + 0x130)) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) != lVar9)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar8);
        }
      }
      lVar9 = thunk_FUN_01f117cc(lVar9);
      FUN_0345b8c4();
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0345676c(lVar9,plVar8);
      plVar8 = (long *)FUN_034566fc(param_1);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar8 + 0x308))(plVar8,lVar9,*(undefined8 *)(*plVar8 + 0x310));
    } while( true );
  }
LAB_03456068:
  if ((*(long *)(param_1 + 0x38) != 0) ||
     (plVar6 = *(long **)(param_2 + 0x38), plVar6 == (long *)0x0)) {
    return;
  }
  plVar6 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
  puVar5 = Method_System_Runtime_CompilerServices_RuntimeWrappedException__ctor__;
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar10 = *plVar6;
    lVar9 = *(long *)puVar4;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_034560ec;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,0);
LAB_034560ec:
    uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar11 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_01f116d0(plVar6,*(undefined8 *)puVar3);
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 == 0) goto LAB_034563d4;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      goto LAB_034563bc;
    }
    lVar10 = *plVar6;
    lVar9 = *(long *)puVar4;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_0345614c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,1);
LAB_0345614c:
    plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    lVar9 = *(long *)puVar5;
    if (plVar8 != (long *)0x0) {
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar9 + 0x130)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) != lVar9))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar8);
      }
    }
    lVar9 = thunk_FUN_01f117cc(lVar9);
    FUN_0345b8c4();
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0345676c(lVar9,plVar8);
    plVar8 = (long *)FUN_03456e90(param_1);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar8 + 0x308))(plVar8,lVar9,*(undefined8 *)(*plVar8 + 0x310));
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_03456364:
    if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_034563f0;
    }
  }
LAB_0345637c:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_034563f0:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  goto LAB_03456068;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_034563bc:
    if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0345641c;
    }
  }
LAB_034563d4:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_0345641c:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}


