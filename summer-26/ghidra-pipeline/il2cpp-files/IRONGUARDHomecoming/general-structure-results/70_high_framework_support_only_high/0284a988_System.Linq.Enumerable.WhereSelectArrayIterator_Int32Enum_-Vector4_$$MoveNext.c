/*
FUNCTION_NAME: System.Linq.Enumerable.WhereSelectArrayIterator<Int32Enum,-Vector4>$$MoveNext
ENTRY_POINT: 0284a988
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0284ab10) */

void System_Linq_Enumerable_WhereSelectArrayIterator<Int32Enum,_Vector4>__MoveNext(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  lVar7 = unaff_x20[0x7e];
  uVar13 = *(undefined4 *)((long)unaff_x20 + 0x3f4);
  lVar1 = unaff_x20[0x7f];
  uVar12 = *(undefined4 *)((long)unaff_x20 + 0x3fc);
  (**(code **)(param_1 + 0x838))();
  lVar2 = unaff_x20[0x7e];
  uVar10 = *(undefined4 *)((long)unaff_x20 + 0x3f4);
  lVar3 = unaff_x20[0x7f];
  uVar11 = *(undefined4 *)((long)unaff_x20 + 0x3fc);
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar5 = (long *)FUN_029e60f0((int)lVar7,uVar13,(int)lVar1,uVar12,(int)lVar2,uVar10,(int)lVar3,
                                uVar11,*(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50));
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_041d4560(plVar5);
  (**(code **)(*unaff_x20 + 0x198))();
  lVar7 = *plVar5;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0284aadc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0284aadc:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


