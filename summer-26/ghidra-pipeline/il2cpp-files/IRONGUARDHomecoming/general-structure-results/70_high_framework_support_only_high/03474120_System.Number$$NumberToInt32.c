/*
FUNCTION_NAME: System.Number$$NumberToInt32
ENTRY_POINT: 03474120
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03474628) */
/* WARNING: Removing unreachable block (ram,0x03474604) */
/* WARNING: Removing unreachable block (ram,0x03474634) */

int System_Number__NumberToInt32(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool in_CY;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  long in_x10;
  int *piVar11;
  int iVar12;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  
  if ((!in_CY) || (*(long *)(*(long *)(param_1 + 200) + in_x10 * 8 + -8) != in_x9)) {
    iVar12 = 0;
    uVar10 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(param_1 + (long)(*piVar11 + 9) * 0x10 + 0x138);
          goto LAB_03474188;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(unaff_x21,*unaff_x25,9);
LAB_03474188:
    plVar5 = (long *)(*(code *)*puVar4)(unaff_x21,puVar4[1]);
    puVar3 = Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__;
    puVar2 = Method_System_Linq_Enumerable_ToList<BezierKnot>__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar9 = *plVar5;
      lVar8 = *(long *)puVar1;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03474200;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,0);
LAB_03474200:
      uVar10 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar10 & 1) == 0) {
        plVar5 = (long *)thunk_FUN_01f116d0(plVar5,*unaff_x24);
        if (plVar5 == (long *)0x0) {
          return iVar12;
        }
        lVar8 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 == 0) goto System_Number__NumberToUInt64;
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_0347432c;
      }
      lVar9 = *plVar5;
      lVar8 = *(long *)puVar1;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_03474260;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,1);
LAB_03474260:
      plVar6 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      thunk_FUN_01f11920();
      plVar6 = (long *)*unaff_x20;
      if (plVar6 == (long *)0x0) {
        uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
        FUN_0353e574(uVar7,0);
        *unaff_x20 = uVar7;
        thunk_FUN_01f51358();
        plVar6 = (long *)*unaff_x20;
      }
      uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar2);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar7,uVar7);
      }
      (**(code **)(*plVar6 + 0x308))(plVar6,uVar7,*(undefined8 *)(*plVar6 + 0x310));
      iVar12 = iVar12 + 1;
    } while( true );
  }
  uVar10 = FUN_0347a914();
  if (((uVar10 & 1) == 0) || (plVar5 = (long *)FUN_0347aa10(), plVar5 == (long *)0x0)) {
    return 0;
  }
  lVar8 = *plVar5;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x25) {
        puVar4 = (undefined8 *)(lVar8 + (long)(*piVar11 + 9) * 0x10 + 0x138);
        goto LAB_03474410;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x25,9);
LAB_03474410:
  plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
  puVar3 = Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__;
  puVar2 = Method_System_Linq_Enumerable_ToList<BezierKnot>__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar12 = 0;
  do {
    lVar9 = *plVar5;
    lVar8 = *(long *)puVar1;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0347448c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,0);
LAB_0347448c:
    uVar10 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar10 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_01f116d0(plVar5,*unaff_x24);
      if (plVar5 == (long *)0x0) {
        return iVar12;
      }
      lVar8 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 == 0) goto LAB_034745d4;
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      goto LAB_034745bc;
    }
    lVar9 = *plVar5;
    lVar8 = *(long *)puVar1;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_034744ec;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,1);
LAB_034744ec:
    plVar6 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    thunk_FUN_01f11920();
    plVar6 = (long *)*unaff_x20;
    if (plVar6 == (long *)0x0) {
      uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
      FUN_0353e574(uVar7,0);
      *unaff_x20 = uVar7;
      thunk_FUN_01f51358();
      plVar6 = (long *)*unaff_x20;
    }
    uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar2);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar7,uVar7);
    }
    (**(code **)(*plVar6 + 0x308))(plVar6,uVar7,*(undefined8 *)(*plVar6 + 0x310));
    iVar12 = iVar12 + 1;
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0347432c:
    if (*(long *)(piVar11 + -2) == *unaff_x24) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_034743cc;
    }
  }
System_Number__NumberToUInt64:
  puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x24,0);
LAB_034743cc:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return iVar12;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_034745bc:
    if (*(long *)(piVar11 + -2) == *unaff_x24) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_034745f0;
    }
  }
LAB_034745d4:
  puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x24,0);
LAB_034745f0:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return iVar12;
}


