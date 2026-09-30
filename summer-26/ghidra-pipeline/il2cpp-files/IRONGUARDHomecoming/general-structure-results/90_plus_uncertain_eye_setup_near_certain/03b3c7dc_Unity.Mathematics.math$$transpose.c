/*
FUNCTION_NAME: Unity.Mathematics.math$$transpose
ENTRY_POINT: 03b3c7dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03b3c9ec) */
/* WARNING: Removing unreachable block (ram,0x03b3ca30) */

undefined8 Unity_Mathematics_math__transpose(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 unaff_x19;
  undefined8 uVar10;
  undefined8 unaff_x23;
  undefined8 in_stack_00000008;
  
  plVar4 = (long *)(*(code *)*param_1)();
  puVar3 = StringLiteral_12013;
  puVar2 = StringLiteral_3579;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  do {
    uVar10 = unaff_x23;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03b3c8c0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_03b3c8c0:
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_03b3c9e0;
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_03b3c9b8;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03b3c91c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar3,0);
LAB_03b3c91c:
    (*(code *)*puVar5)(&stack0x00000008,plVar4,puVar5[1]);
    uVar6 = FUN_03b1c12c(in_stack_00000008,0);
    uVar8 = FUN_0340eec4(uVar6,0);
    unaff_x23 = uVar10;
    if (((uVar8 & 1) == 0) && (uVar8 = FUN_0340eec4(uVar10,0), unaff_x23 = uVar6, (uVar8 & 1) == 0))
    {
      unaff_x23 = FUN_0340ebc0(uVar10,*(undefined8 *)puVar2,uVar6,0);
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03b3c9d4;
    }
  }
LAB_03b3c9b8:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03b3c9d4:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_03b3c9e0:
  uVar8 = FUN_0340eec4(uVar10,0);
  if ((uVar8 & 1) == 0) {
    unaff_x19 = FUN_0340ebc0(uVar10,*(undefined8 *)Method_System_DateTimeParse_ParseExact__);
  }
  return unaff_x19;
}


