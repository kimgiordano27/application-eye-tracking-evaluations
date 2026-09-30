/*
FUNCTION_NAME: FUN_03b29330
ENTRY_POINT: 03b29330
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03b29660) */
/* WARNING: Removing unreachable block (ram,0x03b29724) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_03b29330(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined1 auStack_158 [88];
  long local_100 [11];
  long local_a8 [13];
  
  if ((DAT_048393c1 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_11745);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_11738);
    thunk_FUN_01efb3a4(StringLiteral_11739);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_11746);
    thunk_FUN_01efb3a4(StringLiteral_11747);
    thunk_FUN_01efb3a4(StringLiteral_11748);
    thunk_FUN_01efb3a4(StringLiteral_11749);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    DAT_048393c1 = 1;
  }
  puVar2 = StringLiteral_11747;
  puVar1 = StringLiteral_11746;
  local_a8[0xb] = 0;
  local_a8[8] = 0;
  local_a8[7] = 0;
  local_a8[10] = 0;
  local_a8[9] = 0;
  local_a8[4] = 0;
  local_a8[3] = 0;
  local_a8[6] = 0;
  local_a8[5] = 0;
  local_a8[2] = 0;
  local_a8[1] = 0;
  local_a8[0] = 0;
  if (param_1 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(StringLiteral_11735);
    FUN_034efd20(uVar7,uVar8,0);
    uVar8 = thunk_FUN_01efb3a4(StringLiteral_11750);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar7,uVar8);
  }
  lVar4 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_11749);
  FUN_031dffe8(lVar4,*(undefined8 *)puVar2);
  lVar9 = *param_1;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_03b2946c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238(param_1,*(long *)puVar1,0);
LAB_03b2946c:
  plVar6 = (long *)(*(code *)*puVar5)(param_1,puVar5[1]);
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_11738) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03b294d4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)StringLiteral_11738,0);
LAB_03b294d4:
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    puVar3 = StringLiteral_11739;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03b2954c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_03b2954c:
      uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar10 & 1) == 0) goto LAB_03b295f0;
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03b295a8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_03b295a8:
      (*(code *)*puVar5)(local_100,plVar6,puVar5[1]);
      memcpy(local_a8 + 1,local_100,0x58);
      memcpy(auStack_158,local_a8 + 1,0x58);
      FUN_03b297dc(param_1,auStack_158,lVar4,0);
    } while( true );
  }
  goto LAB_03b296d4;
LAB_03b295f0:
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03b29648;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_03b29648:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
  }
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) == 0) {
      uVar7 = **(undefined8 **)
                (*(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ + 0xb8)
      ;
    }
    else {
      local_a8[0] = lVar4;
      thunk_FUN_01f51358(local_a8,lVar4);
      local_100[0] = local_a8[0];
      uVar7 = thunk_FUN_01f113fc(*(undefined8 *)StringLiteral_11745,local_100);
      uVar7 = FUN_040b8fb0(uVar7,0);
    }
    return uVar7;
  }
LAB_03b296d4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


