/*
FUNCTION_NAME: FUN_038a0d04
ENTRY_POINT: 038a0d04
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x038a109c) */

void FUN_038a0d04(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                 undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar1 = StringLiteral_2320;
  if ((DAT_04837f0a & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_2321);
    thunk_FUN_01efb3a4(StringLiteral_2322);
    thunk_FUN_01efb3a4(StringLiteral_2323);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_2324);
    thunk_FUN_01efb3a4(StringLiteral_2325);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_2320);
    thunk_FUN_01efb3a4(StringLiteral_2326);
    thunk_FUN_01efb3a4(StringLiteral_2327);
    DAT_04837f0a = 1;
  }
  if ((0 < **(int **)(*(long *)puVar1 + 0xb8)) &&
     (lVar3 = FUN_022c6904(param_5,*(undefined8 *)StringLiteral_2321), puVar1 = StringLiteral_2327,
     lVar3 != 0)) {
    lVar4 = *(long *)StringLiteral_2327;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar4 = *(long *)puVar1;
    }
    lVar9 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar9 == 0) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar4 = *(long *)puVar1;
      }
      uVar10 = **(undefined8 **)(lVar4 + 0xb8);
      lVar9 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_2323);
      FUN_02e6c0a0(lVar9,uVar10,*(undefined8 *)StringLiteral_2326,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar5 = lVar9;
      thunk_FUN_01f51358(plVar5,lVar9);
    }
    plVar5 = (long *)FUN_0230b6f4(lVar3,lVar9,*(undefined8 *)StringLiteral_2322);
    if (plVar5 != (long *)0x0) {
      lVar3 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_2324) {
            puVar6 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_038a0eec;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)StringLiteral_2324,0);
LAB_038a0eec:
      plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      puVar2 = StringLiteral_2325;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar3 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_038a0f5c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_038a0f5c:
        uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar7 & 1) == 0) {
          if (plVar5 == (long *)0x0) goto LAB_038a1050;
          lVar3 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar7 == 0) goto LAB_038a1024;
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_038a100c;
        }
        lVar3 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_038a0fb8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_038a0fb8:
        lVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        param_1 = (ulong)(uint)((float)param_1 * *(float *)(lVar3 + 0x20));
        param_2 = (ulong)(uint)((float)param_2 * *(float *)(lVar3 + 0x24));
        param_3 = (ulong)(uint)((float)param_3 * *(float *)(lVar3 + 0x28));
        param_4 = (ulong)(uint)((float)param_4 * *(float *)(lVar3 + 0x2c));
      } while( true );
    }
    goto System_Linq_Expressions_Interpreter_EnterFinallyInstruction__Create;
  }
  goto LAB_038a1050;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_038a100c:
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_038a1040;
    }
  }
LAB_038a1024:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_038a1040:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_038a1050:
  lVar3 = FUN_038ab008(param_5);
  if (lVar3 != 0) {
    thunk_FUN_0404b1d4(param_1,param_2,param_3,param_4,lVar3,param_6,0);
    return;
  }
System_Linq_Expressions_Interpreter_EnterFinallyInstruction__Create:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


