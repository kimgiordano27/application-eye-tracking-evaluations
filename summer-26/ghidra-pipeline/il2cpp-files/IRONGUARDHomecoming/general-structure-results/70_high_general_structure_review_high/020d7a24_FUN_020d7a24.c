/*
FUNCTION_NAME: FUN_020d7a24
ENTRY_POINT: 020d7a24
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_6;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_020d7a24(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auStack_58 [20];
  float local_44;
  
  if ((DAT_0482fa18 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray2D>__ctor__)
    ;
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Rect>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<RectOffset>__ctor__
                      );
    DAT_0482fa18 = 1;
  }
  FUN_037d8f34(param_1,0);
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar3 = FUN_0233642c(*(long *)(param_1 + 0x50),
                         *(undefined8 *)
                          Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray2D>__ctor__
                        );
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar1);
    }
    uVar4 = FUN_04073094(lVar3,0,0);
    fVar7 = 12.0;
    if ((uVar4 & 1) != 0) {
      if (lVar3 == 0) goto LAB_020d7c0c;
      FUN_040c1d04(auStack_58,lVar3,0);
      fVar7 = (local_44 + local_44) * 0.5 + 3.0;
    }
    *(float *)(param_1 + 0xe4) = fVar7;
    puVar2 = Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<RectOffset>__ctor__;
    if (*(char *)(param_1 + 0x28) != '\0') {
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0403ed64(*(undefined8 *)puVar2,0);
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
    puVar2 = Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Rect>__ctor__;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar3 = FUN_023aa684(*(undefined8 *)puVar2);
    if (lVar3 != 0) {
      if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
        uVar4 = 0;
        uVar5 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
        do {
          if (uVar5 <= uVar4) {
LAB_020d7c08:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          uVar6 = *(undefined8 *)(lVar3 + 0x20 + uVar4 * 8);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar5 = FUN_04073094(uVar6,param_1,0);
          if ((uVar5 & 1) != 0) {
            if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_020d7c08;
            *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(lVar3 + 0x20 + uVar4 * 8);
            thunk_FUN_01f51358((undefined8 *)(param_1 + 0xf0));
          }
          uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x18));
      }
      return;
    }
  }
LAB_020d7c0c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


