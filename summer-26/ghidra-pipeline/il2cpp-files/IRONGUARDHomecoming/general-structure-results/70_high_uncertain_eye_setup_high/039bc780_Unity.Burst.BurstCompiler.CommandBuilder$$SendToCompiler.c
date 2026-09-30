/*
FUNCTION_NAME: Unity.Burst.BurstCompiler.CommandBuilder$$SendToCompiler
ENTRY_POINT: 039bc780
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x039bc8a4) */

undefined8 Unity_Burst_BurstCompiler_CommandBuilder__SendToCompiler(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  
code_r0x039bc780:
  puVar1 = (undefined8 *)FUN_01ecb238();
  do {
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_039bc87c;
      lVar3 = *unaff_x21;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 == 0) goto LAB_039bc854;
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto Unity_Burst_BurstCompiler__DummyMethod;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
Unity_Burst_BurstCompiler__DummyMethod:
    lVar3 = (*(code *)*puVar1)();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_039bc964();
    lVar3 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 == 0) goto code_r0x039bc780;
    piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar4 + -2) != *unaff_x22) {
      uVar2 = uVar2 - 1;
      piVar4 = piVar4 + 4;
      if (uVar2 == 0) goto code_r0x039bc780;
    }
    puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar4 = piVar4 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar4 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_039bc870;
    }
  }
LAB_039bc854:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_039bc870:
  (*(code *)*puVar1)();
LAB_039bc87c:
  FUN_039bc964();
  return 1;
}


