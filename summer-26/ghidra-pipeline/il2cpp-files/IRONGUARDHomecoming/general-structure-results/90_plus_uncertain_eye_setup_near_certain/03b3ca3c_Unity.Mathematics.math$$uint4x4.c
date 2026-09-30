/*
FUNCTION_NAME: Unity.Mathematics.math$$uint4x4
ENTRY_POINT: 03b3ca3c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03b3caf4) */

undefined8 Unity_Mathematics_math__uint4x4(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  undefined8 unaff_x19;
  long *unaff_x20;
  long lVar6;
  
  if (param_2 != 1) {
    if (unaff_x20 != (long *)0x0) {
      lVar6 = *unaff_x20;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_03b3cadc;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03b3cadc:
      (*(code *)*puVar1)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14(param_1);
  }
  plVar3 = (long *)__cxa_begin_catch(param_1);
  lVar6 = *plVar3;
  __cxa_end_catch();
  if (unaff_x20 != (long *)0x0) {
    lVar4 = *unaff_x20;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03b3c9d4;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03b3c9d4:
    (*(code *)*puVar1)();
  }
  if (lVar6 == 0) {
    uVar2 = FUN_0340eec4();
    if ((uVar2 & 1) == 0) {
      unaff_x19 = FUN_0340ebc0();
    }
    return unaff_x19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01eed990(lVar6);
}


