/*
FUNCTION_NAME: FUN_03993a54
ENTRY_POINT: 03993a54
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03993cd8) */

long * FUN_03993a54(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_048385f1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_4863);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_4864);
    thunk_FUN_01efb3a4(StringLiteral_4865);
    thunk_FUN_01efb3a4(StringLiteral_4866);
    DAT_048385f1 = 1;
  }
  if (((param_1[2] != 0) && (FUN_03419060(param_1[2],0x7b,0), param_2 != (long *)0x0)) &&
     (lVar5 = (**(code **)(*param_2 + 0x208))(param_2,*(undefined8 *)(*param_2 + 0x210)),
     puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__, lVar5 != 0))
  {
    plVar6 = (long *)FUN_0265d924(lVar5,*(undefined8 *)StringLiteral_4864);
    puVar4 = StringLiteral_4865;
    puVar3 = StringLiteral_4863;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03993b80;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_03993b80:
      uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_03993c8c;
        lVar5 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 == 0) goto LAB_03993c64;
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_03993c4c;
      }
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03993bdc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_03993bdc:
      uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03418748(param_1[2],*(undefined8 *)puVar4,0);
      (**(code **)(*param_1 + 0x178))(param_1,uVar8,*(undefined8 *)(*param_1 + 0x180));
      if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03419060(param_1[2],0x3b,0);
    } while( true );
  }
  goto LAB_03993cd0;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03993c4c:
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03993c80;
    }
  }
LAB_03993c64:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_03993c80:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_03993c8c:
  if (param_1[2] != 0) {
    FUN_03418748(param_1[2],*(undefined8 *)StringLiteral_4866,0);
    return param_2;
  }
LAB_03993cd0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


