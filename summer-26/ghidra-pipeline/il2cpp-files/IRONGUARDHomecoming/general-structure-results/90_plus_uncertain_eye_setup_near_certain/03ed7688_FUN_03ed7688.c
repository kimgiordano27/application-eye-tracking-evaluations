/*
FUNCTION_NAME: FUN_03ed7688
ENTRY_POINT: 03ed7688
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03ed7898) */

undefined4 FUN_03ed7688(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 uVar11;
  
  if ((DAT_0483ad90 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_0457c878);
    DAT_0483ad90 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar4 = (long *)FUN_03ed4570(param_1);
  puVar2 = PTR_DAT_0457c878;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    do {
      iVar3 = FUN_03ed2808(plVar4);
      if (iVar3 < 2) {
        uVar5 = FUN_03ecf3dc(plVar4);
        plVar6 = (long *)thunk_FUN_01f116d0(uVar5,*(undefined8 *)puVar2);
        if (plVar6 == (long *)0x0) goto LAB_03ed7804;
        lVar8 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 == 0) goto LAB_03ed77d0;
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_03ed77b8;
      }
      uVar5 = FUN_03ecf440(plVar4);
      FUN_03ed34d0(plVar4);
      plVar6 = (long *)thunk_FUN_01f116d0(uVar5,*(undefined8 *)puVar2);
    } while (plVar6 == (long *)0x0);
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto Unity_VisualScripting_NullCheck__set_enter;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,2);
Unity_VisualScripting_NullCheck__set_enter:
    uVar9 = (*(code *)*puVar7)(plVar6,plVar4,puVar7[1]);
  } while ((uVar9 & 1) != 0);
  goto LAB_03ed7814;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03ed77b8:
    if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
      puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
      goto LAB_03ed77f0;
    }
  }
LAB_03ed77d0:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,2);
LAB_03ed77f0:
  uVar9 = (*(code *)*puVar7)(plVar6,plVar4,puVar7[1]);
  if ((uVar9 & 1) != 0) {
LAB_03ed7804:
    uVar11 = 1;
    goto joined_r0x03ed780c;
  }
LAB_03ed7814:
  uVar11 = 0;
joined_r0x03ed780c:
  if (plVar4 != (long *)0x0) {
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03ed786c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_03ed786c:
    (*(code *)*puVar7)(plVar4,puVar7[1]);
  }
  return uVar11;
}


