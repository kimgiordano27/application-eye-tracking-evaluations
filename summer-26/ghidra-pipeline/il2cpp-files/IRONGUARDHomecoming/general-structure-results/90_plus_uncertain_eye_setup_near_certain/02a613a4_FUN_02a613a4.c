/*
FUNCTION_NAME: FUN_02a613a4
ENTRY_POINT: 02a613a4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02a61630) */

long FUN_02a613a4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_04830f30 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830f30 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  FUN_02a61f74(param_1,&uStack_48,(long)&local_58 + 4,&local_50,&local_58,
               *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x50));
  uVar11 = local_58;
  uVar3 = local_58._4_4_;
  uVar4 = FUN_02a61a00(uStack_48,local_58._4_4_,local_50,local_58 & 0xffffffff,
                       *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x60));
  lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x70);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  lVar8 = FUN_01f08890(lVar8,uVar4);
  plVar5 = (long *)FUN_02a62220(param_1,uStack_48,uVar3,local_50,uVar11 & 0xffffffff,
                                *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x78))
  ;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar13 = 0;
  do {
    lVar9 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02a614f4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_02a614f4:
    uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return lVar8;
      }
      lVar9 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 == 0) goto LAB_02a615dc;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02a6156c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar9,0);
LAB_02a6156c:
    uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(lVar8 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar8 + (long)(int)uVar13 * 8 + 0x20) = uVar7;
    uVar13 = uVar13 + 1;
    thunk_FUN_01f51358();
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_02a615f8;
    }
  }
LAB_02a615dc:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_02a615f8:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return lVar8;
}


