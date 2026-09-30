/*
FUNCTION_NAME: System.ValueTuple<__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericStructType>$$Equals
ENTRY_POINT: 027c112c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x027c162c) */
/* WARNING: Removing unreachable block (ram,0x027c1394) */
/* WARNING: Removing unreachable block (ram,0x027c13a8) */
/* WARNING: Removing unreachable block (ram,0x027c13ac) */
/* WARNING: Removing unreachable block (ram,0x027c13b4) */
/* WARNING: Removing unreachable block (ram,0x027c13b8) */
/* WARNING: Removing unreachable block (ram,0x027c13cc) */
/* WARNING: Removing unreachable block (ram,0x027c13d0) */
/* WARNING: Removing unreachable block (ram,0x027c161c) */
/* WARNING: Removing unreachable block (ram,0x027c13dc) */
/* WARNING: Removing unreachable block (ram,0x027c13f0) */
/* WARNING: Removing unreachable block (ram,0x027c13fc) */
/* WARNING: Removing unreachable block (ram,0x027c1408) */
/* WARNING: Removing unreachable block (ram,0x027c1410) */
/* WARNING: Removing unreachable block (ram,0x027c1438) */
/* WARNING: Removing unreachable block (ram,0x027c141c) */
/* WARNING: Removing unreachable block (ram,0x027c1428) */
/* WARNING: Removing unreachable block (ram,0x027c1444) */
/* WARNING: Removing unreachable block (ram,0x027c1628) */
/* WARNING: Removing unreachable block (ram,0x027c1458) */
/* WARNING: Removing unreachable block (ram,0x027c1460) */
/* WARNING: Removing unreachable block (ram,0x027c1470) */
/* WARNING: Removing unreachable block (ram,0x027c1478) */
/* WARNING: Removing unreachable block (ram,0x027c14a0) */
/* WARNING: Removing unreachable block (ram,0x027c1484) */
/* WARNING: Removing unreachable block (ram,0x027c1490) */
/* WARNING: Removing unreachable block (ram,0x027c14ac) */
/* WARNING: Removing unreachable block (ram,0x027c1584) */
/* WARNING: Removing unreachable block (ram,0x027c158c) */
/* WARNING: Removing unreachable block (ram,0x027c15a4) */
/* WARNING: Removing unreachable block (ram,0x027c15ac) */
/* WARNING: Removing unreachable block (ram,0x027c15d4) */
/* WARNING: Removing unreachable block (ram,0x027c15b8) */
/* WARNING: Removing unreachable block (ram,0x027c15c4) */
/* WARNING: Removing unreachable block (ram,0x027c15e0) */
/* WARNING: Removing unreachable block (ram,0x027c15ec) */
/* WARNING: Removing unreachable block (ram,0x027c14bc) */
/* WARNING: Removing unreachable block (ram,0x027c14d0) */
/* WARNING: Removing unreachable block (ram,0x027c14dc) */
/* WARNING: Removing unreachable block (ram,0x027c14e8) */
/* WARNING: Removing unreachable block (ram,0x027c14f0) */
/* WARNING: Removing unreachable block (ram,0x027c1518) */
/* WARNING: Removing unreachable block (ram,0x027c14fc) */
/* WARNING: Removing unreachable block (ram,0x027c1508) */
/* WARNING: Removing unreachable block (ram,0x027c1524) */
/* WARNING: Removing unreachable block (ram,0x027c1620) */
/* WARNING: Removing unreachable block (ram,0x027c1570) */
/* WARNING: Removing unreachable block (ram,0x027c1638) */

undefined8
System_ValueTuple<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericStructType>__Equals
          (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long in_x9;
  ulong uVar8;
  long in_x10;
  int *piVar9;
  long unaff_x19;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  piVar9 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar9 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_027c1164;
    }
    in_x9 = in_x9 + -1;
    piVar9 = piVar9 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_027c1164:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar5 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_027c11cc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_027c11cc:
    uVar8 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar3 == (long *)0x0) {
        return 1;
      }
      lVar5 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 == 0) goto LAB_027c1364;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd0);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          lVar5 = lVar6 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_027c1244;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar5 = FUN_01ecb238(plVar3,lVar5,0);
LAB_027c1244:
    lVar5 = *(long *)(lVar5 + 8);
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar3,0,&stack0x00000020);
    in_stack_00000010 = in_stack_00000020;
    in_stack_00000018 = in_stack_00000028;
    puVar2 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    (*(code *)puVar2[2])(*puVar2,puVar2,&stack0x00000010,0,&stack0x00000020);
    lVar5 = in_stack_00000020;
    if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (0 < (int)*(ulong *)(in_stack_00000020 + 0x18)) {
      uVar8 = 0;
      uVar7 = *(ulong *)(in_stack_00000020 + 0x18) & 0xffffffff;
      lVar6 = in_stack_00000020 + 0x20;
      do {
        if (uVar7 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar4 = (long *)FUN_01ec9a08(lVar6,0);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60))();
          FUN_0354b54c();
        }
        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar8 = uVar8 + 1;
        lVar6 = lVar6 + 8;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_027c1380;
    }
  }
LAB_027c1364:
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar3,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_027c1380:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return 1;
}


