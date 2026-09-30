/*
FUNCTION_NAME: FUN_035a5504
ENTRY_POINT: 035a5504
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x035a57b8) */

long * FUN_035a5504(undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_04833534 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Meta_WitAi_Events_SpeechEvents_SetEvent<VoiceServiceRequest>__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vsraq_n_u32__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04833534 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  if (param_2 == 0) {
    uVar7 = 0;
  }
  else {
    plVar5 = (long *)FUN_035c2660(param_2,0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsraq_n_u32__
           ) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto FUN_035a55e8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsraq_n_u32__,0);
FUN_035a55e8:
    uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  FUN_033f2938(&local_50,uVar7,0);
  uVar7 = FUN_033f2b38(&local_50,0);
  uVar7 = FUN_01f0ca98(param_1,uVar7,param_3,param_4);
  FUN_033f2abc(&local_58,uVar7,0);
  uVar4 = FUN_033f2af8(&local_58,0);
  plVar5 = (long *)FUN_01f08890(*(undefined8 *)
                                 Method_Meta_WitAi_Events_SpeechEvents_SetEvent<VoiceServiceRequest>__
                                ,(ulong)uVar4);
  puVar3 = Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__;
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (0 < (int)uVar4) {
    uVar11 = 0;
    lVar10 = 0x20;
    do {
      uVar7 = thunk_FUN_033f27c0(&local_58,uVar11 & 0xffffffff,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar8 = (long *)FUN_03579868(uVar7,0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (plVar8 != (long *)0x0) {
        lVar9 = *(long *)puVar3;
        bVar1 = *(byte *)(lVar9 + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar8);
        }
        lVar9 = thunk_FUN_01f116d0(plVar8,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar9 == 0) {
          uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar7,0);
        }
        lVar9 = *(long *)puVar3;
        bVar1 = *(byte *)(lVar9 + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar8);
        }
      }
      if (*(uint *)(plVar5 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar5[uVar11 + 4] = (long)plVar8;
      thunk_FUN_01f51358((long)plVar5 + lVar10,plVar8);
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 8;
    } while (uVar4 != uVar11);
  }
  FUN_033f2adc(&local_58,0);
  FUN_033f2b80(&local_50,0);
  return plVar5;
}


