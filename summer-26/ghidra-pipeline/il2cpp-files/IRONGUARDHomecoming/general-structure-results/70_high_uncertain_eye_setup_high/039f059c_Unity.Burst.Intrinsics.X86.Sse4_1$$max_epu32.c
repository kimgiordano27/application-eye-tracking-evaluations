/*
FUNCTION_NAME: Unity.Burst.Intrinsics.X86.Sse4_1$$max_epu32
ENTRY_POINT: 039f059c
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


/* WARNING: Removing unreachable block (ram,0x039f06a4) */

undefined8 Unity_Burst_Intrinsics_X86_Sse4_1__max_epu32(void)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  long lVar4;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x20;
  int iVar6;
  long *unaff_x22;
  undefined8 uVar7;
  
code_r0x039f059c:
  puVar2 = (undefined8 *)FUN_01ecb238();
  do {
    (*(code *)*puVar2)();
    uVar3 = thunk_FUN_0340e318();
    if ((uVar3 & 1) != 0) {
      iVar6 = 0x10;
      uVar7 = extraout_x1;
      iVar1 = 0x10;
      if (unaff_x19 == (long *)0x0) goto LAB_039f0658;
LAB_039f05f8:
      iVar6 = iVar1;
      lVar4 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 == 0) goto LAB_039f0630;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x20) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_039f055c;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_039f055c:
    uVar3 = (*(code *)*puVar2)();
    if ((uVar3 & 1) == 0) {
      uVar7 = 0;
      iVar6 = 0x14;
      iVar1 = 0x14;
      if (unaff_x19 != (long *)0x0) goto LAB_039f05f8;
      goto LAB_039f0658;
    }
    lVar4 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 == 0) goto code_r0x039f059c;
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    while (*(long *)(piVar5 + -2) != *unaff_x22) {
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 4;
      if (uVar3 == 0) goto code_r0x039f059c;
    }
    puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar5 = piVar5 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_039f064c;
    }
  }
LAB_039f0630:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_039f064c:
  (*(code *)*puVar2)();
LAB_039f0658:
  if ((iVar6 == 0x14) || (iVar6 == 0)) {
    uVar7 = *(undefined8 *)Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
  }
  return uVar7;
}


