/*
FUNCTION_NAME: FUN_039b559c
ENTRY_POINT: 039b559c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x039b5818) */

undefined8 FUN_039b559c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long extraout_x1;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_04838815 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_5339);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_5340);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_5029);
    thunk_FUN_01efb3a4(StringLiteral_5341);
    thunk_FUN_01efb3a4(StringLiteral_5342);
    DAT_04838815 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar4 = FUN_030f4630(*(long *)(param_1 + 0x20),*(undefined8 *)StringLiteral_5342);
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (*(long *)(param_1 + 0x28) != 0) {
      plVar5 = (long *)FUN_02eff0c0(*(long *)(param_1 + 0x28),*(undefined8 *)StringLiteral_5339);
      puVar3 = StringLiteral_5340;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar8 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_039b56c4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_039b56c4:
        uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar5 == (long *)0x0) goto LAB_039b579c;
          lVar8 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 == 0) goto LAB_039b5774;
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_039b575c;
        }
        lVar8 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_039b5720;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_039b5720:
        (*(code *)*puVar6)(plVar5,puVar6[1]);
        if (extraout_x1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_039b24b8(extraout_x1);
      } while( true );
    }
  }
  goto System_IO_Compression_DeflateStream__SetLength;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_039b575c:
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_039b5790;
    }
  }
LAB_039b5774:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_039b5790:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_039b579c:
  puVar1 = StringLiteral_5029;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    FUN_039aae74(&local_68);
    uStack_88 = uStack_60;
    local_90 = local_68;
    uStack_78 = uStack_50;
    uStack_80 = local_58;
    local_70 = local_48;
    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    FUN_039b16a8(uVar7,param_2,uVar11,&local_90,uVar4);
    return uVar7;
  }
System_IO_Compression_DeflateStream__SetLength:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


