/*
FUNCTION_NAME: System.DateTimeFormat$$FormatCustomizedRoundripTimeZone
ENTRY_POINT: 03455f08
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03456478) */
/* WARNING: Removing unreachable block (ram,0x03456408) */
/* WARNING: Removing unreachable block (ram,0x0345640c) */
/* WARNING: Removing unreachable block (ram,0x0345648c) */
/* WARNING: Removing unreachable block (ram,0x0345605c) */

void System_DateTimeFormat__FormatCustomizedRoundripTimeZone(code *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  
  while (uVar5 = (*param_1)(), (uVar5 & 1) != 0) {
    lVar9 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x25) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_03455f60;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03455f60:
    plVar7 = (long *)(*(code *)*puVar6)();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar7 + 0x40) != *(long *)(*unaff_x26 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    puVar6 = (undefined8 *)thunk_FUN_01f11920();
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    plVar7 = (long *)FUN_0345b850();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar5 = (**(code **)(*plVar7 + 0x2e8))(plVar7,uVar1,*(undefined8 *)(*plVar7 + 0x2f0));
    if ((uVar5 & 1) == 0) {
      plVar7 = (long *)FUN_0345b850();
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar7 + 0x318))(plVar7,uVar1,uVar2,*(undefined8 *)(*plVar7 + 800));
    }
    lVar9 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x25) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03455f00;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03455f00:
    param_1 = (code *)*puVar6;
  }
  plVar7 = (long *)thunk_FUN_01f116d0();
  if (plVar7 != (long *)0x0) {
    lVar9 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03456044;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x24,0);
LAB_03456044:
    (*(code *)*puVar6)(plVar7,puVar6[1]);
  }
  if ((*(long *)(unaff_x19 + 0x30) == 0) &&
     (plVar7 = *(long **)(unaff_x20 + 0x30), plVar7 != (long *)0x0)) {
    plVar7 = (long *)(**(code **)(*plVar7 + 0x388))(plVar7,*(undefined8 *)(*plVar7 + 0x390));
    puVar4 = Method_System_Runtime_CompilerServices_RuntimeWrappedException__ctor__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar10 = *plVar7;
      lVar9 = *(long *)puVar3;
      uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar9) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0345624c;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar9,0);
LAB_0345624c:
      uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar5 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_01f116d0(plVar7,*unaff_x24);
        if (plVar7 == (long *)0x0) break;
        lVar9 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 == 0) goto LAB_0345637c;
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_03456364;
      }
      lVar10 = *plVar7;
      lVar9 = *(long *)puVar3;
      uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar9) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_034562ac;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar9,1);
LAB_034562ac:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      lVar9 = *(long *)puVar4;
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
      plVar8 = (long *)FUN_034566fc();
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar8 + 0x308))(plVar8,lVar9,*(undefined8 *)(*plVar8 + 0x310));
    } while( true );
  }
  goto LAB_03456068;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar11 = piVar11 + 4;
    if (uVar5 == 0) break;
LAB_03456364:
    if (*(long *)(piVar11 + -2) == *unaff_x24) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_034563f0;
    }
  }
LAB_0345637c:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x24,0);
LAB_034563f0:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_03456068:
  if ((*(long *)(unaff_x19 + 0x38) != 0) ||
     (plVar7 = *(long **)(unaff_x20 + 0x38), plVar7 == (long *)0x0)) {
    return;
  }
  plVar7 = (long *)(**(code **)(*plVar7 + 0x388))(plVar7,*(undefined8 *)(*plVar7 + 0x390));
  puVar4 = Method_System_Runtime_CompilerServices_RuntimeWrappedException__ctor__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar10 = *plVar7;
    lVar9 = *(long *)puVar3;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_034560ec;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar9,0);
LAB_034560ec:
    uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar5 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_01f116d0(plVar7,*unaff_x24);
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 == 0) goto LAB_034563d4;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar7;
    lVar9 = *(long *)puVar3;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_0345614c;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar9,1);
LAB_0345614c:
    plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    lVar9 = *(long *)puVar4;
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
    plVar8 = (long *)FUN_03456e90();
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar8 + 0x308))(plVar8,lVar9,*(undefined8 *)(*plVar8 + 0x310));
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar11 = piVar11 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar11 + -2) == *unaff_x24) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0345641c;
    }
  }
LAB_034563d4:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x24,0);
LAB_0345641c:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
  return;
}


